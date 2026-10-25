// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1441bd688 FUN_1441bd688 body=32 status=ok
// SIG undefined FUN_1441bd688(void)

undefined8 FUN_1441bd688(longlong param_1)

{
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    FUN_1441bd1c4();
  }
  else {
    FUN_1441bcb1e();
  }
  return 0;
}



// FUNCTION 1441bd6a8 FUN_1441bd6a8 body=471 status=ok
// SIG undefined FUN_1441bd6a8(void)

void FUN_1441bd6a8(longlong param_1)

{
  byte bVar1;
  undefined2 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x1b0) == '\x01') {
    if (*(longlong *)(param_1 + 0x198) != 0) {
      FUN_14480f766(&DAT_14c9647a0);
    }
    *(undefined8 *)(param_1 + 0x198) = 0;
    plVar3 = (longlong *)FUN_1441bbee8(param_1);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = FUN_145725aea(plVar3,1);
      if (lVar4 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_60 = &local_28;
          local_28 = FUN_141030f22;
          local_50 = FUN_14081d0ea;
          local_58 = &LAB_1459f2e4c;
          local_68 = &LAB_148c39de3;
          local_70 = &LAB_1457a9eb2;
          local_78 = &DAT_149e063b2;
          local_80 = 0;
          local_88 = 0x10000004;
          local_90 = 0x10;
          local_98 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          bVar1 = (**(code **)(*plVar3 + 0x498))(plVar3);
          if (bVar1 < 6) {
            local_30 = *(undefined4 *)(param_1 + 0x1a8);
            local_38 = *(undefined8 *)(param_1 + 0x1a0);
            FUN_148c39418(lVar4);
          }
          else {
            uVar2 = FUN_1487c502a(lVar4);
            local_48 = *(undefined8 *)(param_1 + 0x1a0);
            local_40 = *(undefined4 *)(param_1 + 0x1a8);
            local_98 = CONCAT22(local_98._2_2_,uVar2);
            FUN_148c379c8(lVar4,&local_48,0xfffffffe,1);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    FUN_1441bd1c4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441bd880 FUN_1441bd880 body=3114 status=ok
// SIG undefined FUN_1441bd880(void)

void FUN_1441bd880(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1460b281c();
  lVar7 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
  if ((lVar7 != 0) && (lVar7 = FUN_140b64196(lVar7), lVar7 != 0)) {
    FUN_146048f14(*(undefined8 *)(param_1 + 0x50),&local_68);
    plVar13 = local_68;
    local_58 = (longlong *)0x0;
    lVar10 = (longlong)(int)local_60;
    local_50 = (longlong *)CONCAT44(local_50._4_4_,(int)local_60);
    if (lVar10 == 0) {
      local_50 = (longlong *)((ulonglong)local_60 & 0xffffffff);
    }
    else {
      FUN_1446dd670(&local_58,(ulonglong)local_60 & 0xffffffff,0);
      memcpy(local_58,plVar13,lVar10 * 2);
    }
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8(local_68);
    }
    FUN_145ca1074(lVar7,&local_58,1);
    FUN_14101cf30(*(undefined8 *)(param_1 + 0x50),&local_68);
    plVar13 = local_68;
    lVar10 = (longlong)(int)local_60;
    if (lVar10 == 0) {
      uVar11 = 0;
    }
    else {
      lVar12 = 0;
      do {
        puVar3 = *(undefined8 **)((longlong)plVar13 + lVar12);
        if (*(int *)((longlong)puVar3 + 0x14) != 0) {
          local_78 = *puVar3;
          local_70 = (longlong *)puVar3[1];
          if (local_70 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_70 + 1) = (int)local_70[1] + 1;
            UNLOCK();
          }
          FUN_141589d22(lVar7,&local_58,&local_78);
          plVar1 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_70 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*local_70)(local_70);
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
        lVar12 = lVar12 + 0x10;
      } while (lVar10 * 0x10 != lVar12);
      uVar11 = (ulonglong)local_60 & 0xffffffff;
    }
    FUN_14101cee4(local_68,uVar11);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar7 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
  if ((((lVar7 != 0) && (*(longlong *)(lVar7 + 0x1f0) != 0)) &&
      (lVar7 = FUN_14591aa10(), lVar7 != 0)) && (lVar7 = *(longlong *)(lVar7 + 0x30), lVar7 != 0)) {
    plVar13 = *(longlong **)(param_1 + 0x178);
    bVar4 = true;
    if (plVar13 == (longlong *)0x0) {
      plVar13 = (longlong *)0x0;
      uVar9 = 0;
    }
    else {
      iVar6 = (int)plVar13[1];
      uVar9 = 0;
      do {
        if (iVar6 == 0) {
          plVar13 = (longlong *)0x0;
          goto LAB_1441be3e7;
        }
        LOCK();
        iVar5 = (int)plVar13[1];
        bVar14 = iVar6 == iVar5;
        if (bVar14) {
          *(int *)(plVar13 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar14);
      uVar9 = *(undefined8 *)(param_1 + 0x170);
      bVar4 = false;
    }
LAB_1441be3e7:
    plVar8 = (longlong *)FUN_148d9b6cd(uVar9);
    plVar1 = plVar8 + 2;
    local_68 = plVar1;
    local_60 = plVar8;
    FUN_148d9cc96(&local_68,plVar1);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_58 = plVar1;
    local_50 = plVar8;
    FUN_143f45a56(lVar7,&local_58);
    plVar1 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    plVar1 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_60 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (!bVar4) {
      LOCK();
      plVar1 = plVar13 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  plVar13 = *(longlong **)(param_1 + 0x178);
  bVar4 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar13[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_1441bd92d;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar14 = iVar6 == iVar5;
      if (bVar14) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar14);
    lVar7 = *(longlong *)(param_1 + 0x170);
    bVar4 = false;
  }
LAB_1441bd92d:
  if (*(int *)(lVar7 + 0x638) != 3) {
    FUN_1446efa72((longlong *)(lVar7 + 0x630),0,3,0x10);
    *(undefined4 *)(lVar7 + 0x638) = 3;
  }
  puVar3 = *(undefined8 **)(lVar7 + 0x630);
  *puVar3 = &PTR_LAB_14b9899b0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar3[2] = lVar10;
  *puVar3 = &PTR_FUN_14b989940;
  puVar3[3] = param_1;
  puVar3[4] = FUN_145c14576;
  *(undefined4 *)(puVar3 + 5) = 0;
  if (!bVar4) {
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar13 = *(longlong **)(param_1 + 0x178);
  bVar4 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar13[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_1441bda05;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar14 = iVar6 == iVar5;
      if (bVar14) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar14);
    lVar7 = *(longlong *)(param_1 + 0x170);
    bVar4 = false;
  }
LAB_1441bda05:
  if (*(int *)(lVar7 + 0x648) != 3) {
    FUN_1446efa72((longlong *)(lVar7 + 0x640),0,3,0x10);
    *(undefined4 *)(lVar7 + 0x648) = 3;
  }
  puVar3 = *(undefined8 **)(lVar7 + 0x640);
  *puVar3 = &PTR_LAB_149e41aa0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar3[2] = lVar10;
  *puVar3 = &PTR_FUN_14b989a20;
  puVar3[3] = param_1;
  puVar3[4] = &LAB_145ec9db4;
  *(undefined4 *)(puVar3 + 5) = 0;
  if (!bVar4) {
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar13 = *(longlong **)(param_1 + 0x178);
  bVar4 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar13[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_1441bdadd;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar14 = iVar6 == iVar5;
      if (bVar14) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar14);
    lVar7 = *(longlong *)(param_1 + 0x170);
    bVar4 = false;
  }
LAB_1441bdadd:
  if (*(int *)(lVar7 + 0x658) != 3) {
    FUN_1446efa72((longlong *)(lVar7 + 0x650),0,3,0x10);
    *(undefined4 *)(lVar7 + 0x658) = 3;
  }
  puVar3 = *(undefined8 **)(lVar7 + 0x650);
  *puVar3 = &PTR_LAB_14b989b00;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar3[2] = lVar10;
  *puVar3 = &PTR_FUN_14b989a90;
  puVar3[3] = param_1;
  puVar3[4] = FUN_148d8fa70;
  *(undefined4 *)(puVar3 + 5) = 0;
  if (!bVar4) {
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar13 = *(longlong **)(param_1 + 0x178);
  bVar4 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar13[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_1441bdbb5;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar14 = iVar6 == iVar5;
      if (bVar14) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar14);
    lVar7 = *(longlong *)(param_1 + 0x170);
    bVar4 = false;
  }
LAB_1441bdbb5:
  if (*(int *)(lVar7 + 0x668) != 3) {
    FUN_1446efa72((longlong *)(lVar7 + 0x660),0,3,0x10);
    *(undefined4 *)(lVar7 + 0x668) = 3;
  }
  puVar3 = *(undefined8 **)(lVar7 + 0x660);
  *puVar3 = &PTR_LAB_14b989b00;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar3[2] = lVar10;
  *puVar3 = &PTR_FUN_14b989a90;
  puVar3[3] = param_1;
  puVar3[4] = FUN_148d8fa9e;
  *(undefined4 *)(puVar3 + 5) = 0;
  if (!bVar4) {
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar13 = *(longlong **)(param_1 + 0x178);
  bVar4 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar13[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_1441bdc82;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar14 = iVar6 == iVar5;
      if (bVar14) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar14);
    lVar7 = *(longlong *)(param_1 + 0x170);
    bVar4 = false;
  }
LAB_1441bdc82:
  if (*(int *)(lVar7 + 0x6d8) != 3) {
    FUN_1446efa72((longlong *)(lVar7 + 0x6d0),0,3,0x10);
    *(undefined4 *)(lVar7 + 0x6d8) = 3;
  }
  puVar3 = *(undefined8 **)(lVar7 + 0x6d0);
  *puVar3 = &PTR_LAB_14b989be0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar3[2] = lVar10;
  *puVar3 = &PTR_FUN_14b989b70;
  puVar3[3] = param_1;
  puVar3[4] = FUN_148d8facc;
  *(undefined4 *)(puVar3 + 5) = 0;
  if (!bVar4) {
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar13 = *(longlong **)(param_1 + 0x178);
  bVar4 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar13[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_1441bdd5a;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar14 = iVar6 == iVar5;
      if (bVar14) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar14);
    lVar7 = *(longlong *)(param_1 + 0x170);
    bVar4 = false;
  }
LAB_1441bdd5a:
  if (*(int *)(lVar7 + 0x678) != 3) {
    FUN_1446efa72((longlong *)(lVar7 + 0x670),0,3,0x10);
    *(undefined4 *)(lVar7 + 0x678) = 3;
  }
  puVar3 = *(undefined8 **)(lVar7 + 0x670);
  *puVar3 = &PTR_LAB_14b422d40;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar3[2] = lVar10;
  *puVar3 = &PTR_FUN_14b989c50;
  puVar3[3] = param_1;
  puVar3[4] = &LAB_145ae5f70;
  *(undefined4 *)(puVar3 + 5) = 0;
  if (!bVar4) {
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar13 = *(longlong **)(param_1 + 0x178);
  bVar4 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar13[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_1441bde32;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar14 = iVar6 == iVar5;
      if (bVar14) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar14);
    lVar7 = *(longlong *)(param_1 + 0x170);
    bVar4 = false;
  }
LAB_1441bde32:
  if (*(int *)(lVar7 + 0x688) != 3) {
    FUN_1446efa72((longlong *)(lVar7 + 0x680),0,3,0x10);
    *(undefined4 *)(lVar7 + 0x688) = 3;
  }
  puVar3 = *(undefined8 **)(lVar7 + 0x680);
  *puVar3 = &PTR_LAB_14b989860;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar3[2] = lVar10;
  *puVar3 = &PTR_FUN_14b989cc0;
  puVar3[3] = param_1;
  puVar3[4] = FUN_145f9ef30;
  *(undefined4 *)(puVar3 + 5) = 0;
  if (!bVar4) {
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar13 = *(longlong **)(param_1 + 0x178);
  bVar4 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar13[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_1441bdf0a;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar14 = iVar6 == iVar5;
      if (bVar14) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar14);
    lVar7 = *(longlong *)(param_1 + 0x170);
    bVar4 = false;
  }
LAB_1441bdf0a:
  if (*(int *)(lVar7 + 0x698) != 3) {
    FUN_1446efa72((longlong *)(lVar7 + 0x690),0,3,0x10);
    *(undefined4 *)(lVar7 + 0x698) = 3;
  }
  puVar3 = *(undefined8 **)(lVar7 + 0x690);
  *puVar3 = &PTR_LAB_14b989da0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar3[2] = lVar10;
  *puVar3 = &PTR_FUN_14b989d30;
  puVar3[3] = param_1;
  puVar3[4] = FUN_1441be4ac;
  *(undefined4 *)(puVar3 + 5) = 0;
  if (!bVar4) {
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar13 = *(longlong **)(param_1 + 0x178);
  bVar4 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar13[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_1441bdfe2;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar14 = iVar6 == iVar5;
      if (bVar14) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar14);
    lVar7 = *(longlong *)(param_1 + 0x170);
    bVar4 = false;
  }
LAB_1441bdfe2:
  if (*(int *)(lVar7 + 0x6a8) != 3) {
    FUN_1446efa72((longlong *)(lVar7 + 0x6a0),0,3,0x10);
    *(undefined4 *)(lVar7 + 0x6a8) = 3;
  }
  puVar3 = *(undefined8 **)(lVar7 + 0x6a0);
  *puVar3 = &PTR_LAB_14b989e80;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar3[2] = lVar10;
  *puVar3 = &PTR_FUN_14b989e10;
  puVar3[3] = param_1;
  puVar3[4] = FUN_145cfbf9e;
  *(undefined4 *)(puVar3 + 5) = 0;
  if (!bVar4) {
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar13 = *(longlong **)(param_1 + 0x178);
  bVar4 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar13[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_1441be0ba;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar14 = iVar6 == iVar5;
      if (bVar14) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar14);
    lVar7 = *(longlong *)(param_1 + 0x170);
    bVar4 = false;
  }
LAB_1441be0ba:
  if (*(int *)(lVar7 + 0x6b8) != 3) {
    FUN_1446efa72((longlong *)(lVar7 + 0x6b0),0,3,0x10);
    *(undefined4 *)(lVar7 + 0x6b8) = 3;
  }
  puVar3 = *(undefined8 **)(lVar7 + 0x6b0);
  *puVar3 = &PTR_LAB_14b4edbf0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar3[2] = lVar10;
  *puVar3 = &PTR_FUN_14b989ef0;
  puVar3[3] = param_1;
  puVar3[4] = FUN_145f9b296;
  *(undefined4 *)(puVar3 + 5) = 0;
  if (!bVar4) {
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441be4ac FUN_1441be4ac body=108 status=ok
// SIG undefined FUN_1441be4ac(void)

void FUN_1441be4ac(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((char)param_1[3] == '\x01') {
    lVar1 = (**(code **)(*(longlong *)param_1[6] + 0x180))();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
      lVar1 = FUN_141060562();
      if ((lVar1 != 0) &&
         (((*(longlong *)(lVar1 + 0x30) != 0 && (*(int *)(*(longlong *)(lVar1 + 0x30) + 0xd8) != 0))
          && (*(int *)(*param_2 + 0x14) == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x0001441be514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x20))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1441be51e FUN_1441be51e body=617 status=ok
// SIG undefined FUN_1441be51e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1441be51e(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + 0x170) != 0) &&
      (plVar9 = *(longlong **)(param_1 + 0x178), plVar9 != (longlong *)0x0)) && (0 < (int)plVar9[1])
     ) {
    iVar5 = (int)plVar9[1];
    uVar7 = 0;
    do {
      if (iVar5 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_1441be5b3;
      }
      LOCK();
      iVar3 = (int)plVar9[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    uVar7 = *(undefined8 *)(param_1 + 0x170);
LAB_1441be5b3:
    FUN_146048f14(uVar7,local_58);
    local_68 = (void *)0x0;
    local_60 = *(int *)(param_2 + 1);
    lVar8 = (longlong)local_60;
    _Src = (void *)*param_2;
    if (lVar8 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,_Src,lVar8 * 2);
    }
    cVar4 = FUN_148d9027e(local_58,&local_68);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (cVar4 != '\0') {
      plVar9 = *(longlong **)(param_1 + 0x178);
      if (plVar9 == (longlong *)0x0) {
LAB_1441be6c0:
        cVar4 = FUN_1414e62ca(0);
        if (cVar4 != '\0') {
          cVar4 = *(char *)(param_1 + 0x18);
joined_r0x0001441be6cf:
          if (cVar4 == '\0') goto LAB_1441be55d;
        }
      }
      else {
        iVar5 = (int)plVar9[1];
        do {
          if (iVar5 == 0) goto LAB_1441be6c0;
          LOCK();
          iVar3 = (int)plVar9[1];
          bVar10 = iVar5 == iVar3;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar10);
        cVar4 = FUN_1414e62ca(*(undefined8 *)(param_1 + 0x170));
        if (cVar4 != '\0') {
          cVar4 = *(char *)(param_1 + 0x18);
          LOCK();
          plVar1 = plVar9 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          goto joined_r0x0001441be6cf;
        }
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar9 = *(longlong **)(param_1 + 0x178);
      if (plVar9 != (longlong *)0x0) {
        iVar5 = (int)plVar9[1];
        do {
          if (iVar5 == 0) goto LAB_1441be737;
          LOCK();
          iVar3 = (int)plVar9[1];
          bVar10 = iVar5 == iVar3;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar10);
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x778);
        if (lVar8 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_1441d9182(lVar8,param_3,param_4);
        }
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        goto LAB_1441be55f;
      }
LAB_1441be737:
      if (_DAT_00000778 != 0) {
        uVar6 = FUN_1441d9182(_DAT_00000778,param_3,param_4);
        goto LAB_1441be55f;
      }
    }
  }
LAB_1441be55d:
  uVar6 = 0;
LAB_1441be55f:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1441be788 FUN_1441be788 body=364 status=ok
// SIG undefined FUN_1441be788(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441be788(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((((*(longlong *)(param_1 + 0x170) != 0) && (*(longlong *)(param_1 + 0x178) != 0)) &&
       (0 < *(int *)(*(longlong *)(param_1 + 0x178) + 8))) &&
      ((lVar7 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))(), lVar7 != 0 &&
       (*(longlong *)(lVar7 + 0x1f0) != 0)))) &&
     ((lVar7 = FUN_141060562(), lVar7 != 0 &&
      ((lVar7 = *(longlong *)(lVar7 + 0x30), lVar7 != 0 && (*(int *)(lVar7 + 0xd8) == 0)))))) {
    plVar3 = *(longlong **)(param_1 + 0x178);
    if (plVar3 == (longlong *)0x0) {
LAB_1441be86b:
      if (_DAT_00000778 != 0) {
        FUN_1441de63e(_DAT_00000778,param_3);
      }
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_1441be86b;
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
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x778);
      if (lVar4 != 0) {
        FUN_1441de63e(lVar4,param_3);
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
    plVar3 = *(longlong **)(param_1 + 0x178);
    if (plVar3 == (longlong *)0x0) {
LAB_1441be8d1:
      FUN_143f2286a(lVar7,0,param_2);
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_1441be8d1;
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
      FUN_143f2286a(lVar7,*(undefined8 *)(param_1 + 0x170),param_2);
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
    *(bool *)(param_1 + 0x18) = *(int *)(lVar7 + 0xd8) != 0;
  }
  return;
}



// FUNCTION 1441be8f4 FUN_1441be8f4 body=49 status=ok
// SIG undefined FUN_1441be8f4(void)

void FUN_1441be8f4(void)

{
  FUN_144760e21(DAT_14cbce5f8,DAT_14cbce600);
  if (DAT_14cbce5f8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1441be926 FUN_1441be926 body=390 status=ok
// SIG undefined FUN_1441be926(void)

undefined8 FUN_1441be926(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = (**(code **)(*param_1 + 0x2c0))();
  if (cVar1 != '\0') {
    lVar2 = FUN_1400b465c(param_1);
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar2 = FUN_140fe13cc(lVar2,uVar3);
      if (lVar2 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_40 = &local_20;
          local_20 = FUN_141030f22;
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
        if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
           (*(char *)(lVar2 + 0x23b8) == '\0')) {
          cVar1 = FUN_14030d2b6(lVar2 + 0xd98,&DAT_14cbd96d8);
          uVar3 = 1;
          if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
          }
          goto LAB_1441be9b6;
        }
      }
    }
  }
  uVar3 = 0;
LAB_1441be9b6:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441beac2 FUN_1441beac2 body=179 status=ok
// SIG undefined FUN_1441beac2(void)

void FUN_1441beac2(void)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  plVar2 = (longlong *)FUN_1400b465c();
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1403ca142();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) && (cVar1 = (**(code **)(*plVar2 + 0x440))(plVar2), cVar1 != '\0')) &&
       (0 < (int)plVar2[8])) {
      lVar3 = *(longlong *)plVar2[7];
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
      else if (lVar3 == 0) {
        return;
      }
      puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      puVar4[3] = 0;
      *puVar4 = &PTR_FUN_14b972d30;
      FUN_14113cb0e(lVar3,puVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1441beb76 FUN_1441beb76 body=103 status=ok
// SIG undefined FUN_1441beb76(void)

bool FUN_1441beb76(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1400b465c();
  if (lVar2 != 0) {
    lVar3 = FUN_1403ca142();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) && (cVar1 = FUN_1441be926(param_1), cVar1 != '\0')) &&
       (cVar1 = (**(code **)(*param_1 + 0x2c0))(param_1), cVar1 != '\0')) {
      return *(int *)((longlong)param_1 + 0x224) < 1;
    }
  }
  return false;
}



// FUNCTION 1441bebde FUN_1441bebde body=332 status=ok
// SIG undefined FUN_1441bebde(void)

undefined8 FUN_1441bebde(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_40;
  
  uVar3 = DAT_14c951640;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14058b40c(DAT_14c951640,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_d8 = FUN_144097f7a();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  local_d0 = uVar3;
  uVar3 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar5 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar5 = local_78;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  local_e8 = *param_3;
  *param_3 = 0;
  local_e0 = (undefined4)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  uVar1 = *param_2;
  uVar4 = FUN_1460695f4(param_1);
  FUN_14420a940(uVar3,uVar4,uVar1,&local_e8);
  if ((int)param_3[1] != 0) {
    puVar2 = (undefined8 *)*param_3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441becf5;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
LAB_1441becf5:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441bed2c FUN_1441bed2c body=2222 status=ok
// SIG undefined FUN_1441bed2c(void)

void FUN_1441bed2c(longlong *param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_208 [32];
  undefined8 **local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0;
  undefined1 local_1c8 [4];
  undefined1 local_1c4 [4];
  longlong *local_1c0 [2];
  undefined8 local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined4 local_198;
  longlong *local_190;
  undefined4 local_188;
  longlong *local_180 [2];
  longlong *local_170;
  undefined4 local_168;
  wchar_t *local_160;
  undefined4 local_158;
  undefined8 local_154;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong local_108 [2];
  longlong *local_f8;
  undefined4 local_f0;
  longlong *local_e8 [2];
  undefined8 *local_d8;
  int local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  code **local_a8;
  ulonglong *local_a0;
  wchar_t **local_98;
  undefined4 local_90;
  code *local_88;
  wchar_t ***local_80;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((param_2 == -1) || (plVar5 = (longlong *)FUN_140773fe2(), plVar5 == (longlong *)0x0))
  goto LAB_1441bedb9;
  plVar9 = (longlong *)*param_3;
  if (*(code **)(*plVar9 + 0x50) != FUN_144828418) {
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x50))();
  }
  FUN_1447a1fc0(plVar9);
  plVar9 = (longlong *)*param_3;
  pcVar3 = *(code **)(*plVar9 + 0x28);
  if (pcVar3 == FUN_14482841c) {
    plVar10 = plVar9 + 3;
    if (plVar9[5] != 0) {
      plVar10 = (longlong *)(plVar9[5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar10 = plVar9 + 2;
  }
  else {
    plVar10 = (longlong *)(*pcVar3)(plVar9);
  }
  if ((((int)plVar10[1] < 2) || (lVar6 = FUN_1458d9664(param_1,0xffffffff), lVar6 == 0)) ||
     (lVar6 = FUN_145da44aa(lVar6), lVar6 == 0)) goto LAB_1441bedb9;
  local_c8 = 0;
  uStack_c0 = 0;
  lVar7 = FUN_145da4f3c();
  local_160 = L"Dialog_Ok";
  local_158 = 9;
  FUN_1446e940c(&local_98,&local_160);
  local_160 = L"OakOnlineMessaging";
  local_158 = 0x12;
  FUN_1446e940c(&local_a8,&local_160);
  local_160 = L"OK";
  local_158 = 2;
  FUN_140208c1e(&local_88,&local_a8,&local_98,&local_160);
  FUN_140008f88(lVar7,&local_88);
  if (local_88 != (code *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  *(undefined8 *)(lVar7 + 0x10) = DAT_14cbce260;
  lVar7 = FUN_145da4f3c(&local_c8);
  local_160 = L"Dialog_MoreInfo";
  local_158 = 0xf;
  FUN_1446e940c(&local_98,&local_160);
  local_160 = L"OakOnlineMessaging";
  local_158 = 0x12;
  FUN_1446e940c(&local_a8,&local_160);
  local_160 = L"More Info";
  local_158 = 9;
  FUN_140208c1e(&local_88,&local_a8,&local_98,&local_160);
  FUN_140008f88(lVar7,&local_88);
  if (local_88 != (code *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
  *(undefined8 *)(lVar7 + 0x10) = DAT_14cbce280;
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,3,0x10);
  puVar4 = local_d8;
  local_d0 = 3;
  *local_d8 = &PTR_LAB_14b972ed0;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_d8[2] = lVar11;
  *local_d8 = &PTR_FUN_14b98a9c0;
  local_d8[3] = 0;
  iVar12 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_d8 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar12 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar12 = *(int *)(lVar7 + 0x10);
      bVar14 = iVar12 == 0;
      if (bVar14) {
        *(int *)(lVar7 + 0x10) = iVar13;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar12 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar12;
  puVar4[4] = FUN_1441c1a22;
  local_160 = L"ShiftAgeVerificationHeader";
  local_158 = 0x1a;
  FUN_1446e940c(&local_88,&local_160);
  local_160 = L"OakOnlineMessaging";
  local_158 = 0x12;
  FUN_1446e940c(&local_98,&local_160);
  local_160 = L"Error";
  local_158 = 5;
  FUN_140208c1e(local_e8,&local_98,&local_88,&local_160);
  local_f8 = (longlong *)*param_3;
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  local_f0 = (undefined4)param_3[1];
  uVar8 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar7 = (**(code **)(*plVar5 + 0x2d0))(plVar5,param_2,uVar8);
  if (lVar7 != 0) {
    local_160 = (wchar_t *)0x3000300000000;
    local_158 = CONCAT13(local_158._3_1_,0x30003);
    local_154 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108[0] = 0;
    local_108[1] = 0;
    local_88 = FUN_143ef2b5a;
    local_98 = &local_160;
    local_80 = &local_98;
    bifrost::account::get(*(undefined8 *)(lVar7 + 0x2b8));
    FUN_140009b9a(&local_170,local_108);
    local_190 = local_170;
    if (local_170 != (longlong *)0x0) {
      (**(code **)(*local_170 + 8))();
    }
    local_188 = local_168;
    local_1a0 = (longlong *)*param_3;
    if (local_1a0 != (longlong *)0x0) {
      (**(code **)(*local_1a0 + 8))();
    }
    local_198 = (undefined4)param_3[1];
    local_88 = (code *)0x14b9842dc;
    local_80._0_4_ = 0x1b;
    FUN_1446e940c(local_1c4,&local_88);
    local_88 = (code *)0x14b984070;
    local_80._0_4_ = 0x12;
    FUN_1446e940c(local_1c8,&local_88);
    local_88 = (code *)0x14b984298;
    local_80 = (wchar_t ***)CONCAT44(local_80._4_4_,0x21);
    FUN_140208c1e(local_1c0,local_1c8,local_1c4,&local_88);
    FUN_14023409e(&local_1b0,local_1c0,1);
    local_88 = (code *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,&local_1a0);
    local_68 = 4;
    FUN_14023423e(local_58,&local_190);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_1b0;
    local_b0 = local_1a8;
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_180,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    lVar7 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_88 + lVar7) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_88 + lVar7) + 0x10))();
        *(undefined8 *)((longlong)&local_88 + lVar7) = 0;
        *(undefined4 *)(local_78 + lVar7 + -8) = 0;
      }
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != -0x10);
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1a8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_1a8)(local_1a8);
        LOCK();
        piVar1 = (int *)((longlong)local_1a8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1a8 + 0x10))(local_1a8);
        }
      }
    }
    if (local_1a0 != (longlong *)0x0) {
      (**(code **)(*local_1a0 + 0x10))();
    }
    if (local_190 != (longlong *)0x0) {
      (**(code **)(*local_190 + 0x10))();
    }
    FUN_140008f88(&local_f8,local_180);
    if (local_180[0] != (longlong *)0x0) {
      (**(code **)(*local_180[0] + 0x10))();
    }
    if (local_1c0[0] != (longlong *)0x0) {
      (**(code **)(*local_1c0[0] + 0x10))();
    }
    if (local_170 != (longlong *)0x0) {
      (**(code **)(*local_170 + 0x10))();
    }
    if (local_108[0] != 0) {
      FUN_1400020a8();
    }
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
  }
  local_1e8 = &local_d8;
  local_1d0 = 1;
  local_1d8 = 0;
  local_1e0 = 0;
  FUN_1459dd948(lVar6,local_e8,&local_f8,&local_c8);
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x10))();
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if (local_d0 == 0) {
LAB_1441bf50b:
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = 0;
    goto LAB_1441bf50b;
  }
  FUN_140e0067b(local_c8,uStack_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
LAB_1441bedb9:
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441bf5dc FUN_1441bf5dc body=1241 status=ok
// SIG undefined FUN_1441bf5dc(void)

void FUN_1441bf5dc(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  longlong **local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a4 [4];
  longlong *local_a0 [2];
  undefined1 local_8c [4];
  longlong *local_88 [2];
  longlong *local_78;
  int local_70;
  longlong local_68;
  ulonglong uStack_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar4 == 0) || (*(longlong *)(lVar4 + 0x1f0) == 0)) ||
      (lVar4 = FUN_14583d3ae(), lVar4 == 0)) ||
     ((lVar5 = FUN_1458d9664(lVar4,0xffffffff), lVar5 == 0 ||
      (lVar5 = FUN_145da44aa(lVar5), lVar5 == 0)))) goto LAB_1441bf61b;
  local_68 = 0;
  uStack_60 = 0;
  lVar6 = FUN_145da4f3c();
  local_58 = L"Dialog_Purchase";
  local_50 = 0xf;
  FUN_1446e940c(local_88,&local_58);
  local_58 = L"OakOnlineMessaging";
  local_50 = 0x12;
  FUN_1446e940c(local_a0,&local_58);
  local_58 = L"Purchase";
  local_50 = 8;
  FUN_140208c1e(&local_78,local_a0,local_88,&local_58);
  FUN_140008f88(lVar6,&local_78);
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  *(undefined8 *)(lVar6 + 0x10) = DAT_14cbce288;
  lVar6 = FUN_145da4f3c(&local_68);
  local_58 = L"Dialog_Cancel";
  local_50 = 0xd;
  FUN_1446e940c(local_88,&local_58);
  local_58 = L"OakOnlineMessaging";
  local_50 = 0x12;
  FUN_1446e940c(local_a0,&local_58);
  local_58 = L"Cancel";
  local_50 = 6;
  FUN_140208c1e(&local_78,local_a0,local_88,&local_58);
  FUN_140008f88(lVar6,&local_78);
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  *(undefined8 *)(lVar6 + 0x10) = DAT_14cbce278;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,3,0x10);
  plVar2 = local_78;
  local_70 = 3;
  *local_78 = (longlong)&PTR_LAB_14b972ed0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_78[2] = lVar7;
  *local_78 = (longlong)&PTR_FUN_14b98a9c0;
  local_78[3] = 0;
  uVar1 = *(uint *)(lVar4 + 0xc);
  *(uint *)(local_78 + 3) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  iVar3 = *(int *)(lVar4 + 0x10);
  if (*(int *)(lVar4 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar8 = DAT_14c964868 + 1;
    bVar9 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar9) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar8);
    }
    LOCK();
    iVar3 = *(int *)(lVar4 + 0x10);
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(lVar4 + 0x10) = iVar8;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar9) {
      iVar3 = iVar8;
    }
  }
  *(int *)((longlong)plVar2 + 0x1c) = iVar3;
  plVar2[4] = (longlong)FUN_1441c1c8a;
  local_58 = L"TrialExpiredTitle";
  local_50 = 0x11;
  FUN_1446e940c(local_a0,&local_58);
  local_58 = L"OakOnlineMessaging";
  local_50 = 0x12;
  FUN_1446e940c(local_8c,&local_58);
  local_58 = L"Trial Expired";
  local_50 = 0xd;
  FUN_140208c1e(local_88,local_8c,local_a0,&local_58);
  local_58 = L"TrialExpiredMessage";
  local_50 = 0x13;
  FUN_1446e940c(local_8c,&local_58);
  local_58 = L"OakOnlineMessaging";
  local_50 = 0x12;
  FUN_1446e940c(local_a4,&local_58);
  local_58 = 
  L"The trial is no longer available. To continue, please purchase the full version of the game.";
  local_50 = 0x5c;
  FUN_140208c1e(local_a0,local_a4,local_8c,&local_58);
  local_b0 = 1;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = &local_78;
  FUN_1459dd948(lVar5,local_88,local_a0,&local_68);
  if (local_a0[0] != (longlong *)0x0) {
    (**(code **)(*local_a0[0] + 0x10))();
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_70 == 0) {
LAB_1441bfa16:
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (longlong *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70 = 0;
    goto LAB_1441bfa16;
  }
  FUN_140e0067b(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_1441bf61b:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441bfab6 FUN_1441bfab6 body=439 status=ok
// SIG undefined FUN_1441bfab6(void)

void FUN_1441bfab6(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = 0xffffffff;
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar1 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar1 = *(longlong *)(param_1 + 200);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x88) + (longlong)iVar3 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar3 * 0x10) == param_2) {
          if (lVar1 != 0) {
            uVar2 = *(undefined4 *)(lVar1 + 4);
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 8);
      } while (iVar3 != -1);
    }
  }
  lVar1 = FUN_1458d9604(param_1,uVar2);
  if (lVar1 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
    local_38 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*DAT_14c844840 + 8))();
      }
    }
    local_30 = 0;
    FUN_148e3a3b0(lVar1,param_2,param_3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441bfc6e FUN_1441bfc6e body=76 status=ok
// SIG undefined FUN_1441bfc6e(void)

void FUN_1441bfc6e(longlong *param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x45) = 0;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_14583d3ae();
    if (lVar1 != 0) {
      FUN_1441bfcba(lVar1,*(undefined4 *)((longlong)param_1 + 0x22c));
      return;
    }
  }
  return;
}



