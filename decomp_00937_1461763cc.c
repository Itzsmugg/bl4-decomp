// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1461763cc FUN_1461763cc body=37 status=ok
// SIG undefined FUN_1461763cc(void)

void FUN_1461763cc(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_111();
                    /* WARNING: Could not recover jumptable at 0x0001461763ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc0))(param_1,uVar1,*(code **)(*param_1 + 0xc0));
  return;
}



// FUNCTION 1461763f2 FUN_1461763f2 body=660 status=ok
// SIG undefined FUN_1461763f2(void)

void FUN_1461763f2(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_1b8 [32];
  undefined2 *local_198;
  undefined8 *local_190;
  undefined4 local_188;
  undefined2 local_180 [2];
  undefined4 local_17c;
  longlong local_178 [2];
  longlong local_168 [12];
  undefined1 local_108 [64];
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar6 = param_1 + 3;
  cVar1 = FUN_144729dda(plVar6);
  if (cVar1 == '\0') {
    if (param_1[9] == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1[9] + 0x30);
    }
    plVar3 = &DAT_14c846480;
    plVar7 = local_168;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar7 = *plVar3;
      plVar3 = plVar3 + 1;
      plVar7 = plVar7 + 1;
    }
    FUN_1411371f6(local_108);
    (**(code **)(*param_1 + 0x18))(param_1,local_178);
    if ((lVar8 != 0) && (local_178[0] != 0)) {
      uVar2 = FUN_141037e38(lVar8,local_178[0],local_168,local_108);
      FUN_14485c47a(plVar6,uVar2);
      (**(code **)(*param_1 + 0x38))(param_1);
      cVar1 = FUN_144729dda(plVar6);
      if (cVar1 != '\0') {
        plVar3 = (longlong *)FUN_14479d2ce(plVar6);
        uVar2 = FUN_14479d2ce(param_1 + 2);
        (**(code **)(*plVar3 + 0x638))(plVar3,param_1,param_1 + 4,uVar2);
        lVar5 = FUN_14479d2ce(plVar6);
        if ((*(byte *)(lVar5 + 100) & 1) == 0) {
          plVar6 = local_168;
          plVar3 = param_1 + 0xc;
          for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
            *plVar3 = *plVar6;
            plVar6 = plVar6 + 1;
            plVar3 = plVar3 + 1;
          }
          if (*(longlong *)(lVar8 + 0x1f0) == 0) {
            puVar4 = (undefined8 *)(lVar8 + 0x458);
          }
          else {
            puVar4 = (undefined8 *)(*(longlong *)(lVar8 + 0x1f0) + 0xf0);
          }
          uVar2 = *puVar4;
          local_190 = (undefined8 *)0x0;
          local_188 = 0;
          FUN_1446efa72(&local_190,0,3,0x10);
          local_188 = 3;
          *local_190 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 1;
          lVar8 = DAT_14c758608 + 1;
          if (lVar5 == 0) {
            LOCK();
            UNLOCK();
            lVar5 = DAT_14c758608 + 2;
            lVar8 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar8;
          local_190[2] = lVar5;
          *local_190 = &PTR_FUN_14b4330f0;
          local_190[3] = param_1;
          local_190[4] = FUN_145abbb5a;
          local_88 = 0;
          local_80 = 0;
          FUN_14487d8d8(&local_88,&local_190);
          local_48 = 1;
          local_198 = local_180;
          local_180[0] = 1;
          local_17c = 0xbf800000;
          FUN_1406f4044(uVar2,param_1 + 0x18,&local_88,0x3f800000);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
          FUN_1449db362(&local_190);
        }
      }
    }
    if (local_c8 != 0) {
      if (local_b8 == (longlong *)0x0) {
        local_b8 = local_a8;
      }
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617668a FUN_14617668a body=32 status=ok
// SIG undefined FUN_14617668a(void)

void FUN_14617668a(void)

{
  FUN_1461766aa(&DAT_14cbfea60);
  FUN_1461766aa(&DAT_14cbfea68);
  return;
}



// FUNCTION 1461766aa FUN_1461766aa body=1067 status=ok
// SIG undefined FUN_1461766aa(void)

void FUN_1461766aa(void)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong *plVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_388 [32];
  undefined8 *local_368;
  undefined8 *local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  FUN_140721fbe(&DAT_14cbfe7e0);
  iVar10 = DAT_14cbfe7e8;
  lVar2 = DAT_14cbfe7e0;
  lVar14 = (longlong)DAT_14cbfe7e8;
  if (1 < lVar14) {
    memset(local_338,0,0x2f0);
    local_348 = lVar2;
    local_340 = lVar2 + lVar14 * 8 + -8;
    fVar20 = logf((float)iVar10);
    local_338[0] = (int)(longlong)(fVar20 + fVar20);
    plVar18 = &local_348;
    do {
      puVar8 = (undefined8 *)*plVar18;
      puVar11 = (undefined8 *)plVar18[1];
      iVar10 = (int)plVar18[2];
      iVar9 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar8) >> 3);
      uVar17 = iVar9 + 1;
      puVar15 = puVar8;
      puVar16 = puVar11;
      if (iVar10 != 0) {
LAB_146176761:
        if (8 < (int)uVar17) {
          uVar1 = puVar15[uVar17 >> 1];
          puVar15[uVar17 >> 1] = *puVar15;
          *puVar15 = uVar1;
          local_360 = puVar16 + 1;
          local_368 = puVar15;
          do {
            puVar4 = local_368 + 1;
            puVar5 = puVar4;
            do {
              local_368 = puVar5;
              local_350 = puVar4;
              if (puVar16 < puVar5) break;
              cVar3 = FUN_1416028b6(puVar15,puVar5);
              puVar5 = puVar5 + 1;
              puVar4 = local_350 + 1;
            } while (cVar3 == '\0');
            puVar4 = local_360 + -2;
            puVar5 = local_360;
            do {
              puVar5 = puVar5 + -1;
              local_360 = puVar5;
              local_358 = puVar4;
              if (puVar5 <= puVar15) break;
              cVar3 = FUN_1416028b6(puVar5,puVar15);
              puVar4 = local_358 + -1;
            } while (cVar3 == '\0');
            if (local_360 < local_368) goto LAB_146176a23;
            uVar1 = *local_368;
            *local_368 = *local_360;
            *local_360 = uVar1;
          } while( true );
        }
        for (; puVar11 = puVar15, puVar8 = puVar15, puVar15 < puVar16; puVar16 = puVar16 + -1) {
          while (puVar5 = puVar11, puVar8 = puVar8 + 1, puVar8 <= puVar16) {
            cVar3 = FUN_1416028b6(puVar5,puVar8);
            puVar11 = puVar8;
            if (cVar3 == '\0') {
              puVar11 = puVar5;
            }
          }
          uVar1 = *puVar5;
          *puVar5 = *puVar16;
          *puVar16 = uVar1;
        }
        goto LAB_1461767be;
      }
LAB_1461767fe:
      local_368 = puVar15;
      if (uVar17 != 0) {
        iVar10 = (iVar9 - (iVar9 + -1 >> 0x1f)) + -1 >> 1;
        iVar9 = iVar10;
joined_r0x00014617681b:
        do {
          iVar7 = iVar10 * 2 + 1;
          if (iVar7 < (int)uVar17) {
            iVar6 = iVar10 * 2 + 2;
            if ((iVar6 < (int)uVar17) &&
               (cVar3 = FUN_1416028b6(local_368 + iVar6,local_368 + iVar7), cVar3 == '\0')) {
              iVar7 = iVar6;
            }
            puVar16 = local_368 + iVar10;
            puVar8 = local_368 + iVar7;
            cVar3 = FUN_1416028b6(puVar16,puVar8);
            if (cVar3 != '\0') {
              uVar1 = *puVar16;
              *puVar16 = *puVar8;
              *puVar8 = uVar1;
              iVar10 = iVar7;
              goto joined_r0x00014617681b;
            }
          }
          bVar19 = iVar9 != 0;
          iVar10 = iVar9 + -1;
          iVar9 = iVar10;
        } while (bVar19);
        if (1 < (int)uVar17) {
          uVar12 = (ulonglong)uVar17;
          uVar1 = *local_368;
          *local_368 = local_368[uVar12 - 1];
          local_368[uVar12 - 1] = uVar1;
          if (uVar17 != 2) {
            do {
              uVar13 = uVar12 - 1;
              iVar10 = 0;
              iVar7 = 1;
              iVar9 = 0;
              do {
                iVar10 = iVar10 + 2;
                iVar6 = iVar7;
                if (((longlong)iVar10 < (longlong)uVar13) &&
                   (cVar3 = FUN_1416028b6(local_368 + iVar10,local_368 + iVar7), cVar3 == '\0')) {
                  iVar6 = iVar10;
                }
                puVar16 = local_368 + iVar9;
                puVar8 = local_368 + iVar6;
                cVar3 = FUN_1416028b6(puVar16,puVar8);
                if (cVar3 == '\0') break;
                uVar1 = *puVar16;
                *puVar16 = *puVar8;
                *puVar8 = uVar1;
                iVar10 = iVar6 * 2;
                iVar7 = iVar6 * 2 + 1;
                iVar9 = iVar6;
              } while ((longlong)iVar7 < (longlong)uVar13);
              uVar1 = *local_368;
              *local_368 = local_368[uVar12 - 2];
              local_368[uVar12 - 2] = uVar1;
              uVar12 = uVar13;
            } while (2 < uVar13);
          }
        }
      }
LAB_1461767be:
      plVar18 = plVar18 + -3;
    } while (&local_348 <= plVar18);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146176a23:
  uVar1 = *puVar15;
  *puVar15 = *local_360;
  *local_360 = uVar1;
  iVar10 = iVar10 + -1;
  puVar5 = local_360 + -1;
  if ((longlong)local_358 - (longlong)puVar8 < (longlong)puVar11 - (longlong)local_350) {
    if (local_368 < puVar16) {
      *plVar18 = (longlong)local_368;
      plVar18[1] = (longlong)puVar16;
      *(int *)(plVar18 + 2) = iVar10;
      plVar18 = plVar18 + 3;
    }
    puVar16 = local_358;
    puVar8 = puVar15;
    if (local_360 <= puVar15 + 1) goto LAB_1461767be;
  }
  else {
    if (puVar15 + 1 < local_360) {
      *plVar18 = (longlong)puVar15;
      plVar18[1] = (longlong)puVar5;
      *(int *)(plVar18 + 2) = iVar10;
      plVar18 = plVar18 + 3;
    }
    puVar5 = puVar16;
    puVar15 = local_368;
    puVar8 = local_350;
    if (puVar16 <= local_368) goto LAB_1461767be;
  }
  local_350 = puVar8;
  local_358 = puVar16;
  local_368 = puVar15;
  iVar9 = (int)((ulonglong)((longlong)local_358 - (longlong)local_350) >> 3);
  uVar17 = iVar9 + 1;
  puVar8 = local_350;
  puVar11 = local_358;
  puVar15 = local_368;
  puVar16 = puVar5;
  if (iVar10 == 0) goto LAB_1461767fe;
  goto LAB_146176761;
}



// FUNCTION 146176ad6 FUN_146176ad6 body=932 status=ok
// SIG undefined FUN_146176ad6(void)

void FUN_146176ad6(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar5 = (longlong *)FUN_140f7f1be();
  if (plVar5 != (longlong *)0x0) {
    plVar12 = *(longlong **)(param_1 + 0xf0);
    if (plVar12 != (longlong *)0x0) {
      iVar4 = (int)plVar12[1];
      do {
        if (iVar4 == 0) goto LAB_146176cbd;
        LOCK();
        iVar2 = (int)plVar12[1];
        bVar14 = iVar4 == iVar2;
        if (bVar14) {
          *(int *)(plVar12 + 1) = iVar4 + 1;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        UNLOCK();
      } while (!bVar14);
      lVar8 = *(longlong *)(param_1 + 0xe8);
      if (lVar8 != 0) {
        uVar3 = (**(code **)(*plVar5 + 0x18))();
        FUN_140ac173c(&local_a8,param_1 + 0x110);
        local_80 = local_a8;
        local_78 = local_a0;
        uStack_74 = (undefined4)local_9c;
        uStack_70 = (undefined4)((ulonglong)local_9c >> 0x20);
        local_6c = local_94;
        local_68 = local_90;
        local_60 = local_88;
        local_5c = uVar3;
        FUN_140d81074(lVar8,&local_58);
        lVar10 = CONCAT44(uStack_54,local_58);
        if ((lVar10 != 0) && ((longlong)*(int *)(lVar10 + 0xe8) != 0)) {
          lVar11 = *(longlong *)(lVar10 + 0xe0);
          lVar10 = (longlong)*(int *)(lVar10 + 0xe8) * 0x30 + lVar11;
          local_c0 = plVar12;
          local_b8 = lVar8;
          local_b0 = param_2;
          do {
            FUN_146176eb4(local_b8,&local_80,lVar11 + 8);
            if ((local_80 != 0) && (iVar4 = *(int *)(local_80 + 0x28), (longlong)iVar4 != 0)) {
              lVar8 = *(longlong *)(local_80 + 0x20);
              lVar13 = 0;
              do {
                plVar5 = *(longlong **)(lVar8 + lVar13);
                if (plVar5 != (longlong *)0x0) {
                  lVar6 = (**(code **)(*plVar5 + 8))(plVar5);
                  lVar7 = FUN_146176e7c();
                  if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
                      (*(longlong *)
                        (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                       lVar7 + 0x30)) && ((int)plVar5[0x2d] != 0)) {
                    plVar5 = (longlong *)CONCAT44(uStack_74,local_78);
                    if (plVar5 != (longlong *)0x0) {
                      LOCK();
                      plVar12 = plVar5 + 1;
                      *(int *)plVar12 = (int)*plVar12 + -1;
                      UNLOCK();
                      if ((int)*plVar12 == 0) {
                        (**(code **)*plVar5)(plVar5);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar5 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar5 + 0x10))(plVar5);
                        }
                      }
                    }
                    if (local_50 != (longlong *)0x0) {
                      LOCK();
                      plVar5 = local_50 + 1;
                      *(int *)plVar5 = (int)*plVar5 + -1;
                      UNLOCK();
                      if ((int)*plVar5 == 0) {
                        (**(code **)*local_50)(local_50);
                        LOCK();
                        piVar1 = (int *)((longlong)local_50 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*local_50 + 0x10))(local_50);
                        }
                      }
                    }
                    plVar12 = local_c0;
                    LOCK();
                    plVar5 = local_c0 + 1;
                    *(int *)plVar5 = (int)*plVar5 + -1;
                    UNLOCK();
                    if ((int)*plVar5 != 0) goto LAB_146176d47;
                    (**(code **)*local_c0)(local_c0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar12 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 != 0) goto LAB_146176d47;
                    lVar8 = *local_c0;
                    plVar5 = local_c0;
                    goto LAB_146176df4;
                  }
                }
                lVar13 = lVar13 + 0x10;
              } while ((longlong)iVar4 * 0x10 != lVar13);
            }
            plVar5 = (longlong *)CONCAT44(uStack_74,local_78);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar12 = plVar5 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
            lVar11 = lVar11 + 0x30;
            plVar12 = local_c0;
            param_2 = local_b0;
          } while (lVar11 != lVar10);
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_50 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
      }
      LOCK();
      plVar5 = plVar12 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
LAB_146176cbd:
    lVar8 = FUN_1461770e8(param_1,param_2);
    if (lVar8 != 0) {
      uVar9 = FUN_140d80fb0(param_1);
      FUN_145d55fd2(&local_80,uVar9);
      lVar10 = local_80;
      if (local_80 != 0) {
        FUN_146176f40(&local_a8,param_1);
        local_c8 = param_1 + 0x18;
        FUN_145d5623a(lVar10,&local_58,lVar8,&local_a8);
        *(undefined4 *)(param_1 + 0x168) = local_58;
        FUN_1449db362(&local_a8);
      }
      plVar5 = (longlong *)CONCAT44(uStack_74,local_78);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar5 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            lVar8 = *plVar5;
LAB_146176df4:
            (**(code **)(lVar8 + 0x10))(plVar5);
          }
        }
      }
    }
  }
LAB_146176d47:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146176e7c FUN_146176e7c body=55 status=ok
// SIG undefined FUN_146176e7c(void)

void FUN_146176e7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c368 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c368 = FUN_140002ddd(FUN_146530eb5,uVar1,L"RegisteredMissionGiverType_Basic");
  }
  return;
}



// FUNCTION 146176eb4 FUN_146176eb4 body=139 status=ok
// SIG undefined FUN_146176eb4(void)

undefined8 * FUN_146176eb4(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_3[2] == 0) {
    uVar4 = *param_3;
  }
  else {
    uVar4 = FUN_144a78877(*param_3,param_3[2]);
  }
  iVar3 = FUN_140d7e634((longlong *)(param_1 + 0x48),uVar4,param_3);
  if (iVar3 != -1) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar1 = lVar2 + (longlong)iVar3 * 0x28;
    if ((lVar1 != 0) && (lVar2 + (longlong)iVar3 * 0x28 != -0x10)) {
      *param_2 = *(undefined8 *)(lVar1 + 0x10);
      lVar1 = *(longlong *)(lVar1 + 0x18);
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



// FUNCTION 146176f40 FUN_146176f40 body=423 status=ok
// SIG undefined FUN_146176f40(void)

longlong * FUN_146176f40(longlong *param_1,longlong param_2)

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
LAB_146177017:
    *puVar3 = &PTR_LAB_14b419c70;
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
    *puVar3 = &PTR_FUN_14b41b440;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_146200336;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_146177017;
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
    *puVar3 = &PTR_LAB_14b419c70;
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
    *puVar3 = &PTR_FUN_14b41b440;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_146200336;
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



// FUNCTION 1461770e8 FUN_1461770e8 body=488 status=ok
// SIG undefined FUN_1461770e8(void)

ulonglong FUN_1461770e8(undefined8 param_1,ulonglong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_1f8 [40];
  ulonglong local_1d0 [5];
  undefined4 local_1a8;
  undefined8 **local_1a0 [3];
  ushort local_188;
  byte local_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined1 local_170 [192];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar2 = FUN_140f7f142();
  local_178 = 0;
  local_174 = 0;
  local_b0 = 0;
  local_a8 = 0x800000000;
  local_98 = 0;
  local_90 = 0;
  uStack_8c = 0x20;
  uStack_88 = 0xffffffff;
  uStack_84 = 0;
  local_70 = 0;
  local_68 = 0;
  if ((longlong)(int)param_2[1] != 0) {
    uVar4 = *param_2;
    lVar5 = (longlong)(int)param_2[1] * 0x78;
    do {
      local_1d0[0] = local_1d0[0] & 0xffffffffffffff00;
      local_1a8 = 0;
      FUN_1456bb102(local_1d0,uVar2);
      FUN_1448729ea(uVar4 + 0x28,local_1a0,local_1d0);
      uVar6 = FUN_144a7ecd0(local_1a0);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_180 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar3 = local_1a0;
        if (0x18 < local_188) {
          pppuVar3 = (undefined8 ***)local_1a0[0];
        }
        (*pcVar1)(pppuVar3);
      }
      if (0x18 < local_188) {
        FUN_1400020a8(local_1a0[0]);
      }
      FUN_144a5ac3a(local_1d0);
      local_1d0[0] = uVar4;
      FUN_146177378(&local_178,uVar6,local_1d0);
      uVar4 = uVar4 + 0x78;
      lVar5 = lVar5 + -0x78;
    } while (lVar5 != 0);
  }
  local_1d0[0] = 0;
  FUN_146177828(&local_178,local_1d0);
  uVar4 = local_1d0[0];
  local_68 = 0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_1461772d2(local_170);
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461772d2 FUN_1461772d2 body=60 status=ok
// SIG undefined FUN_1461772d2(void)

void FUN_1461772d2(longlong param_1)

{
  FUN_14617730e();
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14617730e FUN_14617730e body=106 status=ok
// SIG undefined FUN_14617730e(void)

void FUN_14617730e(longlong param_1)

{
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_1404ee4d0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(uint *)(param_1 + 0xe4) < 0x21) {
    return;
  }
  *(undefined4 *)(param_1 + 0xe4) = 0x20;
  FUN_14008f53c(param_1 + 0xd0,0);
  return;
}



// FUNCTION 146177378 FUN_146177378 body=323 status=ok
// SIG undefined FUN_146177378(void)

void FUN_146177378(float *param_1,float param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auStack_48 [36];
  float local_24;
  ulonglong *local_20;
  float *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  if ((1e-08 < param_2) || (*(char *)(param_1 + 1) == '\x01')) {
    if (param_1[0x34] != param_1[0x3d]) {
      uVar1 = *param_3;
      uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      pfVar3 = param_1 + 0x3e;
      if (*(float **)(param_1 + 0x42) != (float *)0x0) {
        pfVar3 = *(float **)(param_1 + 0x42);
      }
      fVar4 = pfVar3[(int)param_1[0x44] - 1U & (uVar2 >> 0x10 ^ uVar2)];
      if (fVar4 != -NAN) {
        do {
          pfVar3 = *(float **)(param_1 + 0x32);
          if (*(float **)(param_1 + 0x32) == (float *)0x0) {
            pfVar3 = param_1 + 2;
          }
          pfVar3 = pfVar3 + (longlong)(int)fVar4 * 6;
          if (*(ulonglong *)pfVar3 == uVar1) {
            if (pfVar3 + 2 != (float *)0x0 && pfVar3 != (float *)0x0) {
              fVar4 = *param_1 - pfVar3[2];
              goto LAB_146177416;
            }
            break;
          }
          fVar4 = pfVar3[4];
        } while (fVar4 != -NAN);
      }
    }
    fVar4 = *param_1;
LAB_146177416:
    *param_1 = fVar4 + param_2;
    local_18 = &local_24;
    local_20 = param_3;
    FUN_1461774bc(param_1 + 2,local_c,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461774bc FUN_1461774bc body=312 status=ok
// SIG undefined FUN_1461774bc(void)

undefined4 * FUN_1461774bc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1461776fa(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14617765a(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    cVar3 = FUN_1461775f6(param_1,*(int *)(param_1 + 200) - *(int *)(param_1 + 0xec));
    if (cVar3 == '\0') {
      uVar6 = (longlong)(int)uVar4 & (longlong)*(int *)(param_1 + 0x108) - 1U;
      iVar5 = (int)uVar6;
      *(int *)((longlong)local_40 + 0x14) = iVar5;
      lVar7 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar7 = param_1 + 0xf0;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x108) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar7 = param_1 + 0xf0;
      }
      *(undefined4 *)(lVar7 + ((longlong)iVar5 & (longlong)*(int *)(param_1 + 0x108) - 1U) * 4) =
           uVar2;
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1461775f6 FUN_1461775f6 body=99 status=ok
// SIG undefined FUN_1461775f6(void)

undefined8 FUN_1461775f6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 2) {
    iVar4 = 4;
  }
  if (param_2 < 4) {
    iVar4 = 4;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x108))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x108) = iVar4;
    FUN_14617799a(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14617765a FUN_14617765a body=159 status=ok
// SIG undefined FUN_14617765a(void)

undefined8 FUN_14617765a(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 200) - *(int *)(param_1 + 0xec) != 1) &&
     (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xec))) {
    lVar5 = param_1 + 0xf0;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x100);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x108) - 1U & param_2) * 4);
    if (iVar6 != -1) {
      while( true ) {
        lVar5 = *(longlong *)(param_1 + 0xc0);
        if (*(longlong *)(param_1 + 0xc0) == 0) {
          lVar5 = param_1;
        }
        plVar1 = (longlong *)(lVar5 + (longlong)iVar6 * 0x18);
        if (*plVar1 == *param_3) break;
        iVar6 = (int)plVar1[2];
        if (iVar6 == -1) {
          return 0;
        }
      }
      lVar5 = *param_3;
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(int *)plVar1 = (int)lVar5;
      *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
      *(int *)(plVar1 + 1) = (int)lVar4;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      FUN_148917134((int)lVar5,*param_4);
      *param_4 = iVar6;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1461776fa FUN_1461776fa body=302 status=ok
// SIG undefined FUN_1461776fa(void)

int * FUN_1461776fa(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    iVar6 = *(int *)(param_1 + 200);
    *(int *)(param_1 + 200) = iVar6 + 1;
    if (*(int *)(param_1 + 0xcc) == iVar6) {
      FUN_147f53d46(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_14489e6aa(param_1 + 0xd0,1);
    lVar5 = *(longlong *)(param_1 + 0xd8);
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      lVar5 = param_1 + 0xd0;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0xe8);
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(lVar5 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 0xe8) = iVar3;
    iVar4 = *(int *)(param_1 + 0xec) + -1;
    *(int *)(param_1 + 0xec) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 0xd0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xd8);
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar5 + lVar7 * 0x18;
  return param_2;
}



// FUNCTION 146177828 FUN_146177828 body=369 status=ok
// SIG undefined FUN_146177828(void)

void FUN_146177828(float *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  float *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = rand();
  fVar7 = ((float)(uVar4 & 0x7fff) / 32767.0) * *param_1;
  pfVar1 = param_1 + 2;
  pfVar2 = param_1 + 0x36;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  fStack_5c = 0.0;
  uStack_58 = 0;
  uStack_68 = pfVar2;
  if (param_1[0x3a] == 0.0) {
    fVar6 = 0.0;
  }
  else {
    FUN_144a81a4c(&local_70);
    fVar6 = param_1[0x3a];
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  fStack_7c = fStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = pfVar1;
  if ((fStack_5c != fVar6) || (uStack_68 != pfVar2)) {
    fVar8 = 0.0;
    do {
      pfVar5 = *(float **)(local_98 + 0x30);
      if (*(float **)(local_98 + 0x30) == (float *)0x0) {
        pfVar5 = local_98;
      }
      bVar3 = fVar8 <= fVar7;
      fVar8 = fVar8 + pfVar5[(longlong)(int)fStack_7c * 6 + 2];
      if ((bVar3) && (fVar7 <= fVar8)) {
        *param_2 = *(undefined8 *)(pfVar5 + (longlong)(int)fStack_7c * 6);
        break;
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_144a81a4c(&local_90);
    } while (local_98 != pfVar1 ||
             ((float *)CONCAT44(uStack_84,uStack_88) != pfVar2 || fStack_7c != fVar6));
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617799a FUN_14617799a body=533 status=ok
// SIG undefined FUN_14617799a(void)

void FUN_14617799a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1446efa72(param_1 + 0x100,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 0x108);
  uVar2 = local_58;
  if (uVar7 != 0) {
    lVar1 = param_1 + 0xf0;
    uVar6 = 0;
    FUN_144a8ab24(lVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar5 = lVar1;
        }
        *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x108) + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = param_1 + 0xd0;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0xe0) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar2 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar3 = local_58._4_4_;
      local_58 = uVar2;
      do {
        lVar5 = *(longlong *)(local_70 + 0xc0);
        if (*(longlong *)(local_70 + 0xc0) == 0) {
          lVar5 = local_70;
        }
        lVar4 = (longlong)iVar3;
        uVar10 = *(ulonglong *)(lVar5 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)*(int *)(param_1 + 0x108) - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar5 + 0x14 + lVar4 * 0x18) = iVar9;
        lVar8 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar5 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x108) - 1U & uVar10) * 4);
        lVar5 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar5 = lVar1;
        }
        *(int *)(lVar5 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x108) - 1U) * 4) = iVar3;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar3 = local_58._4_4_;
        uVar2 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146177bb0 FUN_146177bb0 body=68 status=ok
// SIG undefined FUN_146177bb0(void)

void FUN_146177bb0(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x1e8);
  memset(_Dst,0,0x1e8);
  FUN_146177bf4(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 146177bf4 FUN_146177bf4 body=373 status=ok
// SIG undefined FUN_146177bf4(void)

undefined8 * FUN_146177bf4(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8b6a90;
  FUN_1413f03d2(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x2d] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x2e) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 0x2f) = 0;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  param_1[0x30] = local_38;
  *(undefined4 *)(param_1 + 0x31) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x18c) = local_2c;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 10;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  param_1[0x34] = local_38;
  *(undefined4 *)(param_1 + 0x35) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = local_2c;
  *(undefined4 *)(param_1 + 0x36) = 0;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  param_1[0x37] = local_38;
  *(undefined4 *)(param_1 + 0x38) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = local_2c;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146177d6a FUN_146177d6a body=1755 status=ok
// SIG undefined FUN_146177d6a(void)

void FUN_146177d6a(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined2 local_a0;
  undefined1 local_98;
  char local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined1 local_74;
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_141432ebc();
  if (*(char *)(param_1 + 0x4f0) == '\0') {
    *(undefined1 *)(param_1 + 0x530) = 0;
  }
  if (*(char *)(param_1 + 0x680) == '\0') {
    *(undefined1 *)(param_1 + 0x6a0) = 0;
  }
  if (*(char *)(param_1 + 0x6a1) == '\0') {
    *(undefined1 *)(param_1 + 0x6c0) = 0;
  }
  uVar4 = DAT_14cbcabf8;
  uVar2 = FUN_1408d77e6();
  lVar3 = FUN_140c48046(param_1 + 0x80,uVar2,uVar4,0);
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0xd1) = *(undefined1 *)(param_1 + 0x4d2);
    lVar7 = param_1 + 0x4f8;
    if (*(char *)(param_1 + 0x530) == '\0') {
      lVar7 = param_1 + 0x198;
    }
    local_88 = 0;
    uVar4 = FUN_140c4800c();
    lVar5 = FUN_140c47e50(lVar3,uVar4,&local_88);
    if (lVar5 != 0) {
      FUN_144983130(lVar5 + 0x80,lVar7);
      local_c8 = local_70;
      local_88 = DAT_14cb72620;
      local_80 = *(undefined1 *)(param_1 + 0x570);
      local_7c = DAT_14cb72628;
      local_74 = *(undefined1 *)(param_1 + 0x571);
      local_d0 = &local_88;
      FUN_140c482d4(lVar5);
      FUN_1411157dc(lVar5 + 0x2a8,param_1 + 0x668);
    }
    FUN_14034cca6(&local_88,param_1 + 0x198);
    if (*(char *)(param_1 + 0x448) == '\x01') {
      uVar4 = FUN_1411157a2();
      lVar5 = FUN_140c47e50(lVar3,uVar4,&DAT_14cbcac00);
      if (lVar5 != 0) {
        FUN_14054d68c(lVar5 + 0x80,param_1 + 0x1d0);
        *(undefined1 *)(lVar5 + 0x331) = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_d8 = (longlong *)0x0;
        FUN_14111569e(lVar5,&local_c0);
        local_c0 = 0;
        uStack_b8 = (longlong *)0x0;
        if (local_d8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_d8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_d8 + 0x10))();
          }
          if (uStack_b8 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)uStack_b8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*uStack_b8 + 0x10))();
            }
          }
        }
        FUN_141115702(&local_c0,&local_e8);
        FUN_1403719a4(&local_88,&local_c0);
        FUN_144a2da94(&local_c0);
      }
    }
    local_c0 = 0;
    uVar4 = FUN_140c4880e();
    lVar5 = FUN_140c47e50(lVar3,uVar4,&local_c0);
    if (lVar5 != 0) {
      FUN_144983130(lVar5 + 0x88,&local_88);
      *(undefined1 *)(lVar5 + 0x80) = *(undefined1 *)(param_1 + 0x4e9);
      local_c0 = 0;
      local_a0 = 4;
      uStack_b8 = (longlong *)CONCAT44(uStack_b8._4_4_,*(undefined4 *)(param_1 + 0x4ec));
      local_98 = 3;
      local_90 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
      FUN_1403719a4(lVar5 + 200,&local_c0);
      FUN_144a2da94(&local_c0);
      FUN_140c48b0c(lVar5,*(undefined1 *)(param_1 + 0x4e8));
    }
    local_f8 = lVar7;
    local_f0 = param_1;
    if (*(char *)(param_1 + 0x4f0) != '\0') {
      uVar4 = FUN_140a48832();
      lVar5 = FUN_140c483dc(lVar3,uVar4,&DAT_14cbcac08,0);
      if (lVar5 != 0) {
        FUN_141602996(&local_f8,lVar5,1);
      }
    }
    if (*(char *)(param_1 + 0x680) == '\x01') {
      uVar4 = FUN_140a48832();
      lVar5 = FUN_140c483dc(lVar3,uVar4,&DAT_14cbcac10,0);
      if (lVar5 != 0) {
        local_c0 = 0;
        uVar4 = FUN_146178446();
        lVar6 = FUN_140c47e50(lVar5,uVar4,&local_c0);
        if (lVar6 != 0) {
          *(undefined2 *)(lVar6 + 0x80) = 0x100;
          lVar8 = *(longlong *)(param_1 + 0x688);
          if (DAT_14c950c29 == '\x01') {
            if (lVar8 == 0) {
              lVar8 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar8 = *(longlong *)(param_1 + 0x688);
            }
          }
          *(longlong *)(lVar6 + 0x88) = lVar8;
          *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)(param_1 + 0x690);
          *(undefined4 *)(lVar6 + 0x98) = *(undefined4 *)(param_1 + 0x698);
          *(undefined1 *)(lVar6 + 0xa0) = *(undefined1 *)(param_1 + 0x6a0);
        }
        if (*(char *)(param_1 + 0x4f0) == '\x01') {
          FUN_141602996(&local_f8,lVar5,0);
        }
      }
    }
    if ((*(char *)(param_1 + 0x680) == '\x01') && (*(char *)(param_1 + 0x448) == '\x01')) {
      uVar4 = FUN_140a48832();
      lVar5 = FUN_140c483dc(lVar3,uVar4,&DAT_14cbcac18,0);
      if (lVar5 != 0) {
        local_c0 = 0;
        uVar4 = FUN_1411157a2();
        lVar5 = FUN_140c47e50(lVar5,uVar4,&local_c0);
        if (lVar5 != 0) {
          FUN_14054d68c(lVar5 + 0x80,param_1 + 0x1d0);
          *(undefined1 *)(lVar5 + 0x331) = 0;
          *(undefined2 *)(lVar5 + 0x78) = 0x101;
          *(undefined2 *)(lVar5 + 0x7b) = 0x101;
          local_110 = 0;
          FUN_14111569e(lVar5,&local_c0);
          local_108 = (undefined4)local_c0;
          uStack_104 = local_c0._4_4_;
          uStack_100 = (undefined4)uStack_b8;
          uStack_fc = uStack_b8._4_4_;
          FUN_141115702(&local_c0,&local_110);
          FUN_1403719a4(&local_88,&local_c0);
          FUN_144a2da94(&local_c0);
        }
      }
    }
    uVar4 = FUN_140a48832();
    lVar5 = FUN_140c483dc(lVar3,uVar4,&DAT_14cbcac20,0);
    if (lVar5 != 0) {
      local_c0 = 0;
      uVar4 = FUN_146178480();
      lVar6 = FUN_140c47e50(lVar5,uVar4,&local_c0);
      if (lVar6 != 0) {
        FUN_1461784b8(lVar6 + 0xf8,param_1 + 0x450);
        FUN_144983130(lVar6 + 0x80,&local_88);
        bVar9 = true;
        if (*(char *)(param_1 + 0x531) == '\0') {
          bVar9 = *(char *)(param_1 + 0x4f0) == '\x01';
        }
        *(bool *)(lVar6 + 0xf0) = bVar9;
        *(bool *)(lVar6 + 0xf1) = *(char *)(param_1 + 0x4f0) == '\x01';
        if (*(char *)(param_1 + 0x531) == '\x02') {
          lVar7 = param_1 + 0x538;
        }
        FUN_144983130(lVar6 + 0xb8,lVar7);
      }
      if (*(char *)(param_1 + 0x4f0) == '\x01') {
        FUN_141602996(&local_f8,lVar5,0);
      }
    }
    if (*(char *)(param_1 + 0x6a1) == '\x01') {
      uVar4 = FUN_140a48832();
      lVar3 = FUN_140c483dc(lVar3,uVar4,&DAT_14cbcac28,0);
      if (lVar3 != 0) {
        local_c0 = 0;
        uVar4 = FUN_146178446();
        lVar7 = FUN_140c47e50(lVar3,uVar4,&local_c0);
        if (lVar7 != 0) {
          *(undefined2 *)(lVar7 + 0x80) = 0x101;
          lVar5 = *(longlong *)(param_1 + 0x6a8);
          if (DAT_14c950c29 == '\x01') {
            if (lVar5 == 0) {
              lVar5 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar5 = *(longlong *)(param_1 + 0x6a8);
            }
          }
          *(longlong *)(lVar7 + 0x88) = lVar5;
          *(undefined8 *)(lVar7 + 0x90) = *(undefined8 *)(param_1 + 0x6b0);
          *(undefined4 *)(lVar7 + 0x98) = *(undefined4 *)(param_1 + 0x6b8);
          *(undefined1 *)(lVar7 + 0xa0) = *(undefined1 *)(param_1 + 0x6c0);
        }
        if (*(char *)(param_1 + 0x4f0) == '\x01') {
          FUN_141602996(&local_f8,lVar3,0);
        }
      }
    }
    FUN_144a2da94(&local_88);
  }
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146178446 FUN_146178446 body=57 status=ok
// SIG undefined FUN_146178446(void)

void FUN_146178446(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0c80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0c80 = FUN_140002ddd(FUN_1465ac05f,uVar1,L"GbxBrainAspectSettings_Cloak");
  }
  return;
}



// FUNCTION 146178480 FUN_146178480 body=55 status=ok
// SIG undefined FUN_146178480(void)

void FUN_146178480(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ae58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ae58 = FUN_140002ddd(FUN_1464cd1ef,uVar1,L"GbxBrainAspectSettings_Teleport");
  }
  return;
}



// FUNCTION 1461784b8 FUN_1461784b8 body=142 status=ok
// SIG undefined FUN_1461784b8(void)

undefined8 * FUN_1461784b8(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_144983130(param_1 + 2,param_2 + 2);
  FUN_144983130(param_1 + 9,param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  lVar1 = param_2[0x11];
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_14689c22e();
      lVar1 = param_2[0x11];
    }
  }
  param_1[0x11] = lVar1;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  return param_1;
}



// FUNCTION 146178546 FUN_146178546 body=54 status=ok
// SIG undefined FUN_146178546(void)

void FUN_146178546(void)

{
  FUN_14617857c();
  if (DAT_14ca7c5a8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca7c588 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14617857c FUN_14617857c body=388 status=ok
// SIG undefined FUN_14617857c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617857c(void)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14ca7c598;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14ca7c5b0 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14ca7c588;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      puVar2 = *(undefined8 **)(*local_58 + 8 + (longlong)iStack_3c * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14ca7c590 = 0;
  if (DAT_14ca7c594 != 0) {
    FUN_144727cd0(&DAT_14ca7c588,0);
  }
  _DAT_14ca7c5b8 = 0xffffffff;
  DAT_14ca7c5b0 = 0;
  if (0x80 < DAT_14ca7c5b4) {
    DAT_14ca7c5b4 = 0x80;
    FUN_1446efbd8(&DAT_14ca7c598,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617870c FUN_14617870c body=433 status=ok
// SIG undefined FUN_14617870c(void)

undefined8 * FUN_14617870c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6476d0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  FUN_144a78564(param_1 + 0x45);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x47));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x47),4000);
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 5) = 4;
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x46] = 0;
  return param_1;
}



// FUNCTION 1461788be FUN_1461788be body=222 status=ok
// SIG undefined FUN_1461788be(void)

void FUN_1461788be(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x170);
  param_2[1] = 0;
  *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0xfe;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined8 *)((longlong)param_2 + 0x49) = 0;
  *(undefined8 *)((longlong)param_2 + 0x51) = 0;
  *(undefined4 *)((longlong)param_2 + 100) = 0xffffffff;
  *param_2 = &PTR_FUN_14b235b70;
  *(undefined1 *)(param_2 + 0xd) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(undefined4 *)(param_2 + 0x16) = 0x40a00000;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined8 *)((longlong)param_2 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_2 + 0x164) = 0;
  *(undefined1 *)(param_2 + 0x23) = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  return;
}



// FUNCTION 14617899e FUN_14617899e body=151 status=ok
// SIG undefined FUN_14617899e(void)

ulonglong FUN_14617899e(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_146178a19:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146178a19;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      local_28 = *param_3;
      uStack_24 = param_3[1];
      uStack_20 = param_3[2];
      uStack_1c = param_3[3];
      (**(code **)(param_1 + 0x28))(lVar4);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146178a36 FUN_146178a36 body=69 status=ok
// SIG undefined FUN_146178a36(void)

void FUN_146178a36(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_14582385e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146178a7c FUN_146178a7c body=99 status=ok
// SIG undefined FUN_146178a7c(void)

void FUN_146178a7c(longlong param_1)

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
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000146178adb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146178abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 146178af8 FUN_146178af8 body=428 status=ok
// SIG undefined FUN_146178af8(void)

void FUN_146178af8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = FUN_14486f0b8();
  lVar6 = (longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x200);
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar3 + 1) = 0x10;
    *puVar3 = &PTR_FUN_14a2e8320;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined8 **)(param_1 + 0x18) = puVar3;
  }
  uVar4 = *(ulonglong *)(lVar6 + 8);
  if ((uVar4 & 8) != 0) {
    uVar4 = ((longlong)(uVar4 << 0x3e) >> 0x3f) + (ulonglong)((uint)uVar4 & 7);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    lVar5 = lVar6 + 0x20;
    if (*(longlong *)(lVar6 + 0x40) != 0) {
      lVar5 = *(longlong *)(lVar6 + 0x40);
    }
    lVar5 = (longlong)
            *(int *)(lVar5 + (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                             ) * 4);
    if (lVar5 != -1) {
      FUN_144a67f5c(lVar5 * 0x10 + puVar3[2],param_3);
      return;
    }
  }
  FUN_146178ca4(lVar6,*(undefined4 *)(puVar3 + 5));
  iVar1 = *(int *)(puVar3 + 5);
  *(uint *)(puVar3 + 5) = iVar1 + 1U;
  if (*(uint *)((longlong)puVar3 + 0x2c) < iVar1 + 1U) {
    FUN_1446f48e2(puVar3 + 4,iVar1);
  }
  *(int *)(puVar3[4] + (longlong)iVar1 * 4) = iVar2;
  iVar2 = *(int *)(puVar3 + 3);
  *(uint *)(puVar3 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar3 + 0x1c) < iVar2 + 1U) {
    FUN_146178d66(puVar3 + 2,iVar2);
  }
  lVar6 = puVar3[2];
  lVar5 = (longlong)iVar2 * 0x10;
  puVar3 = (undefined8 *)(lVar6 + lVar5);
  *(undefined8 *)(lVar6 + lVar5) = 0;
  iVar2 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(lVar6 + 8 + lVar5) = iVar2;
  if ((longlong)iVar2 != 0) {
    FUN_1447c510a(puVar3,iVar2,0);
    memcpy((void *)*puVar3,_Src,(longlong)iVar2 << 2);
    return;
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  return;
}



// FUNCTION 146178ca4 FUN_146178ca4 body=193 status=ok
// SIG undefined FUN_146178ca4(void)

void FUN_146178ca4(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 0x10;
  uVar1 = *(ulonglong *)(param_1 + 8);
  uVar3 = ((longlong)(uVar1 << 0x3e) >> 0x3f) + (ulonglong)((uint)uVar1 & 7);
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
  local_c = param_2;
  if ((uVar1 & 8) == 0) {
    *(ulonglong *)(param_1 + 8) = uVar1 | 8;
    FUN_1402a8efa(param_1 + 0x20,&local_c);
  }
  else {
    lVar2 = param_1 + 0x20;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x40);
    }
    *(undefined4 *)
     (lVar2 + (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 4) =
         param_2;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146178d66 FUN_146178d66 body=132 status=ok
// SIG undefined FUN_146178d66(void)

void FUN_146178d66(longlong param_1,int param_2)

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



// FUNCTION 146178dea FUN_146178dea body=40 status=ok
// SIG undefined FUN_146178dea(void)

undefined8 FUN_146178dea(undefined8 param_1,int param_2)

{
  FUN_146178e12();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146178e12 FUN_146178e12 body=850 status=ok
// SIG undefined FUN_146178e12(void)

void FUN_146178e12(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4ff700;
  param_1[5] = &PTR_FUN_14b4ff9a0;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x47) = 0;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x3e);
  plVar3 = (longlong *)param_1[0x3c];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x3a];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x38];
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
  plVar3 = (longlong *)param_1[0x36];
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
  plVar3 = (longlong *)param_1[0x34];
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
  plVar3 = (longlong *)param_1[0x32];
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
  FUN_1449db362(param_1 + 0x29);
  FUN_1449db362(param_1 + 0x27);
  FUN_1449db362(param_1 + 0x25);
  FUN_144760e21(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x1a);
  FUN_1449db362(param_1 + 0x18);
  FUN_144760e21(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 146179164 FUN_146179164 body=54 status=ok
// SIG undefined FUN_146179164(void)

void FUN_146179164(void)

{
  FUN_14617919a();
  if (DAT_14cc1a960 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cc1a940 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14617919a FUN_14617919a body=390 status=ok
// SIG undefined FUN_14617919a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617919a(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0x100000000;
  local_30 = &DAT_14cc1a950;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if (DAT_14cc1a968 != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = &DAT_14cc1a940;
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  if (iStack_24 < *(int *)(local_30 + 0x18)) {
    do {
      lVar1 = *local_60 + (longlong)iStack_44 * 0x70;
      if (*(longlong *)(*local_60 + 0x20 + (longlong)iStack_44 * 0x70) != 0) {
        plVar2 = (longlong *)(lVar1 + 0x40);
        if (*(longlong **)(lVar1 + 0x30) != (longlong *)0x0) {
          plVar2 = *(longlong **)(lVar1 + 0x30);
        }
        (**(code **)(*plVar2 + 0x10))();
      }
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < *(int *)(local_50 + 0x18));
  }
  DAT_14cc1a948 = 0;
  if (DAT_14cc1a94c != 0) {
    FUN_141154a24(&DAT_14cc1a940,0);
  }
  _DAT_14cc1a970 = 0xffffffff;
  DAT_14cc1a968 = 0;
  if (0x80 < DAT_14cc1a96c) {
    DAT_14cc1a96c = 0x80;
    FUN_1446efbd8(&DAT_14cc1a950,0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146179322 FUN_146179322 body=313 status=ok
// SIG undefined FUN_146179322(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146179322(void)

{
  if ((DAT_14cae96a7 & 2) == 0) {
    DAT_14cae96a7 = DAT_14cae96a7 | 2;
    _DAT_14cae9648 = L"FLocalVertexFactoryShaderParameters";
    _DAT_14cae9660 = FUN_146826540;
    _DAT_14cae9668 = FUN_146825d77;
    _DAT_14cae9670 = FUN_146825fd6;
    _DAT_14cae9678 = FUN_1407e02ea;
    _DAT_14cae9680 = FUN_146826273;
    _DAT_14cae9658 = &LAB_147ba2eac;
    _DAT_14cae9698 = 0xffffffff00000014;
    _DAT_14cae96a0 = 4;
    DAT_14cae96a4 = 0;
    _DAT_14cae9688 = &LAB_147ba2ebe;
    _DAT_14cae9b50 = L"IsGPUSkinPassThrough";
    DAT_14cae9b7a = FUN_140850cc5();
    _DAT_14cae9b58 = FUN_140ec6960();
    _DAT_14cae9b68 = &LAB_14682652b;
    _DAT_14cae9b70 = &DAT_10000000c;
    _DAT_14cae9b78 = 0;
    _DAT_14cae9b60 = DAT_14cae9650;
    DAT_14cae9650 = &DAT_14cae9b50;
    FUN_14617945c();
    FUN_1407e00cc(&DAT_14cae9640);
    return;
  }
  return;
}



// FUNCTION 14617945c FUN_14617945c body=133 status=ok
// SIG undefined FUN_14617945c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617945c(void)

{
  _DAT_14cae9bc0 = L"BASE";
  DAT_14cae9bea = 4;
  FUN_145da085e();
  _DAT_14cae9bd0 = DAT_14cae9650;
  _DAT_14cae9bc8 = &DAT_14cae95d0;
  _DAT_14cae9bd8 = &LAB_14682652b;
  DAT_14cae9650 = &DAT_14cae9bc0;
  DAT_14cae96a5 = DAT_14cae96a5 + '\x01';
  _DAT_14cae9be0 = 0x100000000;
  if (DAT_14cae9634 != '\0') {
    DAT_14cae96a6 = DAT_14cae96a6 + '\x01';
  }
  return;
}



// FUNCTION 1461794e2 FUN_1461794e2 body=54 status=ok
// SIG undefined FUN_1461794e2(void)

void FUN_1461794e2(void)

{
  FUN_146179518();
  if (DAT_14cb988d8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb988b8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146179518 FUN_146179518 body=391 status=ok
// SIG undefined FUN_146179518(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146179518(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14cb988c8;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14cb988e0 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14cb988b8;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_145fdf5a0(lVar1 + lVar2 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14cb988c0 = 0;
  if (DAT_14cb988c4 != 0) {
    FUN_1448fc38a(&DAT_14cb988b8,0);
  }
  _DAT_14cb988e8 = 0xffffffff;
  DAT_14cb988e0 = 0;
  if (0x80 < DAT_14cb988e4) {
    DAT_14cb988e4 = 0x80;
    FUN_1446efbd8(&DAT_14cb988c8,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461796a0 FUN_1461796a0 body=98 status=ok
// SIG undefined FUN_1461796a0(void)

undefined8 FUN_1461796a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if ((lVar2 == 0) || (iVar1 = *(int *)(lVar2 + 0x40), (longlong)iVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x38);
    lVar4 = 0;
    do {
      uVar3 = FUN_146179702(param_1,*(undefined4 *)(*(longlong *)(lVar2 + lVar4) + 0xe0),param_2);
      if ((char)uVar3 != '\0') {
        return uVar3;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return uVar3;
}



// FUNCTION 146179702 FUN_146179702 body=347 status=ok
// SIG undefined FUN_146179702(void)

ulonglong FUN_146179702(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(longlong *)(param_1 + 0x38) != 0) &&
       (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar5 != 0)) &&
      (lVar5 = *(longlong *)(lVar5 + 0x360), lVar5 != 0)) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
    lVar5 = FUN_140d6e14c();
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x30), lVar5 != 0)) {
      cVar4 = FUN_140b70752(lVar5,param_2,*param_3);
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if (cVar4 != '\0') goto LAB_14617978d;
      if ((*(longlong *)(param_1 + 0x38) == 0) ||
         (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar3 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar3 + 0x360);
      }
      FUN_140b6deae(&local_40,uVar6,*param_3);
      if (local_40 != 0) {
        cVar4 = FUN_140b70752(lVar5,param_2);
        if (cVar4 != '\0') {
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
          goto LAB_14617978d;
        }
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
  uVar7 = 0;
LAB_14617978d:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617985e FUN_14617985e body=507 status=ok
// SIG undefined FUN_14617985e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617985e(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14c9a1d40 = 0;
  FUN_1446ddc76(&DAT_14c9a1d44,"FNexusSerializeTest_ArrayDef",1);
  _DAT_14c9a1d50 = 0;
  _DAT_14c9a1d58 = 0;
  _DAT_14c9a1d60 = 0;
  DAT_14c9a1d68 = (void *)0x0;
  _DAT_14c9a1d70 = 0;
  _DAT_14c9a1d78 = FUN_145928ecc;
  DAT_14c9a1d80 = *param_1;
  DAT_14c9a1d90 = param_1[2];
  param_1[2] = 0;
  DAT_14c9a1da0._0_4_ = (undefined4)param_1[4];
  DAT_14c9a1da0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014c9a1da8 = (undefined4)param_1[5];
  uRam000000014c9a1dac = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14c9a1db0 = (undefined4)param_1[6];
  uRam000000014c9a1db4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014c9a1db8 = (undefined4)param_1[7];
  uRam000000014c9a1dbc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14c9a1d80 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14c9a1d50 = 0;
  _DAT_14c9a1d58 = local_68;
  _DAT_14c9a1d60 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14c9a1d70 = CONCAT44(DAT_14c9a1d74,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14c9a1d74 == 0) {
    _DAT_14c9a1d70 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14c9a1d68,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14c9a1d68,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14c9a1d40) && ((DAT_14c9a1cd8 == (int *)0x0 || (*DAT_14c9a1cd8 < DAT_14c9a1d40)))) {
    DAT_14c9a1cd8 = &DAT_14c9a1d40;
  }
  FUN_145928fa8();
  local_30 = &local_70;
  local_70 = &DAT_14c9a1d40;
  local_38 = &DAT_14c9a1d44;
  FUN_146179a5a(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146179a5a FUN_146179a5a body=338 status=ok
// SIG undefined FUN_146179a5a(void)

undefined4 * FUN_146179a5a(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146179c40(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146179bae(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c9a1ce8 - DAT_14c9a1d14;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c9a1d28)) {
      uVar10 = DAT_14c9a1d28 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14c9a1d20;
      if (DAT_14c9a1d20 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a1d18;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a1d28 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c9a1d20;
      if (DAT_14c9a1d20 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a1d18;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a1d28 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c9a1d28 = iVar9;
      FUN_146179d4e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146179bae FUN_146179bae body=145 status=ok
// SIG undefined FUN_146179bae(void)

undefined8 FUN_146179bae(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c9a1ce8 - DAT_14c9a1d14 != 1) && (DAT_14c9a1ce8 != DAT_14c9a1d14)) {
    puVar6 = &DAT_14c9a1d18;
    if (DAT_14c9a1d20 != (undefined *)0x0) {
      puVar6 = DAT_14c9a1d20;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c9a1d28 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c9a1ce0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_1457de0da(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146179c40 FUN_146179c40 body=270 status=ok
// SIG undefined FUN_146179c40(void)

int * FUN_146179c40(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9a1d10;
  iVar3 = DAT_14c9a1ce8;
  if (DAT_14c9a1d14 == 0) {
    iVar2 = DAT_14c9a1ce8 + 1;
    bVar7 = DAT_14c9a1cec == DAT_14c9a1ce8;
    DAT_14c9a1ce8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c9a1ce0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9a1cf0,1);
    puVar4 = DAT_14c9a1d00;
    if (DAT_14c9a1d00 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a1cf0;
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
    lVar6 = (longlong)DAT_14c9a1d10;
    DAT_14c9a1d10 = *(int *)(DAT_14c9a1ce0 + 4 + lVar6 * 0x18);
    DAT_14c9a1d14 = DAT_14c9a1d14 + -1;
    if (DAT_14c9a1d14 != 0) {
      *(undefined4 *)(DAT_14c9a1ce0 + (longlong)DAT_14c9a1d10 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a1cf0;
  if (DAT_14c9a1d00 != (undefined *)0x0) {
    puVar4 = DAT_14c9a1d00;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c9a1ce0;
  return param_1;
}



// FUNCTION 146179d4e FUN_146179d4e body=523 status=ok
// SIG undefined FUN_146179d4e(void)

void FUN_146179d4e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a1d20 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a1d20,0,0,4);
  }
  uVar3 = DAT_14c9a1d28;
  uVar2 = local_50;
  if (DAT_14c9a1d28 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c9a1d18,0,DAT_14c9a1d28,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14c9a1d20;
        if (DAT_14c9a1d20 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a1d18;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c9a1d28 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9a1cf0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9a1d08 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9a1ce0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c9a1d28 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c9a1d20;
        if (DAT_14c9a1d20 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a1d18;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c9a1d28 - 1U & uVar9) * 4);
        puVar6 = DAT_14c9a1d20;
        if (DAT_14c9a1d20 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a1d18;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c9a1d28 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146179f5a FUN_146179f5a body=507 status=ok
// SIG undefined FUN_146179f5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146179f5a(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14c9a1f80 = 0;
  FUN_1446ddc76(&DAT_14c9a1f84,"FNexusSerializeTest_BasicDef",1);
  _DAT_14c9a1f90 = 0;
  _DAT_14c9a1f98 = 0;
  _DAT_14c9a1fa0 = 0;
  DAT_14c9a1fa8 = (void *)0x0;
  _DAT_14c9a1fb0 = 0;
  _DAT_14c9a1fb8 = FUN_1459246b6;
  DAT_14c9a1fc0 = *param_1;
  DAT_14c9a1fd0 = param_1[2];
  param_1[2] = 0;
  DAT_14c9a1fe0._0_4_ = (undefined4)param_1[4];
  DAT_14c9a1fe0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014c9a1fe8 = (undefined4)param_1[5];
  uRam000000014c9a1fec = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14c9a1ff0 = (undefined4)param_1[6];
  uRam000000014c9a1ff4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014c9a1ff8 = (undefined4)param_1[7];
  uRam000000014c9a1ffc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14c9a1fc0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14c9a1f90 = 0;
  _DAT_14c9a1f98 = local_68;
  _DAT_14c9a1fa0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14c9a1fb0 = CONCAT44(DAT_14c9a1fb4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14c9a1fb4 == 0) {
    _DAT_14c9a1fb0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14c9a1fa8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14c9a1fa8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14c9a1f80) && ((DAT_14c9a1f18 == (int *)0x0 || (*DAT_14c9a1f18 < DAT_14c9a1f80)))) {
    DAT_14c9a1f18 = &DAT_14c9a1f80;
  }
  FUN_141188b2c();
  local_30 = &local_70;
  local_70 = &DAT_14c9a1f80;
  local_38 = &DAT_14c9a1f84;
  FUN_14617a156(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617a156 FUN_14617a156 body=338 status=ok
// SIG undefined FUN_14617a156(void)

undefined4 * FUN_14617a156(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14617a33c(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14617a2aa(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c9a1f28 - DAT_14c9a1f54;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c9a1f68)) {
      uVar10 = DAT_14c9a1f68 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14c9a1f60;
      if (DAT_14c9a1f60 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a1f58;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a1f68 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c9a1f60;
      if (DAT_14c9a1f60 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a1f58;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a1f68 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c9a1f68 = iVar9;
      FUN_14617a44a();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617a2aa FUN_14617a2aa body=145 status=ok
// SIG undefined FUN_14617a2aa(void)

undefined8 FUN_14617a2aa(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c9a1f28 - DAT_14c9a1f54 != 1) && (DAT_14c9a1f28 != DAT_14c9a1f54)) {
    puVar6 = &DAT_14c9a1f58;
    if (DAT_14c9a1f60 != (undefined *)0x0) {
      puVar6 = DAT_14c9a1f60;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c9a1f68 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c9a1f20 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d8eb38(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14617a33c FUN_14617a33c body=270 status=ok
// SIG undefined FUN_14617a33c(void)

int * FUN_14617a33c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9a1f50;
  iVar3 = DAT_14c9a1f28;
  if (DAT_14c9a1f54 == 0) {
    iVar2 = DAT_14c9a1f28 + 1;
    bVar7 = DAT_14c9a1f2c == DAT_14c9a1f28;
    DAT_14c9a1f28 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c9a1f20,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9a1f30,1);
    puVar4 = DAT_14c9a1f40;
    if (DAT_14c9a1f40 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a1f30;
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
    lVar6 = (longlong)DAT_14c9a1f50;
    DAT_14c9a1f50 = *(int *)(DAT_14c9a1f20 + 4 + lVar6 * 0x18);
    DAT_14c9a1f54 = DAT_14c9a1f54 + -1;
    if (DAT_14c9a1f54 != 0) {
      *(undefined4 *)(DAT_14c9a1f20 + (longlong)DAT_14c9a1f50 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a1f30;
  if (DAT_14c9a1f40 != (undefined *)0x0) {
    puVar4 = DAT_14c9a1f40;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c9a1f20;
  return param_1;
}



// FUNCTION 14617a44a FUN_14617a44a body=523 status=ok
// SIG undefined FUN_14617a44a(void)

void FUN_14617a44a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a1f60 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a1f60,0,0,4);
  }
  uVar3 = DAT_14c9a1f68;
  uVar2 = local_50;
  if (DAT_14c9a1f68 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c9a1f58,0,DAT_14c9a1f68,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14c9a1f60;
        if (DAT_14c9a1f60 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a1f58;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c9a1f68 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9a1f30;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9a1f48 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9a1f20;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c9a1f68 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c9a1f60;
        if (DAT_14c9a1f60 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a1f58;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c9a1f68 - 1U & uVar9) * 4);
        puVar6 = DAT_14c9a1f60;
        if (DAT_14c9a1f60 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a1f58;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c9a1f68 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617a656 FUN_14617a656 body=507 status=ok
// SIG undefined FUN_14617a656(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617a656(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14c9a21c0 = 0;
  FUN_1446ddc76(&DAT_14c9a21c4,"FNexusSerializeTest_MapDef",1);
  _DAT_14c9a21d0 = 0;
  _DAT_14c9a21d8 = 0;
  _DAT_14c9a21e0 = 0;
  DAT_14c9a21e8 = (void *)0x0;
  _DAT_14c9a21f0 = 0;
  _DAT_14c9a21f8 = FUN_14591501a;
  DAT_14c9a2200 = *param_1;
  DAT_14c9a2210 = param_1[2];
  param_1[2] = 0;
  DAT_14c9a2220._0_4_ = (undefined4)param_1[4];
  DAT_14c9a2220._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014c9a2228 = (undefined4)param_1[5];
  uRam000000014c9a222c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14c9a2230 = (undefined4)param_1[6];
  uRam000000014c9a2234 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014c9a2238 = (undefined4)param_1[7];
  uRam000000014c9a223c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14c9a2200 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14c9a21d0 = 0;
  _DAT_14c9a21d8 = local_68;
  _DAT_14c9a21e0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14c9a21f0 = CONCAT44(DAT_14c9a21f4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14c9a21f4 == 0) {
    _DAT_14c9a21f0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14c9a21e8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14c9a21e8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14c9a21c0) && ((DAT_14c9a2160 == (int *)0x0 || (*DAT_14c9a2160 < DAT_14c9a21c0)))) {
    DAT_14c9a2160 = &DAT_14c9a21c0;
  }
  FUN_1459150f6();
  local_30 = &local_70;
  local_70 = &DAT_14c9a21c0;
  local_38 = &DAT_14c9a21c4;
  FUN_14617a852(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617a852 FUN_14617a852 body=338 status=ok
// SIG undefined FUN_14617a852(void)

undefined4 * FUN_14617a852(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14617aa38(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14617a9a6(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c9a2170 - DAT_14c9a219c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c9a21b0)) {
      uVar10 = DAT_14c9a21b0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14c9a21a8;
      if (DAT_14c9a21a8 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a21a0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a21b0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c9a21a8;
      if (DAT_14c9a21a8 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a21a0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a21b0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c9a21b0 = iVar9;
      FUN_14617ab46();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617a9a6 FUN_14617a9a6 body=145 status=ok
// SIG undefined FUN_14617a9a6(void)

undefined8 FUN_14617a9a6(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c9a2170 - DAT_14c9a219c != 1) && (DAT_14c9a2170 != DAT_14c9a219c)) {
    puVar6 = &DAT_14c9a21a0;
    if (DAT_14c9a21a8 != (undefined *)0x0) {
      puVar6 = DAT_14c9a21a8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c9a21b0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c9a2168 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d8ef10(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14617aa38 FUN_14617aa38 body=270 status=ok
// SIG undefined FUN_14617aa38(void)

int * FUN_14617aa38(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9a2198;
  iVar3 = DAT_14c9a2170;
  if (DAT_14c9a219c == 0) {
    iVar2 = DAT_14c9a2170 + 1;
    bVar7 = DAT_14c9a2174 == DAT_14c9a2170;
    DAT_14c9a2170 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c9a2168,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9a2178,1);
    puVar4 = DAT_14c9a2188;
    if (DAT_14c9a2188 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a2178;
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
    lVar6 = (longlong)DAT_14c9a2198;
    DAT_14c9a2198 = *(int *)(DAT_14c9a2168 + 4 + lVar6 * 0x18);
    DAT_14c9a219c = DAT_14c9a219c + -1;
    if (DAT_14c9a219c != 0) {
      *(undefined4 *)(DAT_14c9a2168 + (longlong)DAT_14c9a2198 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a2178;
  if (DAT_14c9a2188 != (undefined *)0x0) {
    puVar4 = DAT_14c9a2188;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c9a2168;
  return param_1;
}



// FUNCTION 14617ab46 FUN_14617ab46 body=523 status=ok
// SIG undefined FUN_14617ab46(void)

void FUN_14617ab46(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a21a8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a21a8,0,0,4);
  }
  uVar3 = DAT_14c9a21b0;
  uVar2 = local_50;
  if (DAT_14c9a21b0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c9a21a0,0,DAT_14c9a21b0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14c9a21a8;
        if (DAT_14c9a21a8 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a21a0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c9a21b0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9a2178;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9a2190 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9a2168;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c9a21b0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c9a21a8;
        if (DAT_14c9a21a8 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a21a0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c9a21b0 - 1U & uVar9) * 4);
        puVar6 = DAT_14c9a21a8;
        if (DAT_14c9a21a8 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a21a0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c9a21b0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617ad52 FUN_14617ad52 body=507 status=ok
// SIG undefined FUN_14617ad52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617ad52(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14c9a22d0 = 0;
  FUN_1446ddc76(&DAT_14c9a22d4,"FNexusSerializeTest_SetDef",1);
  _DAT_14c9a22e0 = 0;
  _DAT_14c9a22e8 = 0;
  _DAT_14c9a22f0 = 0;
  DAT_14c9a22f8 = (void *)0x0;
  _DAT_14c9a2300 = 0;
  _DAT_14c9a2308 = FUN_14598ac06;
  DAT_14c9a2310 = *param_1;
  DAT_14c9a2320 = param_1[2];
  param_1[2] = 0;
  DAT_14c9a2330._0_4_ = (undefined4)param_1[4];
  DAT_14c9a2330._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014c9a2338 = (undefined4)param_1[5];
  uRam000000014c9a233c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14c9a2340 = (undefined4)param_1[6];
  uRam000000014c9a2344 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014c9a2348 = (undefined4)param_1[7];
  uRam000000014c9a234c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14c9a2310 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14c9a22e0 = 0;
  _DAT_14c9a22e8 = local_68;
  _DAT_14c9a22f0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14c9a2300 = CONCAT44(DAT_14c9a2304,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14c9a2304 == 0) {
    _DAT_14c9a2300 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14c9a22f8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14c9a22f8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14c9a22d0) && ((DAT_14c9a2270 == (int *)0x0 || (*DAT_14c9a2270 < DAT_14c9a22d0)))) {
    DAT_14c9a2270 = &DAT_14c9a22d0;
  }
  FUN_14598ace2();
  local_30 = &local_70;
  local_70 = &DAT_14c9a22d0;
  local_38 = &DAT_14c9a22d4;
  FUN_14617af4e(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617af4e FUN_14617af4e body=338 status=ok
// SIG undefined FUN_14617af4e(void)

undefined4 * FUN_14617af4e(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14617b134(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14617b0a2(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c9a2280 - DAT_14c9a22ac;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c9a22c0)) {
      uVar10 = DAT_14c9a22c0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14c9a22b8;
      if (DAT_14c9a22b8 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a22b0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a22c0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c9a22b8;
      if (DAT_14c9a22b8 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a22b0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a22c0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c9a22c0 = iVar9;
      FUN_14617b242();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617b0a2 FUN_14617b0a2 body=145 status=ok
// SIG undefined FUN_14617b0a2(void)

undefined8 FUN_14617b0a2(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c9a2280 - DAT_14c9a22ac != 1) && (DAT_14c9a2280 != DAT_14c9a22ac)) {
    puVar6 = &DAT_14c9a22b0;
    if (DAT_14c9a22b8 != (undefined *)0x0) {
      puVar6 = DAT_14c9a22b8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c9a22c0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c9a2278 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d8f0fc(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14617b134 FUN_14617b134 body=270 status=ok
// SIG undefined FUN_14617b134(void)

int * FUN_14617b134(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9a22a8;
  iVar3 = DAT_14c9a2280;
  if (DAT_14c9a22ac == 0) {
    iVar2 = DAT_14c9a2280 + 1;
    bVar7 = DAT_14c9a2284 == DAT_14c9a2280;
    DAT_14c9a2280 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c9a2278,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9a2288,1);
    puVar4 = DAT_14c9a2298;
    if (DAT_14c9a2298 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a2288;
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
    lVar6 = (longlong)DAT_14c9a22a8;
    DAT_14c9a22a8 = *(int *)(DAT_14c9a2278 + 4 + lVar6 * 0x18);
    DAT_14c9a22ac = DAT_14c9a22ac + -1;
    if (DAT_14c9a22ac != 0) {
      *(undefined4 *)(DAT_14c9a2278 + (longlong)DAT_14c9a22a8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a2288;
  if (DAT_14c9a2298 != (undefined *)0x0) {
    puVar4 = DAT_14c9a2298;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c9a2278;
  return param_1;
}



// FUNCTION 14617b242 FUN_14617b242 body=523 status=ok
// SIG undefined FUN_14617b242(void)

void FUN_14617b242(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a22b8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a22b8,0,0,4);
  }
  uVar3 = DAT_14c9a22c0;
  uVar2 = local_50;
  if (DAT_14c9a22c0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c9a22b0,0,DAT_14c9a22c0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14c9a22b8;
        if (DAT_14c9a22b8 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a22b0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c9a22c0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9a2288;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9a22a0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9a2278;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c9a22c0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c9a22b8;
        if (DAT_14c9a22b8 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a22b0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c9a22c0 - 1U & uVar9) * 4);
        puVar6 = DAT_14c9a22b8;
        if (DAT_14c9a22b8 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a22b0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c9a22c0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617b44e FUN_14617b44e body=507 status=ok
// SIG undefined FUN_14617b44e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617b44e(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14c9a7bd0 = 0;
  FUN_1446ddc76(&DAT_14c9a7bd4,"DeveloperSettings",1);
  _DAT_14c9a7be0 = 0;
  _DAT_14c9a7be8 = 0;
  _DAT_14c9a7bf0 = 0;
  DAT_14c9a7bf8 = (void *)0x0;
  _DAT_14c9a7c00 = 0;
  _DAT_14c9a7c08 = FUN_145b00876;
  DAT_14c9a7c10 = *param_1;
  DAT_14c9a7c20 = param_1[2];
  param_1[2] = 0;
  DAT_14c9a7c30._0_4_ = (undefined4)param_1[4];
  DAT_14c9a7c30._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014c9a7c38 = (undefined4)param_1[5];
  uRam000000014c9a7c3c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14c9a7c40 = (undefined4)param_1[6];
  uRam000000014c9a7c44 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014c9a7c48 = (undefined4)param_1[7];
  uRam000000014c9a7c4c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14c9a7c10 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14c9a7be0 = 0;
  _DAT_14c9a7be8 = local_68;
  _DAT_14c9a7bf0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14c9a7c00 = CONCAT44(DAT_14c9a7c04,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14c9a7c04 == 0) {
    _DAT_14c9a7c00 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14c9a7bf8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14c9a7bf8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14c9a7bd0) && ((DAT_14c9a7b58 == (int *)0x0 || (*DAT_14c9a7b58 < DAT_14c9a7bd0)))) {
    DAT_14c9a7b58 = &DAT_14c9a7bd0;
  }
  FUN_145b007de();
  local_30 = &local_70;
  local_70 = &DAT_14c9a7bd0;
  local_38 = &DAT_14c9a7bd4;
  FUN_14617b64a(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617b64a FUN_14617b64a body=338 status=ok
// SIG undefined FUN_14617b64a(void)

undefined4 * FUN_14617b64a(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14617b830(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14617b79e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14c9a7b68 - DAT_14c9a7b94;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14c9a7ba8)) {
      uVar10 = DAT_14c9a7ba8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14c9a7ba0;
      if (DAT_14c9a7ba0 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a7b98;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a7ba8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14c9a7ba0;
      if (DAT_14c9a7ba0 == (undefined *)0x0) {
        puVar7 = &DAT_14c9a7b98;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14c9a7ba8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14c9a7ba8 = iVar9;
      FUN_14617b93e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617b79e FUN_14617b79e body=145 status=ok
// SIG undefined FUN_14617b79e(void)

undefined8 FUN_14617b79e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14c9a7b68 - DAT_14c9a7b94 != 1) && (DAT_14c9a7b68 != DAT_14c9a7b94)) {
    puVar6 = &DAT_14c9a7b98;
    if (DAT_14c9a7ba0 != (undefined *)0x0) {
      puVar6 = DAT_14c9a7ba0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c9a7ba8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14c9a7b60 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d8f8ac(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14617b830 FUN_14617b830 body=270 status=ok
// SIG undefined FUN_14617b830(void)

int * FUN_14617b830(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9a7b90;
  iVar3 = DAT_14c9a7b68;
  if (DAT_14c9a7b94 == 0) {
    iVar2 = DAT_14c9a7b68 + 1;
    bVar7 = DAT_14c9a7b6c == DAT_14c9a7b68;
    DAT_14c9a7b68 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14c9a7b60,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c9a7b70,1);
    puVar4 = DAT_14c9a7b80;
    if (DAT_14c9a7b80 == (undefined *)0x0) {
      puVar4 = &DAT_14c9a7b70;
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
    lVar6 = (longlong)DAT_14c9a7b90;
    DAT_14c9a7b90 = *(int *)(DAT_14c9a7b60 + 4 + lVar6 * 0x18);
    DAT_14c9a7b94 = DAT_14c9a7b94 + -1;
    if (DAT_14c9a7b94 != 0) {
      *(undefined4 *)(DAT_14c9a7b60 + (longlong)DAT_14c9a7b90 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c9a7b70;
  if (DAT_14c9a7b80 != (undefined *)0x0) {
    puVar4 = DAT_14c9a7b80;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14c9a7b60;
  return param_1;
}



// FUNCTION 14617b93e FUN_14617b93e body=523 status=ok
// SIG undefined FUN_14617b93e(void)

void FUN_14617b93e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a7ba0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9a7ba0,0,0,4);
  }
  uVar3 = DAT_14c9a7ba8;
  uVar2 = local_50;
  if (DAT_14c9a7ba8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c9a7b98,0,DAT_14c9a7ba8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14c9a7ba0;
        if (DAT_14c9a7ba0 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a7b98;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c9a7ba8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9a7b70;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9a7b88 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9a7b60;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c9a7ba8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14c9a7ba0;
        if (DAT_14c9a7ba0 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a7b98;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c9a7ba8 - 1U & uVar9) * 4);
        puVar6 = DAT_14c9a7ba0;
        if (DAT_14c9a7ba0 == (undefined *)0x0) {
          puVar6 = &DAT_14c9a7b98;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14c9a7ba8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617bb4a FUN_14617bb4a body=507 status=ok
// SIG undefined FUN_14617bb4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617bb4a(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb54270 = 0;
  FUN_1446ddc76(&DAT_14cb54274,"TimeOfDayCycle",1);
  _DAT_14cb54280 = 0;
  _DAT_14cb54288 = 0;
  _DAT_14cb54290 = 0;
  DAT_14cb54298 = (void *)0x0;
  _DAT_14cb542a0 = 0;
  _DAT_14cb542a8 = FUN_14101b99a;
  DAT_14cb542b0 = *param_1;
  DAT_14cb542c0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb542d0._0_4_ = (undefined4)param_1[4];
  DAT_14cb542d0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb542d8 = (undefined4)param_1[5];
  uRam000000014cb542dc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb542e0 = (undefined4)param_1[6];
  uRam000000014cb542e4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb542e8 = (undefined4)param_1[7];
  uRam000000014cb542ec = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb542b0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb54280 = 0;
  _DAT_14cb54288 = local_68;
  _DAT_14cb54290 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb542a0 = CONCAT44(DAT_14cb542a4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb542a4 == 0) {
    _DAT_14cb542a0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb54298,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb54298,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb54270) && ((DAT_14cb54200 == (int *)0x0 || (*DAT_14cb54200 < DAT_14cb54270)))) {
    DAT_14cb54200 = &DAT_14cb54270;
  }
  FUN_14101b902();
  local_30 = &local_70;
  local_70 = &DAT_14cb54270;
  local_38 = &DAT_14cb54274;
  FUN_14617bd46(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617bd46 FUN_14617bd46 body=338 status=ok
// SIG undefined FUN_14617bd46(void)

undefined4 * FUN_14617bd46(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14617bf2c(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14617be9a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb54210 - DAT_14cb5423c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb54250)) {
      uVar10 = DAT_14cb54250 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb54248;
      if (DAT_14cb54248 == (undefined *)0x0) {
        puVar7 = &DAT_14cb54240;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb54250 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb54248;
      if (DAT_14cb54248 == (undefined *)0x0) {
        puVar7 = &DAT_14cb54240;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb54250 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb54250 = iVar9;
      FUN_14617c03a();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617be9a FUN_14617be9a body=145 status=ok
// SIG undefined FUN_14617be9a(void)

undefined8 FUN_14617be9a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb54210 - DAT_14cb5423c != 1) && (DAT_14cb54210 != DAT_14cb5423c)) {
    puVar6 = &DAT_14cb54240;
    if (DAT_14cb54248 != (undefined *)0x0) {
      puVar6 = DAT_14cb54248;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb54250 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb54208 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d909f8(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14617bf2c FUN_14617bf2c body=270 status=ok
// SIG undefined FUN_14617bf2c(void)

int * FUN_14617bf2c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb54238;
  iVar3 = DAT_14cb54210;
  if (DAT_14cb5423c == 0) {
    iVar2 = DAT_14cb54210 + 1;
    bVar7 = DAT_14cb54214 == DAT_14cb54210;
    DAT_14cb54210 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb54208,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb54218,1);
    puVar4 = DAT_14cb54228;
    if (DAT_14cb54228 == (undefined *)0x0) {
      puVar4 = &DAT_14cb54218;
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
    lVar6 = (longlong)DAT_14cb54238;
    DAT_14cb54238 = *(int *)(DAT_14cb54208 + 4 + lVar6 * 0x18);
    DAT_14cb5423c = DAT_14cb5423c + -1;
    if (DAT_14cb5423c != 0) {
      *(undefined4 *)(DAT_14cb54208 + (longlong)DAT_14cb54238 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb54218;
  if (DAT_14cb54228 != (undefined *)0x0) {
    puVar4 = DAT_14cb54228;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb54208;
  return param_1;
}



// FUNCTION 14617c03a FUN_14617c03a body=523 status=ok
// SIG undefined FUN_14617c03a(void)

void FUN_14617c03a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb54248 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb54248,0,0,4);
  }
  uVar3 = DAT_14cb54250;
  uVar2 = local_50;
  if (DAT_14cb54250 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb54240,0,DAT_14cb54250,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb54248;
        if (DAT_14cb54248 == (undefined *)0x0) {
          puVar6 = &DAT_14cb54240;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb54250 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb54218;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb54230 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb54208;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb54250 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb54248;
        if (DAT_14cb54248 == (undefined *)0x0) {
          puVar6 = &DAT_14cb54240;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb54250 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb54248;
        if (DAT_14cb54248 == (undefined *)0x0) {
          puVar6 = &DAT_14cb54240;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb54250 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617c246 FUN_14617c246 body=507 status=ok
// SIG undefined FUN_14617c246(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617c246(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb6fe30 = 0;
  FUN_1446ddc76(&DAT_14cb6fe34,"ActivityRequest",1);
  _DAT_14cb6fe40 = 0;
  _DAT_14cb6fe48 = 0;
  _DAT_14cb6fe50 = 0;
  DAT_14cb6fe58 = (void *)0x0;
  _DAT_14cb6fe60 = 0;
  _DAT_14cb6fe68 = FUN_140df906c;
  DAT_14cb6fe70 = *param_1;
  DAT_14cb6fe80 = param_1[2];
  param_1[2] = 0;
  DAT_14cb6fe90._0_4_ = (undefined4)param_1[4];
  DAT_14cb6fe90._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb6fe98 = (undefined4)param_1[5];
  uRam000000014cb6fe9c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb6fea0 = (undefined4)param_1[6];
  uRam000000014cb6fea4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb6fea8 = (undefined4)param_1[7];
  uRam000000014cb6feac = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb6fe70 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb6fe40 = 0;
  _DAT_14cb6fe48 = local_68;
  _DAT_14cb6fe50 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb6fe60 = CONCAT44(DAT_14cb6fe64,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb6fe64 == 0) {
    _DAT_14cb6fe60 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb6fe58,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb6fe58,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb6fe30) && ((DAT_14cb6fdb8 == (int *)0x0 || (*DAT_14cb6fdb8 < DAT_14cb6fe30)))) {
    DAT_14cb6fdb8 = &DAT_14cb6fe30;
  }
  FUN_140df9148();
  local_30 = &local_70;
  local_70 = &DAT_14cb6fe30;
  local_38 = &DAT_14cb6fe34;
  FUN_14617c442(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617c442 FUN_14617c442 body=338 status=ok
// SIG undefined FUN_14617c442(void)

undefined4 * FUN_14617c442(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14617c628(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14617c596(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb6fdc8 - DAT_14cb6fdf4;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb6fe08)) {
      uVar10 = DAT_14cb6fe08 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb6fe00;
      if (DAT_14cb6fe00 == (undefined *)0x0) {
        puVar7 = &DAT_14cb6fdf8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb6fe08 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb6fe00;
      if (DAT_14cb6fe00 == (undefined *)0x0) {
        puVar7 = &DAT_14cb6fdf8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb6fe08 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb6fe08 = iVar9;
      FUN_14617c736();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617c596 FUN_14617c596 body=145 status=ok
// SIG undefined FUN_14617c596(void)

undefined8 FUN_14617c596(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb6fdc8 - DAT_14cb6fdf4 != 1) && (DAT_14cb6fdc8 != DAT_14cb6fdf4)) {
    puVar6 = &DAT_14cb6fdf8;
    if (DAT_14cb6fe00 != (undefined *)0x0) {
      puVar6 = DAT_14cb6fe00;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb6fe08 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb6fdc0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d90be4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14617c628 FUN_14617c628 body=270 status=ok
// SIG undefined FUN_14617c628(void)

int * FUN_14617c628(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb6fdf0;
  iVar3 = DAT_14cb6fdc8;
  if (DAT_14cb6fdf4 == 0) {
    iVar2 = DAT_14cb6fdc8 + 1;
    bVar7 = DAT_14cb6fdcc == DAT_14cb6fdc8;
    DAT_14cb6fdc8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb6fdc0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb6fdd0,1);
    puVar4 = DAT_14cb6fde0;
    if (DAT_14cb6fde0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb6fdd0;
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
    lVar6 = (longlong)DAT_14cb6fdf0;
    DAT_14cb6fdf0 = *(int *)(DAT_14cb6fdc0 + 4 + lVar6 * 0x18);
    DAT_14cb6fdf4 = DAT_14cb6fdf4 + -1;
    if (DAT_14cb6fdf4 != 0) {
      *(undefined4 *)(DAT_14cb6fdc0 + (longlong)DAT_14cb6fdf0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb6fdd0;
  if (DAT_14cb6fde0 != (undefined *)0x0) {
    puVar4 = DAT_14cb6fde0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb6fdc0;
  return param_1;
}



// FUNCTION 14617c736 FUN_14617c736 body=523 status=ok
// SIG undefined FUN_14617c736(void)

void FUN_14617c736(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6fe00 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb6fe00,0,0,4);
  }
  uVar3 = DAT_14cb6fe08;
  uVar2 = local_50;
  if (DAT_14cb6fe08 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb6fdf8,0,DAT_14cb6fe08,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb6fe00;
        if (DAT_14cb6fe00 == (undefined *)0x0) {
          puVar6 = &DAT_14cb6fdf8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb6fe08 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb6fdd0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb6fde8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb6fdc0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb6fe08 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb6fe00;
        if (DAT_14cb6fe00 == (undefined *)0x0) {
          puVar6 = &DAT_14cb6fdf8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb6fe08 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb6fe00;
        if (DAT_14cb6fe00 == (undefined *)0x0) {
          puVar6 = &DAT_14cb6fdf8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb6fe08 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617c942 FUN_14617c942 body=507 status=ok
// SIG undefined FUN_14617c942(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617c942(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb6ff40 = 0;
  FUN_1446ddc76(&DAT_14cb6ff44,"ActivityRequestSettings",1);
  _DAT_14cb6ff50 = 0;
  _DAT_14cb6ff58 = 0;
  _DAT_14cb6ff60 = 0;
  DAT_14cb6ff68 = (void *)0x0;
  _DAT_14cb6ff70 = 0;
  _DAT_14cb6ff78 = FUN_140f4b65e;
  DAT_14cb6ff80 = *param_1;
  DAT_14cb6ff90 = param_1[2];
  param_1[2] = 0;
  DAT_14cb6ffa0._0_4_ = (undefined4)param_1[4];
  DAT_14cb6ffa0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb6ffa8 = (undefined4)param_1[5];
  uRam000000014cb6ffac = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb6ffb0 = (undefined4)param_1[6];
  uRam000000014cb6ffb4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb6ffb8 = (undefined4)param_1[7];
  uRam000000014cb6ffbc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb6ff80 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb6ff50 = 0;
  _DAT_14cb6ff58 = local_68;
  _DAT_14cb6ff60 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb6ff70 = CONCAT44(DAT_14cb6ff74,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb6ff74 == 0) {
    _DAT_14cb6ff70 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb6ff68,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb6ff68,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb6ff40) && ((DAT_14cb6fed0 == (int *)0x0 || (*DAT_14cb6fed0 < DAT_14cb6ff40)))) {
    DAT_14cb6fed0 = &DAT_14cb6ff40;
  }
  FUN_140e50948();
  local_30 = &local_70;
  local_70 = &DAT_14cb6ff40;
  local_38 = &DAT_14cb6ff44;
  FUN_14617cb3e(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617cb3e FUN_14617cb3e body=338 status=ok
// SIG undefined FUN_14617cb3e(void)

undefined4 * FUN_14617cb3e(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14617cd24(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14617cc92(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb6fee0 - DAT_14cb6ff0c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb6ff20)) {
      uVar10 = DAT_14cb6ff20 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb6ff18;
      if (DAT_14cb6ff18 == (undefined *)0x0) {
        puVar7 = &DAT_14cb6ff10;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb6ff20 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb6ff18;
      if (DAT_14cb6ff18 == (undefined *)0x0) {
        puVar7 = &DAT_14cb6ff10;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb6ff20 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb6ff20 = iVar9;
      FUN_14617ce32();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617cc92 FUN_14617cc92 body=145 status=ok
// SIG undefined FUN_14617cc92(void)

undefined8 FUN_14617cc92(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb6fee0 - DAT_14cb6ff0c != 1) && (DAT_14cb6fee0 != DAT_14cb6ff0c)) {
    puVar6 = &DAT_14cb6ff10;
    if (DAT_14cb6ff18 != (undefined *)0x0) {
      puVar6 = DAT_14cb6ff18;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb6ff20 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb6fed8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d90dd0(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14617cd24 FUN_14617cd24 body=270 status=ok
// SIG undefined FUN_14617cd24(void)

int * FUN_14617cd24(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb6ff08;
  iVar3 = DAT_14cb6fee0;
  if (DAT_14cb6ff0c == 0) {
    iVar2 = DAT_14cb6fee0 + 1;
    bVar7 = DAT_14cb6fee4 == DAT_14cb6fee0;
    DAT_14cb6fee0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb6fed8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb6fee8,1);
    puVar4 = DAT_14cb6fef8;
    if (DAT_14cb6fef8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb6fee8;
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
    lVar6 = (longlong)DAT_14cb6ff08;
    DAT_14cb6ff08 = *(int *)(DAT_14cb6fed8 + 4 + lVar6 * 0x18);
    DAT_14cb6ff0c = DAT_14cb6ff0c + -1;
    if (DAT_14cb6ff0c != 0) {
      *(undefined4 *)(DAT_14cb6fed8 + (longlong)DAT_14cb6ff08 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb6fee8;
  if (DAT_14cb6fef8 != (undefined *)0x0) {
    puVar4 = DAT_14cb6fef8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb6fed8;
  return param_1;
}



// FUNCTION 14617ce32 FUN_14617ce32 body=523 status=ok
// SIG undefined FUN_14617ce32(void)

void FUN_14617ce32(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6ff18 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb6ff18,0,0,4);
  }
  uVar3 = DAT_14cb6ff20;
  uVar2 = local_50;
  if (DAT_14cb6ff20 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb6ff10,0,DAT_14cb6ff20,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb6ff18;
        if (DAT_14cb6ff18 == (undefined *)0x0) {
          puVar6 = &DAT_14cb6ff10;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb6ff20 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb6fee8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb6ff00 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb6fed8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb6ff20 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb6ff18;
        if (DAT_14cb6ff18 == (undefined *)0x0) {
          puVar6 = &DAT_14cb6ff10;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb6ff20 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb6ff18;
        if (DAT_14cb6ff18 == (undefined *)0x0) {
          puVar6 = &DAT_14cb6ff10;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb6ff20 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617d03e FUN_14617d03e body=507 status=ok
// SIG undefined FUN_14617d03e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617d03e(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb702e0 = 0;
  FUN_1446ddc76(&DAT_14cb702e4,"stamp_context",1);
  _DAT_14cb702f0 = 0;
  _DAT_14cb702f8 = 0;
  _DAT_14cb70300 = 0;
  DAT_14cb70308 = (void *)0x0;
  _DAT_14cb70310 = 0;
  _DAT_14cb70318 = FUN_140cad1ac;
  DAT_14cb70320 = *param_1;
  DAT_14cb70330 = param_1[2];
  param_1[2] = 0;
  DAT_14cb70340._0_4_ = (undefined4)param_1[4];
  DAT_14cb70340._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb70348 = (undefined4)param_1[5];
  uRam000000014cb7034c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb70350 = (undefined4)param_1[6];
  uRam000000014cb70354 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb70358 = (undefined4)param_1[7];
  uRam000000014cb7035c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb70320 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb702f0 = 0;
  _DAT_14cb702f8 = local_68;
  _DAT_14cb70300 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb70310 = CONCAT44(DAT_14cb70314,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb70314 == 0) {
    _DAT_14cb70310 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb70308,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb70308,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb702e0) && ((DAT_14cb70268 == (int *)0x0 || (*DAT_14cb70268 < DAT_14cb702e0)))) {
    DAT_14cb70268 = &DAT_14cb702e0;
  }
  FUN_140cad282();
  local_30 = &local_70;
  local_70 = &DAT_14cb702e0;
  local_38 = &DAT_14cb702e4;
  FUN_14617d23a(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617d23a FUN_14617d23a body=338 status=ok
// SIG undefined FUN_14617d23a(void)

undefined4 * FUN_14617d23a(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14617d420(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14617d38e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb70278 - DAT_14cb702a4;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb702b8)) {
      uVar10 = DAT_14cb702b8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb702b0;
      if (DAT_14cb702b0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb702a8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb702b8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb702b0;
      if (DAT_14cb702b0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb702a8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb702b8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb702b8 = iVar9;
      FUN_14617d52e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617d38e FUN_14617d38e body=145 status=ok
// SIG undefined FUN_14617d38e(void)

undefined8 FUN_14617d38e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb70278 - DAT_14cb702a4 != 1) && (DAT_14cb70278 != DAT_14cb702a4)) {
    puVar6 = &DAT_14cb702a8;
    if (DAT_14cb702b0 != (undefined *)0x0) {
      puVar6 = DAT_14cb702b0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb702b8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb70270 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d90fbc(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14617d420 FUN_14617d420 body=270 status=ok
// SIG undefined FUN_14617d420(void)

int * FUN_14617d420(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb702a0;
  iVar3 = DAT_14cb70278;
  if (DAT_14cb702a4 == 0) {
    iVar2 = DAT_14cb70278 + 1;
    bVar7 = DAT_14cb7027c == DAT_14cb70278;
    DAT_14cb70278 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb70270,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb70280,1);
    puVar4 = DAT_14cb70290;
    if (DAT_14cb70290 == (undefined *)0x0) {
      puVar4 = &DAT_14cb70280;
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
    lVar6 = (longlong)DAT_14cb702a0;
    DAT_14cb702a0 = *(int *)(DAT_14cb70270 + 4 + lVar6 * 0x18);
    DAT_14cb702a4 = DAT_14cb702a4 + -1;
    if (DAT_14cb702a4 != 0) {
      *(undefined4 *)(DAT_14cb70270 + (longlong)DAT_14cb702a0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb70280;
  if (DAT_14cb70290 != (undefined *)0x0) {
    puVar4 = DAT_14cb70290;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb70270;
  return param_1;
}



// FUNCTION 14617d52e FUN_14617d52e body=523 status=ok
// SIG undefined FUN_14617d52e(void)

void FUN_14617d52e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb702b0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb702b0,0,0,4);
  }
  uVar3 = DAT_14cb702b8;
  uVar2 = local_50;
  if (DAT_14cb702b8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb702a8,0,DAT_14cb702b8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb702b0;
        if (DAT_14cb702b0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb702a8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb702b8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb70280;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb70298 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb70270;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb702b8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb702b0;
        if (DAT_14cb702b0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb702a8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb702b8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb702b0;
        if (DAT_14cb702b0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb702a8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb702b8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617d73a FUN_14617d73a body=507 status=ok
// SIG undefined FUN_14617d73a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617d73a(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb70430 = 0;
  FUN_1446ddc76(&DAT_14cb70434,"stamp_layout",1);
  _DAT_14cb70440 = 0;
  _DAT_14cb70448 = 0;
  _DAT_14cb70450 = 0;
  DAT_14cb70458 = (void *)0x0;
  _DAT_14cb70460 = 0;
  _DAT_14cb70468 = FUN_140b32186;
  DAT_14cb70470 = *param_1;
  DAT_14cb70480 = param_1[2];
  param_1[2] = 0;
  DAT_14cb70490._0_4_ = (undefined4)param_1[4];
  DAT_14cb70490._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb70498 = (undefined4)param_1[5];
  uRam000000014cb7049c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb704a0 = (undefined4)param_1[6];
  uRam000000014cb704a4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb704a8 = (undefined4)param_1[7];
  uRam000000014cb704ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb70470 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb70440 = 0;
  _DAT_14cb70448 = local_68;
  _DAT_14cb70450 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb70460 = CONCAT44(DAT_14cb70464,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb70464 == 0) {
    _DAT_14cb70460 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb70458,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb70458,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb70430) && ((DAT_14cb703c0 == (int *)0x0 || (*DAT_14cb703c0 < DAT_14cb70430)))) {
    DAT_14cb703c0 = &DAT_14cb70430;
  }
  FUN_140901ff8();
  local_30 = &local_70;
  local_70 = &DAT_14cb70430;
  local_38 = &DAT_14cb70434;
  FUN_14617d936(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617d936 FUN_14617d936 body=338 status=ok
// SIG undefined FUN_14617d936(void)

undefined4 * FUN_14617d936(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14617db1c(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14617da8a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb703d0 - DAT_14cb703fc;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb70410)) {
      uVar10 = DAT_14cb70410 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb70408;
      if (DAT_14cb70408 == (undefined *)0x0) {
        puVar7 = &DAT_14cb70400;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb70410 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb70408;
      if (DAT_14cb70408 == (undefined *)0x0) {
        puVar7 = &DAT_14cb70400;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb70410 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb70410 = iVar9;
      FUN_14617dc2a();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617da8a FUN_14617da8a body=145 status=ok
// SIG undefined FUN_14617da8a(void)

undefined8 FUN_14617da8a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb703d0 - DAT_14cb703fc != 1) && (DAT_14cb703d0 != DAT_14cb703fc)) {
    puVar6 = &DAT_14cb70400;
    if (DAT_14cb70408 != (undefined *)0x0) {
      puVar6 = DAT_14cb70408;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb70410 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb703c8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d911a8(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14617db1c FUN_14617db1c body=270 status=ok
// SIG undefined FUN_14617db1c(void)

int * FUN_14617db1c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb703f8;
  iVar3 = DAT_14cb703d0;
  if (DAT_14cb703fc == 0) {
    iVar2 = DAT_14cb703d0 + 1;
    bVar7 = DAT_14cb703d4 == DAT_14cb703d0;
    DAT_14cb703d0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb703c8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb703d8,1);
    puVar4 = DAT_14cb703e8;
    if (DAT_14cb703e8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb703d8;
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
    lVar6 = (longlong)DAT_14cb703f8;
    DAT_14cb703f8 = *(int *)(DAT_14cb703c8 + 4 + lVar6 * 0x18);
    DAT_14cb703fc = DAT_14cb703fc + -1;
    if (DAT_14cb703fc != 0) {
      *(undefined4 *)(DAT_14cb703c8 + (longlong)DAT_14cb703f8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb703d8;
  if (DAT_14cb703e8 != (undefined *)0x0) {
    puVar4 = DAT_14cb703e8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb703c8;
  return param_1;
}



// FUNCTION 14617dc2a FUN_14617dc2a body=523 status=ok
// SIG undefined FUN_14617dc2a(void)

void FUN_14617dc2a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb70408 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb70408,0,0,4);
  }
  uVar3 = DAT_14cb70410;
  uVar2 = local_50;
  if (DAT_14cb70410 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb70400,0,DAT_14cb70410,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb70408;
        if (DAT_14cb70408 == (undefined *)0x0) {
          puVar6 = &DAT_14cb70400;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb70410 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb703d8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb703f0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb703c8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb70410 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb70408;
        if (DAT_14cb70408 == (undefined *)0x0) {
          puVar6 = &DAT_14cb70400;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb70410 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb70408;
        if (DAT_14cb70408 == (undefined *)0x0) {
          puVar6 = &DAT_14cb70400;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb70410 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617de36 FUN_14617de36 body=507 status=ok
// SIG undefined FUN_14617de36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617de36(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb70540 = 0;
  FUN_1446ddc76(&DAT_14cb70544,"stamp_layout_group",1);
  _DAT_14cb70550 = 0;
  _DAT_14cb70558 = 0;
  _DAT_14cb70560 = 0;
  DAT_14cb70568 = (void *)0x0;
  _DAT_14cb70570 = 0;
  _DAT_14cb70578 = FUN_140f9938a;
  DAT_14cb70580 = *param_1;
  DAT_14cb70590 = param_1[2];
  param_1[2] = 0;
  DAT_14cb705a0._0_4_ = (undefined4)param_1[4];
  DAT_14cb705a0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb705a8 = (undefined4)param_1[5];
  uRam000000014cb705ac = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb705b0 = (undefined4)param_1[6];
  uRam000000014cb705b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb705b8 = (undefined4)param_1[7];
  uRam000000014cb705bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb70580 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb70550 = 0;
  _DAT_14cb70558 = local_68;
  _DAT_14cb70560 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb70570 = CONCAT44(DAT_14cb70574,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb70574 == 0) {
    _DAT_14cb70570 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb70568,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb70568,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb70540) && ((DAT_14cb704d0 == (int *)0x0 || (*DAT_14cb704d0 < DAT_14cb70540)))) {
    DAT_14cb704d0 = &DAT_14cb70540;
  }
  FUN_140ea96c6();
  local_30 = &local_70;
  local_70 = &DAT_14cb70540;
  local_38 = &DAT_14cb70544;
  FUN_14617e032(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617e032 FUN_14617e032 body=338 status=ok
// SIG undefined FUN_14617e032(void)

undefined4 * FUN_14617e032(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14617e218(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14617e186(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb704e0 - DAT_14cb7050c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb70520)) {
      uVar10 = DAT_14cb70520 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb70518;
      if (DAT_14cb70518 == (undefined *)0x0) {
        puVar7 = &DAT_14cb70510;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb70520 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb70518;
      if (DAT_14cb70518 == (undefined *)0x0) {
        puVar7 = &DAT_14cb70510;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb70520 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb70520 = iVar9;
      FUN_14617e326();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617e186 FUN_14617e186 body=145 status=ok
// SIG undefined FUN_14617e186(void)

undefined8 FUN_14617e186(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb704e0 - DAT_14cb7050c != 1) && (DAT_14cb704e0 != DAT_14cb7050c)) {
    puVar6 = &DAT_14cb70510;
    if (DAT_14cb70518 != (undefined *)0x0) {
      puVar6 = DAT_14cb70518;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb70520 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb704d8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d91394(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14617e218 FUN_14617e218 body=270 status=ok
// SIG undefined FUN_14617e218(void)

int * FUN_14617e218(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb70508;
  iVar3 = DAT_14cb704e0;
  if (DAT_14cb7050c == 0) {
    iVar2 = DAT_14cb704e0 + 1;
    bVar7 = DAT_14cb704e4 == DAT_14cb704e0;
    DAT_14cb704e0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb704d8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb704e8,1);
    puVar4 = DAT_14cb704f8;
    if (DAT_14cb704f8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb704e8;
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
    lVar6 = (longlong)DAT_14cb70508;
    DAT_14cb70508 = *(int *)(DAT_14cb704d8 + 4 + lVar6 * 0x18);
    DAT_14cb7050c = DAT_14cb7050c + -1;
    if (DAT_14cb7050c != 0) {
      *(undefined4 *)(DAT_14cb704d8 + (longlong)DAT_14cb70508 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb704e8;
  if (DAT_14cb704f8 != (undefined *)0x0) {
    puVar4 = DAT_14cb704f8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb704d8;
  return param_1;
}



// FUNCTION 14617e326 FUN_14617e326 body=523 status=ok
// SIG undefined FUN_14617e326(void)

void FUN_14617e326(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb70518 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb70518,0,0,4);
  }
  uVar3 = DAT_14cb70520;
  uVar2 = local_50;
  if (DAT_14cb70520 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb70510,0,DAT_14cb70520,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb70518;
        if (DAT_14cb70518 == (undefined *)0x0) {
          puVar6 = &DAT_14cb70510;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb70520 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb704e8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb70500 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb704d8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb70520 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb70518;
        if (DAT_14cb70518 == (undefined *)0x0) {
          puVar6 = &DAT_14cb70510;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb70520 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb70518;
        if (DAT_14cb70518 == (undefined *)0x0) {
          puVar6 = &DAT_14cb70510;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb70520 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617e532 FUN_14617e532 body=507 status=ok
// SIG undefined FUN_14617e532(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617e532(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb70aa0 = 0;
  FUN_1446ddc76(&DAT_14cb70aa4,"stamp_map_initialization",1);
  _DAT_14cb70ab0 = 0;
  _DAT_14cb70ab8 = 0;
  _DAT_14cb70ac0 = 0;
  DAT_14cb70ac8 = (void *)0x0;
  _DAT_14cb70ad0 = 0;
  _DAT_14cb70ad8 = FUN_145aea320;
  DAT_14cb70ae0 = *param_1;
  DAT_14cb70af0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb70b00._0_4_ = (undefined4)param_1[4];
  DAT_14cb70b00._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb70b08 = (undefined4)param_1[5];
  uRam000000014cb70b0c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb70b10 = (undefined4)param_1[6];
  uRam000000014cb70b14 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb70b18 = (undefined4)param_1[7];
  uRam000000014cb70b1c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb70ae0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb70ab0 = 0;
  _DAT_14cb70ab8 = local_68;
  _DAT_14cb70ac0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb70ad0 = CONCAT44(DAT_14cb70ad4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb70ad4 == 0) {
    _DAT_14cb70ad0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb70ac8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb70ac8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb70aa0) && ((DAT_14cb70a30 == (int *)0x0 || (*DAT_14cb70a30 < DAT_14cb70aa0)))) {
    DAT_14cb70a30 = &DAT_14cb70aa0;
  }
  FUN_145aea416();
  local_30 = &local_70;
  local_70 = &DAT_14cb70aa0;
  local_38 = &DAT_14cb70aa4;
  FUN_14617e72e(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617e72e FUN_14617e72e body=338 status=ok
// SIG undefined FUN_14617e72e(void)

undefined4 * FUN_14617e72e(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14617e914(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14617e882(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb70a40 - DAT_14cb70a6c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb70a80)) {
      uVar10 = DAT_14cb70a80 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb70a78;
      if (DAT_14cb70a78 == (undefined *)0x0) {
        puVar7 = &DAT_14cb70a70;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb70a80 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb70a78;
      if (DAT_14cb70a78 == (undefined *)0x0) {
        puVar7 = &DAT_14cb70a70;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb70a80 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb70a80 = iVar9;
      FUN_14617ea22();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617e882 FUN_14617e882 body=145 status=ok
// SIG undefined FUN_14617e882(void)

undefined8 FUN_14617e882(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb70a40 - DAT_14cb70a6c != 1) && (DAT_14cb70a40 != DAT_14cb70a6c)) {
    puVar6 = &DAT_14cb70a70;
    if (DAT_14cb70a78 != (undefined *)0x0) {
      puVar6 = DAT_14cb70a78;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb70a80 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb70a38 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9176c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14617e914 FUN_14617e914 body=270 status=ok
// SIG undefined FUN_14617e914(void)

int * FUN_14617e914(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb70a68;
  iVar3 = DAT_14cb70a40;
  if (DAT_14cb70a6c == 0) {
    iVar2 = DAT_14cb70a40 + 1;
    bVar7 = DAT_14cb70a44 == DAT_14cb70a40;
    DAT_14cb70a40 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb70a38,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb70a48,1);
    puVar4 = DAT_14cb70a58;
    if (DAT_14cb70a58 == (undefined *)0x0) {
      puVar4 = &DAT_14cb70a48;
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
    lVar6 = (longlong)DAT_14cb70a68;
    DAT_14cb70a68 = *(int *)(DAT_14cb70a38 + 4 + lVar6 * 0x18);
    DAT_14cb70a6c = DAT_14cb70a6c + -1;
    if (DAT_14cb70a6c != 0) {
      *(undefined4 *)(DAT_14cb70a38 + (longlong)DAT_14cb70a68 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb70a48;
  if (DAT_14cb70a58 != (undefined *)0x0) {
    puVar4 = DAT_14cb70a58;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb70a38;
  return param_1;
}



// FUNCTION 14617ea22 FUN_14617ea22 body=523 status=ok
// SIG undefined FUN_14617ea22(void)

void FUN_14617ea22(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb70a78 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb70a78,0,0,4);
  }
  uVar3 = DAT_14cb70a80;
  uVar2 = local_50;
  if (DAT_14cb70a80 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb70a70,0,DAT_14cb70a80,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb70a78;
        if (DAT_14cb70a78 == (undefined *)0x0) {
          puVar6 = &DAT_14cb70a70;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb70a80 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb70a48;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb70a60 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb70a38;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb70a80 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb70a78;
        if (DAT_14cb70a78 == (undefined *)0x0) {
          puVar6 = &DAT_14cb70a70;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb70a80 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb70a78;
        if (DAT_14cb70a78 == (undefined *)0x0) {
          puVar6 = &DAT_14cb70a70;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb70a80 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617ec2e FUN_14617ec2e body=507 status=ok
// SIG undefined FUN_14617ec2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617ec2e(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb75360 = 0;
  FUN_1446ddc76(&DAT_14cb75364,"camera_mode",1);
  _DAT_14cb75370 = 0;
  _DAT_14cb75378 = 0;
  _DAT_14cb75380 = 0;
  DAT_14cb75388 = (void *)0x0;
  _DAT_14cb75390 = 0;
  _DAT_14cb75398 = FUN_140fb4012;
  DAT_14cb753a0 = *param_1;
  DAT_14cb753b0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb753c0._0_4_ = (undefined4)param_1[4];
  DAT_14cb753c0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb753c8 = (undefined4)param_1[5];
  uRam000000014cb753cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb753d0 = (undefined4)param_1[6];
  uRam000000014cb753d4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb753d8 = (undefined4)param_1[7];
  uRam000000014cb753dc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb753a0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb75370 = 0;
  _DAT_14cb75378 = local_68;
  _DAT_14cb75380 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb75390 = CONCAT44(DAT_14cb75394,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb75394 == 0) {
    _DAT_14cb75390 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb75388,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb75388,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb75360) && ((DAT_14cb752e8 == (int *)0x0 || (*DAT_14cb752e8 < DAT_14cb75360)))) {
    DAT_14cb752e8 = &DAT_14cb75360;
  }
  FUN_140fb4166();
  local_30 = &local_70;
  local_70 = &DAT_14cb75360;
  local_38 = &DAT_14cb75364;
  FUN_14617ee2a(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617ee2a FUN_14617ee2a body=338 status=ok
// SIG undefined FUN_14617ee2a(void)

undefined4 * FUN_14617ee2a(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14617f010(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14617ef7e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb752f8 - DAT_14cb75324;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb75338)) {
      uVar10 = DAT_14cb75338 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb75330;
      if (DAT_14cb75330 == (undefined *)0x0) {
        puVar7 = &DAT_14cb75328;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb75338 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb75330;
      if (DAT_14cb75330 == (undefined *)0x0) {
        puVar7 = &DAT_14cb75328;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb75338 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb75338 = iVar9;
      FUN_14617f11e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617ef7e FUN_14617ef7e body=145 status=ok
// SIG undefined FUN_14617ef7e(void)

undefined8 FUN_14617ef7e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb752f8 - DAT_14cb75324 != 1) && (DAT_14cb752f8 != DAT_14cb75324)) {
    puVar6 = &DAT_14cb75328;
    if (DAT_14cb75330 != (undefined *)0x0) {
      puVar6 = DAT_14cb75330;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb75338 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb752f0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9362c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14617f010 FUN_14617f010 body=270 status=ok
// SIG undefined FUN_14617f010(void)

int * FUN_14617f010(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb75320;
  iVar3 = DAT_14cb752f8;
  if (DAT_14cb75324 == 0) {
    iVar2 = DAT_14cb752f8 + 1;
    bVar7 = DAT_14cb752fc == DAT_14cb752f8;
    DAT_14cb752f8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb752f0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb75300,1);
    puVar4 = DAT_14cb75310;
    if (DAT_14cb75310 == (undefined *)0x0) {
      puVar4 = &DAT_14cb75300;
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
    lVar6 = (longlong)DAT_14cb75320;
    DAT_14cb75320 = *(int *)(DAT_14cb752f0 + 4 + lVar6 * 0x18);
    DAT_14cb75324 = DAT_14cb75324 + -1;
    if (DAT_14cb75324 != 0) {
      *(undefined4 *)(DAT_14cb752f0 + (longlong)DAT_14cb75320 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb75300;
  if (DAT_14cb75310 != (undefined *)0x0) {
    puVar4 = DAT_14cb75310;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb752f0;
  return param_1;
}



// FUNCTION 14617f11e FUN_14617f11e body=523 status=ok
// SIG undefined FUN_14617f11e(void)

void FUN_14617f11e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb75330 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb75330,0,0,4);
  }
  uVar3 = DAT_14cb75338;
  uVar2 = local_50;
  if (DAT_14cb75338 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb75328,0,DAT_14cb75338,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb75330;
        if (DAT_14cb75330 == (undefined *)0x0) {
          puVar6 = &DAT_14cb75328;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb75338 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb75300;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb75318 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb752f0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb75338 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb75330;
        if (DAT_14cb75330 == (undefined *)0x0) {
          puVar6 = &DAT_14cb75328;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb75338 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb75330;
        if (DAT_14cb75330 == (undefined *)0x0) {
          puVar6 = &DAT_14cb75328;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb75338 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617f32a FUN_14617f32a body=507 status=ok
// SIG undefined FUN_14617f32a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617f32a(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb75520 = 0;
  FUN_1446ddc76(&DAT_14cb75524,"camera_transition",1);
  _DAT_14cb75530 = 0;
  _DAT_14cb75538 = 0;
  _DAT_14cb75540 = 0;
  DAT_14cb75548 = (void *)0x0;
  _DAT_14cb75550 = 0;
  _DAT_14cb75558 = FUN_1458d1e30;
  DAT_14cb75560 = *param_1;
  DAT_14cb75570 = param_1[2];
  param_1[2] = 0;
  DAT_14cb75580._0_4_ = (undefined4)param_1[4];
  DAT_14cb75580._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb75588 = (undefined4)param_1[5];
  uRam000000014cb7558c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb75590 = (undefined4)param_1[6];
  uRam000000014cb75594 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb75598 = (undefined4)param_1[7];
  uRam000000014cb7559c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb75560 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb75530 = 0;
  _DAT_14cb75538 = local_68;
  _DAT_14cb75540 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb75550 = CONCAT44(DAT_14cb75554,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb75554 == 0) {
    _DAT_14cb75550 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb75548,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb75548,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb75520) && ((DAT_14cb754a8 == (int *)0x0 || (*DAT_14cb754a8 < DAT_14cb75520)))) {
    DAT_14cb754a8 = &DAT_14cb75520;
  }
  FUN_1458d1f22();
  local_30 = &local_70;
  local_70 = &DAT_14cb75520;
  local_38 = &DAT_14cb75524;
  FUN_14617f526(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617f526 FUN_14617f526 body=338 status=ok
// SIG undefined FUN_14617f526(void)

undefined4 * FUN_14617f526(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14617f70c(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14617f67a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb754b8 - DAT_14cb754e4;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb754f8)) {
      uVar10 = DAT_14cb754f8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb754f0;
      if (DAT_14cb754f0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb754e8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb754f8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb754f0;
      if (DAT_14cb754f0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb754e8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb754f8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb754f8 = iVar9;
      FUN_14617f81a();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617f67a FUN_14617f67a body=145 status=ok
// SIG undefined FUN_14617f67a(void)

undefined8 FUN_14617f67a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb754b8 - DAT_14cb754e4 != 1) && (DAT_14cb754b8 != DAT_14cb754e4)) {
    puVar6 = &DAT_14cb754e8;
    if (DAT_14cb754f0 != (undefined *)0x0) {
      puVar6 = DAT_14cb754f0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb754f8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb754b0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d93818(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14617f70c FUN_14617f70c body=270 status=ok
// SIG undefined FUN_14617f70c(void)

int * FUN_14617f70c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb754e0;
  iVar3 = DAT_14cb754b8;
  if (DAT_14cb754e4 == 0) {
    iVar2 = DAT_14cb754b8 + 1;
    bVar7 = DAT_14cb754bc == DAT_14cb754b8;
    DAT_14cb754b8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb754b0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb754c0,1);
    puVar4 = DAT_14cb754d0;
    if (DAT_14cb754d0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb754c0;
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
    lVar6 = (longlong)DAT_14cb754e0;
    DAT_14cb754e0 = *(int *)(DAT_14cb754b0 + 4 + lVar6 * 0x18);
    DAT_14cb754e4 = DAT_14cb754e4 + -1;
    if (DAT_14cb754e4 != 0) {
      *(undefined4 *)(DAT_14cb754b0 + (longlong)DAT_14cb754e0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb754c0;
  if (DAT_14cb754d0 != (undefined *)0x0) {
    puVar4 = DAT_14cb754d0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb754b0;
  return param_1;
}



// FUNCTION 14617f81a FUN_14617f81a body=523 status=ok
// SIG undefined FUN_14617f81a(void)

void FUN_14617f81a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb754f0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb754f0,0,0,4);
  }
  uVar3 = DAT_14cb754f8;
  uVar2 = local_50;
  if (DAT_14cb754f8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb754e8,0,DAT_14cb754f8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb754f0;
        if (DAT_14cb754f0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb754e8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb754f8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb754c0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb754d8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb754b0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb754f8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb754f0;
        if (DAT_14cb754f0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb754e8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb754f8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb754f0;
        if (DAT_14cb754f0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb754e8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb754f8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617fa26 FUN_14617fa26 body=507 status=ok
// SIG undefined FUN_14617fa26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14617fa26(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb75940 = 0;
  FUN_1446ddc76(&DAT_14cb75944,"JumpGoal",1);
  _DAT_14cb75950 = 0;
  _DAT_14cb75958 = 0;
  _DAT_14cb75960 = 0;
  DAT_14cb75968 = (void *)0x0;
  _DAT_14cb75970 = 0;
  _DAT_14cb75978 = FUN_145828580;
  DAT_14cb75980 = *param_1;
  DAT_14cb75990 = param_1[2];
  param_1[2] = 0;
  DAT_14cb759a0._0_4_ = (undefined4)param_1[4];
  DAT_14cb759a0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb759a8 = (undefined4)param_1[5];
  uRam000000014cb759ac = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb759b0 = (undefined4)param_1[6];
  uRam000000014cb759b4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb759b8 = (undefined4)param_1[7];
  uRam000000014cb759bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb75980 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb75950 = 0;
  _DAT_14cb75958 = local_68;
  _DAT_14cb75960 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb75970 = CONCAT44(DAT_14cb75974,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb75974 == 0) {
    _DAT_14cb75970 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb75968,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb75968,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb75940) && ((DAT_14cb758c8 == (int *)0x0 || (*DAT_14cb758c8 < DAT_14cb75940)))) {
    DAT_14cb758c8 = &DAT_14cb75940;
  }
  FUN_1410deb04();
  local_30 = &local_70;
  local_70 = &DAT_14cb75940;
  local_38 = &DAT_14cb75944;
  FUN_14617fc22(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14617fc22 FUN_14617fc22 body=338 status=ok
// SIG undefined FUN_14617fc22(void)

undefined4 * FUN_14617fc22(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14617fe08(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14617fd76(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb758d8 - DAT_14cb75904;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb75918)) {
      uVar10 = DAT_14cb75918 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb75910;
      if (DAT_14cb75910 == (undefined *)0x0) {
        puVar7 = &DAT_14cb75908;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb75918 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb75910;
      if (DAT_14cb75910 == (undefined *)0x0) {
        puVar7 = &DAT_14cb75908;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb75918 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb75918 = iVar9;
      FUN_14617ff16();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14617fd76 FUN_14617fd76 body=145 status=ok
// SIG undefined FUN_14617fd76(void)

undefined8 FUN_14617fd76(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb758d8 - DAT_14cb75904 != 1) && (DAT_14cb758d8 != DAT_14cb75904)) {
    puVar6 = &DAT_14cb75908;
    if (DAT_14cb75910 != (undefined *)0x0) {
      puVar6 = DAT_14cb75910;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb75918 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb758d0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d93bf0(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14617fe08 FUN_14617fe08 body=270 status=ok
// SIG undefined FUN_14617fe08(void)

int * FUN_14617fe08(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb75900;
  iVar3 = DAT_14cb758d8;
  if (DAT_14cb75904 == 0) {
    iVar2 = DAT_14cb758d8 + 1;
    bVar7 = DAT_14cb758dc == DAT_14cb758d8;
    DAT_14cb758d8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb758d0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb758e0,1);
    puVar4 = DAT_14cb758f0;
    if (DAT_14cb758f0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb758e0;
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
    lVar6 = (longlong)DAT_14cb75900;
    DAT_14cb75900 = *(int *)(DAT_14cb758d0 + 4 + lVar6 * 0x18);
    DAT_14cb75904 = DAT_14cb75904 + -1;
    if (DAT_14cb75904 != 0) {
      *(undefined4 *)(DAT_14cb758d0 + (longlong)DAT_14cb75900 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb758e0;
  if (DAT_14cb758f0 != (undefined *)0x0) {
    puVar4 = DAT_14cb758f0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb758d0;
  return param_1;
}



// FUNCTION 14617ff16 FUN_14617ff16 body=523 status=ok
// SIG undefined FUN_14617ff16(void)

void FUN_14617ff16(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb75910 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb75910,0,0,4);
  }
  uVar3 = DAT_14cb75918;
  uVar2 = local_50;
  if (DAT_14cb75918 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb75908,0,DAT_14cb75918,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb75910;
        if (DAT_14cb75910 == (undefined *)0x0) {
          puVar6 = &DAT_14cb75908;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb75918 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb758e0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb758f8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb758d0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb75918 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb75910;
        if (DAT_14cb75910 == (undefined *)0x0) {
          puVar6 = &DAT_14cb75908;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb75918 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb75910;
        if (DAT_14cb75910 == (undefined *)0x0) {
          puVar6 = &DAT_14cb75908;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb75918 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146180122 FUN_146180122 body=507 status=ok
// SIG undefined FUN_146180122(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146180122(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb75a30 = 0;
  FUN_1446ddc76(&DAT_14cb75a34,"JumpGoalCollection",1);
  _DAT_14cb75a40 = 0;
  _DAT_14cb75a48 = 0;
  _DAT_14cb75a50 = 0;
  DAT_14cb75a58 = (void *)0x0;
  _DAT_14cb75a60 = 0;
  _DAT_14cb75a68 = FUN_145c0fdaa;
  DAT_14cb75a70 = *param_1;
  DAT_14cb75a80 = param_1[2];
  param_1[2] = 0;
  DAT_14cb75a90._0_4_ = (undefined4)param_1[4];
  DAT_14cb75a90._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb75a98 = (undefined4)param_1[5];
  uRam000000014cb75a9c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb75aa0 = (undefined4)param_1[6];
  uRam000000014cb75aa4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb75aa8 = (undefined4)param_1[7];
  uRam000000014cb75aac = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb75a70 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb75a40 = 0;
  _DAT_14cb75a48 = local_68;
  _DAT_14cb75a50 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb75a60 = CONCAT44(DAT_14cb75a64,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb75a64 == 0) {
    _DAT_14cb75a60 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb75a58,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb75a58,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb75a30) && ((DAT_14cb759c0 == (int *)0x0 || (*DAT_14cb759c0 < DAT_14cb75a30)))) {
    DAT_14cb759c0 = &DAT_14cb75a30;
  }
  FUN_145894c4a();
  local_30 = &local_70;
  local_70 = &DAT_14cb75a30;
  local_38 = &DAT_14cb75a34;
  FUN_14618031e(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14618031e FUN_14618031e body=338 status=ok
// SIG undefined FUN_14618031e(void)

undefined4 * FUN_14618031e(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146180504(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146180472(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb759d0 - DAT_14cb759fc;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb75a10)) {
      uVar10 = DAT_14cb75a10 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb75a08;
      if (DAT_14cb75a08 == (undefined *)0x0) {
        puVar7 = &DAT_14cb75a00;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb75a10 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb75a08;
      if (DAT_14cb75a08 == (undefined *)0x0) {
        puVar7 = &DAT_14cb75a00;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb75a10 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb75a10 = iVar9;
      FUN_146180612();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146180472 FUN_146180472 body=145 status=ok
// SIG undefined FUN_146180472(void)

undefined8 FUN_146180472(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb759d0 - DAT_14cb759fc != 1) && (DAT_14cb759d0 != DAT_14cb759fc)) {
    puVar6 = &DAT_14cb75a00;
    if (DAT_14cb75a08 != (undefined *)0x0) {
      puVar6 = DAT_14cb75a08;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb75a10 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb759c8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d93ddc(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146180504 FUN_146180504 body=270 status=ok
// SIG undefined FUN_146180504(void)

int * FUN_146180504(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb759f8;
  iVar3 = DAT_14cb759d0;
  if (DAT_14cb759fc == 0) {
    iVar2 = DAT_14cb759d0 + 1;
    bVar7 = DAT_14cb759d4 == DAT_14cb759d0;
    DAT_14cb759d0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb759c8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb759d8,1);
    puVar4 = DAT_14cb759e8;
    if (DAT_14cb759e8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb759d8;
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
    lVar6 = (longlong)DAT_14cb759f8;
    DAT_14cb759f8 = *(int *)(DAT_14cb759c8 + 4 + lVar6 * 0x18);
    DAT_14cb759fc = DAT_14cb759fc + -1;
    if (DAT_14cb759fc != 0) {
      *(undefined4 *)(DAT_14cb759c8 + (longlong)DAT_14cb759f8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb759d8;
  if (DAT_14cb759e8 != (undefined *)0x0) {
    puVar4 = DAT_14cb759e8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb759c8;
  return param_1;
}



// FUNCTION 146180612 FUN_146180612 body=523 status=ok
// SIG undefined FUN_146180612(void)

void FUN_146180612(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb75a08 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb75a08,0,0,4);
  }
  uVar3 = DAT_14cb75a10;
  uVar2 = local_50;
  if (DAT_14cb75a10 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb75a00,0,DAT_14cb75a10,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb75a08;
        if (DAT_14cb75a08 == (undefined *)0x0) {
          puVar6 = &DAT_14cb75a00;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb75a10 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb759d8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb759f0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb759c8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb75a10 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb75a08;
        if (DAT_14cb75a08 == (undefined *)0x0) {
          puVar6 = &DAT_14cb75a00;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb75a10 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb75a08;
        if (DAT_14cb75a08 == (undefined *)0x0) {
          puVar6 = &DAT_14cb75a00;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb75a10 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14618081e FUN_14618081e body=507 status=ok
// SIG undefined FUN_14618081e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14618081e(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb75c30 = 0;
  FUN_1446ddc76(&DAT_14cb75c34,"Sliding",1);
  _DAT_14cb75c40 = 0;
  _DAT_14cb75c48 = 0;
  _DAT_14cb75c50 = 0;
  DAT_14cb75c58 = (void *)0x0;
  _DAT_14cb75c60 = 0;
  _DAT_14cb75c68 = FUN_145876df6;
  DAT_14cb75c70 = *param_1;
  DAT_14cb75c80 = param_1[2];
  param_1[2] = 0;
  DAT_14cb75c90._0_4_ = (undefined4)param_1[4];
  DAT_14cb75c90._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb75c98 = (undefined4)param_1[5];
  uRam000000014cb75c9c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb75ca0 = (undefined4)param_1[6];
  uRam000000014cb75ca4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb75ca8 = (undefined4)param_1[7];
  uRam000000014cb75cac = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb75c70 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb75c40 = 0;
  _DAT_14cb75c48 = local_68;
  _DAT_14cb75c50 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb75c60 = CONCAT44(DAT_14cb75c64,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb75c64 == 0) {
    _DAT_14cb75c60 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb75c58,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb75c58,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb75c30) && ((DAT_14cb75bc0 == (int *)0x0 || (*DAT_14cb75bc0 < DAT_14cb75c30)))) {
    DAT_14cb75bc0 = &DAT_14cb75c30;
  }
  FUN_145876ecc();
  local_30 = &local_70;
  local_70 = &DAT_14cb75c30;
  local_38 = &DAT_14cb75c34;
  FUN_146180a1a(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146180a1a FUN_146180a1a body=338 status=ok
// SIG undefined FUN_146180a1a(void)

undefined4 * FUN_146180a1a(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146180c00(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146180b6e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb75bd0 - DAT_14cb75bfc;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb75c10)) {
      uVar10 = DAT_14cb75c10 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb75c08;
      if (DAT_14cb75c08 == (undefined *)0x0) {
        puVar7 = &DAT_14cb75c00;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb75c10 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb75c08;
      if (DAT_14cb75c08 == (undefined *)0x0) {
        puVar7 = &DAT_14cb75c00;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb75c10 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb75c10 = iVar9;
      FUN_146180d0e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146180b6e FUN_146180b6e body=145 status=ok
// SIG undefined FUN_146180b6e(void)

undefined8 FUN_146180b6e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb75bd0 - DAT_14cb75bfc != 1) && (DAT_14cb75bd0 != DAT_14cb75bfc)) {
    puVar6 = &DAT_14cb75c00;
    if (DAT_14cb75c08 != (undefined *)0x0) {
      puVar6 = DAT_14cb75c08;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb75c10 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb75bc8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d93fc8(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146180c00 FUN_146180c00 body=270 status=ok
// SIG undefined FUN_146180c00(void)

int * FUN_146180c00(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb75bf8;
  iVar3 = DAT_14cb75bd0;
  if (DAT_14cb75bfc == 0) {
    iVar2 = DAT_14cb75bd0 + 1;
    bVar7 = DAT_14cb75bd4 == DAT_14cb75bd0;
    DAT_14cb75bd0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb75bc8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb75bd8,1);
    puVar4 = DAT_14cb75be8;
    if (DAT_14cb75be8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb75bd8;
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
    lVar6 = (longlong)DAT_14cb75bf8;
    DAT_14cb75bf8 = *(int *)(DAT_14cb75bc8 + 4 + lVar6 * 0x18);
    DAT_14cb75bfc = DAT_14cb75bfc + -1;
    if (DAT_14cb75bfc != 0) {
      *(undefined4 *)(DAT_14cb75bc8 + (longlong)DAT_14cb75bf8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb75bd8;
  if (DAT_14cb75be8 != (undefined *)0x0) {
    puVar4 = DAT_14cb75be8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb75bc8;
  return param_1;
}



// FUNCTION 146180d0e FUN_146180d0e body=523 status=ok
// SIG undefined FUN_146180d0e(void)

void FUN_146180d0e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb75c08 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb75c08,0,0,4);
  }
  uVar3 = DAT_14cb75c10;
  uVar2 = local_50;
  if (DAT_14cb75c10 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb75c00,0,DAT_14cb75c10,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb75c08;
        if (DAT_14cb75c08 == (undefined *)0x0) {
          puVar6 = &DAT_14cb75c00;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb75c10 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb75bd8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb75bf0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb75bc8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb75c10 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb75c08;
        if (DAT_14cb75c08 == (undefined *)0x0) {
          puVar6 = &DAT_14cb75c00;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb75c10 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb75c08;
        if (DAT_14cb75c08 == (undefined *)0x0) {
          puVar6 = &DAT_14cb75c00;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb75c10 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146180f1a FUN_146180f1a body=507 status=ok
// SIG undefined FUN_146180f1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146180f1a(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb78e50 = 0;
  FUN_1446ddc76(&DAT_14cb78e54,"landing",1);
  _DAT_14cb78e60 = 0;
  _DAT_14cb78e68 = 0;
  _DAT_14cb78e70 = 0;
  DAT_14cb78e78 = (void *)0x0;
  _DAT_14cb78e80 = 0;
  _DAT_14cb78e88 = FUN_145982cd0;
  DAT_14cb78e90 = *param_1;
  DAT_14cb78ea0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb78eb0._0_4_ = (undefined4)param_1[4];
  DAT_14cb78eb0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb78eb8 = (undefined4)param_1[5];
  uRam000000014cb78ebc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb78ec0 = (undefined4)param_1[6];
  uRam000000014cb78ec4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb78ec8 = (undefined4)param_1[7];
  uRam000000014cb78ecc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb78e90 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb78e60 = 0;
  _DAT_14cb78e68 = local_68;
  _DAT_14cb78e70 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb78e80 = CONCAT44(DAT_14cb78e84,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb78e84 == 0) {
    _DAT_14cb78e80 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb78e78,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb78e78,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb78e50) && ((DAT_14cb78de0 == (int *)0x0 || (*DAT_14cb78de0 < DAT_14cb78e50)))) {
    DAT_14cb78de0 = &DAT_14cb78e50;
  }
  FUN_145982dba();
  local_30 = &local_70;
  local_70 = &DAT_14cb78e50;
  local_38 = &DAT_14cb78e54;
  FUN_146181116(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146181116 FUN_146181116 body=338 status=ok
// SIG undefined FUN_146181116(void)

undefined4 * FUN_146181116(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461812fc(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14618126a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb78df0 - DAT_14cb78e1c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb78e30)) {
      uVar10 = DAT_14cb78e30 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb78e28;
      if (DAT_14cb78e28 == (undefined *)0x0) {
        puVar7 = &DAT_14cb78e20;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb78e30 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb78e28;
      if (DAT_14cb78e28 == (undefined *)0x0) {
        puVar7 = &DAT_14cb78e20;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb78e30 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb78e30 = iVar9;
      FUN_14618140a();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618126a FUN_14618126a body=145 status=ok
// SIG undefined FUN_14618126a(void)

undefined8 FUN_14618126a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb78df0 - DAT_14cb78e1c != 1) && (DAT_14cb78df0 != DAT_14cb78e1c)) {
    puVar6 = &DAT_14cb78e20;
    if (DAT_14cb78e28 != (undefined *)0x0) {
      puVar6 = DAT_14cb78e28;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb78e30 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb78de8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9458c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461812fc FUN_1461812fc body=270 status=ok
// SIG undefined FUN_1461812fc(void)

int * FUN_1461812fc(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb78e18;
  iVar3 = DAT_14cb78df0;
  if (DAT_14cb78e1c == 0) {
    iVar2 = DAT_14cb78df0 + 1;
    bVar7 = DAT_14cb78df4 == DAT_14cb78df0;
    DAT_14cb78df0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb78de8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb78df8,1);
    puVar4 = DAT_14cb78e08;
    if (DAT_14cb78e08 == (undefined *)0x0) {
      puVar4 = &DAT_14cb78df8;
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
    lVar6 = (longlong)DAT_14cb78e18;
    DAT_14cb78e18 = *(int *)(DAT_14cb78de8 + 4 + lVar6 * 0x18);
    DAT_14cb78e1c = DAT_14cb78e1c + -1;
    if (DAT_14cb78e1c != 0) {
      *(undefined4 *)(DAT_14cb78de8 + (longlong)DAT_14cb78e18 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb78df8;
  if (DAT_14cb78e08 != (undefined *)0x0) {
    puVar4 = DAT_14cb78e08;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb78de8;
  return param_1;
}



// FUNCTION 14618140a FUN_14618140a body=523 status=ok
// SIG undefined FUN_14618140a(void)

void FUN_14618140a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb78e28 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb78e28,0,0,4);
  }
  uVar3 = DAT_14cb78e30;
  uVar2 = local_50;
  if (DAT_14cb78e30 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb78e20,0,DAT_14cb78e30,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb78e28;
        if (DAT_14cb78e28 == (undefined *)0x0) {
          puVar6 = &DAT_14cb78e20;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb78e30 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb78df8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb78e10 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb78de8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb78e30 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb78e28;
        if (DAT_14cb78e28 == (undefined *)0x0) {
          puVar6 = &DAT_14cb78e20;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb78e30 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb78e28;
        if (DAT_14cb78e28 == (undefined *)0x0) {
          puVar6 = &DAT_14cb78e20;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb78e30 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146181616 FUN_146181616 body=507 status=ok
// SIG undefined FUN_146181616(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146181616(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  char *local_38;
  undefined4 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb7d2d0 = 0;
  FUN_1446ddc76(&DAT_14cb7d2d4,"feedback",1);
  _DAT_14cb7d2e0 = 0;
  _DAT_14cb7d2e8 = 0;
  _DAT_14cb7d2f0 = 0;
  DAT_14cb7d2f8 = (void *)0x0;
  _DAT_14cb7d300 = 0;
  _DAT_14cb7d308 = FUN_140a2807c;
  DAT_14cb7d310 = *param_1;
  DAT_14cb7d320 = param_1[2];
  param_1[2] = 0;
  DAT_14cb7d330._0_4_ = (undefined4)param_1[4];
  DAT_14cb7d330._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb7d338 = (undefined4)param_1[5];
  uRam000000014cb7d33c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb7d340 = (undefined4)param_1[6];
  uRam000000014cb7d344 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb7d348 = (undefined4)param_1[7];
  uRam000000014cb7d34c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb7d310 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = "/Script/GbxGame.GbxFeedbackDef_Editor";
  local_30 = (undefined4 **)CONCAT44(local_30._4_4_,0x25);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb7d2e0 = 0;
  _DAT_14cb7d2e8 = local_68;
  _DAT_14cb7d2f0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb7d300 = CONCAT44(DAT_14cb7d304,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb7d304 == 0) {
    _DAT_14cb7d300 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb7d2f8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb7d2f8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb7d2d0) && ((DAT_14cb7d260 == (int *)0x0 || (*DAT_14cb7d260 < DAT_14cb7d2d0)))) {
    DAT_14cb7d260 = &DAT_14cb7d2d0;
  }
  FUN_140a28152();
  local_30 = &local_70;
  local_70 = &DAT_14cb7d2d0;
  local_38 = (char *)&DAT_14cb7d2d4;
  FUN_146181812(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146181812 FUN_146181812 body=338 status=ok
// SIG undefined FUN_146181812(void)

undefined4 * FUN_146181812(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461819f8(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146181966(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb7d270 - DAT_14cb7d29c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7d2b0)) {
      uVar10 = DAT_14cb7d2b0 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb7d2a8;
      if (DAT_14cb7d2a8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7d2a0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7d2b0 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb7d2a8;
      if (DAT_14cb7d2a8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7d2a0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7d2b0 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb7d2b0 = iVar9;
      FUN_146181b06();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146181966 FUN_146181966 body=145 status=ok
// SIG undefined FUN_146181966(void)

undefined8 FUN_146181966(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7d270 - DAT_14cb7d29c != 1) && (DAT_14cb7d270 != DAT_14cb7d29c)) {
    puVar6 = &DAT_14cb7d2a0;
    if (DAT_14cb7d2a8 != (undefined *)0x0) {
      puVar6 = DAT_14cb7d2a8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7d2b0 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7d268 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d94b50(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461819f8 FUN_1461819f8 body=270 status=ok
// SIG undefined FUN_1461819f8(void)

int * FUN_1461819f8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7d298;
  iVar3 = DAT_14cb7d270;
  if (DAT_14cb7d29c == 0) {
    iVar2 = DAT_14cb7d270 + 1;
    bVar7 = DAT_14cb7d274 == DAT_14cb7d270;
    DAT_14cb7d270 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7d268,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7d278,1);
    puVar4 = DAT_14cb7d288;
    if (DAT_14cb7d288 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7d278;
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
    lVar6 = (longlong)DAT_14cb7d298;
    DAT_14cb7d298 = *(int *)(DAT_14cb7d268 + 4 + lVar6 * 0x18);
    DAT_14cb7d29c = DAT_14cb7d29c + -1;
    if (DAT_14cb7d29c != 0) {
      *(undefined4 *)(DAT_14cb7d268 + (longlong)DAT_14cb7d298 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7d278;
  if (DAT_14cb7d288 != (undefined *)0x0) {
    puVar4 = DAT_14cb7d288;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7d268;
  return param_1;
}



// FUNCTION 146181b06 FUN_146181b06 body=523 status=ok
// SIG undefined FUN_146181b06(void)

void FUN_146181b06(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb7d2a8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7d2a8,0,0,4);
  }
  uVar3 = DAT_14cb7d2b0;
  uVar2 = local_50;
  if (DAT_14cb7d2b0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7d2a0,0,DAT_14cb7d2b0,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb7d2a8;
        if (DAT_14cb7d2a8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7d2a0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb7d2b0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7d278;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7d290 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7d268;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb7d2b0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb7d2a8;
        if (DAT_14cb7d2a8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7d2a0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb7d2b0 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb7d2a8;
        if (DAT_14cb7d2a8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7d2a0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7d2b0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146181d12 FUN_146181d12 body=507 status=ok
// SIG undefined FUN_146181d12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146181d12(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb7d430 = 0;
  FUN_1446ddc76(&DAT_14cb7d434,"rumble",1);
  _DAT_14cb7d440 = 0;
  _DAT_14cb7d448 = 0;
  _DAT_14cb7d450 = 0;
  DAT_14cb7d458 = (void *)0x0;
  _DAT_14cb7d460 = 0;
  _DAT_14cb7d468 = FUN_140cb90fa;
  DAT_14cb7d470 = *param_1;
  DAT_14cb7d480 = param_1[2];
  param_1[2] = 0;
  DAT_14cb7d490._0_4_ = (undefined4)param_1[4];
  DAT_14cb7d490._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb7d498 = (undefined4)param_1[5];
  uRam000000014cb7d49c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb7d4a0 = (undefined4)param_1[6];
  uRam000000014cb7d4a4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb7d4a8 = (undefined4)param_1[7];
  uRam000000014cb7d4ac = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb7d470 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb7d440 = 0;
  _DAT_14cb7d448 = local_68;
  _DAT_14cb7d450 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb7d460 = CONCAT44(DAT_14cb7d464,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb7d464 == 0) {
    _DAT_14cb7d460 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb7d458,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb7d458,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb7d430) && ((DAT_14cb7d3b8 == (int *)0x0 || (*DAT_14cb7d3b8 < DAT_14cb7d430)))) {
    DAT_14cb7d3b8 = &DAT_14cb7d430;
  }
  FUN_140cb9248();
  local_30 = &local_70;
  local_70 = &DAT_14cb7d430;
  local_38 = &DAT_14cb7d434;
  FUN_146181f0e(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146181f0e FUN_146181f0e body=338 status=ok
// SIG undefined FUN_146181f0e(void)

undefined4 * FUN_146181f0e(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461820f4(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146182062(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb7d3c8 - DAT_14cb7d3f4;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7d408)) {
      uVar10 = DAT_14cb7d408 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb7d400;
      if (DAT_14cb7d400 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7d3f8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7d408 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb7d400;
      if (DAT_14cb7d400 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7d3f8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7d408 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb7d408 = iVar9;
      FUN_146182202();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146182062 FUN_146182062 body=145 status=ok
// SIG undefined FUN_146182062(void)

undefined8 FUN_146182062(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7d3c8 - DAT_14cb7d3f4 != 1) && (DAT_14cb7d3c8 != DAT_14cb7d3f4)) {
    puVar6 = &DAT_14cb7d3f8;
    if (DAT_14cb7d400 != (undefined *)0x0) {
      puVar6 = DAT_14cb7d400;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7d408 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7d3c0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d94d3c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461820f4 FUN_1461820f4 body=270 status=ok
// SIG undefined FUN_1461820f4(void)

int * FUN_1461820f4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7d3f0;
  iVar3 = DAT_14cb7d3c8;
  if (DAT_14cb7d3f4 == 0) {
    iVar2 = DAT_14cb7d3c8 + 1;
    bVar7 = DAT_14cb7d3cc == DAT_14cb7d3c8;
    DAT_14cb7d3c8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7d3c0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7d3d0,1);
    puVar4 = DAT_14cb7d3e0;
    if (DAT_14cb7d3e0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7d3d0;
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
    lVar6 = (longlong)DAT_14cb7d3f0;
    DAT_14cb7d3f0 = *(int *)(DAT_14cb7d3c0 + 4 + lVar6 * 0x18);
    DAT_14cb7d3f4 = DAT_14cb7d3f4 + -1;
    if (DAT_14cb7d3f4 != 0) {
      *(undefined4 *)(DAT_14cb7d3c0 + (longlong)DAT_14cb7d3f0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7d3d0;
  if (DAT_14cb7d3e0 != (undefined *)0x0) {
    puVar4 = DAT_14cb7d3e0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7d3c0;
  return param_1;
}



// FUNCTION 146182202 FUN_146182202 body=523 status=ok
// SIG undefined FUN_146182202(void)

void FUN_146182202(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb7d400 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7d400,0,0,4);
  }
  uVar3 = DAT_14cb7d408;
  uVar2 = local_50;
  if (DAT_14cb7d408 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7d3f8,0,DAT_14cb7d408,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb7d400;
        if (DAT_14cb7d400 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7d3f8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb7d408 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7d3d0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7d3e8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7d3c0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb7d408 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb7d400;
        if (DAT_14cb7d400 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7d3f8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb7d408 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb7d400;
        if (DAT_14cb7d400 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7d3f8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7d408 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14618240e FUN_14618240e body=507 status=ok
// SIG undefined FUN_14618240e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14618240e(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb7d560 = 0;
  FUN_1446ddc76(&DAT_14cb7d564,"radial_blur",1);
  _DAT_14cb7d570 = 0;
  _DAT_14cb7d578 = 0;
  _DAT_14cb7d580 = 0;
  DAT_14cb7d588 = (void *)0x0;
  _DAT_14cb7d590 = 0;
  _DAT_14cb7d598 = FUN_14585a4d2;
  DAT_14cb7d5a0 = *param_1;
  DAT_14cb7d5b0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb7d5c0._0_4_ = (undefined4)param_1[4];
  DAT_14cb7d5c0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb7d5c8 = (undefined4)param_1[5];
  uRam000000014cb7d5cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb7d5d0 = (undefined4)param_1[6];
  uRam000000014cb7d5d4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb7d5d8 = (undefined4)param_1[7];
  uRam000000014cb7d5dc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb7d5a0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb7d570 = 0;
  _DAT_14cb7d578 = local_68;
  _DAT_14cb7d580 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb7d590 = CONCAT44(DAT_14cb7d594,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb7d594 == 0) {
    _DAT_14cb7d590 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb7d588,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb7d588,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb7d560) && ((DAT_14cb7d4e8 == (int *)0x0 || (*DAT_14cb7d4e8 < DAT_14cb7d560)))) {
    DAT_14cb7d4e8 = &DAT_14cb7d560;
  }
  FUN_14585a5c0();
  local_30 = &local_70;
  local_70 = &DAT_14cb7d560;
  local_38 = &DAT_14cb7d564;
  FUN_14618260a(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14618260a FUN_14618260a body=338 status=ok
// SIG undefined FUN_14618260a(void)

undefined4 * FUN_14618260a(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461827f0(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14618275e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb7d4f8 - DAT_14cb7d524;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7d538)) {
      uVar10 = DAT_14cb7d538 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb7d530;
      if (DAT_14cb7d530 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7d528;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7d538 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb7d530;
      if (DAT_14cb7d530 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7d528;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7d538 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb7d538 = iVar9;
      FUN_1461828fe();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618275e FUN_14618275e body=145 status=ok
// SIG undefined FUN_14618275e(void)

undefined8 FUN_14618275e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7d4f8 - DAT_14cb7d524 != 1) && (DAT_14cb7d4f8 != DAT_14cb7d524)) {
    puVar6 = &DAT_14cb7d528;
    if (DAT_14cb7d530 != (undefined *)0x0) {
      puVar6 = DAT_14cb7d530;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7d538 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7d4f0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d94f28(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461827f0 FUN_1461827f0 body=270 status=ok
// SIG undefined FUN_1461827f0(void)

int * FUN_1461827f0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7d520;
  iVar3 = DAT_14cb7d4f8;
  if (DAT_14cb7d524 == 0) {
    iVar2 = DAT_14cb7d4f8 + 1;
    bVar7 = DAT_14cb7d4fc == DAT_14cb7d4f8;
    DAT_14cb7d4f8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7d4f0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7d500,1);
    puVar4 = DAT_14cb7d510;
    if (DAT_14cb7d510 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7d500;
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
    lVar6 = (longlong)DAT_14cb7d520;
    DAT_14cb7d520 = *(int *)(DAT_14cb7d4f0 + 4 + lVar6 * 0x18);
    DAT_14cb7d524 = DAT_14cb7d524 + -1;
    if (DAT_14cb7d524 != 0) {
      *(undefined4 *)(DAT_14cb7d4f0 + (longlong)DAT_14cb7d520 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7d500;
  if (DAT_14cb7d510 != (undefined *)0x0) {
    puVar4 = DAT_14cb7d510;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7d4f0;
  return param_1;
}



// FUNCTION 1461828fe FUN_1461828fe body=523 status=ok
// SIG undefined FUN_1461828fe(void)

void FUN_1461828fe(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb7d530 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7d530,0,0,4);
  }
  uVar3 = DAT_14cb7d538;
  uVar2 = local_50;
  if (DAT_14cb7d538 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7d528,0,DAT_14cb7d538,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb7d530;
        if (DAT_14cb7d530 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7d528;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb7d538 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7d500;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7d518 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7d4f0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb7d538 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb7d530;
        if (DAT_14cb7d530 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7d528;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb7d538 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb7d530;
        if (DAT_14cb7d530 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7d528;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7d538 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146182b0a FUN_146182b0a body=507 status=ok
// SIG undefined FUN_146182b0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146182b0a(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb7e850 = 0;
  FUN_1446ddc76(&DAT_14cb7e854,"DialogEvent",1);
  _DAT_14cb7e860 = 0;
  _DAT_14cb7e868 = 0;
  _DAT_14cb7e870 = 0;
  DAT_14cb7e878 = (void *)0x0;
  _DAT_14cb7e880 = 0;
  _DAT_14cb7e888 = FUN_140a1a2ba;
  DAT_14cb7e890 = *param_1;
  DAT_14cb7e8a0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb7e8b0._0_4_ = (undefined4)param_1[4];
  DAT_14cb7e8b0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb7e8b8 = (undefined4)param_1[5];
  uRam000000014cb7e8bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb7e8c0 = (undefined4)param_1[6];
  uRam000000014cb7e8c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb7e8c8 = (undefined4)param_1[7];
  uRam000000014cb7e8cc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb7e890 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb7e860 = 0;
  _DAT_14cb7e868 = local_68;
  _DAT_14cb7e870 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb7e880 = CONCAT44(DAT_14cb7e884,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb7e884 == 0) {
    _DAT_14cb7e880 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb7e878,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb7e878,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb7e850) && ((DAT_14cb7e7d8 == (int *)0x0 || (*DAT_14cb7e7d8 < DAT_14cb7e850)))) {
    DAT_14cb7e7d8 = &DAT_14cb7e850;
  }
  FUN_14067a33c();
  local_30 = &local_70;
  local_70 = &DAT_14cb7e850;
  local_38 = &DAT_14cb7e854;
  FUN_146182d06(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146182d06 FUN_146182d06 body=338 status=ok
// SIG undefined FUN_146182d06(void)

undefined4 * FUN_146182d06(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146182eec(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146182e5a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb7e7e8 - DAT_14cb7e814;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7e828)) {
      uVar10 = DAT_14cb7e828 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb7e820;
      if (DAT_14cb7e820 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7e818;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7e828 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb7e820;
      if (DAT_14cb7e820 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7e818;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7e828 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb7e828 = iVar9;
      FUN_146182ffa();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146182e5a FUN_146182e5a body=145 status=ok
// SIG undefined FUN_146182e5a(void)

undefined8 FUN_146182e5a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7e7e8 - DAT_14cb7e814 != 1) && (DAT_14cb7e7e8 != DAT_14cb7e814)) {
    puVar6 = &DAT_14cb7e818;
    if (DAT_14cb7e820 != (undefined *)0x0) {
      puVar6 = DAT_14cb7e820;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7e828 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7e7e0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d956d8(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146182eec FUN_146182eec body=270 status=ok
// SIG undefined FUN_146182eec(void)

int * FUN_146182eec(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7e810;
  iVar3 = DAT_14cb7e7e8;
  if (DAT_14cb7e814 == 0) {
    iVar2 = DAT_14cb7e7e8 + 1;
    bVar7 = DAT_14cb7e7ec == DAT_14cb7e7e8;
    DAT_14cb7e7e8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7e7e0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7e7f0,1);
    puVar4 = DAT_14cb7e800;
    if (DAT_14cb7e800 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7e7f0;
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
    lVar6 = (longlong)DAT_14cb7e810;
    DAT_14cb7e810 = *(int *)(DAT_14cb7e7e0 + 4 + lVar6 * 0x18);
    DAT_14cb7e814 = DAT_14cb7e814 + -1;
    if (DAT_14cb7e814 != 0) {
      *(undefined4 *)(DAT_14cb7e7e0 + (longlong)DAT_14cb7e810 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7e7f0;
  if (DAT_14cb7e800 != (undefined *)0x0) {
    puVar4 = DAT_14cb7e800;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7e7e0;
  return param_1;
}



// FUNCTION 146182ffa FUN_146182ffa body=523 status=ok
// SIG undefined FUN_146182ffa(void)

void FUN_146182ffa(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb7e820 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7e820,0,0,4);
  }
  uVar3 = DAT_14cb7e828;
  uVar2 = local_50;
  if (DAT_14cb7e828 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7e818,0,DAT_14cb7e828,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb7e820;
        if (DAT_14cb7e820 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7e818;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb7e828 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7e7f0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7e808 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7e7e0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb7e828 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb7e820;
        if (DAT_14cb7e820 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7e818;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb7e828 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb7e820;
        if (DAT_14cb7e820 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7e818;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7e828 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146183206 FUN_146183206 body=507 status=ok
// SIG undefined FUN_146183206(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146183206(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb7e980 = 0;
  FUN_1446ddc76(&DAT_14cb7e984,"DialogParameter",1);
  _DAT_14cb7e990 = 0;
  _DAT_14cb7e998 = 0;
  _DAT_14cb7e9a0 = 0;
  DAT_14cb7e9a8 = (void *)0x0;
  _DAT_14cb7e9b0 = 0;
  _DAT_14cb7e9b8 = FUN_140ef163a;
  DAT_14cb7e9c0 = *param_1;
  DAT_14cb7e9d0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb7e9e0._0_4_ = (undefined4)param_1[4];
  DAT_14cb7e9e0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb7e9e8 = (undefined4)param_1[5];
  uRam000000014cb7e9ec = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb7e9f0 = (undefined4)param_1[6];
  uRam000000014cb7e9f4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb7e9f8 = (undefined4)param_1[7];
  uRam000000014cb7e9fc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb7e9c0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb7e990 = 0;
  _DAT_14cb7e998 = local_68;
  _DAT_14cb7e9a0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb7e9b0 = CONCAT44(DAT_14cb7e9b4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb7e9b4 == 0) {
    _DAT_14cb7e9b0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb7e9a8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb7e9a8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb7e980) && ((DAT_14cb7e908 == (int *)0x0 || (*DAT_14cb7e908 < DAT_14cb7e980)))) {
    DAT_14cb7e908 = &DAT_14cb7e980;
  }
  FUN_14011fce2();
  local_30 = &local_70;
  local_70 = &DAT_14cb7e980;
  local_38 = &DAT_14cb7e984;
  FUN_146183402(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146183402 FUN_146183402 body=338 status=ok
// SIG undefined FUN_146183402(void)

undefined4 * FUN_146183402(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461835e8(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146183556(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb7e918 - DAT_14cb7e944;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7e958)) {
      uVar10 = DAT_14cb7e958 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb7e950;
      if (DAT_14cb7e950 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7e948;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7e958 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb7e950;
      if (DAT_14cb7e950 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7e948;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7e958 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb7e958 = iVar9;
      FUN_1461836f6();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146183556 FUN_146183556 body=145 status=ok
// SIG undefined FUN_146183556(void)

undefined8 FUN_146183556(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7e918 - DAT_14cb7e944 != 1) && (DAT_14cb7e918 != DAT_14cb7e944)) {
    puVar6 = &DAT_14cb7e948;
    if (DAT_14cb7e950 != (undefined *)0x0) {
      puVar6 = DAT_14cb7e950;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7e958 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7e910 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d958c4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461835e8 FUN_1461835e8 body=270 status=ok
// SIG undefined FUN_1461835e8(void)

int * FUN_1461835e8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7e940;
  iVar3 = DAT_14cb7e918;
  if (DAT_14cb7e944 == 0) {
    iVar2 = DAT_14cb7e918 + 1;
    bVar7 = DAT_14cb7e91c == DAT_14cb7e918;
    DAT_14cb7e918 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7e910,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7e920,1);
    puVar4 = DAT_14cb7e930;
    if (DAT_14cb7e930 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7e920;
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
    lVar6 = (longlong)DAT_14cb7e940;
    DAT_14cb7e940 = *(int *)(DAT_14cb7e910 + 4 + lVar6 * 0x18);
    DAT_14cb7e944 = DAT_14cb7e944 + -1;
    if (DAT_14cb7e944 != 0) {
      *(undefined4 *)(DAT_14cb7e910 + (longlong)DAT_14cb7e940 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7e920;
  if (DAT_14cb7e930 != (undefined *)0x0) {
    puVar4 = DAT_14cb7e930;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7e910;
  return param_1;
}



// FUNCTION 1461836f6 FUN_1461836f6 body=523 status=ok
// SIG undefined FUN_1461836f6(void)

void FUN_1461836f6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb7e950 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7e950,0,0,4);
  }
  uVar3 = DAT_14cb7e958;
  uVar2 = local_50;
  if (DAT_14cb7e958 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7e948,0,DAT_14cb7e958,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb7e950;
        if (DAT_14cb7e950 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7e948;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb7e958 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7e920;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7e938 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7e910;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb7e958 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb7e950;
        if (DAT_14cb7e950 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7e948;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb7e958 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb7e950;
        if (DAT_14cb7e950 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7e948;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7e958 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146183902 FUN_146183902 body=507 status=ok
// SIG undefined FUN_146183902(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146183902(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb7eb20 = 0;
  FUN_1446ddc76(&DAT_14cb7eb24,"DialogQuietTime",1);
  _DAT_14cb7eb30 = 0;
  _DAT_14cb7eb38 = 0;
  _DAT_14cb7eb40 = 0;
  DAT_14cb7eb48 = (void *)0x0;
  _DAT_14cb7eb50 = 0;
  _DAT_14cb7eb58 = FUN_141889bb6;
  DAT_14cb7eb60 = *param_1;
  DAT_14cb7eb70 = param_1[2];
  param_1[2] = 0;
  DAT_14cb7eb80._0_4_ = (undefined4)param_1[4];
  DAT_14cb7eb80._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb7eb88 = (undefined4)param_1[5];
  uRam000000014cb7eb8c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb7eb90 = (undefined4)param_1[6];
  uRam000000014cb7eb94 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb7eb98 = (undefined4)param_1[7];
  uRam000000014cb7eb9c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb7eb60 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb7eb30 = 0;
  _DAT_14cb7eb38 = local_68;
  _DAT_14cb7eb40 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb7eb50 = CONCAT44(DAT_14cb7eb54,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb7eb54 == 0) {
    _DAT_14cb7eb50 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb7eb48,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb7eb48,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb7eb20) && ((DAT_14cb7eab0 == (int *)0x0 || (*DAT_14cb7eab0 < DAT_14cb7eb20)))) {
    DAT_14cb7eab0 = &DAT_14cb7eb20;
  }
  FUN_140e52090();
  local_30 = &local_70;
  local_70 = &DAT_14cb7eb20;
  local_38 = &DAT_14cb7eb24;
  FUN_146183afe(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146183afe FUN_146183afe body=338 status=ok
// SIG undefined FUN_146183afe(void)

undefined4 * FUN_146183afe(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146183ce4(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146183c52(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb7eac0 - DAT_14cb7eaec;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7eb00)) {
      uVar10 = DAT_14cb7eb00 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb7eaf8;
      if (DAT_14cb7eaf8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7eaf0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7eb00 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb7eaf8;
      if (DAT_14cb7eaf8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7eaf0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7eb00 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb7eb00 = iVar9;
      FUN_146183df2();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146183c52 FUN_146183c52 body=145 status=ok
// SIG undefined FUN_146183c52(void)

undefined8 FUN_146183c52(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7eac0 - DAT_14cb7eaec != 1) && (DAT_14cb7eac0 != DAT_14cb7eaec)) {
    puVar6 = &DAT_14cb7eaf0;
    if (DAT_14cb7eaf8 != (undefined *)0x0) {
      puVar6 = DAT_14cb7eaf8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7eb00 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7eab8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d95ab0(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146183ce4 FUN_146183ce4 body=270 status=ok
// SIG undefined FUN_146183ce4(void)

int * FUN_146183ce4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7eae8;
  iVar3 = DAT_14cb7eac0;
  if (DAT_14cb7eaec == 0) {
    iVar2 = DAT_14cb7eac0 + 1;
    bVar7 = DAT_14cb7eac4 == DAT_14cb7eac0;
    DAT_14cb7eac0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7eab8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7eac8,1);
    puVar4 = DAT_14cb7ead8;
    if (DAT_14cb7ead8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7eac8;
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
    lVar6 = (longlong)DAT_14cb7eae8;
    DAT_14cb7eae8 = *(int *)(DAT_14cb7eab8 + 4 + lVar6 * 0x18);
    DAT_14cb7eaec = DAT_14cb7eaec + -1;
    if (DAT_14cb7eaec != 0) {
      *(undefined4 *)(DAT_14cb7eab8 + (longlong)DAT_14cb7eae8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7eac8;
  if (DAT_14cb7ead8 != (undefined *)0x0) {
    puVar4 = DAT_14cb7ead8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7eab8;
  return param_1;
}



// FUNCTION 146183df2 FUN_146183df2 body=523 status=ok
// SIG undefined FUN_146183df2(void)

void FUN_146183df2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb7eaf8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7eaf8,0,0,4);
  }
  uVar3 = DAT_14cb7eb00;
  uVar2 = local_50;
  if (DAT_14cb7eb00 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7eaf0,0,DAT_14cb7eb00,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb7eaf8;
        if (DAT_14cb7eaf8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7eaf0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb7eb00 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7eac8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7eae0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7eab8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb7eb00 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb7eaf8;
        if (DAT_14cb7eaf8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7eaf0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb7eb00 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb7eaf8;
        if (DAT_14cb7eaf8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7eaf0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7eb00 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146183ffe FUN_146183ffe body=507 status=ok
// SIG undefined FUN_146183ffe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146183ffe(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb7ec30 = 0;
  FUN_1446ddc76(&DAT_14cb7ec34,"DialogStyle",1);
  _DAT_14cb7ec40 = 0;
  _DAT_14cb7ec48 = 0;
  _DAT_14cb7ec50 = 0;
  DAT_14cb7ec58 = (void *)0x0;
  _DAT_14cb7ec60 = 0;
  _DAT_14cb7ec68 = FUN_1410b0da0;
  DAT_14cb7ec70 = *param_1;
  DAT_14cb7ec80 = param_1[2];
  param_1[2] = 0;
  DAT_14cb7ec90._0_4_ = (undefined4)param_1[4];
  DAT_14cb7ec90._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb7ec98 = (undefined4)param_1[5];
  uRam000000014cb7ec9c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb7eca0 = (undefined4)param_1[6];
  uRam000000014cb7eca4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb7eca8 = (undefined4)param_1[7];
  uRam000000014cb7ecac = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb7ec70 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb7ec40 = 0;
  _DAT_14cb7ec48 = local_68;
  _DAT_14cb7ec50 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb7ec60 = CONCAT44(DAT_14cb7ec64,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb7ec64 == 0) {
    _DAT_14cb7ec60 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb7ec58,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb7ec58,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb7ec30) && ((DAT_14cb7ebb8 == (int *)0x0 || (*DAT_14cb7ebb8 < DAT_14cb7ec30)))) {
    DAT_14cb7ebb8 = &DAT_14cb7ec30;
  }
  FUN_1409965da();
  local_30 = &local_70;
  local_70 = &DAT_14cb7ec30;
  local_38 = &DAT_14cb7ec34;
  FUN_1461841fa(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461841fa FUN_1461841fa body=338 status=ok
// SIG undefined FUN_1461841fa(void)

undefined4 * FUN_1461841fa(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461843e0(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14618434e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb7ebc8 - DAT_14cb7ebf4;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb7ec08)) {
      uVar10 = DAT_14cb7ec08 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb7ec00;
      if (DAT_14cb7ec00 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7ebf8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7ec08 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb7ec00;
      if (DAT_14cb7ec00 == (undefined *)0x0) {
        puVar7 = &DAT_14cb7ebf8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb7ec08 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb7ec08 = iVar9;
      FUN_1461844ee();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618434e FUN_14618434e body=145 status=ok
// SIG undefined FUN_14618434e(void)

undefined8 FUN_14618434e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb7ebc8 - DAT_14cb7ebf4 != 1) && (DAT_14cb7ebc8 != DAT_14cb7ebf4)) {
    puVar6 = &DAT_14cb7ebf8;
    if (DAT_14cb7ec00 != (undefined *)0x0) {
      puVar6 = DAT_14cb7ec00;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb7ec08 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb7ebc0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d95c9c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461843e0 FUN_1461843e0 body=270 status=ok
// SIG undefined FUN_1461843e0(void)

int * FUN_1461843e0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7ebf0;
  iVar3 = DAT_14cb7ebc8;
  if (DAT_14cb7ebf4 == 0) {
    iVar2 = DAT_14cb7ebc8 + 1;
    bVar7 = DAT_14cb7ebcc == DAT_14cb7ebc8;
    DAT_14cb7ebc8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb7ebc0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7ebd0,1);
    puVar4 = DAT_14cb7ebe0;
    if (DAT_14cb7ebe0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7ebd0;
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
    lVar6 = (longlong)DAT_14cb7ebf0;
    DAT_14cb7ebf0 = *(int *)(DAT_14cb7ebc0 + 4 + lVar6 * 0x18);
    DAT_14cb7ebf4 = DAT_14cb7ebf4 + -1;
    if (DAT_14cb7ebf4 != 0) {
      *(undefined4 *)(DAT_14cb7ebc0 + (longlong)DAT_14cb7ebf0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7ebd0;
  if (DAT_14cb7ebe0 != (undefined *)0x0) {
    puVar4 = DAT_14cb7ebe0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb7ebc0;
  return param_1;
}



// FUNCTION 1461844ee FUN_1461844ee body=523 status=ok
// SIG undefined FUN_1461844ee(void)

void FUN_1461844ee(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb7ec00 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7ec00,0,0,4);
  }
  uVar3 = DAT_14cb7ec08;
  uVar2 = local_50;
  if (DAT_14cb7ec08 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7ebf8,0,DAT_14cb7ec08,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb7ec00;
        if (DAT_14cb7ec00 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7ebf8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb7ec08 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7ebd0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7ebe8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7ebc0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb7ec08 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb7ec00;
        if (DAT_14cb7ec00 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7ebf8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb7ec08 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb7ec00;
        if (DAT_14cb7ec00 == (undefined *)0x0) {
          puVar6 = &DAT_14cb7ebf8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7ec08 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461846fa FUN_1461846fa body=507 status=ok
// SIG undefined FUN_1461846fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461846fa(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb816a0 = 0;
  FUN_1446ddc76(&DAT_14cb816a4,"hazard_interaction",1);
  _DAT_14cb816b0 = 0;
  _DAT_14cb816b8 = 0;
  _DAT_14cb816c0 = 0;
  DAT_14cb816c8 = (void *)0x0;
  _DAT_14cb816d0 = 0;
  _DAT_14cb816d8 = FUN_14580af3a;
  DAT_14cb816e0 = *param_1;
  DAT_14cb816f0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb81700._0_4_ = (undefined4)param_1[4];
  DAT_14cb81700._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb81708 = (undefined4)param_1[5];
  uRam000000014cb8170c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb81710 = (undefined4)param_1[6];
  uRam000000014cb81714 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb81718 = (undefined4)param_1[7];
  uRam000000014cb8171c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb816e0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb816b0 = 0;
  _DAT_14cb816b8 = local_68;
  _DAT_14cb816c0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb816d0 = CONCAT44(DAT_14cb816d4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb816d4 == 0) {
    _DAT_14cb816d0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb816c8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb816c8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb816a0) && ((DAT_14cb81630 == (int *)0x0 || (*DAT_14cb81630 < DAT_14cb816a0)))) {
    DAT_14cb81630 = &DAT_14cb816a0;
  }
  FUN_14111be22();
  local_30 = &local_70;
  local_70 = &DAT_14cb816a0;
  local_38 = &DAT_14cb816a4;
  FUN_1461848f6(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461848f6 FUN_1461848f6 body=338 status=ok
// SIG undefined FUN_1461848f6(void)

undefined4 * FUN_1461848f6(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146184adc(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146184a4a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb81640 - DAT_14cb8166c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb81680)) {
      uVar10 = DAT_14cb81680 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb81678;
      if (DAT_14cb81678 == (undefined *)0x0) {
        puVar7 = &DAT_14cb81670;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb81680 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb81678;
      if (DAT_14cb81678 == (undefined *)0x0) {
        puVar7 = &DAT_14cb81670;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb81680 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb81680 = iVar9;
      FUN_146184bea();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146184a4a FUN_146184a4a body=145 status=ok
// SIG undefined FUN_146184a4a(void)

undefined8 FUN_146184a4a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb81640 - DAT_14cb8166c != 1) && (DAT_14cb81640 != DAT_14cb8166c)) {
    puVar6 = &DAT_14cb81670;
    if (DAT_14cb81678 != (undefined *)0x0) {
      puVar6 = DAT_14cb81678;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb81680 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb81638 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d96fd4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146184adc FUN_146184adc body=270 status=ok
// SIG undefined FUN_146184adc(void)

int * FUN_146184adc(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb81668;
  iVar3 = DAT_14cb81640;
  if (DAT_14cb8166c == 0) {
    iVar2 = DAT_14cb81640 + 1;
    bVar7 = DAT_14cb81644 == DAT_14cb81640;
    DAT_14cb81640 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb81638,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb81648,1);
    puVar4 = DAT_14cb81658;
    if (DAT_14cb81658 == (undefined *)0x0) {
      puVar4 = &DAT_14cb81648;
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
    lVar6 = (longlong)DAT_14cb81668;
    DAT_14cb81668 = *(int *)(DAT_14cb81638 + 4 + lVar6 * 0x18);
    DAT_14cb8166c = DAT_14cb8166c + -1;
    if (DAT_14cb8166c != 0) {
      *(undefined4 *)(DAT_14cb81638 + (longlong)DAT_14cb81668 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb81648;
  if (DAT_14cb81658 != (undefined *)0x0) {
    puVar4 = DAT_14cb81658;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb81638;
  return param_1;
}



// FUNCTION 146184bea FUN_146184bea body=523 status=ok
// SIG undefined FUN_146184bea(void)

void FUN_146184bea(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb81678 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb81678,0,0,4);
  }
  uVar3 = DAT_14cb81680;
  uVar2 = local_50;
  if (DAT_14cb81680 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb81670,0,DAT_14cb81680,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb81678;
        if (DAT_14cb81678 == (undefined *)0x0) {
          puVar6 = &DAT_14cb81670;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb81680 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb81648;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb81660 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb81638;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb81680 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb81678;
        if (DAT_14cb81678 == (undefined *)0x0) {
          puVar6 = &DAT_14cb81670;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb81680 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb81678;
        if (DAT_14cb81678 == (undefined *)0x0) {
          puVar6 = &DAT_14cb81670;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb81680 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146184df6 FUN_146184df6 body=507 status=ok
// SIG undefined FUN_146184df6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146184df6(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb817d0 = 0;
  FUN_1446ddc76(&DAT_14cb817d4,"hazard_interaction_state",1);
  _DAT_14cb817e0 = 0;
  _DAT_14cb817e8 = 0;
  _DAT_14cb817f0 = 0;
  DAT_14cb817f8 = (void *)0x0;
  _DAT_14cb81800 = 0;
  _DAT_14cb81808 = FUN_14580e4de;
  DAT_14cb81810 = *param_1;
  DAT_14cb81820 = param_1[2];
  param_1[2] = 0;
  DAT_14cb81830._0_4_ = (undefined4)param_1[4];
  DAT_14cb81830._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb81838 = (undefined4)param_1[5];
  uRam000000014cb8183c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb81840 = (undefined4)param_1[6];
  uRam000000014cb81844 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb81848 = (undefined4)param_1[7];
  uRam000000014cb8184c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb81810 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb817e0 = 0;
  _DAT_14cb817e8 = local_68;
  _DAT_14cb817f0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb81800 = CONCAT44(DAT_14cb81804,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb81804 == 0) {
    _DAT_14cb81800 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb817f8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb817f8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb817d0) && ((DAT_14cb81758 == (int *)0x0 || (*DAT_14cb81758 < DAT_14cb817d0)))) {
    DAT_14cb81758 = &DAT_14cb817d0;
  }
  FUN_14112da4e();
  local_30 = &local_70;
  local_70 = &DAT_14cb817d0;
  local_38 = &DAT_14cb817d4;
  FUN_146184ff2(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146184ff2 FUN_146184ff2 body=338 status=ok
// SIG undefined FUN_146184ff2(void)

undefined4 * FUN_146184ff2(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461851d8(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146185146(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb81768 - DAT_14cb81794;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb817a8)) {
      uVar10 = DAT_14cb817a8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb817a0;
      if (DAT_14cb817a0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb81798;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb817a8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb817a0;
      if (DAT_14cb817a0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb81798;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb817a8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb817a8 = iVar9;
      FUN_1461852e6();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146185146 FUN_146185146 body=145 status=ok
// SIG undefined FUN_146185146(void)

undefined8 FUN_146185146(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb81768 - DAT_14cb81794 != 1) && (DAT_14cb81768 != DAT_14cb81794)) {
    puVar6 = &DAT_14cb81798;
    if (DAT_14cb817a0 != (undefined *)0x0) {
      puVar6 = DAT_14cb817a0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb817a8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb81760 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d971c0(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461851d8 FUN_1461851d8 body=270 status=ok
// SIG undefined FUN_1461851d8(void)

int * FUN_1461851d8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb81790;
  iVar3 = DAT_14cb81768;
  if (DAT_14cb81794 == 0) {
    iVar2 = DAT_14cb81768 + 1;
    bVar7 = DAT_14cb8176c == DAT_14cb81768;
    DAT_14cb81768 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb81760,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb81770,1);
    puVar4 = DAT_14cb81780;
    if (DAT_14cb81780 == (undefined *)0x0) {
      puVar4 = &DAT_14cb81770;
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
    lVar6 = (longlong)DAT_14cb81790;
    DAT_14cb81790 = *(int *)(DAT_14cb81760 + 4 + lVar6 * 0x18);
    DAT_14cb81794 = DAT_14cb81794 + -1;
    if (DAT_14cb81794 != 0) {
      *(undefined4 *)(DAT_14cb81760 + (longlong)DAT_14cb81790 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb81770;
  if (DAT_14cb81780 != (undefined *)0x0) {
    puVar4 = DAT_14cb81780;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb81760;
  return param_1;
}



// FUNCTION 1461852e6 FUN_1461852e6 body=523 status=ok
// SIG undefined FUN_1461852e6(void)

void FUN_1461852e6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb817a0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb817a0,0,0,4);
  }
  uVar3 = DAT_14cb817a8;
  uVar2 = local_50;
  if (DAT_14cb817a8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb81798,0,DAT_14cb817a8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb817a0;
        if (DAT_14cb817a0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb81798;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb817a8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb81770;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb81788 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb81760;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb817a8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb817a0;
        if (DAT_14cb817a0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb81798;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb817a8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb817a0;
        if (DAT_14cb817a0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb81798;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb817a8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461854f2 FUN_1461854f2 body=507 status=ok
// SIG undefined FUN_1461854f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461854f2(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb81a90 = 0;
  FUN_1446ddc76(&DAT_14cb81a94,"puddle_hazard",1);
  _DAT_14cb81aa0 = 0;
  _DAT_14cb81aa8 = 0;
  _DAT_14cb81ab0 = 0;
  DAT_14cb81ab8 = (void *)0x0;
  _DAT_14cb81ac0 = 0;
  _DAT_14cb81ac8 = FUN_14109545e;
  DAT_14cb81ad0 = *param_1;
  DAT_14cb81ae0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb81af0._0_4_ = (undefined4)param_1[4];
  DAT_14cb81af0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb81af8 = (undefined4)param_1[5];
  uRam000000014cb81afc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb81b00 = (undefined4)param_1[6];
  uRam000000014cb81b04 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb81b08 = (undefined4)param_1[7];
  uRam000000014cb81b0c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb81ad0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb81aa0 = 0;
  _DAT_14cb81aa8 = local_68;
  _DAT_14cb81ab0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb81ac0 = CONCAT44(DAT_14cb81ac4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb81ac4 == 0) {
    _DAT_14cb81ac0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb81ab8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb81ab8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb81a90) && ((DAT_14cb81a20 == (int *)0x0 || (*DAT_14cb81a20 < DAT_14cb81a90)))) {
    DAT_14cb81a20 = &DAT_14cb81a90;
  }
  FUN_14109553a();
  local_30 = &local_70;
  local_70 = &DAT_14cb81a90;
  local_38 = &DAT_14cb81a94;
  FUN_1461856ee(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461856ee FUN_1461856ee body=338 status=ok
// SIG undefined FUN_1461856ee(void)

undefined4 * FUN_1461856ee(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461858d4(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146185842(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb81a30 - DAT_14cb81a5c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb81a70)) {
      uVar10 = DAT_14cb81a70 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb81a68;
      if (DAT_14cb81a68 == (undefined *)0x0) {
        puVar7 = &DAT_14cb81a60;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb81a70 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb81a68;
      if (DAT_14cb81a68 == (undefined *)0x0) {
        puVar7 = &DAT_14cb81a60;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb81a70 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb81a70 = iVar9;
      FUN_1461859e2();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146185842 FUN_146185842 body=145 status=ok
// SIG undefined FUN_146185842(void)

undefined8 FUN_146185842(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb81a30 - DAT_14cb81a5c != 1) && (DAT_14cb81a30 != DAT_14cb81a5c)) {
    puVar6 = &DAT_14cb81a60;
    if (DAT_14cb81a68 != (undefined *)0x0) {
      puVar6 = DAT_14cb81a68;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb81a70 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb81a28 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d973ac(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461858d4 FUN_1461858d4 body=270 status=ok
// SIG undefined FUN_1461858d4(void)

int * FUN_1461858d4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb81a58;
  iVar3 = DAT_14cb81a30;
  if (DAT_14cb81a5c == 0) {
    iVar2 = DAT_14cb81a30 + 1;
    bVar7 = DAT_14cb81a34 == DAT_14cb81a30;
    DAT_14cb81a30 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb81a28,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb81a38,1);
    puVar4 = DAT_14cb81a48;
    if (DAT_14cb81a48 == (undefined *)0x0) {
      puVar4 = &DAT_14cb81a38;
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
    lVar6 = (longlong)DAT_14cb81a58;
    DAT_14cb81a58 = *(int *)(DAT_14cb81a28 + 4 + lVar6 * 0x18);
    DAT_14cb81a5c = DAT_14cb81a5c + -1;
    if (DAT_14cb81a5c != 0) {
      *(undefined4 *)(DAT_14cb81a28 + (longlong)DAT_14cb81a58 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb81a38;
  if (DAT_14cb81a48 != (undefined *)0x0) {
    puVar4 = DAT_14cb81a48;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb81a28;
  return param_1;
}



// FUNCTION 1461859e2 FUN_1461859e2 body=523 status=ok
// SIG undefined FUN_1461859e2(void)

void FUN_1461859e2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb81a68 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb81a68,0,0,4);
  }
  uVar3 = DAT_14cb81a70;
  uVar2 = local_50;
  if (DAT_14cb81a70 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb81a60,0,DAT_14cb81a70,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb81a68;
        if (DAT_14cb81a68 == (undefined *)0x0) {
          puVar6 = &DAT_14cb81a60;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb81a70 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb81a38;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb81a50 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb81a28;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb81a70 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb81a68;
        if (DAT_14cb81a68 == (undefined *)0x0) {
          puVar6 = &DAT_14cb81a60;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb81a70 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb81a68;
        if (DAT_14cb81a68 == (undefined *)0x0) {
          puVar6 = &DAT_14cb81a60;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb81a70 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146185bee FUN_146185bee body=507 status=ok
// SIG undefined FUN_146185bee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146185bee(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb85460 = 0;
  FUN_1446ddc76(&DAT_14cb85464,"ManagedActor",1);
  _DAT_14cb85470 = 0;
  _DAT_14cb85478 = 0;
  _DAT_14cb85480 = 0;
  DAT_14cb85488 = (void *)0x0;
  _DAT_14cb85490 = 0;
  _DAT_14cb85498 = FUN_145846980;
  DAT_14cb854a0 = *param_1;
  DAT_14cb854b0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb854c0._0_4_ = (undefined4)param_1[4];
  DAT_14cb854c0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb854c8 = (undefined4)param_1[5];
  uRam000000014cb854cc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb854d0 = (undefined4)param_1[6];
  uRam000000014cb854d4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb854d8 = (undefined4)param_1[7];
  uRam000000014cb854dc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb854a0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb85470 = 0;
  _DAT_14cb85478 = local_68;
  _DAT_14cb85480 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb85490 = CONCAT44(DAT_14cb85494,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb85494 == 0) {
    _DAT_14cb85490 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb85488,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb85488,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb85460) && ((DAT_14cb853f0 == (int *)0x0 || (*DAT_14cb853f0 < DAT_14cb85460)))) {
    DAT_14cb853f0 = &DAT_14cb85460;
  }
  FUN_145846a72();
  local_30 = &local_70;
  local_70 = &DAT_14cb85460;
  local_38 = &DAT_14cb85464;
  FUN_146185dea(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146185dea FUN_146185dea body=338 status=ok
// SIG undefined FUN_146185dea(void)

undefined4 * FUN_146185dea(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146185fd0(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146185f3e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb85400 - DAT_14cb8542c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb85440)) {
      uVar10 = DAT_14cb85440 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb85438;
      if (DAT_14cb85438 == (undefined *)0x0) {
        puVar7 = &DAT_14cb85430;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb85440 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb85438;
      if (DAT_14cb85438 == (undefined *)0x0) {
        puVar7 = &DAT_14cb85430;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb85440 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb85440 = iVar9;
      FUN_1461860de();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146185f3e FUN_146185f3e body=145 status=ok
// SIG undefined FUN_146185f3e(void)

undefined8 FUN_146185f3e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb85400 - DAT_14cb8542c != 1) && (DAT_14cb85400 != DAT_14cb8542c)) {
    puVar6 = &DAT_14cb85430;
    if (DAT_14cb85438 != (undefined *)0x0) {
      puVar6 = DAT_14cb85438;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb85440 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb853f8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d98120(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146185fd0 FUN_146185fd0 body=270 status=ok
// SIG undefined FUN_146185fd0(void)

int * FUN_146185fd0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb85428;
  iVar3 = DAT_14cb85400;
  if (DAT_14cb8542c == 0) {
    iVar2 = DAT_14cb85400 + 1;
    bVar7 = DAT_14cb85404 == DAT_14cb85400;
    DAT_14cb85400 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb853f8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb85408,1);
    puVar4 = DAT_14cb85418;
    if (DAT_14cb85418 == (undefined *)0x0) {
      puVar4 = &DAT_14cb85408;
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
    lVar6 = (longlong)DAT_14cb85428;
    DAT_14cb85428 = *(int *)(DAT_14cb853f8 + 4 + lVar6 * 0x18);
    DAT_14cb8542c = DAT_14cb8542c + -1;
    if (DAT_14cb8542c != 0) {
      *(undefined4 *)(DAT_14cb853f8 + (longlong)DAT_14cb85428 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb85408;
  if (DAT_14cb85418 != (undefined *)0x0) {
    puVar4 = DAT_14cb85418;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb853f8;
  return param_1;
}



// FUNCTION 1461860de FUN_1461860de body=523 status=ok
// SIG undefined FUN_1461860de(void)

void FUN_1461860de(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb85438 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb85438,0,0,4);
  }
  uVar3 = DAT_14cb85440;
  uVar2 = local_50;
  if (DAT_14cb85440 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb85430,0,DAT_14cb85440,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb85438;
        if (DAT_14cb85438 == (undefined *)0x0) {
          puVar6 = &DAT_14cb85430;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb85440 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb85408;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb85420 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb853f8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb85440 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb85438;
        if (DAT_14cb85438 == (undefined *)0x0) {
          puVar6 = &DAT_14cb85430;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb85440 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb85438;
        if (DAT_14cb85438 == (undefined *)0x0) {
          puVar6 = &DAT_14cb85430;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb85440 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461862ea FUN_1461862ea body=507 status=ok
// SIG undefined FUN_1461862ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461862ea(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb856e0 = 0;
  FUN_1446ddc76(&DAT_14cb856e4,"Mantle",1);
  _DAT_14cb856f0 = 0;
  _DAT_14cb856f8 = 0;
  _DAT_14cb85700 = 0;
  DAT_14cb85708 = (void *)0x0;
  _DAT_14cb85710 = 0;
  _DAT_14cb85718 = FUN_14597813a;
  DAT_14cb85720 = *param_1;
  DAT_14cb85730 = param_1[2];
  param_1[2] = 0;
  DAT_14cb85740._0_4_ = (undefined4)param_1[4];
  DAT_14cb85740._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb85748 = (undefined4)param_1[5];
  uRam000000014cb8574c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb85750 = (undefined4)param_1[6];
  uRam000000014cb85754 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb85758 = (undefined4)param_1[7];
  uRam000000014cb8575c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb85720 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb856f0 = 0;
  _DAT_14cb856f8 = local_68;
  _DAT_14cb85700 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb85710 = CONCAT44(DAT_14cb85714,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb85714 == 0) {
    _DAT_14cb85710 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb85708,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb85708,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb856e0) && ((DAT_14cb85668 == (int *)0x0 || (*DAT_14cb85668 < DAT_14cb856e0)))) {
    DAT_14cb85668 = &DAT_14cb856e0;
  }
  FUN_1459780a2();
  local_30 = &local_70;
  local_70 = &DAT_14cb856e0;
  local_38 = &DAT_14cb856e4;
  FUN_1461864e6(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461864e6 FUN_1461864e6 body=338 status=ok
// SIG undefined FUN_1461864e6(void)

undefined4 * FUN_1461864e6(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461866cc(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14618663a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb85678 - DAT_14cb856a4;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb856b8)) {
      uVar10 = DAT_14cb856b8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb856b0;
      if (DAT_14cb856b0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb856a8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb856b8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb856b0;
      if (DAT_14cb856b0 == (undefined *)0x0) {
        puVar7 = &DAT_14cb856a8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb856b8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb856b8 = iVar9;
      FUN_1461867da();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618663a FUN_14618663a body=145 status=ok
// SIG undefined FUN_14618663a(void)

undefined8 FUN_14618663a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb85678 - DAT_14cb856a4 != 1) && (DAT_14cb85678 != DAT_14cb856a4)) {
    puVar6 = &DAT_14cb856a8;
    if (DAT_14cb856b0 != (undefined *)0x0) {
      puVar6 = DAT_14cb856b0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb856b8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb85670 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9830c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461866cc FUN_1461866cc body=270 status=ok
// SIG undefined FUN_1461866cc(void)

int * FUN_1461866cc(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb856a0;
  iVar3 = DAT_14cb85678;
  if (DAT_14cb856a4 == 0) {
    iVar2 = DAT_14cb85678 + 1;
    bVar7 = DAT_14cb8567c == DAT_14cb85678;
    DAT_14cb85678 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb85670,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb85680,1);
    puVar4 = DAT_14cb85690;
    if (DAT_14cb85690 == (undefined *)0x0) {
      puVar4 = &DAT_14cb85680;
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
    lVar6 = (longlong)DAT_14cb856a0;
    DAT_14cb856a0 = *(int *)(DAT_14cb85670 + 4 + lVar6 * 0x18);
    DAT_14cb856a4 = DAT_14cb856a4 + -1;
    if (DAT_14cb856a4 != 0) {
      *(undefined4 *)(DAT_14cb85670 + (longlong)DAT_14cb856a0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb85680;
  if (DAT_14cb85690 != (undefined *)0x0) {
    puVar4 = DAT_14cb85690;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb85670;
  return param_1;
}



// FUNCTION 1461867da FUN_1461867da body=523 status=ok
// SIG undefined FUN_1461867da(void)

void FUN_1461867da(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb856b0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb856b0,0,0,4);
  }
  uVar3 = DAT_14cb856b8;
  uVar2 = local_50;
  if (DAT_14cb856b8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb856a8,0,DAT_14cb856b8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb856b0;
        if (DAT_14cb856b0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb856a8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb856b8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb85680;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb85698 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb85670;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb856b8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb856b0;
        if (DAT_14cb856b0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb856a8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb856b8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb856b0;
        if (DAT_14cb856b0 == (undefined *)0x0) {
          puVar6 = &DAT_14cb856a8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb856b8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461869e6 FUN_1461869e6 body=507 status=ok
// SIG undefined FUN_1461869e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461869e6(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb88f20 = 0;
  FUN_1446ddc76(&DAT_14cb88f24,"PingFeedback",1);
  _DAT_14cb88f30 = 0;
  _DAT_14cb88f38 = 0;
  _DAT_14cb88f40 = 0;
  DAT_14cb88f48 = (void *)0x0;
  _DAT_14cb88f50 = 0;
  _DAT_14cb88f58 = FUN_141083006;
  DAT_14cb88f60 = *param_1;
  DAT_14cb88f70 = param_1[2];
  param_1[2] = 0;
  DAT_14cb88f80._0_4_ = (undefined4)param_1[4];
  DAT_14cb88f80._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb88f88 = (undefined4)param_1[5];
  uRam000000014cb88f8c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb88f90 = (undefined4)param_1[6];
  uRam000000014cb88f94 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb88f98 = (undefined4)param_1[7];
  uRam000000014cb88f9c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb88f60 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb88f30 = 0;
  _DAT_14cb88f38 = local_68;
  _DAT_14cb88f40 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb88f50 = CONCAT44(DAT_14cb88f54,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb88f54 == 0) {
    _DAT_14cb88f50 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb88f48,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb88f48,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb88f20) && ((DAT_14cb88eb0 == (int *)0x0 || (*DAT_14cb88eb0 < DAT_14cb88f20)))) {
    DAT_14cb88eb0 = &DAT_14cb88f20;
  }
  FUN_140d7492c();
  local_30 = &local_70;
  local_70 = &DAT_14cb88f20;
  local_38 = &DAT_14cb88f24;
  FUN_146186be2(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146186be2 FUN_146186be2 body=338 status=ok
// SIG undefined FUN_146186be2(void)

undefined4 * FUN_146186be2(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146186dc8(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146186d36(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb88ec0 - DAT_14cb88eec;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb88f00)) {
      uVar10 = DAT_14cb88f00 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb88ef8;
      if (DAT_14cb88ef8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb88ef0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb88f00 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb88ef8;
      if (DAT_14cb88ef8 == (undefined *)0x0) {
        puVar7 = &DAT_14cb88ef0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb88f00 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb88f00 = iVar9;
      FUN_146186ed6();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146186d36 FUN_146186d36 body=145 status=ok
// SIG undefined FUN_146186d36(void)

undefined8 FUN_146186d36(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb88ec0 - DAT_14cb88eec != 1) && (DAT_14cb88ec0 != DAT_14cb88eec)) {
    puVar6 = &DAT_14cb88ef0;
    if (DAT_14cb88ef8 != (undefined *)0x0) {
      puVar6 = DAT_14cb88ef8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb88f00 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb88eb8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d98ca8(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146186dc8 FUN_146186dc8 body=270 status=ok
// SIG undefined FUN_146186dc8(void)

int * FUN_146186dc8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb88ee8;
  iVar3 = DAT_14cb88ec0;
  if (DAT_14cb88eec == 0) {
    iVar2 = DAT_14cb88ec0 + 1;
    bVar7 = DAT_14cb88ec4 == DAT_14cb88ec0;
    DAT_14cb88ec0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb88eb8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb88ec8,1);
    puVar4 = DAT_14cb88ed8;
    if (DAT_14cb88ed8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb88ec8;
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
    lVar6 = (longlong)DAT_14cb88ee8;
    DAT_14cb88ee8 = *(int *)(DAT_14cb88eb8 + 4 + lVar6 * 0x18);
    DAT_14cb88eec = DAT_14cb88eec + -1;
    if (DAT_14cb88eec != 0) {
      *(undefined4 *)(DAT_14cb88eb8 + (longlong)DAT_14cb88ee8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb88ec8;
  if (DAT_14cb88ed8 != (undefined *)0x0) {
    puVar4 = DAT_14cb88ed8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb88eb8;
  return param_1;
}



// FUNCTION 146186ed6 FUN_146186ed6 body=523 status=ok
// SIG undefined FUN_146186ed6(void)

void FUN_146186ed6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb88ef8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb88ef8,0,0,4);
  }
  uVar3 = DAT_14cb88f00;
  uVar2 = local_50;
  if (DAT_14cb88f00 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb88ef0,0,DAT_14cb88f00,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb88ef8;
        if (DAT_14cb88ef8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb88ef0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb88f00 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb88ec8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb88ee0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb88eb8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb88f00 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb88ef8;
        if (DAT_14cb88ef8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb88ef0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb88f00 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb88ef8;
        if (DAT_14cb88ef8 == (undefined *)0x0) {
          puVar6 = &DAT_14cb88ef0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb88f00 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461870e2 FUN_1461870e2 body=507 status=ok
// SIG undefined FUN_1461870e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461870e2(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8c070 = 0;
  FUN_1446ddc76(&DAT_14cb8c074,"SpawnPattern",1);
  _DAT_14cb8c080 = 0;
  _DAT_14cb8c088 = 0;
  _DAT_14cb8c090 = 0;
  DAT_14cb8c098 = (void *)0x0;
  _DAT_14cb8c0a0 = 0;
  _DAT_14cb8c0a8 = FUN_140ebf3f4;
  DAT_14cb8c0b0 = *param_1;
  DAT_14cb8c0c0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8c0d0._0_4_ = (undefined4)param_1[4];
  DAT_14cb8c0d0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8c0d8 = (undefined4)param_1[5];
  uRam000000014cb8c0dc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8c0e0 = (undefined4)param_1[6];
  uRam000000014cb8c0e4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8c0e8 = (undefined4)param_1[7];
  uRam000000014cb8c0ec = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8c0b0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8c080 = 0;
  _DAT_14cb8c088 = local_68;
  _DAT_14cb8c090 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8c0a0 = CONCAT44(DAT_14cb8c0a4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8c0a4 == 0) {
    _DAT_14cb8c0a0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8c098,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8c098,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8c070) && ((DAT_14cb8bff8 == (int *)0x0 || (*DAT_14cb8bff8 < DAT_14cb8c070)))) {
    DAT_14cb8bff8 = &DAT_14cb8c070;
  }
  FUN_140eb1190();
  local_30 = &local_70;
  local_70 = &DAT_14cb8c070;
  local_38 = &DAT_14cb8c074;
  FUN_1461872de(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461872de FUN_1461872de body=338 status=ok
// SIG undefined FUN_1461872de(void)

undefined4 * FUN_1461872de(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461874c4(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146187432(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8c008 - DAT_14cb8c034;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8c048)) {
      uVar10 = DAT_14cb8c048 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8c040;
      if (DAT_14cb8c040 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8c038;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8c048 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8c040;
      if (DAT_14cb8c040 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8c038;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8c048 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8c048 = iVar9;
      FUN_1461875d2();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146187432 FUN_146187432 body=145 status=ok
// SIG undefined FUN_146187432(void)

undefined8 FUN_146187432(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8c008 - DAT_14cb8c034 != 1) && (DAT_14cb8c008 != DAT_14cb8c034)) {
    puVar6 = &DAT_14cb8c038;
    if (DAT_14cb8c040 != (undefined *)0x0) {
      puVar6 = DAT_14cb8c040;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8c048 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8c000 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9b318(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461874c4 FUN_1461874c4 body=270 status=ok
// SIG undefined FUN_1461874c4(void)

int * FUN_1461874c4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8c030;
  iVar3 = DAT_14cb8c008;
  if (DAT_14cb8c034 == 0) {
    iVar2 = DAT_14cb8c008 + 1;
    bVar7 = DAT_14cb8c00c == DAT_14cb8c008;
    DAT_14cb8c008 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8c000,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8c010,1);
    puVar4 = DAT_14cb8c020;
    if (DAT_14cb8c020 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8c010;
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
    lVar6 = (longlong)DAT_14cb8c030;
    DAT_14cb8c030 = *(int *)(DAT_14cb8c000 + 4 + lVar6 * 0x18);
    DAT_14cb8c034 = DAT_14cb8c034 + -1;
    if (DAT_14cb8c034 != 0) {
      *(undefined4 *)(DAT_14cb8c000 + (longlong)DAT_14cb8c030 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8c010;
  if (DAT_14cb8c020 != (undefined *)0x0) {
    puVar4 = DAT_14cb8c020;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8c000;
  return param_1;
}



// FUNCTION 1461875d2 FUN_1461875d2 body=523 status=ok
// SIG undefined FUN_1461875d2(void)

void FUN_1461875d2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb8c040 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8c040,0,0,4);
  }
  uVar3 = DAT_14cb8c048;
  uVar2 = local_50;
  if (DAT_14cb8c048 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8c038,0,DAT_14cb8c048,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8c040;
        if (DAT_14cb8c040 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8c038;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8c048 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8c010;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8c028 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8c000;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8c048 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8c040;
        if (DAT_14cb8c040 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8c038;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8c048 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8c040;
        if (DAT_14cb8c040 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8c038;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8c048 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461877de FUN_1461877de body=507 status=ok
// SIG undefined FUN_1461877de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461877de(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cb8ca90 = 0;
  FUN_1446ddc76(&DAT_14cb8ca94,"gbx_swimming",1);
  _DAT_14cb8caa0 = 0;
  _DAT_14cb8caa8 = 0;
  _DAT_14cb8cab0 = 0;
  DAT_14cb8cab8 = (void *)0x0;
  _DAT_14cb8cac0 = 0;
  _DAT_14cb8cac8 = FUN_14583403e;
  DAT_14cb8cad0 = *param_1;
  DAT_14cb8cae0 = param_1[2];
  param_1[2] = 0;
  DAT_14cb8caf0._0_4_ = (undefined4)param_1[4];
  DAT_14cb8caf0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cb8caf8 = (undefined4)param_1[5];
  uRam000000014cb8cafc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cb8cb00 = (undefined4)param_1[6];
  uRam000000014cb8cb04 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cb8cb08 = (undefined4)param_1[7];
  uRam000000014cb8cb0c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cb8cad0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cb8caa0 = 0;
  _DAT_14cb8caa8 = local_68;
  _DAT_14cb8cab0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cb8cac0 = CONCAT44(DAT_14cb8cac4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cb8cac4 == 0) {
    _DAT_14cb8cac0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cb8cab8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cb8cab8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cb8ca90) && ((DAT_14cb8ca18 == (int *)0x0 || (*DAT_14cb8ca18 < DAT_14cb8ca90)))) {
    DAT_14cb8ca18 = &DAT_14cb8ca90;
  }
  FUN_1411c6bdc();
  local_30 = &local_70;
  local_70 = &DAT_14cb8ca90;
  local_38 = &DAT_14cb8ca94;
  FUN_1461879da(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461879da FUN_1461879da body=338 status=ok
// SIG undefined FUN_1461879da(void)

undefined4 * FUN_1461879da(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146187bc0(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146187b2e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8ca28 - DAT_14cb8ca54;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8ca68)) {
      uVar10 = DAT_14cb8ca68 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8ca60;
      if (DAT_14cb8ca60 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8ca58;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8ca68 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8ca60;
      if (DAT_14cb8ca60 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8ca58;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8ca68 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8ca68 = iVar9;
      FUN_146187cce();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146187b2e FUN_146187b2e body=145 status=ok
// SIG undefined FUN_146187b2e(void)

undefined8 FUN_146187b2e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8ca28 - DAT_14cb8ca54 != 1) && (DAT_14cb8ca28 != DAT_14cb8ca54)) {
    puVar6 = &DAT_14cb8ca58;
    if (DAT_14cb8ca60 != (undefined *)0x0) {
      puVar6 = DAT_14cb8ca60;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8ca68 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8ca20 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9bcb4(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146187bc0 FUN_146187bc0 body=270 status=ok
// SIG undefined FUN_146187bc0(void)

int * FUN_146187bc0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8ca50;
  iVar3 = DAT_14cb8ca28;
  if (DAT_14cb8ca54 == 0) {
    iVar2 = DAT_14cb8ca28 + 1;
    bVar7 = DAT_14cb8ca2c == DAT_14cb8ca28;
    DAT_14cb8ca28 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8ca20,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8ca30,1);
    puVar4 = DAT_14cb8ca40;
    if (DAT_14cb8ca40 == (undefined *)0x0) {
      puVar4 = &DAT_14cb8ca30;
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
    lVar6 = (longlong)DAT_14cb8ca50;
    DAT_14cb8ca50 = *(int *)(DAT_14cb8ca20 + 4 + lVar6 * 0x18);
    DAT_14cb8ca54 = DAT_14cb8ca54 + -1;
    if (DAT_14cb8ca54 != 0) {
      *(undefined4 *)(DAT_14cb8ca20 + (longlong)DAT_14cb8ca50 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8ca30;
  if (DAT_14cb8ca40 != (undefined *)0x0) {
    puVar4 = DAT_14cb8ca40;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8ca20;
  return param_1;
}



// FUNCTION 146187cce FUN_146187cce body=523 status=ok
// SIG undefined FUN_146187cce(void)

void FUN_146187cce(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb8ca60 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8ca60,0,0,4);
  }
  uVar3 = DAT_14cb8ca68;
  uVar2 = local_50;
  if (DAT_14cb8ca68 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8ca58,0,DAT_14cb8ca68,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8ca60;
        if (DAT_14cb8ca60 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8ca58;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8ca68 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8ca30;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8ca48 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8ca20;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8ca68 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8ca60;
        if (DAT_14cb8ca60 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8ca58;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8ca68 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8ca60;
        if (DAT_14cb8ca60 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8ca58;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8ca68 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146187eda FUN_146187eda body=507 status=ok
// SIG undefined FUN_146187eda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146187eda(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbc2950 = 0;
  FUN_1446ddc76(&DAT_14cbc2954,"singularity",1);
  _DAT_14cbc2960 = 0;
  _DAT_14cbc2968 = 0;
  _DAT_14cbc2970 = 0;
  DAT_14cbc2978 = (void *)0x0;
  _DAT_14cbc2980 = 0;
  _DAT_14cbc2988 = FUN_140ef3c12;
  DAT_14cbc2990 = *param_1;
  DAT_14cbc29a0 = param_1[2];
  param_1[2] = 0;
  DAT_14cbc29b0._0_4_ = (undefined4)param_1[4];
  DAT_14cbc29b0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbc29b8 = (undefined4)param_1[5];
  uRam000000014cbc29bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbc29c0 = (undefined4)param_1[6];
  uRam000000014cbc29c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbc29c8 = (undefined4)param_1[7];
  uRam000000014cbc29cc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbc2990 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbc2960 = 0;
  _DAT_14cbc2968 = local_68;
  _DAT_14cbc2970 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbc2980 = CONCAT44(DAT_14cbc2984,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbc2984 == 0) {
    _DAT_14cbc2980 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbc2978,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbc2978,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbc2950) && ((DAT_14cbc28d8 == (int *)0x0 || (*DAT_14cbc28d8 < DAT_14cbc2950)))) {
    DAT_14cbc28d8 = &DAT_14cbc2950;
  }
  FUN_140ef3cfa();
  local_30 = &local_70;
  local_70 = &DAT_14cbc2950;
  local_38 = &DAT_14cbc2954;
  FUN_1461880d6(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461880d6 FUN_1461880d6 body=338 status=ok
// SIG undefined FUN_1461880d6(void)

undefined4 * FUN_1461880d6(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461882bc(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14618822a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbc28e8 - DAT_14cbc2914;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbc2928)) {
      uVar10 = DAT_14cbc2928 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbc2920;
      if (DAT_14cbc2920 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc2918;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc2928 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbc2920;
      if (DAT_14cbc2920 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc2918;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc2928 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbc2928 = iVar9;
      FUN_1461883ca();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618822a FUN_14618822a body=145 status=ok
// SIG undefined FUN_14618822a(void)

undefined8 FUN_14618822a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbc28e8 - DAT_14cbc2914 != 1) && (DAT_14cbc28e8 != DAT_14cbc2914)) {
    puVar6 = &DAT_14cbc2918;
    if (DAT_14cbc2920 != (undefined *)0x0) {
      puVar6 = DAT_14cbc2920;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbc2928 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbc28e0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9cfec(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461882bc FUN_1461882bc body=270 status=ok
// SIG undefined FUN_1461882bc(void)

int * FUN_1461882bc(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbc2910;
  iVar3 = DAT_14cbc28e8;
  if (DAT_14cbc2914 == 0) {
    iVar2 = DAT_14cbc28e8 + 1;
    bVar7 = DAT_14cbc28ec == DAT_14cbc28e8;
    DAT_14cbc28e8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbc28e0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbc28f0,1);
    puVar4 = DAT_14cbc2900;
    if (DAT_14cbc2900 == (undefined *)0x0) {
      puVar4 = &DAT_14cbc28f0;
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
    lVar6 = (longlong)DAT_14cbc2910;
    DAT_14cbc2910 = *(int *)(DAT_14cbc28e0 + 4 + lVar6 * 0x18);
    DAT_14cbc2914 = DAT_14cbc2914 + -1;
    if (DAT_14cbc2914 != 0) {
      *(undefined4 *)(DAT_14cbc28e0 + (longlong)DAT_14cbc2910 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbc28f0;
  if (DAT_14cbc2900 != (undefined *)0x0) {
    puVar4 = DAT_14cbc2900;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbc28e0;
  return param_1;
}



// FUNCTION 1461883ca FUN_1461883ca body=523 status=ok
// SIG undefined FUN_1461883ca(void)

void FUN_1461883ca(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc2920 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbc2920,0,0,4);
  }
  uVar3 = DAT_14cbc2928;
  uVar2 = local_50;
  if (DAT_14cbc2928 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbc2918,0,DAT_14cbc2928,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbc2920;
        if (DAT_14cbc2920 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc2918;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbc2928 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbc28f0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbc2908 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbc28e0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cbc2928 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbc2920;
        if (DAT_14cbc2920 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc2918;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbc2928 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbc2920;
        if (DAT_14cbc2920 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc2918;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbc2928 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461885d6 FUN_1461885d6 body=507 status=ok
// SIG undefined FUN_1461885d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461885d6(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbc3bf0 = 0;
  FUN_1446ddc76(&DAT_14cbc3bf4,"OakFirstPerson",1);
  _DAT_14cbc3c00 = 0;
  _DAT_14cbc3c08 = 0;
  _DAT_14cbc3c10 = 0;
  DAT_14cbc3c18 = (void *)0x0;
  _DAT_14cbc3c20 = 0;
  _DAT_14cbc3c28 = FUN_145acd3fa;
  DAT_14cbc3c30 = *param_1;
  DAT_14cbc3c40 = param_1[2];
  param_1[2] = 0;
  DAT_14cbc3c50._0_4_ = (undefined4)param_1[4];
  DAT_14cbc3c50._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbc3c58 = (undefined4)param_1[5];
  uRam000000014cbc3c5c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbc3c60 = (undefined4)param_1[6];
  uRam000000014cbc3c64 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbc3c68 = (undefined4)param_1[7];
  uRam000000014cbc3c6c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbc3c30 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbc3c00 = 0;
  _DAT_14cbc3c08 = local_68;
  _DAT_14cbc3c10 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbc3c20 = CONCAT44(DAT_14cbc3c24,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbc3c24 == 0) {
    _DAT_14cbc3c20 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbc3c18,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbc3c18,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbc3bf0) && ((DAT_14cbc3b78 == (int *)0x0 || (*DAT_14cbc3b78 < DAT_14cbc3bf0)))) {
    DAT_14cbc3b78 = &DAT_14cbc3bf0;
  }
  FUN_145acd4d0();
  local_30 = &local_70;
  local_70 = &DAT_14cbc3bf0;
  local_38 = &DAT_14cbc3bf4;
  FUN_1461887d2(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461887d2 FUN_1461887d2 body=338 status=ok
// SIG undefined FUN_1461887d2(void)

undefined4 * FUN_1461887d2(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461889b8(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146188926(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbc3b88 - DAT_14cbc3bb4;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbc3bc8)) {
      uVar10 = DAT_14cbc3bc8 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbc3bc0;
      if (DAT_14cbc3bc0 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc3bb8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc3bc8 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbc3bc0;
      if (DAT_14cbc3bc0 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc3bb8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc3bc8 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbc3bc8 = iVar9;
      FUN_146188ac6();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146188926 FUN_146188926 body=145 status=ok
// SIG undefined FUN_146188926(void)

undefined8 FUN_146188926(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbc3b88 - DAT_14cbc3bb4 != 1) && (DAT_14cbc3b88 != DAT_14cbc3bb4)) {
    puVar6 = &DAT_14cbc3bb8;
    if (DAT_14cbc3bc0 != (undefined *)0x0) {
      puVar6 = DAT_14cbc3bc0;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbc3bc8 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbc3b80 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9d1d8(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461889b8 FUN_1461889b8 body=270 status=ok
// SIG undefined FUN_1461889b8(void)

int * FUN_1461889b8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbc3bb0;
  iVar3 = DAT_14cbc3b88;
  if (DAT_14cbc3bb4 == 0) {
    iVar2 = DAT_14cbc3b88 + 1;
    bVar7 = DAT_14cbc3b8c == DAT_14cbc3b88;
    DAT_14cbc3b88 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbc3b80,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbc3b90,1);
    puVar4 = DAT_14cbc3ba0;
    if (DAT_14cbc3ba0 == (undefined *)0x0) {
      puVar4 = &DAT_14cbc3b90;
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
    lVar6 = (longlong)DAT_14cbc3bb0;
    DAT_14cbc3bb0 = *(int *)(DAT_14cbc3b80 + 4 + lVar6 * 0x18);
    DAT_14cbc3bb4 = DAT_14cbc3bb4 + -1;
    if (DAT_14cbc3bb4 != 0) {
      *(undefined4 *)(DAT_14cbc3b80 + (longlong)DAT_14cbc3bb0 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbc3b90;
  if (DAT_14cbc3ba0 != (undefined *)0x0) {
    puVar4 = DAT_14cbc3ba0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbc3b80;
  return param_1;
}



// FUNCTION 146188ac6 FUN_146188ac6 body=523 status=ok
// SIG undefined FUN_146188ac6(void)

void FUN_146188ac6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc3bc0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbc3bc0,0,0,4);
  }
  uVar3 = DAT_14cbc3bc8;
  uVar2 = local_50;
  if (DAT_14cbc3bc8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbc3bb8,0,DAT_14cbc3bc8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbc3bc0;
        if (DAT_14cbc3bc0 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc3bb8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbc3bc8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbc3b90;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbc3ba8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbc3b80;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cbc3bc8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbc3bc0;
        if (DAT_14cbc3bc0 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc3bb8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbc3bc8 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbc3bc0;
        if (DAT_14cbc3bc0 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc3bb8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbc3bc8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146188cd2 FUN_146188cd2 body=507 status=ok
// SIG undefined FUN_146188cd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146188cd2(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbc5550 = 0;
  FUN_1446ddc76(&DAT_14cbc5554,"CarryableObjectCategoryDef",1);
  _DAT_14cbc5560 = 0;
  _DAT_14cbc5568 = 0;
  _DAT_14cbc5570 = 0;
  DAT_14cbc5578 = (void *)0x0;
  _DAT_14cbc5580 = 0;
  _DAT_14cbc5588 = FUN_14598c222;
  DAT_14cbc5590 = *param_1;
  DAT_14cbc55a0 = param_1[2];
  param_1[2] = 0;
  DAT_14cbc55b0._0_4_ = (undefined4)param_1[4];
  DAT_14cbc55b0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbc55b8 = (undefined4)param_1[5];
  uRam000000014cbc55bc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbc55c0 = (undefined4)param_1[6];
  uRam000000014cbc55c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbc55c8 = (undefined4)param_1[7];
  uRam000000014cbc55cc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbc5590 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbc5560 = 0;
  _DAT_14cbc5568 = local_68;
  _DAT_14cbc5570 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbc5580 = CONCAT44(DAT_14cbc5584,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbc5584 == 0) {
    _DAT_14cbc5580 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbc5578,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbc5578,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbc5550) && ((DAT_14cbc54d8 == (int *)0x0 || (*DAT_14cbc54d8 < DAT_14cbc5550)))) {
    DAT_14cbc54d8 = &DAT_14cbc5550;
  }
  FUN_145875d9a();
  local_30 = &local_70;
  local_70 = &DAT_14cbc5550;
  local_38 = &DAT_14cbc5554;
  FUN_146188ece(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146188ece FUN_146188ece body=338 status=ok
// SIG undefined FUN_146188ece(void)

undefined4 * FUN_146188ece(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461890b4(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146189022(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbc54e8 - DAT_14cbc5514;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbc5528)) {
      uVar10 = DAT_14cbc5528 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbc5520;
      if (DAT_14cbc5520 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc5518;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc5528 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbc5520;
      if (DAT_14cbc5520 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc5518;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc5528 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbc5528 = iVar9;
      FUN_1461891c2();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146189022 FUN_146189022 body=145 status=ok
// SIG undefined FUN_146189022(void)

undefined8 FUN_146189022(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbc54e8 - DAT_14cbc5514 != 1) && (DAT_14cbc54e8 != DAT_14cbc5514)) {
    puVar6 = &DAT_14cbc5518;
    if (DAT_14cbc5520 != (undefined *)0x0) {
      puVar6 = DAT_14cbc5520;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbc5528 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbc54e0 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9d5b0(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461890b4 FUN_1461890b4 body=270 status=ok
// SIG undefined FUN_1461890b4(void)

int * FUN_1461890b4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbc5510;
  iVar3 = DAT_14cbc54e8;
  if (DAT_14cbc5514 == 0) {
    iVar2 = DAT_14cbc54e8 + 1;
    bVar7 = DAT_14cbc54ec == DAT_14cbc54e8;
    DAT_14cbc54e8 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbc54e0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbc54f0,1);
    puVar4 = DAT_14cbc5500;
    if (DAT_14cbc5500 == (undefined *)0x0) {
      puVar4 = &DAT_14cbc54f0;
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
    lVar6 = (longlong)DAT_14cbc5510;
    DAT_14cbc5510 = *(int *)(DAT_14cbc54e0 + 4 + lVar6 * 0x18);
    DAT_14cbc5514 = DAT_14cbc5514 + -1;
    if (DAT_14cbc5514 != 0) {
      *(undefined4 *)(DAT_14cbc54e0 + (longlong)DAT_14cbc5510 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbc54f0;
  if (DAT_14cbc5500 != (undefined *)0x0) {
    puVar4 = DAT_14cbc5500;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbc54e0;
  return param_1;
}



// FUNCTION 1461891c2 FUN_1461891c2 body=523 status=ok
// SIG undefined FUN_1461891c2(void)

void FUN_1461891c2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc5520 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbc5520,0,0,4);
  }
  uVar3 = DAT_14cbc5528;
  uVar2 = local_50;
  if (DAT_14cbc5528 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbc5518,0,DAT_14cbc5528,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbc5520;
        if (DAT_14cbc5520 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc5518;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbc5528 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbc54f0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbc5508 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbc54e0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cbc5528 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbc5520;
        if (DAT_14cbc5520 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc5518;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbc5528 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbc5520;
        if (DAT_14cbc5520 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc5518;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbc5528 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461893ce FUN_1461893ce body=507 status=ok
// SIG undefined FUN_1461893ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1461893ce(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbc5c90 = 0;
  FUN_1446ddc76(&DAT_14cbc5c94,&DAT_14b963e1d,1);
  _DAT_14cbc5ca0 = 0;
  _DAT_14cbc5ca8 = 0;
  _DAT_14cbc5cb0 = 0;
  DAT_14cbc5cb8 = (void *)0x0;
  _DAT_14cbc5cc0 = 0;
  _DAT_14cbc5cc8 = FUN_14597fac4;
  DAT_14cbc5cd0 = *param_1;
  DAT_14cbc5ce0 = param_1[2];
  param_1[2] = 0;
  DAT_14cbc5cf0._0_4_ = (undefined4)param_1[4];
  DAT_14cbc5cf0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbc5cf8 = (undefined4)param_1[5];
  uRam000000014cbc5cfc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbc5d00 = (undefined4)param_1[6];
  uRam000000014cbc5d04 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbc5d08 = (undefined4)param_1[7];
  uRam000000014cbc5d0c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbc5cd0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbc5ca0 = 0;
  _DAT_14cbc5ca8 = local_68;
  _DAT_14cbc5cb0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbc5cc0 = CONCAT44(DAT_14cbc5cc4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbc5cc4 == 0) {
    _DAT_14cbc5cc0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbc5cb8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbc5cb8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbc5c90) && ((DAT_14cbc5c20 == (int *)0x0 || (*DAT_14cbc5c20 < DAT_14cbc5c90)))) {
    DAT_14cbc5c20 = &DAT_14cbc5c90;
  }
  FUN_14597fb9a();
  local_30 = &local_70;
  local_70 = &DAT_14cbc5c90;
  local_38 = &DAT_14cbc5c94;
  FUN_1461895ca(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1461895ca FUN_1461895ca body=338 status=ok
// SIG undefined FUN_1461895ca(void)

undefined4 * FUN_1461895ca(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1461897b0(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14618971e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbc5c30 - DAT_14cbc5c5c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbc5c70)) {
      uVar10 = DAT_14cbc5c70 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbc5c68;
      if (DAT_14cbc5c68 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc5c60;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc5c70 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbc5c68;
      if (DAT_14cbc5c68 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc5c60;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc5c70 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbc5c70 = iVar9;
      FUN_1461898be();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618971e FUN_14618971e body=145 status=ok
// SIG undefined FUN_14618971e(void)

undefined8 FUN_14618971e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbc5c30 - DAT_14cbc5c5c != 1) && (DAT_14cbc5c30 != DAT_14cbc5c5c)) {
    puVar6 = &DAT_14cbc5c60;
    if (DAT_14cbc5c68 != (undefined *)0x0) {
      puVar6 = DAT_14cbc5c68;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbc5c70 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbc5c28 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9d79c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1461897b0 FUN_1461897b0 body=270 status=ok
// SIG undefined FUN_1461897b0(void)

int * FUN_1461897b0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbc5c58;
  iVar3 = DAT_14cbc5c30;
  if (DAT_14cbc5c5c == 0) {
    iVar2 = DAT_14cbc5c30 + 1;
    bVar7 = DAT_14cbc5c34 == DAT_14cbc5c30;
    DAT_14cbc5c30 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbc5c28,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbc5c38,1);
    puVar4 = DAT_14cbc5c48;
    if (DAT_14cbc5c48 == (undefined *)0x0) {
      puVar4 = &DAT_14cbc5c38;
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
    lVar6 = (longlong)DAT_14cbc5c58;
    DAT_14cbc5c58 = *(int *)(DAT_14cbc5c28 + 4 + lVar6 * 0x18);
    DAT_14cbc5c5c = DAT_14cbc5c5c + -1;
    if (DAT_14cbc5c5c != 0) {
      *(undefined4 *)(DAT_14cbc5c28 + (longlong)DAT_14cbc5c58 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbc5c38;
  if (DAT_14cbc5c48 != (undefined *)0x0) {
    puVar4 = DAT_14cbc5c48;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbc5c28;
  return param_1;
}



// FUNCTION 1461898be FUN_1461898be body=523 status=ok
// SIG undefined FUN_1461898be(void)

void FUN_1461898be(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc5c68 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbc5c68,0,0,4);
  }
  uVar3 = DAT_14cbc5c70;
  uVar2 = local_50;
  if (DAT_14cbc5c70 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbc5c60,0,DAT_14cbc5c70,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbc5c68;
        if (DAT_14cbc5c68 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc5c60;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbc5c70 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbc5c38;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbc5c50 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbc5c28;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cbc5c70 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbc5c68;
        if (DAT_14cbc5c68 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc5c60;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbc5c70 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbc5c68;
        if (DAT_14cbc5c68 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc5c60;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbc5c70 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146189aca FUN_146189aca body=507 status=ok
// SIG undefined FUN_146189aca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146189aca(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbc5da0 = 0;
  FUN_1446ddc76(&DAT_14cbc5da4,"GroundSlam",1);
  _DAT_14cbc5db0 = 0;
  _DAT_14cbc5db8 = 0;
  _DAT_14cbc5dc0 = 0;
  DAT_14cbc5dc8 = (void *)0x0;
  _DAT_14cbc5dd0 = 0;
  _DAT_14cbc5dd8 = FUN_1458ef5a8;
  DAT_14cbc5de0 = *param_1;
  DAT_14cbc5df0 = param_1[2];
  param_1[2] = 0;
  DAT_14cbc5e00._0_4_ = (undefined4)param_1[4];
  DAT_14cbc5e00._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbc5e08 = (undefined4)param_1[5];
  uRam000000014cbc5e0c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbc5e10 = (undefined4)param_1[6];
  uRam000000014cbc5e14 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbc5e18 = (undefined4)param_1[7];
  uRam000000014cbc5e1c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbc5de0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbc5db0 = 0;
  _DAT_14cbc5db8 = local_68;
  _DAT_14cbc5dc0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbc5dd0 = CONCAT44(DAT_14cbc5dd4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbc5dd4 == 0) {
    _DAT_14cbc5dd0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbc5dc8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbc5dc8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbc5da0) && ((DAT_14cbc5d30 == (int *)0x0 || (*DAT_14cbc5d30 < DAT_14cbc5da0)))) {
    DAT_14cbc5d30 = &DAT_14cbc5da0;
  }
  FUN_1458ef67e();
  local_30 = &local_70;
  local_70 = &DAT_14cbc5da0;
  local_38 = &DAT_14cbc5da4;
  FUN_146189cc6(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146189cc6 FUN_146189cc6 body=338 status=ok
// SIG undefined FUN_146189cc6(void)

undefined4 * FUN_146189cc6(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146189eac(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_146189e1a(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbc5d40 - DAT_14cbc5d6c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbc5d80)) {
      uVar10 = DAT_14cbc5d80 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbc5d78;
      if (DAT_14cbc5d78 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc5d70;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc5d80 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbc5d78;
      if (DAT_14cbc5d78 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc5d70;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc5d80 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbc5d80 = iVar9;
      FUN_146189fba();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146189e1a FUN_146189e1a body=145 status=ok
// SIG undefined FUN_146189e1a(void)

undefined8 FUN_146189e1a(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbc5d40 - DAT_14cbc5d6c != 1) && (DAT_14cbc5d40 != DAT_14cbc5d6c)) {
    puVar6 = &DAT_14cbc5d70;
    if (DAT_14cbc5d78 != (undefined *)0x0) {
      puVar6 = DAT_14cbc5d78;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbc5d80 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbc5d38 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9d988(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146189eac FUN_146189eac body=270 status=ok
// SIG undefined FUN_146189eac(void)

int * FUN_146189eac(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbc5d68;
  iVar3 = DAT_14cbc5d40;
  if (DAT_14cbc5d6c == 0) {
    iVar2 = DAT_14cbc5d40 + 1;
    bVar7 = DAT_14cbc5d44 == DAT_14cbc5d40;
    DAT_14cbc5d40 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbc5d38,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbc5d48,1);
    puVar4 = DAT_14cbc5d58;
    if (DAT_14cbc5d58 == (undefined *)0x0) {
      puVar4 = &DAT_14cbc5d48;
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
    lVar6 = (longlong)DAT_14cbc5d68;
    DAT_14cbc5d68 = *(int *)(DAT_14cbc5d38 + 4 + lVar6 * 0x18);
    DAT_14cbc5d6c = DAT_14cbc5d6c + -1;
    if (DAT_14cbc5d6c != 0) {
      *(undefined4 *)(DAT_14cbc5d38 + (longlong)DAT_14cbc5d68 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbc5d48;
  if (DAT_14cbc5d58 != (undefined *)0x0) {
    puVar4 = DAT_14cbc5d58;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbc5d38;
  return param_1;
}



// FUNCTION 146189fba FUN_146189fba body=523 status=ok
// SIG undefined FUN_146189fba(void)

void FUN_146189fba(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc5d78 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbc5d78,0,0,4);
  }
  uVar3 = DAT_14cbc5d80;
  uVar2 = local_50;
  if (DAT_14cbc5d80 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbc5d70,0,DAT_14cbc5d80,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbc5d78;
        if (DAT_14cbc5d78 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc5d70;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbc5d80 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbc5d48;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbc5d60 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbc5d38;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cbc5d80 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbc5d78;
        if (DAT_14cbc5d78 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc5d70;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbc5d80 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbc5d78;
        if (DAT_14cbc5d78 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc5d70;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbc5d80 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14618a1c6 FUN_14618a1c6 body=507 status=ok
// SIG undefined FUN_14618a1c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14618a1c6(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbc6380 = 0;
  FUN_1446ddc76(&DAT_14cbc6384,"CineGrantStage",1);
  _DAT_14cbc6390 = 0;
  _DAT_14cbc6398 = 0;
  _DAT_14cbc63a0 = 0;
  DAT_14cbc63a8 = (void *)0x0;
  _DAT_14cbc63b0 = 0;
  _DAT_14cbc63b8 = FUN_145acd602;
  DAT_14cbc63c0 = *param_1;
  DAT_14cbc63d0 = param_1[2];
  param_1[2] = 0;
  DAT_14cbc63e0._0_4_ = (undefined4)param_1[4];
  DAT_14cbc63e0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbc63e8 = (undefined4)param_1[5];
  uRam000000014cbc63ec = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbc63f0 = (undefined4)param_1[6];
  uRam000000014cbc63f4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbc63f8 = (undefined4)param_1[7];
  uRam000000014cbc63fc = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbc63c0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbc6390 = 0;
  _DAT_14cbc6398 = local_68;
  _DAT_14cbc63a0 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbc63b0 = CONCAT44(DAT_14cbc63b4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbc63b4 == 0) {
    _DAT_14cbc63b0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbc63a8,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbc63a8,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbc6380) && ((DAT_14cbc6308 == (int *)0x0 || (*DAT_14cbc6308 < DAT_14cbc6380)))) {
    DAT_14cbc6308 = &DAT_14cbc6380;
  }
  FUN_145acd6d8();
  local_30 = &local_70;
  local_70 = &DAT_14cbc6380;
  local_38 = &DAT_14cbc6384;
  FUN_14618a3c2(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14618a3c2 FUN_14618a3c2 body=338 status=ok
// SIG undefined FUN_14618a3c2(void)

undefined4 * FUN_14618a3c2(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14618a5a8(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14618a516(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbc6318 - DAT_14cbc6344;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbc6358)) {
      uVar10 = DAT_14cbc6358 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbc6350;
      if (DAT_14cbc6350 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc6348;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc6358 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbc6350;
      if (DAT_14cbc6350 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc6348;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc6358 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbc6358 = iVar9;
      FUN_14618a6b6();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618a516 FUN_14618a516 body=145 status=ok
// SIG undefined FUN_14618a516(void)

undefined8 FUN_14618a516(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbc6318 - DAT_14cbc6344 != 1) && (DAT_14cbc6318 != DAT_14cbc6344)) {
    puVar6 = &DAT_14cbc6348;
    if (DAT_14cbc6350 != (undefined *)0x0) {
      puVar6 = DAT_14cbc6350;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbc6358 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbc6310 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9db74(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14618a5a8 FUN_14618a5a8 body=270 status=ok
// SIG undefined FUN_14618a5a8(void)

int * FUN_14618a5a8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbc6340;
  iVar3 = DAT_14cbc6318;
  if (DAT_14cbc6344 == 0) {
    iVar2 = DAT_14cbc6318 + 1;
    bVar7 = DAT_14cbc631c == DAT_14cbc6318;
    DAT_14cbc6318 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbc6310,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbc6320,1);
    puVar4 = DAT_14cbc6330;
    if (DAT_14cbc6330 == (undefined *)0x0) {
      puVar4 = &DAT_14cbc6320;
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
    lVar6 = (longlong)DAT_14cbc6340;
    DAT_14cbc6340 = *(int *)(DAT_14cbc6310 + 4 + lVar6 * 0x18);
    DAT_14cbc6344 = DAT_14cbc6344 + -1;
    if (DAT_14cbc6344 != 0) {
      *(undefined4 *)(DAT_14cbc6310 + (longlong)DAT_14cbc6340 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbc6320;
  if (DAT_14cbc6330 != (undefined *)0x0) {
    puVar4 = DAT_14cbc6330;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbc6310;
  return param_1;
}



// FUNCTION 14618a6b6 FUN_14618a6b6 body=523 status=ok
// SIG undefined FUN_14618a6b6(void)

void FUN_14618a6b6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc6350 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbc6350,0,0,4);
  }
  uVar3 = DAT_14cbc6358;
  uVar2 = local_50;
  if (DAT_14cbc6358 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbc6348,0,DAT_14cbc6358,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbc6350;
        if (DAT_14cbc6350 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc6348;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbc6358 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbc6320;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbc6338 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbc6310;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cbc6358 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbc6350;
        if (DAT_14cbc6350 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc6348;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbc6358 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbc6350;
        if (DAT_14cbc6350 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc6348;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbc6358 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14618a8c2 FUN_14618a8c2 body=507 status=ok
// SIG undefined FUN_14618a8c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14618a8c2(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbc6470 = 0;
  FUN_1446ddc76(&DAT_14cbc6474,"CineGrantScript",1);
  _DAT_14cbc6480 = 0;
  _DAT_14cbc6488 = 0;
  _DAT_14cbc6490 = 0;
  DAT_14cbc6498 = (void *)0x0;
  _DAT_14cbc64a0 = 0;
  _DAT_14cbc64a8 = FUN_145ad1382;
  DAT_14cbc64b0 = *param_1;
  DAT_14cbc64c0 = param_1[2];
  param_1[2] = 0;
  DAT_14cbc64d0._0_4_ = (undefined4)param_1[4];
  DAT_14cbc64d0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbc64d8 = (undefined4)param_1[5];
  uRam000000014cbc64dc = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbc64e0 = (undefined4)param_1[6];
  uRam000000014cbc64e4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbc64e8 = (undefined4)param_1[7];
  uRam000000014cbc64ec = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbc64b0 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbc6480 = 0;
  _DAT_14cbc6488 = local_68;
  _DAT_14cbc6490 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbc64a0 = CONCAT44(DAT_14cbc64a4,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbc64a4 == 0) {
    _DAT_14cbc64a0 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbc6498,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbc6498,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbc6470) && ((DAT_14cbc6400 == (int *)0x0 || (*DAT_14cbc6400 < DAT_14cbc6470)))) {
    DAT_14cbc6400 = &DAT_14cbc6470;
  }
  FUN_145ad1492();
  local_30 = &local_70;
  local_70 = &DAT_14cbc6470;
  local_38 = &DAT_14cbc6474;
  FUN_14618aabe(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14618aabe FUN_14618aabe body=338 status=ok
// SIG undefined FUN_14618aabe(void)

undefined4 * FUN_14618aabe(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14618aca4(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14618ac12(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbc6410 - DAT_14cbc643c;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbc6450)) {
      uVar10 = DAT_14cbc6450 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbc6448;
      if (DAT_14cbc6448 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc6440;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc6450 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbc6448;
      if (DAT_14cbc6448 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc6440;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc6450 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbc6450 = iVar9;
      FUN_14618adb2();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618ac12 FUN_14618ac12 body=145 status=ok
// SIG undefined FUN_14618ac12(void)

undefined8 FUN_14618ac12(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbc6410 - DAT_14cbc643c != 1) && (DAT_14cbc6410 != DAT_14cbc643c)) {
    puVar6 = &DAT_14cbc6440;
    if (DAT_14cbc6448 != (undefined *)0x0) {
      puVar6 = DAT_14cbc6448;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbc6450 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbc6408 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9dd60(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14618aca4 FUN_14618aca4 body=270 status=ok
// SIG undefined FUN_14618aca4(void)

int * FUN_14618aca4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbc6438;
  iVar3 = DAT_14cbc6410;
  if (DAT_14cbc643c == 0) {
    iVar2 = DAT_14cbc6410 + 1;
    bVar7 = DAT_14cbc6414 == DAT_14cbc6410;
    DAT_14cbc6410 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbc6408,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbc6418,1);
    puVar4 = DAT_14cbc6428;
    if (DAT_14cbc6428 == (undefined *)0x0) {
      puVar4 = &DAT_14cbc6418;
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
    lVar6 = (longlong)DAT_14cbc6438;
    DAT_14cbc6438 = *(int *)(DAT_14cbc6408 + 4 + lVar6 * 0x18);
    DAT_14cbc643c = DAT_14cbc643c + -1;
    if (DAT_14cbc643c != 0) {
      *(undefined4 *)(DAT_14cbc6408 + (longlong)DAT_14cbc6438 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbc6418;
  if (DAT_14cbc6428 != (undefined *)0x0) {
    puVar4 = DAT_14cbc6428;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbc6408;
  return param_1;
}



// FUNCTION 14618adb2 FUN_14618adb2 body=523 status=ok
// SIG undefined FUN_14618adb2(void)

void FUN_14618adb2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc6448 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbc6448,0,0,4);
  }
  uVar3 = DAT_14cbc6450;
  uVar2 = local_50;
  if (DAT_14cbc6450 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbc6440,0,DAT_14cbc6450,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbc6448;
        if (DAT_14cbc6448 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc6440;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbc6450 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbc6418;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbc6430 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbc6408;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cbc6450 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbc6448;
        if (DAT_14cbc6448 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc6440;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbc6450 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbc6448;
        if (DAT_14cbc6448 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc6440;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbc6450 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14618afbe FUN_14618afbe body=507 status=ok
// SIG undefined FUN_14618afbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14618afbe(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbc8b20 = 0;
  FUN_1446ddc76(&DAT_14cbc8b24,"DLCDef",1);
  _DAT_14cbc8b30 = 0;
  _DAT_14cbc8b38 = 0;
  _DAT_14cbc8b40 = 0;
  DAT_14cbc8b48 = (void *)0x0;
  _DAT_14cbc8b50 = 0;
  _DAT_14cbc8b58 = FUN_145806382;
  DAT_14cbc8b60 = *param_1;
  DAT_14cbc8b70 = param_1[2];
  param_1[2] = 0;
  DAT_14cbc8b80._0_4_ = (undefined4)param_1[4];
  DAT_14cbc8b80._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbc8b88 = (undefined4)param_1[5];
  uRam000000014cbc8b8c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbc8b90 = (undefined4)param_1[6];
  uRam000000014cbc8b94 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbc8b98 = (undefined4)param_1[7];
  uRam000000014cbc8b9c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbc8b60 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbc8b30 = 0;
  _DAT_14cbc8b38 = local_68;
  _DAT_14cbc8b40 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbc8b50 = CONCAT44(DAT_14cbc8b54,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbc8b54 == 0) {
    _DAT_14cbc8b50 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbc8b48,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbc8b48,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbc8b20) && ((DAT_14cbc8ab0 == (int *)0x0 || (*DAT_14cbc8ab0 < DAT_14cbc8b20)))) {
    DAT_14cbc8ab0 = &DAT_14cbc8b20;
  }
  FUN_1410fa178();
  local_30 = &local_70;
  local_70 = &DAT_14cbc8b20;
  local_38 = &DAT_14cbc8b24;
  FUN_14618b1ba(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14618b1ba FUN_14618b1ba body=338 status=ok
// SIG undefined FUN_14618b1ba(void)

undefined4 * FUN_14618b1ba(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14618b3a0(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_14618b30e(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cbc8ac0 - DAT_14cbc8aec;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cbc8b00)) {
      uVar10 = DAT_14cbc8b00 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cbc8af8;
      if (DAT_14cbc8af8 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc8af0;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc8b00 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cbc8af8;
      if (DAT_14cbc8af8 == (undefined *)0x0) {
        puVar7 = &DAT_14cbc8af0;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cbc8b00 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cbc8b00 = iVar9;
      FUN_14618b4ae();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14618b30e FUN_14618b30e body=145 status=ok
// SIG undefined FUN_14618b30e(void)

undefined8 FUN_14618b30e(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cbc8ac0 - DAT_14cbc8aec != 1) && (DAT_14cbc8ac0 != DAT_14cbc8aec)) {
    puVar6 = &DAT_14cbc8af0;
    if (DAT_14cbc8af8 != (undefined *)0x0) {
      puVar6 = DAT_14cbc8af8;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cbc8b00 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cbc8ab8 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_145d9df4c(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14618b3a0 FUN_14618b3a0 body=270 status=ok
// SIG undefined FUN_14618b3a0(void)

int * FUN_14618b3a0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cbc8ae8;
  iVar3 = DAT_14cbc8ac0;
  if (DAT_14cbc8aec == 0) {
    iVar2 = DAT_14cbc8ac0 + 1;
    bVar7 = DAT_14cbc8ac4 == DAT_14cbc8ac0;
    DAT_14cbc8ac0 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cbc8ab8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cbc8ac8,1);
    puVar4 = DAT_14cbc8ad8;
    if (DAT_14cbc8ad8 == (undefined *)0x0) {
      puVar4 = &DAT_14cbc8ac8;
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
    lVar6 = (longlong)DAT_14cbc8ae8;
    DAT_14cbc8ae8 = *(int *)(DAT_14cbc8ab8 + 4 + lVar6 * 0x18);
    DAT_14cbc8aec = DAT_14cbc8aec + -1;
    if (DAT_14cbc8aec != 0) {
      *(undefined4 *)(DAT_14cbc8ab8 + (longlong)DAT_14cbc8ae8 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cbc8ac8;
  if (DAT_14cbc8ad8 != (undefined *)0x0) {
    puVar4 = DAT_14cbc8ad8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cbc8ab8;
  return param_1;
}



// FUNCTION 14618b4ae FUN_14618b4ae body=523 status=ok
// SIG undefined FUN_14618b4ae(void)

void FUN_14618b4ae(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc8af8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbc8af8,0,0,4);
  }
  uVar3 = DAT_14cbc8b00;
  uVar2 = local_50;
  if (DAT_14cbc8b00 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cbc8af0,0,DAT_14cbc8b00,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cbc8af8;
        if (DAT_14cbc8af8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc8af0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cbc8b00 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cbc8ac8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cbc8ae0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cbc8ab8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cbc8b00 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cbc8af8;
        if (DAT_14cbc8af8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc8af0;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cbc8b00 - 1U & uVar9) * 4);
        puVar6 = DAT_14cbc8af8;
        if (DAT_14cbc8af8 == (undefined *)0x0) {
          puVar6 = &DAT_14cbc8af0;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cbc8b00 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14618b6ba FUN_14618b6ba body=507 status=ok
// SIG undefined FUN_14618b6ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14618b6ba(longlong *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_3c [4];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14cbc8ce0 = 0;
  FUN_1446ddc76(&DAT_14cbc8ce4,"OakEchoLogCategoryDef",1);
  _DAT_14cbc8cf0 = 0;
  _DAT_14cbc8cf8 = 0;
  _DAT_14cbc8d00 = 0;
  DAT_14cbc8d08 = (void *)0x0;
  _DAT_14cbc8d10 = 0;
  _DAT_14cbc8d18 = FUN_1458ee200;
  DAT_14cbc8d20 = *param_1;
  DAT_14cbc8d30 = param_1[2];
  param_1[2] = 0;
  DAT_14cbc8d40._0_4_ = (undefined4)param_1[4];
  DAT_14cbc8d40._4_4_ = *(undefined4 *)((longlong)param_1 + 0x24);
  uRam000000014cbc8d48 = (undefined4)param_1[5];
  uRam000000014cbc8d4c = *(undefined4 *)((longlong)param_1 + 0x2c);
  _DAT_14cbc8d50 = (undefined4)param_1[6];
  uRam000000014cbc8d54 = *(undefined4 *)((longlong)param_1 + 0x34);
  uRam000000014cbc8d58 = (undefined4)param_1[7];
  uRam000000014cbc8d5c = *(undefined4 *)((longlong)param_1 + 0x3c);
  if (DAT_14cbc8d20 != 0) {
    *param_1 = 0;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = (undefined8 *)&DAT_149e02088;
  local_30 = (undefined4 **)((ulonglong)local_30._4_4_ << 0x20);
  FUN_14475bea4(&local_68);
  _Src = local_58;
  _DAT_14cbc8cf0 = 0;
  _DAT_14cbc8cf8 = local_68;
  _DAT_14cbc8d00 = uStack_60;
  iVar1 = (int)uStack_50;
  lVar2 = (longlong)(int)uStack_50;
  _DAT_14cbc8d10 = CONCAT44(DAT_14cbc8d14,(int)uStack_50);
  if ((int)uStack_50 == 0 && DAT_14cbc8d14 == 0) {
    _DAT_14cbc8d10 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&DAT_14cbc8d08,uStack_50 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(DAT_14cbc8d08,_Src,lVar2 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((-1 < DAT_14cbc8ce0) && ((DAT_14cbc8c70 == (int *)0x0 || (*DAT_14cbc8c70 < DAT_14cbc8ce0)))) {
    DAT_14cbc8c70 = &DAT_14cbc8ce0;
  }
  FUN_140d1f224();
  local_30 = &local_70;
  local_70 = &DAT_14cbc8ce0;
  local_38 = &DAT_14cbc8ce4;
  FUN_14618b8b6(local_3c);
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


