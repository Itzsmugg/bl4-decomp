// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143f93d66 FUN_143f93d66 body=1021 status=ok
// SIG undefined FUN_143f93d66(void)

void FUN_143f93d66(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong *param_5,longlong param_6)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  code *pcVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_128 [32];
  code **local_108;
  undefined1 *local_100;
  undefined1 local_f8 [16];
  longlong local_e8 [2];
  longlong local_d8 [2];
  code *local_c8;
  undefined4 local_c0;
  longlong local_b8 [2];
  code *local_a8;
  int local_a0;
  undefined4 uStack_9c;
  longlong local_88;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_2 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  iVar5 = FUN_144a1ccda(puVar8,0);
  local_b8[0] = 0;
  local_b8[1] = 0;
  lVar11 = 0xf;
  lVar9 = 0x1000000000;
  iVar13 = 0x10;
  iVar2 = iVar5;
  do {
    lVar9 = lVar9 + -0x100000000;
    *(undefined2 *)((longlong)&local_a8 + lVar11 * 2) =
         *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar2 % 10) * 2);
    uVar14 = iVar2 + 9;
    lVar11 = lVar11 + -1;
    iVar13 = iVar13 + -1;
    iVar2 = iVar2 / 10;
  } while (0x12 < uVar14);
  if (iVar5 < 0) {
    iVar13 = (int)lVar11;
    lVar9 = (longlong)iVar13;
    *(undefined2 *)((longlong)&local_a8 + lVar9 * 2) = 0x2d;
  }
  else {
    lVar9 = lVar9 >> 0x20;
  }
  FUN_1400020e8(local_b8,(longlong)&local_a8 + lVar9 * 2,0x10 - iVar13);
  puVar6 = (undefined4 *)FUN_1461222c2(param_1,local_b8);
  if (puVar6 == (undefined4 *)0x0) {
    pwVar12 = L"Already joined/joining channel.";
  }
  else {
    cVar4 = (**(code **)(*param_1 + 0xb8))(param_1);
    if (cVar4 != '\0') {
      FUN_14615ef16(param_1,&local_a8,local_b8);
      FUN_145d51c20(puVar6 + 6,&local_a8);
      FUN_141478002(&local_a8);
      puVar1 = (undefined8 *)(puVar6 + 0x1e);
      if (puVar1 != param_2) {
        iVar2 = *(int *)(param_2 + 1);
        pvVar3 = (void *)*param_2;
        puVar6[0x20] = iVar2;
        if (iVar2 == 0 && puVar6[0x21] == 0) {
          puVar6[0x21] = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar2);
          if (iVar2 != 0) {
            memcpy((void *)*puVar1,pvVar3,(longlong)iVar2 * 2);
          }
        }
      }
      FUN_1458c75be(puVar6 + 2,param_5);
      *puVar6 = 1;
      plVar7 = (longlong *)FUN_141535576(*(undefined8 *)(param_1[3] + 0x10));
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x18))(plVar7,param_1 + 4);
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x60))(plVar7,puVar6 + 6);
      FUN_145d51e58(param_1,plVar7,puVar6);
      local_a8 = (code *)0x0;
      local_a0 = *(int *)(param_3 + 1);
      lVar9 = (longlong)local_a0;
      pvVar3 = (void *)*param_3;
      if (lVar9 == 0) {
        uStack_9c = 0;
      }
      else {
        FUN_1446dd670(&local_a8,local_a0,0);
        memcpy(local_a8,pvVar3,lVar9 * 2);
      }
      local_c8 = FUN_1416370ca;
      local_c0 = 0;
      FUN_1461d96b2(local_f8,param_1,&local_c8,local_b8);
      local_108 = &local_a8;
      local_100 = local_f8;
      (**(code **)(*plVar7 + 0x50))(plVar7,1,1,1);
      pcVar10 = local_a8;
      goto LAB_143f940fc;
    }
    pwVar12 = L"Voice chat user is not logged in, can\'t join the channel.";
  }
  FUN_140056680(&local_c8,pwVar12);
  FUN_140056680(local_d8,&DAT_14a8b567e);
  FUN_140056680(local_e8,L"GbxVivoxVoiceChat");
  local_108 = &local_c8;
  FUN_148aaf6f6(&local_a8,local_e8,1,local_d8);
  plVar7 = (longlong *)*param_5;
  if (plVar7 != (longlong *)0x0 && (int)param_5[1] != 0) {
    (**(code **)(*plVar7 + 0x60))(plVar7,param_2,&local_a8);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_9c,local_a0) != 0) {
    FUN_1400020a8();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  pcVar10 = local_c8;
  if (local_d8[0] != 0) {
    FUN_1400020a8();
    pcVar10 = local_c8;
  }
LAB_143f940fc:
  if (pcVar10 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_6 + 0x10) == '\x01') {
    *(undefined1 *)(param_6 + 0x10) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f94164 FUN_143f94164 body=420 status=ok
// SIG undefined FUN_143f94164(void)

void FUN_143f94164(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar3 = FUN_144a1ccda(puVar4,0);
  local_78[0] = 0;
  local_78[1] = 0;
  lVar6 = 0xf;
  lVar5 = 0x1000000000;
  iVar7 = 0x10;
  iVar2 = iVar3;
  do {
    lVar5 = lVar5 + -0x100000000;
    *(undefined2 *)((longlong)local_68 + lVar6 * 2) =
         *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar2 % 10) * 2);
    uVar8 = iVar2 + 9;
    lVar6 = lVar6 + -1;
    iVar7 = iVar7 + -1;
    iVar2 = iVar2 / 10;
  } while (0x12 < uVar8);
  if (iVar3 < 0) {
    iVar7 = (int)lVar6;
    lVar5 = (longlong)iVar7;
    *(undefined2 *)((longlong)local_68 + lVar5 * 2) = 0x2d;
  }
  else {
    lVar5 = lVar5 >> 0x20;
  }
  FUN_1400020e8(local_78,(longlong)local_68 + lVar5 * 2,0x10 - iVar7);
  lVar5 = FUN_145916402(param_1,local_78);
  if (lVar5 != 0) {
    FUN_1461bdce8(param_1,lVar5,local_78);
    local_68[0] = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    plVar1 = (longlong *)*param_3;
    if (plVar1 != (longlong *)0x0 && (int)param_3[1] != 0) {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,local_68);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f9430c FUN_143f9430c body=955 status=ok
// SIG undefined FUN_143f9430c(void)

void FUN_143f9430c(longlong *param_1,undefined8 param_2,char param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStack_b8 [47];
  char local_89;
  undefined8 local_88;
  uint *local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar7 = (**(code **)(*param_1 + 0xb8))();
  if (cVar7 != '\0') {
    if (param_3 == '\0') {
      FUN_1411a58b4(param_1 + 0x20,param_2);
    }
    else {
      FUN_14482b35e(param_1 + 0x20,local_64,param_2,0);
    }
    local_80 = (uint *)(param_1 + 0x18);
    iVar4 = (int)param_1[0x1b];
    if (iVar4 == 0) {
      uVar15 = 1;
      uVar19 = 0;
      iVar20 = 0;
      iVar8 = 0;
    }
    else {
      puVar9 = (uint *)param_1[0x1a];
      if ((uint *)param_1[0x1a] == (uint *)0x0) {
        puVar9 = local_80;
      }
      uVar16 = *puVar9;
      if (uVar16 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        uVar19 = 0;
        uVar15 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar15 = uVar19;
        }
        iVar20 = 0;
        do {
          if (uVar15 == uVar19) goto LAB_143f94402;
          iVar20 = iVar20 + 0x20;
          uVar16 = puVar9[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar19 = 0;
        iVar20 = 0;
      }
      uVar15 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar15 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar8 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar8) {
        iVar8 = iVar4;
      }
    }
    if (iVar8 != iVar4) {
      uVar16 = 0xffffffff;
      local_89 = param_3;
      local_88 = param_2;
      do {
        plVar10 = (longlong *)FUN_148aed920(param_1,(longlong)iVar8 * 0x20 + param_1[0x16],local_88)
        ;
        if (plVar10 != (longlong *)0x0) {
          local_78 = (undefined8 *)0x0;
          local_70 = 0;
          FUN_1446efa72(&local_78,0,3,0x10);
          local_70 = 3;
          plVar5 = (longlong *)param_1[2];
          if (plVar5 == (longlong *)0x0) {
LAB_143f9457a:
            *local_78 = &PTR_LAB_149e35290;
            LOCK();
            UNLOCK();
            lVar18 = DAT_14c758608 + 1;
            lVar17 = DAT_14c758608 + 1;
            if (lVar18 == 0) {
              LOCK();
              UNLOCK();
              lVar18 = DAT_14c758608 + 2;
              lVar17 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar17;
            local_78[2] = lVar18;
            *local_78 = &PTR_FUN_14b529080;
            local_78[3] = 0;
            local_78[4] = 0;
          }
          else {
            iVar8 = (int)plVar5[1];
            do {
              if (iVar8 == 0) goto LAB_143f9457a;
              LOCK();
              iVar6 = (int)plVar5[1];
              bVar21 = iVar8 == iVar6;
              if (bVar21) {
                *(int *)(plVar5 + 1) = iVar8 + 1;
                iVar6 = iVar8;
              }
              iVar8 = iVar6;
              UNLOCK();
            } while (!bVar21);
            lVar17 = param_1[1];
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            *local_78 = &PTR_LAB_149e35290;
            LOCK();
            UNLOCK();
            lVar14 = DAT_14c758608 + 1;
            lVar18 = DAT_14c758608 + 1;
            if (lVar14 == 0) {
              LOCK();
              UNLOCK();
              lVar14 = DAT_14c758608 + 2;
              lVar18 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar18;
            local_78[2] = lVar14;
            *local_78 = &PTR_FUN_14b529080;
            local_78[3] = lVar17;
            local_78[4] = plVar5;
            LOCK();
            *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
            UNLOCK();
            LOCK();
            plVar2 = plVar5 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
            LOCK();
            plVar2 = plVar5 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
            LOCK();
            plVar2 = plVar5 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          (**(code **)(*plVar10 + 0x58))
                    (plVar10,CONCAT71((int7)((ulonglong)plVar5 >> 8),local_89) & 0xffffffff,
                     &local_78);
        }
        uVar16 = uVar16 & ~(uint)uVar15;
        puVar9 = (uint *)param_1[0x1a];
        if ((uint *)param_1[0x1a] == (uint *)0x0) {
          puVar9 = local_80;
        }
        iVar6 = (int)param_1[0x1b];
        iVar8 = (int)uVar19;
        lVar17 = (longlong)iVar8;
        uVar13 = puVar9[lVar17] & uVar16;
        if (uVar13 == 0) {
          iVar11 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar11 = iVar6 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar20 = iVar20 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar8) {
            iVar12 = iVar8;
          }
          if (iVar8 < iVar11) {
            lVar18 = 0;
            do {
              uVar13 = puVar9[lVar17 + lVar18 + 1];
              if (uVar13 != 0) {
                uVar19 = (ulonglong)(iVar8 + (int)lVar18 + 1);
                uVar16 = 0xffffffff;
                goto LAB_143f94649;
              }
              iVar20 = iVar20 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar12 - lVar17 != lVar18);
            uVar16 = 0xffffffff;
            iVar8 = iVar12;
          }
          uVar19 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar6;
        }
        else {
LAB_143f94649:
          uVar15 = (ulonglong)(-uVar13 & uVar13);
          uVar1 = uVar15 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar8 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar8) {
            iVar8 = iVar6;
          }
        }
      } while (iVar8 != iVar4);
    }
  }
LAB_143f94402:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f946d4 FUN_143f946d4 body=64 status=ok
// SIG undefined FUN_143f946d4(void)

undefined8 * FUN_143f946d4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b528b40;
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



// FUNCTION 143f94718 FUN_143f94718 body=81 status=ok
// SIG undefined FUN_143f94718(void)

undefined8 FUN_143f94718(longlong param_1)

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



// FUNCTION 143f9476e FUN_143f9476e body=89 status=ok
// SIG undefined FUN_143f9476e(void)

bool FUN_143f9476e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f947b9;
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
LAB_143f947b9:
  return lVar6 == param_2;
}



// FUNCTION 143f947e4 FUN_143f947e4 body=118 status=ok
// SIG undefined FUN_143f947e4(void)

void FUN_143f947e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b528b40;
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



// FUNCTION 143f9485a FUN_143f9485a body=118 status=ok
// SIG undefined FUN_143f9485a(void)

void FUN_143f9485a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f7870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b528b40;
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



// FUNCTION 143f948d0 FUN_143f948d0 body=156 status=ok
// SIG undefined FUN_143f948d0(void)

void FUN_143f948d0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f7870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b528b40;
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
                    /* WARNING: Could not recover jumptable at 0x000143f9495c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f9496c FUN_143f9496c body=65 status=ok
// SIG undefined FUN_143f9496c(void)

void FUN_143f9496c(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143f94a0c(param_1 + 0x28,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f949ae FUN_143f949ae body=92 status=ok
// SIG undefined FUN_143f949ae(void)

undefined8 FUN_143f949ae(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_143f94a0c(param_1 + 0x28,&local_c);
    uVar1 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f94a0c FUN_143f94a0c body=555 status=ok
// SIG undefined FUN_143f94a0c(void)

void FUN_143f94a0c(undefined8 *param_1,int *param_2,longlong *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  int local_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_2 != 0) {
    if ((int)param_3[1] == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_3;
    }
    uVar1 = *param_1;
    lVar5 = 0;
    while( true ) {
      uVar6 = *(ushort *)((longlong)puVar4 + lVar5);
      uVar7 = (ulonglong)uVar6;
      uVar8 = *(ushort *)((longlong)L"Default System Device" + lVar5);
      if (uVar6 != uVar8) break;
      if (uVar6 == 0) goto LAB_143f94b29;
LAB_143f94a75:
      lVar5 = lVar5 + 2;
    }
    if ((uVar8 | uVar6) < 0x80) {
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      uVar10 = (ulonglong)uVar8;
      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar10]) goto LAB_143f94a75;
    }
    if (uVar6 != uVar8) {
      FUN_14145706a(uVar1,local_68,*(undefined4 *)(param_1 + 1),4);
      iVar3 = (int)param_3[1];
      if (iVar3 != local_50) {
        bVar11 = local_50 + iVar3 == 1;
        goto LAB_143f94bfa;
      }
      bVar11 = true;
      if (iVar3 < 2) goto LAB_143f94bfa;
      lVar5 = 0;
      goto LAB_143f94ae5;
    }
LAB_143f94b29:
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_14145706a(uVar1,local_68,*(undefined4 *)(param_1 + 1),4);
    FUN_1413e44b8(uVar1,*(undefined4 *)(param_1 + 1),local_68 + 2,&local_48);
    if (local_68[2] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if ((int)uStack_40 != 0) {
      if (local_48 == (undefined8 *)0x0) goto LAB_143f94bbe;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      uStack_40 = uStack_40 & 0xffffffff00000000;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  goto LAB_143f94bbe;
LAB_143f94ae5:
  uVar6 = *(ushort *)(*param_3 + lVar5);
  uVar2 = (uint)uVar6;
  uVar8 = *(ushort *)(local_68[2] + lVar5);
  uVar9 = (uint)uVar8;
  if (uVar6 != uVar8) {
    if ((uVar8 | uVar6) < 0x80) {
      uVar2 = (uint)(byte)(&DAT_149e05da0)[uVar6];
      uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar8];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_143f94afd;
    }
    iVar3 = uVar2 - uVar9;
    goto LAB_143f94bf4;
  }
  if (uVar6 == 0) goto LAB_143f94bf2;
LAB_143f94afd:
  lVar5 = lVar5 + 2;
  goto LAB_143f94ae5;
LAB_143f94bf2:
  iVar3 = 0;
LAB_143f94bf4:
  bVar11 = iVar3 == 0;
LAB_143f94bfa:
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (!bVar11) {
    local_68[0] = 0;
    local_68[1] = 0;
    FUN_1459503b2(uVar1,*(undefined4 *)(param_1 + 1));
  }
LAB_143f94bbe:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f94c38 FUN_143f94c38 body=64 status=ok
// SIG undefined FUN_143f94c38(void)

undefined8 * FUN_143f94c38(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b528d70;
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



// FUNCTION 143f94c7c FUN_143f94c7c body=81 status=ok
// SIG undefined FUN_143f94c7c(void)

undefined8 FUN_143f94c7c(longlong param_1)

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



// FUNCTION 143f94cd2 FUN_143f94cd2 body=89 status=ok
// SIG undefined FUN_143f94cd2(void)

bool FUN_143f94cd2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f94d1d;
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
LAB_143f94d1d:
  return lVar6 == param_2;
}



// FUNCTION 143f94d48 FUN_143f94d48 body=110 status=ok
// SIG undefined FUN_143f94d48(void)

void FUN_143f94d48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b528d70;
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



// FUNCTION 143f94db6 FUN_143f94db6 body=110 status=ok
// SIG undefined FUN_143f94db6(void)

void FUN_143f94db6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b528d70;
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



// FUNCTION 143f94e24 FUN_143f94e24 body=148 status=ok
// SIG undefined FUN_143f94e24(void)

void FUN_143f94e24(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b528d70;
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
                    /* WARNING: Could not recover jumptable at 0x000143f94ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f94ed6 FUN_143f94ed6 body=64 status=ok
// SIG undefined FUN_143f94ed6(void)

undefined8 * FUN_143f94ed6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b528de0;
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



// FUNCTION 143f94f1a FUN_143f94f1a body=81 status=ok
// SIG undefined FUN_143f94f1a(void)

undefined8 FUN_143f94f1a(longlong param_1)

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



// FUNCTION 143f94f70 FUN_143f94f70 body=89 status=ok
// SIG undefined FUN_143f94f70(void)

bool FUN_143f94f70(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f94fbb;
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
LAB_143f94fbb:
  return lVar6 == param_2;
}



// FUNCTION 143f94fe6 FUN_143f94fe6 body=110 status=ok
// SIG undefined FUN_143f94fe6(void)

void FUN_143f94fe6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b528de0;
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



// FUNCTION 143f95054 FUN_143f95054 body=110 status=ok
// SIG undefined FUN_143f95054(void)

void FUN_143f95054(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b528de0;
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



// FUNCTION 143f950c2 FUN_143f950c2 body=148 status=ok
// SIG undefined FUN_143f950c2(void)

void FUN_143f950c2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b528de0;
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
                    /* WARNING: Could not recover jumptable at 0x000143f95146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f95174 FUN_143f95174 body=64 status=ok
// SIG undefined FUN_143f95174(void)

undefined8 * FUN_143f95174(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b529080;
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



// FUNCTION 143f951b8 FUN_143f951b8 body=81 status=ok
// SIG undefined FUN_143f951b8(void)

undefined8 FUN_143f951b8(longlong param_1)

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



// FUNCTION 143f9520e FUN_143f9520e body=89 status=ok
// SIG undefined FUN_143f9520e(void)

bool FUN_143f9520e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143f95259;
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
LAB_143f95259:
  return lVar6 == param_2;
}



// FUNCTION 143f95284 FUN_143f95284 body=110 status=ok
// SIG undefined FUN_143f95284(void)

void FUN_143f95284(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b529080;
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



// FUNCTION 143f952f2 FUN_143f952f2 body=110 status=ok
// SIG undefined FUN_143f952f2(void)

void FUN_143f952f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b529080;
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



// FUNCTION 143f95360 FUN_143f95360 body=148 status=ok
// SIG undefined FUN_143f95360(void)

void FUN_143f95360(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b529080;
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
                    /* WARNING: Could not recover jumptable at 0x000143f953e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f95411 FUN_143f95411 body=102 status=ok
// SIG undefined FUN_143f95411(void)

void FUN_143f95411(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014b528310;
  local_14 = 0x11;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1465902da(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f95478 FUN_143f95478 body=57 status=ok
// SIG undefined FUN_143f95478(void)

void FUN_143f95478(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb99c98 == 0) {
    uVar1 = FUN_1465906fd();
    DAT_14cb99c98 = FUN_14171c317(FUN_14659072e,uVar1,L"ELoadingScreenHideType");
  }
  return;
}



// FUNCTION 143f954b2 FUN_143f954b2 body=121 status=ok
// SIG undefined FUN_143f954b2(void)

void FUN_143f954b2(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0xa8);
  if (puVar1 != param_2) {
    iVar2 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 0xb0) = iVar2;
    if (iVar2 == 0 && *(int *)(param_1 + 0xb4) == 0) {
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  *(undefined1 *)(param_1 + 0xa7) = param_3;
  return;
}



// FUNCTION 143f955cc FUN_143f955cc body=29 status=ok
// SIG undefined FUN_143f955cc(void)

undefined8 FUN_143f955cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f95768 FUN_143f95768 body=93 status=ok
// SIG undefined FUN_143f95768(void)

void FUN_143f95768(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b529ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f957c6 FUN_143f957c6 body=93 status=ok
// SIG undefined FUN_143f957c6(void)

void FUN_143f957c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b529ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143f95824 FUN_143f95824 body=126 status=ok
// SIG undefined FUN_143f95824(void)

void FUN_143f95824(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b529ea0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f95893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f958a2 FUN_143f958a2 body=24 status=ok
// SIG undefined FUN_143f958a2(void)

undefined8 FUN_143f958a2(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2c0))();
  return 0;
}



// FUNCTION 143f958ba FUN_143f958ba body=269 status=ok
// SIG undefined FUN_143f958ba(void)

undefined8 FUN_143f958ba(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143f959c1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143f959c1;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143f959c1:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143f95976;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2c0))();
      uVar6 = 1;
      goto LAB_143f95976;
    }
  }
  uVar6 = 0;
LAB_143f95976:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f959c8 FUN_143f959c8 body=205 status=ok
// SIG undefined FUN_143f959c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f959c8(void)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14b529c30;
  local_38 = 1;
  local_48 = 0;
  FUN_14282b410(L"/Script/GbxDefaultLoadingScreen",&PTR_FUN_14b529c50,2,0);
  local_28 = "AssetRegistry";
  local_20 = 0xd;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  _DAT_14cb99cd8 = (ulonglong)uVar1;
  local_28 = (char *)0x800000014b529d12;
  local_14 = 0x17;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14659087c(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f95a98 FUN_143f95a98 body=120 status=ok
// SIG undefined FUN_143f95a98(void)

void FUN_143f95a98(void)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145afd586(local_48,FUN_143f95b11);
  FUN_14126834e(&DAT_14cb10aa8,local_50,local_48);
  FUN_1401cb1ee(local_48);
  FUN_14576a192(&DAT_14cb10a20,local_48,&LAB_143f95c65);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f95b11 FUN_143f95b11 body=318 status=ok
// SIG undefined FUN_143f95b11(void)

void FUN_143f95b11(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1 != 0) &&
      (((bVar1 = *(byte *)(param_1 + 0x152), bVar1 == 1 ||
        ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) && ((bVar1 & 0xfe) != 4)))) &&
     ((iVar4 = FUN_14490d72a(param_1), iVar4 - 1U < 2 && (*(longlong *)(param_1 + 0x938) == 0)))) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar3 = FUN_14054d46e(&DAT_14c846b20,L"nolagcomp");
    if (cVar3 == '\0') {
      local_21 = '\0';
      local_38 = &DAT_14c872ce8;
      FUN_14052bb08(DAT_14c872ce0,L"LagCompensation",L"Enabled",&local_21);
      if (local_21 == '\x01') {
        uVar5 = FUN_14001cc68(0x80,0x10);
        FUN_1461966c0(uVar5,param_1);
        lVar2 = *(longlong *)(param_1 + 0x938);
        *(undefined8 *)(param_1 + 0x938) = uVar5;
        if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
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



// FUNCTION 143f95c87 FUN_143f95c87 body=69 status=ok
// SIG undefined FUN_143f95c87(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f95c87(void)

{
  _DAT_14cb99ce8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f95cc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99cf0,1);
  return;
}



// FUNCTION 143f95ccc FUN_143f95ccc body=69 status=ok
// SIG undefined FUN_143f95ccc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f95ccc(void)

{
  _DAT_14cb99d00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f95d0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99d08,1);
  return;
}



// FUNCTION 143f95d11 FUN_143f95d11 body=69 status=ok
// SIG undefined FUN_143f95d11(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f95d11(void)

{
  _DAT_14cb99d10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f95d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99d18,1);
  return;
}



// FUNCTION 143f95d56 FUN_143f95d56 body=69 status=ok
// SIG undefined FUN_143f95d56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f95d56(void)

{
  _DAT_14cb99d20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f95d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99d28,1);
  return;
}



// FUNCTION 143f95d9b FUN_143f95d9b body=69 status=ok
// SIG undefined FUN_143f95d9b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f95d9b(void)

{
  _DAT_14cb99d30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143f95ddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb99d38,1);
  return;
}



// FUNCTION 143f95de4 FUN_143f95de4 body=2144 status=ok
// SIG undefined FUN_143f95de4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f95de4(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *_Dst;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  float *pfVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  bool bVar14;
  bool bVar15;
  longlong lVar16;
  undefined8 *puVar17;
  double *pdVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  undefined4 uVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong lVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  float *local_130;
  float *local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar26 = (longlong *)(param_1 + -8);
    lVar16 = (**(code **)(*plVar26 + 8))(plVar26);
    if (lVar16 != 0) {
      fVar44 = (float)*(double *)(lVar16 + 0x6e0);
      plVar1 = (longlong *)(param_1 + 0x38);
      plVar2 = (longlong *)(param_1 + 0x40);
      puVar17 = *(undefined8 **)(param_1 + 0x40);
      if (puVar17 != (undefined8 *)0x0) {
        fVar45 = fVar44 - *(float *)(param_1 + 0x14);
        do {
          if (fVar45 < *(float *)*puVar17 || fVar45 == *(float *)*puVar17) break;
          FUN_14152a900(plVar26);
          lVar16 = *plVar2;
          if (lVar16 == 0) break;
          if (*(int *)(param_1 + 0x50) == 1) {
            do {
              lVar16 = *(longlong *)(lVar16 + 8);
              FUN_1400020a8();
              *plVar2 = lVar16;
            } while (lVar16 != 0);
            *plVar2 = 0;
            *(undefined8 *)(param_1 + 0x48) = 0;
            iVar21 = 0;
          }
          else {
            lVar16 = *(longlong *)(lVar16 + 8);
            *(longlong *)(param_1 + 0x40) = lVar16;
            *(undefined8 *)(lVar16 + 0x10) = 0;
            FUN_1400020a8();
            iVar21 = *(int *)(param_1 + 0x50) + -1;
          }
          (**(code **)(*plVar1 + 8))(plVar1,iVar21);
          puVar17 = (undefined8 *)*plVar2;
        } while (puVar17 != (undefined8 *)0x0);
      }
      if (((0 < *(int *)(param_1 + 0x30)) || (0 < *(int *)(param_1 + 0x60))) &&
         ((*(int *)(param_1 + 0x50) == 0 ||
          (*(float *)(param_1 + 0x20) <= fVar44 - *(float *)**(undefined8 **)(param_1 + 0x48))))) {
        iVar21 = *(int *)(param_1 + 0x70);
        if (iVar21 == 0) {
          puVar17 = (undefined8 *)FUN_14001cc68(0x28,0x10);
          *puVar17 = 0;
          puVar17[1] = 0;
          *(undefined4 *)puVar17 = 0xbf800000;
          puVar17[3] = 0;
          puVar17[4] = 0;
          puVar17[1] = 0;
          puVar17[2] = 0;
          *(undefined4 *)(param_1 + 0x70) = 1;
          if (*(int *)(param_1 + 0x74) == 0) {
            FUN_148af28fa(param_1 + 0x68,0);
          }
          **(undefined8 **)(param_1 + 0x68) = puVar17;
          iVar21 = *(int *)(param_1 + 0x70);
        }
        pfVar6 = *(float **)(*(longlong *)(param_1 + 0x68) + -8 + (longlong)iVar21 * 8);
        *(int *)(param_1 + 0x70) = iVar21 + -1;
        *pfVar6 = fVar44;
        puVar17 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *puVar17 = pfVar6;
        puVar17[1] = 0;
        puVar17[2] = 0;
        local_130 = pfVar6;
        if (puVar17 != (undefined8 *)0x0) {
          if (*(longlong *)(param_1 + 0x48) == 0) {
            *plVar2 = (longlong)puVar17;
          }
          else {
            *(undefined8 **)(*(longlong *)(param_1 + 0x48) + 8) = puVar17;
            puVar17[2] = *(undefined8 *)(param_1 + 0x48);
          }
          *(undefined8 **)(param_1 + 0x48) = puVar17;
          (**(code **)(*(longlong *)(param_1 + 0x38) + 8))(plVar1,*(int *)(param_1 + 0x50) + 1);
        }
        auVar13 = _DAT_149934d80;
        iVar21 = *(int *)(param_1 + 0x30);
        if ((longlong)iVar21 != 0) {
          lVar16 = *(longlong *)(param_1 + 0x28);
          local_128 = local_130 + 2;
          lVar28 = 0;
          bVar14 = false;
          do {
            iVar23 = *(int *)(lVar16 + 4 + lVar28);
            bVar15 = true;
            if (iVar23 != 0) {
              uVar20 = *(uint *)(lVar16 + lVar28);
              bVar15 = true;
              if ((-1 < (int)uVar20) && (bVar15 = true, (int)uVar20 < DAT_14c9647dc)) {
                plVar26 = (longlong *)
                          ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
                bVar15 = true;
                if ((plVar26 != (longlong *)0x0) &&
                   ((bVar15 = true, (int)plVar26[2] == iVar23 &&
                    (bVar15 = true, (*(uint *)(plVar26 + 1) & 0x10200000) == 0)))) {
                  plVar26 = (longlong *)*plVar26;
                  bVar15 = true;
                  if (plVar26 != (longlong *)0x0) {
                    fVar44 = local_130[4];
                    local_130[4] = (float)((int)fVar44 + 1);
                    if (local_130[5] == fVar44) {
                      FUN_146590c30(local_128);
                    }
                    pfVar6 = local_128;
                    lVar24 = (longlong)(int)fVar44 * 0xb0;
                    uVar22 = 0;
                    memset((void *)(*(longlong *)local_128 + lVar24),0,0xb0);
                    lVar27 = *(longlong *)pfVar6;
                    *(undefined8 *)(lVar27 + lVar24) = *(undefined8 *)(lVar16 + lVar28);
                    *(undefined8 *)(lVar27 + 8 + lVar24) = *(undefined8 *)(lVar16 + 8 + lVar28);
                    pdVar18 = (double *)(plVar26[0x39] + 0x240);
                    if (plVar26[0x39] == 0) {
                      pdVar18 = &DAT_14c846480;
                    }
                    auVar3 = *(undefined1 (*) [16])(pdVar18 + 8);
                    auVar4 = *(undefined1 (*) [16])(pdVar18 + 10);
                    auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_));
                    auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_));
                    uVar20 = movmskpd(0x4c846480,auVar35);
                    auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_));
                    auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_));
                    iVar23 = movmskpd(uVar22,auVar38);
                    uVar20 = iVar23 << 2 | uVar20;
                    uVar22 = (undefined4)DAT_14c8464c0;
                    uVar29 = DAT_14c8464c0._4_4_;
                    uVar30 = (undefined4)DAT_14c8464c8;
                    uVar31 = DAT_14c8464c8._4_4_;
                    dVar40 = DAT_14c8464a0;
                    dVar41 = DAT_14c8464a8;
                    dVar32 = DAT_14c8464d0;
                    uVar33 = uRam000000014c8464d8;
                    dVar34 = DAT_14c846480;
                    dVar36 = DAT_14c846488;
                    dVar37 = DAT_14c846490;
                    dVar39 = DAT_14c846498;
                    dVar42 = DAT_14c8464b0;
                    uVar43 = DAT_14c8464b8;
                    if (uVar20 != 0) {
                      auVar38 = divpd(auVar13,auVar3);
                      auVar35 = divpd(ZEXT816(0x3ff0000000000000),auVar4);
                      dVar40 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) &
                                       auVar38._0_8_);
                      dVar41 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) &
                                       auVar38._8_8_);
                      dVar32 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) &
                                       auVar35._0_8_);
                      dVar34 = -*pdVar18;
                      dVar36 = -pdVar18[1];
                      dVar37 = pdVar18[2] * -1.0;
                      dVar39 = pdVar18[3] * 1.0;
                      dVar9 = pdVar18[4] * dVar40;
                      dVar10 = pdVar18[5] * dVar41;
                      dVar7 = pdVar18[6] * dVar32;
                      dVar42 = dVar10 * dVar34 - dVar36 * dVar9;
                      dVar8 = dVar7 * dVar36 - dVar37 * dVar10;
                      dVar11 = dVar9 * dVar37 - dVar34 * dVar7;
                      dVar8 = dVar8 + dVar8;
                      dVar11 = dVar11 + dVar11;
                      dVar42 = dVar42 + dVar42;
                      uVar22 = SUB84(dVar40,0);
                      uVar29 = (int)((ulonglong)dVar40 >> 0x20);
                      uVar30 = SUB84(dVar41,0);
                      uVar31 = (int)((ulonglong)dVar41 >> 0x20);
                      dVar40 = 0.0 - ((dVar42 * dVar36 - dVar11 * dVar37) + dVar39 * dVar8 + dVar9);
                      dVar41 = 0.0 - (dVar42 * *pdVar18 + dVar37 * dVar8 + dVar39 * dVar11 + dVar10)
                      ;
                      uVar33 = 0;
                      dVar42 = 0.0 - (dVar39 * dVar42 + dVar7 + (dVar11 * dVar34 - dVar8 * dVar36));
                      uVar43 = 0;
                    }
                    lVar27 = lVar27 + lVar24;
                    *(double *)(lVar27 + 0x50) = dVar34;
                    *(double *)(lVar27 + 0x58) = dVar36;
                    *(double *)(lVar27 + 0x60) = dVar37;
                    *(double *)(lVar27 + 0x68) = dVar39;
                    *(double *)(lVar27 + 0x70) = dVar40;
                    *(double *)(lVar27 + 0x78) = dVar41;
                    *(double *)(lVar27 + 0x80) = dVar42;
                    *(undefined8 *)(lVar27 + 0x88) = uVar43;
                    *(undefined4 *)(lVar27 + 0x90) = uVar22;
                    *(undefined4 *)(lVar27 + 0x94) = uVar29;
                    *(undefined4 *)(lVar27 + 0x98) = uVar30;
                    *(undefined4 *)(lVar27 + 0x9c) = uVar31;
                    *(double *)(lVar27 + 0xa0) = dVar32;
                    *(undefined8 *)(lVar27 + 0xa8) = uVar33;
                    local_138 = 0;
                    (**(code **)(*plVar26 + 800))
                              (plVar26,CONCAT71((uint7)(uint3)(uVar20 >> 8),1),&local_108,&local_120
                              );
                    *(double *)(lVar27 + 0x10) = local_108 - local_120;
                    *(double *)(lVar27 + 0x18) = local_100 - local_118;
                    *(double *)(lVar27 + 0x20) = local_f8 - local_110;
                    *(double *)(lVar27 + 0x28) = local_108 + local_120;
                    *(double *)(lVar27 + 0x30) = local_100 + local_118;
                    *(double *)(lVar27 + 0x38) = local_f8 + local_110;
                    *(undefined1 *)(lVar27 + 0x40) = 1;
                    bVar15 = bVar14;
                  }
                }
              }
            }
            lVar28 = lVar28 + 0x10;
            bVar14 = bVar15;
          } while ((longlong)iVar21 * 0x10 != lVar28);
          if (bVar15) {
            uVar20 = *(uint *)(param_1 + 0x30);
            uVar25 = (ulonglong)(int)uVar20;
            if (0 < (longlong)uVar25) {
              iVar21 = -uVar20;
              lVar16 = uVar25 << 4;
              do {
                lVar16 = lVar16 + -0x10;
                lVar28 = *(longlong *)(param_1 + 0x28);
                iVar23 = *(int *)(lVar28 + 4 + lVar16);
                if ((((iVar23 == 0) || (uVar5 = *(uint *)(lVar28 + lVar16), (int)uVar5 < 0)) ||
                    (DAT_14c9647dc <= (int)uVar5)) ||
                   (((lVar27 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8),
                     lVar27 == 0 || (*(int *)(lVar27 + 0x10) != iVar23)) ||
                    ((*(uint *)(lVar27 + 8) & 0x10200000) != 0)))) {
                  if (uVar25 != uVar20) {
                    iVar23 = uVar20 + iVar21;
                    if (0 < iVar23) {
                      iVar23 = 1;
                    }
                    memmove((uint *)(lVar28 + lVar16),
                            (void *)(lVar28 + (longlong)(int)(uVar20 - iVar23) * 0x10),
                            (longlong)iVar23 << 4);
                    uVar20 = *(uint *)(param_1 + 0x30);
                  }
                  uVar20 = uVar20 - 1;
                  *(uint *)(param_1 + 0x30) = uVar20;
                }
                iVar21 = iVar21 + 1;
                bVar14 = 1 < uVar25;
                uVar25 = uVar25 - 1;
              } while (bVar14);
            }
          }
        }
        uVar20 = *(uint *)(param_1 + 0x60);
        uVar25 = (ulonglong)uVar20;
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar25);
        }
        pfVar6 = local_130 + 6;
        if ((int)local_130[9] < (int)uVar20) {
          FUN_148af29b0(pfVar6,uVar20);
          uVar25 = (ulonglong)*(uint *)(param_1 + 0x60);
        }
        if (0 < (int)uVar25) {
          iVar21 = -(int)uVar25;
          lVar16 = uVar25 << 4;
          do {
            lVar16 = lVar16 + -0x10;
            lVar28 = *(longlong *)(param_1 + 0x58);
            _Dst = (uint *)(lVar28 + lVar16);
            if (((*(longlong *)(lVar28 + 8 + lVar16) == 0) ||
                (iVar23 = *(int *)(lVar28 + 4 + lVar16), iVar23 == 0)) ||
               (((uVar20 = *_Dst, (int)uVar20 < 0 ||
                 (((DAT_14c9647dc <= (int)uVar20 ||
                   (lVar27 = (ulonglong)((uVar20 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8),
                   lVar27 == 0)) || (*(int *)(lVar27 + 0x10) != iVar23)))) ||
                ((*(uint *)(lVar27 + 8) & 0x10200000) != 0)))) {
              uVar20 = *(uint *)(param_1 + 0x60);
              if (uVar25 != uVar20) {
                iVar23 = iVar21 + uVar20;
                if (0 < iVar23) {
                  iVar23 = 1;
                }
                memmove(_Dst,(void *)(lVar28 + (longlong)(int)(uVar20 - iVar23) * 0x10),
                        (longlong)iVar23 << 4);
                uVar20 = *(uint *)(param_1 + 0x60);
              }
              *(uint *)(param_1 + 0x60) = uVar20 - 1;
              FUN_148af2b94((longlong *)(param_1 + 0x58));
            }
            else {
              puVar19 = (uint *)FUN_148af0e22(pfVar6);
              uVar20 = _Dst[1];
              uVar5 = _Dst[2];
              uVar12 = _Dst[3];
              *puVar19 = *_Dst;
              puVar19[1] = uVar20;
              puVar19[2] = uVar5;
              puVar19[3] = uVar12;
              (**(code **)(**(longlong **)(_Dst + 2) + 0x10))(*(longlong **)(_Dst + 2),puVar19 + 4);
            }
            iVar21 = iVar21 + 1;
            bVar14 = 1 < uVar25;
            uVar25 = uVar25 - 1;
          } while (bVar14);
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f96646 FUN_143f96646 body=897 status=ok
// SIG undefined FUN_143f96646(void)

void FUN_143f96646(double *param_1,longlong param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  
  dVar11 = *(double *)(param_2 + 0x10) * param_1[8];
  dVar12 = *(double *)(param_2 + 0x18) * param_1[9];
  dVar9 = *(double *)(param_2 + 0x20) * param_1[10];
  dVar7 = *param_1;
  dVar8 = param_1[1];
  dVar10 = param_1[2];
  dVar1 = param_1[3];
  dVar13 = dVar12 * dVar7 - dVar11 * dVar8;
  dVar14 = dVar9 * dVar8 - dVar12 * dVar10;
  dVar15 = dVar11 * dVar10 - dVar7 * dVar9;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  dVar6 = (dVar10 * dVar14 - dVar7 * dVar13) + param_1[3] * dVar15 + dVar12 + param_1[5];
  dVar12 = param_1[6];
  auVar2._8_4_ = SUB84(dVar6,0);
  auVar2._0_8_ = (dVar13 * dVar8 - dVar15 * dVar10) + dVar1 * dVar14 + dVar11 + param_1[4];
  auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x10) = auVar2;
  *(double *)(param_2 + 0x20) = dVar13 * dVar1 + dVar9 + (dVar15 * dVar7 - dVar14 * dVar8) + dVar12;
  dVar11 = *(double *)(param_2 + 0x28) * param_1[8];
  dVar12 = *(double *)(param_2 + 0x30) * param_1[9];
  dVar9 = *(double *)(param_2 + 0x38) * param_1[10];
  dVar7 = *param_1;
  dVar8 = param_1[1];
  dVar10 = param_1[2];
  dVar1 = param_1[3];
  dVar13 = dVar12 * dVar7 - dVar11 * dVar8;
  dVar14 = dVar9 * dVar8 - dVar12 * dVar10;
  dVar15 = dVar11 * dVar10 - dVar7 * dVar9;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  dVar6 = (dVar10 * dVar14 - dVar7 * dVar13) + param_1[3] * dVar15 + dVar12 + param_1[5];
  dVar12 = param_1[6];
  auVar3._8_4_ = SUB84(dVar6,0);
  auVar3._0_8_ = (dVar13 * dVar8 - dVar15 * dVar10) + dVar1 * dVar14 + dVar11 + param_1[4];
  auVar3._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x28) = auVar3;
  *(double *)(param_2 + 0x38) = dVar13 * dVar1 + dVar9 + (dVar15 * dVar7 - dVar14 * dVar8) + dVar12;
  dVar9 = *(double *)(param_2 + 0x40) * param_1[8];
  dVar15 = *(double *)(param_2 + 0x48) * param_1[9];
  dVar10 = *(double *)(param_2 + 0x50) * param_1[10];
  dVar6 = *param_1;
  dVar7 = param_1[1];
  dVar8 = param_1[2];
  dVar1 = param_1[3];
  dVar12 = dVar15 * dVar6 - dVar9 * dVar7;
  dVar11 = dVar10 * dVar7 - dVar15 * dVar8;
  dVar13 = dVar9 * dVar8 - dVar6 * dVar10;
  dVar11 = dVar11 + dVar11;
  dVar13 = dVar13 + dVar13;
  dVar12 = dVar12 + dVar12;
  dVar15 = (dVar8 * dVar11 - dVar6 * dVar12) + param_1[3] * dVar13 + dVar15;
  auVar4._8_4_ = SUB84(dVar15,0);
  auVar4._0_8_ = (dVar12 * dVar7 - dVar13 * dVar8) + dVar1 * dVar11 + dVar9;
  auVar4._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x40) = auVar4;
  *(double *)(param_2 + 0x50) = dVar12 * dVar1 + dVar10 + (dVar13 * dVar6 - dVar11 * dVar7);
  dVar9 = *(double *)(param_2 + 0x58) * param_1[8];
  dVar15 = *(double *)(param_2 + 0x60) * param_1[9];
  dVar10 = *(double *)(param_2 + 0x68) * param_1[10];
  dVar6 = *param_1;
  dVar7 = param_1[1];
  dVar8 = param_1[2];
  dVar1 = param_1[3];
  dVar12 = dVar15 * dVar6 - dVar9 * dVar7;
  dVar11 = dVar10 * dVar7 - dVar15 * dVar8;
  dVar13 = dVar9 * dVar8 - dVar6 * dVar10;
  dVar11 = dVar11 + dVar11;
  dVar13 = dVar13 + dVar13;
  dVar12 = dVar12 + dVar12;
  dVar15 = (dVar8 * dVar11 - dVar6 * dVar12) + param_1[3] * dVar13 + dVar15;
  auVar5._8_4_ = SUB84(dVar15,0);
  auVar5._0_8_ = (dVar12 * dVar7 - dVar13 * dVar8) + dVar1 * dVar11 + dVar9;
  auVar5._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x58) = auVar5;
  *(double *)(param_2 + 0x68) = dVar12 * dVar1 + dVar10 + (dVar13 * dVar6 - dVar11 * dVar7);
  return;
}



// FUNCTION 143f969c8 FUN_143f969c8 body=7190 status=ok
// SIG undefined FUN_143f969c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143f969c8(longlong *param_1,float param_2,undefined4 *param_3,double *param_4,
                       double *param_5,uint param_6,undefined8 *param_7,longlong param_8,
                       uint *param_9,char param_10)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  int *piVar10;
  double *pdVar11;
  int *piVar12;
  uint uVar13;
  undefined8 in_RDX;
  undefined8 *puVar14;
  undefined4 uVar15;
  bool bVar16;
  longlong lVar17;
  longlong lVar18;
  int *piVar19;
  longlong lVar20;
  uint *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  float fVar26;
  double dVar27;
  double dVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  double dVar52;
  undefined4 uVar53;
  undefined1 auStack_648 [32];
  double *local_628;
  undefined8 *local_620;
  undefined8 *local_618;
  uint local_610;
  undefined8 *local_608;
  longlong local_600;
  uint *local_5f8;
  char local_5f0;
  undefined4 *local_5e0;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  uint local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  double local_598;
  double dStack_590;
  undefined1 (*local_588) [16];
  ulonglong local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  ulonglong local_560;
  double local_558;
  double dStack_550;
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  double *local_518;
  undefined2 *local_510;
  undefined1 (*local_508) [16];
  undefined2 *local_500;
  double local_4f8;
  double dStack_4f0;
  undefined8 local_4e0;
  double local_4d8;
  longlong local_4d0;
  undefined1 local_4c8 [16];
  double local_4b8;
  double local_4a8;
  ulonglong local_4a0;
  ulonglong local_498;
  double local_490;
  double local_488;
  double local_480;
  undefined1 local_478 [16];
  double local_468;
  double dStack_460;
  undefined2 local_44c;
  undefined1 local_44a;
  undefined8 local_448;
  float local_440;
  undefined4 local_43c;
  double local_438;
  double local_430;
  double dStack_428;
  double local_420;
  double local_418;
  double dStack_410;
  double local_408 [2];
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  undefined8 local_390;
  uint local_388;
  uint local_384;
  char local_380;
  undefined1 local_37f;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined2 uStack_360;
  undefined6 local_35e;
  undefined2 uStack_358;
  undefined2 uStack_356;
  undefined4 uStack_354;
  char cStack_350;
  char cStack_34f;
  int local_348;
  int local_344 [7];
  int *local_328;
  int local_320;
  undefined4 local_31c;
  undefined1 local_318 [16];
  undefined1 *local_308;
  int local_300;
  undefined4 local_2fc;
  undefined8 local_2f8;
  double adStack_2f0 [3];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  undefined1 local_270 [24];
  undefined4 local_258;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_228;
  undefined1 local_224;
  undefined2 local_223;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  uint local_1fc;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_648;
  if ((float)SQRT((param_5[2] - param_4[2]) * (param_5[2] - param_4[2]) +
                  (*param_5 - *param_4) * (*param_5 - *param_4) +
                  (param_5[1] - param_4[1]) * (param_5[1] - param_4[1])) < 0.0001) {
LAB_143f96aa5:
    uVar23 = 0;
    goto LAB_143f96c2a;
  }
  fVar26 = 0.0;
  if (DAT_14c763d68 == '\x01') {
    if (ABS(DAT_14c763d6c - DAT_14cb99cf8) <= 1e-08) {
      fVar26 = (float)(-(uint)(DAT_14c763d6c <= param_2) & 0x3f800000);
    }
    else {
      fVar26 = (param_2 - DAT_14cb99cf8) / (DAT_14c763d6c - DAT_14cb99cf8);
    }
    if (1.0 <= fVar26) {
      fVar26 = 1.0;
    }
    if (fVar26 <= 0.0) {
      fVar26 = 0.0;
    }
    fVar26 = (DAT_14c763d74 - DAT_14c763d70) * fVar26 + DAT_14c763d70;
  }
  local_5e0 = param_3;
  if (fVar26 < DAT_14c763d70) {
    local_620 = &local_4e0;
    local_628 = &local_4d8;
    cVar6 = FUN_148af0c7e(param_1,in_RDX,&local_4d0,(longlong)&local_4e0 + 4);
    if (cVar6 == '\0') goto LAB_143f96aa5;
    local_378 = *param_7;
    uStack_370 = param_7[1];
    uStack_368 = param_7[2];
    uVar5 = *(undefined8 *)((longlong)param_7 + 0x22);
    uStack_358 = (undefined2)((ulonglong)*(undefined8 *)((longlong)param_7 + 0x1a) >> 0x30);
    uStack_356 = (undefined2)uVar5;
    uStack_354 = (undefined4)((ulonglong)uVar5 >> 0x10);
    cStack_350 = (char)((ulonglong)uVar5 >> 0x30);
    cStack_34f = (char)((ulonglong)uVar5 >> 0x38);
    uStack_360 = (undefined2)param_7[3];
    local_35e = (undefined6)((ulonglong)param_7[3] >> 0x10);
    local_328 = (int *)0x0;
    local_320 = *(int *)(param_7 + 0xb);
    lVar17 = (longlong)local_320;
    if (lVar17 == 0) {
      local_31c = 8;
    }
    else {
      puVar14 = param_7 + 6;
      if ((undefined8 *)param_7[10] != (undefined8 *)0x0) {
        puVar14 = (undefined8 *)param_7[10];
      }
      FUN_14470be6c(&local_348,local_320,0);
      piVar10 = local_328;
      if (local_328 == (int *)0x0) {
        piVar10 = &local_348;
      }
      memcpy(piVar10,puVar14,lVar17 << 2);
    }
    local_308 = (undefined1 *)0x0;
    local_300 = *(int *)(param_7 + 0xf);
    lVar17 = (longlong)local_300;
    if (lVar17 == 0) {
      local_2fc = 4;
    }
    else {
      puVar14 = param_7 + 0xc;
      if ((undefined8 *)param_7[0xe] != (undefined8 *)0x0) {
        puVar14 = (undefined8 *)param_7[0xe];
      }
      FUN_1447163e6(local_318,local_300,0);
      puVar9 = local_308;
      if (local_308 == (undefined1 *)0x0) {
        puVar9 = local_318;
      }
      memcpy(puVar9,puVar14,lVar17 << 2);
    }
    uStack_368._0_6_ = CONCAT15(1,(undefined5)uStack_368);
    uVar7 = 0;
    memset(local_408,0,0x90);
    local_448 = local_4d0;
    local_438 = local_4d8;
    local_43c = local_4e0._4_4_;
    local_420 = param_4[2];
    local_430 = *param_4;
    dStack_428 = param_4[1];
    local_418 = *param_5;
    dStack_410 = param_5[1];
    local_408[0] = param_5[2];
    local_3e8 = DAT_14c8463e0;
    uStack_3e0 = DAT_14c8463e8;
    local_3f8 = DAT_14c8463d0;
    uStack_3f0 = DAT_14c8463d8;
    local_3c8 = param_4[2];
    local_3d8 = *param_4;
    dStack_3d0 = param_4[1];
    local_3b0 = param_5[2];
    local_3c0 = *param_5;
    dStack_3b8 = param_5[1];
    local_380 = param_10;
    local_37f = *param_9 != 0;
    if ((bool)local_37f) {
      local_388 = 0;
      local_390 = (double)((ulonglong)*param_9 << 0x20);
      local_384 = (uint)*(byte *)(param_7 + 2) + param_9[1] * 0x4000000 + 1;
    }
    else {
      lVar17 = 0;
      uVar13 = 0;
      do {
        if (*(char *)(param_8 + lVar17) == '\x02') {
          uVar13 = uVar13 | 1 << ((uint)lVar17 & 0x1f);
        }
        else if (*(char *)(param_8 + lVar17) == '\x01') {
          uVar7 = uVar7 | 1 << ((uint)lVar17 & 0x1f);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x20);
      local_390 = (double)CONCAT44(uVar13,1);
      local_384 = (uint)*(byte *)(param_7 + 2) + (param_6 & 0xff) * 0x200000 + 1 |
                  CONCAT22(uStack_356,uStack_358) << 0x1a;
      local_388 = uVar7;
    }
    local_480 = local_3b0 - local_3c8;
    local_488 = dStack_3b8 - dStack_3d0;
    local_490 = local_3c0 - local_3d8;
    local_4a8 = (double)(~-(ulonglong)(local_490 != 0.0) & 0x47eff933c0000000 |
                        (ulonglong)(1.0 / local_490) & -(ulonglong)(local_490 != 0.0));
    local_4a0 = ~-(ulonglong)(local_488 != 0.0) & 0x47eff933c0000000 |
                (ulonglong)(1.0 / local_488) & -(ulonglong)(local_488 != 0.0);
    local_498 = ~-(ulonglong)(local_480 != 0.0) & 0x47eff933c0000000 |
                (ulonglong)(1.0 / local_480) & -(ulonglong)(local_480 != 0.0);
    local_440 = param_2;
    if ((longlong)*(int *)(local_4d0 + 0x10) == 0) {
LAB_143f9853a:
      uVar23 = 0;
    }
    else {
      puVar21 = *(uint **)(local_4d0 + 8);
      puVar22 = puVar21 + (longlong)*(int *)(local_4d0 + 0x10) * 0x2c;
      local_500 = &local_223;
      local_508 = (undefined1 (*) [16])local_270;
      local_518 = (double *)(local_5e0 + 2);
      local_588 = (undefined1 (*) [16])(local_5e0 + 0x22);
      local_510 = (undefined2 *)((longlong)local_5e0 + 0xd5);
      local_580 = 0;
      do {
        if (((((puVar21[1] != 0) && (uVar7 = *puVar21, -1 < (int)uVar7)) &&
             ((int)uVar7 < DAT_14c9647dc)) &&
            ((puVar14 = (undefined8 *)
                        ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
             puVar14 != (undefined8 *)0x0 && (*(uint *)(puVar14 + 2) == puVar21[1])))) &&
           (((*(uint *)(puVar14 + 1) & 0x10200000) == 0 &&
            (param_4 = (double *)*puVar14, param_4 != (double *)0x0)))) {
          puVar9 = local_308;
          if (local_308 == (undefined1 *)0x0) {
            puVar9 = local_318;
          }
          if ((longlong)local_300 != 0) {
            lVar17 = 0;
            do {
              if (*(int *)(puVar9 + lVar17) == *(int *)((longlong)param_4 + 0xc))
              goto LAB_143f984e3;
              lVar17 = lVar17 + 4;
            } while ((longlong)local_300 * 4 != lVar17);
          }
          lVar17 = *(longlong *)(puVar21 + 2);
          if (*(int *)(lVar17 + 0x30) != 0) {
            local_628 = &local_4a8;
            local_620 = (undefined8 *)0x0;
            cVar6 = FUN_144b264a4(puVar21 + 4,&local_3d8,&local_3c0,&local_490);
            if (cVar6 != '\0') {
              pdVar11 = (double *)((longlong)param_4[0x39] + 0x240);
              if (param_4[0x39] == 0.0) {
                pdVar11 = (double *)&DAT_14c846480;
              }
              dVar3 = *pdVar11;
              dVar24 = pdVar11[1];
              dVar49 = pdVar11[2];
              dVar40 = pdVar11[3];
              local_598 = pdVar11[4];
              dStack_590 = pdVar11[5];
              local_108 = pdVar11[6];
              auVar32 = *(undefined1 (*) [16])(pdVar11 + 8);
              dVar50 = auVar32._0_8_;
              dVar31 = auVar32._8_8_;
              auVar51 = *(undefined1 (*) [16])(pdVar11 + 10);
              dVar27 = auVar51._0_8_;
              dVar45 = auVar51._8_8_;
              auVar37 = *(undefined1 (*) [16])(puVar21 + 0x24);
              local_1e8 = auVar37._0_8_;
              dVar52 = auVar37._8_8_;
              auVar25 = *(undefined1 (*) [16])(puVar21 + 0x28);
              dVar43 = auVar25._0_8_;
              auVar32 = minpd(auVar37,auVar32);
              auVar37 = minpd(auVar25,auVar51);
              auVar51._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
              auVar51._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
              iVar8 = movmskpd(0x4c846480,auVar51);
              auVar32._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
              auVar32._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
              uVar7 = movmskpd((int)pdVar11,auVar32);
              if ((uVar7 & 0x3fffffff) == 0 && iVar8 == 0) {
                dVar46 = *(double *)(puVar21 + 0x14);
                dVar35 = *(double *)(puVar21 + 0x16);
                dVar48 = *(double *)(puVar21 + 0x18);
                dVar4 = *(double *)(puVar21 + 0x1a);
                local_4f8 = dVar35 * dVar49 * -1.0 +
                            dVar48 * dVar24 + dVar3 * dVar4 * 1.0 + dVar40 * dVar46;
                dStack_4f0 = dVar46 * dVar49 * 1.0 +
                             dVar4 * dVar24 + dVar3 * dVar48 * -1.0 + dVar40 * dVar35;
                dVar44 = *(double *)(puVar21 + 0x1c) * dVar50;
                dVar47 = *(double *)(puVar21 + 0x1e) * dVar31;
                dVar41 = *(double *)(puVar21 + 0x20) * dVar27;
                dVar34 = *(double *)(puVar21 + 0x22) * dVar45;
                dVar36 = dVar47 * dVar3 - dVar24 * dVar44;
                dVar38 = dVar41 * dVar24 - dVar49 * dVar47;
                dVar39 = dVar44 * dVar49 - dVar3 * dVar41;
                dVar42 = dVar34 * dVar40 - dVar40 * dVar34;
                dVar38 = dVar38 + dVar38;
                dVar39 = dVar39 + dVar39;
                dVar36 = dVar36 + dVar36;
                dVar42 = dVar42 + dVar42;
                local_548._8_8_ =
                     dVar48 * dVar49 * -1.0 +
                     ((dVar3 * dVar46 * -1.0 + dVar40 * dVar4) - dVar24 * dVar35);
                local_548._0_8_ =
                     dVar4 * dVar49 * 1.0 +
                     ((dVar3 * dVar35 * 1.0 + dVar40 * dVar48) - dVar24 * dVar46);
                local_598 = local_598 +
                            (dVar36 * dVar24 - dVar49 * dVar39) + dVar40 * dVar38 + dVar44;
                dStack_590 = dStack_590 +
                             (dVar38 * dVar49 - dVar36 * dVar3) + dVar40 * dVar39 + dVar47;
                local_558 = local_108 +
                            (dVar39 * dVar3 - dVar24 * dVar38) + dVar40 * dVar36 + dVar41;
                dStack_550 = pdVar11[7] +
                             (dVar42 * dVar40 - dVar42 * dVar40) + dVar40 * dVar42 + dVar34;
                dVar50 = local_1e8 * dVar50;
                dVar52 = dVar52 * dVar31;
                dVar43 = dVar43 * dVar27;
                dVar45 = auVar25._8_8_ * dVar45;
              }
              else {
                dVar34 = dVar24 + dVar24;
                dVar42 = dVar49 + dVar49;
                dVar39 = dVar3 * (dVar3 + dVar3);
                dVar41 = (1.0 - (dVar49 * dVar42 + dVar39)) * dVar31;
                dVar46 = (dVar3 + dVar3) * dVar40;
                dStack_130 = (dVar42 * dVar24 - dVar46) * dVar27;
                local_138 = (dVar34 * dVar40 + dVar3 * dVar42) * dVar27;
                local_128 = (1.0 - (dVar39 + dVar24 * dVar34)) * dVar27;
                dVar45 = dVar45 * auVar25._8_8_;
                local_528._8_4_ = SUB84(dVar45,0);
                local_528._0_8_ = dVar27 * dVar43;
                local_528._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
                dVar27 = (dVar34 * dVar3 + dVar42 * dVar40) * dVar50;
                local_148 = (dVar42 * dVar24 + dVar46) * dVar31;
                local_168 = (dVar3 * dVar42 - dVar34 * dVar40) * dVar50;
                local_178._8_4_ = SUB84(dVar27,0);
                local_178._0_8_ = (1.0 - (dVar49 * dVar42 + dVar24 * dVar34)) * dVar50;
                local_178._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
                uStack_160 = 0;
                local_158._8_4_ = SUB84(dVar41,0);
                local_158._0_8_ = (dVar34 * dVar3 - dVar42 * dVar40) * dVar31;
                local_158._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
                uStack_140 = 0;
                uStack_120 = 0;
                dStack_100 = 1.0;
                dVar49 = *(double *)(puVar21 + 0x14);
                dVar40 = *(double *)(puVar21 + 0x16);
                dVar41 = *(double *)(puVar21 + 0x18);
                dVar34 = dVar40 + dVar40;
                dVar45 = dVar41 + dVar41;
                dVar39 = dVar49 * (dVar49 + dVar49);
                local_1a8 = (1.0 - (dVar39 + dVar40 * dVar34)) * dVar43;
                dVar27 = *(double *)(puVar21 + 0x1a);
                dVar3 = dVar45 * dVar27;
                dVar24 = (dVar49 + dVar49) * *(double *)(puVar21 + 0x1a);
                dVar27 = dVar34 * dVar27;
                local_1b8 = (dVar27 + *(double *)(puVar21 + 0x14) * dVar45) * dVar43;
                local_1d8 = (dVar34 * dVar49 - dVar3) * dVar52;
                dStack_1b0 = (dVar45 * dVar40 - dVar24) * dVar43;
                local_538._8_4_ = SUB84(dVar31 * dVar52,0);
                local_538._0_8_ = dVar50 * local_1e8;
                local_538._12_4_ = (int)((ulonglong)(dVar31 * dVar52) >> 0x20);
                local_1f8 = (1.0 - (dVar41 * dVar45 + dVar40 * dVar34)) * local_1e8;
                dStack_1d0 = (1.0 - (dVar41 * dVar45 + dVar39)) * dVar52;
                dStack_1f0 = (dVar34 * dVar49 + dVar3) * local_1e8;
                local_1c8 = (dVar45 * dVar40 + dVar24) * dVar52;
                local_1e8 = (*(double *)(puVar21 + 0x14) * dVar45 - dVar27) * local_1e8;
                uStack_1e0 = 0;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = *(undefined8 *)(puVar21 + 0x1c);
                uStack_190 = *(undefined8 *)(puVar21 + 0x1e);
                local_188 = *(undefined8 *)(puVar21 + 0x20);
                uStack_180 = 0x3ff0000000000000;
                param_4 = (double *)&local_2f8;
                local_118 = local_598;
                dStack_110 = dStack_590;
                FUN_1447fea8d(param_4,&local_1f8,local_178);
                auVar32 = _DAT_149934d80;
                dVar27 = adStack_2f0[1] * adStack_2f0[1] +
                         (double)local_2f8 * (double)local_2f8 + adStack_2f0[0] * adStack_2f0[0];
                dVar43 = (double)local_2c8._0_8_ * (double)local_2c8._0_8_ +
                         (double)local_2d8._0_8_ * (double)local_2d8._0_8_ +
                         (double)local_2d8._8_8_ * (double)local_2d8._8_8_;
                dVar50 = local_2a8 * local_2a8 + local_2b8 * local_2b8 + dStack_2b0 * dStack_2b0;
                uVar23 = -(ulonglong)(0.0 <= dVar27 + -9.99999993922529e-09);
                dVar27 = (double)(~uVar23 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar27)) & uVar23);
                uVar23 = -(ulonglong)(0.0 <= dVar43 + -9.99999993922529e-09);
                dVar31 = (double)(~uVar23 & 0x3ff0000000000000 |
                                 (ulonglong)(1.0 / SQRT(dVar43)) & uVar23);
                uVar23 = -(ulonglong)(0.0 <= dVar50 + -9.99999993922529e-09);
                dVar3 = (double)(~uVar23 & 0x3ff0000000000000 |
                                (ulonglong)(1.0 / SQRT(dVar50)) & uVar23);
                dVar43 = (double)local_528._0_8_;
                dVar45 = (double)local_528._8_8_;
                dVar50 = (double)local_538._0_8_;
                dVar52 = (double)local_538._8_8_;
                auVar37._8_8_ = -(ulonglong)(0.0 <= (double)local_538._8_8_);
                auVar37._0_8_ = -(ulonglong)(0.0 <= (double)local_538._0_8_);
                auVar51 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar37);
                dVar24 = (double)(~-(ulonglong)(0.0 <= (double)local_528._0_8_) & 0xbff0000000000000
                                 | (ulonglong)
                                   ((uint)(-(ulonglong)(0.0 <= (double)local_528._0_8_) >> 0x20) &
                                   0x3ff00000) << 0x20);
                dVar49 = auVar51._0_8_;
                local_2f8 = (undefined8 *)((double)local_2f8 * dVar27 * dVar49);
                adStack_2f0[0] = adStack_2f0[0] * dVar27 * dVar49;
                adStack_2f0[1] = dVar27 * adStack_2f0[1] * dVar49;
                dVar27 = auVar51._8_8_;
                local_2d8._8_8_ = (double)local_2d8._8_8_ * dVar31 * dVar27;
                local_2d8._0_8_ = dVar27 * (double)local_2d8._0_8_ * dVar31;
                local_2c8._0_8_ = dVar31 * (double)local_2c8._0_8_ * dVar27;
                local_2a8 = dVar3 * local_2a8 * dVar24;
                dStack_2b0 = dStack_2b0 * dVar3 * dVar24;
                local_2b8 = dVar24 * local_2b8 * dVar3;
                FUN_14481fd10(local_478,param_4);
                dVar27 = local_468 * local_468 + (double)local_478._0_8_ * (double)local_478._0_8_;
                dVar31 = dStack_460 * dStack_460 + (double)local_478._8_8_ * (double)local_478._8_8_
                ;
                auVar28._0_8_ = dVar27 + dVar31;
                auVar28._8_8_ = dVar27 + dVar31;
                auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
                auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
                auVar51 = sqrtpd(auVar28,auVar28);
                auVar32 = divpd(auVar32,auVar51);
                auVar33._0_8_ = auVar32._0_8_ * local_468;
                auVar33._8_8_ = auVar32._8_8_ * dStack_460;
                local_4f8 = (double)((ulonglong)((double)local_478._0_8_ * auVar32._0_8_) &
                                    -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
                dStack_4f0 = (double)((ulonglong)((double)local_478._8_8_ * auVar32._8_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
                local_548 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar25);
                local_598 = local_298;
                dStack_590 = dStack_290;
                local_558 = local_288;
                dStack_550 = 0.0;
              }
              dVar31 = local_558;
              dVar49 = dStack_590;
              dVar24 = local_598;
              dVar42 = local_430 * dVar50;
              dVar46 = dStack_428 * dVar52;
              dVar3 = local_420 * dVar43;
              dVar41 = local_548._8_8_;
              dVar40 = local_548._0_8_;
              dVar27 = dVar46 * local_4f8 - dStack_4f0 * dVar42;
              dVar35 = dVar3 * dStack_4f0 - dVar40 * dVar46;
              dVar34 = dVar42 * dVar40 - local_4f8 * dVar3;
              dVar35 = dVar35 + dVar35;
              dVar34 = dVar34 + dVar34;
              dVar27 = dVar27 + dVar27;
              local_538._8_4_ = SUB84(dVar52,0);
              local_538._0_8_ = dVar50;
              local_538._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
              dVar50 = local_418 * dVar50;
              dVar52 = dStack_410 * dVar52;
              local_528._8_4_ = SUB84(dVar45,0);
              local_528._0_8_ = dVar43;
              local_528._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
              dVar43 = local_408[0] * dVar43;
              dVar45 = dVar52 * local_4f8 - dStack_4f0 * dVar50;
              dVar48 = dVar43 * dStack_4f0 - dVar40 * dVar52;
              dVar39 = dVar50 * dVar40 - local_4f8 * dVar43;
              dVar48 = dVar48 + dVar48;
              dVar39 = dVar39 + dVar39;
              dVar45 = dVar45 + dVar45;
              local_1f8 = (dVar27 * dStack_4f0 - dVar34 * dVar40) + dVar41 * dVar35 + dVar42 +
                          local_598;
              dStack_1f0 = (dVar40 * dVar35 - local_4f8 * dVar27) + dVar41 * dVar34 + dVar46 +
                           dStack_590;
              local_1e8 = dVar27 * dVar41 + dVar3 + (dVar34 * local_4f8 - dVar35 * dStack_4f0) +
                          local_558;
              dVar27 = (dVar40 * dVar48 - local_4f8 * dVar45) + dVar41 * dVar39 + dVar52 +
                       dStack_590;
              local_4c8._8_4_ = SUB84(dVar27,0);
              local_4c8._0_8_ =
                   (dVar45 * dStack_4f0 - dVar39 * dVar40) + dVar41 * dVar48 + dVar50 + local_598;
              local_4c8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
              local_4b8 = dVar45 * dVar41 + dVar43 + (dVar39 * local_4f8 - dVar48 * dStack_4f0) +
                          local_558;
              local_178 = ZEXT816(0);
              local_168 = 0.0;
              uStack_160 = 0;
              local_158 = ZEXT816(0);
              local_148 = 0.0;
              uStack_140 = 0;
              local_138 = 0.0;
              dStack_130 = 0.0;
              local_128 = 0.0;
              uStack_120 = 0;
              local_118 = 0.0;
              local_44c = 0;
              local_44a = 0;
              dStack_100 = local_1e8;
              dStack_110 = local_1f8;
              local_108 = dStack_1f0;
              local_478 = local_4c8;
              local_468 = local_4b8;
              if (0 < *(int *)(lVar17 + 0x30)) {
                uVar53 = 0;
                local_59c = 0xffffffff;
                lVar20 = 0;
                bVar16 = false;
                local_5a8 = 0;
                local_5ac = 0;
                local_5b0 = 0;
                local_5b4 = 0;
                local_570 = 0;
                local_5bc = 0;
                local_5c0 = 0;
                local_5a0 = 0;
                local_5a4 = 0;
                local_560 = 0;
                local_568 = 0;
                local_5b8 = 0;
                fVar26 = 1.0;
                local_5c4 = 0;
                local_5c8 = 0;
                local_5cc = 0;
                local_5d0 = 0;
                local_5d4 = 0;
                local_5d8 = 0xffffffff;
                uVar15 = 0;
                local_578 = 0;
                auVar32 = _DAT_149e1ecd0;
                do {
                  iVar8 = *(int *)(*(longlong *)(lVar17 + 0x28) + 4 + lVar20 * 8);
                  if (((((iVar8 != 0) &&
                        (uVar7 = *(uint *)(*(longlong *)(lVar17 + 0x28) + lVar20 * 8),
                        -1 < (int)uVar7)) &&
                       (((int)uVar7 < DAT_14c9647dc &&
                        (((puVar14 = (undefined8 *)
                                     ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                          puVar14 != (undefined8 *)0x0 && (*(int *)(puVar14 + 2) == iVar8)) &&
                         ((*(uint *)(puVar14 + 1) & 0x10200000) == 0)))))) &&
                      ((param_4 = (double *)*puVar14, param_4 != (double *)0x0 &&
                       ((*(byte *)((longlong)param_4 + 0x9c) & 1) != 0)))) &&
                     (iVar8 = (**(code **)((longlong)*param_4 + 0x570))(param_4), iVar8 != 0)) {
                    if ((cStack_34f == '\0') && (cStack_34f = '\x01', 1 < local_320)) {
                      piVar10 = local_328;
                      if (local_328 == (int *)0x0) {
                        piVar10 = &local_348;
                      }
                      FUN_1449e0cb6(piVar10);
                      piVar10 = local_328;
                      if (local_328 == (int *)0x0) {
                        piVar10 = &local_348;
                      }
                      if ((longlong)local_320 != 1) {
                        piVar19 = piVar10 + local_320;
                        piVar12 = local_328 + 1;
                        if (local_328 == (int *)0x0) {
                          piVar12 = local_344;
                        }
                        iVar8 = *piVar10;
                        do {
                          iVar1 = *piVar12;
                          if (iVar8 != iVar1) {
                            piVar10[1] = iVar1;
                            piVar10 = piVar10 + 1;
                          }
                          piVar12 = piVar12 + 1;
                          iVar8 = iVar1;
                        } while (piVar12 != piVar19);
                      }
                      piVar19 = local_328;
                      if (local_328 == (int *)0x0) {
                        piVar19 = &local_348;
                      }
                      FUN_1479ab1f6(&local_348,
                                    (int)((ulonglong)((longlong)piVar10 - (longlong)piVar19) >> 2) +
                                    1);
                      auVar32 = _DAT_149e1ecd0;
                      dVar40 = (double)local_548._0_8_;
                      dVar41 = (double)local_548._8_8_;
                    }
                    piVar10 = local_328;
                    if (local_328 == (int *)0x0) {
                      piVar10 = &local_348;
                    }
                    if (local_320 != 0) {
                      lVar18 = 0;
                      do {
                        if (*(int *)((longlong)piVar10 + lVar18) ==
                            *(int *)((longlong)param_4 + 0xc)) goto LAB_143f98028;
                        lVar18 = lVar18 + 4;
                      } while ((longlong)local_320 * 4 != lVar18);
                    }
                    memset(&local_2f8,0,0x100);
                    local_228 = 0xffffffff;
                    local_2f8 = (undefined8 *)CONCAT44(0x3f800000,(undefined4)local_2f8);
                    local_254 = 0xffffffff;
                    local_618 = (undefined8 *)CONCAT71(local_618._1_7_,local_380);
                    local_620 = &local_378;
                    local_628 = (double *)&local_390;
                    cVar6 = (**(code **)((longlong)*param_4 + 0x9c0))
                                      (param_4,&local_2f8,&local_1f8,local_478);
                    if ((cVar6 != '\0') && (local_2f8._4_4_ < fVar26)) {
                      param_4 = adStack_2f0;
                      pdVar11 = (double *)local_178;
                      for (lVar18 = 0x10; lVar18 != 0; lVar18 = lVar18 + -1) {
                        *pdVar11 = *param_4;
                        param_4 = param_4 + 1;
                        pdVar11 = pdVar11 + 1;
                      }
                      local_4b8 = *(double *)local_508[1];
                      local_4c8 = *local_508;
                      local_5d8 = local_254;
                      local_578 = local_250;
                      local_5d4 = local_248;
                      local_5d0 = local_244;
                      local_5cc = local_240;
                      local_5c8 = local_23c;
                      local_5c4 = local_238;
                      local_5b8 = local_234;
                      local_568 = local_230;
                      local_59c = local_228;
                      local_560 = (ulonglong)CONCAT31((int3)((uint)local_228 >> 8),local_224);
                      local_44c = *local_500;
                      local_44a = *(undefined1 *)(local_500 + 1);
                      local_5a4 = local_220;
                      local_5a0 = local_21c;
                      local_5c0 = local_218;
                      local_5bc = local_214;
                      local_570 = local_210;
                      local_5b4 = local_208;
                      local_5b0 = local_204;
                      local_5ac = local_200;
                      local_5a8 = local_1fc;
                      bVar16 = true;
                      fVar26 = local_2f8._4_4_;
                      uVar53 = local_258;
                      uVar15 = (undefined4)local_2f8;
                      if (local_380 != '\0') goto LAB_143f9812f;
                    }
                  }
LAB_143f98028:
                  lVar20 = lVar20 + 1;
                } while (lVar20 < *(int *)(lVar17 + 0x30));
                if (bVar16) {
LAB_143f9812f:
                  if (fVar26 < (float)local_5e0[1]) {
                    *local_5e0 = uVar15;
                    local_5e0[1] = fVar26;
                    param_4 = (double *)local_178;
                    pdVar11 = local_518;
                    for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
                      *pdVar11 = *param_4;
                      param_4 = param_4 + 1;
                      pdVar11 = pdVar11 + 1;
                    }
                    *(double *)local_588[1] = local_4b8;
                    *local_588 = local_4c8;
                    local_5e0[0x28] = uVar53;
                    local_5e0[0x29] = local_5d8;
                    *(undefined8 *)(local_5e0 + 0x2a) = local_578;
                    local_5e0[0x2c] = local_5d4;
                    local_5e0[0x2d] = local_5d0;
                    local_5e0[0x2e] = local_5cc;
                    local_5e0[0x2f] = local_5c8;
                    local_5e0[0x30] = local_5c4;
                    local_5e0[0x31] = local_5b8;
                    *(undefined8 *)(local_5e0 + 0x32) = local_568;
                    local_5e0[0x34] = local_59c;
                    *(char *)(local_5e0 + 0x35) = (char)local_560;
                    *(undefined1 *)(local_510 + 1) = local_44a;
                    *local_510 = local_44c;
                    local_5e0[0x36] = local_5a4;
                    local_5e0[0x37] = local_5a0;
                    local_5e0[0x38] = local_5c0;
                    local_5e0[0x39] = local_5bc;
                    *(undefined8 *)(local_5e0 + 0x3a) = local_570;
                    local_5e0[0x3c] = local_5b4;
                    local_5e0[0x3d] = local_5b0;
                    local_5e0[0x3e] = local_5ac;
                    uVar23 = (ulonglong)local_5a8;
                    local_5e0[0x3f] = local_5a8;
                    if (cStack_350 == '\0') {
                      dVar50 = auVar32._0_8_;
                      dVar27 = auVar32._8_8_;
                      auVar29._8_8_ = -(ulonglong)(dVar27 < ABS(local_538._8_8_));
                      auVar29._0_8_ = -(ulonglong)(dVar50 < ABS(local_538._0_8_));
                      iVar8 = movmskpd(local_5a8,auVar29);
                      auVar30._8_8_ = -(ulonglong)(dVar27 < ABS(local_528._8_8_));
                      auVar30._0_8_ = -(ulonglong)(dVar50 < ABS(local_528._0_8_));
                      uVar7 = movmskpd((int)local_510,auVar30);
                      if ((uVar7 & 0x3fffffff) == 0 && iVar8 == 0) {
                        param_4 = (double *)&DAT_14c846480;
                        pdVar11 = (double *)&local_2f8;
                        for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
                          *pdVar11 = *param_4;
                          param_4 = param_4 + 1;
                          pdVar11 = pdVar11 + 1;
                        }
                      }
                      else {
                        auVar32 = divpd(_DAT_149934d80,local_538);
                        auVar51 = divpd(ZEXT816(0x3ff0000000000000),local_528);
                        local_2b8 = (double)(-(ulonglong)(dVar50 < ABS(local_538._0_8_)) &
                                            auVar32._0_8_);
                        dStack_2b0 = (double)(-(ulonglong)(dVar27 < ABS(local_538._8_8_)) &
                                             auVar32._8_8_);
                        local_2a8 = (double)(-(ulonglong)(dVar50 < ABS(local_528._0_8_)) &
                                            auVar51._0_8_);
                        local_2f8 = (undefined8 *)-local_4f8;
                        adStack_2f0[0] = -dStack_4f0;
                        adStack_2f0[1] = dVar40 * -1.0;
                        adStack_2f0[2] = dVar41 * 1.0;
                        dVar24 = dVar24 * local_2b8;
                        dVar49 = dVar49 * dStack_2b0;
                        dVar31 = dVar31 * local_2a8;
                        dVar50 = dVar49 * (double)local_2f8 - dVar24 * adStack_2f0[0];
                        dVar27 = dVar31 * adStack_2f0[0] - dVar49 * adStack_2f0[1];
                        dVar43 = dVar24 * adStack_2f0[1] - (double)local_2f8 * dVar31;
                        dVar27 = dVar27 + dVar27;
                        dVar43 = dVar43 + dVar43;
                        dVar50 = dVar50 + dVar50;
                        dVar45 = 0.0 - (dVar50 * local_4f8 + adStack_2f0[1] * dVar27 +
                                       adStack_2f0[2] * dVar43 + dVar49);
                        local_2d8._8_4_ = SUB84(dVar45,0);
                        local_2d8._0_8_ =
                             0.0 - ((dVar50 * adStack_2f0[0] - dVar43 * adStack_2f0[1]) +
                                   adStack_2f0[2] * dVar27 + dVar24);
                        local_2d8._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
                        local_2c8._8_8_ = 0;
                        local_2c8._0_8_ =
                             0.0 - (adStack_2f0[2] * dVar50 + dVar31 +
                                   (dVar43 * (double)local_2f8 - dVar27 * adStack_2f0[0]));
                        uStack_2a0 = 0;
                      }
                      uVar23 = FUN_143f96646(&local_2f8,local_5e0);
                    }
                    local_580 = CONCAT71((int7)(uVar23 >> 8),1);
                    if (local_380 != '\0') goto LAB_143f984fd;
                  }
                }
              }
            }
          }
        }
LAB_143f984e3:
        puVar21 = puVar21 + 0x2c;
      } while (puVar21 != puVar22);
      if ((local_580 & 1) == 0) goto LAB_143f9853a;
LAB_143f984fd:
      *(double *)(local_5e0 + 0x20) = local_420;
      *(double *)(local_5e0 + 0x1c) = local_430;
      *(double *)(local_5e0 + 0x1e) = dStack_428;
      *(double *)local_588[1] = local_408[0];
      *(double *)*local_588 = local_418;
      *(double *)((longlong)*local_588 + 8) = dStack_410;
      uVar23 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    }
    if (local_308 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_328 == (int *)0x0) goto LAB_143f96c2a;
  }
  else {
    local_448 = CONCAT44(fVar26,2);
    FUN_144a73fdc(&local_2f8,&DAT_14c8463d0);
    local_5f0 = param_10;
    local_5f8 = param_9;
    local_600 = param_8;
    local_608 = param_7;
    local_610 = param_6;
    local_618 = local_2f8;
    local_620 = &DAT_14c8463d0;
    local_628 = param_5;
    uVar7 = (**(code **)(*param_1 + 0x58))(param_1,*param_1,local_5e0,param_4);
    uVar23 = (ulonglong)uVar7;
    if (local_2f8 == (undefined8 *)0x0) goto LAB_143f96c2a;
    LOCK();
    piVar10 = (int *)(local_2f8 + 1);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if ((*piVar10 != 0) || (*(int *)((longlong)local_2f8 + 0xc) != 0)) goto LAB_143f96c2a;
    pcVar2 = *(code **)*local_2f8;
    if ((pcVar2 != FUN_141724e50) && (pcVar2 != FUN_141724e26)) {
      (*pcVar2)(local_2f8,1);
      goto LAB_143f96c2a;
    }
    *local_2f8 = &PTR_FUN_149f553e0;
  }
  FUN_1400020a8();
LAB_143f96c2a:
  if ((local_f0 ^ (ulonglong)auStack_648) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffffff;
}



// FUNCTION 143f985e0 FUN_143f985e0 body=5771 status=ok
// SIG undefined FUN_143f985e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_143f985e0(longlong *param_1,float param_2,longlong *param_3,double *param_4,double *param_5
                  ,uint param_6,undefined8 *param_7,longlong param_8,uint *param_9)

{
  byte *pbVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  int *piVar13;
  double *pdVar14;
  int *piVar15;
  uint uVar16;
  undefined8 in_RDX;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  uint *puVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  double dVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar44;
  undefined1 auVar45 [16];
  double dVar47;
  undefined1 auVar46 [16];
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  double dVar63;
  double dVar64;
  undefined1 auStack_498 [32];
  double *local_478;
  undefined8 *local_470;
  undefined8 *local_468;
  uint local_460;
  undefined8 *local_458;
  longlong local_450;
  uint *local_448;
  uint *local_438;
  longlong *local_430;
  double local_428;
  double dStack_420;
  int *local_410;
  double local_408;
  double dStack_400;
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [24];
  undefined8 *local_3c0;
  undefined8 local_3b8;
  double local_3b0;
  undefined8 *local_3a8;
  float local_39c;
  double local_398;
  ulonglong local_390;
  ulonglong local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined8 *local_348;
  float local_340;
  undefined4 local_33c;
  double local_338;
  double local_330;
  double dStack_328;
  double local_320;
  double local_318;
  double dStack_310;
  double local_308 [2];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  undefined8 local_290;
  uint local_288;
  uint local_284;
  char local_27f;
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
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
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
  undefined8 local_178;
  double dStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  if (0.0001 <= (float)SQRT((param_5[2] - param_4[2]) * (param_5[2] - param_4[2]) +
                            (*param_5 - *param_4) * (*param_5 - *param_4) +
                            (param_5[1] - param_4[1]) * (param_5[1] - param_4[1]))) {
    fVar36 = 0.0;
    if (DAT_14c763d68 == '\x01') {
      if (ABS(DAT_14c763d6c - DAT_14cb99cf8) <= 1e-08) {
        fVar36 = (float)(-(uint)(DAT_14c763d6c <= param_2) & 0x3f800000);
      }
      else {
        fVar36 = (param_2 - DAT_14cb99cf8) / (DAT_14c763d6c - DAT_14cb99cf8);
      }
      if (1.0 <= fVar36) {
        fVar36 = 1.0;
      }
      if (fVar36 <= 0.0) {
        fVar36 = 0.0;
      }
      fVar36 = (DAT_14c763d74 - DAT_14c763d70) * fVar36 + DAT_14c763d70;
    }
    local_430 = param_3;
    if (DAT_14c763d70 <= fVar36) {
      local_178 = (double)CONCAT44(fVar36,2);
      FUN_144a73fdc(&local_348,&DAT_14c8463d0);
      local_448 = param_9;
      local_450 = param_8;
      local_458 = param_7;
      local_460 = param_6;
      local_468 = local_348;
      local_470 = &DAT_14c8463d0;
      local_478 = param_5;
      uVar9 = (**(code **)(*param_1 + 0x60))(param_1,*param_1,local_430,param_4);
      if (local_348 != (undefined8 *)0x0) {
        LOCK();
        piVar12 = (int *)(local_348 + 1);
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if ((*piVar12 == 0) && (*(int *)((longlong)local_348 + 0xc) == 0)) {
          pcVar4 = *(code **)*local_348;
          if ((pcVar4 == FUN_141724e50) || (pcVar4 == FUN_141724e26)) {
            *local_348 = &PTR_FUN_149f553e0;
            FUN_1400020a8();
          }
          else {
            (*pcVar4)(local_348,1);
          }
        }
      }
      goto LAB_143f98837;
    }
    local_470 = &local_3b8;
    local_478 = &local_3b0;
    cVar7 = FUN_148af0c7e(param_1,in_RDX,&local_3a8,(longlong)&local_3b8 + 4);
    if (cVar7 != '\0') {
      uVar9 = 0;
      memset(local_308,0,0x90);
      local_348 = local_3a8;
      local_338 = local_3b0;
      local_33c = local_3b8._4_4_;
      local_320 = param_4[2];
      local_330 = *param_4;
      dStack_328 = param_4[1];
      local_318 = *param_5;
      dStack_310 = param_5[1];
      local_308[0] = param_5[2];
      local_2e8 = DAT_14c8463e0;
      uStack_2e0 = DAT_14c8463e8;
      local_2f8 = DAT_14c8463d0;
      uStack_2f0 = DAT_14c8463d8;
      local_2c8 = param_4[2];
      local_2d8 = *param_4;
      dStack_2d0 = param_4[1];
      local_2b0 = param_5[2];
      local_2c0 = *param_5;
      dStack_2b8 = param_5[1];
      local_27f = *param_9 != 0;
      if ((bool)local_27f) {
        local_288 = 0;
        local_290 = (ulonglong)*param_9 << 0x20;
        local_284 = (uint)*(byte *)(param_7 + 2) + param_9[1] * 0x4000000 + 0x200001;
      }
      else {
        lVar22 = 0;
        uVar16 = 0;
        do {
          if (*(char *)(param_8 + lVar22) == '\x02') {
            uVar16 = uVar16 | 1 << ((uint)lVar22 & 0x1f);
          }
          else if (*(char *)(param_8 + lVar22) == '\x01') {
            uVar9 = uVar9 | 1 << ((uint)lVar22 & 0x1f);
          }
          lVar22 = lVar22 + 1;
        } while (lVar22 != 0x20);
        local_290 = CONCAT44(uVar16,1);
        local_284 = (uint)*(byte *)(param_7 + 2) + (param_6 & 0xff) * 0x200000 + 1 |
                    *(int *)(param_7 + 4) << 0x1a;
        local_288 = uVar9;
      }
      local_370 = local_2b0 - local_2c8;
      local_378 = dStack_2b8 - dStack_2d0;
      local_380 = local_2c0 - local_2d8;
      local_398 = (double)(~-(ulonglong)(local_380 != 0.0) & 0x47eff933c0000000 |
                          (ulonglong)(1.0 / local_380) & -(ulonglong)(local_380 != 0.0));
      local_390 = ~-(ulonglong)(local_378 != 0.0) & 0x47eff933c0000000 |
                  (ulonglong)(1.0 / local_378) & -(ulonglong)(local_378 != 0.0);
      local_388 = ~-(ulonglong)(local_370 != 0.0) & 0x47eff933c0000000 |
                  (ulonglong)(1.0 / local_370) & -(ulonglong)(local_370 != 0.0);
      lVar22 = local_430[1];
      lVar30 = (longlong)(int)lVar22;
      local_39c = 1.1;
      if (lVar30 != 0) {
        fVar36 = 1.1;
        lVar23 = 0;
        do {
          if (((*(byte *)(*local_430 + 0xad + lVar23) & 1) != 0) &&
             (fVar2 = *(float *)(*local_430 + 4 + lVar23), fVar2 < fVar36)) {
            local_39c = fVar2;
            fVar36 = fVar2;
          }
          lVar23 = lVar23 + 0x100;
        } while (lVar30 << 8 != lVar23);
      }
      local_340 = param_2;
      if ((longlong)*(int *)(local_3a8 + 2) != 0) {
        puVar27 = (uint *)local_3a8[1];
        puVar20 = puVar27 + (longlong)*(int *)(local_3a8 + 2) * 0x2c;
        local_3c0 = param_7 + 0xc;
        local_410 = (int *)(param_7 + 6);
        uVar9 = 0;
        plVar19 = local_430;
        local_438 = puVar20;
        do {
          if (((((puVar27[1] != 0) && (uVar16 = *puVar27, -1 < (int)uVar16)) &&
               ((int)uVar16 < DAT_14c9647dc)) &&
              ((plVar17 = (longlong *)
                          ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
               plVar17 != (longlong *)0x0 && (*(uint *)(plVar17 + 2) == puVar27[1])))) &&
             (((*(uint *)(plVar17 + 1) & 0x10200000) == 0 && (lVar23 = *plVar17, lVar23 != 0)))) {
            puVar11 = (undefined8 *)param_7[0xe];
            if ((undefined8 *)param_7[0xe] == (undefined8 *)0x0) {
              puVar11 = local_3c0;
            }
            if ((longlong)*(int *)(param_7 + 0xf) != 0) {
              lVar24 = 0;
              do {
                if (*(int *)((longlong)puVar11 + lVar24) == *(int *)(lVar23 + 0xc))
                goto LAB_143f9995d;
                lVar24 = lVar24 + 4;
              } while ((longlong)*(int *)(param_7 + 0xf) * 4 != lVar24);
            }
            lVar24 = *(longlong *)(puVar27 + 2);
            puVar20 = local_438;
            if (*(int *)(lVar24 + 0x30) != 0) {
              local_478 = &local_398;
              local_470 = (undefined8 *)0x0;
              cVar7 = FUN_144b264a4(puVar27 + 4,&local_2d8,&local_2c0,&local_380);
              puVar20 = local_438;
              if (cVar7 != '\0') {
                pdVar14 = (double *)(*(longlong *)(lVar23 + 0x1c8) + 0x240);
                if (*(longlong *)(lVar23 + 0x1c8) == 0) {
                  pdVar14 = (double *)&DAT_14c846480;
                }
                dVar44 = *pdVar14;
                dVar56 = pdVar14[1];
                dVar37 = pdVar14[2];
                dVar52 = pdVar14[3];
                local_428 = pdVar14[6];
                dStack_420 = pdVar14[7];
                auVar45 = *(undefined1 (*) [16])(pdVar14 + 8);
                local_3f8._0_8_ = auVar45._0_8_;
                local_3f8._8_8_ = auVar45._8_8_;
                auVar42 = *(undefined1 (*) [16])(pdVar14 + 10);
                local_3d8._0_8_ = auVar42._0_8_;
                local_3d8._8_8_ = auVar42._8_8_;
                auVar50 = *(undefined1 (*) [16])(puVar27 + 0x24);
                local_268 = auVar50._0_8_;
                dVar35 = auVar50._8_8_;
                auVar33 = *(undefined1 (*) [16])(puVar27 + 0x28);
                dVar53 = auVar33._0_8_;
                auVar45 = minpd(auVar50,auVar45);
                auVar50 = minpd(auVar33,auVar42);
                auVar42._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
                auVar42._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
                iVar10 = movmskpd(0x4c846480,auVar42);
                auVar45._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
                auVar45._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
                uVar16 = movmskpd((int)pdVar14,auVar45);
                if ((uVar16 & 0x3fffffff) == 0 && iVar10 == 0) {
                  dVar54 = *(double *)(puVar27 + 0x14);
                  dVar32 = *(double *)(puVar27 + 0x16);
                  dVar47 = *(double *)(puVar27 + 0x18);
                  dVar57 = *(double *)(puVar27 + 0x1a);
                  dVar55 = dVar32 * dVar37 * -1.0 +
                           dVar47 * dVar56 + dVar44 * dVar57 * 1.0 + dVar52 * dVar54;
                  dVar51 = dVar54 * dVar37 * 1.0 +
                           dVar57 * dVar56 + dVar44 * dVar47 * -1.0 + dVar52 * dVar32;
                  auVar50._0_8_ =
                       dVar57 * dVar37 * 1.0 +
                       ((dVar44 * dVar32 * 1.0 + dVar52 * dVar47) - dVar56 * dVar54);
                  auVar50._8_8_ =
                       dVar47 * dVar37 * -1.0 +
                       ((dVar44 * dVar54 * -1.0 + dVar52 * dVar57) - dVar56 * dVar32);
                  dVar47 = *(double *)(puVar27 + 0x1c) * (double)local_3f8._0_8_;
                  dVar57 = *(double *)(puVar27 + 0x1e) * (double)local_3f8._8_8_;
                  dVar54 = *(double *)(puVar27 + 0x20) * (double)local_3d8._0_8_;
                  dVar32 = *(double *)(puVar27 + 0x22) * (double)local_3d8._8_8_;
                  dVar58 = dVar57 * dVar44 - dVar56 * dVar47;
                  dVar48 = dVar54 * dVar56 - dVar37 * dVar57;
                  dVar43 = dVar47 * dVar37 - dVar44 * dVar54;
                  dVar38 = dVar32 * dVar52 - dVar52 * dVar32;
                  dVar48 = dVar48 + dVar48;
                  dVar43 = dVar43 + dVar43;
                  dVar58 = dVar58 + dVar58;
                  dVar38 = dVar38 + dVar38;
                  local_408 = pdVar14[4] +
                              (dVar58 * dVar56 - dVar37 * dVar43) + dVar52 * dVar48 + dVar47;
                  dStack_400 = pdVar14[5] +
                               (dVar48 * dVar37 - dVar58 * dVar44) + dVar52 * dVar43 + dVar57;
                  local_428 = local_428 +
                              (dVar43 * dVar44 - dVar56 * dVar48) + dVar52 * dVar58 + dVar54;
                  dStack_420 = dStack_420 +
                               (dVar38 * dVar52 - dVar38 * dVar52) + dVar52 * dVar38 + dVar32;
                  dVar44 = local_268 * (double)local_3f8._0_8_;
                  dVar35 = dVar35 * (double)local_3f8._8_8_;
                  dVar53 = dVar53 * (double)local_3d8._0_8_;
                  dVar56 = auVar33._8_8_ * (double)local_3d8._8_8_;
                }
                else {
                  dVar32 = dVar56 + dVar56;
                  dVar55 = dVar37 + dVar37;
                  dVar51 = dVar44 * (dVar44 + dVar44);
                  dVar54 = (1.0 - (dVar37 * dVar55 + dVar51)) * (double)local_3f8._8_8_;
                  dVar47 = (dVar44 + dVar44) * dVar52;
                  dStack_1b0 = (dVar55 * dVar56 - dVar47) * (double)local_3d8._0_8_;
                  local_1b8 = (dVar32 * dVar52 + dVar44 * dVar55) * (double)local_3d8._0_8_;
                  local_1a8 = (1.0 - (dVar51 + dVar56 * dVar32)) * (double)local_3d8._0_8_;
                  local_3d8._0_8_ = (double)local_3d8._0_8_ * dVar53;
                  local_3d8._8_8_ = (double)local_3d8._8_8_ * auVar33._8_8_;
                  dVar51 = (dVar32 * dVar44 + dVar55 * dVar52) * (double)local_3f8._0_8_;
                  local_1c8 = (dVar55 * dVar56 + dVar47) * (double)local_3f8._8_8_;
                  local_1e8 = (dVar44 * dVar55 - dVar32 * dVar52) * (double)local_3f8._0_8_;
                  local_1f8._8_4_ = SUB84(dVar51,0);
                  local_1f8._0_8_ =
                       (1.0 - (dVar37 * dVar55 + dVar56 * dVar32)) * (double)local_3f8._0_8_;
                  local_1f8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
                  uStack_1e0 = 0;
                  local_1d8._8_4_ = SUB84(dVar54,0);
                  local_1d8._0_8_ = (dVar32 * dVar44 - dVar55 * dVar52) * (double)local_3f8._8_8_;
                  local_1d8._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  uStack_180 = 0x3ff0000000000000;
                  dVar54 = *(double *)(puVar27 + 0x14);
                  dVar32 = *(double *)(puVar27 + 0x16);
                  dVar55 = *(double *)(puVar27 + 0x18);
                  dVar47 = dVar32 + dVar32;
                  dVar56 = dVar55 + dVar55;
                  dVar51 = dVar54 * (dVar54 + dVar54);
                  local_228 = (1.0 - (dVar51 + dVar32 * dVar47)) * dVar53;
                  dVar44 = *(double *)(puVar27 + 0x1a);
                  dVar37 = dVar56 * dVar44;
                  dVar52 = (dVar54 + dVar54) * *(double *)(puVar27 + 0x1a);
                  dVar44 = dVar47 * dVar44;
                  local_238 = (dVar44 + *(double *)(puVar27 + 0x14) * dVar56) * dVar53;
                  local_258 = (dVar47 * dVar54 - dVar37) * dVar35;
                  dStack_230 = (dVar56 * dVar32 - dVar52) * dVar53;
                  local_3f8._0_8_ = (double)local_3f8._0_8_ * local_268;
                  local_3f8._8_8_ = (double)local_3f8._8_8_ * dVar35;
                  local_278 = (1.0 - (dVar55 * dVar56 + dVar32 * dVar47)) * local_268;
                  dStack_250 = (1.0 - (dVar55 * dVar56 + dVar51)) * dVar35;
                  dStack_270 = (dVar47 * dVar54 + dVar37) * local_268;
                  local_248 = (dVar56 * dVar32 + dVar52) * dVar35;
                  local_268 = (*(double *)(puVar27 + 0x14) * dVar56 - dVar44) * local_268;
                  uStack_260 = 0;
                  uStack_240 = 0;
                  uStack_220 = 0;
                  local_218 = *(undefined8 *)(puVar27 + 0x1c);
                  uStack_210 = *(undefined8 *)(puVar27 + 0x1e);
                  local_208 = *(undefined8 *)(puVar27 + 0x20);
                  uStack_200 = 0x3ff0000000000000;
                  local_198 = pdVar14[4];
                  dStack_190 = pdVar14[5];
                  local_188 = local_428;
                  FUN_1447fea8d(&local_178,&local_278,local_1f8);
                  dVar56 = (double)local_3d8._8_8_;
                  dVar53 = (double)local_3d8._0_8_;
                  dVar35 = (double)local_3f8._8_8_;
                  dVar44 = (double)local_3f8._0_8_;
                  local_428 = (double)local_168._0_8_;
                  dVar52 = (double)local_168._0_8_ * (double)local_168._0_8_ +
                           local_178 * local_178 + dStack_170 * dStack_170;
                  dVar54 = (double)local_148._0_8_ * (double)local_148._0_8_ +
                           (double)local_158._0_8_ * (double)local_158._0_8_ +
                           (double)local_158._8_8_ * (double)local_158._8_8_;
                  dVar37 = (double)local_128._0_8_ * (double)local_128._0_8_ +
                           (double)local_138._0_8_ * (double)local_138._0_8_ +
                           (double)local_138._8_8_ * (double)local_138._8_8_;
                  uVar31 = -(ulonglong)(0.0 <= dVar52 + -9.99999993922529e-09);
                  dVar52 = (double)(~uVar31 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar52)) & uVar31);
                  uVar31 = -(ulonglong)(0.0 <= dVar54 + -9.99999993922529e-09);
                  dVar54 = (double)(~uVar31 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar54)) & uVar31);
                  uVar31 = -(ulonglong)(0.0 <= dVar37 + -9.99999993922529e-09);
                  dVar37 = (double)(~uVar31 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar37)) & uVar31);
                  auVar33._8_8_ = -(ulonglong)(0.0 <= (double)local_3f8._8_8_);
                  auVar33._0_8_ = -(ulonglong)(0.0 <= (double)local_3f8._0_8_);
                  auVar45 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar33);
                  dVar32 = (double)(~-(ulonglong)(0.0 <= (double)local_3d8._0_8_) &
                                    0xbff0000000000000 |
                                   (ulonglong)
                                   ((uint)(-(ulonglong)(0.0 <= (double)local_3d8._0_8_) >> 0x20) &
                                   0x3ff00000) << 0x20);
                  dVar55 = auVar45._0_8_;
                  local_178 = local_178 * dVar52 * dVar55;
                  dStack_170 = dStack_170 * dVar52 * dVar55;
                  local_168._0_8_ = dVar52 * (double)local_168._0_8_ * dVar55;
                  dVar52 = auVar45._8_8_;
                  local_158._8_8_ = (double)local_158._8_8_ * dVar54 * dVar52;
                  local_158._0_8_ = dVar52 * (double)local_158._0_8_ * dVar54;
                  local_148._0_8_ = dVar54 * (double)local_148._0_8_ * dVar52;
                  local_138._8_8_ = (double)local_138._8_8_ * dVar37 * dVar32;
                  local_138._0_8_ = dVar32 * (double)local_138._0_8_ * dVar37;
                  local_128._0_8_ = dVar37 * (double)local_128._0_8_ * dVar32;
                  FUN_14481fd10(&local_368,&local_178);
                  dVar37 = local_358 * local_358 + local_368 * local_368;
                  dVar52 = dStack_350 * dStack_350 + dStack_360 * dStack_360;
                  auVar39._0_8_ = dVar37 + dVar52;
                  auVar39._8_8_ = dVar37 + dVar52;
                  auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
                  auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
                  auVar45 = sqrtpd(auVar39,auVar39);
                  auVar45 = divpd(_DAT_149934d80,auVar45);
                  auVar46._0_8_ = auVar45._0_8_ * local_358;
                  auVar46._8_8_ = auVar45._8_8_ * dStack_350;
                  dVar55 = (double)((ulonglong)(local_368 * auVar45._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
                  dVar51 = (double)((ulonglong)(dStack_360 * auVar45._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
                  auVar50 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar46,auVar34);
                  local_408 = local_118;
                  dStack_400 = dStack_110;
                  local_428 = local_108;
                  dStack_420 = 0.0;
                }
                dVar58 = dStack_400;
                dVar57 = local_408;
                dVar54 = local_428;
                dVar38 = local_330 * dVar44;
                dVar43 = dStack_328 * dVar35;
                dVar47 = local_320 * dVar53;
                dVar63 = auVar50._0_8_;
                dVar64 = auVar50._8_8_;
                dVar37 = dVar43 * dVar55 - dVar51 * dVar38;
                dVar48 = dVar47 * dVar51 - dVar63 * dVar43;
                dVar49 = dVar38 * dVar63 - dVar55 * dVar47;
                dVar48 = dVar48 + dVar48;
                dVar49 = dVar49 + dVar49;
                dVar37 = dVar37 + dVar37;
                auVar6._8_4_ = SUB84(dVar35,0);
                auVar6._0_8_ = dVar44;
                auVar6._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
                dVar52 = local_318 * dVar44;
                dVar32 = dStack_310 * dVar35;
                local_3d8._8_4_ = SUB84(dVar56,0);
                local_3d8._0_8_ = dVar53;
                local_3d8._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
                dVar53 = local_308[0] * dVar53;
                dVar59 = dVar32 * dVar55 - dVar51 * dVar52;
                dVar60 = dVar53 * dVar51 - dVar63 * dVar32;
                dVar56 = dVar52 * dVar63 - dVar55 * dVar53;
                dVar60 = dVar60 + dVar60;
                dVar56 = dVar56 + dVar56;
                dVar59 = dVar59 + dVar59;
                local_1f8._8_8_ =
                     (dVar63 * dVar48 - dVar55 * dVar37) + dVar64 * dVar49 + dVar43 + dStack_400;
                local_1f8._0_8_ =
                     (dVar37 * dVar51 - dVar49 * dVar63) + dVar64 * dVar48 + dVar38 + local_408;
                local_1e8 = dVar37 * dVar64 + dVar47 + (dVar49 * dVar55 - dVar48 * dVar51) +
                            local_428;
                local_3e8._8_4_ = SUB84(dVar51,0);
                local_3e8._0_8_ = dVar55;
                local_3e8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
                local_278 = (dVar59 * dVar51 - dVar56 * dVar63) + dVar64 * dVar60 + dVar52 +
                            local_408;
                dStack_270 = (dVar63 * dVar60 - dVar55 * dVar59) + dVar64 * dVar56 + dVar32 +
                             dStack_400;
                local_268 = dVar59 * dVar64 + dVar53 + (dVar56 * dVar55 - dVar60 * dVar51) +
                            local_428;
                puVar20 = local_438;
                local_3f8 = auVar6;
                if (0 < *(int *)(lVar24 + 0x30)) {
                  lVar23 = plVar19[1];
                  lVar29 = (longlong)(int)lVar23;
                  lVar28 = 0;
                  local_3f8._0_4_ = SUB84(dVar44,0);
                  local_3f8._4_4_ = (undefined4)((ulonglong)dVar44 >> 0x20);
                  auVar45 = _DAT_149e1ecd0;
                  uVar61 = local_3f8._0_4_;
                  uVar62 = local_3f8._4_4_;
                  do {
                    plVar17 = *(longlong **)(lVar24 + 0x28);
                    iVar10 = *(int *)((longlong)plVar17 + lVar28 * 8 + 4);
                    if (iVar10 != 0) {
                      uVar16 = *(uint *)(plVar17 + lVar28);
                      plVar17 = (longlong *)(ulonglong)uVar16;
                      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
                        plVar17 = (longlong *)(ulonglong)(uVar16 >> 0x10);
                        plVar18 = (longlong *)
                                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (longlong)plVar17 * 8));
                        if (((plVar18 != (longlong *)0x0) &&
                            ((((int)plVar18[2] == iVar10 &&
                              ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) &&
                             (plVar18 = (longlong *)*plVar18, plVar18 != (longlong *)0x0)))) &&
                           (((*(byte *)((longlong)plVar18 + 0x9c) & 1) != 0 &&
                            (plVar17 = plVar18, iVar10 = (**(code **)(*plVar18 + 0x570))(),
                            piVar12 = local_410, iVar10 != 0)))) {
                          iVar10 = *(int *)(param_7 + 0xb);
                          if ((*(char *)((longlong)param_7 + 0x29) == '\0') &&
                             (*(undefined1 *)((longlong)param_7 + 0x29) = 1, 1 < iVar10)) {
                            piVar15 = (int *)param_7[10];
                            if ((int *)param_7[10] == (int *)0x0) {
                              piVar15 = local_410;
                            }
                            FUN_1449e0cb6(piVar15);
                            piVar15 = (int *)param_7[10];
                            piVar13 = piVar15;
                            if (piVar15 == (int *)0x0) {
                              piVar13 = piVar12;
                            }
                            iVar10 = *(int *)(param_7 + 0xb);
                            if ((longlong)iVar10 != 1) {
                              lVar25 = 4;
                              piVar12 = piVar13;
                              iVar26 = *piVar13;
                              do {
                                iVar3 = *(int *)((longlong)piVar13 + lVar25);
                                if (iVar26 != iVar3) {
                                  piVar12[1] = iVar3;
                                  piVar12 = piVar12 + 1;
                                }
                                lVar25 = lVar25 + 4;
                                iVar26 = iVar3;
                              } while ((longlong)iVar10 * 4 != lVar25);
                              piVar15 = (int *)param_7[10];
                              piVar13 = piVar12;
                            }
                            if (piVar15 == (int *)0x0) {
                              piVar15 = local_410;
                            }
                            FUN_1479ab1f6(local_410,
                                          (int)((ulonglong)((longlong)piVar13 - (longlong)piVar15)
                                               >> 2) + 1);
                            iVar10 = *(int *)(param_7 + 0xb);
                            dVar35 = local_3f8._8_8_;
                            plVar19 = local_430;
                            auVar45 = _DAT_149e1ecd0;
                            uVar61 = local_3f8._0_4_;
                            uVar62 = local_3f8._4_4_;
                          }
                          piVar12 = (int *)param_7[10];
                          if ((int *)param_7[10] == (int *)0x0) {
                            piVar12 = local_410;
                          }
                          if (iVar10 != 0) {
                            lVar25 = 0;
                            do {
                              plVar17 = (longlong *)(ulonglong)*(uint *)((longlong)plVar18 + 0xc);
                              if (*(uint *)((longlong)piVar12 + lVar25) ==
                                  *(uint *)((longlong)plVar18 + 0xc)) goto LAB_143f99825;
                              lVar25 = lVar25 + 4;
                            } while ((longlong)iVar10 * 4 != lVar25);
                          }
                          local_470 = &local_290;
                          local_478 = &local_278;
                          local_460 = local_460 & 0xffffff00;
                          local_468 = param_7;
                          bVar8 = (**(code **)(*plVar18 + 0x9c8))
                                            (plVar18,plVar19,&local_39c,local_1f8);
                          uVar9 = (uint)(byte)((byte)uVar9 | bVar8);
                          plVar17 = plVar18;
                        }
                      }
                    }
LAB_143f99825:
                    puVar20 = local_438;
                    lVar28 = lVar28 + 1;
                  } while (lVar28 < *(int *)(lVar24 + 0x30));
                  if (((int)lVar23 < (int)plVar19[1]) && (*(char *)(param_7 + 5) == '\0')) {
                    dVar53 = auVar45._0_8_;
                    dVar44 = auVar45._8_8_;
                    auVar40._8_8_ = -(ulonglong)(dVar44 < ABS(dVar35));
                    auVar40._0_8_ = -(ulonglong)(dVar53 < ABS((double)CONCAT44(uVar62,uVar61)));
                    iVar10 = movmskpd(*(int *)(lVar24 + 0x30),auVar40);
                    auVar41._8_8_ = -(ulonglong)(dVar44 < ABS(local_3d8._8_8_));
                    auVar41._0_8_ = -(ulonglong)(dVar53 < ABS(local_3d8._0_8_));
                    uVar16 = movmskpd((int)plVar17,auVar41);
                    if ((uVar16 & 0x3fffffff) == 0 && iVar10 == 0) {
                      puVar11 = &DAT_14c846480;
                      puVar21 = &local_178;
                      for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
                        *puVar21 = *puVar11;
                        puVar11 = puVar11 + 1;
                        puVar21 = puVar21 + 1;
                      }
                    }
                    else {
                      auVar5._4_4_ = uVar62;
                      auVar5._0_4_ = uVar61;
                      auVar5._8_4_ = SUB84(dVar35,0);
                      auVar5._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
                      auVar45 = divpd(_DAT_149934d80,auVar5);
                      auVar42 = divpd(ZEXT816(0x3ff0000000000000),local_3d8._0_16_);
                      local_138._0_8_ =
                           -(ulonglong)(dVar53 < ABS((double)CONCAT44(uVar62,uVar61))) &
                           auVar45._0_8_;
                      local_138._8_8_ = -(ulonglong)(dVar44 < ABS(dVar35)) & auVar45._8_8_;
                      dVar53 = (double)(-(ulonglong)(dVar53 < ABS(local_3d8._0_8_)) & auVar42._0_8_)
                      ;
                      local_128._8_8_ = 0;
                      local_128._0_8_ = dVar53;
                      local_178 = -(double)local_3e8._0_8_;
                      dStack_170 = -(double)local_3e8._8_8_;
                      local_168._0_8_ = dVar63 * -1.0;
                      local_168._8_8_ = dVar64 * 1.0;
                      dVar57 = dVar57 * (double)local_138._0_8_;
                      dVar58 = dVar58 * (double)local_138._8_8_;
                      dVar54 = dVar54 * dVar53;
                      dVar53 = dVar58 * local_178 - dStack_170 * dVar57;
                      dVar35 = dVar54 * dStack_170 - (double)local_168._0_8_ * dVar58;
                      dVar44 = dVar57 * (double)local_168._0_8_ - local_178 * dVar54;
                      dVar35 = dVar35 + dVar35;
                      dVar44 = dVar44 + dVar44;
                      dVar53 = dVar53 + dVar53;
                      dVar56 = 0.0 - (dVar53 * (double)local_3e8._0_8_ +
                                      (double)local_168._0_8_ * dVar35 +
                                     (double)local_168._8_8_ * dVar44 + dVar58);
                      local_158._8_4_ = SUB84(dVar56,0);
                      local_158._0_8_ =
                           0.0 - ((dVar53 * dStack_170 - dVar44 * (double)local_168._0_8_) +
                                 (double)local_168._8_8_ * dVar35 + dVar57);
                      local_158._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
                      local_148._8_8_ = 0;
                      local_148._0_8_ =
                           0.0 - ((double)local_168._8_8_ * dVar53 + dVar54 +
                                 (dVar44 * local_178 - dVar35 * dStack_170));
                    }
                    lVar23 = lVar29 << 8;
                    do {
                      FUN_143f96646(&local_178,*plVar19 + lVar23);
                      lVar29 = lVar29 + 1;
                      lVar23 = lVar23 + 0x100;
                    } while (lVar29 < (int)plVar19[1]);
                  }
                }
              }
            }
          }
LAB_143f9995d:
          puVar27 = puVar27 + 0x2c;
        } while (puVar27 != puVar20);
        if ((int)lVar22 < (int)plVar19[1]) {
          lVar22 = lVar30 << 8;
          do {
            lVar23 = *plVar19;
            *(double *)(lVar23 + 0x80 + lVar22) = local_320;
            pdVar14 = (double *)(lVar23 + 0x70 + lVar22);
            *pdVar14 = local_330;
            pdVar14[1] = dStack_328;
            lVar23 = *plVar19;
            *(double *)(lVar23 + 0x98 + lVar22) = local_308[0];
            pdVar14 = (double *)(lVar23 + 0x88 + lVar22);
            *pdVar14 = local_318;
            pdVar14[1] = dStack_310;
            if (local_27f == '\x01') {
              pbVar1 = (byte *)(*plVar19 + 0xad + lVar22);
              *pbVar1 = *pbVar1 | 1;
            }
            lVar30 = lVar30 + 1;
            lVar22 = lVar22 + 0x100;
          } while (lVar30 < (int)plVar19[1]);
          if (local_27f == '\0') {
            FUN_1479b52d2(plVar19);
          }
          else {
            FUN_148af2cf5(*plVar19);
          }
        }
        goto LAB_143f98837;
      }
    }
  }
  uVar9 = 0;
LAB_143f98837:
  if ((local_f0 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffff01;
}



// FUNCTION 143f99c6c FUN_143f99c6c body=6697 status=ok
// SIG undefined FUN_143f99c6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143f99c6c(undefined8 param_1,undefined4 param_2,undefined4 *param_3,double *param_4,
                       double *param_5,undefined8 *param_6,longlong *param_7,uint param_8,
                       undefined8 *param_9,longlong param_10,uint *param_11,char param_12)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  uint uVar9;
  double *pdVar10;
  int *piVar11;
  undefined8 in_RDX;
  undefined8 *puVar12;
  uint *puVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  int *piVar17;
  uint uVar18;
  uint *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar33;
  undefined1 auVar30 [16];
  double dVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  double dVar39;
  undefined4 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  undefined1 auStack_638 [32];
  undefined8 *local_618;
  longlong *local_610;
  undefined8 *local_608;
  undefined8 *local_600;
  char local_5f8;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  uint local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  double local_5a8;
  double dStack_5a0;
  undefined1 (*local_598) [16];
  ulonglong local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  ulonglong local_570;
  undefined8 local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  undefined1 local_538 [16];
  double *local_528;
  undefined2 *local_520;
  undefined1 (*local_518) [16];
  undefined2 *local_510;
  undefined1 local_508 [16];
  undefined1 local_4f8 [24];
  undefined8 local_4e0;
  undefined8 local_4d8;
  longlong local_4d0;
  undefined1 local_4c8 [16];
  double local_4b8;
  undefined1 local_4ac [28];
  undefined8 local_490 [3];
  undefined1 local_478 [16];
  double local_468;
  double dStack_460;
  undefined2 local_44c;
  undefined1 local_44a;
  longlong local_448;
  undefined4 local_440;
  undefined4 local_43c;
  undefined8 local_438;
  double local_430;
  double dStack_428;
  double local_420;
  double local_418;
  double dStack_410;
  double local_408 [2];
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  undefined8 local_390;
  uint local_388;
  uint local_384;
  char local_380;
  undefined1 local_37f;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined2 uStack_360;
  undefined6 local_35e;
  undefined2 uStack_358;
  undefined2 uStack_356;
  undefined4 uStack_354;
  char cStack_350;
  char cStack_34f;
  int local_348;
  int local_344 [7];
  int *local_328;
  int local_320;
  undefined4 local_31c;
  undefined1 local_318 [16];
  undefined1 *local_308;
  int local_300;
  undefined4 local_2fc;
  undefined8 local_2f8;
  double adStack_2f0 [3];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  undefined1 local_270 [24];
  undefined4 local_258;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_228;
  undefined1 local_224;
  undefined2 local_223;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  uint local_1fc;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178 [4];
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_638;
  dVar23 = SQRT((param_5[2] - param_4[2]) * (param_5[2] - param_4[2]) +
                (*param_5 - *param_4) * (*param_5 - *param_4) +
                (param_5[1] - param_4[1]) * (param_5[1] - param_4[1]));
  fVar22 = (float)dVar23;
  if (0.0001 <= fVar22) {
    local_610 = &local_4e0;
    local_618 = &local_4d8;
    cVar5 = FUN_148af0c7e(CONCAT44((int)((ulonglong)dVar23 >> 0x20),fVar22),in_RDX,&local_4d0,
                          (longlong)&local_4e0 + 4);
    if (cVar5 != '\0') {
      local_378 = *param_9;
      uStack_370 = param_9[1];
      uStack_368 = param_9[2];
      uVar3 = *(undefined8 *)((longlong)param_9 + 0x22);
      uStack_358 = (undefined2)((ulonglong)*(undefined8 *)((longlong)param_9 + 0x1a) >> 0x30);
      uStack_356 = (undefined2)uVar3;
      uStack_354 = (undefined4)((ulonglong)uVar3 >> 0x10);
      cStack_350 = (char)((ulonglong)uVar3 >> 0x30);
      cStack_34f = (char)((ulonglong)uVar3 >> 0x38);
      uStack_360 = (undefined2)param_9[3];
      local_35e = (undefined6)((ulonglong)param_9[3] >> 0x10);
      local_328 = (int *)0x0;
      local_320 = *(int *)(param_9 + 0xb);
      lVar15 = (longlong)local_320;
      if (lVar15 == 0) {
        local_31c = 8;
      }
      else {
        puVar12 = param_9 + 6;
        if ((undefined8 *)param_9[10] != (undefined8 *)0x0) {
          puVar12 = (undefined8 *)param_9[10];
        }
        FUN_14470be6c(&local_348,local_320,0);
        piVar8 = local_328;
        if (local_328 == (int *)0x0) {
          piVar8 = &local_348;
        }
        memcpy(piVar8,puVar12,lVar15 << 2);
      }
      local_308 = (undefined1 *)0x0;
      local_300 = *(int *)(param_9 + 0xf);
      lVar15 = (longlong)local_300;
      if (lVar15 == 0) {
        local_2fc = 4;
      }
      else {
        puVar12 = param_9 + 0xc;
        if ((undefined8 *)param_9[0xe] != (undefined8 *)0x0) {
          puVar12 = (undefined8 *)param_9[0xe];
        }
        FUN_1447163e6(local_318,local_300,0);
        puVar7 = local_308;
        if (local_308 == (undefined1 *)0x0) {
          puVar7 = local_318;
        }
        memcpy(puVar7,puVar12,lVar15 << 2);
      }
      uStack_368._0_6_ = CONCAT15(1,(undefined5)uStack_368);
      uVar9 = 0;
      memset(local_408,0,0x90);
      (**(code **)(*param_7 + 0x80))(param_7,&local_2f8);
      local_398 = (double)local_2d8._8_8_ - adStack_2f0[1];
      local_3a0 = (double)local_2d8._0_8_ - adStack_2f0[0];
      local_3a8 = adStack_2f0[2] - local_2f8;
      local_448 = local_4d0;
      local_438 = local_4d8;
      local_43c = local_4e0._4_4_;
      local_420 = param_4[2];
      local_430 = *param_4;
      dStack_428 = param_4[1];
      local_408[0] = param_5[2];
      local_418 = *param_5;
      dStack_410 = param_5[1];
      local_3f8 = *param_6;
      uStack_3f0 = param_6[1];
      local_3e8 = param_6[2];
      uStack_3e0 = param_6[3];
      local_3c8 = param_4[2] + DAT_14c8464f0;
      local_3d0 = param_4[1] + DAT_14c8464e8;
      local_3d8 = *param_4 + DAT_14c8464e0;
      local_3b0 = DAT_14c8464f0 + param_5[2];
      local_3b8 = DAT_14c8464e8 + param_5[1];
      local_3c0 = DAT_14c8464e0 + *param_5;
      local_380 = param_12;
      local_37f = *param_11 != 0;
      if ((bool)local_37f) {
        local_388 = 0;
        local_390 = (ulonglong)*param_11 << 0x20;
        local_384 = param_11[1] * 0x4000000 + (uint)*(byte *)(param_9 + 2) + 1;
      }
      else {
        lVar15 = 0;
        uVar18 = 0;
        do {
          if (*(char *)(param_10 + lVar15) == '\x02') {
            uVar18 = uVar18 | 1 << ((uint)lVar15 & 0x1f);
          }
          else if (*(char *)(param_10 + lVar15) == '\x01') {
            uVar9 = uVar9 | 1 << ((uint)lVar15 & 0x1f);
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 != 0x20);
        local_390 = CONCAT44(uVar18,1);
        local_384 = (param_8 & 0xff) * 0x200000 + (uint)*(byte *)(param_9 + 2) + 1 |
                    CONCAT22(uStack_356,uStack_358) << 0x1a;
        local_388 = uVar9;
      }
      local_440 = param_2;
      if ((longlong)*(int *)(local_4d0 + 0x10) == 0) {
LAB_143f9b5f7:
        uVar21 = 0;
      }
      else {
        puVar19 = *(uint **)(local_4d0 + 8);
        puVar13 = puVar19 + (longlong)*(int *)(local_4d0 + 0x10) * 0x2c;
        local_510 = &local_223;
        local_518 = (undefined1 (*) [16])local_270;
        local_528 = (double *)(param_3 + 2);
        local_598 = (undefined1 (*) [16])(param_3 + 0x22);
        local_520 = (undefined2 *)((longlong)param_3 + 0xd5);
        local_590 = 0;
        do {
          if (((((puVar19[1] != 0) && (uVar9 = *puVar19, -1 < (int)uVar9)) &&
               ((int)uVar9 < DAT_14c9647dc)) &&
              ((puVar12 = (undefined8 *)
                          ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
               puVar12 != (undefined8 *)0x0 && (*(uint *)(puVar12 + 2) == puVar19[1])))) &&
             (((*(uint *)(puVar12 + 1) & 0x10200000) == 0 &&
              (param_4 = (double *)*puVar12, param_4 != (double *)0x0)))) {
            puVar7 = local_308;
            if (local_308 == (undefined1 *)0x0) {
              puVar7 = local_318;
            }
            if ((longlong)local_300 != 0) {
              lVar15 = 0;
              do {
                if (*(int *)(puVar7 + lVar15) == *(int *)((longlong)param_4 + 0xc))
                goto LAB_143f9b5a9;
                lVar15 = lVar15 + 4;
              } while ((longlong)local_300 * 4 != lVar15);
            }
            lVar15 = *(longlong *)(puVar19 + 2);
            if (*(int *)(lVar15 + 0x30) != 0) {
              local_608 = (undefined8 *)local_4ac;
              local_610 = (longlong *)(local_4ac + 4);
              local_618 = local_490;
              cVar5 = FUN_1467f6da8(puVar19 + 4,&local_3d8,&local_3c0,&local_3a8);
              if (cVar5 != '\0') {
                pdVar10 = (double *)((longlong)param_4[0x39] + 0x240);
                if (param_4[0x39] == 0.0) {
                  pdVar10 = (double *)&DAT_14c846480;
                }
                dVar25 = *pdVar10;
                dVar33 = pdVar10[1];
                dVar2 = pdVar10[2];
                dVar24 = pdVar10[3];
                local_118 = pdVar10[4];
                dStack_110 = pdVar10[5];
                local_5a8 = pdVar10[6];
                dStack_5a0 = pdVar10[7];
                auVar35 = *(undefined1 (*) [16])(pdVar10 + 8);
                local_548 = auVar35._0_8_;
                dStack_540 = auVar35._8_8_;
                auVar49 = *(undefined1 (*) [16])(pdVar10 + 10);
                dVar23 = auVar49._0_8_;
                dVar48 = auVar49._8_8_;
                auVar38 = *(undefined1 (*) [16])(puVar19 + 0x24);
                local_1e8 = auVar38._0_8_;
                dVar27 = auVar38._8_8_;
                auVar26 = *(undefined1 (*) [16])(puVar19 + 0x28);
                dVar44 = auVar26._0_8_;
                auVar35 = minpd(auVar38,auVar35);
                auVar38 = minpd(auVar26,auVar49);
                auVar49._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
                auVar49._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
                iVar6 = movmskpd(0x4c846480,auVar49);
                auVar35._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
                auVar35._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
                uVar9 = movmskpd((int)pdVar10,auVar35);
                if ((uVar9 & 0x3fffffff) == 0 && iVar6 == 0) {
                  dVar43 = *(double *)(puVar19 + 0x14);
                  dVar46 = *(double *)(puVar19 + 0x16);
                  dVar28 = *(double *)(puVar19 + 0x18);
                  dVar29 = *(double *)(puVar19 + 0x1a);
                  dVar39 = dVar46 * dVar2 * -1.0 +
                           dVar28 * dVar33 + dVar25 * dVar29 * 1.0 + dVar24 * dVar43;
                  dVar41 = dVar43 * dVar2 * 1.0 +
                           dVar29 * dVar33 + dVar25 * dVar28 * -1.0 + dVar24 * dVar46;
                  local_4f8._0_8_ =
                       dVar29 * dVar2 * 1.0 +
                       ((dVar25 * dVar46 * 1.0 + dVar24 * dVar28) - dVar33 * dVar43);
                  local_4f8._8_8_ =
                       dVar28 * dVar2 * -1.0 +
                       ((dVar25 * dVar43 * -1.0 + dVar24 * dVar29) - dVar33 * dVar46);
                  dVar42 = *(double *)(puVar19 + 0x1c) * local_548;
                  dVar45 = *(double *)(puVar19 + 0x1e) * dStack_540;
                  dVar34 = *(double *)(puVar19 + 0x20) * dVar23;
                  dVar37 = *(double *)(puVar19 + 0x22) * dVar48;
                  dVar43 = dVar45 * dVar25 - dVar33 * dVar42;
                  dVar29 = dVar34 * dVar33 - dVar2 * dVar45;
                  dVar28 = dVar42 * dVar2 - dVar25 * dVar34;
                  dVar46 = dVar37 * dVar24 - dVar24 * dVar37;
                  dVar29 = dVar29 + dVar29;
                  dVar28 = dVar28 + dVar28;
                  dVar43 = dVar43 + dVar43;
                  dVar46 = dVar46 + dVar46;
                  local_558 = local_118 +
                              (dVar43 * dVar33 - dVar2 * dVar28) + dVar24 * dVar29 + dVar42;
                  dStack_550 = dStack_110 +
                               (dVar29 * dVar2 - dVar43 * dVar25) + dVar24 * dVar28 + dVar45;
                  local_5a8 = local_5a8 +
                              (dVar28 * dVar25 - dVar33 * dVar29) + dVar24 * dVar43 + dVar34;
                  dStack_5a0 = dStack_5a0 +
                               (dVar46 * dVar24 - dVar46 * dVar24) + dVar24 * dVar46 + dVar37;
                  dVar25 = local_1e8 * local_548;
                  dVar27 = dVar27 * dStack_540;
                  dVar44 = dVar44 * dVar23;
                  dVar48 = auVar26._8_8_ * dVar48;
                }
                else {
                  dVar41 = dVar33 + dVar33;
                  dVar43 = dVar2 + dVar2;
                  dVar39 = dVar25 * (dVar25 + dVar25);
                  local_178[0] = (1.0 - (dVar2 * dVar43 + dVar33 * dVar41)) * local_548;
                  dVar2 = (1.0 - (dVar2 * dVar43 + dVar39)) * dStack_540;
                  dVar46 = (dVar25 + dVar25) * dVar24;
                  dStack_130 = (dVar43 * dVar33 - dVar46) * dVar23;
                  local_138 = (dVar41 * dVar24 + dVar25 * dVar43) * dVar23;
                  local_128 = (1.0 - (dVar39 + dVar33 * dVar41)) * dVar23;
                  dVar48 = dVar48 * auVar26._8_8_;
                  local_538._8_4_ = SUB84(dVar48,0);
                  local_538._0_8_ = dVar23 * dVar44;
                  local_538._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
                  local_178[1] = (dVar41 * dVar25 + dVar43 * dVar24) * local_548;
                  local_148 = (dVar43 * dVar33 + dVar46) * dStack_540;
                  local_178[2] = (dVar25 * dVar43 - dVar41 * dVar24) * local_548;
                  local_178[3] = 0.0;
                  local_158._8_4_ = SUB84(dVar2,0);
                  local_158._0_8_ = (dVar41 * dVar25 - dVar43 * dVar24) * dStack_540;
                  local_158._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
                  uStack_140 = 0;
                  uStack_120 = 0;
                  dStack_100 = 1.0;
                  dVar24 = *(double *)(puVar19 + 0x14);
                  dVar39 = *(double *)(puVar19 + 0x16);
                  dVar41 = *(double *)(puVar19 + 0x18);
                  dVar43 = dVar39 + dVar39;
                  dVar48 = dVar41 + dVar41;
                  dVar2 = dVar24 * (dVar24 + dVar24);
                  local_1a8 = (1.0 - (dVar2 + dVar39 * dVar43)) * dVar44;
                  dVar23 = *(double *)(puVar19 + 0x1a);
                  dVar25 = dVar48 * dVar23;
                  dVar33 = (dVar24 + dVar24) * *(double *)(puVar19 + 0x1a);
                  dVar23 = dVar43 * dVar23;
                  local_1b8 = (dVar23 + *(double *)(puVar19 + 0x14) * dVar48) * dVar44;
                  local_1d8 = (dVar43 * dVar24 - dVar25) * dVar27;
                  dStack_1b0 = (dVar48 * dVar39 - dVar33) * dVar44;
                  local_548 = local_548 * local_1e8;
                  dStack_540 = dStack_540 * dVar27;
                  local_1f8 = (1.0 - (dVar41 * dVar48 + dVar39 * dVar43)) * local_1e8;
                  dStack_1d0 = (1.0 - (dVar41 * dVar48 + dVar2)) * dVar27;
                  dStack_1f0 = (dVar43 * dVar24 + dVar25) * local_1e8;
                  local_1c8 = (dVar48 * dVar39 + dVar33) * dVar27;
                  local_1e8 = (*(double *)(puVar19 + 0x14) * dVar48 - dVar23) * local_1e8;
                  uStack_1e0 = 0;
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  local_198 = *(undefined8 *)(puVar19 + 0x1c);
                  uStack_190 = *(undefined8 *)(puVar19 + 0x1e);
                  local_188 = *(undefined8 *)(puVar19 + 0x20);
                  uStack_180 = 0x3ff0000000000000;
                  local_108 = local_5a8;
                  FUN_1447fea8d(&local_2f8,&local_1f8,local_178);
                  dVar27 = dStack_540;
                  dVar25 = local_548;
                  auVar35 = _DAT_149934d80;
                  dVar23 = adStack_2f0[1] * adStack_2f0[1] +
                           local_2f8 * local_2f8 + adStack_2f0[0] * adStack_2f0[0];
                  dVar44 = (double)local_2c8._0_8_ * (double)local_2c8._0_8_ +
                           (double)local_2d8._0_8_ * (double)local_2d8._0_8_ +
                           (double)local_2d8._8_8_ * (double)local_2d8._8_8_;
                  dVar48 = local_2a8 * local_2a8 + local_2b8 * local_2b8 + dStack_2b0 * dStack_2b0;
                  uVar21 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
                  dVar23 = (double)(~uVar21 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar23)) & uVar21);
                  uVar21 = -(ulonglong)(0.0 <= dVar44 + -9.99999993922529e-09);
                  dVar33 = (double)(~uVar21 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar44)) & uVar21);
                  uVar21 = -(ulonglong)(0.0 <= dVar48 + -9.99999993922529e-09);
                  dVar2 = (double)(~uVar21 & 0x3ff0000000000000 |
                                  (ulonglong)(1.0 / SQRT(dVar48)) & uVar21);
                  dVar44 = (double)local_538._0_8_;
                  dVar48 = (double)local_538._8_8_;
                  auVar38._8_8_ = -(ulonglong)(0.0 <= dStack_540);
                  auVar38._0_8_ = -(ulonglong)(0.0 <= local_548);
                  auVar49 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar38);
                  dVar24 = (double)(~-(ulonglong)(0.0 <= (double)local_538._0_8_) &
                                    0xbff0000000000000 |
                                   (ulonglong)
                                   ((uint)(-(ulonglong)(0.0 <= (double)local_538._0_8_) >> 0x20) &
                                   0x3ff00000) << 0x20);
                  dVar39 = auVar49._0_8_;
                  local_2f8 = local_2f8 * dVar23 * dVar39;
                  adStack_2f0[0] = adStack_2f0[0] * dVar23 * dVar39;
                  adStack_2f0[1] = dVar23 * adStack_2f0[1] * dVar39;
                  dVar23 = auVar49._8_8_;
                  local_2d8._8_8_ = (double)local_2d8._8_8_ * dVar33 * dVar23;
                  local_2d8._0_8_ = dVar23 * (double)local_2d8._0_8_ * dVar33;
                  local_2c8._0_8_ = dVar33 * (double)local_2c8._0_8_ * dVar23;
                  local_2a8 = dVar2 * local_2a8 * dVar24;
                  dStack_2b0 = dStack_2b0 * dVar2 * dVar24;
                  local_2b8 = dVar24 * local_2b8 * dVar2;
                  FUN_14481fd10(local_478,&local_2f8);
                  dVar23 = local_468 * local_468 + (double)local_478._0_8_ * (double)local_478._0_8_
                  ;
                  dVar33 = dStack_460 * dStack_460 +
                           (double)local_478._8_8_ * (double)local_478._8_8_;
                  auVar30._0_8_ = dVar23 + dVar33;
                  auVar30._8_8_ = dVar23 + dVar33;
                  auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
                  auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
                  auVar49 = sqrtpd(auVar30,auVar30);
                  auVar35 = divpd(auVar35,auVar49);
                  auVar36._0_8_ = auVar35._0_8_ * local_468;
                  auVar36._8_8_ = auVar35._8_8_ * dStack_460;
                  dVar39 = (double)((ulonglong)((double)local_478._0_8_ * auVar35._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
                  dVar41 = (double)((ulonglong)((double)local_478._8_8_ * auVar35._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
                  local_4f8._0_16_ = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar36,auVar26);
                  local_558 = local_298;
                  dStack_550 = dStack_290;
                  local_5a8 = local_288;
                  dStack_5a0 = 0.0;
                }
                dVar2 = dStack_550;
                dVar33 = local_558;
                dVar24 = local_5a8;
                dVar29 = local_430 * dVar25;
                dVar34 = dStack_428 * dVar27;
                dVar28 = local_420 * dVar44;
                dVar51 = local_4f8._8_8_;
                dVar50 = local_4f8._0_8_;
                dVar23 = dVar34 * dVar39 - dVar41 * dVar29;
                dVar37 = dVar28 * dVar41 - dVar50 * dVar34;
                dVar43 = dVar29 * dVar50 - dVar39 * dVar28;
                dVar46 = dVar48 * 0.0 * dVar51 - dVar51 * dVar48 * 0.0;
                dVar37 = dVar37 + dVar37;
                dVar43 = dVar43 + dVar43;
                dVar23 = dVar23 + dVar23;
                local_568 = dVar39 * dVar23;
                dStack_560 = dVar41 * (dVar46 + dVar46);
                dVar45 = local_418 * dVar25;
                dVar47 = dStack_410 * dVar27;
                local_538._8_4_ = SUB84(dVar48,0);
                local_538._0_8_ = dVar44;
                local_538._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
                dVar44 = local_408[0] * dVar44;
                dVar48 = dVar47 * dVar39 - dVar41 * dVar45;
                dVar42 = dVar44 * dVar41 - dVar50 * dVar47;
                dVar46 = dVar45 * dVar50 - dVar39 * dVar44;
                dVar42 = dVar42 + dVar42;
                dVar46 = dVar46 + dVar46;
                dVar48 = dVar48 + dVar48;
                local_1f8 = (dVar23 * dVar41 - dVar43 * dVar50) + dVar51 * dVar37 + dVar29 +
                            local_558;
                dStack_1f0 = (dVar50 * dVar37 - local_568) + dVar51 * dVar43 + dVar34 + dStack_550;
                local_1e8 = dVar23 * dVar51 + dVar28 + (dVar43 * dVar39 - dVar37 * dVar41) +
                            local_5a8;
                local_508._8_4_ = SUB84(dVar41,0);
                local_508._0_8_ = dVar39;
                local_508._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
                dVar23 = (dVar50 * dVar42 - dVar39 * dVar48) + dVar51 * dVar46 + dVar47 + dStack_550
                ;
                local_4c8._8_4_ = SUB84(dVar23,0);
                local_4c8._0_8_ =
                     (dVar48 * dVar41 - dVar46 * dVar50) + dVar51 * dVar42 + dVar45 + local_558;
                local_4c8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
                local_4b8 = dVar48 * dVar51 + dVar44 + (dVar46 * dVar39 - dVar42 * dVar41) +
                            local_5a8;
                local_178[0] = 0.0;
                local_178[1] = 0.0;
                local_178[2] = 0.0;
                local_178[3] = 0.0;
                local_158 = ZEXT816(0);
                local_148 = 0.0;
                uStack_140 = 0;
                local_138 = 0.0;
                dStack_130 = 0.0;
                local_128 = 0.0;
                uStack_120 = 0;
                local_118 = 0.0;
                local_44c = 0;
                local_44a = 0;
                dStack_100 = local_1e8;
                dStack_110 = local_1f8;
                local_108 = dStack_1f0;
                local_548 = dVar25;
                dStack_540 = dVar27;
                local_478 = local_4c8;
                local_468 = local_4b8;
                if (0 < *(int *)(lVar15 + 0x30)) {
                  uVar40 = 0;
                  local_568._4_4_ = (undefined4)((ulonglong)local_568 >> 0x20);
                  local_568 = (double)CONCAT44(local_568._4_4_,0xffffffff);
                  lVar20 = 0;
                  bVar14 = false;
                  local_5b4 = 0;
                  local_5b8 = 0;
                  local_5bc = 0;
                  local_5c0 = 0;
                  local_580 = 0;
                  local_5c8 = 0;
                  local_5cc = 0;
                  local_5ac = 0;
                  local_5b0 = 0;
                  local_570 = 0;
                  local_578 = 0;
                  local_5c4 = 0;
                  fVar22 = 1.0;
                  local_5d0 = 0;
                  local_5d4 = 0;
                  local_5d8 = 0;
                  local_5dc = 0;
                  local_5e0 = 0;
                  local_5e4 = 0xffffffff;
                  local_5e8 = 0;
                  local_588 = 0;
                  do {
                    iVar6 = *(int *)(*(longlong *)(lVar15 + 0x28) + 4 + lVar20 * 8);
                    if ((((iVar6 != 0) &&
                         (uVar9 = *(uint *)(*(longlong *)(lVar15 + 0x28) + lVar20 * 8),
                         -1 < (int)uVar9)) &&
                        (((int)uVar9 < DAT_14c9647dc &&
                         (((puVar12 = (undefined8 *)
                                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8))
                           , puVar12 != (undefined8 *)0x0 && (*(int *)(puVar12 + 2) == iVar6)) &&
                          ((*(uint *)(puVar12 + 1) & 0x10200000) == 0)))))) &&
                       (((param_4 = (double *)*puVar12, param_4 != (double *)0x0 &&
                         ((*(byte *)((longlong)param_4 + 0x9c) & 1) != 0)) &&
                        (iVar6 = (**(code **)((longlong)*param_4 + 0x570))(param_4), iVar6 != 0))))
                    {
                      if ((cStack_34f == '\0') && (cStack_34f = '\x01', 1 < local_320)) {
                        piVar8 = local_328;
                        if (local_328 == (int *)0x0) {
                          piVar8 = &local_348;
                        }
                        FUN_1449e0cb6(piVar8);
                        piVar8 = local_328;
                        if (local_328 == (int *)0x0) {
                          piVar8 = &local_348;
                        }
                        if ((longlong)local_320 != 1) {
                          piVar17 = piVar8 + local_320;
                          piVar11 = local_328 + 1;
                          if (local_328 == (int *)0x0) {
                            piVar11 = local_344;
                          }
                          iVar6 = *piVar8;
                          do {
                            iVar1 = *piVar11;
                            if (iVar6 != iVar1) {
                              piVar8[1] = iVar1;
                              piVar8 = piVar8 + 1;
                            }
                            piVar11 = piVar11 + 1;
                            iVar6 = iVar1;
                          } while (piVar11 != piVar17);
                        }
                        piVar17 = local_328;
                        if (local_328 == (int *)0x0) {
                          piVar17 = &local_348;
                        }
                        FUN_1479ab1f6(&local_348,
                                      (int)((ulonglong)((longlong)piVar8 - (longlong)piVar17) >> 2)
                                      + 1);
                      }
                      piVar8 = local_328;
                      if (local_328 == (int *)0x0) {
                        piVar8 = &local_348;
                      }
                      if (local_320 != 0) {
                        lVar16 = 0;
                        do {
                          if (*(int *)((longlong)piVar8 + lVar16) ==
                              *(int *)((longlong)param_4 + 0xc)) goto LAB_143f9b127;
                          lVar16 = lVar16 + 4;
                        } while ((longlong)local_320 * 4 != lVar16);
                      }
                      memset(&local_2f8,0,0x100);
                      local_228 = 0xffffffff;
                      local_2f8 = (double)CONCAT44(0x3f800000,(undefined4)local_2f8);
                      local_254 = 0xffffffff;
                      local_5f8 = local_380;
                      local_600 = &local_378;
                      local_608 = &local_390;
                      local_610 = param_7;
                      local_618 = &local_3f8;
                      cVar5 = (**(code **)((longlong)*param_4 + 0x9d0))
                                        (param_4,&local_2f8,&local_1f8,local_478);
                      if ((cVar5 != '\0') && (local_2f8._4_4_ < fVar22)) {
                        local_5e8 = (undefined4)local_2f8;
                        param_4 = adStack_2f0;
                        pdVar10 = local_178;
                        for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
                          *pdVar10 = *param_4;
                          param_4 = param_4 + 1;
                          pdVar10 = pdVar10 + 1;
                        }
                        local_4b8 = *(double *)local_518[1];
                        local_4c8 = *local_518;
                        local_5e4 = local_254;
                        local_588 = local_250;
                        local_5e0 = local_248;
                        local_5dc = local_244;
                        local_5d8 = local_240;
                        local_5d4 = local_23c;
                        local_5d0 = local_238;
                        local_5c4 = local_234;
                        local_578 = local_230;
                        local_568 = (double)CONCAT44(local_568._4_4_,local_228);
                        local_570 = (ulonglong)CONCAT31((int3)((uint)local_228 >> 8),local_224);
                        local_44c = *local_510;
                        local_44a = *(undefined1 *)(local_510 + 1);
                        local_5b0 = local_220;
                        local_5ac = local_21c;
                        local_5cc = local_218;
                        local_5c8 = local_214;
                        local_580 = local_210;
                        local_5c0 = local_208;
                        local_5bc = local_204;
                        local_5b8 = local_200;
                        local_5b4 = local_1fc;
                        bVar14 = true;
                        fVar22 = local_2f8._4_4_;
                        uVar40 = local_258;
                        if (local_380 != '\0') goto LAB_143f9b21b;
                      }
                    }
LAB_143f9b127:
                    lVar20 = lVar20 + 1;
                  } while (lVar20 < *(int *)(lVar15 + 0x30));
                  if (bVar14) {
LAB_143f9b21b:
                    if (fVar22 < (float)param_3[1]) {
                      *param_3 = local_5e8;
                      param_3[1] = fVar22;
                      param_4 = local_178;
                      pdVar10 = local_528;
                      for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
                        *pdVar10 = *param_4;
                        param_4 = param_4 + 1;
                        pdVar10 = pdVar10 + 1;
                      }
                      *(double *)local_598[1] = local_4b8;
                      *local_598 = local_4c8;
                      param_3[0x28] = uVar40;
                      param_3[0x29] = local_5e4;
                      *(undefined8 *)(param_3 + 0x2a) = local_588;
                      param_3[0x2c] = local_5e0;
                      param_3[0x2d] = local_5dc;
                      param_3[0x2e] = local_5d8;
                      param_3[0x2f] = local_5d4;
                      param_3[0x30] = local_5d0;
                      param_3[0x31] = local_5c4;
                      *(undefined8 *)(param_3 + 0x32) = local_578;
                      param_3[0x34] = (undefined4)local_568;
                      *(char *)(param_3 + 0x35) = (char)local_570;
                      *(undefined1 *)(local_520 + 1) = local_44a;
                      *local_520 = local_44c;
                      param_3[0x36] = local_5b0;
                      param_3[0x37] = local_5ac;
                      param_3[0x38] = local_5cc;
                      param_3[0x39] = local_5c8;
                      *(undefined8 *)(param_3 + 0x3a) = local_580;
                      param_3[0x3c] = local_5c0;
                      param_3[0x3d] = local_5bc;
                      param_3[0x3e] = local_5b8;
                      uVar21 = (ulonglong)local_5b4;
                      param_3[0x3f] = local_5b4;
                      if (cStack_350 == '\0') {
                        auVar4._8_8_ = dStack_540;
                        auVar4._0_8_ = local_548;
                        auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_540));
                        auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_548));
                        iVar6 = movmskpd(local_5b4,auVar31);
                        auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_538._8_8_));
                        auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_538._0_8_));
                        uVar9 = movmskpd((int)local_520,auVar32);
                        if ((uVar9 & 0x3fffffff) == 0 && iVar6 == 0) {
                          param_4 = (double *)&DAT_14c846480;
                          pdVar10 = (double *)&local_2f8;
                          for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
                            *pdVar10 = *param_4;
                            param_4 = param_4 + 1;
                            pdVar10 = pdVar10 + 1;
                          }
                        }
                        else {
                          auVar35 = divpd(_DAT_149934d80,auVar4);
                          auVar49 = divpd(ZEXT816(0x3ff0000000000000),local_538);
                          local_2b8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_548)) &
                                              auVar35._0_8_);
                          dStack_2b0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_540))
                                               & auVar35._8_8_);
                          local_2a8 = (double)(-(ulonglong)
                                                (9.99999993922529e-09 < ABS(local_538._0_8_)) &
                                              auVar49._0_8_);
                          local_2f8 = -(double)local_508._0_8_;
                          adStack_2f0[0] = -(double)local_508._8_8_;
                          adStack_2f0[1] = (double)local_4f8._0_8_ * -1.0;
                          adStack_2f0[2] = (double)local_4f8._8_8_ * 1.0;
                          dVar33 = dVar33 * local_2b8;
                          dVar2 = dVar2 * dStack_2b0;
                          dVar24 = dVar24 * local_2a8;
                          dVar23 = dVar2 * local_2f8 - dVar33 * adStack_2f0[0];
                          dVar44 = dVar24 * adStack_2f0[0] - dVar2 * adStack_2f0[1];
                          dVar48 = dVar33 * adStack_2f0[1] - local_2f8 * dVar24;
                          dVar44 = dVar44 + dVar44;
                          dVar48 = dVar48 + dVar48;
                          dVar23 = dVar23 + dVar23;
                          dVar27 = 0.0 - (dVar23 * (double)local_508._0_8_ + adStack_2f0[1] * dVar44
                                         + adStack_2f0[2] * dVar48 + dVar2);
                          local_2d8._8_4_ = SUB84(dVar27,0);
                          local_2d8._0_8_ =
                               0.0 - ((dVar23 * adStack_2f0[0] - dVar48 * adStack_2f0[1]) +
                                     adStack_2f0[2] * dVar44 + dVar33);
                          local_2d8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
                          local_2c8._8_8_ = 0;
                          local_2c8._0_8_ =
                               0.0 - (adStack_2f0[2] * dVar23 + dVar24 +
                                     (dVar48 * local_2f8 - dVar44 * adStack_2f0[0]));
                          uStack_2a0 = 0;
                        }
                        uVar21 = FUN_143f96646(&local_2f8,param_3);
                      }
                      local_590 = CONCAT71((int7)(uVar21 >> 8),1);
                      if (local_380 != '\0') goto LAB_143f9b5c3;
                    }
                  }
                }
              }
            }
          }
LAB_143f9b5a9:
          puVar19 = puVar19 + 0x2c;
        } while (puVar19 != puVar13);
        if ((local_590 & 1) == 0) goto LAB_143f9b5f7;
LAB_143f9b5c3:
        *(double *)(param_3 + 0x20) = local_420;
        *(double *)(param_3 + 0x1c) = local_430;
        *(double *)(param_3 + 0x1e) = dStack_428;
        *(double *)local_598[1] = local_408[0];
        *(double *)*local_598 = local_418;
        *(double *)((longlong)*local_598 + 8) = dStack_410;
        uVar21 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      }
      if (local_308 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_328 != (int *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143f99d4f;
    }
  }
  uVar21 = 0;
LAB_143f99d4f:
  if ((local_f0 ^ (ulonglong)auStack_638) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar21 & 0xffffffff;
}



// FUNCTION 143f9b696 FUN_143f9b696 body=5313 status=ok
// SIG undefined FUN_143f9b696(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_143f9b696(undefined8 param_1,undefined4 param_2,longlong *param_3,double *param_4,
                  double *param_5,undefined8 *param_6,longlong *param_7,uint param_8,
                  longlong param_9,longlong param_10,uint *param_11)

{
  float fVar1;
  int iVar2;
  double dVar3;
  undefined1 auVar4 [16];
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  double *pdVar12;
  undefined8 in_RDX;
  longlong *plVar13;
  longlong *plVar14;
  int *piVar15;
  byte bVar16;
  uint *puVar17;
  double *pdVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  longlong lVar24;
  uint *puVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  double dVar59;
  double dVar60;
  undefined1 auStack_478 [32];
  double *local_458;
  undefined8 *local_450;
  longlong *local_448;
  undefined8 *local_440;
  longlong local_438;
  undefined1 local_430;
  uint *local_428;
  int *local_420;
  undefined1 local_418 [16];
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [24];
  longlong local_3c0;
  undefined8 local_3b8;
  double local_3b0;
  longlong local_3a8;
  float local_3a0;
  undefined1 local_39c [28];
  double local_380 [3];
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  longlong local_348;
  undefined4 local_340;
  undefined4 local_33c;
  double local_338;
  double local_330;
  double dStack_328;
  double local_320;
  double local_318;
  double dStack_310;
  double local_308 [2];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  undefined8 local_290;
  uint local_288;
  uint local_284;
  undefined1 local_280;
  char local_27f;
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
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
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
  double local_178 [2];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_478;
  dVar30 = SQRT((param_5[2] - param_4[2]) * (param_5[2] - param_4[2]) +
                (*param_5 - *param_4) * (*param_5 - *param_4) +
                (param_5[1] - param_4[1]) * (param_5[1] - param_4[1]));
  fVar29 = (float)dVar30;
  if (0.0001 <= fVar29) {
    local_450 = &local_3b8;
    local_458 = &local_3b0;
    cVar5 = FUN_148af0c7e(CONCAT44((int)((ulonglong)dVar30 >> 0x20),fVar29),in_RDX,&local_3a8);
    if (cVar5 != '\0') {
      uVar11 = 0;
      memset(local_308,0,0x90);
      (**(code **)(*param_7 + 0x80))(param_7,local_178);
      local_298 = (double)local_158._8_8_ - (double)local_168._0_8_;
      local_2a0 = (double)local_158._0_8_ - local_178[1];
      local_2a8 = (double)local_168._8_8_ - local_178[0];
      local_348 = local_3a8;
      local_338 = local_3b0;
      local_33c = local_3b8._4_4_;
      local_320 = param_4[2];
      local_330 = *param_4;
      dStack_328 = param_4[1];
      local_308[0] = param_5[2];
      local_318 = *param_5;
      dStack_310 = param_5[1];
      local_2f8 = *param_6;
      uStack_2f0 = param_6[1];
      local_2e8 = param_6[2];
      uStack_2e0 = param_6[3];
      local_2c8 = param_4[2] + DAT_14c8464f0;
      local_2d0 = param_4[1] + DAT_14c8464e8;
      local_2d8 = *param_4 + DAT_14c8464e0;
      local_2b0 = DAT_14c8464f0 + param_5[2];
      local_2b8 = DAT_14c8464e8 + param_5[1];
      local_2c0 = DAT_14c8464e0 + *param_5;
      local_280 = 0;
      local_27f = *param_11 != 0;
      if ((bool)local_27f) {
        local_288 = 0;
        local_290 = (ulonglong)*param_11 << 0x20;
        local_284 = (uint)*(byte *)(param_9 + 0x10) + param_11[1] * 0x4000000 + 0x200001;
      }
      else {
        lVar24 = 0;
        uVar22 = 0;
        do {
          if (*(char *)(param_10 + lVar24) == '\x02') {
            uVar22 = uVar22 | 1 << ((uint)lVar24 & 0x1f);
          }
          else if (*(char *)(param_10 + lVar24) == '\x01') {
            uVar11 = uVar11 | 1 << ((uint)lVar24 & 0x1f);
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 != 0x20);
        local_290 = CONCAT44(uVar22,1);
        local_284 = (uint)*(byte *)(param_9 + 0x10) + (param_8 & 0xff) * 0x200000 + 1 |
                    *(int *)(param_9 + 0x20) << 0x1a;
        local_288 = uVar11;
      }
      lVar24 = param_3[1];
      lVar26 = (longlong)(int)lVar24;
      local_3a0 = 1.1;
      if (lVar26 != 0) {
        fVar29 = 1.1;
        lVar19 = 0;
        do {
          if (((*(byte *)(*param_3 + 0xad + lVar19) & 1) != 0) &&
             (fVar1 = *(float *)(*param_3 + 4 + lVar19), fVar1 < fVar29)) {
            local_3a0 = fVar1;
            fVar29 = fVar1;
          }
          lVar19 = lVar19 + 0x100;
        } while (lVar26 << 8 != lVar19);
      }
      local_340 = param_2;
      if ((longlong)*(int *)(local_3a8 + 0x10) != 0) {
        puVar25 = *(uint **)(local_3a8 + 8);
        puVar17 = puVar25 + (longlong)*(int *)(local_3a8 + 0x10) * 0x2c;
        local_3c0 = param_9 + 0x60;
        local_420 = (int *)(param_9 + 0x30);
        bVar16 = 0;
        local_428 = puVar17;
        do {
          if (((((puVar25[1] != 0) && (uVar11 = *puVar25, -1 < (int)uVar11)) &&
               ((int)uVar11 < DAT_14c9647dc)) &&
              ((plVar13 = (longlong *)
                          ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
               plVar13 != (longlong *)0x0 && (*(uint *)(plVar13 + 2) == puVar25[1])))) &&
             (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 && (lVar19 = *plVar13, lVar19 != 0)))) {
            lVar8 = *(longlong *)(param_9 + 0x70);
            if (*(longlong *)(param_9 + 0x70) == 0) {
              lVar8 = local_3c0;
            }
            if ((longlong)*(int *)(param_9 + 0x78) != 0) {
              lVar20 = 0;
              do {
                if (*(int *)(lVar8 + lVar20) == *(int *)(lVar19 + 0xc)) goto LAB_143f9ca3d;
                lVar20 = lVar20 + 4;
              } while ((longlong)*(int *)(param_9 + 0x78) * 4 != lVar20);
            }
            lVar8 = *(longlong *)(puVar25 + 2);
            puVar17 = local_428;
            if (*(int *)(lVar8 + 0x30) != 0) {
              local_448 = (longlong *)local_39c;
              local_450 = (undefined8 *)(local_39c + 4);
              local_458 = local_380;
              cVar5 = FUN_1467f6da8(puVar25 + 4,&local_2d8,&local_2c0,&local_2a8);
              puVar17 = local_428;
              if (cVar5 != '\0') {
                pdVar12 = (double *)(*(longlong *)(lVar19 + 0x1c8) + 0x240);
                if (*(longlong *)(lVar19 + 0x1c8) == 0) {
                  pdVar12 = (double *)&DAT_14c846480;
                }
                dVar41 = *pdVar12;
                dVar31 = pdVar12[1];
                dVar35 = pdVar12[2];
                dVar49 = pdVar12[3];
                local_408 = pdVar12[6];
                dStack_400 = pdVar12[7];
                auVar42 = *(undefined1 (*) [16])(pdVar12 + 8);
                local_3e8 = auVar42._0_8_;
                dStack_3e0 = auVar42._8_8_;
                auVar50 = *(undefined1 (*) [16])(pdVar12 + 10);
                local_3d8._0_8_ = auVar50._0_8_;
                local_3d8._8_8_ = auVar50._8_8_;
                auVar46 = *(undefined1 (*) [16])(puVar25 + 0x24);
                local_268 = auVar46._0_8_;
                dVar34 = auVar46._8_8_;
                auVar32 = *(undefined1 (*) [16])(puVar25 + 0x28);
                dVar30 = auVar32._0_8_;
                auVar42 = minpd(auVar46,auVar42);
                auVar46 = minpd(auVar32,auVar50);
                auVar50._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
                auVar50._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
                iVar7 = movmskpd(0x4c846480,auVar50);
                auVar42._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
                auVar42._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
                uVar11 = movmskpd((int)pdVar12,auVar42);
                if ((uVar11 & 0x3fffffff) == 0 && iVar7 == 0) {
                  dVar47 = *(double *)(puVar25 + 0x14);
                  dVar54 = *(double *)(puVar25 + 0x16);
                  dVar48 = *(double *)(puVar25 + 0x18);
                  dVar3 = *(double *)(puVar25 + 0x1a);
                  dVar51 = dVar54 * dVar35 * -1.0 +
                           dVar48 * dVar31 + dVar41 * dVar3 * 1.0 + dVar49 * dVar47;
                  dVar56 = dVar47 * dVar35 * 1.0 +
                           dVar3 * dVar31 + dVar41 * dVar48 * -1.0 + dVar49 * dVar54;
                  auVar46._0_8_ =
                       dVar3 * dVar35 * 1.0 +
                       ((dVar41 * dVar54 * 1.0 + dVar49 * dVar48) - dVar31 * dVar47);
                  auVar46._8_8_ =
                       dVar48 * dVar35 * -1.0 +
                       ((dVar41 * dVar47 * -1.0 + dVar49 * dVar3) - dVar31 * dVar54);
                  dVar48 = *(double *)(puVar25 + 0x1c) * local_3e8;
                  dVar3 = *(double *)(puVar25 + 0x1e) * dStack_3e0;
                  dVar40 = *(double *)(puVar25 + 0x20) * (double)local_3d8._0_8_;
                  dVar44 = *(double *)(puVar25 + 0x22) * (double)local_3d8._8_8_;
                  dVar47 = dVar3 * dVar41 - dVar31 * dVar48;
                  dVar36 = dVar40 * dVar31 - dVar35 * dVar3;
                  dVar53 = dVar48 * dVar35 - dVar41 * dVar40;
                  dVar54 = dVar44 * dVar49 - dVar49 * dVar44;
                  dVar36 = dVar36 + dVar36;
                  dVar53 = dVar53 + dVar53;
                  dVar47 = dVar47 + dVar47;
                  dVar54 = dVar54 + dVar54;
                  local_3f8 = pdVar12[4] +
                              (dVar47 * dVar31 - dVar35 * dVar53) + dVar49 * dVar36 + dVar48;
                  dStack_3f0 = pdVar12[5] +
                               (dVar36 * dVar35 - dVar47 * dVar41) + dVar49 * dVar53 + dVar3;
                  local_408 = local_408 +
                              (dVar53 * dVar41 - dVar31 * dVar36) + dVar49 * dVar47 + dVar40;
                  dStack_400 = dStack_400 +
                               (dVar54 * dVar49 - dVar54 * dVar49) + dVar49 * dVar54 + dVar44;
                  dVar31 = local_268 * local_3e8;
                  dVar34 = dVar34 * dStack_3e0;
                  dVar30 = dVar30 * (double)local_3d8._0_8_;
                  dVar41 = auVar32._8_8_ * (double)local_3d8._8_8_;
                }
                else {
                  dVar54 = dVar31 + dVar31;
                  dVar51 = dVar35 + dVar35;
                  dVar47 = dVar41 * (dVar41 + dVar41);
                  local_1f8 = (1.0 - (dVar35 * dVar51 + dVar31 * dVar54)) * local_3e8;
                  dVar35 = (1.0 - (dVar35 * dVar51 + dVar47)) * dStack_3e0;
                  dVar56 = (dVar41 + dVar41) * dVar49;
                  dStack_1b0 = (dVar51 * dVar31 - dVar56) * (double)local_3d8._0_8_;
                  local_1b8 = (dVar54 * dVar49 + dVar41 * dVar51) * (double)local_3d8._0_8_;
                  local_1a8 = (1.0 - (dVar47 + dVar31 * dVar54)) * (double)local_3d8._0_8_;
                  local_3d8._0_8_ = (double)local_3d8._0_8_ * dVar30;
                  local_3d8._8_8_ = (double)local_3d8._8_8_ * auVar32._8_8_;
                  dStack_1f0 = (dVar54 * dVar41 + dVar51 * dVar49) * local_3e8;
                  local_1c8 = (dVar51 * dVar31 + dVar56) * dStack_3e0;
                  local_1e8 = (dVar41 * dVar51 - dVar54 * dVar49) * local_3e8;
                  uStack_1e0 = 0;
                  local_1d8._8_4_ = SUB84(dVar35,0);
                  local_1d8._0_8_ = (dVar54 * dVar41 - dVar51 * dVar49) * dStack_3e0;
                  local_1d8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  uStack_180 = 0x3ff0000000000000;
                  dVar51 = *(double *)(puVar25 + 0x14);
                  dVar56 = *(double *)(puVar25 + 0x16);
                  dVar47 = *(double *)(puVar25 + 0x18);
                  dVar54 = dVar56 + dVar56;
                  dVar31 = dVar47 + dVar47;
                  dVar48 = dVar51 * (dVar51 + dVar51);
                  local_228 = (1.0 - (dVar48 + dVar56 * dVar54)) * dVar30;
                  dVar41 = *(double *)(puVar25 + 0x1a);
                  dVar35 = dVar31 * dVar41;
                  dVar49 = (dVar51 + dVar51) * *(double *)(puVar25 + 0x1a);
                  dVar41 = dVar54 * dVar41;
                  local_238 = (dVar41 + *(double *)(puVar25 + 0x14) * dVar31) * dVar30;
                  dStack_230 = (dVar31 * dVar56 - dVar49) * dVar30;
                  local_3e8 = local_3e8 * local_268;
                  dStack_3e0 = dStack_3e0 * dVar34;
                  local_278 = (1.0 - (dVar47 * dVar31 + dVar56 * dVar54)) * local_268;
                  dVar30 = (1.0 - (dVar47 * dVar31 + dVar48)) * dVar34;
                  dStack_270 = (dVar54 * dVar51 + dVar35) * local_268;
                  local_248 = (dVar31 * dVar56 + dVar49) * dVar34;
                  local_268 = (*(double *)(puVar25 + 0x14) * dVar31 - dVar41) * local_268;
                  uStack_260 = 0;
                  local_258._8_4_ = SUB84(dVar30,0);
                  local_258._0_8_ = (dVar54 * dVar51 - dVar35) * dVar34;
                  local_258._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
                  uStack_240 = 0;
                  uStack_220 = 0;
                  local_218 = *(undefined8 *)(puVar25 + 0x1c);
                  uStack_210 = *(undefined8 *)(puVar25 + 0x1e);
                  local_208 = *(undefined8 *)(puVar25 + 0x20);
                  uStack_200 = 0x3ff0000000000000;
                  local_198 = pdVar12[4];
                  dStack_190 = pdVar12[5];
                  local_188 = local_408;
                  FUN_1447fea8d(local_178,&local_278,&local_1f8);
                  dVar41 = (double)local_3d8._8_8_;
                  dVar30 = (double)local_3d8._0_8_;
                  dVar34 = dStack_3e0;
                  dVar31 = local_3e8;
                  auVar42 = _DAT_149934d80;
                  local_418._0_8_ = local_168._0_8_;
                  dVar49 = (double)local_168._0_8_ * (double)local_168._0_8_ +
                           local_178[0] * local_178[0] + local_178[1] * local_178[1];
                  dVar56 = (double)local_148._0_8_ * (double)local_148._0_8_ +
                           (double)local_158._0_8_ * (double)local_158._0_8_ +
                           (double)local_158._8_8_ * (double)local_158._8_8_;
                  dVar35 = (double)local_128._0_8_ * (double)local_128._0_8_ +
                           (double)local_138._0_8_ * (double)local_138._0_8_ +
                           (double)local_138._8_8_ * (double)local_138._8_8_;
                  uVar28 = -(ulonglong)(0.0 <= dVar49 + -9.99999993922529e-09);
                  dVar51 = (double)(~uVar28 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar49)) & uVar28);
                  uVar28 = -(ulonglong)(0.0 <= dVar56 + -9.99999993922529e-09);
                  dVar49 = (double)(~uVar28 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar56)) & uVar28);
                  uVar28 = -(ulonglong)(0.0 <= dVar35 + -9.99999993922529e-09);
                  dVar35 = (double)(~uVar28 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar35)) & uVar28);
                  auVar32._8_8_ = -(ulonglong)(0.0 <= dStack_3e0);
                  auVar32._0_8_ = -(ulonglong)(0.0 <= local_3e8);
                  auVar50 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar32);
                  dVar56 = (double)(~-(ulonglong)(0.0 <= (double)local_3d8._0_8_) &
                                    0xbff0000000000000 |
                                   (ulonglong)
                                   ((uint)(-(ulonglong)(0.0 <= (double)local_3d8._0_8_) >> 0x20) &
                                   0x3ff00000) << 0x20);
                  dVar47 = auVar50._0_8_;
                  local_178[0] = local_178[0] * dVar51 * dVar47;
                  local_178[1] = local_178[1] * dVar51 * dVar47;
                  local_168._0_8_ = dVar51 * (double)local_168._0_8_ * dVar47;
                  dVar51 = auVar50._8_8_;
                  local_158._8_8_ = (double)local_158._8_8_ * dVar49 * dVar51;
                  local_158._0_8_ = dVar51 * (double)local_158._0_8_ * dVar49;
                  local_148._0_8_ = dVar49 * (double)local_148._0_8_ * dVar51;
                  local_138._8_8_ = (double)local_138._8_8_ * dVar35 * dVar56;
                  local_138._0_8_ = dVar56 * (double)local_138._0_8_ * dVar35;
                  local_128._0_8_ = dVar35 * (double)local_128._0_8_ * dVar56;
                  FUN_14481fd10(&local_368,local_178);
                  dVar35 = local_358 * local_358 + local_368 * local_368;
                  dVar49 = dStack_350 * dStack_350 + dStack_360 * dStack_360;
                  auVar37._0_8_ = dVar35 + dVar49;
                  auVar37._8_8_ = dVar35 + dVar49;
                  auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
                  auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
                  auVar50 = sqrtpd(auVar37,auVar37);
                  auVar42 = divpd(auVar42,auVar50);
                  auVar43._0_8_ = auVar42._0_8_ * local_358;
                  auVar43._8_8_ = auVar42._8_8_ * dStack_350;
                  dVar51 = (double)((ulonglong)(local_368 * auVar42._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
                  dVar56 = (double)((ulonglong)(dStack_360 * auVar42._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
                  auVar46 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar33);
                  local_3f8 = local_118;
                  dStack_3f0 = dStack_110;
                  local_408 = local_108;
                  dStack_400 = 0.0;
                }
                dVar48 = dStack_3f0;
                dVar47 = local_3f8;
                dVar53 = local_408;
                local_418._8_4_ = SUB84(dVar56,0);
                local_418._0_8_ = dVar51;
                local_418._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
                dVar36 = local_330 * dVar31;
                dVar40 = dStack_328 * dVar34;
                dVar3 = local_320 * dVar30;
                dVar59 = auVar46._0_8_;
                dVar60 = auVar46._8_8_;
                dVar35 = dVar40 * dVar51 - dVar56 * dVar36;
                dVar44 = dVar3 * dVar56 - dVar59 * dVar40;
                dVar45 = dVar36 * dVar59 - dVar51 * dVar3;
                dVar44 = dVar44 + dVar44;
                dVar45 = dVar45 + dVar45;
                dVar35 = dVar35 + dVar35;
                dVar49 = local_318 * dVar31;
                dVar54 = dStack_310 * dVar34;
                local_3d8._8_4_ = SUB84(dVar41,0);
                local_3d8._0_8_ = dVar30;
                local_3d8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
                dVar30 = local_308[0] * dVar30;
                dVar52 = dVar54 * dVar51 - dVar56 * dVar49;
                dVar55 = dVar30 * (double)local_418._8_8_ - dVar59 * dVar54;
                dVar41 = dVar49 * dVar59 - dVar51 * dVar30;
                dVar55 = dVar55 + dVar55;
                dVar41 = dVar41 + dVar41;
                dVar52 = dVar52 + dVar52;
                uVar57 = SUB84(dVar51,0);
                uVar58 = (undefined4)((ulonglong)dVar51 >> 0x20);
                local_1f8 = (dVar35 * (double)local_418._8_8_ - dVar45 * dVar59) +
                            dVar60 * dVar44 + dVar36 + local_3f8;
                dStack_1f0 = (dVar59 * dVar44 - dVar51 * dVar35) + dVar60 * dVar45 + dVar40 +
                             dStack_3f0;
                local_1e8 = dVar35 * dVar60 + dVar3 + (dVar45 * dVar51 - dVar44 * dVar56) +
                            local_408;
                local_278 = (dVar52 * (double)local_418._8_8_ - dVar41 * dVar59) +
                            dVar60 * dVar55 + dVar49 + local_3f8;
                dStack_270 = (dVar59 * dVar55 - dVar51 * dVar52) + dVar60 * dVar41 + dVar54 +
                             dStack_3f0;
                local_268 = dVar52 * dVar60 + dVar30 + (dVar41 * dVar51 - dVar55 * dVar56) +
                            local_408;
                puVar17 = local_428;
                local_3e8 = dVar31;
                dStack_3e0 = dVar34;
                if (0 < *(int *)(lVar8 + 0x30)) {
                  lVar19 = param_3[1];
                  lVar20 = (longlong)(int)lVar19;
                  lVar27 = 0;
                  do {
                    plVar13 = *(longlong **)(lVar8 + 0x28);
                    iVar7 = *(int *)((longlong)plVar13 + lVar27 * 8 + 4);
                    if (iVar7 != 0) {
                      uVar11 = *(uint *)(plVar13 + lVar27);
                      plVar13 = (longlong *)(ulonglong)uVar11;
                      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
                        plVar13 = (longlong *)(ulonglong)(uVar11 >> 0x10);
                        plVar14 = (longlong *)
                                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (longlong)plVar13 * 8));
                        if (((plVar14 != (longlong *)0x0) &&
                            ((((int)plVar14[2] == iVar7 &&
                              ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) &&
                             (plVar14 = (longlong *)*plVar14, plVar14 != (longlong *)0x0)))) &&
                           (((*(byte *)((longlong)plVar14 + 0x9c) & 1) != 0 &&
                            (plVar13 = plVar14, iVar7 = (**(code **)(*plVar14 + 0x570))(),
                            iVar7 != 0)))) {
                          iVar7 = *(int *)(param_9 + 0x58);
                          if ((*(char *)(param_9 + 0x29) == '\0') &&
                             (*(undefined1 *)(param_9 + 0x29) = 1, 1 < iVar7)) {
                            piVar9 = *(int **)(param_9 + 0x50);
                            if (*(int **)(param_9 + 0x50) == (int *)0x0) {
                              piVar9 = local_420;
                            }
                            FUN_1449e0cb6(piVar9);
                            piVar9 = *(int **)(param_9 + 0x50);
                            piVar10 = piVar9;
                            if (piVar9 == (int *)0x0) {
                              piVar10 = local_420;
                            }
                            iVar7 = *(int *)(param_9 + 0x58);
                            if ((longlong)iVar7 != 1) {
                              lVar21 = 4;
                              piVar15 = piVar10;
                              iVar23 = *piVar10;
                              do {
                                iVar2 = *(int *)((longlong)piVar10 + lVar21);
                                if (iVar23 != iVar2) {
                                  piVar15[1] = iVar2;
                                  piVar15 = piVar15 + 1;
                                }
                                lVar21 = lVar21 + 4;
                                iVar23 = iVar2;
                              } while ((longlong)iVar7 * 4 != lVar21);
                              piVar9 = *(int **)(param_9 + 0x50);
                              piVar10 = piVar15;
                            }
                            if (piVar9 == (int *)0x0) {
                              piVar9 = local_420;
                            }
                            FUN_1479ab1f6(local_420,
                                          (int)((ulonglong)((longlong)piVar10 - (longlong)piVar9) >>
                                               2) + 1);
                            iVar7 = *(int *)(param_9 + 0x58);
                            dVar56 = local_418._8_8_;
                            uVar57 = local_418._0_4_;
                            uVar58 = local_418._4_4_;
                          }
                          piVar9 = *(int **)(param_9 + 0x50);
                          if (*(int **)(param_9 + 0x50) == (int *)0x0) {
                            piVar9 = local_420;
                          }
                          if (iVar7 != 0) {
                            lVar21 = 0;
                            do {
                              plVar13 = (longlong *)(ulonglong)*(uint *)((longlong)plVar14 + 0xc);
                              if (*(uint *)((longlong)piVar9 + lVar21) ==
                                  *(uint *)((longlong)plVar14 + 0xc)) goto LAB_143f9c761;
                              lVar21 = lVar21 + 4;
                            } while ((longlong)iVar7 * 4 != lVar21);
                          }
                          local_438 = param_9;
                          local_440 = &local_290;
                          local_448 = param_7;
                          local_450 = &local_2f8;
                          local_458 = &local_278;
                          local_430 = 0;
                          bVar6 = (**(code **)(*plVar14 + 0x9d8))
                                            (plVar14,param_3,&local_3a0,&local_1f8);
                          bVar16 = bVar16 | bVar6;
                          plVar13 = plVar14;
                        }
                      }
                    }
LAB_143f9c761:
                    puVar17 = local_428;
                    lVar27 = lVar27 + 1;
                  } while (lVar27 < *(int *)(lVar8 + 0x30));
                  if (((int)lVar19 < (int)param_3[1]) && (*(char *)(param_9 + 0x28) == '\0')) {
                    auVar4._8_8_ = dStack_3e0;
                    auVar4._0_8_ = local_3e8;
                    auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_3e0));
                    auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_3e8));
                    iVar7 = movmskpd((int)param_9,auVar38);
                    auVar39._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_3d8._8_8_));
                    auVar39._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_3d8._0_8_));
                    uVar11 = movmskpd((int)plVar13,auVar39);
                    if ((uVar11 & 0x3fffffff) == 0 && iVar7 == 0) {
                      pdVar12 = (double *)&DAT_14c846480;
                      pdVar18 = local_178;
                      for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
                        *pdVar18 = *pdVar12;
                        pdVar12 = pdVar12 + 1;
                        pdVar18 = pdVar18 + 1;
                      }
                    }
                    else {
                      auVar42 = divpd(_DAT_149934d80,auVar4);
                      auVar50 = divpd(ZEXT816(0x3ff0000000000000),local_3d8._0_16_);
                      local_138._0_8_ =
                           -(ulonglong)(9.99999993922529e-09 < ABS(local_3e8)) & auVar42._0_8_;
                      local_138._8_8_ =
                           -(ulonglong)(9.99999993922529e-09 < ABS(dStack_3e0)) & auVar42._8_8_;
                      dVar30 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_3d8._0_8_)) &
                                       auVar50._0_8_);
                      local_128._8_8_ = 0;
                      local_128._0_8_ = dVar30;
                      local_178[0] = -(double)CONCAT44(uVar58,uVar57);
                      local_178[1] = -dVar56;
                      local_168._0_8_ = dVar59 * -1.0;
                      local_168._8_8_ = dVar60 * 1.0;
                      dVar47 = dVar47 * (double)local_138._0_8_;
                      dVar48 = dVar48 * (double)local_138._8_8_;
                      dVar53 = dVar53 * dVar30;
                      dVar30 = dVar48 * local_178[0] - dVar47 * local_178[1];
                      dVar34 = dVar53 * local_178[1] - dVar48 * (double)local_168._0_8_;
                      dVar41 = dVar47 * (double)local_168._0_8_ - local_178[0] * dVar53;
                      dVar34 = dVar34 + dVar34;
                      dVar41 = dVar41 + dVar41;
                      dVar30 = dVar30 + dVar30;
                      dVar31 = 0.0 - (dVar30 * (double)CONCAT44(uVar58,uVar57) +
                                      (double)local_168._0_8_ * dVar34 +
                                     (double)local_168._8_8_ * dVar41 + dVar48);
                      local_158._8_4_ = SUB84(dVar31,0);
                      local_158._0_8_ =
                           0.0 - ((dVar30 * local_178[1] - dVar41 * (double)local_168._0_8_) +
                                 (double)local_168._8_8_ * dVar34 + dVar47);
                      local_158._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
                      local_148._8_8_ = 0;
                      local_148._0_8_ =
                           0.0 - ((double)local_168._8_8_ * dVar30 + dVar53 +
                                 (dVar41 * local_178[0] - dVar34 * local_178[1]));
                    }
                    lVar19 = lVar20 << 8;
                    do {
                      FUN_143f96646(local_178,*param_3 + lVar19);
                      lVar20 = lVar20 + 1;
                      lVar19 = lVar19 + 0x100;
                    } while (lVar20 < (int)param_3[1]);
                  }
                }
              }
            }
          }
LAB_143f9ca3d:
          puVar25 = puVar25 + 0x2c;
        } while (puVar25 != puVar17);
        if ((int)lVar24 < (int)param_3[1]) {
          lVar24 = lVar26 << 8;
          do {
            lVar19 = *param_3;
            *(double *)(lVar19 + 0x80 + lVar24) = local_320;
            pdVar12 = (double *)(lVar19 + 0x70 + lVar24);
            *pdVar12 = local_330;
            pdVar12[1] = dStack_328;
            lVar19 = *param_3;
            *(double *)(lVar19 + 0x98 + lVar24) = local_308[0];
            pdVar12 = (double *)(lVar19 + 0x88 + lVar24);
            *pdVar12 = local_318;
            pdVar12[1] = dStack_310;
            lVar26 = lVar26 + 1;
            lVar24 = lVar24 + 0x100;
          } while (lVar26 < (int)param_3[1]);
          if (local_27f == '\0') {
            FUN_1479b52d2(param_3);
          }
          else {
            FUN_148af2cf5(*param_3);
          }
        }
        goto LAB_143f9b77c;
      }
    }
  }
  bVar16 = 0;
LAB_143f9b77c:
  if ((local_f0 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar16 & 1;
}



// FUNCTION 143f9cb58 FUN_143f9cb58 body=4721 status=ok
// SIG undefined FUN_143f9cb58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143f9cb58(undefined8 param_1,longlong *param_2,undefined8 param_3,double *param_4,
                       longlong param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  double *pdVar12;
  longlong lVar13;
  longlong *plVar14;
  int *piVar15;
  uint *puVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint *puVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar33;
  double dVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auStack_358 [32];
  longlong *local_338;
  longlong local_330;
  undefined1 local_328;
  undefined1 local_318 [24];
  int *local_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double *local_2c8;
  longlong *local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [16];
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
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
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
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  lVar13 = (longlong)*(int *)(*param_2 + 0x10);
  if (lVar13 == 0) {
    uVar19 = 0;
  }
  else {
    puVar20 = *(uint **)(*param_2 + 8);
    puVar16 = puVar20 + lVar13 * 0x2c;
    local_2c0 = param_2 + 9;
    local_300 = (int *)(param_5 + 0x30);
    uVar45 = 0;
    uVar46 = 0x3ff00000;
    uVar47 = 0;
    uVar48 = 0x3ff00000;
    uVar19 = 0;
    local_2c8 = param_4;
    local_2b8 = param_1;
    local_2b0 = param_3;
    do {
      if (((((puVar20[1] != 0) && (uVar9 = *puVar20, -1 < (int)uVar9)) &&
           ((int)uVar9 < DAT_14c9647dc)) &&
          ((plVar14 = (longlong *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
           plVar14 != (longlong *)0x0 && (*(uint *)(plVar14 + 2) == puVar20[1])))) &&
         (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 && (lVar13 = *plVar14, lVar13 != 0)))) {
        lVar11 = *(longlong *)(param_5 + 0x70);
        if (*(longlong *)(param_5 + 0x70) == 0) {
          lVar11 = param_5 + 0x60;
        }
        if ((longlong)*(int *)(param_5 + 0x78) != 0) {
          lVar18 = 0;
          do {
            if (*(int *)(lVar11 + lVar18) == *(int *)(lVar13 + 0xc)) goto LAB_143f9dd28;
            lVar18 = lVar18 + 4;
          } while ((longlong)*(int *)(param_5 + 0x78) * 4 != lVar18);
        }
        lVar11 = *(longlong *)(puVar20 + 2);
        if ((((*(int *)(lVar11 + 0x30) != 0) &&
             (*(double *)(puVar20 + 4) < (double)param_2[5] ||
              *(double *)(puVar20 + 4) == (double)param_2[5])) &&
            (((double)param_2[2] < *(double *)(puVar20 + 10) ||
              (double)param_2[2] == *(double *)(puVar20 + 10) &&
             (((*(double *)(puVar20 + 6) < (double)param_2[6] ||
                *(double *)(puVar20 + 6) == (double)param_2[6] &&
               ((double)param_2[3] < *(double *)(puVar20 + 0xc) ||
                (double)param_2[3] == *(double *)(puVar20 + 0xc))) &&
              (*(double *)(puVar20 + 8) < (double)param_2[7] ||
               *(double *)(puVar20 + 8) == (double)param_2[7])))))) &&
           ((double)param_2[4] < *(double *)(puVar20 + 0xe) ||
            (double)param_2[4] == *(double *)(puVar20 + 0xe))) {
          pdVar12 = (double *)(*(longlong *)(lVar13 + 0x1c8) + 0x240);
          if (*(longlong *)(lVar13 + 0x1c8) == 0) {
            pdVar12 = (double *)&DAT_14c846480;
          }
          dVar23 = *pdVar12;
          dVar34 = pdVar12[1];
          dVar51 = pdVar12[2];
          dVar33 = pdVar12[3];
          local_2d8._0_8_ = pdVar12[4];
          local_2d8._8_8_ = pdVar12[5];
          local_2f8 = *(undefined1 (*) [16])(pdVar12 + 6);
          local_2e8 = *(undefined1 (*) [16])(pdVar12 + 8);
          auVar40 = *(undefined1 (*) [16])(pdVar12 + 10);
          dVar30 = auVar40._0_8_;
          dVar50 = auVar40._8_8_;
          auVar25 = *(undefined1 (*) [16])(puVar20 + 0x24);
          dVar35 = auVar25._0_8_;
          dVar37 = auVar25._8_8_;
          auVar31 = *(undefined1 (*) [16])(puVar20 + 0x28);
          dVar44 = auVar31._0_8_;
          auVar25 = minpd(auVar25,local_2e8);
          auVar39 = minpd(auVar31,auVar40);
          auVar40._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
          auVar40._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
          iVar6 = movmskpd(0x4c846480,auVar40);
          auVar25._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
          auVar25._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
          uVar9 = movmskpd((int)pdVar12,auVar25);
          if ((uVar9 & 0x3fffffff) == 0 && iVar6 == 0) {
            dVar38 = *(double *)(puVar20 + 0x14);
            dVar22 = *(double *)(puVar20 + 0x16);
            dVar49 = *(double *)(puVar20 + 0x18);
            dVar3 = *(double *)(puVar20 + 0x1a);
            dVar42 = dVar22 * dVar51 * -1.0 +
                     dVar49 * dVar34 + dVar23 * dVar3 * 1.0 + dVar33 * dVar38;
            dVar43 = dVar38 * dVar51 * 1.0 +
                     dVar3 * dVar34 + dVar23 * dVar49 * -1.0 + dVar33 * dVar22;
            auVar39._0_8_ =
                 dVar3 * dVar51 * 1.0 +
                 ((dVar23 * dVar22 * 1.0 + dVar33 * dVar49) - dVar34 * dVar38);
            auVar39._8_8_ =
                 dVar49 * dVar51 * -1.0 +
                 ((dVar23 * dVar38 * -1.0 + dVar33 * dVar3) - dVar34 * dVar22);
            dVar2 = *(double *)(puVar20 + 0x1c) * (double)local_2e8._0_8_;
            dVar38 = *(double *)(puVar20 + 0x1e) * (double)local_2e8._8_8_;
            dVar52 = *(double *)(puVar20 + 0x20) * dVar30;
            dVar53 = *(double *)(puVar20 + 0x22) * dVar50;
            dVar22 = dVar38 * dVar23 - dVar34 * dVar2;
            dVar49 = dVar52 * dVar34 - dVar51 * dVar38;
            dVar3 = dVar2 * dVar51 - dVar23 * dVar52;
            dVar24 = dVar53 * dVar33 - dVar33 * dVar53;
            dVar49 = dVar49 + dVar49;
            dVar3 = dVar3 + dVar3;
            dVar22 = dVar22 + dVar22;
            dVar24 = dVar24 + dVar24;
            uVar45 = 0;
            uVar46 = 0x3ff00000;
            uVar47 = 0;
            uVar48 = 0x3ff00000;
            dVar38 = (double)local_2d8._8_8_ +
                     (dVar49 * dVar51 - dVar22 * dVar23) + dVar33 * dVar3 + dVar38;
            local_2d8._8_4_ = SUB84(dVar38,0);
            local_2d8._0_8_ =
                 (double)local_2d8._0_8_ +
                 (dVar22 * dVar34 - dVar51 * dVar3) + dVar33 * dVar49 + dVar2;
            local_2d8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
            dVar23 = (double)local_2f8._0_8_ +
                     (dVar3 * dVar23 - dVar34 * dVar49) + dVar33 * dVar22 + dVar52;
            dVar34 = pdVar12[7] + (dVar24 * dVar33 - dVar24 * dVar33) + dVar33 * dVar24 + dVar53;
            dVar35 = dVar35 * (double)local_2e8._0_8_;
            dVar37 = dVar37 * (double)local_2e8._8_8_;
            local_318._8_8_ = auVar31._8_8_ * dVar50;
            local_318._0_8_ = dVar44 * dVar30;
            uVar10 = 0;
          }
          else {
            dVar38 = dVar34 + dVar34;
            dVar49 = dVar51 + dVar51;
            dVar22 = dVar23 * (dVar23 + dVar23);
            local_1f8 = ((double)CONCAT44(uVar46,uVar45) - (dVar51 * dVar49 + dVar34 * dVar38)) *
                        (double)local_2e8._0_8_;
            dStack_1d0 = ((double)CONCAT44(uVar48,uVar47) - (dVar51 * dVar49 + dVar22)) *
                         (double)local_2e8._8_8_;
            dVar51 = (dVar23 + dVar23) * dVar33;
            local_1d8 = (dVar38 * dVar23 - dVar49 * dVar33) * (double)local_2e8._8_8_;
            dStack_1b0 = (dVar49 * dVar34 - dVar51) * dVar30;
            local_1b8 = (dVar38 * dVar33 + dVar23 * dVar49) * dVar30;
            local_1a8 = (1.0 - (dVar22 + dVar34 * dVar38)) * dVar30;
            dVar50 = dVar50 * auVar31._8_8_;
            local_318._8_4_ = SUB84(dVar50,0);
            local_318._0_8_ = dVar30 * dVar44;
            local_318._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
            dStack_1f0 = (dVar38 * dVar23 + dVar49 * dVar33) * (double)local_2e8._0_8_;
            local_1c8 = (dVar49 * dVar34 + dVar51) * (double)local_2e8._8_8_;
            local_1e8 = (dVar23 * dVar49 - dVar38 * dVar33) * (double)local_2e8._0_8_;
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_188 = (double)local_2f8._0_8_;
            uStack_180 = 0x3ff0000000000000;
            dVar23 = *(double *)(puVar20 + 0x14);
            dVar34 = *(double *)(puVar20 + 0x16);
            dVar51 = *(double *)(puVar20 + 0x18);
            dVar33 = dVar34 + dVar34;
            dVar38 = dVar51 + dVar51;
            dVar50 = dVar23 * (dVar23 + dVar23);
            local_228 = (1.0 - (dVar50 + dVar34 * dVar33)) * dVar44;
            dVar30 = *(double *)(puVar20 + 0x1a);
            dVar22 = dVar38 * dVar30;
            dVar49 = (dVar23 + dVar23) * *(double *)(puVar20 + 0x1a);
            dVar30 = dVar33 * dVar30;
            local_238 = (dVar30 + *(double *)(puVar20 + 0x14) * dVar38) * dVar44;
            local_258 = (dVar33 * dVar23 - dVar22) * dVar37;
            dStack_230 = (dVar38 * dVar34 - dVar49) * dVar44;
            local_2f8._8_4_ = SUB84((double)local_2e8._8_8_ * dVar37,0);
            local_2f8._0_8_ = (double)local_2e8._0_8_ * dVar35;
            local_2f8._12_4_ = (int)((ulonglong)((double)local_2e8._8_8_ * dVar37) >> 0x20);
            local_278 = ((double)CONCAT44(uVar46,uVar45) - (dVar51 * dVar38 + dVar34 * dVar33)) *
                        dVar35;
            dStack_250 = ((double)CONCAT44(uVar48,uVar47) - (dVar51 * dVar38 + dVar50)) * dVar37;
            dStack_270 = (dVar33 * dVar23 + dVar22) * dVar35;
            local_248 = (dVar38 * dVar34 + dVar49) * dVar37;
            local_268 = (*(double *)(puVar20 + 0x14) * dVar38 - dVar30) * dVar35;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = *(undefined8 *)(puVar20 + 0x1c);
            uStack_210 = *(undefined8 *)(puVar20 + 0x1e);
            local_208 = *(double *)(puVar20 + 0x20);
            uStack_200 = 0x3ff0000000000000;
            local_198 = (double)local_2d8._0_8_;
            dStack_190 = (double)local_2d8._8_8_;
            FUN_1447fea8d(&local_178,&local_278,&local_1f8);
            auVar40 = _DAT_149934d80;
            local_2d8._0_8_ = local_168;
            dVar44 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
            dVar35 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
            dVar30 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
            uVar21 = -(ulonglong)(0.0 <= dVar44 + -9.99999993922529e-09);
            dVar44 = (double)(~uVar21 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar44)) & uVar21);
            uVar21 = -(ulonglong)(0.0 <= dVar35 + -9.99999993922529e-09);
            dVar50 = (double)(~uVar21 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar35)) & uVar21);
            uVar21 = -(ulonglong)(0.0 <= dVar30 + -9.99999993922529e-09);
            dVar30 = (double)(~uVar21 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar30)) & uVar21);
            uVar45 = (undefined4)DAT_149934d80;
            uVar46 = DAT_149934d80._4_4_;
            uVar47 = DAT_149934d80._8_4_;
            uVar48 = DAT_149934d80._12_4_;
            dVar35 = (double)local_2f8._0_8_;
            dVar37 = (double)local_2f8._8_8_;
            auVar31._8_8_ = -(ulonglong)(0.0 <= (double)local_2f8._8_8_);
            auVar31._0_8_ = -(ulonglong)(0.0 <= (double)local_2f8._0_8_);
            auVar25 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar31);
            dVar23 = (double)(~-(ulonglong)(0.0 <= (double)local_318._0_8_) & 0xbff0000000000000 |
                             (ulonglong)
                             ((uint)(-(ulonglong)(0.0 <= (double)local_318._0_8_) >> 0x20) &
                             0x3ff00000) << 0x20);
            dVar34 = auVar25._0_8_;
            local_178 = local_178 * dVar44 * dVar34;
            local_170 = local_170 * dVar44 * dVar34;
            local_168 = dVar44 * local_168 * dVar34;
            dVar44 = auVar25._8_8_;
            local_148 = dVar50 * local_148 * dVar44;
            local_150 = local_150 * dVar50 * dVar44;
            local_158 = dVar44 * local_158 * dVar50;
            local_128 = dVar30 * local_128 * dVar23;
            local_130 = local_130 * dVar30 * dVar23;
            local_138 = dVar23 * local_138 * dVar30;
            pdVar12 = &local_298;
            iVar6 = FUN_14481fd10(pdVar12,&local_178);
            uVar10 = SUB84(pdVar12,0);
            dVar30 = local_288 * local_288 + local_298 * local_298;
            dVar44 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar36._0_8_ = dVar30 + dVar44;
            auVar36._8_8_ = dVar30 + dVar44;
            auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
            auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
            auVar25 = sqrtpd(auVar36,auVar36);
            auVar40 = divpd(auVar40,auVar25);
            auVar41._0_8_ = auVar40._0_8_ * local_288;
            auVar41._8_8_ = auVar40._8_8_ * dStack_280;
            dVar42 = (double)((ulonglong)(local_298 * auVar40._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
            dVar43 = (double)((ulonglong)(dStack_290 * auVar40._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
            auVar39 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar26);
            local_2d8._8_8_ = uStack_110;
            local_2d8._0_8_ = local_118;
            dVar34 = 0.0;
            dVar23 = local_108;
          }
          auVar40 = *(undefined1 (*) [16])(local_2c8 + 8);
          dVar30 = auVar40._0_8_;
          dVar44 = auVar40._8_8_;
          auVar25 = *(undefined1 (*) [16])(local_2c8 + 10);
          auVar27._8_8_ = dVar37;
          auVar27._0_8_ = dVar35;
          auVar40 = minpd(auVar27,auVar40);
          auVar31 = minpd(local_318._0_16_,auVar25);
          auVar28._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
          auVar28._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
          iVar6 = movmskpd(iVar6,auVar28);
          auVar32._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
          auVar32._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
          uVar9 = movmskpd(uVar10,auVar32);
          if ((uVar9 & 0x3fffffff) != 0 || iVar6 != 0) {
            dVar49 = *local_2c8;
            dVar3 = local_2c8[1];
            dVar2 = local_2c8[2];
            dVar51 = dVar3 + dVar3;
            dVar33 = dVar2 + dVar2;
            dVar24 = dVar49 * (dVar49 + dVar49);
            dVar50 = local_2c8[3];
            dVar38 = dVar33 * dVar50;
            dVar22 = (dVar49 + dVar49) * local_2c8[3];
            dVar50 = dVar51 * dVar50;
            local_2e8._0_8_ = auVar25._0_8_;
            local_1d8 = (dVar51 * dVar49 - dVar38) * dVar44;
            dStack_1b0 = (dVar33 * dVar3 - dVar22) * (double)local_2e8._0_8_;
            local_2a8._8_4_ = SUB84(dVar37 * dVar44,0);
            local_2a8._0_8_ = dVar35 * dVar30;
            local_2a8._12_4_ = (int)((ulonglong)(dVar37 * dVar44) >> 0x20);
            local_1f8 = (1.0 - (dVar2 * dVar33 + dVar3 * dVar51)) * dVar30;
            dStack_1d0 = (1.0 - (dVar2 * dVar33 + dVar24)) * dVar44;
            dStack_1f0 = (dVar51 * dVar49 + dVar38) * dVar30;
            local_1c8 = (dVar33 * dVar3 + dVar22) * dVar44;
            local_1b8 = (dVar50 + *local_2c8 * dVar33) * (double)local_2e8._0_8_;
            local_1e8 = (*local_2c8 * dVar33 - dVar50) * dVar30;
            local_1a8 = (1.0 - (dVar24 + dVar3 * dVar51)) * (double)local_2e8._0_8_;
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = local_2c8[4];
            dStack_190 = local_2c8[5];
            local_188 = local_2c8[6];
            uStack_180 = 0x3ff0000000000000;
            dVar30 = dVar43 + dVar43;
            dVar50 = auVar39._0_8_;
            dVar51 = auVar39._8_8_;
            dVar33 = dVar50 + dVar50;
            dVar44 = dVar42 * (dVar42 + dVar42);
            dVar38 = (dVar42 + dVar42) * dVar51;
            uVar4 = local_318._0_8_;
            local_258 = (dVar30 * dVar42 - dVar33 * dVar51) * dVar37;
            dStack_230 = (dVar33 * dVar43 - dVar38) * (double)local_318._0_8_;
            local_278 = (1.0 - (dVar50 * dVar33 + dVar43 * dVar30)) * dVar35;
            dStack_250 = (1.0 - (dVar50 * dVar33 + dVar44)) * dVar37;
            dStack_270 = (dVar30 * dVar42 + dVar33 * dVar51) * dVar35;
            local_248 = (dVar33 * dVar43 + dVar38) * dVar37;
            local_238 = (dVar42 * dVar33 + dVar30 * dVar51) * (double)local_318._0_8_;
            local_268 = (dVar42 * dVar33 - dVar30 * dVar51) * dVar35;
            uStack_260 = 0;
            uStack_240 = 0;
            local_228 = (1.0 - (dVar44 + dVar43 * dVar30)) * (double)local_318._0_8_;
            uStack_220 = 0;
            local_218 = local_2d8._0_8_;
            uStack_210 = local_2d8._8_8_;
            uStack_200 = 0x3ff0000000000000;
            local_2e8 = auVar25;
            local_208 = dVar23;
            local_2f8._0_8_ = dVar23;
            local_2f8._8_8_ = dVar34;
            FUN_1447fea8d(&local_178,&local_278,&local_1f8);
            dVar30 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
            local_2f8._0_8_ = local_158;
            dVar50 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
            dVar35 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
            uVar21 = -(ulonglong)(0.0 <= dVar30 + -9.99999993922529e-09);
            dVar44 = (double)(~uVar21 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar30)) & uVar21);
            uVar21 = -(ulonglong)(0.0 <= dVar50 + -9.99999993922529e-09);
            dVar30 = (double)(~uVar21 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar50)) & uVar21);
            uVar21 = -(ulonglong)(0.0 <= dVar35 + -9.99999993922529e-09);
            dVar35 = (double)(~uVar21 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar35)) & uVar21);
            auVar29._8_8_ = -(ulonglong)(0.0 <= (double)local_2a8._8_8_);
            auVar29._0_8_ = -(ulonglong)(0.0 <= (double)local_2a8._0_8_);
            uVar45 = (undefined4)DAT_149934d80;
            uVar46 = DAT_149934d80._4_4_;
            uVar47 = DAT_149934d80._8_4_;
            uVar48 = DAT_149934d80._12_4_;
            auVar40 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar29);
            uVar21 = -(ulonglong)(0.0 <= (double)uVar4 * (double)local_2e8._0_8_);
            dVar50 = (double)(~uVar21 & 0xbff0000000000000 |
                             (ulonglong)((uint)(uVar21 >> 0x20) & 0x3ff00000) << 0x20);
            dVar37 = auVar40._0_8_;
            local_178 = local_178 * dVar44 * dVar37;
            local_170 = local_170 * dVar44 * dVar37;
            local_168 = dVar44 * local_168 * dVar37;
            dVar44 = auVar40._8_8_;
            local_148 = dVar30 * local_148 * dVar44;
            local_150 = local_150 * dVar30 * dVar44;
            local_158 = dVar44 * local_158 * dVar30;
            local_128 = dVar35 * local_128 * dVar50;
            local_130 = local_130 * dVar35 * dVar50;
            local_138 = dVar50 * local_138 * dVar35;
            FUN_14481fd10(&local_298,&local_178);
          }
          if (0 < *(int *)(lVar11 + 0x30)) {
            lVar13 = 0;
            do {
              iVar6 = *(int *)(*(longlong *)(lVar11 + 0x28) + 4 + lVar13 * 8);
              if ((((iVar6 != 0) &&
                   (uVar9 = *(uint *)(*(longlong *)(lVar11 + 0x28) + lVar13 * 8), -1 < (int)uVar9))
                  && (((int)uVar9 < DAT_14c9647dc &&
                      ((plVar14 = (longlong *)
                                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                       plVar14 != (longlong *)0x0 && ((int)plVar14[2] == iVar6)))))) &&
                 (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 &&
                  ((plVar14 = (longlong *)*plVar14, plVar14 != (longlong *)0x0 &&
                   ((*(byte *)((longlong)plVar14 + 0x9c) & 1) != 0)))))) {
                local_318._0_4_ = (int)uVar19;
                iVar6 = (**(code **)(*plVar14 + 0x570))(plVar14);
                if (iVar6 == 0) {
                  uVar19 = (ulonglong)(uint)local_318._0_4_;
                }
                else {
                  iVar6 = *(int *)(param_5 + 0x58);
                  uVar19 = (ulonglong)(uint)local_318._0_4_;
                  if ((*(char *)(param_5 + 0x29) == '\0') &&
                     (*(undefined1 *)(param_5 + 0x29) = 1, 1 < iVar6)) {
                    piVar7 = *(int **)(param_5 + 0x50);
                    if (*(int **)(param_5 + 0x50) == (int *)0x0) {
                      piVar7 = local_300;
                    }
                    FUN_1449e0cb6(piVar7);
                    piVar7 = *(int **)(param_5 + 0x50);
                    piVar8 = piVar7;
                    if (piVar7 == (int *)0x0) {
                      piVar8 = local_300;
                    }
                    iVar6 = *(int *)(param_5 + 0x58);
                    if ((longlong)iVar6 != 1) {
                      lVar18 = 4;
                      piVar15 = piVar8;
                      iVar17 = *piVar8;
                      do {
                        iVar1 = *(int *)((longlong)piVar8 + lVar18);
                        if (iVar17 != iVar1) {
                          piVar15[1] = iVar1;
                          piVar15 = piVar15 + 1;
                        }
                        lVar18 = lVar18 + 4;
                        iVar17 = iVar1;
                      } while ((longlong)iVar6 * 4 != lVar18);
                      piVar7 = *(int **)(param_5 + 0x50);
                      piVar8 = piVar15;
                    }
                    if (piVar7 == (int *)0x0) {
                      piVar7 = local_300;
                    }
                    FUN_1479ab1f6(local_300,
                                  (int)((ulonglong)((longlong)piVar8 - (longlong)piVar7) >> 2) + 1);
                    iVar6 = *(int *)(param_5 + 0x58);
                    uVar19 = (ulonglong)(uint)local_318._0_4_;
                  }
                  piVar7 = *(int **)(param_5 + 0x50);
                  if (*(int **)(param_5 + 0x50) == (int *)0x0) {
                    piVar7 = local_300;
                  }
                  if (iVar6 != 0) {
                    lVar18 = 0;
                    do {
                      if (*(int *)((longlong)piVar7 + lVar18) == *(int *)((longlong)plVar14 + 0xc))
                      goto LAB_143f9dc62;
                      lVar18 = lVar18 + 4;
                    } while ((longlong)iVar6 * 4 != lVar18);
                  }
                  local_328 = (undefined1)param_2[0xb];
                  local_330 = param_5;
                  local_338 = local_2c0;
                  cVar5 = (**(code **)(*plVar14 + 0x9e0))(plVar14,local_2b8,local_2b0);
                  uVar19 = (ulonglong)(uint)local_318._0_4_;
                  if ((cVar5 != '\0') &&
                     (uVar19 = CONCAT71((uint7)local_318._1_3_,1), (char)param_2[0xb] != '\x01'))
                  break;
                }
              }
LAB_143f9dc62:
              lVar13 = lVar13 + 1;
            } while (lVar13 < *(int *)(lVar11 + 0x30));
          }
        }
      }
LAB_143f9dd28:
      puVar20 = puVar20 + 0x2c;
    } while (puVar20 != puVar16);
  }
  if ((local_f0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19 & 0xffffffffffffff01;
}



// FUNCTION 143f9ddca FUN_143f9ddca body=349 status=ok
// SIG undefined FUN_143f9ddca(void)

void FUN_143f9ddca(void)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0x800000014b52a2d0;
  local_14 = 0x12;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146590af2(&local_28);
  local_38 = 0;
  FUN_14153156c(&DAT_14cb99ce8,L"gbx.LagComp.ProjectileScalingEnabled",&DAT_14c763d68,
                L"Enables whether projectile radii should be increased proportionally to the player\'s latency"
               );
  atexit(FUN_143f95c87);
  local_38 = 0;
  FUN_1415c789c(&DAT_14cb99d00,L"gbx.LagComp.ProjectileScalingMinPing",&DAT_14cb99cf8,
                L"Sets the minimum ping in seconds for projectile radius scaling");
  atexit(FUN_143f95ccc);
  local_38 = 0;
  FUN_1415c789c(&DAT_14cb99d10,L"gbx.LagComp.ProjectileScalingMaxPing",&DAT_14c763d6c,
                L"Sets the maximum ping in seconds for projectile radius scaling");
  atexit(FUN_143f95d11);
  local_38 = 0;
  FUN_1415c789c(&DAT_14cb99d20,L"gbx.LagComp.ProjectileScalingMinRadius",&DAT_14c763d70,
                L"Sets the length of the projectile\'s radius at the minimum ping threshold for latency based projectile size scaling"
               );
  atexit(FUN_143f95d56);
  local_38 = 0;
  FUN_1415c789c(&DAT_14cb99d30,L"gbx.LagComp.ProjectileScalingMaxRadius",&DAT_14c763d74,
                L"Sets the length of the projectile\'s radius at the maximum ping threshold for latency based projectile size scaling"
               );
  atexit(FUN_143f95d9b);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f9df28 FUN_143f9df28 body=284 status=ok
// SIG undefined FUN_143f9df28(void)

undefined8 * FUN_143f9df28(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((((*(longlong *)(param_1 + 0x58) != 0) && (*(int *)(param_1 + 0xd8) != 0)) &&
      (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0xd8) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0xd0);
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2,*(undefined8 *)(param_1 + 0x58));
    return param_2;
  }
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
  *param_2 = DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = DAT_14c844848;
  return param_2;
}



// FUNCTION 143f9e1d0 FUN_143f9e1d0 body=48 status=ok
// SIG undefined FUN_143f9e1d0(void)

longlong FUN_143f9e1d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_140cdcea6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f9e200 FUN_143f9e200 body=48 status=ok
// SIG undefined FUN_143f9e200(void)

longlong FUN_143f9e200(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_145d45af6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f9e2d0 FUN_143f9e2d0 body=48 status=ok
// SIG undefined FUN_143f9e2d0(void)

longlong FUN_143f9e2d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_145c9e9d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f9e300 FUN_143f9e300 body=48 status=ok
// SIG undefined FUN_143f9e300(void)

longlong FUN_143f9e300(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_145bfd4ae(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f9e330 FUN_143f9e330 body=48 status=ok
// SIG undefined FUN_143f9e330(void)

longlong FUN_143f9e330(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_145b21608(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f9e36c FUN_143f9e36c body=48 status=ok
// SIG undefined FUN_143f9e36c(void)

longlong FUN_143f9e36c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_145bfd4ae(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f9e3c6 FUN_143f9e3c6 body=36 status=ok
// SIG undefined FUN_143f9e3c6(void)

undefined8 FUN_143f9e3c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143f9e438 FUN_143f9e438 body=36 status=ok
// SIG undefined FUN_143f9e438(void)

undefined8 FUN_143f9e438(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143f9e45c FUN_143f9e45c body=116 status=ok
// SIG undefined FUN_143f9e45c(void)

undefined8 FUN_143f9e45c(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  FUN_1402347c4(0,param_2,0,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f9e4d2 FUN_143f9e4d2 body=160 status=ok
// SIG undefined FUN_143f9e4d2(void)

undefined8 FUN_143f9e4d2(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined2 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0x100;
  local_2c = 0x100000000;
  local_24 = 0x144;
  local_20 = &DAT_100000001;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1402347c4();
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f9e574 FUN_143f9e574 body=160 status=ok
// SIG undefined FUN_143f9e574(void)

undefined8 FUN_143f9e574(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined2 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0x100;
  local_2c = 0x100000000;
  local_24 = 0x144;
  local_20 = &DAT_200000002;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1402347c4();
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f9e616 FUN_143f9e616 body=154 status=ok
// SIG undefined FUN_143f9e616(void)

undefined8 FUN_143f9e616(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined2 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0x100;
  local_2c = 0x100000000;
  local_24 = 0x144;
  local_20 = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1402347c4();
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f9e6b2 FUN_143f9e6b2 body=297 status=ok
// SIG undefined FUN_143f9e6b2(void)

undefined8 FUN_143f9e6b2(undefined8 param_1,undefined8 param_2,double param_3)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 *local_60;
  ulonglong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar3 = (double)FUN_14047fbb4(param_3 * 100.0);
  FUN_14023409e(&local_80,&DAT_14cb9a208,1);
  local_60 = local_40;
  local_40[0] = 0;
  local_30 = (longlong *)0x0;
  local_28 = 0;
  local_38 = (longlong)(int)dVar3;
  local_58 = &local_20;
  FUN_14010d304(&local_50);
  local_70 = local_80;
  local_68 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_1,&local_70,&local_50);
  FUN_14007f2db(local_50,local_48);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f9e7dc FUN_143f9e7dc body=424 status=ok
// SIG undefined FUN_143f9e7dc(void)

undefined8 FUN_143f9e7dc(undefined8 param_1,undefined8 param_2,double param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong *local_90 [2];
  undefined8 local_80;
  longlong *local_78;
  undefined4 *local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_50 [4];
  longlong *local_40 [2];
  ulonglong local_30 [3];
  
  local_30[0] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_148af4be0();
  dVar4 = (double)FUN_14047fbb4(param_3 * 1000.0);
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  FUN_1402347c4(dVar4 / 10.0,SUB84(dVar4 / 10.0,0),&DAT_14cb9a228);
  FUN_14023409e(&local_b8,&DAT_14cb9a208,1);
  local_50[0] = 4;
  FUN_14023423e(local_40,local_90);
  local_70 = local_50;
  local_68 = local_30;
  FUN_14010d304(&local_60);
  local_80 = local_b8;
  local_78 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_1,&local_80,&local_60);
  FUN_14007f2db(local_60,local_58);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
      }
    }
  }
  if (local_90[0] != (longlong *)0x0) {
    (**(code **)(*local_90[0] + 0x10))();
  }
  plVar1 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30[0] ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f9e986 FUN_143f9e986 body=297 status=ok
// SIG undefined FUN_143f9e986(void)

undefined8 FUN_143f9e986(undefined8 param_1,double param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 *local_60;
  ulonglong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar3 = (double)FUN_14047fbb4(param_2 * 100.0);
  FUN_14023409e(&local_80,&DAT_14cb9a208,1);
  local_60 = local_40;
  local_40[0] = 0;
  local_30 = (longlong *)0x0;
  local_28 = 0;
  local_38 = (longlong)(int)dVar3;
  local_58 = &local_20;
  FUN_14010d304(&local_50);
  local_70 = local_80;
  local_68 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_1,&local_70,&local_50);
  FUN_14007f2db(local_50,local_48);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f9eab0 FUN_143f9eab0 body=289 status=ok
// SIG undefined FUN_143f9eab0(void)

undefined8 FUN_143f9eab0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 *local_60;
  ulonglong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar3 = (double)FUN_14047fbb4(param_2);
  FUN_14023409e(&local_80,&DAT_14cb9a208,1);
  local_60 = local_40;
  local_40[0] = 0;
  local_30 = (longlong *)0x0;
  local_28 = 0;
  local_38 = (longlong)(int)dVar3;
  local_58 = &local_20;
  FUN_14010d304(&local_50);
  local_70 = local_80;
  local_68 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_1,&local_70,&local_50);
  FUN_14007f2db(local_50,local_48);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f9ebd2 FUN_143f9ebd2 body=366 status=ok
// SIG undefined FUN_143f9ebd2(void)

undefined8 FUN_143f9ebd2(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *plStack_90;
  longlong *local_80 [2];
  undefined8 local_70;
  longlong *local_68;
  undefined4 *local_60;
  ulonglong *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_40 [4];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  FUN_1402347c4(local_80,param_2,0);
  FUN_14023409e(&local_a8,&DAT_14cb9a218,1);
  local_40[0] = 4;
  FUN_14023423e(local_30,local_80);
  local_60 = local_40;
  local_58 = &local_20;
  FUN_14010d304(&local_50);
  local_70 = local_a8;
  local_68 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_1,&local_70,&local_50);
  FUN_14007f2db(local_50,local_48);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if (local_80[0] != (longlong *)0x0) {
    (**(code **)(*local_80[0] + 0x10))();
  }
  plVar1 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_90 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f9ed42 FUN_143f9ed42 body=36 status=ok
// SIG undefined FUN_143f9ed42(void)

undefined8 FUN_143f9ed42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143f9ed66 FUN_143f9ed66 body=36 status=ok
// SIG undefined FUN_143f9ed66(void)

undefined8 FUN_143f9ed66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143f9ee2a FUN_143f9ee2a body=36 status=ok
// SIG undefined FUN_143f9ee2a(void)

undefined8 FUN_143f9ee2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143f9eeee FUN_143f9eeee body=1864 status=ok
// SIG undefined FUN_143f9eeee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f9eeee(void)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_68 [4];
  undefined4 local_64;
  wchar_t *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b52b080,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b52b420,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b52bdf0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b52c1a0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b52c980,2,0);
  FUN_1446f470e(&DAT_14cb99e10,L"OnSettingAssigned",1);
  FUN_1446f470e(&DAT_14cb99e20,L"OnSettingValueChanged",1);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b52d190,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b52dac0,1,0);
  uStack_80 = 0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GameSettings",0,0,&PTR_FUN_14b52de10);
  FUN_1446f470e(&DAT_14cb99e78,L"GetPrimaryGamepadFocusWidget",1);
  FUN_1446f470e(&DAT_14cb99ee0,L"OnDefaultValueChanged",1);
  FUN_1446f470e(&DAT_14cb99ef0,L"OnValueChanged",1);
  FUN_1446f470e(&DAT_14cb99f18,L"OnSettingAssigned",1);
  FUN_1446f470e(&DAT_14cb99f40,L"OnSettingAssigned",1);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b530d50,6,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b531380,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b531dc0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b5323e0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b5328e0,1,0);
  FUN_1446f470e(&DAT_14cb99fd0,L"BP_OnDefaultOptionSpecified",1);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b5330a0,1,0);
  FUN_1446f470e(&DAT_14cb9a048,L"OnSettingsDirtyStateChanged",1);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b533e60,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b534230,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b5348b0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b536070,6,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b536540,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b536960,1,0);
  uStack_80 = 0;
  local_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b5373e0,1,&PTR_FUN_14b537390);
  FUN_1446f470e(&DAT_14cb9a1c0,L"ExecuteActionForSetting",1);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b5378d0,1,0);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/GameSettings",&PTR_FUN_14b537fa0,1,0);
  local_60 = (wchar_t *)0x800000014b538010;
  local_64 = 0xc;
  local_58 = FUN_14577453c();
  local_54 = 1;
  FUN_146592144(&local_60);
  local_60 = L"PercentFormat";
  local_58 = 0xd;
  FUN_1446e940c(&local_64,&local_60);
  local_60 = L"GameSetting";
  local_58 = 0xb;
  FUN_1446e940c(local_68,&local_60);
  local_60 = L"{0}%";
  local_58 = 4;
  FUN_140208c1e(&DAT_14cb9a208,local_68,&local_64,&local_60);
  atexit((_func_5014 *)&LAB_143f9e049);
  local_60 = L"TimeAsSecondsFormat";
  local_58 = 0x13;
  FUN_1446e940c(&local_64,&local_60);
  local_60 = L"GameSetting";
  local_58 = 0xb;
  FUN_1446e940c(local_68,&local_60);
  local_60 = L"{0}s";
  local_58 = 4;
  FUN_140208c1e(&DAT_14cb9a218,local_68,&local_64,&local_60);
  atexit((_func_5014 *)&LAB_143f9e05d);
  DAT_14cb9a260 = 0;
  DAT_14cb9a270 = &PTR_LAB_14b538ae0;
  _DAT_14cb9a278 = FUN_143f9e45c;
  DAT_14cb9a250 = FUN_1458816ae;
  atexit((_func_5014 *)&LAB_143f9e071);
  DAT_14cb9a2a0 = 0;
  DAT_14cb9a2b0 = &PTR_LAB_14b538ae0;
  _DAT_14cb9a2b8 = FUN_143f9e4d2;
  DAT_14cb9a290 = FUN_1458816ae;
  atexit((_func_5014 *)&LAB_143f9e098);
  DAT_14cb9a2e0 = 0;
  DAT_14cb9a2f0 = &PTR_LAB_14b538ae0;
  _DAT_14cb9a2f8 = FUN_143f9e574;
  DAT_14cb9a2d0 = FUN_1458816ae;
  atexit((_func_5014 *)&LAB_143f9e0bf);
  DAT_14cb9a3e0 = 0;
  DAT_14cb9a3f0 = &PTR_LAB_14b538ae0;
  _DAT_14cb9a3f8 = FUN_143f9e616;
  DAT_14cb9a3d0 = FUN_1458816ae;
  atexit((_func_5014 *)&LAB_143f9e0e6);
  DAT_14cb9a460 = 0;
  DAT_14cb9a470 = &PTR_LAB_14b538ae0;
  _DAT_14cb9a478 = FUN_143f9e6b2;
  DAT_14cb9a450 = FUN_1458816ae;
  atexit((_func_5014 *)&LAB_143f9e10d);
  DAT_14cb9a320 = 0;
  DAT_14cb9a330 = &PTR_LAB_14b538ae0;
  _DAT_14cb9a338 = FUN_143f9e7dc;
  DAT_14cb9a310 = FUN_1458816ae;
  atexit((_func_5014 *)&LAB_143f9e134);
  DAT_14cb9a360 = 0;
  DAT_14cb9a370 = &PTR_LAB_14b538ae0;
  _DAT_14cb9a378 = FUN_143f9e986;
  DAT_14cb9a350 = FUN_1458816ae;
  atexit((_func_5014 *)&LAB_143f9e15b);
  DAT_14cb9a3a0 = 0;
  DAT_14cb9a3b0 = &PTR_LAB_14b538ae0;
  _DAT_14cb9a3b8 = FUN_143f9eab0;
  DAT_14cb9a390 = FUN_1458816ae;
  atexit((_func_5014 *)&LAB_143f9e182);
  DAT_14cb9a420 = 0;
  DAT_14cb9a430 = &PTR_LAB_14b538ae0;
  _DAT_14cb9a438 = FUN_143f9ebd2;
  DAT_14cb9a410 = FUN_1458816ae;
  atexit((_func_5014 *)&LAB_143f9e1a9);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f9f638 FUN_143f9f638 body=69 status=ok
// SIG undefined FUN_143f9f638(void)

undefined8 * FUN_143f9f638(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5391a0;
  FUN_148af5870(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143f9f7fc FUN_143f9f7fc body=170 status=ok
// SIG undefined FUN_143f9f7fc(void)

void FUN_143f9f7fc(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5391a0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar4;
  *(undefined4 *)(puVar2 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar6;
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
    return;
  }
  FUN_148af5900(puVar2 + 6,iVar1,0);
  FUN_148af5973(puVar2[6],uVar3,iVar1);
  return;
}



// FUNCTION 143f9f8a6 FUN_143f9f8a6 body=170 status=ok
// SIG undefined FUN_143f9f8a6(void)

void FUN_143f9f8a6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b5391a0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((longlong)puVar2 + 0x24) = uVar4;
  *(undefined4 *)(puVar2 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar6;
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
    return;
  }
  FUN_148af5900(puVar2 + 6,iVar1,0);
  FUN_148af5973(puVar2[6],uVar3,iVar1);
  return;
}



// FUNCTION 143f9f950 FUN_143f9f950 body=204 status=ok
// SIG undefined FUN_143f9f950(void)

void FUN_143f9f950(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var7 = param_2[1].DebugInfo;
  *(undefined ***)p_Var7 = &PTR_LAB_149e020b0;
  (p_Var7->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var7 = &PTR_FUN_14b5391a0;
  (p_Var7->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  p_Var7->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var7->ContentionCount = DVar4;
  p_Var7->Flags = DVar5;
  p_Var7->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var7->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var7[1].Type = 0;
  p_Var7[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var7[1].field_0x4 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(int *)&p_Var7[1].CriticalSection = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)&p_Var7[1].CriticalSection + 4) = 0;
  }
  else {
    p_Var7 = p_Var7 + 1;
    FUN_148af5900(p_Var7,iVar1,0);
    uVar3._0_2_ = p_Var7->Type;
    uVar3._2_2_ = p_Var7->CreatorBackTraceIndex;
    uVar3._4_4_ = *(undefined4 *)&p_Var7->field_0x4;
    FUN_148af5973(uVar3,uVar2,iVar1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143f9f9ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143f9fa26 FUN_143f9fa26 body=269 status=ok
// SIG undefined FUN_143f9fa26(void)

undefined8 FUN_143f9fa26(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143f9fb2d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143f9fb2d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143f9fb2d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143f9fae1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143f9fb34(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143f9fae1;
    }
  }
  uVar6 = 0;
LAB_143f9fae1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143f9fb34 FUN_143f9fb34 body=1209 status=ok
// SIG undefined FUN_143f9fb34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143f9fb34(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  undefined4 local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  code *local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *param_1;
  if ((longlong)(int)param_1[3] != 0) {
    puVar8 = (undefined8 *)param_1[2];
    puVar12 = puVar8 + (longlong)(int)param_1[3] * 5;
    do {
      local_80 = *puVar8;
      local_78 = *(undefined4 *)(puVar8 + 1);
      uStack_74 = *(undefined4 *)((longlong)puVar8 + 0xc);
      uStack_70 = *(undefined4 *)(puVar8 + 2);
      uStack_6c = *(undefined4 *)((longlong)puVar8 + 0x14);
      local_68 = (void *)0x0;
      local_60 = *(int *)(puVar8 + 4);
      lVar10 = (longlong)local_60;
      _Src = (void *)puVar8[3];
      if (lVar10 == 0) {
        local_5c = 0;
        iVar4 = (int)((ulonglong)local_80 >> 0x20);
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,_Src,lVar10 * 2);
        iVar4 = local_80._4_4_;
      }
      if ((iVar4 == 0) || ((int)(uint)local_80 < 0)) {
LAB_143f9fe2c:
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        if ((int)(uint)local_80 < DAT_14c9647dc) {
          plVar5 = (longlong *)
                   ((ulonglong)(((uint)local_80 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_80 >> 0x10) * 8));
          if (((plVar5 == (longlong *)0x0) || ((int)plVar5[2] != iVar4)) ||
             ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) goto LAB_143f9fe2c;
          lVar10 = *plVar5;
        }
      }
      if ((lVar10 == 0) && (CONCAT44(uStack_74,local_78) != 0)) {
        lVar10 = FUN_140007850(&local_78);
        cVar3 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar10 == 0) || (cVar3 == '\0')) {
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar10 + 0xc);
            local_80 = CONCAT44(local_80._4_4_,uVar1);
            if (DAT_14c9647dc <= (int)uVar1) goto LAB_143f9fd12;
            lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            goto LAB_143f9fd15;
          }
          local_80 = 0;
        }
        else {
          uVar1 = *(uint *)(lVar10 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) + 8 +
                          (ulonglong)(uVar1 & 0xffff) * 0x18) & 0x8400000) == 0) {
              local_80 = CONCAT44(local_80._4_4_,uVar1);
              lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
LAB_143f9fd15:
              iVar4 = *(int *)(lVar11 + 0x10);
              if (*(int *)(lVar11 + 0x10) == 0) {
                LOCK();
                iVar4 = DAT_14c964868 + 1;
                UNLOCK();
                iVar9 = DAT_14c964868 + 1;
                bVar13 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar13) {
                  local_90 = CONCAT44(local_90._4_4_,iVar9);
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar9);
                  iVar9 = (int)local_90;
                }
                LOCK();
                iVar4 = *(int *)(lVar11 + 0x10);
                bVar13 = iVar4 == 0;
                if (bVar13) {
                  *(int *)(lVar11 + 0x10) = iVar9;
                  iVar4 = 0;
                }
                UNLOCK();
                if (bVar13) {
                  iVar4 = iVar9;
                }
              }
              local_80 = CONCAT44(iVar4,(uint)local_80);
            }
          }
          else if ((_DAT_00000008 & 0x8400000) == 0) {
            local_80 = CONCAT44(local_80._4_4_,uVar1);
LAB_143f9fd12:
            lVar11 = 0;
            goto LAB_143f9fd15;
          }
          if ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0) goto LAB_143f9fd30;
        }
LAB_143f9fdad:
        local_88 = 0;
      }
      else {
        if (lVar10 == 0) goto LAB_143f9fdad;
LAB_143f9fd30:
        if (DAT_14c949118 == 0) {
          local_58 = FUN_140631fbe;
          lVar11 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar11;
          FUN_1446f470e(local_50,L"Class",1);
          local_a0 = &local_58;
          local_a8 = &LAB_146891e90;
          local_b0 = &LAB_146273097;
          local_c0 = L"Engine";
          local_b8 = 199;
          local_c8 = 0x20;
          local_d0 = 0x10000000;
          local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,8);
          FUN_14574b4b2(lVar11);
          DAT_14c949118 = lVar11;
          local_90 = FUN_144a7a812();
          lVar11 = DAT_14c949118;
          uVar6 = FUN_1449e2fb2();
          local_d8 = L"Class";
          FUN_14574b446(uVar6,lVar11,local_90,L"/Script/CoreUObject");
        }
        if ((((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
            (lVar11 = FUN_1459f1af0(), lVar11 == 0)) ||
           (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) goto LAB_143f9fdad;
        if (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
            lVar11 + 0x30) {
          lVar10 = 0;
        }
        local_88 = lVar10;
        if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar10);
        }
      }
      if ((*(int *)((longlong)param_1 + 0xc) == 0) ||
         (uVar1 = *(uint *)(param_1 + 1), (int)uVar1 < 0)) {
LAB_143f9fe34:
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        if ((int)uVar1 < DAT_14c9647dc) {
          puVar7 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((puVar7 == (undefined8 *)0x0) ||
              (*(int *)(puVar7 + 2) != *(int *)((longlong)param_1 + 0xc))) ||
             ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_143f9fe34;
          uVar6 = *puVar7;
        }
      }
      FUN_148af8404(lVar2,uVar6);
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar8 = puVar8 + 5;
    } while (puVar8 != puVar12);
  }
  iVar4 = *(int *)(lVar2 + 0x2f0);
  if ((longlong)iVar4 != 0) {
    lVar10 = *(longlong *)(lVar2 + 0x2e8);
    lVar11 = 0;
    do {
      FUN_147702b9c(lVar2 + 0x310,*(undefined8 *)(lVar10 + lVar11));
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar4 * 8 != lVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143f9ffee FUN_143f9ffee body=29 status=ok
// SIG undefined FUN_143f9ffee(void)

undefined8 FUN_143f9ffee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa018a FUN_143fa018a body=93 status=ok
// SIG undefined FUN_143fa018a(void)

void FUN_143fa018a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5396f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa01e8 FUN_143fa01e8 body=93 status=ok
// SIG undefined FUN_143fa01e8(void)

void FUN_143fa01e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5396f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa0246 FUN_143fa0246 body=126 status=ok
// SIG undefined FUN_143fa0246(void)

void FUN_143fa0246(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5396f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa02b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa02ce FUN_143fa02ce body=269 status=ok
// SIG undefined FUN_143fa02ce(void)

undefined8 FUN_143fa02ce(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143fa03d5;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fa03d5;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143fa03d5:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fa0389;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143fa03dc(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143fa0389;
    }
  }
  uVar6 = 0;
LAB_143fa0389:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa03dc FUN_143fa03dc body=400 status=ok
// SIG undefined FUN_143fa03dc(void)

uint FUN_143fa03dc(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = *param_1;
  uVar5 = (**(code **)(**(longlong **)(lVar3 + 0x310) + 0x2a8))();
  if ((char)uVar5 != '\0') {
    plVar2 = (longlong *)(lVar3 + 0x318);
    *(undefined4 *)(lVar3 + 800) = 0;
    if (*(int *)(lVar3 + 0x324) < 0) {
      FUN_148af6848(plVar2,0);
    }
    FUN_148af4e2e(*(undefined8 *)(lVar3 + 0x310),lVar3 + 0x330,plVar2);
    if ((DAT_14c950c29 == '\x01') && (iVar6 = *(int *)(lVar3 + 800), 0 < iVar6)) {
      lVar8 = *(longlong *)(lVar3 + 0x318);
      lVar9 = 0;
      do {
        if (*(longlong *)(lVar8 + lVar9 * 8) != 0) {
          FUN_1456cec3c();
          iVar6 = *(int *)(lVar3 + 800);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar6);
    }
    FUN_148b002bc(*(undefined8 *)(lVar3 + 0x6f0),plVar2);
    plVar4 = *(longlong **)(lVar3 + 0x718);
    *(undefined8 *)(lVar3 + 0x710) = 0;
    *(undefined8 *)(lVar3 + 0x718) = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    if (*(longlong *)(lVar3 + 0x6e0) == 0) {
      uVar7 = 0;
    }
    else {
      if (0 < (longlong)*(int *)(lVar3 + 800)) {
        uVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(*plVar2 + uVar7 * 8) + 0x70) ==
              *(longlong *)(lVar3 + 0x6e0)) goto LAB_143fa04f2;
          uVar7 = uVar7 + 1;
        } while ((longlong)*(int *)(lVar3 + 800) != uVar7);
      }
      uVar7 = 0;
LAB_143fa04f2:
      *(undefined8 *)(lVar3 + 0x6e0) = 0;
    }
    if (*(char *)(lVar3 + 0x6e8) == '\x01') {
      FUN_14773b2e4(*(undefined8 *)(lVar3 + 0x6f0),uVar7 & 0xffffffff);
      FUN_14773ba48(*(undefined8 *)(lVar3 + 0x6f0),uVar7 & 0xffffffff);
    }
    *(undefined1 *)(lVar3 + 0x6e8) = 1;
    iVar6 = *(int *)(lVar3 + 800);
    if (0 < iVar6) {
      lVar8 = 0;
      do {
        lVar9 = *(longlong *)(*plVar2 + lVar8 * 8);
        if (lVar9 != 0) {
          FUN_1410e5ae4(lVar9,0);
          iVar6 = *(int *)(lVar3 + 800);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar6);
    }
  }
  return uVar5 ^ 1;
}



// FUNCTION 143fa056c FUN_143fa056c body=105 status=ok
// SIG undefined FUN_143fa056c(void)

void FUN_143fa056c(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_1;
  local_20 = param_1[1];
  local_18 = param_1[2];
  local_10 = param_1[3];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_148b00da4(lVar1 + 0x430,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa05d6 FUN_143fa05d6 body=95 status=ok
// SIG undefined FUN_143fa05d6(void)

undefined8 * FUN_143fa05d6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14b539930;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return puVar2 + 1;
}



// FUNCTION 143fa063c FUN_143fa063c body=29 status=ok
// SIG undefined FUN_143fa063c(void)

void FUN_143fa063c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143fa065a FUN_143fa065a body=83 status=ok
// SIG undefined FUN_143fa065a(void)

undefined8 * FUN_143fa065a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b539930;
  plVar3 = (longlong *)param_1[4];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa06ae FUN_143fa06ae body=328 status=ok
// SIG undefined FUN_143fa06ae(void)

void FUN_143fa06ae(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  lVar2 = *param_1;
  iVar6 = *(int *)(lVar2 + 0x45c);
  *(int *)(lVar2 + 0x45c) = iVar6 + 1;
  uVar7 = (ulonglong)*(int *)(lVar2 + 0x450);
  if ((longlong)uVar7 < 1) {
    *(int *)(lVar2 + 0x45c) = iVar6;
  }
  else {
    plVar1 = (longlong *)(lVar2 + 0x448);
    bVar9 = false;
    do {
      lVar11 = uVar7 * 0x10 + -8;
      uVar12 = uVar7;
      while (((*(int *)(*plVar1 + lVar11) != 0 &&
              (plVar3 = *(longlong **)(*plVar1 + -8 + lVar11), plVar3 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar3 + 0x60))(), cVar5 != '\0'))) {
        lVar11 = lVar11 + -0x10;
        bVar4 = uVar12 < 2;
        uVar12 = uVar12 - 1;
        if (bVar4) {
          iVar6 = *(int *)(lVar2 + 0x45c) + -1;
          *(int *)(lVar2 + 0x45c) = iVar6;
          if (!bVar9) {
            return;
          }
          goto LAB_143fa073f;
        }
      }
      uVar7 = uVar12 - 1;
      bVar9 = true;
    } while (1 < uVar12);
    iVar6 = *(int *)(lVar2 + 0x45c) + -1;
    *(int *)(lVar2 + 0x45c) = iVar6;
LAB_143fa073f:
    if (iVar6 < 1) {
      iVar6 = *(int *)(lVar2 + 0x450);
      iVar8 = iVar6;
      if (0 < iVar6) {
        iVar10 = 0;
        do {
          if (((*(int *)(*plVar1 + 8 + (longlong)iVar10 * 0x10) == 0) ||
              (plVar3 = *(longlong **)(*plVar1 + (longlong)iVar10 * 0x10), plVar3 == (longlong *)0x0
              )) || (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
            FUN_14005b288(plVar1,iVar10);
            FUN_14005b248(plVar1);
          }
          else {
            iVar10 = iVar10 + 1;
          }
          iVar8 = *(int *)(lVar2 + 0x450);
        } while (iVar10 < iVar8);
      }
      iVar10 = 2;
      if (2 < iVar8 * 2) {
        iVar10 = iVar8 * 2;
      }
      *(int *)(lVar2 + 0x458) = iVar10;
      if ((iVar10 < iVar6) && (*(int *)(lVar2 + 0x454) != iVar8)) {
        FUN_14045812c(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143fa0820 FUN_143fa0820 body=29 status=ok
// SIG undefined FUN_143fa0820(void)

undefined8 FUN_143fa0820(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa083e FUN_143fa083e body=71 status=ok
// SIG undefined FUN_143fa083e(void)

undefined8 * FUN_143fa083e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b539970;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa0a04 FUN_143fa0a04 body=160 status=ok
// SIG undefined FUN_143fa0a04(void)

void FUN_143fa0a04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539970;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  puVar1[8] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x000143fa0a99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 8);
    return;
  }
  return;
}



// FUNCTION 143fa0aa4 FUN_143fa0aa4 body=160 status=ok
// SIG undefined FUN_143fa0aa4(void)

void FUN_143fa0aa4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b539970;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  puVar1[8] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x000143fa0b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 8);
    return;
  }
  return;
}



// FUNCTION 143fa0b44 FUN_143fa0b44 body=187 status=ok
// SIG undefined FUN_143fa0b44(void)

void FUN_143fa0b44(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b539970;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  p_Var1[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar4)(puVar4,&p_Var1[1].ProcessLocksList);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa0bef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa0c00 FUN_143fa0c00 body=20 status=ok
// SIG undefined FUN_143fa0c00(void)

undefined8 FUN_143fa0c00(longlong param_1)

{
  FUN_143fa0d22(param_1 + 0x20);
  return 0;
}



// FUNCTION 143fa0c14 FUN_143fa0c14 body=269 status=ok
// SIG undefined FUN_143fa0c14(void)

undefined8 FUN_143fa0c14(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143fa0d1b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143fa0d1b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143fa0d1b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143fa0ccf;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143fa0d22(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143fa0ccf;
    }
  }
  uVar6 = 0;
LAB_143fa0ccf:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa0d22 FUN_143fa0d22 body=163 status=ok
// SIG undefined FUN_143fa0d22(void)

void FUN_143fa0d22(longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  uVar1 = DAT_14c98e618;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)*param_1;
  local_28 = plVar2[0x8d];
  local_20 = plVar2[0x8e];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_145a3846a(uVar1,&local_28);
  if ((char)plVar2[0x6b] == '\x01') {
    (**(code **)(*plVar2 + 0x4e0))(plVar2);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[2];
  plVar2 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[4];
  }
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000143fa0dbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa0dc6 FUN_143fa0dc6 body=91 status=ok
// SIG undefined FUN_143fa0dc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143fa0dc6(void)

{
  uint uVar1;
  undefined1 auStack_38 [32];
  char *local_18;
  undefined4 local_10;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = "AssetRegistry";
  local_10 = 0xd;
  local_c = 0;
  uVar1 = FUN_14001a6c0(&local_18,1);
  _DAT_14cb9a490 = (ulonglong)uVar1;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa0e24 FUN_143fa0e24 body=55 status=ok
// SIG undefined FUN_143fa0e24(void)

void FUN_143fa0e24(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a550 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a550 = FUN_14171c317(FUN_14659324a,uVar1,L"EGbxGameSettingDataSourceType");
  }
  return;
}



// FUNCTION 143fa0e5b FUN_143fa0e5b body=55 status=ok
// SIG undefined FUN_143fa0e5b(void)

void FUN_143fa0e5b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a5c8 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a5c8 =
         FUN_14171c317(FUN_1465934a4,uVar1,
                       L"EGbxGameSettingEditCondition_GameSettingValue_ComparisonType");
  }
  return;
}



// FUNCTION 143fa0e92 FUN_143fa0e92 body=55 status=ok
// SIG undefined FUN_143fa0e92(void)

void FUN_143fa0e92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a6a0 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a6a0 = FUN_14171c317(FUN_146593824,uVar1,L"EGbxGameSettingValuePersistentStorageType");
  }
  return;
}



// FUNCTION 143fa0ec9 FUN_143fa0ec9 body=55 status=ok
// SIG undefined FUN_143fa0ec9(void)

void FUN_143fa0ec9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a6d0 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a6d0 = FUN_14171c317(FUN_1465938ec,uVar1,L"EGbxGameSettingScalarDisplayFormat");
  }
  return;
}



// FUNCTION 143fa0f12 FUN_143fa0f12 body=48 status=ok
// SIG undefined FUN_143fa0f12(void)

void FUN_143fa0f12(longlong param_1)

{
  if (*(char *)(param_1 + 0x168) == '\0') {
    return;
  }
  FUN_148af6e34(param_1 + 0x180);
  FUN_145abd7ea(param_1);
  return;
}



// FUNCTION 143fa0f42 FUN_143fa0f42 body=57 status=ok
// SIG undefined FUN_143fa0f42(void)

void FUN_143fa0f42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a4d8 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a4d8 = FUN_140002ddd(FUN_146592f8d,uVar1,L"GbxGameSettingData_Collection");
  }
  return;
}



// FUNCTION 143fa0f7c FUN_143fa0f7c body=57 status=ok
// SIG undefined FUN_143fa0f7c(void)

void FUN_143fa0f7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a700 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a700 = FUN_140002ddd(FUN_1465939e9,uVar1,L"GbxGameSettingData_Scalar");
  }
  return;
}



// FUNCTION 143fa0fb6 FUN_143fa0fb6 body=57 status=ok
// SIG undefined FUN_143fa0fb6(void)

void FUN_143fa0fb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a718 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a718 = FUN_140002ddd(FUN_146593a7f,uVar1,L"GbxGameSettingData_Bool");
  }
  return;
}



// FUNCTION 143fa0ff0 FUN_143fa0ff0 body=57 status=ok
// SIG undefined FUN_143fa0ff0(void)

void FUN_143fa0ff0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a730 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a730 = FUN_140002ddd(FUN_146593b15,uVar1,L"GbxGameSettingData_Number");
  }
  return;
}



// FUNCTION 143fa102a FUN_143fa102a body=57 status=ok
// SIG undefined FUN_143fa102a(void)

void FUN_143fa102a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a760 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a760 = FUN_140002ddd(FUN_146593c41,uVar1,L"GbxGameSettingData_Enum");
  }
  return;
}



// FUNCTION 143fa1064 FUN_143fa1064 body=57 status=ok
// SIG undefined FUN_143fa1064(void)

void FUN_143fa1064(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a790 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a790 = FUN_140002ddd(FUN_146593d6d,uVar1,L"GbxGameSettingData_Color");
  }
  return;
}



// FUNCTION 143fa109e FUN_143fa109e body=57 status=ok
// SIG undefined FUN_143fa109e(void)

void FUN_143fa109e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a7c0 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a7c0 = FUN_140002ddd(FUN_146593e99,uVar1,L"GbxGameSettingData_CustomValue");
  }
  return;
}



// FUNCTION 143fa10e6 FUN_143fa10e6 body=57 status=ok
// SIG undefined FUN_143fa10e6(void)

void FUN_143fa10e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a4c0 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a4c0 = FUN_140002ddd(FUN_146592ec5,uVar1,L"GbxGameSettingData_Action");
  }
  return;
}



// FUNCTION 143fa1184 FUN_143fa1184 body=57 status=ok
// SIG undefined FUN_143fa1184(void)

void FUN_143fa1184(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a580 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a580 = FUN_140002ddd(FUN_146593319,uVar1,L"GbxGameSettingEditCondition_Attribute");
  }
  return;
}



// FUNCTION 143fa11de FUN_143fa11de body=31 status=ok
// SIG undefined FUN_143fa11de(void)

undefined8 FUN_143fa11de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa11fe FUN_143fa11fe body=57 status=ok
// SIG undefined FUN_143fa11fe(void)

void FUN_143fa11fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a598 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a598 = FUN_140002ddd(FUN_1465933af,uVar1,L"GbxGameSettingEditCondition_PlatformTrait");
  }
  return;
}



// FUNCTION 143fa125a FUN_143fa125a body=31 status=ok
// SIG undefined FUN_143fa125a(void)

undefined8 FUN_143fa125a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa127a FUN_143fa127a body=57 status=ok
// SIG undefined FUN_143fa127a(void)

void FUN_143fa127a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a5b0 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a5b0 = FUN_140002ddd(FUN_146593445,uVar1,L"GbxGameSettingEditCondition_PrimaryPlayer");
  }
  return;
}



// FUNCTION 143fa12c2 FUN_143fa12c2 body=57 status=ok
// SIG undefined FUN_143fa12c2(void)

void FUN_143fa12c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a5e0 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a5e0 =
         FUN_140002ddd(FUN_14659350b,uVar1,L"GbxGameSettingEditCondition_GameSettingValue");
  }
  return;
}



// FUNCTION 143fa1318 FUN_143fa1318 body=57 status=ok
// SIG undefined FUN_143fa1318(void)

void FUN_143fa1318(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a610 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a610 =
         FUN_140002ddd(FUN_146593609,uVar1,L"GbxGameSettingEditConditionResponse_HideSetting");
  }
  return;
}



// FUNCTION 143fa1360 FUN_143fa1360 body=252 status=ok
// SIG undefined FUN_143fa1360(void)

void FUN_143fa1360(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b53f250;
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
  plVar1 = DAT_14c844840;
  param_2[1] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 2) = 0;
  return;
}



// FUNCTION 143fa145c FUN_143fa145c body=60 status=ok
// SIG undefined FUN_143fa145c(void)

undefined8 * FUN_143fa145c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b53f250;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa1498 FUN_143fa1498 body=57 status=ok
// SIG undefined FUN_143fa1498(void)

void FUN_143fa1498(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a628 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a628 =
         FUN_140002ddd(FUN_14659369f,uVar1,L"GbxGameSettingEditConditionResponse_DisableSetting");
  }
  return;
}



// FUNCTION 143fa14e0 FUN_143fa14e0 body=57 status=ok
// SIG undefined FUN_143fa14e0(void)

void FUN_143fa14e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9a640 == 0) {
    uVar1 = FUN_140ee30f0();
    DAT_14cb9a640 =
         FUN_140002ddd(FUN_146593735,uVar1,L"GbxGameSettingEditConditionResponse_HideOption");
  }
  return;
}



// FUNCTION 143fa156e FUN_143fa156e body=244 status=ok
// SIG undefined FUN_143fa156e(void)

void FUN_143fa156e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
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
  plVar1 = DAT_14c844840;
  param_2[1] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 2) = 0;
  return;
}



// FUNCTION 143fa16a8 FUN_143fa16a8 body=78 status=ok
// SIG undefined FUN_143fa16a8(void)

void FUN_143fa16a8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 1) == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)*param_1;
  }
  cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,*param_2);
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 3) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000143fa16f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
    return;
  }
  return;
}



// FUNCTION 143fa16f6 FUN_143fa16f6 body=110 status=ok
// SIG undefined FUN_143fa16f6(void)

undefined8 * FUN_143fa16f6(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14b540720;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_1410e5880(puVar1 + 1,param_1 + 8);
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_1410e59b2(puVar1 + 3,param_1 + 0x18);
  return puVar1 + 1;
}



// FUNCTION 143fa176a FUN_143fa176a body=29 status=ok
// SIG undefined FUN_143fa176a(void)

void FUN_143fa176a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143fa1788 FUN_143fa1788 body=177 status=ok
// SIG undefined FUN_143fa1788(void)

undefined8 * FUN_143fa1788(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b540720;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) == 0) {
LAB_143fa17d1:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 4) = 0;
      goto LAB_143fa17d1;
    }
  }
  plVar1 = param_1 + 1;
  if (*(int *)(param_1 + 2) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143fa1814;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143fa1814:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa183a FUN_143fa183a body=99 status=ok
// SIG undefined FUN_143fa183a(void)

void FUN_143fa183a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x30);
  plVar3 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
  }
  local_28 = param_2;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_28,param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa189e FUN_143fa189e body=29 status=ok
// SIG undefined FUN_143fa189e(void)

undefined8 FUN_143fa189e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa18d0 FUN_143fa18d0 body=107 status=ok
// SIG undefined FUN_143fa18d0(void)

void FUN_143fa18d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540760;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = 0;
  return;
}



// FUNCTION 143fa193c FUN_143fa193c body=107 status=ok
// SIG undefined FUN_143fa193c(void)

void FUN_143fa193c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540760;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  puVar1[5] = 0;
  return;
}



// FUNCTION 143fa19a8 FUN_143fa19a8 body=140 status=ok
// SIG undefined FUN_143fa19a8(void)

void FUN_143fa19a8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540760;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa1a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa1a3e FUN_143fa1a3e body=20 status=ok
// SIG undefined FUN_143fa1a3e(void)

undefined1 FUN_143fa1a3e(longlong param_1)

{
  FUN_143fa1a52(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa1a52 FUN_143fa1a52 body=1001 status=ok
// SIG undefined FUN_143fa1a52(void)

ulonglong FUN_143fa1a52(longlong *param_1)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 ****ppppuVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  bool bVar13;
  undefined1 auStack_118 [32];
  char local_f8 [16];
  longlong *local_e8;
  int local_d0;
  char local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  int local_a0;
  undefined8 ***local_98 [3];
  ushort local_80;
  byte local_78;
  int local_70;
  undefined4 uStack_6c;
  ushort local_58;
  undefined6 uStack_56;
  byte local_50;
  int *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8[0] = '\0';
  local_d0 = 0;
  FUN_1456bb102(local_f8);
  local_c8 = '\0';
  local_a0 = 0;
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    local_98[0] = (undefined8 ***)*param_1;
    FUN_1446dcdd4(&local_70);
    lVar4 = FUN_1448fdc6e(&local_70);
    if (CONCAT62(uStack_56,local_58) != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar4;
  }
  FUN_1400606f6(&local_70,lVar4,local_f8);
  piVar5 = local_40;
  if (local_40 == (int *)0x0) {
    piVar5 = &local_70;
  }
  piVar12 = (int *)&DAT_14c9a40e0;
  if (0 < local_38) {
    piVar12 = piVar5;
  }
  FUN_1400603ec(local_98,lVar4,piVar12);
  piVar5 = local_40;
  if (local_40 == (int *)0x0) {
    piVar5 = &local_70;
  }
  FUN_1446fdf58(piVar5,local_38);
  if (local_40 != (int *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 == 1) {
    bVar13 = (int)local_98[0] != 0;
    uVar3 = 1;
  }
  else {
    piVar5 = &local_70;
    FUN_1400b56fe(piVar5,local_98,1);
    bVar13 = local_70 != 0;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_58) {
        piVar5 = (int *)CONCAT44(uStack_6c,local_70);
      }
      (*pcVar1)(piVar5);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(CONCAT44(uStack_6c,local_70));
    }
    bVar13 = local_50 != 0 && bVar13;
    uVar3 = (uint)local_78;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar9 = local_98;
    if (0x18 < local_80) {
      ppppuVar9 = (undefined8 ****)local_98[0];
    }
    (*pcVar1)(ppppuVar9);
  }
  if (0x18 < local_80) {
    FUN_1400020a8(local_98[0]);
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_a0 != 0) {
    lVar10 = (longlong)local_a0 + -1;
    lVar11 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar4 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar8 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar4 + lVar11) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar11) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar6 = iVar8;
    }
    bVar2 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    local_a0 = 0;
  }
  if (local_c8 != '\0') {
    if (local_c8 == '\x01') {
      local_c0 = 0;
    }
    else if ((local_c8 == '\x03') && (local_b8 != (longlong *)0x0)) {
      LOCK();
      piVar5 = (int *)((longlong)local_b8 + 0xc);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        (**(code **)(*local_b8 + 0x10))();
      }
    }
    local_c8 = '\0';
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_d0 != 0) {
    lVar10 = (longlong)local_d0 + -1;
    lVar11 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
    if (*(longlong *)(lVar4 + lVar11) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar8 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar4 + lVar11) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar11) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar6 = iVar8;
    }
    bVar2 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    local_d0 = 0;
  }
  if ((local_f8[0] == '\x03') && (local_e8 != (longlong *)0x0)) {
    LOCK();
    piVar5 = (int *)((longlong)local_e8 + 0xc);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      (**(code **)(*local_e8 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)&local_70 >> 8),bVar13) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa1e3c FUN_143fa1e3c body=29 status=ok
// SIG undefined FUN_143fa1e3c(void)

undefined8 FUN_143fa1e3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa1e6e FUN_143fa1e6e body=99 status=ok
// SIG undefined FUN_143fa1e6e(void)

void FUN_143fa1e6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540840;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  return;
}



// FUNCTION 143fa1ed2 FUN_143fa1ed2 body=99 status=ok
// SIG undefined FUN_143fa1ed2(void)

void FUN_143fa1ed2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540840;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  return;
}



// FUNCTION 143fa1f36 FUN_143fa1f36 body=132 status=ok
// SIG undefined FUN_143fa1f36(void)

void FUN_143fa1f36(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540840;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa1fab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa1fc4 FUN_143fa1fc4 body=20 status=ok
// SIG undefined FUN_143fa1fc4(void)

undefined1 FUN_143fa1fc4(longlong param_1)

{
  FUN_143fa1fd8(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa1fd8 FUN_143fa1fd8 body=572 status=ok
// SIG undefined FUN_143fa1fd8(void)

undefined8 FUN_143fa1fd8(char *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined7 uVar10;
  longlong lVar11;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 2) goto LAB_143fa216d;
    if (iVar2 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_143fa216d;
    }
    local_28 = "CommonUI";
    local_20 = 8;
    local_1c = 0;
    uVar5 = FUN_14001a6c0(&local_28,1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    plVar8 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar5);
  }
  else {
LAB_143fa216d:
    local_28 = "CommonUI";
    local_20 = 8;
    local_1c = 0;
    uVar5 = FUN_14001a6c0(&local_28,1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    plVar8 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar5);
  }
  lVar9 = (**(code **)(*plVar8 + 0x50))(plVar8);
  lVar3 = *(longlong *)(param_1 + 4);
  if (lVar3 != 0) {
    if ((longlong)*(int *)(lVar9 + 200) != 0) {
      lVar11 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar9 + 0xc0) + lVar11) == lVar3) goto LAB_143fa20ea;
        lVar11 = lVar11 + 8;
      } while ((longlong)*(int *)(lVar9 + 200) * 8 != lVar11);
    }
    piVar1 = (int *)(lVar9 + 0xd8);
    if ((longlong)*piVar1 != 0) {
      lVar9 = *(longlong *)(lVar9 + 0xd0);
      lVar11 = 0;
      do {
        if (*(longlong *)(lVar9 + lVar11) == lVar3) goto LAB_143fa20ea;
        lVar11 = lVar11 + 8;
      } while ((longlong)*piVar1 * 8 != lVar11);
    }
  }
  cVar4 = '\0';
  uVar10 = 0;
LAB_143fa20ec:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71(uVar10,*param_1 == cVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143fa20ea:
  uVar10 = (undefined7)((ulonglong)lVar9 >> 8);
  cVar4 = '\x01';
  goto LAB_143fa20ec;
}



// FUNCTION 143fa2216 FUN_143fa2216 body=29 status=ok
// SIG undefined FUN_143fa2216(void)

undefined8 FUN_143fa2216(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa2248 FUN_143fa2248 body=91 status=ok
// SIG undefined FUN_143fa2248(void)

void FUN_143fa2248(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5408b0;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143fa22a4 FUN_143fa22a4 body=91 status=ok
// SIG undefined FUN_143fa22a4(void)

void FUN_143fa22a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5408b0;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143fa2300 FUN_143fa2300 body=124 status=ok
// SIG undefined FUN_143fa2300(void)

void FUN_143fa2300(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5408b0;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa236d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa237c FUN_143fa237c body=37 status=ok
// SIG undefined FUN_143fa237c(void)

bool FUN_143fa237c(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x328))(param_2);
  return (bool)*(char *)(param_1 + 0x18) == (iVar1 == 0);
}



// FUNCTION 143fa23a2 FUN_143fa23a2 body=23 status=ok
// SIG undefined FUN_143fa23a2(void)

undefined8 FUN_143fa23a2(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x328))(param_2);
  return 1;
}



// FUNCTION 143fa23ba FUN_143fa23ba body=29 status=ok
// SIG undefined FUN_143fa23ba(void)

undefined8 FUN_143fa23ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa23ec FUN_143fa23ec body=93 status=ok
// SIG undefined FUN_143fa23ec(void)

void FUN_143fa23ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa244a FUN_143fa244a body=93 status=ok
// SIG undefined FUN_143fa244a(void)

void FUN_143fa244a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa24a8 FUN_143fa24a8 body=126 status=ok
// SIG undefined FUN_143fa24a8(void)

void FUN_143fa24a8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540920;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa2517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa2526 FUN_143fa2526 body=125 status=ok
// SIG undefined FUN_143fa2526(void)

byte FUN_143fa2526(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  double dVar4;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*puVar2;
      }
      else {
        plVar3 = (longlong *)0x0;
      }
      dVar4 = (double)(**(code **)(*plVar3 + 0x328))();
      return -(dVar4 == *(double *)(param_1 + 0x20)) & 1;
    }
  }
  return 0;
}



// FUNCTION 143fa25a4 FUN_143fa25a4 body=100 status=ok
// SIG undefined FUN_143fa25a4(void)

undefined8 FUN_143fa25a4(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        plVar2 = (longlong *)*puVar3;
      }
      else {
        plVar2 = (longlong *)0x0;
      }
      (**(code **)(*plVar2 + 0x328))();
    }
  }
  return 1;
}



// FUNCTION 143fa2608 FUN_143fa2608 body=29 status=ok
// SIG undefined FUN_143fa2608(void)

undefined8 FUN_143fa2608(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa263a FUN_143fa263a body=93 status=ok
// SIG undefined FUN_143fa263a(void)

void FUN_143fa263a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa2698 FUN_143fa2698 body=93 status=ok
// SIG undefined FUN_143fa2698(void)

void FUN_143fa2698(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa26f6 FUN_143fa26f6 body=126 status=ok
// SIG undefined FUN_143fa26f6(void)

void FUN_143fa26f6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540990;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa2765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa2774 FUN_143fa2774 body=125 status=ok
// SIG undefined FUN_143fa2774(void)

byte FUN_143fa2774(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  double dVar4;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*puVar2;
      }
      else {
        plVar3 = (longlong *)0x0;
      }
      dVar4 = (double)(**(code **)(*plVar3 + 0x328))();
      return -(dVar4 != *(double *)(param_1 + 0x20)) & 1;
    }
  }
  return 0;
}



// FUNCTION 143fa27f2 FUN_143fa27f2 body=100 status=ok
// SIG undefined FUN_143fa27f2(void)

undefined8 FUN_143fa27f2(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        plVar2 = (longlong *)*puVar3;
      }
      else {
        plVar2 = (longlong *)0x0;
      }
      (**(code **)(*plVar2 + 0x328))();
    }
  }
  return 1;
}



// FUNCTION 143fa2856 FUN_143fa2856 body=29 status=ok
// SIG undefined FUN_143fa2856(void)

undefined8 FUN_143fa2856(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa2888 FUN_143fa2888 body=93 status=ok
// SIG undefined FUN_143fa2888(void)

void FUN_143fa2888(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540a00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa28e6 FUN_143fa28e6 body=93 status=ok
// SIG undefined FUN_143fa28e6(void)

void FUN_143fa28e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540a00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa2944 FUN_143fa2944 body=126 status=ok
// SIG undefined FUN_143fa2944(void)

void FUN_143fa2944(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540a00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa29b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa29c2 FUN_143fa29c2 body=119 status=ok
// SIG undefined FUN_143fa29c2(void)

bool FUN_143fa29c2(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  double extraout_XMM0_Qa;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*puVar2;
      }
      else {
        plVar3 = (longlong *)0x0;
      }
      (**(code **)(*plVar3 + 0x328))();
      return *(double *)(param_1 + 0x20) <= extraout_XMM0_Qa &&
             extraout_XMM0_Qa != *(double *)(param_1 + 0x20);
    }
  }
  return false;
}



// FUNCTION 143fa2a3a FUN_143fa2a3a body=100 status=ok
// SIG undefined FUN_143fa2a3a(void)

undefined8 FUN_143fa2a3a(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        plVar2 = (longlong *)*puVar3;
      }
      else {
        plVar2 = (longlong *)0x0;
      }
      (**(code **)(*plVar2 + 0x328))();
    }
  }
  return 1;
}



// FUNCTION 143fa2a9e FUN_143fa2a9e body=29 status=ok
// SIG undefined FUN_143fa2a9e(void)

undefined8 FUN_143fa2a9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa2ad0 FUN_143fa2ad0 body=93 status=ok
// SIG undefined FUN_143fa2ad0(void)

void FUN_143fa2ad0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540a70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa2b2e FUN_143fa2b2e body=93 status=ok
// SIG undefined FUN_143fa2b2e(void)

void FUN_143fa2b2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540a70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa2b8c FUN_143fa2b8c body=126 status=ok
// SIG undefined FUN_143fa2b8c(void)

void FUN_143fa2b8c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540a70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa2bfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa2c0a FUN_143fa2c0a body=119 status=ok
// SIG undefined FUN_143fa2c0a(void)

bool FUN_143fa2c0a(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  double extraout_XMM0_Qa;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*puVar2;
      }
      else {
        plVar3 = (longlong *)0x0;
      }
      (**(code **)(*plVar3 + 0x328))();
      return *(double *)(param_1 + 0x20) <= extraout_XMM0_Qa;
    }
  }
  return false;
}



// FUNCTION 143fa2c82 FUN_143fa2c82 body=100 status=ok
// SIG undefined FUN_143fa2c82(void)

undefined8 FUN_143fa2c82(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        plVar2 = (longlong *)*puVar3;
      }
      else {
        plVar2 = (longlong *)0x0;
      }
      (**(code **)(*plVar2 + 0x328))();
    }
  }
  return 1;
}



// FUNCTION 143fa2ce6 FUN_143fa2ce6 body=29 status=ok
// SIG undefined FUN_143fa2ce6(void)

undefined8 FUN_143fa2ce6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa2d18 FUN_143fa2d18 body=93 status=ok
// SIG undefined FUN_143fa2d18(void)

void FUN_143fa2d18(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa2d76 FUN_143fa2d76 body=93 status=ok
// SIG undefined FUN_143fa2d76(void)

void FUN_143fa2d76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540ae0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa2dd4 FUN_143fa2dd4 body=126 status=ok
// SIG undefined FUN_143fa2dd4(void)

void FUN_143fa2dd4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540ae0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa2e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa2e52 FUN_143fa2e52 body=123 status=ok
// SIG undefined FUN_143fa2e52(void)

bool FUN_143fa2e52(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  double extraout_XMM0_Qa;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*puVar2;
      }
      else {
        plVar3 = (longlong *)0x0;
      }
      (**(code **)(*plVar3 + 0x328))();
      return extraout_XMM0_Qa < *(double *)(param_1 + 0x20);
    }
  }
  return false;
}



// FUNCTION 143fa2ece FUN_143fa2ece body=100 status=ok
// SIG undefined FUN_143fa2ece(void)

undefined8 FUN_143fa2ece(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        plVar2 = (longlong *)*puVar3;
      }
      else {
        plVar2 = (longlong *)0x0;
      }
      (**(code **)(*plVar2 + 0x328))();
    }
  }
  return 1;
}



// FUNCTION 143fa2f32 FUN_143fa2f32 body=29 status=ok
// SIG undefined FUN_143fa2f32(void)

undefined8 FUN_143fa2f32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa2f64 FUN_143fa2f64 body=93 status=ok
// SIG undefined FUN_143fa2f64(void)

void FUN_143fa2f64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa2fc2 FUN_143fa2fc2 body=93 status=ok
// SIG undefined FUN_143fa2fc2(void)

void FUN_143fa2fc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa3020 FUN_143fa3020 body=126 status=ok
// SIG undefined FUN_143fa3020(void)

void FUN_143fa3020(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540b50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa308f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa309e FUN_143fa309e body=123 status=ok
// SIG undefined FUN_143fa309e(void)

bool FUN_143fa309e(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  double extraout_XMM0_Qa;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*puVar2;
      }
      else {
        plVar3 = (longlong *)0x0;
      }
      (**(code **)(*plVar3 + 0x328))();
      return extraout_XMM0_Qa <= *(double *)(param_1 + 0x20);
    }
  }
  return false;
}



// FUNCTION 143fa311a FUN_143fa311a body=100 status=ok
// SIG undefined FUN_143fa311a(void)

undefined8 FUN_143fa311a(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        plVar2 = (longlong *)*puVar3;
      }
      else {
        plVar2 = (longlong *)0x0;
      }
      (**(code **)(*plVar2 + 0x328))();
    }
  }
  return 1;
}



// FUNCTION 143fa317e FUN_143fa317e body=29 status=ok
// SIG undefined FUN_143fa317e(void)

undefined8 FUN_143fa317e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa31b0 FUN_143fa31b0 body=99 status=ok
// SIG undefined FUN_143fa31b0(void)

void FUN_143fa31b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540bc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  return;
}



// FUNCTION 143fa3214 FUN_143fa3214 body=99 status=ok
// SIG undefined FUN_143fa3214(void)

void FUN_143fa3214(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540bc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  return;
}



// FUNCTION 143fa3278 FUN_143fa3278 body=132 status=ok
// SIG undefined FUN_143fa3278(void)

void FUN_143fa3278(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540bc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa32ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa3306 FUN_143fa3306 body=20 status=ok
// SIG undefined FUN_143fa3306(void)

undefined1 FUN_143fa3306(longlong param_1)

{
  FUN_143fa331a(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa331a FUN_143fa331a body=212 status=ok
// SIG undefined FUN_143fa331a(void)

ulonglong FUN_143fa331a(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143fa3374;
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((*(uint *)(plVar5 + 2) == param_1[1] && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar5;
      }
      else {
        lVar3 = 0;
      }
      (**(code **)(**(longlong **)(lVar3 + 0x138) + 0x18))
                (*(longlong **)(lVar3 + 0x138),&local_28,*(undefined8 *)(lVar3 + 0x58));
      puVar4 = local_28;
      if (local_20 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      cVar2 = FUN_14052c20c(puVar4);
      uVar6 = CONCAT71((int7)((ulonglong)&local_28 >> 8),(char)param_1[2] == cVar2);
      if (local_28 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143fa3374;
    }
  }
  uVar6 = 0;
LAB_143fa3374:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 143fa33f0 FUN_143fa33f0 body=29 status=ok
// SIG undefined FUN_143fa33f0(void)

undefined8 FUN_143fa33f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa3422 FUN_143fa3422 body=93 status=ok
// SIG undefined FUN_143fa3422(void)

void FUN_143fa3422(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa3480 FUN_143fa3480 body=93 status=ok
// SIG undefined FUN_143fa3480(void)

void FUN_143fa3480(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa34de FUN_143fa34de body=126 status=ok
// SIG undefined FUN_143fa34de(void)

void FUN_143fa34de(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540c30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa354d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa3566 FUN_143fa3566 body=20 status=ok
// SIG undefined FUN_143fa3566(void)

undefined1 FUN_143fa3566(longlong param_1)

{
  FUN_143fa357a(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa357a FUN_143fa357a body=113 status=ok
// SIG undefined FUN_143fa357a(void)

bool FUN_143fa357a(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(uint *)(puVar2 + 2) == param_1[1])) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar2;
      }
      else {
        uVar4 = 0;
      }
      lVar3 = FUN_148b05a64(uVar4);
      return lVar3 == *(longlong *)(param_1 + 2);
    }
  }
  return false;
}



// FUNCTION 143fa35ec FUN_143fa35ec body=29 status=ok
// SIG undefined FUN_143fa35ec(void)

undefined8 FUN_143fa35ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa361e FUN_143fa361e body=93 status=ok
// SIG undefined FUN_143fa361e(void)

void FUN_143fa361e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa367c FUN_143fa367c body=93 status=ok
// SIG undefined FUN_143fa367c(void)

void FUN_143fa367c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa36da FUN_143fa36da body=126 status=ok
// SIG undefined FUN_143fa36da(void)

void FUN_143fa36da(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540ca0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa3749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa3762 FUN_143fa3762 body=20 status=ok
// SIG undefined FUN_143fa3762(void)

undefined1 FUN_143fa3762(longlong param_1)

{
  FUN_143fa3776(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa3776 FUN_143fa3776 body=113 status=ok
// SIG undefined FUN_143fa3776(void)

bool FUN_143fa3776(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(uint *)(puVar2 + 2) == param_1[1])) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar2;
      }
      else {
        uVar4 = 0;
      }
      lVar3 = FUN_148b05a64(uVar4);
      return lVar3 != *(longlong *)(param_1 + 2);
    }
  }
  return false;
}



// FUNCTION 143fa37e8 FUN_143fa37e8 body=29 status=ok
// SIG undefined FUN_143fa37e8(void)

undefined8 FUN_143fa37e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa381a FUN_143fa381a body=93 status=ok
// SIG undefined FUN_143fa381a(void)

void FUN_143fa381a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540d10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa3878 FUN_143fa3878 body=93 status=ok
// SIG undefined FUN_143fa3878(void)

void FUN_143fa3878(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540d10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa38d6 FUN_143fa38d6 body=126 status=ok
// SIG undefined FUN_143fa38d6(void)

void FUN_143fa38d6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540d10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa3945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa395e FUN_143fa395e body=20 status=ok
// SIG undefined FUN_143fa395e(void)

undefined1 FUN_143fa395e(longlong param_1)

{
  FUN_143fa3972(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa3972 FUN_143fa3972 body=113 status=ok
// SIG undefined FUN_143fa3972(void)

bool FUN_143fa3972(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(uint *)(puVar2 + 2) == param_1[1])) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar2;
      }
      else {
        uVar4 = 0;
      }
      lVar3 = FUN_148b05a64(uVar4);
      return *(longlong *)(param_1 + 2) < lVar3;
    }
  }
  return false;
}



// FUNCTION 143fa39e4 FUN_143fa39e4 body=29 status=ok
// SIG undefined FUN_143fa39e4(void)

undefined8 FUN_143fa39e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa3a16 FUN_143fa3a16 body=93 status=ok
// SIG undefined FUN_143fa3a16(void)

void FUN_143fa3a16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa3a74 FUN_143fa3a74 body=93 status=ok
// SIG undefined FUN_143fa3a74(void)

void FUN_143fa3a74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa3ad2 FUN_143fa3ad2 body=126 status=ok
// SIG undefined FUN_143fa3ad2(void)

void FUN_143fa3ad2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540d80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa3b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa3b5a FUN_143fa3b5a body=20 status=ok
// SIG undefined FUN_143fa3b5a(void)

undefined1 FUN_143fa3b5a(longlong param_1)

{
  FUN_143fa3b6e(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa3b6e FUN_143fa3b6e body=113 status=ok
// SIG undefined FUN_143fa3b6e(void)

bool FUN_143fa3b6e(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(uint *)(puVar2 + 2) == param_1[1])) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar2;
      }
      else {
        uVar4 = 0;
      }
      lVar3 = FUN_148b05a64(uVar4);
      return *(longlong *)(param_1 + 2) <= lVar3;
    }
  }
  return false;
}



// FUNCTION 143fa3be0 FUN_143fa3be0 body=29 status=ok
// SIG undefined FUN_143fa3be0(void)

undefined8 FUN_143fa3be0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa3c12 FUN_143fa3c12 body=93 status=ok
// SIG undefined FUN_143fa3c12(void)

void FUN_143fa3c12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540df0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa3c70 FUN_143fa3c70 body=93 status=ok
// SIG undefined FUN_143fa3c70(void)

void FUN_143fa3c70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540df0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa3cce FUN_143fa3cce body=126 status=ok
// SIG undefined FUN_143fa3cce(void)

void FUN_143fa3cce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540df0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa3d3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa3d56 FUN_143fa3d56 body=20 status=ok
// SIG undefined FUN_143fa3d56(void)

undefined1 FUN_143fa3d56(longlong param_1)

{
  FUN_143fa3d6a(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa3d6a FUN_143fa3d6a body=113 status=ok
// SIG undefined FUN_143fa3d6a(void)

bool FUN_143fa3d6a(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(uint *)(puVar2 + 2) == param_1[1])) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar2;
      }
      else {
        uVar4 = 0;
      }
      lVar3 = FUN_148b05a64(uVar4);
      return lVar3 < *(longlong *)(param_1 + 2);
    }
  }
  return false;
}



// FUNCTION 143fa3ddc FUN_143fa3ddc body=29 status=ok
// SIG undefined FUN_143fa3ddc(void)

undefined8 FUN_143fa3ddc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa3e0e FUN_143fa3e0e body=93 status=ok
// SIG undefined FUN_143fa3e0e(void)

void FUN_143fa3e0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa3e6c FUN_143fa3e6c body=93 status=ok
// SIG undefined FUN_143fa3e6c(void)

void FUN_143fa3e6c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143fa3eca FUN_143fa3eca body=126 status=ok
// SIG undefined FUN_143fa3eca(void)

void FUN_143fa3eca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540e60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa3f39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa3f52 FUN_143fa3f52 body=20 status=ok
// SIG undefined FUN_143fa3f52(void)

undefined1 FUN_143fa3f52(longlong param_1)

{
  FUN_143fa3f66(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa3f66 FUN_143fa3f66 body=113 status=ok
// SIG undefined FUN_143fa3f66(void)

bool FUN_143fa3f66(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(uint *)(puVar2 + 2) == param_1[1])) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar2;
      }
      else {
        uVar4 = 0;
      }
      lVar3 = FUN_148b05a64(uVar4);
      return lVar3 <= *(longlong *)(param_1 + 2);
    }
  }
  return false;
}



// FUNCTION 143fa3fd8 FUN_143fa3fd8 body=57 status=ok
// SIG undefined FUN_143fa3fd8(void)

undefined8 * FUN_143fa3fd8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b540ed0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa4026 FUN_143fa4026 body=167 status=ok
// SIG undefined FUN_143fa4026(void)

void FUN_143fa4026(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5407d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b540ed0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143fa40ce FUN_143fa40ce body=167 status=ok
// SIG undefined FUN_143fa40ce(void)

void FUN_143fa40ce(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5407d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b540ed0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143fa4176 FUN_143fa4176 body=206 status=ok
// SIG undefined FUN_143fa4176(void)

void FUN_143fa4176(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b5407d0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b540ed0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa4232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa424e FUN_143fa424e body=20 status=ok
// SIG undefined FUN_143fa424e(void)

undefined1 FUN_143fa424e(longlong param_1)

{
  FUN_143fa4262(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa4262 FUN_143fa4262 body=311 status=ok
// SIG undefined FUN_143fa4262(void)

ulonglong FUN_143fa4262(uint *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[1] != 0) {
    uVar3 = *param_1;
    uVar6 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_143fa42bc;
    plVar5 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((*(uint *)(plVar5 + 2) == param_1[1] && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar5;
      }
      else {
        lVar8 = 0;
      }
      (**(code **)(**(longlong **)(lVar8 + 0x138) + 0x18))(*(longlong **)(lVar8 + 0x138),&local_28);
      uVar7 = (undefined7)((ulonglong)&local_28 >> 8);
      if (local_20 == param_1[4]) {
        uVar6 = CONCAT71(uVar7,1);
        if (1 < (int)local_20) {
          lVar8 = 0;
          while( true ) {
            uVar1 = *(ushort *)(local_28 + lVar8);
            uVar3 = (uint)uVar1;
            uVar2 = *(ushort *)(*(longlong *)(param_1 + 2) + lVar8);
            uVar9 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_143fa433f;
              }
              iVar4 = uVar3 - uVar9;
              goto LAB_143fa437a;
            }
            if (uVar1 == 0) break;
LAB_143fa433f:
            lVar8 = lVar8 + 2;
          }
          iVar4 = 0;
LAB_143fa437a:
          uVar6 = CONCAT71(uVar7,iVar4 == 0);
        }
      }
      else {
        uVar6 = CONCAT71(uVar7,param_1[4] + local_20 == 1);
      }
      if (local_28 != 0) {
        FUN_1400020a8();
      }
      goto LAB_143fa42bc;
    }
  }
  uVar6 = 0;
LAB_143fa42bc:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa439a FUN_143fa439a body=57 status=ok
// SIG undefined FUN_143fa439a(void)

undefined8 * FUN_143fa439a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b540f40;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa43e8 FUN_143fa43e8 body=167 status=ok
// SIG undefined FUN_143fa43e8(void)

void FUN_143fa43e8(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5407d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b540f40;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143fa4490 FUN_143fa4490 body=167 status=ok
// SIG undefined FUN_143fa4490(void)

void FUN_143fa4490(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5407d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b540f40;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  return;
}



// FUNCTION 143fa4538 FUN_143fa4538 body=206 status=ok
// SIG undefined FUN_143fa4538(void)

void FUN_143fa4538(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14b5407d0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14b540f40;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  DVar1 = *(DWORD *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  p_Var2->Flags = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2->CreatorBackTraceIndexHigh = 0;
    p_Var2->SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->EntryCount,DVar1,0);
    memcpy(*(void **)&p_Var2->EntryCount,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fa45f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa4610 FUN_143fa4610 body=20 status=ok
// SIG undefined FUN_143fa4610(void)

undefined1 FUN_143fa4610(longlong param_1)

{
  FUN_143fa4624(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa4624 FUN_143fa4624 body=319 status=ok
// SIG undefined FUN_143fa4624(void)

ulonglong FUN_143fa4624(uint *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[1] != 0) {
    uVar3 = *param_1;
    uVar6 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_143fa473d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((*(uint *)(plVar5 + 2) == param_1[1] && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar7 = *plVar5;
      }
      else {
        lVar7 = 0;
      }
      (**(code **)(**(longlong **)(lVar7 + 0x138) + 0x18))(*(longlong **)(lVar7 + 0x138),&local_28);
      if (local_20 == param_1[4]) {
        bVar9 = true;
        if (1 < (int)local_20) {
          lVar7 = 0;
          while( true ) {
            uVar1 = *(ushort *)(local_28 + lVar7);
            uVar3 = (uint)uVar1;
            uVar2 = *(ushort *)(*(longlong *)(param_1 + 2) + lVar7);
            uVar8 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_143fa46ee;
              }
              iVar4 = uVar3 - uVar8;
              goto LAB_143fa4729;
            }
            if (uVar1 == 0) break;
LAB_143fa46ee:
            lVar7 = lVar7 + 2;
          }
          iVar4 = 0;
LAB_143fa4729:
          bVar9 = iVar4 == 0;
        }
      }
      else {
        bVar9 = param_1[4] + local_20 == 1;
      }
      if (local_28 != 0) {
        FUN_1400020a8();
      }
      uVar6 = CONCAT71((int7)((ulonglong)&local_28 >> 8),bVar9) ^ 1;
      goto LAB_143fa473d;
    }
  }
  uVar6 = 0;
LAB_143fa473d:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa4764 FUN_143fa4764 body=29 status=ok
// SIG undefined FUN_143fa4764(void)

undefined8 FUN_143fa4764(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa4796 FUN_143fa4796 body=101 status=ok
// SIG undefined FUN_143fa4796(void)

void FUN_143fa4796(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540fb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143fa47fc FUN_143fa47fc body=101 status=ok
// SIG undefined FUN_143fa47fc(void)

void FUN_143fa47fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b540fb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143fa4862 FUN_143fa4862 body=134 status=ok
// SIG undefined FUN_143fa4862(void)

void FUN_143fa4862(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b540fb0;
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
                    /* WARNING: Could not recover jumptable at 0x000143fa48d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143fa48f2 FUN_143fa48f2 body=20 status=ok
// SIG undefined FUN_143fa48f2(void)

undefined1 FUN_143fa48f2(longlong param_1)

{
  FUN_143fa4906(param_1 + 0x18);
  return 1;
}



// FUNCTION 143fa4906 FUN_143fa4906 body=208 status=ok
// SIG undefined FUN_143fa4906(void)

byte FUN_143fa4906(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(uint *)(puVar4 + 2) == param_1[1])) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar4;
      }
      else {
        uVar3 = 0;
      }
      FUN_148b05ade(uVar3,&local_28);
      if ((local_28 == (float)param_1[2]) && (!NAN(local_28) && !NAN((float)param_1[2]))) {
        if ((local_24 == (float)param_1[3]) && (!NAN(local_24) && !NAN((float)param_1[3]))) {
          if ((local_20 == (float)param_1[4]) && (!NAN(local_20) && !NAN((float)param_1[4]))) {
            bVar2 = -((float)param_1[5] == local_1c) & 1;
            goto LAB_143fa495e;
          }
        }
      }
    }
  }
  bVar2 = 0;
LAB_143fa495e:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143fa49d8 FUN_143fa49d8 body=29 status=ok
// SIG undefined FUN_143fa49d8(void)

undefined8 FUN_143fa49d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143fa4a0a FUN_143fa4a0a body=101 status=ok
// SIG undefined FUN_143fa4a0a(void)

void FUN_143fa4a0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b541020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 143fa4a70 FUN_143fa4a70 body=101 status=ok
// SIG undefined FUN_143fa4a70(void)

void FUN_143fa4a70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b541020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}