// FUNCTION 1441bfcba FUN_1441bfcba body=158 status=ok
// SIG undefined FUN_1441bfcba(void)

void FUN_1441bfcba(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar3 = 0xffffffff;
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    lVar2 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar2 = *(longlong *)(param_1 + 200);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x88);
      do {
        lVar4 = (longlong)iVar1 * 0x10;
        if (*(uint *)(lVar2 + lVar4) == param_2) {
          uVar3 = *(undefined4 *)(lVar2 + 4 + lVar4);
          FUN_1406ea0e0();
          break;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 8);
      } while (iVar1 != -1);
    }
  }
  lVar2 = FUN_1458d9604(param_1,uVar3);
  if (lVar2 == 0) {
    return;
  }
  FUN_1418f7da0(lVar2,param_2);
  return;
}



// FUNCTION 1441bfd58 FUN_1441bfd58 body=760 status=ok
// SIG undefined FUN_1441bfd58(void)

undefined4
FUN_1441bfd58(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  int local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  uVar2 = 0xffffffff;
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_14583d3ae();
    if (lVar3 != 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c844850) {
        FUN_144b3d300(&DAT_14c844850);
        if (DAT_14c844850 == -1) {
          DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = &PTR_FUN_149e19310;
          DAT_14c844840[2] = 0xffffffffffffffff;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
      }
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c844850) {
        FUN_144b3d300(&DAT_14c844850);
        if (DAT_14c844850 == -1) {
          DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = &PTR_FUN_149e19310;
          DAT_14c844840[2] = 0xffffffffffffffff;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
      }
      local_60 = (undefined8 *)0x0;
      local_58 = 0;
      FUN_14114e6dc(&local_60,param_5);
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      local_48 = 3;
      *local_50 = &PTR_LAB_14b98cfe0;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_50[2] = lVar4;
      *local_50 = &PTR_FUN_14b98a5d0;
      local_50[3] = 0;
      *(undefined4 *)(local_50 + 4) = 0;
      FUN_14114e6dc(local_50 + 3,&local_60);
      local_68 = &DAT_14c844840;
      local_70 = &DAT_14c844840;
      local_78 = &local_50;
      uVar2 = FUN_148d8e71a(lVar3,param_2,param_3,param_4);
      if (local_58 != 0) {
        if (local_60 == (undefined8 *)0x0) goto LAB_1441bfd9c;
        (**(code **)*local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        local_58 = 0;
      }
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1441bfd9c:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c0052 FUN_1441c0052 body=186 status=ok
// SIG undefined FUN_1441c0052(void)

void FUN_1441c0052(undefined8 param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = FUN_140b3f358();
  if (cVar2 == '\0') {
    lVar3 = FUN_1400b465c(param_1);
    if ((longlong)*(int *)(lVar3 + 0x40) != 0) {
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + lVar4);
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) == param_2)) {
          lVar3 = FUN_14030d4a0();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             ((*(longlong *)
                (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30 &&
              (lVar3 = FUN_140e7100c(lVar1), lVar3 != 0)))) {
            FUN_148e4c2d0(lVar3,param_2,param_3);
            return;
          }
          break;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(lVar3 + 0x40) * 8 != lVar4);
    }
  }
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001441c00f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_3 + 0x60))();
    return;
  }
  return;
}



// FUNCTION 1441c010c FUN_1441c010c body=222 status=ok
// SIG undefined FUN_1441c010c(void)

void FUN_1441c010c(undefined8 param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar2 = FUN_140b3f358();
  if (cVar2 == '\0') {
    lVar3 = FUN_1400b465c(param_1);
    if ((longlong)*(int *)(lVar3 + 0x40) != 0) {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + lVar6);
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) == param_2)) {
          lVar3 = FUN_14030d4a0();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             ((*(longlong *)
                (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30 &&
              (lVar3 = FUN_140e76a6a(lVar1), lVar3 != 0)))) {
            FUN_1461462fc(lVar3,param_2,param_3);
            return;
          }
          break;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)*(int *)(lVar3 + 0x40) * 8 != lVar6);
    }
    plVar4 = (longlong *)*param_3;
    if (plVar4 == (longlong *)0x0 || (int)param_3[1] == 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
    uVar5 = 0;
  }
  else {
    plVar4 = (longlong *)*param_3;
    if (plVar4 == (longlong *)0x0 || (int)param_3[1] == 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x60);
    uVar5 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001441c01c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar4,uVar5);
  return;
}



// FUNCTION 1441c01ea FUN_1441c01ea body=694 status=ok
// SIG undefined FUN_1441c01ea(void)

void FUN_1441c01ea(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  undefined4 uStack_4c;
  longlong *local_48;
  int local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14410aa12();
  plVar6 = (longlong *)FUN_140a68038(1);
  if (plVar6 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
LAB_1441c027d:
    plVar6 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x98))(plVar6,&local_48);
    plVar1 = local_48;
    plVar8 = (longlong *)CONCAT44(uStack_3c,local_40);
    if (local_48 == (longlong *)0x0) goto LAB_1441c027d;
    (**(code **)(*plVar6 + 0x80))(plVar6,&local_48);
    if (local_48 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
      puVar9 = (undefined8 *)0x0;
    }
    else {
      (**(code **)(*local_48 + 0x110))(local_48,&local_58,param_2);
      plVar6 = (longlong *)CONCAT44(uStack_4c,local_50);
      puVar9 = local_58;
    }
    plVar4 = (longlong *)CONCAT44(uStack_3c,local_40);
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
    if (puVar9 != (undefined8 *)0x0) {
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_14009d848(&local_58,param_3);
      local_48 = (longlong *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      local_40 = 3;
      *local_48 = (longlong)&PTR_LAB_14b4c24a0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_48[2] = lVar7;
      *local_48 = (longlong)&PTR_FUN_14b98a640;
      local_48[3] = 0;
      *(undefined4 *)(local_48 + 4) = 0;
      FUN_14009d848(local_48 + 3,&local_58);
      (**(code **)(*plVar1 + 0x38))(plVar1,puVar9,1,&local_48);
      if (local_40 == 0) {
LAB_1441c03bd:
        if (local_48 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_48 != (longlong *)0x0) {
        (**(code **)*local_48)(local_48,0);
        FUN_1446efa72(&local_48,0,0,0x10);
        local_40 = 0;
        goto LAB_1441c03bd;
      }
      if (local_50 != 0) {
        if (local_58 == (undefined8 *)0x0) goto LAB_1441c0410;
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = 0;
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1441c0410;
    }
  }
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*(longlong *)*param_3 + 0x60))();
  }
LAB_1441c0410:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c04a2 FUN_1441c04a2 body=261 status=ok
// SIG undefined FUN_1441c04a2(void)

void FUN_1441c04a2(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_140b3f358();
  if (cVar3 == '\0') {
    lVar4 = FUN_1400b465c(param_1);
    if ((longlong)*(int *)(lVar4 + 0x40) != 0) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar5);
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) == param_2)) {
          lVar4 = FUN_14030d4a0();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             ((*(longlong *)
                (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30 &&
              (lVar4 = FUN_140e76a6a(lVar1), lVar4 != 0)))) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
          }
          break;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)*(int *)(lVar4 + 0x40) * 8 != lVar5);
    }
  }
  local_48[0] = 0;
  local_48[1] = 0;
  plVar2 = (longlong *)*param_5;
  if ((plVar2 != (longlong *)0x0 && (int)param_5[1] != 0) &&
     ((**(code **)(*plVar2 + 0x60))(plVar2,local_48), local_48[0] != 0)) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c05c4 FUN_1441c05c4 body=1157 status=ok
// SIG undefined FUN_1441c05c4(void)

void FUN_1441c05c4(longlong *param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  int local_68;
  int local_60;
  undefined8 *local_58;
  int local_50;
  void *local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar6 = FUN_140b3f358();
  if (cVar6 != '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar6 = FUN_14054d46e(&DAT_14c846b20,L"ForceAgeVerification");
    if (cVar6 == '\0') {
      if (*param_3 != 0 && (int)param_3[1] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
      }
      goto LAB_1441c089e;
    }
  }
  FUN_1400b22c2(&local_48,&DAT_14b983ece);
  plVar7 = (longlong *)FUN_140a68038(1);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x80))(plVar7,&local_78);
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x198))(local_78,param_2,&local_48);
      if (local_40 < 2) {
        lVar8 = FUN_140d5712e();
        lVar9 = *(longlong *)(lVar8 + 0x38);
        plVar7 = *(longlong **)(lVar8 + 0x40);
        if (plVar7 == (longlong *)0x0) {
          if (&local_48 != (void **)(lVar9 + 0x98)) {
            iVar3 = *(int *)(lVar9 + 0xa0);
            pvVar4 = *(void **)(lVar9 + 0x98);
            local_40 = iVar3;
            if (iVar3 == 0 && local_3c == 0) {
              local_3c = 0;
            }
            else {
              FUN_1446dd670(&local_48,iVar3);
              if (iVar3 != 0) {
                memcpy(local_48,pvVar4,(longlong)iVar3 * 2);
              }
            }
          }
        }
        else {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          if (&local_48 != (void **)(lVar9 + 0x98)) {
            iVar3 = *(int *)(lVar9 + 0xa0);
            pvVar4 = *(void **)(lVar9 + 0x98);
            local_40 = iVar3;
            if (iVar3 == 0 && local_3c == 0) {
              local_3c = 0;
            }
            else {
              FUN_1446dd670(&local_48,iVar3);
              if (iVar3 != 0) {
                memcpy(local_48,pvVar4,(longlong)iVar3 * 2);
              }
            }
          }
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
      }
    }
    plVar7 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  lVar9 = FUN_1400b465c(param_1);
  if (lVar9 != 0) {
    lVar8 = FUN_1403ca142();
    if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
         == lVar8 + 0x30)) && ((longlong)*(int *)(lVar9 + 0x40) != 0)) {
      lVar8 = 0;
      do {
        lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x38) + lVar8);
        if ((lVar10 != 0) && (*(int *)(lVar10 + 0xe0) == param_2)) {
          lVar8 = FUN_14030d4a0();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             ((*(longlong *)
                (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30 &&
              (lVar8 = FUN_140e76a6a(lVar10), lVar8 != 0)))) {
            FUN_148d30632(lVar9,lVar10);
            local_70 = (longlong *)0x0;
            local_68 = 0;
            local_78 = param_1;
            FUN_14009d848(&local_70,param_3);
            local_58 = (undefined8 *)0x0;
            local_50 = 0;
            local_60 = param_2;
            FUN_1446efa72(&local_58,0,4,0x10);
            puVar5 = local_58;
            local_50 = 4;
            *local_58 = &PTR_LAB_149e020b0;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar9 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar9 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar9;
            local_58[2] = lVar10;
            *local_58 = &PTR_FUN_14b98a720;
            local_58[3] = local_78;
            local_58[4] = 0;
            *(undefined4 *)(local_58 + 5) = 0;
            FUN_14009d848(local_58 + 4,&local_70);
            *(int *)(puVar5 + 6) = local_60;
            FUN_148e4a4fe(lVar8,param_2,&local_58,&local_48);
            if (local_50 == 0) {
LAB_1441c09c9:
              if (local_58 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_58 != (undefined8 *)0x0) {
              (**(code **)*local_58)(local_58,0);
              FUN_1446efa72(&local_58,0,0,0x10);
              local_50 = 0;
              goto LAB_1441c09c9;
            }
            if (local_68 != 0) {
              if (local_70 == (longlong *)0x0) goto LAB_1441c088f;
              (**(code **)*local_70)(local_70,0);
              FUN_1446efa72(&local_70,0,0,0x10);
              local_68 = 0;
            }
            if (local_70 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_1441c088f;
          }
          break;
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)*(int *)(lVar9 + 0x40) * 8 != lVar8);
    }
  }
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*(longlong *)*param_3 + 0x60))();
  }
LAB_1441c088f:
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1441c089e:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c0a62 FUN_1441c0a62 body=982 status=ok
// SIG undefined FUN_1441c0a62(void)

void FUN_1441c0a62(wchar_t *param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 **local_88;
  wchar_t *local_78;
  undefined8 *local_70;
  int local_68;
  int local_60;
  undefined8 *local_58;
  int local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = FUN_1400b465c();
  if (lVar2 == 0) goto LAB_1441c0ab4;
  lVar3 = FUN_1403ca142();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_1441c0ab4;
  if ((longlong)*(int *)(lVar2 + 0x40) != 0) {
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar3);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0xe0) == param_2)) goto LAB_1441c0b0a;
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(lVar2 + 0x40) * 8 != lVar3);
  }
  lVar4 = 0;
LAB_1441c0b0a:
  FUN_148d30632(lVar2,lVar4);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbce240) {
    FUN_144b3d300(&DAT_14cbce240);
    if (DAT_14cbce240 == -1) {
      local_78 = L"EnableCrossSaveHeader";
      local_70._0_4_ = 0x15;
      FUN_1446e940c(&local_58,&local_78);
      local_78 = L"OakOnlineLoginManager";
      local_70._0_4_ = 0x15;
      FUN_1446e940c(local_44,&local_78);
      local_78 = L"Cross-Platform Saves";
      local_70 = (undefined8 *)CONCAT44(local_70._4_4_,0x14);
      FUN_140208c1e(&DAT_14cbce230,local_44,&local_58,&local_78);
      atexit((_func_5014 *)&LAB_1441c0e39);
      _Init_thread_footer(&DAT_14cbce240);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbce258) {
    FUN_144b3d300(&DAT_14cbce258);
    if (DAT_14cbce258 == -1) {
      local_78 = L"EnableCrossSaveMessage";
      local_70._0_4_ = 0x16;
      FUN_1446e940c(&local_58,&local_78);
      local_78 = L"OakOnlineLoginManager";
      local_70._0_4_ = 0x15;
      FUN_1446e940c(local_44,&local_78);
      local_78 = L"Enable Cross-Platform Saves?";
      local_70 = (undefined8 *)CONCAT44(local_70._4_4_,0x1c);
      FUN_140208c1e(&DAT_14cbce248,local_44,&local_58,&local_78);
      atexit((_func_5014 *)&LAB_1441c0e4d);
      _Init_thread_footer(&DAT_14cbce258);
    }
  }
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  local_78 = param_1;
  FUN_14114e6dc(&local_70,param_3);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_60 = param_2;
  FUN_1446efa72(&local_58,0,4,0x10);
  puVar1 = local_58;
  local_50 = 4;
  *local_58 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_58[2] = lVar3;
  *local_58 = &PTR_FUN_14b98a790;
  local_58[3] = local_78;
  local_58[4] = 0;
  *(undefined4 *)(local_58 + 5) = 0;
  FUN_14114e6dc(local_58 + 4,&local_70);
  *(int *)(puVar1 + 6) = local_60;
  local_88 = &local_58;
  (**(code **)(*(longlong *)param_1 + 0x390))(param_1,param_2,&DAT_14cbce230,&DAT_14cbce248);
  if (local_50 == 0) {
LAB_1441c0c63:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1441c0c63;
  }
  if (local_68 != 0) {
    if (local_70 == (undefined8 *)0x0) goto LAB_1441c0ab4;
    (**(code **)*local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_70 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1441c0ab4:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c0e62 FUN_1441c0e62 body=623 status=ok
// SIG undefined FUN_1441c0e62(void)

void FUN_1441c0e62(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined4 local_74;
  longlong local_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar9 = param_1[0xe0];
  if ((longlong)(int)lVar9 != 0) {
    lVar3 = param_1[0xdf];
    lVar10 = 0;
    do {
      cVar4 = FUN_14127b142(lVar3 + 0x30 + lVar10,param_2);
      if (cVar4 != '\0') {
        uVar8 = (lVar10 >> 5) * 0x4ec4ec4ec4ec4ec5;
        uVar7 = (uint)uVar8;
        if ((-1 < (int)uVar7) && ((int)uVar7 < (int)param_1[0xe0])) {
          lVar9 = (ulonglong)(uVar7 & 0x7fffffff) * 0x1a0;
          FUN_1408e4d18(param_1[0xdf] + lVar9,&local_58);
          if (local_58 != (longlong *)0x0) {
            (**(code **)(*local_58 + 0x10))(local_58,&local_70);
            (**(code **)(*param_1 + 0x180))(param_1);
            local_88[0] = local_70;
            plVar6 = (longlong *)FUN_1401e3228();
            if (plVar6 == (longlong *)0x0) {
              local_68 = (longlong *)0x0;
              plStack_60 = (longlong *)0x0;
              uVar5 = 0xffffffff;
            }
            else {
              (**(code **)(*plVar6 + 0x80))(plVar6,&local_68);
              plVar6 = local_68;
              uVar5 = 0xffffffff;
              if (local_68 != (longlong *)0x0) {
                (**(code **)(*local_68 + 0x178))(local_68,&local_74,local_58);
                uVar5 = (**(code **)(*plVar6 + 0x188))(plVar6,local_74);
              }
            }
            FUN_1441c341e(param_1,uVar5,param_1[0xdf] + lVar9 + 0x70);
            lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
            if ((((lVar9 != 0) && (*(longlong *)(lVar9 + 0x1f0) != 0)) &&
                (lVar9 = FUN_14094c9c2(), lVar9 != 0)) &&
               (lVar9 = *(longlong *)(lVar9 + 0x30), lVar9 != 0)) {
              (**(code **)(*param_2 + 0x30))(param_2,local_88);
              FUN_1462619c0(lVar9,uVar5,1,local_88);
              if (local_88[0] != 0) {
                FUN_1400020a8();
              }
              if (*(longlong *)(DAT_14cb98ab0 + 0x28) != 0) {
                FUN_14571a702();
              }
            }
            plVar6 = plStack_60;
            if (plStack_60 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_60 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_60)(plStack_60);
                LOCK();
                piVar2 = (int *)((longlong)plVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
          }
          FUN_148d93ce0(param_1 + 0xdf,uVar8 & 0xffffffff);
          FUN_1447f69b6(param_1 + 0xa0);
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_50 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)local_50 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_50 + 0x10))(local_50);
              }
            }
          }
        }
        break;
      }
      lVar10 = lVar10 + 0x1a0;
    } while ((longlong)(int)lVar9 * 0x1a0 - lVar10 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c10d2 FUN_1441c10d2 body=162 status=ok
// SIG undefined FUN_1441c10d2(void)

void FUN_1441c10d2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *(int *)(param_1 + 0x700);
  if ((longlong)iVar3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x6f8);
    uVar4 = 0;
    do {
      cVar2 = FUN_14127b142(lVar1 + 0x30 + uVar4,param_2);
      if (cVar2 != '\0') {
        iVar3 = (int)(uVar4 >> 5) * -0x3b13b13b;
        if (iVar3 < 0) {
          return;
        }
        if (*(int *)(param_1 + 0x700) <= iVar3) {
          return;
        }
        FUN_148d93ce0(param_1 + 0x6f8);
        FUN_1447f69b6(param_1 + 0x500);
        return;
      }
      uVar4 = uVar4 + 0x1a0;
    } while ((longlong)iVar3 * 0x1a0 - uVar4 != 0);
  }
  return;
}



// FUNCTION 1441c1174 FUN_1441c1174 body=276 status=ok
// SIG undefined FUN_1441c1174(void)

undefined4 FUN_1441c1174(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = 0xffffffff;
  if (1 < *(int *)(param_1 + 8)) {
    plVar3 = (longlong *)FUN_140a68038(1);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x80))(plVar3,&local_28);
      if (local_28 == (longlong *)0x0) {
        uVar2 = 0xffffffff;
      }
      else {
        (**(code **)(*local_28 + 0x120))(local_28,&local_38,param_1);
        if (local_38 == 0) {
          uVar2 = 0xffffffff;
        }
        else {
          (**(code **)(*local_28 + 0x178))(local_28,&local_3c);
          uVar2 = (**(code **)(*local_28 + 0x188))(local_28,local_3c);
        }
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_30 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)local_30 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_30 + 0x10))(local_30);
            }
          }
        }
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_20 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_20 + 0x10))(local_20);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c12ac FUN_1441c12ac body=1154 status=ok
// SIG undefined FUN_1441c12ac(void)

void FUN_1441c12ac(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  longlong **local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b4 [4];
  longlong *local_b0 [2];
  undefined1 local_9c [4];
  longlong *local_98;
  ulonglong uStack_90;
  wchar_t *local_88;
  ulonglong uStack_80;
  wchar_t *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar7 = (longlong *)*param_3;
  if (*(code **)(*plVar7 + 0x50) != FUN_144828418) {
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x50))();
  }
  FUN_1447a1fc0(plVar7);
  plVar7 = (longlong *)*param_3;
  pcVar1 = *(code **)(*plVar7 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar8 = plVar7 + 3;
    if (plVar7[5] != 0) {
      plVar8 = (longlong *)(plVar7[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar8 = plVar7 + 2;
  }
  else {
    plVar8 = (longlong *)(*pcVar1)(plVar7);
  }
  if ((int)plVar8[1] < 2) goto LAB_1441c1332;
  lVar3 = FUN_1458d96de(param_1,0);
  if (lVar3 == 0) {
    lVar3 = FUN_1458d9664(param_1,param_2);
    if (lVar3 != 0) goto LAB_1441c13af;
    lVar3 = 0;
  }
  else {
    param_2 = *(undefined4 *)(lVar3 + 0xe0);
LAB_1441c13af:
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar3 = FUN_140334a94(lVar3,uVar4);
  }
  lVar5 = FUN_1458d9664(param_1,param_2);
  if ((lVar5 == 0) || (lVar5 = FUN_145da44aa(lVar5), lVar5 == 0)) goto LAB_1441c1332;
  if ((*param_4 == 0) || (((param_4[1] == 0 || (lVar3 == 0)) || (*param_4 == DAT_14c948000)))) {
    local_88 = (wchar_t *)0x0;
    uStack_80 = 0;
    lVar3 = FUN_145da4f3c();
    local_70 = L"Dialog_Ok";
    local_68 = 9;
    FUN_1446e940c(local_b0,&local_70);
    local_70 = L"OakOnlineMessaging";
    local_68 = 0x12;
    FUN_1446e940c(local_9c,&local_70);
    local_70 = L"OK";
    local_68 = 2;
    FUN_140208c1e(&local_98,local_9c,local_b0,&local_70);
    FUN_140008f88(lVar3,&local_98);
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x10))();
    }
    uVar4 = DAT_14cbce260;
    *(undefined8 *)(lVar3 + 0x10) = DAT_14cbce260;
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    local_70 = L"ErrorDialogHeader";
    local_68 = 0x11;
    FUN_1446e940c(local_9c,&local_70);
    local_70 = L"OakOnlineMessaging";
    local_68 = 0x12;
    FUN_1446e940c(local_b4,&local_70);
    local_70 = L"Error";
    local_68 = 5;
    FUN_140208c1e(local_b0,local_b4,local_9c,&local_70);
    local_d0 = uVar4;
    local_c0 = 1;
    local_c8 = 2;
    local_d8 = &local_98;
    FUN_1459dd948(lVar5,local_b0,param_3,&local_88);
    if (local_b0[0] != (longlong *)0x0) {
      (**(code **)(*local_b0[0] + 0x10))();
    }
    if ((int)uStack_90 == 0) {
LAB_1441c16d0:
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_98 != (longlong *)0x0) {
      (**(code **)*local_98)(local_98,0);
      FUN_1446efa72(&local_98,0,0,0x10);
      uStack_90 = uStack_90 & 0xffffffff00000000;
      goto LAB_1441c16d0;
    }
    FUN_140e0067b(local_88,uStack_80 & 0xffffffff);
    pwVar9 = local_88;
  }
  else {
    if ((DAT_14cbc8bb8 == 0) || (lVar6 = FUN_144815d88(DAT_14cbc8bb8,param_4), lVar6 == 0))
    goto LAB_1441c1332;
    local_70 = (wchar_t *)0x0;
    local_68 = 0;
    FUN_1446efa72(&local_70,0,3,0x10);
    local_68 = 3;
    *(undefined ***)local_70 = &PTR_LAB_14b972ed0;
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
    *(longlong *)(local_70 + 8) = lVar10;
    *(undefined ***)local_70 = &PTR_FUN_14b98a800;
    *(longlong **)(local_70 + 0xc) = param_1;
    *(longlong *)(local_70 + 0x10) = lVar3;
    *(longlong *)(local_70 + 0x14) = lVar6;
    FUN_14410be10(&local_88,lVar6);
    FUN_144268f62(lVar5,&local_88,&local_70,1);
    pwVar9 = local_70;
    if (local_68 != 0) {
      if (local_70 == (wchar_t *)0x0) goto LAB_1441c1332;
      (*(code *)**(undefined8 **)local_70)(local_70,0);
      FUN_1446efa72(&local_70,0,0,0x10);
      local_68 = 0;
      pwVar9 = local_70;
    }
  }
  if (pwVar9 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1441c1332:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c1730 FUN_1441c1730 body=752 status=ok
// SIG undefined FUN_1441c1730(void)

undefined4 FUN_1441c1730(longlong param_1,longlong *param_2,longlong *param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined1 local_70;
  undefined4 **local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)*param_3;
  if (*(code **)(*plVar4 + 0x50) != FUN_144828418) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))();
  }
  FUN_1447a1fc0(plVar4);
  plVar4 = (longlong *)*param_3;
  pcVar1 = *(code **)(*plVar4 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar3 = plVar4 + 3;
    if (plVar4[5] != 0) {
      plVar3 = (longlong *)(plVar4[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar3 = plVar4 + 2;
  }
  else {
    plVar3 = (longlong *)(*pcVar1)(plVar4);
  }
  uVar6 = 0xffffffff;
  if (1 < (int)plVar3[1]) {
    uVar6 = 0xffffffff;
    lVar2 = FUN_1458d9664(param_1);
    if (lVar2 != 0) {
      uVar6 = *(undefined4 *)(lVar2 + 0xe0);
    }
    local_5c = uVar6;
    lVar2 = FUN_1458d9604(param_1,uVar6);
    if (lVar2 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      plVar4 = (longlong *)*param_2;
      if (*(code **)(*plVar4 + 0x50) != FUN_144828418) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))();
      }
      FUN_1447a1fc0(plVar4);
      plVar4 = (longlong *)*param_2;
      lVar5 = *plVar4;
      pcVar1 = *(code **)(lVar5 + 0x28);
      if (pcVar1 == FUN_14482841c) {
        plVar3 = (longlong *)(plVar4[5] + 8);
        if (plVar4[5] == 0) {
          plVar3 = plVar4 + 3;
        }
      }
      else if (pcVar1 == (code *)&LAB_14010c34c) {
        plVar3 = plVar4 + 2;
      }
      else {
        plVar3 = (longlong *)(*pcVar1)();
        plVar4 = (longlong *)*param_2;
        lVar5 = *plVar4;
      }
      plVar7 = param_2;
      if ((int)plVar3[1] < 2) {
        plVar7 = param_3;
      }
      if (*(code **)(lVar5 + 0x50) != FUN_144828418) {
        plVar4 = (longlong *)(**(code **)(lVar5 + 0x50))();
      }
      FUN_1447a1fc0(plVar4);
      param_2 = (longlong *)*param_2;
      pcVar1 = *(code **)(*param_2 + 0x28);
      if (pcVar1 == FUN_14482841c) {
        plVar4 = param_2 + 3;
        if (param_2[5] != 0) {
          plVar4 = (longlong *)(param_2[5] + 8);
        }
      }
      else if (pcVar1 == (code *)&LAB_14010c34c) {
        plVar4 = param_2 + 2;
      }
      else {
        plVar4 = (longlong *)(*pcVar1)(param_2);
      }
      if ((int)plVar4[1] < 2) {
        param_3 = (longlong *)&DAT_14c844840;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c844850) {
          FUN_144b3d300(&DAT_14c844850);
          if (DAT_14c844850 == -1) {
            DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[1] = 0;
            *DAT_14c844840 = &PTR_FUN_149e19310;
            DAT_14c844840[2] = 0xffffffffffffffff;
            DAT_14c844840[3] = 0;
            DAT_14c844840[4] = 0;
            DAT_14c844840[5] = 0;
            if (DAT_14c844840 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
        }
      }
      local_68 = &local_58;
      local_70 = 2;
      local_78 = param_3;
      FUN_146211f04(lVar2,&local_60,&DAT_14cbcdea0,plVar7);
      local_50 = &local_5c;
      local_58 = &local_60;
      FUN_140263e2a(param_1 + 0x88,local_44,&local_58,0);
      uVar6 = local_60;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c1a22 FUN_1441c1a22 body=614 status=ok
// SIG undefined FUN_1441c1a22(void)

void FUN_1441c1a22(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  longlong local_b8 [2];
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  ulonglong uStack_60;
  longlong local_58 [2];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*param_2 != DAT_14cbce280) goto LAB_1441c1c54;
  plVar3 = (longlong *)FUN_140773fe2();
  if (plVar3 == (longlong *)0x0) goto LAB_1441c1c54;
  uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar5 = (**(code **)(*plVar3 + 0x2d0))(plVar3,param_3,uVar4);
  if (lVar5 == 0) goto LAB_1441c1c54;
  plVar3 = (longlong *)FUN_140a68038(1);
  if (plVar3 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x70))(plVar3,&local_48);
    if (local_48 != (longlong *)0x0) {
      FUN_140056680(&local_a8,L"https://support.gearboxsoftware.com/");
      FUN_140056680(&local_68,L"ShiftSupportUrl");
      FUN_148a6298e(local_58,lVar5,&local_68,&local_a8);
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_a4,local_a8) != 0) {
        FUN_1400020a8();
      }
      plVar3 = local_48;
      uStack_a4 = uStack_a4 & 0xffffff00;
      local_a8 = 0;
      local_9c = 0;
      uStack_94 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      local_a0 = param_3;
      FUN_140056680(local_c8,L"AgeGateSupportUrl");
      FUN_148a6298e(local_b8,lVar5,local_c8,local_58);
      (**(code **)(*plVar3 + 0x38))(plVar3,local_b8,&local_a8,&local_68);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
      if ((int)uStack_60 == 0) {
LAB_1441c1bf4:
        if (local_68 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_68 != (undefined8 *)0x0) {
        (**(code **)*local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        uStack_60 = uStack_60 & 0xffffffff00000000;
        goto LAB_1441c1bf4;
      }
      FUN_148a3c424(&local_a8);
      if (local_58[0] != 0) {
        FUN_1400020a8();
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
LAB_1441c1c54:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c1c8a FUN_1441c1c8a body=302 status=ok
// SIG undefined FUN_1441c1c8a(void)

void FUN_1441c1c8a(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [4];
  undefined1 local_48;
  undefined8 *local_38;
  ulonglong uStack_30;
  longlong *local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_2 != DAT_14cbce288) goto LAB_1441c1d9b;
  plVar3 = (longlong *)FUN_140a68038(1);
  if (plVar3 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x70))(plVar3,&local_28);
    if (local_28 != (longlong *)0x0) {
      local_38 = (undefined8 *)0x0;
      uStack_30 = 0;
      local_68[2] = 0;
      local_68[3] = 0;
      local_68[0] = 0;
      local_68[1] = 0;
      local_48 = 0;
      (**(code **)(*local_28 + 0x60))(local_28,param_3,local_68);
      if (local_68[2] != 0) {
        FUN_1400020a8();
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if ((int)uStack_30 != 0) {
        if (local_38 == (undefined8 *)0x0) goto LAB_1441c1d74;
        (**(code **)*local_38)(local_38,0);
        FUN_1446efa72(&local_38,0,0,0x10);
        uStack_30 = uStack_30 & 0xffffffff00000000;
      }
      if (local_38 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1441c1d74:
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_1441c1d9b:
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c1dba FUN_1441c1dba body=82 status=ok
// SIG undefined FUN_1441c1dba(void)

void FUN_1441c1dba(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_145da4f3c();
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*plVar3;
  if (plVar2 != plVar1) {
    *plVar3 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(plVar3 + 1) = (int)param_2[1];
  plVar3[2] = param_3;
  return;
}



// FUNCTION 1441c1f44 FUN_1441c1f44 body=1612 status=ok
// SIG undefined FUN_1441c1f44(void)

void FUN_1441c1f44(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ushort uVar11;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong *local_b0 [2];
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  wchar_t *local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 0x8e0) == '\x01') {
    *(undefined1 *)(param_1 + 0x8e0) = 0;
    plVar2 = DAT_14cbce468;
    plVar4 = *(longlong **)(param_1 + 0x810);
    if (plVar4 != DAT_14cbce468) {
      *(longlong **)(param_1 + 0x810) = DAT_14cbce468;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    *(undefined4 *)(param_1 + 0x818) = DAT_14cbce470;
    goto LAB_1441c23ce;
  }
  switch(param_4) {
  case 3:
  case 8:
    local_60 = L"NetworkFailure_ConnectionLost";
    local_58 = 0x1d;
    FUN_1446e940c(&local_80,&local_60);
    local_60 = L"OakOnlineSessionClient";
    local_58 = 0x16;
    FUN_1446e940c(&local_90,&local_60);
    local_60 = L"Your connection has been lost. Please check your network.";
    break;
  case 4:
    local_60 = L"NetworkFailure_ConnectionTimeout";
    local_58 = 0x20;
    FUN_1446e940c(&local_80,&local_60);
    local_60 = L"OakOnlineSessionClient";
    local_58 = 0x16;
    FUN_1446e940c(&local_90,&local_60);
    local_60 = L"Your connection has timed out. Please check your network.";
    break;
  case 5:
    iVar3 = *(int *)(param_5 + 1);
    if (iVar3 != DAT_14cbce140) {
      if (DAT_14cbce140 + iVar3 == 1) goto LAB_1441c2401;
      puVar6 = (undefined2 *)*param_5;
LAB_1441c242b:
      puVar5 = &DAT_149dfb77a;
      if (iVar3 != 0) {
        puVar5 = puVar6;
      }
      lVar10 = 0;
      while( true ) {
        uVar11 = *(ushort *)((longlong)puVar5 + lVar10);
        uVar7 = (ulonglong)uVar11;
        uVar8 = *(ushort *)((longlong)L"HostClosedConnection" + lVar10);
        if (uVar11 != uVar8) break;
        if (uVar11 == 0) goto LAB_1441c2504;
LAB_1441c245f:
        lVar10 = lVar10 + 2;
      }
      if ((uVar8 | uVar11) < 0x80) {
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar9 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_1441c245f;
      }
      if (uVar11 != uVar8) {
        local_60 = L"NetworkFailure_FailureReceived";
        local_58 = 0x1e;
        FUN_1446e940c(&local_80,&local_60);
        local_60 = L"OakOnlineSessionClient";
        local_58 = 0x16;
        FUN_1446e940c(&local_90,&local_60);
        local_60 = L"Unable to connect to the host. Please check your network.";
        local_58 = 0x39;
        goto LAB_1441c256e;
      }
LAB_1441c2504:
      local_60 = L"NetworkFailure_HostClosedConnection";
      local_58 = 0x23;
      FUN_1446e940c(&local_80,&local_60);
      local_60 = L"OakOnlineSessionClient";
      local_58 = 0x16;
      FUN_1446e940c(&local_90,&local_60);
      local_60 = L"The host closed the connection.";
      local_58 = 0x1f;
LAB_1441c256e:
      FUN_140208c1e(&local_70,&local_90,&local_80,&local_60);
      goto LAB_1441c23b5;
    }
    if (1 < iVar3) {
      puVar6 = (undefined2 *)*param_5;
      lVar10 = 0;
      while( true ) {
        uVar11 = *(ushort *)((longlong)puVar6 + lVar10);
        uVar7 = (ulonglong)uVar11;
        uVar8 = *(ushort *)(DAT_14cbce138 + lVar10);
        if (uVar11 != uVar8) break;
        if (uVar11 == 0) goto LAB_1441c2401;
LAB_1441c22f4:
        lVar10 = lVar10 + 2;
      }
      if ((uVar8 | uVar11) < 0x80) {
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar9 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_1441c22f4;
      }
      if (uVar11 != uVar8) goto LAB_1441c242b;
    }
LAB_1441c2401:
    FUN_140009b9a(&local_60);
    FUN_140008f88(param_1 + 0x810,&local_60);
    local_70 = local_60;
    goto LAB_1441c23c3;
  case 6:
    local_60 = L"NetworkFailure_OutdatedClient";
    local_58 = 0x1d;
    FUN_1446e940c(&local_80,&local_60);
    local_60 = L"OakOnlineSessionClient";
    local_58 = 0x16;
    FUN_1446e940c(&local_90,&local_60);
    local_60 = 
    L"The match you are trying to join is running an incompatible version of the game. Please try upgrading your game version."
    ;
    local_58 = 0x78;
    goto LAB_1441c2390;
  default:
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    FUN_1413a454c(local_b0,param_4,0,&local_c8);
    local_60 = L"NetworkFailure_UnknownFailureType";
    local_58 = 0x21;
    FUN_1446e940c(local_ec,&local_60);
    local_60 = L"OakOnlineSessionClient";
    local_58 = 0x16;
    FUN_1446e940c(local_f0,&local_60);
    local_60 = L"UNKNOWN FAILURE TYPE! (Code: {0})";
    local_58 = 0x21;
    FUN_140208c1e(local_e8,local_f0,local_ec,&local_60);
    FUN_14023409e(&local_d8,local_e8,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_b0);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_d8;
    local_88 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a0,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (local_b0[0] != (longlong *)0x0) {
      (**(code **)(*local_b0[0] + 0x10))();
    }
    FUN_140008f88(param_1 + 0x810,local_a0);
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    plVar4 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_c0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    goto LAB_1441c23ce;
  }
  local_58 = 0x39;
LAB_1441c2390:
  FUN_140208c1e(&local_70,&local_90,&local_80,&local_60);
LAB_1441c23b5:
  FUN_140008f88(param_1 + 0x810,&local_70);
LAB_1441c23c3:
  if (local_70 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_70 + 0x10))();
  }
LAB_1441c23ce:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c2592 FUN_1441c2592 body=1037 status=ok
// SIG undefined FUN_1441c2592(void)

void FUN_1441c2592(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined1 auStack_148 [32];
  longlong local_128 [2];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8 [2];
  undefined8 local_a8;
  longlong *local_a0;
  wchar_t **local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined8 local_70;
  longlong *plStack_68;
  undefined4 local_60;
  undefined4 local_58 [4];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((param_3 & 0xfffffffe) == 2) {
    local_78 = L"TravelFailure_PackageMissing";
    local_70._0_4_ = 0x1c;
    FUN_1446e940c(local_118,&local_78);
    local_78 = L"OakOnlineSessionClient";
    local_70._0_4_ = 0x16;
    FUN_1446e940c(local_128,&local_78);
    local_78 = 
    L"You cannot travel to the map the host is currently in. You do not have the necessary {0}|platform(default=add-on content,xbox=add-on content,playstation=add-on content,sage=add-on content) installed."
    ;
    local_70 = CONCAT44(local_70._4_4_,199);
    FUN_140208c1e(local_d8,local_128,local_118,&local_78);
    FUN_14023409e(&local_c8,local_d8,1);
    local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffff00000000);
    local_70 = 0;
    plStack_68 = (longlong *)0x0;
    local_60 = 0;
    local_90 = (ulonglong *)local_58;
    local_98 = &local_78;
    FUN_14010d304(&local_88);
    local_a8 = local_c8;
    local_a0 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_b8,&local_a8,&local_88);
    FUN_14007f2db(local_88,local_80);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (plStack_68 != (longlong *)0x0) {
      (**(code **)(*plStack_68 + 0x10))();
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
    FUN_140008f88(param_1 + 0x810,local_b8);
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
  }
  else {
    FUN_140009b9a(local_e8,param_4);
    if (param_3 < 0xc) {
      pwVar3 = (wchar_t *)(&DAT_14b98d26c + *(int *)(&DAT_14b98d26c + (ulonglong)param_3 * 4));
    }
    else {
      pwVar3 = L"Unknown ETravelFailure error occurred.";
    }
    FUN_140056680(local_d8,pwVar3);
    FUN_140233b1a(local_f8,local_d8);
    FUN_1400b22c2(local_128,"{0} {1}");
    FUN_140233b1a(local_118,local_128);
    FUN_14023409e(&local_108,local_118,1);
    local_78 = (wchar_t *)CONCAT44(local_78._4_4_,4);
    FUN_14023423e(&plStack_68,local_f8);
    local_58[0] = 4;
    FUN_14023423e(local_48,local_e8);
    local_98 = &local_78;
    local_90 = &local_38;
    FUN_14010d304(&local_88);
    local_a8 = local_108;
    local_a0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_b8,&local_a8,&local_88);
    FUN_14007f2db(local_88,local_80);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    lVar4 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_78 + lVar4) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_78 + lVar4) + 0x10))();
        *(undefined8 *)((longlong)&local_78 + lVar4) = 0;
        *(undefined4 *)((longlong)&local_70 + lVar4) = 0;
      }
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar2 = (int *)((longlong)local_100 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    FUN_140008f88(param_1 + 0x810,local_b8);
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
    if (local_128[0] != 0) {
      FUN_1400020a8();
    }
    if (local_d8[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c29a0 FUN_1441c29a0 body=986 status=ok
// SIG undefined FUN_1441c29a0(void)

void FUN_1441c29a0(longlong *param_1,char param_2,undefined4 param_3,longlong *param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 *local_88;
  int local_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((param_2 != '\0') && (*(longlong *)(param_5 + 8) != 0)) &&
      (*(longlong **)(param_5 + 0x100) != (longlong *)0x0)) &&
     ((cVar4 = (**(code **)(**(longlong **)(param_5 + 0x100) + 0x20))(), cVar4 != '\0' &&
      (*param_4 != 0)))) {
    FUN_1441c341e(param_1,param_3,param_5);
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((((lVar5 != 0) &&
         ((*(longlong *)(lVar5 + 0x1f0) != 0 && (lVar5 = FUN_14094c9c2(), lVar5 != 0)))) &&
        (*(longlong *)(lVar5 + 0x30) != 0)) && (*(longlong *)(DAT_14cb98ab0 + 0x28) != 0)) {
      FUN_14571a702();
    }
    goto LAB_1441c2cc7;
  }
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  FUN_1446f470e(&local_60,L"ErrorCode",1);
  cVar4 = FUN_145e34e2c(param_5 + 0x28,local_60,&local_58);
  if (cVar4 == '\0') {
LAB_1441c2b13:
    if (*param_4 != 0) {
      plVar7 = (longlong *)FUN_140a68038(0);
      if (plVar7 == (longlong *)0x0) {
        local_78 = (longlong *)0x0;
        plStack_70 = (longlong *)0x0;
      }
      else {
        (**(code **)(*plVar7 + 0x80))(plVar7,&local_78);
        plVar7 = local_78;
        if (local_78 != (longlong *)0x0) {
          local_88 = (undefined8 *)0x0;
          local_80 = 0;
          FUN_1446efa72(&local_88,0,3,0x10);
          puVar9 = local_88;
          local_80 = 3;
          *local_88 = &PTR_LAB_14b4e4c90;
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
          local_88[2] = lVar8;
          *local_88 = &PTR_FUN_14b98b230;
          local_88[3] = 0;
          iVar10 = 0;
          if (param_1 != (longlong *)0x0) {
            uVar3 = *(uint *)((longlong)param_1 + 0xc);
            *(uint *)(local_88 + 3) = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            iVar10 = *(int *)(lVar5 + 0x10);
            if (*(int *)(lVar5 + 0x10) == 0) {
              LOCK();
              iVar10 = DAT_14c964868 + 1;
              UNLOCK();
              iVar15 = DAT_14c964868 + 1;
              bVar16 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar10;
              if (bVar16) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar15);
              }
              LOCK();
              iVar10 = *(int *)(lVar5 + 0x10);
              bVar16 = iVar10 == 0;
              if (bVar16) {
                *(int *)(lVar5 + 0x10) = iVar15;
                iVar10 = 0;
              }
              UNLOCK();
              if (bVar16) {
                iVar10 = iVar15;
              }
            }
          }
          *(int *)((longlong)puVar9 + 0x1c) = iVar10;
          puVar9[4] = param_1;
          local_98 = 0;
          (**(code **)(*plVar7 + 0x170))(plVar7,*param_4,1,&local_88);
          if (local_80 != 0) {
            if (local_88 == (undefined8 *)0x0) goto LAB_1441c2c82;
            (**(code **)*local_88)(local_88,0);
            FUN_1446efa72(&local_88,0,0,0x10);
            local_80 = 0;
          }
          if (local_88 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
LAB_1441c2c82:
      plVar7 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    puVar9 = &DAT_14cbce488;
  }
  else {
    puVar6 = local_58;
    if ((int)uStack_50 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    lVar5 = 0;
    while( true ) {
      uVar11 = *(ushort *)((longlong)puVar6 + lVar5);
      uVar12 = (ulonglong)uVar11;
      uVar13 = *(ushort *)((longlong)L"SessionDoesNotExist" + lVar5);
      if (uVar11 != uVar13) break;
      if (uVar11 == 0) goto LAB_1441c2c71;
LAB_1441c2ae3:
      lVar5 = lVar5 + 2;
    }
    if ((uVar13 | uVar11) < 0x80) {
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      uVar14 = (ulonglong)uVar13;
      uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
      if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_1441c2ae3;
    }
    if (uVar11 != uVar13) goto LAB_1441c2b13;
LAB_1441c2c71:
    puVar9 = &DAT_14cbce4b8;
  }
  FUN_1441c390c(param_1,puVar9);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1441c2cc7:
  plVar7 = (longlong *)param_4[1];
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
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c2d7c FUN_1441c2d7c body=222 status=ok
// SIG undefined FUN_1441c2d7c(void)

void FUN_1441c2d7c(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_14662e674();
  if (cVar1 == '\0') {
    local_38 = L"NetworkFailure_SessionFailure";
    local_30 = 0x1d;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"Your connection to Xbox network was lost.";
    local_30 = 0x29;
    FUN_140208c1e(local_48,local_50,local_4c,&local_38);
    (**(code **)(*param_1 + 0x340))(param_1,local_48,1);
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c2e5c FUN_1441c2e5c body=504 status=ok
// SIG undefined FUN_1441c2e5c(void)

void FUN_1441c2e5c(longlong *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2d0))();
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_1403ca142();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      cVar2 = (**(code **)(*param_1 + 0x390))(param_1);
      if (cVar2 == '\0') {
        if ((longlong)(int)plVar4[8] != 0) {
          lVar5 = 0;
          do {
            lVar1 = *(longlong *)(plVar4[7] + lVar5);
            if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) == param_2)) {
              uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
              lVar5 = FUN_140334a94(lVar1,uVar6);
              if (lVar5 != 0) {
                local_38 = DAT_14cbce478;
                if (DAT_14cbce478 != (longlong *)0x0) {
                  (**(code **)(*DAT_14cbce478 + 8))();
                }
                local_30 = DAT_14cbce480;
                if ((*(byte *)(lVar5 + 0x5a0) & 2) == 0) {
                  lVar5 = FUN_1404960a8(lVar1);
                  if (lVar5 != 0) {
                    cVar2 = (**(code **)(*plVar4 + 0x438))(plVar4);
                    if ((cVar2 != '\0') ||
                       (cVar2 = (**(code **)(*plVar4 + 0x440))(plVar4), cVar2 != '\0'))
                    goto LAB_1441c3010;
                    bVar3 = (**(code **)(*plVar4 + 0x498))(plVar4);
                    if (bVar3 < 6) {
                      puVar7 = (undefined8 *)FUN_14001cc68(8,0x10);
                      *puVar7 = &PTR_FUN_14b98d1e0;
                    }
                    else {
                      if (*(code **)(*plVar4 + 0x498) == (code *)&LAB_14015c36e) {
                        cVar2 = (char)plVar4[0x42];
                      }
                      else {
                        cVar2 = (**(code **)(*plVar4 + 0x498))(plVar4);
                      }
                      if (cVar2 != '\b') {
                        *(undefined1 *)(param_1 + 0xe5) = 1;
                        goto LAB_1441c301d;
                      }
                      puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
                      *puVar7 = &PTR_FUN_14b98d208;
                      *(undefined1 *)(puVar7 + 1) = 0;
                    }
                    FUN_14039144e(lVar5,puVar7);
                  }
                }
                else {
LAB_1441c3010:
                  FUN_145e0eb76(param_1,&local_38);
                }
LAB_1441c301d:
                if (local_38 != (longlong *)0x0) {
                  (**(code **)(*local_38 + 0x10))();
                }
              }
              break;
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)(int)plVar4[8] * 8 != lVar5);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xe5) = 1;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c3056 FUN_1441c3056 body=575 status=ok
// SIG undefined FUN_1441c3056(void)

void FUN_1441c3056(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  int local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = FUN_14662e674();
  if (cVar4 != '\0') {
    if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1441c7830(param_1);
    return;
  }
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar5 != 0) {
    FUN_1441c7830(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
  *(undefined1 *)(param_1 + 0x11c) = 1;
  uVar6 = FUN_1401cb356();
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_58[2] = lVar7;
  *local_58 = &PTR_FUN_14b98ce60;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar8 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
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
      iVar8 = *(int *)(lVar5 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar5 + 0x10) = iVar9;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar8;
  puVar3[4] = param_1;
  local_68 = 0;
  FUN_1405f67fc(uVar6,local_48,&local_58,L"UOakOnlineSessionClient_HandleAppResume");
  if (local_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1441c323b;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1441c323b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 1441c32e2 FUN_1441c32e2 body=315 status=ok
// SIG undefined FUN_1441c32e2(void)

void FUN_1441c32e2(longlong *param_1,char param_2,undefined4 param_3,longlong *param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_2 != '\0') && (*(longlong *)(param_5 + 8) != 0)) &&
     (*(longlong **)(param_5 + 0x100) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(param_5 + 0x100) + 0x20))();
    if ((cVar4 != '\0') && (*param_4 != 0)) {
      FUN_1441c341e(param_1,param_3,param_5);
      lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
        lVar5 = FUN_14094c9c2();
        if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x30), lVar5 != 0)) {
          (**(code **)(*(longlong *)*param_4 + 0x30))((longlong *)*param_4,local_38);
          FUN_1462619c0(lVar5,param_3,1,local_38);
          if (local_38[0] != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(DAT_14cb98ab0 + 0x28) != 0) {
            FUN_14571a702();
          }
        }
      }
      goto LAB_1441c33d7;
    }
  }
  FUN_1441c390c(param_1,&DAT_14cbce488);
LAB_1441c33d7:
  plVar3 = (longlong *)param_4[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c341e FUN_1441c341e body=1261 status=ok
// SIG undefined FUN_1441c341e(void)

void FUN_1441c341e(longlong *param_1,int param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined8 *local_1a0;
  int local_198;
  longlong local_190;
  longlong *local_188;
  longlong local_180;
  int local_178;
  undefined4 uStack_174;
  undefined **local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar6 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar6 != 0) {
    lVar7 = FUN_1403ca142();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      cVar5 = FUN_14662e674(param_1);
      if (cVar5 == '\0') {
        plVar8 = (longlong *)(**(code **)(**(longlong **)(param_3 + 0x100) + 0x38))();
        (**(code **)(*plVar8 + 0x30))(plVar8,&local_178);
        (**(code **)(*plVar8 + 0x10))(plVar8,&local_190);
        FUN_1446f470e(&local_180,L"SHIFT",1);
        if (local_190 != local_180) {
          FUN_145e34e2c(param_3 + 0x28,DAT_14cb977f0,&local_178);
        }
        lVar7 = (**(code **)(*param_1 + 0x2d0))(param_1);
        if ((longlong)*(int *)(lVar7 + 0x40) != 0) {
          lVar10 = 0;
          do {
            lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + lVar10);
            if ((lVar3 != 0) && (iVar11 = -1, *(int *)(lVar3 + 0xe0) == param_2))
            goto LAB_1441c35cb;
            lVar10 = lVar10 + 8;
          } while ((longlong)*(int *)(lVar7 + 0x40) * 8 != lVar10);
        }
        if (param_1[0xb3] == 0) {
LAB_1441c35c0:
          FUN_148d313a4(lVar6);
          iVar11 = param_2;
        }
        else {
          cVar5 = FUN_145dc971a(param_1[0xb3],&local_178);
          iVar11 = -1;
          if (cVar5 == '\0') goto LAB_1441c35c0;
        }
LAB_1441c35cb:
        *(int *)((longlong)param_1 + 0x5c4) = iVar11;
        if (CONCAT44(uStack_174,local_178) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        *(int *)((longlong)param_1 + 0x5c4) = param_2;
        lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x170), lVar6 != 0)) {
          lVar7 = FUN_14592c82e();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            FUN_148d33f12(lVar6);
          }
        }
      }
    }
  }
  local_170 = &PTR_FUN_14b4c3b18;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = &PTR_FUN_14b4c3b20;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = FUN_1414a827a();
  local_f0 = 0;
  local_e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_94 = 0xffffffff00000080;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 9999;
  local_178 = param_2;
  FUN_1461f4a06(&local_170,param_3);
  local_58 = *(undefined4 *)(param_3 + 0x118);
  FUN_14662e6ca(param_1 + 0xb9,&local_178);
  if (((param_1[0xf3] == 0) || (param_1[0xf4] == 0)) || (*(int *)(param_1[0xf4] + 8) < 1)) {
    uVar9 = FUN_1401cb356();
    local_1a0 = (undefined8 *)0x0;
    local_198 = 0;
    FUN_1446efa72(&local_1a0,0,3,0x10);
    puVar4 = local_1a0;
    local_198 = 3;
    *local_1a0 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_1a0[2] = lVar7;
    *local_1a0 = &PTR_FUN_14b98b540;
    local_1a0[3] = 0;
    iVar11 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_1a0 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar11 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar11 = *(int *)(lVar6 + 0x10);
        bVar13 = iVar11 == 0;
        if (bVar13) {
          *(int *)(lVar6 + 0x10) = iVar12;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar11 = iVar12;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar11;
    puVar4[4] = FUN_1416ae12a;
    local_1a8 = 0;
    FUN_1405f67fc(uVar9,&local_190,&local_1a0,L"UOakOnlineSessionClient_TickQueuedJoinRequest");
    param_1[0xf3] = local_190;
    local_190 = 0;
    plVar8 = (longlong *)param_1[0xf4];
    param_1[0xf4] = (longlong)local_188;
    local_188 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      if (local_188 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_188 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_188 + 0x10))();
        }
      }
    }
    if (local_198 != 0) {
      if (local_1a0 == (undefined8 *)0x0) goto LAB_1441c3861;
      (**(code **)*local_1a0)(local_1a0,0);
      FUN_1446efa72(&local_1a0,0,0,0x10);
      local_198 = 0;
    }
    if (local_1a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1441c3861:
  FUN_14124efea(&local_170);
  if ((local_50 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c390c FUN_1441c390c body=1740 status=ok
// SIG undefined FUN_1441c390c(void)

void FUN_1441c390c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  longlong *local_50;
  undefined4 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_2[1] < 2) goto LAB_1441c392c;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  local_50 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_48 = 0;
  iVar1 = (int)param_2[1];
  if (iVar1 == DAT_14cbce490) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar7 = *(ushort *)(*param_2 + lVar4);
        uVar6 = (ulonglong)uVar7;
        uVar9 = *(ushort *)(DAT_14cbce488 + lVar4);
        if (uVar7 != uVar9) break;
        if (uVar7 == 0) goto LAB_1441c3c00;
LAB_1441c39f5:
        lVar4 = lVar4 + 2;
      }
      if ((uVar9 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar8 = (ulonglong)uVar9;
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1441c39f5;
      }
      if (uVar7 != uVar9) goto LAB_1441c3a24;
    }
LAB_1441c3c00:
    local_40 = L"InviteFailed";
    local_38 = 0xc;
    FUN_1446e940c(local_64,&local_40);
    local_40 = L"OakOnlineSessionClient";
    local_38 = 0x16;
    FUN_1446e940c(local_68,&local_40);
    local_40 = L"Unable to join. You cannot join the game session.";
    local_38 = 0x31;
LAB_1441c3e13:
    FUN_140208c1e(local_60,local_68,local_64,&local_40);
    FUN_140008f88(&local_50,local_60);
    if (local_60[0] != (longlong *)0x0) {
      (**(code **)(*local_60[0] + 0x10))();
    }
  }
  else {
    if (DAT_14cbce490 + iVar1 == 1) goto LAB_1441c3c00;
LAB_1441c3a24:
    if (iVar1 == DAT_14cbce4a0) {
      if (1 < iVar1) {
        lVar4 = 0;
        while( true ) {
          uVar7 = *(ushort *)(*param_2 + lVar4);
          uVar6 = (ulonglong)uVar7;
          uVar9 = *(ushort *)(DAT_14cbce498 + lVar4);
          if (uVar7 != uVar9) break;
          if (uVar7 == 0) goto LAB_1441c3c6e;
LAB_1441c3a68:
          lVar4 = lVar4 + 2;
        }
        if ((uVar9 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1441c3a68;
        }
        if (uVar7 != uVar9) goto LAB_1441c3a97;
      }
LAB_1441c3c6e:
      local_40 = L"InviteFailed_NotLoggedIn";
      local_38 = 0x18;
      FUN_1446e940c(local_64,&local_40);
      local_40 = L"OakOnlineSessionClient";
      local_38 = 0x16;
      FUN_1446e940c(local_68,&local_40);
      local_40 = 
      L"This feature requires all active players to be connected to Gearbox Software SHiFT.";
      local_38 = 0x53;
      goto LAB_1441c3e13;
    }
    if (DAT_14cbce4a0 + iVar1 == 1) goto LAB_1441c3c6e;
LAB_1441c3a97:
    if (iVar1 == DAT_14cbce4b0) {
      if (1 < iVar1) {
        lVar4 = 0;
        while( true ) {
          uVar7 = *(ushort *)(*param_2 + lVar4);
          uVar6 = (ulonglong)uVar7;
          uVar9 = *(ushort *)(DAT_14cbce4a8 + lVar4);
          if (uVar7 != uVar9) break;
          if (uVar7 == 0) goto LAB_1441c3cdc;
LAB_1441c3adb:
          lVar4 = lVar4 + 2;
        }
        if ((uVar9 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1441c3adb;
        }
        if (uVar7 != uVar9) goto LAB_1441c3b0a;
      }
LAB_1441c3cdc:
      local_40 = L"InviteFailed_AlreadyInSession";
      local_38 = 0x1d;
      FUN_1446e940c(local_64,&local_40);
      local_40 = L"OakOnlineSessionClient";
      local_38 = 0x16;
      FUN_1446e940c(local_68,&local_40);
      local_40 = L"An active player is already in the game session.";
      local_38 = 0x30;
      goto LAB_1441c3e13;
    }
    if (DAT_14cbce4b0 + iVar1 == 1) goto LAB_1441c3cdc;
LAB_1441c3b0a:
    if (iVar1 == DAT_14cbce4c0) {
      if (1 < iVar1) {
        lVar4 = 0;
        while( true ) {
          uVar7 = *(ushort *)(*param_2 + lVar4);
          uVar6 = (ulonglong)uVar7;
          uVar9 = *(ushort *)(DAT_14cbce4b8 + lVar4);
          if (uVar7 != uVar9) break;
          if (uVar7 == 0) goto LAB_1441c3d4a;
LAB_1441c3b4e:
          lVar4 = lVar4 + 2;
        }
        if ((uVar9 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1441c3b4e;
        }
        if (uVar7 != uVar9) goto LAB_1441c3b7d;
      }
LAB_1441c3d4a:
      local_40 = L"InviteFailed_SessionDoesNotExist";
      local_38 = 0x20;
      FUN_1446e940c(local_64,&local_40);
      local_40 = L"OakOnlineSessionClient";
      local_38 = 0x16;
      FUN_1446e940c(local_68,&local_40);
      local_40 = L"Unable to join. The game session no longer exists.";
      local_38 = 0x32;
      goto LAB_1441c3e13;
    }
    if (DAT_14cbce4c0 + iVar1 == 1) goto LAB_1441c3d4a;
LAB_1441c3b7d:
    if (iVar1 == DAT_14cbce4d0) {
      if (1 < iVar1) {
        lVar4 = 0;
        while( true ) {
          uVar7 = *(ushort *)(*param_2 + lVar4);
          uVar6 = (ulonglong)uVar7;
          uVar9 = *(ushort *)(DAT_14cbce4c8 + lVar4);
          if (uVar7 != uVar9) break;
          if (uVar7 == 0) goto LAB_1441c3db5;
LAB_1441c3bc0:
          lVar4 = lVar4 + 2;
        }
        if ((uVar9 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1441c3bc0;
        }
        if (uVar7 != uVar9) goto LAB_1441c3e46;
      }
LAB_1441c3db5:
      local_40 = L"InviteFailed_NotFullyInstalled";
      local_38 = 0x1e;
      FUN_1446e940c(local_64,&local_40);
      local_40 = L"OakOnlineSessionClient";
      local_38 = 0x16;
      FUN_1446e940c(local_68,&local_40);
      local_40 = L"Unable to use online features; required content has not finished installing.";
      local_38 = 0x4c;
      goto LAB_1441c3e13;
    }
    if (DAT_14cbce4d0 + iVar1 == 1) goto LAB_1441c3db5;
  }
LAB_1441c3e46:
  plVar3 = local_50;
  if (*(code **)(*local_50 + 0x50) != FUN_144828418) {
    plVar3 = (longlong *)(**(code **)(*local_50 + 0x50))();
  }
  FUN_1447a1fc0(plVar3);
  pcVar2 = *(code **)(*local_50 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar3 = local_50 + 3;
    if (local_50[5] != 0) {
      plVar3 = (longlong *)(local_50[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar3 = local_50 + 2;
  }
  else {
    plVar3 = (longlong *)(*pcVar2)(local_50);
  }
  if ((int)plVar3[1] < 2) {
    if ((int)param_2[1] == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    FUN_140002266(local_60,L"BUGME - Could not join invite: %s",puVar5);
    FUN_140233b1a(&local_40,local_60);
    FUN_140008f88(&local_50,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
    if (local_60[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_148d90230(param_1,&local_50);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
LAB_1441c392c:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c3fda FUN_1441c3fda body=525 status=ok
// SIG undefined FUN_1441c3fda(void)

void FUN_1441c3fda(longlong *param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  longlong *local_80 [2];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68 [2];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)((longlong)param_1 + 0x5bc) != param_2) {
    *(char *)((longlong)param_1 + 0x5bc) = param_2;
    if (param_2 == '\0') {
      if ((int)param_1[0xb8] != -1) {
        lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
          lVar2 = FUN_14583d3ae();
          if (lVar2 != 0) {
            FUN_1441bfcba(lVar2,(int)param_1[0xb8]);
          }
        }
        *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
      }
    }
    else if ((int)param_1[0xb8] == -1) {
      lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
        lVar2 = FUN_14583d3ae();
        if (lVar2 != 0) {
          local_58 = L"JoiningPartyMessage";
          local_50 = 0x13;
          FUN_1446e940c(local_6c,&local_58);
          local_58 = L"OakOnlineSessionClient";
          local_50 = 0x16;
          FUN_1446e940c(local_70,&local_58);
          local_58 = L"Please wait...";
          local_50 = 0xe;
          FUN_140208c1e(local_68,local_70,local_6c,&local_58);
          local_58 = L"JoiningPartyHeader";
          local_50 = 0x12;
          FUN_1446e940c(local_84,&local_58);
          local_58 = L"OakOnlineSessionClient";
          local_50 = 0x16;
          FUN_1446e940c(local_88,&local_58);
          local_58 = L"Joining Party";
          local_50 = 0xd;
          FUN_140208c1e(local_80,local_88,local_84,&local_58);
          uVar1 = FUN_1441c1730(lVar2,local_80,local_68);
          *(undefined4 *)(param_1 + 0xb8) = uVar1;
          if (local_80[0] != (longlong *)0x0) {
            (**(code **)(*local_80[0] + 0x10))();
          }
          if (local_68[0] != (longlong *)0x0) {
            (**(code **)(*local_68[0] + 0x10))();
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c41e8 FUN_1441c41e8 body=2163 status=ok
// SIG undefined FUN_1441c41e8(void)

void FUN_1441c41e8(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  size_t sVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auStack_2e8 [42];
  byte local_2be;
  byte local_2bd;
  int local_2bc;
  longlong local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  undefined8 *local_278;
  undefined4 local_270;
  undefined **local_268;
  longlong *local_260;
  longlong *local_258;
  byte local_250;
  void *local_248;
  ulonglong uStack_240;
  undefined1 local_238 [8];
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  ulonglong local_220;
  void *local_218;
  int local_210;
  int local_20c;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  ulonglong local_1f0;
  void *local_1e8;
  int local_1e0;
  int local_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [280];
  undefined4 local_b0;
  undefined **local_a8;
  char local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  uVar15 = (**(code **)(*param_1 + 0x2d0))();
  lVar16 = FUN_14127ae7a(uVar15,param_2);
  if (lVar16 != 0) {
    local_2a8 = param_1 + 0xdf;
    iVar21 = (int)param_1[0xe0];
    lVar27 = (longlong)iVar21;
    local_2b8 = param_3;
    local_2b0 = param_1;
    local_2a0 = param_4;
    if (lVar27 != 0) {
      lVar19 = *local_2a8;
      local_290 = param_2;
      local_288 = lVar16;
      bVar13 = FUN_14127b142(lVar19 + 0x30,param_3);
      local_280 = lVar19 + 0x1d0;
      iVar18 = 0;
      iVar22 = 0;
      local_298 = lVar19;
      do {
        local_2bd = bVar13;
        local_2be = local_2bd ^ 1;
        lVar16 = (longlong)iVar22;
        iVar17 = iVar22 + 1;
        if (iVar22 + 1 < iVar21) {
          iVar17 = iVar21;
        }
        lVar26 = lVar16 * 0x1a0;
        lVar19 = local_280 + lVar26;
        bVar13 = local_2bd & 1;
        iVar23 = iVar22;
        local_2bc = iVar18;
        do {
          lVar16 = lVar16 + 1;
          iVar24 = iVar17;
          if (lVar27 <= lVar16) break;
          bVar14 = FUN_14127b142(lVar19,local_2b8);
          iVar23 = iVar23 + 1;
          lVar19 = lVar19 + 0x1a0;
          iVar24 = iVar23;
        } while (bVar13 == bVar14);
        iVar18 = local_2bc;
        iVar17 = iVar24 - iVar22;
        if ((local_2bd & 1) == 0) {
          if (local_2bc != iVar22) {
            memmove((void *)((longlong)local_2bc * 0x1a0 + local_298),(void *)(lVar26 + local_298),
                    (longlong)iVar17 * 0x1a0);
          }
          iVar18 = iVar18 + iVar17;
        }
        else {
          FUN_140b6c454(lVar26 + local_298,iVar17);
          iVar18 = local_2bc;
        }
        iVar22 = iVar24;
        bVar13 = local_2be;
      } while (lVar16 < lVar27);
      *(int *)(local_2b0 + 0xe0) = iVar18;
      lVar16 = local_288;
      param_2 = local_290;
    }
    FUN_148d93a52(local_238);
    uVar8 = local_220;
    lVar27 = local_2a0;
    plVar25 = *(longlong **)(param_2 + 0x10);
    if (plVar25 == (longlong *)0x0) {
      plVar25 = (longlong *)0x0;
    }
    else {
      iVar21 = (int)plVar25[1];
      do {
        if (iVar21 == 0) {
          plVar25 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar18 = (int)plVar25[1];
        bVar28 = iVar21 == iVar18;
        if (bVar28) {
          *(int *)(plVar25 + 1) = iVar21 + 1;
          iVar18 = iVar21;
        }
        iVar21 = iVar18;
        UNLOCK();
      } while (!bVar28);
    }
    if (plVar25 == (longlong *)0x0) {
      local_260 = (longlong *)0x0;
      uStack_70 = (longlong *)0x0;
    }
    else {
      local_260 = *(longlong **)(param_2 + 8);
      LOCK();
      *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
      UNLOCK();
      uStack_70 = plVar25;
    }
    local_250 = 0;
    local_268 = &PTR_FUN_14a5af930;
    local_248 = (void *)0x0;
    uStack_240 = 0;
    local_88 = local_88 & 0xffffffffffffff00;
    uVar12 = local_88;
    if (uStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_70 + 1) = (int)uStack_70[1] + 1;
      UNLOCK();
    }
    local_68 = local_88;
    local_98._0_4_ = SUB84(local_260,0);
    local_98._4_4_ = (undefined4)((ulonglong)local_260 >> 0x20);
    uStack_90._0_4_ = SUB84(uStack_70,0);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_88 = local_220;
    local_230 = (undefined4)local_98;
    uStack_22c = local_98._4_4_;
    uStack_228 = (undefined4)uStack_90;
    uStack_224 = uStack_90._4_4_;
    local_220 = uVar12;
    local_258 = plVar25;
    local_78 = local_260;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar8 & 0xff])();
    pvVar7 = local_248;
    iVar21 = (int)uStack_240;
    sVar20 = (size_t)(int)uStack_240;
    local_210 = (int)uStack_240;
    if ((int)uStack_240 == 0 && local_20c == 0) {
      local_20c = 0;
    }
    else {
      FUN_1447a127e(&local_218,uStack_240 & 0xffffffff);
      if (iVar21 != 0) {
        memcpy(local_218,pvVar7,sVar20);
      }
    }
    local_268 = &PTR_FUN_14a5af930;
    if (local_248 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_268 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_250])(&local_260);
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
    uVar8 = local_1f0;
    plVar25 = *(longlong **)(local_2b8 + 0x10);
    if (plVar25 == (longlong *)0x0) {
LAB_1441c458f:
      plVar25 = (longlong *)0x0;
    }
    else {
      iVar21 = (int)plVar25[1];
      do {
        if (iVar21 == 0) goto LAB_1441c458f;
        LOCK();
        iVar18 = (int)plVar25[1];
        bVar28 = iVar21 == iVar18;
        if (bVar28) {
          *(int *)(plVar25 + 1) = iVar21 + 1;
          iVar18 = iVar21;
        }
        iVar21 = iVar18;
        UNLOCK();
      } while (!bVar28);
    }
    if (plVar25 == (longlong *)0x0) {
      local_260 = (longlong *)0x0;
      uStack_70 = (longlong *)0x0;
    }
    else {
      local_260 = *(longlong **)(local_2b8 + 8);
      LOCK();
      *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
      UNLOCK();
      uStack_70 = plVar25;
    }
    local_250 = 0;
    local_268 = &PTR_FUN_14a5af930;
    local_248 = (void *)0x0;
    uStack_240 = 0;
    local_88 = local_88 & 0xffffffffffffff00;
    uVar12 = local_88;
    if (uStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_70 + 1) = (int)uStack_70[1] + 1;
      UNLOCK();
    }
    local_68 = local_88;
    local_98._0_4_ = SUB84(local_260,0);
    uVar4 = (undefined4)local_98;
    local_98._4_4_ = (undefined4)((ulonglong)local_260 >> 0x20);
    uVar9 = local_98._4_4_;
    uStack_90._0_4_ = SUB84(uStack_70,0);
    uVar10 = (undefined4)uStack_90;
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uVar11 = uStack_90._4_4_;
    local_88 = local_1f0;
    local_98 = CONCAT44(uStack_1fc,local_200);
    uStack_90 = CONCAT44(uStack_1f4,uStack_1f8);
    local_200 = uVar4;
    uStack_1fc = uVar9;
    uStack_1f8 = uVar10;
    uStack_1f4 = uVar11;
    local_1f0 = uVar12;
    local_258 = plVar25;
    local_78 = local_260;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar8 & 0xff])();
    pvVar7 = local_248;
    iVar21 = (int)uStack_240;
    sVar20 = (size_t)(int)uStack_240;
    local_1e0 = (int)uStack_240;
    if ((int)uStack_240 == 0 && local_1dc == 0) {
      local_1dc = 0;
    }
    else {
      FUN_1447a127e(&local_1e8,uStack_240 & 0xffffffff);
      if (iVar21 != 0) {
        memcpy(local_1e8,pvVar7,sVar20);
      }
    }
    if (local_248 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_268 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_250])(&local_260);
    lVar19 = local_2b8;
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
    FUN_1461f4a06(local_1c8,lVar27);
    local_b0 = *(undefined4 *)(lVar27 + 0x118);
    FUN_1402160b8(&local_268);
    local_a8 = local_268;
    uVar15 = FUN_140b6de3c();
    FUN_140b6df48(uVar15,&local_268,lVar16,lVar19);
    if (local_268 == (undefined **)0x0) {
      local_a0 = '\x01';
      uVar15 = FUN_140b6de3c();
      uVar4 = *(undefined4 *)(lVar16 + 0xe0);
      local_278 = (undefined8 *)0x0;
      local_270 = 0;
      FUN_1446efa72(&local_278,0,3,0x10);
      puVar6 = local_278;
      plVar25 = local_2b0;
      local_270 = 3;
      *local_278 = &PTR_LAB_14b98b3f0;
      *(undefined4 *)(local_278 + 1) = uVar4;
      LOCK();
      UNLOCK();
      lVar26 = DAT_14c758608 + 1;
      lVar27 = DAT_14c758608 + 1;
      if (lVar26 == 0) {
        LOCK();
        UNLOCK();
        lVar26 = DAT_14c758608 + 2;
        lVar27 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar27;
      local_278[2] = lVar26;
      *local_278 = &PTR_FUN_14b98b380;
      local_278[3] = 0;
      iVar21 = 0;
      if (local_2b0 != (longlong *)0x0) {
        uVar5 = *(uint *)((longlong)local_2b0 + 0xc);
        *(uint *)(local_278 + 3) = uVar5;
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar27 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
        }
        else {
          lVar27 = 0;
        }
        iVar21 = *(int *)(lVar27 + 0x10);
        if (*(int *)(lVar27 + 0x10) == 0) {
          LOCK();
          iVar21 = DAT_14c964868 + 1;
          UNLOCK();
          iVar18 = DAT_14c964868 + 1;
          bVar28 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar21;
          if (bVar28) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar18);
          }
          LOCK();
          iVar21 = *(int *)(lVar27 + 0x10);
          bVar28 = iVar21 == 0;
          if (bVar28) {
            *(int *)(lVar27 + 0x10) = iVar18;
            iVar21 = 0;
          }
          UNLOCK();
          if (bVar28) {
            iVar21 = iVar18;
          }
        }
      }
      *(int *)((longlong)puVar6 + 0x1c) = iVar21;
      puVar6[4] = FUN_1441c4a5c;
      uStack_70 = *(longlong **)(lVar19 + 0x10);
      if (uStack_70 == (longlong *)0x0) {
        uStack_70 = (longlong *)0x0;
      }
      else {
        iVar21 = (int)uStack_70[1];
        do {
          if (iVar21 == 0) {
            uStack_70 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar18 = (int)uStack_70[1];
          bVar28 = iVar21 == iVar18;
          if (bVar28) {
            *(int *)(uStack_70 + 1) = iVar21 + 1;
            iVar18 = iVar21;
          }
          iVar21 = iVar18;
          UNLOCK();
        } while (!bVar28);
      }
      local_78 = (longlong *)0x0;
      if (uStack_70 != (longlong *)0x0) {
        local_78 = *(longlong **)(lVar19 + 8);
      }
      FUN_141335bfe(uVar15,lVar16,&local_78,&local_278);
      plVar1 = uStack_70;
      if (uStack_70 != (longlong *)0x0) {
        LOCK();
        plVar3 = uStack_70 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*uStack_70)(uStack_70);
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
    else {
      local_98 = 0;
      uStack_90 = 0;
      (**(code **)(*local_268 + 0x18))(local_268,&local_78);
      plVar25 = local_2b0;
      if (CONCAT44(uStack_1d4,local_1d8) != 0) {
        FUN_1400020a8();
      }
      local_1d8 = (undefined4)local_78;
      uStack_1d4 = local_78._4_4_;
      iStack_1d0 = (int)uStack_70;
      uStack_1cc = uStack_70._4_4_;
      local_78 = (longlong *)0x0;
      uStack_70 = (longlong *)0x0;
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
    if ((1 < iStack_1d0) || (local_a0 == '\x01')) {
      iVar21 = (int)plVar25[0xe0];
      *(uint *)(plVar25 + 0xe0) = iVar21 + 1U;
      if (*(uint *)((longlong)plVar25 + 0x704) < iVar21 + 1U) {
        FUN_148da0806(local_2a8,iVar21);
      }
      FUN_148da0712((longlong)iVar21 * 0x1a0 + plVar25[0xdf],local_238);
      FUN_148d93ae8(plVar25);
      if (1 < iStack_1d0) {
        FUN_1441c4c58(plVar25,local_238,*(undefined4 *)(lVar16 + 0xe0));
      }
    }
    plVar25 = local_260;
    if (local_260 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_260 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar2 = (int *)((longlong)plVar25 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
        }
      }
    }
    FUN_148c5ce08(local_238);
  }
  if ((local_60 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c4a5c FUN_1441c4a5c body=506 status=ok
// SIG undefined FUN_1441c4a5c(void)

void FUN_1441c4a5c(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 local_60;
  longlong local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(param_1 + 0x700);
  local_98 = param_1;
  local_8c = param_4;
  local_80 = param_3;
  if ((longlong)iVar1 != 0) {
    local_88 = (longlong *)(param_1 + 0x6f8);
    lVar2 = *(longlong *)(param_1 + 0x6f8);
    lVar6 = 0;
    do {
      local_68 = &PTR_FUN_14a184370;
      local_60 = *param_2;
      local_58 = param_2[1];
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
      }
      local_50 = 0;
      cVar5 = FUN_140ba41f1(lVar2 + 0x30 + lVar6,&local_68);
      local_68 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
      plVar4 = local_88;
      if (cVar5 != '\0') {
        uVar8 = (lVar6 >> 5) * 0x4ec4ec4ec4ec4ec5;
        uVar7 = (uint)uVar8;
        if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(local_98 + 0x700))) {
          lVar6 = (ulonglong)(uVar7 & 0x7fffffff) * 0x1a0;
          lVar2 = *local_88 + lVar6;
          *(undefined1 *)(*local_88 + 0x198 + lVar6) = 0;
          plVar3 = (longlong *)*local_80;
          if (plVar3 != (longlong *)0x0) {
            local_78 = 0;
            uStack_70 = 0;
            (**(code **)(*plVar3 + 0x18))(plVar3,&local_68);
            if ((undefined ***)(lVar2 + 0x60) == &local_68) {
              if (local_68 != (undefined **)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(lVar2 + 0x60) != 0) {
                FUN_1400020a8();
              }
              *(undefined ***)(lVar2 + 0x60) = local_68;
              local_68 = (undefined **)0x0;
              *(undefined4 *)(lVar2 + 0x68) = (undefined4)local_60;
              *(undefined4 *)(lVar2 + 0x6c) = local_60._4_4_;
              local_60 = 0;
            }
            if (local_78 != 0) {
              FUN_1400020a8();
            }
          }
          if (*(int *)(lVar2 + 0x68) < 2) {
            FUN_148d93ce0(plVar4,uVar8 & 0xffffffff);
          }
          else {
            FUN_1441c4c58(local_98,lVar2,local_8c);
          }
        }
        break;
      }
      lVar6 = lVar6 + 0x1a0;
    } while ((longlong)iVar1 * 0x1a0 - lVar6 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c4c58 FUN_1441c4c58 body=483 status=ok
// SIG undefined FUN_1441c4c58(void)

void FUN_1441c4c58(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  longlong local_60 [2];
  longlong local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2d0))();
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_1403ca142();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      bVar2 = (**(code **)(*plVar4 + 0x498))(plVar4);
      if (bVar2 < 5) goto LAB_1441c4cd9;
    }
  }
  lVar5 = param_2 + 0x30;
  uVar6 = FUN_14127b0d4(lVar5);
  cVar3 = FUN_140b6cfe6(param_1,uVar6);
  if (cVar3 != '\0') {
    FUN_140b6e8c2(lVar5,&local_40);
    FUN_140b6e92a(local_50,local_40);
    FUN_1408e4d18(lVar5,&local_70);
    FUN_140b6e028(local_60,param_2 + 0x60,&local_70,1);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_68 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
    FUN_145d1c6f4(local_50,local_60);
    FUN_1446f470e(&local_70,L"session_invite_received",1);
    FUN_148d901d8(param_1,&local_70,local_60);
    lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x1f0) != 0)) {
      lVar7 = FUN_14094c9c2();
      if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x30), lVar7 != 0)) {
        FUN_1405e6804(lVar5,&local_70);
        FUN_148da8304(lVar7,param_3,&local_70);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
    }
    *(undefined1 *)(param_2 + 0x199) = 1;
    FUN_148da0946(param_1 + 0x9d,param_2);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_1441c4cd9:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c4e3c FUN_1441c4e3c body=296 status=ok
// SIG undefined FUN_1441c4e3c(void)

undefined4 FUN_1441c4e3c(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)*param_1;
  FUN_1408e4d18(param_2,&local_30);
  if (local_30 == (longlong *)0x0) {
    uVar3 = 0xffffffff;
    goto LAB_1441c4f1e;
  }
  (**(code **)(*local_30 + 0x10))(local_30,&local_50);
  (**(code **)(*plVar4 + 0x180))(plVar4);
  local_20 = local_50;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
LAB_1441c4ef2:
    uVar3 = 0xffffffff;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_48);
    plVar4 = local_48;
    if (local_48 == (longlong *)0x0) goto LAB_1441c4ef2;
    (**(code **)(*local_48 + 0x178))(local_48,&local_54,local_30);
    uVar3 = (**(code **)(*plVar4 + 0x188))(plVar4,local_54);
  }
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_1441c4f1e:
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c4f66 FUN_1441c4f66 body=1384 status=ok
// SIG undefined FUN_1441c4f66(void)

void FUN_1441c4f66(longlong *****param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong ****pppplVar3;
  longlong *****ppppplVar4;
  longlong *****ppppplVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong ******pppppplVar10;
  longlong *****ppppplVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_108 [32];
  longlong *****local_e8;
  undefined4 local_e0;
  undefined1 local_d8;
  longlong *****local_c8;
  longlong *****local_c0;
  longlong *****local_b8;
  longlong ****local_b0;
  longlong *****local_a8;
  longlong *****local_a0;
  longlong *****local_98;
  undefined8 uStack_90;
  undefined1 local_84 [4];
  longlong *****local_80;
  longlong *****local_78;
  undefined1 local_6c [4];
  longlong *****local_68;
  longlong *****ppppplStack_60;
  longlong *****local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar9 = (*(code *)(*param_1)[0x30])();
  if (((lVar9 == 0) || (lVar9 = FUN_1400f6f32(lVar9), lVar9 == 0)) ||
     (lVar9 = *(longlong *)(lVar9 + 0x68), lVar9 == 0)) goto LAB_1441c50dc;
  FUN_1408e4d18(param_2 + 0x3a0,&local_80);
  local_68 = (longlong *****)&PTR_FUN_14a184370;
  ppppplStack_60 = local_80;
  local_58 = local_78;
  if ((longlong ******)local_78 != (longlong ******)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = *(int *)(local_78 + 1) + 1;
    UNLOCK();
  }
  local_50 = 0;
  FUN_140b6e764(lVar9,local_84,&local_68);
  local_68 = (longlong *****)&PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&ppppplStack_60);
  iVar7 = FUN_1402d8968(lVar9,local_84);
  ppppplVar4 = local_78;
  if (iVar7 == 0xb) {
    local_68 = (longlong *****)0x0;
    ppppplStack_60 = (longlong *****)0x0;
    local_98 = (longlong *****)0x0;
    uStack_90 = 0;
    cVar6 = FUN_141179052(param_2,&local_68,&local_98,&local_80);
    if (cVar6 != '\0') {
      FUN_145d1c6f4(&local_98,&local_68);
      FUN_14622ea14(param_1,param_2,&local_68);
      local_a8 = local_80;
      local_a0 = local_78;
      if ((longlong ******)local_78 != (longlong ******)0x0) {
        LOCK();
        *(int *)(local_78 + 1) = *(int *)(local_78 + 1) + 1;
        UNLOCK();
      }
      FUN_14662f1ea(param_1 + 0x100,&local_a8);
      ppppplVar4 = local_a0;
      if ((longlong ******)local_a0 != (longlong ******)0x0) {
        LOCK();
        pppppplVar10 = (longlong ******)(local_a0 + 1);
        *(int *)pppppplVar10 = *(int *)pppppplVar10 + -1;
        UNLOCK();
        if (*(int *)pppppplVar10 == 0) {
          (*(code *)**local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)ppppplVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*ppppplVar4)[2])(ppppplVar4);
          }
        }
      }
    }
    pppppplVar10 = (longlong ******)local_68;
    if ((longlong ******)local_98 != (longlong ******)0x0) {
      FUN_1400020a8();
      pppppplVar10 = (longlong ******)local_68;
    }
LAB_1441c5095:
    if (pppppplVar10 != (longlong ******)0x0) {
      FUN_1400020a8();
    }
  }
  else if ((longlong ******)local_80 != (longlong ******)0x0) {
    if ((longlong ******)local_78 == (longlong ******)0x0) {
      ppppplStack_60 = (longlong *****)0x0;
    }
    else {
      LOCK();
      *(int *)(local_78 + 1) = *(int *)(local_78 + 1) + 1;
      UNLOCK();
      ppppplStack_60 = local_78;
      LOCK();
      *(int *)(local_78 + 1) = *(int *)(local_78 + 1) + 1;
      UNLOCK();
    }
    local_68 = local_80;
    uVar8 = (*(code *)(*local_80)[8])();
    iVar7 = FUN_1460361b4(param_1 + 0xf6,uVar8,&local_68);
    ppppplVar5 = ppppplStack_60;
    if ((longlong ******)ppppplStack_60 != (longlong ******)0x0) {
      LOCK();
      pppppplVar10 = (longlong ******)(ppppplStack_60 + 1);
      *(int *)pppppplVar10 = *(int *)pppppplVar10 + -1;
      UNLOCK();
      if (*(int *)pppppplVar10 == 0) {
        (*(code *)**ppppplStack_60)(ppppplStack_60);
        LOCK();
        piVar1 = (int *)((longlong)ppppplVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*ppppplVar5)[2])(ppppplVar5);
        }
      }
    }
    if ((longlong ******)ppppplVar4 != (longlong ******)0x0) {
      LOCK();
      pppppplVar10 = (longlong ******)(ppppplVar4 + 1);
      *(int *)pppppplVar10 = *(int *)pppppplVar10 + -1;
      UNLOCK();
      if (*(int *)pppppplVar10 == 0) {
        (*(code *)**ppppplVar4)(ppppplVar4);
        LOCK();
        piVar1 = (int *)((longlong)ppppplVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*ppppplVar4)[2])(ppppplVar4);
        }
      }
    }
    if (iVar7 == -1) {
      FUN_140056680(&local_98,L"WaitingForConnectedPlayerIdentity");
      ppppplVar4 = local_78;
      local_c8 = local_80;
      if ((longlong ******)local_78 != (longlong ******)0x0) {
        LOCK();
        *(int *)(local_78 + 1) = *(int *)(local_78 + 1) + 1;
        UNLOCK();
      }
      local_a8 = (longlong *****)0x0;
      local_a0 = (longlong *****)((ulonglong)local_a0 & 0xffffffff00000000);
      FUN_1446efa72(&local_a8,0,4,0x10);
      ppppplVar5 = local_a8;
      local_a0 = (longlong *****)CONCAT44(local_a0._4_4_,4);
      *local_a8 = (longlong ****)&PTR_LAB_14b3e9ca0;
      LOCK();
      UNLOCK();
      ppppplVar11 = (longlong *****)(DAT_14c758608 + 1);
      lVar13 = DAT_14c758608 + 1;
      if (ppppplVar11 == (longlong *****)0x0) {
        LOCK();
        UNLOCK();
        ppppplVar11 = (longlong *****)(DAT_14c758608 + 2);
        lVar13 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar13;
      local_a8[2] = (longlong ****)ppppplVar11;
      *local_a8 = (longlong ****)&PTR_FUN_14b98b460;
      local_a8[3] = (longlong ****)0x0;
      iVar7 = 0;
      if (param_1 != (longlong *****)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_a8 + 3) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar13 = 0;
        }
        iVar7 = *(int *)(lVar13 + 0x10);
        if (*(int *)(lVar13 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar7 = *(int *)(lVar13 + 0x10);
          bVar14 = iVar7 == 0;
          if (bVar14) {
            *(int *)(lVar13 + 0x10) = iVar12;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar7 = iVar12;
          }
        }
      }
      *(int *)((longlong)ppppplVar5 + 0x1c) = iVar7;
      ppppplVar5[4] = (longlong ****)param_1;
      ppppplVar5[5] = (longlong ****)local_c8;
      ppppplVar5[6] = (longlong ****)ppppplVar4;
      local_e8 = (longlong *****)&local_98;
      local_d8 = 1;
      local_e0 = 0x8000000;
      FUN_1413d987a(lVar9,&local_b0,local_84,&local_a8);
      local_c0 = local_80;
      local_b8 = local_78;
      if ((longlong ******)local_78 != (longlong ******)0x0) {
        LOCK();
        *(int *)(local_78 + 1) = *(int *)(local_78 + 1) + 1;
        UNLOCK();
      }
      local_68 = (longlong *****)&local_c0;
      ppppplStack_60 = &local_b0;
      FUN_146065cec(param_1 + 0xf6,local_6c,&local_68,0);
      ppppplVar4 = local_b8;
      if ((longlong ******)local_b8 != (longlong ******)0x0) {
        LOCK();
        pppppplVar10 = (longlong ******)(local_b8 + 1);
        *(int *)pppppplVar10 = *(int *)pppppplVar10 + -1;
        UNLOCK();
        if (*(int *)pppppplVar10 == 0) {
          (*(code *)**local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)ppppplVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*ppppplVar4)[2])(ppppplVar4);
          }
        }
      }
      if ((int)local_a0 != 0) {
        pppppplVar10 = (longlong ******)local_98;
        if ((longlong ******)local_a8 == (longlong ******)0x0) goto LAB_1441c5095;
        (*(code *)**local_a8)(local_a8,0);
        FUN_1446efa72(&local_a8,0,0,0x10);
        local_a0 = (longlong *****)((ulonglong)local_a0 & 0xffffffff00000000);
      }
      pppppplVar10 = (longlong ******)local_98;
      if ((longlong ******)local_a8 != (longlong ******)0x0) {
        FUN_1400020a8();
        pppppplVar10 = (longlong ******)local_98;
      }
      goto LAB_1441c5095;
    }
  }
  if ((longlong ******)local_78 != (longlong ******)0x0) {
    LOCK();
    pppppplVar10 = (longlong ******)(local_78 + 1);
    *(int *)pppppplVar10 = *(int *)pppppplVar10 + -1;
    UNLOCK();
    if (*(int *)pppppplVar10 == 0) {
      (*(code *)**local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*local_78)[2])(local_78);
      }
    }
  }
LAB_1441c50dc:
  pppplVar3 = param_1[0xb3];
  if (pppplVar3 != (longlong ****)0x0) {
    (*(code *)(*pppplVar3)[1])(pppplVar3,param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c54de FUN_1441c54de body=375 status=ok
// SIG undefined FUN_1441c54de(void)

longlong * FUN_1441c54de(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar2 = (undefined8 *)*param_1;
  *puVar2 = &PTR_LAB_14b4e4ea0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar2[2] = lVar3;
  *puVar2 = &PTR_FUN_14b98b4d0;
  puVar2[3] = 0;
  iVar4 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(puVar2 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar4 = iVar5;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar4;
  puVar2[4] = *param_3;
  puVar2[5] = 0;
  puVar2[5] = param_3[1];
  param_3[1] = 0;
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)((longlong)param_3 + 0x14);
  param_3[2] = 0;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  puVar2[7] = param_3[3];
  param_3[3] = 0;
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_3 + 4) = 0;
  return param_1;
}



// FUNCTION 1441c5656 FUN_1441c5656 body=1604 status=ok
// SIG undefined FUN_1441c5656(void)

undefined8 *
FUN_1441c5656(longlong *param_1,undefined8 *param_2,undefined4 param_3,longlong param_4)

{
  ulonglong uVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_228 [40];
  longlong *local_200;
  longlong *local_1f8;
  undefined8 *local_1f0;
  longlong local_1e8 [2];
  longlong local_1d8 [2];
  longlong local_1c8 [6];
  longlong *local_198;
  undefined **local_190 [5];
  byte local_168;
  longlong *local_138;
  longlong local_118;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 local_bc [4];
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_e8 = 0;
  uStack_e0 = 0;
  local_1f0 = param_2;
  memset(local_190,0,0x90);
  FUN_144869430(local_190);
  local_100 = 0;
  local_190[0] = &PTR_FUN_149e1e590;
  local_f0 = 0;
  local_168 = local_168 | 4;
  local_f8 = &local_e8;
  FUN_1449c2eca(local_190,0);
  local_190[0] = &PTR_FUN_149e1e330;
  plVar6 = (longlong *)FUN_140a68038(1);
  if (plVar6 == (longlong *)0x0) {
    local_b8 = (longlong *)0x0;
    plStack_b0 = (longlong *)0x0;
LAB_1441c5730:
    local_1f8 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x80))(plVar6,&local_b8);
    if (local_b8 == (longlong *)0x0) goto LAB_1441c5730;
    (**(code **)(*local_b8 + 0x110))(local_b8,&local_d0,param_3);
    local_1f8 = local_c8;
    plVar6 = local_d0;
  }
  plVar7 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_b0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_1446f470e(&local_198,L"SHIFT",1);
  (**(code **)(*param_1 + 0x180))(param_1);
  local_d0 = local_198;
  plVar7 = (longlong *)FUN_1401e3228();
  if (plVar7 == (longlong *)0x0) {
    local_b8 = (longlong *)0x0;
    plStack_b0 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar7 + 0x80))(plVar7,&local_b8);
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_b8 + 0x110))(local_b8,&local_d0,param_3);
      local_200 = local_c8;
      plVar7 = local_d0;
      goto LAB_1441c582f;
    }
  }
  local_200 = (longlong *)0x0;
  plVar7 = (longlong *)0x0;
LAB_1441c582f:
  plVar8 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_b0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = (longlong *)(**(code **)(**(longlong **)(param_4 + 0x100) + 0x38))();
  (**(code **)(*plVar8 + 0x30))(plVar8,local_1c8 + 4);
  FUN_14021219d(local_190,local_1c8 + 4);
  if (plVar6 == (longlong *)0x0) {
    local_1c8[2] = 0;
    local_1c8[3] = 0;
  }
  else {
    (**(code **)(*plVar6 + 0x30))(plVar6,local_1c8 + 2);
  }
  FUN_14021219d(local_190,local_1c8 + 2);
  if (plVar7 == (longlong *)0x0) {
    local_1c8[0] = 0;
    local_1c8[1] = 0;
  }
  else {
    (**(code **)(*plVar7 + 0x30))(plVar7,local_1c8);
  }
  FUN_14021219d(local_190,local_1c8);
  uVar18 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = (longlong *)0x0;
  plStack_b0 = (longlong *)0x0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  iVar5 = *(int *)(param_4 + 0x88);
  uVar16 = 1;
  iVar15 = 0;
  iVar9 = 0;
  if (iVar5 != 0) {
    puVar13 = *(uint **)(param_4 + 0x80);
    if (*(uint **)(param_4 + 0x80) == (uint *)0x0) {
      puVar13 = (uint *)(param_4 + 0x70);
    }
    uVar19 = *puVar13;
    if (uVar19 == 0) {
      iVar9 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar9 = iVar5 + -1;
      }
      uVar18 = 0;
      uVar16 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar16 = uVar18;
      }
      iVar15 = 0;
      do {
        if (uVar16 == uVar18) goto LAB_1441c5af2;
        iVar15 = iVar15 + 0x20;
        uVar19 = puVar13[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar18 = 0;
    }
    uVar16 = (ulonglong)(-uVar19 & uVar19);
    uVar1 = uVar16 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar9 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar9) {
      iVar9 = iVar5;
    }
  }
  if (iVar9 < iVar5) {
    uVar19 = 0xffffffff;
    do {
      if (*(char *)(*(longlong *)(param_4 + 0x60) + 0x28 + (longlong)iVar9 * 0x38) == '\0') {
        lVar17 = *(longlong *)(param_4 + 0x60) + (longlong)iVar9 * 0x38;
        FUN_140b74056(lVar17 + 8,local_1d8);
        FUN_1400021e4(lVar17,local_1e8);
        local_d0 = local_1e8;
        local_c8 = local_1d8;
        FUN_1411f1c38(&local_b8,local_bc,&local_d0,0);
        if (local_1e8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_1d8[0] != 0) {
          FUN_1400020a8();
        }
        iVar5 = *(int *)(param_4 + 0x88);
      }
      uVar19 = uVar19 & ~(uint)uVar16;
      puVar13 = *(uint **)(param_4 + 0x80);
      if (*(uint **)(param_4 + 0x80) == (uint *)0x0) {
        puVar13 = (uint *)(param_4 + 0x70);
      }
      iVar9 = (int)uVar18;
      lVar17 = (longlong)iVar9;
      uVar10 = puVar13[lVar17] & uVar19;
      if (uVar10 == 0) {
        iVar11 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar11 = iVar5 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar9) {
          iVar12 = iVar9;
        }
        if (iVar11 <= iVar9) break;
        lVar14 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar10 = puVar13[lVar17 + lVar14 + 1];
          if (uVar10 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar12 - lVar17 == lVar14) goto LAB_1441c5af2;
        }
        uVar18 = (ulonglong)(iVar9 + (int)lVar14 + 1);
        uVar19 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar10 & uVar10);
      uVar1 = uVar16 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar9 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_1441c5af2:
  FUN_147d11f74(local_190,&local_b8);
  puVar4 = local_1f0;
  if ((int)uStack_e0 < 1) {
    *local_1f0 = 0;
    local_1f0[1] = 0;
  }
  else {
    FUN_146802950(local_1f0,&local_e8,0);
  }
  plVar7 = local_1f8;
  plVar6 = local_200;
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_b8);
  if (local_1c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1c8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_1c8[4] != 0) {
    FUN_1400020a8();
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar6 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  local_190[0] = &PTR__purecall_149e35f70;
  if (local_138 != (longlong *)0x0) {
    if (*local_138 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_138);
  }
  if (local_118 != 0) {
    if (*(longlong *)(local_118 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_118);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c5c9c FUN_1441c5c9c body=151 status=ok
// SIG undefined FUN_1441c5c9c(void)

void FUN_1441c5c9c(longlong *param_1)

{
  longlong lVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x344) = 0;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_140e5f22c();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_1441de86e();
    }
  }
  if ((char)param_1[0xe5] == '\x01') {
    *(undefined1 *)(param_1 + 0xe5) = 0;
    FUN_145e0eb76(param_1,&DAT_14cbce478);
  }
  *(undefined1 *)(param_1 + 0x106) = 0;
  if ((char)param_1[0xf5] == '\x01') {
    *(undefined1 *)(param_1 + 0xf5) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001441c5d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x348))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1441c5d34 FUN_1441c5d34 body=212 status=ok
// SIG undefined FUN_1441c5d34(void)

void FUN_1441c5d34(undefined8 param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1441c6c4a(local_28);
  plVar2 = local_28[0];
  if (*(code **)(*local_28[0] + 0x50) != FUN_144828418) {
    plVar2 = (longlong *)(**(code **)(*local_28[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar2);
  pcVar1 = *(code **)(*local_28[0] + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar2 = local_28[0] + 3;
    if (local_28[0][5] != 0) {
      plVar2 = (longlong *)(local_28[0][5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar2 = local_28[0] + 2;
  }
  else {
    plVar2 = (longlong *)(*pcVar1)(local_28[0]);
  }
  if (1 < (int)plVar2[1]) {
    FUN_148d90230(param_1,local_28);
  }
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c5e0a FUN_1441c5e0a body=585 status=ok
// SIG undefined FUN_1441c5e0a(void)

void FUN_1441c5e0a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  code *local_58;
  undefined4 local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar5 = *(longlong **)(param_1 + 0x20);
  cVar4 = (**(code **)(*plVar5 + 0x358))(plVar5);
  if (cVar4 == '\0') {
    FUN_1441c390c(plVar5,&DAT_14cbce4c8);
    *(undefined1 *)(param_1 + 0x18) = 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
  }
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x38))();
    (**(code **)(*plVar5 + 0x10))(plVar5,local_48);
    FUN_1446f470e(&local_60,L"SHIFT",1);
    if (local_48[0] == local_60) {
      FUN_1441c6068(param_1);
      goto LAB_1441c5e8c;
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x20);
  lVar1 = param_1 + 0x158;
  cVar4 = FUN_145e34e2c(param_1 + 0x60,DAT_14cb977f0,lVar1);
  if ((cVar4 == '\0') || (*(int *)(param_1 + 0x160) < 2)) {
LAB_1441c5f99:
    puVar9 = &DAT_14cbce488;
LAB_1441c5fa0:
    FUN_1441c390c(plVar5,puVar9);
  }
  else {
    lVar6 = (**(code **)(*plVar5 + 0x180))(plVar5);
    if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x1f0) == 0)) goto LAB_1441c5f99;
    lVar6 = FUN_14116599c();
    if (lVar6 == 0) goto LAB_1441c5f99;
    iVar2 = *(int *)(param_1 + 0x30);
    lVar7 = (**(code **)(*plVar5 + 0x2d0))(plVar5);
    if ((longlong)*(int *)(lVar7 + 0x40) != 0) {
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + lVar8);
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0xe0) == iVar2)) {
          if (plVar5[0xb3] != 0) {
            cVar4 = FUN_145dc971a(plVar5[0xb3],lVar1);
            if (cVar4 != '\0') {
              puVar9 = &DAT_14cbce4a8;
              goto LAB_1441c5fa0;
            }
          }
          cVar4 = FUN_148a7d908(lVar6,*(undefined4 *)(param_1 + 0x30));
          if (cVar4 == '\0') {
            local_58 = FUN_1441c6458;
            local_50 = 0;
            FUN_148d94a7a(local_48,param_1);
            FUN_143f2a136(lVar6,*(undefined4 *)(param_1 + 0x30),0,local_48);
          }
          else {
            FUN_1441c64ce(param_1);
          }
          goto LAB_1441c5e8c;
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)*(int *)(lVar7 + 0x40) * 8 != lVar8);
    }
    if (plVar5[0xb3] == 0) {
LAB_1441c5f90:
      puVar9 = &DAT_14cbce498;
      goto LAB_1441c5fa0;
    }
    cVar4 = FUN_145dc971a(plVar5[0xb3],lVar1);
    if (cVar4 == '\0') goto LAB_1441c5f90;
    local_48[0] = 0;
    local_48[1] = 0;
    FUN_143f287d4(lVar6,*(undefined4 *)(param_1 + 0x30),1);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  FUN_1441c3fda(*(undefined8 *)(param_1 + 0x20),0);
LAB_1441c5e8c:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c6068 FUN_1441c6068 body=1006 status=ok
// SIG undefined FUN_1441c6068(void)

void FUN_1441c6068(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 *local_80;
  longlong local_78;
  ulonglong uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar10 = param_1 + 0x38;
  FUN_14662e71e(&local_80,lVar10);
  FUN_14662eb2c(*(undefined8 *)(param_1 + 0x20));
  if ((local_80 == (undefined8 *)0x0) || (local_50 == (undefined8 *)0x0 || local_50 == local_80)) {
    iVar9 = *(int *)(param_1 + 0x30);
    lVar11 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2d0))();
    if ((longlong)*(int *)(lVar11 + 0x40) != 0) {
      lVar13 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar11 + 0x38) + lVar13);
        if ((lVar5 != 0) && (*(int *)(lVar5 + 0xe0) == iVar9)) {
          plVar12 = *(longlong **)(param_1 + 0x20);
          if (plVar12[0xb3] != 0) {
            cVar8 = FUN_145dc96b6(plVar12[0xb3],lVar10);
            plVar12 = *(longlong **)(param_1 + 0x20);
            if (cVar8 != '\0') {
              FUN_1441c390c(plVar12,&DAT_14cbce4a8);
              goto LAB_1441c62ba;
            }
          }
          lVar10 = (**(code **)(*plVar12 + 0x2d0))();
          iVar9 = *(int *)(lVar10 + 0x40);
          if ((longlong)iVar9 != 0) {
            lVar10 = *(longlong *)(lVar10 + 0x38);
            lVar11 = 0;
            do {
              lVar13 = *(longlong *)(lVar10 + lVar11);
              if (lVar13 != 0) {
                uVar3 = *(undefined4 *)(lVar13 + 0xe0);
                iVar4 = *(int *)(param_1 + 0x170);
                *(uint *)(param_1 + 0x170) = iVar4 + 1U;
                if (*(uint *)(param_1 + 0x174) < iVar4 + 1U) {
                  FUN_1446f48e2((longlong *)(param_1 + 0x168),iVar4);
                }
                *(undefined4 *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar4 * 4) = uVar3;
              }
              lVar11 = lVar11 + 8;
            } while ((longlong)iVar9 * 8 != lVar11);
          }
          if (*(char *)(param_1 + 0x72) != '\0') {
            FUN_1441c682a(param_1);
            goto LAB_1441c6271;
          }
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          local_50 = (undefined8 *)0x0;
          local_48 = 0;
          FUN_1446efa72(&local_50,0,3,0x10);
          local_48 = 3;
          plVar12 = *(longlong **)(param_1 + 0x10);
          if (plVar12 == (longlong *)0x0) {
LAB_1441c630b:
            *local_50 = &PTR_LAB_14b4edd40;
            LOCK();
            UNLOCK();
            lVar11 = DAT_14c758608 + 1;
            lVar10 = DAT_14c758608 + 1;
            if (lVar11 == 0) {
              LOCK();
              UNLOCK();
              lVar11 = DAT_14c758608 + 2;
              lVar10 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar10;
            local_50[2] = lVar11;
            *local_50 = &PTR_FUN_14b98b820;
            local_50[3] = 0;
            local_50[4] = 0;
            local_50[5] = param_1;
          }
          else {
            iVar9 = (int)plVar12[1];
            do {
              if (iVar9 == 0) goto LAB_1441c630b;
              LOCK();
              iVar4 = (int)plVar12[1];
              bVar14 = iVar9 == iVar4;
              if (bVar14) {
                *(int *)(plVar12 + 1) = iVar9 + 1;
                iVar4 = iVar9;
              }
              iVar9 = iVar4;
              UNLOCK();
            } while (!bVar14);
            uVar7 = *(undefined8 *)(param_1 + 8);
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            *local_50 = &PTR_LAB_14b4edd40;
            LOCK();
            UNLOCK();
            lVar11 = DAT_14c758608 + 1;
            lVar10 = DAT_14c758608 + 1;
            if (lVar11 == 0) {
              LOCK();
              UNLOCK();
              lVar11 = DAT_14c758608 + 2;
              lVar10 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar10;
            local_50[2] = lVar11;
            *local_50 = &PTR_FUN_14b98b820;
            local_50[3] = uVar7;
            local_50[4] = plVar12;
            LOCK();
            *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
            UNLOCK();
            local_50[5] = param_1;
            LOCK();
            plVar1 = plVar12 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
            LOCK();
            plVar1 = plVar12 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
            LOCK();
            plVar1 = plVar12 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar2 = (int *)((longlong)plVar12 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          FUN_145d53e48(uVar6,param_1 + 0x168,1,&local_50);
          goto LAB_1441c6271;
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)*(int *)(lVar11 + 0x40) * 8 != lVar13);
    }
    FUN_1441c341e(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30),lVar10);
LAB_1441c62ba:
    *(undefined1 *)(param_1 + 0x18) = 1;
    FUN_1441c3fda(*(undefined8 *)(param_1 + 0x20),0);
  }
  else {
    plVar12 = *(longlong **)(param_1 + 0x20);
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    FUN_1441c5656(plVar12,&local_50,uVar3,lVar10);
    lVar10 = (**(code **)(*plVar12 + 0x2d0))(plVar12);
    if (lVar10 != 0) {
      lVar11 = FUN_1403ca142();
      if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
        local_88 = &local_68;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        FUN_144142254(lVar10,&local_50,uVar3,&local_78);
        FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1441c6271:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c6458 FUN_1441c6458 body=117 status=ok
// SIG undefined FUN_1441c6458(void)

void FUN_1441c6458(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar2 = FUN_14116599c();
    if (lVar2 != 0) {
      cVar1 = FUN_148a7d908(lVar2,param_3);
      if (cVar1 == '\0') {
        FUN_1441c390c(*(undefined8 *)(param_1 + 0x20),&DAT_14cbce498);
        *(undefined1 *)(param_1 + 0x18) = 1;
        FUN_1441c3fda(*(undefined8 *)(param_1 + 0x20),0);
        return;
      }
    }
  }
  FUN_1441c64ce(param_1);
  return;
}



// FUNCTION 1441c64ce FUN_1441c64ce body=619 status=ok
// SIG undefined FUN_1441c64ce(void)

void FUN_1441c64ce(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined8 **local_98;
  code *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  int local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = *(longlong **)(param_1 + 0x20);
  (**(code **)(*plVar3 + 0x180))(plVar3);
  local_58 = (longlong *)0x0;
  plVar5 = (longlong *)FUN_1401e3228();
  if (plVar5 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
LAB_1441c660d:
    plVar5 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x80))(plVar5,&local_48);
    if (local_48 == (longlong *)0x0) goto LAB_1441c660d;
    (**(code **)(*local_48 + 0x110))(local_48,&local_58,*(undefined4 *)(param_1 + 0x30));
    plVar5 = local_50;
    plVar2 = local_58;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2d8))(plVar3,&local_58);
      (**(code **)(*local_58 + 0x18))(local_58,&local_68,param_1 + 0x158);
      plVar4 = local_58;
      if (local_68 == 0) {
        FUN_1441c390c(plVar3,&DAT_14cbce488);
        *(undefined1 *)(param_1 + 0x18) = 1;
        FUN_1441c3fda(*(undefined8 *)(param_1 + 0x20),0);
      }
      else {
        local_88 = FUN_1441c673a;
        local_80 = 0;
        FUN_148d94bfc(&local_78,param_1);
        local_98 = &local_78;
        (**(code **)(*plVar4 + 0x1b0))(plVar4,plVar2,local_68,plVar2);
        if (local_70 != 0) {
          if (local_78 == (undefined8 *)0x0) goto LAB_1441c65b5;
          (**(code **)*local_78)(local_78,0);
          FUN_1446efa72(&local_78,0,0,0x10);
          local_70 = 0;
        }
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_1441c65b5:
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_60 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      goto LAB_1441c662d;
    }
  }
  FUN_1441c390c(plVar3,&DAT_14cbce498);
  *(undefined1 *)(param_1 + 0x18) = 1;
  FUN_1441c3fda(*(undefined8 *)(param_1 + 0x20),0);
LAB_1441c662d:
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c673a FUN_1441c673a body=228 status=ok
// SIG undefined FUN_1441c673a(void)

void FUN_1441c673a(longlong param_1,undefined8 param_2,char param_3,longlong param_4)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_3 != '\0') && (*(longlong *)(param_4 + 8) != 0)) &&
     (*(longlong **)(param_4 + 0x100) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_4 + 0x100) + 0x20))();
    if (cVar1 != '\0') {
      FUN_141551f14(param_1 + 0x38,local_38);
      FUN_1461f4a06(param_1 + 0x38,param_4);
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_4 + 0x118);
      FUN_145cba9f8(param_1 + 0x60,DAT_14cb97810,local_38,0);
      FUN_1441c6068(param_1);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  FUN_1441c390c(*(undefined8 *)(param_1 + 0x20),&DAT_14cbce4b8);
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1441c3fda(*(undefined8 *)(param_1 + 0x20),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1441c682a FUN_1441c682a body=498 status=ok
// SIG undefined FUN_1441c682a(void)

void FUN_1441c682a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 **local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char *)(param_1 + 0x72) != '\0') ||
     (iVar8 = FUN_14658345a(*(undefined8 *)(param_1 + 0x20)), iVar8 == 0)) {
    if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1441c6a28(param_1);
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_1441c698e:
    *local_38 = &PTR_LAB_14b4eddb0;
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
    local_38[2] = lVar9;
    *local_38 = &PTR_FUN_14b98b890;
    local_38[3] = 0;
    local_38[4] = 0;
    local_38[5] = param_1;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1441c698e;
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
    uVar5 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *local_38 = &PTR_LAB_14b4eddb0;
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
    local_38[2] = lVar9;
    *local_38 = &PTR_FUN_14b98b890;
    local_38[3] = uVar5;
    local_38[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    local_38[5] = param_1;
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
  local_48 = 1;
  local_40 = &local_38;
  FUN_145d54248(uVar3,param_1 + 0x168,0,0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 1441c6a28 FUN_1441c6a28 body=139 status=ok
// SIG undefined FUN_1441c6a28(void)

void FUN_1441c6a28(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x598);
  if (lVar1 != 0) {
    local_38 = FUN_1415e99b6;
    local_30 = 0;
    FUN_14662e7d4(local_28);
    FUN_145f78eee(lVar1,local_28,4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1441c6abc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c6abc FUN_1441c6abc body=396 status=ok
// SIG undefined FUN_1441c6abc(void)

void FUN_1441c6abc(longlong param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(lVar4 + 0x598) != 0) goto LAB_1441c6ae2;
  plVar6 = (longlong *)FUN_14001cc68(0x2a0,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b98b970;
  pcVar1 = (code *)(plVar6 + 2);
  FUN_145ef5286(pcVar1,lVar4);
  local_38 = pcVar1;
  local_30 = plVar6;
  FUN_148da1ccc(&local_38,pcVar1);
  if (plVar6 == (longlong *)0x0) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(lVar4 + 0x598) = 0x10;
    plVar7 = *(longlong **)(lVar4 + 0x5a0);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(lVar4 + 0x5a0) = 0;
LAB_1441c6bbc:
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x0001441c6bac:
        if (iVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    lVar4 = *(longlong *)(param_1 + 0x20);
    *(code **)(lVar4 + 0x598) = pcVar1;
    plVar7 = *(longlong **)(lVar4 + 0x5a0);
    if (plVar6 == plVar7) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar7 = plVar6;
        goto joined_r0x0001441c6bac;
      }
    }
    else {
      *(longlong **)(lVar4 + 0x5a0) = plVar6;
      if (plVar7 != (longlong *)0x0) goto LAB_1441c6bbc;
    }
  }
  plVar6 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x598);
  local_38 = FUN_141651942;
  local_30 = (longlong *)((ulonglong)local_30 & 0xffffffff00000000);
  FUN_14662e980(local_48,param_1);
  FUN_143f27cb4(uVar5,param_1 + 0x38,local_48);
LAB_1441c6ae2:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c6c4a FUN_1441c6c4a body=1343 status=ok
// SIG undefined FUN_1441c6c4a(void)

longlong * FUN_1441c6c4a(longlong *param_1,undefined4 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  plVar2 = DAT_14c844840;
  *param_1 = (longlong)DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  switch(param_2) {
  case 1:
  case 5:
  case 8:
  case 9:
  case 0xc:
  case 0xe:
    local_38 = L"NetworkJoinFailed";
    local_30 = 0x11;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"Unable to join. You cannot join the game session.";
    local_30 = 0x31;
    break;
  case 2:
    local_38 = L"NetworkJoinFailed_AlreadyInSession";
    local_30 = 0x22;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"An active player is already in the game session.";
    local_30 = 0x30;
    break;
  case 3:
    local_38 = L"NetworkJoinFailed_SessionIsFull";
    local_30 = 0x1f;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"Unable to join. The requested game is full.";
    local_30 = 0x2b;
    break;
  case 4:
    local_38 = L"NetworkJoinFailed_SessionDoesNotExist";
    local_30 = 0x25;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"Unable to join. The game session no longer exists.";
    local_30 = 0x32;
    break;
  case 6:
  case 7:
    local_38 = L"NetworkJoinFailed_MismatchedVersion";
    local_30 = 0x23;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = 
    L"The session you are trying to join is running an incompatible version of the game. Please try upgrading your game version."
    ;
    goto LAB_1441c6de3;
  case 10:
    local_38 = L"NetworkJoinFailed_PartyCrossplayDisabled";
    local_30 = 0x28;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = 
    L"The game you are trying to join does not allow players from other platforms. The party leader must have crossplay enabled."
    ;
LAB_1441c6de3:
    local_30 = 0x7a;
    break;
  case 0xb:
    local_38 = L"NetworkJoinFailed_PlayerCrossplayDisabled";
    local_30 = 0x29;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"The game you are trying to join requires crossplay to be enabled.";
    local_30 = 0x41;
    break;
  case 0xd:
    local_38 = L"NetworkJoinFailed_NotEnoughRoom";
    local_30 = 0x1f;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"The game you are trying to join does not have enough space for all active players."
    ;
    local_30 = 0x52;
    break;
  default:
    goto switchD_1441c6cd6_default;
  }
  FUN_140208c1e(local_48,local_50,local_4c,&local_38);
  FUN_140008f88(param_1,local_48);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
switchD_1441c6cd6_default:
  plVar2 = (longlong *)*param_1;
  if (*(code **)(*plVar2 + 0x50) != FUN_144828418) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x50))();
  }
  FUN_1447a1fc0(plVar2);
  plVar2 = (longlong *)*param_1;
  pcVar1 = *(code **)(*plVar2 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar3 = plVar2 + 3;
    if (plVar2[5] != 0) {
      plVar3 = (longlong *)(plVar2[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar3 = plVar2 + 2;
  }
  else {
    plVar3 = (longlong *)(*pcVar1)(plVar2);
  }
  if ((int)plVar3[1] < 2) {
    FUN_140002266(local_48,L"BUGME - The network join operation failed: %s",&DAT_149dfb77a);
    FUN_140233b1a(&local_38,local_48);
    FUN_140008f88(param_1,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
    if (local_48[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1441c718a FUN_1441c718a body=1674 status=ok
// SIG undefined FUN_1441c718a(void)

void FUN_1441c718a(longlong *param_1,longlong param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  longlong *local_68 [2];
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 != param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
  }
  lVar3 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (lVar3 == 0) goto LAB_1441c75d0;
  lVar4 = FUN_1403ca142();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) goto LAB_1441c75d0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[4] = L'\0';
    DAT_14c844840[5] = L'\0';
    DAT_14c844840[6] = L'\0';
    DAT_14c844840[7] = L'\0';
    *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
    DAT_14c844840[8] = L'\xffff';
    DAT_14c844840[9] = L'\xffff';
    DAT_14c844840[10] = L'\xffff';
    DAT_14c844840[0xb] = L'\xffff';
    DAT_14c844840[0xc] = L'\0';
    DAT_14c844840[0xd] = L'\0';
    DAT_14c844840[0xe] = L'\0';
    DAT_14c844840[0xf] = L'\0';
    DAT_14c844840[0x10] = L'\0';
    DAT_14c844840[0x11] = L'\0';
    DAT_14c844840[0x12] = L'\0';
    DAT_14c844840[0x13] = L'\0';
    DAT_14c844840[0x14] = L'\0';
    DAT_14c844840[0x15] = L'\0';
    DAT_14c844840[0x16] = L'\0';
    DAT_14c844840[0x17] = L'\0';
    if (DAT_14c844840 != (wchar_t *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  local_58 = DAT_14c844840;
  if (DAT_14c844840 != (wchar_t *)0x0) {
    if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(longlong *)DAT_14c844840 + 8))();
    }
  }
  local_50 = 0;
  plVar5 = (longlong *)param_1[0x102];
  if (*(code **)(*plVar5 + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  plVar5 = (longlong *)param_1[0x102];
  pcVar2 = *(code **)(*plVar5 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar7 = plVar5 + 3;
    if (plVar5[5] != 0) {
      plVar7 = (longlong *)(plVar5[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar7 = plVar5 + 2;
  }
  else {
    plVar7 = (longlong *)(*pcVar2)(plVar5);
  }
  pwVar6 = local_58;
  if (1 < (int)plVar7[1]) {
    pwVar8 = (wchar_t *)param_1[0x102];
    if (local_58 != pwVar8) {
      local_58 = pwVar8;
      if (pwVar8 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)pwVar8 + 8))();
      }
      if (pwVar6 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)pwVar6 + 0x10))(pwVar6);
      }
    }
    local_50 = (undefined4)param_1[0x103];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[4] = L'\0';
      DAT_14c844840[5] = L'\0';
      DAT_14c844840[6] = L'\0';
      DAT_14c844840[7] = L'\0';
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[8] = L'\xffff';
      DAT_14c844840[9] = L'\xffff';
      DAT_14c844840[10] = L'\xffff';
      DAT_14c844840[0xb] = L'\xffff';
      DAT_14c844840[0xc] = L'\0';
      DAT_14c844840[0xd] = L'\0';
      DAT_14c844840[0xe] = L'\0';
      DAT_14c844840[0xf] = L'\0';
      DAT_14c844840[0x10] = L'\0';
      DAT_14c844840[0x11] = L'\0';
      DAT_14c844840[0x12] = L'\0';
      DAT_14c844840[0x13] = L'\0';
      DAT_14c844840[0x14] = L'\0';
      DAT_14c844840[0x15] = L'\0';
      DAT_14c844840[0x16] = L'\0';
      DAT_14c844840[0x17] = L'\0';
      if (DAT_14c844840 != (wchar_t *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    pwVar8 = DAT_14c844840;
    pwVar6 = (wchar_t *)param_1[0x102];
    if (pwVar6 != DAT_14c844840) {
      param_1[0x102] = (longlong)DAT_14c844840;
      if (pwVar8 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)pwVar8 + 8))();
      }
      if (pwVar6 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)pwVar6 + 0x10))(pwVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x103) = DAT_14c844848;
  }
  pwVar6 = local_58;
  pwVar8 = local_58;
  if (*(code **)(*(longlong *)local_58 + 0x50) != FUN_144828418) {
    pwVar8 = (wchar_t *)(**(code **)(*(longlong *)local_58 + 0x50))(local_58);
  }
  FUN_1447a1fc0(pwVar8);
  pcVar2 = *(code **)(*(longlong *)pwVar6 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    pwVar8 = (wchar_t *)(*(longlong *)(pwVar6 + 0x14) + 8);
    if (*(longlong *)(pwVar6 + 0x14) == 0) {
      pwVar8 = pwVar6 + 0xc;
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    pwVar8 = pwVar6 + 8;
  }
  else {
    pwVar8 = (wchar_t *)(*pcVar2)(pwVar6);
  }
  if (*(int *)(pwVar8 + 4) < 2) {
    local_48 = L"NetworkFailure_GenericFailure";
    local_40 = 0x1d;
    FUN_1446e940c(local_6c,&local_48);
    local_48 = L"OakOnlineSessionClient";
    local_40 = 0x16;
    FUN_1446e940c(local_70,&local_48);
    local_48 = L"An error was encountered.";
    local_40 = 0x19;
    FUN_140208c1e(local_68,local_70,local_6c,&local_48);
    FUN_140008f88(&local_58,local_68);
    pwVar6 = local_58;
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
      pwVar6 = local_58;
    }
  }
  if (*(code **)(*(longlong *)pwVar6 + 0x50) != FUN_144828418) {
    pwVar6 = (wchar_t *)(**(code **)(*(longlong *)pwVar6 + 0x50))(pwVar6);
  }
  FUN_1447a1fc0(pwVar6);
  pcVar2 = *(code **)(*(longlong *)local_58 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    pwVar6 = local_58 + 0xc;
    if (*(longlong *)(local_58 + 0x14) != 0) {
      pwVar6 = (wchar_t *)(*(longlong *)(local_58 + 0x14) + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    pwVar6 = local_58 + 8;
  }
  else {
    pwVar6 = (wchar_t *)(*pcVar2)(local_58);
  }
  iVar1 = *(int *)(pwVar6 + 4);
  if (iVar1 == DAT_14cbce140) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar9 = *(ushort *)(*(longlong *)pwVar6 + lVar4);
        uVar10 = (ulonglong)uVar9;
        uVar11 = *(ushort *)(DAT_14cbce138 + lVar4);
        if (uVar9 != uVar11) break;
        if (uVar9 == 0) goto LAB_1441c7520;
LAB_1441c74f0:
        lVar4 = lVar4 + 2;
      }
      if ((uVar11 | uVar9) < 0x80) {
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        uVar12 = (ulonglong)uVar11;
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_1441c74f0;
      }
      if (uVar9 != uVar11) goto LAB_1441c75aa;
    }
LAB_1441c7520:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[4] = L'\0';
      DAT_14c844840[5] = L'\0';
      DAT_14c844840[6] = L'\0';
      DAT_14c844840[7] = L'\0';
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[8] = L'\xffff';
      DAT_14c844840[9] = L'\xffff';
      DAT_14c844840[10] = L'\xffff';
      DAT_14c844840[0xb] = L'\xffff';
      DAT_14c844840[0xc] = L'\0';
      DAT_14c844840[0xd] = L'\0';
      DAT_14c844840[0xe] = L'\0';
      DAT_14c844840[0xf] = L'\0';
      DAT_14c844840[0x10] = L'\0';
      DAT_14c844840[0x11] = L'\0';
      DAT_14c844840[0x12] = L'\0';
      DAT_14c844840[0x13] = L'\0';
      DAT_14c844840[0x14] = L'\0';
      DAT_14c844840[0x15] = L'\0';
      DAT_14c844840[0x16] = L'\0';
      DAT_14c844840[0x17] = L'\0';
      if (DAT_14c844840 != (wchar_t *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    pwVar6 = DAT_14c844840;
    local_48 = DAT_14c844840;
    if (DAT_14c844840 == (wchar_t *)0x0) {
      local_40 = 0;
      FUN_148d31758(lVar3,1);
    }
    else {
      if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
        UNLOCK();
        local_40 = 0;
        FUN_148d31758(lVar3,1);
        if (pwVar6 == (wchar_t *)0x0) goto LAB_1441c75c0;
      }
      else {
        (**(code **)(*(longlong *)DAT_14c844840 + 8))(DAT_14c844840);
        local_40 = 0;
        FUN_148d31758(lVar3,1);
      }
      (**(code **)(*(longlong *)pwVar6 + 0x10))(pwVar6);
    }
  }
  else {
    if (DAT_14cbce140 + iVar1 == 1) goto LAB_1441c7520;
LAB_1441c75aa:
    FUN_14413e7dc(lVar3,0,&local_58,&DAT_14c9485f0);
  }
LAB_1441c75c0:
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
LAB_1441c75d0:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c7830 FUN_1441c7830 body=264 status=ok
// SIG undefined FUN_1441c7830(void)

void FUN_1441c7830(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x180))();
  local_30 = 0;
  plVar7 = (longlong *)FUN_1401e3228();
  if (plVar7 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar7 + 0x80))(plVar7,&local_48);
    if (((local_48 != (longlong *)0x0) &&
        (lVar8 = (**(code **)(*param_1 + 0x2d0))(param_1), lVar8 != 0)) &&
       (iVar3 = *(int *)(lVar8 + 0x40), (longlong)iVar3 != 0)) {
      lVar8 = *(longlong *)(lVar8 + 0x38);
      lVar9 = 0;
      do {
        lVar5 = *(longlong *)(lVar8 + lVar9);
        if (lVar5 != 0) {
          uVar4 = *(undefined4 *)(lVar5 + 0xe0);
          iVar6 = (**(code **)(*local_48 + 0x138))(local_48,uVar4);
          if (iVar6 == 2) {
            (**(code **)(*local_48 + 0xb0))(local_48,uVar4);
          }
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar3 * 8 != lVar9);
    }
  }
  plVar7 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c793a FUN_1441c793a body=1544 status=ok
// SIG undefined FUN_1441c793a(void)

ulonglong FUN_1441c793a(longlong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined7 uVar15;
  ulonglong uVar14;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = (**(code **)(*param_1 + 0x180))();
  if (lVar7 == 0) {
    uVar8 = FUN_1401cb356();
    plVar10 = (longlong *)*param_2;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    lVar7 = param_2[1];
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,4,0x10);
    puVar4 = local_58;
    local_50 = 4;
    *local_58 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_58[2] = lVar12;
    *local_58 = &PTR_FUN_14b98bd10;
    local_58[3] = 0;
    iVar6 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_58 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar6 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar6 = *(int *)(lVar9 + 0x10);
        bVar16 = iVar6 == 0;
        if (bVar16) {
          *(int *)(lVar9 + 0x10) = iVar13;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar6 = iVar13;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar6;
    puVar4[4] = param_1;
    puVar4[5] = plVar10;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    *(int *)(puVar4 + 6) = (int)lVar7;
    *(char *)(puVar4 + 7) = param_3;
    local_78 = 0;
    FUN_1405f67fc(uVar8,local_68,&local_58,L"UOakOnlineSessionClient_HandleOnlineCapabilityLost");
    if (local_60 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
    if (local_50 == 0) {
LAB_1441c7afc:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
      goto LAB_1441c7afc;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  else if ((char)param_1[0x11c] == '\x01') {
    *(undefined1 *)(param_1 + 0x11c) = 0;
    FUN_1441c3056(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0x11e) = 1;
    (**(code **)(*param_1 + 0x308))(param_1,&local_58);
    if (((int)local_58 == 2) ||
       (((int)local_58 == 1 && (cVar5 = FUN_148d93d3e(param_1), cVar5 == '\0')))) {
      bVar16 = true;
      if (((char)param_1[0x106] == '\0') &&
         ((lVar9 = (**(code **)(*param_1 + 0x180))(param_1), lVar9 == 0 ||
          (iVar6 = FUN_14490d72a(lVar9), iVar6 != 3)))) {
        bVar16 = false;
      }
      (**(code **)(*param_1 + 0x398))(param_1);
      FUN_148d95ad0(param_1);
      if (((*(longlong *)(lVar7 + 0x1f0) != 0) && (lVar7 = FUN_14116599c(), lVar7 != 0)) &&
         (param_1[0x11f] == 0)) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        puVar4 = local_58;
        local_50 = 3;
        *local_58 = &PTR_LAB_14b4ede20;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        local_58[2] = lVar12;
        *local_58 = &PTR_FUN_14b98bd80;
        local_58[3] = 0;
        iVar6 = 0;
        if (param_1 != (longlong *)0x0) {
          uVar2 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(local_58 + 3) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          iVar6 = *(int *)(lVar9 + 0x10);
          if (*(int *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar13 = DAT_14c964868 + 1;
            bVar17 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar17) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar13);
            }
            LOCK();
            iVar6 = *(int *)(lVar9 + 0x10);
            bVar17 = iVar6 == 0;
            if (bVar17) {
              *(int *)(lVar9 + 0x10) = iVar13;
              iVar6 = 0;
            }
            UNLOCK();
            if (bVar17) {
              iVar6 = iVar13;
            }
          }
        }
        *(int *)((longlong)puVar4 + 0x1c) = iVar6;
        puVar4[4] = param_1;
        FUN_146146674(lVar7 + 0x70,&local_70,&local_58);
        if (local_50 == 0) {
LAB_1441c7e27:
          if (local_58 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_58 != (undefined8 *)0x0) {
          (**(code **)*local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          local_50 = 0;
          goto LAB_1441c7e27;
        }
        param_1[0x11f] = local_70;
      }
      uVar15 = (undefined7)((ulonglong)param_2 >> 8);
      if (!bVar16) {
        iVar6 = FUN_14133cd66(param_1);
        if ((iVar6 < 1) || (cVar5 = FUN_14127c006(param_1), cVar5 != '\0')) {
LAB_1441c7cfc:
          uVar14 = 0;
        }
        else {
          plVar10 = (longlong *)*param_2;
          if (*(code **)(*plVar10 + 0x50) != FUN_144828418) {
            plVar10 = (longlong *)(**(code **)(*plVar10 + 0x50))();
          }
          FUN_1447a1fc0(plVar10);
          plVar10 = (longlong *)*param_2;
          pcVar3 = *(code **)(*plVar10 + 0x28);
          if (pcVar3 == FUN_14482841c) {
            plVar11 = plVar10 + 3;
            if (plVar10[5] != 0) {
              plVar11 = (longlong *)(plVar10[5] + 8);
            }
          }
          else if (pcVar3 == (code *)&LAB_14010c34c) {
            plVar11 = plVar10 + 2;
          }
          else {
            plVar11 = (longlong *)(*pcVar3)(plVar10);
          }
          if ((int)plVar11[1] < 2) goto LAB_1441c7cfc;
          FUN_148d90230(param_1,param_2);
          uVar14 = CONCAT71(uVar15,1);
        }
        if (param_3 == '\0') {
          FUN_148d95c52(param_1);
        }
        else {
          FUN_148d95b32();
        }
        goto LAB_1441c7b47;
      }
      plVar10 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1);
      if (plVar10 != (longlong *)0x0) {
        lVar7 = FUN_1403ca142();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(plVar10[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
            == lVar7 + 0x30)) {
          cVar5 = (**(code **)(*plVar10 + 0x498))(plVar10);
          FUN_148d31758(plVar10,0,param_2);
          uVar14 = CONCAT71(uVar15,1);
          if (cVar5 == '\x05') {
            FUN_1416b967c(plVar10);
          }
          goto LAB_1441c7b47;
        }
      }
    }
  }
  uVar14 = 0;
LAB_1441c7b47:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 1441c7f44 FUN_1441c7f44 body=1562 status=ok
// SIG undefined FUN_1441c7f44(void)

void FUN_1441c7f44(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  longlong *local_78 [2];
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
  if (*(char *)((longlong)param_1 + 0x43) == '\x01') {
    local_90 = param_1[4];
    local_58 = L"StartGameplayFailureMessage_NoRestore";
    local_50 = 0x25;
    FUN_1446e940c(local_7c,&local_58);
    local_58 = L"OakOnlineSessionClient";
    local_50 = 0x16;
    FUN_1446e940c(local_80,&local_58);
    local_58 = L"Unable to play online, continuing offline.";
    local_50 = 0x2a;
    FUN_140208c1e(&local_68,local_80,local_7c,&local_58);
    local_58 = L"StartGameplayFailureHeader_NoRestore";
    local_50 = 0x24;
    FUN_1446e940c(local_84,&local_58);
    local_58 = L"OakOnlineSessionClient";
    local_50 = 0x16;
    FUN_1446e940c(local_88,&local_58);
    local_58 = L"Connection Error";
    local_50 = 0x10;
    FUN_140208c1e(local_78,local_88,local_84,&local_58);
    FUN_1458d94fa(local_90,local_78,&local_68);
    if (local_78[0] != (longlong *)0x0) {
      (**(code **)(*local_78[0] + 0x10))();
    }
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
  }
  if ((*(char *)((longlong)param_1 + 0x42) != '\0') || (iVar3 = *param_2, iVar3 == 0))
  goto LAB_1441c8037;
  plVar5 = (longlong *)param_1[4];
  if (iVar3 == 3) {
    iVar3 = param_2[1];
    iVar4 = param_2[2];
    FUN_1441c87d4(&local_58,iVar3);
    pwVar8 = local_58;
    if (*(code **)(*(longlong *)local_58 + 0x50) != FUN_144828418) {
      pwVar8 = (wchar_t *)(**(code **)(*(longlong *)local_58 + 0x50))();
    }
    FUN_1447a1fc0(pwVar8);
    pcVar6 = *(code **)(*(longlong *)local_58 + 0x28);
    if (pcVar6 == FUN_14482841c) {
      pwVar9 = local_58 + 0xc;
      if (*(longlong *)(local_58 + 0x14) != 0) {
        pwVar9 = (wchar_t *)(*(longlong *)(local_58 + 0x14) + 8);
      }
    }
    else if (pcVar6 == (code *)&LAB_14010c34c) {
      pwVar9 = local_58 + 8;
    }
    else {
      pwVar9 = (wchar_t *)(*pcVar6)(local_58);
    }
    pwVar8 = local_58;
    if ((((1 < *(int *)(pwVar9 + 4)) &&
         (lVar7 = (**(code **)(*plVar5 + 0x180))(plVar5), pwVar8 = local_58, lVar7 != 0)) &&
        (*(longlong *)(lVar7 + 0x1f0) != 0)) &&
       (lVar7 = FUN_14583d3ae(), pwVar8 = local_58, lVar7 != 0)) {
      if (iVar3 == 10) {
        FUN_1441bed2c(lVar7,iVar4,&local_58);
        pwVar8 = local_58;
      }
      else {
        FUN_1441c12ac(lVar7,iVar4,&local_58,&DAT_14c9485f0);
        pwVar8 = local_58;
      }
    }
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[4] = L'\0';
      DAT_14c844840[5] = L'\0';
      DAT_14c844840[6] = L'\0';
      DAT_14c844840[7] = L'\0';
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[8] = L'\xffff';
      DAT_14c844840[9] = L'\xffff';
      DAT_14c844840[10] = L'\xffff';
      DAT_14c844840[0xb] = L'\xffff';
      DAT_14c844840[0xc] = L'\0';
      DAT_14c844840[0xd] = L'\0';
      DAT_14c844840[0xe] = L'\0';
      DAT_14c844840[0xf] = L'\0';
      DAT_14c844840[0x10] = L'\0';
      DAT_14c844840[0x11] = L'\0';
      DAT_14c844840[0x12] = L'\0';
      DAT_14c844840[0x13] = L'\0';
      DAT_14c844840[0x14] = L'\0';
      DAT_14c844840[0x15] = L'\0';
      DAT_14c844840[0x16] = L'\0';
      DAT_14c844840[0x17] = L'\0';
      if (DAT_14c844840 != (wchar_t *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    local_68 = DAT_14c844840;
    if (DAT_14c844840 != (wchar_t *)0x0) {
      if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(longlong *)DAT_14c844840 + 8))();
      }
    }
    local_60 = 0;
    if ((iVar3 == 1) || (iVar3 == 4)) {
      local_58 = L"NetworkCreateFailed";
      local_50 = 0x13;
      FUN_1446e940c(local_7c,&local_58);
      local_58 = L"OakOnlineSessionClient";
      local_50 = 0x16;
      FUN_1446e940c(local_80,&local_58);
      local_58 = L"A problem occurred while changing network options.";
      local_50 = 0x32;
LAB_1441c8377:
      FUN_140208c1e(local_78,local_80,local_7c,&local_58);
      FUN_140008f88(&local_68,local_78);
      if (local_78[0] != (longlong *)0x0) {
        (**(code **)(*local_78[0] + 0x10))();
      }
    }
    else if (iVar3 == 2) {
      local_58 = L"NetworkCreateFailed_NotLoggedInForLan";
      local_50 = 0x25;
      FUN_1446e940c(local_7c,&local_58);
      local_58 = L"OakOnlineSessionClient";
      local_50 = 0x16;
      FUN_1446e940c(local_80,&local_58);
      local_58 = 
      L"At least one controller has a gamer profile that is not signed in. To continue, sign in gamer profiles for all controllers."
      ;
      local_50 = 0x7b;
      goto LAB_1441c8377;
    }
    pwVar8 = local_68;
    if (*(code **)(*(longlong *)local_68 + 0x50) != FUN_144828418) {
      pwVar8 = (wchar_t *)(**(code **)(*(longlong *)local_68 + 0x50))();
    }
    FUN_1447a1fc0(pwVar8);
    pcVar6 = *(code **)(*(longlong *)local_68 + 0x28);
    if (pcVar6 == FUN_14482841c) {
      pwVar8 = local_68 + 0xc;
      if (*(longlong *)(local_68 + 0x14) != 0) {
        pwVar8 = (wchar_t *)(*(longlong *)(local_68 + 0x14) + 8);
      }
    }
    else if (pcVar6 == (code *)&LAB_14010c34c) {
      pwVar8 = local_68 + 8;
    }
    else {
      pwVar8 = (wchar_t *)(*pcVar6)(local_68);
    }
    if (*(int *)(pwVar8 + 4) < 2) {
      FUN_140002266(local_78,L"BUGME - The network operation failed: %s",&DAT_149dfb77a);
      FUN_140233b1a(&local_58,local_78);
      FUN_140008f88(&local_68,&local_58);
      if (local_58 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_58 + 0x10))();
      }
      if (local_78[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_148d90230(plVar5,&local_68);
    pwVar8 = local_68;
  }
  if (pwVar8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)pwVar8 + 0x10))();
  }
LAB_1441c8037:
  lVar7 = param_1[4];
  *(undefined8 *)(lVar7 + 0x598) = 0;
  plVar5 = *(longlong **)(lVar7 + 0x5a0);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(lVar7 + 0x5a0) = 0;
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
  if ((((int)param_1[7] == (int)param_1[6]) &&
      (*(int *)((longlong)param_1 + 0x3c) == *(int *)((longlong)param_1 + 0x34))) ||
     (*(char *)((longlong)param_1 + 0x41) != '\x01')) {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  else {
    param_1[6] = param_1[7];
    FUN_148d95d4e(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c857a FUN_1441c857a body=386 status=ok
// SIG undefined FUN_1441c857a(void)

void FUN_1441c857a(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = *(longlong **)(param_1 + 0x20);
  if ((longlong *)(param_1 + 0x30) != plVar5 + 0xb6) {
    plVar5[0xb6] = *(longlong *)(param_1 + 0x30);
    *(undefined1 *)(plVar5 + 0xb7) = 1;
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  lVar4 = (**(code **)(*plVar5 + 0x2d0))();
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x40))) {
    lVar1 = **(longlong **)(lVar4 + 0x38);
    if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) goto LAB_1441c8634;
    if (*(longlong *)(lVar4 + 0x30) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 0x30) + 0x360);
    }
    lVar4 = FUN_14127aa70(uVar6,*(undefined4 *)(lVar1 + 0xe0));
    if ((lVar4 != 0) &&
       ((lVar1 = *(longlong *)(param_1 + 0x30), *(int *)(lVar4 + 0x18) != (int)lVar1 ||
        (*(int *)(lVar4 + 0x1c) != (int)((ulonglong)lVar1 >> 0x20))))) {
      *(longlong *)(lVar4 + 0x18) = lVar1;
      FUN_1459703e8(lVar4);
    }
  }
LAB_1441c8634:
  cVar2 = FUN_14127c006(*(undefined8 *)(param_1 + 0x20));
  if ((cVar2 != '\0') ||
     ((iVar3 = FUN_14133cd66(*(undefined8 *)(param_1 + 0x20)), iVar3 == 0 &&
      ((lVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))(), lVar4 == 0 ||
       (iVar3 = FUN_14490d72a(lVar4), iVar3 != 3)))))) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x308))(*(longlong **)(param_1 + 0x20),&local_30)
    ;
    *(undefined8 *)(param_1 + 0x38) = local_30;
    if (*(int *)(param_1 + 0x30) != (int)local_30) {
      FUN_148d95d4e(param_1);
      goto LAB_1441c8688;
    }
    if (*(int *)(param_1 + 0x34) != (int)((ulonglong)local_30 >> 0x20)) {
      FUN_148d96498(param_1);
      goto LAB_1441c8688;
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_1441c8688:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c86fe FUN_1441c86fe body=212 status=ok
// SIG undefined FUN_1441c86fe(void)

void FUN_1441c86fe(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x308))(*(longlong **)(param_1 + 0x20),&local_30);
  *(longlong *)(param_1 + 0x38) = local_30;
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar5 = &DAT_14cb977f8;
  if (*(char *)(lVar1 + 0x5b8) != '\0') {
    puVar5 = (undefined8 *)(lVar1 + 0x5b0);
  }
  uVar2 = *puVar5;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  iVar4 = (int)uVar2;
  if (((iVar4 != 0) && ((int)local_30 != 2)) && ((int)local_30 != iVar4)) {
    FUN_14127bdbc(lVar1,&local_30);
    if (local_28 == 0) {
      cVar3 = FUN_143f37826(*(undefined8 *)(param_1 + 0x20));
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      if (cVar3 == '\0') {
        FUN_148d95d4e(param_1);
        goto LAB_1441c87aa;
      }
    }
    else if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_1441c87aa:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c87d4 FUN_1441c87d4 body=1643 status=ok
// SIG undefined FUN_1441c87d4(void)

longlong * FUN_1441c87d4(longlong *param_1,undefined4 param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  plVar2 = DAT_14c844840;
  *param_1 = (longlong)DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  switch(param_2) {
  case 0:
switchD_1441c8860_caseD_0:
    if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  case 1:
    local_38 = L"CannotPlayOnline_GenericFailure";
    local_30 = 0x1f;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"Cannot play online. Check your network connection.";
    local_30 = 0x32;
    break;
  case 2:
  case 3:
    local_38 = L"CannotPlayOnline_NotLoggedIn";
    local_30 = 0x1c;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"You must connect to the online service to play online.";
    goto LAB_1441c8b5f;
  case 4:
    local_38 = L"CannotPlayOnline_NotLoggedIntoShift";
    local_30 = 0x23;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = 
    L"This feature requires all active players to be connected to Gearbox Software SHiFT.";
    local_30 = 0x53;
    break;
  case 5:
    local_38 = L"CannotPlayOnline_InvalidShiftDisplayName";
    local_30 = 0x28;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"Cannot play online without a valid SHiFT display name.";
LAB_1441c8b5f:
    local_30 = 0x36;
    break;
  case 6:
    local_38 = L"CannotPlayOnline_NoPrivilege";
    local_30 = 0x1c;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"This feature requires all active players to have multiplayer privileges.";
    local_30 = 0x48;
    break;
  case 7:
    local_38 = L"CannotPlayOnline_RequiredSystemUpdate";
    local_30 = 0x25;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"A required system update is available. Please update to access online features.";
    local_30 = 0x4f;
    break;
  case 8:
    local_38 = L"CannotPlayOnline_RequiredPatchAvailable";
    local_30 = 0x27;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"A required game patch is available. Please update to access online features.";
    local_30 = 0x4c;
    break;
  case 9:
    local_38 = L"CannotPlayOnline_AgeRestriction";
    local_30 = 0x1f;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = 
    L"This feature requires all active players to meet the minimum age requirements to play this game."
    ;
    local_30 = 0x60;
    break;
  case 10:
    local_38 = L"CannotPlayOnline_ShiftAgeRestriction";
    local_30 = 0x24;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = 
    L"You do not meet the minimum requirements to access this feature. Please contact customer support for assistance."
    ;
    local_30 = 0x70;
    break;
  case 0xb:
    local_38 = L"CannotPlayOnline_NotFullyInstalled";
    local_30 = 0x22;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"Unable to use multiplayer features; the title is still installing.";
    local_30 = 0x42;
    break;
  case 0xc:
    local_38 = L"CannotPlayOnline_NoConnection";
    local_30 = 0x1d;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"This action is unavailable without a valid network connection.";
    local_30 = 0x3e;
    break;
  default:
    goto switchD_1441c8860_default;
  }
  FUN_140208c1e(local_48,local_50,local_4c,&local_38);
  FUN_140008f88(param_1,local_48);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
switchD_1441c8860_default:
  plVar2 = (longlong *)*param_1;
  if (*(code **)(*plVar2 + 0x50) != FUN_144828418) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x50))();
  }
  FUN_1447a1fc0(plVar2);
  plVar2 = (longlong *)*param_1;
  pcVar1 = *(code **)(*plVar2 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar3 = plVar2 + 3;
    if (plVar2[5] != 0) {
      plVar3 = (longlong *)(plVar2[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar3 = plVar2 + 2;
  }
  else {
    plVar3 = (longlong *)(*pcVar1)(plVar2);
  }
  if ((int)plVar3[1] < 2) {
    FUN_140002266(local_48,L"BUGME - Cannot play online: %s",&DAT_149dfb77a);
    FUN_140233b1a(&local_38,local_48);
    FUN_140008f88(param_1,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
    if (local_48[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  goto switchD_1441c8860_caseD_0;
}



// FUNCTION 1441c8e40 FUN_1441c8e40 body=1112 status=ok
// SIG undefined FUN_1441c8e40(void)

void FUN_1441c8e40(undefined8 param_1,int param_2)

{
  code *pcVar1;
  longlong *plVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  longlong *local_58 [2];
  longlong *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) goto LAB_1441c8e5c;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  local_48 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_40 = 0;
  switch(param_2) {
  case 3:
    local_38 = L"CrossplayPreferenceChangeFailed_RequestInProgress";
    local_30 = 0x31;
    FUN_1446e940c(local_5c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_60,&local_38);
    local_38 = L"Could not change crossplay preference. A request is already in progress.";
    local_30 = 0x48;
    break;
  case 4:
    local_38 = L"CrossplayPreferenceChangeFailed_CrossplayDisabledInShift";
    local_30 = 0x38;
    FUN_1446e940c(local_5c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_60,&local_38);
    local_38 = 
    L"Could not change crossplay preference. Crossplay is currently disabled on this platform.";
    local_30 = 0x58;
    break;
  case 5:
    local_38 = L"CrossplayPreferenceChangeFailed_CrossplayDisabledOnPlatform";
    local_30 = 0x3b;
    FUN_1446e940c(local_5c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_60,&local_38);
    local_38 = L"Could not change crossplay preference. You do not have crossplay permission.";
    local_30 = 0x4c;
    break;
  case 6:
    local_38 = L"CrossplayPreferenceChangeFailed_UserNotLoggedIn";
    local_30 = 0x2f;
    FUN_1446e940c(local_5c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_60,&local_38);
    local_38 = L"Could not change crossplay preference. You are not logged in.";
    local_30 = 0x3d;
    break;
  case 7:
    local_38 = L"CrossplayPreferenceChangeFailed_GeneralFailure";
    local_30 = 0x2e;
    FUN_1446e940c(local_5c,&local_38);
    local_38 = L"OakOnlineSessionClient";
    local_30 = 0x16;
    FUN_1446e940c(local_60,&local_38);
    local_38 = L"Could not change crossplay preference.";
    local_30 = 0x26;
    break;
  default:
    goto switchD_1441c8ef5_default;
  }
  FUN_140208c1e(local_58,local_60,local_5c,&local_38);
  FUN_140008f88(&local_48,local_58);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
switchD_1441c8ef5_default:
  plVar2 = local_48;
  if (*(code **)(*local_48 + 0x50) != FUN_144828418) {
    plVar2 = (longlong *)(**(code **)(*local_48 + 0x50))();
  }
  FUN_1447a1fc0(plVar2);
  pcVar1 = *(code **)(*local_48 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar2 = local_48 + 3;
    if (local_48[5] != 0) {
      plVar2 = (longlong *)(local_48[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar2 = local_48 + 2;
  }
  else {
    plVar2 = (longlong *)(*pcVar1)(local_48);
  }
  if ((int)plVar2[1] < 2) {
    FUN_140002266(local_58,L"BUGME - Could not change crossplay preference: %s",&DAT_149dfb77a);
    FUN_140233b1a(&local_38,local_58);
    FUN_140008f88(&local_48,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
    if (local_58[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_148d90230(param_1,&local_48);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
LAB_1441c8e5c:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441c929a FUN_1441c929a body=889 status=ok
// SIG undefined FUN_1441c929a(void)

longlong * FUN_1441c929a(longlong *param_1,byte param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  plVar2 = DAT_14c844840;
  *param_1 = (longlong)DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_2 == 2) {
    local_50 = L"Kicked_TeleportFailure";
    local_48 = 0x16;
    FUN_1446e940c(local_64,&local_50);
    local_50 = L"OakOnlineSessionClient";
    local_48 = 0x16;
    FUN_1446e940c(local_68,&local_50);
    local_50 = L"You have been removed from the party due to repeated teleport failures.";
    local_48 = 0x47;
  }
  else if (param_2 == 1) {
    local_50 = L"Kicked_CrossPlatformHostDisabledCrossplay";
    local_48 = 0x29;
    FUN_1446e940c(local_64,&local_50);
    local_50 = L"OakOnlineSessionClient";
    local_48 = 0x16;
    FUN_1446e940c(local_68,&local_50);
    local_50 = L"You have been removed from the party because the party leader disabled crossplay.";
    local_48 = 0x51;
  }
  else {
    if (param_2 != 0) goto LAB_1441c947e;
    local_50 = L"Kicked";
    local_48 = 6;
    FUN_1446e940c(local_64,&local_50);
    local_50 = L"OakOnlineSessionClient";
    local_48 = 0x16;
    FUN_1446e940c(local_68,&local_50);
    local_50 = L"The party leader removed you from the party.";
    local_48 = 0x2c;
  }
  FUN_140208c1e(local_60,local_68,local_64,&local_50);
  FUN_140008f88(param_1,local_60);
  if (local_60[0] != (longlong *)0x0) {
    (**(code **)(*local_60[0] + 0x10))();
  }
LAB_1441c947e:
  plVar2 = (longlong *)*param_1;
  if (*(code **)(*plVar2 + 0x50) != FUN_144828418) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x50))();
  }
  FUN_1447a1fc0(plVar2);
  plVar2 = (longlong *)*param_1;
  pcVar1 = *(code **)(*plVar2 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar3 = plVar2 + 3;
    if (plVar2[5] != 0) {
      plVar3 = (longlong *)(plVar2[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar3 = plVar2 + 2;
  }
  else {
    plVar3 = (longlong *)(*pcVar1)(plVar2);
  }
  if ((int)plVar3[1] < 2) {
    if (param_2 < 3) {
      puVar4 = (undefined2 *)(&PTR_DAT_14b98d2a0)[param_2];
    }
    else {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(local_60,L"BUGME - Kicked from party: %s",puVar4);
    FUN_140233b1a(&local_50,local_60);
    FUN_140008f88(param_1,&local_50);
    if (local_50 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_50 + 0x10))();
    }
    if (local_60[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c9614 FUN_1441c9614 body=166 status=ok
// SIG undefined FUN_1441c9614(void)

void FUN_1441c9614(longlong param_1,char param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  if (param_3 != '\0') {
    FUN_1447f69b6(*(longlong *)(param_1 + 0x20) + 0x1e0);
    FUN_141521da0(*(undefined8 *)(param_1 + 0x20));
    FUN_145dcdb2c(*(undefined8 *)(param_1 + 0x20));
  }
  if (param_2 == '\0') {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_146257fec(*(undefined8 *)(param_1 + 0x20));
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_141521eca(*(undefined8 *)(param_1 + 0x20),0);
    }
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x180))();
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
      lVar3 = FUN_14094c9c2();
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) {
        FUN_1461e9aa6();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x40) = uVar2;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 1441c96ba FUN_1441c96ba body=105 status=ok
// SIG undefined FUN_1441c96ba(void)

void FUN_1441c96ba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(lVar3 + 0x598) != 0) {
    *(undefined8 *)(lVar3 + 0x598) = 0;
    plVar4 = *(longlong **)(lVar3 + 0x5a0);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(lVar3 + 0x5a0) = 0;
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
  }
  FUN_1441c9614(param_1,1,1);
  return;
}



// FUNCTION 1441c9724 FUN_1441c9724 body=256 status=ok
// SIG undefined FUN_1441c9724(void)

void FUN_1441c9724(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = param_1[0x106];
  (**(code **)(*param_1 + 0x398))();
  lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar2 == 0) {
LAB_1441c976d:
    if ((char)lVar3 == '\0') {
      FUN_1441c929a(local_30,param_2);
      FUN_148d90230(param_1,local_30);
      if (local_30[0] != (longlong *)0x0) {
        (**(code **)(*local_30[0] + 0x10))();
      }
      FUN_148d9829e(param_1,0);
      goto LAB_1441c97a6;
    }
  }
  else {
    iVar1 = FUN_14490d72a(lVar2);
    if (iVar1 != 3) goto LAB_1441c976d;
  }
  lVar3 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (lVar3 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1441c929a(local_30,param_2);
      FUN_148d31758(lVar3,0,local_30);
      if (local_30[0] != (longlong *)0x0) {
        (**(code **)(*local_30[0] + 0x10))();
      }
    }
  }
LAB_1441c97a6:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c985f FUN_1441c985f body=91 status=ok
// SIG undefined FUN_1441c985f(void)

void FUN_1441c985f(void)

{
  if (DAT_14cbce5d0 != 0) {
    if (DAT_14cbce5c8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbce5c8)(DAT_14cbce5c8,0);
    FUN_1446efa72(&DAT_14cbce5c8,0,0,0x10);
    DAT_14cbce5d0 = 0;
  }
  if (DAT_14cbce5c8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1441c98ba FUN_1441c98ba body=91 status=ok
// SIG undefined FUN_1441c98ba(void)

undefined8 * FUN_1441c98ba(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9838f8;
  if (*(char *)(param_1 + 0x36) == '\x01') {
    plVar2 = (longlong *)param_1[0x32];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 0x36) = 0;
  }
  FUN_1461b9528(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441c9916 FUN_1441c9916 body=29 status=ok
// SIG undefined FUN_1441c9916(void)

undefined8 FUN_1441c9916(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441c9934 FUN_1441c9934 body=95 status=ok
// SIG undefined FUN_1441c9934(void)

ulonglong * FUN_1441c9934(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "CrossSaveRegistrationUpdated";
  local_18 = 0x1c;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441c9994 FUN_1441c9994 body=64 status=ok
// SIG undefined FUN_1441c9994(void)

undefined8 * FUN_1441c9994(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b988b70;
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



// FUNCTION 1441c99e8 FUN_1441c99e8 body=110 status=ok
// SIG undefined FUN_1441c99e8(void)

void FUN_1441c99e8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b988b70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1441c9a56 FUN_1441c9a56 body=110 status=ok
// SIG undefined FUN_1441c9a56(void)

void FUN_1441c9a56(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b988b70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1441c9ac4 FUN_1441c9ac4 body=148 status=ok
// SIG undefined FUN_1441c9ac4(void)

void FUN_1441c9ac4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b988b70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441c9b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441c9b62 FUN_1441c9b62 body=20 status=ok
// SIG undefined FUN_1441c9b62(void)

undefined1 FUN_1441c9b62(longlong param_1)

{
  FUN_1441c9b76(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441c9b76 FUN_1441c9b76 body=182 status=ok
// SIG undefined FUN_1441c9b76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441c9b76(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  
  if (*param_1 == 0) {
    return;
  }
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar3[1] < 1) {
    return;
  }
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) {
      if (_DAT_000000c8 == 0) {
        return;
      }
      if ((DAT_000000b0 == '\x01') && (cVar6 = FUN_140b7582e(0), cVar6 == '\0')) {
        DAT_000000c0 = 2;
        return;
      }
      DAT_000000c0 = 3;
      return;
    }
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar9 = iVar7 == iVar5;
    if (bVar9) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
  } while (!bVar9);
  lVar4 = *param_1;
  if (*(longlong *)(lVar4 + 200) == 0) goto LAB_1441c9bc4;
  if (*(char *)(lVar4 + 0xb0) == '\x01') {
    cVar6 = FUN_140b7582e(lVar4);
    uVar8 = 2;
    if (cVar6 != '\0') goto LAB_1441c9bbc;
  }
  else {
LAB_1441c9bbc:
    uVar8 = 3;
  }
  *(undefined1 *)(lVar4 + 0xc0) = uVar8;
LAB_1441c9bc4:
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
                    /* WARNING: Could not recover jumptable at 0x0001441c9be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1441c9c2c FUN_1441c9c2c body=64 status=ok
// SIG undefined FUN_1441c9c2c(void)

undefined8 * FUN_1441c9c2c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b988c40;
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



// FUNCTION 1441c9c80 FUN_1441c9c80 body=110 status=ok
// SIG undefined FUN_1441c9c80(void)

void FUN_1441c9c80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b988c40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1441c9cee FUN_1441c9cee body=110 status=ok
// SIG undefined FUN_1441c9cee(void)

void FUN_1441c9cee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b988c40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1441c9d5c FUN_1441c9d5c body=148 status=ok
// SIG undefined FUN_1441c9d5c(void)

void FUN_1441c9d5c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b988c40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441c9de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441c9dfa FUN_1441c9dfa body=20 status=ok
// SIG undefined FUN_1441c9dfa(void)

undefined1 FUN_1441c9dfa(longlong param_1)

{
  FUN_1441c9e0e(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441c9e0e FUN_1441c9e0e body=106 status=ok
// SIG undefined FUN_1441c9e0e(void)

void FUN_1441c9e0e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*param_1 != 0) && (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) &&
     (0 < (int)plVar3[1])) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_148d8ca42(0);
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    FUN_148d8ca42(*param_1);
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
                    /* WARNING: Could not recover jumptable at 0x0001441c9e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1441c9e78 FUN_1441c9e78 body=29 status=ok
// SIG undefined FUN_1441c9e78(void)

undefined8 FUN_1441c9e78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ca014 FUN_1441ca014 body=93 status=ok
// SIG undefined FUN_1441ca014(void)

void FUN_1441ca014(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b988e50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441ca072 FUN_1441ca072 body=93 status=ok
// SIG undefined FUN_1441ca072(void)

void FUN_1441ca072(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b988e50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441ca0d0 FUN_1441ca0d0 body=126 status=ok
// SIG undefined FUN_1441ca0d0(void)

void FUN_1441ca0d0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b988e50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ca13f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ca158 FUN_1441ca158 body=278 status=ok
// SIG undefined FUN_1441ca158(void)

undefined8 FUN_1441ca158(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441ca268;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441ca268;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441ca268:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441ca21b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441ca270(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_1441ca21b;
    }
  }
  uVar6 = 0;
LAB_1441ca21b:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ca270 FUN_1441ca270 body=339 status=ok
// SIG undefined FUN_1441ca270(void)

void FUN_1441ca270(uint *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_14167dc04();
  if ((((cVar2 != '\0') || (*(longlong *)(param_2 + 0x68) != DAT_14cbc18c8)) || (param_1[1] == 0))
     || ((uVar1 = *param_1, (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)))) goto LAB_1441ca39b;
  plVar4 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if ((plVar4 == (longlong *)0x0) ||
     ((*(uint *)(plVar4 + 2) != param_1[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
  goto LAB_1441ca39b;
  if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
    lVar3 = *plVar4;
  }
  else {
    lVar3 = 0;
  }
  cVar2 = (**(code **)(*(longlong *)(lVar3 + 0x3c0) + 0x58))(lVar3 + 0x3c0);
  if (cVar2 == '\0') goto LAB_1441ca39b;
  if (param_1[1] == 0) {
LAB_1441ca3b9:
    lVar3 = 0;
  }
  else {
    uVar1 = *param_1;
    lVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_1[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_1441ca3b9;
      lVar3 = *plVar4;
    }
  }
  local_1c = 0;
  local_30 = DAT_14cbc18c8;
  local_28 = 0xffffffff;
  FUN_141094e00(lVar3 + 0x4d8,&local_30,0);
LAB_1441ca39b:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ca3c4 FUN_1441ca3c4 body=29 status=ok
// SIG undefined FUN_1441ca3c4(void)

undefined8 FUN_1441ca3c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ca560 FUN_1441ca560 body=101 status=ok
// SIG undefined FUN_1441ca560(void)

void FUN_1441ca560(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b988ec0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441ca5c6 FUN_1441ca5c6 body=101 status=ok
// SIG undefined FUN_1441ca5c6(void)

void FUN_1441ca5c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b988ec0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441ca62c FUN_1441ca62c body=134 status=ok
// SIG undefined FUN_1441ca62c(void)

void FUN_1441ca62c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b988ec0;
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
                    /* WARNING: Could not recover jumptable at 0x0001441ca6a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ca6bc FUN_1441ca6bc body=269 status=ok
// SIG undefined FUN_1441ca6bc(void)

undefined8 FUN_1441ca6bc(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441ca7c3;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441ca7c3;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441ca7c3:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441ca777;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441ca7ca(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1441ca777;
    }
  }
  uVar6 = 0;
LAB_1441ca777:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ca7ca FUN_1441ca7ca body=215 status=ok
// SIG undefined FUN_1441ca7ca(void)

void FUN_1441ca7ca(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_14167dc04();
  if ((((cVar2 != '\0') && (*(int *)(param_1 + 0xc) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      local_1c = 0;
      local_30 = DAT_14cbc18c8;
      local_28 = 0xffffffff;
      FUN_141094e00(lVar3 + 0x4d8,&local_30,1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ca8b4 FUN_1441ca8b4 body=64 status=ok
// SIG undefined FUN_1441ca8b4(void)

undefined8 * FUN_1441ca8b4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b989070;
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



// FUNCTION 1441ca8f8 FUN_1441ca8f8 body=81 status=ok
// SIG undefined FUN_1441ca8f8(void)

undefined8 FUN_1441ca8f8(longlong param_1)

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



// FUNCTION 1441ca94e FUN_1441ca94e body=89 status=ok
// SIG undefined FUN_1441ca94e(void)

bool FUN_1441ca94e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441ca999;
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
LAB_1441ca999:
  return lVar6 == param_2;
}



// FUNCTION 1441ca9c4 FUN_1441ca9c4 body=118 status=ok
// SIG undefined FUN_1441ca9c4(void)

void FUN_1441ca9c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98d0c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989070;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441caa3a FUN_1441caa3a body=118 status=ok
// SIG undefined FUN_1441caa3a(void)

void FUN_1441caa3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98d0c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989070;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441caab0 FUN_1441caab0 body=156 status=ok
// SIG undefined FUN_1441caab0(void)

void FUN_1441caab0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b98d0c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b989070;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cab3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cab56 FUN_1441cab56 body=46 status=ok
// SIG undefined FUN_1441cab56(void)

undefined8 FUN_1441cab56(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441cab84(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1441cab84 FUN_1441cab84 body=793 status=ok
// SIG undefined FUN_1441cab84(void)

void FUN_1441cab84(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  int iVar13;
  longlong lVar14;
  ushort uVar15;
  int *piVar16;
  ulonglong uVar17;
  longlong lVar18;
  int *piVar19;
  undefined1 auStack_438 [32];
  longlong *local_418;
  longlong local_408;
  undefined8 uStack_400;
  longlong local_3f8 [3];
  undefined8 uStack_3e0;
  undefined1 local_3d8 [440];
  char local_220;
  longlong local_218 [55];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_438;
  lVar6 = *param_1;
  local_3f8[2] = 0;
  uStack_3e0 = 0;
  local_418 = local_3f8;
  local_3f8[0] = 0;
  local_3f8[1] = 0;
  cVar8 = FUN_148d8d9a4(lVar6,(int)param_1[1],param_2);
  if (cVar8 == '\0') {
    if (*(int *)(lVar6 + 0x30) != *(int *)(lVar6 + 0x5c)) {
      iVar3 = (int)param_1[1];
      lVar9 = *(longlong *)(lVar6 + 0x68);
      if (*(longlong *)(lVar6 + 0x68) == 0) {
        lVar9 = lVar6 + 0x60;
      }
      piVar16 = (int *)(lVar9 + ((longlong)*(int *)(lVar6 + 0x70) - 1U & (longlong)iVar3) * 4);
      do {
        iVar4 = *piVar16;
        lVar9 = (longlong)iVar4;
        if (lVar9 == -1) break;
        piVar1 = (int *)(*(longlong *)(lVar6 + 0x28) + lVar9 * 0xc);
        iVar5 = *piVar1;
        if (iVar5 == iVar3) {
          lVar18 = *(longlong *)(lVar6 + 0x68);
          if (*(longlong *)(lVar6 + 0x68) == 0) {
            lVar18 = lVar6 + 0x60;
          }
          iVar13 = *(int *)(lVar18 + (longlong)piVar1[2] * 4);
          if (iVar13 == iVar4) {
            piVar19 = (int *)(lVar18 + (longlong)piVar1[2] * 4);
          }
          else {
            do {
              piVar19 = (int *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar13 * 0xc + 4);
              iVar13 = *piVar19;
            } while (iVar13 != iVar4);
          }
          *piVar19 = piVar1[1];
          lVar18 = *(longlong *)(lVar6 + 0x28);
          if (*(int *)(lVar6 + 0x5c) != 0) {
            *(int *)(lVar18 + (longlong)*(int *)(lVar6 + 0x58) * 0xc) = iVar4;
          }
          *(undefined4 *)(lVar18 + lVar9 * 0xc) = 0xffffffff;
          uVar12 = 0xffffffff;
          if (0 < *(int *)(lVar6 + 0x5c)) {
            uVar12 = *(undefined4 *)(lVar6 + 0x58);
          }
          *(undefined4 *)(lVar18 + lVar9 * 0xc + 4) = uVar12;
          *(int *)(lVar6 + 0x58) = iVar4;
          *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
          lVar9 = *(longlong *)(lVar6 + 0x48);
          if (*(longlong *)(lVar6 + 0x48) == 0) {
            lVar9 = lVar6 + 0x38;
          }
          iVar13 = iVar4 + 0x1f;
          if (-1 < iVar4) {
            iVar13 = iVar4;
          }
          bVar7 = (byte)iVar4 & 0x1f;
          puVar2 = (uint *)(lVar9 + (longlong)(iVar13 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        }
        else {
          piVar16 = piVar1 + 1;
        }
      } while (iVar5 != iVar3);
    }
  }
  else {
    FUN_141073488(local_218);
    FUN_14596feca(lVar6,local_3d8);
    if ((local_220 == '\x01') && ((longlong)(int)param_2[1] != 0)) {
      lVar9 = *param_2;
      lVar18 = (longlong)(int)param_2[1] * 0x1b8 + lVar9;
      do {
        local_408 = 0;
        uStack_400 = 0;
        FUN_1407c869a(lVar9 + 0xb0,&local_408);
        if ((int)uStack_400 == (int)uStack_3e0) {
          if (1 < (int)uStack_400) {
            lVar14 = 0;
            while( true ) {
              uVar10 = *(ushort *)(local_408 + lVar14);
              uVar11 = (ulonglong)uVar10;
              uVar15 = *(ushort *)(local_3f8[2] + lVar14);
              if (uVar10 != uVar15) break;
              if (uVar10 == 0) goto LAB_1441cadd7;
LAB_1441cad94:
              lVar14 = lVar14 + 2;
            }
            if ((uVar15 | uVar10) < 0x80) {
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              uVar17 = (ulonglong)uVar15;
              uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
              if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar17]) goto LAB_1441cad94;
            }
            if (uVar10 != uVar15) goto LAB_1441cadbf;
          }
LAB_1441cadd7:
          cVar8 = *(char *)(lVar9 + 0x58);
          if (local_408 != 0) {
            FUN_1400020a8();
          }
          if (cVar8 == '\x03') {
            FUN_148c01956(local_218,lVar9);
            local_418 = local_218;
            FUN_148d8dde4(lVar6,(int)param_1[1],local_3d8,local_3f8);
            break;
          }
        }
        else {
          if ((int)uStack_3e0 + (int)uStack_400 == 1) goto LAB_1441cadd7;
LAB_1441cadbf:
          if (local_408 != 0) {
            FUN_1400020a8();
          }
        }
        lVar9 = lVar9 + 0x1b8;
      } while (lVar9 != lVar18);
    }
    if (local_220 == '\x01') {
      FUN_141072d6a(local_3d8);
    }
    FUN_141072d6a(local_218);
  }
  if (local_3f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_3f8[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441cae9e FUN_1441cae9e body=78 status=ok
// SIG undefined FUN_1441cae9e(void)

undefined8 * FUN_1441cae9e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9890e0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1441caef0 FUN_1441caef0 body=81 status=ok
// SIG undefined FUN_1441caef0(void)

undefined8 FUN_1441caef0(longlong param_1)

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



// FUNCTION 1441caf46 FUN_1441caf46 body=89 status=ok
// SIG undefined FUN_1441caf46(void)

bool FUN_1441caf46(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441caf91;
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
LAB_1441caf91:
  return lVar6 == param_2;
}



// FUNCTION 1441cafbc FUN_1441cafbc body=198 status=ok
// SIG undefined FUN_1441cafbc(void)

void FUN_1441cafbc(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b98cfe0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9890e0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  return;
}



// FUNCTION 1441cb082 FUN_1441cb082 body=198 status=ok
// SIG undefined FUN_1441cb082(void)

void FUN_1441cb082(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b98cfe0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9890e0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  puVar2[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)(puVar2 + 8) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 7,iVar1,0);
    memcpy((void *)puVar2[7],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  return;
}



// FUNCTION 1441cb148 FUN_1441cb148 body=237 status=ok
// SIG undefined FUN_1441cb148(void)

void FUN_1441cb148(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  int iVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong lVar4;
  undefined8 uVar5;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var3 = param_2[1].DebugInfo;
  *(undefined ***)p_Var3 = &PTR_LAB_14b98cfe0;
  (p_Var3->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var3 = &PTR_FUN_14b9890e0;
  (p_Var3->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x20);
  p_Var3->EntryCount = (int)lVar4;
  p_Var3->ContentionCount = (int)((ulonglong)lVar4 >> 0x20);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  p_Var3[1].Type = (short)uVar1;
  p_Var3[1].CreatorBackTraceIndex = (short)((uint)uVar1 >> 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  p_Var3->Flags = (int)uVar5;
  p_Var3->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar5 >> 0x20);
  p_Var3->SpareWORD = (short)((ulonglong)uVar5 >> 0x30);
  p_Var3[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  iVar2 = *(int *)(param_1 + 0x40);
  _Src = *(void **)(param_1 + 0x38);
  *(int *)&p_Var3[1].ProcessLocksList.Flink = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)&p_Var3[1].ProcessLocksList.Flink + 4) = 0;
  }
  else {
    FUN_1446dd670(&p_Var3[1].CriticalSection,iVar2,0);
    memcpy(p_Var3[1].CriticalSection,_Src,(longlong)iVar2 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cb223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cb236 FUN_1441cb236 body=328 status=ok
// SIG undefined FUN_1441cb236(void)

void FUN_1441cb236(longlong param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  int *piVar13;
  
  lVar6 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar6 + 0x30) != *(int *)(lVar6 + 0x5c)) {
    iVar3 = *(int *)(param_1 + 0x30);
    lVar8 = *(longlong *)(lVar6 + 0x68);
    if (*(longlong *)(lVar6 + 0x68) == 0) {
      lVar8 = lVar6 + 0x60;
    }
    piVar11 = (int *)(lVar8 + ((longlong)*(int *)(lVar6 + 0x70) - 1U & (longlong)iVar3) * 4);
    do {
      iVar4 = *piVar11;
      lVar8 = (longlong)iVar4;
      if (lVar8 == -1) break;
      piVar1 = (int *)(*(longlong *)(lVar6 + 0x28) + lVar8 * 0xc);
      iVar5 = *piVar1;
      if (iVar5 == iVar3) {
        lVar12 = *(longlong *)(lVar6 + 0x68);
        if (*(longlong *)(lVar6 + 0x68) == 0) {
          lVar12 = lVar6 + 0x60;
        }
        iVar10 = *(int *)(lVar12 + (longlong)piVar1[2] * 4);
        if (iVar10 == iVar4) {
          piVar13 = (int *)(lVar12 + (longlong)piVar1[2] * 4);
        }
        else {
          do {
            piVar13 = (int *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar10 * 0xc + 4);
            iVar10 = *piVar13;
          } while (iVar10 != iVar4);
        }
        *piVar13 = piVar1[1];
        lVar12 = *(longlong *)(lVar6 + 0x28);
        if (*(int *)(lVar6 + 0x5c) != 0) {
          *(int *)(lVar12 + (longlong)*(int *)(lVar6 + 0x58) * 0xc) = iVar4;
        }
        *(undefined4 *)(lVar12 + lVar8 * 0xc) = 0xffffffff;
        uVar9 = 0xffffffff;
        if (0 < *(int *)(lVar6 + 0x5c)) {
          uVar9 = *(undefined4 *)(lVar6 + 0x58);
        }
        *(undefined4 *)(lVar12 + lVar8 * 0xc + 4) = uVar9;
        *(int *)(lVar6 + 0x58) = iVar4;
        *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
        lVar8 = *(longlong *)(lVar6 + 0x48);
        if (*(longlong *)(lVar6 + 0x48) == 0) {
          lVar8 = lVar6 + 0x38;
        }
        iVar10 = iVar4 + 0x1f;
        if (-1 < iVar4) {
          iVar10 = iVar4;
        }
        bVar7 = (byte)iVar4 & 0x1f;
        puVar2 = (uint *)(lVar8 + (longlong)(iVar10 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
      }
      else {
        piVar11 = piVar1 + 1;
      }
    } while (iVar5 != iVar3);
  }
  if (param_2 == 0) {
    FUN_148d8e7fe(lVar6,*(undefined4 *)(param_1 + 0x30),param_1 + 0x38);
    return;
  }
  return;
}



// FUNCTION 1441cb37e FUN_1441cb37e body=369 status=ok
// SIG undefined FUN_1441cb37e(void)

ulonglong FUN_1441cb37e(longlong param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  undefined4 uVar9;
  int iVar10;
  int *unaff_RSI;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar11 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x28);
    if (*(int *)(lVar6 + 0x30) != *(int *)(lVar6 + 0x5c)) {
      iVar3 = *(int *)(param_1 + 0x30);
      lVar8 = *(longlong *)(lVar6 + 0x68);
      if (*(longlong *)(lVar6 + 0x68) == 0) {
        lVar8 = lVar6 + 0x60;
      }
      unaff_RSI = (int *)(lVar8 + ((longlong)*(int *)(lVar6 + 0x70) - 1U & (longlong)iVar3) * 4);
      do {
        iVar4 = *unaff_RSI;
        lVar8 = (longlong)iVar4;
        if (lVar8 == -1) break;
        piVar1 = (int *)(*(longlong *)(lVar6 + 0x28) + lVar8 * 0xc);
        iVar5 = *piVar1;
        if (iVar5 == iVar3) {
          lVar12 = *(longlong *)(lVar6 + 0x68);
          if (*(longlong *)(lVar6 + 0x68) == 0) {
            lVar12 = lVar6 + 0x60;
          }
          iVar10 = *(int *)(lVar12 + (longlong)piVar1[2] * 4);
          if (iVar10 == iVar4) {
            piVar13 = (int *)(lVar12 + (longlong)piVar1[2] * 4);
          }
          else {
            do {
              piVar13 = (int *)(*(longlong *)(lVar6 + 0x28) + (longlong)iVar10 * 0xc + 4);
              iVar10 = *piVar13;
            } while (iVar10 != iVar4);
          }
          *piVar13 = piVar1[1];
          lVar12 = *(longlong *)(lVar6 + 0x28);
          if (*(int *)(lVar6 + 0x5c) != 0) {
            *(int *)(lVar12 + (longlong)*(int *)(lVar6 + 0x58) * 0xc) = iVar4;
          }
          *(undefined4 *)(lVar12 + lVar8 * 0xc) = 0xffffffff;
          uVar9 = 0xffffffff;
          if (0 < *(int *)(lVar6 + 0x5c)) {
            uVar9 = *(undefined4 *)(lVar6 + 0x58);
          }
          *(undefined4 *)(lVar12 + lVar8 * 0xc + 4) = uVar9;
          *(int *)(lVar6 + 0x58) = iVar4;
          *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
          lVar8 = *(longlong *)(lVar6 + 0x48);
          if (*(longlong *)(lVar6 + 0x48) == 0) {
            lVar8 = lVar6 + 0x38;
          }
          iVar10 = iVar4 + 0x1f;
          if (-1 < iVar4) {
            iVar10 = iVar4;
          }
          bVar7 = (byte)iVar4 & 0x1f;
          puVar2 = (uint *)(lVar8 + (longlong)(iVar10 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        }
        else {
          unaff_RSI = piVar1 + 1;
        }
      } while (iVar5 != iVar3);
    }
    uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (param_2 == 0) {
      FUN_148d8e7fe(lVar6,*(undefined4 *)(param_1 + 0x30),param_1 + 0x38);
    }
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 1441cb4f0 FUN_1441cb4f0 body=132 status=ok
// SIG undefined FUN_1441cb4f0(void)

undefined8 * FUN_1441cb4f0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b989150;
  plVar3 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441cb541;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1441cb541:
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441cb578 FUN_1441cb578 body=81 status=ok
// SIG undefined FUN_1441cb578(void)

undefined8 FUN_1441cb578(longlong param_1)

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



// FUNCTION 1441cb5ce FUN_1441cb5ce body=89 status=ok
// SIG undefined FUN_1441cb5ce(void)

bool FUN_1441cb5ce(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441cb619;
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
LAB_1441cb619:
  return lVar6 == param_2;
}



// FUNCTION 1441cb644 FUN_1441cb644 body=154 status=ok
// SIG undefined FUN_1441cb644(void)

void FUN_1441cb644(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98d0c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989150;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  FUN_1458e1848(puVar1 + 7,param_1 + 0x38);
  return;
}



// FUNCTION 1441cb6de FUN_1441cb6de body=154 status=ok
// SIG undefined FUN_1441cb6de(void)

void FUN_1441cb6de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98d0c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989150;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  FUN_1458e1848(puVar1 + 7,param_1 + 0x38);
  return;
}



// FUNCTION 1441cb778 FUN_1441cb778 body=193 status=ok
// SIG undefined FUN_1441cb778(void)

void FUN_1441cb778(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  longlong lVar3;
  undefined8 uVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b98d0c0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b989150;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)lVar3;
  p_Var2->ContentionCount = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)uVar1 >> 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  p_Var2->Flags = (int)uVar4;
  p_Var2->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar4 >> 0x20);
  p_Var2->SpareWORD = (short)((ulonglong)uVar4 >> 0x30);
  p_Var2[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Flink = 0;
  FUN_1458e1848(&p_Var2[1].CriticalSection,param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cb829. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cb844 FUN_1441cb844 body=46 status=ok
// SIG undefined FUN_1441cb844(void)

undefined8 FUN_1441cb844(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441cb872(param_1 + 0x28);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1441cb872 FUN_1441cb872 body=447 status=ok
// SIG undefined FUN_1441cb872(void)

void FUN_1441cb872(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong *plVar8;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0 && (int)param_1[3] != 0) {
    (**(code **)(*(longlong *)param_1[2] + 0x60))();
  }
  if ((((*(int *)(lVar2 + 0x14) != 0) && (uVar6 = *(uint *)(lVar2 + 0x10), -1 < (int)uVar6)) &&
      ((int)uVar6 < DAT_14c9647dc)) &&
     (((plVar8 = (longlong *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(lVar2 + 0x14))) &&
      (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar3 = *plVar8, lVar3 != 0)))))) {
    lVar4 = FUN_1403ca142();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) &&
       ((lVar3 = *(longlong *)(lVar3 + 0x1e0), lVar3 != 0 &&
        (lVar4 = *(longlong *)(lVar3 + 0x30), lVar4 != 0)))) {
      lVar3 = *(longlong *)(lVar3 + 0x68);
      lVar5 = FUN_14130c5c8();
      if ((((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) && (lVar3 != 0)
           ) && (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
         (*(int *)(lVar2 + 0x90) != *(int *)(lVar2 + 0xbc))) {
        lVar5 = lVar2 + 0xc0;
        if (*(longlong *)(lVar2 + 200) != 0) {
          lVar5 = *(longlong *)(lVar2 + 200);
        }
        uVar6 = *(uint *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0xd0) - 1U & *(uint *)(param_1 + 1))
                                  * 4);
        if (uVar6 != 0xffffffff) {
          do {
            puVar1 = (uint *)(*(longlong *)(lVar2 + 0x88) + (longlong)(int)uVar6 * 0x18);
            if (*puVar1 == *(uint *)(param_1 + 1)) {
              puVar7 = puVar1 + 2;
              if (puVar7 != (uint *)0x0 && puVar1 != (uint *)0x0) {
                local_38 = *(undefined8 *)puVar7;
                puVar7[0] = 0;
                puVar7[1] = 0;
                FUN_146062ebc((longlong *)(lVar2 + 0x88),(int)param_1[1]);
                FUN_140ceec26(lVar3,local_3c,(int)param_1[1]);
                FUN_14665d90a(lVar4,local_3c,&local_38);
              }
              break;
            }
            uVar6 = puVar1[4];
          } while (uVar6 != 0xffffffff);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441cba32 FUN_1441cba32 body=48 status=ok
// SIG undefined FUN_1441cba32(void)

void FUN_1441cba32(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1441cba62 FUN_1441cba62 body=76 status=ok
// SIG undefined FUN_1441cba62(void)

void FUN_1441cba62(longlong param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b0703c0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1441cbaae FUN_1441cbaae body=29 status=ok
// SIG undefined FUN_1441cbaae(void)

undefined8 FUN_1441cbaae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441cbacc FUN_1441cbacc body=141 status=ok
// SIG undefined FUN_1441cbacc(void)

undefined8 * FUN_1441cbacc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b989200;
  plVar1 = param_1 + 9;
  if (*(int *)(param_1 + 10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441cbb1d;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 10) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1441cbb1d:
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441cbb6e FUN_1441cbb6e body=173 status=ok
// SIG undefined FUN_1441cbb6e(void)

void FUN_1441cbb6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989200;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar3;
  *(undefined4 *)(puVar1 + 4) = uVar4;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uVar5;
  plVar2 = *(longlong **)(param_1 + 0x28);
  puVar1[5] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
  plVar2 = *(longlong **)(param_1 + 0x38);
  puVar1[7] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_1 + 0x40);
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  FUN_148a7189c(puVar1 + 9,param_1 + 0x48);
  return;
}



// FUNCTION 1441cbc1c FUN_1441cbc1c body=173 status=ok
// SIG undefined FUN_1441cbc1c(void)

void FUN_1441cbc1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989200;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar3;
  *(undefined4 *)(puVar1 + 4) = uVar4;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uVar5;
  plVar2 = *(longlong **)(param_1 + 0x28);
  puVar1[5] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
  plVar2 = *(longlong **)(param_1 + 0x38);
  puVar1[7] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_1 + 0x40);
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  FUN_148a7189c(puVar1 + 9,param_1 + 0x48);
  return;
}



// FUNCTION 1441cbcca FUN_1441cbcca body=212 status=ok
// SIG undefined FUN_1441cbcca(void)

void FUN_1441cbcca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  longlong *plVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  DWORD DVar5;
  DWORD DVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b972ed0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b989200;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  DVar5 = *(DWORD *)(param_1 + 0x20);
  DVar6 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var2->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var2->ProcessLocksList).Blink + 4) = uVar1;
  p_Var2->EntryCount = DVar5;
  p_Var2->ContentionCount = DVar6;
  plVar3 = *(longlong **)(param_1 + 0x28);
  *(longlong **)&p_Var2->Flags = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)uVar1 >> 0x10);
  p_Var4 = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var2[1].CriticalSection = p_Var4;
  if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
    (*(code *)p_Var4->DebugInfo->CriticalSection)();
  }
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Flink = *(undefined4 *)(param_1 + 0x40);
  p_Var2[1].ProcessLocksList.Blink = (_LIST_ENTRY *)0x0;
  p_Var2[1].EntryCount = 0;
  FUN_148a7189c(&p_Var2[1].ProcessLocksList.Blink,param_1 + 0x48);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cbd8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cbda8 FUN_1441cbda8 body=20 status=ok
// SIG undefined FUN_1441cbda8(void)

undefined1 FUN_1441cbda8(longlong param_1)

{
  FUN_1441cbdbc(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441cbdbc FUN_1441cbdbc body=268 status=ok
// SIG undefined FUN_1441cbdbc(void)

void FUN_1441cbdbc(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  cVar3 = FUN_14002b5e0(*param_2,"choose_local",0xc);
  if (cVar3 == '\0') {
    cVar3 = FUN_14002b5e0(*param_2,"choose_cloud",0xc);
    if (cVar3 == '\0') {
      plVar2 = (longlong *)param_1[6];
      if (plVar2 != (longlong *)0x0 && (int)param_1[7] != 0) {
        (**(code **)(*plVar2 + 0x60))(plVar2,0x17);
      }
      *(undefined4 *)(lVar1 + 0x170) = 0xffffffff;
      goto LAB_1441cbe34;
    }
    local_30 = 0;
    local_28 = 0;
    FUN_148a7189c(&local_30,param_1 + 6);
    lVar4 = param_1[1];
    param_1 = param_1 + 4;
    uVar5 = 0x15;
  }
  else {
    local_30 = 0;
    local_28 = 0;
    FUN_148a7189c(&local_30,param_1 + 6);
    lVar4 = param_1[1];
    param_1 = param_1 + 2;
    uVar5 = 0x16;
  }
  local_38 = &local_30;
  FUN_1441b9600(lVar1,lVar4,param_1,uVar5);
LAB_1441cbe34:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441cbeca FUN_1441cbeca body=111 status=ok
// SIG undefined FUN_1441cbeca(void)

undefined8 * FUN_1441cbeca(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b989270;
  plVar1 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441cbf1b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1441cbf1b:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441cbf4e FUN_1441cbf4e body=127 status=ok
// SIG undefined FUN_1441cbf4e(void)

void FUN_1441cbf4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989270;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar2;
  *(undefined4 *)(puVar1 + 4) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uVar4;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_148a7189c(puVar1 + 5,param_1 + 0x28);
  *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_1 + 0x38);
  return;
}



// FUNCTION 1441cbfce FUN_1441cbfce body=127 status=ok
// SIG undefined FUN_1441cbfce(void)

void FUN_1441cbfce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989270;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar2;
  *(undefined4 *)(puVar1 + 4) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uVar4;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_148a7189c(puVar1 + 5,param_1 + 0x28);
  *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_1 + 0x38);
  return;
}



// FUNCTION 1441cc04e FUN_1441cc04e body=163 status=ok
// SIG undefined FUN_1441cc04e(void)

void FUN_1441cc04e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b989270;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  FUN_148a7189c(&p_Var1->Flags,param_1 + 0x28);
  *(undefined1 *)&p_Var1[1].CriticalSection = *(undefined1 *)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cc0e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cc0fc FUN_1441cc0fc body=20 status=ok
// SIG undefined FUN_1441cc0fc(void)

undefined1 FUN_1441cc0fc(longlong param_1)

{
  FUN_1441cc110(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441cc110 FUN_1441cc110 body=119 status=ok
// SIG undefined FUN_1441cc110(void)

void FUN_1441cc110(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 400) = 0xffffffff;
  cVar3 = FUN_14002b5e0(*param_2,&DAT_14a179933,3);
  if (cVar3 != '\0') {
    FUN_146142a30(param_1[1],*(undefined4 *)(lVar1 + 0x170));
    *(undefined4 *)(lVar1 + 0x170) = 0xffffffff;
    plVar2 = (longlong *)param_1[2];
    if (plVar2 != (longlong *)0x0 && (int)param_1[3] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cc184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x60))(plVar2,(char)param_1[4]);
      return;
    }
  }
  return;
}



// FUNCTION 1441cc188 FUN_1441cc188 body=111 status=ok
// SIG undefined FUN_1441cc188(void)

undefined8 * FUN_1441cc188(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b9892e0;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1441cc1d9;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1441cc1d9:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441cc20c FUN_1441cc20c body=123 status=ok
// SIG undefined FUN_1441cc20c(void)

void FUN_1441cc20c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9892e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_148a7189c(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 1441cc288 FUN_1441cc288 body=123 status=ok
// SIG undefined FUN_1441cc288(void)

void FUN_1441cc288(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9892e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_148a7189c(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 1441cc304 FUN_1441cc304 body=157 status=ok
// SIG undefined FUN_1441cc304(void)

void FUN_1441cc304(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9892e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_148a7189c(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cc392. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cc3d2 FUN_1441cc3d2 body=54 status=ok
// SIG undefined FUN_1441cc3d2(void)

undefined8 FUN_1441cc3d2(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar1 + 0x194) = 0xffffffff;
  uVar3 = (undefined7)((ulonglong)lVar1 >> 8);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0 && *(int *)(param_1 + 0x28) != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,0);
    uVar3 = extraout_var;
  }
  return CONCAT71(uVar3,1);
}



// FUNCTION 1441cc408 FUN_1441cc408 body=294 status=ok
// SIG undefined FUN_1441cc408(void)

void FUN_1441cc408(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1441cc4d1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_1441cc480:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_1441cc480;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1441cc4d1;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1441cc4d1:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441cc530 FUN_1441cc530 body=29 status=ok
// SIG undefined FUN_1441cc530(void)

undefined8 FUN_1441cc530(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441cc562 FUN_1441cc562 body=93 status=ok
// SIG undefined FUN_1441cc562(void)

void FUN_1441cc562(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989350;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441cc5c0 FUN_1441cc5c0 body=93 status=ok
// SIG undefined FUN_1441cc5c0(void)

void FUN_1441cc5c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989350;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441cc61e FUN_1441cc61e body=126 status=ok
// SIG undefined FUN_1441cc61e(void)

void FUN_1441cc61e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b989350;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cc68d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cc6a6 FUN_1441cc6a6 body=20 status=ok
// SIG undefined FUN_1441cc6a6(void)

undefined1 FUN_1441cc6a6(longlong param_1)

{
  FUN_1441cc6ba(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441cc6ba FUN_1441cc6ba body=122 status=ok
// SIG undefined FUN_1441cc6ba(void)

void FUN_1441cc6ba(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  cVar3 = FUN_14002b5e0(*param_2,&DAT_14a179933,3);
  if ((cVar3 != '\0') && (*(longlong *)(lVar1 + 0x70) != 0)) {
    lVar4 = FUN_1403ca142();
    lVar1 = *(longlong *)(lVar1 + 0x70);
    if (((lVar1 != 0) &&
        (((lVar4 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
         (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      cVar3 = FUN_1457bc0a8(lVar1);
      if (cVar3 == '\0') {
        FUN_148d313a4(lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1441cc734 FUN_1441cc734 body=64 status=ok
// SIG undefined FUN_1441cc734(void)

undefined8 * FUN_1441cc734(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9893c0;
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



// FUNCTION 1441cc778 FUN_1441cc778 body=81 status=ok
// SIG undefined FUN_1441cc778(void)

undefined8 FUN_1441cc778(longlong param_1)

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



// FUNCTION 1441cc7ce FUN_1441cc7ce body=89 status=ok
// SIG undefined FUN_1441cc7ce(void)

bool FUN_1441cc7ce(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441cc819;
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
LAB_1441cc819:
  return lVar6 == param_2;
}



// FUNCTION 1441cc844 FUN_1441cc844 body=118 status=ok
// SIG undefined FUN_1441cc844(void)

void FUN_1441cc844(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9893c0;
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



// FUNCTION 1441cc8ba FUN_1441cc8ba body=118 status=ok
// SIG undefined FUN_1441cc8ba(void)

void FUN_1441cc8ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9893c0;
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



// FUNCTION 1441cc930 FUN_1441cc930 body=156 status=ok
// SIG undefined FUN_1441cc930(void)

void FUN_1441cc930(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9893c0;
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
                    /* WARNING: Could not recover jumptable at 0x0001441cc9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cca00 FUN_1441cca00 body=64 status=ok
// SIG undefined FUN_1441cca00(void)

undefined8 * FUN_1441cca00(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b989430;
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



// FUNCTION 1441cca44 FUN_1441cca44 body=81 status=ok
// SIG undefined FUN_1441cca44(void)

undefined8 FUN_1441cca44(longlong param_1)

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



// FUNCTION 1441cca9a FUN_1441cca9a body=89 status=ok
// SIG undefined FUN_1441cca9a(void)

bool FUN_1441cca9a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441ccae5;
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
LAB_1441ccae5:
  return lVar6 == param_2;
}



// FUNCTION 1441ccb10 FUN_1441ccb10 body=118 status=ok
// SIG undefined FUN_1441ccb10(void)

void FUN_1441ccb10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989430;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441ccb86 FUN_1441ccb86 body=118 status=ok
// SIG undefined FUN_1441ccb86(void)

void FUN_1441ccb86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989430;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441ccbfc FUN_1441ccbfc body=156 status=ok
// SIG undefined FUN_1441ccbfc(void)

void FUN_1441ccbfc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ecf50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b989430;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ccc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ccc98 FUN_1441ccc98 body=66 status=ok
// SIG undefined FUN_1441ccc98(void)

void FUN_1441ccc98(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1441ccd3a(param_1 + 0x28,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441cccdc FUN_1441cccdc body=93 status=ok
// SIG undefined FUN_1441cccdc(void)

undefined8 FUN_1441cccdc(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_1441ccd3a(param_1 + 0x28,&local_10);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ccd3a FUN_1441ccd3a body=794 status=ok
// SIG undefined FUN_1441ccd3a(void)

void FUN_1441ccd3a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auStack_b8 [32];
  uint local_98;
  int local_94;
  ulonglong local_90;
  uint *local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar20 = *param_1;
  if (*param_2 != 0) {
    lVar15 = *(longlong *)(*param_2 + 0x30);
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(longlong *)(lVar15 + 0x360);
    }
    lVar7 = FUN_140b708a0();
    if (lVar15 != lVar7) goto LAB_1441cce43;
  }
  puVar17 = (uint *)(lVar20 + 0x6f8);
  uVar6 = *(uint *)(lVar20 + 0x710);
  uVar22 = (ulonglong)uVar6;
  if (uVar6 == 0) {
    uVar21 = 1;
    uVar19 = 0;
    iVar13 = 0;
    uVar10 = 0;
  }
  else {
    puVar8 = *(uint **)(lVar20 + 0x708);
    if (*(uint **)(lVar20 + 0x708) == (uint *)0x0) {
      puVar8 = puVar17;
    }
    uVar10 = *puVar8;
    if (uVar10 == 0) {
      iVar13 = uVar6 + 0x1e;
      if (-1 < (int)(uVar6 - 1)) {
        iVar13 = uVar6 - 1;
      }
      uVar19 = 0;
      uVar21 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar21 = uVar19;
      }
      iVar13 = 0;
      do {
        if (uVar21 == uVar19) goto LAB_1441cce20;
        iVar13 = iVar13 + 0x20;
        uVar10 = puVar8[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar19 = 0;
      iVar13 = 0;
    }
    uVar21 = (ulonglong)(-uVar10 & uVar10);
    uVar3 = uVar21 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar10 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if ((int)uVar6 <= (int)uVar10) {
      uVar10 = uVar6;
    }
  }
  if (uVar10 != uVar6) {
    uVar16 = 0xffffffff;
    local_90 = uVar22;
    local_88 = puVar17;
    local_80 = lVar20;
    do {
      lVar15 = *(longlong *)(lVar20 + 0x6e8);
      lVar7 = (longlong)(int)uVar10 * 0x20;
      lVar14 = (longlong)*(int *)(lVar15 + 0x10 + lVar7);
      if (lVar14 != 0) {
        local_70 = *(longlong *)(lVar15 + 8 + lVar7);
        lVar20 = 0;
        local_98 = uVar16;
        local_94 = iVar13;
        local_78 = uVar19;
        do {
          uVar4 = *(undefined4 *)(lVar15 + lVar7);
          lVar9 = FUN_140b708a0(param_1[1]);
          if ((((lVar9 != 0) && (*(longlong *)(lVar9 + 0x1f0) != 0)) &&
              (lVar9 = FUN_14094c9c2(), lVar9 != 0)) &&
             (lVar9 = *(longlong *)(lVar9 + 0x30), lVar9 != 0)) {
            (**(code **)(**(longlong **)(local_70 + lVar20) + 8))
                      (*(longlong **)(local_70 + lVar20),&local_68);
            (**(code **)(*local_68 + 0x30))(local_68,local_58);
            FUN_148da83ac(lVar9,uVar4,local_58);
            if (local_58[0] != 0) {
              FUN_1400020a8();
            }
            plVar5 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_60 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_60)(local_60);
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
          lVar20 = lVar20 + 0x10;
        } while (lVar14 * 0x10 != lVar20);
        uVar6 = *(uint *)(local_80 + 0x710);
        lVar20 = local_80;
        puVar17 = local_88;
        uVar19 = local_78;
        uVar22 = local_90;
        iVar13 = local_94;
        uVar16 = local_98;
      }
      uVar16 = uVar16 & ~(uint)uVar21;
      puVar8 = *(uint **)(lVar20 + 0x708);
      if (*(uint **)(lVar20 + 0x708) == (uint *)0x0) {
        puVar8 = puVar17;
      }
      iVar18 = (int)uVar19;
      lVar15 = (longlong)iVar18;
      uVar10 = puVar8[lVar15] & uVar16;
      if (uVar10 == 0) {
        iVar11 = uVar6 + 0x1e;
        if (-1 < (int)(uVar6 - 1)) {
          iVar11 = uVar6 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar18) {
          iVar12 = iVar18;
        }
        if (iVar18 < iVar11) {
          lVar7 = 0;
          do {
            uVar10 = puVar8[lVar15 + lVar7 + 1];
            if (uVar10 != 0) {
              uVar19 = (ulonglong)(iVar18 + (int)lVar7 + 1);
              uVar16 = 0xffffffff;
              goto LAB_1441cd005;
            }
            iVar13 = iVar13 + 0x20;
            lVar7 = lVar7 + 1;
          } while (iVar12 - lVar15 != lVar7);
          uVar16 = 0xffffffff;
          iVar18 = iVar12;
        }
        uVar19 = (ulonglong)(iVar18 + 1);
        uVar10 = uVar6;
      }
      else {
LAB_1441cd005:
        uVar21 = (ulonglong)(-uVar10 & uVar10);
        uVar3 = uVar21 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar10 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar6 <= (int)uVar10) {
          uVar10 = uVar6;
        }
      }
    } while (uVar10 != (uint)uVar22);
  }
LAB_1441cce20:
  lVar15 = *(longlong *)(lVar20 + 0x6e0);
  *(undefined8 *)(lVar20 + 0x6e0) = 0;
  if (lVar15 != 0) {
    FUN_14480f766(&DAT_14cb7df98);
  }
LAB_1441cce43:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441cd056 FUN_1441cd056 body=64 status=ok
// SIG undefined FUN_1441cd056(void)

undefined8 * FUN_1441cd056(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9894a0;
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



// FUNCTION 1441cd09a FUN_1441cd09a body=81 status=ok
// SIG undefined FUN_1441cd09a(void)

undefined8 FUN_1441cd09a(longlong param_1)

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



// FUNCTION 1441cd0f0 FUN_1441cd0f0 body=89 status=ok
// SIG undefined FUN_1441cd0f0(void)

bool FUN_1441cd0f0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441cd13b;
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
LAB_1441cd13b:
  return lVar6 == param_2;
}



// FUNCTION 1441cd166 FUN_1441cd166 body=118 status=ok
// SIG undefined FUN_1441cd166(void)

void FUN_1441cd166(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b439390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9894a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441cd1dc FUN_1441cd1dc body=118 status=ok
// SIG undefined FUN_1441cd1dc(void)

void FUN_1441cd1dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b439390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9894a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441cd252 FUN_1441cd252 body=156 status=ok
// SIG undefined FUN_1441cd252(void)

void FUN_1441cd252(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b439390;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9894a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cd2de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cd306 FUN_1441cd306 body=71 status=ok
// SIG undefined FUN_1441cd306(void)

ulonglong FUN_1441cd306(longlong param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined7 uVar3;
  
  if ((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) {
    uVar2 = 0;
  }
  else {
    bVar1 = 0 < *(int *)(*(longlong *)(param_1 + 0x20) + 8);
    uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
    uVar2 = CONCAT71(uVar3,bVar1);
    if ((param_3 & bVar1) == 1) {
      uVar2 = CONCAT71(uVar3,1);
      FUN_14662e1ca(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),1);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1441cd34e FUN_1441cd34e body=64 status=ok
// SIG undefined FUN_1441cd34e(void)

undefined8 * FUN_1441cd34e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b989510;
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



// FUNCTION 1441cd392 FUN_1441cd392 body=81 status=ok
// SIG undefined FUN_1441cd392(void)

undefined8 FUN_1441cd392(longlong param_1)

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



// FUNCTION 1441cd3e8 FUN_1441cd3e8 body=89 status=ok
// SIG undefined FUN_1441cd3e8(void)

bool FUN_1441cd3e8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441cd433;
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
LAB_1441cd433:
  return lVar6 == param_2;
}



// FUNCTION 1441cd45e FUN_1441cd45e body=118 status=ok
// SIG undefined FUN_1441cd45e(void)

void FUN_1441cd45e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b439390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989510;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441cd4d4 FUN_1441cd4d4 body=118 status=ok
// SIG undefined FUN_1441cd4d4(void)

void FUN_1441cd4d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b439390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989510;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441cd54a FUN_1441cd54a body=156 status=ok
// SIG undefined FUN_1441cd54a(void)

void FUN_1441cd54a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b439390;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b989510;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cd5d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cd5fe FUN_1441cd5fe body=71 status=ok
// SIG undefined FUN_1441cd5fe(void)

ulonglong FUN_1441cd5fe(longlong param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined7 uVar3;
  
  if ((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) {
    uVar2 = 0;
  }
  else {
    bVar1 = 0 < *(int *)(*(longlong *)(param_1 + 0x20) + 8);
    uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
    uVar2 = CONCAT71(uVar3,bVar1);
    if ((param_3 & bVar1) == 1) {
      uVar2 = CONCAT71(uVar3,1);
      FUN_14662e1ca(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),1);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1441cd646 FUN_1441cd646 body=64 status=ok
// SIG undefined FUN_1441cd646(void)

undefined8 * FUN_1441cd646(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9895c0;
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



// FUNCTION 1441cd68a FUN_1441cd68a body=81 status=ok
// SIG undefined FUN_1441cd68a(void)

undefined8 FUN_1441cd68a(longlong param_1)

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



// FUNCTION 1441cd6e2 FUN_1441cd6e2 body=89 status=ok
// SIG undefined FUN_1441cd6e2(void)

bool FUN_1441cd6e2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441cd72d;
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
LAB_1441cd72d:
  return lVar6 == param_2;
}



// FUNCTION 1441cd758 FUN_1441cd758 body=118 status=ok
// SIG undefined FUN_1441cd758(void)

void FUN_1441cd758(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9895c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441cd7ce FUN_1441cd7ce body=118 status=ok
// SIG undefined FUN_1441cd7ce(void)

void FUN_1441cd7ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9895c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441cd844 FUN_1441cd844 body=156 status=ok
// SIG undefined FUN_1441cd844(void)

void FUN_1441cd844(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9895c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cd8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cd8e0 FUN_1441cd8e0 body=100 status=ok
// SIG undefined FUN_1441cd8e0(void)

void FUN_1441cd8e0(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001441cd92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001441cd939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1441cd944 FUN_1441cd944 body=100 status=ok
// SIG undefined FUN_1441cd944(void)

ulonglong FUN_1441cd944(longlong param_1)

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
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1441cd99d:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1441cd99d;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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



// FUNCTION 1441cd9a8 FUN_1441cd9a8 body=64 status=ok
// SIG undefined FUN_1441cd9a8(void)

undefined8 * FUN_1441cd9a8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b989630;
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



// FUNCTION 1441cd9ec FUN_1441cd9ec body=81 status=ok
// SIG undefined FUN_1441cd9ec(void)

undefined8 FUN_1441cd9ec(longlong param_1)

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



// FUNCTION 1441cda44 FUN_1441cda44 body=89 status=ok
// SIG undefined FUN_1441cda44(void)

bool FUN_1441cda44(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441cda8f;
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
LAB_1441cda8f:
  return lVar6 == param_2;
}



// FUNCTION 1441cdaba FUN_1441cdaba body=118 status=ok
// SIG undefined FUN_1441cdaba(void)

void FUN_1441cdaba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989630;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441cdb30 FUN_1441cdb30 body=118 status=ok
// SIG undefined FUN_1441cdb30(void)

void FUN_1441cdb30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b403fd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989630;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441cdba6 FUN_1441cdba6 body=156 status=ok
// SIG undefined FUN_1441cdba6(void)

void FUN_1441cdba6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b403fd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b989630;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cdc32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cdc42 FUN_1441cdc42 body=183 status=ok
// SIG undefined FUN_1441cdc42(void)

void FUN_1441cdc42(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1441cdcb9:
    local_18 = *(undefined4 *)(param_3 + 1);
    local_20 = *param_3;
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2,&local_20);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1441cdcb9;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_18 = *(undefined4 *)(param_3 + 1);
    local_20 = *param_3;
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2,&local_20)
    ;
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
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441cdcfa FUN_1441cdcfa body=165 status=ok
// SIG undefined FUN_1441cdcfa(void)

ulonglong FUN_1441cdcfa(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1441cdd7e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1441cdd7e;
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
      local_20 = *(undefined4 *)(param_3 + 1);
      local_28 = *param_3;
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),param_2,&local_28);
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



// FUNCTION 1441cdda0 FUN_1441cdda0 body=64 status=ok
// SIG undefined FUN_1441cdda0(void)

undefined8 * FUN_1441cdda0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9896a0;
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



// FUNCTION 1441cdde4 FUN_1441cdde4 body=81 status=ok
// SIG undefined FUN_1441cdde4(void)

undefined8 FUN_1441cdde4(longlong param_1)

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



// FUNCTION 1441cde3c FUN_1441cde3c body=89 status=ok
// SIG undefined FUN_1441cde3c(void)

bool FUN_1441cde3c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441cde87;
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
LAB_1441cde87:
  return lVar6 == param_2;
}



// FUNCTION 1441cdeb2 FUN_1441cdeb2 body=118 status=ok
// SIG undefined FUN_1441cdeb2(void)

void FUN_1441cdeb2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9896a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441cdf28 FUN_1441cdf28 body=118 status=ok
// SIG undefined FUN_1441cdf28(void)

void FUN_1441cdf28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9896a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441cdf9e FUN_1441cdf9e body=156 status=ok
// SIG undefined FUN_1441cdf9e(void)

void FUN_1441cdf9e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9896a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ce02a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ce03a FUN_1441ce03a body=103 status=ok
// SIG undefined FUN_1441ce03a(void)

ulonglong FUN_1441ce03a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(param_1 + 0x28))
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001441ce09e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 1441ce0a2 FUN_1441ce0a2 body=100 status=ok
// SIG undefined FUN_1441ce0a2(void)

ulonglong FUN_1441ce0a2(longlong param_1)

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
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1441ce0fb:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1441ce0fb;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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



// FUNCTION 1441ce106 FUN_1441ce106 body=64 status=ok
// SIG undefined FUN_1441ce106(void)

undefined8 * FUN_1441ce106(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b989710;
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



// FUNCTION 1441ce14a FUN_1441ce14a body=81 status=ok
// SIG undefined FUN_1441ce14a(void)

undefined8 FUN_1441ce14a(longlong param_1)

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



// FUNCTION 1441ce1a2 FUN_1441ce1a2 body=89 status=ok
// SIG undefined FUN_1441ce1a2(void)

bool FUN_1441ce1a2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1441ce1ed;
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
LAB_1441ce1ed:
  return lVar6 == param_2;
}



// FUNCTION 1441ce218 FUN_1441ce218 body=118 status=ok
// SIG undefined FUN_1441ce218(void)

void FUN_1441ce218(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989710;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441ce28e FUN_1441ce28e body=118 status=ok
// SIG undefined FUN_1441ce28e(void)

void FUN_1441ce28e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989710;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1441ce304 FUN_1441ce304 body=156 status=ok
// SIG undefined FUN_1441ce304(void)

void FUN_1441ce304(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b989710;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ce390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ce3a0 FUN_1441ce3a0 body=104 status=ok
// SIG undefined FUN_1441ce3a0(void)

void FUN_1441ce3a0(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001441ce3ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001441ce3fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1441ce408 FUN_1441ce408 body=101 status=ok
// SIG undefined FUN_1441ce408(void)

ulonglong FUN_1441ce408(longlong param_1)

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
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1441ce462:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1441ce462;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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



// FUNCTION 1441ce46e FUN_1441ce46e body=29 status=ok
// SIG undefined FUN_1441ce46e(void)

undefined8 FUN_1441ce46e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ce4b4 FUN_1441ce4b4 body=101 status=ok
// SIG undefined FUN_1441ce4b4(void)

void FUN_1441ce4b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b989da0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441ce51a FUN_1441ce51a body=101 status=ok
// SIG undefined FUN_1441ce51a(void)

void FUN_1441ce51a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b989da0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b989d30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441ce580 FUN_1441ce580 body=134 status=ok
// SIG undefined FUN_1441ce580(void)

void FUN_1441ce580(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b989da0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b989d30;
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
                    /* WARNING: Could not recover jumptable at 0x0001441ce5f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ce618 FUN_1441ce618 body=25 status=ok
// SIG undefined FUN_1441ce618(void)

undefined8 FUN_1441ce618(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1441ce634 FUN_1441ce634 body=29 status=ok
// SIG undefined FUN_1441ce634(void)

undefined8 FUN_1441ce634(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ce666 FUN_1441ce666 body=93 status=ok
// SIG undefined FUN_1441ce666(void)

void FUN_1441ce666(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a010;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441ce6c4 FUN_1441ce6c4 body=93 status=ok
// SIG undefined FUN_1441ce6c4(void)

void FUN_1441ce6c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a010;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441ce722 FUN_1441ce722 body=126 status=ok
// SIG undefined FUN_1441ce722(void)

void FUN_1441ce722(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98a010;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ce791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ce7a0 FUN_1441ce7a0 body=65 status=ok
// SIG undefined FUN_1441ce7a0(void)

void FUN_1441ce7a0(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1441ce826(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ce7e2 FUN_1441ce7e2 body=67 status=ok
// SIG undefined FUN_1441ce7e2(void)

undefined8 FUN_1441ce7e2(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1441ce826(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ce826 FUN_1441ce826 body=231 status=ok
// SIG undefined FUN_1441ce826(void)

void FUN_1441ce826(longlong *param_1,char *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1 = (longlong *)*param_1;
  if (*param_2 == '\0') {
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  lVar3 = param_1[0x3e];
  param_1[0x3e] = 0;
  uVar6 = (**(code **)(*(longlong *)param_1[6] + 0x180))();
  FUN_1410d53f0(&local_28,uVar6);
  if (local_20 != (longlong *)0x0) {
    iVar5 = (int)local_20[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_20[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(local_20 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar7 = local_20;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (lVar3 != 0 && local_28 != 0) {
        FUN_14480f766(local_28 + 0x58,lVar3);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441ce90e FUN_1441ce90e body=1087 status=ok
// SIG undefined FUN_1441ce90e(void)

void FUN_1441ce90e(longlong *param_1,undefined8 *param_2)

{
  AccountId *pAVar1;
  longlong lVar2;
  AccountId *pAVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_1;
  FUN_140056680(local_58,L"group_instance_id");
  FUN_1401e7dd2(param_2,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1401e7c72(param_2,lVar2 + 0x1f8);
  FUN_140056680(local_58,L"group_composition_instance_id");
  FUN_1401e7dd2(param_2,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1401e7c72(param_2,lVar2 + 0x208);
  FUN_140056680(local_58,L"group_status");
  FUN_1401e7dd2(param_2,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1401e7c72(param_2,param_1[1]);
  FUN_140056680(local_58,L"affected_player");
  FUN_1401e7dd2(param_2,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vShiftUser((rowBuilder *)*param_2,*(AccountId *)param_1[2]);
  FUN_140056680(local_58,L"is_group_host");
  FUN_1401e7dd2(param_2,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vBool((rowBuilder *)*param_2,*(bool *)(lVar2 + 0x218));
  FUN_140056680(local_58,L"is_gameplay_host");
  FUN_1401e7dd2(param_2,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vBool((rowBuilder *)*param_2,*(bool *)(lVar2 + 0x219));
  FUN_140056680(local_58,L"local_human_player_count");
  FUN_1401e7dd2(param_2,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,*(int *)(lVar2 + 0x220));
  FUN_140056680(local_58,L"group_size");
  FUN_1401e7dd2(param_2,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,*(int *)(lVar2 + 0x21c));
  FUN_140056680(local_58,L"ai_player_count");
  FUN_1401e7dd2(param_2,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,*(int *)(lVar2 + 0x224));
  FUN_140056680(local_58,L"total_human_player_count");
  FUN_1401e7dd2(param_2,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vInt((rowBuilder *)*param_2,*(int *)(lVar2 + 0x228));
  FUN_140056680(local_58,L"is_crossplay_enabled");
  FUN_1401e7dd2(param_2,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vBool((rowBuilder *)*param_2,*(bool *)(lVar2 + 0x22c));
  FUN_140056680(local_58,L"crossplay_friend_relations");
  FUN_1401e7dd2(param_2,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::vBeginArray((rowBuilder *)*param_2);
  if ((longlong)*(int *)(lVar2 + 0x238) != 0) {
    pAVar3 = *(AccountId **)(lVar2 + 0x230);
    pAVar1 = pAVar3 + (longlong)*(int *)(lVar2 + 0x238) * 10;
    do {
      bifrost::telemetry::rowBuilder::vBeginObject((rowBuilder *)*param_2);
      FUN_140056680(local_58,L"player_id");
      FUN_1401e7dd2(param_2,local_58);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      bifrost::telemetry::rowBuilder::vShiftUser((rowBuilder *)*param_2,*pAVar3);
      FUN_140056680(local_58,L"is_crossplay_friend");
      FUN_1401e7dd2(param_2,local_58);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      bifrost::telemetry::rowBuilder::vBool((rowBuilder *)*param_2,SUB41(pAVar3[1],0));
      FUN_140056680(local_58,L"player_multiplayer_type");
      FUN_1401e7dd2(param_2,local_58);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1401e7c72(param_2,pAVar3 + 2);
      FUN_140056680(local_58,L"service");
      FUN_1401e7dd2(param_2,local_58);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1401e7c72(param_2,pAVar3 + 6);
      bifrost::telemetry::rowBuilder::vEndObject((rowBuilder *)*param_2);
      pAVar3 = pAVar3 + 10;
    } while (pAVar3 != pAVar1);
  }
  bifrost::telemetry::rowBuilder::vEndArray((rowBuilder *)*param_2);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ced4e FUN_1441ced4e body=29 status=ok
// SIG undefined FUN_1441ced4e(void)

undefined8 FUN_1441ced4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ced80 FUN_1441ced80 body=91 status=ok
// SIG undefined FUN_1441ced80(void)

void FUN_1441ced80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a2b0;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441ceddc FUN_1441ceddc body=91 status=ok
// SIG undefined FUN_1441ceddc(void)

void FUN_1441ceddc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a2b0;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441cee38 FUN_1441cee38 body=124 status=ok
// SIG undefined FUN_1441cee38(void)

void FUN_1441cee38(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98a2b0;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ceea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ceebe FUN_1441ceebe body=20 status=ok
// SIG undefined FUN_1441ceebe(void)

undefined1 FUN_1441ceebe(longlong param_1)

{
  FUN_1441ceed2(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441ceed2 FUN_1441ceed2 body=81 status=ok
// SIG undefined FUN_1441ceed2(void)

bool FUN_1441ceed2(char *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_2 + 0x180))(param_2);
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) && (lVar2 = FUN_141028a6c(), lVar2 != 0)
     ) {
    cVar1 = FUN_148a7d908(lVar2,(int)param_2[0x1c]);
    return *param_1 == cVar1;
  }
  return false;
}



// FUNCTION 1441cef24 FUN_1441cef24 body=29 status=ok
// SIG undefined FUN_1441cef24(void)

undefined8 FUN_1441cef24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441cef56 FUN_1441cef56 body=91 status=ok
// SIG undefined FUN_1441cef56(void)

void FUN_1441cef56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a320;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441cefb2 FUN_1441cefb2 body=91 status=ok
// SIG undefined FUN_1441cefb2(void)

void FUN_1441cefb2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a320;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441cf00e FUN_1441cf00e body=124 status=ok
// SIG undefined FUN_1441cf00e(void)

void FUN_1441cf00e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98a320;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cf07b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cf094 FUN_1441cf094 body=20 status=ok
// SIG undefined FUN_1441cf094(void)

undefined1 FUN_1441cf094(longlong param_1)

{
  FUN_1441cf0a8(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441cf0a8 FUN_1441cf0a8 body=101 status=ok
// SIG undefined FUN_1441cf0a8(void)

bool FUN_1441cf0a8(char *param_1,longlong *param_2)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_140773fe2();
  bVar1 = false;
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x180))(param_2);
    lVar4 = (**(code **)(*plVar2 + 0x2d0))(plVar2,(int)param_2[0x1c],uVar3);
    bVar1 = false;
    if (lVar4 != 0) {
      bVar1 = bifrost::social::friends::isImportEnabled(*(User **)(lVar4 + 0x2b8));
    }
  }
  return bVar1 == (bool)*param_1;
}



// FUNCTION 1441cf10e FUN_1441cf10e body=29 status=ok
// SIG undefined FUN_1441cf10e(void)

undefined8 FUN_1441cf10e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441cf140 FUN_1441cf140 body=91 status=ok
// SIG undefined FUN_1441cf140(void)

void FUN_1441cf140(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a390;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441cf19c FUN_1441cf19c body=91 status=ok
// SIG undefined FUN_1441cf19c(void)

void FUN_1441cf19c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a390;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441cf1f8 FUN_1441cf1f8 body=124 status=ok
// SIG undefined FUN_1441cf1f8(void)

void FUN_1441cf1f8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98a390;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cf265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cf27e FUN_1441cf27e body=20 status=ok
// SIG undefined FUN_1441cf27e(void)

undefined1 FUN_1441cf27e(longlong param_1)

{
  FUN_1441cf292(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441cf292 FUN_1441cf292 body=136 status=ok
// SIG undefined FUN_1441cf292(void)

bool FUN_1441cf292(char *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_2 + 0x180))(param_2);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_140e5f22c();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_140e3515a(*(longlong *)(lVar1 + 0x30),&local_1a,(int)param_2[0x1c]);
      bVar2 = *param_1 == local_19;
      goto LAB_1441cf2fd;
    }
  }
  bVar2 = false;
LAB_1441cf2fd:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441cf31c FUN_1441cf31c body=29 status=ok
// SIG undefined FUN_1441cf31c(void)

undefined8 FUN_1441cf31c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441cf34e FUN_1441cf34e body=91 status=ok
// SIG undefined FUN_1441cf34e(void)

void FUN_1441cf34e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a400;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441cf3aa FUN_1441cf3aa body=91 status=ok
// SIG undefined FUN_1441cf3aa(void)

void FUN_1441cf3aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a400;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441cf406 FUN_1441cf406 body=124 status=ok
// SIG undefined FUN_1441cf406(void)

void FUN_1441cf406(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98a400;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cf473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441cf48c FUN_1441cf48c body=29 status=ok
// SIG undefined FUN_1441cf48c(void)

undefined8 FUN_1441cf48c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441cf4be FUN_1441cf4be body=91 status=ok
// SIG undefined FUN_1441cf4be(void)

void FUN_1441cf4be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a470;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441cf51a FUN_1441cf51a body=91 status=ok
// SIG undefined FUN_1441cf51a(void)

void FUN_1441cf51a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98a470;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441cf576 FUN_1441cf576 body=124 status=ok
// SIG undefined FUN_1441cf576(void)

void FUN_1441cf576(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b98a470;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441cf5e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


