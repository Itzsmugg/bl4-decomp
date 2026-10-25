// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1433eddd8 FUN_1433eddd8 body=185 status=ok
// SIG undefined FUN_1433eddd8(void)

void FUN_1433eddd8(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[0xd] = 0xffffffffffffffff;
  if ((param_1[0xc] != 0) && (plVar1 = *(longlong **)(param_2 + 0x148), plVar1 != (longlong *)0x0))
  {
    cVar2 = (**(code **)(*plVar1 + 0x4c8))(plVar1);
    if (cVar2 != '\0') {
      lVar4 = FUN_140229858(plVar1,param_1[0xc]);
      if (lVar4 != 0) {
        FUN_1402299d4(lVar4,local_98);
        puVar6 = local_98;
        puVar7 = param_1;
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        uVar3 = FUN_144909502(plVar1,*(undefined8 *)(lVar4 + 0x30));
        *(undefined4 *)(param_1 + 0xd) = uVar3;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433ede92 FUN_1433ede92 body=173 status=ok
// SIG undefined FUN_1433ede92(void)

bool FUN_1433ede92(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((char)param_1[3] == '\0') {
    *(undefined1 *)(param_1 + 3) = 1;
    if ((*param_1 != 0) && (param_1[1] != 0)) {
      local_20 = 0;
      FUN_1478f826c(param_2,*param_1,param_1 + 2,&local_20);
      if (local_20 != 0) {
        uVar1 = 0xffffffff;
        if (0 < (longlong)*(int *)(local_20 + 0x18)) {
          plVar3 = *(longlong **)(local_20 + 0x10);
          lVar2 = 0;
          do {
            if (*plVar3 == param_1[1]) {
              uVar1 = (undefined4)lVar2;
              break;
            }
            lVar2 = lVar2 + 1;
            plVar3 = plVar3 + 0xf;
          } while (*(int *)(local_20 + 0x18) != lVar2);
        }
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(int *)((longlong)param_1 + 0x14) != -1;
}



// FUNCTION 1433edf40 FUN_1433edf40 body=295 status=ok
// SIG undefined FUN_1433edf40(void)

undefined1 FUN_1433edf40(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_1[2] == '\0') {
    *(undefined2 *)(param_1 + 2) = 0x101;
    if (1 < (longlong)(int)param_1[1]) {
      local_58 = (longlong *)0x0;
      uStack_50 = 0;
      plVar6 = (longlong *)*param_1;
      plVar3 = (longlong *)((longlong)(int)param_1[1] * 0x1c + (longlong)plVar6);
      lVar7 = 0;
      do {
        lVar5 = *plVar6;
        lVar8 = lVar5;
        if ((lVar7 != 0) && (lVar8 = lVar7, lVar5 != lVar7 && lVar5 != 0)) {
          *(undefined1 *)((longlong)param_1 + 0x12) = 1;
          lVar5 = *plVar6;
        }
        lVar7 = plVar6[1];
        lVar2 = (longlong)(int)uStack_50;
        if (lVar2 != 0) {
          plVar4 = local_58;
          do {
            if ((*plVar4 == lVar5) && (plVar4[1] == lVar7)) {
              *(undefined1 *)((longlong)param_1 + 0x11) = 0;
              goto LAB_1433ee021;
            }
            plVar4 = plVar4 + 2;
          } while (plVar4 != local_58 + lVar2 * 2);
        }
        uVar1 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar1);
        if (uStack_50._4_4_ < uVar1) {
          FUN_140d6f884(&local_58);
        }
        local_58[lVar2 * 2] = lVar5;
        local_58[lVar2 * 2 + 1] = lVar7;
LAB_1433ee021:
        plVar6 = (longlong *)((longlong)plVar6 + 0x1c);
        lVar7 = lVar8;
      } while (plVar6 != plVar3);
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(undefined1 *)((longlong)param_1 + 0x11);
}



// FUNCTION 1433ee068 FUN_1433ee068 body=135 status=ok
// SIG undefined FUN_1433ee068(void)

void FUN_1433ee068(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((((char)param_1[3] == '\0') && (*(undefined1 *)(param_1 + 3) = 1, *param_1 != 0)) &&
     (param_1[1] != 0)) {
    if ((int)param_1[2] == -1) {
      uVar1 = FUN_1478f81ec(param_2);
      *(undefined4 *)(param_1 + 2) = uVar1;
    }
    if ((*(int *)((longlong)param_1 + 0x14) == -1) &&
       (lVar2 = FUN_1478f816c(param_2,*param_1), lVar2 != 0)) {
      uVar1 = 0xffffffff;
      if (0 < (longlong)*(int *)(lVar2 + 0x18)) {
        plVar4 = *(longlong **)(lVar2 + 0x10);
        lVar3 = 0;
        do {
          if (*plVar4 == param_1[1]) {
            uVar1 = (undefined4)lVar3;
            break;
          }
          lVar3 = lVar3 + 1;
          plVar4 = plVar4 + 0xf;
        } while (*(int *)(lVar2 + 0x18) != lVar3);
      }
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
    }
  }
  return;
}



// FUNCTION 1433ee0f0 FUN_1433ee0f0 body=113 status=ok
// SIG undefined FUN_1433ee0f0(void)

void FUN_1433ee0f0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if ((char)param_1[4] == '\0') {
    *(undefined1 *)(param_1 + 4) = 1;
    if (((*param_1 != 0) && (param_1[1] != 0)) && (param_1[2] != 0)) {
      if ((int)param_1[3] == -1) {
        uVar1 = FUN_1478f81ec(param_2);
        *(undefined4 *)(param_1 + 3) = uVar1;
      }
      if (*(int *)((longlong)param_1 + 0x1c) == -1) {
        lVar2 = FUN_1478f816c(param_2,*param_1);
        if (lVar2 != 0) {
          uVar1 = FUN_14792ce06(lVar2,param_1 + 1,param_1 + 2);
          *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
        }
      }
    }
  }
  return;
}



// FUNCTION 1433ee162 FUN_1433ee162 body=1367 status=ok
// SIG undefined FUN_1433ee162(void)

void FUN_1433ee162(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  longlong local_68 [2];
  undefined4 local_58;
  undefined1 local_54;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1468d96f0;
      local_80 = 0;
      local_88 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar3 = *(code **)(*plVar6 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar6 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar6);
          if (cVar7 != '\0') {
            (**(code **)(*plVar6 + 0xa0))(plVar6,lVar4,&local_48);
            goto LAB_1433ee334;
          }
        }
        plVar11 = (longlong *)(lVar4 + *(int *)((longlong)plVar6 + 0x44));
        if (plVar11 != &local_48) {
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,&local_48,plVar11,(int)plVar6[6]);
          }
          else {
            memcpy(&local_48,plVar11,
                   (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar6[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar6,&local_48,lVar4,1);
      }
      else {
        (*pcVar3)(plVar6,&local_48,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar9;
        puVar9 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
LAB_1433ee334:
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar3 = *(code **)(*plVar6 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar6 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar6);
          if (cVar7 != '\0') {
            (**(code **)(*plVar6 + 0xa0))(plVar6,lVar4,local_68);
            goto LAB_1433ee4d3;
          }
        }
        plVar11 = (longlong *)(lVar4 + *(int *)((longlong)plVar6 + 0x44));
        if (plVar11 != local_68) {
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,local_68,plVar11,(int)plVar6[6]);
          }
          else {
            memcpy(local_68,plVar11,
                   (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar6[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar6,local_68,lVar4,1);
      }
      else {
        (*pcVar3)(plVar6,local_68,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar9;
        puVar9 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_68[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_68);
    }
  }
LAB_1433ee4d3:
  lVar4 = local_48;
  plVar6 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar12 = 0;
  if (local_48 != 0) {
    plVar11 = plVar6;
    if (plVar6 == (longlong *)0x0) {
      plVar11 = local_68;
    }
    if (*(char *)((longlong)plVar11 + 0x14) == '\0') {
      plVar10 = plVar6;
      if (plVar6 == (longlong *)0x0) {
        plVar10 = local_68;
      }
      *(undefined1 *)((longlong)plVar11 + 0x14) = 1;
      if (*plVar10 != 0) {
        plVar11 = plVar6;
        if (plVar6 == (longlong *)0x0) {
          plVar11 = local_68;
        }
        if (plVar11[1] != 0) {
          uVar8 = FUN_1478f8300(lVar4,*plVar10,plVar11[1],0);
          plVar11 = plVar6;
          if (plVar6 == (longlong *)0x0) {
            plVar11 = local_68;
          }
          *(undefined4 *)(plVar11 + 2) = uVar8;
        }
      }
    }
    plVar11 = local_68;
    if (plVar6 != (longlong *)0x0) {
      plVar11 = plVar6;
    }
    if ((int)plVar11[2] != -1) {
      uVar12 = FUN_1478ee348(lVar4);
    }
  }
  *param_3 = uVar12;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433ee6ba FUN_1433ee6ba body=1367 status=ok
// SIG undefined FUN_1433ee6ba(void)

void FUN_1433ee6ba(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  longlong local_68 [2];
  undefined4 local_58;
  undefined1 local_54;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1468d96f0;
      local_80 = 0;
      local_88 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar3 = *(code **)(*plVar6 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar6 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar6);
          if (cVar7 != '\0') {
            (**(code **)(*plVar6 + 0xa0))(plVar6,lVar4,&local_48);
            goto LAB_1433ee88c;
          }
        }
        plVar11 = (longlong *)(lVar4 + *(int *)((longlong)plVar6 + 0x44));
        if (plVar11 != &local_48) {
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,&local_48,plVar11,(int)plVar6[6]);
          }
          else {
            memcpy(&local_48,plVar11,
                   (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar6[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar6,&local_48,lVar4,1);
      }
      else {
        (*pcVar3)(plVar6,&local_48,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar9;
        puVar9 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
LAB_1433ee88c:
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar6[3];
    if ((*(byte *)((longlong)plVar6 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar6 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar3 = *(code **)(*plVar6 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar6 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar6);
          if (cVar7 != '\0') {
            (**(code **)(*plVar6 + 0xa0))(plVar6,lVar4,local_68);
            goto LAB_1433eea2b;
          }
        }
        plVar11 = (longlong *)(lVar4 + *(int *)((longlong)plVar6 + 0x44));
        if (plVar11 != local_68) {
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,local_68,plVar11,(int)plVar6[6]);
          }
          else {
            memcpy(local_68,plVar11,
                   (longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar6[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar6,local_68,lVar4,1);
      }
      else {
        (*pcVar3)(plVar6,local_68,lVar4);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar9;
        puVar9 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar6);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_68[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_68);
    }
  }
LAB_1433eea2b:
  lVar4 = local_48;
  plVar6 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar12 = 0;
  if (local_48 != 0) {
    plVar11 = plVar6;
    if (plVar6 == (longlong *)0x0) {
      plVar11 = local_68;
    }
    if (*(char *)((longlong)plVar11 + 0x14) == '\0') {
      plVar10 = plVar6;
      if (plVar6 == (longlong *)0x0) {
        plVar10 = local_68;
      }
      *(undefined1 *)((longlong)plVar11 + 0x14) = 1;
      if (*plVar10 != 0) {
        plVar11 = plVar6;
        if (plVar6 == (longlong *)0x0) {
          plVar11 = local_68;
        }
        if (plVar11[1] != 0) {
          uVar8 = FUN_1478f8300(lVar4,*plVar10,plVar11[1],0);
          plVar11 = plVar6;
          if (plVar6 == (longlong *)0x0) {
            plVar11 = local_68;
          }
          *(undefined4 *)(plVar11 + 2) = uVar8;
        }
      }
    }
    plVar11 = local_68;
    if (plVar6 != (longlong *)0x0) {
      plVar11 = plVar6;
    }
    if ((int)plVar11[2] != -1) {
      uVar12 = FUN_1478ee46a(lVar4);
    }
  }
  *param_3 = uVar12;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433eec12 FUN_1433eec12 body=55 status=ok
// SIG undefined FUN_1433eec12(void)

void FUN_1433eec12(void)

{
  undefined8 uVar1;
  
  if (DAT_14caccf10 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caccf10 = FUN_14171c317(FUN_1463a9679,uVar1,L"ETransformCurveChannel");
  }
  return;
}



// FUNCTION 1433eec49 FUN_1433eec49 body=55 status=ok
// SIG undefined FUN_1433eec49(void)

void FUN_1433eec49(void)

{
  undefined8 uVar1;
  
  if (DAT_14caccf28 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caccf28 = FUN_14171c317(FUN_1463a96a8,uVar1,L"EVectorCurveChannel");
  }
  return;
}



// FUNCTION 1433eec80 FUN_1433eec80 body=55 status=ok
// SIG undefined FUN_1433eec80(void)

void FUN_1433eec80(void)

{
  undefined8 uVar1;
  
  if (DAT_14caccfe8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caccfe8 = FUN_14171c317(FUN_1463a99e2,uVar1,L"EPostCopyOperation");
  }
  return;
}



// FUNCTION 1433eecc8 FUN_1433eecc8 body=55 status=ok
// SIG undefined FUN_1433eecc8(void)

void FUN_1433eecc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd130 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd130 = FUN_14171c317(FUN_1463aa05a,uVar1,L"EAnimAlphaInputType");
  }
  return;
}



// FUNCTION 1433eecff FUN_1433eecff body=55 status=ok
// SIG undefined FUN_1433eecff(void)

void FUN_1433eecff(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd160 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd160 = FUN_14171c317(FUN_1463aa0f4,uVar1,L"EMirrorRowType");
  }
  return;
}



// FUNCTION 1433eed36 FUN_1433eed36 body=55 status=ok
// SIG undefined FUN_1433eed36(void)

void FUN_1433eed36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd178 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd178 = FUN_14171c317(FUN_1463aa123,uVar1,L"EMirrorFindReplaceMethod");
  }
  return;
}



// FUNCTION 1433eed6e FUN_1433eed6e body=355 status=ok
// SIG undefined FUN_1433eed6e(void)

longlong * FUN_1433eed6e(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (lVar1 == 0) {
    if (0 < *(int *)(param_1 + 0x110)) {
      return (longlong *)(param_1 + 0x108);
    }
    lVar8 = *(longlong *)(param_1 + 0x40);
    if (lVar8 == 0) {
LAB_1433eee65:
      if (DAT_14cacd2d0 <=
          *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110)) {
        return &DAT_14cacd2c0;
      }
      FUN_144b3d300(&DAT_14cacd2d0);
      if (DAT_14cacd2d0 != -1) {
        return &DAT_14cacd2c0;
      }
      DAT_14cacd2c0 = 0;
      uRam000000014cacd2c8 = 0;
      atexit((_func_5014 *)&LAB_1433f06d3);
      _Init_thread_footer(&DAT_14cacd2d0);
      return &DAT_14cacd2c0;
    }
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x40);
    if (lVar8 == 0) goto LAB_1433eee65;
    if (*(int *)(lVar8 + 0x1c0) != *(int *)(lVar8 + 0x1ec)) {
      uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
      uVar7 = (uint)lVar1 & 0xffff;
      lVar5 = lVar8 + 0x1f0;
      if (*(longlong *)(lVar8 + 0x1f8) != 0) {
        lVar5 = *(longlong *)(lVar8 + 0x1f8);
      }
      iVar4 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(lVar8 + 0x200) - 1U &
                               (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar7) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          plVar6 = (longlong *)(*(longlong *)(lVar8 + 0x1b8) + (longlong)iVar4 * 0x28);
          if (*plVar6 == lVar1) goto LAB_1433eee39;
          iVar4 = (int)plVar6[4];
        } while (iVar4 != -1);
      }
    }
    plVar6 = (longlong *)0x0;
LAB_1433eee39:
    plVar3 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 != (longlong *)0x0) {
      return plVar3 + 1;
    }
  }
  return (longlong *)(lVar8 + 0x80);
}



// FUNCTION 1433eeed2 FUN_1433eeed2 body=6140 status=ok
// SIG undefined FUN_1433eeed2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1433eeed2(double *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  DWORD DVar27;
  DWORD DVar28;
  DWORD dwTlsIndex;
  uint *puVar29;
  int *piVar30;
  longlong *plVar31;
  double *pdVar32;
  longlong *plVar33;
  undefined8 uVar34;
  double *pdVar35;
  double *pdVar36;
  int iVar37;
  longlong lVar38;
  ulonglong uVar39;
  undefined1 (*pauVar40) [16];
  longlong *plVar41;
  uint uVar42;
  longlong *plVar43;
  undefined8 *puVar44;
  undefined8 *puVar45;
  longlong lVar46;
  longlong lVar47;
  ulonglong uVar48;
  longlong lVar49;
  ulonglong uVar50;
  int iVar51;
  bool bVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  double dVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  double dVar87;
  undefined1 auVar86 [16];
  undefined1 auVar88 [16];
  double dVar89;
  double dVar99;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  double dVar90;
  double dVar100;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  double dVar101;
  double dVar104;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined4 uVar105;
  undefined4 uVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  double dVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  double dVar116;
  double dVar117;
  undefined8 uVar120;
  undefined1 auVar118 [16];
  double dVar121;
  undefined1 auVar119 [16];
  double dVar122;
  double dVar123;
  double dVar127;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  double dVar128;
  undefined1 auVar126 [16];
  undefined1 auStack_258 [32];
  int local_238;
  double *local_230;
  longlong local_228;
  char local_220;
  ulonglong local_210;
  longlong *local_208;
  longlong *local_200;
  longlong local_1f8;
  longlong local_1f0;
  double local_1e8;
  double dStack_1e0;
  double *local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [24];
  longlong *local_1a0;
  double local_198;
  longlong *local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  double local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [12];
  undefined4 uStack_10c;
  undefined1 local_108 [24];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (0 < *(int *)(param_3 + 0x28)) {
    plVar43 = (longlong *)*param_2;
    dVar81 = (double)param_2[1];
    lVar47 = plVar43[2];
    local_198 = param_1[8];
    if (*(char *)(param_1 + 0x1f) == '\x01') {
      FUN_142400d60(*plVar43,(int)plVar43[1]);
    }
    else {
      FUN_1448859f0(plVar43,lVar47);
    }
    uVar42 = *(uint *)(param_1 + 0x16);
    uVar39 = (ulonglong)uVar42;
    if (*(int *)(lVar47 + 0x44) == 0) {
LAB_1433f060e:
      uVar34 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar47 + 0x40);
      uVar34 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar45 = (undefined8 *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar45 == (undefined8 *)0x0) ||
           ((*(int *)(puVar45 + 2) != *(int *)(lVar47 + 0x44) ||
            ((*(uint *)(puVar45 + 1) & 0x10200000) != 0)))) goto LAB_1433f060e;
        uVar34 = *puVar45;
      }
    }
    local_1a0 = plVar43;
    puVar29 = (uint *)FUN_14481774e(DAT_14cacd528,param_1[8],uVar34);
    local_210 = uVar39;
    local_1f0 = param_3;
    if (*(int *)(param_3 + 0x28) == 1) {
      iVar37 = *(int *)(*(longlong *)(param_3 + 0x20) + 8);
      if ((longlong)iVar37 != -1) {
        plVar43 = (longlong *)((longlong)iVar37 * 0x20);
        fVar57 = *(float *)(*(longlong *)(param_3 + 0x20) + 0xc);
        if (*(char *)(param_1 + 0x1f) == '\0') {
          if (1.0 <= fVar57) {
            fVar57 = 1.0;
          }
          if (fVar57 <= 0.0) goto LAB_1433efc00;
        }
        if (1e-05 < fVar57) {
          local_1f8 = lVar47;
          FUN_1416d5848(param_1 + 0x11,(longlong)param_1[0x1b] + (longlong)plVar43,dVar81);
          uVar39 = CONCAT71((int7)((ulonglong)lVar47 >> 8),1);
          if (0 < (int)uVar42) {
            dVar89 = (double)(1.0 - fVar57);
            dVar99 = (double)(1.0 - fVar57);
            dVar101 = (double)fVar57;
            dVar104 = (double)fVar57;
            local_1c8 = ZEXT416((uint)ABS(fVar57 + -1.0));
            uVar53 = (undefined4)DAT_149934d80;
            uVar55 = DAT_149934d80._4_4_;
            uVar105 = DAT_149934d80._8_4_;
            uVar106 = DAT_149934d80._12_4_;
            dVar81 = DAT_149934d80._8_8_ - dVar104;
            local_1b8._8_4_ = SUB84(dVar81,0);
            local_1b8._0_8_ = (double)DAT_149934d80 - dVar101;
            local_1b8._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
            uVar50 = 0;
            uVar34 = 0;
            uVar120 = 0x3ff0000000000000;
            do {
              if ((((((puVar29[1] == 0) || (uVar42 = *puVar29, (int)uVar42 < 0)) ||
                    (DAT_14c9647dc <= (int)uVar42)) ||
                   ((lVar47 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8),
                    lVar47 == 0 || (*(uint *)(lVar47 + 0x10) != puVar29[1])))) ||
                  ((*(uint *)(lVar47 + 8) & 0x10200000) != 0)) ||
                 (((puVar29[3] == 0 || (uVar42 = puVar29[2], (int)uVar42 < 0)) ||
                  ((DAT_14c9647dc <= (int)uVar42 ||
                   (((lVar47 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8),
                     lVar47 == 0 || (*(uint *)(lVar47 + 0x10) != puVar29[3])) ||
                    ((*(uint *)(lVar47 + 8) & 0x10200000) != 0)))))))) {
                piVar30 = (int *)(uVar50 * 4 + (longlong)param_1[0x17]);
LAB_1433ef1d0:
                iVar51 = *piVar30;
                if ((-1 < (longlong)iVar51) && (iVar51 < *(int *)(local_1f8 + 0x88))) {
                  iVar4 = *(int *)(*(longlong *)(local_1f8 + 0x80) + (longlong)iVar51 * 4);
                  lVar47 = (longlong)iVar4;
                  local_160 = (double)CONCAT44(local_160._4_4_,iVar4);
                  if ((lVar47 != -1) &&
                     ((*(int *)(param_3 + 0x38) <= iVar4 ||
                      (*(char *)(*(longlong *)(param_3 + 0x30) + lVar47) == '\x01')))) {
                    lVar46 = (longlong)*(int *)((longlong)param_1[0x19] + 8 + uVar50 * 0x10);
                    if (lVar46 != 0) {
                      lVar49 = *(longlong *)((longlong)param_1[0x19] + uVar50 * 0x10);
                      uVar48 = 0;
                      lVar38 = 0;
LAB_1433ef24b:
                      if (*(int *)(lVar49 + uVar48) != iVar37) goto code_r0x0001433ef251;
                      if ((~uVar48 & 0x7fffffff8) == 0) goto LAB_1433ef85a;
                      local_1d8 = (double *)(lVar47 * 0x60 + *local_1a0);
                      pauVar40 = (undefined1 (*) [16])
                                 ((longlong)*(int *)(lVar49 + 4 + (lVar38 >> 0x20) * 8) * 0x60 +
                                 *(longlong *)((longlong)param_1[0x1b] + (longlong)plVar43));
                      if (*(char *)(param_1 + 0x1f) == '\x01') {
                        auVar83 = *pauVar40;
                        auVar94 = pauVar40[1];
                        dVar81 = *(double *)pauVar40[2];
                        dVar87 = *(double *)(pauVar40[2] + 8);
                        dVar121 = *(double *)pauVar40[3];
                        dVar66 = *(double *)pauVar40[4];
                        dVar113 = *(double *)(pauVar40[4] + 8);
                        dVar116 = *(double *)pauVar40[5];
                        auVar92 = auVar94;
                        auVar114 = auVar83;
                        dVar122 = dVar116;
                        dVar127 = dVar66;
                        dVar90 = dVar113;
                        dVar100 = dVar81;
                        dVar123 = dVar87;
                        dVar128 = dVar121;
                        if (fVar57 < 0.99999) {
                          auVar23._8_8_ = DAT_14c8463d8;
                          auVar23._0_8_ = DAT_14c8463d0;
                          auVar24._8_8_ = DAT_14c8463e8;
                          auVar24._0_8_ = DAT_14c8463e0;
                          auVar92 = auVar24;
                          auVar114 = auVar23;
                          dVar122 = DAT_14c8464f0;
                          dVar127 = DAT_14c8464e0;
                          dVar90 = DAT_14c8464e8;
                          dVar100 = DAT_14c8464e0;
                          dVar123 = DAT_14c8464e8;
                          dVar128 = DAT_14c8464f0;
                          if ((1e-05 < fVar57) &&
                             (auVar92 = auVar94, auVar114 = auVar83, dVar122 = dVar116,
                             dVar127 = dVar66, dVar90 = dVar113, dVar100 = dVar81, dVar123 = dVar87,
                             dVar128 = dVar121, 1e-05 < (float)local_1c8._0_4_)) {
                            dVar122 = DAT_14c8463e0 * auVar94._0_8_ +
                                      (double)DAT_14c8463d0 * auVar83._0_8_;
                            dVar127 = DAT_14c8463e8 * auVar94._8_8_ + DAT_14c8463d8 * auVar83._8_8_;
                            lVar47 = -(ulonglong)(0.0 <= dVar122 + dVar127);
                            lVar46 = -(ulonglong)(0.0 <= dVar122 + dVar127);
                            uVar53 = (undefined4)lVar46;
                            uVar55 = (undefined4)((ulonglong)lVar46 >> 0x20);
                            auVar124._0_8_ = 0.0 - (double)DAT_14c8463d0;
                            auVar124._8_8_ = 0.0 - DAT_14c8463d8;
                            auVar5._8_4_ = uVar53;
                            auVar5._0_8_ = lVar47;
                            auVar5._12_4_ = uVar55;
                            auVar125 = blendvpd(auVar124,auVar23,auVar5);
                            auVar91._0_8_ = 0.0 - DAT_14c8463e0;
                            auVar91._8_8_ = 0.0 - DAT_14c8463e8;
                            auVar6._8_4_ = uVar53;
                            auVar6._0_8_ = lVar47;
                            auVar6._12_4_ = uVar55;
                            auVar92 = blendvpd(auVar91,auVar24,auVar6);
                            dVar123 = auVar125._0_8_ * (double)local_1b8._0_8_ +
                                      auVar83._0_8_ * dVar101;
                            dVar128 = auVar125._8_8_ * (double)local_1b8._8_8_ +
                                      auVar83._8_8_ * dVar104;
                            dVar90 = auVar92._0_8_ * (double)local_1b8._0_8_ +
                                     auVar94._0_8_ * dVar101;
                            dVar100 = auVar92._8_8_ * (double)local_1b8._8_8_ +
                                      auVar94._8_8_ * dVar104;
                            dVar122 = dVar90 * dVar90 + dVar123 * dVar123;
                            dVar127 = dVar100 * dVar100 + dVar128 * dVar128;
                            auVar82._0_8_ = dVar122 + dVar127;
                            auVar82._8_8_ = dVar122 + dVar127;
                            uVar48 = -(ulonglong)(1e-08 <= auVar82._8_8_);
                            auVar83 = sqrtpd(auVar82,auVar82);
                            auVar83 = divpd(_DAT_149934d80,auVar83);
                            auVar107._0_8_ = auVar83._0_8_ * dVar90;
                            auVar107._8_8_ = auVar83._8_8_ * dVar100;
                            auVar7._8_4_ = (int)uVar48;
                            auVar7._0_8_ = -(ulonglong)(1e-08 <= auVar82._0_8_);
                            auVar7._12_4_ = (int)(uVar48 >> 0x20);
                            auVar92 = blendvpd(_DAT_149935300,auVar107,auVar7);
                            auVar114._8_8_ = (ulonglong)(dVar128 * auVar83._8_8_) & uVar48;
                            auVar114._0_8_ =
                                 (ulonglong)(dVar123 * auVar83._0_8_) &
                                 -(ulonglong)(1e-08 <= auVar82._0_8_);
                            dVar122 = dVar116 * dVar101 + DAT_14c8464f0 * (double)local_1b8._0_8_;
                            dVar127 = dVar66 * dVar101 + DAT_14c8464e0 * (double)local_1b8._0_8_;
                            dVar90 = dVar113 * dVar104 + DAT_14c8464e8 * (double)local_1b8._8_8_;
                            dVar100 = dVar81 * dVar101 + DAT_14c8464e0 * (double)local_1b8._0_8_;
                            dVar123 = dVar87 * dVar104 + DAT_14c8464e8 * (double)local_1b8._8_8_;
                            dVar128 = dVar121 * dVar101 + DAT_14c8464f0 * (double)local_1b8._0_8_;
                          }
                        }
                        dVar81 = *local_1d8;
                        dVar87 = local_1d8[1];
                        dVar121 = local_1d8[2];
                        dVar66 = local_1d8[3];
                        auVar109._0_8_ = auVar92._8_8_;
                        auVar109._8_4_ = auVar92._8_4_;
                        auVar109._12_4_ = auVar92._12_4_;
                        auVar93._0_8_ = auVar114._0_8_;
                        auVar93._8_4_ = auVar114._0_4_;
                        auVar93._12_4_ = auVar114._4_4_;
                        auVar126._0_8_ = auVar114._8_8_;
                        auVar126._8_4_ = auVar114._8_4_;
                        auVar126._12_4_ = auVar114._12_4_;
                        auVar85._0_8_ = auVar92._0_8_;
                        auVar85._8_4_ = auVar92._0_4_;
                        auVar85._12_4_ = auVar92._4_4_;
                        dVar113 = dVar87 * auVar85._0_8_ * -1.0 +
                                  dVar121 * auVar126._0_8_ +
                                  auVar93._0_8_ * dVar66 * 1.0 + auVar109._0_8_ * dVar81;
                        dVar116 = dVar81 * auVar85._8_8_ * 1.0 +
                                  dVar66 * auVar126._8_8_ +
                                  auVar93._8_8_ * dVar121 * -1.0 + auVar109._8_8_ * dVar87;
                        dVar117 = dVar66 * auVar85._0_8_ * 1.0 +
                                  ((auVar93._0_8_ * dVar87 * 1.0 + auVar109._0_8_ * dVar121) -
                                  auVar126._0_8_ * dVar81);
                        dVar121 = dVar121 * auVar85._8_8_ * -1.0 +
                                  ((auVar93._8_8_ * dVar81 * -1.0 + auVar109._8_8_ * dVar66) -
                                  auVar126._8_8_ * dVar87);
                        dVar81 = dVar117 * dVar117 + dVar113 * dVar113;
                        dVar87 = dVar121 * dVar121 + dVar116 * dVar116;
                        auVar86._0_8_ = dVar81 + dVar87;
                        auVar86._8_8_ = dVar81 + dVar87;
                        uVar48 = -(ulonglong)(1e-08 <= auVar86._8_8_);
                        auVar83 = sqrtpd(auVar86,auVar86);
                        uVar53 = (undefined4)DAT_149934d80;
                        uVar55 = DAT_149934d80._4_4_;
                        uVar105 = DAT_149934d80._8_4_;
                        uVar106 = DAT_149934d80._12_4_;
                        auVar94 = divpd(_DAT_149934d80,auVar83);
                        auVar95._0_8_ = auVar94._0_8_ * dVar117;
                        auVar95._8_8_ = auVar94._8_8_ * dVar121;
                        uVar34 = (undefined8)DAT_149935300;
                        uVar120 = DAT_149935300._8_8_;
                        auVar8._8_4_ = (int)uVar48;
                        auVar8._0_8_ = -(ulonglong)(1e-08 <= auVar86._0_8_);
                        auVar8._12_4_ = (int)(uVar48 >> 0x20);
                        auVar83 = blendvpd(_DAT_149935300,auVar95,auVar8);
                        local_1d8[4] = dVar100 + local_1d8[4];
                        local_1d8[5] = dVar123 + local_1d8[5];
                        auVar68._8_8_ = 0;
                        auVar68._0_8_ = dVar128 + local_1d8[6];
                        *(undefined1 (*) [16])(local_1d8 + 6) = auVar68;
                        local_1d8[8] = dVar127 + local_1d8[8];
                        local_1d8[9] = dVar90 + local_1d8[9];
                        local_1d8[10] = dVar122 + local_1d8[10];
                        local_1d8[0xb] = 0.0;
                        *local_1d8 = (double)((ulonglong)(dVar113 * auVar94._0_8_) &
                                             -(ulonglong)(1e-08 <= auVar86._0_8_));
                        local_1d8[1] = (double)((ulonglong)(dVar116 * auVar94._8_8_) & uVar48);
                        *(undefined1 (*) [16])(local_1d8 + 2) = auVar83;
                        local_1e8 = dVar89;
                        dStack_1e0 = dVar99;
                      }
                      else if (0.99999 <= fVar57) {
                        pdVar32 = local_1d8;
                        for (lVar47 = 0xc; lVar47 != 0; lVar47 = lVar47 + -1) {
                          *pdVar32 = *(double *)*pauVar40;
                          pauVar40 = (undefined1 (*) [16])(*pauVar40 + 8);
                          pdVar32 = pdVar32 + 1;
                        }
                      }
                      else {
                        dVar87 = local_1d8[8];
                        dVar121 = local_1d8[9];
                        auVar60._0_8_ = local_1d8[10] * dVar89;
                        auVar60._8_8_ = local_1d8[0xb] * dVar99;
                        dVar66 = local_1d8[4];
                        dVar81 = local_1d8[5];
                        auVar76._0_8_ = local_1d8[6] * dVar89;
                        auVar76._8_8_ = local_1d8[7] * dVar99;
                        dVar113 = *local_1d8 * dVar89;
                        dVar116 = local_1d8[1] * dVar99;
                        dVar122 = local_1d8[2] * dVar89;
                        dVar127 = local_1d8[3] * dVar99;
                        *local_1d8 = dVar113;
                        local_1d8[1] = dVar116;
                        local_1d8[2] = dVar122;
                        local_1d8[3] = dVar127;
                        local_1d8[4] = dVar66 * dVar89;
                        local_1d8[5] = dVar81 * dVar99;
                        *(undefined1 (*) [16])(local_1d8 + 6) = auVar76;
                        local_1d8[8] = dVar87 * dVar89;
                        local_1d8[9] = dVar121 * dVar99;
                        *(undefined1 (*) [16])(local_1d8 + 10) = auVar60;
                        auVar108._0_8_ = *(double *)*pauVar40 * dVar101;
                        auVar108._8_8_ = *(double *)(*pauVar40 + 8) * dVar104;
                        auVar111._0_8_ = *(double *)pauVar40[1] * dVar101;
                        auVar111._8_8_ = *(double *)(pauVar40[1] + 8) * dVar104;
                        dVar90 = dVar122 * auVar111._0_8_ + dVar113 * auVar108._0_8_;
                        dVar100 = dVar127 * auVar111._8_8_ + dVar116 * auVar108._8_8_;
                        lVar47 = -(ulonglong)(0.0 <= dVar90 + dVar100);
                        lVar46 = -(ulonglong)(0.0 <= dVar90 + dVar100);
                        uVar54 = (undefined4)lVar46;
                        uVar56 = (undefined4)((ulonglong)lVar46 >> 0x20);
                        auVar115._0_8_ = 0.0 - auVar108._0_8_;
                        auVar115._8_8_ = 0.0 - auVar108._8_8_;
                        auVar10._8_4_ = uVar54;
                        auVar10._0_8_ = lVar47;
                        auVar10._12_4_ = uVar56;
                        auVar83 = blendvpd(auVar115,auVar108,auVar10);
                        auVar118._0_8_ = 0.0 - auVar111._0_8_;
                        auVar118._8_8_ = 0.0 - auVar111._8_8_;
                        auVar11._8_4_ = uVar54;
                        auVar11._0_8_ = lVar47;
                        auVar11._12_4_ = uVar56;
                        auVar94 = blendvpd(auVar118,auVar111,auVar11);
                        *local_1d8 = auVar83._0_8_ + dVar113;
                        local_1d8[1] = auVar83._8_8_ + dVar116;
                        local_1d8[2] = auVar94._0_8_ + dVar122;
                        local_1d8[3] = auVar94._8_8_ + dVar127;
                        dVar81 = *(double *)(pauVar40[2] + 8) * dVar104 + dVar81 * dVar99;
                        auVar84._0_8_ = *(double *)pauVar40[3] * dVar101 + auVar76._0_8_;
                        auVar84._8_8_ = *(double *)(pauVar40[3] + 8) * dVar104 + auVar76._8_8_;
                        auVar12._8_4_ = SUB84(dVar81,0);
                        auVar12._0_8_ = *(double *)pauVar40[2] * dVar101 + dVar66 * dVar89;
                        auVar12._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
                        *(undefined1 (*) [16])(local_1d8 + 4) = auVar12;
                        *(undefined1 (*) [16])(local_1d8 + 6) = auVar84;
                        dVar81 = *(double *)(pauVar40[4] + 8) * dVar104 + dVar121 * dVar99;
                        auVar67._0_8_ = *(double *)pauVar40[5] * dVar101 + auVar60._0_8_;
                        auVar67._8_8_ = *(double *)(pauVar40[5] + 8) * dVar104 + auVar60._8_8_;
                        auVar13._8_4_ = SUB84(dVar81,0);
                        auVar13._0_8_ = *(double *)pauVar40[4] * dVar101 + dVar87 * dVar89;
                        auVar13._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
                        *(undefined1 (*) [16])(local_1d8 + 8) = auVar13;
                        *(undefined1 (*) [16])(local_1d8 + 10) = auVar67;
                        local_1e8 = dVar89;
                        dStack_1e0 = dVar99;
                      }
                      cVar2 = *(char *)(param_1 + 0x1f);
                      plVar31 = (longlong *)FUN_1433eed6e(param_1);
                      dVar81 = param_1[0x20];
                      if (dVar81 == 0.0) {
                        pdVar32 = param_1;
                        if (0 < *(int *)(param_1 + 0x22)) {
LAB_1433ef75f:
                          local_208 = plVar43;
                          pdVar35 = pdVar32;
                          pdVar32 = pdVar35;
                          if ((double *)pdVar35[4] != (double *)0x0) goto code_r0x0001433ef76e;
                          goto LAB_1433ef789;
                        }
                        dVar81 = 0.0;
                      }
                      goto LAB_1433ef7a1;
                    }
                  }
                }
              }
              else {
                iVar51 = *(int *)((longlong)param_1[0x17] + uVar50 * 4);
                if ((-1 < (longlong)iVar51) && (iVar51 < (int)puVar29[6])) {
                  piVar30 = (int *)((longlong)iVar51 * 4 + *(longlong *)(puVar29 + 4));
                  goto LAB_1433ef1d0;
                }
              }
LAB_1433ef85a:
              uVar50 = uVar50 + 1;
            } while (uVar50 != local_210);
          }
          goto LAB_1433f0585;
        }
      }
    }
    else {
      dwTlsIndex = DAT_14c7612ec;
      local_1e8 = dVar81;
      local_1d8 = param_1;
      if (DAT_14c7612ec == 0xffffffff) {
        dwTlsIndex = TlsAlloc();
        DVar28 = 0xffffffff;
        LOCK();
        bVar52 = DAT_14c7612ec != 0xffffffff;
        DVar27 = dwTlsIndex;
        if (bVar52) {
          DVar28 = DAT_14c7612ec;
          DVar27 = DAT_14c7612ec;
        }
        DAT_14c7612ec = DVar27;
        UNLOCK();
        if (bVar52) {
          TlsFree(dwTlsIndex);
          dwTlsIndex = DVar28;
        }
      }
      pdVar32 = local_1d8;
      uVar39 = local_210;
      puVar45 = TlsGetValue(dwTlsIndex);
      if (puVar45 == (undefined8 *)0x0) {
        puVar45 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        *puVar45 = 0;
        puVar45[1] = 0;
        DVar28 = GetCurrentThreadId();
        *(DWORD *)(puVar45 + 1) = DVar28;
        *puVar45 = &PTR_FUN_14a7df828;
        puVar45[2] = 0;
        puVar45[3] = 0;
        puVar45[4] = 0;
        puVar45[5] = 0;
        puVar45[6] = 0;
        puVar45[7] = 0;
        puVar45[8] = 0;
        puVar45[9] = 0;
        FUN_140fddf04(puVar45);
        TlsSetValue(dwTlsIndex,puVar45);
      }
      plVar43 = puVar45 + 2;
      iVar37 = *(int *)(puVar45 + 3);
      iVar51 = (int)uVar39;
      if (iVar37 < iVar51) {
        *(int *)(puVar45 + 3) = iVar51;
        if ((uint)(*(int *)((longlong)puVar45 + 0x1c) - iVar37) < (uint)(iVar51 - iVar37)) {
          FUN_1417b86a8();
        }
      }
      else {
        if (iVar51 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar39);
        }
        if (iVar51 < iVar37) {
          *(int *)(puVar45 + 3) = iVar51;
        }
      }
      if (0 < iVar51) {
        lVar46 = 0;
        do {
          if (((((((puVar29[1] == 0) || (uVar42 = *puVar29, (int)uVar42 < 0)) ||
                 (DAT_14c9647dc <= (int)uVar42)) ||
                ((lVar49 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8),
                 lVar49 == 0 || (*(uint *)(lVar49 + 0x10) != puVar29[1])))) ||
               (((*(uint *)(lVar49 + 8) & 0x10200000) != 0 ||
                ((puVar29[3] == 0 || (uVar42 = puVar29[2], (int)uVar42 < 0)))))) ||
              (DAT_14c9647dc <= (int)uVar42)) ||
             (((lVar49 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8), lVar49 == 0
               || (*(uint *)(lVar49 + 0x10) != puVar29[3])) ||
              ((*(uint *)(lVar49 + 8) & 0x10200000) != 0)))) {
            piVar30 = (int *)((longlong)pdVar32[0x17] + lVar46);
LAB_1433ef985:
            iVar37 = *piVar30;
            uVar53 = 0xffffffff;
            if ((-1 < (longlong)iVar37) && (iVar37 < *(int *)(lVar47 + 0x88))) {
              uVar53 = *(undefined4 *)(*(longlong *)(lVar47 + 0x80) + (longlong)iVar37 * 4);
            }
          }
          else {
            iVar51 = *(int *)((longlong)pdVar32[0x17] + lVar46);
            iVar37 = -1;
            uVar53 = 0xffffffff;
            if ((-1 < (longlong)iVar51) && (iVar51 < (int)puVar29[6])) {
              piVar30 = (int *)((longlong)iVar51 * 4 + *(longlong *)(puVar29 + 4));
              goto LAB_1433ef985;
            }
          }
          *(int *)(*plVar43 + lVar46 * 2) = iVar37;
          *(undefined4 *)(*plVar43 + 4 + lVar46 * 2) = uVar53;
          lVar46 = lVar46 + 4;
        } while (uVar39 * 4 - lVar46 != 0);
      }
      local_1c8._0_8_ = param_1 + 0x11;
      cVar2 = *(char *)(pdVar32 + 0x1f);
      iVar37 = *(int *)(pdVar32 + 0x1c);
      plVar31 = puVar45 + 6;
      iVar51 = 0;
      *(undefined4 *)(puVar45 + 7) = 0;
      local_208 = plVar43;
      if (*(int *)((longlong)puVar45 + 0x3c) < 0) {
        FUN_14482f6fa(plVar31);
        iVar51 = *(int *)(puVar45 + 7);
      }
      uVar42 = iVar37 - iVar51;
      if (uVar42 == 0 || iVar37 < iVar51) {
        if (iVar37 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar37);
        }
        if (iVar37 < iVar51) {
          *(int *)(puVar45 + 7) = iVar37;
        }
      }
      else {
        *(int *)(puVar45 + 7) = iVar37;
        if ((uint)(*(int *)((longlong)puVar45 + 0x3c) - iVar51) < uVar42) {
          FUN_14475e4ac(plVar31);
        }
        memset((void *)((longlong)iVar51 * 4 + *plVar31),0,(longlong)(int)uVar42 << 2);
      }
      plVar43 = puVar45 + 4;
      *(undefined4 *)(puVar45 + 5) = 0;
      local_1f8 = lVar47;
      if (*(int *)((longlong)puVar45 + 0x2c) < 0) {
        FUN_14481578e(plVar43,0);
      }
      plVar1 = puVar45 + 8;
      *(undefined4 *)(puVar45 + 9) = 0;
      if (*(int *)((longlong)puVar45 + 0x4c) < 0) {
        FUN_14475e67c(plVar1,0);
      }
      local_200 = plVar31;
      FUN_1403ed7b2(plVar1,iVar37,0);
      iVar37 = *(int *)(local_1f0 + 0x28);
      if ((longlong)iVar37 < 1) {
        auVar83 = ZEXT816(0);
      }
      else {
        auVar83 = ZEXT816(0);
        lVar46 = 0;
        lVar47 = local_1f0;
        do {
          iVar51 = *(int *)(*(longlong *)(lVar47 + 0x20) + 8 + lVar46);
          lVar49 = (longlong)iVar51;
          if ((lVar49 != -1) &&
             (((fVar57 = *(float *)(*(longlong *)(lVar47 + 0x20) + 0xc + lVar46),
               *(char *)(local_1d8 + 0x1f) != '\x01' ||
               (iVar51 != *(int *)((longlong)local_1d8 + 0xfc))) && (1e-05 < fVar57)))) {
            *(float *)(puVar45[6] + lVar49 * 4) = fVar57;
            iVar4 = *(int *)(puVar45 + 5);
            *(uint *)(puVar45 + 5) = iVar4 + 1U;
            if (*(uint *)((longlong)puVar45 + 0x2c) < iVar4 + 1U) {
              FUN_1446f48e2(plVar43,iVar4);
            }
            auVar83._0_4_ = auVar83._0_4_ + fVar57;
            *(int *)(*plVar43 + (longlong)iVar4 * 4) = iVar51;
            *(undefined1 *)(*plVar1 + lVar49) = 1;
            lVar47 = local_1f0;
          }
          lVar46 = lVar46 + 0x10;
        } while ((longlong)iVar37 * 0x10 != lVar46);
      }
      pdVar32 = local_1d8;
      dVar81 = local_1e8;
      plVar31 = local_200;
      uVar39 = local_210;
      lVar47 = (longlong)*(int *)(puVar45 + 5);
      if (0 < lVar47) {
        lVar46 = *plVar43;
        uVar34 = local_1c8._0_8_;
        local_190 = plVar1;
        if ((cVar2 != '\0') || (auVar83._0_4_ <= 1.0)) {
          lVar49 = 0;
          do {
            FUN_1416d5848(uVar34,(longlong)*(int *)(lVar46 + lVar49) * 0x20 +
                                 (longlong)pdVar32[0x1b],dVar81);
            lVar49 = lVar49 + 4;
          } while (lVar47 * 4 != lVar49);
        }
        else {
          lVar49 = 0;
          do {
            *(float *)(*plVar31 + (longlong)*(int *)(lVar46 + lVar49) * 4) =
                 *(float *)(*plVar31 + (longlong)*(int *)(lVar46 + lVar49) * 4) / auVar83._0_4_;
            FUN_1416d5848(uVar34,(longlong)*(int *)(lVar46 + lVar49) * 0x20 +
                                 (longlong)pdVar32[0x1b],dVar81);
            lVar49 = lVar49 + 4;
          } while (lVar47 * 4 != lVar49);
        }
        plVar1 = local_190;
        plVar43 = local_1a0;
        local_158 = ZEXT816(0);
        local_148 = ZEXT816(0x3ff0000000000000) << 0x40;
        local_108._0_16_ = ZEXT816(0x3ff0000000000000);
        local_138 = ZEXT816(0);
        local_128 = ZEXT816(0);
        local_118 = ZEXT812(0x3ff0000000000000);
        uStack_10c = 0x3ff00000;
        if (0 < (int)uVar39) {
          uVar50 = 0;
          plVar41 = local_208;
          lVar47 = local_1f0;
LAB_1433efccc:
          iVar37 = *(int *)(*plVar41 + 4 + uVar50 * 8);
          lVar46 = (longlong)iVar37;
          if ((lVar46 != -1) &&
             ((*(int *)(lVar47 + 0x38) <= iVar37 ||
              (*(char *)(*(longlong *)(lVar47 + 0x30) + lVar46) == '\x01')))) {
            piVar30 = (int *)(*plVar41 + uVar50 * 8 + 4);
            local_1b8._0_8_ = piVar30;
            plVar33 = (longlong *)(uVar50 * 0x10 + (longlong)pdVar32[0x19]);
            cVar2 = *(char *)(pdVar32 + 0x1f);
            if ((cVar2 == '\0') && (uVar42 = *(uint *)(plVar33 + 1), uVar42 != 0)) {
LAB_1433efd4f:
              if (0 < (int)uVar42) {
                local_1c8._8_8_ = 0;
                local_1c8._0_8_ = DAT_14c8464f0;
                local_1d8 = DAT_14c8463d0;
                dStack_1d0 = DAT_14c8463d8;
                local_178._0_8_ = 0.0 - (double)DAT_14c8463d0;
                local_178._8_8_ = 0.0 - DAT_14c8463d8;
                local_1e8 = DAT_14c8463e0;
                dStack_1e0 = DAT_14c8463e8;
                local_188._8_4_ = SUB84(0.0 - DAT_14c8463e8,0);
                local_188._0_8_ = 0.0 - DAT_14c8463e0;
                local_188._12_4_ = (int)((ulonglong)(0.0 - DAT_14c8463e8) >> 0x20);
                auVar94 = ZEXT816(0);
                uVar39 = 0;
                bVar52 = false;
                do {
                  lVar47 = (longlong)*(int *)(*plVar33 + uVar39 * 8);
                  if (*(char *)(*plVar1 + lVar47) == '\x01') {
                    fVar57 = *(float *)(*plVar31 + lVar47 * 4);
                    auVar94._0_4_ = auVar94._0_4_ + fVar57;
                    pauVar40 = (undefined1 (*) [16])
                               ((longlong)*(int *)(*plVar33 + 4 + uVar39 * 8) * 0x60 +
                               *(longlong *)((longlong)pdVar32[0x1b] + lVar47 * 0x20));
                    if (bVar52) {
                      if (cVar2 != '\0') {
LAB_1433eff22:
                        auVar92 = *pauVar40;
                        auVar83 = pauVar40[1];
                        dVar81 = *(double *)pauVar40[2];
                        dVar89 = *(double *)(pauVar40[2] + 8);
                        dVar99 = *(double *)pauVar40[3];
                        dVar101 = *(double *)pauVar40[4];
                        dVar104 = *(double *)(pauVar40[4] + 8);
                        dVar87 = *(double *)pauVar40[5];
                        if (0.99999 <= fVar57) {
LAB_1433f00db:
                          uVar53 = SUB84(dVar99,0);
                          uVar55 = (undefined4)((ulonglong)dVar99 >> 0x20);
                          auVar63 = auVar92;
                          auVar125 = auVar83;
                          dVar121 = dVar101;
                          dVar66 = dVar104;
                          dVar113 = dVar81;
                          dVar116 = dVar89;
                          dVar122 = dVar87;
                        }
                        else {
                          auVar63._8_8_ = DAT_14c8463d8;
                          auVar63._0_8_ = DAT_14c8463d0;
                          auVar125._8_8_ = DAT_14c8463e8;
                          auVar125._0_8_ = DAT_14c8463e0;
                          uVar53 = SUB84(DAT_14c8464f0,0);
                          uVar55 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                          dVar121 = DAT_14c8464e0;
                          dVar66 = DAT_14c8464e8;
                          dVar113 = DAT_14c8464e0;
                          dVar116 = DAT_14c8464e8;
                          dVar122 = DAT_14c8464f0;
                          if (1e-05 < ABS(fVar57)) {
                            if (1e-05 < ABS(fVar57 + -1.0)) {
                              dVar113 = (double)fVar57;
                              dVar122 = (double)fVar57;
                              dVar90 = (double)DAT_149934d80 - dVar113;
                              dVar100 = DAT_149934d80._8_8_ - dVar122;
                              auVar26._8_8_ = DAT_14c8463d8;
                              auVar26._0_8_ = DAT_14c8463d0;
                              auVar25._8_8_ = DAT_14c8463e8;
                              auVar25._0_8_ = DAT_14c8463e0;
                              dVar121 = DAT_14c8463e0 * auVar83._0_8_ +
                                        (double)DAT_14c8463d0 * auVar92._0_8_;
                              dVar66 = DAT_14c8463e8 * auVar83._8_8_ + DAT_14c8463d8 * auVar92._8_8_
                              ;
                              lVar47 = -(ulonglong)(0.0 <= dVar121 + dVar66);
                              lVar46 = -(ulonglong)(0.0 <= dVar121 + dVar66);
                              uVar53 = (undefined4)lVar46;
                              uVar55 = (undefined4)((ulonglong)lVar46 >> 0x20);
                              auVar19._8_4_ = uVar53;
                              auVar19._0_8_ = lVar47;
                              auVar19._12_4_ = uVar55;
                              auVar125 = blendvpd(local_178,auVar26,auVar19);
                              dVar121 = auVar125._0_8_ * dVar90 + auVar92._0_8_ * dVar113;
                              dVar66 = auVar125._8_8_ * dVar100 + auVar92._8_8_ * dVar122;
                              auVar20._8_4_ = uVar53;
                              auVar20._0_8_ = lVar47;
                              auVar20._12_4_ = uVar55;
                              auVar92 = blendvpd(local_188,auVar25,auVar20);
                              dVar123 = auVar92._0_8_ * dVar90 + dVar113 * auVar83._0_8_;
                              dVar128 = auVar92._8_8_ * dVar100 + dVar122 * auVar83._8_8_;
                              dVar116 = dVar123 * dVar123 + dVar121 * dVar121;
                              dVar127 = dVar128 * dVar128 + dVar66 * dVar66;
                              auVar71._0_8_ = dVar116 + dVar127;
                              auVar71._8_8_ = dVar116 + dVar127;
                              uVar48 = -(ulonglong)(1e-08 <= auVar71._8_8_);
                              auVar83 = sqrtpd(auVar71,auVar71);
                              auVar125 = divpd(_DAT_149934d80,auVar83);
                              auVar112._0_8_ = auVar125._0_8_ * dVar123;
                              auVar112._8_8_ = auVar125._8_8_ * dVar128;
                              auVar21._8_4_ = (int)uVar48;
                              auVar21._0_8_ = -(ulonglong)(1e-08 <= auVar71._0_8_);
                              auVar21._12_4_ = (int)(uVar48 >> 0x20);
                              auVar83 = blendvpd(_DAT_149935300,auVar112,auVar21);
                              dVar81 = dVar81 * dVar113 + DAT_14c8464e0 * dVar90;
                              dVar89 = dVar89 * dVar122 + DAT_14c8464e8 * dVar100;
                              dVar101 = dVar101 * dVar113 + DAT_14c8464e0 * dVar90;
                              dVar104 = dVar104 * dVar122 + DAT_14c8464e8 * dVar100;
                              dVar99 = dVar99 * dVar113 + DAT_14c8464f0 * dVar90;
                              dVar87 = dVar87 * dVar113 + DAT_14c8464f0 * dVar90;
                              auVar92._0_8_ =
                                   (ulonglong)(dVar121 * auVar125._0_8_) &
                                   -(ulonglong)(1e-08 <= auVar71._0_8_);
                              auVar92._8_8_ = (ulonglong)(dVar66 * auVar125._8_8_) & uVar48;
                            }
                            goto LAB_1433f00db;
                          }
                        }
                        auVar103._0_8_ = auVar125._8_8_;
                        auVar103._8_4_ = auVar125._8_4_;
                        auVar103._12_4_ = auVar125._12_4_;
                        auVar96._0_8_ = auVar63._0_8_;
                        auVar96._8_4_ = auVar63._0_4_;
                        auVar96._12_4_ = auVar63._4_4_;
                        dVar81 = (double)DAT_149931170;
                        dVar89 = DAT_149931170._8_8_;
                        auVar119._0_8_ = auVar63._8_8_;
                        auVar119._8_4_ = auVar63._8_4_;
                        auVar119._12_4_ = auVar63._12_4_;
                        auVar72._0_8_ = auVar125._0_8_;
                        auVar72._8_4_ = auVar125._0_4_;
                        auVar72._12_4_ = auVar125._4_4_;
                        dVar99 = (double)local_158._8_8_ * auVar72._0_8_ * -1.0 +
                                 (double)local_148._0_8_ * auVar119._0_8_ +
                                 auVar96._0_8_ * (double)local_148._8_8_ * dVar81 +
                                 auVar103._0_8_ * (double)local_158._0_8_;
                        dVar101 = (double)local_158._0_8_ * auVar72._8_8_ * 1.0 +
                                  (double)local_148._8_8_ * auVar119._8_8_ +
                                  auVar96._8_8_ * (double)local_148._0_8_ * dVar89 +
                                  auVar103._8_8_ * (double)local_158._8_8_;
                        dVar104 = (double)local_148._8_8_ * auVar72._0_8_ * dVar81 +
                                  ((auVar96._0_8_ * (double)local_158._8_8_ * dVar81 +
                                   auVar103._0_8_ * (double)local_148._0_8_) -
                                  auVar119._0_8_ * (double)local_158._0_8_);
                        dVar87 = (double)local_148._0_8_ * auVar72._8_8_ * dVar89 +
                                 ((auVar96._8_8_ * (double)local_158._0_8_ * dVar89 +
                                  auVar103._8_8_ * (double)local_148._8_8_) -
                                 auVar119._8_8_ * (double)local_158._8_8_);
                        dVar81 = dVar104 * dVar104 + dVar99 * dVar99;
                        dVar89 = dVar87 * dVar87 + dVar101 * dVar101;
                        auVar73._0_8_ = dVar81 + dVar89;
                        auVar73._8_8_ = dVar81 + dVar89;
                        uVar48 = -(ulonglong)(1e-08 <= auVar73._8_8_);
                        auVar83 = sqrtpd(auVar73,auVar73);
                        auVar83 = divpd(_DAT_149934d80,auVar83);
                        auVar97._0_8_ = auVar83._0_8_ * dVar104;
                        auVar97._8_8_ = auVar83._8_8_ * dVar87;
                        auVar22._8_4_ = (int)uVar48;
                        auVar22._0_8_ = -(ulonglong)(1e-08 <= auVar73._0_8_);
                        auVar22._12_4_ = (int)(uVar48 >> 0x20);
                        local_148 = blendvpd(_DAT_149935300,auVar97,auVar22);
                        local_138._8_8_ = dVar116 + (double)local_138._8_8_;
                        local_138._0_8_ = dVar113 + (double)local_138._0_8_;
                        local_128._8_8_ = 0;
                        local_128._0_8_ = (double)CONCAT44(uVar55,uVar53) + (double)local_128._0_8_;
                        stack0xfffffffffffffef0 = dVar66 + stack0xfffffffffffffef0;
                        local_118._0_8_ = dVar121 + (double)local_118._0_8_;
                        local_108._8_8_ = 0;
                        local_108._0_8_ = dVar122 + (double)local_108._0_8_;
                        local_158._0_8_ =
                             (ulonglong)(dVar99 * auVar83._0_8_) &
                             -(ulonglong)(1e-08 <= auVar73._0_8_);
                        local_158._8_8_ = (ulonglong)(dVar101 * auVar83._8_8_) & uVar48;
                        goto LAB_1433f02c2;
                      }
                      dVar89 = (double)fVar57;
                      dVar99 = (double)fVar57;
                      auVar70._0_8_ = *(double *)*pauVar40 * dVar89;
                      auVar70._8_8_ = *(double *)(*pauVar40 + 8) * dVar99;
                      auVar79._0_8_ = *(double *)pauVar40[1] * dVar89;
                      auVar79._8_8_ = *(double *)(pauVar40[1] + 8) * dVar99;
                      dVar81 = auVar79._0_8_ * (double)local_148._0_8_ +
                               auVar70._0_8_ * (double)local_158._0_8_;
                      dVar101 = auVar79._8_8_ * (double)local_148._8_8_ +
                                auVar70._8_8_ * (double)local_158._8_8_;
                      lVar47 = -(ulonglong)(0.0 <= dVar81 + dVar101);
                      lVar46 = -(ulonglong)(0.0 <= dVar81 + dVar101);
                      uVar53 = (undefined4)lVar46;
                      uVar55 = (undefined4)((ulonglong)lVar46 >> 0x20);
                      auVar102._0_8_ = 0.0 - auVar70._0_8_;
                      auVar102._8_8_ = 0.0 - auVar70._8_8_;
                      auVar110._0_8_ = 0.0 - auVar79._0_8_;
                      auVar110._8_8_ = 0.0 - auVar79._8_8_;
                      auVar14._8_4_ = uVar53;
                      auVar14._0_8_ = lVar47;
                      auVar14._12_4_ = uVar55;
                      auVar83 = blendvpd(auVar102,auVar70,auVar14);
                      local_158._0_8_ = auVar83._0_8_ + (double)local_158._0_8_;
                      local_158._8_8_ = auVar83._8_8_ + (double)local_158._8_8_;
                      auVar15._8_4_ = uVar53;
                      auVar15._0_8_ = lVar47;
                      auVar15._12_4_ = uVar55;
                      auVar83 = blendvpd(auVar110,auVar79,auVar15);
                      local_148._8_8_ = auVar83._8_8_ + (double)local_148._8_8_;
                      local_148._0_8_ = auVar83._0_8_ + (double)local_148._0_8_;
                      dVar81 = *(double *)(pauVar40[2] + 8) * dVar99 + (double)local_138._8_8_;
                      local_128._0_8_ = *(double *)pauVar40[3] * dVar89 + (double)local_128._0_8_;
                      local_128._8_8_ =
                           *(double *)(pauVar40[3] + 8) * dVar99 + (double)local_128._8_8_;
                      local_138._8_4_ = SUB84(dVar81,0);
                      local_138._0_8_ = *(double *)pauVar40[2] * dVar89 + (double)local_138._0_8_;
                      local_138._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
                      dVar81 = *(double *)(pauVar40[4] + 8) * dVar99 + stack0xfffffffffffffef0;
                      auVar62._0_8_ = dVar89 * *(double *)pauVar40[5] + (double)local_108._0_8_;
                      auVar62._8_8_ =
                           dVar99 * *(double *)(pauVar40[5] + 8) + (double)local_108._8_8_;
                      local_118._8_4_ = SUB84(dVar81,0);
                      local_118._0_8_ = *(double *)pauVar40[4] * dVar89 + (double)local_118._0_8_;
                      uStack_10c = (int)((ulonglong)dVar81 >> 0x20);
                      local_108._0_16_ = auVar62;
                    }
                    else {
                      if (cVar2 != '\0') goto LAB_1433eff22;
                      dVar81 = (double)fVar57;
                      dVar89 = (double)fVar57;
                      local_118._0_8_ = *(double *)pauVar40[4] * dVar81;
                      register0x00001288 = *(double *)(pauVar40[4] + 8) * dVar89;
                      local_108._0_8_ = *(double *)pauVar40[5] * dVar81;
                      local_108._8_8_ = *(double *)(pauVar40[5] + 8) * dVar89;
                      local_138._0_8_ = *(double *)pauVar40[2] * dVar81;
                      local_138._8_8_ = *(double *)(pauVar40[2] + 8) * dVar89;
                      local_128._0_8_ = *(double *)pauVar40[3] * dVar81;
                      local_128._8_8_ = *(double *)(pauVar40[3] + 8) * dVar89;
                      local_158._0_8_ = *(double *)*pauVar40 * dVar81;
                      local_158._8_8_ = *(double *)(*pauVar40 + 8) * dVar89;
                      dVar89 = dVar89 * *(double *)(pauVar40[1] + 8);
                      local_148._8_4_ = SUB84(dVar89,0);
                      local_148._0_8_ = dVar81 * *(double *)pauVar40[1];
                      local_148._12_4_ = (int)((ulonglong)dVar89 >> 0x20);
                    }
                    bVar52 = true;
                  }
LAB_1433f02c2:
                  uVar39 = uVar39 + 1;
                } while (uVar42 != uVar39);
                fVar57 = auVar94._0_4_;
                if (1e-05 < fVar57) {
                  if (fVar57 < 0.99999 && cVar2 == '\0') {
                    lVar47 = *plVar43;
                    lVar46 = (longlong)*piVar30 * 0x60;
                    dVar99 = (double)(1.0 - fVar57);
                    dVar101 = (double)(1.0 - fVar57);
                    auVar64._0_8_ = *(double *)(lVar47 + lVar46) * dVar99;
                    auVar64._8_8_ = ((double *)(lVar47 + lVar46))[1] * dVar101;
                    pdVar35 = (double *)(lVar47 + 0x10 + lVar46);
                    auVar74._0_8_ = *pdVar35 * dVar99;
                    auVar74._8_8_ = pdVar35[1] * dVar101;
                    dVar81 = local_158._8_8_;
                    dVar89 = local_148._8_8_;
                    dVar104 = auVar74._0_8_ * local_148._0_8_ + auVar64._0_8_ * local_158._0_8_;
                    dVar87 = auVar74._8_8_ * dVar89 + auVar64._8_8_ * dVar81;
                    lVar49 = -(ulonglong)(0.0 <= dVar104 + dVar87);
                    lVar38 = -(ulonglong)(0.0 <= dVar104 + dVar87);
                    uVar53 = (undefined4)lVar38;
                    uVar55 = (undefined4)((ulonglong)lVar38 >> 0x20);
                    auVar88._0_8_ = 0.0 - auVar64._0_8_;
                    auVar88._8_8_ = 0.0 - auVar64._8_8_;
                    auVar16._8_4_ = uVar53;
                    auVar16._0_8_ = lVar49;
                    auVar16._12_4_ = uVar55;
                    auVar83 = blendvpd(auVar88,auVar64,auVar16);
                    auVar98._0_8_ = 0.0 - auVar74._0_8_;
                    auVar98._8_8_ = 0.0 - auVar74._8_8_;
                    auVar17._8_4_ = uVar53;
                    auVar17._0_8_ = lVar49;
                    auVar17._12_4_ = uVar55;
                    auVar94 = blendvpd(auVar98,auVar74,auVar17);
                    local_158._0_8_ = auVar83._0_8_ + local_158._0_8_;
                    local_158._8_8_ = auVar83._8_8_ + dVar81;
                    local_148._0_8_ = auVar94._0_8_ + local_148._0_8_;
                    local_148._8_8_ = auVar94._8_8_ + dVar89;
                    pdVar35 = (double *)(lVar47 + 0x20 + lVar46);
                    pdVar36 = (double *)(lVar47 + 0x30 + lVar46);
                    dVar81 = pdVar35[1] * dVar101 + (double)local_138._8_8_;
                    auVar65._0_8_ = *pdVar36 * dVar99 + (double)local_128._0_8_;
                    auVar65._8_8_ = pdVar36[1] * dVar101 + (double)local_128._8_8_;
                    local_138._8_4_ = SUB84(dVar81,0);
                    local_138._0_8_ = *pdVar35 * dVar99 + (double)local_138._0_8_;
                    local_138._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
                    pdVar35 = (double *)(lVar47 + 0x40 + lVar46);
                    pdVar36 = (double *)(lVar47 + 0x50 + lVar46);
                    dVar81 = pdVar35[1] * dVar101 + stack0xfffffffffffffef0;
                    auVar58._0_8_ = dVar99 * *pdVar36 + (double)local_108._0_8_;
                    auVar58._8_8_ = dVar101 * pdVar36[1] + (double)local_108._8_8_;
                    local_118._8_4_ = SUB84(dVar81,0);
                    local_118._0_8_ = *pdVar35 * dVar99 + (double)local_118._0_8_;
                    uStack_10c = (int)((ulonglong)dVar81 >> 0x20);
                    local_128 = auVar65;
                    local_108._0_16_ = auVar58;
                  }
                  goto LAB_1433f042c;
                }
              }
              puVar45 = (undefined8 *)((longlong)*piVar30 * 0x60 + *plVar43);
              puVar44 = (undefined8 *)local_158;
              for (lVar47 = 0xc; plVar41 = local_208, lVar47 != 0; lVar47 = lVar47 + -1) {
                *puVar44 = *puVar45;
                puVar45 = puVar45 + 1;
                puVar44 = puVar44 + 1;
              }
            }
            else {
              puVar45 = (undefined8 *)(lVar46 * 0x60 + *plVar43);
              puVar44 = (undefined8 *)local_158;
              for (lVar47 = 0xc; lVar47 != 0; lVar47 = lVar47 + -1) {
                *puVar44 = *puVar45;
                puVar45 = puVar45 + 1;
                puVar44 = puVar44 + 1;
              }
              uVar42 = *(uint *)(plVar33 + 1);
              plVar41 = local_208;
              if (uVar42 != 0) goto LAB_1433efd4f;
            }
LAB_1433f042c:
            iVar37 = *(int *)(*plVar41 + uVar50 * 8);
            uVar34 = FUN_1433eed6e(pdVar32);
            dVar81 = pdVar32[0x20];
            if (dVar81 == 0.0) {
              pdVar35 = pdVar32;
              if (0 < *(int *)(pdVar32 + 0x22)) {
LAB_1433f0457:
                pdVar36 = pdVar35;
                pdVar35 = pdVar36;
                if ((double *)pdVar36[4] != (double *)0x0) goto code_r0x0001433f0466;
                goto LAB_1433f0477;
              }
              dVar81 = 0.0;
            }
            goto LAB_1433f048a;
          }
          goto LAB_1433f0576;
        }
LAB_1433f0582:
        uVar39 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
        goto LAB_1433f0585;
      }
    }
  }
LAB_1433efc00:
  uVar39 = 0;
LAB_1433f0585:
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar39 & 0xffffffff;
code_r0x0001433f0466:
  pdVar35 = (double *)pdVar36[4];
  if ((*(uint *)(pdVar36 + 1) >> 0x1c & 1) == 0) goto LAB_1433f0457;
  pdVar35 = (double *)FUN_142840154(pdVar36);
LAB_1433f0477:
  if (pdVar35 == (double *)0x0) {
    pdVar35 = (double *)pdVar36[4];
    goto LAB_1433f0457;
  }
  dVar81 = pdVar35[3];
LAB_1433f048a:
  local_228 = local_1f8;
  uVar120 = local_1b8._0_8_;
  local_230 = (double *)local_1b8._0_8_;
  local_238 = iVar37;
  local_220 = cVar2;
  local_160 = dVar81;
  FUN_1433cdc22(local_198,&local_160,uVar34,local_158);
  puVar45 = (undefined8 *)local_158;
  puVar44 = (undefined8 *)((longlong)*(int *)uVar120 * 0x60 + *plVar43);
  for (lVar47 = 0xc; lVar47 != 0; lVar47 = lVar47 + -1) {
    *puVar44 = *puVar45;
    puVar45 = puVar45 + 1;
    puVar44 = puVar44 + 1;
  }
  lVar47 = *plVar43;
  lVar46 = (longlong)*(int *)uVar120 * 0x60;
  dVar81 = *(double *)(lVar47 + lVar46);
  dVar89 = ((double *)(lVar47 + lVar46))[1];
  pdVar35 = (double *)(lVar47 + 0x10 + lVar46);
  dVar99 = *pdVar35;
  dVar101 = pdVar35[1];
  dVar104 = dVar99 * dVar99 + dVar81 * dVar81;
  dVar87 = dVar101 * dVar101 + dVar89 * dVar89;
  auVar75._0_8_ = dVar104 + dVar87;
  auVar75._8_8_ = dVar104 + dVar87;
  uVar39 = -(ulonglong)(1e-08 <= auVar75._8_8_);
  auVar83 = sqrtpd(auVar75,auVar75);
  auVar83 = divpd(_DAT_149934d80,auVar83);
  auVar80._0_8_ = auVar83._0_8_ * dVar99;
  auVar80._8_8_ = auVar83._8_8_ * dVar101;
  auVar59._0_8_ = (ulonglong)(dVar81 * auVar83._0_8_) & -(ulonglong)(1e-08 <= auVar75._0_8_);
  auVar59._8_8_ = (ulonglong)(dVar89 * auVar83._8_8_) & uVar39;
  auVar18._8_4_ = (int)uVar39;
  auVar18._0_8_ = -(ulonglong)(1e-08 <= auVar75._0_8_);
  auVar18._12_4_ = (int)(uVar39 >> 0x20);
  auVar83 = blendvpd(_DAT_149935300,auVar80,auVar18);
  *(undefined1 (*) [16])(lVar47 + lVar46) = auVar59;
  *(undefined1 (*) [16])(lVar47 + 0x10 + lVar46) = auVar83;
  plVar41 = local_208;
  lVar47 = local_1f0;
  uVar39 = local_210;
  plVar31 = local_200;
LAB_1433f0576:
  uVar50 = uVar50 + 1;
  if (uVar50 == uVar39) goto LAB_1433f0582;
  goto LAB_1433efccc;
code_r0x0001433ef251:
  lVar38 = lVar38 + 0x100000000;
  uVar48 = uVar48 + 8;
  if (lVar46 * 8 == uVar48) goto LAB_1433ef85a;
  goto LAB_1433ef24b;
code_r0x0001433ef76e:
  pdVar32 = (double *)pdVar35[4];
  plVar43 = local_208;
  if ((*(uint *)(pdVar35 + 1) >> 0x1c & 1) == 0) goto LAB_1433ef75f;
  local_200 = plVar31;
  pdVar32 = (double *)FUN_142840154(pdVar35);
  plVar31 = local_200;
LAB_1433ef789:
  plVar43 = local_208;
  if (pdVar32 == (double *)0x0) {
    pdVar32 = (double *)pdVar35[4];
    goto LAB_1433ef75f;
  }
  dVar81 = pdVar32[3];
LAB_1433ef7a1:
  pdVar32 = local_1d8;
  local_158._0_8_ = dVar81;
  local_228 = local_1f8;
  local_230 = &local_160;
  local_238 = iVar51;
  local_220 = cVar2;
  FUN_1433cdc22(local_198,local_158);
  dVar81 = *pdVar32;
  dVar87 = pdVar32[1];
  dVar121 = pdVar32[2];
  dVar66 = pdVar32[3];
  dVar113 = dVar121 * dVar121 + dVar81 * dVar81;
  dVar116 = dVar66 * dVar66 + dVar87 * dVar87;
  auVar69._0_8_ = dVar113 + dVar116;
  auVar69._8_8_ = dVar113 + dVar116;
  uVar48 = -(ulonglong)(1e-08 <= auVar69._8_8_);
  auVar83 = sqrtpd(auVar69,auVar69);
  auVar77._4_4_ = uVar55;
  auVar77._0_4_ = uVar53;
  auVar77._12_4_ = uVar106;
  auVar77._8_4_ = uVar105;
  auVar94 = divpd(auVar77,auVar83);
  auVar78._0_8_ = auVar94._0_8_ * dVar121;
  auVar78._8_8_ = auVar94._8_8_ * dVar66;
  auVar61._8_8_ = uVar120;
  auVar61._0_8_ = uVar34;
  auVar9._8_4_ = (int)uVar48;
  auVar9._0_8_ = -(ulonglong)(1e-08 <= auVar69._0_8_);
  auVar9._12_4_ = (int)(uVar48 >> 0x20);
  auVar83 = blendvpd(auVar61,auVar78,auVar9);
  *pdVar32 = (double)((ulonglong)(dVar81 * auVar94._0_8_) & -(ulonglong)(1e-08 <= auVar69._0_8_));
  pdVar32[1] = (double)((ulonglong)(dVar87 * auVar94._8_8_) & uVar48);
  *(undefined1 (*) [16])(pdVar32 + 2) = auVar83;
  param_3 = local_1f0;
  goto LAB_1433ef85a;
}



// FUNCTION 1433f06e4 FUN_1433f06e4 body=55 status=ok
// SIG undefined FUN_1433f06e4(void)

void FUN_1433f06e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd3c0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd3c0 = FUN_14171c317(FUN_1463aab45,uVar1,L"ESkeletalMeshVertexAttributeDataType");
  }
  return;
}



// FUNCTION 1433f071c FUN_1433f071c body=264 status=ok
// SIG undefined FUN_1433f071c(void)

void FUN_1433f071c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
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
  iVar2 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
    iVar2 = (int)param_1[5];
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if ((iStack_34 != iVar2) || (local_40 != plVar1)) {
    do {
      do {
        FUN_140308182(*(undefined8 *)(*local_70 + 8 + (longlong)iStack_54 * 0x18),0);
        local_58 = local_58 & ~local_68._4_4_;
        FUN_1449c0562(&local_68);
      } while (iStack_54 != iVar2);
    } while ((local_60 != plVar1) || (local_70 != param_1));
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433f0826 FUN_1433f0826 body=264 status=ok
// SIG undefined FUN_1433f0826(void)

void FUN_1433f0826(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
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
  iVar2 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
    iVar2 = (int)param_1[5];
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if ((iStack_34 != iVar2) || (local_40 != plVar1)) {
    do {
      do {
        FUN_140414380(*(undefined8 *)(*local_70 + 8 + (longlong)iStack_54 * 0x18),0);
        local_58 = local_58 & ~local_68._4_4_;
        FUN_1449c0562(&local_68);
      } while (iStack_54 != iVar2);
    } while ((local_60 != plVar1) || (local_70 != param_1));
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433f092f FUN_1433f092f body=55 status=ok
// SIG undefined FUN_1433f092f(void)

void FUN_1433f092f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd410 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd410 = FUN_14171c317(FUN_1463aaca0,uVar1,L"EBoneTranslationRetargetingMode");
  }
  return;
}



// FUNCTION 1433f0966 FUN_1433f0966 body=138 status=ok
// SIG undefined FUN_1433f0966(void)

void FUN_1433f0966(undefined8 *param_1,undefined1 param_2)

{
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x20) = param_2;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return;
}



// FUNCTION 1433f09f0 FUN_1433f09f0 body=4508 status=ok
// SIG undefined FUN_1433f09f0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1433f09f0(longlong param_1,uchar param_2 [8])

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined **ppuVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uchar auVar24 [8];
  uint uVar25;
  ulonglong uVar26;
  uchar auVar27 [8];
  undefined1 auStack_278 [32];
  uchar local_258 [8];
  longlong *local_250;
  longlong local_248;
  uint *local_240;
  longlong *local_238;
  uint *local_230;
  longlong *local_228;
  undefined8 local_21c;
  uint local_214;
  undefined8 *local_210;
  GUID *local_208;
  undefined1 local_1fc [4];
  GUID local_1f8;
  GUID *local_1e8;
  GUID **local_1e0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  (**(code **)(*(longlong *)param_2 + 0x218))(param_2,&DAT_149e39130);
  (**(code **)(*(longlong *)param_2 + 0x218))(param_2,&DAT_149e3cc78);
  local_1e0 = &local_1e8;
  local_1f8._0_8_ = &PTR_FUN_149e37810;
  local_1f8.Data4 = param_2;
  local_1e8 = &local_1f8;
  switchD_143c3d4dc::caseD_20();
  local_258 = param_2;
  local_248 = param_1;
  if ((*(int *)((longlong)param_2 + 0x40) < 0x136) ||
     (FUN_1400f4786(param_2,param_1 + 0x50), *(int *)((longlong)param_2 + 0x40) < 0x14b)) {
    puVar7 = (uint *)(param_1 + 0x1c8);
    iVar4 = *(int *)(param_1 + 0x1e0);
    if (iVar4 == 0) {
      uVar26 = 1;
      uVar23 = 0;
      iVar17 = 0;
      iVar9 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x1d8);
      if (*(uint **)(param_1 + 0x1d8) == (uint *)0x0) {
        puVar8 = puVar7;
      }
      uVar25 = *puVar8;
      if (uVar25 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        uVar23 = 0;
        uVar26 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar26 = uVar23;
        }
        iVar17 = 0;
        do {
          if (uVar26 == uVar23) goto LAB_1433f103f;
          iVar17 = iVar17 + 0x20;
          uVar25 = puVar8[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar25 == 0);
      }
      else {
        uVar23 = 0;
        iVar17 = 0;
      }
      uVar26 = (ulonglong)(-uVar25 & uVar25);
      uVar22 = uVar26 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar9 = (iVar17 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar9) {
        iVar9 = iVar4;
      }
    }
    if (iVar9 < iVar4) {
      uVar25 = 0xffffffff;
      do {
        lVar13 = (longlong)iVar9 * 0x28;
        (**(code **)(*(longlong *)param_2 + 0x160))(param_2,*(longlong *)(param_1 + 0x1b8) + lVar13)
        ;
        lVar20 = *(longlong *)(param_1 + 0x1b8);
        (**(code **)(*(longlong *)local_258 + 0x218))(local_258,&DAT_149e3cbe8);
        param_1 = local_248;
        (**(code **)(*(longlong *)local_258 + 0x160))(local_258,lVar20 + lVar13 + 8);
        param_2 = local_258;
        FUN_1400f4d04(local_258,lVar20 + lVar13 + 0x10);
        uVar25 = ~(uint)uVar26 & uVar25;
        puVar8 = *(uint **)(param_1 + 0x1d8);
        if (*(uint **)(param_1 + 0x1d8) == (uint *)0x0) {
          puVar8 = puVar7;
        }
        iVar4 = *(int *)(param_1 + 0x1e0);
        iVar9 = (int)uVar23;
        lVar20 = (longlong)iVar9;
        uVar10 = puVar8[lVar20] & uVar25;
        if (uVar10 == 0) {
          iVar11 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar11 = iVar4 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar18 = iVar11;
          if (iVar11 < iVar9) {
            iVar18 = iVar9;
          }
          if (iVar11 <= iVar9) break;
          lVar13 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar10 = puVar8[lVar20 + lVar13 + 1];
            if (uVar10 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar18 - lVar20 == lVar13) goto LAB_1433f103f;
          }
          uVar23 = (ulonglong)(iVar9 + (int)lVar13 + 1);
          uVar25 = 0xffffffff;
        }
        uVar26 = (ulonglong)(-uVar10 & uVar10);
        uVar22 = uVar26 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar9 = (iVar17 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      } while (iVar9 < iVar4);
    }
  }
  else if ((*(byte *)((longlong)param_2 + 0x28) & 1) == 0) {
    local_1f8.Data1 = *(int *)(param_1 + 0x1c0) - *(int *)(param_1 + 0x1ec);
    puVar2 = *(ulonglong **)((longlong)param_2 + 8);
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x170))(param_2,&local_1f8,4);
      }
      else {
        FUN_14572512c(param_2,&local_1f8);
      }
    }
    else {
      local_1f8.Data1 = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    puVar7 = (uint *)(param_1 + 0x1c8);
    iVar4 = *(int *)(param_1 + 0x1e0);
    if (iVar4 == 0) {
      uVar26 = 1;
      uVar23 = 0;
      iVar17 = 0;
      iVar9 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x1d8);
      if (*(uint **)(param_1 + 0x1d8) == (uint *)0x0) {
        puVar8 = puVar7;
      }
      uVar25 = *puVar8;
      if (uVar25 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        uVar23 = 0;
        uVar26 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar26 = uVar23;
        }
        iVar17 = 0;
        do {
          if (uVar26 == uVar23) goto LAB_1433f103f;
          iVar17 = iVar17 + 0x20;
          uVar25 = puVar8[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar25 == 0);
      }
      else {
        uVar23 = 0;
        iVar17 = 0;
      }
      uVar26 = (ulonglong)(-uVar25 & uVar25);
      uVar22 = uVar26 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar9 = (iVar17 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar9) {
        iVar9 = iVar4;
      }
    }
    if (iVar9 < iVar4) {
      uVar25 = 0xffffffff;
      do {
        lVar13 = (longlong)iVar9 * 0x28;
        (**(code **)(*(longlong *)local_258 + 0x160))
                  (local_258,*(longlong *)(param_1 + 0x1b8) + lVar13);
        lVar20 = *(longlong *)(param_1 + 0x1b8);
        (**(code **)(*(longlong *)local_258 + 0x218))(local_258,&DAT_149e3cbe8);
        param_1 = local_248;
        (**(code **)(*(longlong *)local_258 + 0x160))(local_258,lVar13 + lVar20 + 8);
        param_2 = local_258;
        FUN_1400f4d04(local_258,lVar13 + lVar20 + 0x10);
        uVar25 = ~(uint)uVar26 & uVar25;
        puVar8 = *(uint **)(param_1 + 0x1d8);
        if (*(uint **)(param_1 + 0x1d8) == (uint *)0x0) {
          puVar8 = puVar7;
        }
        iVar4 = *(int *)(param_1 + 0x1e0);
        iVar9 = (int)uVar23;
        lVar20 = (longlong)iVar9;
        uVar10 = puVar8[lVar20] & uVar25;
        if (uVar10 == 0) {
          iVar11 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar11 = iVar4 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar18 = iVar11;
          if (iVar11 < iVar9) {
            iVar18 = iVar9;
          }
          if (iVar11 <= iVar9) break;
          lVar13 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar10 = puVar8[lVar20 + lVar13 + 1];
            if (uVar10 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar18 - lVar20 == lVar13) goto LAB_1433f103f;
          }
          uVar23 = (ulonglong)(iVar9 + (int)lVar13 + 1);
          uVar25 = 0xffffffff;
        }
        uVar26 = (ulonglong)(-uVar10 & uVar10);
        uVar22 = uVar26 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar9 = (iVar17 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      } while (iVar9 < iVar4);
    }
  }
  else {
    puVar2 = *(ulonglong **)((longlong)param_2 + 8);
    puVar7 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar7) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x170))(param_2,&local_214,4);
      }
      else {
        FUN_14572512c(param_2,&local_214);
      }
    }
    else {
      local_214 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar7;
    }
    local_21c = 0;
    local_1e8 = (GUID *)0x0;
    local_1f8._0_8_ = (undefined **)0x0;
    local_1f8.Data4[0] = '\0';
    local_1f8.Data4[1] = '\0';
    local_1f8.Data4[2] = '\0';
    local_1f8.Data4[3] = '\0';
    local_1f8.Data4[4] = '\0';
    local_1f8.Data4[5] = '\0';
    local_1f8.Data4[6] = '\0';
    local_1f8.Data4[7] = '\0';
    iVar4 = 1;
    if (3 < local_214) {
      uVar23 = (ulonglong)(local_214 & 0xfffffffe) + 0xf;
      lVar20 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar20 & 0x1f);
    }
    plVar14 = (longlong *)(param_1 + 0x1b8);
    iVar9 = *(int *)(param_1 + 0x200);
    if (((int)local_214 < 1 || iVar4 <= iVar9) && (iVar9 <= iVar4)) {
      lVar20 = param_1 + 0x1f0;
      if (*(longlong *)(param_1 + 0x1f8) != 0) {
        lVar20 = *(longlong *)(param_1 + 0x1f8);
      }
      iVar4 = iVar9 + 3;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      if (*(int *)(param_1 + 0x1c0) - *(int *)(param_1 + 0x1ec) < iVar4 >> 2) {
        iVar4 = *(int *)(local_248 + 0x1e0);
        if (iVar4 != 0) {
          puVar7 = *(uint **)(local_248 + 0x1d8);
          if (*(uint **)(local_248 + 0x1d8) == (uint *)0x0) {
            puVar7 = (uint *)(local_248 + 0x1c8);
          }
          uVar25 = *puVar7;
          local_250 = plVar14;
          if (uVar25 == 0) {
            iVar9 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar9 = iVar4 + -1;
            }
            uVar23 = 0;
            uVar26 = (ulonglong)(uint)(iVar9 >> 5);
            if (iVar9 >> 5 < 1) {
              uVar26 = uVar23;
            }
            iVar9 = 0;
            do {
              if (uVar26 == uVar23) goto LAB_1433f0e4c;
              iVar9 = iVar9 + 0x20;
              uVar25 = puVar7[uVar23 + 1];
              uVar23 = uVar23 + 1;
            } while (uVar25 == 0);
          }
          else {
            iVar9 = 0;
            uVar23 = 0;
          }
          uVar22 = (ulonglong)(-uVar25 & uVar25);
          uVar26 = uVar22 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar17 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar17 < iVar4) {
            uVar25 = 0xffffffff;
            do {
              *(undefined4 *)
               (lVar20 + (longlong)
                         *(int *)(*(longlong *)(local_248 + 0x1b8) + 0x24 + (longlong)iVar17 * 0x28)
                         * 4) = 0xffffffff;
              uVar25 = ~(uint)uVar22 & uVar25;
              puVar7 = *(uint **)(local_248 + 0x1d8);
              if (*(uint **)(local_248 + 0x1d8) == (uint *)0x0) {
                puVar7 = (uint *)(local_248 + 0x1c8);
              }
              iVar11 = *(int *)(local_248 + 0x1e0);
              iVar17 = (int)uVar23;
              lVar13 = (longlong)iVar17;
              uVar10 = puVar7[lVar13] & uVar25;
              if (uVar10 == 0) {
                iVar18 = iVar11 + 0x1e;
                if (-1 < iVar11 + -1) {
                  iVar18 = iVar11 + -1;
                }
                iVar18 = iVar18 >> 5;
                iVar9 = iVar9 + 0x20;
                iVar19 = iVar18;
                if (iVar18 < iVar17) {
                  iVar19 = iVar17;
                }
                if (iVar17 < iVar18) {
                  lVar21 = 0;
                  do {
                    uVar10 = puVar7[lVar13 + lVar21 + 1];
                    if (uVar10 != 0) {
                      uVar23 = (ulonglong)(iVar17 + (int)lVar21 + 1);
                      uVar25 = 0xffffffff;
                      goto LAB_1433f1ac8;
                    }
                    iVar9 = iVar9 + 0x20;
                    lVar21 = lVar21 + 1;
                  } while (iVar19 - lVar13 != lVar21);
                  uVar25 = 0xffffffff;
                  lVar13 = (longlong)iVar19;
                }
                uVar23 = lVar13 + 1U & 0xffffffff;
                iVar17 = iVar11;
              }
              else {
LAB_1433f1ac8:
                uVar22 = (ulonglong)(-uVar10 & uVar10);
                uVar26 = uVar22 * 2 + 1;
                lVar13 = 0x3f;
                if (uVar26 != 0) {
                  for (; uVar26 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                iVar17 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                if (iVar11 <= iVar17) {
                  iVar17 = iVar11;
                }
              }
            } while (iVar17 != iVar4);
          }
        }
      }
      else if (0 < iVar9) {
        lVar13 = 0;
        do {
          *(undefined4 *)(lVar20 + lVar13 * 4) = 0xffffffff;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(local_248 + 0x200));
      }
LAB_1433f0e4c:
      FUN_140e3aee2(plVar14);
      param_1 = local_248;
    }
    else {
      FUN_140e3aee2(plVar14);
      *(int *)(param_1 + 0x200) = iVar4;
      FUN_1463abe1a(plVar14);
    }
    auVar27 = local_258;
    param_2 = local_258;
    if (0 < (int)local_214) {
      iVar4 = 0;
      do {
        (**(code **)(*(longlong *)auVar27 + 0x160))(auVar27,&local_21c);
        (**(code **)(*(longlong *)auVar27 + 0x218))(auVar27,&DAT_149e3cbe8);
        (**(code **)(*(longlong *)auVar27 + 0x160))(auVar27,&local_1f8);
        FUN_1400f4d04(auVar27,local_1f8.Data4);
        local_210 = &local_21c;
        local_208 = &local_1f8;
        FUN_1458dca46(plVar14,local_1fc,&local_210);
        param_1 = local_248;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_214);
      param_2 = local_258;
      if (local_1f8.Data4 != (uchar  [8])0x0) {
        FUN_1400020a8();
        param_2 = local_258;
      }
    }
  }
LAB_1433f103f:
  if (*(int *)((longlong)param_2 + 0x40) < 0x152) {
    local_1f8._0_8_ = (undefined **)0x0;
    local_1f8.Data4[0] = '\0';
    local_1f8.Data4[1] = '\0';
    local_1f8.Data4[2] = '\0';
    local_1f8.Data4[3] = '\0';
    local_1f8.Data4[4] = '\0';
    local_1f8.Data4[5] = '\0';
    local_1f8.Data4[6] = '\0';
    local_1f8.Data4[7] = '\0';
    CoCreateGuid(&local_1f8);
    *(ulong *)(param_1 + 0x168) = local_1f8.Data1;
    *(undefined4 *)(param_1 + 0x16c) = local_1f8._4_4_;
    *(undefined4 *)(param_1 + 0x170) = local_1f8.Data4._0_4_;
    *(undefined4 *)(param_1 + 0x174) = local_1f8.Data4._4_4_;
  }
  else {
    FUN_1402ac1b3(param_2,param_1 + 0x168);
  }
  bVar3 = true;
  lVar20 = param_1;
  if (0x183 < *(int *)((longlong)param_2 + 0x40)) {
    for (; (lVar20 != 0 && ((*(uint *)(lVar20 + 8) & 0x30) == 0));
        lVar20 = *(longlong *)(lVar20 + 0x20)) {
    }
    lVar20 = param_1 + 0x208;
    (**(code **)(*(longlong *)param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x210) << 7,
               (longlong)*(int *)(param_1 + 0x214) << 7);
    (**(code **)(*(longlong *)param_2 + 0x10))
              (param_2,*(int *)(param_1 + 0x230) + 0x1fU >> 3 & 0xfffffffc,
               *(int *)(param_1 + 0x234) + 0x1fU >> 3 & 0xfffffffc);
    auVar27 = local_258;
    if ((*(byte *)((longlong)param_2 + 0x28) & 1) == 0) {
      local_1f8.Data1 = *(int *)(param_1 + 0x210) - *(int *)(param_1 + 0x23c);
      puVar2 = *(ulonglong **)((longlong)param_2 + 8);
      puVar1 = (undefined4 *)*puVar2 + 1;
      if ((undefined4 *)puVar2[1] < puVar1) {
        if ((*(byte *)((longlong)local_258 + 0x2a) & 2) == 0) {
          (**(code **)(*(longlong *)local_258 + 0x170))(local_258,&local_1f8,4);
        }
        else {
          FUN_14572512c(local_258,&local_1f8);
        }
      }
      else {
        local_1f8.Data1 = *(undefined4 *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      lVar13 = local_248;
      auVar24 = local_258;
      local_240 = (uint *)(local_248 + 0x218);
      iVar4 = *(int *)(local_248 + 0x230);
      auVar27 = local_258;
      if (iVar4 == 0) {
        uVar23 = 1;
        iVar17 = 0;
        local_250 = (longlong *)0x0;
        iVar9 = 0;
      }
      else {
        puVar7 = *(uint **)(local_248 + 0x228);
        if (*(uint **)(local_248 + 0x228) == (uint *)0x0) {
          puVar7 = local_240;
        }
        uVar25 = *puVar7;
        if (uVar25 == 0) {
          iVar9 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar9 = iVar4 + -1;
          }
          local_250 = (longlong *)0x0;
          plVar14 = (longlong *)(ulonglong)(uint)(iVar9 >> 5);
          if (iVar9 >> 5 < 1) {
            plVar14 = (longlong *)0x0;
          }
          iVar17 = 0;
          do {
            if (plVar14 == local_250) goto LAB_1433f1140;
            iVar17 = iVar17 + 0x20;
            uVar25 = puVar7[(longlong)local_250 + 1];
            local_250 = (longlong *)((longlong)local_250 + 1);
          } while (uVar25 == 0);
        }
        else {
          iVar17 = 0;
          local_250 = (longlong *)0x0;
        }
        uVar23 = (ulonglong)(-uVar25 & uVar25);
        uVar26 = uVar23 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar9 = (iVar17 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar9) {
          iVar9 = iVar4;
        }
      }
      if (iVar9 < iVar4) {
        uVar25 = 0xffffffff;
        do {
          lVar21 = *(longlong *)(lVar13 + 0x208);
          (**(code **)(*(longlong *)auVar24 + 0x160))(auVar24,lVar21 + (longlong)iVar9 * 0x80);
          FUN_14793e41a(lVar21 + (longlong)iVar9 * 0x80 + 8,auVar24);
          uVar25 = ~(uint)uVar23 & uVar25;
          puVar7 = *(uint **)(lVar13 + 0x228);
          if (*(uint **)(lVar13 + 0x228) == (uint *)0x0) {
            puVar7 = local_240;
          }
          iVar4 = *(int *)(lVar13 + 0x230);
          lVar21 = (longlong)(int)local_250;
          uVar10 = puVar7[lVar21] & uVar25;
          auVar27 = local_258;
          if (uVar10 == 0) {
            iVar9 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar9 = iVar4 + -1;
            }
            iVar11 = iVar9 >> 5;
            if (iVar9 >> 5 < (int)local_250) {
              iVar11 = (int)local_250;
            }
            lVar15 = 0;
            do {
              if (iVar11 - lVar21 == lVar15) goto LAB_1433f1140;
              iVar17 = iVar17 + 0x20;
              uVar10 = puVar7[lVar21 + lVar15 + 1];
              lVar15 = lVar15 + 1;
            } while (uVar10 == 0);
            local_250 = (longlong *)(ulonglong)(uint)((int)local_250 + (int)lVar15);
            uVar25 = 0xffffffff;
          }
          uVar23 = (ulonglong)(-uVar10 & uVar10);
          uVar26 = uVar23 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar9 = (iVar17 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        } while (iVar9 < iVar4);
      }
    }
    else {
      uVar23 = (ulonglong)local_210 >> 0x20;
      local_210 = (undefined8 *)((ulonglong)local_210 & 0xffffffff00000000);
      puVar2 = *(ulonglong **)((longlong)param_2 + 8);
      puVar1 = (undefined4 *)*puVar2 + 1;
      if ((undefined4 *)puVar2[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*(longlong *)local_258 + 0x170))(local_258,&local_210,4);
        }
        else {
          FUN_14572512c(local_258,&local_210);
        }
      }
      else {
        local_210 = (undefined8 *)CONCAT44((int)uVar23,*(undefined4 *)*puVar2);
        *puVar2 = (ulonglong)puVar1;
        auVar27 = param_2;
      }
      FUN_140e3ad64(lVar20,(ulonglong)local_210 & 0xffffffff);
      if (0 < (int)local_210) {
        iVar4 = 0;
        do {
          FUN_14794f822(lVar20,&local_1f8);
          plVar14 = (longlong *)((longlong)local_1f8.Data4 + 8);
          *(longlong *)((longlong)local_1f8.Data4 + 0x48) = 0;
          *(undefined4 *)((longlong)local_1f8.Data4 + 0x50) = 0;
          *(longlong *)local_1f8.Data4 = 0;
          *(longlong *)((longlong)local_1f8.Data4 + 8) = 0;
          *(longlong *)((longlong)local_1f8.Data4 + 0x10) = 0;
          *(longlong *)((longlong)local_1f8.Data4 + 0x18) = 0;
          *(longlong *)((longlong)local_1f8.Data4 + 0x20) = 0;
          *(longlong *)((longlong)local_1f8.Data4 + 0x28) = 0;
          *(longlong *)((longlong)local_1f8.Data4 + 0x30) = 0;
          *(undefined8 *)((longlong)local_1f8.Data4 + 0x54) = 0xffffffff00000080;
          *(undefined4 *)((longlong)local_1f8.Data4 + 0x5c) = 0;
          *(longlong *)((longlong)local_1f8.Data4 + 0x68) = 0;
          *(undefined4 *)((longlong)local_1f8.Data4 + 0x70) = 0;
          *(undefined4 *)((longlong)local_1f8.Data4 + 0x78) = 0xffffffff;
          (**(code **)(*(longlong *)local_258 + 0x160))(local_258);
          auVar27 = local_258;
          FUN_14793e41a(plVar14,local_258);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)local_210);
      }
    }
LAB_1433f1140:
    param_1 = local_248;
    if (((*(byte *)((longlong)auVar27 + 0x28) & 1) != 0) ||
       (((*(byte *)((longlong)auVar27 + 0x28) & 4) == 0 &&
        ((*(byte *)((longlong)auVar27 + 0x2b) & 4) != 0)))) {
      if (*(longlong *)(local_248 + 0x248) != 0) {
        FUN_1446efa72(local_248 + 0x248,0,0,4);
      }
      *(undefined4 *)(param_1 + 0x250) = 0;
      uVar25 = *(int *)(param_1 + 0x210) - *(int *)(param_1 + 0x23c);
      iVar4 = 1;
      if (3 < uVar25) {
        uVar23 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
        lVar13 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar13 & 0x1f);
      }
      if ((0 < (int)uVar25) && (0 < iVar4)) {
        *(int *)(param_1 + 0x250) = iVar4;
        FUN_14794f908(lVar20);
      }
    }
    bVar3 = *(int *)((longlong)auVar27 + 0x40) < 0x1f5;
  }
  plVar14 = (longlong *)(param_1 + 0x288);
  FUN_140e5127a(plVar14,0);
  if ((longlong)*(int *)(param_1 + 0x280) != 0) {
    auVar24 = *(uchar (*) [8])(local_248 + 0x278);
    auVar27 = (uchar  [8])((longlong)auVar24 + (longlong)*(int *)(param_1 + 0x280) * 0x18);
    do {
      if ((longlong)*(int *)((longlong)auVar24 + 0x10) != 0) {
        ppuVar16 = *(undefined ***)((longlong)auVar24 + 8);
        lVar20 = (longlong)*(int *)((longlong)auVar24 + 0x10) << 3;
        do {
          local_1f8._0_8_ = ppuVar16;
          local_1f8.Data4 = auVar24;
          FUN_140906722(plVar14,&local_210,&local_1f8,0);
          ppuVar16 = ppuVar16 + 1;
          lVar20 = lVar20 + -8;
        } while (lVar20 != 0);
      }
      auVar24 = (uchar  [8])((longlong)auVar24 + 0x18);
    } while (auVar24 != auVar27);
  }
  if ((bVar3) && ((longlong)*(int *)(local_248 + 0x280) != 0)) {
    local_250 = *(longlong **)(local_248 + 0x278);
    local_228 = local_250 + (longlong)*(int *)(local_248 + 0x280) * 3;
    local_230 = (uint *)(local_248 + 0x298);
    do {
      iVar4 = (int)local_250[2];
      if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar4);
      }
      local_238 = local_250 + 1;
      *(undefined4 *)(local_250 + 2) = 0;
      if (*(int *)((longlong)local_250 + 0x14) != iVar4) {
        FUN_1402191ca(local_238);
      }
      uVar25 = *(uint *)(local_248 + 0x2b0);
      puVar7 = (uint *)(ulonglong)uVar25;
      local_240 = puVar7;
      if (uVar25 != 0) {
        puVar8 = *(uint **)(local_248 + 0x2a8);
        puVar12 = puVar8;
        if (puVar8 == (uint *)0x0) {
          puVar12 = local_230;
        }
        uVar10 = *puVar12;
        if (uVar10 == 0) {
          iVar4 = uVar25 + 0x1e;
          if (-1 < (int)(uVar25 - 1)) {
            iVar4 = uVar25 - 1;
          }
          uVar23 = 0;
          uVar26 = (ulonglong)(uint)(iVar4 >> 5);
          if (iVar4 >> 5 < 1) {
            uVar26 = uVar23;
          }
          iVar4 = 0;
          do {
            if (uVar26 == uVar23) goto LAB_1433f15fb;
            iVar4 = iVar4 + 0x20;
            uVar10 = puVar12[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar23 = 0;
          iVar4 = 0;
        }
        uVar22 = (ulonglong)(-uVar10 & uVar10);
        uVar26 = uVar22 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar9 = (iVar4 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar9 < (int)uVar25) {
          uVar25 = 0xffffffff;
          do {
            lVar20 = *plVar14;
            if (*(longlong *)(lVar20 + 8 + (longlong)iVar9 * 0x18) == *local_250) {
              iVar17 = (int)local_250[2];
              *(uint *)(local_250 + 2) = iVar17 + 1U;
              if (*(uint *)((longlong)local_250 + 0x14) < iVar17 + 1U) {
                FUN_1446f84a2(local_238,iVar17);
              }
              *(undefined8 *)(*local_238 + (longlong)iVar17 * 8) =
                   *(undefined8 *)(lVar20 + (longlong)iVar9 * 0x18);
              puVar8 = *(uint **)(local_248 + 0x2a8);
              puVar7 = (uint *)(ulonglong)*(uint *)(local_248 + 0x2b0);
            }
            uVar25 = uVar25 & ~(uint)uVar22;
            puVar12 = puVar8;
            if (puVar8 == (uint *)0x0) {
              puVar12 = local_230;
            }
            iVar9 = (int)uVar23;
            lVar20 = (longlong)iVar9;
            uVar10 = puVar12[lVar20] & uVar25;
            iVar17 = (int)puVar7;
            if (uVar10 == 0) {
              iVar11 = iVar17 + 0x1e;
              if (-1 < iVar17 + -1) {
                iVar11 = iVar17 + -1;
              }
              iVar11 = iVar11 >> 5;
              iVar4 = iVar4 + 0x20;
              iVar18 = iVar11;
              if (iVar11 < iVar9) {
                iVar18 = iVar9;
              }
              if (iVar9 < iVar11) {
                lVar13 = 0;
                do {
                  uVar10 = puVar12[lVar20 + lVar13 + 1];
                  if (uVar10 != 0) {
                    uVar23 = (ulonglong)(iVar9 + (int)lVar13 + 1);
                    uVar25 = 0xffffffff;
                    goto LAB_1433f15bd;
                  }
                  iVar4 = iVar4 + 0x20;
                  lVar13 = lVar13 + 1;
                } while (iVar18 - lVar20 != lVar13);
                uVar25 = 0xffffffff;
                iVar9 = iVar18;
              }
              uVar23 = (ulonglong)(iVar9 + 1);
              iVar9 = iVar17;
            }
            else {
LAB_1433f15bd:
              uVar22 = (ulonglong)(-uVar10 & uVar10);
              uVar26 = uVar22 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar26 != 0) {
                for (; uVar26 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar9 = (iVar4 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (iVar17 <= iVar9) {
                iVar9 = iVar17;
              }
            }
          } while (iVar9 != (int)local_240);
        }
      }
LAB_1433f15fb:
      local_250 = local_250 + 3;
    } while (local_250 != local_228);
  }
  auVar27 = local_258;
  iVar4 = FUN_1448332aa(local_258,&DAT_149e39130);
  lVar20 = local_248;
  if ((1 < iVar4) &&
     (FUN_140562eea(&local_1f8,auVar27,0,&DAT_14c896044), (local_1f8._0_8_ & 1) == 0)) {
    FUN_140219018(auVar27,lVar20 + 600);
  }
  if ((*(byte *)((longlong)auVar27 + 0x28) & 1) != 0) {
    FUN_1408174de(lVar20 + 0x50,lVar20,0);
  }
  if ((*(char *)(lVar20 + 0x470) == '\0') && ((*(byte *)((longlong)auVar27 + 0x28) & 1) != 0)) {
    *(undefined1 *)(lVar20 + 0x470) = 1;
    iVar4 = *(int *)(lVar20 + 0x480);
    if ((longlong)iVar4 != 0) {
      lVar20 = *(longlong *)(lVar20 + 0x478);
      lVar13 = 0;
      do {
        iVar9 = *(int *)(lVar20 + 4 + lVar13);
        if ((((iVar9 != 0) && (uVar25 = *(uint *)(lVar20 + lVar13), -1 < (int)uVar25)) &&
            ((int)uVar25 < DAT_14c9647dc)) &&
           (((plVar14 = (longlong *)
                        ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8)),
             plVar14 != (longlong *)0x0 && ((int)plVar14[2] == iVar9)) &&
            (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 &&
             (plVar14 = (longlong *)*plVar14, plVar14 != (longlong *)0x0)))))) {
          uVar5 = (**(code **)(*plVar14 + 0x310))(plVar14);
          uVar6 = (**(code **)(*plVar14 + 0x3f8))(plVar14);
          FUN_1408174de(uVar5,uVar6,0);
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar4 * 8 != lVar13);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433f1b9f FUN_1433f1b9f body=69 status=ok
// SIG undefined FUN_1433f1b9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433f1b9f(void)

{
  _DAT_14cacd500 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433f1be1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacd508,1);
  return;
}



// FUNCTION 1433f1bf6 FUN_1433f1bf6 body=258 status=ok
// SIG undefined FUN_1433f1bf6(void)

void FUN_1433f1bf6(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_38 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  lVar2 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951808) && (FUN_144b3d300(&DAT_14c951808), DAT_14c951808 == -1)) {
    FUN_145dfc00c(&DAT_14c951778);
    atexit((_func_5014 *)&LAB_142809c19);
    _Init_thread_footer(&DAT_14c951808);
  }
  for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
    if ((*(uint *)(lVar2 + 8) & 0x30) != 0) goto LAB_1433f1c80;
  }
  local_28.Data1 = 0;
  local_28.Data2 = 0;
  local_28.Data3 = 0;
  local_28.Data4[0] = '\0';
  local_28.Data4[1] = '\0';
  local_28.Data4[2] = '\0';
  local_28.Data4[3] = '\0';
  local_28.Data4[4] = '\0';
  local_28.Data4[5] = '\0';
  local_28.Data4[6] = '\0';
  local_28.Data4[7] = '\0';
  CoCreateGuid(&local_28);
  *(ulong *)(param_1 + 0x168) = local_28.Data1;
  *(undefined4 *)(param_1 + 0x16c) = local_28._4_4_;
  *(undefined4 *)(param_1 + 0x170) = local_28.Data4._0_4_;
  *(undefined4 *)(param_1 + 0x174) = local_28.Data4._4_4_;
LAB_1433f1c80:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433f1cfe FUN_1433f1cfe body=564 status=ok
// SIG undefined FUN_1433f1cfe(void)

void FUN_1433f1cfe(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_78 = 0;
    uStack_70 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar7 = FUN_1400439fc(param_1,0,&local_58);
  if (cVar7 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  local_60 = param_1 + 0x33;
  local_58 = 0;
  uStack_50 = 0;
  lVar9 = param_1[0x34];
  if ((longlong)(int)lVar9 != 0) {
    lVar3 = param_1[0x33];
    lVar13 = 0;
    do {
      uVar11 = uStack_50;
      if (*(longlong *)(lVar3 + 8 + lVar13) != 0) {
        lVar14 = (longlong)(int)uStack_50;
        uVar8 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
        if (uStack_50._4_4_ < uVar8) {
          FUN_1417b88b4(&local_58,uVar11 & 0xffffffff);
        }
        puVar10 = (undefined4 *)(lVar13 + lVar3 + 8);
        *(undefined8 *)(local_58 + lVar14 * 0x28) = *(undefined8 *)(puVar10 + -2);
        uVar4 = puVar10[1];
        uVar5 = puVar10[2];
        uVar6 = puVar10[3];
        puVar1 = (undefined4 *)(local_58 + 8 + lVar14 * 0x28);
        *puVar1 = *puVar10;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        *(undefined8 *)(local_58 + 0x18 + lVar14 * 0x28) = 0;
        iVar2 = puVar10[6];
        _Src = *(void **)(puVar10 + 4);
        *(int *)(local_58 + 0x20 + lVar14 * 0x28) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)(local_58 + lVar14 * 0x28 + 0x24) = 0;
        }
        else {
          puVar12 = (undefined8 *)(local_58 + lVar14 * 0x28 + 0x18);
          FUN_1446dd670(puVar12,iVar2,0);
          memcpy((void *)*puVar12,_Src,(longlong)iVar2 * 2);
        }
      }
      lVar13 = lVar13 + 0x28;
    } while ((longlong)(int)lVar9 * 0x28 != lVar13);
  }
  if (local_60 == &local_58) {
    uVar11 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_140e3ac47(param_1[0x33],(int)param_1[0x34]);
    if (param_1[0x33] != 0) {
      FUN_1400020a8();
    }
    param_1[0x33] = local_58;
    local_58 = 0;
    *(int *)(param_1 + 0x34) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0x1a4) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar11 = 0;
  }
  FUN_140e3ac47(local_58,uVar11);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  lVar9 = FUN_14498be06(param_1 + 5);
  if (lVar9 != 0) {
    (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x40))(lVar9 + 0x28,param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433f1f34 FUN_1433f1f34 body=380 status=ok
// SIG undefined FUN_1433f1f34(void)

ulonglong FUN_1433f1f34(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  lVar4 = (**(code **)(*param_3 + 0x308))(param_3);
  puVar2 = *(ulonglong **)(param_1 + 0x70);
  if (param_2 == 0) {
    uVar5 = *puVar2;
    bVar10 = uVar5 == **(ulonglong **)(lVar4 + 0x20);
LAB_1433f20a4:
    uVar5 = CONCAT71((int7)(uVar5 >> 8),bVar10);
    goto LAB_1433f20a7;
  }
  lVar3 = *(longlong *)((longlong)puVar2 + (longlong)(int)param_2 * 0xc);
  if ((lVar3 != 0) && (*(int *)(lVar4 + 0x98) != *(int *)(lVar4 + 0xc4))) {
    uVar9 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar8 = (uint)lVar3 & 0xffff;
    lVar7 = lVar4 + 200;
    if (*(longlong *)(lVar4 + 0xd0) != 0) {
      lVar7 = *(longlong *)(lVar4 + 0xd0);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar4 + 0xd8) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8) +
                             (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar4 + 0x90) + (longlong)iVar6 * 0x14);
        if (*plVar1 == lVar3) {
          uVar5 = 0;
          if ((plVar1 == (longlong *)0x0) || ((uint *)(plVar1 + 1) == (uint *)0x0))
          goto LAB_1433f20a7;
          uVar9 = *(uint *)(plVar1 + 1);
          uVar5 = (ulonglong)uVar9;
          if (uVar9 != 0xffffffff) {
            goto LAB_1433f2034;
          }
          break;
        }
        iVar6 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar6 != -1);
    }
  }
  goto LAB_1433f208e;
  while( true ) {
    uVar8 = *(uint *)(*(longlong *)(lVar4 + 0x20) + 8 + uVar5 * 0xc);
    uVar5 = (ulonglong)uVar8;
    if ((uVar9 == 0xffffffff) || (uVar8 == 0xffffffff)) goto LAB_1433f20a1;
    param_2 = uVar9;
    if (*(longlong *)((longlong)puVar2 + (longlong)(int)uVar9 * 0xc) !=
        *(longlong *)(*(longlong *)(lVar4 + 0x20) + (longlong)(int)uVar8 * 0xc)) break;
LAB_1433f2034:
    uVar8 = 0xffffffff;
    uVar9 = 0xffffffff;
    if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x78))) {
      uVar9 = *(uint *)((longlong)puVar2 + (ulonglong)param_2 * 0xc + 8);
    }
    if (((int)uVar5 < 0) || (*(int *)(lVar4 + 0x28) <= (int)uVar5)) {
LAB_1433f20a1:
      bVar10 = uVar9 == uVar8;
      goto LAB_1433f20a4;
    }
  }
LAB_1433f208e:
  uVar5 = 0;
LAB_1433f20a7:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1433f20bd FUN_1433f20bd body=450 status=ok
// SIG undefined FUN_1433f20bd(void)

void FUN_1433f20bd(void)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  int local_40;
  uint local_38;
  ulonglong local_30;
  
  uVar1 = DAT_14c7612f8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((-1 < (int)DAT_14c7612f8) && ((DAT_14c7612f8 == 3 || ((DAT_14c7612f8 & 0x7ffffffd) == 0)))) {
    if (1 < DAT_14cad39b0 + 1U) {
      uVar4 = FUN_140083894();
      cVar2 = FUN_1406bafe2(uVar4,3);
      if (cVar2 != '\0') {
        lVar7 = FUN_140083894();
        (**(code **)(**(longlong **)(lVar7 + 0x30) + 0x20))(*(longlong **)(lVar7 + 0x30),0,0);
      }
    }
    FUN_14793d058(&local_48,0x10,1,0);
    uVar5 = (ulonglong)local_38;
    if ((-1 < (int)local_38) && ((int)local_38 < local_40)) {
      do {
        plVar3 = (longlong *)
                 (**(code **)(**(longlong **)(local_48 + (uVar5 & 0xffffffff) * 8) + 0x388))();
        if (plVar3 != (longlong *)0x0) {
          FUN_147d252e4(local_60,*(undefined8 *)(local_48 + (longlong)(int)local_38 * 8),0);
          if (0 < (int)plVar3[1]) {
            uVar5 = 0;
            do {
              lVar7 = *(longlong *)(*plVar3 + uVar5 * 8);
              if ((uVar1 & 0x7ffffffd) == 0) {
                FUN_1433f2e16(lVar7 + 0x298);
              }
              else if (uVar1 == 3) {
                lVar7 = lVar7 + 0x298;
                FUN_1433f2e16(lVar7);
                FUN_1433f23aa(lVar7,*(undefined8 *)(local_48 + (longlong)(int)local_38 * 8),
                              uVar5 & 0xffffffff,0);
              }
              uVar5 = uVar5 + 1;
            } while ((longlong)uVar5 < (longlong)(int)plVar3[1]);
          }
          FUN_147d2548a(local_60);
        }
        uVar5 = (longlong)(int)local_38;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
          local_38 = (uint)uVar5;
          if ((longlong)local_40 <= (longlong)uVar5) break;
        } while (*(longlong *)(local_48 + uVar5 * 8) == 0);
      } while ((-2 < (longlong)uVar6) && ((int)local_38 < local_40));
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433f2280 FUN_1433f2280 body=69 status=ok
// SIG undefined FUN_1433f2280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433f2280(void)

{
  _DAT_14cacd590 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433f22c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacd598,1);
  return;
}



// FUNCTION 1433f22c5 FUN_1433f22c5 body=69 status=ok
// SIG undefined FUN_1433f22c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433f22c5(void)

{
  _DAT_14cacd5a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433f2307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacd5a8,1);
  return;
}



// FUNCTION 1433f230a FUN_1433f230a body=69 status=ok
// SIG undefined FUN_1433f230a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433f230a(void)

{
  _DAT_14cacd5b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433f234c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacd5b8,1);
  return;
}



// FUNCTION 1433f234f FUN_1433f234f body=91 status=ok
// SIG undefined FUN_1433f234f(void)

void FUN_1433f234f(void)

{
  if (DAT_14cacd5c8 != 0) {
    if (DAT_14cacd5c0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cacd5c0)(DAT_14cacd5c0,0);
    FUN_1446efa72(&DAT_14cacd5c0,0,0,0x10);
    DAT_14cacd5c8 = 0;
  }
  if (DAT_14cacd5c0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1433f23aa FUN_1433f23aa body=952 status=ok
// SIG undefined FUN_1433f23aa(void)

void FUN_1433f23aa(longlong *param_1,longlong param_2,int param_3,char param_4)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined ***pppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined ***pppuVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_f8 [32];
  code **local_d8;
  int local_d0;
  longlong local_c8;
  undefined1 local_c0 [20];
  undefined1 local_ac [4];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  code *local_98;
  longlong *local_90;
  undefined ***local_88;
  undefined **local_78;
  longlong *local_70;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(char *)((longlong)param_1 + 0xb1) == '\0') && (DAT_14c7612f8 == 3)) &&
     ((longlong)*(int *)(param_2 + 0x508) != 0)) {
    lVar7 = *(longlong *)(param_2 + 0x500);
    uVar8 = 0;
    lVar13 = 0;
    do {
      if (DAT_14c7612f4 <= param_3) {
        bVar1 = *(byte *)(lVar7 + 8 + uVar8);
        if (DAT_14c7612e0 < 0) {
          if (((bVar1 & 1) != 0) && (*(int *)(lVar7 + 0xc + uVar8) <= param_3)) goto LAB_1433f2463;
        }
        else if ((DAT_14c7612e0 <= param_3) && ((bVar1 & 1) != 0)) {
LAB_1433f2463:
          if ((int)(~uVar8 >> 4) != 0) {
            lVar13 = (lVar13 >> 0x20) * 0x10;
            local_50 = *(undefined8 *)(lVar7 + lVar13);
            uStack_48 = 0;
            if (param_1[1] == 0) {
              lVar5 = FUN_1433f2764(param_1,&local_50);
              lVar4 = DAT_14cb0d2b0;
              if (lVar5 == 0) {
                if (param_4 == '\0') {
                  local_88 = (undefined ***)0x0;
                  local_78 = &PTR_LAB_14a7df8e0;
                  local_70 = param_1;
                  local_98 = FUN_1433f537c;
                  if (DAT_14cb0d2b0 == 0) goto LAB_1433f25c2;
                  lVar7 = FUN_1413f862e();
                  if (((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                        (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) ||
                     ((longlong)*(int *)(lVar4 + 0x1150) < 1)) goto LAB_1433f25c2;
                  pppuVar6 = (undefined ***)0x0;
                  lVar7 = 0;
                  goto LAB_1433f263d;
                }
                if ((*(longlong *)(*param_1 + 0x38) != 0) &&
                   ((int)param_1[0xd] != *(int *)((longlong)param_1 + 0x94))) {
                  lVar7 = *(longlong *)(lVar7 + lVar13);
                  uVar3 = (uint)((ulonglong)lVar7 >> 0x10);
                  uVar11 = (uint)lVar7 & 0xffff;
                  plVar9 = param_1 + 0x13;
                  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
                    plVar9 = (longlong *)param_1[0x14];
                  }
                  iVar12 = *(int *)((longlong)plVar9 +
                                   (ulonglong)
                                   ((int)param_1[0x15] - 1U &
                                   (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar11)
                                   + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar11 >> 4)) * 4);
                  if (iVar12 != -1) {
                    goto LAB_1433f2541;
                  }
                }
              }
              else {
                *(undefined1 *)(param_1 + 0x16) = 1;
                *(undefined4 *)((longlong)param_1 + 0xb4) = (undefined4)local_50;
                *(undefined4 *)(param_1 + 0x17) = local_50._4_4_;
                *(undefined4 *)((longlong)param_1 + 0xbc) = (undefined4)uStack_48;
                *(undefined4 *)(param_1 + 0x18) = uStack_48._4_4_;
                FUN_14793d998(param_1);
              }
            }
          }
          break;
        }
      }
      lVar13 = lVar13 + 0x100000000;
      uVar8 = uVar8 + 0x10;
    } while ((longlong)*(int *)(param_2 + 0x508) * 0x10 != uVar8);
  }
  goto LAB_1433f25d9;
LAB_1433f25c2:
  pppuVar6 = (undefined ***)0x0;
  goto LAB_1433f25c4;
  while (iVar12 = *(int *)(lVar13 + 0x80), iVar12 != -1) {
LAB_1433f2541:
    lVar13 = param_1[0xc] + (longlong)iVar12 * 0x88;
    if (*(longlong *)(param_1[0xc] + (longlong)iVar12 * 0x88) == lVar7) {
      if ((lVar13 + 8U & 0xfffffffffffffff7) != 0) {
        FUN_14793d722(local_c0,param_2);
        lVar7 = FUN_14001cc68(0x88,0x10);
        FUN_14367981e(lVar7);
        local_90 = &local_c8;
        local_c8 = lVar7;
        local_98 = (code *)&local_50;
        FUN_14794d532(param_1 + 2,local_ac);
        FUN_14793d830(param_1,&local_50,local_c8,0);
        lVar7 = local_c8;
        param_1[1] = local_c8;
        *(undefined1 *)(param_1 + 0x16) = 1;
        *(undefined4 *)((longlong)param_1 + 0xb4) = (undefined4)local_50;
        *(undefined4 *)(param_1 + 0x17) = local_50._4_4_;
        *(undefined4 *)((longlong)param_1 + 0xbc) = (undefined4)uStack_48;
        *(undefined4 *)(param_1 + 0x18) = uStack_48._4_4_;
        FUN_140308182(local_c8 + 0x48,&DAT_14cb00c08);
        FUN_140308182(lVar7,&DAT_14cb00c08);
        FUN_14793d948(local_c0);
      }
      break;
    }
  }
  goto LAB_1433f25d9;
  while (lVar7 = lVar7 + 1, *(int *)(lVar4 + 0x1150) != lVar7) {
LAB_1433f263d:
    pcVar2 = *(char **)(*(longlong *)(lVar4 + 0x1148) + lVar7 * 8);
    if ((*pcVar2 == '\x01') && (*(longlong *)(pcVar2 + 0x360) != 0)) {
      lVar7 = FUN_140a2dd74();
      if (lVar7 == 0) goto LAB_1433f25c2;
      local_a8 = (undefined4)local_50;
      uStack_a4 = local_50._4_4_;
      uStack_a0 = (undefined4)uStack_48;
      uStack_9c = uStack_48._4_4_;
      local_d8 = &local_98;
      local_d0 = param_3;
      FUN_1433f28d2(lVar7,&local_a8,param_2,param_2);
      pppuVar6 = local_88;
      if (local_98 == (code *)0x0) goto LAB_1433f25d9;
      break;
    }
  }
LAB_1433f25c4:
  pppuVar10 = &local_78;
  if (pppuVar6 != (undefined ***)0x0) {
    pppuVar10 = pppuVar6;
  }
  (*(code *)(*pppuVar10)[2])();
LAB_1433f25d9:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433f2764 FUN_1433f2764 body=365 status=ok
// SIG undefined FUN_1433f2764(void)

ulonglong FUN_1433f2764(longlong *param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  uint uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  ulonglong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar8 = 0;
  FUN_1433f4f2c(local_38,0,param_3,&DAT_149eda618);
  uVar5 = 0;
  bVar1 = true;
  do {
    bVar6 = bVar1;
    uVar3 = *(ulonglong *)(param_2 + lVar8 * 8);
    if (uVar3 != 0) {
      uVar7 = (ulonglong)uVar5;
      uVar5 = uVar5 + 1;
      local_38[uVar7] = uVar3;
    }
    lVar8 = 1;
    bVar1 = false;
  } while (bVar6);
  if ((char)param_1[0x16] == '\x01') {
    lVar8 = 0;
    puVar4 = local_38;
    bVar1 = true;
    do {
      bVar6 = bVar1;
      if (*puVar4 != *(ulonglong *)((longlong)param_1 + lVar8 * 8 + 0xb4)) {
        if (*(char *)((longlong)param_1 + 0xb1) == '\0') goto LAB_1433f280a;
        goto LAB_1433f2806;
      }
      lVar8 = 1;
      uVar3 = 0;
      puVar4 = local_38 + 1;
      bVar1 = false;
    } while (bVar6);
  }
  else {
LAB_1433f280a:
    uVar3 = 0;
    if (*param_1 != 0) {
      puVar4 = local_38;
      bVar1 = true;
      do {
        bVar6 = bVar1;
        uVar7 = *puVar4;
        uVar5 = (uint)(uVar7 >> 0x10);
        uVar5 = (int)(uVar7 >> 0x20) + (int)(uVar7 & 0xffff) +
                (int)(uVar3 >> 2) + (uint)uVar3 * 0x40 + (int)uVar7 * 0x10000 +
                (uVar5 << 0x13 | uVar5 & 0xffff) + (int)((uVar7 & 0xffff) >> 4) + 0x9e3779b9 ^
                (uint)uVar3;
        uVar3 = (ulonglong)uVar5;
        puVar4 = local_38 + 1;
        bVar1 = false;
      } while (bVar6);
      iVar2 = FUN_14794d7fe(param_1 + 2,uVar5,local_38);
      if ((iVar2 == -1) ||
         (lVar8 = (longlong)iVar2 * 0x20 + param_1[2], puVar4 = (ulonglong *)(lVar8 + 0x10),
         puVar4 == (ulonglong *)0x0 || lVar8 == 0)) {
LAB_1433f2806:
        uVar3 = 0;
      }
      else {
        uVar3 = *puVar4;
      }
    }
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1433f28d2 FUN_1433f28d2 body=1346 status=ok
// SIG undefined FUN_1433f28d2(void)

void FUN_1433f28d2(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5,int param_6)

{
  byte *pbVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined8 *local_f0;
  undefined1 *local_e8;
  code *local_e0;
  undefined4 local_cc;
  uint local_c8 [4];
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98 [2];
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_3 != (longlong *)0x0) {
    if (DAT_14cb06da8 == 0) {
      local_f0 = &local_b8;
      local_b8 = FUN_1449e2820;
      local_e0 = FUN_14081d0ea;
      local_e8 = &LAB_1464003b0;
      local_f8 = &LAB_147d17bdf;
      local_100 = &LAB_1417edf22;
      local_108 = L"Engine";
      local_110 = 0;
      local_118 = 0x10000000;
      local_120 = 8;
      local_128 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(param_3[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) ==
        DAT_14cb06da8 + 0x30)) {
      lVar9 = 0;
      FUN_1433f4f2c(&local_b8,0);
      local_88 = (longlong *)0x0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98[0] = 0;
      local_58 = 0;
      uStack_50 = 0;
      FUN_1433f4f2c(local_c8,0);
      uVar6 = 0;
      bVar12 = true;
      do {
        bVar3 = bVar12;
        lVar9 = *(longlong *)(param_2 + lVar9 * 8);
        if (lVar9 != 0) {
          uVar10 = (ulonglong)uVar6;
          uVar6 = uVar6 + 1;
          *(longlong *)(local_c8 + uVar10 * 2) = lVar9;
        }
        lVar9 = 1;
        bVar12 = false;
      } while (bVar3);
      local_b8 = (code *)CONCAT44(local_c8[1],local_c8[0]);
      uStack_b0 = local_c8[2];
      uStack_ac = local_c8[3];
      FUN_14793e150(local_98,param_5);
      uVar6 = *(uint *)((longlong)param_3 + 0xc);
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar4 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar4 = *(int *)(lVar9 + 0x10);
        bVar12 = iVar4 == 0;
        if (bVar12) {
          *(int *)(lVar9 + 0x10) = iVar11;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar4 = iVar11;
        }
      }
      uStack_50 = CONCAT44(iVar4,(undefined4)uStack_50);
      if (param_4 == 0) {
        local_58 = 0;
        iVar4 = 0;
      }
      else {
        uVar6 = *(uint *)(param_4 + 0xc);
        local_58 = CONCAT44(local_58._4_4_,uVar6);
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar4 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar4 = *(int *)(lVar9 + 0x10);
          bVar12 = iVar4 == 0;
          if (bVar12) {
            *(int *)(lVar9 + 0x10) = iVar11;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar4 = iVar11;
          }
        }
      }
      uVar10 = uStack_a0;
      local_58 = CONCAT44(iVar4,(undefined4)local_58);
      if (param_6 == -1) {
        iVar4 = (**(code **)(*param_3 + 0x3c0))(param_3);
        if (0 < iVar4) {
          iVar11 = 0;
          do {
            uVar10 = uStack_a0;
            lVar9 = (longlong)(int)uStack_a0;
            uVar6 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar6);
            if (uStack_a0._4_4_ < uVar6) {
              FUN_1446f48e2(&local_a8,uVar10 & 0xffffffff);
            }
            *(int *)(local_a8 + lVar9 * 4) = iVar11;
            iVar11 = iVar11 + 1;
          } while (iVar4 != iVar11);
        }
      }
      else {
        lVar9 = (longlong)(int)uStack_a0;
        uVar6 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar6);
        if (uStack_a0._4_4_ < uVar6) {
          FUN_1446f48e2(&local_a8,uVar10 & 0xffffffff);
        }
        *(int *)(local_a8 + lVar9 * 4) = param_6;
      }
      iVar4 = *(int *)(param_1 + 0x1f8);
      *(uint *)(param_1 + 0x1f8) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1fc) < iVar4 + 1U) {
        FUN_14794e31e(param_1 + 0x1f0,iVar4);
      }
      FUN_14793e2ec((longlong)iVar4 * 0x70 + *(longlong *)(param_1 + 0x1f0),&local_b8);
      lVar9 = 0;
      local_cc = 0;
      local_c8[1] = 0;
      local_c8[0] = *(uint *)((longlong)param_3 + 0xc);
      if ((int)local_c8[0] < DAT_14c9647dc) {
        lVar9 = (ulonglong)((local_c8[0] & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_c8[0] >> 0x10) * 8);
      }
      uVar6 = *(uint *)(lVar9 + 0x10);
      if (*(uint *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        uVar8 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
        }
        LOCK();
        uVar6 = *(uint *)(lVar9 + 0x10);
        bVar12 = uVar6 == 0;
        if (bVar12) {
          *(uint *)(lVar9 + 0x10) = uVar8;
          uVar6 = 0;
        }
        UNLOCK();
        if (bVar12) {
          uVar6 = uVar8;
        }
      }
      local_c8[1] = uVar6;
      piVar5 = (int *)FUN_14794e3ae(param_1 + 0x200,uVar6 ^ local_c8[0],local_c8,&local_cc);
      *piVar5 = *piVar5 + 1;
      pbVar1 = *(byte **)(param_1 + 0x270);
      if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 1) == 0)) {
        *(undefined1 *)(param_1 + 0x25b) = 1;
      }
      else if (*(char *)(param_1 + 0x25b) == '\0') {
        uVar2 = *(undefined8 *)(pbVar1 + 0x28);
        FUN_1402eb48e(uVar2,param_1 + 0x250);
        *(undefined1 *)(param_1 + 0x25b) = 1;
        FUN_1402eb97e(uVar2,param_1 + 0x250);
        if (*(char *)(param_1 + 0x25b) == '\0') {
          *(undefined4 *)(*(longlong *)(param_1 + 0x270) + 0x24) = 0xbf800000;
        }
      }
      if (local_98[0] != 0) {
        plVar7 = local_88;
        if (local_88 == (longlong *)0x0) {
          plVar7 = local_78;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433f2e16 FUN_1433f2e16 body=1559 status=ok
// SIG undefined FUN_1433f2e16(void)

void FUN_1433f2e16(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  ulonglong local_88 [2];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(char *)(param_1 + 0xb1) != '\0') || (*(char *)(param_1 + 0xb0) != '\x01'))
  goto LAB_1433f2e78;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar17 = 0;
    FUN_1433f4f2c(local_88,0,param_3,&DAT_149eda618);
    uVar14 = 0;
    bVar6 = true;
    do {
      bVar7 = bVar6;
      uVar20 = *(ulonglong *)(param_1 + 0xb4 + lVar17 * 8);
      if (uVar20 != 0) {
        uVar21 = (ulonglong)uVar14;
        uVar14 = uVar14 + 1;
        local_88[uVar21] = uVar20;
      }
      lVar17 = 1;
      uVar20 = 0;
      bVar6 = false;
    } while (bVar7);
    puVar19 = local_88;
    bVar6 = true;
    do {
      bVar7 = bVar6;
      uVar21 = *puVar19;
      uVar14 = (uint)(uVar21 >> 0x10);
      uVar20 = (ulonglong)
               ((int)(uVar21 >> 0x20) + (int)(uVar21 & 0xffff) +
                (int)(uVar20 >> 2) + (uint)uVar20 * 0x40 + (int)uVar21 * 0x10000 +
                (uVar14 << 0x13 | uVar14 & 0xffff) + (int)((uVar21 & 0xffff) >> 4) + 0x9e3779b9 ^
               (uint)uVar20);
      puVar19 = local_88 + 1;
      bVar6 = false;
    } while (bVar7);
    plVar1 = (longlong *)(param_1 + 0x10);
    iVar8 = FUN_14794d7fe(plVar1,uVar20,local_88);
    if (iVar8 != -1) {
      FUN_14794dd48(plVar1,&local_78,local_88);
      if ((longlong)(int)local_78 != -1) {
        lVar17 = *(longlong *)(*plVar1 + 0x10 + (longlong)(int)local_78 * 0x20);
        FUN_14794ddcc(plVar1);
        if (lVar17 != 0) {
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          iVar8 = *(int *)(lVar5 + 0xc60);
          if (DAT_14c86a9fc == 0) {
            if (iVar8 != 2) {
              if (iVar8 != 1) goto LAB_1433f2fc9;
              DVar9 = FUN_140ad26c0();
              DVar10 = GetCurrentThreadId();
              if (DVar9 == DVar10) goto LAB_1433f2fce;
              goto LAB_1433f300f;
            }
          }
          else {
LAB_1433f2fc9:
            if (iVar8 != 0x10) {
LAB_1433f300f:
              if (DAT_14ca9a438 == '\0') {
                if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar5 + 0xc60), iVar8 == 2))
                goto LAB_1433f2fce;
                if (iVar8 == 1) {
                  DVar9 = FUN_140ad26c0();
                  DVar10 = GetCurrentThreadId();
                  if (DVar9 == DVar10) goto LAB_1433f2fce;
                }
              }
              if (DAT_14ca9a43c == 0) {
                puVar3 = (undefined8 *)
                         (*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
                         );
                puVar12 = (uint *)*puVar3;
                if (puVar12 != (uint *)0x0) goto LAB_1433f314d;
                while( true ) {
                  uVar14 = *(uint *)(*(longlong *)
                                      ((longlong)ThreadLocalStoragePointer +
                                      (ulonglong)_tls_index * 8) + 0x318);
                  if ((uVar14 & 1) == 0) {
                    *(uint *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x318) = uVar14 | 1;
                    __tlregdtor(&LAB_1433f550d);
                  }
                  lVar5 = *(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                  puVar11 = *(undefined4 **)(lVar5 + 0x310);
                  *(undefined8 *)(lVar5 + 0x310) = 0;
                  if (puVar11 == (undefined4 *)0x0) {
                    puVar11 = _aligned_malloc(0x10000,0x10000);
                  }
                  *puVar11 = 0xffffffff;
                  *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
                  puVar11[0x12] = 0;
                  *puVar3 = puVar11;
                  FUN_140217a48(puVar3);
                  puVar12 = (uint *)*puVar3;
LAB_1433f314d:
                  puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
                  puVar16 = (uint *)(puVar18 + 0x16);
                  uVar14 = puVar12[0x12];
                  if (puVar16 <= puVar12 + 0x4000) break;
                  while( true ) {
                    *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
                    LOCK();
                    uVar4 = *puVar12;
                    *puVar12 = *puVar12 + uVar14 + 1;
                    UNLOCK();
                    if ((uVar4 ^ uVar14) != 0xffffffff) break;
                    puVar12 = (uint *)*puVar3;
                    *puVar12 = 0xffffffff;
                    *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
                    puVar12[0x12] = 0;
                    *puVar3 = puVar12;
                    puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
                    puVar16 = (uint *)(puVar18 + 0x16);
                    uVar14 = 0;
                    if (puVar16 <= puVar12 + 0x4000) {
                      uVar14 = 1;
                      goto LAB_1433f31cd;
                    }
                  }
                }
                uVar14 = uVar14 + 1;
LAB_1433f31cd:
                *(uint **)(puVar12 + 0x10) = puVar16;
                puVar12[0x12] = uVar14;
                iVar8 = 0;
                FUN_1447247dc(puVar18,0);
                *puVar18 = &PTR_FUN_14a7df980;
                puVar18[0x15] = lVar17;
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar14 = DAT_14c7585c8 >> 10 & 3;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
                    uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
                    iVar8 = 0;
                  }
                  else {
                    uVar20 = 2;
                  }
                }
                else {
                  iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                          *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  uVar20 = 5;
                }
                if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
                  (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
                }
                puVar18[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar18[9] = puVar18;
                puVar18[10] = puVar18;
                lVar17 = *(longlong *)
                          (*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x2b8);
                if (lVar17 == 0) {
                  uVar21 = 1;
                  if ((char)uVar20 != '\x06') {
                    uVar21 = uVar20;
                  }
                  uVar20 = uVar21;
                  uVar13 = 0;
                }
                else {
                  if ((char)uVar20 == '\x06') {
                    uVar20 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
                  }
                  uVar13 = *(undefined8 *)(lVar17 + 0x30);
                }
                puVar18[0xf] = uVar13;
                puVar18[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
                *(int *)((longlong)puVar18 + 0x1c) = iVar8;
                if (puVar18 == (undefined8 *)0x0) {
                  local_78 = (code *)CONCAT71(local_78._1_7_,1);
                  FUN_1447439e4(0);
                }
                else {
                  LOCK();
                  *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                  UNLOCK();
                  local_78 = (code *)CONCAT71(local_78._1_7_,1);
                  FUN_1447439e4(puVar18);
                  LOCK();
                  piVar2 = (int *)(puVar18 + 1);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)*puVar18)(puVar18,1);
                  }
                }
              }
              else {
                local_68 = (undefined ***)0x0;
                local_58 = &PTR_LAB_14a7df900;
                local_78 = FUN_1433f5496;
                local_98 = &local_78;
                local_50 = lVar17;
                FUN_14005a792(&DAT_14ca9a440,L"ReleaseSkinSkinWeightProfilesDataBufferCommand",
                              &DAT_14cacd6a8);
                if (local_78 != (code *)0x0) {
                  pppuVar15 = local_68;
                  if (local_68 == (undefined ***)0x0) {
                    pppuVar15 = &local_58;
                  }
                  (*(code *)(*pppuVar15)[2])();
                }
              }
              goto LAB_1433f2f5f;
            }
          }
LAB_1433f2fce:
          FUN_144725486(lVar17 + 0x48);
          FUN_144725486(lVar17);
          FUN_14074f9cc(lVar17);
          FUN_1400020a8(lVar17);
        }
      }
    }
LAB_1433f2f5f:
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_1433f4f2c(&local_78,0);
  *(int *)(param_1 + 0xb4) = (int)local_78;
  *(undefined4 *)(param_1 + 0xb8) = local_78._4_4_;
  *(undefined4 *)(param_1 + 0xbc) = uStack_70;
  *(undefined4 *)(param_1 + 0xc0) = uStack_6c;
LAB_1433f2e78:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433f342e FUN_1433f342e body=313 status=ok
// SIG undefined FUN_1433f342e(void)

longlong FUN_1433f342e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x10);
  lVar2 = param_1 + 0x20;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar4 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0x38);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c == iVar4) && (local_48 == lVar2)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    do {
      do {
        lVar3 = *(longlong *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
        lVar5 = lVar5 + (ulonglong)
                        (((uint)*(byte *)(lVar3 + 0x28) + (uint)*(byte *)(lVar3 + 0x29) + 2) *
                         *(int *)(lVar3 + 0x44) + *(int *)(lVar3 + 0x80) * 4);
        local_60 = local_60 & ~local_70._4_4_;
        FUN_1449c0562(&local_70);
      } while (iStack_5c != iVar4);
    } while ((local_68 != lVar2) || (local_78 != plVar1));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1433f3568 FUN_1433f3568 body=398 status=ok
// SIG undefined FUN_1433f3568(void)

void FUN_1433f3568(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar10 = 0;
  uVar9 = 0;
  bVar4 = true;
  do {
    bVar5 = bVar4;
    uVar2 = *(ulonglong *)(param_2 + lVar10 * 8);
    uVar3 = (uint)(uVar2 >> 0x10);
    uVar9 = (ulonglong)
            ((int)(uVar2 >> 0x20) + (int)(uVar2 & 0xffff) +
             (int)(uVar9 >> 2) + (uint)uVar9 * 0x40 + (int)uVar2 * 0x10000 +
             (uVar3 << 0x13 | uVar3 & 0xffff) + (int)((uVar2 & 0xffff) >> 4) + 0x9e3779b9 ^
            (uint)uVar9);
    lVar10 = 1;
    bVar4 = false;
  } while (bVar5);
  iVar6 = FUN_14794d7fe(param_1 + 2,uVar9,param_2);
  if ((iVar6 == -1) && (lVar10 = *param_1, lVar10 != 0)) {
    if (*(char *)(lVar10 + 0x20) == '\x01') {
      plVar7 = (longlong *)(lVar10 + 0x38);
    }
    else {
      lVar10 = param_1[0x19];
      if (((lVar10 != 0) && (*(longlong *)(lVar10 + 8) != 0)) &&
         (*(int *)(*(longlong *)(lVar10 + 8) + 0x10) == 0)) {
        (**(code **)(**(longlong **)(lVar10 + 8) + 0x18))();
      }
      plVar7 = param_1 + 0x1a;
    }
    lVar10 = *plVar7;
    if (lVar10 != 0) {
      lVar8 = FUN_14001cc68(0x88,0x10);
      FUN_14367981e(lVar8);
      local_48 = &local_58;
      uVar1 = *(undefined1 *)(*param_1 + 0x20);
      *(undefined1 *)(lVar8 + 0x20) = uVar1;
      *(undefined1 *)(lVar8 + 0x68) = uVar1;
      local_58 = lVar8;
      local_50 = param_2;
      FUN_14794d532(param_1 + 2,local_3c);
      FUN_14793d830(param_1,param_2,local_58,lVar10);
      lVar10 = local_58;
      FUN_140308182(local_58 + 0x48,&DAT_14cb00c08);
      FUN_140308182(lVar10,&DAT_14cb00c08);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433f36f8 FUN_1433f36f8 body=253 status=ok
// SIG undefined FUN_1433f36f8(void)

void FUN_1433f36f8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (0 < (int)param_2[1]) {
    lVar8 = 0;
    do {
      lVar9 = lVar8 * 0x20 + *param_2;
      lVar7 = 0;
      uVar6 = 0;
      bVar3 = true;
      do {
        bVar4 = bVar3;
        uVar1 = *(ulonglong *)(lVar9 + lVar7 * 8);
        uVar2 = (uint)(uVar1 >> 0x10);
        uVar6 = (ulonglong)
                ((int)(uVar1 >> 0x20) + (int)(uVar1 & 0xffff) +
                 (int)(uVar6 >> 2) + (uint)uVar6 * 0x40 + (int)uVar1 * 0x10000 +
                 (uVar2 << 0x13 | uVar2 & 0xffff) + (int)((uVar1 & 0xffff) >> 4) + 0x9e3779b9 ^
                (uint)uVar6);
        lVar7 = 1;
        bVar3 = false;
      } while (bVar4);
      iVar5 = FUN_14794d7fe((longlong *)(param_1 + 0x10),uVar6,lVar9);
      if (iVar5 == -1) {
        lVar7 = 0;
      }
      else {
        lVar7 = (longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 0x10);
      }
      lVar7 = *(longlong *)(lVar7 + 0x10);
      FUN_14367942e(lVar7,*(undefined8 *)(lVar9 + 0x10),param_3);
      FUN_143679372(lVar7 + 0x48);
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1433f37f6 FUN_1433f37f6 body=298 status=ok
// SIG undefined FUN_1433f37f6(void)

void FUN_1433f37f6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x10);
  lVar2 = param_1 + 0x20;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar4 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x38);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar4) || (local_50 != lVar2)) {
    do {
      do {
        lVar3 = *(longlong *)(*local_80 + 0x10 + (longlong)iStack_64 * 0x20);
        FUN_143679490(lVar3,param_2);
        FUN_1436793d6(lVar3 + 0x48,param_2);
        local_68 = local_68 & ~local_78._4_4_;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar4);
    } while ((local_70 != lVar2) || (local_80 != plVar1));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433f3921 FUN_1433f3921 body=69 status=ok
// SIG undefined FUN_1433f3921(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433f3921(void)

{
  _DAT_14cacd5f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433f3963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacd600,1);
  return;
}



// FUNCTION 1433f3966 FUN_1433f3966 body=41 status=ok
// SIG undefined FUN_1433f3966(void)

void FUN_1433f3966(void)

{
  DAT_14cacd650 = 0;
  if (DAT_14cacd648 != 0) {
    FUN_1400020a8();
  }
  FUN_145bcc9fc();
  return;
}



// FUNCTION 1433f3994 FUN_1433f3994 body=4197 status=ok
// SIG undefined FUN_1433f3994(void)

void FUN_1433f3994(longlong *param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  void *_Src;
  undefined8 uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint uVar19;
  undefined ***pppuVar20;
  longlong *plVar21;
  wchar_t *pwVar22;
  uint *puVar23;
  ulonglong uVar24;
  int *piVar25;
  int iVar26;
  undefined *puVar27;
  longlong lVar28;
  undefined8 *puVar29;
  bool bVar30;
  undefined1 auStack_128 [32];
  code **local_108;
  undefined4 local_100;
  byte local_f1;
  undefined8 *local_f0;
  undefined8 *local_e8;
  int *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_b8 = *param_1;
  if (-1 < *(int *)(local_b8 + 0x280)) {
    lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_e0 = (int *)(lVar28 + 0xc60);
    local_f0 = (undefined8 *)(lVar28 + 0x308);
    local_e8 = (undefined8 *)(lVar28 + 0x310);
    local_c8 = (longlong *)(lVar28 + 0x2b8);
    local_d0 = 0x527800b400;
    lVar28 = 0;
    local_c0 = param_1;
    do {
      iVar26 = *(int *)(*(longlong *)(local_b8 + 0x1f0) + 0x6c + lVar28 * 0x70);
      local_b0 = lVar28;
      if (iVar26 != 0) {
        local_d8 = *(longlong *)(local_b8 + 0x1f0) + lVar28 * 0x70;
        uVar8 = *(uint *)(local_d8 + 0x68);
        if ((((((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) &&
              (plVar21 = (longlong *)
                         ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
              plVar21 != (longlong *)0x0)) &&
             (((int)plVar21[2] == iVar26 && ((*(uint *)(plVar21 + 1) & 0x10200000) == 0)))) &&
            ((longlong *)*plVar21 != (longlong *)0x0)) &&
           ((plVar21 = (longlong *)(**(code **)(*(longlong *)*plVar21 + 0x388))(),
            plVar21 != (longlong *)0x0 && ((longlong)*(int *)(local_d8 + 0x18) != 0)))) {
          piVar25 = *(int **)(local_d8 + 0x10);
          piVar1 = piVar25 + *(int *)(local_d8 + 0x18);
          do {
            lVar28 = *(longlong *)(*plVar21 + (longlong)*piVar25 * 8);
            plVar3 = (longlong *)(lVar28 + 0x298);
            if ((DAT_14c7612e4 == 0) || (*(char *)(lVar28 + 0x158) != '\x01')) {
              plVar4 = (longlong *)(lVar28 + 0x360);
              lVar6 = *(longlong *)(lVar28 + 0x360);
              if (lVar6 == 0) {
                lVar28 = *plVar3;
                if (((lVar28 != 0) && (*(longlong *)(lVar28 + 0x30) != 0)) &&
                   (((uint)*(byte *)(lVar28 + 0x28) + (uint)*(byte *)(lVar28 + 0x29) + 2) *
                    *(int *)(lVar28 + 0x44) != 0)) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14cacd5d8) &&
                     (FUN_144b3d300(&DAT_14cacd5d8), DAT_14cacd5d8 == -1)) {
                    FUN_1446f470e(&DAT_14cacd5d0,L"ReadbackSkinWeightBuffer",1);
                    _Init_thread_footer(&DAT_14cacd5d8);
                  }
                  iVar26 = *local_e0;
                  if (DAT_14c86a9fc == 0) {
                    if (iVar26 == 2) goto LAB_1433f3c72;
                    if (iVar26 != 1) goto LAB_1433f3c69;
                    DVar9 = FUN_140ad26c0();
                    DVar10 = GetCurrentThreadId();
                    if (DVar9 == DVar10) goto LAB_1433f3c72;
LAB_1433f3f9d:
                    if (DAT_14ca9a438 == '\0') {
                      if ((DAT_14c86a9f8 != '\x01') || (*local_e0 == 2)) {
LAB_1433f478f:
                        puVar11 = (undefined8 *)FUN_14001cc68(0x58,0x10);
                        FUN_14047abb0(puVar11,DAT_14cacd5d0);
                        *puVar11 = &PTR_FUN_14a37f800;
                        puVar11[3] = 0;
                        puVar11[4] = 0;
                        puVar11[5] = 0;
                        puVar11[6] = 0;
                        puVar11[7] = 0;
                        puVar11[8] = 0;
                        puVar11[9] = 0;
                        puVar11[10] = 0;
                        puVar29 = (undefined8 *)*plVar4;
                        puVar16 = puVar29;
                        if ((puVar29 != puVar11) &&
                           (*plVar4 = (longlong)puVar11, puVar16 = puVar11,
                           puVar29 != (undefined8 *)0x0)) {
                          lVar28 = 0x58;
                          do {
                            lVar6 = *(longlong *)((longlong)puVar29 + lVar28 + -8);
                            if (lVar6 != 0) {
                              LOCK();
                              puVar15 = (uint *)(lVar6 + 8);
                              uVar8 = *puVar15;
                              *puVar15 = *puVar15 - 1;
                              UNLOCK();
                              if ((uVar8 & 0x3fffffff) == 1) {
                                puVar15 = (uint *)(lVar6 + 8);
                                LOCK();
                                uVar8 = *puVar15;
                                *puVar15 = *puVar15 | 0x40000000;
                                UNLOCK();
                                if ((uVar8 >> 0x1e & 1) == 0) {
                                  local_f1 = *(byte *)(lVar6 + 0xd);
                                  plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                                  plVar12[1] = lVar6;
                                  plVar18 = DAT_14ca843c0;
                                  plVar17 = DAT_14ca843c8;
                                  if ((local_f1 & 2) == 0) {
                                    do {
                                      *plVar12 = (longlong)plVar18;
                                      LOCK();
                                      bVar30 = plVar18 != DAT_14ca843c0;
                                      plVar17 = plVar12;
                                      if (bVar30) {
                                        plVar18 = DAT_14ca843c0;
                                        plVar17 = DAT_14ca843c0;
                                      }
                                      DAT_14ca843c0 = plVar17;
                                      UNLOCK();
                                    } while (bVar30);
                                  }
                                  else {
                                    do {
                                      *plVar12 = (longlong)plVar17;
                                      LOCK();
                                      bVar30 = plVar17 != DAT_14ca843c8;
                                      plVar18 = plVar12;
                                      if (bVar30) {
                                        plVar17 = DAT_14ca843c8;
                                        plVar18 = DAT_14ca843c8;
                                      }
                                      DAT_14ca843c8 = plVar18;
                                      UNLOCK();
                                    } while (bVar30);
                                  }
                                }
                              }
                            }
                            lVar28 = lVar28 + -8;
                          } while (lVar28 != 0x18);
                          *puVar29 = &PTR_LAB_14a217b60;
                          lVar28 = puVar29[1];
                          if (lVar28 != 0) {
                            LOCK();
                            puVar15 = (uint *)(lVar28 + 8);
                            uVar8 = *puVar15;
                            *puVar15 = *puVar15 - 1;
                            UNLOCK();
                            if ((uVar8 & 0x3fffffff) == 1) {
                              puVar15 = (uint *)(lVar28 + 8);
                              LOCK();
                              uVar8 = *puVar15;
                              *puVar15 = *puVar15 | 0x40000000;
                              UNLOCK();
                              if ((uVar8 >> 0x1e & 1) == 0) {
                                bVar5 = *(byte *)(lVar28 + 0xd);
                                plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                                plVar12[1] = lVar28;
                                plVar18 = DAT_14ca843c0;
                                plVar17 = DAT_14ca843c8;
                                if ((bVar5 & 2) == 0) {
                                  do {
                                    *plVar12 = (longlong)plVar18;
                                    LOCK();
                                    bVar30 = plVar18 != DAT_14ca843c0;
                                    plVar17 = plVar12;
                                    if (bVar30) {
                                      plVar18 = DAT_14ca843c0;
                                      plVar17 = DAT_14ca843c0;
                                    }
                                    DAT_14ca843c0 = plVar17;
                                    UNLOCK();
                                  } while (bVar30);
                                }
                                else {
                                  do {
                                    *plVar12 = (longlong)plVar17;
                                    LOCK();
                                    bVar30 = plVar17 != DAT_14ca843c8;
                                    plVar18 = plVar12;
                                    if (bVar30) {
                                      plVar17 = DAT_14ca843c8;
                                      plVar18 = DAT_14ca843c8;
                                    }
                                    DAT_14ca843c8 = plVar18;
                                    UNLOCK();
                                  } while (bVar30);
                                }
                              }
                            }
                          }
                          FUN_1400020a8(puVar29);
                          puVar16 = (undefined8 *)*plVar4;
                          param_1 = local_c0;
                        }
                        if (puVar16 == (undefined8 *)0x0) goto LAB_1433f43ea;
                        lVar28 = *(longlong *)(*plVar3 + 0x10);
                        iVar26 = *(int *)(lVar28 + 0x20);
                        goto joined_r0x0001433f3ec1;
                      }
                      if (*local_e0 == 1) {
                        DVar9 = FUN_140ad26c0();
                        DVar10 = GetCurrentThreadId();
                        if (DVar9 == DVar10) goto LAB_1433f478f;
                      }
                    }
                    if (DAT_14ca9a43c != 0) {
                      local_88 = &PTR_LAB_14a7df9c0;
                      local_a8[0] = FUN_1433f5a0e;
                      pwVar22 = L"FSkinWeightProfilesData_EnqueueGPUReadback";
                      puVar27 = &DAT_14cacd6b0;
                      local_78 = plVar3;
                      goto LAB_1433f43bd;
                    }
                    puVar15 = (uint *)*local_f0;
                    if (puVar15 != (uint *)0x0) goto LAB_1433f40b0;
                    while( true ) {
                      uVar8 = *(uint *)(*(longlong *)
                                         ((longlong)ThreadLocalStoragePointer +
                                         (ulonglong)_tls_index * 8) + 0x318);
                      if ((uVar8 & 1) == 0) {
                        *(uint *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x318) = uVar8 | 1;
                        __tlregdtor(&LAB_1433f550d);
                      }
                      puVar14 = (undefined4 *)*local_e8;
                      *local_e8 = 0;
                      if (puVar14 == (undefined4 *)0x0) {
                        puVar14 = _aligned_malloc(0x10000,0x10000);
                      }
                      puVar29 = local_f0;
                      *puVar14 = 0xffffffff;
                      *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
                      puVar14[0x12] = 0;
                      *local_f0 = puVar14;
                      FUN_140217a48(local_f0);
                      puVar15 = (uint *)*puVar29;
LAB_1433f40b0:
                      puVar29 = (undefined8 *)
                                (*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
                      puVar23 = (uint *)(puVar29 + 0x17);
                      uVar8 = puVar15[0x12];
                      if (puVar23 <= puVar15 + 0x4000) break;
                      while( true ) {
                        *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
                        LOCK();
                        uVar19 = *puVar15;
                        *puVar15 = *puVar15 + uVar8 + 1;
                        UNLOCK();
                        if ((uVar19 ^ uVar8) != 0xffffffff) break;
                        puVar15 = (uint *)*local_f0;
                        *puVar15 = 0xffffffff;
                        *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
                        puVar15[0x12] = 0;
                        *local_f0 = puVar15;
                        puVar29 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
                        puVar23 = (uint *)(puVar29 + 0x17);
                        uVar8 = 0;
                        if (puVar23 <= puVar15 + 0x4000) {
                          uVar8 = 1;
                          goto LAB_1433f4137;
                        }
                      }
                    }
                    uVar8 = uVar8 + 1;
LAB_1433f4137:
                    *(uint **)(puVar15 + 0x10) = puVar23;
                    puVar15[0x12] = uVar8;
                    FUN_1447247dc(puVar29,0);
                    *puVar29 = &PTR_FUN_14a7dfa38;
                    puVar29[0x15] = plVar4;
                    puVar29[0x16] = plVar3;
                    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                      uVar8 = DAT_14c7585c8 >> 10 & 3;
                      iVar26 = 0;
                      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
                        uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
                        iVar26 = 0;
                      }
                      else {
                        uVar24 = 2;
                      }
                    }
                    else {
                      iVar26 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                               *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                      uVar24 = 5;
                    }
                    if (*(code **)(puVar29[0xe] + 0x18) != FUN_144713626) {
                      (**(code **)(puVar29[0xe] + 0x18))(puVar29 + 0xe,puVar29 + 9);
                    }
                    puVar29[0xe] = LowLevelTasks::
                                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                   ::
                                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                   ::vftable;
                    puVar29[9] = puVar29;
                    puVar29[10] = puVar29;
                    lVar28 = *local_c8;
                    if (lVar28 == 0) {
                      if ((char)uVar24 == '\x06') {
                        uVar24 = 1;
                      }
                      uVar13 = 0;
                    }
                    else {
                      if ((char)uVar24 == '\x06') {
                        uVar24 = *(ulonglong *)(lVar28 + 0x38) >> 0x3b;
                      }
                      uVar13 = *(undefined8 *)(lVar28 + 0x30);
                    }
                    puVar29[0xf] = uVar13;
                    puVar29[0x10] = (uVar24 << 0x3b) + local_d0 | 0xc000000000000000;
                    *(int *)((longlong)puVar29 + 0x1c) = iVar26;
                    if (puVar29 == (undefined8 *)0x0) {
LAB_1433f46b3:
                      local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
                      FUN_1447439e4(0,local_a8);
                    }
                    else {
                      LOCK();
                      *(int *)(puVar29 + 1) = *(int *)(puVar29 + 1) + 1;
                      UNLOCK();
                      local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
                      FUN_1447439e4(puVar29,local_a8);
                      LOCK();
                      piVar2 = (int *)(puVar29 + 1);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        puVar16 = (undefined8 *)*puVar29;
LAB_1433f4666:
                        (*(code *)*puVar16)(puVar29,1);
                      }
                    }
                  }
                  else {
LAB_1433f3c69:
                    if (iVar26 != 0x10) goto LAB_1433f3f9d;
LAB_1433f3c72:
                    puVar11 = (undefined8 *)FUN_14001cc68(0x58,0x10);
                    FUN_14047abb0(puVar11,DAT_14cacd5d0);
                    *puVar11 = &PTR_FUN_14a37f800;
                    puVar11[3] = 0;
                    puVar11[4] = 0;
                    puVar11[5] = 0;
                    puVar11[6] = 0;
                    puVar11[7] = 0;
                    puVar11[8] = 0;
                    puVar11[9] = 0;
                    puVar11[10] = 0;
                    puVar29 = (undefined8 *)*plVar4;
                    puVar16 = puVar29;
                    if ((puVar29 != puVar11) &&
                       (*plVar4 = (longlong)puVar11, puVar16 = puVar11, puVar29 != (undefined8 *)0x0
                       )) {
                      lVar28 = 0x58;
                      do {
                        lVar6 = *(longlong *)((longlong)puVar29 + lVar28 + -8);
                        if (lVar6 != 0) {
                          LOCK();
                          puVar15 = (uint *)(lVar6 + 8);
                          uVar8 = *puVar15;
                          *puVar15 = *puVar15 - 1;
                          UNLOCK();
                          if ((uVar8 & 0x3fffffff) == 1) {
                            puVar15 = (uint *)(lVar6 + 8);
                            LOCK();
                            uVar8 = *puVar15;
                            *puVar15 = *puVar15 | 0x40000000;
                            UNLOCK();
                            if ((uVar8 >> 0x1e & 1) == 0) {
                              local_f1 = *(byte *)(lVar6 + 0xd);
                              plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                              plVar12[1] = lVar6;
                              plVar18 = DAT_14ca843c0;
                              plVar17 = DAT_14ca843c8;
                              if ((local_f1 & 2) == 0) {
                                do {
                                  *plVar12 = (longlong)plVar18;
                                  LOCK();
                                  bVar30 = plVar18 != DAT_14ca843c0;
                                  plVar17 = plVar12;
                                  if (bVar30) {
                                    plVar18 = DAT_14ca843c0;
                                    plVar17 = DAT_14ca843c0;
                                  }
                                  DAT_14ca843c0 = plVar17;
                                  UNLOCK();
                                } while (bVar30);
                              }
                              else {
                                do {
                                  *plVar12 = (longlong)plVar17;
                                  LOCK();
                                  bVar30 = plVar17 != DAT_14ca843c8;
                                  plVar18 = plVar12;
                                  if (bVar30) {
                                    plVar17 = DAT_14ca843c8;
                                    plVar18 = DAT_14ca843c8;
                                  }
                                  DAT_14ca843c8 = plVar18;
                                  UNLOCK();
                                } while (bVar30);
                              }
                            }
                          }
                        }
                        lVar28 = lVar28 + -8;
                      } while (lVar28 != 0x18);
                      *puVar29 = &PTR_LAB_14a217b60;
                      lVar28 = puVar29[1];
                      if (lVar28 != 0) {
                        LOCK();
                        puVar15 = (uint *)(lVar28 + 8);
                        uVar8 = *puVar15;
                        *puVar15 = *puVar15 - 1;
                        UNLOCK();
                        if ((uVar8 & 0x3fffffff) == 1) {
                          puVar15 = (uint *)(lVar28 + 8);
                          LOCK();
                          uVar8 = *puVar15;
                          *puVar15 = *puVar15 | 0x40000000;
                          UNLOCK();
                          if ((uVar8 >> 0x1e & 1) == 0) {
                            bVar5 = *(byte *)(lVar28 + 0xd);
                            plVar12 = (longlong *)FUN_14001cc68(0x10,8);
                            plVar12[1] = lVar28;
                            plVar18 = DAT_14ca843c0;
                            plVar17 = DAT_14ca843c8;
                            if ((bVar5 & 2) == 0) {
                              do {
                                *plVar12 = (longlong)plVar18;
                                LOCK();
                                bVar30 = plVar18 != DAT_14ca843c0;
                                plVar17 = plVar12;
                                if (bVar30) {
                                  plVar18 = DAT_14ca843c0;
                                  plVar17 = DAT_14ca843c0;
                                }
                                DAT_14ca843c0 = plVar17;
                                UNLOCK();
                              } while (bVar30);
                            }
                            else {
                              do {
                                *plVar12 = (longlong)plVar17;
                                LOCK();
                                bVar30 = plVar17 != DAT_14ca843c8;
                                plVar18 = plVar12;
                                if (bVar30) {
                                  plVar17 = DAT_14ca843c8;
                                  plVar18 = DAT_14ca843c8;
                                }
                                DAT_14ca843c8 = plVar18;
                                UNLOCK();
                              } while (bVar30);
                            }
                          }
                        }
                      }
                      FUN_1400020a8(puVar29);
                      puVar16 = (undefined8 *)*plVar4;
                      param_1 = local_c0;
                    }
                    if (puVar16 == (undefined8 *)0x0) goto LAB_1433f43ea;
                    lVar28 = *(longlong *)(*plVar3 + 0x10);
                    iVar26 = *(int *)(lVar28 + 0x20);
joined_r0x0001433f3ec1:
                    if (iVar26 != 0) {
                      FUN_14178d776(puVar16,&DAT_14ca85100,lVar28,0);
                    }
                  }
                }
              }
              else {
                if (*(longlong *)(lVar6 + 8) == 0) {
LAB_1433f3b9c:
                  if (*(int *)(lVar28 + 0x370) < 1) {
                    if (*(int *)(lVar28 + 0x370) == 0) {
                      lVar6 = *(longlong *)(*plVar4 + 8);
                      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == 0)) {
                        (**(code **)(**(longlong **)(*plVar4 + 8) + 0x18))();
                      }
                    }
                    lVar6 = *plVar3;
                    if (lVar6 == 0) goto LAB_1433f43ea;
                    iVar26 = ((uint)*(byte *)(lVar6 + 0x28) + (uint)*(byte *)(lVar6 + 0x29) + 2) *
                             *(int *)(lVar6 + 0x44);
                    FUN_1401211f6(lVar28 + 0x368,iVar26 + *(int *)(lVar6 + 0x80) * 4,
                                  CONCAT71((uint7)(uint3)((uint)iVar26 >> 8),1));
                    iVar26 = *local_e0;
                    if (DAT_14c86a9fc == 0) {
                      if (iVar26 != 2) {
                        if (iVar26 != 1) goto LAB_1433f3db9;
                        DVar9 = FUN_140ad26c0();
                        DVar10 = GetCurrentThreadId();
                        if (DVar9 == DVar10) goto LAB_1433f3dc2;
                        goto LAB_1433f432d;
                      }
LAB_1433f3dc2:
                      lVar6 = *plVar4;
                      if (lVar6 != 0) {
                        if ((*(longlong *)(lVar6 + 8) != 0) &&
                           (*(int *)(*(longlong *)(lVar6 + 8) + 0x10) == 0)) {
                          (**(code **)(**(longlong **)(lVar6 + 8) + 0x18))();
                        }
                        lVar6 = *plVar4;
                        uVar8 = *(uint *)(lVar6 + 0x10);
                        if (uVar8 == 0) {
                          uVar19 = 0x20;
                        }
                        else {
                          uVar19 = 0;
                          if (uVar8 != 0) {
                            for (; (uVar8 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
                            }
                          }
                        }
                        if (*(longlong *)(lVar6 + 0x18 + (ulonglong)uVar19 * 8) == 0) {
                          _Src = (void *)0x0;
                        }
                        else {
                          local_100 = *(undefined4 *)(lVar28 + 0x370);
                          *(uint *)(lVar6 + 0x14) = uVar19;
                          local_108 = (code **)((ulonglong)local_108 & 0xffffffff00000000);
                          _Src = (void *)(**(code **)(*DAT_14ca83900 + 0xf8))
                                                   (DAT_14ca83900,&DAT_14ca85100);
                        }
                        memcpy(*(void **)(lVar28 + 0x368),_Src,(longlong)*(int *)(lVar28 + 0x370));
                        (**(code **)(*DAT_14ca83900 + 0x100))
                                  (DAT_14ca83900,&DAT_14ca85100,
                                   *(undefined8 *)
                                    (*(longlong *)(lVar28 + 0x360) + 0x18 +
                                    (ulonglong)*(uint *)(*(longlong *)(lVar28 + 0x360) + 0x14) * 8))
                        ;
                        *(uint *)(lVar28 + 0x378) = DAT_14c7590b0;
                      }
                      goto LAB_1433f43ea;
                    }
LAB_1433f3db9:
                    if (iVar26 == 0x10) goto LAB_1433f3dc2;
LAB_1433f432d:
                    if (DAT_14ca9a438 == '\0') {
                      if ((DAT_14c86a9f8 != '\x01') || (*local_e0 == 2)) goto LAB_1433f3dc2;
                      if (*local_e0 == 1) {
                        DVar9 = FUN_140ad26c0();
                        DVar10 = GetCurrentThreadId();
                        if (DVar9 == DVar10) goto LAB_1433f3dc2;
                      }
                    }
                    if (DAT_14ca9a43c == 0) {
                      puVar15 = (uint *)*local_f0;
                      if (puVar15 != (uint *)0x0) goto LAB_1433f4476;
                      while( true ) {
                        uVar8 = *(uint *)(*(longlong *)
                                           ((longlong)ThreadLocalStoragePointer +
                                           (ulonglong)_tls_index * 8) + 0x318);
                        if ((uVar8 & 1) == 0) {
                          *(uint *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x318) = uVar8 | 1;
                          __tlregdtor(&LAB_1433f550d);
                        }
                        puVar14 = (undefined4 *)*local_e8;
                        *local_e8 = 0;
                        if (puVar14 == (undefined4 *)0x0) {
                          puVar14 = _aligned_malloc(0x10000,0x10000);
                        }
                        puVar29 = local_f0;
                        *puVar14 = 0xffffffff;
                        *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
                        puVar14[0x12] = 0;
                        *local_f0 = puVar14;
                        FUN_140217a48(local_f0);
                        puVar15 = (uint *)*puVar29;
LAB_1433f4476:
                        puVar29 = (undefined8 *)
                                  (*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
                        puVar23 = (uint *)(puVar29 + 0x16);
                        uVar8 = puVar15[0x12];
                        if (puVar23 <= puVar15 + 0x4000) break;
                        while( true ) {
                          *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
                          LOCK();
                          uVar19 = *puVar15;
                          *puVar15 = *puVar15 + uVar8 + 1;
                          UNLOCK();
                          if ((uVar19 ^ uVar8) != 0xffffffff) break;
                          puVar15 = (uint *)*local_f0;
                          *puVar15 = 0xffffffff;
                          *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
                          puVar15[0x12] = 0;
                          *local_f0 = puVar15;
                          puVar29 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
                          puVar23 = (uint *)(puVar29 + 0x16);
                          uVar8 = 0;
                          if (puVar23 <= puVar15 + 0x4000) {
                            uVar8 = 1;
                            goto LAB_1433f44fb;
                          }
                        }
                      }
                      uVar8 = uVar8 + 1;
LAB_1433f44fb:
                      *(uint **)(puVar15 + 0x10) = puVar23;
                      puVar15[0x12] = uVar8;
                      FUN_1447247dc(puVar29,0);
                      *puVar29 = &PTR_FUN_14a7dfac8;
                      puVar29[0x15] = plVar4;
                      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                        uVar8 = DAT_14c7585c8 >> 10 & 3;
                        iVar26 = 0;
                        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
                          uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
                          iVar26 = 0;
                        }
                        else {
                          uVar24 = 2;
                        }
                      }
                      else {
                        iVar26 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                        uVar24 = 5;
                      }
                      if (*(code **)(puVar29[0xe] + 0x18) != FUN_144713626) {
                        (**(code **)(puVar29[0xe] + 0x18))(puVar29 + 0xe,puVar29 + 9);
                      }
                      puVar29[0xe] = LowLevelTasks::
                                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                     ::
                                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                     ::vftable;
                      puVar29[9] = puVar29;
                      puVar29[10] = puVar29;
                      lVar28 = *local_c8;
                      if (lVar28 == 0) {
                        if ((char)uVar24 == '\x06') {
                          uVar24 = 1;
                        }
                        uVar13 = 0;
                      }
                      else {
                        if ((char)uVar24 == '\x06') {
                          uVar24 = *(ulonglong *)(lVar28 + 0x38) >> 0x3b;
                        }
                        uVar13 = *(undefined8 *)(lVar28 + 0x30);
                      }
                      puVar29[0xf] = uVar13;
                      puVar29[0x10] = (uVar24 << 0x3b) + local_d0 | 0xc000000000000000;
                      *(int *)((longlong)puVar29 + 0x1c) = iVar26;
                      if (puVar29 != (undefined8 *)0x0) {
                        LOCK();
                        *(int *)(puVar29 + 1) = *(int *)(puVar29 + 1) + 1;
                        UNLOCK();
                        local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
                        FUN_1447439e4(puVar29,local_a8);
                        LOCK();
                        piVar2 = (int *)(puVar29 + 1);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 != 0) goto LAB_1433f43ea;
                        puVar16 = (undefined8 *)*puVar29;
                        goto LAB_1433f4666;
                      }
                      goto LAB_1433f46b3;
                    }
                    local_88 = &PTR_LAB_14a7dfa50;
                    local_a8[0] = FUN_1433f5f20;
                    pwVar22 = L"FSkinWeightProfilesData_EnqueueDataReadback";
                    puVar27 = &DAT_14cacd6b4;
LAB_1433f43bd:
                    local_108 = local_a8;
                    local_98 = (undefined ***)0x0;
                    local_80 = plVar4;
                    FUN_14005a792(&DAT_14ca9a440,pwVar22,puVar27);
                    if (local_a8[0] != (code *)0x0) {
                      pppuVar20 = local_98;
                      if (local_98 == (undefined ***)0x0) {
                        pppuVar20 = &local_88;
                      }
                      (*(code *)(*pppuVar20)[2])();
                    }
                    goto LAB_1433f43ea;
                  }
                }
                else {
                  if (((*(int *)(*(longlong *)(lVar6 + 8) + 0x10) != 0) ||
                      (cVar7 = (**(code **)(**(longlong **)(lVar6 + 8) + 0x18))(), cVar7 == '\0'))
                     || (lVar6 = *plVar4, lVar6 == 0)) goto LAB_1433f43ea;
                  if ((*(longlong *)(lVar6 + 8) == 0) ||
                     ((*(int *)(*(longlong *)(lVar6 + 8) + 0x10) == 0 &&
                      (cVar7 = (**(code **)(**(longlong **)(lVar6 + 8) + 0x18))(), cVar7 != '\0'))))
                  goto LAB_1433f3b9c;
                }
                lVar6 = *plVar4;
                if ((((lVar6 != 0) &&
                     ((*(longlong *)(lVar6 + 8) == 0 ||
                      ((*(int *)(*(longlong *)(lVar6 + 8) + 0x10) == 0 &&
                       (cVar7 = (**(code **)(**(longlong **)(lVar6 + 8) + 0x18))(), cVar7 != '\0')))
                      ))) && (*(uint *)(lVar28 + 0x378) != 0xffffffff)) &&
                   (*(uint *)(lVar28 + 0x378) < DAT_14c7590b0)) goto LAB_1433f3b21;
              }
            }
            else {
LAB_1433f3b21:
              FUN_1433f3568(plVar3,local_d8);
            }
LAB_1433f43ea:
            piVar25 = piVar25 + 1;
          } while (piVar25 != piVar1);
        }
      }
      lVar28 = local_b0 + 1;
    } while (local_b0 < *(int *)(*param_1 + 0x280));
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433f4a10 FUN_1433f4a10 body=439 status=ok
// SIG undefined FUN_1433f4a10(void)

void FUN_1433f4a10(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(uint *)(param_1 + 1);
  if ((int)uVar3 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar3) {
      uVar6 = uVar3;
    }
  }
  else {
    uVar6 = uVar3 + (int)((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + 0x10;
  }
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar6) {
    uVar7 = uVar6;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(uVar7,0x48);
    }
    local_58 = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar5 = 0xffffffff;
      LOCK();
      bVar10 = DAT_14c7585d0 != 0xffffffff;
      DVar4 = dwTlsIndex;
      if (bVar10) {
        DVar5 = DAT_14c7585d0;
        DVar4 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar4;
      UNLOCK();
      if (bVar10) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar5;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar2 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    uVar3 = uVar7 * 0x48;
    uVar8 = (ulonglong)(uVar3 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar6 = (uint)(uVar3 >= 0x10) * 8;
    lVar1 = (ulonglong)uVar6 + 7;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar1 & uVar8);
    uVar9 = (longlong)_Dst + (longlong)(int)uVar3;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar9) {
      FUN_140023dd8(puVar2,uVar6 + 8 + uVar3);
      _Dst = (void *)(lVar1 + *puVar2 & uVar8);
      uVar9 = (longlong)(int)uVar3 + (longlong)_Dst;
    }
    *puVar2 = uVar9;
    *param_1 = _Dst;
    if (param_2 != 0 && local_58 != (void *)0x0) {
      if ((int)uVar7 < (int)param_2) {
        param_2 = uVar7;
      }
      memcpy(_Dst,local_58,(longlong)(int)param_2 * 0x48);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433f4f2c FUN_1433f4f2c body=119 status=ok
// SIG undefined FUN_1433f4f2c(void)

ulonglong * FUN_1433f4f2c(ulonglong *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  ulonglong uVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_4 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1401a700c(&local_24);
    uVar1 = (ulonglong)local_24;
  }
  *param_1 = uVar1;
  if (*param_4 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1401a700c(&local_24);
    uVar1 = (ulonglong)local_24;
  }
  param_1[1] = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433f4fdc FUN_1433f4fdc body=131 status=ok
// SIG undefined FUN_1433f4fdc(void)

void FUN_1433f4fdc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,0x10);
  return;
}



// FUNCTION 1433f5060 FUN_1433f5060 body=14 status=ok
// SIG undefined FUN_1433f5060(void)

void FUN_1433f5060(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1433f50c8 FUN_1433f50c8 body=92 status=ok
// SIG undefined FUN_1433f50c8(void)

void FUN_1433f50c8(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_3 + 0x18) == '\0') {
    local_18 = param_3 + 0x10;
    local_20 = param_3 + 8;
    FUN_140906722(*param_1,local_c,&local_20,0);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433f5126 FUN_1433f5126 body=358 status=ok
// SIG undefined FUN_1433f5126(void)

void FUN_1433f5126(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(byte *)(param_3 + 0x18) - 1 < 5) {
    lVar2 = *param_1;
    switch((uint)*(byte *)(param_3 + 0x18)) {
    case 1:
      plVar5 = (longlong *)(lVar2 + 0x150);
      break;
    case 2:
      plVar5 = (longlong *)(lVar2 + 0x100);
      if (*(int *)(lVar2 + 0x108) != *(int *)(lVar2 + 0x134)) {
        lVar3 = *(longlong *)(param_3 + 0x10);
        uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar8 = (uint)lVar3 & 0xffff;
        lVar7 = lVar2 + 0x138;
        if (*(longlong *)(lVar2 + 0x140) != 0) {
          lVar7 = *(longlong *)(lVar2 + 0x140);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)
                                 (*(int *)(lVar2 + 0x148) - 1U &
                                 (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8) +
                                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            plVar1 = (longlong *)(*plVar5 + (longlong)iVar6 * 0x18);
            if (*plVar1 == lVar3) {
              if ((plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) &&
                 (plVar1[1] == *(longlong *)(param_3 + 8))) goto switchD_1433f515b_caseD_4;
              break;
            }
            iVar6 = (int)plVar1[2];
          } while (iVar6 != -1);
        }
      }
      break;
    case 3:
      plVar5 = (longlong *)(lVar2 + 0x1a0);
      break;
    case 4:
      goto switchD_1433f515b_caseD_4;
    case 5:
      plVar5 = (longlong *)(lVar2 + 0x1f0);
    }
    local_20 = param_3 + 0x10;
    local_28 = param_3 + 8;
    FUN_140906722(plVar5,local_14,&local_28,0);
  }
switchD_1433f515b_caseD_4:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433f528e FUN_1433f528e body=172 status=ok
// SIG undefined FUN_1433f528e(void)

void FUN_1433f528e(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    local_20 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_20 = plVar3;
  }
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433f537c FUN_1433f537c body=209 status=ok
// SIG undefined FUN_1433f537c(void)

void FUN_1433f537c(longlong *param_1,ulonglong *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  uVar1 = *param_2;
  if ((((uVar1 >> 0x20 != 0) && (uVar3 = (uint)uVar1, -1 < (int)uVar3)) &&
      ((int)uVar3 < DAT_14c9647dc)) &&
     (((puVar4 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0xd & 0x3fff8))),
       puVar4 != (undefined8 *)0x0 && (*(int *)(puVar4 + 2) == (int)(uVar1 >> 0x20))) &&
      ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
      uVar5 = *puVar4;
    }
    else {
      uVar5 = 0;
    }
    FUN_147d252e4(local_40,uVar5,0);
    *(undefined1 *)(*param_1 + 0xb0) = 1;
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0xb4) = local_28;
    *(undefined4 *)(lVar2 + 0xb8) = uStack_24;
    *(undefined4 *)(lVar2 + 0xbc) = uStack_20;
    *(undefined4 *)(lVar2 + 0xc0) = uStack_1c;
    FUN_14793d998(*param_1);
    FUN_147d2548a(local_40);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433f546c FUN_1433f546c body=12 status=ok
// SIG undefined FUN_1433f546c(void)

void FUN_1433f546c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433f5475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433f5478 FUN_1433f5478 body=29 status=ok
// SIG undefined FUN_1433f5478(void)

undefined8 FUN_1433f5478(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433f5496 FUN_1433f5496 body=67 status=ok
// SIG undefined FUN_1433f5496(void)

void FUN_1433f5496(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_144725486(lVar1 + 0x48);
  FUN_144725486(lVar1);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14074f9cc(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1433f54e4 FUN_1433f54e4 body=12 status=ok
// SIG undefined FUN_1433f54e4(void)

void FUN_1433f54e4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433f54ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433f54f0 FUN_1433f54f0 body=29 status=ok
// SIG undefined FUN_1433f54f0(void)

undefined8 FUN_1433f54f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433f5534 FUN_1433f5534 body=282 status=ok
// SIG undefined FUN_1433f5534(void)

undefined8 * FUN_1433f5534(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1433f550d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1433f564e FUN_1433f564e body=118 status=ok
// SIG undefined FUN_1433f564e(void)

void FUN_1433f564e(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  FUN_144725486(lVar2 + 0x48);
  FUN_144725486(lVar2);
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    FUN_14074f9cc(lVar2);
    FUN_1400020a8(lVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433f56b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1433f56c4 FUN_1433f56c4 body=211 status=ok
// SIG undefined FUN_1433f56c4(void)

void FUN_1433f56c4(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_44;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    local_44 = 0;
    bVar9 = *plVar2 == *(longlong *)*param_2;
    iVar6 = 0;
    do {
      iVar3 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar7 = iVar6;
      lVar5 = (longlong)iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar8 = iVar3;
        if (lVar4 <= lVar5) break;
        iVar7 = iVar7 + 1;
        iVar8 = iVar7;
      } while (bVar9 == (plVar2[lVar5] == *(longlong *)*param_2));
      if (bVar9 == false) {
        if (local_44 != iVar6) {
          memmove(plVar2 + local_44,plVar2 + iVar6,(longlong)(iVar8 - iVar6) << 3);
        }
        local_44 = local_44 + (iVar8 - iVar6);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar6 = iVar8;
    } while (lVar5 < lVar4);
    *(int *)(param_1 + 1) = local_44;
  }
  return;
}



// FUNCTION 1433f5798 FUN_1433f5798 body=89 status=ok
// SIG undefined FUN_1433f5798(void)

void FUN_1433f5798(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4);
      FUN_144725486(lVar2 + 0x48);
      FUN_144725486(lVar2);
      if (lVar2 != 0) {
        FUN_14074f9cc(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1433f57fc FUN_1433f57fc body=12 status=ok
// SIG undefined FUN_1433f57fc(void)

void FUN_1433f57fc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433f5805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433f5808 FUN_1433f5808 body=57 status=ok
// SIG undefined FUN_1433f5808(void)

undefined8 * FUN_1433f5808(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a7df990;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433f5842 FUN_1433f5842 body=282 status=ok
// SIG undefined FUN_1433f5842(void)

undefined8 * FUN_1433f5842(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1433f550d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1433f595c FUN_1433f595c body=178 status=ok
// SIG undefined FUN_1433f595c(void)

ulonglong FUN_1433f595c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar4 = (ulonglong)DAT_14c7585c8;
  lVar5 = param_1[0x15];
  iVar2 = *(int *)(param_1 + 0x16);
  if ((longlong)iVar2 != 0) {
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar5 + lVar6);
      FUN_144725486(lVar3 + 0x48);
      uVar4 = FUN_144725486(lVar3);
      if (lVar3 != 0) {
        FUN_14074f9cc(lVar3);
        uVar4 = FUN_1400020a8(lVar3);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
    lVar5 = param_1[0x15];
  }
  if (lVar5 != 0) {
    uVar4 = FUN_1400020a8(lVar5);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433f59fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)*param_1)(param_1,1);
      return uVar4;
    }
  }
  return uVar4;
}



// FUNCTION 1433f5a0e FUN_1433f5a0e body=461 status=ok
// SIG undefined FUN_1433f5a0e(void)

void FUN_1433f5a0e(undefined8 *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  
  plVar10 = (longlong *)*param_1;
  plVar4 = (longlong *)param_1[1];
  puVar7 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  FUN_14047abb0(puVar7,DAT_14cacd5d0);
  *puVar7 = &PTR_FUN_14a37f800;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar5 = (undefined8 *)*plVar10;
  if ((puVar5 != puVar7) && (*plVar10 = (longlong)puVar7, puVar5 != (undefined8 *)0x0)) {
    lVar11 = 0x58;
    do {
      lVar6 = *(longlong *)((longlong)puVar5 + lVar11 + -8);
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
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar6;
            plVar10 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar10;
                LOCK();
                bVar12 = plVar10 != DAT_14ca843c0;
                plVar9 = plVar8;
                if (bVar12) {
                  plVar10 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar12);
            }
            else {
              do {
                *plVar8 = (longlong)plVar9;
                LOCK();
                bVar12 = plVar9 != DAT_14ca843c8;
                plVar10 = plVar8;
                if (bVar12) {
                  plVar9 = DAT_14ca843c8;
                  plVar10 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar10;
                UNLOCK();
              } while (bVar12);
            }
          }
        }
      }
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0x18);
    *puVar5 = &PTR_LAB_14a217b60;
    lVar11 = puVar5[1];
    if (lVar11 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar11 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar11 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar11 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar11;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar12 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar12) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
    }
    FUN_1400020a8(puVar5);
  }
  if ((*(longlong *)*param_1 != 0) && (*(int *)(*(longlong *)(*plVar4 + 0x10) + 0x20) != 0)) {
    FUN_14178d776(*(longlong *)*param_1,param_2,*(longlong *)(*plVar4 + 0x10),0);
    return;
  }
  return;
}



// FUNCTION 1433f5be6 FUN_1433f5be6 body=12 status=ok
// SIG undefined FUN_1433f5be6(void)

void FUN_1433f5be6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433f5bef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433f5bf2 FUN_1433f5bf2 body=29 status=ok
// SIG undefined FUN_1433f5bf2(void)

undefined8 FUN_1433f5bf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433f5c10 FUN_1433f5c10 body=282 status=ok
// SIG undefined FUN_1433f5c10(void)

undefined8 * FUN_1433f5c10(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1433f550d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1433f5d2a FUN_1433f5d2a body=502 status=ok
// SIG undefined FUN_1433f5d2a(void)

void FUN_1433f5d2a(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar11 = (longlong *)param_1[0x15];
  plVar5 = (longlong *)param_1[0x16];
  puVar8 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  FUN_14047abb0(puVar8,DAT_14cacd5d0);
  *puVar8 = &PTR_FUN_14a37f800;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar6 = (undefined8 *)*plVar11;
  if ((puVar6 != puVar8) && (*plVar11 = (longlong)puVar8, puVar6 != (undefined8 *)0x0)) {
    lVar12 = 0x58;
    do {
      lVar7 = *(longlong *)((longlong)puVar6 + lVar12 + -8);
      if (lVar7 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar7 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar7 + 8);
          LOCK();
          uVar3 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar7 + 0xd);
            plVar9 = (longlong *)FUN_14001cc68(0x10,8);
            plVar9[1] = lVar7;
            plVar11 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar9 = (longlong)plVar11;
                LOCK();
                bVar13 = plVar11 != DAT_14ca843c0;
                plVar10 = plVar9;
                if (bVar13) {
                  plVar11 = DAT_14ca843c0;
                  plVar10 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar10;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar9 = (longlong)plVar10;
                LOCK();
                bVar13 = plVar10 != DAT_14ca843c8;
                plVar11 = plVar9;
                if (bVar13) {
                  plVar10 = DAT_14ca843c8;
                  plVar11 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar11;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0x18);
    *puVar6 = &PTR_LAB_14a217b60;
    lVar12 = puVar6[1];
    if (lVar12 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar12 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar12 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar12 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar12;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar13) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar13 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar9;
              if (bVar13) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
    FUN_1400020a8(puVar6);
  }
  if ((*(longlong *)param_1[0x15] != 0) && (*(int *)(*(longlong *)(*plVar5 + 0x10) + 0x20) != 0)) {
    FUN_14178d776(*(longlong *)param_1[0x15],&DAT_14ca85100,*(longlong *)(*plVar5 + 0x10),0);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433f5ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1433f5f20 FUN_1433f5f20 body=219 status=ok
// SIG undefined FUN_1433f5f20(void)

void FUN_1433f5f20(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  longlong *plVar5;
  uint uVar6;
  
  if (((longlong *)*param_1 != (longlong *)0x0) && (lVar2 = *(longlong *)*param_1, lVar2 != 0)) {
    if ((*(longlong *)(lVar2 + 8) != 0) && (*(int *)(*(longlong *)(lVar2 + 8) + 0x10) == 0)) {
      (**(code **)(**(longlong **)(lVar2 + 8) + 0x18))();
    }
    plVar5 = (longlong *)*param_1;
    lVar2 = *plVar5;
    uVar1 = *(uint *)(lVar2 + 0x10);
    if (uVar1 == 0) {
      uVar6 = 0x20;
    }
    else {
      uVar6 = 0;
      if (uVar1 != 0) {
        for (; (uVar1 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
    }
    lVar3 = *(longlong *)(lVar2 + 0x18 + (ulonglong)uVar6 * 8);
    if (lVar3 == 0) {
      _Src = (void *)0x0;
    }
    else {
      lVar4 = plVar5[2];
      *(uint *)(lVar2 + 0x14) = uVar6;
      _Src = (void *)(**(code **)(*DAT_14ca83900 + 0xf8))
                               (DAT_14ca83900,&DAT_14ca85100,lVar3,*(undefined8 *)(lVar2 + 8),0,
                                (int)lVar4);
      plVar5 = (longlong *)*param_1;
    }
    memcpy((void *)plVar5[1],_Src,(longlong)(int)plVar5[2]);
    (**(code **)(*DAT_14ca83900 + 0x100))
              (DAT_14ca83900,&DAT_14ca85100,
               *(undefined8 *)
                (*(longlong *)*param_1 + 0x18 +
                (ulonglong)*(uint *)(*(longlong *)*param_1 + 0x14) * 8));
    *(undefined4 *)(*param_1 + 0x18) = DAT_14c7590b0;
  }
  return;
}



// FUNCTION 1433f6006 FUN_1433f6006 body=12 status=ok
// SIG undefined FUN_1433f6006(void)

void FUN_1433f6006(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433f600f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433f6012 FUN_1433f6012 body=29 status=ok
// SIG undefined FUN_1433f6012(void)

undefined8 FUN_1433f6012(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433f6030 FUN_1433f6030 body=282 status=ok
// SIG undefined FUN_1433f6030(void)

undefined8 * FUN_1433f6030(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1433f550d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1433f614a FUN_1433f614a body=292 status=ok
// SIG undefined FUN_1433f614a(void)

void FUN_1433f614a(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Src;
  longlong *plVar6;
  uint uVar7;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (((longlong *)param_1[0x15] != (longlong *)0x0) &&
     (lVar3 = *(longlong *)param_1[0x15], lVar3 != 0)) {
    if ((*(longlong *)(lVar3 + 8) != 0) && (*(int *)(*(longlong *)(lVar3 + 8) + 0x10) == 0)) {
      (**(code **)(**(longlong **)(lVar3 + 8) + 0x18))();
    }
    plVar6 = (longlong *)param_1[0x15];
    lVar3 = *plVar6;
    uVar2 = *(uint *)(lVar3 + 0x10);
    if (uVar2 == 0) {
      uVar7 = 0x20;
    }
    else {
      uVar7 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
    }
    lVar4 = *(longlong *)(lVar3 + 0x18 + (ulonglong)uVar7 * 8);
    if (lVar4 == 0) {
      _Src = (void *)0x0;
    }
    else {
      lVar5 = plVar6[2];
      *(uint *)(lVar3 + 0x14) = uVar7;
      _Src = (void *)(**(code **)(*DAT_14ca83900 + 0xf8))
                               (DAT_14ca83900,&DAT_14ca85100,lVar4,*(undefined8 *)(lVar3 + 8),0,
                                (int)lVar5);
      plVar6 = (longlong *)param_1[0x15];
    }
    memcpy((void *)plVar6[1],_Src,(longlong)(int)plVar6[2]);
    (**(code **)(*DAT_14ca83900 + 0x100))
              (DAT_14ca83900,&DAT_14ca85100,
               *(undefined8 *)
                (*(longlong *)param_1[0x15] + 0x18 +
                (ulonglong)*(uint *)(*(longlong *)param_1[0x15] + 0x14) * 8));
    *(undefined4 *)(param_1[0x15] + 0x18) = DAT_14c7590b0;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433f6260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1433f626e FUN_1433f626e body=282 status=ok
// SIG undefined FUN_1433f626e(void)

undefined8 * FUN_1433f626e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1433f550d);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1433f6388 FUN_1433f6388 body=3047 status=ok
// SIG undefined FUN_1433f6388(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433f6388(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  code *local_98;
  int local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined **local_78;
  undefined1 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = (code *)&DAT_14a19662d;
  local_90 = 4;
  local_8c = 0;
  FUN_14001a6c0(&local_98,1);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (code **)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7ceaf0,1,&PTR_FUN_14a7ceac0);
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_98,&DAT_14caccb48);
  if (cVar2 == '\0') {
    _DAT_14caccb48 = 0;
    uRam000000014caccb50 = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  DAT_14cacd6c8 = 0;
  _DAT_14cacd6d0 = 0;
  atexit((_func_5014 *)&LAB_1433ec93c);
  DAT_14cacd6d8 = 0;
  _DAT_14cacd6e0 = 0;
  atexit(FUN_1433ec94d);
  DAT_14cacd6e8 = 0;
  _DAT_14cacd6f0 = 0;
  atexit((_func_5014 *)&LAB_1433ec97e);
  DAT_14caccb58 = 0;
  _DAT_14caccb60 = 0;
  _DAT_14caccb68 = 2;
  atexit(FUN_1433ec98f);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = &LAB_1433f506e;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caccb70,7,&local_98);
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = &LAB_1433f5074;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caccb71,10,&local_98);
  uStack_a8 = 1;
  ppuStack_b0 = &PTR_FUN_14a7cf190;
  local_b8 = (code **)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7cf1e0,1,&PTR_FUN_14a7cf1b0);
  _DAT_14caccbe0 = 0;
  _DAT_14caccbc0 = 0;
  uRam000000014caccbc8 = 0;
  _DAT_14caccbec = 0x80;
  DAT_14caccc88 = 0;
  _DAT_14caccce0 = 0;
  _DAT_14caccce8 = 0;
  _DAT_14caccc90 = 0;
  uRam000000014caccc98 = 0;
  DAT_14caccca0 = 0;
  _DAT_14caccca8 = 0;
  uRam000000014cacccb0 = 0;
  _DAT_14cacccb5 = 0;
  uRam000000014cacccb8 = 0;
  _DAT_14cacccc0 = 0;
  uRam000000014cacccc8 = 0;
  memset(&DAT_14caccbf0,0,0x91);
  _DAT_14cacccec = 0xffffffff00000080;
  _DAT_14cacccf4 = 0;
  _DAT_14caccd00 = 0;
  _DAT_14caccd08 = 0;
  _DAT_14caccd10 = 0;
  uRam000000014caccd18 = 0;
  _DAT_14caccd20 = 2;
  _DAT_14caccbe8 = 0;
  atexit((_func_5014 *)&LAB_1433edd4b);
  _DAT_14caccd28 = 0;
  DAT_14caccd30 = 1;
  DAT_14caccd69 = 0;
  DAT_14caccd48 = 0;
  uRam000000014caccd50 = 0;
  DAT_14caccd58 = 0;
  uRam000000014caccd60 = 0;
  _DAT_14caccd34 = 0;
  _DAT_14caccd39 = 0;
  uRam000000014caccd3c = 0;
  atexit(FUN_1433edd63);
  uStack_a8 = 0;
  local_b8 = (code **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7cf680,1,0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (code **)0x2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7cfc90,1,&PTR_FUN_14a7cfc40);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (code **)0x1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7cfd50);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (code **)0x2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7cff80);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (code **)0x5;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7d0570);
  uStack_a8 = 0;
  local_b8 = (code **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7d19c0,1,0);
  uStack_a8 = 2;
  ppuStack_b0 = &PTR_FUN_14a7d2400;
  local_b8 = (code **)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7d2470,1,&PTR_FUN_14a7d2440);
  FUN_1446f470e(&DAT_14caccf98,L"GetBindingName",1);
  FUN_1446f470e(&DAT_14caccfa8,L"GetCurves",1);
  FUN_1446f470e(&DAT_14caccfb8,L"GetCurveValue",1);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (code **)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7d2bd0,1,&PTR_FUN_14a7d2ba0);
  local_98 = (code *)0x149e3cc8d;
  local_90 = 7;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  DAT_14cacd6b8 = (ulonglong)uVar3;
  uStack_a8 = 1;
  ppuStack_b0 = &PTR_FUN_14a7d31f0;
  local_b8 = (code **)0x5;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7d3210);
  DAT_14cacd070 = 0;
  uRam000000014cacd078 = 0;
  atexit((_func_5014 *)&LAB_1433eecb7);
  uStack_a8 = 1;
  ppuStack_b0 = &PTR_FUN_14a7d4200;
  local_b8 = (code **)0x8;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7d4220);
  uStack_a8 = 2;
  ppuStack_b0 = &PTR_FUN_14a7d4cc0;
  local_b8 = (code **)0x2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7d4d50,1,&PTR_FUN_14a7d4d00);
  FUN_1446f470e(&DAT_14cacd6c0,L"UE::Anim::FMirrorSyncScope",1);
  FUN_1446f470e(&DAT_14cacd700,L"UE::Anim::FAnimNotifyMirrorContext",1);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (code **)0x2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7d50a0);
  uStack_a8 = 0;
  local_b8 = (code **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7d5770,1,0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (code **)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7d5c00,1,&PTR_FUN_14a7d5bd0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (code **)0x4;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7d69e0,1,&PTR_FUN_14a7d6940);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (code **)0x2;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7d6c80);
  uStack_a8 = 0;
  local_b8 = (code **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7d7010,1,0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (code **)0x1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7d75f0,1,&PTR_FUN_14a7d75c0);
  uStack_a8 = 0;
  local_b8 = (code **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7d81d0,1,0);
  uStack_a8 = 1;
  ppuStack_b0 = &PTR_FUN_14a7d84c0;
  local_b8 = (code **)0x1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7d84e0);
  local_98 = (code *)0x149fca2ba;
  local_90 = 0xd;
  local_8c = 0;
  uVar3 = FUN_14001a6c0(&local_98,1);
  _DAT_14cacd3e8 = (ulonglong)uVar3;
  uStack_a8 = 1;
  ppuStack_b0 = &PTR_FUN_14a7d9940;
  local_b8 = (code **)0x7;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14a7d9a80,1,&PTR_FUN_14a7d9960);
  DAT_14cacd4e0 = 0;
  uRam000000014cacd4e8 = 0;
  atexit((_func_5014 *)&LAB_1433f1b8e);
  FUN_1446f470e(&DAT_14cacd4f0,L"AnimationCurves",1);
  FUN_1446f470e(&DAT_14cacd4f8,L"AnimationTrackCurves",1);
  FUN_1446f470e(&DAT_14cacd708,L"DefaultGroup",1);
  FUN_1446f470e(&DAT_14cacd6f8,L"DefaultSlot",1);
  local_98 = (code *)((ulonglong)local_98 & 0xffffffffffffff00);
  local_b8 = (code **)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14cacd500,L"a.Skeleton.AllowIncompatibleSkeletalMeshMerge",&local_98,
                L"When importing or otherwise merging in skeletal mesh bones, allow \'incompatible\' hierarchies with bone insertions."
               );
  atexit(FUN_1433f1b9f);
  FUN_140056680(&DAT_14cacd518,&DAT_14a7d9c66);
  atexit((_func_5014 *)&LAB_1433f1be4);
  _DAT_14cacd530 = 0;
  uRam000000014cacd538 = 0;
  DAT_14cacd540 = 0;
  uRam000000014cacd548 = 0;
  DAT_14cacd550 = 0;
  uRam000000014cacd558 = 0;
  DAT_14cacd560 = 0;
  uRam000000014cacd568 = 0;
  atexit((_func_5014 *)&LAB_1433f20b8);
  DAT_14cacd570 = 0;
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (code **)0x1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7d9e00);
  local_98 = (code *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e170a0;
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
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e17030;
  *(code **)(local_98 + 0x18) = FUN_1433f20bd;
  ppuStack_b0 = (undefined **)((ulonglong)ppuStack_b0 & 0xffffffff00000000);
  local_b8 = &local_98;
  FUN_141703554(&DAT_14cacd590,L"a.SkinWeightProfile.LoadByDefaultMode",&DAT_14c7612f8,
                L"Enables/disables run-time optimization to override the original skin weights with a profile designated as the default to replace it. Can be used to optimize memory for specific platforms or devices-1 = disabled0 = static disabled1 = static enabled2 = dynamic disabled3 = dynamic enabled"
               );
  if (local_90 == 0) {
LAB_1433f6c2a:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_1433f6c2a;
  }
  atexit(FUN_1433f2280);
  local_98 = (code *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e170a0;
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
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e17030;
  *(code **)(local_98 + 0x18) = FUN_1433f20bd;
  ppuStack_b0 = (undefined **)CONCAT44(ppuStack_b0._4_4_,0x40);
  local_b8 = &local_98;
  FUN_141703554(&DAT_14cacd5a0,L"a.SkinWeightProfile.DefaultLODOverride",&DAT_14c7612e0,
                L"Override LOD index from which on the default Skin Weight Profile should override the Skeletal Mesh\'s default Skin Weights"
               );
  if (local_90 == 0) {
LAB_1433f6d06:
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_98 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
    goto LAB_1433f6d06;
  }
  atexit(FUN_1433f22c5);
  local_98 = (code *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *(undefined ***)local_98 = &PTR_LAB_149e170a0;
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
  *(longlong *)(local_98 + 0x10) = lVar4;
  *(undefined ***)local_98 = &PTR_FUN_149e17030;
  *(code **)(local_98 + 0x18) = FUN_1433f20bd;
  ppuStack_b0 = (undefined **)CONCAT44(ppuStack_b0._4_4_,0x40);
  local_b8 = &local_98;
  FUN_141703554(&DAT_14cacd5b0,L"a.SkinWeightProfile.AllowedFromLOD",&DAT_14c7612f4,
                L"Override LOD index from which on the Skin Weight Profile can be applied");
  if (local_90 != 0) {
    if (local_98 == (code *)0x0) goto LAB_1433f6df0;
    (*(code *)**(undefined8 **)local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1433f6df0:
  atexit(FUN_1433f230a);
  DAT_14cacd5c0 = 0;
  DAT_14cacd5c8 = 0;
  atexit(FUN_1433f234f);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (code **)0x1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7da3b0);
  local_b8 = (code **)CONCAT44(local_b8._4_4_,1);
  FUN_141471170(&DAT_14cacd5f8,L"SkinWeightProfileManager.AllowCPU",&DAT_14c7612e4,
                L"Whether or not to allow cpu buffer generation");
  atexit(FUN_1433f3921);
  DAT_14cacd628 = 0;
  DAT_14cacd630 = 0;
  DAT_14cacd608 = 0;
  _DAT_14cacd610 = 0;
  _DAT_14cacd634 = 0xffffffff00000080;
  DAT_14cacd63c = 0;
  DAT_14cacd648 = 0;
  DAT_14cacd650 = 0;
  atexit(FUN_1433f3966);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = (code **)0x3;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14a7da6d0);
  InitializeSRWLock((PSRWLOCK)&DAT_14cacd6a0);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433f6f70 FUN_1433f6f70 body=55 status=ok
// SIG undefined FUN_1433f6f70(void)

void FUN_1433f6f70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd718 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd718 = FUN_14171c317(FUN_1463ac003,uVar1,L"ETimeStretchCurveMapping");
  }
  return;
}



// FUNCTION 1433f6fa7 FUN_1433f6fa7 body=55 status=ok
// SIG undefined FUN_1433f6fa7(void)

void FUN_1433f6fa7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd7b8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd7b8 =
         FUN_14171c317(FUN_1463ac320,uVar1,L"EPreviewAnimationBlueprintApplicationMethod");
  }
  return;
}



// FUNCTION 1433f6fe4 FUN_1433f6fe4 body=68 status=ok
// SIG undefined FUN_1433f6fe4(void)

void FUN_1433f6fe4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 0x28))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_1403a2ea8(param_1);
  return;
}



// FUNCTION 1433f704f FUN_1433f704f body=49 status=ok
// SIG undefined FUN_1433f704f(void)

void FUN_1433f704f(void)

{
  FUN_144760e21(DAT_14cacd8d8,DAT_14cacd8e0);
  if (DAT_14cacd8d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1433f7080 FUN_1433f7080 body=49 status=ok
// SIG undefined FUN_1433f7080(void)

void FUN_1433f7080(void)

{
  FUN_144760e21(DAT_14cacd8f0,DAT_14cacd8f8);
  if (DAT_14cacd8f0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1433f70b2 FUN_1433f70b2 body=1653 status=ok
// SIG undefined FUN_1433f70b2(void)

ulonglong * FUN_1433f70b2(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong *puVar3;
  uint uVar4;
  uint *puVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined2 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auStack_128 [35];
  byte local_105;
  int local_104;
  ulonglong local_100;
  ulonglong local_f8;
  uint local_f0;
  int local_ec;
  ulonglong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  uint *local_b8;
  ulonglong local_b0;
  int *local_a8;
  ulonglong local_a0;
  undefined2 *local_98;
  int local_90;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar14 = param_3;
  if ((*(uint *)(param_3 + 8) & 0x10) != 0) {
    lVar14 = *(longlong *)(param_3 + 0x10);
  }
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  local_d8 = param_3;
  FUN_1401031ac(lVar14,0);
  FUN_1400bbfc4(&local_98,lVar14);
  (**(code **)(*param_1 + 0x338))(param_1,&local_78,&local_98);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((CONCAT44(uStack_74,local_78) == 0) || (CONCAT44(uStack_6c,uStack_70) == 0)) {
    uVar10 = *(uint *)(param_1 + 0x95);
    local_e8 = param_2;
    local_c0 = lVar14;
    if (uVar10 == 0) {
      uVar13 = 1;
      uVar20 = 0;
      iVar11 = 0;
      uVar4 = 0;
    }
    else {
      puVar5 = (uint *)param_1[0x94];
      if ((uint *)param_1[0x94] == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x92);
      }
      uVar4 = *puVar5;
      if (uVar4 == 0) {
        iVar11 = uVar10 + 0x1e;
        if (-1 < (int)(uVar10 - 1)) {
          iVar11 = uVar10 - 1;
        }
        uVar20 = 0;
        uVar13 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar13 = uVar20;
        }
        iVar11 = 0;
        do {
          if (uVar13 == uVar20) goto LAB_1433f762d;
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar5[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar20 = 0;
        iVar11 = 0;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar22 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar4 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if ((int)uVar10 <= (int)uVar4) {
        uVar4 = uVar10;
      }
    }
    if (uVar4 != uVar10) {
      uVar18 = 0xffffffff;
      local_105 = DAT_14c950c29;
      local_f8 = 0;
      uVar22 = 0;
      local_100 = (ulonglong)uVar10;
      local_e0 = param_1;
      local_b8 = (uint *)(param_1 + 0x92);
      do {
        iVar12 = iVar11;
        puVar3 = *(ulonglong **)(local_e0[0x90] + 8 + (longlong)(int)uVar4 * 0x20);
        uVar21 = puVar3[6];
        local_f0 = uVar18;
        local_b0 = uVar20;
        if (((local_105 & 1) != 0) && (uVar21 != 0)) {
          FUN_1456cec3c(uVar21);
          local_105 = DAT_14c950c29;
        }
        if ((*(int *)(uVar21 + 0x38) <= *(int *)(*(longlong *)(local_d8 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_d8 + 0x10) + 0x30) +
             (longlong)*(int *)(uVar21 + 0x38) * 8) == uVar21 + 0x30)) {
          iVar11 = (int)puVar3[0x2a];
          if (iVar11 == 0) {
            uVar21 = 1;
            uVar20 = 0;
            iVar7 = 0;
            iVar16 = 0;
          }
          else {
            puVar6 = (ulonglong *)puVar3[0x29];
            if ((ulonglong *)puVar3[0x29] == (ulonglong *)0x0) {
              puVar6 = puVar3 + 0x27;
            }
            uVar10 = (uint)*puVar6;
            if (uVar10 == 0) {
              iVar16 = iVar11 + 0x1e;
              if (-1 < iVar11 + -1) {
                iVar16 = iVar11 + -1;
              }
              uVar20 = 0;
              uVar21 = (ulonglong)(uint)(iVar16 >> 5);
              if (iVar16 >> 5 < 1) {
                uVar21 = uVar20;
              }
              iVar7 = 0;
              do {
                if (uVar21 == uVar20) goto LAB_1433f7295;
                iVar7 = iVar7 + 0x20;
                uVar10 = *(uint *)((longlong)puVar6 + uVar20 * 4 + 4);
                uVar20 = uVar20 + 1;
              } while (uVar10 == 0);
            }
            else {
              uVar20 = 0;
              iVar7 = 0;
            }
            uVar21 = (ulonglong)(-uVar10 & uVar10);
            uVar19 = uVar21 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            iVar16 = (iVar7 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            if (iVar11 <= iVar16) {
              iVar16 = iVar11;
            }
          }
          if (iVar16 != iVar11) {
            puVar6 = puVar3 + 0x27;
            if ((ulonglong *)puVar3[0x29] != (ulonglong *)0x0) {
              puVar6 = (ulonglong *)puVar3[0x29];
            }
            puVar9 = &DAT_149dfb77a;
            if ((int)uStack_60 != 0) {
              puVar9 = local_68;
            }
            local_ec = iVar11 + 0x1e;
            if (-1 < iVar11 + -1) {
              local_ec = iVar11 + -1;
            }
            local_d0 = puVar3[0x25];
            local_ec = local_ec >> 5;
            local_a8 = (int *)((longlong)puVar6 + 4);
            uVar10 = 0xffffffff;
            do {
              iVar8 = *(int *)(local_d0 + 8 + (longlong)iVar16 * 0x18);
              uVar4 = iVar8 - 1;
              if (iVar8 == 0) {
                uVar4 = 0;
              }
              if (0 < (int)uVar4) {
                puVar17 = &DAT_149dfb77a;
                if (iVar8 != 0) {
                  puVar17 = *(undefined2 **)(local_d0 + (longlong)iVar16 * 0x18);
                }
                uVar19 = (ulonglong)uVar4;
                lVar14 = 0;
                while( true ) {
                  uVar1 = *(ushort *)((longlong)puVar9 + lVar14);
                  uVar2 = *(ushort *)((longlong)puVar17 + lVar14);
                  local_c8 = uVar20;
                  if (uVar1 != uVar2) break;
                  if (uVar1 == 0) goto LAB_1433f7520;
LAB_1433f74d7:
                  uVar19 = uVar19 - 1;
                  if (uVar19 == 0) goto LAB_1433f7520;
                  lVar14 = lVar14 + 2;
                }
                if ((uVar2 | uVar1) < 0x80) {
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[(uint)uVar2]) goto LAB_1433f74d7;
                  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
                }
                else {
                  iVar16 = (uint)uVar1 - (uint)uVar2;
                }
                if (iVar16 != 0) goto LAB_1433f7540;
LAB_1433f7520:
                if ((int)uVar22 == 0 && (int)local_f8 == 0) {
                  uVar22 = *puVar3;
                  local_f8 = uVar22 >> 0x20;
                }
              }
LAB_1433f7540:
              uVar10 = uVar10 & ~(uint)uVar21;
              iVar16 = (int)uVar20;
              lVar14 = (longlong)iVar16;
              uVar4 = *(uint *)((longlong)puVar6 + lVar14 * 4) & uVar10;
              if (uVar4 == 0) {
                iVar8 = local_ec;
                if (local_ec < iVar16) {
                  iVar8 = iVar16;
                }
                if (local_ec <= iVar16) break;
                lVar15 = 0;
                while( true ) {
                  iVar7 = iVar7 + 0x20;
                  uVar4 = local_a8[lVar14 + lVar15];
                  if (uVar4 != 0) break;
                  lVar15 = lVar15 + 1;
                  if (iVar8 - lVar14 == lVar15) goto LAB_1433f7295;
                }
                uVar20 = (ulonglong)(iVar16 + (int)lVar15 + 1);
                uVar10 = 0xffffffff;
              }
              uVar21 = (ulonglong)(-uVar4 & uVar4);
              uVar19 = uVar21 * 2 + 1;
              lVar14 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              iVar16 = (iVar7 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            } while (iVar16 < iVar11);
          }
        }
LAB_1433f7295:
        uVar18 = local_f0 & ~(uint)uVar13;
        puVar5 = (uint *)local_e0[0x94];
        if ((uint *)local_e0[0x94] == (uint *)0x0) {
          puVar5 = local_b8;
        }
        uVar10 = *(uint *)(local_e0 + 0x95);
        iVar16 = (int)local_b0;
        lVar14 = (longlong)iVar16;
        uVar4 = puVar5[lVar14] & uVar18;
        uVar20 = local_b0;
        iVar11 = iVar12;
        if (uVar4 == 0) {
          iVar7 = uVar10 + 0x1e;
          if (-1 < (int)(uVar10 - 1)) {
            iVar7 = uVar10 - 1;
          }
          iVar7 = iVar7 >> 5;
          iVar11 = iVar12 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar16) {
            iVar8 = iVar16;
          }
          if (iVar16 < iVar7) {
            lVar15 = 0;
            do {
              uVar4 = puVar5[lVar14 + lVar15 + 1];
              if (uVar4 != 0) {
                uVar18 = 0xffffffff;
                uVar20 = (ulonglong)(iVar16 + (int)lVar15 + 1);
                goto LAB_1433f7337;
              }
              iVar11 = iVar11 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar8 - lVar14 != lVar15);
            uVar18 = 0xffffffff;
            iVar16 = iVar8;
          }
          uVar20 = (ulonglong)(iVar16 + 1);
          uVar4 = uVar10;
        }
        else {
LAB_1433f7337:
          uVar13 = (ulonglong)(-uVar4 & uVar4);
          uVar21 = uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar4 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if ((int)uVar10 <= (int)uVar4) {
            uVar4 = uVar10;
          }
        }
        local_104 = iVar12;
      } while (uVar4 != (uint)local_100);
      uVar20 = uVar22 & 0xffffffff | local_f8 << 0x20;
      lVar14 = local_c0;
      if (uVar20 != 0) {
LAB_1433f768a:
        lVar15 = lVar14;
        lVar14 = lVar15;
        if (*(longlong *)(lVar15 + 0x20) != 0) goto code_r0x0001433f7699;
        goto LAB_1433f76aa;
      }
    }
LAB_1433f762d:
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    param_2 = local_e8;
  }
  *(undefined4 *)param_2 = local_78;
  *(undefined4 *)((longlong)param_2 + 4) = uStack_74;
  *(undefined4 *)(param_2 + 1) = uStack_70;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_6c;
LAB_1433f7638:
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001433f7699:
  lVar14 = *(longlong *)(lVar15 + 0x20);
  if ((*(uint *)(lVar15 + 8) >> 0x1c & 1) == 0) goto LAB_1433f768a;
  lVar14 = FUN_142840154(lVar15);
LAB_1433f76aa:
  if (lVar14 == 0) {
    lVar14 = *(longlong *)(lVar15 + 0x20);
    goto LAB_1433f768a;
  }
  local_50 = *(undefined8 *)(lVar14 + 0x18);
  FUN_1400021e4(&local_50,&local_98);
  puVar9 = local_98;
  if (local_90 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  FUN_1468708ac(&local_a0,puVar9);
  param_2 = local_e8;
  *local_e8 = uVar20;
  local_e8[1] = local_a0;
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_1433f7638;
}



// FUNCTION 1433f7728 FUN_1433f7728 body=1797 status=ok
// SIG undefined FUN_1433f7728(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1433f7728(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,byte param_5
                 ,char param_6,undefined1 param_7)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  uint uVar16;
  undefined2 *puVar17;
  longlong *plVar18;
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  longlong *local_130;
  undefined2 *local_128;
  int local_120;
  undefined2 *local_118;
  int local_110;
  undefined2 *local_108;
  int local_100;
  longlong local_f8 [2];
  longlong local_e8 [2];
  uint local_d8;
  int iStack_d4;
  longlong local_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  byte local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 uStack_8d;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar13 = 0;
  local_68 = param_2;
  if (param_6 == '\0') {
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5);
    plVar14 = param_1 + 0x90;
    if ((int)param_1[0x91] != *(int *)((longlong)param_1 + 0x4b4)) {
      uVar3 = (uint)((ulonglong)param_2 >> 0x10);
      uVar7 = (uint)param_2 & 0xffff;
      plVar18 = param_1 + 0x97;
      if ((longlong *)param_1[0x98] != (longlong *)0x0) {
        plVar18 = (longlong *)param_1[0x98];
      }
      iVar8 = *(int *)((longlong)plVar18 +
                      (ulonglong)
                      ((int)param_1[0x99] - 1U &
                      (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          lVar4 = *plVar14 + (longlong)iVar8 * 0x20;
          if (*(longlong *)(*plVar14 + (longlong)iVar8 * 0x20) == param_2) {
            if (lVar4 != 0) {
              plVar18 = (longlong *)(lVar4 + 8);
              plVar14 = param_3;
              goto LAB_1433f7813;
            }
            break;
          }
          iVar8 = *(int *)(lVar4 + 0x18);
        } while (iVar8 != -1);
      }
    }
    local_130 = param_3;
    lVar4 = FUN_14001cc68(0x1c8,0x10);
    FUN_147951854(lVar4,param_2,param_4,uVar9 & 0xffffffff);
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14a7ec350;
    plVar5[2] = lVar4;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_c8 = &local_68;
    plStack_c0 = &local_78;
    local_78 = lVar4;
    plStack_70 = plVar5;
    FUN_141617660(plVar14,&local_d8);
    plVar18 = plStack_70;
    lVar10 = (longlong)(int)local_d8;
    lVar4 = *plVar14;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_70 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    plVar18 = (longlong *)(lVar4 + lVar10 * 0x20 + 8);
    plVar14 = local_130;
    if (plVar5 == (longlong *)0x0) {
      uVar9 = (ulonglong)param_5;
    }
    else {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      uVar9 = (ulonglong)param_5;
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar14 = local_130;
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          plVar14 = local_130;
        }
      }
    }
LAB_1433f7813:
    lVar4 = *plVar18;
    if (((*(longlong *)(lVar4 + 0x30) == param_4) && (*(char *)(lVar4 + 0x38) == (char)uVar9)) &&
       (iVar13 = 0, *(char *)(lVar4 + 0x39) == '\0')) {
      local_130 = plVar14;
      if ((longlong)(int)plVar14[1] != 0) {
        lVar10 = *plVar14;
        lVar11 = (longlong)(int)plVar14[1] << 4;
        do {
          FUN_1412fabe8(lVar4 + 0x70,lVar10);
          if (*(char *)((longlong)param_1 + 0x479) == '\0') {
            FUN_14482b35e(lVar4 + 0xd8,&local_c8,lVar10,0);
          }
          lVar10 = lVar10 + 0x10;
          lVar11 = lVar11 + -0x10;
        } while (lVar11 != 0);
      }
      local_88 = 0;
      local_80 = 0;
      local_c8 = (longlong *)0x0;
      plStack_c0 = (longlong *)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      local_98 = 0;
      uStack_94 = 0;
      local_90 = 0;
      local_8f = 0;
      local_8e = 0;
      uStack_8d = 0;
      if ((param_4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_4);
      }
      local_98 = (undefined4)param_4;
      uStack_94 = (undefined4)((ulonglong)param_4 >> 0x20);
      FUN_140bee9ec(&local_c8,local_130);
      local_90 = param_5;
      local_8f = param_7;
      (**(code **)(*param_1 + 0x2e8))(param_1,&local_c8);
      local_8e = 1;
      if ((longlong)(int)plStack_c0 != 0) {
        lVar10 = (longlong)(int)plStack_c0 << 4;
        plVar14 = local_c8;
        do {
          FUN_14482b35e(lVar4 + 0x128,&local_78,plVar14,0);
          plVar14 = plVar14 + 2;
          lVar10 = lVar10 + -0x10;
        } while (lVar10 != 0);
      }
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      (**(code **)(*param_1 + 0x470))(param_1,&local_78,&local_c8);
      iVar13 = 0;
      if ((longlong)(int)plStack_70 != 0) {
        lVar10 = (longlong)(int)plStack_70 * 0x70 + local_78;
        iVar13 = 0;
        lVar4 = local_78;
        do {
          (**(code **)(*param_1 + 0x420))(param_1,&local_d8,lVar4,local_68);
          lVar11 = CONCAT44(iStack_d4,local_d8);
          if ((lVar11 != 0) && (local_d0 != 0)) {
            if ((lVar11 == DAT_14cacd8b0) || (lVar11 != local_68)) {
              if (lVar11 != DAT_14cacd8b0) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14cacd960) &&
                   (FUN_144b3d300(&DAT_14cacd960), DAT_14cacd960 == -1)) {
                  DAT_14cacd930 = 0;
                  DAT_14cacd938 = 0;
                  DAT_14cacd910 = 0;
                  _DAT_14cacd918 = 0;
                  _DAT_14cacd93c = 0xffffffff00000080;
                  DAT_14cacd944 = 0;
                  DAT_14cacd950 = (undefined *)0x0;
                  DAT_14cacd958 = 0;
                  atexit(FUN_1433f7e2e);
                  _Init_thread_footer(&DAT_14cacd960);
                }
                local_e8[0] = local_68;
                if (DAT_14cacd918 != DAT_14cacd944) {
                  uVar7 = (uint)((ulonglong)CONCAT44(iStack_d4,local_d8) >> 0x10);
                  uVar3 = (uint)((ulonglong)local_68 >> 0x10);
                  uVar16 = (uint)local_68 & 0xffff;
                  uVar3 = (int)((ulonglong)local_68 >> 0x20) + ((uint)local_68 << 0x10 | uVar16) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar16 >> 4);
                  puVar6 = DAT_14cacd950;
                  if (DAT_14cacd950 == (undefined *)0x0) {
                    puVar6 = &DAT_14cacd948;
                  }
                  iVar8 = *(int *)(puVar6 + (ulonglong)
                                            (DAT_14cacd958 - 1U &
                                            ((local_d8 << 0x10 | local_d8 & 0xffff) + iStack_d4 +
                                             (uVar7 << 0x13 | uVar7 & 0xffff) +
                                             ((local_d8 & 0xffff) >> 4) + uVar3 * 0x40 +
                                             (uVar3 >> 2) + 0x9e3779b9 ^ uVar3)) * 4);
                  while (iVar8 != -1) {
                    lVar11 = (longlong)iVar8;
                    if ((*(longlong *)(DAT_14cacd910 + lVar11 * 0x18) == local_68) &&
                       (*(longlong *)(DAT_14cacd910 + 8 + lVar11 * 0x18) ==
                        CONCAT44(iStack_d4,local_d8))) goto LAB_1433f7bae;
                    iVar8 = *(int *)(DAT_14cacd910 + lVar11 * 0x18 + 0x10);
                  }
                }
                FUN_1400021e4(lVar4 + 0x10,&local_108);
                puVar17 = &DAT_149dfb77a;
                if (local_100 != 0) {
                  puVar17 = local_108;
                }
                FUN_1400021e4(&local_d8,&local_118);
                puVar12 = &DAT_149dfb77a;
                if (local_110 != 0) {
                  puVar12 = local_118;
                }
                FUN_1400021e4(&local_68,&local_128);
                puVar15 = &DAT_149dfb77a;
                if (local_120 != 0) {
                  puVar15 = local_128;
                }
                local_138 = puVar17;
                FUN_140002266(local_f8,
                              L"Ignoring PrimaryAssetType %s - Conflicts with %s - Asset: %s",
                              puVar15,puVar12);
                if (local_128 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_118 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_108 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                FUN_147966c66(&local_108,local_e8);
                if (local_f8[0] != 0) {
                  FUN_1400020a8();
                }
              }
            }
            else {
              iVar13 = iVar13 + 1;
              (**(code **)(*param_1 + 0x4f0))(param_1,&local_d8,lVar4,0);
            }
          }
LAB_1433f7bae:
          lVar4 = lVar4 + 0x70;
        } while (lVar4 != lVar10);
      }
      (**(code **)(*param_1 + 0x500))(param_1);
      FUN_140195631(local_78,(ulonglong)plStack_70 & 0xffffffff);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_147951932(&local_c8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return iVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433f7e2e FUN_1433f7e2e body=41 status=ok
// SIG undefined FUN_1433f7e2e(void)

void FUN_1433f7e2e(void)

{
  DAT_14cacd958 = 0;
  if (DAT_14cacd950 != 0) {
    FUN_1400020a8();
  }
  FUN_147966bc6();
  return;
}



// FUNCTION 1433f7e58 FUN_1433f7e58 body=1167 status=ok
// SIG undefined FUN_1433f7e58(void)

undefined4 FUN_1433f7e58(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  void *_Src;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  undefined1 local_108 [16];
  longlong local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  ulonglong uStack_d0;
  undefined1 local_bc [4];
  longlong *local_b8;
  undefined8 *local_b0;
  ushort local_78;
  undefined6 uStack_76;
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(int *)(param_1 + 0x488) != *(int *)(param_1 + 0x4b4)) {
    lVar3 = *param_2;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar8 = (uint)lVar3 & 0xffff;
    lVar10 = param_1 + 0x4b8;
    if (*(longlong *)(param_1 + 0x4c0) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x4c0);
    }
    iVar9 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0x4c8) - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        lVar10 = *(longlong *)(param_1 + 0x480) + (longlong)iVar9 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x480) + (longlong)iVar9 * 0x20) == lVar3) {
          if ((longlong *)(lVar10 + 8) != (longlong *)0x0 && lVar10 != 0) {
            lVar3 = *(longlong *)(lVar10 + 8);
            if (*(int *)(lVar3 + 0x180) == *(int *)(lVar3 + 0x1ac)) goto LAB_1433f7feb;
            lVar10 = param_2[1];
            uVar4 = (uint)((ulonglong)lVar10 >> 0x10);
            uVar8 = (uint)lVar10 & 0xffff;
            lVar7 = lVar3 + 0x1b0;
            if (*(longlong *)(lVar3 + 0x1b8) != 0) {
              lVar7 = *(longlong *)(lVar3 + 0x1b8);
            }
            iVar9 = *(int *)(lVar7 + (ulonglong)
                                     (*(int *)(lVar3 + 0x1c0) - 1U &
                                     (int)((ulonglong)lVar10 >> 0x20) +
                                     ((uint)lVar10 << 0x10 | uVar8) +
                                     (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
            if (iVar9 == -1) goto LAB_1433f7feb;
            goto LAB_1433f7fcb;
          }
          break;
        }
        iVar9 = *(int *)(lVar10 + 0x18);
      } while (iVar9 != -1);
    }
  }
  uVar5 = 0;
  goto LAB_1433f7f24;
  while (iVar9 = *(int *)(lVar7 + 0x90), iVar9 != -1) {
LAB_1433f7fcb:
    lVar7 = *(longlong *)(lVar3 + 0x178) + (longlong)iVar9 * 0x98;
    if (*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)iVar9 * 0x98) == lVar10)
    goto LAB_1433f7fee;
  }
LAB_1433f7feb:
  lVar7 = 0;
LAB_1433f7fee:
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uVar5 = FUN_147951f00(param_3);
  if ((char)uVar5 != '\0') {
    FUN_1468fc08c(local_108,*param_3,param_3[2]);
    _Src = local_d8;
    local_130 = 0;
    local_128 = (undefined4)local_e8;
    uStack_124 = local_e8._4_4_;
    uStack_120 = (undefined4)uStack_e0;
    uStack_11c = uStack_e0._4_4_;
    local_118 = (void *)0x0;
    lVar10 = (longlong)(int)uStack_d0;
    local_110 = (int)uStack_d0;
    if (lVar10 == 0) {
      local_10c = 0;
    }
    else {
      FUN_1446dd670(&local_118,uStack_d0 & 0xffffffff,0);
      memcpy(local_118,_Src,lVar10 * 2);
    }
    local_178 = param_1 + 0x28;
    FUN_14125f512(lVar3,param_2[1],&local_130,local_108);
    plVar6 = (longlong *)FUN_145d0c2fa(param_1);
    FUN_1400b428a(param_3,&local_140);
    local_178 = CONCAT71(local_178._1_7_,1);
    (**(code **)(*plVar6 + 0x98))(plVar6,&local_b8,local_108,1);
    FUN_1400b428a(&local_b8,&local_150);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_68 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    if ((local_78 & 1) == 0) {
      if (CONCAT62(uStack_76,local_78) != 0) {
        LOCK();
        piVar1 = (int *)(CONCAT62(uStack_76,local_78) + 0x10);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) &&
           (plVar11 = (longlong *)CONCAT62(uStack_76,local_78), plVar11 != (longlong *)0x0)) {
          FUN_140958ed1(*plVar11,(int)plVar11[1]);
          if (*plVar11 != 0) {
            FUN_1400020a8();
          }
          goto LAB_1433f82a5;
        }
      }
    }
    else {
      plVar11 = *(longlong **)(&DAT_14c927ae8 + (ulonglong)(local_78 & 0xfffffffc) * 2);
      LOCK();
      plVar2 = plVar11 + 0x18;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (plVar11 != (longlong *)0x0 && (int)*plVar2 == 0) {
        FUN_14587a8e6(plVar11);
LAB_1433f82a5:
        FUN_1400020a8(plVar11);
      }
    }
    if (((local_140 != *param_2) || (local_138 != param_2[1])) ||
       ((local_148 != 0 && local_150 != 0 && (param_2[1] != local_148 || *param_2 != local_150)))) {
      local_168 = (undefined4)*param_2;
      uStack_164 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_160 = (undefined4)param_2[1];
      uStack_15c = *(undefined4 *)((longlong)param_2 + 0xc);
      (**(code **)(*plVar6 + 0x458))(plVar6,local_108);
    }
    if (param_3[9] == 0) {
      if ((lVar7 + 8U & 0xfffffffffffffff7) != 0) {
        FUN_1479674f4(param_1 + 0x118,param_2);
      }
    }
    else {
      local_b0 = param_3 + 9;
      local_b8 = param_2;
      FUN_1479673c0(param_1 + 0x118,local_bc);
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1433f7f24:
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1433f82e8 FUN_1433f82e8 body=1866 status=ok
// SIG undefined FUN_1433f82e8(void)

ulonglong FUN_1433f82e8(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong **pplVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  char local_99;
  longlong local_98;
  longlong *local_90;
  longlong **local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar15 = *param_2;
  uVar12 = 0;
  if ((lVar15 != 0) && (param_2[1] != 0)) {
    if ((*param_3 == 0) || ((int)param_3[3] < 2)) {
      plVar10 = (longlong *)(param_1 + 0x480);
      local_98 = param_4;
      local_58 = lVar15;
      if (*(int *)(param_1 + 0x488) != *(int *)(param_1 + 0x4b4)) {
        uVar13 = (uint)((ulonglong)lVar15 >> 0x10);
        uVar17 = (uint)lVar15 & 0xffff;
        lVar7 = param_1 + 0x4b8;
        if (*(longlong *)(param_1 + 0x4c0) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x4c0);
        }
        iVar14 = *(int *)(lVar7 + (ulonglong)
                                  (*(int *)(param_1 + 0x4c8) - 1U &
                                  (int)((ulonglong)lVar15 >> 0x20) + ((uint)lVar15 << 0x10 | uVar17)
                                  + (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar17 >> 4)) * 4);
        if (iVar14 != -1) {
          do {
            lVar7 = *plVar10 + (longlong)iVar14 * 0x20;
            if (*(longlong *)(*plVar10 + (longlong)iVar14 * 0x20) == lVar15) {
              if (lVar7 != 0) {
                plVar8 = (longlong *)(lVar7 + 8);
                goto LAB_1433f85b0;
              }
              break;
            }
            iVar14 = *(int *)(lVar7 + 0x18);
          } while (iVar14 != -1);
        }
      }
      plVar8 = (longlong *)FUN_14001cc68(0x1c8,0x10);
      FUN_1416086c8(plVar8);
      plVar8[0x15] = 0;
      *(undefined4 *)(plVar8 + 0x16) = 0;
      plVar8[0x11] = 0;
      plVar8[0x12] = 0;
      *(undefined8 *)((longlong)plVar8 + 0xb4) = 0xffffffff00000080;
      *(undefined4 *)((longlong)plVar8 + 0xbc) = 0;
      plVar8[0x19] = 0;
      *(undefined4 *)(plVar8 + 0x1a) = 0;
      plVar8[0x1f] = 0;
      *(undefined4 *)(plVar8 + 0x20) = 0;
      plVar8[0x1b] = 0;
      plVar8[0x1c] = 0;
      *(undefined8 *)((longlong)plVar8 + 0x104) = 0xffffffff00000080;
      *(undefined4 *)((longlong)plVar8 + 0x10c) = 0;
      plVar8[0x23] = 0;
      *(undefined4 *)(plVar8 + 0x24) = 0;
      plVar8[0x29] = 0;
      *(undefined4 *)(plVar8 + 0x2a) = 0;
      plVar8[0x25] = 0;
      plVar8[0x26] = 0;
      *(undefined8 *)((longlong)plVar8 + 0x154) = 0xffffffff00000080;
      *(undefined4 *)((longlong)plVar8 + 0x15c) = 0;
      plVar8[0x2d] = 0;
      *(undefined4 *)(plVar8 + 0x2e) = 0;
      plVar8[0x33] = 0;
      *(undefined4 *)(plVar8 + 0x34) = 0;
      plVar8[0x2f] = 0;
      plVar8[0x30] = 0;
      *(undefined8 *)((longlong)plVar8 + 0x1a4) = 0xffffffff00000080;
      *(undefined4 *)((longlong)plVar8 + 0x1ac) = 0;
      plVar8[0x37] = 0;
      *(undefined4 *)(plVar8 + 0x38) = 0;
      plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar9[1] = (longlong)&DAT_100000001;
      *plVar9 = (longlong)&PTR_FUN_14a7ec350;
      plVar9[2] = (longlong)plVar8;
      *plVar8 = lVar15;
      *(undefined1 *)(plVar8 + 0x10) = 1;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_90 = &local_58;
      local_88 = &local_68;
      local_68 = plVar8;
      local_60 = plVar9;
      FUN_141617660(plVar10,&local_4c);
      plVar2 = local_60;
      lVar15 = *plVar10;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_60 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      plVar8 = (longlong *)(lVar15 + (longlong)local_4c * 0x20 + 8);
      plVar10 = plVar2;
      if (plVar9 != (longlong *)0x0) {
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
      }
LAB_1433f85b0:
      lVar15 = *plVar8;
      uVar12 = CONCAT71((int7)((ulonglong)plVar10 >> 8),*(char *)(lVar15 + 0x80));
      if (*(char *)(lVar15 + 0x80) == '\x01') {
        lVar7 = param_2[1];
        local_99 = true;
        if (*(int *)(lVar15 + 0x180) != *(int *)(lVar15 + 0x1ac)) {
          uVar13 = (uint)((ulonglong)lVar7 >> 0x10);
          uVar17 = (uint)lVar7 & 0xffff;
          lVar20 = lVar15 + 0x1b0;
          if (*(longlong *)(lVar15 + 0x1b8) != 0) {
            lVar20 = *(longlong *)(lVar15 + 0x1b8);
          }
          iVar14 = *(int *)(lVar20 + (ulonglong)
                                     (*(int *)(lVar15 + 0x1c0) - 1U &
                                     (int)((ulonglong)lVar7 >> 0x20) +
                                     ((uint)lVar7 << 0x10 | uVar17) +
                                     (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar17 >> 4)) * 4);
          if (iVar14 != -1) {
            do {
              lVar20 = *(longlong *)(lVar15 + 0x178) + (longlong)iVar14 * 0x98;
              if (*(longlong *)(*(longlong *)(lVar15 + 0x178) + (longlong)iVar14 * 0x98) == lVar7) {
                local_99 = (lVar20 + 8U & 0xfffffffffffffff7) == 0;
                break;
              }
              iVar14 = *(int *)(lVar20 + 0x90);
            } while (iVar14 != -1);
          }
        }
        local_90 = (longlong *)0x0;
        local_88 = (longlong **)*param_3;
        uStack_80 = (undefined4)param_3[1];
        uStack_7c = *(undefined4 *)((longlong)param_3 + 0xc);
        local_78 = (void *)0x0;
        local_70 = (int)param_3[3];
        lVar20 = (longlong)local_70;
        _Src = (void *)param_3[2];
        if (lVar20 == 0) {
          local_6c = 0;
        }
        else {
          FUN_1446dd670(&local_78,local_70,0);
          memcpy(local_78,_Src,lVar20 * 2);
          lVar7 = param_2[1];
        }
        local_a8 = param_1 + 0x28;
        FUN_14125f512(lVar15,lVar7,&local_90,param_3);
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar15 = local_98;
        if (*(int *)(local_98 + 8) < 1) {
          if (local_99 == '\0') {
            FUN_1479674f4(param_1 + 0x118,param_2);
          }
        }
        else {
          lVar7 = param_1 + 0x118;
          plVar10 = (longlong *)FUN_14001cc68(0x20,0x10);
          plVar10[1] = (longlong)&DAT_100000001;
          *plVar10 = (longlong)&PTR_FUN_149e8ed60;
          FUN_1401b2fd2(plVar10 + 2,lVar15);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          FUN_1417b8d02(lVar7,&local_90);
          pplVar5 = local_88;
          uVar3 = *(undefined4 *)((longlong)param_2 + 4);
          lVar15 = param_2[1];
          uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)local_88 = (int)*param_2;
          *(undefined4 *)((longlong)local_88 + 4) = uVar3;
          *(int *)(local_88 + 1) = (int)lVar15;
          *(undefined4 *)((longlong)local_88 + 0xc) = uVar4;
          local_88[2] = plVar10 + 2;
          local_88[3] = plVar10;
          *(undefined4 *)(local_88 + 4) = 0xffffffff;
          local_68 = (longlong *)CONCAT44(local_68._4_4_,local_90._0_4_);
          plVar8 = *local_88;
          plVar9 = local_88[1];
          uVar13 = (uint)((ulonglong)plVar8 >> 0x10);
          uVar17 = (uint)plVar8 & 0xffff;
          uVar13 = ((uint)plVar8 << 0x10 | uVar17) + (int)((ulonglong)plVar8 >> 0x20) +
                   (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar17 >> 4);
          uVar17 = uVar13 >> 0xd ^ -uVar13;
          uVar18 = uVar17 << 8 ^ (-0x61c88647 - uVar13) - uVar17;
          uVar13 = uVar18 >> 0xd ^ (uVar13 - uVar17) - uVar18;
          uVar17 = uVar13 >> 0xc ^ (uVar17 - uVar18) - uVar13;
          uVar16 = uVar17 << 0x10 ^ (uVar18 - uVar13) - uVar17;
          uVar19 = uVar16 >> 5 ^ (uVar13 - uVar17) - uVar16;
          uVar18 = uVar19 >> 3 ^ (uVar17 - uVar16) - uVar19;
          uVar16 = uVar18 << 10 ^ (uVar16 - uVar19) - uVar18;
          uVar13 = (uint)((ulonglong)plVar9 >> 0x10);
          uVar17 = (uint)plVar9 & 0xffff;
          uVar13 = ((uint)plVar9 << 0x10 | uVar17) + (int)((ulonglong)plVar9 >> 0x20) +
                   (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar17 >> 4);
          uVar17 = uVar13 >> 0xd ^ (uVar16 >> 0xf ^ uVar19 - (uVar18 + uVar16)) - uVar13;
          uVar16 = uVar17 << 8 ^ (-0x61c88647 - uVar13) - uVar17;
          uVar18 = uVar16 >> 0xd ^ (uVar13 - uVar17) - uVar16;
          uVar13 = uVar18 >> 0xc ^ (uVar17 - uVar16) - uVar18;
          uVar17 = uVar13 << 0x10 ^ (uVar16 - uVar18) - uVar13;
          uVar18 = uVar17 >> 5 ^ (uVar18 - uVar13) - uVar17;
          uVar13 = uVar18 >> 3 ^ (uVar13 - uVar17) - uVar18;
          uVar17 = uVar13 << 10 ^ (uVar17 - uVar18) - uVar13;
          uVar13 = uVar17 >> 0xf ^ uVar18 - (uVar13 + uVar17);
          cVar6 = FUN_1409086be(lVar7,uVar13,local_88);
          if (cVar6 == '\0') {
            uVar17 = *(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x14c);
            if (uVar17 < 4) {
              iVar14 = 1;
            }
            else {
              uVar11 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
              lVar15 = 0x3f;
              if (uVar11 != 0) {
                for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar14 = 1 << ((byte)lVar15 & 0x1f);
            }
            if (((int)uVar17 < 1) || (iVar14 <= *(int *)(param_1 + 0x160))) {
              uVar13 = *(int *)(param_1 + 0x160) - 1U & uVar13;
              *(uint *)((longlong)pplVar5 + 0x24) = uVar13;
              lVar15 = *(longlong *)(param_1 + 0x158);
              if (*(longlong *)(param_1 + 0x158) == 0) {
                lVar15 = param_1 + 0x150;
              }
              *(undefined4 *)(pplVar5 + 4) =
                   *(undefined4 *)
                    (lVar15 + ((longlong)*(int *)(param_1 + 0x160) - 1U & (longlong)(int)uVar13) * 4
                    );
              lVar15 = *(longlong *)(param_1 + 0x158);
              if (*(longlong *)(param_1 + 0x158) == 0) {
                lVar15 = param_1 + 0x150;
              }
              *(undefined4 *)
               (lVar15 + ((longlong)*(int *)(param_1 + 0x160) - 1U & (longlong)(int)uVar13) * 4) =
                   local_68._0_4_;
            }
            else {
              *(int *)(param_1 + 0x160) = iVar14;
              FUN_1417b8ee4(lVar7);
            }
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar10 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
        }
      }
    }
    else {
      uVar12 = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1433f8a34 FUN_1433f8a34 body=273 status=ok
// SIG undefined FUN_1433f8a34(void)

void FUN_1433f8a34(longlong *param_1,undefined4 *param_2,int *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  int local_28;
  byte local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacd970) {
    FUN_144b3d300(&DAT_14cacd970);
    if (DAT_14cacd970 == -1) {
      DAT_14cacd964 = 1;
      DAT_14cacd968 = 1;
      DAT_14cacd96c = '\x01';
      _Init_thread_footer(&DAT_14cacd970);
    }
  }
  local_28 = param_3[2];
  local_30 = *(undefined8 *)param_3;
  local_24 = (*(char *)((longlong)param_3 + 9) != '\0') << 3 |
             (param_3[1] != -(DAT_14cacd968 & 1)) << 2 |
             ((char)param_3[2] != DAT_14cacd96c) * '\x02' | *param_3 != -(DAT_14cacd964 & 1);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  (**(code **)(*param_1 + 0x3f8))(param_1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433f8b46 FUN_1433f8b46 body=101 status=ok
// SIG undefined FUN_1433f8b46(void)

void FUN_1433f8b46(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_3 + 0xc) & 0xf) == 0) {
    FUN_147967618();
  }
  else {
    local_28 = param_2;
    local_20 = param_3;
    FUN_146077b32(param_1 + 0x78,local_14,&local_28);
  }
  *(undefined1 *)(param_1 + 0x35d) = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433f8bac FUN_1433f8bac body=1804 status=ok
// SIG undefined FUN_1433f8bac(void)

void ** FUN_1433f8bac(undefined8 param_1,void **param_2,longlong *param_3,undefined8 param_4,
                     undefined1 param_5,longlong *param_6,undefined4 param_7)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t *pwVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  undefined4 **ppuVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_508 [32];
  undefined4 local_4e8;
  longlong *local_4e0;
  undefined8 local_4d8;
  void **local_4d0;
  longlong local_4c8;
  undefined4 local_4c0;
  longlong local_4b8 [2];
  void *local_4a8;
  longlong *local_4a0;
  longlong local_498;
  ulonglong uStack_490;
  wchar_t *local_488;
  wchar_t *local_480;
  undefined4 **local_478;
  char local_470;
  wchar_t local_468 [256];
  undefined4 *local_268;
  undefined4 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined4 local_248 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_508;
  local_498 = 0;
  uStack_490 = 0;
  local_268 = local_248;
  local_250 = '\0';
  local_258 = &local_48;
  local_488 = local_468;
  local_470 = '\0';
  local_478 = &local_268;
  *param_2 = (void *)0x0;
  param_2[1] = (void *)0x0;
  uVar12 = 0;
  local_480 = local_488;
  local_260 = local_268;
  if ((longlong)(int)param_3[1] != 0) {
    lVar15 = *param_3;
    lVar13 = (longlong)(int)param_3[1] << 4;
    uVar11 = 0;
    local_4d8 = param_4;
    local_4d0 = param_2;
    do {
      local_4e8 = CONCAT31(local_4e8._1_3_,param_5);
      cVar8 = FUN_147954380(param_1,&local_498,lVar15,param_4);
      if (cVar8 == '\0') {
        iVar9 = (int)((ulonglong)((longlong)local_480 - (longlong)local_488) >> 1);
        uVar12 = 1;
        if (iVar9 < 0x400) {
          if (local_478 <= local_480 + (ulonglong)(0 < iVar9) * 2) {
            FUN_140213274(&local_488,(0 < iVar9) * '\x02');
          }
          if (0 < iVar9) {
            local_480[0] = L',';
            local_480[1] = L' ';
            local_480 = local_480 + 2;
          }
          FUN_14088662c(lVar15,&local_4a8);
          pvVar6 = local_4a8;
          uVar12 = (uint)local_4a0;
          iVar9 = (uint)local_4a0 - 1;
          if ((uint)local_4a0 == 0) {
            iVar9 = 0;
          }
          lVar14 = (longlong)iVar9;
          if (local_478 <= local_480 + lVar14) {
            FUN_140213274(&local_488,lVar14);
          }
          pwVar3 = local_480;
          if (1 < uVar12) {
            memcpy(local_480,pvVar6,lVar14 * 2);
            local_480 = pwVar3 + lVar14;
          }
          goto LAB_1433f8e2f;
        }
      }
      else {
        iVar9 = (int)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
        uVar12 = 1;
        if (iVar9 < 0x400) {
          if (local_258 <= local_260 + (0 < iVar9)) {
            FUN_140213274(&local_268,(0 < iVar9) * '\x02');
          }
          if (0 < iVar9) {
            *local_260 = 0x20002c;
            local_260 = local_260 + 1;
          }
          FUN_14088662c(lVar15,&local_4a8);
          pvVar6 = local_4a8;
          uVar12 = (uint)local_4a0;
          iVar9 = (uint)local_4a0 - 1;
          if ((uint)local_4a0 == 0) {
            iVar9 = 0;
          }
          lVar14 = (longlong)iVar9;
          if (local_258 <= (ulonglong *)((longlong)local_260 + lVar14 * 2)) {
            FUN_140213274(&local_268,lVar14);
          }
          puVar7 = local_260;
          if (1 < uVar12) {
            memcpy(local_260,pvVar6,lVar14 * 2);
            local_260 = (undefined4 *)((longlong)puVar7 + lVar14 * 2);
          }
LAB_1433f8e2f:
          param_4 = local_4d8;
          uVar12 = uVar11;
          if (local_4a8 != (void *)0x0) {
            FUN_1400020a8();
            param_4 = local_4d8;
          }
        }
      }
      lVar15 = lVar15 + 0x10;
      lVar13 = lVar13 + -0x10;
      param_2 = local_4d0;
      uVar11 = uVar12;
    } while (lVar13 != 0);
  }
  *(undefined2 *)local_260 = 0;
  FUN_140056680(local_4b8,local_268);
  local_4c8 = *param_6;
  *param_6 = 0;
  local_4c0 = (undefined4)param_6[1];
  *(undefined4 *)(param_6 + 1) = 0;
  local_4e8 = param_7;
  local_4e0 = local_4b8;
  FUN_140a27c06(param_1,&local_4a8,&local_498);
  plVar1 = local_4a0;
  if (&local_4a8 != param_2) {
    *param_2 = local_4a8;
    local_4a8 = (void *)0x0;
    plVar4 = param_2[1];
    if (local_4a0 != plVar4) {
      local_4a0 = (longlong *)0x0;
      param_2[1] = plVar1;
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
    }
  }
  plVar1 = local_4a0;
  if (local_4a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_4a0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_4a0)(local_4a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_4b8[0] != 0) {
    FUN_1400020a8();
  }
  if (0 < (int)((ulonglong)((longlong)local_480 - (longlong)local_488) >> 1)) {
    if (0 < (int)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1)) {
      if (local_478 <= local_480 + 9) {
        FUN_140213274(&local_488,9);
      }
      puVar7 = local_268;
      builtin_wcsncpy(local_480,L" (Valid: ",9);
      pwVar3 = local_480 + 9;
      iVar9 = (int)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
      lVar15 = (longlong)iVar9;
      ppuVar10 = (undefined4 **)(local_480 + lVar15 + 9);
      local_480 = pwVar3;
      if (local_478 <= ppuVar10) {
        FUN_140213274(&local_488,lVar15);
      }
      pwVar3 = local_480;
      if (iVar9 != 0) {
        memcpy(local_480,puVar7,lVar15 * 2);
        local_480 = pwVar3 + lVar15;
      }
      if (local_478 <= local_480 + 1) {
        FUN_140213274(&local_488,1);
      }
      *local_480 = L')';
      local_480 = local_480 + 1;
    }
    if (local_478 <= local_480 + (ulonglong)uVar12 * 3) {
      FUN_140213274(&local_488);
    }
    if ((char)uVar12 != '\0') {
      local_480[2] = L'.';
      local_480[0] = L'.';
      local_480[1] = L'.';
      local_480 = local_480 + 3;
    }
    if (0x100 < (int)((ulonglong)((longlong)local_480 - (longlong)local_488) >> 1)) {
      local_480 = local_480 +
                  -(((longlong)local_480 - (longlong)local_488) * 0x80000000 + -0x10000000000 >>
                   0x20);
      if (local_478 <= local_480 + 3) {
        FUN_140213274(&local_488,3);
      }
      local_480[2] = L'.';
      local_480[0] = L'.';
      local_480[1] = L'.';
      local_480 = local_480 + 3;
    }
  }
  if (local_470 == '\x01') {
    FUN_1400020a8(local_488);
  }
  if (local_250 == '\x01') {
    FUN_1400020a8(local_268);
  }
  FUN_140861e20(local_498,uStack_490 & 0xffffffff);
  if (local_498 != 0) {
    FUN_1400020a8();
  }
  if ((int)param_6[1] != 0) {
    puVar5 = (undefined8 *)*param_6;
    if (puVar5 == (undefined8 *)0x0) goto LAB_1433f91ad;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(param_6,0,0,0x10);
    *(undefined4 *)(param_6 + 1) = 0;
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
LAB_1433f91ad:
  if ((local_48 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1433f92ba FUN_1433f92ba body=2779 status=ok
// SIG undefined FUN_1433f92ba(void)

char FUN_1433f92ba(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  uint *puVar14;
  undefined2 *puVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 *****pppppuVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined8 ****ppppuVar23;
  undefined8 ****ppppuVar24;
  int iVar25;
  bool bVar26;
  undefined1 auStack_1e8 [32];
  int local_1c8;
  int local_1c4;
  ulonglong local_1c0;
  longlong *local_1b8;
  undefined8 ***local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  longlong *local_190;
  uint *local_188;
  undefined8 local_180;
  code *local_178;
  undefined8 ****local_170;
  undefined8 ****local_168;
  undefined8 local_160;
  longlong local_158 [3];
  undefined8 uStack_140;
  undefined8 ****local_138;
  int local_130;
  int iStack_12c;
  undefined8 ****local_128;
  ulonglong uStack_120;
  undefined8 local_110;
  undefined8 ****local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  longlong local_e8;
  uint local_e0;
  uint local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong *local_b0;
  longlong local_90;
  undefined8 local_78;
  undefined8 ****local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_110 = param_2;
  plVar11 = (longlong *)FUN_145d0c2fa();
  local_128 = (undefined8 ****)0x0;
  uStack_120 = 0;
  FUN_1400021e4(&local_110,local_158);
  FUN_140ba7826(local_158 + 2,L"AssetRegistry",local_158);
  FUN_140d6afb0();
  FUN_140056680(&local_168);
  iVar20 = (int)uStack_140 + -1;
  if ((int)uStack_140 == 0) {
    iVar20 = 0;
  }
  iVar25 = (int)local_160;
  iVar8 = iVar20 + 1 + (uint)((int)local_160 == 0);
  local_108 = local_168;
  local_168 = (undefined8 ****)0x0;
  iVar9 = local_160._4_4_;
  uStack_100 = local_160;
  local_160 = (longlong *)0x0;
  iVar16 = iVar8 + iVar25;
  if (iVar16 < iVar25) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((longlong)iVar8);
  }
  if (iVar16 < 0) {
LAB_1433f9d6c:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar16);
  }
  if (iVar9 < iVar16) {
    FUN_1446f8c06(&local_108);
  }
  FUN_1401aebe8(&local_108,local_158[2],iVar20);
  iVar20 = (int)uStack_100;
  iVar9 = ((int)uStack_100 == 0) + 4;
  local_138 = local_108;
  local_108 = (undefined8 *****)0x0;
  local_130 = (int)uStack_100;
  iVar25 = uStack_100._4_4_;
  iStack_12c = uStack_100._4_4_;
  uStack_100 = (longlong *)0x0;
  iVar16 = iVar9 + iVar20;
  if (iVar16 < iVar20) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  if (iVar16 < 0) goto LAB_1433f9d6c;
  if (iVar25 < iVar16) {
    FUN_1446f8c06(&local_138);
  }
  FUN_1400020e8(&local_138,L".bin",4);
  if ((undefined8 *****)local_108 != (undefined8 *****)0x0) {
    FUN_1400020a8();
  }
  if (local_168 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if (local_158[2] != 0) {
    FUN_1400020a8();
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  plVar12 = (longlong *)FUN_14054d1d4();
  pppppuVar19 = (undefined8 *****)local_138;
  if (local_130 == 0) {
    pppppuVar19 = (undefined8 *****)&DAT_149dfb77a;
  }
  cVar5 = (**(code **)(*plVar12 + 0x48))(plVar12,pppppuVar19);
  if (cVar5 == '\0') {
    cVar5 = '\0';
  }
  else {
    pppppuVar19 = (undefined8 *****)local_138;
    if (local_130 == 0) {
      pppppuVar19 = (undefined8 *****)&DAT_149dfb77a;
    }
    cVar5 = '\0';
    cVar6 = FUN_14158b496(&local_128,pppppuVar19,0);
    if (cVar6 != '\0') {
      memset(&local_108,0,0x90);
      FUN_144869430(&local_108);
      local_78 = 0;
      local_108 = (undefined8 ****)&PTR_FUN_149e1e050;
      local_68 = 0x7fffffffffffffff;
      local_e0 = local_e0 | 1;
      local_70 = &local_128;
      FUN_1449c2eca(&local_108,0);
      local_158[2] = 0x101;
      FUN_1415d7ad8(param_3,&local_108,local_158 + 2,0);
      local_108 = (undefined8 ****)&PTR__purecall_149e35f70;
      if (local_b0 != (longlong *)0x0) {
        if (*local_b0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_b0);
      }
      if (local_90 != 0) {
        if (*(longlong *)(local_90 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_90);
      }
      cVar5 = '\x01';
    }
  }
  if ((undefined8 *****)local_138 != (undefined8 *****)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if (cVar5 == '\0') goto LAB_1433f95d3;
  (**(code **)(*plVar11 + 0x3d8))(plVar11,param_3);
  local_108 = (undefined8 ****)0x0;
  uStack_100 = (longlong *)0x0;
  local_170 = &local_128;
  local_178 = FUN_143409c12;
  local_128 = &local_108;
  FUN_141734b78(param_3);
  uVar21 = 0;
  if ((longlong)(int)uStack_100 != 0) {
    lVar18 = (longlong)(int)uStack_100 << 4;
    ppppuVar23 = local_108;
    do {
      lVar13 = FUN_1412252c6();
      plVar11 = *(longlong **)(lVar13 + 0x40);
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 8))(plVar11,ppppuVar23);
      }
      ppppuVar23 = ppppuVar23 + 2;
      lVar18 = lVar18 + -0x10;
    } while (lVar18 != 0);
    uVar21 = (ulonglong)uStack_100 & 0xffffffff;
  }
  FUN_1447a1747(local_108,uVar21);
  if (local_108 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  local_128 = (undefined8 ****)0x0;
  uStack_120 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = (undefined8 *****)0x0;
  uStack_100 = (longlong *)0x0;
  local_dc = 0x80;
  uStack_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  cVar6 = FUN_147010b28(param_3,&local_108,&local_128,0);
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  uVar21 = (ulonglong)uStack_100 >> 0x20;
  uStack_100 = (longlong *)((ulonglong)uStack_100 & 0xffffffff00000000);
  if ((int)uVar21 != 0) {
    FUN_14472eb64(&local_108,0);
  }
  uStack_d8 = 0xffffffff;
  local_d4 = 0;
  local_e0 = 0;
  if (0x80 < local_dc) {
    local_dc = 0x80;
    FUN_1446efbd8(local_f8,0);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((undefined8 *****)local_108 != (undefined8 *****)0x0) {
    FUN_1400020a8();
  }
  if (cVar6 != '\0') {
    lVar18 = FUN_1411df190(param_1);
    if ((longlong)(int)uStack_120 != 0) {
      iVar20 = *(int *)(lVar18 + 0x50);
      ppppuVar23 = local_128 + (longlong)(int)uStack_120 * 0xe;
      plVar11 = param_1 + 0x97;
      local_190 = param_1 + 0x5e;
      local_1c0 = 0;
      ppppuVar24 = local_128;
LAB_1433f97d8:
      if (iVar20 < 1) {
LAB_1433f981b:
        FUN_1400b428a(ppppuVar24,&local_138);
        if ((((undefined8 *****)local_138 != (undefined8 *****)0x0) &&
            (CONCAT44(iStack_12c,local_130) != 0)) &&
           ((int)param_1[0x91] != *(int *)((longlong)param_1 + 0x4b4))) {
          uVar4 = (uint)((ulonglong)local_138 >> 0x10);
          uVar10 = (uint)local_138 & 0xffff;
          plVar12 = (longlong *)param_1[0x98];
          if ((longlong *)param_1[0x98] == (longlong *)0x0) {
            plVar12 = plVar11;
          }
          iVar25 = *(int *)((longlong)plVar12 +
                           (ulonglong)
                           ((int)param_1[0x99] - 1U &
                           (int)((ulonglong)local_138 >> 0x20) + ((uint)local_138 << 0x10 | uVar10)
                           + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4)) * 4);
          if (iVar25 != -1) {
            do {
              lVar18 = param_1[0x90] + (longlong)iVar25 * 0x20;
              if (*(undefined8 ******)(param_1[0x90] + (longlong)iVar25 * 0x20) ==
                  (undefined8 *****)local_138) {
                if ((longlong *)(lVar18 + 8) != (longlong *)0x0 && lVar18 != 0) {
                  lVar18 = *(longlong *)(lVar18 + 8);
                  cVar6 = (**(code **)(*param_1 + 0x480))(param_1,lVar18);
                  if (cVar6 != '\0') {
                    local_188 = (uint *)(lVar18 + 0x138);
                    uVar4 = *(uint *)(lVar18 + 0x150);
                    if (uVar4 == 0) {
                      uVar17 = 1;
                      uVar21 = 0;
                      local_1c8 = 0;
                      uVar10 = 0;
                      goto LAB_1433f99a4;
                    }
                    puVar14 = *(uint **)(lVar18 + 0x148);
                    if (*(uint **)(lVar18 + 0x148) == (uint *)0x0) {
                      puVar14 = local_188;
                    }
                    uVar10 = *puVar14;
                    if (uVar10 != 0) {
                      uVar21 = 0;
                      local_1c8 = 0;
                      goto LAB_1433f996b;
                    }
                    iVar25 = uVar4 + 0x1e;
                    if (-1 < (int)(uVar4 - 1)) {
                      iVar25 = uVar4 - 1;
                    }
                    uVar21 = 0;
                    uVar17 = (ulonglong)(uint)(iVar25 >> 5);
                    if (iVar25 >> 5 < 1) {
                      uVar17 = uVar21;
                    }
                    local_1c8 = 0;
                    goto LAB_1433f9951;
                  }
                }
                break;
              }
              iVar25 = *(int *)(lVar18 + 0x18);
            } while (iVar25 != -1);
          }
        }
      }
      else {
        FUN_1400021e4(ppppuVar24,&local_108);
        cVar6 = (**(code **)(*param_1 + 0x538))(param_1,&local_108);
        if ((undefined8 *****)local_108 != (undefined8 *****)0x0) {
          FUN_1400020a8();
        }
        if (cVar6 == '\0') goto LAB_1433f981b;
      }
      goto LAB_1433f9be3;
    }
  }
LAB_1433f9ceb:
  FUN_140195631(local_128,uStack_120 & 0xffffffff);
  if (local_128 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
LAB_1433f95d3:
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return cVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    local_1c8 = local_1c8 + 0x20;
    uVar10 = puVar14[uVar21 + 1];
    uVar21 = uVar21 + 1;
    if (uVar10 != 0) break;
LAB_1433f9951:
    if (uVar17 == uVar21) goto LAB_1433f9be3;
  }
LAB_1433f996b:
  uVar17 = (ulonglong)(-uVar10 & uVar10);
  uVar1 = uVar17 * 2 + 1;
  lVar13 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  uVar10 = (local_1c8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
  if ((int)uVar4 <= (int)uVar10) {
    uVar10 = uVar4;
  }
LAB_1433f99a4:
  if (uVar10 != uVar4) {
    uVar22 = 0xffffffff;
    local_1c4 = iVar20;
    local_1b8 = plVar11;
    local_1b0 = ppppuVar23;
    local_1a8 = (ulonglong)uVar4;
    local_1a0 = lVar18;
    do {
      lVar18 = *(longlong *)(local_1a0 + 0x128);
      local_198 = uVar21;
      FUN_1400021e4(ppppuVar24,&local_108);
      iVar25 = local_1c8;
      iVar20 = *(int *)(lVar18 + 8 + (longlong)(int)uVar10 * 0x18);
      uVar4 = iVar20 - 1;
      if (iVar20 == 0) {
        uVar4 = 0;
      }
      if ((int)uVar4 < 1) {
        bVar26 = false;
      }
      else {
        puVar15 = &DAT_149dfb77a;
        if (iVar20 != 0) {
          puVar15 = *(undefined2 **)(lVar18 + (longlong)(int)uVar10 * 0x18);
        }
        uVar21 = (ulonglong)uVar4;
        pppppuVar19 = (undefined8 *****)local_108;
        if ((int)uStack_100 == 0) {
          pppppuVar19 = (undefined8 *****)&DAT_149dfb77a;
        }
        lVar18 = 0;
LAB_1433f9a47:
        uVar2 = *(ushort *)((longlong)pppppuVar19 + lVar18);
        uVar3 = *(ushort *)((longlong)puVar15 + lVar18);
        if (uVar2 == uVar3) {
          iVar20 = 0;
          if ((uVar2 == 0) || (uVar21 == 1)) goto LAB_1433f9aaa;
LAB_1433f9a64:
          uVar21 = uVar21 - 1;
          lVar18 = lVar18 + 2;
          goto LAB_1433f9a47;
        }
        if ((uVar3 | uVar2) < 0x80) {
          if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
            iVar20 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3]
            ;
            goto LAB_1433f9aaa;
          }
          if (uVar21 == 1) {
            iVar20 = 0;
            goto LAB_1433f9aaa;
          }
          goto LAB_1433f9a64;
        }
        iVar20 = (uint)uVar2 - (uint)uVar3;
LAB_1433f9aaa:
        bVar26 = iVar20 == 0;
      }
      if ((undefined8 *****)local_108 != (undefined8 *****)0x0) {
        FUN_1400020a8();
      }
      if (bVar26) {
        local_158[2] = 0;
        uStack_140 = 0;
        FUN_1479562c0(&local_180);
        cVar6 = FUN_146ff4940(ppppuVar24,local_180,local_158 + 2);
        if (cVar6 != '\0') {
          local_158[0] = 0;
          local_158[1] = 0;
          FUN_140b10a34(local_158 + 2,local_158);
          local_108 = &local_138;
          uStack_100 = local_158;
          FUN_147968400(local_190,&local_168,&local_108);
        }
        bVar7 = (**(code **)(*param_1 + 0x4f0))(param_1,&local_138,ppppuVar24,0);
        ppppuVar23 = (undefined8 ****)local_1b0;
        plVar11 = local_1b8;
        iVar20 = local_1c4;
        if (local_158[2] != 0) {
          FUN_1400020a8();
        }
        local_1c0 = CONCAT71((int7)(local_1c0 >> 8),(byte)local_1c0 | bVar7);
        break;
      }
      uVar22 = uVar22 & ~(uint)uVar17;
      puVar14 = *(uint **)(local_1a0 + 0x148);
      if (*(uint **)(local_1a0 + 0x148) == (uint *)0x0) {
        puVar14 = local_188;
      }
      uVar4 = *(uint *)(local_1a0 + 0x150);
      iVar20 = (int)local_198;
      lVar18 = (longlong)iVar20;
      uVar10 = puVar14[lVar18] & uVar22;
      uVar21 = local_198;
      if (uVar10 == 0) {
        iVar9 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar9 = uVar4 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar25 = iVar25 + 0x20;
        iVar8 = iVar9;
        if (iVar9 < iVar20) {
          iVar8 = iVar20;
        }
        local_1c8 = iVar25;
        if (iVar20 < iVar9) {
          lVar13 = 0;
          do {
            uVar10 = puVar14[lVar18 + lVar13 + 1];
            if (uVar10 != 0) {
              uVar21 = (ulonglong)(iVar20 + (int)lVar13 + 1);
              uVar22 = 0xffffffff;
              goto LAB_1433f9b5e;
            }
            iVar25 = iVar25 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar18 != lVar13);
          uVar22 = 0xffffffff;
          iVar20 = iVar8;
          local_1c8 = iVar25;
        }
        uVar21 = (ulonglong)(iVar20 + 1);
        uVar10 = uVar4;
      }
      else {
LAB_1433f9b5e:
        uVar17 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar17 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar10 = (iVar25 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        local_1c8 = iVar25;
        if ((int)uVar4 <= (int)uVar10) {
          uVar10 = uVar4;
        }
      }
      ppppuVar23 = (undefined8 ****)local_1b0;
      plVar11 = local_1b8;
      iVar20 = local_1c4;
    } while (uVar10 != (uint)local_1a8);
  }
LAB_1433f9be3:
  ppppuVar24 = ppppuVar24 + 0xe;
  if (ppppuVar24 == ppppuVar23) goto LAB_1433f9cd8;
  goto LAB_1433f97d8;
LAB_1433f9cd8:
  if ((local_1c0 & 1) != 0) {
    (**(code **)(*param_1 + 0x500))(param_1);
  }
  goto LAB_1433f9ceb;
}



// FUNCTION 1433f9d96 FUN_1433f9d96 body=1786 status=ok
// SIG undefined FUN_1433f9d96(void)

void FUN_1433f9d96(void)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  int *_Src;
  ulonglong uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  float fVar20;
  undefined1 auStack_428 [32];
  longlong *local_408;
  ulonglong local_400;
  int *local_3f8;
  int *local_3f0;
  longlong local_3e8;
  ulonglong uStack_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined4 local_3c8 [190];
  undefined1 local_d0 [136];
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_428;
  plVar8 = (longlong *)FUN_14050fd64();
  local_3e8 = 0;
  uStack_3e0 = 0;
  (**(code **)(*plVar8 + 0x360))(plVar8);
  lVar10 = local_3e8;
  iVar5 = (int)uStack_3e0;
  uVar13 = (ulonglong)(int)uStack_3e0;
  if (1 < (longlong)uVar13) {
    memset(local_3c8,0,0x2f0);
    local_3d8 = lVar10;
    local_3d0 = uVar13 * 0x88 + lVar10 + -0x88;
    fVar20 = logf((float)iVar5);
    local_3c8[0] = (int)(longlong)(fVar20 + fVar20);
    plVar8 = &local_3d8;
    do {
      piVar12 = (int *)*plVar8;
      piVar14 = (int *)plVar8[1];
      iVar5 = (int)plVar8[2];
      iVar4 = (int)((ulonglong)((longlong)piVar14 - (longlong)piVar12) >> 3) * -0xf0f0f0f;
      uVar13 = (ulonglong)(iVar4 + 1);
      piVar16 = piVar12;
      _Src = piVar12;
      piVar19 = piVar14;
      local_408 = plVar8;
      if (iVar5 != 0) {
LAB_1433f9e7a:
        if (8 < (int)(uint)uVar13) {
          local_400 = CONCAT44(local_400._4_4_,iVar5);
          local_3f8 = piVar12;
          local_3f0 = piVar19;
          memcpy(local_d0,_Src + (ulonglong)((uint)uVar13 >> 1) * 0x22,0x88);
          memcpy(_Src + (ulonglong)((uint)uVar13 >> 1) * 0x22,_Src,0x88);
          memcpy(_Src,local_d0,0x88);
          piVar12 = piVar14 + 0x22;
          piVar16 = _Src;
          do {
            piVar19 = piVar16 + 0x22;
            piVar3 = piVar16 + 0x22;
            do {
              piVar16 = piVar3;
              piVar11 = piVar19;
              if (piVar14 < piVar16) break;
              if (*_Src == *piVar16) {
                iVar5 = _Src[1] - piVar16[1];
              }
              else {
                iVar5 = FUN_14002c2bd();
              }
              piVar19 = piVar11 + 0x22;
              piVar3 = piVar16 + 0x22;
            } while (-1 < iVar5);
            piVar3 = piVar12 + -0x44;
            do {
              piVar15 = piVar12;
              piVar19 = piVar3;
              piVar12 = piVar15 + -0x22;
              if (piVar12 <= _Src) break;
              if (*piVar12 == *_Src) {
                iVar5 = piVar15[-0x21] - _Src[1];
              }
              else {
                iVar5 = FUN_14002c2bd();
              }
              piVar3 = piVar19 + -0x22;
            } while (-1 < iVar5);
            if (piVar12 < piVar16) goto LAB_1433f9fb1;
            memcpy(local_d0,piVar16,0x88);
            memcpy(piVar16,piVar12,0x88);
            memcpy(piVar12,local_d0,0x88);
          } while( true );
        }
        for (; plVar8 = local_408, piVar16 = _Src, piVar12 = _Src, _Src < piVar14;
            piVar14 = piVar14 + -0x22) {
          while (piVar19 = piVar16, piVar12 = piVar12 + 0x22, piVar12 <= piVar14) {
            if (*piVar19 == *piVar12) {
              iVar5 = piVar19[1] - piVar12[1];
            }
            else {
              iVar5 = FUN_14002c2bd();
            }
            piVar16 = piVar12;
            if (-1 < iVar5) {
              piVar16 = piVar19;
            }
          }
          memcpy(local_d0,piVar19,0x88);
          memcpy(piVar19,piVar14,0x88);
          memcpy(piVar14,local_d0,0x88);
        }
        goto LAB_1433fa432;
      }
LAB_1433fa09f:
      iVar5 = (int)uVar13;
      plVar8 = local_408;
      if (iVar5 != 0) {
        uVar6 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
        do {
          uVar9 = (ulonglong)uVar6;
          local_400 = uVar9;
          while (uVar2 = uVar6 * 2 + 1, (int)uVar2 < iVar5) {
            uVar17 = uVar6 * 2 + 2;
            uVar6 = uVar2;
            if ((int)uVar17 < iVar5) {
              if (piVar16[(longlong)(int)uVar17 * 0x22] == piVar16[(longlong)(int)uVar2 * 0x22]) {
                iVar4 = piVar16[(longlong)(int)uVar17 * 0x22 + 1] -
                        piVar16[(longlong)(int)uVar2 * 0x22 + 1];
              }
              else {
                iVar4 = FUN_14002c2bd();
              }
              if (-1 < iVar4) {
                uVar6 = uVar17;
              }
            }
            piVar14 = piVar16 + (longlong)(int)uVar9 * 0x22;
            piVar12 = piVar16 + (longlong)(int)uVar6 * 0x22;
            if (piVar16[(longlong)(int)uVar9 * 0x22] == piVar16[(longlong)(int)uVar6 * 0x22]) {
              iVar4 = piVar14[1] - piVar12[1];
            }
            else {
              iVar4 = FUN_14002c2bd();
            }
            if (-1 < iVar4) break;
            memcpy(local_d0,piVar14,0x88);
            memcpy(piVar14,piVar12,0x88);
            memcpy(piVar12,local_d0,0x88);
            uVar9 = (ulonglong)uVar6;
          }
          uVar6 = (int)local_400 - 1;
        } while ((int)local_400 != 0);
        plVar8 = local_408;
        if (1 < iVar5) {
          memcpy(local_d0,piVar16,0x88);
          memcpy(piVar16,piVar16 + uVar13 * 2 + (uVar13 - 1) * 0x20 + -2,0x88);
          memcpy(piVar16 + uVar13 * 2 + (uVar13 - 1) * 0x20 + -2,local_d0,0x88);
          plVar8 = local_408;
          uVar13 = uVar13 - 1;
          if (iVar5 != 2) {
            do {
              iVar5 = 0;
              iVar7 = 1;
              iVar4 = 0;
              do {
                lVar10 = (longlong)(iVar5 + 2);
                iVar18 = iVar7;
                if (lVar10 < (longlong)uVar13) {
                  if (piVar16[lVar10 * 0x22] == piVar16[(longlong)iVar7 * 0x22]) {
                    iVar7 = piVar16[lVar10 * 0x22 + 1] - piVar16[(longlong)iVar7 * 0x22 + 1];
                  }
                  else {
                    iVar7 = FUN_14002c2bd();
                  }
                  if (-1 < iVar7) {
                    iVar18 = iVar5 + 2;
                  }
                }
                piVar14 = piVar16 + (longlong)iVar4 * 0x22;
                piVar12 = piVar16 + (longlong)iVar18 * 0x22;
                if (piVar16[(longlong)iVar4 * 0x22] == piVar16[(longlong)iVar18 * 0x22]) {
                  iVar5 = piVar14[1] - piVar12[1];
                }
                else {
                  iVar5 = FUN_14002c2bd();
                }
                if (-1 < iVar5) break;
                memcpy(local_d0,piVar14,0x88);
                memcpy(piVar14,piVar12,0x88);
                memcpy(piVar12,local_d0,0x88);
                iVar5 = iVar18 * 2;
                iVar7 = iVar18 * 2 + 1;
                iVar4 = iVar18;
              } while ((longlong)iVar7 < (longlong)uVar13);
              memcpy(local_d0,piVar16,0x88);
              memcpy(piVar16,piVar16 + uVar13 * 2 + (uVar13 - 1) * 0x20 + -2,0x88);
              memcpy(piVar16 + uVar13 * 2 + (uVar13 - 1) * 0x20 + -2,local_d0,0x88);
              bVar1 = 2 < uVar13;
              plVar8 = local_408;
              uVar13 = uVar13 - 1;
            } while (bVar1);
          }
        }
      }
LAB_1433fa432:
      plVar8 = plVar8 + -3;
    } while (&local_3d8 <= plVar8);
    uVar13 = uStack_3e0 & 0xffffffff;
  }
  FUN_14580b2c2(local_3e8,uVar13 & 0xffffffff);
  if (local_3e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1433f9fb1:
  memcpy(local_d0,_Src,0x88);
  memcpy(_Src,piVar12,0x88);
  memcpy(piVar12,local_d0,0x88);
  iVar5 = (int)local_400 + -1;
  piVar15 = piVar15 + -0x44;
  if ((longlong)piVar19 - (longlong)local_3f8 < (longlong)local_3f0 - (longlong)piVar11) {
    if (piVar16 < piVar14) {
      *local_408 = (longlong)piVar16;
      local_408[1] = (longlong)piVar14;
      *(int *)(local_408 + 2) = iVar5;
      local_408 = local_408 + 3;
    }
    plVar8 = local_408;
    piVar16 = _Src;
    if (piVar12 <= _Src + 0x22) goto LAB_1433fa432;
  }
  else {
    plVar8 = local_408;
    if (_Src + 0x22 < piVar12) {
      *local_408 = (longlong)_Src;
      local_408[1] = (longlong)piVar15;
      *(int *)(local_408 + 2) = iVar5;
      plVar8 = local_408 + 3;
    }
    _Src = piVar11;
    piVar15 = piVar14;
    piVar19 = piVar14;
    if (piVar14 <= piVar16) goto LAB_1433fa432;
  }
  local_408 = plVar8;
  iVar4 = (int)((ulonglong)((longlong)piVar19 - (longlong)_Src) >> 3) * -0xf0f0f0f;
  uVar13 = (ulonglong)(iVar4 + 1);
  piVar12 = _Src;
  piVar14 = piVar15;
  _Src = piVar16;
  if (iVar5 == 0) goto LAB_1433fa09f;
  goto LAB_1433f9e7a;
}



// FUNCTION 1433fa491 FUN_1433fa491 body=69 status=ok
// SIG undefined FUN_1433fa491(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fa491(void)

{
  _DAT_14cacd978 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fa4d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacd980,1);
  return;
}



// FUNCTION 1433fa4d6 FUN_1433fa4d6 body=4492 status=ok
// SIG undefined FUN_1433fa4d6(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1433fa4d6(void)

{
  ulonglong uVar1;
  longlong *****ppppplVar2;
  longlong *****ppppplVar3;
  longlong *****ppppplVar4;
  longlong *****ppppplVar5;
  longlong *****ppppplVar6;
  longlong *****ppppplVar7;
  longlong ******pppppplVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *******ppppppplVar16;
  longlong ******pppppplVar17;
  uint uVar18;
  longlong ******pppppplVar19;
  ulonglong uVar20;
  longlong ******pppppplVar21;
  int iVar22;
  longlong *******_Src;
  longlong *******ppppppplVar23;
  longlong lVar24;
  longlong ******pppppplVar25;
  longlong *******ppppppplVar26;
  longlong *****ppppplVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong ******pppppplVar30;
  byte bVar31;
  longlong *******ppppppplVar32;
  longlong *******ppppppplVar33;
  longlong ******pppppplVar34;
  longlong ******pppppplVar35;
  longlong *******ppppppplVar36;
  longlong *******_Src_00;
  ulonglong uVar37;
  longlong ******pppppplVar38;
  uint uVar39;
  longlong ******pppppplVar40;
  bool bVar41;
  float fVar42;
  undefined1 auStack_478 [40];
  longlong *******local_450;
  longlong *******local_448;
  longlong *******local_440;
  longlong *******local_438;
  longlong *local_430;
  longlong *local_428;
  longlong *******local_420;
  longlong *******local_418;
  undefined8 uStack_410;
  longlong *******local_408;
  ulonglong uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  longlong *******local_368;
  longlong *******ppppppplStack_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_478;
  plVar14 = (longlong *)FUN_14050fd64();
  local_408 = (longlong *******)0x0;
  uStack_400 = 0;
  (**(code **)(*plVar14 + 0x360))(plVar14);
  ppppppplVar16 = local_408;
  iVar10 = (int)uStack_400;
  lVar28 = (longlong)(int)uStack_400;
  local_430 = plVar14;
  if (1 < lVar28) {
    memset(local_358,0,0x2f0);
    local_368 = ppppppplVar16;
    ppppppplStack_360 = ppppppplVar16 + lVar28 * 0x11 + -0x11;
    fVar42 = logf((float)iVar10);
    local_358[0] = (int)(longlong)(fVar42 + fVar42);
    ppppppplVar16 = (longlong *******)&local_368;
    do {
      ppppppplVar23 = (longlong *******)*ppppppplVar16;
      ppppppplVar32 = (longlong *******)ppppppplVar16[1];
      iVar10 = *(int *)(ppppppplVar16 + 2);
      iVar9 = (int)((ulonglong)((longlong)ppppppplVar32 - (longlong)ppppppplVar23) >> 3) *
              -0xf0f0f0f;
      uVar20 = (ulonglong)(iVar9 + 1);
      ppppppplVar26 = ppppppplVar23;
      ppppppplVar36 = ppppppplVar32;
      local_448 = ppppppplVar16;
      if (iVar10 != 0) {
LAB_1433fa5cf:
        if (8 < (int)(uint)uVar20) {
          local_440 = (longlong *******)CONCAT44(local_440._4_4_,iVar10);
          local_450 = ppppppplVar36;
          local_438 = ppppppplVar26;
          memcpy(&local_3f8,ppppppplVar23 + (ulonglong)((uint)uVar20 >> 1) * 0x11,0x88);
          memcpy(ppppppplVar23 + (ulonglong)((uint)uVar20 >> 1) * 0x11,ppppppplVar23,0x88);
          memcpy(ppppppplVar23,&local_3f8,0x88);
          _Src_00 = ppppppplVar32 + 0x11;
          _Src = ppppppplVar23;
          do {
            ppppppplVar16 = _Src + 0x11;
            ppppppplVar36 = _Src + 0x11;
            do {
              _Src = ppppppplVar36;
              ppppppplVar26 = ppppppplVar16;
              if (ppppppplVar32 < _Src) break;
              if (*(int *)ppppppplVar23 == *(int *)_Src) {
                iVar10 = *(int *)((longlong)ppppppplVar23 + 4) - *(int *)((longlong)_Src + 4);
              }
              else {
                iVar10 = FUN_14002c2bd();
              }
              ppppppplVar16 = ppppppplVar26 + 0x11;
              ppppppplVar36 = _Src + 0x11;
            } while (-1 < iVar10);
            ppppppplVar16 = _Src_00 + -0x22;
            do {
              ppppppplVar33 = _Src_00;
              ppppppplVar36 = ppppppplVar16;
              _Src_00 = ppppppplVar33 + -0x11;
              if (_Src_00 <= ppppppplVar23) break;
              if (*(int *)_Src_00 == *(int *)ppppppplVar23) {
                iVar10 = *(int *)((longlong)ppppppplVar33 + -0x84) -
                         *(int *)((longlong)ppppppplVar23 + 4);
              }
              else {
                iVar10 = FUN_14002c2bd();
              }
              ppppppplVar16 = ppppppplVar36 + -0x11;
            } while (-1 < iVar10);
            if (_Src_00 < _Src) goto LAB_1433fa701;
            memcpy(&local_3f8,_Src,0x88);
            memcpy(_Src,_Src_00,0x88);
            memcpy(_Src_00,&local_3f8,0x88);
          } while( true );
        }
        for (; ppppppplVar16 = local_448, ppppppplVar26 = ppppppplVar23,
            ppppppplVar36 = ppppppplVar23, ppppppplVar23 < ppppppplVar32;
            ppppppplVar32 = ppppppplVar32 + -0x11) {
          while (ppppppplVar16 = ppppppplVar26, ppppppplVar26 = ppppppplVar36 + 0x11,
                ppppppplVar26 <= ppppppplVar32) {
            if (*(int *)ppppppplVar16 == *(int *)ppppppplVar26) {
              iVar10 = *(int *)((longlong)ppppppplVar16 + 4) -
                       *(int *)((longlong)ppppppplVar36 + 0x8c);
            }
            else {
              iVar10 = FUN_14002c2bd();
            }
            ppppppplVar36 = ppppppplVar26;
            if (-1 < iVar10) {
              ppppppplVar26 = ppppppplVar16;
            }
          }
          memcpy(&local_3f8,ppppppplVar16,0x88);
          memcpy(ppppppplVar16,ppppppplVar32,0x88);
          memcpy(ppppppplVar32,&local_3f8,0x88);
        }
        goto LAB_1433fab87;
      }
LAB_1433fa7ee:
      iVar10 = (int)uVar20;
      ppppppplVar16 = local_448;
      if (iVar10 != 0) {
        uVar11 = (iVar9 - (iVar9 + -1 >> 0x1f)) + -1 >> 1;
        do {
          local_440 = (longlong *******)(ulonglong)uVar11;
          ppppppplVar16 = local_440;
          while (uVar18 = uVar11 * 2 + 1, (int)uVar18 < iVar10) {
            uVar39 = uVar11 * 2 + 2;
            uVar11 = uVar18;
            if ((int)uVar39 < iVar10) {
              if (*(int *)(ppppppplVar23 + (longlong)(int)uVar39 * 0x11) ==
                  *(int *)(ppppppplVar23 + (longlong)(int)uVar18 * 0x11)) {
                iVar9 = *(int *)((longlong)ppppppplVar23 + ((longlong)(int)uVar39 * 0x22 + 1) * 4) -
                        *(int *)((longlong)ppppppplVar23 + ((longlong)(int)uVar18 * 0x22 + 1) * 4);
              }
              else {
                iVar9 = FUN_14002c2bd();
              }
              if (-1 < iVar9) {
                uVar11 = uVar39;
              }
            }
            ppppppplVar32 = ppppppplVar23 + (longlong)(int)ppppppplVar16 * 0x11;
            ppppppplVar26 = ppppppplVar23 + (longlong)(int)uVar11 * 0x11;
            if (*(int *)(ppppppplVar23 + (longlong)(int)ppppppplVar16 * 0x11) ==
                *(int *)(ppppppplVar23 + (longlong)(int)uVar11 * 0x11)) {
              iVar9 = *(int *)((longlong)ppppppplVar32 + 4) - *(int *)((longlong)ppppppplVar26 + 4);
            }
            else {
              iVar9 = FUN_14002c2bd();
            }
            if (-1 < iVar9) break;
            memcpy(&local_3f8,ppppppplVar32,0x88);
            memcpy(ppppppplVar32,ppppppplVar26,0x88);
            memcpy(ppppppplVar26,&local_3f8,0x88);
            ppppppplVar16 = (longlong *******)(ulonglong)uVar11;
          }
          uVar11 = (int)local_440 - 1;
        } while ((int)local_440 != 0);
        ppppppplVar16 = local_448;
        if (1 < iVar10) {
          memcpy(&local_3f8,ppppppplVar23,0x88);
          memcpy(ppppppplVar23,ppppppplVar23 + (uVar20 - 1) * 0x10 + (uVar20 - 1),0x88);
          memcpy(ppppppplVar23 + (uVar20 - 1) * 0x10 + (uVar20 - 1),&local_3f8,0x88);
          ppppppplVar16 = local_448;
          uVar20 = uVar20 - 1;
          if (iVar10 != 2) {
            do {
              iVar10 = 0;
              iVar12 = 1;
              iVar9 = 0;
              do {
                lVar28 = (longlong)(iVar10 + 2);
                iVar22 = iVar12;
                if (lVar28 < (longlong)uVar20) {
                  if (*(int *)(ppppppplVar23 + lVar28 * 0x11) ==
                      *(int *)(ppppppplVar23 + (longlong)iVar12 * 0x11)) {
                    iVar12 = *(int *)((longlong)ppppppplVar23 + (lVar28 * 0x22 + 1) * 4) -
                             *(int *)((longlong)ppppppplVar23 + ((longlong)iVar12 * 0x22 + 1) * 4);
                  }
                  else {
                    iVar12 = FUN_14002c2bd();
                  }
                  if (-1 < iVar12) {
                    iVar22 = iVar10 + 2;
                  }
                }
                ppppppplVar16 = ppppppplVar23 + (longlong)iVar9 * 0x11;
                ppppppplVar32 = ppppppplVar23 + (longlong)iVar22 * 0x11;
                if (*(int *)(ppppppplVar23 + (longlong)iVar9 * 0x11) ==
                    *(int *)(ppppppplVar23 + (longlong)iVar22 * 0x11)) {
                  iVar10 = *(int *)((longlong)ppppppplVar16 + 4) -
                           *(int *)((longlong)ppppppplVar32 + 4);
                }
                else {
                  iVar10 = FUN_14002c2bd();
                }
                if (-1 < iVar10) break;
                memcpy(&local_3f8,ppppppplVar16,0x88);
                memcpy(ppppppplVar16,ppppppplVar32,0x88);
                memcpy(ppppppplVar32,&local_3f8,0x88);
                iVar10 = iVar22 * 2;
                iVar12 = iVar22 * 2 + 1;
                iVar9 = iVar22;
              } while ((longlong)iVar12 < (longlong)uVar20);
              memcpy(&local_3f8,ppppppplVar23,0x88);
              memcpy(ppppppplVar23,ppppppplVar23 + (uVar20 - 1) * 0x10 + (uVar20 - 1),0x88);
              memcpy(ppppppplVar23 + (uVar20 - 1) * 0x10 + (uVar20 - 1),&local_3f8,0x88);
              bVar41 = 2 < uVar20;
              ppppppplVar16 = local_448;
              uVar20 = uVar20 - 1;
            } while (bVar41);
          }
        }
      }
LAB_1433fab87:
      ppppppplVar16 = ppppppplVar16 + -3;
    } while (&local_368 <= ppppppplVar16);
  }
  uVar20 = 0;
  if ((int)uStack_400 != 0) {
    local_420 = local_408 + (longlong)(int)uStack_400 * 0x11;
    local_428 = local_430 + 0x97;
    ppppppplVar16 = local_408;
    do {
      local_418 = (longlong *******)0x0;
      uStack_410 = 0;
      if ((int)local_430[0x91] != *(int *)((longlong)local_430 + 0x4b4)) {
        pppppplVar34 = *ppppppplVar16;
        uVar11 = (uint)((ulonglong)pppppplVar34 >> 0x10);
        uVar18 = (uint)pppppplVar34 & 0xffff;
        plVar14 = (longlong *)local_430[0x98];
        if ((longlong *)local_430[0x98] == (longlong *)0x0) {
          plVar14 = local_428;
        }
        iVar10 = *(int *)((longlong)plVar14 +
                         (ulonglong)
                         ((int)local_430[0x99] - 1U &
                         (int)((ulonglong)pppppplVar34 >> 0x20) +
                         ((uint)pppppplVar34 << 0x10 | uVar18) + (uVar11 << 0x13 | uVar11 & 0xffff)
                         + (uVar18 >> 4)) * 4);
        if (iVar10 != -1) {
          do {
            lVar28 = local_430[0x90] + (longlong)iVar10 * 0x20;
            if (*(longlong *******)(local_430[0x90] + (longlong)iVar10 * 0x20) == pppppplVar34)
            goto LAB_1433fac67;
            iVar10 = *(int *)(lVar28 + 0x18);
          } while (iVar10 != -1);
        }
      }
      lVar28 = 0;
LAB_1433fac67:
      puVar15 = (undefined8 *)(lVar28 + 8);
      if (lVar28 == 0) {
        puVar15 = (undefined8 *)0x0;
      }
      ppppppplVar23 = (longlong *******)*puVar15;
      ppppppplVar32 = ppppppplVar23 + 0x31;
      uVar11 = *(uint *)(ppppppplVar23 + 0x34);
      ppppppplVar26 = (longlong *******)(ulonglong)uVar11;
      uVar20 = 0;
      local_448 = ppppppplVar16;
      if (uVar11 == 0) {
        uVar29 = 1;
        uVar37 = 0;
        iVar10 = 0;
        uVar18 = 0;
      }
      else {
        ppppppplVar16 = (longlong *******)ppppppplVar23[0x33];
        if ((longlong *******)ppppppplVar23[0x33] == (longlong *******)0x0) {
          ppppppplVar16 = ppppppplVar32;
        }
        uVar18 = *(uint *)ppppppplVar16;
        if (uVar18 == 0) {
          iVar10 = uVar11 + 0x1e;
          if (-1 < (int)(uVar11 - 1)) {
            iVar10 = uVar11 - 1;
          }
          uVar37 = 0;
          uVar29 = (ulonglong)(uint)(iVar10 >> 5);
          if (iVar10 >> 5 < 1) {
            uVar29 = uVar37;
          }
          iVar10 = 0;
          do {
            if (uVar29 == uVar37) {
              uVar20 = 0;
              goto LAB_1433fb5db;
            }
            iVar10 = iVar10 + 0x20;
            uVar18 = *(uint *)((longlong)ppppppplVar16 + (uVar37 + 1) * 4);
            uVar37 = uVar37 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar37 = 0;
          iVar10 = 0;
        }
        uVar29 = (ulonglong)(-uVar18 & uVar18);
        uVar1 = uVar29 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        uVar18 = (iVar10 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if ((int)uVar11 <= (int)uVar18) {
          uVar18 = uVar11;
        }
      }
      if (uVar18 != uVar11) {
        uVar39 = 0xffffffff;
        local_450 = ppppppplVar26;
        local_440 = ppppppplVar32;
        local_438 = ppppppplVar23;
        do {
          pppppplVar34 = ppppppplVar23[0x2f] + (longlong)(int)uVar18 * 0x13;
          pppppplVar25 = ppppppplVar23[0x2f] + (longlong)(int)uVar18 * 0x13 + 0xe;
          ppppplVar27 = *pppppplVar25;
          if (((ppppplVar27 == (longlong *****)0x0) ||
              (*(char *)((longlong)ppppplVar27 + 0x12) != '\0')) ||
             (bVar31 = 0, *(char *)((longlong)ppppplVar27 + 0x11) == '\x01')) {
            ppppplVar2 = pppppplVar34[10];
            if (((ppppplVar2 != (longlong *****)0x0) &&
                (*(char *)((longlong)ppppplVar2 + 0x12) == '\0')) &&
               (*(char *)((longlong)ppppplVar2 + 0x11) == '\0')) {
              if (ppppplVar27 != (longlong *****)0x0) {
                bVar31 = *(byte *)((longlong)ppppplVar27 + 0x12);
                goto LAB_1433fad86;
              }
              goto LAB_1433fad8b;
            }
          }
          else {
LAB_1433fad86:
            if ((bVar31 & 1) == 0) {
              pppppplVar17 = pppppplVar34 + 10;
              if (*(char *)((longlong)ppppplVar27 + 0x11) == '\0') {
                pppppplVar17 = pppppplVar25;
              }
            }
            else {
LAB_1433fad8b:
              pppppplVar17 = pppppplVar34 + 10;
            }
            local_368 = (longlong *******)0x0;
            ppppppplStack_360 = (longlong *******)0x0;
            if ((longlong)*(int *)(pppppplVar17 + 3) != 0) {
              ppppplVar27 = pppppplVar17[2];
              lVar28 = (longlong)*(int *)(pppppplVar17 + 3) << 3;
              do {
                if (1 < (int)ppppppplStack_360) {
                  FUN_1400020e8(&local_368,&DAT_149e19f34,2);
                }
                FUN_1400021e4(ppppplVar27,&local_3f8);
                iVar9 = (int)uStack_3f0 + -1;
                if ((int)uStack_3f0 == 0) {
                  iVar9 = 0;
                }
                FUN_1400020e8(&local_368,local_3f8,iVar9);
                if (local_3f8 != (longlong *****)0x0) {
                  FUN_1400020a8();
                }
                ppppplVar27 = ppppplVar27 + 1;
                lVar28 = lVar28 + -8;
              } while (lVar28 != 0);
            }
            uVar20 = uStack_410;
            ppppplVar27 = *pppppplVar25;
            if ((ppppplVar27 == (longlong *****)0x0) ||
               (*(char *)((longlong)ppppplVar27 + 0x12) != '\0')) {
              bVar31 = 0;
            }
            else {
              bVar31 = *(byte *)((longlong)ppppplVar27 + 0x11) ^ 1;
            }
            lVar28 = (longlong)(int)uStack_410;
            uVar11 = (int)uStack_410 + 1;
            uStack_410 = CONCAT44(uStack_410._4_4_,uVar11);
            if (uStack_410._4_4_ < uVar11) {
              FUN_143409cb2(&local_418,uVar20 & 0xffffffff);
            }
            ppppppplVar16 = local_368;
            local_418[lVar28 * 4] = (longlong ******)*pppppplVar34;
            *(byte *)(local_418 + lVar28 * 4 + 1) = bVar31;
            local_418[lVar28 * 4 + 2] = (longlong ******)0x0;
            lVar24 = (longlong)(int)ppppppplStack_360;
            *(int *)(local_418 + lVar28 * 4 + 3) = (int)ppppppplStack_360;
            if (lVar24 == 0) {
              *(undefined4 *)((longlong)local_418 + lVar28 * 0x20 + 0x1c) = 0;
            }
            else {
              ppppppplVar32 = local_418 + lVar28 * 4 + 2;
              FUN_1446dd670(ppppppplVar32,(ulonglong)ppppppplStack_360 & 0xffffffff,0);
              memcpy(*ppppppplVar32,ppppppplVar16,lVar24 * 2);
            }
            ppppppplVar23 = local_438;
            ppppppplVar26 = local_450;
            if (local_368 != (longlong *******)0x0) {
              FUN_1400020a8();
            }
            uVar11 = *(uint *)(ppppppplVar23 + 0x34);
            ppppppplVar32 = local_440;
          }
          ppppppplVar16 = local_418;
          uVar39 = uVar39 & ~(uint)uVar29;
          ppppppplVar36 = (longlong *******)ppppppplVar23[0x33];
          if ((longlong *******)ppppppplVar23[0x33] == (longlong *******)0x0) {
            ppppppplVar36 = ppppppplVar32;
          }
          iVar9 = (int)uVar37;
          lVar28 = (longlong)iVar9;
          uVar18 = *(uint *)((longlong)ppppppplVar36 + lVar28 * 4) & uVar39;
          if (uVar18 == 0) {
            iVar12 = uVar11 + 0x1e;
            if (-1 < (int)(uVar11 - 1)) {
              iVar12 = uVar11 - 1;
            }
            iVar12 = iVar12 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar22 = iVar12;
            if (iVar12 < iVar9) {
              iVar22 = iVar9;
            }
            if (iVar9 < iVar12) {
              lVar24 = 0;
              do {
                uVar18 = *(uint *)((longlong)ppppppplVar36 + (lVar28 + lVar24 + 1) * 4);
                if (uVar18 != 0) {
                  uVar37 = (ulonglong)(iVar9 + (int)lVar24 + 1);
                  uVar39 = 0xffffffff;
                  goto LAB_1433faf75;
                }
                iVar10 = iVar10 + 0x20;
                lVar24 = lVar24 + 1;
              } while (iVar22 - lVar28 != lVar24);
              uVar39 = 0xffffffff;
              iVar9 = iVar22;
            }
            uVar37 = (ulonglong)(iVar9 + 1);
            ppppppplVar26 = local_450;
            ppppppplVar23 = local_438;
            ppppppplVar32 = local_440;
            uVar18 = uVar11;
          }
          else {
LAB_1433faf75:
            uVar29 = (ulonglong)(-uVar18 & uVar18);
            uVar20 = uVar29 * 2 + 1;
            lVar28 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar28 == 0; lVar28 = lVar28 + -1) {
              }
            }
            uVar18 = (iVar10 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
            if ((int)uVar11 <= (int)uVar18) {
              uVar18 = uVar11;
            }
          }
        } while (uVar18 != (uint)ppppppplVar26);
        iVar10 = (int)uStack_410;
        lVar28 = (longlong)(int)uStack_410;
        if (lVar28 < 1) {
          uVar20 = uStack_410 & 0xffffffff;
        }
        else {
          uVar20 = 1;
          if ((int)uStack_410 != 1) {
            memset(local_358,0,0x2f0);
            local_368 = ppppppplVar16;
            ppppppplStack_360 = ppppppplVar16 + lVar28 * 4 + -4;
            fVar42 = logf((float)iVar10);
            local_358[0] = (int)(longlong)(fVar42 + fVar42);
            ppppppplVar16 = (longlong *******)&local_368;
            do {
              pppppplVar25 = *ppppppplVar16;
              pppppplVar17 = ppppppplVar16[1];
              iVar10 = *(int *)(ppppppplVar16 + 2);
              iVar9 = (int)((ulonglong)((longlong)pppppplVar17 - (longlong)pppppplVar25) >> 5);
              uVar11 = iVar9 + 1;
              pppppplVar30 = pppppplVar25;
              pppppplVar34 = pppppplVar17;
              local_450 = ppppppplVar16;
              if (iVar10 != 0) {
LAB_1433fb05e:
                if (8 < (int)uVar11) {
                  local_440 = (longlong *******)CONCAT44(local_440._4_4_,iVar10);
                  uVar20 = (ulonglong)(uVar11 >> 1);
                  ppppplVar27 = pppppplVar30[uVar20 * 4];
                  ppppplVar2 = (pppppplVar30 + uVar20 * 4)[1];
                  local_3e8 = pppppplVar30[uVar20 * 4 + 2];
                  uStack_3e0 = (pppppplVar30 + uVar20 * 4 + 2)[1];
                  ppppplVar3 = *pppppplVar30;
                  ppppplVar4 = pppppplVar30[1];
                  ppppplVar5 = pppppplVar30[3];
                  pppppplVar30[uVar20 * 4 + 2] = pppppplVar30[2];
                  (pppppplVar30 + uVar20 * 4 + 2)[1] = ppppplVar5;
                  pppppplVar30[uVar20 * 4] = ppppplVar3;
                  (pppppplVar30 + uVar20 * 4)[1] = ppppplVar4;
                  local_3f8._0_4_ = (int)ppppplVar27;
                  local_3f8._4_4_ = (int)((ulonglong)ppppplVar27 >> 0x20);
                  uStack_3f0._0_4_ = (int)ppppplVar2;
                  uStack_3f0._4_4_ = (int)((ulonglong)ppppplVar2 >> 0x20);
                  pppppplVar30[2] = local_3e8;
                  pppppplVar30[3] = uStack_3e0;
                  *(int *)pppppplVar30 = (int)local_3f8;
                  *(int *)((longlong)pppppplVar30 + 4) = local_3f8._4_4_;
                  *(int *)(pppppplVar30 + 1) = (int)uStack_3f0;
                  *(int *)((longlong)pppppplVar30 + 0xc) = uStack_3f0._4_4_;
                  pppppplVar38 = pppppplVar34 + 4;
                  pppppplVar40 = pppppplVar30;
                  local_3f8 = ppppplVar27;
                  uStack_3f0 = ppppplVar2;
                  do {
                    pppppplVar8 = pppppplVar40 + 4;
                    pppppplVar35 = pppppplVar40 + 4;
                    do {
                      pppppplVar40 = pppppplVar35;
                      pppppplVar19 = pppppplVar8;
                      if (pppppplVar34 < pppppplVar40) break;
                      if (*(int *)pppppplVar30 == *(int *)pppppplVar40) {
                        iVar10 = *(int *)((longlong)pppppplVar30 + 4) -
                                 *(int *)((longlong)pppppplVar40 + 4);
                      }
                      else {
                        iVar10 = FUN_14002c2bd();
                      }
                      pppppplVar8 = pppppplVar19 + 4;
                      pppppplVar35 = pppppplVar40 + 4;
                    } while (-1 < iVar10);
                    pppppplVar8 = pppppplVar38 + -8;
                    do {
                      pppppplVar35 = pppppplVar38;
                      pppppplVar21 = pppppplVar8;
                      pppppplVar38 = pppppplVar35 + -4;
                      if (pppppplVar38 <= pppppplVar30) break;
                      if (*(int *)pppppplVar38 == *(int *)pppppplVar30) {
                        iVar10 = *(int *)((longlong)pppppplVar35 + -0x1c) -
                                 *(int *)((longlong)pppppplVar30 + 4);
                      }
                      else {
                        iVar10 = FUN_14002c2bd();
                      }
                      pppppplVar8 = pppppplVar21 + -4;
                    } while (-1 < iVar10);
                    if (pppppplVar38 < pppppplVar40) goto LAB_1433fb182;
                    ppppplVar27 = *pppppplVar40;
                    ppppplVar2 = pppppplVar40[1];
                    local_3e8 = pppppplVar40[2];
                    uStack_3e0 = pppppplVar40[3];
                    ppppplVar3 = *pppppplVar38;
                    ppppplVar4 = pppppplVar35[-3];
                    ppppplVar5 = pppppplVar35[-1];
                    pppppplVar40[2] = pppppplVar35[-2];
                    pppppplVar40[3] = ppppplVar5;
                    *pppppplVar40 = ppppplVar3;
                    pppppplVar40[1] = ppppplVar4;
                    local_3f8._0_4_ = (int)ppppplVar27;
                    local_3f8._4_4_ = (int)((ulonglong)ppppplVar27 >> 0x20);
                    uStack_3f0._0_4_ = (int)ppppplVar2;
                    uStack_3f0._4_4_ = (int)((ulonglong)ppppplVar2 >> 0x20);
                    pppppplVar35[-2] = local_3e8;
                    pppppplVar35[-1] = uStack_3e0;
                    *(int *)pppppplVar38 = (int)local_3f8;
                    *(int *)((longlong)pppppplVar35 + -0x1c) = local_3f8._4_4_;
                    *(int *)(pppppplVar35 + -3) = (int)uStack_3f0;
                    *(int *)((longlong)pppppplVar35 + -0x14) = uStack_3f0._4_4_;
                    local_3f8 = ppppplVar27;
                    uStack_3f0 = ppppplVar2;
                  } while( true );
                }
                for (; ppppppplVar16 = local_450, pppppplVar25 = pppppplVar30,
                    pppppplVar17 = pppppplVar30, pppppplVar30 < pppppplVar34;
                    pppppplVar34 = pppppplVar34 + -4) {
                  while (pppppplVar38 = pppppplVar25, pppppplVar25 = pppppplVar17 + 4,
                        pppppplVar25 <= pppppplVar34) {
                    if (*(int *)pppppplVar38 == *(int *)pppppplVar25) {
                      iVar10 = *(int *)((longlong)pppppplVar38 + 4) -
                               *(int *)((longlong)pppppplVar17 + 0x24);
                    }
                    else {
                      iVar10 = FUN_14002c2bd();
                    }
                    pppppplVar17 = pppppplVar25;
                    if (-1 < iVar10) {
                      pppppplVar25 = pppppplVar38;
                    }
                  }
                  ppppplVar27 = *pppppplVar38;
                  ppppplVar2 = pppppplVar38[1];
                  local_3e8 = pppppplVar38[2];
                  uStack_3e0 = pppppplVar38[3];
                  ppppplVar3 = *pppppplVar34;
                  ppppplVar4 = pppppplVar34[1];
                  ppppplVar5 = pppppplVar34[3];
                  pppppplVar38[2] = pppppplVar34[2];
                  pppppplVar38[3] = ppppplVar5;
                  *pppppplVar38 = ppppplVar3;
                  pppppplVar38[1] = ppppplVar4;
                  local_3f8._0_4_ = (int)ppppplVar27;
                  local_3f8._4_4_ = (int)((ulonglong)ppppplVar27 >> 0x20);
                  uStack_3f0._0_4_ = (int)ppppplVar2;
                  uStack_3f0._4_4_ = (int)((ulonglong)ppppplVar2 >> 0x20);
                  pppppplVar34[2] = local_3e8;
                  pppppplVar34[3] = uStack_3e0;
                  *(int *)pppppplVar34 = (int)local_3f8;
                  *(int *)((longlong)pppppplVar34 + 4) = local_3f8._4_4_;
                  *(int *)(pppppplVar34 + 1) = (int)uStack_3f0;
                  *(int *)((longlong)pppppplVar34 + 0xc) = uStack_3f0._4_4_;
                  local_3f8 = ppppplVar27;
                  uStack_3f0 = ppppplVar2;
                }
                goto LAB_1433fb5af;
              }
LAB_1433fb267:
              ppppppplVar16 = local_450;
              if (uVar11 != 0) {
                iVar10 = (iVar9 - (iVar9 + -1 >> 0x1f)) + -1 >> 1;
                iVar9 = iVar10;
joined_r0x0001433fb288:
                do {
                  iVar12 = iVar10 * 2 + 1;
                  if (iVar12 < (int)uVar11) {
                    iVar22 = iVar10 * 2 + 2;
                    if (iVar22 < (int)uVar11) {
                      if (*(int *)(pppppplVar30 + (longlong)iVar22 * 4) ==
                          *(int *)(pppppplVar30 + (longlong)iVar12 * 4)) {
                        iVar13 = *(int *)((longlong)pppppplVar30 + (longlong)iVar22 * 0x20 + 4) -
                                 *(int *)((longlong)pppppplVar30 + (longlong)iVar12 * 0x20 + 4);
                      }
                      else {
                        iVar13 = FUN_14002c2bd();
                      }
                      if (-1 < iVar13) {
                        iVar12 = iVar22;
                      }
                    }
                    pppppplVar34 = pppppplVar30 + (longlong)iVar10 * 4;
                    pppppplVar25 = pppppplVar30 + (longlong)iVar12 * 4;
                    if (*(int *)(pppppplVar30 + (longlong)iVar10 * 4) ==
                        *(int *)(pppppplVar30 + (longlong)iVar12 * 4)) {
                      iVar10 = *(int *)((longlong)pppppplVar34 + 4) -
                               *(int *)((longlong)pppppplVar25 + 4);
                    }
                    else {
                      iVar10 = FUN_14002c2bd();
                    }
                    if (iVar10 < 0) {
                      ppppplVar27 = *pppppplVar34;
                      ppppplVar2 = pppppplVar34[1];
                      local_3e8 = pppppplVar34[2];
                      uStack_3e0 = pppppplVar34[3];
                      ppppplVar3 = *pppppplVar25;
                      ppppplVar4 = pppppplVar25[1];
                      ppppplVar5 = pppppplVar25[3];
                      pppppplVar34[2] = pppppplVar25[2];
                      pppppplVar34[3] = ppppplVar5;
                      *pppppplVar34 = ppppplVar3;
                      pppppplVar34[1] = ppppplVar4;
                      local_3f8._0_4_ = (int)ppppplVar27;
                      local_3f8._4_4_ = (int)((ulonglong)ppppplVar27 >> 0x20);
                      uStack_3f0._0_4_ = (int)ppppplVar2;
                      uStack_3f0._4_4_ = (int)((ulonglong)ppppplVar2 >> 0x20);
                      pppppplVar25[2] = local_3e8;
                      pppppplVar25[3] = uStack_3e0;
                      *(int *)pppppplVar25 = (int)local_3f8;
                      *(int *)((longlong)pppppplVar25 + 4) = local_3f8._4_4_;
                      *(int *)(pppppplVar25 + 1) = (int)uStack_3f0;
                      *(int *)((longlong)pppppplVar25 + 0xc) = uStack_3f0._4_4_;
                      iVar10 = iVar12;
                      local_3f8 = ppppplVar27;
                      uStack_3f0 = ppppplVar2;
                      goto joined_r0x0001433fb288;
                    }
                  }
                  bVar41 = iVar9 != 0;
                  iVar10 = iVar9 + -1;
                  iVar9 = iVar10;
                } while (bVar41);
                ppppppplVar16 = local_450;
                if (1 < (int)uVar11) {
                  uVar20 = (ulonglong)uVar11 - 1;
                  ppppplVar27 = *pppppplVar30;
                  ppppplVar2 = pppppplVar30[1];
                  ppppplVar3 = pppppplVar30[2];
                  ppppplVar4 = pppppplVar30[3];
                  ppppplVar5 = pppppplVar30[uVar20 * 4];
                  ppppplVar6 = (pppppplVar30 + uVar20 * 4)[1];
                  ppppplVar7 = (pppppplVar30 + uVar20 * 4 + 2)[1];
                  pppppplVar30[2] = pppppplVar30[uVar20 * 4 + 2];
                  pppppplVar30[3] = ppppplVar7;
                  *pppppplVar30 = ppppplVar5;
                  pppppplVar30[1] = ppppplVar6;
                  local_3f8._0_4_ = (int)ppppplVar27;
                  local_3f8._4_4_ = (int)((ulonglong)ppppplVar27 >> 0x20);
                  uStack_3f0._0_4_ = (int)ppppplVar2;
                  uStack_3f0._4_4_ = (int)((ulonglong)ppppplVar2 >> 0x20);
                  local_3e8._0_4_ = (int)ppppplVar3;
                  local_3e8._4_4_ = (int)((ulonglong)ppppplVar3 >> 0x20);
                  uStack_3e0._0_4_ = (int)ppppplVar4;
                  uStack_3e0._4_4_ = (int)((ulonglong)ppppplVar4 >> 0x20);
                  pppppplVar34 = pppppplVar30 + uVar20 * 4 + 2;
                  *(int *)pppppplVar34 = (int)local_3e8;
                  *(int *)((longlong)pppppplVar34 + 4) = local_3e8._4_4_;
                  *(int *)(pppppplVar34 + 1) = (int)uStack_3e0;
                  *(int *)((longlong)pppppplVar34 + 0xc) = uStack_3e0._4_4_;
                  pppppplVar34 = pppppplVar30 + uVar20 * 4;
                  *(int *)pppppplVar34 = (int)local_3f8;
                  *(int *)((longlong)pppppplVar34 + 4) = local_3f8._4_4_;
                  *(int *)(pppppplVar34 + 1) = (int)uStack_3f0;
                  *(int *)((longlong)pppppplVar34 + 0xc) = uStack_3f0._4_4_;
                  local_3f8 = ppppplVar27;
                  uStack_3f0 = ppppplVar2;
                  local_3e8 = ppppplVar3;
                  uStack_3e0 = ppppplVar4;
                  if (uVar11 != 2) {
                    do {
                      iVar10 = 0;
                      iVar12 = 1;
                      iVar9 = 0;
                      do {
                        lVar28 = (longlong)(iVar10 + 2);
                        iVar22 = iVar12;
                        if (lVar28 < (longlong)uVar20) {
                          if (*(int *)(pppppplVar30 + lVar28 * 4) ==
                              *(int *)(pppppplVar30 + (longlong)iVar12 * 4)) {
                            iVar12 = *(int *)((longlong)pppppplVar30 + lVar28 * 0x20 + 4) -
                                     *(int *)((longlong)pppppplVar30 + (longlong)iVar12 * 0x20 + 4);
                          }
                          else {
                            iVar12 = FUN_14002c2bd();
                          }
                          if (-1 < iVar12) {
                            iVar22 = iVar10 + 2;
                          }
                        }
                        pppppplVar34 = pppppplVar30 + (longlong)iVar9 * 4;
                        pppppplVar25 = pppppplVar30 + (longlong)iVar22 * 4;
                        if (*(int *)(pppppplVar30 + (longlong)iVar9 * 4) ==
                            *(int *)(pppppplVar30 + (longlong)iVar22 * 4)) {
                          iVar10 = *(int *)((longlong)pppppplVar34 + 4) -
                                   *(int *)((longlong)pppppplVar25 + 4);
                        }
                        else {
                          iVar10 = FUN_14002c2bd();
                        }
                        if (-1 < iVar10) break;
                        ppppplVar27 = *pppppplVar34;
                        ppppplVar2 = pppppplVar34[1];
                        ppppplVar3 = pppppplVar34[2];
                        ppppplVar4 = pppppplVar34[3];
                        ppppplVar5 = *pppppplVar25;
                        ppppplVar6 = pppppplVar25[1];
                        ppppplVar7 = pppppplVar25[3];
                        pppppplVar34[2] = pppppplVar25[2];
                        pppppplVar34[3] = ppppplVar7;
                        *pppppplVar34 = ppppplVar5;
                        pppppplVar34[1] = ppppplVar6;
                        local_3f8._0_4_ = (int)ppppplVar27;
                        local_3f8._4_4_ = (int)((ulonglong)ppppplVar27 >> 0x20);
                        uStack_3f0._0_4_ = (int)ppppplVar2;
                        uStack_3f0._4_4_ = (int)((ulonglong)ppppplVar2 >> 0x20);
                        local_3e8._0_4_ = (int)ppppplVar3;
                        local_3e8._4_4_ = (int)((ulonglong)ppppplVar3 >> 0x20);
                        uStack_3e0._0_4_ = (int)ppppplVar4;
                        uStack_3e0._4_4_ = (int)((ulonglong)ppppplVar4 >> 0x20);
                        *(int *)(pppppplVar25 + 2) = (int)local_3e8;
                        *(int *)((longlong)pppppplVar25 + 0x14) = local_3e8._4_4_;
                        *(int *)(pppppplVar25 + 3) = (int)uStack_3e0;
                        *(int *)((longlong)pppppplVar25 + 0x1c) = uStack_3e0._4_4_;
                        *(int *)pppppplVar25 = (int)local_3f8;
                        *(int *)((longlong)pppppplVar25 + 4) = local_3f8._4_4_;
                        *(int *)(pppppplVar25 + 1) = (int)uStack_3f0;
                        *(int *)((longlong)pppppplVar25 + 0xc) = uStack_3f0._4_4_;
                        iVar10 = iVar22 * 2;
                        iVar12 = iVar22 * 2 + 1;
                        local_3f8 = ppppplVar27;
                        uStack_3f0 = ppppplVar2;
                        local_3e8 = ppppplVar3;
                        uStack_3e0 = ppppplVar4;
                        iVar9 = iVar22;
                      } while ((longlong)iVar12 < (longlong)uVar20);
                      uVar29 = uVar20 - 1;
                      ppppplVar27 = *pppppplVar30;
                      ppppplVar2 = pppppplVar30[1];
                      ppppplVar3 = pppppplVar30[2];
                      ppppplVar4 = pppppplVar30[3];
                      ppppplVar5 = pppppplVar30[uVar29 * 4];
                      ppppplVar6 = (pppppplVar30 + uVar29 * 4)[1];
                      ppppplVar7 = (pppppplVar30 + uVar29 * 4 + 2)[1];
                      pppppplVar30[2] = pppppplVar30[uVar29 * 4 + 2];
                      pppppplVar30[3] = ppppplVar7;
                      *pppppplVar30 = ppppplVar5;
                      pppppplVar30[1] = ppppplVar6;
                      local_3f8._0_4_ = (int)ppppplVar27;
                      local_3f8._4_4_ = (int)((ulonglong)ppppplVar27 >> 0x20);
                      uStack_3f0._0_4_ = (int)ppppplVar2;
                      uStack_3f0._4_4_ = (int)((ulonglong)ppppplVar2 >> 0x20);
                      local_3e8._0_4_ = (int)ppppplVar3;
                      local_3e8._4_4_ = (int)((ulonglong)ppppplVar3 >> 0x20);
                      uStack_3e0._0_4_ = (int)ppppplVar4;
                      uStack_3e0._4_4_ = (int)((ulonglong)ppppplVar4 >> 0x20);
                      pppppplVar34 = pppppplVar30 + uVar29 * 4 + 2;
                      *(int *)pppppplVar34 = (int)local_3e8;
                      *(int *)((longlong)pppppplVar34 + 4) = local_3e8._4_4_;
                      *(int *)(pppppplVar34 + 1) = (int)uStack_3e0;
                      *(int *)((longlong)pppppplVar34 + 0xc) = uStack_3e0._4_4_;
                      pppppplVar34 = pppppplVar30 + uVar29 * 4;
                      *(int *)pppppplVar34 = (int)local_3f8;
                      *(int *)((longlong)pppppplVar34 + 4) = local_3f8._4_4_;
                      *(int *)(pppppplVar34 + 1) = (int)uStack_3f0;
                      *(int *)((longlong)pppppplVar34 + 0xc) = uStack_3f0._4_4_;
                      bVar41 = 2 < uVar20;
                      ppppppplVar16 = local_450;
                      uVar20 = uVar29;
                      local_3f8 = ppppplVar27;
                      uStack_3f0 = ppppplVar2;
                      local_3e8 = ppppplVar3;
                      uStack_3e0 = ppppplVar4;
                    } while (bVar41);
                  }
                }
              }
LAB_1433fb5af:
              ppppppplVar16 = ppppppplVar16 + -3;
            } while (&local_368 <= ppppppplVar16);
            uVar20 = uStack_410 & 0xffffffff;
          }
        }
      }
LAB_1433fb5db:
      FUN_143409c82(local_418,uVar20);
      if (local_418 != (longlong *******)0x0) {
        FUN_1400020a8();
      }
      ppppppplVar16 = local_448 + 0x11;
    } while (ppppppplVar16 != local_420);
    uVar20 = uStack_400 & 0xffffffff;
  }
  FUN_14580b2c2(local_408,uVar20);
  if (local_408 != (longlong *******)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1433fa701:
  memcpy(&local_3f8,ppppppplVar23,0x88);
  memcpy(ppppppplVar23,_Src_00,0x88);
  memcpy(_Src_00,&local_3f8,0x88);
  iVar10 = (int)local_440 + -1;
  ppppppplVar33 = ppppppplVar33 + -0x22;
  if ((longlong)ppppppplVar36 - (longlong)local_438 < (longlong)local_450 - (longlong)ppppppplVar26)
  {
    if (_Src < ppppppplVar32) {
      *local_448 = (longlong ******)_Src;
      local_448[1] = (longlong ******)ppppppplVar32;
      *(int *)(local_448 + 2) = iVar10;
      local_448 = local_448 + 3;
    }
    ppppppplVar16 = local_448;
    ppppppplVar26 = ppppppplVar23;
    if (_Src_00 <= ppppppplVar23 + 0x11) goto LAB_1433fab87;
  }
  else {
    ppppppplVar16 = local_448;
    if (ppppppplVar23 + 0x11 < _Src_00) {
      *local_448 = (longlong ******)ppppppplVar23;
      local_448[1] = (longlong ******)ppppppplVar33;
      *(int *)(local_448 + 2) = iVar10;
      ppppppplVar16 = local_448 + 3;
    }
    ppppppplVar23 = _Src;
    ppppppplVar33 = ppppppplVar32;
    ppppppplVar36 = ppppppplVar32;
    if (ppppppplVar32 <= _Src) goto LAB_1433fab87;
  }
  local_448 = ppppppplVar16;
  iVar9 = (int)((ulonglong)((longlong)ppppppplVar36 - (longlong)ppppppplVar26) >> 3) * -0xf0f0f0f;
  uVar20 = (ulonglong)(iVar9 + 1);
  ppppppplVar32 = ppppppplVar33;
  if (iVar10 == 0) goto LAB_1433fa7ee;
  goto LAB_1433fa5cf;
LAB_1433fb182:
  ppppplVar27 = *pppppplVar30;
  ppppplVar2 = pppppplVar30[1];
  local_3e8 = pppppplVar30[2];
  uStack_3e0 = pppppplVar30[3];
  ppppplVar3 = *pppppplVar38;
  ppppplVar4 = pppppplVar35[-3];
  ppppplVar5 = pppppplVar35[-1];
  pppppplVar30[2] = pppppplVar35[-2];
  pppppplVar30[3] = ppppplVar5;
  *pppppplVar30 = ppppplVar3;
  pppppplVar30[1] = ppppplVar4;
  local_3f8._0_4_ = (int)ppppplVar27;
  local_3f8._4_4_ = (int)((ulonglong)ppppplVar27 >> 0x20);
  uStack_3f0._0_4_ = (int)ppppplVar2;
  uStack_3f0._4_4_ = (int)((ulonglong)ppppplVar2 >> 0x20);
  pppppplVar35[-2] = local_3e8;
  pppppplVar35[-1] = uStack_3e0;
  *(int *)pppppplVar38 = (int)local_3f8;
  *(int *)((longlong)pppppplVar35 + -0x1c) = local_3f8._4_4_;
  *(int *)(pppppplVar35 + -3) = (int)uStack_3f0;
  *(int *)((longlong)pppppplVar35 + -0x14) = uStack_3f0._4_4_;
  iVar10 = (int)local_440 + -1;
  pppppplVar35 = pppppplVar35 + -8;
  local_3f8 = ppppplVar27;
  uStack_3f0 = ppppplVar2;
  if ((longlong)pppppplVar21 - (longlong)pppppplVar25 <
      (longlong)pppppplVar17 - (longlong)pppppplVar19) {
    if (pppppplVar40 < pppppplVar34) {
      *local_450 = pppppplVar40;
      local_450[1] = pppppplVar34;
      *(int *)(local_450 + 2) = iVar10;
      local_450 = local_450 + 3;
    }
    ppppppplVar16 = local_450;
    pppppplVar17 = pppppplVar21;
    pppppplVar25 = pppppplVar30;
    if (pppppplVar38 <= pppppplVar30 + 4) goto LAB_1433fb5af;
  }
  else {
    ppppppplVar16 = local_450;
    if (pppppplVar30 + 4 < pppppplVar38) {
      *local_450 = pppppplVar30;
      local_450[1] = pppppplVar35;
      *(int *)(local_450 + 2) = iVar10;
      ppppppplVar16 = local_450 + 3;
    }
    pppppplVar30 = pppppplVar40;
    pppppplVar35 = pppppplVar34;
    pppppplVar17 = pppppplVar34;
    pppppplVar25 = pppppplVar19;
    if (pppppplVar34 <= pppppplVar40) goto LAB_1433fb5af;
  }
  local_450 = ppppppplVar16;
  iVar9 = (int)((ulonglong)((longlong)pppppplVar17 - (longlong)pppppplVar25) >> 5);
  uVar11 = iVar9 + 1;
  pppppplVar34 = pppppplVar35;
  if (iVar10 == 0) goto LAB_1433fb267;
  goto LAB_1433fb05e;
}



// FUNCTION 1433fb663 FUN_1433fb663 body=69 status=ok
// SIG undefined FUN_1433fb663(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fb663(void)

{
  _DAT_14cacd988 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fb6a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacd990,1);
  return;
}



// FUNCTION 1433fb6a8 FUN_1433fb6a8 body=252 status=ok
// SIG undefined FUN_1433fb6a8(void)

void FUN_1433fb6a8(longlong *param_1)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined2 *local_40;
  int local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < (int)param_1[1]) {
    local_40 = (undefined2 *)0x0;
    local_38 = *(int *)((undefined8 *)*param_1 + 1);
    lVar3 = (longlong)local_38;
    _Src = *(void **)*param_1;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,_Src,lVar3 * 2);
    }
    local_50 = 0xffffffff;
    local_58 = 0;
    iVar1 = FUN_1447ee042(&local_40,&DAT_149e31048,1,1);
    if (iVar1 != -1) {
      FUN_14050fd64();
      iVar1 = local_38 + -1;
      puVar2 = local_40;
      if (local_38 == 0) {
        puVar2 = &DAT_149dfb77a;
        iVar1 = 0;
      }
      FUN_1468c7b6a(local_30,puVar2,iVar1);
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433fb7a5 FUN_1433fb7a5 body=69 status=ok
// SIG undefined FUN_1433fb7a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fb7a5(void)

{
  _DAT_14cacd998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fb7e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacd9a0,1);
  return;
}



// FUNCTION 1433fb7ea FUN_1433fb7ea body=39 status=ok
// SIG undefined FUN_1433fb7ea(void)

void FUN_1433fb7ea(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_14050fd64();
  plVar2 = (longlong *)FUN_145d0c2fa(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001433fb80e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x3e0))(plVar2,1,*(code **)(*plVar2 + 0x3e0));
  return;
}



// FUNCTION 1433fb811 FUN_1433fb811 body=69 status=ok
// SIG undefined FUN_1433fb811(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fb811(void)

{
  _DAT_14cacd9a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fb853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacd9b0,1);
  return;
}



// FUNCTION 1433fb856 FUN_1433fb856 body=1118 status=ok
// SIG undefined FUN_1433fb856(void)

/* WARNING: Removing unreachable block (ram,0x0001433fbb1a) */
/* WARNING: Removing unreachable block (ram,0x0001433fb971) */
/* WARNING: Removing unreachable block (ram,0x0001433fbbf7) */

void FUN_1433fb856(undefined8 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  undefined2 **local_108;
  undefined8 *local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined2 *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_1 + 1) != 0) {
    local_f0 = (longlong *)FUN_14050fd64();
    plVar3 = (longlong *)FUN_145d0c2fa(local_f0);
    local_98 = 0;
    uStack_90 = 0;
    FUN_140056680(&local_80,L"digraph { ");
    uVar1 = uStack_90;
    lVar6 = (longlong)(int)uStack_90;
    uVar2 = (int)uStack_90 + 1;
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar2);
    if (uStack_90._4_4_ < uVar2) {
      FUN_1447a1bd6(&local_98,uVar1 & 0xffffffff);
    }
    lVar6 = lVar6 * 0x10;
    *(undefined8 *)(local_98 + lVar6) = 0;
    *(undefined2 **)(local_98 + lVar6) = local_80;
    *(int *)(local_98 + 8 + lVar6) = (int)local_78;
    *(undefined4 *)(local_98 + 0xc + lVar6) = local_78._4_4_;
    local_78 = 0;
    local_80 = (undefined2 *)0x0;
    local_f8 = param_1;
    if ((longlong)*(int *)(param_1 + 1) != 0) {
      puVar5 = (undefined8 *)*param_1;
      local_e8 = puVar5 + (longlong)*(int *)(param_1 + 1) * 2;
      do {
        local_a8 = 0;
        uStack_a0 = 0;
        local_70 = 0;
        local_68 = 0x100000000;
        local_80 = (undefined2 *)((ulonglong)local_80 & 0xffffffffffff0000);
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(puVar5 + 1) != 0) {
          puVar4 = (undefined2 *)*puVar5;
        }
        FUN_1446f470e(&local_d0,puVar4,1);
        local_c8 = local_d0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        local_108 = &local_80;
        (**(code **)(*plVar3 + 0x128))(plVar3,&local_c8,&local_a8,1);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if ((longlong)(int)uStack_a0 != 0) {
          lVar8 = (longlong)(int)uStack_a0 << 5;
          lVar6 = local_a8;
          do {
            FUN_147021ac6(lVar6,&local_80);
            puVar4 = &DAT_149dfb77a;
            if (*(int *)(puVar5 + 1) != 0) {
              puVar4 = (undefined2 *)*puVar5;
            }
            puVar7 = &DAT_149dfb77a;
            if ((int)local_78 != 0) {
              puVar7 = local_80;
            }
            FUN_140002266(&local_c8,L"\t\"%s\" -> \"%s\";",puVar7,puVar4);
            uVar1 = uStack_90;
            lVar9 = (longlong)(int)uStack_90;
            uVar2 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar2);
            if (uStack_90._4_4_ < uVar2) {
              FUN_1447a1bd6(&local_98,uVar1 & 0xffffffff);
            }
            lVar9 = lVar9 * 0x10;
            *(undefined8 *)(local_98 + lVar9) = 0;
            *(undefined8 *)(local_98 + lVar9) = local_c8;
            *(undefined4 *)(local_98 + 8 + lVar9) = (undefined4)local_c0;
            *(undefined4 *)(local_98 + 0xc + lVar9) = local_c0._4_4_;
            local_c0 = 0;
            local_c8 = 0;
            if (local_80 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            lVar6 = lVar6 + 0x20;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        if (local_a8 != 0) {
          FUN_1400020a8(local_a8);
        }
        puVar5 = puVar5 + 2;
      } while (puVar5 != local_e8);
    }
    FUN_140056680(&local_80,&DAT_149e061a6);
    uVar1 = uStack_90;
    lVar6 = (longlong)(int)uStack_90;
    uVar2 = (int)uStack_90 + 1;
    uStack_90 = CONCAT44(uStack_90._4_4_,uVar2);
    if (uStack_90._4_4_ < uVar2) {
      FUN_1447a1bd6(&local_98,uVar1 & 0xffffffff);
    }
    puVar5 = local_f8;
    lVar6 = lVar6 * 0x10;
    *(undefined8 *)(local_98 + lVar6) = 0;
    *(undefined2 **)(local_98 + lVar6) = local_80;
    *(int *)(local_98 + 8 + lVar6) = (int)local_78;
    *(undefined4 *)(local_98 + 0xc + lVar6) = local_78._4_4_;
    local_78 = 0;
    local_80 = (undefined2 *)0x0;
    FUN_1402160b8(&local_c8);
    FUN_14047ad2e(&local_c8,&local_80,L"%Y.%m.%d-%H.%M.%S");
    puVar4 = &DAT_149dfb77a;
    puVar7 = &DAT_149dfb77a;
    if ((int)local_78 != 0) {
      puVar7 = local_80;
    }
    if (*(int *)((undefined8 *)*puVar5 + 1) != 0) {
      puVar4 = *(undefined2 **)*puVar5;
    }
    FUN_140002266(local_e0,L"ReferencersForPackage%s%s.gv",puVar4,puVar7);
    (**(code **)(*local_f0 + 0x4d8))(local_f0,local_e0,&local_98);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433fbcb5 FUN_1433fbcb5 body=69 status=ok
// SIG undefined FUN_1433fbcb5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fbcb5(void)

{
  _DAT_14cacd9b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fbcf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacd9c0,1);
  return;
}



// FUNCTION 1433fbcfa FUN_1433fbcfa body=499 status=ok
// SIG undefined FUN_1433fbcfa(void)

void FUN_1433fbcfa(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1479509c2(&local_50);
  plVar3 = *(longlong **)(param_1 + 0x1c8);
  lVar5 = (longlong)*(int *)(param_1 + 0x1d0);
  if (lVar5 == 0) {
LAB_1433fbd42:
    uVar4 = *(int *)(param_1 + 0x1d0) + 1;
    *(uint *)(param_1 + 0x1d0) = uVar4;
    if (*(uint *)(param_1 + 0x1d4) < uVar4) {
      FUN_1447a1bd6((undefined8 *)(param_1 + 0x1c8));
      plVar3 = *(longlong **)(param_1 + 0x1c8);
    }
    _Src = local_50;
    plVar10 = plVar3 + lVar5 * 2;
    plVar3[lVar5 * 2] = 0;
    lVar9 = (longlong)local_48;
    *(int *)(plVar3 + lVar5 * 2 + 1) = local_48;
    if (lVar9 == 0) {
      *(undefined4 *)((longlong)plVar10 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(plVar10,local_48,0);
      memcpy((void *)*plVar10,_Src,lVar9 * 2);
    }
    iVar2 = *(int *)(param_1 + 0x1e0);
    *(uint *)(param_1 + 0x1e0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x1e4) < iVar2 + 1U) {
      FUN_1447a1bd6((longlong *)(param_1 + 0x1d8),iVar2);
    }
    lVar5 = *(longlong *)(param_1 + 0x1d8);
    lVar12 = (longlong)iVar2 * 0x10;
    puVar1 = (undefined8 *)(lVar5 + lVar12);
    *(undefined8 *)(lVar5 + lVar12) = 0;
    *(int *)(lVar5 + 8 + lVar12) = local_48;
    if (local_48 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,local_48,0);
      memcpy((void *)*puVar1,_Src,lVar9 * 2);
    }
    FUN_1411f311e(param_1 + 0x458,&local_50);
LAB_1433fbe34:
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar10 = plVar3;
LAB_1433fbe7c:
  if ((int)plVar10[1] == local_48) {
    if (1 < local_48) {
      lVar9 = 0;
      do {
        uVar6 = *(ushort *)(*plVar10 + lVar9);
        uVar7 = (ulonglong)uVar6;
        uVar8 = *(ushort *)((longlong)local_50 + lVar9);
        if (uVar6 == uVar8) {
          if (uVar6 == 0) break;
        }
        else {
          if (0x7f < (uVar8 | uVar6)) goto LAB_1433fbee3;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar11 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar11]) goto LAB_1433fbee3;
        }
        lVar9 = lVar9 + 2;
      } while( true );
    }
  }
  else if ((int)plVar10[1] + local_48 != 1) goto LAB_1433fbe8d;
  goto LAB_1433fbe34;
LAB_1433fbee3:
  if (uVar6 == uVar8) goto LAB_1433fbe34;
LAB_1433fbe8d:
  plVar10 = plVar10 + 2;
  if (plVar10 == plVar3 + lVar5 * 2) goto LAB_1433fbd42;
  goto LAB_1433fbe7c;
}



// FUNCTION 1433fbeee FUN_1433fbeee body=55 status=ok
// SIG undefined FUN_1433fbeee(void)

void FUN_1433fbeee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacd9e8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacd9e8 = FUN_14171c317(FUN_1463ac51e,uVar1,L"EPrimaryAssetCookRule");
  }
  return;
}



// FUNCTION 1433fbf25 FUN_1433fbf25 body=221 status=ok
// SIG undefined FUN_1433fbf25(void)

longlong FUN_1433fbf25(void)

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
  if (DAT_14cacda40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147957ee7;
    local_40 = FUN_1463ac712;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"AssetUserData",&DAT_14cacda40,&DAT_147957ee6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacda40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433fc003 FUN_1433fc003 body=55 status=ok
// SIG undefined FUN_1433fc003(void)

void FUN_1433fc003(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacdbe0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacdbe0 = FUN_14171c317(FUN_1463acf93,uVar1,L"EAttenuationDistanceModel");
  }
  return;
}



// FUNCTION 1433fc03a FUN_1433fc03a body=55 status=ok
// SIG undefined FUN_1433fc03a(void)

void FUN_1433fc03a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacdbf8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacdbf8 = FUN_14171c317(FUN_1463acfc2,uVar1,L"EAttenuationShape");
  }
  return;
}



// FUNCTION 1433fc071 FUN_1433fc071 body=55 status=ok
// SIG undefined FUN_1433fc071(void)

void FUN_1433fc071(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacdc10 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacdc10 = FUN_14171c317(FUN_1463acff1,uVar1,L"ENaturalSoundFalloffMode");
  }
  return;
}



// FUNCTION 1433fc0a8 FUN_1433fc0a8 body=69 status=ok
// SIG undefined FUN_1433fc0a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fc0a8(void)

{
  _DAT_14cacdc40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fc0ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdc48,1);
  return;
}



// FUNCTION 1433fc0ed FUN_1433fc0ed body=69 status=ok
// SIG undefined FUN_1433fc0ed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fc0ed(void)

{
  _DAT_14cacdc58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fc12f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdc60,1);
  return;
}



// FUNCTION 1433fc132 FUN_1433fc132 body=69 status=ok
// SIG undefined FUN_1433fc132(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fc132(void)

{
  _DAT_14cacdc68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fc174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdc70,1);
  return;
}



// FUNCTION 1433fc177 FUN_1433fc177 body=69 status=ok
// SIG undefined FUN_1433fc177(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fc177(void)

{
  _DAT_14cacdc80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fc1b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdc88,1);
  return;
}



// FUNCTION 1433fc1bc FUN_1433fc1bc body=69 status=ok
// SIG undefined FUN_1433fc1bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fc1bc(void)

{
  _DAT_14cacdc98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fc1fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdca0,1);
  return;
}



// FUNCTION 1433fc204 FUN_1433fc204 body=222 status=ok
// SIG undefined FUN_1433fc204(void)

void FUN_1433fc204(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xa0) = 0;
    FUN_14795b56a(param_1);
    FUN_147969de8(*(longlong *)(param_1 + 8) + 0x2e8,*(undefined8 *)(param_1 + 0x10));
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (-1 < (char)*(uint *)(lVar1 + 0xcc)) {
      *(uint *)(lVar1 + 0xcc) = *(uint *)(lVar1 + 0xcc) | 0xc0;
      lVar3 = (longlong)*(int *)(lVar1 + 0x58);
      if (0 < lVar3) {
        uVar4 = lVar3 + 1;
        lVar3 = lVar3 << 4;
        do {
          lVar3 = lVar3 + -0x10;
          plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x50) + lVar3);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x2a0))(plVar2,lVar1);
          }
          uVar4 = uVar4 - 1;
        } while (1 < uVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  local_30 = param_1;
  FUN_147969f4e(*(longlong *)(param_1 + 8) + 0x200);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433fc2e4 FUN_1433fc2e4 body=115 status=ok
// SIG undefined FUN_1433fc2e4(void)

void FUN_1433fc2e4(longlong param_1,char param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  
  if (-1 < (char)*(uint *)(param_1 + 0xcc)) {
    *(uint *)(param_1 + 0xcc) = *(uint *)(param_1 + 0xcc) | 0xc0;
    uVar4 = *(uint *)(param_1 + 0x58);
    if (0 < (int)*(uint *)(param_1 + 0x58)) {
      do {
        while( true ) {
          uVar1 = uVar4 - 1;
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar1 * 0x10);
          if (plVar2 == (longlong *)0x0) break;
          cVar3 = (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1);
          if (uVar4 < 2) {
            return;
          }
          uVar4 = uVar1;
          if (cVar3 == '\x01' && param_2 == '\0') {
            return;
          }
        }
        bVar5 = 1 < uVar4;
        uVar4 = uVar1;
      } while (bVar5);
    }
  }
  return;
}



// FUNCTION 1433fc358 FUN_1433fc358 body=4 status=ok
// SIG undefined FUN_1433fc358(void)

undefined4 FUN_1433fc358(undefined8 param_1,undefined4 param_2)

{
  return param_2;
}



// FUNCTION 1433fc35c FUN_1433fc35c body=455 status=ok
// SIG undefined FUN_1433fc35c(void)

double * FUN_1433fc35c(longlong param_1,double *param_2,double *param_3,float *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar6 = FUN_1479629ac(param_1,param_3,local_64,1);
  if ((iVar6 != -1) && (iVar6 < *(int *)(param_1 + 0xa48))) {
    lVar5 = *(longlong *)(param_1 + 0xa40);
    lVar7 = (longlong)iVar6 * 0x80;
    dVar8 = param_3[2];
    dVar11 = *param_3;
    dVar4 = param_3[1];
    pdVar1 = (double *)(lVar5 + 0x20 + lVar7);
    pdVar2 = (double *)(lVar5 + 0x40 + lVar7);
    pdVar3 = (double *)(lVar5 + 0x60 + lVar7);
    dVar9 = dVar8 * *pdVar2 + dVar4 * *pdVar1 + dVar11 * *(double *)(lVar5 + lVar7) + *pdVar3;
    dVar10 = dVar8 * pdVar2[1] + dVar4 * pdVar1[1] + dVar11 * ((double *)(lVar5 + lVar7))[1] +
             pdVar3[1];
    dVar8 = dVar11 * *(double *)(lVar5 + 0x10 + lVar7) + dVar4 * *(double *)(lVar5 + 0x30 + lVar7) +
            dVar8 * *(double *)(lVar5 + 0x50 + lVar7) + *(double *)(lVar5 + 0x70 + lVar7);
    dVar11 = dVar8 * dVar8 + dVar9 * dVar9 + dVar10 * dVar10;
    if (param_4 != (float *)0x0) {
      *param_4 = (float)SQRT(dVar11);
    }
    if ((dVar11 != 1.0) || (NAN(dVar11))) {
      if (dVar11 < 9.99999993922529e-09) {
        param_2[2] = DAT_14c8464f0;
        dVar8 = DAT_14c8464e0;
        dVar11 = DAT_14c8464e8;
        goto LAB_1433fc4b5;
      }
      dVar11 = 1.0 / SQRT(dVar11);
      dVar8 = dVar8 * dVar11;
      dVar10 = dVar10 * dVar11;
      dVar9 = dVar9 * dVar11;
    }
    *param_2 = dVar9;
    param_2[1] = dVar10;
    param_2[2] = dVar8;
    if ((local_60 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  param_2[2] = DAT_14c8462e8;
  dVar8 = DAT_14c8462d8;
  dVar11 = DAT_14c8462e0;
LAB_1433fc4b5:
  *param_2 = dVar8;
  param_2[1] = dVar11;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_88);
}



// FUNCTION 1433fc546 FUN_1433fc546 body=3427 status=ok
// SIG undefined FUN_1433fc546(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1433fc546(longlong *param_1,longlong param_2,int param_3,longlong param_4,char param_5
                       ,undefined8 *param_6)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  short *psVar9;
  int *piVar10;
  undefined8 *puVar11;
  size_t sVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  int *piVar18;
  uint uVar19;
  undefined2 *puVar20;
  ushort uVar21;
  uint uVar22;
  int iVar23;
  ushort uVar24;
  undefined4 *puVar25;
  char *pcVar26;
  undefined8 *puVar27;
  longlong lVar28;
  int *piVar29;
  wchar_t *_Str;
  longlong lVar30;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong *local_200;
  undefined8 *local_1f8;
  ulonglong uStack_1f0;
  void *local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  int local_1d0;
  longlong local_1c8 [2];
  undefined2 *local_1b8;
  int local_1b0;
  longlong local_1a8 [2];
  longlong local_198 [2];
  longlong local_188 [2];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 local_158;
  undefined7 uStack_157;
  char local_150;
  undefined1 local_14e;
  undefined8 *local_78;
  undefined8 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  param_1[0xb] = param_2 + param_3;
  if (param_3 == 0) goto LAB_1433fc5a5;
  if (*(int *)(param_2 + 8) == 0x45564157) {
    lVar30 = param_2 + 0xc;
    param_1[7] = param_2 + 4;
    lVar8 = FUN_14795c8cc(lVar30,param_2 + param_3,0x20746d66);
    if (lVar8 == 0) goto LAB_1433fc591;
    psVar9 = (short *)(lVar8 + 8);
    param_1[3] = lVar8 + 0x16;
    piVar1 = (int *)(lVar8 + 0xc);
    *param_1 = (longlong)piVar1;
    param_1[1] = lVar8 + 0x10;
    param_1[2] = lVar8 + 0x14;
    param_1[4] = lVar8 + 10;
    param_1[5] = (longlong)psVar9;
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = psVar9;
    }
    if ((*(uint *)(lVar8 + 4) < 0x28) || (*psVar9 != -2)) {
LAB_1433fc6e0:
      lVar8 = FUN_14795c8cc(lVar30,param_1[0xb],0x61746164);
      if (lVar8 == 0) goto LAB_1433fc591;
      param_1[8] = lVar8 + 8;
      param_1[6] = lVar8 + 4;
      uVar19 = *(uint *)(lVar8 + 4);
      *(uint *)(param_1 + 10) = uVar19;
      uVar15 = lVar8 + 8 + (ulonglong)uVar19;
      param_1[9] = uVar15;
      uVar21 = *(ushort *)param_1[5];
      uVar22 = (uint)uVar21;
      if (((0x11 < uVar21) || ((0x2000eU >> (uVar21 & 0x1f) & 1) == 0)) && (uVar22 != 0xffff)) {
        FUN_14795c94a(param_1);
        if (param_4 != 0) {
          pwVar17 = 
          L"Unsupported wave file format.  Only PCM, ADPCM, and DVI ADPCM can be imported.";
          goto LAB_1433fc59d;
        }
        goto LAB_1433fc5a5;
      }
      if ((param_5 == '\0') &&
         (((uVar22 < 0x12 && ((0x2000eU >> (uVar22 & 0x1f) & 1) != 0)) || (uVar22 == 0xffff)))) {
        uVar14 = param_1[0xb];
        if (uVar14 < uVar15) {
          param_1[9] = uVar14;
          iVar23 = (int)uVar14 - (int)(lVar8 + 8);
          *(int *)(param_1 + 10) = iVar23;
          *(int *)(lVar8 + 4) = iVar23;
          uVar19 = *(uint *)(param_1 + 10);
        }
        *(uint *)(param_1 + 0xc) = uVar19;
      }
      lVar8 = FUN_14795c8cc(lVar30,param_1[0xb],0x20657563);
      if (lVar8 != 0) {
        plVar16 = param_1 + 0xd;
        local_208 = lVar30;
        FUN_14795cc92(plVar16,*(undefined4 *)(lVar8 + 8));
        if (*(int *)(lVar8 + 8) != 0) {
          puVar11 = (undefined8 *)(lVar8 + 0xc);
          uVar15 = 0;
          do {
            uVar6 = *puVar11;
            iVar23 = (int)param_1[0xe];
            *(uint *)(param_1 + 0xe) = iVar23 + 1U;
            if (*(uint *)((longlong)param_1 + 0x74) < iVar23 + 1U) {
              FUN_14796a226(plVar16,iVar23);
            }
            lVar30 = *plVar16;
            lVar13 = (longlong)iVar23 * 0x20;
            *(undefined8 *)(lVar30 + lVar13) = uVar6;
            uVar15 = uVar15 + 1;
            puVar27 = (undefined8 *)(lVar30 + 8 + lVar13);
            *puVar27 = 0;
            puVar27[1] = 0;
            *(undefined4 *)(lVar30 + 0x18 + lVar13) = 0;
            puVar11 = puVar11 + 3;
          } while (uVar15 < *(uint *)(lVar8 + 8));
        }
        lVar30 = local_208;
        lVar8 = FUN_14795c8cc(local_208,param_1[0xb]);
        if (lVar8 != 0) {
          piVar29 = (int *)(lVar8 + (ulonglong)*(uint *)(lVar8 + 4) + 0x10);
          if ((int *)param_1[0xb] < piVar29) {
            piVar29 = (int *)param_1[0xb];
          }
          piVar10 = (int *)(lVar8 + 0x14);
          if (piVar10 <= piVar29) {
            piVar18 = (int *)(lVar8 + 0xc);
            do {
              if (*piVar18 == 0x6c62616c) {
                if ((longlong)(int)param_1[0xe] != 0) {
                  lVar13 = param_1[0xd] + 8;
                  lVar8 = (longlong)(int)param_1[0xe] << 5;
                  do {
                    if (*(int *)(lVar13 + -8) == *piVar10) {
                      cVar7 = (char)piVar18[3];
                      if (cVar7 != '\0') {
                        pcVar26 = (char *)((longlong)piVar18 + 0xd);
                        do {
                          FUN_140002184(lVar13,(int)cVar7);
                          cVar7 = *pcVar26;
                          pcVar26 = pcVar26 + 1;
                        } while (cVar7 != '\0');
                      }
                      break;
                    }
                    lVar13 = lVar13 + 0x20;
                    lVar8 = lVar8 + -0x20;
                  } while (lVar8 != 0);
                }
              }
              else if ((*piVar18 == 0x7478746c) && ((longlong)(int)param_1[0xe] != 0)) {
                lVar8 = 0;
                do {
                  if (*(int *)(param_1[0xd] + lVar8) == *piVar10) {
                    *(int *)(param_1[0xd] + 0x18 + lVar8) = piVar18[3];
                    break;
                  }
                  lVar8 = lVar8 + 0x20;
                } while ((longlong)(int)param_1[0xe] * 0x20 != lVar8);
              }
              uVar15 = (ulonglong)(piVar18[1] + 1U & 0xfffffffe);
              piVar10 = (int *)((longlong)piVar18 + uVar15 + 0x10);
              piVar18 = (int *)((longlong)piVar18 + uVar15 + 8);
            } while (piVar10 <= piVar29);
          }
        }
      }
      lVar8 = FUN_14795c8cc(lVar30,param_1[0xb],0x74786562);
      if (((lVar8 != 0) && (lVar13 = *(longlong *)(lVar8 + 0x15a), lVar13 != 0)) && (*piVar1 != 0))
      {
        puVar11 = (undefined8 *)FUN_14001cc68(0x80,0x10);
        *puVar11 = FUN_14796a2ab;
        puVar11[1] = FUN_143409fe5;
        plVar16 = puVar11 + 2;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11[0xe] = 0;
        puVar11[0xf] = 0;
        puVar11[2] = 0xffffffff;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar11[8] = 0;
        puVar11[9] = 0;
        puVar11[10] = 0;
        puVar11[0xb] = 0;
        puVar11[0xc] = 0;
        puVar11[0xd] = 0;
        puVar11[0xe] = 0x10000ea60;
        lVar28 = param_1[0x11];
        param_1[0x11] = (longlong)plVar16;
        if (lVar28 != 0) {
          (**(code **)(lVar28 + -0x10))(lVar28 + -0x10);
          plVar16 = (longlong *)param_1[0x11];
        }
        *plVar16 = lVar13;
        *(int *)(param_1[0x11] + 8) = *piVar1;
        local_78 = (undefined8 *)0x0;
        sVar12 = strlen((char *)(lVar8 + 8));
        iVar23 = (int)sVar12;
        uVar19 = iVar23 + 1;
        local_68 = iVar23;
        if (uVar19 < 0x81) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          FUN_1446efa72(&local_78,0,uVar19,2);
          puVar11 = local_78;
        }
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = &local_178;
        }
        local_70 = puVar11;
        if (-1 < iVar23) {
          uVar15 = 0;
          do {
            *(short *)((longlong)puVar11 + uVar15 * 2) = (short)((char *)(lVar8 + 8))[uVar15];
            uVar15 = uVar15 + 1;
          } while (uVar19 != uVar15);
        }
        FUN_14020fad6(param_1[0x11] + 0x10);
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        local_78 = (undefined8 *)0x0;
        sVar12 = strlen((char *)(lVar8 + 0x108));
        iVar23 = (int)sVar12;
        uVar19 = iVar23 + 1;
        local_68 = iVar23;
        if (uVar19 < 0x81) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          FUN_1446efa72(&local_78,0,uVar19,2);
          puVar11 = local_78;
        }
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = &local_178;
        }
        local_70 = puVar11;
        if (-1 < iVar23) {
          uVar15 = 0;
          do {
            *(short *)((longlong)puVar11 + uVar15 * 2) = (short)((char *)(lVar8 + 0x108))[uVar15];
            uVar15 = uVar15 + 1;
          } while (uVar19 != uVar15);
        }
        FUN_14020fad6(param_1[0x11] + 0x40);
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        local_78 = (undefined8 *)0x0;
        sVar12 = strlen((char *)(lVar8 + 0x148));
        iVar23 = (int)sVar12;
        uVar19 = iVar23 + 1;
        local_68 = iVar23;
        if (uVar19 < 0x81) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          FUN_1446efa72(&local_78,0,uVar19,2);
          puVar11 = local_78;
        }
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = &local_178;
        }
        local_70 = puVar11;
        if (-1 < iVar23) {
          uVar15 = 0;
          do {
            *(short *)((longlong)puVar11 + uVar15 * 2) = (short)((char *)(lVar8 + 0x148))[uVar15];
            uVar15 = uVar15 + 1;
          } while (uVar19 != uVar15);
        }
        FUN_14020fad6(param_1[0x11] + 0x30);
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        local_78 = (undefined8 *)0x0;
        sVar12 = strlen((char *)(lVar8 + 0x128));
        iVar23 = (int)sVar12;
        uVar19 = iVar23 + 1;
        local_68 = iVar23;
        if (uVar19 < 0x81) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          FUN_1446efa72(&local_78,0,uVar19,2);
          puVar11 = local_78;
        }
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = &local_178;
        }
        local_70 = puVar11;
        if (-1 < iVar23) {
          uVar15 = 0;
          do {
            *(short *)((longlong)puVar11 + uVar15 * 2) = (short)((char *)(lVar8 + 0x128))[uVar15];
            uVar15 = uVar15 + 1;
          } while (uVar19 != uVar15);
        }
        FUN_14020fad6(param_1[0x11] + 0x50,local_70);
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        local_78 = (undefined8 *)0x0;
        sVar12 = strlen((char *)(lVar8 + 0x152));
        iVar23 = (int)sVar12;
        uVar19 = iVar23 + 1;
        local_68 = iVar23;
        if (uVar19 < 0x81) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          FUN_1446efa72(&local_78,0,uVar19,2);
          puVar11 = local_78;
        }
        puVar27 = &local_178;
        if (puVar11 != (undefined8 *)0x0) {
          puVar27 = puVar11;
        }
        local_70 = puVar27;
        if (-1 < iVar23) {
          uVar15 = 0;
          do {
            *(short *)((longlong)puVar27 + uVar15 * 2) = (short)((char *)(lVar8 + 0x152))[uVar15];
            uVar15 = uVar15 + 1;
          } while (uVar19 != uVar15);
        }
        FUN_14020fad6(param_1[0x11] + 0x20,local_70);
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        *(ulonglong *)(param_1[0x11] + 0x60) = (ulonglong)*(uint *)(param_1[0x11] + 8) + 0x100000000
        ;
      }
      lVar8 = FUN_14795c8cc(lVar30,param_1[0xb],0x4c4d5869);
      if ((lVar8 != 0) && (param_1[0x11] != 0)) {
        local_78 = (undefined8 *)0x0;
        sVar12 = strlen((char *)(lVar8 + 8));
        iVar23 = (int)sVar12;
        uVar19 = iVar23 + 1;
        local_68 = iVar23;
        if (uVar19 < 0x81) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          FUN_1446efa72(&local_78,0,uVar19,2);
          puVar11 = local_78;
        }
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = &local_178;
        }
        local_70 = puVar11;
        if (-1 < iVar23) {
          uVar15 = 0;
          do {
            *(short *)((longlong)puVar11 + uVar15 * 2) = (short)((char *)(lVar8 + 8))[uVar15];
            uVar15 = uVar15 + 1;
          } while (uVar19 != uVar15);
        }
        FUN_140056680(local_188,local_70);
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        local_14e = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        uStack_15f = 0;
        local_158 = 0;
        uStack_157 = 0;
        local_150 = '\0';
        FUN_142afe0d0(&local_178,local_188,1);
        if (local_150 == '\x01') {
          FUN_140056680(local_198,L"SPEED");
          FUN_140056680(local_1a8,L"TIMECODE_RATE");
          FUN_140056680(&local_1b8,&DAT_149e065c6);
          FUN_140056680(local_1c8,L"TIMECODE_FLAG");
          FUN_140056680(&local_1d8,&DAT_14a390db6);
          lVar8 = FUN_14706bd36(CONCAT71(uStack_157,local_158),local_198);
          if (lVar8 != 0) {
            lVar13 = FUN_14706bd36(lVar8,local_1a8);
            if (lVar13 != 0) {
              local_1e8 = (void *)0x0;
              local_1e0 = *(int *)(lVar13 + 0x38);
              lVar28 = (longlong)local_1e0;
              pvVar5 = *(void **)(lVar13 + 0x30);
              if (lVar28 == 0) {
                local_1dc = 0;
              }
              else {
                FUN_1446dd670(&local_1e8,local_1e0,0);
                memcpy(local_1e8,pvVar5,lVar28 * 2);
              }
              local_1f8 = (undefined8 *)0x0;
              uStack_1f0 = 0;
              puVar20 = local_1b8;
              if (local_1b0 == 0) {
                puVar20 = &DAT_149dfb77a;
              }
              FUN_1403de9f2(&local_1e8,&local_1f8,puVar20,1);
              if ((int)uStack_1f0 == 2) {
                _Str = L"";
                pwVar17 = L"";
                if (*(int *)(local_1f8 + 1) != 0) {
                  pwVar17 = (wchar_t *)*local_1f8;
                }
                uVar15 = _wtoi64(pwVar17);
                if (*(int *)(local_1f8 + 3) != 0) {
                  _Str = (wchar_t *)local_1f8[2];
                }
                uVar14 = _wtoi64(_Str);
                if (((uVar15 & 0xffffffff) != 0) && ((uVar14 & 0xffffffff) != 0)) {
                  *(ulonglong *)(param_1[0x11] + 0x60) = uVar14 << 0x20 | uVar15 & 0xffffffff;
                }
              }
              FUN_1447a1747(local_1f8,uStack_1f0 & 0xffffffff);
              if (local_1f8 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              if (local_1e8 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
            lVar8 = FUN_14706bd36(lVar8,local_1c8);
            if (lVar8 != 0) {
              local_1e8 = (void *)0x0;
              local_1e0 = *(int *)(lVar8 + 0x38);
              lVar13 = (longlong)local_1e0;
              pvVar5 = *(void **)(lVar8 + 0x30);
              if (lVar13 == 0) {
                local_1dc = 0;
                iVar23 = 0;
                if (local_1d0 == 0) goto LAB_1433fd040;
LAB_1433fd039:
                if (local_1d0 + iVar23 == 1) goto LAB_1433fd040;
              }
              else {
                FUN_1446dd670(&local_1e8,local_1e0,0);
                memcpy(local_1e8,pvVar5,lVar13 * 2);
                iVar23 = local_1e0;
                if (local_1e0 != local_1d0) goto LAB_1433fd039;
                if (1 < local_1e0) {
                  lVar8 = 0;
                  while( true ) {
                    uVar21 = *(ushort *)((longlong)local_1e8 + lVar8);
                    uVar15 = (ulonglong)uVar21;
                    uVar24 = *(ushort *)(local_1d8 + lVar8);
                    if (uVar21 != uVar24) break;
                    if (uVar21 == 0) goto LAB_1433fd040;
LAB_1433fd00b:
                    lVar8 = lVar8 + 2;
                  }
                  if ((uVar24 | uVar21) < 0x80) {
                    uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                    uVar14 = (ulonglong)uVar24;
                    uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                    if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar14]) goto LAB_1433fd00b;
                  }
                  if (uVar21 != uVar24) goto LAB_1433fd04b;
                }
LAB_1433fd040:
                *(undefined1 *)(param_1[0x11] + 0x68) = 1;
              }
LAB_1433fd04b:
              if (local_1e8 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          if (local_1d8 != 0) {
            FUN_1400020a8();
          }
          if (local_1c8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_1b8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_1a8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_198[0] != 0) {
            FUN_1400020a8();
          }
        }
        FUN_14706c022(&local_178);
        if (local_188[0] != 0) {
          FUN_1400020a8();
        }
      }
      lVar8 = FUN_14795c8cc(lVar30,param_1[0xb],0x6c706d73);
      uVar15 = CONCAT71((int7)((ulonglong)lVar30 >> 8),1);
      if (lVar8 != 0) {
        local_200 = param_1 + 0xf;
        FUN_14795ccd0(local_200,*(undefined4 *)(lVar8 + 0x24));
        local_208 = lVar8;
        if (*(int *)(lVar8 + 0x24) != 0) {
          puVar25 = (undefined4 *)(lVar8 + 0x38);
          uVar14 = 0;
          plVar16 = local_200;
          do {
            uVar2 = puVar25[-3];
            uVar3 = puVar25[-1];
            uVar4 = *puVar25;
            iVar23 = (int)param_1[0x10];
            lVar30 = (longlong)iVar23;
            *(uint *)(param_1 + 0x10) = iVar23 + 1U;
            if (*(uint *)((longlong)param_1 + 0x84) < iVar23 + 1U) {
              FUN_14796a4e0(plVar16,iVar23);
              plVar16 = local_200;
              lVar8 = local_208;
            }
            lVar13 = *plVar16;
            *(undefined4 *)(lVar13 + lVar30 * 0xc) = uVar2;
            *(undefined4 *)(lVar13 + 4 + lVar30 * 0xc) = uVar3;
            *(undefined4 *)(lVar13 + 8 + lVar30 * 0xc) = uVar4;
            uVar14 = uVar14 + 1;
            puVar25 = puVar25 + 6;
          } while (uVar14 < *(uint *)(lVar8 + 0x24));
        }
      }
      goto LAB_1433fc5a7;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cacdcec) && (FUN_144b3d300(&DAT_14cacdcec), DAT_14cacdcec == -1)) {
      _DAT_14cacdce0 = 0x100000;
      _DAT_14cacdce4 = 0xaa000080;
      _DAT_14cacdce8 = 0x719b3800;
      _Init_thread_footer(&DAT_14cacdcec);
    }
    if (((*(int *)(lVar8 + 0x20) == 1) && (*(short *)(lVar8 + 0x1a) != 0)) &&
       (*(short *)(lVar8 + 0x1a) != *(short *)(lVar8 + 0x16))) {
      if (param_4 == 0) goto LAB_1433fc5a5;
      pwVar17 = L"Unsupported WAVE file format: actual bit rate does not match the container size.";
      goto LAB_1433fc59d;
    }
    if (*(int *)(lVar8 + 0x2c) == _DAT_14cacdce8 &&
        *(longlong *)(lVar8 + 0x24) == CONCAT44(_DAT_14cacdce4,_DAT_14cacdce0)) {
      param_1[5] = lVar8 + 0x20;
      goto LAB_1433fc6e0;
    }
    if (param_4 != 0) {
      pwVar17 = L"Unsupported WAVE file format: subformat identifier not recognized.";
      goto LAB_1433fc59d;
    }
  }
  else {
LAB_1433fc591:
    if (param_4 != 0) {
      pwVar17 = L"Invalid WAVE file.";
LAB_1433fc59d:
      FUN_14020fad6(param_4,pwVar17);
    }
  }
LAB_1433fc5a5:
  uVar15 = 0;
LAB_1433fc5a7:
  if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffff;
}



// FUNCTION 1433fd2aa FUN_1433fd2aa body=55 status=ok
// SIG undefined FUN_1433fd2aa(void)

void FUN_1433fd2aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacdcf8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacdcf8 = FUN_14171c317(FUN_1463ad0b6,uVar1,L"EAudioBusChannels");
  }
  return;
}



// FUNCTION 1433fd2e1 FUN_1433fd2e1 body=69 status=ok
// SIG undefined FUN_1433fd2e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fd2e1(void)

{
  _DAT_14cacdd20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fd323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdd28,1);
  return;
}



// FUNCTION 1433fd326 FUN_1433fd326 body=69 status=ok
// SIG undefined FUN_1433fd326(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fd326(void)

{
  _DAT_14cacdd30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fd368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdd38,1);
  return;
}



// FUNCTION 1433fd36b FUN_1433fd36b body=69 status=ok
// SIG undefined FUN_1433fd36b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fd36b(void)

{
  _DAT_14cacdd40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fd3ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdd48,1);
  return;
}



// FUNCTION 1433fd3be FUN_1433fd3be body=160 status=ok
// SIG undefined FUN_1433fd3be(void)

undefined8 FUN_1433fd3be(longlong *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x98))();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 1) = 1;
    return 0;
  }
  *(uint *)(param_1 + 10) = (uint)*(byte *)(param_1 + 9) * 2;
  iVar2 = (**(code **)(*param_1 + 0xc0))(param_1);
  *(int *)((longlong)param_1 + 0x4c) = iVar2;
  uVar3 = iVar2 * (int)param_1[10];
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar2 = 0;
  uVar4 = uVar3;
  if (*(uint *)((longlong)param_1 + 100) != uVar3) {
    FUN_144893a1c(param_1 + 0xb,uVar3);
    iVar2 = (int)param_1[0xc];
    uVar3 = *(uint *)((longlong)param_1 + 100);
    uVar4 = (int)param_1[10] * *(int *)((longlong)param_1 + 0x4c);
  }
  *(uint *)(param_1 + 0xc) = iVar2 + uVar4;
  if (uVar3 - iVar2 < uVar4) {
    FUN_1447403be(param_1 + 0xb);
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fd450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*param_1 + 0xa0))(param_1);
  return uVar5;
}



// FUNCTION 1433fd460 FUN_1433fd460 body=254 status=ok
// SIG undefined FUN_1433fd460(void)

undefined8 FUN_1433fd460(longlong *param_1,void *param_2,char param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_88 [32];
  void *local_68;
  uint local_60;
  int local_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = 0;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0x34);
    uVar2 = 0;
    do {
      local_68 = param_2;
      local_60 = param_4 - uVar3;
      (**(code **)(*param_1 + 0xa8))
                (param_1,&local_54,(ulonglong)uVar1 + param_1[5],(int)param_1[6] - uVar1);
      if (local_50 == 0) {
        if (param_3 == '\0') goto LAB_1433fd521;
        *(int *)((longlong)param_1 + 0x34) = (int)param_1[7];
        *(undefined4 *)((longlong)param_1 + 0x44) = 0;
        (**(code **)(*param_1 + 0xb0))(param_1);
        uVar2 = 1;
      }
      else if (local_50 < 0) {
LAB_1433fd521:
        memset(param_2,0,(ulonglong)(param_4 - uVar3));
        uVar2 = 1;
        break;
      }
      uVar3 = uVar3 + local_50;
      uVar1 = *(int *)((longlong)param_1 + 0x34) + local_54;
      *(uint *)((longlong)param_1 + 0x34) = uVar1;
      param_2 = (void *)((longlong)param_2 + (longlong)local_50);
    } while (uVar3 < param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1433fd560 FUN_1433fd560 body=224 status=ok
// SIG undefined FUN_1433fd560(void)

void FUN_1433fd560(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    return;
  }
  uVar7 = *(ulonglong *)(lVar4 + 0x10);
  plVar5 = *(longlong **)(lVar4 + 0x18);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (uVar7 != 0) {
    if (param_2 <= 0.0) {
      uVar6 = 0;
    }
    else {
      param_2 = param_2 * *(float *)(uVar7 + 0xd4);
      uVar6 = (longlong)ROUND(param_2 + param_2 + -0.5) >> 1;
      if (uVar6 >> 0x20 != 0) goto LAB_1433fd611;
    }
    piVar2 = (int *)(uVar7 + 0x20);
    if (0 < (longlong)*piVar2) {
      plVar1 = (longlong *)(uVar7 + 0x18);
      uVar7 = 0xffffffff;
      uVar8 = 0;
      do {
        uVar3 = *(uint *)(*(longlong *)(*plVar1 + uVar8 * 8) + 8);
        if (uVar3 != 0xffffffff) {
          if ((uint)uVar6 < uVar3) break;
          uVar7 = uVar8 & 0xffffffff;
        }
        uVar8 = uVar8 + 1;
      } while ((longlong)*piVar2 != uVar8);
      if (-1 < (int)(uint)uVar7) {
        LOCK();
        uVar3 = *(uint *)(param_1 + 0xc0);
        *(uint *)(param_1 + 0xc0) = (uint)uVar7;
        uVar7 = (ulonglong)uVar3;
        UNLOCK();
        *(undefined4 *)(param_1 + 0xc4) = 0;
        *(uint *)(param_1 + 200) = (uint)uVar6;
      }
    }
  }
LAB_1433fd611:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5,uVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433fd635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1433fd640 FUN_1433fd640 body=184 status=ok
// SIG undefined FUN_1433fd640(void)

undefined4 FUN_1433fd640(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  int local_2c [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = 0;
  if (*(uint *)((longlong)param_1 + 0x34) < (uint)((int)param_1[6] - (int)param_1[0x11])) {
    iVar2 = (**(code **)(*param_1 + 0xb8))(param_1);
    uVar3 = 0xffffffff;
    if (0 < iVar2) {
      uVar1 = *(uint *)((longlong)param_1 + 0x34);
      uVar4 = uVar1 + iVar2;
      if (uVar4 <= *(uint *)(param_1 + 6)) {
        *(uint *)((longlong)param_1 + 0x34) = uVar4;
        *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
        local_40 = (undefined4)param_1[0xc];
        local_48 = param_1[0xb];
        (**(code **)(*param_1 + 0xa8))(param_1,local_2c,(ulonglong)uVar1 + param_1[5],iVar2);
        if (local_2c[0] == -1) {
          uVar3 = 0xffffffff;
        }
        else {
          *(int *)((longlong)param_1 + 0x34) =
               *(int *)((longlong)param_1 + 0x34) + (local_2c[0] - iVar2);
          uVar3 = local_24;
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433fd6fa FUN_1433fd6fa body=1586 status=ok
// SIG undefined FUN_1433fd6fa(void)

ulonglong FUN_1433fd6fa(longlong *param_1,void *param_2,char param_3,ulonglong param_4,uint *param_5
                       )

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  int iVar17;
  longlong *unaff_R14;
  undefined7 uVar19;
  ulonglong uVar18;
  uint uVar20;
  ulonglong _Size;
  bool bVar21;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 *local_90;
  char local_79;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong local_60;
  int local_54;
  LARGE_INTEGER local_50;
  ulonglong local_48;
  
  param_4 = param_4 & 0xffffffff;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_79 = param_3;
  if ((int)param_1[0x18] == -1) {
LAB_1433fd736:
    if (param_1[5] == 0) {
      local_54 = 0;
      lVar13 = FUN_14795d65a(param_1,param_1 + 2,*(undefined4 *)((longlong)param_1 + 0x74));
      param_1[5] = lVar13;
      if (lVar13 == 0) {
        QueryPerformanceCounter(&local_50);
        goto LAB_1433fdb78;
      }
      *(int *)(param_1 + 6) = local_54;
      uVar9 = *(uint *)((longlong)param_1 + 0x74);
      uVar16 = 0;
      if (uVar9 == 0) {
        uVar16 = (undefined4)param_1[7];
      }
      *(undefined4 *)((longlong)param_1 + 0x34) = uVar16;
      lVar13 = *(longlong *)(param_1[2] + 0x10);
      unaff_R14 = *(longlong **)(param_1[2] + 0x18);
      if (unaff_R14 != (longlong *)0x0) {
        LOCK();
        *(int *)(unaff_R14 + 1) = (int)unaff_R14[1] + 1;
        UNLOCK();
        uVar9 = *(uint *)((longlong)param_1 + 0x74);
      }
      if (((int)uVar9 < 0) || (*(int *)(lVar13 + 0x20) <= (int)uVar9)) {
        bVar21 = false;
      }
      else {
        bVar21 = *(int *)(*(longlong *)(*(longlong *)(lVar13 + 0x18) + (ulonglong)uVar9 * 8) + 8) !=
                 -1;
      }
      if (unaff_R14 != (longlong *)0x0) {
        LOCK();
        plVar4 = unaff_R14 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*unaff_R14)(unaff_R14);
          LOCK();
          piVar1 = (int *)((longlong)unaff_R14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*unaff_R14 + 0x10))(unaff_R14);
          }
        }
      }
      if (bVar21) {
        unaff_R14 = (longlong *)((longlong)param_1 + 0x34);
        uVar14 = FUN_14795d740(param_1);
        FUN_14371c0be(param_1[5],(int)param_1[6],unaff_R14,uVar14);
      }
    }
    uVar9 = *(uint *)((longlong)param_1 + 0x6c);
    uVar8 = (int)param_1[0xd] - uVar9;
    uVar11 = (uint)param_4;
    if (uVar11 < uVar8) {
      uVar8 = uVar11;
    }
    uVar20 = (int)param_1[0xc] - uVar9;
    if (uVar8 < uVar20) {
      uVar20 = uVar8;
    }
    _Size = (ulonglong)uVar20;
    if (uVar20 != 0) {
      memcpy(param_2,(void *)((ulonglong)uVar9 + param_1[0xb]),_Size);
      uVar9 = *(int *)((longlong)param_1 + 0x6c) + uVar20;
      *(uint *)((longlong)param_1 + 0x6c) = uVar9;
      if (*(uint *)(param_1 + 0xd) <= uVar9) {
        param_1[0xd] = 0;
      }
    }
    *param_5 = uVar20;
    if (((char)param_1[0xe] == '\x01') && ((int)param_1[0xd] == 0)) {
      *(undefined1 *)(param_1 + 0xe) = 0;
      uVar18 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    }
    else {
      uVar18 = 0;
    }
    if (uVar20 < uVar11) {
      local_60 = (longlong)param_1 + 0x34;
      local_70 = param_1 + 6;
      local_78 = param_4;
      do {
        cVar7 = (**(code **)(*param_1 + 0x68))(param_1);
        iVar12 = (int)param_4;
        iVar17 = (int)_Size;
        uVar19 = (undefined7)(uVar18 >> 8);
        if (cVar7 != '\0') {
          *(undefined4 *)(param_1 + 0xd) = 0;
          memset((void *)((longlong)param_2 + _Size),0,(ulonglong)(uint)(iVar12 - iVar17));
          uVar18 = CONCAT71(uVar19,1);
          break;
        }
        iVar10 = FUN_1433fd640(param_1);
        if (iVar10 < 0) {
          local_90 = &LAB_142760e05;
          local_98 = 0xc0;
          uVar18 = 0;
          FUN_140ab9477(param_1[5],(int)param_1[6],0,&DAT_149e18840);
          *(undefined1 *)(param_1 + 1) = 1;
          *(undefined4 *)(param_1 + 0xd) = 0;
          uVar9 = iVar12 - iVar17;
LAB_1433fdba1:
          memset((void *)((longlong)param_2 + _Size),0,(ulonglong)uVar9);
          break;
        }
        uVar8 = *(uint *)(param_1 + 8);
        uVar9 = iVar10 * (uint)*(byte *)(param_1 + 9) + *(int *)((longlong)param_1 + 0x44);
        iVar6 = uVar8 - *(int *)((longlong)param_1 + 0x44);
        if (uVar9 <= uVar8) {
          iVar6 = iVar10 * (uint)*(byte *)(param_1 + 9);
        }
        if (uVar9 < uVar8) {
          uVar8 = uVar9;
        }
        *(uint *)((longlong)param_1 + 0x44) = uVar8;
        *(int *)(param_1 + 0xd) = iVar6 * 2;
        uVar9 = *(uint *)((longlong)param_1 + 0x6c);
        uVar8 = iVar6 * 2 - uVar9;
        if ((uint)(iVar12 - iVar17) < uVar8) {
          uVar8 = iVar12 - iVar17;
        }
        uVar11 = (int)param_1[0xc] - uVar9;
        if (uVar11 <= uVar8) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          memcpy((void *)(_Size + (longlong)param_2),(void *)((ulonglong)uVar9 + param_1[0xb]),
                 (ulonglong)uVar8);
          uVar9 = *(int *)((longlong)param_1 + 0x6c) + uVar8;
          *(uint *)((longlong)param_1 + 0x6c) = uVar9;
          if (*(uint *)(param_1 + 0xd) <= uVar9) {
            param_1[0xd] = 0;
          }
        }
        uVar8 = uVar8 + iVar17;
        _Size = (ulonglong)uVar8;
        *param_5 = uVar8;
        if ((uint)((int)param_1[6] - (int)param_1[0x11]) <= *(uint *)((longlong)param_1 + 0x34)) {
          if (*(int *)((longlong)param_1 + 0x74) ==
              *(int *)(*(longlong *)(param_1[2] + 0x10) + 0x20) + -1) {
            if ((int)param_1[0xd] == 0) {
              uVar18 = CONCAT71(uVar19,1);
            }
            else {
              *(undefined1 *)(param_1 + 0xe) = 1;
            }
            if (local_79 != '\0') {
              *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_1 + 0x3c);
              *(int *)((longlong)param_1 + 0x34) = (int)param_1[7];
              *(undefined4 *)((longlong)param_1 + 0x44) = 0;
              (**(code **)(*param_1 + 0xb0))(param_1);
              iVar17 = *(int *)((longlong)param_1 + 0x74);
              goto LAB_1433fd8d8;
            }
          }
          else {
            iVar17 = *(int *)((longlong)param_1 + 0x74) + 1;
            *(int *)((longlong)param_1 + 0x74) = iVar17;
            *(undefined4 *)((longlong)param_1 + 0x34) = 0;
LAB_1433fd8d8:
            lVar13 = FUN_14795d65a(param_1,param_1 + 2,iVar17,local_70);
            param_1[5] = lVar13;
            if (lVar13 != 0) {
              lVar13 = param_1[2];
              lVar3 = *(longlong *)(lVar13 + 0x10);
              plVar4 = *(longlong **)(lVar13 + 0x18);
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
              }
              iVar12 = *(int *)((longlong)param_1 + 0x74);
              if (((longlong)iVar12 < 0) || (*(int *)(lVar3 + 0x20) <= iVar12)) {
                bVar21 = false;
              }
              else {
                bVar21 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar12 * 8)
                                 + 8) != -1;
              }
              local_68 = uVar18;
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar5 = plVar4 + 1;
                *(int *)plVar5 = (int)*plVar5 + -1;
                UNLOCK();
                if ((int)*plVar5 == 0) {
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
              param_4 = local_78;
              uVar18 = local_68;
              if (bVar21) {
                uVar14 = FUN_14795d740(param_1);
                FUN_14371c0be(param_1[5],(int)param_1[6],local_60,uVar14);
                param_4 = local_78;
                uVar18 = local_68;
              }
              goto LAB_1433fd976;
            }
            *(undefined4 *)local_70 = 0;
          }
          uVar9 = iVar12 - uVar8;
          if (uVar9 != 0) {
            _Size = (ulonglong)uVar8;
            goto LAB_1433fdba1;
          }
          break;
        }
LAB_1433fd976:
      } while (uVar8 < (uint)param_4);
    }
  }
  else {
    local_50.s.LowPart = 0;
    plVar4 = param_1 + 2;
    unaff_R14 = (longlong *)FUN_14795d65a(param_1,plVar4,(int)param_1[0x18]);
    if (unaff_R14 != (longlong *)0x0) {
      if ((int)param_1[0x19] == -1) {
        param_1[5] = (longlong)unaff_R14;
        *(int *)((longlong)param_1 + 0x74) = (int)param_1[0x18];
        *(DWORD *)(param_1 + 6) = local_50.s.LowPart;
        *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0xc4);
      }
      else {
        lVar13 = *(longlong *)(*plVar4 + 0x10);
        plVar5 = *(longlong **)(*plVar4 + 0x18);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar12 = *(int *)((longlong)param_1 + 0x74);
        if (((longlong)iVar12 < 0) || (*(int *)(lVar13 + 0x20) <= iVar12)) {
          bVar21 = false;
        }
        else {
          bVar21 = *(int *)(*(longlong *)(*(longlong *)(lVar13 + 0x18) + (longlong)iVar12 * 8) + 8)
                   != -1;
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        if (bVar21) {
          local_54 = 0;
          uVar14 = FUN_14795d740(param_1);
          cVar7 = FUN_14371c0be(unaff_R14,local_50.s.LowPart,&local_54,uVar14);
          if ((cVar7 != '\0') && ((int)param_1[0x19] != -1)) {
            plVar4 = *(longlong **)(*plVar4 + 0x18);
            local_78 = param_4;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              LOCK();
              plVar5 = plVar4 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
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
            puVar15 = (undefined8 *)FUN_14795d740(param_1);
            iVar12 = (**(code **)(*(longlong *)*puVar15 + 0x10))
                               ((longlong *)*puVar15,(int)param_1[0x19]);
            param_4 = local_78;
            if (iVar12 != -1) {
              *(int *)((longlong)param_1 + 0x74) = (int)param_1[0x18];
              *(DWORD *)(param_1 + 6) = local_50.s.LowPart;
              param_1[5] = (longlong)unaff_R14;
              iVar17 = 0;
              if ((int)param_1[0x18] == 0) {
                iVar17 = (int)param_1[7];
              }
              *(int *)((longlong)param_1 + 0x34) = iVar12 + local_54 + iVar17;
              *(uint *)((longlong)param_1 + 0x44) =
                   (uint)*(byte *)(param_1 + 9) * (int)param_1[0x19];
              param_1[0xd] = 0;
              *(undefined1 *)(param_1 + 0xe) = 0;
            }
          }
        }
      }
      LOCK();
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      UNLOCK();
      *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffffffffffff;
      goto LAB_1433fd736;
    }
LAB_1433fdb78:
    if ((int)param_4 != 0) {
      memset(param_2,0,param_4 & 0xffffffff);
    }
    uVar18 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffff01;
}



// FUNCTION 1433fdd2e FUN_1433fdd2e body=496 status=ok
// SIG undefined FUN_1433fdd2e(void)

ulonglong FUN_1433fdd2e(ulonglong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined1 uStack_34;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  uVar5 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)param_1[1];
  local_18 = uVar5;
  if (plVar1 != (longlong *)0x0) {
    local_48 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    fStack_38 = 0.0;
    uStack_34 = 0;
    local_30 = 0;
    uStack_28 = 0;
    uVar8 = (ulonglong)*(uint *)(*(longlong *)(*param_1 + 0x3e0) + 0x60);
    uVar5 = (**(code **)(*plVar1 + 8))
                      (plVar1,*(undefined8 *)(*(longlong *)(*param_1 + 0x3e0) + 0x68),uVar8);
    uVar2 = *param_1;
    if ((char)uVar5 == '\0') {
      if (*(char *)(uVar2 + 0x181) == '\x02') {
        *(undefined1 *)(uVar2 + 0x181) = 1;
        *(undefined4 *)(*param_1 + 0x36c) = 0;
        uVar5 = *param_1;
        *(undefined4 *)(*(longlong *)(uVar5 + 0x3e0) + 0x60) = 0;
        lVar3 = *(longlong *)(uVar5 + 0x3e0);
        if (*(longlong *)(lVar3 + 0x68) != 0) {
          uVar5 = FUN_1400020a8();
        }
        *(undefined8 *)(lVar3 + 0x68) = 0;
        *(undefined8 *)(lVar3 + 0x70) = 0;
      }
    }
    else {
      *(undefined4 *)(uVar2 + 0x370) = uStack_40;
      *(byte *)(uVar2 + 0x34d) = *(byte *)(uVar2 + 0x34d) & 0xf3 | 8;
      *(undefined4 *)(*param_1 + 0x36c) = local_48._4_4_;
      if (0.0 < fStack_38) {
        *(float *)(*param_1 + 0x100) = fStack_38;
      }
      uVar5 = *param_1;
      if (*(char *)(uVar5 + 0x181) == '\x02') {
        uVar2 = param_1[2];
        *(int *)(uVar5 + 0x3b0) = (int)uVar2;
        if (*(longlong *)(*param_1 + 0x3a8) == 0) {
          iVar7 = (int)uVar2 * *(int *)(uVar5 + 0x36c) * 4;
          uVar6 = FUN_14001cc68(iVar7,0);
          *(undefined8 *)(*param_1 + 0x3a8) = uVar6;
          uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x10))
                            ((longlong *)param_1[1],*(undefined8 *)(*param_1 + 0x3a8),
                             CONCAT71((int7)(uVar8 >> 8),*(undefined1 *)(*param_1 + 0x183)) &
                             0xffffffffffffff01,iVar7);
        }
        else {
          uVar5 = (ulonglong)*(uint *)(*param_1 + 0x330);
        }
      }
      else {
        *(undefined4 *)(uVar5 + 0x3b4) = uStack_3c;
        uVar6 = FUN_14001cc68((longlong)*(int *)(*param_1 + 0x3b4),0);
        *(undefined8 *)(*param_1 + 0x3b8) = uVar6;
        (**(code **)(*(longlong *)param_1[1] + 0x28))
                  ((longlong *)param_1[1],*(undefined8 *)(*param_1 + 0x3b8),&local_48);
        uVar5 = *param_1;
        *(int *)(uVar5 + 0x378) = *(int *)(uVar5 + 0x378) + *(int *)(uVar5 + 0x3b4);
      }
    }
    puVar4 = (undefined8 *)param_1[1];
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = (**(code **)*puVar4)(puVar4,1);
    }
    if (local_30 != 0) {
      uVar5 = FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433fdf1f FUN_1433fdf1f body=69 status=ok
// SIG undefined FUN_1433fdf1f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fdf1f(void)

{
  _DAT_14cacdd78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fdf61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdd80,1);
  return;
}



// FUNCTION 1433fdf64 FUN_1433fdf64 body=61 status=ok
// SIG undefined FUN_1433fdf64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fdf64(void)

{
  DAT_14cacdd90 = &PTR_FUN_14a7ec080;
  _DAT_14cacdde8 = 0;
  if (DAT_14cacdde0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d0ced0(&DAT_14cacdda0);
  return;
}



// FUNCTION 1433fdfa1 FUN_1433fdfa1 body=69 status=ok
// SIG undefined FUN_1433fdfa1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fdfa1(void)

{
  _DAT_14cacddf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fdfe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacde00,1);
  return;
}



// FUNCTION 1433fdfe6 FUN_1433fdfe6 body=154 status=ok
// SIG undefined FUN_1433fdfe6(void)

void FUN_1433fdfe6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  for (lVar1 = param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_1433fe062;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  FUN_1478a75f2(lVar1 + 0x18,&uStack_30);
  FUN_1458795b4(&uStack_30);
  FUN_14795d966(*(longlong *)(param_1 + 0x3e0) + 0x10,param_2,param_1);
LAB_1433fe062:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433fe081 FUN_1433fe081 body=69 status=ok
// SIG undefined FUN_1433fe081(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe081(void)

{
  _DAT_14cacde08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe0c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacde10,1);
  return;
}



// FUNCTION 1433fe0c6 FUN_1433fe0c6 body=69 status=ok
// SIG undefined FUN_1433fe0c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe0c6(void)

{
  _DAT_14cacde20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacde28,1);
  return;
}



// FUNCTION 1433fe10b FUN_1433fe10b body=69 status=ok
// SIG undefined FUN_1433fe10b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe10b(void)

{
  _DAT_14cacde30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe14d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacde38,1);
  return;
}



// FUNCTION 1433fe150 FUN_1433fe150 body=69 status=ok
// SIG undefined FUN_1433fe150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe150(void)

{
  _DAT_14cacde48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacde50,1);
  return;
}



// FUNCTION 1433fe195 FUN_1433fe195 body=69 status=ok
// SIG undefined FUN_1433fe195(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe195(void)

{
  _DAT_14cacde60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe1d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacde68,1);
  return;
}



// FUNCTION 1433fe1da FUN_1433fe1da body=69 status=ok
// SIG undefined FUN_1433fe1da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe1da(void)

{
  _DAT_14cacde78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacde80,1);
  return;
}



// FUNCTION 1433fe21f FUN_1433fe21f body=69 status=ok
// SIG undefined FUN_1433fe21f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe21f(void)

{
  _DAT_14cacde90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe261. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacde98,1);
  return;
}



// FUNCTION 1433fe264 FUN_1433fe264 body=69 status=ok
// SIG undefined FUN_1433fe264(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe264(void)

{
  _DAT_14cacdea8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe2a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdeb0,1);
  return;
}



// FUNCTION 1433fe2a9 FUN_1433fe2a9 body=69 status=ok
// SIG undefined FUN_1433fe2a9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe2a9(void)

{
  _DAT_14cacdec0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe2eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdec8,1);
  return;
}



// FUNCTION 1433fe2ee FUN_1433fe2ee body=69 status=ok
// SIG undefined FUN_1433fe2ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe2ee(void)

{
  _DAT_14cacded0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacded8,1);
  return;
}



// FUNCTION 1433fe333 FUN_1433fe333 body=69 status=ok
// SIG undefined FUN_1433fe333(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe333(void)

{
  _DAT_14cacdee0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdee8,1);
  return;
}



// FUNCTION 1433fe378 FUN_1433fe378 body=69 status=ok
// SIG undefined FUN_1433fe378(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe378(void)

{
  _DAT_14cacdef8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe3ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdf00,1);
  return;
}



// FUNCTION 1433fe3bd FUN_1433fe3bd body=69 status=ok
// SIG undefined FUN_1433fe3bd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe3bd(void)

{
  _DAT_14cacdf10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe3ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdf18,1);
  return;
}



// FUNCTION 1433fe402 FUN_1433fe402 body=69 status=ok
// SIG undefined FUN_1433fe402(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe402(void)

{
  _DAT_14cacdf20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdf28,1);
  return;
}



// FUNCTION 1433fe447 FUN_1433fe447 body=69 status=ok
// SIG undefined FUN_1433fe447(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe447(void)

{
  _DAT_14cacdf38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe489. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdf40,1);
  return;
}



// FUNCTION 1433fe48c FUN_1433fe48c body=69 status=ok
// SIG undefined FUN_1433fe48c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe48c(void)

{
  _DAT_14cacdf50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe4ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdf58,1);
  return;
}



// FUNCTION 1433fe4d1 FUN_1433fe4d1 body=69 status=ok
// SIG undefined FUN_1433fe4d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe4d1(void)

{
  _DAT_14cacdf68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe513. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdf70,1);
  return;
}



// FUNCTION 1433fe516 FUN_1433fe516 body=69 status=ok
// SIG undefined FUN_1433fe516(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe516(void)

{
  _DAT_14cacdf78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdf80,1);
  return;
}



// FUNCTION 1433fe55b FUN_1433fe55b body=69 status=ok
// SIG undefined FUN_1433fe55b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe55b(void)

{
  _DAT_14cacdf88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe59d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdf90,1);
  return;
}



// FUNCTION 1433fe5a0 FUN_1433fe5a0 body=69 status=ok
// SIG undefined FUN_1433fe5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433fe5a0(void)

{
  _DAT_14cacdf98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433fe5e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cacdfa0,1);
  return;
}



// FUNCTION 1433fe5e6 FUN_1433fe5e6 body=3300 status=ok
// SIG undefined FUN_1433fe5e6(void)

ulonglong FUN_1433fe5e6(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 unaff_RBP;
  ulonglong uVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined2 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  int local_12c;
  float local_128;
  char local_121;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined8 uStack_10c;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar13 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if ((*(byte *)((longlong)param_1 + 0x599) & 4) == 0) {
    if (param_2 == -1) {
      uVar13 = 0;
    }
    else {
      *(int *)(param_1 + 0x12) = param_2;
      local_121 = '\0';
      iVar14 = *(int *)((longlong)param_1 + 300);
      FUN_14796a798(param_1[0x24],(int)param_1[0x25]);
      *(undefined4 *)(param_1 + 0x25) = 0;
      if ((iVar14 < 0) && (*(int *)((longlong)param_1 + 300) != 0)) {
        FUN_14796a89a(param_1 + 0x24);
      }
      (**(code **)(*param_1 + 0x1f8))(param_1,&local_d8);
      *(undefined4 *)(param_1 + 0x11) = local_c8;
      *(undefined4 *)(param_1 + 0xf) = (undefined4)local_d8;
      *(undefined4 *)((longlong)param_1 + 0x7c) = local_d8._4_4_;
      *(int *)(param_1 + 0x10) = (int)uStack_d0;
      *(undefined4 *)((longlong)param_1 + 0x84) = uStack_d0._4_4_;
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      FUN_141369f9a(&DAT_14c846b20,L"-AudioCallbackBufferFrameSize=",
                    (int *)((longlong)param_1 + 0x7c));
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      FUN_141369f9a(&DAT_14c846b20,L"-AudioNumBuffersToEnqueue=",param_1 + 0x10);
      if (param_4 != -1) {
        *(int *)((longlong)param_1 + 0x7c) = param_4;
      }
      if (param_5 == -1) {
        param_5 = (int)param_1[0x10];
      }
      uVar9 = 4;
      if (4 < (int)*(uint *)((longlong)param_1 + 0x7c)) {
        uVar9 = *(uint *)((longlong)param_1 + 0x7c);
      }
      *(uint *)((longlong)param_1 + 0x7c) = uVar9 & 0x7ffffffc;
      if (param_5 < 2) {
        param_5 = 1;
      }
      *(int *)(param_1 + 0x10) = param_5;
      if (0 < *(int *)((longlong)param_1 + 0x84)) {
        param_3 = *(int *)((longlong)param_1 + 0x84);
      }
      if (param_3 < DAT_14cacde18) {
        param_3 = DAT_14cacde18;
      }
      if (param_3 < 2) {
        param_3 = 1;
      }
      *(int *)(param_1 + 0x28) = param_3;
      *(int *)((longlong)param_1 + 0x144) = param_3;
      *(int *)(param_1 + 0x29) = param_3;
      *(int *)((longlong)param_1 + 0x74) = (int)param_1[0xf];
      local_178 = &DAT_14c872ce8;
      FUN_14052bb08(DAT_14c872ce0,L"Audio",L"DeferStartupPrecache",&local_121);
      local_128 = 0.0;
      local_178 = &DAT_14c872ce8;
      cVar7 = FUN_14153841e(DAT_14c872ce0,L"Audio",L"PlatformHeadroomDB");
      if (cVar7 != '\0') {
        fVar21 = powf(10.0,local_128 / 20.0);
        *(float *)(param_1 + 0x93) = fVar21;
      }
      local_12c = 0;
      local_178 = &DAT_14c872ce8;
      cVar7 = FUN_1414d73b6(DAT_14c872ce0,L"Audio",L"NumPrecacheFrames");
      if (cVar7 != '\0') {
        iVar14 = 0x80;
        if (local_12c < 0x80) {
          iVar14 = local_12c;
        }
        *(int *)((longlong)param_1 + 0x8c) = iVar14;
      }
      *(byte *)((longlong)param_1 + 0x592) =
           (DAT_14c76131c == 1) << 4 |
           *(byte *)((longlong)param_1 + 0x592) & 0xe7 | (DAT_14cacde40 == 0) << 3;
      plVar10 = (longlong *)FUN_145b54fcc();
      lVar12 = plVar10[0x22];
      if (lVar12 == 0) {
        (**(code **)(*plVar10 + 1000))(plVar10);
        lVar12 = plVar10[0x22];
      }
      fVar21 = *(float *)(lVar12 + 0x16c);
      if (fVar21 <= 0.0001) {
        fVar21 = 0.0001;
      }
      *(float *)((longlong)param_1 + 0xa54) = fVar21;
      fVar21 = *(float *)(lVar12 + 0x170);
      if (fVar21 <= 0.0001) {
        fVar21 = 0.0001;
      }
      *(float *)(param_1 + 0x14b) = fVar21;
      *(byte *)(param_1 + 0xb5) =
           *(byte *)(param_1 + 0xb5) & 0xfe | *(byte *)(lVar12 + 0x188) >> 2 & 1;
      *(byte *)(param_1 + 0xb6) =
           *(byte *)(param_1 + 0xb6) & 0xfd | *(char *)(lVar12 + 0x188) * '\x02' & 2U;
      *(undefined4 *)((longlong)param_1 + 0x49c) = *(undefined4 *)(lVar12 + 0x164);
      plVar10 = (longlong *)FUN_145b54fcc();
      lVar12 = plVar10[0x22];
      if (lVar12 == 0) {
        (**(code **)(*plVar10 + 1000))(plVar10);
        lVar12 = plVar10[0x22];
      }
      local_158 = *(undefined4 *)(lVar12 + 0x98);
      uStack_154 = *(undefined4 *)(lVar12 + 0x9c);
      uStack_150 = *(undefined4 *)(lVar12 + 0xa0);
      uStack_14c = *(undefined4 *)(lVar12 + 0xa4);
      local_148 = (void *)0x0;
      local_140 = *(int *)(lVar12 + 0xb0);
      lVar16 = (longlong)local_140;
      _Src = *(void **)(lVar12 + 0xa8);
      if (lVar16 == 0) {
        local_13c = 0;
      }
      else {
        FUN_1446dd670(&local_148,local_140,0);
        memcpy(local_148,_Src,lVar16 * 2);
      }
      if (CONCAT44(uStack_154,local_158) != 0) {
        FUN_14475cc44(&local_158,&local_d8);
        puVar17 = local_d8;
        if ((int)uStack_d0 == 0) {
          puVar17 = &DAT_149dfb77a;
        }
        uVar11 = FUN_14123c546();
        local_160 = 0;
        local_170 = 0;
        local_168 = 1;
        local_178 = (undefined8 *)((ulonglong)local_178 & 0xffffffff00000000);
        lVar12 = FUN_1412ecd05(uVar11,0,puVar17,0);
        if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar12);
        }
        param_1[0x7c] = lVar12;
        if (local_d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      plVar10 = (longlong *)FUN_145b0d6b4();
      lVar12 = plVar10[0x22];
      if (lVar12 == 0) {
        (**(code **)(*plVar10 + 1000))(plVar10);
        lVar12 = plVar10[0x22];
      }
      FUN_1436fb01a(lVar12);
      FUN_14795e9f8(param_1);
      uVar8 = 0;
      if ((*(byte *)((longlong)param_1 + 0x592) & 8) != 0) {
        lVar12 = (**(code **)(*param_1 + 0x220))(param_1);
        param_1[0x91] = lVar12;
        plVar10 = (longlong *)FUN_145b54fcc();
        lVar12 = plVar10[0x22];
        if (lVar12 == 0) {
          (**(code **)(*plVar10 + 1000))(plVar10);
          lVar12 = plVar10[0x22];
        }
        uVar8 = *(undefined4 *)(lVar12 + 0x18c);
      }
      *(undefined4 *)(param_1 + 0xe) = uVar8;
      lVar12 = FUN_14797484e();
      if (lVar12 != 0) {
        FUN_1479746d2(&local_118);
        lVar12 = CONCAT44(uStack_114,local_118);
        lVar16 = (longlong)iStack_110;
        if (lVar16 != 0) {
          lVar19 = 0;
          do {
            puVar15 = *(undefined8 **)(lVar12 + lVar19);
            if (puVar15 != (undefined8 *)0x0) {
              (**(code **)*puVar15)(puVar15,&local_d8);
              iVar14 = (int)uStack_d0 + -1;
              if ((int)uStack_d0 == 0) {
                iVar14 = 0;
              }
              FUN_1446f82e2(&local_120,iVar14,local_d8,1);
              uVar11 = local_120;
              if (local_d8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              FUN_14795ebaa(&local_d8,uVar11,param_1,*(undefined8 *)(lVar12 + lVar19));
              iVar14 = (int)param_1[0x17];
              *(uint *)(param_1 + 0x17) = iVar14 + 1U;
              if (*(uint *)((longlong)param_1 + 0xbc) < iVar14 + 1U) {
                FUN_14796a8ca(param_1 + 0x16,iVar14);
              }
              lVar3 = param_1[0x16];
              lVar20 = (longlong)iVar14 * 0x20;
              *(undefined2 **)(lVar3 + lVar20) = local_d8;
              *(longlong **)(lVar3 + 8 + lVar20) = uStack_d0;
              lVar6 = CONCAT44(uStack_c4,local_c8);
              *(longlong *)(lVar3 + 0x10 + lVar20) = lVar6;
              if (lVar6 != 0) {
                LOCK();
                *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
                UNLOCK();
              }
              *(undefined1 *)(lVar3 + lVar20 + 0x1c) = local_bc;
              *(undefined4 *)(lVar3 + lVar20 + 0x18) = local_c0;
              plVar10 = (longlong *)CONCAT44(uStack_c4,local_c8);
              if (plVar10 != (longlong *)0x0) {
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
            }
            lVar19 = lVar19 + 8;
          } while (lVar16 * 8 != lVar19);
          lVar12 = CONCAT44(uStack_114,local_118);
        }
        *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) | 2;
        if (lVar12 != 0) {
          FUN_1400020a8(lVar12);
        }
      }
      plVar10 = (longlong *)FUN_1479749bc();
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x30))(plVar10,&local_d8,param_1);
        plVar10 = uStack_d0;
        if (param_1 + 0x1c != &local_d8) {
          param_1[0x1c] = (longlong)local_d8;
          local_d8 = (undefined2 *)0x0;
          plVar4 = (longlong *)param_1[0x1d];
          if (uStack_d0 != plVar4) {
            uStack_d0 = (longlong *)0x0;
            param_1[0x1d] = (longlong)plVar10;
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
          }
        }
        plVar10 = uStack_d0;
        if (uStack_d0 != (longlong *)0x0) {
          LOCK();
          plVar4 = uStack_d0 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*uStack_d0)(uStack_d0);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) | 0x10;
      }
      plVar10 = (longlong *)FUN_147974c2c();
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x28))(plVar10,&local_d8,param_1);
        plVar4 = uStack_d0;
        if (param_1 + 0x1e != &local_d8) {
          param_1[0x1e] = (longlong)local_d8;
          local_d8 = (undefined2 *)0x0;
          plVar5 = (longlong *)param_1[0x1f];
          if (uStack_d0 != plVar5) {
            uStack_d0 = (longlong *)0x0;
            param_1[0x1f] = (longlong)plVar4;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar5 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
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
          }
        }
        plVar4 = uStack_d0;
        if (uStack_d0 != (longlong *)0x0) {
          LOCK();
          plVar5 = uStack_d0 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*uStack_d0)(uStack_d0);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) | 8;
        cVar7 = (**(code **)(*plVar10 + 0x10))(plVar10);
        *(byte *)((longlong)param_1 + 0x592) =
             *(byte *)((longlong)param_1 + 0x592) & 0x7f | cVar7 << 7;
      }
      plVar10 = (longlong *)FUN_147974e9c();
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x28))(plVar10,&local_d8,param_1);
        plVar4 = uStack_d0;
        if (param_1 + 0x20 != &local_d8) {
          param_1[0x20] = (longlong)local_d8;
          local_d8 = (undefined2 *)0x0;
          plVar5 = (longlong *)param_1[0x21];
          if (uStack_d0 != plVar5) {
            uStack_d0 = (longlong *)0x0;
            param_1[0x21] = (longlong)plVar4;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar4 = plVar5 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
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
          }
        }
        plVar4 = uStack_d0;
        if (uStack_d0 != (longlong *)0x0) {
          LOCK();
          plVar5 = uStack_d0 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*uStack_d0)(uStack_d0);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) | 4;
        cVar7 = (**(code **)(*plVar10 + 0x10))(plVar10);
        *(byte *)((longlong)param_1 + 0x592) =
             *(byte *)((longlong)param_1 + 0x592) & 0xbf | cVar7 << 6;
      }
      plVar10 = (longlong *)FUN_14797510c();
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,&local_d8,param_1);
        plVar10 = uStack_d0;
        if (param_1 + 0x22 != &local_d8) {
          param_1[0x22] = (longlong)local_d8;
          local_d8 = (undefined2 *)0x0;
          plVar4 = (longlong *)param_1[0x23];
          if (uStack_d0 != plVar4) {
            uStack_d0 = (longlong *)0x0;
            param_1[0x23] = (longlong)plVar10;
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
          }
        }
        plVar10 = uStack_d0;
        if (uStack_d0 != (longlong *)0x0) {
          LOCK();
          plVar4 = uStack_d0 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*uStack_d0)(uStack_d0);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)((longlong)param_1 + 0x74);
        *(int *)(param_1 + 0x19) = (int)param_1[0xe] + (int)param_1[0x28];
        *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_1 + 0x7c);
        param_1[0x1b] = (longlong)param_1;
        (**(code **)(*(longlong *)param_1[0x22] + 8))((longlong *)param_1[0x22],param_1 + 0x19);
        *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) | 0x20;
      }
      uVar9 = (**(code **)(*param_1 + 0x200))(param_1);
      uVar13 = (ulonglong)uVar9;
      if ((char)uVar9 == '\0') {
        FUN_1433ff2cc(param_1);
      }
      else {
        FUN_14795ece6(param_1);
        puVar15 = &DAT_14c846480;
        puVar18 = &local_d8;
        for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
          *puVar18 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar18 = puVar18 + 1;
        }
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        uStack_114 = 0;
        iStack_110 = 0;
        uStack_10c = 0;
        local_104 = 0;
        uStack_fc = 0;
        local_f4 = 0;
        uStack_ec = 0;
        local_e4 = 0;
        iVar14 = (int)param_1[0x3d];
        *(uint *)(param_1 + 0x3d) = iVar14 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1ec) < iVar14 + 1U) {
          FUN_14796a950(param_1 + 0x3c,iVar14);
        }
        lVar12 = param_1[0x3c];
        lVar16 = (longlong)iVar14 * 0x110;
        memcpy((void *)(lVar12 + lVar16),&local_d8,0x90);
        iVar14 = 0;
        *(undefined4 *)(lVar12 + 0x90 + lVar16) = 0;
        *(undefined1 *)(lVar12 + 0x94 + lVar16) = 0;
        puVar15 = (undefined8 *)(lVar12 + 0x98 + lVar16);
        *puVar15 = 0x3f0000003f800000;
        puVar15[1] = 0x3f000000469c4000;
        puVar15 = (undefined8 *)(lVar12 + 0xa8 + lVar16);
        *puVar15 = 0x3f0000003f800000;
        puVar15[1] = 0x3f000000469c4000;
        *(undefined4 *)(lVar12 + 0xb8 + lVar16) = 0;
        *(undefined4 *)(lVar12 + 0xc0 + lVar16) = 0;
        puVar2 = (undefined4 *)(lVar12 + 0xc4 + lVar16);
        *puVar2 = local_118;
        puVar2[1] = uStack_114;
        puVar2[2] = iStack_110;
        puVar2[3] = (undefined4)uStack_10c;
        puVar2 = (undefined4 *)(lVar12 + 0xd4 + lVar16);
        *puVar2 = uStack_10c._4_4_;
        puVar2[1] = (undefined4)local_104;
        puVar2[2] = local_104._4_4_;
        puVar2[3] = (undefined4)uStack_fc;
        puVar2 = (undefined4 *)(lVar12 + 0xe4 + lVar16);
        *puVar2 = uStack_fc._4_4_;
        puVar2[1] = (undefined4)local_f4;
        puVar2[2] = local_f4._4_4_;
        puVar2[3] = (undefined4)uStack_ec;
        puVar2 = (undefined4 *)(lVar12 + 0xf0 + lVar16);
        *puVar2 = (undefined4)uStack_ec;
        puVar2[1] = uStack_ec._4_4_;
        puVar2[2] = (undefined4)local_e4;
        puVar2[3] = local_e4._4_4_;
        *(longlong **)(lVar12 + 0x100 + lVar16) = param_1;
        FUN_14795edb0(param_1 + 0x26);
        plVar10 = param_1 + 0x148;
        uVar9 = *(uint *)((longlong)param_1 + 0xa4c);
        if ((int)uVar9 < 0) {
          *(undefined4 *)(param_1 + 0x149) = 0;
          FUN_144920e50(plVar10,0);
          iVar14 = (int)param_1[0x149];
          uVar9 = *(uint *)((longlong)param_1 + 0xa4c);
        }
        *(uint *)(param_1 + 0x149) = iVar14 + 1U;
        if (uVar9 < iVar14 + 1U) {
          FUN_140518214(plVar10,iVar14);
        }
        lVar12 = *plVar10;
        lVar16 = (longlong)iVar14 * 0x80;
        *(undefined8 *)(lVar12 + lVar16) = 0x3ff0000000000000;
        puVar15 = (undefined8 *)(lVar12 + 8 + lVar16);
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15 = (undefined8 *)(lVar12 + 0x18 + lVar16);
        *puVar15 = 0;
        puVar15[1] = 0;
        *(undefined8 *)(lVar12 + 0x28 + lVar16) = 0x3ff0000000000000;
        puVar15 = (undefined8 *)(lVar12 + 0x30 + lVar16);
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15 = (undefined8 *)(lVar12 + 0x40 + lVar16);
        *puVar15 = 0;
        puVar15[1] = 0;
        *(undefined8 *)(lVar12 + 0x50 + lVar16) = 0x3ff0000000000000;
        puVar15 = (undefined8 *)(lVar12 + 0x58 + lVar16);
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15 = (undefined8 *)(lVar12 + 0x68 + lVar16);
        *puVar15 = 0;
        puVar15[1] = 0;
        *(undefined8 *)(lVar12 + 0x78 + lVar16) = 0x3ff0000000000000;
        if (local_121 == '\0') {
          FUN_14795edec(param_1);
        }
        *(byte *)((longlong)param_1 + 0x599) = *(byte *)((longlong)param_1 + 0x599) | 4;
        FUN_14796aab4(&local_d8,param_1,FUN_14795eed6);
        FUN_145ca0b8c(&DAT_14caced90,&local_118,&local_d8);
        FUN_1401cb1ee(&local_d8);
        param_1[1] = CONCAT44(uStack_114,local_118);
        FUN_14796aab4(&local_d8,param_1,&LAB_14795ef0c);
        FUN_145ca0b8c(&DAT_14cacedd0,&local_118,&local_d8);
        FUN_1401cb1ee(&local_d8);
        param_1[2] = CONCAT44(uStack_114,local_118);
        uVar11 = FUN_140c61bfa();
        FUN_14795ef2a(uVar11,&local_d8,param_1);
        FUN_14795ef2a(&DAT_14c964740,&local_d8,param_1);
      }
      if (local_148 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 1433ff2cc FUN_1433ff2cc body=938 status=ok
// SIG undefined FUN_1433ff2cc(void)

void FUN_1433ff2cc(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,1);
  (**(code **)(*param_1 + 0x40))(param_1);
  FUN_1433ff8e6(param_1,0,1);
  puVar10 = (undefined8 *)param_1[0x91];
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)(puVar10,1);
    param_1[0x91] = 0;
  }
  if ((longlong)(int)param_1[0x25] != 0) {
    puVar10 = (undefined8 *)param_1[0x24];
    puVar8 = puVar10 + (longlong)(int)param_1[0x25] * 2;
    do {
      plVar3 = (longlong *)*puVar10;
      plVar4 = (longlong *)puVar10[1];
      if (plVar4 == (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_1);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        (**(code **)(*plVar3 + 0x30))(plVar3,param_1);
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      puVar10 = puVar10 + 2;
    } while (puVar10 != puVar8);
  }
  (**(code **)(*param_1 + 0x208))(param_1);
  FUN_14796aeae(param_1 + 0x87);
  plVar3 = param_1 + 0x3e;
  if (0 < (int)param_1[0x3f]) {
    lVar9 = 0;
    do {
      (**(code **)(**(longlong **)(*plVar3 + lVar9 * 8) + 0x40))();
      puVar10 = *(undefined8 **)(*plVar3 + lVar9 * 8);
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)param_1[0x3f]);
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (*(int *)((longlong)param_1 + 0x1fc) < 0) {
    FUN_14796b216(plVar3);
  }
  if (*(int *)((longlong)param_1 + 0x20c) < 0) {
    *(undefined4 *)(param_1 + 0x41) = 0;
    FUN_14796b216(param_1 + 0x40);
  }
  else {
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  lVar9 = param_1[0x16];
  lVar5 = param_1[0x17];
  uVar7 = 0;
  if ((longlong)(int)lVar5 != 0) {
    lVar11 = 0;
    do {
      plVar3 = *(longlong **)(lVar9 + 8 + lVar11);
      plVar4 = *(longlong **)(lVar9 + 0x10 + lVar11);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      lVar11 = lVar11 + 0x20;
    } while ((longlong)(int)lVar5 * 0x20 != lVar11);
    uVar7 = (undefined4)param_1[0x17];
    lVar9 = param_1[0x16];
  }
  FUN_14796a74f(lVar9,uVar7);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (*(int *)((longlong)param_1 + 0xbc) != 0) {
    FUN_14796b246(param_1 + 0x16);
  }
  *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xfd;
  if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1e] + 0x10))();
    param_1[0x1e] = 0;
    plVar3 = (longlong *)param_1[0x1f];
    if (plVar3 != (longlong *)0x0) {
      param_1[0x1f] = 0;
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
    }
    *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xf7;
  }
  if (param_1[0x1c] != 0) {
    param_1[0x1c] = 0;
    plVar3 = (longlong *)param_1[0x1d];
    if (plVar3 != (longlong *)0x0) {
      param_1[0x1d] = 0;
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
    }
    *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xef;
  }
  if ((longlong *)param_1[0x20] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x20] + 0x10))();
    param_1[0x20] = 0;
    plVar3 = (longlong *)param_1[0x21];
    if (plVar3 != (longlong *)0x0) {
      param_1[0x21] = 0;
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
    }
    *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xfb;
  }
  param_1[0x22] = 0;
  plVar3 = (longlong *)param_1[0x23];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x23] = 0;
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
  }
  *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xdf;
  iVar2 = *(int *)((longlong)param_1 + 300);
  FUN_14796a798(param_1[0x24],(int)param_1[0x25]);
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((iVar2 < 0) && (*(int *)((longlong)param_1 + 300) != 0)) {
    FUN_14796a89a(param_1 + 0x24);
  }
  uVar6 = FUN_140c61bfa();
  FUN_140457ffc(uVar6,param_1);
  FUN_140457ffc(&DAT_14c964740,param_1);
  return;
}



// FUNCTION 1433ff676 FUN_1433ff676 body=142 status=ok
// SIG undefined FUN_1433ff676(void)

void FUN_1433ff676(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14795ff92(DAT_14c951640);
  lVar2 = *(longlong *)(param_1 + 0x210);
  if (lVar1 == 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_1433ff6df;
    }
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
  }
  else {
    if (lVar2 == lVar1) goto LAB_1433ff6df;
    if ((lVar2 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar1);
  }
  *(longlong *)(param_1 + 0x210) = lVar1;
  lVar2 = lVar1;
LAB_1433ff6df:
  *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_1 + 0x90);
  FUN_14036c39e(param_1 + 0x218,*(undefined8 *)(param_1 + 0x210));
  return;
}



// FUNCTION 1433ff704 FUN_1433ff704 body=256 status=ok
// SIG undefined FUN_1433ff704(void)

void FUN_1433ff704(longlong param_1,int param_2)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  int local_78;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  int local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 < 1) || (*(int *)(param_1 + 0x140) < param_2)) goto LAB_1433ff731;
  cVar2 = FUN_146269f19();
  if (cVar2 != '\0') {
    local_58 = 0;
    local_48 = &PTR_LAB_14a7ec8b0;
    local_68 = &LAB_14340a022;
    local_40 = param_1;
    local_38 = param_2;
    FUN_1434130f2();
  }
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 != 1) goto LAB_1433ff731;
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 != DVar4) goto LAB_1433ff731;
    }
  }
  local_98 = 0;
  local_88 = &PTR_LAB_14a7ec8d0;
  local_a8 = &LAB_14340a064;
  local_80 = param_1;
  local_78 = param_2;
  FUN_1415826cc();
LAB_1433ff731:
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433ff806 FUN_1433ff806 body=223 status=ok
// SIG undefined FUN_1433ff806(void)

void FUN_1433ff806(longlong param_1,float param_2)

{
  char cVar1;
  float fVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  float local_78;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  float local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar1 = FUN_146269f19();
  if (cVar1 == '\0') {
    *(float *)(param_1 + 0x150) = param_2;
    local_58 = 0;
    local_48 = &PTR_LAB_14a7ec8f0;
    local_68 = &LAB_14340a0a6;
    local_40 = param_1;
    local_38 = param_2;
    FUN_1415826cc();
  }
  else {
    fVar2 = param_2;
    if (1.0 <= param_2) {
      fVar2 = 1.0;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *(float *)(param_1 + 0x14c) = fVar2;
    local_98 = 0;
    local_88 = &PTR_LAB_14a7ec910;
    local_a8 = &LAB_14340a0fa;
    local_80 = param_1;
    local_78 = param_2;
    FUN_1434130f2();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433ff8e6 FUN_1433ff8e6 body=1649 status=ok
// SIG undefined FUN_1433ff8e6(void)

void FUN_1433ff8e6(longlong *param_1,longlong param_2,char param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStack_188 [35];
  char local_165;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong local_128 [2];
  uint local_118 [4];
  uint *local_108;
  int local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  cVar4 = FUN_146269f19();
  if (cVar4 == '\0') {
    local_78 = 0;
    local_68 = &PTR_LAB_14a7ecc50;
    local_88 = &LAB_14340b090;
    local_60 = param_1;
    local_58 = param_2;
    FUN_1415826cc();
    local_128[0] = 0;
    FUN_14340dba2(local_128);
    FUN_14340da64(local_128,0);
    *(undefined4 *)(param_1 + 0x27) = 0;
    if (*(int *)((longlong)param_1 + 0x13c) < 0) {
      FUN_147971a5a(param_1 + 0x26);
    }
    FUN_14795edb0(param_1 + 0x26);
    FUN_14340cba6(local_128);
  }
  else {
    iVar5 = (int)param_1[0xc3];
    local_165 = param_3;
    if (0 < (longlong)iVar5) {
      iVar14 = -iVar5;
      uVar13 = (longlong)iVar5;
      do {
        cVar4 = FUN_1436feda2(*(undefined8 *)(param_1[0xc2] + -8 + uVar13 * 8),1);
        if (cVar4 != '\0') {
          uVar7 = *(uint *)(param_1 + 0xc3);
          if (uVar13 != uVar7) {
            iVar5 = iVar14 + uVar7;
            if (0 < (int)(iVar14 + uVar7)) {
              iVar5 = 1;
            }
            memmove((void *)(param_1[0xc2] + uVar13 * 8 + -8),
                    (void *)(param_1[0xc2] + (longlong)(int)(uVar7 - iVar5) * 8),
                    (longlong)iVar5 << 3);
            uVar7 = *(uint *)(param_1 + 0xc3);
          }
          *(uint *)(param_1 + 0xc3) = uVar7 - 1;
        }
        iVar14 = iVar14 + 1;
        bVar21 = 1 < uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar21);
    }
    if (param_2 == 0) {
      (**(code **)(*param_1 + 0x40))(param_1);
    }
    uVar13 = 0;
    bVar21 = false;
    if (0 < (longlong)(int)param_1[0xb8]) {
      uVar15 = (longlong)(int)param_1[0xb8] + 1;
      bVar12 = false;
      do {
        lVar8 = *(longlong *)(param_1[0xb7] + -0x10 + uVar15 * 8);
        if ((param_2 == 0) ||
           ((bVar21 = true, (*(byte *)(lVar8 + 0x199) & 0x20) == 0 &&
            (((((*(int *)(lVar8 + 0xc) == 0 || (uVar7 = *(uint *)(lVar8 + 8), (int)uVar7 < 0)) ||
               (DAT_14c9647dc <= (int)uVar7)) ||
              ((plVar19 = (longlong *)
                          ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
               plVar19 == (longlong *)0x0 || ((int)plVar19[2] != *(int *)(lVar8 + 0xc))))) ||
             (((*(uint *)(plVar19 + 1) & 0x10200000) != 0 ||
              ((*plVar19 == 0 || (bVar21 = bVar12, *plVar19 == param_2)))))))))) {
          FUN_14796095e(param_1);
          bVar21 = bVar12;
        }
        uVar15 = uVar15 - 1;
        bVar12 = bVar21;
      } while (1 < uVar15);
    }
    local_108 = (uint *)0x0;
    local_100 = 0;
    local_128[0] = 0;
    local_128[1] = 0;
    local_fc = 0xffffffff00000080;
    local_f4 = 0;
    local_e8 = 0;
    local_e0 = 0;
    FUN_147965bfc(local_128,param_1 + 0xc6);
    iVar14 = local_100;
    uVar15 = 1;
    iVar20 = 0;
    iVar5 = 0;
    if (local_100 != 0) {
      puVar6 = local_108;
      if (local_108 == (uint *)0x0) {
        puVar6 = local_118;
      }
      uVar7 = *puVar6;
      if (uVar7 == 0) {
        iVar5 = local_100 + 0x1e;
        if (-1 < local_100 + -1) {
          iVar5 = local_100 + -1;
        }
        uVar13 = 0;
        uVar15 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar15 = uVar13;
        }
        iVar20 = 0;
        do {
          if (uVar15 == uVar13) goto LAB_1433ffbab;
          iVar20 = iVar20 + 0x20;
          uVar7 = puVar6[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar7 == 0);
      }
      else {
        uVar13 = 0;
      }
      uVar15 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar15 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar5 = (iVar20 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (local_100 <= iVar5) {
        iVar5 = local_100;
      }
    }
    if (iVar5 != local_100) {
      uVar7 = 0xffffffff;
      do {
        FUN_14796095e(param_1,*(undefined8 *)(local_128[0] + (longlong)iVar5 * 0x28));
        uVar7 = ~(uint)uVar15 & uVar7;
        puVar6 = local_108;
        if (local_108 == (uint *)0x0) {
          puVar6 = local_118;
        }
        iVar5 = (int)uVar13;
        lVar8 = (longlong)iVar5;
        uVar18 = puVar6[lVar8] & uVar7;
        if (uVar18 == 0) {
          iVar10 = local_100 + 0x1e;
          if (-1 < local_100 + -1) {
            iVar10 = local_100 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar20 = iVar20 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar5) {
            iVar11 = iVar5;
          }
          if (iVar5 < iVar10) {
            lVar17 = 0;
            do {
              uVar18 = puVar6[lVar8 + lVar17 + 1];
              if (uVar18 != 0) {
                uVar13 = (ulonglong)(iVar5 + (int)lVar17 + 1);
                uVar7 = 0xffffffff;
                goto LAB_1433ffc8d;
              }
              iVar20 = iVar20 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar11 - lVar8 != lVar17);
            uVar7 = 0xffffffff;
            lVar8 = (longlong)iVar11;
          }
          uVar13 = lVar8 + 1U & 0xffffffff;
          iVar5 = local_100;
        }
        else {
LAB_1433ffc8d:
          uVar15 = (ulonglong)(-uVar18 & uVar18);
          uVar1 = uVar15 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar5 = (iVar20 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (local_100 <= iVar5) {
            iVar5 = local_100;
          }
        }
      } while (iVar5 != iVar14);
    }
LAB_1433ffbab:
    local_e0 = 0;
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    FUN_1479653ae(local_128);
    if (param_2 == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = (*(byte *)(param_2 + 0x155) & 0x20) >> 5;
    }
    FUN_14340572a(param_1,bVar9);
    uVar7 = *(uint *)((longlong)param_1 + 0x1ec);
    iVar5 = 0;
    *(undefined4 *)(param_1 + 0x3d) = 0;
    if ((int)uVar7 < 0) {
      FUN_147971a8a(param_1 + 0x3c);
      iVar5 = (int)param_1[0x3d];
      uVar7 = *(uint *)((longlong)param_1 + 0x1ec);
    }
    plVar19 = &DAT_14c846480;
    plVar16 = local_128;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *plVar16 = *plVar19;
      plVar19 = plVar19 + 1;
      plVar16 = plVar16 + 1;
    }
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_98 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    *(uint *)(param_1 + 0x3d) = iVar5 + 1U;
    if (uVar7 < iVar5 + 1U) {
      FUN_14796a950(param_1 + 0x3c,iVar5);
    }
    lVar8 = param_1[0x3c];
    lVar17 = (longlong)iVar5 * 0x110;
    memcpy((void *)(lVar8 + lVar17),local_128,0x94);
    *(undefined1 *)(lVar8 + 0x94 + lVar17) = 0;
    puVar2 = (undefined8 *)(lVar8 + 0x98 + lVar17);
    *puVar2 = 0x3f0000003f800000;
    puVar2[1] = 0x3f000000469c4000;
    puVar2 = (undefined8 *)(lVar8 + 0xa8 + lVar17);
    *puVar2 = 0x3f0000003f800000;
    puVar2[1] = 0x3f000000469c4000;
    *(undefined4 *)(lVar8 + 0xb8 + lVar17) = 0;
    *(undefined4 *)(lVar8 + 0xc0 + lVar17) = 0;
    puVar3 = (undefined4 *)(lVar8 + 0xc4 + lVar17);
    *puVar3 = uStack_164;
    puVar3[1] = (undefined4)local_160;
    puVar3[2] = local_160._4_4_;
    puVar3[3] = (undefined4)uStack_158;
    puVar3 = (undefined4 *)(lVar8 + 0xd4 + lVar17);
    *puVar3 = uStack_158._4_4_;
    puVar3[1] = (undefined4)local_150;
    puVar3[2] = local_150._4_4_;
    puVar3[3] = (undefined4)uStack_148;
    puVar3 = (undefined4 *)(lVar8 + 0xe4 + lVar17);
    *puVar3 = uStack_148._4_4_;
    puVar3[1] = (undefined4)local_140;
    puVar3[2] = local_140._4_4_;
    puVar3[3] = (undefined4)uStack_138;
    puVar3 = (undefined4 *)(lVar8 + 0xf0 + lVar17);
    *puVar3 = (undefined4)uStack_138;
    puVar3[1] = uStack_138._4_4_;
    puVar3[2] = (undefined4)local_130;
    puVar3[3] = local_130._4_4_;
    *(longlong **)(lVar8 + 0x100 + lVar17) = param_1;
    uVar13 = CONCAT71((int7)((ulonglong)lVar17 >> 8),local_165);
    if (local_165 != '\0') {
      FUN_147971aba(param_1 + 0x94);
      *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xfe;
    }
    if (param_2 == 0) {
      iVar5 = (int)param_1[0x3f];
      if (bVar21) {
        if (0 < iVar5) {
          lVar8 = 0;
          do {
            plVar19 = *(longlong **)(param_1[0x3e] + lVar8 * 8);
            lVar17 = plVar19[2];
            if ((lVar17 == 0) || ((*(byte *)(*(longlong *)(lVar17 + 0x60) + 0x199) & 0x20) == 0)) {
              (**(code **)(*plVar19 + 0x38))();
              iVar5 = (int)param_1[0x3f];
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 < iVar5);
        }
      }
      else {
        if (0 < iVar5) {
          lVar8 = 0;
          do {
            (**(code **)(**(longlong **)(param_1[0x3e] + lVar8 * 8) + 0x38))();
            lVar8 = lVar8 + 1;
          } while (lVar8 < (int)param_1[0x3f]);
        }
        FUN_147971c42(param_1 + 0x5d);
      }
      if (*(int *)((longlong)param_1 + 0x5d4) < 0) {
        *(undefined4 *)(param_1 + 0xba) = 0;
        FUN_147971dca(param_1 + 0xb9);
      }
      else {
        *(undefined4 *)(param_1 + 0xba) = 0;
      }
    }
    (**(code **)(*param_1 + 0x218))(param_1);
    (**(code **)(*param_1 + 0x58))(param_1,0);
    (**(code **)(*param_1 + 0x50))(param_1,param_2,uVar13 & 0xffffffff);
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433fff58 FUN_1433fff58 body=402 status=ok
// SIG undefined FUN_1433fff58(void)

void FUN_1433fff58(longlong param_1,byte param_2,byte param_3)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  byte local_38;
  byte local_37;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = FUN_146269f19();
  if (cVar3 == '\0') {
    local_58 = 0;
    local_48 = &PTR_LAB_14a7ecaf0;
    local_68 = &LAB_14340ab94;
    local_40 = param_1;
    local_38 = param_2;
    local_37 = param_3;
    FUN_1415826cc();
  }
  else {
    if (param_2 == 0) {
      if ((((*(byte *)(param_1 + 0x592) & 1) == 0 & (param_3 ^ 1)) == 0) &&
         (0 < *(int *)(param_1 + 0x1f8))) {
        lVar5 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1f0) + lVar5 * 8);
          bVar1 = *(byte *)(plVar2 + 0x12);
          if (((bVar1 & 2) == 0) &&
             (((param_3 != 0 || ((plVar2[2] != 0 && ((*(byte *)(plVar2[2] + 0xcd) & 0x20) == 0))))
              && (*(byte *)(plVar2 + 0x12) = bVar1 | 2, (bVar1 & 8) == 0)))) {
            (**(code **)(*plVar2 + 0xa8))();
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(param_1 + 0x1f8));
      }
    }
    else if (((*(byte *)(param_1 + 0x592) & (param_3 ^ 1)) == 0) && (0 < *(int *)(param_1 + 0x1f8)))
    {
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1f0) + lVar5 * 8);
        bVar1 = *(byte *)(plVar2 + 0x12);
        if (((bVar1 & 2) != 0) &&
           ((param_3 != 0 || ((plVar2[2] != 0 && ((*(byte *)(plVar2[2] + 0xcd) & 0x20) == 0)))))) {
          *(byte *)(plVar2 + 0x12) = bVar1 & 0xfd;
          if ((bVar1 & 8) == 0) {
            lVar4 = 0xa8;
            if ((bVar1 & 4) != 0) {
LAB_1433fffff:
              (**(code **)(*plVar2 + lVar4))();
            }
          }
          else {
            lVar4 = 0x30;
            if ((bVar1 & 4) == 0) goto LAB_1433fffff;
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x1f8));
    }
    *(byte *)(param_1 + 0x592) = *(byte *)(param_1 + 0x592) & 0xfe | param_2;
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434000f0 FUN_1434000f0 body=533 status=ok
// SIG undefined FUN_1434000f0(void)

void FUN_1434000f0(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  bool bVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  int local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  bVar10 = true;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 != 1) goto LAB_14340014e;
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    bVar10 = DVar3 == DVar4;
  }
  if ((param_2 == 0) && (bVar10)) {
    plVar5 = (longlong *)FUN_145b54fcc();
    lVar6 = plVar5[0x22];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      lVar6 = plVar5[0x22];
    }
    local_88 = *(undefined4 *)(lVar6 + 0x98);
    uStack_84 = *(undefined4 *)(lVar6 + 0x9c);
    uStack_80 = *(undefined4 *)(lVar6 + 0xa0);
    uStack_7c = *(undefined4 *)(lVar6 + 0xa4);
    local_78 = (void *)0x0;
    local_70 = *(int *)(lVar6 + 0xb0);
    lVar8 = (longlong)local_70;
    _Src = *(void **)(lVar6 + 0xa8);
    if (lVar8 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,_Src,lVar8 * 2);
    }
    if (CONCAT44(uStack_84,local_88) == 0) {
      param_2 = 0;
    }
    else {
      FUN_14475cc44(&local_88,&local_98);
      puVar9 = local_98;
      if (local_90 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      uVar7 = FUN_14123c546();
      local_a0 = 0;
      local_b0 = 0;
      local_a8 = 1;
      local_b8 = 0;
      param_2 = FUN_1412ecd05(uVar7,0,puVar9,0);
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14340014e:
  cVar2 = FUN_146269f19();
  if (cVar2 == '\0') {
    local_58 = 0;
    local_48 = &PTR_LAB_14a7ec930;
    local_68 = &LAB_14340a140;
    local_40 = param_1;
    local_38 = param_2;
    FUN_1415826cc();
  }
  else {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x3e0) = param_2;
    FUN_143400306(param_1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143400306 FUN_143400306 body=665 status=ok
// SIG undefined FUN_143400306(void)

void FUN_143400306(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_f8 [40];
  ulonglong local_d0;
  ulonglong local_c8 [9];
  ulonglong *local_80;
  ulonglong *local_78;
  int local_6c;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar3 = FUN_146269f19();
  if (cVar3 == '\0') {
    local_58 = 0;
    local_48 = &PTR_LAB_14a7eca10;
    local_68 = &LAB_14340a958;
    local_40 = param_1;
    local_38 = param_2;
    FUN_1415826cc();
    goto LAB_143400412;
  }
  if ((param_2 == 0) || (uVar2 = *(ulonglong *)(param_1 + 0x3d8), uVar2 == param_2))
  goto LAB_143400412;
  *(ulonglong *)(param_1 + 0x3d8) = param_2;
  if (uVar2 != 0) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar2);
    }
    local_c8[0] = uVar2;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar2);
    }
    uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    iVar5 = FUN_14796d41c((longlong *)(param_1 + 1000),uVar4 >> 0x10 ^ uVar4,local_c8);
    if (iVar5 == -1) {
      lVar6 = 0;
    }
    else {
      lVar6 = (longlong)iVar5 * 0x50 + *(longlong *)(param_1 + 1000);
    }
    puVar7 = (undefined1 *)(lVar6 + 8);
    if (lVar6 == 0) {
      puVar7 = (undefined1 *)0x0;
    }
    *puVar7 = 0;
    FUN_14796053c(param_1,uVar2);
  }
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  local_c8[0] = param_2;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(param_2);
  }
  plVar1 = (longlong *)(param_1 + 1000);
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(param_2);
  }
  uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_14796d41c(plVar1,uVar4 >> 0x10 ^ uVar4,local_c8);
  if (iVar5 == -1) {
LAB_143400504:
    local_c8[6] = 0;
    local_c8[7] = 0;
    local_c8[4] = 0;
    local_c8[5] = 0;
    local_c8[2] = 0;
    local_c8[3] = 0;
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_d0 = param_2;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    local_80 = &local_d0;
    local_78 = local_c8;
    FUN_14796d4f0(plVar1,&local_6c);
    puVar7 = (undefined1 *)(*(longlong *)(param_1 + 1000) + (longlong)local_6c * 0x50 + 8);
    FUN_143401160(param_1,param_2,puVar7);
    if (*(longlong *)(param_1 + 0x488) != 0) {
      FUN_14340e162(*(longlong *)(param_1 + 0x488),param_2,0,0);
    }
  }
  else {
    if (*plVar1 + (longlong)iVar5 * 0x50 == 0) goto LAB_143400504;
    puVar7 = (undefined1 *)(*plVar1 + (longlong)iVar5 * 0x50 + 8);
  }
  *puVar7 = 1;
LAB_143400412:
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434005a0 FUN_1434005a0 body=297 status=ok
// SIG undefined FUN_1434005a0(void)

void FUN_1434005a0(longlong param_1,longlong param_2,float *param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  float *pfVar9;
  
  if ((longlong)*(int *)(param_2 + 0x1c8) != 0) {
    puVar8 = *(ulonglong **)(param_2 + 0x1c0);
    puVar1 = puVar8 + *(int *)(param_2 + 0x1c8);
    do {
      uVar4 = *puVar8;
      if (*(int *)(param_1 + 0x340) != *(int *)(param_1 + 0x36c)) {
        uVar5 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        lVar7 = *(longlong *)(param_1 + 0x378);
        if (*(longlong *)(param_1 + 0x378) == 0) {
          lVar7 = param_1 + 0x370;
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)
                                 (*(int *)(param_1 + 0x380) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
        if (iVar6 != -1) {
          do {
            lVar7 = *(longlong *)(param_1 + 0x338) + (longlong)iVar6 * 0x1a8;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x338) + (longlong)iVar6 * 0x1a8) == uVar4)
            goto LAB_143400657;
            iVar6 = *(int *)(lVar7 + 0x1a0);
          } while (iVar6 != -1);
        }
      }
      lVar7 = 0;
LAB_143400657:
      pfVar9 = (float *)(lVar7 + 8);
      if (lVar7 == 0) {
        pfVar9 = (float *)0x0;
      }
      if ((uVar4 != 0) && (pfVar9 != (float *)0x0)) {
        *pfVar9 = *param_3 * *pfVar9;
        pfVar9[1] = param_3[1] * pfVar9[1];
        bVar2 = *(byte *)(param_3 + 8);
        bVar3 = *(byte *)(pfVar9 + 8);
        *(byte *)(pfVar9 + 8) = bVar2 & 4 | bVar3;
        *(byte *)(pfVar9 + 8) = bVar2 & 4 | bVar3 & 0xf7 | (bVar3 | *(byte *)(param_3 + 8)) & 8;
        FUN_1434005a0(param_1);
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar1);
  }
  return;
}



// FUNCTION 1434006ca FUN_1434006ca body=2406 status=ok
// SIG undefined FUN_1434006ca(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1434006ca(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
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
  undefined8 *puVar14;
  undefined8 *puVar15;
  code **ppcVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint *puVar20;
  int iVar21;
  undefined8 *puVar22;
  uint uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  undefined8 *puVar30;
  int iVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  bool bVar34;
  float fVar35;
  undefined1 auStack_428 [32];
  code *local_408 [2];
  undefined8 local_3f8;
  undefined **local_3e8;
  longlong local_3e0;
  code *local_3c8 [2];
  undefined8 *local_3b8;
  longlong local_388;
  longlong local_380;
  undefined4 local_378 [6];
  undefined4 local_360;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_428;
  if (*(int *)(param_1 + 0x4d4) < *(int *)(param_1 + 0x4a8)) {
    FUN_14796bfae((longlong *)(param_1 + 0x4a0));
    uVar23 = *(int *)(param_1 + 0x4a8) - *(int *)(param_1 + 0x4d4);
    if (1 < (int)uVar23) {
      lVar1 = *(longlong *)(param_1 + 0x4a0);
      memset(local_378,0,0x2f0);
      local_380 = (ulonglong)uVar23 * 0x38 + lVar1 + -0x38;
      local_388 = lVar1;
      fVar35 = logf((float)(int)uVar23);
      local_378[0] = (int)(longlong)(fVar35 + fVar35);
      plVar17 = &local_388;
      do {
        puVar19 = (undefined8 *)*plVar17;
        puVar22 = (undefined8 *)plVar17[1];
        iVar28 = (int)plVar17[2];
        iVar31 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar19) >> 3) * -0x49249249;
        uVar23 = iVar31 + 1;
        puVar15 = puVar22;
        puVar32 = puVar19;
        if (iVar28 != 0) {
LAB_1434007fc:
          if (8 < (int)uVar23) {
            uVar25 = (ulonglong)(uVar23 >> 1);
            uVar2 = puVar19[uVar25 * 7 + 6];
            uVar3 = puVar19[uVar25 * 7];
            uVar4 = (puVar19 + uVar25 * 7)[1];
            uVar5 = puVar19[uVar25 * 7 + 2];
            uVar6 = (puVar19 + uVar25 * 7 + 2)[1];
            uVar7 = puVar19[uVar25 * 7 + 4];
            uVar8 = (puVar19 + uVar25 * 7 + 4)[1];
            puVar19[uVar25 * 7 + 6] = puVar19[6];
            uVar9 = *puVar19;
            uVar10 = puVar19[1];
            uVar11 = puVar19[2];
            uVar12 = puVar19[3];
            uVar13 = puVar19[5];
            puVar19[uVar25 * 7 + 4] = puVar19[4];
            (puVar19 + uVar25 * 7 + 4)[1] = uVar13;
            puVar19[uVar25 * 7 + 2] = uVar11;
            (puVar19 + uVar25 * 7 + 2)[1] = uVar12;
            puVar19[uVar25 * 7] = uVar9;
            (puVar19 + uVar25 * 7)[1] = uVar10;
            puVar19[6] = uVar2;
            puVar19[4] = uVar7;
            puVar19[5] = uVar8;
            puVar19[2] = uVar5;
            puVar19[3] = uVar6;
            *puVar19 = uVar3;
            puVar19[1] = uVar4;
            puVar30 = puVar15 + 7;
            puVar18 = puVar19;
            do {
              puVar14 = puVar18 + 7;
              puVar26 = puVar18 + 7;
              do {
                puVar18 = puVar26;
                puVar33 = puVar14;
                if (puVar15 < puVar18) break;
                puVar14 = puVar33 + 7;
                puVar26 = puVar18 + 7;
              } while (*(float *)(puVar19 + 5) < *(float *)(puVar18 + 5) ||
                       *(float *)(puVar19 + 5) == *(float *)(puVar18 + 5));
              puVar14 = puVar30 + -0xe;
              do {
                puVar26 = puVar30;
                puVar24 = puVar14;
                puVar30 = puVar26 + -7;
                if (puVar30 <= puVar19) break;
                puVar14 = puVar24 + -7;
              } while (*(float *)(puVar26 + -2) < *(float *)(puVar19 + 5) ||
                       *(float *)(puVar26 + -2) == *(float *)(puVar19 + 5));
              if (puVar30 < puVar18) goto LAB_143400989;
              uVar2 = puVar18[6];
              uVar3 = *puVar18;
              uVar4 = puVar18[1];
              uVar5 = puVar18[2];
              uVar6 = puVar18[3];
              uVar7 = puVar18[4];
              uVar8 = puVar18[5];
              puVar18[6] = puVar26[-1];
              uVar9 = *puVar30;
              uVar10 = puVar26[-6];
              uVar11 = puVar26[-5];
              uVar12 = puVar26[-4];
              uVar13 = puVar26[-2];
              puVar18[4] = puVar26[-3];
              puVar18[5] = uVar13;
              puVar18[2] = uVar11;
              puVar18[3] = uVar12;
              *puVar18 = uVar9;
              puVar18[1] = uVar10;
              puVar26[-1] = uVar2;
              puVar26[-3] = uVar7;
              puVar26[-2] = uVar8;
              puVar26[-5] = uVar5;
              puVar26[-4] = uVar6;
              *puVar30 = uVar3;
              puVar26[-6] = uVar4;
            } while( true );
          }
          for (; puVar32 = puVar19, puVar22 = puVar19, puVar19 < puVar15; puVar15 = puVar15 + -7) {
            while (puVar30 = puVar32, puVar22 = puVar22 + 7, puVar22 <= puVar15) {
              puVar32 = puVar22;
              if (*(float *)(puVar30 + 5) < *(float *)(puVar22 + 5) ||
                  *(float *)(puVar30 + 5) == *(float *)(puVar22 + 5)) {
                puVar32 = puVar30;
              }
            }
            local_58 = puVar30[6];
            local_88 = *puVar30;
            uStack_80 = puVar30[1];
            local_78 = puVar30[2];
            uStack_70 = puVar30[3];
            local_68 = puVar30[4];
            uStack_60 = puVar30[5];
            uVar7 = local_88;
            uVar8 = uStack_80;
            puVar30[6] = puVar15[6];
            uVar2 = *puVar15;
            uVar3 = puVar15[1];
            uVar4 = puVar15[2];
            uVar5 = puVar15[3];
            uVar6 = puVar15[5];
            puVar30[4] = puVar15[4];
            puVar30[5] = uVar6;
            puVar30[2] = uVar4;
            puVar30[3] = uVar5;
            *puVar30 = uVar2;
            puVar30[1] = uVar3;
            puVar15[6] = local_58;
            local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
            uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
            puVar15[4] = local_68;
            puVar15[5] = uStack_60;
            puVar15[2] = local_78;
            puVar15[3] = uStack_70;
            *(undefined4 *)puVar15 = (undefined4)local_88;
            *(undefined4 *)((longlong)puVar15 + 4) = local_88._4_4_;
            *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_80._4_4_;
            local_88 = uVar7;
            uStack_80 = uVar8;
          }
          goto LAB_143400ee9;
        }
LAB_143400aa2:
        if (uVar23 != 0) {
          iVar28 = (iVar31 - (iVar31 + -1 >> 0x1f)) + -1 >> 1;
          iVar31 = iVar28;
joined_r0x000143400ac9:
          do {
            iVar29 = iVar28 * 2 + 1;
            if (iVar29 < (int)uVar23) {
              iVar21 = iVar28 * 2 + 2;
              if ((iVar21 < (int)uVar23) &&
                 (*(float *)(puVar19 + (longlong)iVar21 * 7 + 5) <
                  *(float *)(puVar19 + (longlong)iVar29 * 7 + 5) ||
                  *(float *)(puVar19 + (longlong)iVar21 * 7 + 5) ==
                  *(float *)(puVar19 + (longlong)iVar29 * 7 + 5))) {
                iVar29 = iVar21;
              }
              if (*(float *)(puVar19 + (longlong)iVar29 * 7 + 5) <=
                  *(float *)(puVar19 + (longlong)iVar28 * 7 + 5) &&
                  *(float *)(puVar19 + (longlong)iVar28 * 7 + 5) !=
                  *(float *)(puVar19 + (longlong)iVar29 * 7 + 5)) {
                puVar15 = puVar19 + (longlong)iVar28 * 7;
                puVar22 = puVar19 + (longlong)iVar29 * 7;
                local_58 = puVar15[6];
                local_88 = *puVar15;
                uStack_80 = puVar15[1];
                local_78 = puVar15[2];
                uStack_70 = puVar15[3];
                local_68 = puVar15[4];
                uStack_60 = puVar15[5];
                uVar7 = local_88;
                uVar8 = uStack_80;
                puVar15[6] = puVar22[6];
                uVar2 = *puVar22;
                uVar3 = puVar22[1];
                uVar4 = puVar22[2];
                uVar5 = puVar22[3];
                uVar6 = puVar22[5];
                puVar15[4] = puVar22[4];
                puVar15[5] = uVar6;
                puVar15[2] = uVar4;
                puVar15[3] = uVar5;
                *puVar15 = uVar2;
                puVar15[1] = uVar3;
                puVar22[6] = local_58;
                local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                puVar22[4] = local_68;
                puVar22[5] = uStack_60;
                puVar22[2] = local_78;
                puVar22[3] = uStack_70;
                *(undefined4 *)puVar22 = (undefined4)local_88;
                *(undefined4 *)((longlong)puVar22 + 4) = local_88._4_4_;
                *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_80;
                *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_80._4_4_;
                iVar28 = iVar29;
                local_88 = uVar7;
                uStack_80 = uVar8;
                goto joined_r0x000143400ac9;
              }
            }
            bVar34 = iVar31 != 0;
            iVar28 = iVar31 + -1;
            iVar31 = iVar28;
          } while (bVar34);
          if (1 < (int)uVar23) {
            uVar25 = (ulonglong)uVar23 - 1;
            local_58 = puVar19[6];
            local_88 = *puVar19;
            uStack_80 = puVar19[1];
            local_78 = puVar19[2];
            uStack_70 = puVar19[3];
            local_68 = puVar19[4];
            uStack_60 = puVar19[5];
            uVar7 = local_88;
            uVar8 = uStack_80;
            puVar19[6] = puVar19[uVar25 * 7 + 6];
            uVar2 = puVar19[uVar25 * 7];
            uVar3 = (puVar19 + uVar25 * 7)[1];
            uVar4 = puVar19[uVar25 * 7 + 2];
            uVar5 = (puVar19 + uVar25 * 7 + 2)[1];
            uVar6 = (puVar19 + uVar25 * 7 + 4)[1];
            puVar19[4] = puVar19[uVar25 * 7 + 4];
            puVar19[5] = uVar6;
            puVar19[2] = uVar4;
            puVar19[3] = uVar5;
            *puVar19 = uVar2;
            puVar19[1] = uVar3;
            puVar19[uVar25 * 7 + 6] = local_58;
            local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
            uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
            puVar19[uVar25 * 7 + 4] = local_68;
            (puVar19 + uVar25 * 7 + 4)[1] = uStack_60;
            puVar19[uVar25 * 7 + 2] = local_78;
            (puVar19 + uVar25 * 7 + 2)[1] = uStack_70;
            puVar15 = puVar19 + uVar25 * 7;
            *(undefined4 *)puVar15 = (undefined4)local_88;
            *(undefined4 *)((longlong)puVar15 + 4) = local_88._4_4_;
            *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_80._4_4_;
            local_88 = uVar7;
            uStack_80 = uVar8;
            if (uVar23 != 2) {
              do {
                iVar28 = 0;
                iVar29 = 1;
                iVar31 = 0;
                do {
                  iVar28 = iVar28 + 2;
                  iVar21 = iVar29;
                  if (((longlong)iVar28 < (longlong)uVar25) &&
                     (*(float *)(puVar19 + (longlong)iVar28 * 7 + 5) <
                      *(float *)(puVar19 + (longlong)iVar29 * 7 + 5) ||
                      *(float *)(puVar19 + (longlong)iVar28 * 7 + 5) ==
                      *(float *)(puVar19 + (longlong)iVar29 * 7 + 5))) {
                    iVar21 = iVar28;
                  }
                  if (*(float *)(puVar19 + (longlong)iVar31 * 7 + 5) <
                      *(float *)(puVar19 + (longlong)iVar21 * 7 + 5) ||
                      *(float *)(puVar19 + (longlong)iVar31 * 7 + 5) ==
                      *(float *)(puVar19 + (longlong)iVar21 * 7 + 5)) break;
                  puVar22 = puVar19 + (longlong)iVar31 * 7;
                  puVar15 = puVar19 + (longlong)iVar21 * 7;
                  uVar2 = puVar22[6];
                  uVar3 = *puVar22;
                  uVar4 = puVar22[1];
                  uVar5 = puVar22[2];
                  uVar6 = puVar22[3];
                  uVar7 = puVar22[4];
                  uVar8 = puVar22[5];
                  puVar22[6] = puVar15[6];
                  uVar9 = *puVar15;
                  uVar10 = puVar15[1];
                  uVar11 = puVar15[2];
                  uVar12 = puVar15[3];
                  uVar13 = puVar15[5];
                  puVar22[4] = puVar15[4];
                  puVar22[5] = uVar13;
                  puVar22[2] = uVar11;
                  puVar22[3] = uVar12;
                  *puVar22 = uVar9;
                  puVar22[1] = uVar10;
                  puVar15[6] = uVar2;
                  puVar15[4] = uVar7;
                  puVar15[5] = uVar8;
                  puVar15[2] = uVar5;
                  puVar15[3] = uVar6;
                  *puVar15 = uVar3;
                  puVar15[1] = uVar4;
                  iVar28 = iVar21 * 2;
                  iVar29 = iVar21 * 2 + 1;
                  iVar31 = iVar21;
                } while ((longlong)iVar29 < (longlong)uVar25);
                uVar27 = uVar25 - 1;
                local_58 = puVar19[6];
                local_88 = *puVar19;
                uStack_80 = puVar19[1];
                local_78 = puVar19[2];
                uStack_70 = puVar19[3];
                local_68 = puVar19[4];
                uStack_60 = puVar19[5];
                uVar7 = local_88;
                uVar8 = uStack_80;
                puVar19[6] = puVar19[uVar27 * 7 + 6];
                uVar2 = puVar19[uVar27 * 7];
                uVar3 = (puVar19 + uVar27 * 7)[1];
                uVar4 = puVar19[uVar27 * 7 + 2];
                uVar5 = (puVar19 + uVar27 * 7 + 2)[1];
                uVar6 = (puVar19 + uVar27 * 7 + 4)[1];
                puVar19[4] = puVar19[uVar27 * 7 + 4];
                puVar19[5] = uVar6;
                puVar19[2] = uVar4;
                puVar19[3] = uVar5;
                *puVar19 = uVar2;
                puVar19[1] = uVar3;
                puVar19[uVar27 * 7 + 6] = local_58;
                local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                puVar19[uVar27 * 7 + 4] = local_68;
                (puVar19 + uVar27 * 7 + 4)[1] = uStack_60;
                puVar19[uVar27 * 7 + 2] = local_78;
                (puVar19 + uVar27 * 7 + 2)[1] = uStack_70;
                puVar15 = puVar19 + uVar27 * 7;
                *(undefined4 *)puVar15 = (undefined4)local_88;
                *(undefined4 *)((longlong)puVar15 + 4) = local_88._4_4_;
                *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_80;
                *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_80._4_4_;
                bVar34 = 2 < uVar25;
                uVar25 = uVar27;
                local_88 = uVar7;
                uStack_80 = uVar8;
              } while (bVar34);
            }
          }
        }
LAB_143400ee9:
        plVar17 = plVar17 + -3;
      } while (&local_388 <= plVar17);
    }
    FUN_14796bdd4();
    iVar28 = *(int *)(param_1 + 0x4c8);
    iVar31 = 0;
    if (iVar28 != 0) {
      puVar20 = (uint *)(param_1 + 0x4b0);
      if (*(uint **)(param_1 + 0x4c0) != (uint *)0x0) {
        puVar20 = *(uint **)(param_1 + 0x4c0);
      }
      uVar23 = *puVar20;
      if (uVar23 == 0) {
        iVar31 = iVar28 + 0x1e;
        if (-1 < iVar28 + -1) {
          iVar31 = iVar28 + -1;
        }
        uVar27 = 0;
        uVar25 = (ulonglong)(uint)(iVar31 >> 5);
        if (iVar31 >> 5 < 1) {
          uVar25 = uVar27;
        }
        iVar29 = 0x3e;
        do {
          iVar31 = iVar28;
          if (uVar25 == uVar27) goto LAB_143400f82;
          uVar23 = puVar20[uVar27 + 1];
          uVar27 = uVar27 + 1;
          iVar29 = iVar29 + 0x20;
        } while (uVar23 == 0);
      }
      else {
        iVar29 = 0x3e;
      }
      uVar25 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar31 = iVar29 - ((uint)lVar1 ^ 0x3f);
      if (iVar28 <= iVar31) {
        iVar31 = iVar28;
      }
    }
LAB_143400f82:
    lVar1 = *(longlong *)(param_1 + 0x4a0) + (longlong)iVar31 * 0x38;
    local_388 = param_1;
    FUN_1479610d0(&local_380,lVar1 + 8);
    local_360 = *(undefined4 *)(lVar1 + 0x28);
    local_3c8[0] = (code *)0x0;
    puVar15 = (undefined8 *)FUN_14001cc68(0x38,8);
    *puVar15 = &PTR_LAB_14a7ec950;
    puVar15[1] = local_388;
    local_3b8 = puVar15;
    FUN_1479610d0(puVar15 + 2,&local_380);
    *(undefined4 *)(puVar15 + 6) = local_360;
    if (puVar15 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_3c8[0] = FUN_14340a184;
    }
    ppcVar16 = local_3c8;
  }
  else {
    ppcVar16 = local_408;
    local_3f8 = 0;
    local_3e8 = &PTR_LAB_14a7ec970;
    local_408[0] = FUN_14340a25a;
    local_3e0 = param_1;
  }
  FUN_1415826cc(ppcVar16);
  if ((local_48 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143400989:
  local_58 = puVar19[6];
  local_88 = *puVar19;
  uStack_80 = puVar19[1];
  local_78 = puVar19[2];
  uStack_70 = puVar19[3];
  local_68 = puVar19[4];
  uStack_60 = puVar19[5];
  uVar7 = local_88;
  uVar8 = uStack_80;
  puVar19[6] = puVar26[-1];
  uVar2 = *puVar30;
  uVar3 = puVar26[-6];
  uVar4 = puVar26[-5];
  uVar5 = puVar26[-4];
  uVar6 = puVar26[-2];
  puVar19[4] = puVar26[-3];
  puVar19[5] = uVar6;
  puVar19[2] = uVar4;
  puVar19[3] = uVar5;
  *puVar19 = uVar2;
  puVar19[1] = uVar3;
  puVar26[-1] = local_58;
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  puVar26[-3] = local_68;
  puVar26[-2] = uStack_60;
  puVar26[-5] = local_78;
  puVar26[-4] = uStack_70;
  *(undefined4 *)puVar30 = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar26 + -0x34) = local_88._4_4_;
  *(undefined4 *)(puVar26 + -6) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)puVar26 + -0x2c) = uStack_80._4_4_;
  iVar28 = iVar28 + -1;
  puVar26 = puVar26 + -0xe;
  local_88 = uVar7;
  uStack_80 = uVar8;
  if ((longlong)puVar24 - (longlong)puVar32 < (longlong)puVar22 - (longlong)puVar33) {
    if (puVar18 < puVar15) {
      *plVar17 = (longlong)puVar18;
      plVar17[1] = (longlong)puVar15;
      *(int *)(plVar17 + 2) = iVar28;
      plVar17 = plVar17 + 3;
    }
    puVar22 = puVar24;
    puVar33 = puVar19;
    if (puVar30 <= puVar19 + 7) goto LAB_143400ee9;
  }
  else {
    if (puVar19 + 7 < puVar30) {
      *plVar17 = (longlong)puVar19;
      plVar17[1] = (longlong)puVar26;
      *(int *)(plVar17 + 2) = iVar28;
      plVar17 = plVar17 + 3;
    }
    puVar19 = puVar18;
    puVar26 = puVar15;
    puVar22 = puVar15;
    if (puVar15 <= puVar18) goto LAB_143400ee9;
  }
  iVar31 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar33) >> 3) * -0x49249249;
  uVar23 = iVar31 + 1;
  puVar15 = puVar26;
  puVar32 = puVar33;
  if (iVar28 == 0) goto LAB_143400aa2;
  goto LAB_1434007fc;
}



// FUNCTION 143401032 FUN_143401032 body=302 status=ok
// SIG undefined FUN_143401032(void)

void FUN_143401032(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x340) != *(int *)(param_1 + 0x36c)) {
    uVar1 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar4 = param_1 + 0x370;
    if (*(longlong *)(param_1 + 0x378) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x378);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x380) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar2 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x338) + (longlong)iVar2 * 0x1a8;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x338) + (longlong)iVar2 * 0x1a8) == param_3)
        goto LAB_1434010c9;
        iVar2 = *(int *)(lVar4 + 0x1a0);
      } while (iVar2 != -1);
    }
  }
  lVar4 = 0;
LAB_1434010c9:
  pfVar3 = (float *)(lVar4 + 8);
  if (lVar4 == 0) {
    pfVar3 = (float *)0x0;
  }
  if ((param_3 != 0) && (pfVar3 != (float *)0x0)) {
    *pfVar3 = *(float *)(param_2 + 8) * *pfVar3;
    pfVar3[1] = *(float *)(param_2 + 0xc) * pfVar3[1];
    pfVar3[5] = *(float *)(param_2 + 0x18) * pfVar3[5];
    if (*(float *)(param_2 + 0x10) < pfVar3[2]) {
      pfVar3[2] = *(float *)(param_2 + 0x10);
    }
    iVar2 = *(int *)(param_3 + 0x1c8);
    if (0 < iVar2) {
      lVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_3 + 0x1c0) + lVar4 * 8) != 0) {
          FUN_143401032(param_1,param_2);
          iVar2 = *(int *)(param_3 + 0x1c8);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar2);
    }
  }
  return;
}



// FUNCTION 143401160 FUN_143401160 body=148 status=ok
// SIG undefined FUN_143401160(void)

void FUN_143401160(longlong param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  
  if (param_3 != 0) {
    dVar1 = *(double *)(param_1 + 0x5a0);
    *(double *)(param_3 + 0x10) = dVar1;
    dVar1 = (double)*(float *)(param_2 + 0x80) + dVar1;
    *(double *)(param_3 + 0x18) = dVar1;
    dVar1 = (double)*(float *)(param_2 + 0x84) + dVar1;
    *(double *)(param_3 + 0x20) = dVar1;
    *(undefined8 *)(param_3 + 0x28) = 0xbff0000000000000;
    *(undefined8 *)(param_3 + 0x30) = 0xbff0000000000000;
    if (0.0 <= *(float *)(param_2 + 0x88)) {
      dVar1 = dVar1 + (double)*(float *)(param_2 + 0x88);
      *(double *)(param_3 + 0x28) = dVar1;
      *(double *)(param_3 + 0x30) = (double)*(float *)(param_2 + 0x8c) + dVar1;
    }
    *(undefined4 *)(param_3 + 0x38) = 0;
    FUN_1434011f4();
    return;
  }
  return;
}



// FUNCTION 1434011f4 FUN_1434011f4 body=1974 status=ok
// SIG undefined FUN_1434011f4(void)

void FUN_1434011f4(longlong param_1,ulonglong param_2,float param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  ulonglong local_e0;
  uint *local_d8;
  int local_cc;
  ulonglong local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != 0) {
    if (1.0 <= param_3) {
      param_3 = 1.0;
    }
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    if (*(int *)(param_1 + 0x440) != *(int *)(param_1 + 0x46c)) {
      uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      lVar12 = param_1 + 0x470;
      if (*(longlong *)(param_1 + 0x478) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x478);
      }
      iVar17 = *(int *)(lVar12 + (ulonglong)
                                 (*(int *)(param_1 + 0x480) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
      if (iVar17 != -1) {
        lVar12 = *(longlong *)(param_1 + 0x438);
LAB_1434012bd:
        lVar1 = lVar12 + (longlong)iVar17 * 0x60;
        if (*(ulonglong *)(lVar12 + (longlong)iVar17 * 0x60) != param_2) goto code_r0x0001434012d6;
        plVar13 = (longlong *)(param_2 + 0x70);
        bVar3 = true;
        if ((longlong *)(lVar1 + 8) != (longlong *)0x0 && lVar1 != 0) {
          plVar13 = (longlong *)(param_1 + 0x680);
          local_e8 = (longlong *)(lVar1 + 8);
          local_c0 = (longlong *)(param_1 + 0x438);
          FUN_14796090e(plVar13);
          iVar17 = *(int *)(param_1 + 0x688);
          if ((longlong)iVar17 != 0) {
            lVar12 = *(longlong *)(param_1 + 0x680);
            lVar19 = 0;
            do {
              if (*(longlong *)(lVar12 + lVar19) != 0) {
                *(float *)(lVar12 + 8 + lVar19) =
                     (*(float *)(lVar12 + 8 + lVar19) * param_3 + 1.0) - param_3;
                *(float *)(lVar12 + 0xc + lVar19) =
                     (*(float *)(lVar12 + 0xc + lVar19) * param_3 + 1.0) - param_3;
                *(float *)(lVar12 + 0x18 + lVar19) =
                     (*(float *)(lVar12 + 0x18 + lVar19) * param_3 + 1.0) - param_3;
                uVar22 = FUN_1479607f0(*(undefined4 *)(lVar12 + 0x10 + lVar19),param_3);
                *(undefined4 *)(lVar12 + 0x10 + lVar19) = uVar22;
              }
              lVar19 = lVar19 + 0x20;
            } while ((longlong)iVar17 * 0x20 != lVar19);
          }
          local_d8 = (uint *)(lVar1 + 0x18);
          local_98 = 0;
          uStack_90 = 0;
          uVar4 = *(uint *)(lVar1 + 0x30);
          if (uVar4 == 0) {
            uVar21 = 1;
            uVar16 = 0;
            iVar17 = 0;
            uVar5 = 0;
LAB_1434016e1:
            if (uVar5 != uVar4) {
              uVar18 = 0xffffffff;
              plVar10 = local_e8;
              local_c8 = (ulonglong)uVar4;
              do {
                uVar2 = uStack_90;
                lVar12 = *plVar10;
                lVar7 = (longlong)(int)uVar5 * 0x70;
                lVar19 = *(longlong *)(lVar12 + 8 + lVar7);
                local_cc = iVar17;
                if ((*(byte *)(lVar12 + 100 + lVar7) & 8) == 0) {
                  lVar12 = lVar12 + lVar7 + 8;
                  if ((longlong)*(int *)(param_1 + 0x688) != 0) {
                    plVar10 = *(longlong **)(param_1 + 0x680);
                    lVar7 = (longlong)*(int *)(param_1 + 0x688) << 5;
                    do {
                      if (*plVar10 == lVar19) {
                        FUN_143401d12(plVar10,lVar12,param_4);
                        plVar10 = local_e8;
                        goto LAB_143401827;
                      }
                      plVar10 = plVar10 + 4;
                      lVar7 = lVar7 + -0x20;
                    } while (lVar7 != 0);
                  }
                  local_b8 = 0;
                  local_b0 = &DAT_3f8000003f800000;
                  uStack_a8 = CONCAT35(uStack_a8._5_3_,CONCAT14(uStack_a8._4_1_,0x469c4000)) &
                              0xfffffffeffffffff;
                  local_a0 = 1.0;
                  local_e0 = uVar16;
                  FUN_143401d12(&local_b8,lVar12,param_4);
                  iVar17 = *(int *)(param_1 + 0x688);
                  *(uint *)(param_1 + 0x688) = iVar17 + 1U;
                  if (*(uint *)(param_1 + 0x68c) < iVar17 + 1U) {
                    FUN_14796c962(plVar13,iVar17);
                  }
                  lVar12 = *plVar13;
                  *(ulonglong *)(lVar12 + (longlong)iVar17 * 0x20) = local_b8;
                  if ((local_b8 != 0 & DAT_14c950c29) == 1) {
                    FUN_1456cec3c();
                  }
                  lVar12 = lVar12 + (longlong)iVar17 * 0x20;
                  *(float *)(lVar12 + 0x18) = local_a0;
                  *(undefined4 *)(lVar12 + 8) = (undefined4)local_b0;
                  *(undefined4 *)(lVar12 + 0xc) = local_b0._4_4_;
                  *(undefined4 *)(lVar12 + 0x10) = (undefined4)uStack_a8;
                  *(undefined4 *)(lVar12 + 0x14) = uStack_a8._4_4_;
                  uVar16 = local_e0;
                  plVar10 = local_e8;
                }
                else {
                  lVar12 = (longlong)(int)uStack_90;
                  uVar4 = (int)uStack_90 + 1;
                  uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
                  if (uStack_90._4_4_ < uVar4) {
                    local_e0 = uVar16;
                    FUN_14796c188(&local_98,uVar2 & 0xffffffff);
                    uVar16 = local_e0;
                    plVar10 = local_e8;
                  }
                  *(longlong *)(local_98 + lVar12 * 8) = lVar19;
                }
LAB_143401827:
                lVar12 = local_98;
                uVar18 = uVar18 & ~(uint)uVar21;
                puVar6 = *(uint **)(lVar1 + 0x28);
                if (*(uint **)(lVar1 + 0x28) == (uint *)0x0) {
                  puVar6 = local_d8;
                }
                uVar4 = *(uint *)(lVar1 + 0x30);
                iVar15 = (int)uVar16;
                lVar19 = (longlong)iVar15;
                uVar5 = puVar6[lVar19] & uVar18;
                iVar17 = local_cc;
                if (uVar5 == 0) {
                  iVar8 = uVar4 + 0x1e;
                  if (-1 < (int)(uVar4 - 1)) {
                    iVar8 = uVar4 - 1;
                  }
                  iVar8 = iVar8 >> 5;
                  iVar17 = local_cc + 0x20;
                  iVar9 = iVar8;
                  if (iVar8 < iVar15) {
                    iVar9 = iVar15;
                  }
                  if (iVar15 < iVar8) {
                    lVar7 = 0;
                    do {
                      uVar5 = puVar6[lVar19 + lVar7 + 1];
                      if (uVar5 != 0) {
                        uVar16 = (ulonglong)(iVar15 + (int)lVar7 + 1);
                        uVar18 = 0xffffffff;
                        goto LAB_1434018b8;
                      }
                      iVar17 = iVar17 + 0x20;
                      lVar7 = lVar7 + 1;
                    } while (iVar9 - lVar19 != lVar7);
                    uVar18 = 0xffffffff;
                    iVar15 = iVar9;
                  }
                  uVar16 = (ulonglong)(iVar15 + 1);
                  plVar10 = local_e8;
                  uVar5 = uVar4;
                }
                else {
LAB_1434018b8:
                  uVar21 = (ulonglong)(-uVar5 & uVar5);
                  uVar2 = uVar21 * 2 + 1;
                  lVar19 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                    }
                  }
                  uVar5 = (iVar17 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
                  if ((int)uVar4 <= (int)uVar5) {
                    uVar5 = uVar4;
                  }
                }
              } while (uVar5 != (uint)local_c8);
              lVar19 = (longlong)(int)uStack_90;
              if (lVar19 != 0) {
                lVar7 = 0;
                do {
                  FUN_14796c9e8(plVar10,*(undefined8 *)(lVar12 + lVar7));
                  if (*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c)) {
                    FUN_14796cb38(local_c0,param_2);
                  }
                  lVar7 = lVar7 + 8;
                  plVar10 = local_e8;
                } while (lVar19 * 8 != lVar7);
              }
              if (local_98 != 0) {
                FUN_1400020a8(local_98);
              }
            }
          }
          else {
            puVar6 = *(uint **)(lVar1 + 0x28);
            if (*(uint **)(lVar1 + 0x28) == (uint *)0x0) {
              puVar6 = local_d8;
            }
            uVar5 = *puVar6;
            if (uVar5 != 0) {
              uVar16 = 0;
              iVar17 = 0;
LAB_1434016aa:
              uVar21 = (ulonglong)(-uVar5 & uVar5);
              uVar2 = uVar21 * 2 + 1;
              lVar12 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              uVar5 = (iVar17 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
              if ((int)uVar4 <= (int)uVar5) {
                uVar5 = uVar4;
              }
              goto LAB_1434016e1;
            }
            iVar17 = uVar4 + 0x1e;
            if (-1 < (int)(uVar4 - 1)) {
              iVar17 = uVar4 - 1;
            }
            uVar16 = 0;
            uVar21 = (ulonglong)(uint)(iVar17 >> 5);
            if (iVar17 >> 5 < 1) {
              uVar21 = uVar16;
            }
            iVar17 = 0;
            while (uVar21 != uVar16) {
              iVar17 = iVar17 + 0x20;
              uVar5 = puVar6[uVar16 + 1];
              uVar16 = uVar16 + 1;
              if (uVar5 != 0) goto LAB_1434016aa;
            }
          }
          bVar3 = false;
        }
        goto LAB_1434012e9;
      }
    }
LAB_1434012df:
    plVar13 = (longlong *)(param_2 + 0x70);
    bVar3 = true;
LAB_1434012e9:
    if ((longlong)(int)plVar13[1] != 0) {
      puVar14 = (ulonglong *)*plVar13;
      puVar20 = puVar14 + (longlong)(int)plVar13[1] * 4;
      do {
        uVar16 = *puVar14;
        if (uVar16 != 0) {
          if ((*(byte *)((longlong)puVar14 + 0x14) & 1) == 0) {
            if (*(int *)(param_1 + 0x340) != *(int *)(param_1 + 0x36c)) {
              uVar4 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
              uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
              lVar12 = *(longlong *)(param_1 + 0x378);
              if (*(longlong *)(param_1 + 0x378) == 0) {
                lVar12 = param_1 + 0x370;
              }
              iVar17 = *(int *)(lVar12 + (ulonglong)
                                         (*(int *)(param_1 + 0x380) - 1U & (uVar4 >> 0x10 ^ uVar4))
                                         * 4);
              if (iVar17 != -1) {
                do {
                  lVar12 = *(longlong *)(param_1 + 0x338) + (longlong)iVar17 * 0x1a8;
                  if (*(ulonglong *)(*(longlong *)(param_1 + 0x338) + (longlong)iVar17 * 0x1a8) ==
                      uVar16) {
                    if ((lVar12 + 8U & 0xfffffffffffffff7) != 0) {
                      if (bVar3) {
                        *(float *)(lVar12 + 8) =
                             ((*(float *)(puVar14 + 1) * param_3 + 1.0) - param_3) *
                             *(float *)(lVar12 + 8);
                        *(float *)(lVar12 + 0xc) =
                             ((*(float *)((longlong)puVar14 + 0xc) * param_3 + 1.0) - param_3) *
                             *(float *)(lVar12 + 0xc);
                        *(float *)(lVar12 + 0x1c) =
                             ((*(float *)(puVar14 + 3) * param_3 + 1.0) - param_3) *
                             *(float *)(lVar12 + 0x1c);
                        fVar23 = (float)FUN_1479607f0((int)puVar14[2],param_3);
                      }
                      else {
                        *(float *)(lVar12 + 8) = *(float *)(puVar14 + 1) * *(float *)(lVar12 + 8);
                        *(float *)(lVar12 + 0xc) =
                             *(float *)((longlong)puVar14 + 0xc) * *(float *)(lVar12 + 0xc);
                        *(float *)(lVar12 + 0x1c) =
                             *(float *)(puVar14 + 3) * *(float *)(lVar12 + 0x1c);
                        fVar23 = *(float *)(puVar14 + 2);
                      }
                      if (fVar23 < *(float *)(lVar12 + 0x10)) {
                        *(float *)(lVar12 + 0x10) = fVar23;
                      }
                    }
                    break;
                  }
                  iVar17 = *(int *)(lVar12 + 0x1a0);
                } while (iVar17 != -1);
              }
            }
          }
          else {
            puVar11 = puVar14;
            if (bVar3) {
              local_b8 = uVar16;
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(uVar16);
              }
              uStack_a8 = puVar14[2];
              local_b0 = (undefined1 *)
                         CONCAT44((*(float *)((longlong)puVar14 + 0xc) * param_3 + 1.0) - param_3,
                                  (*(float *)(puVar14 + 1) * param_3 + 1.0) - param_3);
              local_a0 = (*(float *)(puVar14 + 3) * param_3 + 1.0) - param_3;
              uVar22 = FUN_1479607f0((int)puVar14[2],param_3);
              uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar22);
              uVar16 = *puVar14;
              puVar11 = &local_b8;
            }
            FUN_143401032(param_1,puVar11,uVar16);
          }
        }
        puVar14 = puVar14 + 4;
      } while (puVar14 != puVar20);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001434012d6:
  iVar17 = *(int *)(lVar1 + 0x58);
  if (iVar17 == -1) goto LAB_1434012df;
  goto LAB_1434012bd;
}



// FUNCTION 1434019ac FUN_1434019ac body=508 status=ok
// SIG undefined FUN_1434019ac(void)

void FUN_1434019ac(longlong param_1,ulonglong param_2,char param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_118 [40];
  ulonglong local_f0;
  ulonglong local_e8 [9];
  ulonglong *local_a0;
  ulonglong *local_98;
  int local_8c;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != 0) {
    cVar2 = FUN_146269f19();
    if (cVar2 == '\0') {
      local_78 = 0;
      local_68 = &PTR_LAB_14a7eca30;
      local_88 = &LAB_14340a99c;
      local_60 = param_1;
      local_58 = param_2;
      local_50 = param_3;
      FUN_1415826cc();
    }
    else {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      local_e8[0] = param_2;
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      plVar1 = (longlong *)(param_1 + 1000);
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      iVar4 = FUN_14796d41c(plVar1,uVar3 >> 0x10 ^ uVar3,local_e8);
      if ((iVar4 == -1) || (lVar5 = (longlong)iVar4 * 0x50 + *plVar1, lVar5 == 0)) {
        local_e8[6] = 0;
        local_e8[7] = 0;
        local_e8[4] = 0;
        local_e8[5] = 0;
        local_e8[2] = 0;
        local_e8[3] = 0;
        local_e8[0] = 0;
        local_e8[1] = 0;
        local_f0 = param_2;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(param_2);
        }
        local_a0 = &local_f0;
        local_98 = local_e8;
        FUN_14796d4f0(plVar1,&local_8c);
        lVar5 = *(longlong *)(param_1 + 1000) + (longlong)local_8c * 0x50 + 8;
        FUN_143401160(param_1,param_2,lVar5);
        if (*(longlong *)(param_1 + 0x488) != 0) {
          FUN_14340e162(*(longlong *)(param_1 + 0x488),param_2,0,0);
        }
      }
      else {
        lVar5 = lVar5 + 8;
        FUN_1479603aa(param_1,param_2,lVar5);
      }
      if (param_4 == '\0') {
        if (param_3 == '\0') {
          *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        }
        else {
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143401baa FUN_143401baa body=336 status=ok
// SIG undefined FUN_143401baa(void)

void FUN_143401baa(longlong param_1,ulonglong param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    cVar1 = FUN_146269f19();
    if (cVar1 == '\0') {
      local_58 = 0;
      local_48 = &PTR_LAB_14a7eca90;
      local_68 = &LAB_14340aacc;
      local_40 = param_1;
      local_38 = param_2;
      local_30 = param_3;
      FUN_1415826cc();
    }
    else {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      local_70 = param_2;
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      iVar3 = FUN_14796d41c((longlong *)(param_1 + 1000),uVar2 >> 0x10 ^ uVar2,&local_70);
      if (iVar3 != -1) {
        lVar4 = (longlong)iVar3 * 0x50 + *(longlong *)(param_1 + 1000);
        if (lVar4 != -8 && lVar4 != 0) {
          if (param_3 == '\0') {
            if (*(int *)(lVar4 + 0xc) != 0) {
              *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + -1;
            }
          }
          else if (*(int *)(lVar4 + 0x10) != 0) {
            *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143401d12 FUN_143401d12 body=356 status=ok
// SIG undefined FUN_143401d12(void)

void FUN_143401d12(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  if ((*(byte *)((longlong)param_2 + 0x5c) & 1) == 0) {
    fVar1 = *(float *)(param_1 + 1);
    if ((((*(float *)(param_2 + 7) != fVar1) || (NAN(*(float *)(param_2 + 7)) || NAN(fVar1))) ||
        (*(float *)(param_2 + 6) != 0.0)) || (NAN(*(float *)(param_2 + 6)))) {
      *(float *)(param_2 + 7) = fVar1;
      *(float *)((longlong)param_2 + 0x24) = fVar1;
      *(undefined4 *)(param_2 + 5) = 0;
      *(undefined4 *)(param_2 + 6) = 0;
      *(float *)(param_2 + 4) = fVar1;
    }
    FUN_147973c16(param_2 + 4,(int)param_2[1]);
    plVar4 = (longlong *)((longlong)param_2 + 0x3c);
    fVar1 = *(float *)((longlong)param_1 + 0xc);
    if (((*(float *)((longlong)param_2 + 0x54) != fVar1) ||
        (NAN(*(float *)((longlong)param_2 + 0x54)) || NAN(fVar1))) ||
       ((*(float *)((longlong)param_2 + 0x4c) != 0.0 || (NAN(*(float *)((longlong)param_2 + 0x4c))))
       )) {
      *(float *)((longlong)param_2 + 0x54) = fVar1;
      *(float *)(param_2 + 8) = fVar1;
      *(undefined4 *)((longlong)param_2 + 0x44) = 0;
      *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
      *(float *)((longlong)param_2 + 0x3c) = fVar1;
    }
    uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  }
  else {
    if ((*(byte *)((longlong)param_2 + 0x5c) & 2) == 0) {
      FUN_147973c6e((longlong)param_2 + 0x3c,param_3);
      FUN_147973c6e(param_2 + 4,param_3);
      goto LAB_143401dfd;
    }
    FUN_147973c16((longlong)param_2 + 0x3c,*(undefined4 *)((longlong)param_2 + 0xc),
                  (int)param_2[0xb]);
    plVar4 = param_2 + 4;
    uVar6 = (undefined4)param_2[1];
  }
  FUN_147973c16(plVar4,uVar6,(int)param_2[0xb]);
LAB_143401dfd:
  if (*param_1 == 0) {
    lVar5 = *param_2;
    if (DAT_14c950c29 == '\x01') {
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar5 = *param_2;
      }
    }
    *param_1 = lVar5;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(param_1 + 1) = (int)param_2[4];
  *(uint *)((longlong)param_1 + 0x14) =
       *(uint *)((longlong)param_1 + 0x14) & 0xfffffffe | *(uint *)((longlong)param_2 + 0x14) & 1;
  bVar2 = *(byte *)((longlong)param_2 + 0x5c);
  bVar3 = bVar2 & 0xfc;
  *(byte *)((longlong)param_2 + 0x5c) = bVar3 + 1;
  if (((bVar2 & 4) != 0) && (*(float *)(param_2 + 6) <= *(float *)((longlong)param_2 + 0x2c))) {
    *(byte *)((longlong)param_2 + 0x5c) = bVar3 | 9;
  }
  return;
}



// FUNCTION 143401e76 FUN_143401e76 body=579 status=ok
// SIG undefined FUN_143401e76(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143401e76(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  code ****ppppcVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code ****local_78;
  code ****local_70;
  code ****local_68;
  code ****local_60;
  code ****local_58;
  code ****local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  ppppcVar2 = *(code *****)(param_2 + 4);
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_78 = ppppcVar2;
  if (ppppcVar2[0x31] != (code ***)0x0) {
    (*(*ppppcVar2[0x31])[8])();
  }
  local_68 = (code ****)ppppcVar2[6];
  if (0 < (longlong)local_68) {
    plVar1 = (longlong *)(param_1 + 0x708);
    if (*(int *)(param_1 + 0x710) != *(int *)(param_1 + 0x73c)) {
      lVar6 = param_1 + 0x740;
      if (*(longlong *)(param_1 + 0x748) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x748);
      }
      iVar10 = *(int *)(lVar6 + (ulonglong)
                                (*(int *)(param_1 + 0x750) - 1U &
                                (int)local_68 + (int)((ulonglong)local_68 >> 0x20) * 0x17) * 4);
      if (iVar10 != -1) {
        do {
          lVar6 = *plVar1 + (longlong)iVar10 * 0x20;
          if ((code ****)*(code ****)(*plVar1 + (longlong)iVar10 * 0x20) == local_68) {
            plVar8 = (longlong *)(lVar6 + 8);
            if (plVar8 != (longlong *)0x0 && lVar6 != 0) {
              uVar5 = *(uint *)(lVar6 + 0x10);
              if (0 < (longlong)(int)uVar5) {
                iVar10 = -uVar5;
                uVar7 = (longlong)(int)uVar5;
                do {
                  lVar3 = *plVar8;
                  if (*(longlong *)(lVar3 + -8 + uVar7 * 8) != 0) {
                    if (uVar7 != uVar5) {
                      iVar9 = uVar5 + iVar10;
                      if (0 < iVar9) {
                        iVar9 = 1;
                      }
                      memmove((void *)(lVar3 + uVar7 * 8 + -8),
                              (void *)(lVar3 + (longlong)(int)(uVar5 - iVar9) * 8),
                              (longlong)iVar9 << 3);
                      uVar5 = *(uint *)(lVar6 + 0x10);
                    }
                    uVar5 = uVar5 - 1;
                    *(uint *)(lVar6 + 0x10) = uVar5;
                  }
                  iVar10 = iVar10 + 1;
                  bVar4 = 1 < uVar7;
                  uVar7 = uVar7 - 1;
                } while (bVar4);
              }
              local_58 = ppppcVar2;
              FUN_14796f744(plVar8);
              goto LAB_143401fa1;
            }
            break;
          }
          iVar10 = *(int *)(lVar6 + 0x18);
        } while (iVar10 != -1);
      }
    }
    local_58 = (code ****)&local_68;
    FUN_14796f7b0(plVar1,&local_48);
    lVar6 = *plVar1 + (longlong)(int)local_48 * 0x20;
    iVar10 = *(int *)(lVar6 + 0x10);
    *(uint *)(lVar6 + 0x10) = iVar10 + 1U;
    if (*(uint *)(lVar6 + 0x14) < iVar10 + 1U) {
      FUN_14796ccec((longlong *)(lVar6 + 8),iVar10);
    }
    *(code *****)(*(longlong *)(lVar6 + 8) + (longlong)iVar10 * 8) = ppppcVar2;
  }
LAB_143401fa1:
  local_50 = (code ****)&local_88;
  local_68 = ppppcVar2;
  local_58 = (code ****)&local_68;
  FUN_14796f8e0(param_1 + 0x630,&local_48,&local_58);
  local_60 = (code ****)&local_70;
  local_48 = 0;
  local_68 = (code ****)FUN_14340a90e;
  local_58 = (code ****)&LAB_14796d3b2;
  local_70 = ppppcVar2;
  local_50 = (code ****)&local_68;
  FUN_14796d2d2(param_1 + 0x218,&local_58,&local_48);
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434020ba FUN_1434020ba body=1071 status=ok
// SIG undefined FUN_1434020ba(void)

void FUN_1434020ba(longlong param_1,longlong param_2,int param_3,double *param_4,undefined4 param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte bVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  undefined8 *puVar16;
  double *pdVar17;
  double *pdVar18;
  undefined8 *puVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  int local_16c;
  double local_168 [12];
  double local_108 [4];
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  code *local_a8 [2];
  undefined8 *local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (param_2 == 0) {
    iVar15 = -1;
  }
  else {
    iVar15 = *(int *)(param_2 + 0xc);
    bVar11 = *(byte *)(param_1 + 0x598);
    if ((bVar11 & 0x40) == 0) {
      if ((longlong)*(int *)(param_1 + 0x128) != 0) {
        puVar16 = *(undefined8 **)(param_1 + 0x120);
        puVar19 = puVar16 + (longlong)*(int *)(param_1 + 0x128) * 2;
        local_16c = iVar15;
        do {
          plVar2 = (longlong *)*puVar16;
          plVar3 = (longlong *)puVar16[1];
          if (plVar3 == (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2);
          }
          else {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2);
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
          puVar16 = puVar16 + 2;
        } while (puVar16 != puVar19);
        bVar11 = *(byte *)(param_1 + 0x598);
        iVar15 = local_16c;
      }
      *(byte *)(param_1 + 0x598) = bVar11 | 0x40;
    }
    else if (((param_3 < *(int *)(param_1 + 0x1e8)) &&
             (*(int *)(*(longlong *)(param_1 + 0x1e0) + 0xbc + (longlong)param_3 * 0x110) != iVar15)
             ) && ((longlong)*(int *)(param_1 + 0x128) != 0)) {
      puVar16 = *(undefined8 **)(param_1 + 0x120);
      puVar19 = puVar16 + (longlong)*(int *)(param_1 + 0x128) * 2;
      local_16c = iVar15;
      do {
        plVar2 = (longlong *)*puVar16;
        plVar3 = (longlong *)puVar16[1];
        if (plVar3 == (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2);
        }
        else {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2);
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
        puVar16 = puVar16 + 2;
        iVar15 = local_16c;
      } while (puVar16 != puVar19);
    }
  }
  pdVar17 = local_108;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *pdVar17 = *param_4;
    param_4 = param_4 + 1;
    pdVar17 = pdVar17 + 1;
  }
  auVar6._8_8_ = -(ulonglong)((double)((ulonglong)local_108[1] & 0x7ff0000000000000) == INFINITY);
  auVar6._0_8_ = -(ulonglong)((double)((ulonglong)local_108[0] & 0x7ff0000000000000) == INFINITY);
  iVar12 = movmskpd((int)local_108,auVar6);
  auVar9._8_8_ = -(ulonglong)((double)((ulonglong)local_108[3] & 0x7ff0000000000000) == INFINITY);
  auVar9._0_8_ = -(ulonglong)((double)((ulonglong)local_108[2] & 0x7ff0000000000000) == INFINITY);
  uVar13 = movmskpd(0,auVar9);
  if ((uVar13 & 0x3fffffff) == 0 && iVar12 == 0) {
    auVar7._8_8_ = -(ulonglong)((double)(uStack_e0 & 0x7ff0000000000000) == INFINITY);
    auVar7._0_8_ = -(ulonglong)((double)(local_e8 & 0x7ff0000000000000) == INFINITY);
    iVar12 = movmskpd(iVar12,auVar7);
    auVar10._8_8_ = -(ulonglong)((double)(uStack_d0 & 0x7ff0000000000000) == INFINITY);
    auVar10._0_8_ = -(ulonglong)((double)(local_d8 & 0x7ff0000000000000) == INFINITY);
    uVar13 = movmskpd(0,auVar10);
    if ((uVar13 & 0x3fffffff) == 0 && iVar12 == 0) {
      auVar8._8_8_ = -(ulonglong)((double)(uStack_c0 & 0x7ff0000000000000) == INFINITY);
      auVar8._0_8_ = -(ulonglong)((double)(local_c8 & 0x7ff0000000000000) == INFINITY);
      iVar12 = movmskpd(iVar12,auVar8);
      auVar5._8_8_ = -(ulonglong)((double)(uStack_b0 & 0x7ff0000000000000) == INFINITY);
      auVar5._0_8_ = -(ulonglong)((double)(local_b8 & 0x7ff0000000000000) == INFINITY);
      uVar13 = movmskpd(0,auVar5);
      if (((uVar13 & 0x3fffffff) == 0 && iVar12 == 0) &&
         (dVar21 = local_108[2] * local_108[2] + local_108[0] * local_108[0],
         dVar22 = local_108[3] * local_108[3] + local_108[1] * local_108[1],
         auVar4._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar21 + dVar22))),
         auVar4._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar21 + dVar22))),
         iVar12 = movmskpd(iVar12,auVar4), iVar12 == 0)) goto LAB_143402346;
    }
  }
  pdVar17 = (double *)&DAT_14c846480;
  pdVar18 = local_108;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *pdVar18 = *pdVar17;
    pdVar17 = pdVar17 + 1;
    pdVar18 = pdVar18 + 1;
  }
LAB_143402346:
  plVar2 = (longlong *)(param_1 + 0x130);
  if (*(int *)(param_1 + 0x138) <= param_3) {
    FUN_147960cd8(plVar2,(param_3 - *(int *)(param_1 + 0x138)) + 1);
  }
  lVar20 = (longlong)param_3 * 0x80;
  pdVar17 = local_108;
  pdVar18 = (double *)(*plVar2 + lVar20);
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *pdVar18 = *pdVar17;
    pdVar17 = pdVar17 + 1;
    pdVar18 = pdVar18 + 1;
  }
  *(int *)(*plVar2 + 0x7c + lVar20) = iVar15;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x128) != 0)) {
    puVar16 = *(undefined8 **)(param_1 + 0x120);
    puVar19 = puVar16 + (longlong)*(int *)(param_1 + 0x128) * 2;
    do {
      plVar2 = (longlong *)*puVar16;
      plVar3 = (longlong *)puVar16[1];
      if (plVar3 == (longlong *)0x0) {
        local_178 = param_5;
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3,local_108);
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_178 = param_5;
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3,local_108);
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
      puVar16 = puVar16 + 2;
    } while (puVar16 != puVar19);
  }
  pdVar17 = local_108;
  pdVar18 = local_168;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *pdVar18 = *pdVar17;
    pdVar17 = pdVar17 + 1;
    pdVar18 = pdVar18 + 1;
  }
  local_a8[0] = (code *)0x0;
  local_98 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  *local_98 = &PTR_LAB_14a7ec990;
  local_98[2] = param_1;
  *(int *)(local_98 + 3) = iVar15;
  *(int *)((longlong)local_98 + 0x1c) = param_3;
  pdVar17 = local_168;
  pdVar18 = (double *)(local_98 + 4);
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *pdVar18 = *pdVar17;
    pdVar17 = pdVar17 + 1;
    pdVar18 = pdVar18 + 1;
  }
  *(undefined4 *)(local_98 + 0x10) = param_5;
  if (local_98 + 2 != (longlong *)0x0) {
    local_a8[0] = FUN_14340a302;
  }
  FUN_1415826cc(local_a8);
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434024ea FUN_1434024ea body=345 status=ok
// SIG undefined FUN_1434024ea(void)

void FUN_1434024ea(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char cVar10;
  longlong lVar11;
  undefined1 auStack_a8 [36];
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  code *local_68 [2];
  undefined8 *local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != -1) {
    cVar10 = FUN_146269f19();
    if (cVar10 == '\0') {
      if (param_2 < *(int *)(param_1 + 0x138)) {
        lVar5 = *(longlong *)(param_1 + 0x130);
        lVar11 = (longlong)param_2 * 0x80;
        *(undefined8 *)(lVar5 + 0x70 + lVar11) = param_3[2];
        uVar9 = param_3[1];
        puVar2 = (undefined8 *)(lVar5 + 0x60 + lVar11);
        *puVar2 = *param_3;
        puVar2[1] = uVar9;
        puVar3 = (uint *)(*(longlong *)(param_1 + 0x130) + 0x78 + lVar11);
        *puVar3 = *puVar3 | 1;
        local_70 = param_3[2];
        local_80 = *(undefined4 *)param_3;
        uStack_7c = *(undefined4 *)((longlong)param_3 + 4);
        uStack_78 = *(undefined4 *)(param_3 + 1);
        uStack_74 = *(undefined4 *)((longlong)param_3 + 0xc);
        local_68[0] = (code *)0x0;
        local_58 = (undefined8 *)FUN_14001cc68(0x30,8);
        *local_58 = &PTR_LAB_14a7ec9b0;
        local_58[1] = param_1;
        *(int *)(local_58 + 2) = param_2;
        *(undefined4 *)(local_58 + 4) = uStack_78;
        *(undefined4 *)((longlong)local_58 + 0x24) = uStack_74;
        *(undefined4 *)(local_58 + 5) = (undefined4)local_70;
        *(undefined4 *)((longlong)local_58 + 0x2c) = local_70._4_4_;
        *(undefined4 *)((longlong)local_58 + 0x14) = uStack_84;
        *(undefined4 *)(local_58 + 3) = local_80;
        *(undefined4 *)((longlong)local_58 + 0x1c) = uStack_7c;
        *(undefined4 *)(local_58 + 4) = uStack_78;
        if (local_58 + 1 != (longlong *)0x0) {
          local_68[0] = FUN_14340a6be;
        }
        FUN_1415826cc(local_68);
      }
    }
    else if (param_2 < *(int *)(param_1 + 0x1e8)) {
      lVar5 = *(longlong *)(param_1 + 0x1e0);
      lVar11 = (longlong)param_2 * 0x110;
      uVar4 = *(uint *)(lVar5 + 0x90 + lVar11);
      *(uint *)(lVar5 + 0x90 + lVar11) = uVar4 | 1;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(lVar5 + 0x78 + lVar11);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      *(undefined8 *)(lVar5 + 0x88 + lVar11) = param_3[2];
      if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143402658 FUN_143402658 body=246 status=ok
// SIG undefined FUN_143402658(void)

void FUN_143402658(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != -1) {
    cVar8 = FUN_146269f19();
    if (cVar8 == '\0') {
      if (param_2 < *(int *)(param_1 + 0x138)) {
        lVar4 = *(longlong *)(param_1 + 0x130);
        lVar9 = (longlong)param_2 * 0x80;
        *(undefined8 *)(lVar4 + 0x70 + lVar9) = DAT_14c8464f0;
        uVar7 = DAT_14c8464e8._4_4_;
        uVar6 = (undefined4)DAT_14c8464e8;
        uVar5 = DAT_14c8464e0._4_4_;
        puVar1 = (undefined4 *)(lVar4 + 0x60 + lVar9);
        *puVar1 = (undefined4)DAT_14c8464e0;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x130) + 0x78 + lVar9);
        *puVar2 = *puVar2 & 0xfffffffe;
        local_48 = 0;
        local_38 = &PTR_LAB_14a7ec9d0;
        local_58 = &LAB_14340a756;
        local_30 = param_1;
        local_28 = param_2;
        FUN_1415826cc();
      }
    }
    else if (param_2 < *(int *)(param_1 + 0x1e8)) {
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x1e0) + 0x90 + (longlong)param_2 * 0x110);
      if ((uVar3 & 1) != 0) {
        *(uint *)(*(longlong *)(param_1 + 0x1e0) + (longlong)param_2 * 0x110 + 0x90) =
             uVar3 & 0xfffffffe;
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



// FUNCTION 143402760 FUN_143402760 body=110 status=ok
// SIG undefined FUN_143402760(void)

undefined1 * FUN_143402760(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 8);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 8) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x10);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 1434027ce FUN_1434027ce body=248 status=ok
// SIG undefined FUN_1434027ce(void)

void FUN_1434027ce(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [32];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  code *local_58 [2];
  undefined8 *local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = *(undefined4 *)(param_2 + 0xc);
  local_b0 = param_1;
  FUN_1479610d0(local_a0,param_3);
  local_80 = *param_4;
  uStack_7c = param_4[1];
  uStack_78 = param_4[2];
  uStack_74 = param_4[3];
  local_70 = param_4[4];
  uStack_6c = param_4[5];
  uStack_68 = param_4[6];
  uStack_64 = param_4[7];
  local_60 = param_4[8];
  local_58[0] = (code *)0x0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
  *puVar1 = &PTR_LAB_14a7ec9f0;
  *(undefined4 *)(puVar1 + 2) = local_a8;
  puVar1[1] = local_b0;
  local_48 = puVar1;
  FUN_1479610d0(puVar1 + 3,local_a0);
  *(undefined4 *)(puVar1 + 7) = local_80;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = uStack_7c;
  *(undefined4 *)(puVar1 + 8) = uStack_78;
  *(undefined4 *)((longlong)puVar1 + 0x44) = uStack_74;
  *(undefined4 *)(puVar1 + 9) = local_70;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = uStack_6c;
  *(undefined4 *)(puVar1 + 10) = uStack_68;
  *(undefined4 *)((longlong)puVar1 + 0x54) = uStack_64;
  *(undefined4 *)(puVar1 + 0xb) = local_60;
  if (puVar1 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_58[0] = FUN_14340a798;
  }
  FUN_1415826cc(local_58);
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434028c8 FUN_1434028c8 body=740 status=ok
// SIG undefined FUN_1434028c8(void)

void FUN_1434028c8(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,byte param_7)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_158 [40];
  ulonglong local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  uint local_11c;
  undefined4 local_118;
  undefined1 *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong *local_c0;
  ulonglong *local_b8;
  undefined1 local_ac [4];
  code *local_a8 [2];
  undefined8 *local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_d0 = param_2;
  local_c8 = param_3;
  if (param_3 != 0 && param_2 != 0) {
    cVar2 = FUN_146269f19();
    if (cVar2 == '\0') {
      local_a8[0] = (code *)0x0;
      local_98 = (undefined8 *)FUN_14001cc68(0x30,8);
      *local_98 = &PTR_LAB_14a7eca50;
      local_98[1] = param_1;
      local_98[2] = param_2;
      local_98[3] = param_3;
      *(undefined4 *)(local_98 + 4) = param_4;
      *(undefined4 *)((longlong)local_98 + 0x24) = param_5;
      *(undefined4 *)(local_98 + 5) = param_6;
      *(byte *)((longlong)local_98 + 0x2c) = param_7;
      if (local_98 + 1 != (longlong *)0x0) {
        local_a8[0] = FUN_14340a9e6;
      }
      FUN_1415826cc(local_a8);
    }
    else {
      uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      plVar4 = (longlong *)FUN_14796d82a(param_1 + 0x438,uVar3 >> 0x10 ^ uVar3,&local_d0);
      if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
        uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        plVar5 = plVar4 + 7;
        if ((longlong *)plVar4[8] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar4[8];
        }
        iVar6 = *(int *)((longlong)plVar5 +
                        (ulonglong)((int)plVar4[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        if (iVar6 != -1) {
          do {
            lVar1 = *plVar4 + (longlong)iVar6 * 0x70;
            if (*(ulonglong *)(*plVar4 + (longlong)iVar6 * 0x70) == param_3) {
              if ((lVar1 != 0) && (lVar1 != -8)) {
                if (DAT_14c950c29 == '\x01') {
                  FUN_1456cec3c(param_3);
                }
                *(ulonglong *)(lVar1 + 8) = param_3;
                *(undefined4 *)(lVar1 + 0x10) = param_4;
                *(undefined4 *)(lVar1 + 0x14) = param_5;
                *(uint *)(lVar1 + 0x1c) = *(uint *)(lVar1 + 0x1c) & 0xfffffffe | (uint)param_7;
                *(byte *)(lVar1 + 100) = *(byte *)(lVar1 + 100) & 0xf9 | 2;
                *(undefined4 *)(lVar1 + 0x60) = param_6;
                goto LAB_143402921;
              }
              break;
            }
            iVar6 = *(int *)(lVar1 + 0x68);
          } while (iVar6 != -1);
        }
      }
      local_120 = 0x469c4000;
      local_118 = 0x3f800000;
      local_110 = &DAT_3f8000003f800000;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = &DAT_3f8000003f800000;
      local_f0 = 0x3f800000;
      local_ec = 0;
      uStack_e4 = 0;
      local_dc = 0x3f800000;
      local_d4 = 0;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_3);
      }
      local_b8 = &local_130;
      local_124 = param_5;
      local_11c = (uint)param_7;
      local_d8 = param_6;
      local_c0 = &local_c8;
      local_130 = param_3;
      local_128 = param_4;
      FUN_14796dd44(plVar4,local_ac);
    }
  }
LAB_143402921:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143402bae FUN_143402bae body=645 status=ok
// SIG undefined FUN_143402bae(void)

void FUN_143402bae(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_a8 [32];
  undefined1 *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != 0 && param_2 != 0) {
    cVar1 = FUN_146269f19();
    if (cVar1 == '\0') {
      local_88[0] = (undefined1 *)0x0;
      local_78 = (undefined8 *)FUN_14001cc68(0x28,8);
      *local_78 = &PTR_LAB_14a7eca70;
      local_78[1] = param_1;
      local_78[2] = param_2;
      local_78[3] = param_3;
      *(undefined4 *)(local_78 + 4) = param_4;
      if (local_78 + 1 != (longlong *)0x0) {
        local_88[0] = &LAB_14340aa6e;
      }
      FUN_1415826cc(local_88);
    }
    else if (*(int *)(param_1 + 0x440) != *(int *)(param_1 + 0x46c)) {
      uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      lVar3 = param_1 + 0x470;
      if (*(longlong *)(param_1 + 0x478) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x478);
      }
      iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x480) - 1U & (uVar2 >> 0x10 ^ uVar2))
                               * 4);
      if (iVar5 != -1) {
        do {
          lVar3 = *(longlong *)(param_1 + 0x438) + (longlong)iVar5 * 0x60;
          if (*(ulonglong *)(*(longlong *)(param_1 + 0x438) + (longlong)iVar5 * 0x60) == param_2) {
            plVar6 = (longlong *)(lVar3 + 8);
            if ((plVar6 != (longlong *)0x0 && lVar3 != 0) &&
               (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c))) {
              uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
              uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
              lVar4 = lVar3 + 0x40;
              if (*(longlong *)(lVar3 + 0x48) != 0) {
                lVar4 = *(longlong *)(lVar3 + 0x48);
              }
              iVar5 = *(int *)(lVar4 + (ulonglong)
                                       (*(int *)(lVar3 + 0x50) - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
              if (iVar5 != -1) {
                goto LAB_143402d80;
              }
            }
            break;
          }
          iVar5 = *(int *)(lVar3 + 0x58);
        } while (iVar5 != -1);
      }
    }
  }
  goto LAB_143402be1;
  while (iVar5 = *(int *)(lVar4 + 0x68), iVar5 != -1) {
LAB_143402d80:
    lVar4 = *plVar6 + (longlong)iVar5 * 0x70;
    if (*(ulonglong *)(*plVar6 + (longlong)iVar5 * 0x70) == param_3) {
      if ((lVar4 + 8U & 0xfffffffffffffff7) != 0) {
        if ((*(byte *)(lVar4 + 100) & 1) != 0) {
          uVar8 = 0x3f800000;
          if ((longlong)*(int *)(param_2 + 0x78) == 0) goto LAB_143402de1;
          lVar3 = *(longlong *)(param_2 + 0x70);
          lVar7 = 0;
          goto LAB_143402dd2;
        }
        FUN_14796c9e8(plVar6,param_3);
        if (*(int *)(lVar3 + 0x10) == *(int *)(lVar3 + 0x3c)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
        }
      }
      break;
    }
  }
  goto LAB_143402be1;
  while (lVar7 = lVar7 + 0x20, (longlong)*(int *)(param_2 + 0x78) * 0x20 != lVar7) {
LAB_143402dd2:
    if (*(ulonglong *)(lVar3 + lVar7) == param_3) {
      uVar9 = *(undefined4 *)(lVar3 + 8 + lVar7);
      uVar8 = *(undefined4 *)(lVar3 + 0xc + lVar7);
      goto LAB_143402df4;
    }
  }
LAB_143402de1:
  uVar9 = 0x3f800000;
LAB_143402df4:
  *(byte *)(lVar4 + 100) = *(byte *)(lVar4 + 100) & 0xf1 | 6;
  *(undefined4 *)(lVar4 + 0x60) = param_4;
  *(undefined4 *)(lVar4 + 0x10) = uVar9;
  *(undefined4 *)(lVar4 + 0x14) = uVar8;
LAB_143402be1:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143402e50 FUN_143402e50 body=309 status=ok
// SIG undefined FUN_143402e50(void)

void FUN_143402e50(longlong param_1,ulonglong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    cVar1 = FUN_146269f19();
    if (cVar1 == '\0') {
      local_58 = 0;
      local_48 = &PTR_LAB_14a7ecab0;
      local_68 = &LAB_14340ab14;
      local_40 = param_1;
      local_38 = param_2;
      FUN_1415826cc();
    }
    else {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      local_70 = param_2;
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      iVar3 = FUN_14796d41c((longlong *)(param_1 + 1000),uVar2 >> 0x10 ^ uVar2,&local_70);
      if (iVar3 != -1) {
        lVar4 = (longlong)iVar3 * 0x50 + *(longlong *)(param_1 + 1000);
        if (lVar4 != -8 && lVar4 != 0) {
          *(undefined4 *)(lVar4 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143402f9e FUN_143402f9e body=484 status=ok
// SIG undefined FUN_143402f9e(void)

void FUN_143402f9e(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = FUN_146269f19();
  if (cVar3 == '\0') {
    local_68 = 0;
    local_58 = &PTR_LAB_14a7ecad0;
    local_78 = &LAB_14340ab58;
    local_50 = param_1;
    FUN_1415826cc();
  }
  else {
    iVar2 = *(int *)(param_1 + 0x410);
    if (iVar2 == 0) {
      uVar14 = 1;
      uVar10 = 0;
      iVar11 = 0;
      iVar4 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x408);
      if (*(uint **)(param_1 + 0x408) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x3f8);
      }
      uVar13 = *puVar8;
      if (uVar13 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        uVar10 = 0;
        uVar14 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar14 = uVar10;
        }
        iVar11 = 0;
        do {
          if (uVar14 == uVar10) goto LAB_143403156;
          iVar11 = iVar11 + 0x20;
          uVar13 = puVar8[uVar10 + 1];
          uVar10 = uVar10 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar10 = 0;
        iVar11 = 0;
      }
      uVar14 = (ulonglong)(-uVar13 & uVar13);
      uVar1 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
    }
    if (iVar4 < iVar2) {
      uVar13 = 0xffffffff;
      do {
        FUN_143402e50(param_1,*(undefined8 *)
                               (*(longlong *)(param_1 + 1000) + (longlong)iVar4 * 0x50));
        uVar13 = ~(uint)uVar14 & uVar13;
        puVar8 = *(uint **)(param_1 + 0x408);
        if (*(uint **)(param_1 + 0x408) == (uint *)0x0) {
          puVar8 = (uint *)(param_1 + 0x3f8);
        }
        iVar2 = *(int *)(param_1 + 0x410);
        iVar4 = (int)uVar10;
        lVar12 = (longlong)iVar4;
        uVar5 = puVar8[lVar12] & uVar13;
        if (uVar5 == 0) {
          iVar6 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar6 = iVar2 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar9 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = puVar8[lVar12 + lVar9 + 1];
            if (uVar5 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar7 - lVar12 == lVar9) goto LAB_143403156;
          }
          uVar10 = (ulonglong)(iVar4 + (int)lVar9 + 1);
          uVar13 = 0xffffffff;
        }
        uVar14 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar2);
    }
  }
LAB_143403156:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143403184 FUN_143403184 body=9636 status=ok
// SIG undefined FUN_143403184(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143403184(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  double *pdVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  void *_Src;
  undefined8 uVar12;
  double dVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined8 *puVar19;
  char cVar20;
  byte bVar21;
  char cVar22;
  byte bVar23;
  int iVar24;
  DWORD DVar25;
  DWORD DVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  undefined1 *puVar32;
  uint *puVar33;
  longlong lVar34;
  undefined8 *puVar35;
  longlong lVar36;
  undefined8 *puVar37;
  int iVar38;
  undefined8 *puVar39;
  longlong *plVar40;
  undefined8 *puVar41;
  ulonglong uVar42;
  int iVar43;
  longlong lVar44;
  ulonglong uVar45;
  undefined8 uVar46;
  longlong *plVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  uint uVar50;
  longlong lVar51;
  longlong lVar52;
  undefined8 *puVar53;
  bool bVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  undefined1 auStack_5b8 [39];
  char local_591;
  longlong *local_590;
  longlong *local_588;
  longlong *local_580;
  longlong *local_578;
  undefined8 *local_570;
  longlong *local_568;
  longlong *local_560;
  longlong local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 local_538;
  longlong local_530;
  undefined8 local_528;
  longlong lStack_520;
  longlong local_518;
  uint local_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  byte local_4c8;
  undefined1 local_4bc [4];
  undefined1 local_4b8 [16];
  double local_4a8;
  undefined8 local_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  undefined8 local_480;
  double local_478;
  double local_470;
  double local_468;
  undefined8 local_460;
  longlong local_458;
  longlong lStack_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined1 *local_438;
  undefined8 local_428;
  undefined **local_418;
  longlong *local_410;
  char local_408;
  undefined8 local_3f8;
  longlong **pplStack_3f0;
  longlong local_3e8;
  longlong lStack_3e0;
  undefined **local_3d8;
  uint local_3d0;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  byte local_388;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar24 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar24 != 2)) {
    if (iVar24 != 1) goto LAB_143403245;
    DVar25 = FUN_140ad26c0();
    DVar26 = GetCurrentThreadId();
    if (DVar25 != DVar26) goto LAB_143403245;
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  FUN_14795f8d8(param_1);
LAB_143403245:
  cVar20 = FUN_146269f19();
  cVar22 = (char)param_2;
  if (cVar20 == '\0') {
    local_428 = 0;
    local_418 = &PTR_LAB_14a7ecb10;
    local_438 = &LAB_14340abda;
    local_410 = param_1;
    local_408 = cVar22;
    FUN_1415826cc();
    if (((DAT_14c844290 & 1) != 0) && ((DAT_14c844291 & 1) == 0)) {
      FUN_143412e42(&DAT_14cace5a8);
    }
  }
  else {
    iVar24 = (int)param_1[0xc3];
    if (0 < (longlong)iVar24) {
      iVar43 = -iVar24;
      uVar45 = (longlong)iVar24;
      do {
        cVar20 = FUN_1436feda2(*(undefined8 *)(param_1[0xc2] + -8 + uVar45 * 8),0);
        if (cVar20 != '\0') {
          uVar50 = *(uint *)(param_1 + 0xc3);
          if (uVar45 != uVar50) {
            iVar24 = iVar43 + uVar50;
            if (0 < (int)(iVar43 + uVar50)) {
              iVar24 = 1;
            }
            memmove((void *)(param_1[0xc2] + uVar45 * 8 + -8),
                    (void *)(param_1[0xc2] + (longlong)(int)(uVar50 - iVar24) * 8),
                    (longlong)iVar24 << 3);
            uVar50 = *(uint *)(param_1 + 0xc3);
          }
          *(uint *)(param_1 + 0xc3) = uVar50 - 1;
        }
        iVar43 = iVar43 + 1;
        bVar54 = 1 < uVar45;
        uVar45 = uVar45 - 1;
      } while (bVar54);
    }
    *(byte *)((longlong)param_1 + 0x592) =
         *(byte *)((longlong)param_1 + 0x592) & 0xf7 | (DAT_14cacde40 == 0) << 3;
    *(float *)(param_1 + 0x2e) = *(float *)((longlong)param_1 + 0x16c);
    if (DAT_14cacde70 == 0) {
      *(float *)(param_1 + 0x2e) = *(float *)((longlong)param_1 + 0x16c) * _DAT_14c75908c;
    }
    (**(code **)(*param_1 + 0x210))(param_1);
    (**(code **)(*param_1 + 0x230))(param_1);
    FUN_147960d1a(param_1,0);
    *(byte *)((longlong)param_1 + 0x592) =
         *(byte *)((longlong)param_1 + 0x592) & 0xef | (DAT_14c76131c == 1) << 4;
    if (cVar22 != '\0') {
      fVar57 = *(float *)((longlong)param_1 + 0x5ac);
      if (0.5 <= fVar57) {
        fVar57 = 0.5;
      }
      FUN_147973c6e((longlong)param_1 + 0x174,fVar57);
    }
    param_1[0x2b] = param_1[0x2b] + 1;
    FUN_1433fff58(param_1,param_2);
    local_3f8 = (code *)&DAT_ffffffff;
    pplStack_3f0 = (longlong **)CONCAT71(pplStack_3f0._1_7_,1);
    local_3e8 = 0;
    lStack_3e0 = 0;
    local_3d8 = (undefined **)0x400000003f000000;
    local_3d0 = local_3d0 & 0xffffff00;
    uStack_3cc = 0x3f800000;
    uStack_3c8 = 0x469c40003f000000;
    uStack_3c0 = 0x3f000000;
    uStack_3bc = 0x3f800000;
    uStack_3b8 = 0x3f000000;
    uStack_3b4 = 0x469c4000;
    uStack_3b0 = 0x3f000000;
    local_3a8 = 0;
    uStack_3a0 = 0;
    local_398 = 0;
    uStack_390 = 0;
    local_388 = 0;
    puVar32 = local_4b8;
    FUN_1479618e2(puVar32,param_1 + 0xa3);
    iVar24 = (int)param_1[0x3d];
    local_578 = (longlong *)
                CONCAT44(local_578._4_4_,(int)CONCAT71((int7)((ulonglong)puVar32 >> 8),1));
    local_591 = cVar22;
    local_590 = param_1;
    if ((longlong)iVar24 != 0) {
      lVar52 = param_1[0x3c];
      lVar44 = (longlong)iVar24 * 0x110;
      local_578 = (longlong *)
                  CONCAT44(local_578._4_4_,(int)CONCAT71((int7)(int3)((uint)iVar24 >> 8),1));
      bVar54 = false;
      do {
        local_538 = (longlong *)&DAT_ffffffff;
        local_530 = CONCAT71(local_530._1_7_,1);
        local_528 = 0;
        lStack_520 = 0;
        local_518 = 0x400000003f000000;
        local_510 = local_510 & 0xffffff00;
        uStack_50c = 0x3f800000;
        uStack_508 = 0x3f000000;
        uStack_504 = 0x469c4000;
        uStack_500 = 0x3f000000;
        uStack_4fc = 0x3f800000;
        uStack_4f8 = 0x3f000000;
        uStack_4f4 = 0x469c4000;
        uStack_4f0 = 0x3f000000;
        local_4c8 = 0;
        local_4d8 = 0;
        uStack_4d0 = 0;
        local_4e8 = 0;
        uStack_4e0 = 0;
        local_558 = *(longlong *)(lVar52 + 0x20);
        uStack_550 = *(ulonglong *)(lVar52 + 0x28);
        local_548 = *(undefined8 *)(lVar52 + 0x30);
        FUN_14796123e(local_590,*(undefined4 *)(lVar52 + 0xbc),&local_558,&local_538);
        FUN_147960bdc(lVar52,(ulonglong)local_538 & 0xffffffff);
        FUN_147960ab4(lVar52);
        if (bVar54) {
          if ((int)local_538 != 0) {
            if (((ulonglong)local_578 & 1) == 0) {
              if (local_538._4_4_ <= local_3f8._4_4_) goto LAB_14340378b;
            }
            goto LAB_1434035ec;
          }
        }
        else {
LAB_1434035ec:
          local_3f8 = (code *)local_538;
          pplStack_3f0 = (longlong **)CONCAT71(pplStack_3f0._1_7_,(char)local_530);
          lVar36 = local_528;
          if (DAT_14c950c29 == 1) {
            if (local_528 == 0) {
              lVar36 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar36 = local_528;
            }
          }
          lVar51 = lStack_520;
          local_3e8 = lVar36;
          if ((DAT_14c950c29 & 1) != 0) {
            if (lStack_520 == 0) {
              lVar51 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar51 = lStack_520;
            }
          }
          local_3d8 = (undefined **)local_518;
          uStack_3b0 = uStack_4f0;
          uStack_3c0 = uStack_500;
          uStack_3bc = uStack_4fc;
          uStack_3b8 = uStack_4f8;
          uStack_3b4 = uStack_4f4;
          local_3d0 = local_510;
          uStack_3cc = uStack_50c;
          uStack_3c8 = CONCAT44(uStack_504,uStack_508);
          lStack_3e0 = lVar51;
          FUN_1478b6290(&local_3a8,&local_4e8);
          FUN_1479614b4(&local_398,&local_4d8);
          local_388 = local_4c8;
          if ((int)local_538 != 0) {
            if ((char)local_530 == '\0') {
              cVar20 = FUN_14796102a(local_590,*(undefined4 *)(lVar52 + 0xbc),&local_530,&local_510)
              ;
              if (cVar20 != '\0') {
                pplStack_3f0 = (longlong **)CONCAT71(pplStack_3f0._1_7_,(char)local_530);
                lVar36 = local_528;
                if (DAT_14c950c29 == 1) {
                  if (local_528 == 0) {
                    lVar36 = 0;
                  }
                  else {
                    FUN_1456cec3c();
                    lVar36 = local_528;
                  }
                }
                lVar51 = lStack_520;
                local_3e8 = lVar36;
                if ((DAT_14c950c29 & 1) != 0) {
                  if (lStack_520 == 0) {
                    lVar51 = 0;
                  }
                  else {
                    FUN_1456cec3c();
                    lVar51 = lStack_520;
                  }
                }
                local_3d8 = (undefined **)local_518;
                lStack_3e0 = lVar51;
              }
            }
            else {
              local_578 = (longlong *)((ulonglong)local_578 & 0xffffffff00000000);
            }
          }
        }
LAB_14340378b:
        FUN_1478b62f0(&local_538);
        lVar52 = lVar52 + 0x110;
        bVar54 = true;
        lVar44 = lVar44 + -0x110;
      } while (lVar44 != 0);
    }
    plVar28 = local_590;
    FUN_147961136(local_590);
    bVar23 = local_388;
    bVar54 = (int)local_3f8 != (int)plVar28[0xa3];
    plVar28[0xa3] = (longlong)local_3f8;
    *(undefined1 *)(plVar28 + 0xa4) = pplStack_3f0._0_1_;
    lVar52 = local_3e8;
    if (DAT_14c950c29 == 1) {
      if (local_3e8 == 0) {
        lVar52 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar52 = local_3e8;
      }
    }
    bVar21 = DAT_14c950c29;
    local_590[0xa5] = lVar52;
    lVar52 = lStack_3e0;
    if ((bVar21 & 1) != 0) {
      if (lStack_3e0 == 0) {
        lVar52 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar52 = lStack_3e0;
      }
    }
    plVar28 = local_590;
    local_590[0xa6] = lVar52;
    local_590[0xa7] = (longlong)local_3d8;
    *(uint *)(local_590 + 0xa8) = local_3d0;
    *(undefined4 *)((longlong)local_590 + 0x544) = uStack_3cc;
    *(undefined4 *)(local_590 + 0xa9) = (undefined4)uStack_3c8;
    *(undefined4 *)((longlong)local_590 + 0x54c) = uStack_3c8._4_4_;
    *(undefined4 *)(local_590 + 0xaa) = uStack_3c0;
    *(undefined4 *)((longlong)local_590 + 0x554) = uStack_3bc;
    *(undefined4 *)(local_590 + 0xab) = uStack_3b8;
    *(undefined4 *)((longlong)local_590 + 0x55c) = uStack_3b4;
    *(undefined4 *)(local_590 + 0xac) = uStack_3b0;
    FUN_1478b6290(local_590 + 0xad,&local_3a8);
    FUN_1479614b4(plVar28 + 0xaf,&local_398);
    *(byte *)(plVar28 + 0xb1) = local_388;
    if (plVar28[0x91] != 0) {
      bVar21 = local_388;
      if (((*(byte *)(plVar28 + 0xb6) & 1) != 0) &&
         (local_3f8._4_4_ < *(float *)(plVar28 + 0xa2) || ((ulonglong)local_578 & 1) != 0)) {
        *(char *)(plVar28 + 0xa4) = (char)plVar28[0x9e];
        lVar52 = plVar28[0x9f];
        if (DAT_14c950c29 == 1) {
          if (lVar52 == 0) {
            lVar52 = 0;
            plVar28 = local_590;
          }
          else {
            FUN_1456cec3c();
            lVar52 = local_590[0x9f];
            plVar28 = local_590;
          }
        }
        bVar21 = DAT_14c950c29;
        plVar28[0xa5] = lVar52;
        lVar52 = plVar28[0xa0];
        if ((bVar21 & 1) != 0) {
          if (lVar52 == 0) {
            lVar52 = 0;
            plVar28 = local_590;
          }
          else {
            FUN_1456cec3c();
            lVar52 = local_590[0xa0];
            plVar28 = local_590;
          }
        }
        plVar28[0xa6] = lVar52;
        plVar28[0xa7] = plVar28[0xa1];
        bVar21 = *(byte *)(plVar28 + 0xb1);
      }
      if (((bVar21 & 1) != 0) ||
         (cVar20 = FUN_147cec35a(plVar28 + 0xa4,local_4b8 + 8), cVar20 == '\0')) {
        FUN_14340df0c(plVar28[0x91],plVar28 + 0xa4);
      }
      FUN_147974556(plVar28[0x91]);
      lVar52 = local_458;
      if (bVar54 || (bVar23 & 1) != 0) {
        lVar44 = (longlong)(int)lStack_450;
        if (0 < lVar44) {
          lVar36 = 0;
          do {
            (**(code **)(*plVar28 + 0x1a8))
                      (plVar28,*(undefined8 *)(lVar52 + lVar36),
                       *(undefined4 *)(lVar52 + 0x18 + lVar36));
            lVar36 = lVar36 + 0x20;
          } while (lVar44 * 0x20 != lVar36);
        }
        if (0 < (longlong)(int)plVar28[0xb0]) {
          plVar40 = (longlong *)plVar28[0xaf];
          plVar47 = plVar40 + (longlong)(int)plVar28[0xb0] * 4;
          do {
            if ((*plVar40 != 0) && (lVar52 = plVar40[2], 0 < (longlong)(int)lVar52)) {
              local_538 = (longlong *)CONCAT44(local_538._4_4_,0xffffffff);
              local_530 = 0;
              local_528 = CONCAT44(0xffffffff,(float)*(int *)((longlong)plVar28 + 0x74));
              local_558 = 0;
              uStack_550 = 0;
              lVar44 = plVar40[1];
              lVar36 = 0;
              do {
                if (*(longlong *)(lVar44 + lVar36) != 0) {
                  local_528 = CONCAT44(*(undefined4 *)(*(longlong *)(lVar44 + lVar36) + 0xc),
                                       (undefined4)local_528);
                  FUN_1477b89fa(&local_568,&local_538);
                  uVar45 = uStack_550;
                  LOCK();
                  *(undefined4 *)((longlong)local_568 + 0x5c) = 1;
                  UNLOCK();
                  lVar51 = (longlong)(int)uStack_550;
                  uVar50 = (int)uStack_550 + 1;
                  uStack_550 = CONCAT44(uStack_550._4_4_,uVar50);
                  if (uStack_550._4_4_ < uVar50) {
                    FUN_1477cc91a(&local_558,uVar45 & 0xffffffff);
                  }
                  plVar28 = local_560;
                  *(longlong **)(local_558 + lVar51 * 0x10) = local_568;
                  *(longlong **)(local_558 + 8 + lVar51 * 0x10) = local_560;
                  if (local_560 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_560 + 1) = (int)local_560[1] + 1;
                    UNLOCK();
                    if (local_560 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = local_560 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*local_560)(local_560);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar28 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar28 + 0x10))(plVar28);
                        }
                      }
                    }
                  }
                }
                plVar28 = local_590;
                lVar36 = lVar36 + 8;
              } while ((longlong)(int)lVar52 * 8 != lVar36);
              (**(code **)(*local_590 + 0x1a0))(local_590,*plVar40,&local_558,(int)plVar40[3]);
              FUN_1477cc8d1(local_558,uStack_550 & 0xffffffff);
              if (local_558 != 0) {
                FUN_1400020a8();
              }
            }
            plVar40 = plVar40 + 4;
          } while (plVar40 != plVar47);
        }
      }
    }
    FUN_1478b62f0(local_4b8);
    FUN_1478b62f0(&local_3f8);
    local_3f8 = (code *)&LAB_14340ac1c;
    pplStack_3f0 = (longlong **)local_4b8;
    FUN_1479619ae(plVar28,&local_3f8);
    fVar57 = *(float *)((longlong)plVar28 + 0x5ac);
    if (0.5 <= fVar57) {
      fVar57 = 0.5;
    }
    FUN_14795fbfa();
    iVar24 = (int)plVar28[0x82];
    if (iVar24 == 0) {
      uVar42 = 1;
      uVar45 = 0;
      iVar38 = 0;
      iVar43 = 0;
    }
    else {
      puVar33 = (uint *)plVar28[0x81];
      if ((uint *)plVar28[0x81] == (uint *)0x0) {
        puVar33 = (uint *)(plVar28 + 0x7f);
      }
      uVar50 = *puVar33;
      if (uVar50 == 0) {
        iVar43 = iVar24 + 0x1e;
        if (-1 < iVar24 + -1) {
          iVar43 = iVar24 + -1;
        }
        uVar45 = 0;
        uVar42 = (ulonglong)(uint)(iVar43 >> 5);
        if (iVar43 >> 5 < 1) {
          uVar42 = uVar45;
        }
        iVar38 = 0;
        do {
          if (uVar42 == uVar45) goto LAB_143403e58;
          iVar38 = iVar38 + 0x20;
          uVar50 = puVar33[uVar45 + 1];
          uVar45 = uVar45 + 1;
        } while (uVar50 == 0);
      }
      else {
        uVar45 = 0;
        iVar38 = 0;
      }
      uVar42 = (ulonglong)(-uVar50 & uVar50);
      uVar6 = uVar42 * 2 + 1;
      lVar52 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar52 == 0; lVar52 = lVar52 + -1) {
        }
      }
      iVar43 = (iVar38 - ((uint)lVar52 ^ 0x3f)) + 0x3e;
      if (iVar24 <= iVar43) {
        iVar43 = iVar24;
      }
    }
    if (iVar43 < iVar24) {
      uVar50 = 0xffffffff;
      do {
        lVar44 = (longlong)iVar43 * 0x50;
        lVar52 = local_590[0x7d] + lVar44;
        dVar10 = (double)local_590[0xb4];
        dVar11 = *(double *)(lVar52 + 0x20);
        if ((dVar10 < *(double *)(lVar52 + 0x18)) || (dVar11 <= dVar10)) {
          dVar61 = *(double *)(lVar52 + 0x28);
          if ((dVar10 < dVar11) || (dVar61 <= dVar10)) {
            if (dVar61 <= dVar10) {
              if (*(char *)(lVar52 + 8) == '\0') {
                dVar11 = *(double *)(lVar52 + 0x30);
                uVar58 = SUB84(dVar11,0);
                uVar59 = (undefined4)((ulonglong)dVar11 >> 0x20);
                if ((*(int *)(lVar52 + 0xc) == 0 && *(int *)(lVar52 + 0x10) == 0 || 0.0 <= dVar11)
                   && (dVar11 <= dVar10)) goto LAB_143403cc0;
              }
              *(undefined8 *)(lVar52 + 0x40) = 0x23f800000;
              fVar55 = 1.0;
            }
            else {
              uVar58 = (undefined4)*(undefined8 *)(lVar52 + 0x30);
              uVar59 = (undefined4)((ulonglong)*(undefined8 *)(lVar52 + 0x30) >> 0x20);
LAB_143403cc0:
              if ((dVar10 < (double)CONCAT44(uVar59,uVar58)) ||
                 (*(double *)(lVar52 + 0x38) <= dVar10)) {
                *(undefined8 *)(lVar52 + 0x40) = 0x400000000;
                goto LAB_143403c77;
              }
              fVar55 = 1.0 - (float)((dVar10 - (double)CONCAT44(uVar59,uVar58)) /
                                    (*(double *)(lVar52 + 0x38) - (double)CONCAT44(uVar59,uVar58)));
              *(float *)(lVar52 + 0x40) = fVar55;
              if (*(int *)(lVar52 + 0x44) != 3) {
                *(undefined4 *)(lVar52 + 0x44) = 3;
                FUN_147960612(local_590,*(undefined8 *)(local_590[0x7d] + lVar44));
                fVar55 = *(float *)(lVar52 + 0x40);
              }
            }
          }
          else {
            fVar55 = (float)((dVar10 - dVar11) / (dVar61 - dVar11));
            *(float *)(lVar52 + 0x40) = fVar55;
            *(undefined4 *)(lVar52 + 0x44) = 1;
          }
        }
        else {
          *(undefined8 *)(lVar52 + 0x40) = 0;
LAB_143403c77:
          fVar55 = 0.0;
        }
        FUN_1434011f4(local_590,*(undefined8 *)(local_590[0x7d] + lVar44),fVar55,fVar57);
        if ((*(int *)(lVar52 + 0x44) == 4) && (*(int *)(lVar52 + 0x10) == 0)) {
          FUN_147960076(local_590,*(undefined8 *)(local_590[0x7d] + lVar44));
        }
        uVar50 = uVar50 & ~(uint)uVar42;
        puVar33 = (uint *)local_590[0x81];
        if ((uint *)local_590[0x81] == (uint *)0x0) {
          puVar33 = (uint *)(plVar28 + 0x7f);
        }
        iVar24 = (int)local_590[0x82];
        iVar43 = (int)uVar45;
        lVar52 = (longlong)iVar43;
        uVar29 = puVar33[lVar52] & uVar50;
        if (uVar29 == 0) {
          iVar30 = iVar24 + 0x1e;
          if (-1 < iVar24 + -1) {
            iVar30 = iVar24 + -1;
          }
          iVar30 = iVar30 >> 5;
          iVar31 = iVar30;
          if (iVar30 < iVar43) {
            iVar31 = iVar43;
          }
          if (iVar30 <= iVar43) break;
          lVar44 = 0;
          while( true ) {
            iVar38 = iVar38 + 0x20;
            uVar29 = puVar33[lVar44 + lVar52 + 1];
            if (uVar29 != 0) break;
            lVar44 = lVar44 + 1;
            if (iVar31 - lVar52 == lVar44) goto LAB_143403e58;
          }
          uVar45 = (ulonglong)(iVar43 + (int)lVar44 + 1);
          uVar50 = 0xffffffff;
        }
        uVar42 = (ulonglong)(-uVar29 & uVar29);
        uVar6 = uVar42 * 2 + 1;
        lVar52 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar52 == 0; lVar52 = lVar52 + -1) {
          }
        }
        iVar43 = (iVar38 - ((uint)lVar52 ^ 0x3f)) + 0x3e;
      } while (iVar43 < iVar24);
    }
LAB_143403e58:
    plVar28 = local_590;
    if (DAT_14c76135c != 0) {
      local_4b8 = ZEXT816(0);
      lVar52 = local_590[0xb8];
      if ((longlong)(int)lVar52 != 0) {
        lVar44 = local_590[0xb7];
        lVar36 = 0;
        do {
          lVar51 = *(longlong *)(lVar44 + lVar36);
          if ((*(char *)(lVar51 + 0x19e) == '\0') &&
             (cVar20 = FUN_1479602ba(plVar28,lVar51), cVar20 == '\0')) {
            uVar58 = local_4b8._8_4_;
            lVar34 = (longlong)(int)local_4b8._8_4_;
            uVar50 = local_4b8._8_4_ + 1;
            local_4b8._8_4_ = uVar50;
            if ((uint)local_4b8._12_4_ < uVar50) {
              FUN_14796ccec(local_4b8,uVar58);
            }
            *(longlong *)(local_4b8._0_8_ + lVar34 * 8) = lVar51;
          }
          lVar36 = lVar36 + 8;
        } while ((longlong)(int)lVar52 * 8 != lVar36);
        uVar46 = local_4b8._0_8_;
        lVar52 = (longlong)(int)local_4b8._8_4_;
        if (lVar52 != 0) {
          lVar44 = 0;
          do {
            lVar36 = *(longlong *)(uVar46 + lVar44);
            local_3f8 = (code *)0x0;
            pplStack_3f0 = (longlong **)((ulonglong)pplStack_3f0 & 0xffffffff00000000);
            local_3e8 = 0;
            cVar20 = FUN_143413712(lVar36,*(undefined8 *)(lVar36 + 0x58),1,&local_3f8);
            if (cVar20 != '\0') {
              FUN_14796095e(plVar28,lVar36);
              *(undefined8 *)(lVar36 + 0x40) = 0;
              *(undefined8 *)(lVar36 + 0x48) = 0;
              *(undefined8 *)(lVar36 + 0x30) = 0;
              *(undefined8 *)(lVar36 + 0x38) = 0;
              *(undefined4 *)(lVar36 + 0x50) = 0;
              FUN_143401e76(plVar28,&local_3f8);
            }
            lVar44 = lVar44 + 8;
          } while (lVar52 * 8 != lVar44);
        }
        if ((longlong *)local_4b8._0_8_ != (longlong *)0x0) {
          FUN_1400020a8(local_4b8._0_8_);
        }
      }
    }
    FUN_14340572a(plVar28,0);
    iVar24 = (int)plVar28[0x3d];
    local_578 = plVar28 + 0x148;
    if (iVar24 != (int)plVar28[0x149]) {
      FUN_14796186c(local_578);
      iVar24 = (int)plVar28[0x3d];
    }
    if (0 < iVar24) {
      lVar44 = 0;
      lVar52 = 0;
      do {
        lVar36 = plVar28[0x3c];
        lVar34 = lVar52 * 0x110;
        dVar15 = *(double *)(lVar36 + lVar34);
        dVar16 = ((double *)(lVar36 + lVar34))[1];
        dVar17 = *(double *)(lVar36 + 0x10 + lVar34);
        pdVar7 = (double *)(lVar36 + 0x18 + lVar34);
        dVar10 = *pdVar7;
        dVar11 = *pdVar7;
        dVar61 = dVar15 * 0.0 - dVar16 * 0.0;
        dVar63 = dVar16 * 1.0 - dVar17 * 0.0;
        dVar64 = dVar17 * 0.0 - dVar15 * 1.0;
        dVar63 = dVar63 + dVar63;
        dVar64 = dVar64 + dVar64;
        dVar61 = dVar61 + dVar61;
        dVar62 = dVar15 * 1.0 - dVar16 * 0.0;
        dVar65 = dVar16 * 0.0 - dVar17 * 1.0;
        dVar60 = dVar17 * 0.0 - dVar15 * 0.0;
        dVar65 = dVar65 + dVar65;
        dVar60 = dVar60 + dVar60;
        dVar62 = dVar62 + dVar62;
        lVar51 = *local_578;
        local_4a8 = dVar61 * dVar10 + 1.0 + (dVar64 * dVar15 - dVar63 * dVar16);
        dVar13 = (dVar61 * dVar16 - dVar64 * dVar17) + dVar10 * dVar63 + 0.0;
        dVar61 = (dVar17 * dVar63 - dVar15 * dVar61) + dVar11 * dVar64 + 0.0;
        local_488 = dVar62 * dVar10 + 0.0 + (dVar60 * dVar15 - dVar65 * dVar16);
        local_498 = (dVar62 * dVar16 - dVar60 * dVar17) + dVar10 * dVar65 + 0.0;
        dStack_490 = (dVar17 * dVar65 - dVar15 * dVar62) + dVar11 * dVar60 + 1.0;
        plVar40 = (longlong *)(lVar36 + 0x20 + lVar34);
        local_458 = *plVar40;
        lStack_450 = plVar40[1];
        local_468 = dVar13 * dStack_490 - local_498 * dVar61;
        local_470 = local_4a8 * local_498 - local_488 * dVar13;
        local_478 = dVar61 * local_488 - dStack_490 * local_4a8;
        local_448 = *(undefined8 *)(lVar36 + 0x30 + lVar34);
        local_4b8._8_4_ = SUB84(dVar61,0);
        local_4b8._0_8_ = dVar13;
        local_4b8._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
        local_4a0 = 0;
        local_480 = 0;
        local_460 = 0;
        local_440 = 0x3ff0000000000000;
        if ((((((9.99999993922529e-09 < ABS(dVar13)) || (9.99999993922529e-09 < ABS(dVar61))) ||
              (9.99999993922529e-09 < ABS(local_4a8))) ||
             ((9.99999993922529e-09 < ABS(local_498) || (9.99999993922529e-09 < ABS(dStack_490)))))
            || ((9.99999993922529e-09 < ABS(local_488) ||
                ((9.99999993922529e-09 < ABS(local_478) || (9.99999993922529e-09 < ABS(local_470))))
                ))) || (9.99999993922529e-09 < ABS(local_468))) {
          FUN_14007522e(&local_3f8);
        }
        else {
          puVar35 = &DAT_14c846400;
          puVar37 = &local_3f8;
          for (lVar36 = 0x10; lVar36 != 0; lVar36 = lVar36 + -1) {
            *puVar37 = *puVar35;
            puVar35 = puVar35 + 1;
            puVar37 = puVar37 + 1;
          }
        }
        puVar35 = &local_3f8;
        puVar37 = (undefined8 *)(lVar52 * 0x80 + lVar51);
        for (lVar36 = 0x10; lVar36 != 0; lVar36 = lVar36 + -1) {
          *puVar37 = *puVar35;
          puVar35 = puVar35 + 1;
          puVar37 = puVar37 + 1;
        }
        lVar51 = lVar51 + lVar44;
        lVar36 = 0;
        do {
          lVar34 = 0;
          do {
            iVar24 = _finite(*(double *)(lVar51 + lVar34 * 8));
            if (iVar24 == 0) goto LAB_1434042da;
            lVar34 = lVar34 + 1;
          } while (lVar34 != 4);
          lVar36 = lVar36 + 1;
          lVar51 = lVar51 + 0x20;
        } while (lVar36 != 4);
LAB_1434042da:
        lVar52 = lVar52 + 1;
        lVar44 = lVar44 + 0x80;
      } while (lVar52 < (int)local_590[0x3d]);
    }
    plVar40 = local_590;
    cVar20 = local_591;
    if ((int)local_590[0x3f] != 0) {
      if (0 < (int)local_590[0x3f]) {
        lVar52 = 0;
        do {
          cVar22 = (**(code **)(**(longlong **)(plVar40[0x3e] + lVar52 * 8) + 0x50))();
          if (cVar22 != '\0') {
            (**(code **)(**(longlong **)(plVar40[0x3e] + lVar52 * 8) + 0x38))();
          }
          lVar52 = lVar52 + 1;
        } while (lVar52 < (int)plVar40[0x3f]);
      }
      local_588 = plVar40 + 0xc4;
      *(undefined4 *)(plVar40 + 0xc5) = 0;
      if (*(int *)((longlong)plVar40 + 0x62c) < 0) {
        FUN_14796ee72();
      }
      uVar50 = *(uint *)(plVar40 + 0xb8);
      _Src = (void *)plVar40[0xb7];
      auVar18._4_4_ = local_4b8._12_4_;
      auVar18._0_4_ = uVar50;
      auVar18._8_8_ = 0;
      local_4b8 = auVar18 << 0x40;
      if ((longlong)(int)uVar50 == 0) {
        local_4b8 = ZEXT416(uVar50) << 0x40;
      }
      else {
        FUN_14796e710(local_4b8,uVar50);
        memcpy((void *)local_4b8._0_8_,_Src,(longlong)(int)uVar50 << 3);
        if (0 < (int)local_4b8._8_4_) {
          lVar52 = 0;
          do {
            lVar44 = *(longlong *)(local_4b8._0_8_ + lVar52 * 8);
            if (lVar44 != 0) {
              if (*(longlong **)(lVar44 + 0x18) == (longlong *)0x0) goto LAB_143404635;
              if ((((*(int *)(lVar44 + 0xc) == 0) ||
                   (uVar50 = *(uint *)(lVar44 + 8), (int)uVar50 < 0)) ||
                  (DAT_14c9647dc <= (int)uVar50)) ||
                 (((plVar47 = (longlong *)
                              ((ulonglong)((uVar50 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar50 >> 0x10) * 8)),
                   plVar47 == (longlong *)0x0 || ((int)plVar47[2] != *(int *)(lVar44 + 0xc))) ||
                  (((*(uint *)(plVar47 + 1) & 0x10200000) != 0 ||
                   ((*plVar47 == 0 || ((*(byte *)(*plVar47 + 0x156) & 2) != 0)))))))) {
                cVar22 = (**(code **)(**(longlong **)(lVar44 + 0x18) + 0x300))();
                if (((cVar22 == '\0') && ((*(byte *)(lVar44 + 0x19a) & 8) == 0)) &&
                   ((((lVar36 = *(longlong *)(lVar44 + 0x20), lVar36 == 0 &&
                      (lVar36 = *(longlong *)(*(longlong *)(lVar44 + 0x18) + 0x130), lVar36 == 0))
                     || ((*(byte *)(lVar36 + 0x38) & 1) == 0)) || (*(int *)(lVar36 + 0x30) == 0))))
                {
                  fVar57 = (float)(**(code **)(**(longlong **)(lVar44 + 0x18) + 0x2c8))();
                  if ((*(byte *)(*(longlong *)(lVar44 + 0x18) + 0x38) & 0x60) == 0) {
                    if (((*(byte *)(lVar44 + 0x19b) & 0x10) == 0) &&
                       ((*(byte *)(lVar44 + 0x198) & 0x10) != 0)) goto LAB_143404635;
                  }
                  else if ((1.0 < fVar57) && (fVar57 + 1.0 < *(float *)(lVar44 + 0x1a8))) {
LAB_143404635:
                    FUN_14796095e(plVar40);
                    goto LAB_14340461f;
                  }
                }
                fVar57 = (float)DAT_14c759090;
                if (0.5 <= fVar57) {
                  fVar57 = 0.5;
                }
                fVar55 = fVar57;
                if ((cVar20 == '\0') && (fVar55 = 0.0, *(char *)(lVar44 + 0x199) < '\0')) {
                  fVar55 = fVar57;
                }
                FUN_1433b4db4(lVar44,plVar28 + 0x3c);
                FUN_1433b5e0a(lVar44,local_588,fVar55);
              }
            }
LAB_14340461f:
            lVar52 = lVar52 + 1;
          } while (lVar52 < (int)local_4b8._8_4_);
        }
      }
      plVar28 = plVar40 + 0x115;
      FUN_147d32cd8(plVar28);
      FUN_147d32bce(plVar28);
      plVar47 = local_588;
      if (0 < (longlong)(int)local_4b8._8_4_) {
        uVar45 = (longlong)(int)local_4b8._8_4_ + 1;
        do {
          lVar52 = *(longlong *)(local_4b8._0_8_ + (uVar45 - 2) * 8);
          if ((((lVar52 != 0) && ((*(byte *)(lVar52 + 0x198) & 0x40) != 0)) &&
              (*(char *)(lVar52 + 0x19e) != '\x02')) &&
             (cVar20 = FUN_1479602ba(plVar40), plVar47 = local_588, cVar20 == '\0')) {
            FUN_1436fabc4(plVar28);
            plVar47 = local_588;
          }
          uVar45 = uVar45 - 1;
        } while (1 < uVar45);
      }
      uVar45 = (ulonglong)(int)plVar40[0xc5];
      if (0 < (longlong)uVar45) {
        iVar24 = -(int)plVar40[0xc5];
        uVar42 = uVar45;
        do {
          iVar43 = (int)uVar45;
          lVar52 = *plVar47;
          if ((*(byte *)(*(longlong *)(*(longlong *)(lVar52 + -8 + uVar42 * 8) + 0x60) + 0x198) &
              0x40) != 0) {
            if (uVar42 != (uVar45 & 0xffffffff)) {
              iVar38 = iVar43 + iVar24;
              if (0 < iVar38) {
                iVar38 = 1;
              }
              memmove((void *)(lVar52 + uVar42 * 8 + -8),
                      (void *)(lVar52 + (longlong)(iVar43 - iVar38) * 8),(longlong)iVar38 << 3);
              iVar43 = (int)plVar40[0xc5];
              plVar47 = local_588;
            }
            uVar45 = (ulonglong)(iVar43 - 1U);
            *(uint *)(plVar40 + 0xc5) = iVar43 - 1U;
          }
          iVar24 = iVar24 + 1;
          bVar54 = 1 < uVar42;
          uVar42 = uVar42 - 1;
        } while (bVar54);
      }
      if (0 < (int)local_4b8._8_4_) {
        lVar52 = 0;
        iVar24 = local_4b8._8_4_;
        do {
          if (*(longlong *)(local_4b8._0_8_ + lVar52 * 8) != 0) {
            FUN_1478b650a();
            plVar47 = local_588;
            iVar24 = local_4b8._8_4_;
          }
          lVar52 = lVar52 + 1;
        } while (lVar52 < iVar24);
        uVar45 = (ulonglong)*(uint *)(plVar40 + 0xc5);
      }
      uVar42 = 0;
      uVar50 = (uint)uVar45;
      if (0 < (int)uVar50) {
        if (uVar50 != 1) {
          plVar47 = (longlong *)*plVar47;
          memset(&local_3e8,0,0x2f0);
          pplStack_3f0 = (longlong **)(plVar47 + ((uVar45 & 0xffffffff) - 1));
          local_3f8 = (code *)plVar47;
          fVar57 = logf((float)(int)uVar50);
          local_3e8 = CONCAT44(local_3e8._4_4_,(int)(longlong)(fVar57 + fVar57));
          plVar28 = &local_3f8;
          do {
            puVar37 = (undefined8 *)*plVar28;
            puVar35 = (undefined8 *)plVar28[1];
            iVar24 = (int)((ulonglong)((longlong)puVar35 - (longlong)puVar37) >> 3);
            uVar50 = iVar24 + 1;
            local_578 = (longlong *)CONCAT44(local_578._4_4_,(int)plVar28[2]);
            puVar27 = puVar37;
            puVar49 = puVar35;
            local_580 = plVar28;
            if ((int)plVar28[2] != 0) {
LAB_143404838:
              if (8 < (int)uVar50) {
                uVar46 = puVar37[uVar50 >> 1];
                puVar37[uVar50 >> 1] = *puVar37;
                *puVar37 = uVar46;
                puVar41 = puVar35 + 1;
                puVar48 = puVar37;
                local_570 = puVar27;
                do {
                  puVar19 = puVar48 + 1;
                  puVar39 = puVar48 + 1;
                  do {
                    puVar48 = puVar39;
                    puVar27 = puVar19;
                    if (puVar35 < puVar48) break;
                    uVar46 = *puVar48;
                    fVar57 = (float)FUN_14795c614(*puVar37);
                    fVar55 = (float)FUN_14795c614(uVar46);
                    puVar19 = puVar27 + 1;
                    puVar39 = puVar48 + 1;
                  } while (fVar55 <= fVar57);
                  puVar19 = puVar41 + -2;
                  do {
                    puVar39 = puVar41;
                    puVar53 = puVar19;
                    puVar41 = puVar39 + -1;
                    if (puVar41 <= puVar37) break;
                    uVar46 = *puVar37;
                    fVar57 = (float)FUN_14795c614(*puVar41);
                    fVar55 = (float)FUN_14795c614(uVar46);
                    puVar19 = puVar53 + -1;
                  } while (fVar55 <= fVar57);
                  if (puVar41 < puVar48) goto LAB_1434048e8;
                  uVar46 = *puVar48;
                  *puVar48 = *puVar41;
                  *puVar41 = uVar46;
                } while( true );
              }
              plVar28 = local_580;
              if (puVar37 < puVar35) {
                do {
                  puVar27 = puVar37;
                  if (puVar37 + 1 <= puVar35) {
                    uVar46 = *puVar37;
                    puVar49 = puVar37;
                    puVar41 = puVar37 + 1;
                    do {
                      uVar12 = *puVar41;
                      fVar57 = (float)FUN_14795c614(uVar46);
                      fVar55 = (float)FUN_14795c614(uVar12);
                      puVar27 = puVar41;
                      if (fVar55 <= fVar57) {
                        puVar27 = puVar49;
                        uVar12 = uVar46;
                      }
                      uVar46 = uVar12;
                      puVar41 = puVar41 + 1;
                      puVar49 = puVar27;
                    } while (puVar41 <= puVar35);
                  }
                  uVar46 = *puVar27;
                  *puVar27 = *puVar35;
                  *puVar35 = uVar46;
                  puVar35 = puVar35 + -1;
                  plVar28 = local_580;
                } while (puVar37 < puVar35);
              }
              goto LAB_143404b7b;
            }
LAB_14340499d:
            plVar28 = local_580;
            if (uVar50 != 0) {
              iVar24 = (iVar24 - (iVar24 + -1 >> 0x1f)) + -1 >> 1;
              iVar43 = iVar24;
joined_r0x0001434049bc:
              do {
                iVar38 = iVar24 * 2 + 1;
                if (iVar38 < (int)uVar50) {
                  iVar30 = iVar24 * 2 + 2;
                  if (iVar30 < (int)uVar50) {
                    uVar46 = puVar37[iVar38];
                    fVar57 = (float)FUN_14795c614(puVar37[iVar30]);
                    fVar55 = (float)FUN_14795c614(uVar46);
                    if (fVar55 <= fVar57) {
                      iVar38 = iVar30;
                    }
                  }
                  uVar46 = puVar37[iVar38];
                  uVar12 = puVar37[iVar24];
                  fVar57 = (float)FUN_14795c614(uVar12);
                  fVar55 = (float)FUN_14795c614(uVar46);
                  if (fVar57 < fVar55) {
                    puVar37[iVar24] = uVar46;
                    puVar37[iVar38] = uVar12;
                    iVar24 = iVar38;
                    goto joined_r0x0001434049bc;
                  }
                }
                bVar54 = iVar43 != 0;
                iVar24 = iVar43 + -1;
                iVar43 = iVar24;
              } while (bVar54);
              plVar28 = local_580;
              if (1 < (int)uVar50) {
                uVar45 = (ulonglong)uVar50;
                uVar46 = *puVar37;
                *puVar37 = puVar37[uVar45 - 1];
                puVar37[uVar45 - 1] = uVar46;
                if (uVar50 != 2) {
                  do {
                    uVar42 = uVar45 - 1;
                    iVar24 = 0;
                    iVar38 = 1;
                    iVar43 = 0;
                    do {
                      iVar24 = iVar24 + 2;
                      iVar30 = iVar38;
                      if ((longlong)iVar24 < (longlong)uVar42) {
                        uVar46 = puVar37[iVar38];
                        fVar57 = (float)FUN_14795c614(puVar37[iVar24]);
                        fVar55 = (float)FUN_14795c614(uVar46);
                        if (fVar55 <= fVar57) {
                          iVar30 = iVar24;
                        }
                      }
                      uVar46 = puVar37[iVar30];
                      uVar12 = puVar37[iVar43];
                      fVar57 = (float)FUN_14795c614(uVar12);
                      fVar55 = (float)FUN_14795c614(uVar46);
                      if (fVar55 <= fVar57) break;
                      puVar37[iVar43] = uVar46;
                      puVar37[iVar30] = uVar12;
                      iVar24 = iVar30 * 2;
                      iVar38 = iVar30 * 2 + 1;
                      iVar43 = iVar30;
                    } while ((longlong)iVar38 < (longlong)uVar42);
                    uVar46 = *puVar37;
                    *puVar37 = puVar37[uVar45 - 2];
                    puVar37[uVar45 - 2] = uVar46;
                    plVar28 = local_580;
                    uVar45 = uVar42;
                  } while (2 < uVar42);
                }
              }
            }
LAB_143404b7b:
            plVar28 = plVar28 + -3;
            plVar40 = local_590;
          } while (&local_3f8 <= plVar28);
        }
        iVar43 = DAT_14cacdfa8;
        bVar23 = FUN_146269f19();
        fVar57 = *(float *)((longlong)plVar40 + (ulonglong)(bVar23 ^ 1) * 4 + 0x14c) *
                 _DAT_14c761314;
        bVar23 = FUN_146269f19();
        iVar24 = DAT_14cacde18;
        if (DAT_14cacde18 < 1) {
          iVar24 = *(int *)((longlong)plVar40 + (ulonglong)(bVar23 ^ 1) * 4 + 0x144);
        }
        iVar38 = (int)(fVar57 * (float)iVar24);
        iVar24 = (int)plVar40[0x28];
        if (iVar38 < (int)plVar40[0x28]) {
          iVar24 = iVar38;
        }
        iVar38 = 1;
        if (1 < iVar24) {
          iVar38 = iVar24;
        }
        plVar47 = local_588;
        if (iVar43 == 0) {
          uVar50 = *(uint *)(plVar40 + 0xc5);
          uVar42 = 0;
          if (0 < (int)(uVar50 - iVar38)) {
            uVar42 = (ulonglong)(uVar50 - iVar38);
          }
        }
        else {
          fVar57 = (float)iVar38;
          uVar50 = *(uint *)(plVar40 + 0xc5);
          lVar52 = (longlong)(int)uVar50 << 3;
          uVar29 = uVar50;
          do {
            uVar14 = uVar29;
            uVar42 = (ulonglong)uVar14;
            if (lVar52 == 0) goto LAB_143404c63;
            fVar57 = fVar57 - *(float *)(*(longlong *)(plVar40[0xc4] + -8 + lVar52) + 0xa4);
            lVar52 = lVar52 + -8;
            uVar29 = uVar14 - 1;
          } while (0.0 <= fVar57);
          uVar42 = (ulonglong)((uVar14 + (fVar57 < 0.0)) - 1);
        }
      }
LAB_143404c63:
      if ((longlong *)local_4b8._0_8_ != (longlong *)0x0) {
        FUN_1400020a8();
        uVar50 = *(uint *)(plVar40 + 0xc5);
        plVar47 = local_588;
      }
      iVar24 = (int)uVar42;
      if (iVar24 < (int)uVar50) {
        lVar52 = (longlong)iVar24;
        do {
          uVar45 = *(ulonglong *)(plVar40[0xc4] + lVar52 * 8);
          pbVar3 = (byte *)(*(longlong *)(uVar45 + 0x60) + 0x19b);
          *pbVar3 = *pbVar3 | 0x10;
          if ((int)plVar40[0x5e] != *(int *)((longlong)plVar40 + 0x31c)) {
            uVar50 = ((uint)(uVar45 >> 0x14) & 0xffff ^ (uint)(uVar45 >> 4)) * -0x7a143595;
            uVar50 = (uVar50 >> 0xd ^ uVar50) * -0x3d4d51cb;
            plVar28 = (longlong *)plVar40[0x65];
            if ((longlong *)plVar40[0x65] == (longlong *)0x0) {
              plVar28 = plVar40 + 100;
            }
            iVar43 = *(int *)((longlong)plVar28 +
                             (ulonglong)((int)plVar40[0x66] - 1U & (uVar50 >> 0x10 ^ uVar50)) * 4);
            if (iVar43 != -1) {
              do {
                puVar5 = (ulonglong *)(plVar40[0x5d] + (longlong)iVar43 * 0x18);
                if (*puVar5 == uVar45) {
                  if ((puVar5 != (ulonglong *)0x0) && (uVar6 = puVar5[1], uVar6 != 0)) {
                    *(int *)(uVar6 + 0x3c) = (int)plVar40[0x2b];
                    fVar57 = *(float *)(uVar45 + 0x90);
                    fVar55 = *(float *)(uVar45 + 0x9c);
                    fVar8 = *(float *)(uVar45 + 0x94);
                    fVar9 = *(float *)(uVar45 + 0x98);
                    fVar56 = (float)FUN_14795c3ca();
                    plVar47 = local_588;
                    if (0.0 < fVar56 * fVar8 * fVar9 * fVar57 * fVar55) {
                      *(int *)(uVar6 + 0x40) = (int)plVar40[0x2b];
                    }
                  }
                  break;
                }
                iVar43 = (int)puVar5[2];
              } while (iVar43 != -1);
            }
          }
          lVar52 = lVar52 + 1;
        } while (lVar52 < (int)plVar40[0xc5]);
      }
      if (0 < (int)plVar40[0x3f]) {
        lVar52 = 0;
        do {
          plVar28 = *(longlong **)(plVar40[0x3e] + lVar52 * 8);
          lVar44 = plVar28[2];
          if (lVar44 != 0) {
            if (((*(byte *)(*(longlong *)(lVar44 + 0x60) + 0x198) & 0x40) == 0) &&
               (plVar40[0x2b] == (longlong)*(int *)((longlong)plVar28 + 0x3c))) {
              bVar23 = *(byte *)(plVar28 + 0x12);
              uVar50 = *(uint *)(lVar44 + 0xcc) >> 0xf;
              *(byte *)(plVar28 + 0x12) = bVar23 & 0xfb | (byte)uVar50 & 4;
              if ((bVar23 & 8) == 0) {
                lVar44 = 0xa8;
                if ((bVar23 & 2) != 0 || (uVar50 & 4) != 0) {
LAB_143404e36:
                  (**(code **)(*plVar28 + lVar44))();
                  plVar47 = local_588;
                  if (plVar28[2] == 0) goto LAB_143404e4b;
                }
              }
              else {
                lVar44 = 0x30;
                if ((bVar23 & 2) == 0 && (uVar50 & 4) == 0) goto LAB_143404e36;
              }
              FUN_14795b56a(plVar28);
              lVar44 = *plVar28;
LAB_143404e16:
              puVar35 = (undefined8 *)(lVar44 + 0x28);
            }
            else {
              cVar20 = (**(code **)(*plVar28 + 0x48))(plVar28);
              lVar44 = *plVar28;
              if (cVar20 != '\0') goto LAB_143404e16;
              puVar35 = (undefined8 *)(lVar44 + 0x38);
            }
            (*(code *)*puVar35)();
            plVar47 = local_588;
          }
LAB_143404e4b:
          lVar52 = lVar52 + 1;
        } while (lVar52 < (int)plVar40[0x3f]);
      }
      if (0 < iVar24) {
        uVar45 = 0;
        do {
          lVar52 = *(longlong *)(*plVar47 + uVar45 * 8);
          if (lVar52 != 0) {
            if ((*(int *)(lVar52 + 0xc4) == 2) ||
               ((*(byte *)(*(longlong *)(lVar52 + 0x60) + 0x198) & 8) != 0)) {
              *(byte *)(lVar52 + 0xcc) = *(byte *)(lVar52 + 0xcc) & 0xbf;
            }
            else {
              *(byte *)(lVar52 + 0xcc) = *(byte *)(lVar52 + 0xcc) | 0x40;
            }
          }
          uVar45 = uVar45 + 1;
        } while (uVar42 != uVar45);
      }
      local_4b8 = ZEXT816(0);
      if (iVar24 < (int)plVar40[0xc5]) {
        plVar28 = plVar40 + 0x5d;
        plVar1 = plVar40 + 100;
        plVar4 = plVar40 + 0x40;
        lVar52 = (longlong)iVar24;
        do {
          local_538 = *(longlong **)(*plVar47 + lVar52 * 8);
          local_558 = *local_538;
          if (((((local_558 != 0) && (*(int *)(local_558 + 0x330) != 1)) &&
               (((*(uint *)(local_558 + 8) >> 10 & 1) == 0 || (DAT_14c761318 == 0)))) &&
              ((*(byte *)(local_538[0xc] + 0x198) & 0x40) == 0)) &&
             ((local_591 != '\0' || ((*(byte *)((longlong)local_538 + 0xcd) & 0x20) != 0)))) {
            if ((int)plVar40[0x5e] != *(int *)((longlong)plVar40 + 0x31c)) {
              uVar50 = ((uint)((ulonglong)local_538 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_538 >> 4)) * -0x7a143595;
              uVar50 = (uVar50 >> 0xd ^ uVar50) * -0x3d4d51cb;
              plVar47 = (longlong *)plVar40[0x65];
              if ((longlong *)plVar40[0x65] == (longlong *)0x0) {
                plVar47 = plVar1;
              }
              iVar43 = *(int *)((longlong)plVar47 +
                               (ulonglong)((int)plVar40[0x66] - 1U & (uVar50 >> 0x10 ^ uVar50)) * 4)
              ;
              if (iVar43 != -1) {
                do {
                  puVar35 = (undefined8 *)(*plVar28 + (longlong)iVar43 * 0x18);
                  if ((longlong *)*puVar35 == local_538) {
                    if (puVar35 != (undefined8 *)0x0) {
                      local_568 = (longlong *)puVar35[1];
                      if (local_568 == (longlong *)0x0) goto LAB_143405060;
                      cVar20 = (**(code **)(*local_568 + 0x20))();
                      plVar47 = local_588;
                      if ((cVar20 == '\0') &&
                         (cVar20 = (**(code **)(*local_568 + 0x10))(), plVar47 = local_588,
                         cVar20 != '\0')) {
                        cVar20 = (**(code **)(*local_568 + 0x18))(local_568,local_538);
                        if (cVar20 == '\0') {
                          if ((*(int *)((longlong)local_538 + 0xc4) == 2) ||
                             ((*(byte *)(local_538[0xc] + 0x198) & 8) != 0)) {
                            *(byte *)((longlong)local_538 + 0xcc) =
                                 *(byte *)((longlong)local_538 + 0xcc) & 0xbf;
                          }
                          else {
                            *(byte *)((longlong)local_538 + 0xcc) =
                                 *(byte *)((longlong)local_538 + 0xcc) | 0x40;
                          }
                          iVar43 = (int)plVar40[0x41];
                          *(uint *)(plVar40 + 0x41) = iVar43 + 1U;
                          if (*(uint *)((longlong)plVar40 + 0x20c) < iVar43 + 1U) {
                            FUN_147969fb8(plVar4,iVar43);
                          }
                          *(longlong **)(*plVar4 + (longlong)iVar43 * 8) = local_568;
                          plVar40 = local_590;
                          plVar47 = local_588;
                        }
                        else {
                          (**(code **)(*local_568 + 0x28))();
                          plVar47 = local_588;
                          if ((*(byte *)(local_568 + 0x12) & 8) == 0) {
                            (**(code **)(*local_568 + 0x30))();
                            plVar47 = local_588;
                          }
                        }
                      }
                      goto LAB_14340526c;
                    }
                    break;
                  }
                  iVar43 = *(int *)(puVar35 + 2);
                } while (iVar43 != -1);
              }
            }
            local_568 = (longlong *)0x0;
LAB_143405060:
            iVar43 = (int)plVar40[0x41];
            if (iVar43 == 0) {
              FUN_147961724(plVar40);
              iVar43 = (int)plVar40[0x41];
            }
            plVar47 = *(longlong **)(plVar40[0x40] + -8 + (longlong)iVar43 * 8);
            *(int *)(plVar40 + 0x41) = iVar43 + -1;
            FUN_14796e76a(plVar4);
            local_568 = plVar47;
            FUN_14796e806(local_4b8,&local_558);
            cVar20 = (**(code **)(*local_568 + 8))(local_568,local_538);
            if (cVar20 == '\0') {
LAB_14340512f:
              FUN_14796095e(plVar40,local_538[0xc]);
              if ((*(int *)((longlong)local_538 + 0xc4) == 2) ||
                 ((*(byte *)(local_538[0xc] + 0x198) & 8) != 0)) {
                *(byte *)((longlong)local_538 + 0xcc) = *(byte *)((longlong)local_538 + 0xcc) & 0xbf
                ;
              }
              else {
                *(byte *)((longlong)local_538 + 0xcc) = *(byte *)((longlong)local_538 + 0xcc) | 0x40
                ;
              }
              local_568[2] = 0;
              iVar43 = (int)plVar40[0x41];
              *(uint *)(plVar40 + 0x41) = iVar43 + 1U;
              if (*(uint *)((longlong)plVar40 + 0x20c) < iVar43 + 1U) {
                FUN_147969fb8(plVar4,iVar43);
              }
              *(longlong **)(*plVar4 + (longlong)iVar43 * 8) = local_568;
              FUN_147969de8(plVar28,local_538);
              plVar40 = local_590;
              plVar47 = local_588;
            }
            else {
              cVar20 = (**(code **)(*local_568 + 0x10))();
              if (cVar20 == '\0') {
                FUN_147963658(local_538,local_591);
              }
              else {
                cVar20 = (**(code **)(*local_568 + 0x18))(local_568,local_538);
                if (cVar20 == '\0') goto LAB_14340512f;
                bVar23 = *(byte *)(local_568 + 0x12);
                uVar50 = *(uint *)(local_568[2] + 0xcc) >> 0xf;
                *(byte *)(local_568 + 0x12) = bVar23 & 0xfb | (byte)uVar50 & 4;
                if ((bVar23 & 8) == 0) {
                  lVar44 = 0xa8;
                  if ((bVar23 & 2) != 0 || (uVar50 & 4) != 0) {
LAB_14340528b:
                    (**(code **)(*local_568 + lVar44))();
                  }
                }
                else {
                  lVar44 = 0x30;
                  if ((bVar23 & 2) == 0 && (uVar50 & 4) == 0) goto LAB_14340528b;
                }
                (**(code **)(*local_568 + 0x28))();
                if ((*(byte *)(local_568 + 0x12) & 8) == 0) {
                  (**(code **)(*local_568 + 0x30))();
                }
              }
              local_3f8 = (code *)&local_538;
              pplStack_3f0 = &local_568;
              FUN_14796e872(plVar28,local_4bc);
              plVar47 = local_588;
            }
          }
LAB_14340526c:
          lVar52 = lVar52 + 1;
        } while (lVar52 < (int)plVar40[0xc5]);
        if (0 < (int)local_4b8._8_4_) {
          EnterCriticalSection((LPCRITICAL_SECTION)(plVar40 + 0xbd));
          lVar52 = (longlong)(int)local_4b8._8_4_;
          if (lVar52 != 0) {
            uVar46 = local_4b8._0_8_;
            lVar44 = 0;
            do {
              local_3f8 = *(code **)(uVar46 + lVar44);
              FUN_14796e806(plVar40 + 0xbb,&local_3f8);
              lVar44 = lVar44 + 8;
            } while (lVar52 * 8 != lVar44);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(plVar40 + 0xbd));
          plVar47 = local_588;
        }
        if ((longlong *)local_4b8._0_8_ != (longlong *)0x0) {
          FUN_1400020a8();
          plVar47 = local_588;
        }
      }
      local_3f8 = (code *)0x0;
      pplStack_3f0 = (longlong **)0x0;
      if (iVar24 < (int)plVar40[0xc5]) {
        lVar52 = (longlong)iVar24;
        do {
          lVar44 = *(longlong *)(*plVar47 + lVar52 * 8);
          if ((lVar44 != 0) && (lVar36 = *(longlong *)(lVar44 + 8), lVar36 != 0)) {
            fVar57 = *(float *)(lVar44 + 0x90);
            fVar55 = *(float *)(lVar44 + 0x94);
            fVar8 = *(float *)(lVar44 + 0x9c);
            fVar9 = *(float *)(lVar44 + 0x98);
            fVar56 = (float)FUN_14795c3ca(lVar44);
            iVar24 = *(int *)(lVar36 + 0x1d8);
            plVar47 = local_588;
            if ((longlong)iVar24 != 0) {
              fVar56 = fVar56 * fVar57 * fVar8 * fVar55 * fVar9;
              lVar36 = *(longlong *)(lVar36 + 0x1d0);
              lVar51 = 0;
              do {
                if ((*(float *)(lVar36 + 8 + lVar51) <= fVar56) &&
                   (fVar56 <= *(float *)(lVar36 + 0xc + lVar51))) {
                  fVar57 = *(float *)(*(longlong *)(lVar44 + 0x60) + 0x1a8);
                  lVar34 = *(longlong *)(lVar36 + lVar51);
                  if ((fVar57 == 0.0) && (!NAN(fVar57))) {
                    if (lVar34 == 0) {
                      lVar34 = 0;
                    }
                    else {
                      FUN_1434019ac(plVar40,lVar34,1,1);
                      lVar34 = *(longlong *)(lVar36 + lVar51);
                    }
                  }
                  local_4b8._0_8_ = lVar34;
                  FUN_14796c20e(&local_3f8,local_4b8);
                  plVar47 = local_588;
                }
                lVar51 = lVar51 + 0x10;
              } while ((longlong)iVar24 * 0x10 != lVar51);
            }
          }
          lVar52 = lVar52 + 1;
        } while (lVar52 < (int)plVar40[0xc5]);
        if ((longlong)(int)pplStack_3f0 != 0) {
          plVar28 = (longlong *)((longlong)local_3f8 + (longlong)(int)pplStack_3f0 * 8);
          plVar47 = (longlong *)local_3f8;
          bVar23 = DAT_14c950c29;
          do {
            lVar52 = *plVar47;
            if ((lVar52 != 0) && ((bVar23 & 1) != 0)) {
              FUN_1456cec3c(lVar52);
            }
            lVar44 = plVar40[0x10a];
            if ((longlong)(int)lVar44 != 0) {
              lVar36 = plVar40[0x109];
              uVar45 = 0;
              bVar23 = DAT_14c950c29;
              do {
                if ((~bVar23 & 1) == 0 && lVar52 != 0) {
                  FUN_1456cec3c(lVar52);
                  bVar23 = DAT_14c950c29;
                }
                if (*(longlong *)(lVar36 + uVar45) == lVar52) {
                  if ((~uVar45 & 0x7fffffff8) != 0) goto LAB_14340562b;
                  break;
                }
                uVar45 = uVar45 + 8;
              } while ((longlong)(int)lVar44 * 8 != uVar45);
            }
            FUN_1434019ac(plVar40,lVar52,1,0);
            bVar23 = DAT_14c950c29;
LAB_14340562b:
            plVar47 = plVar47 + 1;
          } while (plVar47 != plVar28);
        }
      }
      cVar20 = local_591;
      lVar52 = (longlong)(int)plVar40[0x10a];
      if (0 < lVar52) {
        do {
          if ((longlong)(int)pplStack_3f0 != 0) {
            uVar45 = 0;
            do {
              if (*(longlong *)((longlong)local_3f8 + uVar45) ==
                  *(longlong *)(plVar40[0x109] + -8 + lVar52 * 8)) {
                if ((~uVar45 & 0x7fffffff8) != 0) goto LAB_1434054e2;
                break;
              }
              uVar45 = uVar45 + 8;
            } while ((longlong)(int)pplStack_3f0 * 8 != uVar45);
          }
          FUN_143401baa(plVar40);
LAB_1434054e2:
          bVar54 = 1 < lVar52;
          lVar52 = lVar52 + -1;
        } while (bVar54);
      }
      FUN_1479604ec(plVar40 + 0x109);
      if (local_3f8 != (code *)0x0) {
        FUN_1400020a8();
      }
      if ((cVar20 != '\0') && (lVar52 = plVar40[0xb8], (longlong)(int)lVar52 != 0)) {
        lVar44 = plVar40[0xb7];
        lVar36 = 0;
        do {
          lVar51 = *(longlong *)(lVar44 + lVar36);
          fVar57 = *(float *)((longlong)plVar40 + 0x5ac);
          if (0.5 <= fVar57) {
            fVar57 = 0.5;
          }
          fVar57 = fVar57 * *(float *)(lVar51 + 0x1b0);
          *(float *)(lVar51 + 0x1a8) = *(float *)(lVar51 + 0x1a8) + fVar57;
          *(float *)(lVar51 + 0x1ac) = fVar57 + *(float *)(lVar51 + 0x1ac);
          lVar36 = lVar36 + 8;
        } while ((longlong)(int)lVar52 * 8 != lVar36);
      }
      FUN_146269f19();
      FUN_146269f19();
    }
    (**(code **)(*plVar40 + 0x218))(plVar40);
    local_3d0 = *(uint *)(plVar40 + 0x12);
    if (plVar40[0x91] == 0) {
      uStack_3c8 = 0;
    }
    else {
      uStack_3c8 = *(undefined8 *)(plVar40[0x91] + 0x18);
    }
    local_3e8 = 0;
    local_3d8 = &PTR_LAB_14a7ecb30;
    local_3f8 = FUN_14340ac30;
    FUN_1434130f2();
  }
  if ((local_f0 ^ (ulonglong)auStack_5b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1434048e8:
  uVar46 = *puVar37;
  *puVar37 = *puVar41;
  *puVar41 = uVar46;
  iVar43 = (int)local_578 + -1;
  local_578 = (longlong *)CONCAT44(local_578._4_4_,iVar43);
  puVar39 = puVar39 + -2;
  if ((longlong)puVar53 - (longlong)local_570 < (longlong)puVar49 - (longlong)puVar27) {
    if (puVar48 < puVar35) {
      *local_580 = (longlong)puVar48;
      local_580[1] = (longlong)puVar35;
      *(int *)(local_580 + 2) = iVar43;
      local_580 = local_580 + 3;
    }
    plVar28 = local_580;
    puVar27 = puVar37;
    if (puVar41 <= puVar37 + 1) goto LAB_143404b7b;
  }
  else {
    plVar28 = local_580;
    if (puVar37 + 1 < puVar41) {
      *local_580 = (longlong)puVar37;
      local_580[1] = (longlong)puVar39;
      *(int *)(local_580 + 2) = iVar43;
      plVar28 = local_580 + 3;
    }
    puVar37 = puVar48;
    puVar39 = puVar35;
    puVar53 = puVar35;
    if (puVar35 <= puVar48) goto LAB_143404b7b;
  }
  local_580 = plVar28;
  iVar24 = (int)((ulonglong)((longlong)puVar53 - (longlong)puVar27) >> 3);
  uVar50 = iVar24 + 1;
  puVar35 = puVar39;
  puVar49 = puVar53;
  if (iVar43 == 0) goto LAB_14340499d;
  goto LAB_143404838;
}



// FUNCTION 14340572a FUN_14340572a body=1820 status=ok
// SIG undefined FUN_14340572a(void)

void FUN_14340572a(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int *piVar4;
  code *pcVar5;
  undefined8 *puVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 auStack_178 [40];
  ulonglong local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  longlong local_130;
  longlong local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  code *local_110;
  undefined8 **local_108;
  code *local_100;
  undefined1 *local_f8;
  code **ppcStack_f0;
  uint local_e8 [4];
  uint *local_d8;
  uint local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  code *local_a8;
  code **local_a0;
  undefined8 local_98;
  undefined **local_88;
  undefined8 local_80;
  undefined1 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar14 = (longlong *)(param_1 + 0x6f8);
  iVar13 = *(int *)(param_1 + 0x700);
  local_140 = plVar14;
  if (0 < (longlong)iVar13) {
    iVar20 = -iVar13;
    uVar15 = (longlong)iVar13;
    do {
      pcVar5 = *(code **)(*plVar14 + -8 + uVar15 * 8);
      if (pcVar5 != (code *)0x0) {
        if ((char)param_2 == '\0') {
          if (((((byte)pcVar5[0x19b] & 0x20) != 0) &&
              (cVar8 = FUN_1478b5f20(pcVar5,*(undefined8 *)(param_1 + 0x158),0), cVar8 == '\0')) ||
             (*(int *)(pcVar5 + 0x1a4) != 0)) goto LAB_1434057c8;
        }
        else if (((byte)pcVar5[0x19b] & 0x20) != 0) {
          FUN_1478b5f20(pcVar5,*(undefined8 *)(param_1 + 0x158),1);
        }
        if (((((byte)pcVar5[0x19a] & 8) != 0) && ((*(byte *)(param_1 + 0x598) & 0x20) != 0)) &&
           (*(longlong **)(param_1 + 0x110) != (longlong *)0x0)) {
          (**(code **)(**(longlong **)(param_1 + 0x110) + 0x10))();
        }
        LOCK();
        *(undefined4 *)(pcVar5 + 0x1a4) = 0;
        UNLOCK();
        uVar9 = *(uint *)(param_1 + 0x700);
        if (uVar15 != uVar9) {
          iVar13 = iVar20 + uVar9;
          if (0 < (int)(iVar20 + uVar9)) {
            iVar13 = 1;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x6f8) + uVar15 * 8 + -8),
                  (void *)(*(longlong *)(param_1 + 0x6f8) + (longlong)(int)(uVar9 - iVar13) * 8),
                  (longlong)iVar13 << 3);
          uVar9 = *(uint *)(param_1 + 0x700);
        }
        *(uint *)(param_1 + 0x700) = uVar9 - 1;
        if (*(longlong **)(pcVar5 + 0x188) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(pcVar5 + 0x188) + 0x20))();
        }
        *(undefined8 *)(pcVar5 + 0x188) = 0;
        plVar14 = *(longlong **)(pcVar5 + 400);
        if (plVar14 != (longlong *)0x0) {
          *(undefined8 *)(pcVar5 + 400) = 0;
          LOCK();
          plVar1 = plVar14 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar4 = (int *)((longlong)plVar14 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
        local_110 = (code *)0x0;
        local_a8 = FUN_14340a8e0;
        local_a0 = &local_100;
        ppcStack_f0 = &local_a8;
        local_f8 = &LAB_14796d3b2;
        local_100 = pcVar5;
        FUN_14796d2d2(param_1 + 0x218,&local_f8);
        (*(code *)**(undefined8 **)pcVar5)(pcVar5,1);
        plVar14 = local_140;
      }
LAB_1434057c8:
      iVar20 = iVar20 + 1;
      bVar7 = 1 < uVar15;
      uVar15 = uVar15 - 1;
    } while (bVar7);
  }
  if (*(int *)(param_1 + 0x6c4) < *(int *)(param_1 + 0x698)) {
    local_148 = param_1 + 0x690;
    local_130 = param_1 + 0x218;
    local_138 = (longlong *)(param_1 + 0x630);
    local_128 = param_1 + 0x668;
    do {
      local_d8 = (uint *)0x0;
      local_d0 = 0;
      local_f8 = (undefined1 *)0x0;
      ppcStack_f0 = (code **)0x0;
      local_cc = 0xffffffff00000080;
      local_c4 = 0;
      local_b8 = 0;
      local_b0 = 0;
      FUN_14796feca(&local_f8,local_148);
      uVar15 = (ulonglong)local_d0;
      uVar21 = 0;
      uVar16 = 1;
      iVar13 = 0;
      uVar9 = 0;
      if (local_d0 != 0) {
        puVar10 = local_d8;
        if (local_d8 == (uint *)0x0) {
          puVar10 = local_e8;
        }
        uVar9 = *puVar10;
        if (uVar9 == 0) {
          iVar13 = local_d0 + 0x1e;
          if (-1 < (int)(local_d0 - 1)) {
            iVar13 = local_d0 - 1;
          }
          uVar21 = 0;
          uVar16 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar16 = 0;
          }
          iVar13 = 0;
          do {
            if (uVar16 == uVar21) goto LAB_143405a6a;
            iVar13 = iVar13 + 0x20;
            uVar9 = puVar10[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar9 == 0);
        }
        else {
          uVar21 = 0;
        }
        uVar16 = (ulonglong)(-uVar9 & uVar9);
        uVar3 = uVar16 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar9 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)local_d0 <= (int)uVar9) {
          uVar9 = local_d0;
        }
      }
      if (uVar9 != local_d0) {
        uVar19 = 0xffffffff;
        local_150 = uVar15;
        do {
          puVar6 = *(undefined8 **)(local_f8 + (longlong)(int)uVar9 * 0x10);
          local_120 = puVar6;
          if (*(int *)(param_1 + 0x638) != *(int *)(param_1 + 0x664)) {
            uVar9 = ((uint)((ulonglong)puVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar6 >> 4)) *
                    -0x7a143595;
            uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
            lVar17 = *(longlong *)(param_1 + 0x670);
            if (*(longlong *)(param_1 + 0x670) == 0) {
              lVar17 = local_128;
            }
            iVar20 = *(int *)(lVar17 + (ulonglong)
                                       (*(int *)(param_1 + 0x678) - 1U & (uVar9 >> 0x10 ^ uVar9)) *
                                       4);
            if (iVar20 != -1) {
              do {
                puVar2 = (ulonglong *)(*local_138 + (longlong)iVar20 * 0x28);
                if ((undefined8 *)*puVar2 == puVar6) {
                  if (((ulonglong)(puVar2 + 1) & 0xfffffffffffffff7) != 0) {
                    local_80 = puVar6[6];
                    local_98 = 0;
                    local_88 = &PTR_LAB_14a83c470;
                    local_78 = 0;
                    local_a8 = FUN_143473988;
                    FUN_1434130f2(&local_a8);
                    FUN_14796fdee(local_138,puVar6);
                    bVar7 = true;
                    goto LAB_143405c1e;
                  }
                  break;
                }
                iVar20 = (int)puVar2[4];
              } while (iVar20 != -1);
            }
          }
          FUN_1433b69c6(puVar6,param_2);
          if (((longlong *)local_120[3] != (longlong *)0x0) &&
             (cVar8 = (**(code **)(*(longlong *)local_120[3] + 0x300))(), cVar8 == '\0')) {
            *(int *)(param_1 + 0xa50) = *(int *)(param_1 + 0xa50) + -1;
          }
          if (((char)param_2 == '\0') &&
             ((*(int *)((longlong)local_120 + 0x1a4) != 0 ||
              ((*(byte *)((longlong)local_120 + 0x19b) & 0x20) != 0)))) {
            FUN_14796f638(local_140,&local_120);
            FUN_147962050(local_148,local_120);
          }
          else {
            bVar7 = false;
            LOCK();
            *(undefined4 *)((longlong)local_120 + 0x1a4) = 0;
            UNLOCK();
LAB_143405c1e:
            if ((longlong *)local_120[0x31] != (longlong *)0x0) {
              (**(code **)(*(longlong *)local_120[0x31] + 0x20))();
            }
            local_120[0x31] = 0;
            plVar14 = (longlong *)local_120[0x32];
            if (plVar14 != (longlong *)0x0) {
              local_120[0x32] = 0;
              LOCK();
              plVar1 = plVar14 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar4 = (int *)((longlong)plVar14 + 0xc);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (*piVar4 == 0) {
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                }
              }
            }
            if (bVar7) {
              local_110 = FUN_14340a92a;
            }
            else {
              local_110 = FUN_14340a8e0;
            }
            local_100 = (code *)0x0;
            local_118 = local_120;
            local_108 = &local_118;
            local_a0 = &local_110;
            local_a8 = (code *)&LAB_14796d3b2;
            FUN_14796d2d2(local_130,&local_a8,&local_100);
            uVar15 = local_150;
            FUN_147962050(local_148,local_120);
            if (local_120 != (undefined8 *)0x0) {
              (**(code **)*local_120)(local_120,1);
            }
          }
          uVar19 = uVar19 & ~(uint)uVar16;
          puVar10 = local_d8;
          if (local_d8 == (uint *)0x0) {
            puVar10 = local_e8;
          }
          iVar20 = (int)uVar21;
          lVar17 = (longlong)iVar20;
          uVar9 = puVar10[lVar17] & uVar19;
          if (uVar9 == 0) {
            iVar11 = local_d0 + 0x1e;
            if (-1 < (int)(local_d0 - 1)) {
              iVar11 = local_d0 - 1;
            }
            iVar11 = iVar11 >> 5;
            iVar13 = iVar13 + 0x20;
            iVar12 = iVar11;
            if (iVar11 < iVar20) {
              iVar12 = iVar20;
            }
            if (iVar20 < iVar11) {
              lVar18 = 0;
              do {
                uVar9 = puVar10[lVar17 + lVar18 + 1];
                if (uVar9 != 0) {
                  uVar21 = (ulonglong)(iVar20 + (int)lVar18 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_143405dc6;
                }
                iVar13 = iVar13 + 0x20;
                lVar18 = lVar18 + 1;
              } while (iVar12 - lVar17 != lVar18);
              uVar19 = 0xffffffff;
              iVar20 = iVar12;
            }
            uVar21 = (ulonglong)(iVar20 + 1);
            uVar15 = local_150;
            uVar9 = local_d0;
          }
          else {
LAB_143405dc6:
            uVar16 = (ulonglong)(-uVar9 & uVar9);
            uVar3 = uVar16 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            uVar9 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if ((int)local_d0 <= (int)uVar9) {
              uVar9 = local_d0;
            }
          }
        } while (uVar9 != (uint)uVar15);
      }
LAB_143405a6a:
      local_b0 = 0;
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      FUN_14796a7e2();
    } while (*(int *)(param_1 + 0x6c4) < *(int *)(param_1 + 0x698));
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143405e48 FUN_143405e48 body=1020 status=ok
// SIG undefined FUN_143405e48(void)

void FUN_143405e48(longlong param_1,char param_2)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_b8 [47];
  char local_89;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  char local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar4 = FUN_146269f19();
  if (cVar4 == '\0') {
    local_78 = 0;
    local_68 = &PTR_LAB_14a7ecb50;
    local_88 = &LAB_14340ace2;
    local_60 = param_1;
    local_58 = param_2;
    FUN_1415826cc();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
  lVar10 = (longlong)*(int *)(param_1 + 0x5c0);
  cVar4 = param_2;
  if (0 < lVar10) {
    do {
      local_89 = cVar4;
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x5b8) + -8 + lVar10 * 8);
      if (local_89 == '\0') {
        if (-1 < *(char *)(lVar13 + 0x199)) {
          iVar2 = *(int *)(lVar13 + 0x160);
          if (iVar2 == 0) {
            uVar18 = 1;
            uVar11 = 0;
            iVar12 = 0;
            iVar16 = 0;
          }
          else {
            puVar5 = *(uint **)(lVar13 + 0x158);
            if (*(uint **)(lVar13 + 0x158) == (uint *)0x0) {
              puVar5 = (uint *)(lVar13 + 0x148);
            }
            uVar8 = *puVar5;
            if (uVar8 == 0) {
              iVar16 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar16 = iVar2 + -1;
              }
              uVar11 = 0;
              uVar18 = (ulonglong)(uint)(iVar16 >> 5);
              if (iVar16 >> 5 < 1) {
                uVar18 = uVar11;
              }
              iVar12 = 0;
              do {
                if (uVar18 == uVar11) goto LAB_143406032;
                iVar12 = iVar12 + 0x20;
                uVar8 = puVar5[uVar11 + 1];
                uVar11 = uVar11 + 1;
              } while (uVar8 == 0);
            }
            else {
              uVar11 = 0;
              iVar12 = 0;
            }
            uVar18 = (ulonglong)(-uVar8 & uVar8);
            uVar1 = uVar18 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar16 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar16) {
              iVar16 = iVar2;
            }
          }
          if (iVar16 < iVar2) {
            iVar14 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar14 = iVar2 + -1;
            }
            iVar14 = iVar14 >> 5;
            uVar8 = 0xffffffff;
            do {
              lVar9 = *(longlong *)(*(longlong *)(lVar13 + 0x138) + 8 + (longlong)iVar16 * 0x18);
              if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0xcd) & 0x20) == 0)) goto LAB_14340602a;
              uVar8 = uVar8 & ~(uint)uVar18;
              puVar5 = *(uint **)(lVar13 + 0x158);
              if (*(uint **)(lVar13 + 0x158) == (uint *)0x0) {
                puVar5 = (uint *)(lVar13 + 0x148);
              }
              iVar16 = (int)uVar11;
              lVar9 = (longlong)iVar16;
              uVar17 = puVar5[lVar9] & uVar8;
              if (uVar17 == 0) {
                iVar6 = iVar14;
                if (iVar14 < iVar16) {
                  iVar6 = iVar16;
                }
                if (iVar14 <= iVar16) break;
                lVar15 = 0;
                while( true ) {
                  iVar12 = iVar12 + 0x20;
                  uVar17 = puVar5[lVar9 + lVar15 + 1];
                  if (uVar17 != 0) break;
                  lVar15 = lVar15 + 1;
                  if (iVar6 - lVar9 == lVar15) goto LAB_143406032;
                }
                uVar11 = (ulonglong)(iVar16 + (int)lVar15 + 1);
                uVar8 = 0xffffffff;
              }
              uVar18 = (ulonglong)(-uVar17 & uVar17);
              uVar1 = uVar18 * 2 + 1;
              lVar9 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              iVar16 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
            } while (iVar16 < iVar2);
          }
        }
      }
      else {
LAB_14340602a:
        FUN_14796095e(param_1);
      }
LAB_143406032:
      bVar3 = 1 < lVar10;
      lVar10 = lVar10 + -1;
      cVar4 = local_89;
    } while (bVar3);
  }
  iVar2 = *(int *)(param_1 + 0x658);
  if (iVar2 == 0) {
    uVar18 = 1;
    uVar11 = 0;
    iVar12 = 0;
    iVar16 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x650);
    if (*(uint **)(param_1 + 0x650) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x640);
    }
    uVar8 = *puVar5;
    if (uVar8 == 0) {
      iVar16 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar16 = iVar2 + -1;
      }
      uVar11 = 0;
      uVar18 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar18 = uVar11;
      }
      iVar12 = 0;
      do {
        if (uVar18 == uVar11) goto LAB_143406133;
        iVar12 = iVar12 + 0x20;
        uVar8 = puVar5[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar11 = 0;
      iVar12 = 0;
    }
    uVar18 = (ulonglong)(-uVar8 & uVar8);
    uVar1 = uVar18 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar16 = (iVar12 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar16) {
      iVar16 = iVar2;
    }
  }
  if (iVar16 != iVar2) {
    uVar8 = 0xffffffff;
    do {
      FUN_14796095e(param_1,*(undefined8 *)
                             (*(longlong *)(param_1 + 0x630) + (longlong)iVar16 * 0x28));
      uVar8 = ~(uint)uVar18 & uVar8;
      puVar5 = *(uint **)(param_1 + 0x650);
      if (*(uint **)(param_1 + 0x650) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x640);
      }
      iVar14 = *(int *)(param_1 + 0x658);
      iVar16 = (int)uVar11;
      lVar10 = (longlong)iVar16;
      uVar17 = puVar5[lVar10] & uVar8;
      if (uVar17 == 0) {
        iVar6 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar6 = iVar14 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar16) {
          iVar7 = iVar16;
        }
        if (iVar16 < iVar6) {
          lVar13 = 0;
          do {
            uVar17 = puVar5[lVar10 + lVar13 + 1];
            if (uVar17 != 0) {
              uVar11 = (ulonglong)(iVar16 + (int)lVar13 + 1);
              uVar8 = 0xffffffff;
              goto LAB_143406203;
            }
            iVar12 = iVar12 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar7 - lVar10 != lVar13);
          uVar8 = 0xffffffff;
          lVar10 = (longlong)iVar7;
        }
        uVar11 = lVar10 + 1U & 0xffffffff;
        iVar16 = iVar14;
      }
      else {
LAB_143406203:
        uVar18 = (ulonglong)(-uVar17 & uVar17);
        uVar1 = uVar18 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar16 = (iVar12 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar16) {
          iVar16 = iVar14;
        }
      }
    } while (iVar16 != iVar2);
  }
LAB_143406133:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    FUN_14340572a(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143406258 FUN_143406258 body=1310 status=ok
// SIG undefined FUN_143406258(void)

void FUN_143406258(code *param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  code **ppcVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_a78 [32];
  undefined8 local_a58;
  undefined4 local_a50;
  undefined4 local_a4c;
  undefined8 local_a48;
  undefined4 local_a40;
  undefined4 local_a3c;
  code *local_a38;
  longlong *local_a30;
  undefined8 local_a28;
  longlong local_a20;
  undefined8 local_a18;
  undefined4 local_a10;
  undefined4 local_a0c;
  longlong local_a08 [2];
  code *local_9f8;
  code **local_9f0;
  undefined8 local_9e8 [2];
  undefined **local_9d8;
  undefined8 local_9d0;
  undefined1 local_9c8;
  longlong local_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  undefined8 *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a78;
  cVar4 = FUN_146269f19();
  if (cVar4 == '\0') {
    local_9f8 = param_1;
    FUN_1478b2b9c(local_9e8,param_2);
    local_88 = *param_3;
    *param_3 = 0;
    local_80._0_4_ = *(undefined4 *)(param_3 + 1);
    local_80._4_4_ = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
    local_78[0] = (undefined1 *)0x0;
    puVar6 = (undefined8 *)FUN_14001cc68(0x990,0x10);
    *puVar6 = &PTR_LAB_14a7ecb70;
    puVar6[2] = local_9f8;
    local_68 = puVar6;
    FUN_1478b2b9c(puVar6 + 4,local_9e8);
    puVar6[0x130] = local_88;
    local_88 = 0;
    *(undefined4 *)(puVar6 + 0x131) = (undefined4)local_80;
    *(undefined4 *)((longlong)puVar6 + 0x98c) = local_80._4_4_;
    local_80 = 0;
    if (puVar6 != (undefined8 *)&DAT_fffffffffffffff0) {
      local_78[0] = &LAB_14340ad2a;
    }
    FUN_1415826cc(local_78);
    FUN_145aa5488(local_88,local_80 & 0xffffffff);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_1478b3298(local_9e8);
    goto LAB_1434063b1;
  }
  plVar3 = *(longlong **)(param_2 + 0x18);
  if ((plVar3 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar3 + 0x2a0))(plVar3), cVar4 == '\0')
     ) {
LAB_1434064f8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a78);
  }
  fVar11 = (float)(**(code **)(*plVar3 + 0x2c8))(plVar3);
  fVar12 = 0.0;
  if (0.0 <= DAT_14c761320) {
    fVar12 = DAT_14c761320;
  }
  if ((fVar11 <= fVar12) && (cVar4 = FUN_147961c38(param_1,param_2), cVar4 == '\0'))
  goto LAB_1434064f8;
  if (param_4 == 0) {
    local_9f8 = (code *)0x0;
    local_9f0 = (code **)((ulonglong)local_9f0 & 0xffffffff00000000);
    local_9e8[0] = 0;
    cVar4 = FUN_143413712(param_2,param_1,1);
    if (cVar4 == '\0') {
      lVar5 = FUN_1436f9d1c(param_1 + 0x8a8,param_2,0);
      if (lVar5 != 0) goto LAB_14340652a;
      local_a38 = (code *)0x0;
      local_a30 = (longlong *)((ulonglong)local_a30 & 0xffffffff00000000);
      local_a28 = 0;
      local_a20 = lVar5;
      cVar4 = FUN_143413712(param_2,param_1,0);
      if (cVar4 == '\0') {
        local_9d0 = *(undefined8 *)(param_2 + 0x30);
        local_9e8[0] = 0;
        local_9d8 = &PTR_LAB_14a83c470;
        local_9c8 = 1;
        local_9f8 = FUN_143473988;
        FUN_1434130f2();
        goto LAB_1434063b1;
      }
      local_a48 = *param_3;
      puVar6 = &local_a48;
      *param_3 = 0;
      local_a40 = *(undefined4 *)(param_3 + 1);
      local_a3c = *(undefined4 *)((longlong)param_3 + 0xc);
      param_3[1] = 0;
      ppcVar10 = &local_a38;
    }
    else {
      puVar6 = &local_a18;
      local_a18 = *param_3;
      *param_3 = 0;
      local_a10 = *(undefined4 *)(param_3 + 1);
      local_a0c = *(undefined4 *)((longlong)param_3 + 0xc);
      param_3[1] = 0;
      ppcVar10 = &local_9f8;
    }
    FUN_147961d8c(param_1,ppcVar10[2],puVar6,0);
    FUN_143401e76(param_1,ppcVar10);
  }
  else {
    lVar5 = FUN_1436f9d1c(param_1 + 0x8a8,param_2,1);
    local_a20 = lVar5;
    if (lVar5 == 0) goto LAB_1434063b1;
LAB_14340652a:
    plVar2 = plVar3 + 8;
    local_a20 = lVar5;
    if ((int)plVar3[9] != *(int *)((longlong)plVar3 + 0x74)) {
      plVar8 = plVar3 + 0xf;
      if ((longlong *)plVar3[0x10] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar3[0x10];
      }
      iVar9 = *(int *)((longlong)plVar8 +
                      (ulonglong)((int)plVar3[0x11] - 1U & *(uint *)(param_1 + 0x90)) * 4);
      if (iVar9 != -1) {
        do {
          lVar1 = *plVar2 + (longlong)iVar9 * 0x10;
          if (*(uint *)(*plVar2 + (longlong)iVar9 * 0x10) == *(uint *)(param_1 + 0x90)) {
            if (lVar1 != 0) goto LAB_143406642;
            break;
          }
          iVar9 = *(int *)(lVar1 + 8);
        } while (iVar9 != -1);
      }
    }
    local_9f8 = param_1 + 0x90;
    FUN_14796ef8a(plVar2,&local_a38);
    lVar1 = *plVar2 + (longlong)(int)local_a38 * 0x10;
LAB_143406642:
    *(int *)(lVar1 + 4) = *(int *)(lVar1 + 4) + 1;
    if ((*(longlong **)(lVar5 + 0x18) == (longlong *)0x0) ||
       (cVar4 = (**(code **)(**(longlong **)(lVar5 + 0x18) + 0x300))(), cVar4 == '\0')) {
      *(int *)(param_1 + 0xa50) = *(int *)(param_1 + 0xa50) + 1;
    }
    *(byte *)(lVar5 + 0x19b) = *(byte *)(lVar5 + 0x19b) | 0x10;
    if (param_4 != 0) {
      lVar1 = *(longlong *)(param_4 + 0x10);
      FUN_14796095e(param_1,lVar1);
      *(undefined8 *)(lVar1 + 0x40) = 0;
      *(undefined8 *)(lVar1 + 0x48) = 0;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(undefined4 *)(lVar1 + 0x50) = 0;
    }
    local_a58 = *param_3;
    *param_3 = 0;
    local_a50 = *(undefined4 *)(param_3 + 1);
    local_a4c = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
    FUN_147961d8c(param_1,lVar5,&local_a58,param_4 != 0);
    iVar9 = *(int *)(param_1 + 0x5c0);
    *(uint *)(param_1 + 0x5c0) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0x5c4) < iVar9 + 1U) {
      FUN_14796ccec(param_1 + 0x5b8,iVar9);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x5b8) + (longlong)iVar9 * 8) = lVar5;
    local_9f8 = *(code **)(lVar5 + 0x30);
    local_a08[0] = lVar5;
    if (local_9f8 != (code *)0x0) {
      uVar7 = FUN_14796f0ae(param_1 + 0x708,
                            (int)((ulonglong)local_9f8 >> 0x20) * 0x17 + (int)local_9f8);
      FUN_14796f638(uVar7,&local_a20);
      local_a08[0] = local_a20;
    }
    local_a30 = local_a08;
    local_a08[1] = 0;
    local_9f0 = &local_a38;
    local_a38 = FUN_14340a8b2;
    local_9f8 = (code *)&LAB_14796d3b2;
    FUN_14796d2d2(param_1 + 0x218);
  }
LAB_1434063b1:
  if ((local_38 ^ (ulonglong)auStack_a78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434067a6 FUN_1434067a6 body=181 status=ok
// SIG undefined FUN_1434067a6(void)

void FUN_1434067a6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  code *local_98;
  undefined8 local_88;
  undefined **local_78;
  undefined4 local_70;
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar1 = FUN_146269f19();
  if (cVar1 == '\0') {
    local_48 = 0;
    local_38 = &PTR_LAB_14a7ecbb0;
    local_58 = &LAB_14340ae1c;
    local_30 = param_1;
    local_28 = param_2;
    FUN_1415826cc();
  }
  else {
    local_70 = *(undefined4 *)(param_1 + 0x90);
    local_88 = 0;
    local_78 = &PTR_LAB_14a7ecbd0;
    local_98 = FUN_14340ae60;
    FUN_147962214(param_1,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340685c FUN_14340685c body=463 status=ok
// SIG undefined FUN_14340685c(void)

void FUN_14340685c(longlong param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5,float *param_6,undefined4 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  undefined1 local_1cc [4];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  bVar4 = 1;
  if ((param_3 != 0) &&
     ((bVar6 = *(char *)(param_3 + 0x152) - 1, 5 < bVar6 || ((0x35U >> (bVar6 & 0x1f) & 1) == 0))))
  {
    bVar4 = (*(byte *)(param_1 + 0x5b0) & 4) >> 2;
  }
  *param_7 = 0x3f800000;
  if ((param_5 == 0) || (bVar4 == 0)) {
    fVar7 = (float)(**(code **)(*param_2 + 0x2c0))(param_2);
    *param_6 = fVar7;
  }
  else {
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0x3ff00000;
    local_188 = 0;
    uStack_184 = 0x3ff00000;
    uStack_180 = 0;
    uStack_17c = 0x3ff00000;
    local_178 = 0x3ff0000000000000;
    uStack_170 = 0;
    uVar2 = *param_4;
    uVar3 = param_4[1];
    uVar1 = param_4[2];
    local_198 = param_4[2];
    uStack_190 = 0;
    local_1a8 = uVar2;
    uStack_1a0 = uVar3;
    fVar7 = (float)FUN_147959fa6(param_5);
    *param_6 = fVar7;
    if (*(char *)(param_5 + 9) == '\x02') {
      *param_6 = fVar7 * 1.4142135;
    }
    if ((~*(byte *)(param_5 + 0xc0) & 10) == 0) {
      local_158 = uVar2;
      uStack_150 = uVar3;
      local_148 = uVar1;
      iVar5 = FUN_1479629ac(param_1,&local_158,&local_15c,1);
      if (iVar5 != -1) {
        local_1d8 = param_5;
        uVar8 = FUN_14795db18(&local_158,param_1,iVar5,&local_1c8);
        local_15c = 0;
        FUN_147962bd6(uVar8,&local_158,&local_15c,local_1cc);
        uVar8 = FUN_147962f08(param_1,local_15c,param_5);
        *param_7 = uVar8;
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143406a2c FUN_143406a2c body=830 status=ok
// SIG undefined FUN_143406a2c(void)

longlong * FUN_143406a2c(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong *plVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((param_1 == (longlong *)0x0) || (DAT_14cb0d2b0 == (longlong *)0x0 || param_2[0xf] == 0)) ||
      (cVar3 = (**(code **)(*DAT_14cb0d2b0 + 0x400))(), cVar3 == '\0')) ||
     ((param_2[0xe] != 0 && ((*(uint *)(param_2[0xe] + 8) >> 0x1e & 1) != 0)))) {
    plVar8 = (longlong *)0x0;
    goto LAB_143406a92;
  }
  if (*param_2 == 0) {
    uVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
  }
  else {
    uVar4 = *param_2 + 0x28;
  }
  if ((char)param_2[0x10] == '\x01') {
    fVar10 = (float)(**(code **)(*param_1 + 0x2c8))(param_1);
    fVar11 = 0.0;
    if (0.0 <= DAT_14c761320) {
      fVar11 = DAT_14c761320;
    }
    if (fVar10 <= fVar11) {
      plVar8 = (longlong *)0x0;
      local_80 = &local_44;
      local_44 = 0;
      local_78 = &local_48;
      local_48 = 0;
      local_88 = uVar4;
      FUN_14340685c(param_2[0xf],param_1,param_2[0xd],param_2 + 0x11);
      local_78 = (undefined4 *)CONCAT44(local_78._4_4_,local_48);
      local_80 = (undefined4 *)CONCAT44(local_80._4_4_,local_44);
      local_88 = uVar4;
      cVar3 = FUN_147962f76(param_2[0xf],local_44,param_2[0xd],param_2 + 0x11);
      if (cVar3 == '\0') goto LAB_143406a92;
    }
  }
  lVar6 = param_2[1];
  if (param_2[0xe] == 0) {
    if ((((lVar6 != 0) && (lVar5 = FUN_14117d122(), lVar5 != 0)) &&
        (*(int *)(lVar5 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
       (lVar9 = param_2[1],
       lVar9 != 0 &&
       *(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
       lVar5 + 0x30)) {
      lVar6 = FUN_14117d122();
      plVar8 = &DAT_14c951640;
      goto LAB_143406d3e;
    }
    plVar8 = &DAT_14c951640;
LAB_143406b8e:
    lVar6 = FUN_14117d122();
  }
  else {
    plVar8 = param_2 + 0xe;
    if (((lVar6 == 0) || (lVar5 = FUN_14117d122(), lVar5 == 0)) ||
       ((*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38) ||
        (lVar9 = param_2[1],
        lVar9 == 0 ||
        *(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)))) goto LAB_143406b8e;
    lVar6 = FUN_14117d122();
LAB_143406d3e:
    if (((lVar6 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar6 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) {
      lVar6 = 0;
    }
    else {
      lVar6 = param_2[1];
    }
  }
  plVar8 = (longlong *)FUN_14796328c(*plVar8,lVar6);
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_1);
  }
  bVar2 = DAT_14c950c29;
  plVar8[0x8c] = (longlong)param_1;
  *(byte *)((longlong)plVar8 + 0x9e) = *(byte *)((longlong)plVar8 + 0x9e) & 0xf7;
  bVar1 = *(byte *)(plVar8 + 0x92);
  *(byte *)(plVar8 + 0x92) = bVar1 & 0xbf;
  bVar7 = 0;
  if (*(char *)((longlong)param_2 + 0x61) != '\0') {
    bVar7 = (byte)(int)param_2[0xc];
  }
  bVar7 = bVar1 & 0xbe | bVar7;
  *(byte *)(plVar8 + 0x92) = bVar7;
  *(byte *)(plVar8 + 0x92) = bVar7 & 0xbd | *(char *)((longlong)param_2 + 0x62) * '\x02';
  lVar6 = *param_2;
  if ((lVar6 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(lVar6);
  }
  plVar8[0x9c] = lVar6;
  FUN_147970dac(plVar8 + 0x118);
  FUN_147970df0(plVar8 + 0x118,param_2 + 2);
  if ((char)param_2[0x10] == '\x01') {
    local_58 = param_2[0x13];
    local_68 = (undefined4)param_2[0x11];
    uStack_64 = *(undefined4 *)((longlong)param_2 + 0x8c);
    uStack_60 = (undefined4)param_2[0x12];
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x94);
    local_88 = local_88 & 0xffffffffffffff00;
    FUN_140d93b16(plVar8,&local_68,0,0);
  }
  if (param_2[0xd] == 0) {
    *(undefined4 *)((longlong)plVar8 + 0x494) = *(undefined4 *)(param_2[0xf] + 0x90);
  }
  else {
    FUN_140b506dc(plVar8,param_2[0xd],0);
  }
  if (*(char *)((longlong)param_2 + 0x61) == '\x01') {
    (**(code **)(*plVar8 + 0x5e8))(plVar8,0);
  }
LAB_143406a92:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar8;
}



// FUNCTION 143406d6c FUN_143406d6c body=1602 status=ok
// SIG undefined FUN_143406d6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143406d6c(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,float param_6,undefined8 *param_7,undefined1 (*param_8) [16],
                  longlong param_9,longlong param_10,undefined8 param_11,longlong param_12)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  byte bVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  bool bVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_a88 [32];
  longlong local_a68;
  undefined4 *local_a60;
  float *local_a58;
  int local_a50;
  undefined1 local_a4c [4];
  longlong local_a48;
  float local_a40;
  undefined4 local_a3c;
  undefined1 local_a38 [8];
  uint local_a30;
  int local_a2c;
  undefined4 local_a28;
  undefined4 local_9f8;
  undefined8 local_9ec;
  undefined1 local_988 [232];
  byte local_8a0;
  byte local_89f;
  float local_884;
  undefined4 local_880;
  undefined4 local_87c;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_80c;
  double local_808;
  double dStack_800;
  undefined1 local_7f8 [16];
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  float local_79c;
  float local_798;
  undefined1 local_770 [1696];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_a88;
  if (param_3 != 0 && param_2 != (longlong *)0x0) {
    iVar1 = *(int *)(param_3 + 0x1b0);
    if (((((longlong)iVar1 < 0) || (*(int *)(param_3 + 0x1a8) <= iVar1)) ||
        (lVar11 = (longlong)iVar1 * 0x78 + *(longlong *)(param_3 + 0x1a0), lVar11 == 0)) ||
       (*(char *)(lVar11 + 1) == '\x01')) {
      if (param_9 == 0) {
        param_9 = (**(code **)(*param_2 + 0x2b8))(param_2);
      }
      else {
        param_9 = param_9 + 0x28;
      }
      local_a60 = &local_a3c;
      local_a3c = 0;
      local_a58 = &local_a40;
      local_a40 = 1.0;
      local_a68 = param_9;
      FUN_14340685c(param_1,param_2,param_3,param_7);
      cVar9 = (**(code **)(*param_2 + 0x300))(param_2);
      if ((cVar9 == '\0') && (cVar9 = (**(code **)(*param_2 + 0x2d0))(param_2), cVar9 == '\0')) {
        local_a58 = (float *)CONCAT44(local_a58._4_4_,local_a40);
        local_a60 = (undefined4 *)CONCAT44(local_a60._4_4_,local_a3c);
        local_a68 = param_9;
        cVar9 = FUN_147962f76(param_1);
        if (cVar9 == '\0') goto LAB_143406e2c;
      }
      bVar12 = 0x80;
      if (*(byte *)(param_3 + 0x152) < 7) {
        bVar12 = (byte)(0x8000800080 >> ((*(byte *)(param_3 + 0x152) & 7) << 3));
      }
      FUN_1478b27ac(local_a38);
      local_a30 = *(uint *)(param_3 + 0xc);
      if ((int)local_a30 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((local_a30 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_a30 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      local_a2c = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar14) {
          local_a50 = iVar13;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
          iVar13 = local_a50;
        }
        LOCK();
        local_a2c = *(int *)(lVar11 + 0x10);
        bVar14 = local_a2c == 0;
        if (bVar14) {
          *(int *)(lVar11 + 0x10) = iVar13;
          local_a2c = 0;
        }
        UNLOCK();
        if (bVar14) {
          local_a2c = iVar13;
        }
      }
      local_a28 = *(undefined4 *)(param_3 + 0xc);
      FUN_1478b3c62(local_a38,param_2);
      local_87c = param_5;
      local_884 = 0.0;
      if (0.0 <= param_6) {
        local_884 = param_6;
      }
      local_89f = local_89f | 0x10;
      local_7e8 = *param_7;
      uStack_7e0 = param_7[1];
      local_7d8 = param_7[2];
      uStack_7d0 = 0;
      auVar16 = divpd(*param_8,_DAT_1499387d0);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = *(double *)param_8[1];
      auVar17 = divpd(auVar17,_DAT_1499387d0);
      auVar16 = roundpd(auVar16,auVar16,3);
      auVar17 = roundpd(auVar17,auVar17,3);
      dVar7 = (*(double *)*param_8 - auVar16._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar8 = (*(double *)(*param_8 + 8) - auVar16._8_8_ * DAT_1499387d0._8_8_) *
              0.008726646259971648;
      dVar5 = (*(double *)param_8[1] - auVar17._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648
      ;
      dVar6 = (0.0 - auVar17._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      local_880 = param_4;
      dVar2 = sin(dVar7);
      dVar3 = sin(dVar8);
      dVar4 = sin(dVar5);
      sin(dVar6);
      dVar7 = cos(dVar7);
      dVar8 = cos(dVar8);
      dVar5 = cos(dVar5);
      cos(dVar6);
      dVar6 = dVar3 * dVar2 * dVar4 + dVar8 * dVar7 * dVar5;
      local_808 = dVar2 * dVar3 * dVar5 - dVar7 * dVar8 * dVar4;
      dStack_800 = -(dVar2 * dVar8 * dVar5) - dVar7 * dVar3 * dVar4;
      local_7f8._8_4_ = SUB84(dVar6,0);
      local_7f8._0_8_ = -(dVar8 * dVar2 * dVar4) + dVar3 * dVar7 * dVar5;
      local_7f8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_89f = local_89f & 0x7f | bVar12;
      local_820 = (**(code **)(*param_2 + 0x2e8))(param_2);
      bVar12 = *(char *)(param_3 + 0x152) - 1;
      if ((5 < bVar12) || (bVar10 = 1, (0x35U >> (bVar12 & 0x1f) & 1) == 0)) {
        bVar10 = (*(byte *)(param_1 + 0x5b0) & 4) >> 2;
      }
      bVar10 = param_9 != 0 & bVar10;
      local_8a0 = local_8a0 & 0xfb | bVar10 * '\x04';
      if (bVar10 == 1) {
        bVar12 = FUN_146269f19();
        lVar11 = (ulonglong)(bVar12 ^ 1) * 0x20;
        FUN_1477db452(local_770,param_9);
        fVar15 = *(float *)(param_1 + 0x1a8 + lVar11) * *(float *)(param_9 + 0x224);
        fVar15 = (*(float *)(param_1 + 0x1ac + lVar11) * *(float *)(param_9 + 0x228) - fVar15) *
                 local_a40 + fVar15;
        local_798 = 0.0;
        if (0.0 <= fVar15) {
          local_798 = fVar15;
        }
        fVar15 = *(float *)(param_1 + 0x198 + lVar11) * *(float *)(param_9 + 0x21c);
        fVar15 = (*(float *)(param_1 + 0x19c + lVar11) * *(float *)(param_9 + 0x220) - fVar15) *
                 local_a40 + fVar15;
        local_79c = 0.0;
        if (0.0 <= fVar15) {
          local_79c = fVar15;
        }
      }
      local_80c = local_a3c;
      if (param_10 != 0) {
        local_a48 = param_10;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_10);
        }
        FUN_1479718da(local_988,local_a4c,&local_a48,0);
      }
      local_81c = *(undefined4 *)((longlong)param_2 + 0x10c);
      if (param_12 == 0) {
        local_9f8 = 0;
        local_9ec = 0;
      }
      else {
        local_9f8 = *(undefined4 *)(param_12 + 0xc);
        local_9ec = *(undefined8 *)(param_12 + 0x18);
      }
      FUN_147961ab6(param_1,local_a38,param_11);
      FUN_1478b3298(local_a38);
    }
  }
LAB_143406e2c:
  if ((local_d0 ^ (ulonglong)auStack_a88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1434073b0 FUN_1434073b0 body=1646 status=ok
// SIG undefined FUN_1434073b0(void)

undefined **
FUN_1434073b0(longlong param_1,undefined **param_2,char param_3,char param_4,byte param_5)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined **ppuVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 unaff_R14;
  bool bVar13;
  uint uVar14;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  code *local_198;
  undefined8 local_188;
  undefined **local_178;
  longlong local_170;
  undefined **local_168;
  char local_160;
  char local_15f;
  byte local_15e;
  undefined **local_158;
  undefined8 *local_150;
  ulonglong uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  longlong local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  undefined **local_60;
  
  local_60 = (undefined **)(DAT_14c707940 ^ (ulonglong)auStack_1d8);
  ppuVar9 = local_60;
  if (param_2 == (undefined **)0x0) goto LAB_143407598;
  bVar13 = *(char *)((longlong)param_2 + 0x181) != '\0';
  ppuVar9 = (undefined **)(ulonglong)bVar13;
  if ((bVar13 & (param_5 ^ 1)) != 0) goto LAB_143407598;
  if (param_5 != 0) {
    LOCK();
    uVar2 = *(uint *)(param_2 + 0x66);
    *(uint *)(param_2 + 0x66) = 0;
    ppuVar9 = (undefined **)(ulonglong)uVar2;
    UNLOCK();
  }
  if ((param_3 == '\0') &&
     (ppuVar9 = (undefined **)(ulonglong)*(uint *)(param_2 + 0x66), *(uint *)(param_2 + 0x66) == 0))
  {
    if ((param_5 == 0) && (DAT_14cacde88 == 1)) goto LAB_143407598;
    if (DAT_14c86a9f8 == '\x01') {
      iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar6 == 2) goto LAB_1434079df;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_1434079df;
      }
    }
    else {
LAB_1434079df:
      LOCK();
      *(undefined4 *)(param_2 + 0x66) = 1;
      UNLOCK();
      local_158 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      FUN_14796ecfc(param_1 + 0x5c8,&local_158);
    }
    ppuVar9 = (undefined **)FUN_146269f19();
    if ((char)ppuVar9 == '\0') {
      local_188 = 0;
      local_178 = &PTR_LAB_14a7ecc70;
      local_15e = param_5;
      local_198 = FUN_14340b0d6;
      local_170 = param_1;
      local_168 = param_2;
      local_160 = param_3;
      local_15f = param_4;
      ppuVar9 = (undefined **)FUN_1415826cc();
      goto LAB_143407598;
    }
  }
  if (*(int *)((longlong)param_2 + 0x36c) == 0) {
    *(undefined1 *)((longlong)param_2 + 0x181) = 1;
  }
  else {
    bVar3 = *(byte *)((longlong)param_2 + 0x34c);
    ppuVar9 = (undefined **)(ulonglong)bVar3;
    if (((bVar3 & 1) == 0) && ((bVar3 & 4) == 0)) {
      plVar10 = (longlong *)FUN_145b0d6b4();
      lVar11 = plVar10[0x22];
      if (lVar11 == 0) {
        (**(code **)(*plVar10 + 1000))(plVar10);
        lVar11 = plVar10[0x22];
      }
      lVar11 = FUN_1436fb154(lVar11,*(undefined1 *)((longlong)param_2 + 0x182));
      fVar4 = DAT_14cacdea0;
      uVar2 = *(uint *)(lVar11 + 0x1c);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cacdfb8) {
        FUN_144b3d300(&DAT_14cacdfb8);
        if (DAT_14cacdfb8 == -1) {
          FUN_1446f470e(&DAT_14cacdfb0,&DAT_14a136930,1);
          _Init_thread_footer(&DAT_14cacdfb8);
        }
      }
      *(byte *)((longlong)param_2 + 0x34d) =
           *(byte *)((longlong)param_2 + 0x34d) & 0xfd |
           (*(longlong *)(param_2[0x7c] + 0x8c) == DAT_14cacdfb0) * '\x02';
      cVar5 = FUN_147d35f64(param_2,0);
      if (cVar5 == '\0') {
        uVar14 = -(uint)(0.0 < fVar4);
        fVar4 = (float)(~uVar14 & 0xbf800000 | (uint)fVar4 & uVar14);
        uVar14 = -(uint)(fVar4 < 0.0);
        local_1b8 = uVar14 & uVar2 | ~uVar14 & (uint)fVar4;
        cVar5 = FUN_14796333e(param_1,CONCAT71((int7)((ulonglong)unaff_R14 >> 8),param_5) &
                                      0xffffffff,lVar11,param_2);
        if (cVar5 != '\0') {
          *(undefined1 *)((longlong)param_2 + 0x181) = 2;
          goto LAB_143407687;
        }
        *(undefined1 *)((longlong)param_2 + 0x181) = 0;
        bVar13 = true;
      }
      else {
        *(undefined1 *)((longlong)param_2 + 0x181) = 5;
        *(byte *)((longlong)param_2 + 0x34c) = *(byte *)((longlong)param_2 + 0x34c) & 0xf7;
LAB_143407687:
        bVar13 = false;
      }
      ppuVar9 = (undefined **)
                (**(code **)(*param_2 + 0x3c0))(param_2,*(undefined8 *)(param_2[0x7c] + 0x8c));
      if ((param_2[0x74] == (undefined *)0x0) &&
         ((bVar13 || (*(char *)((longlong)param_2 + 0x181) == '\x02')))) {
        if (param_3 == '\0') {
          puVar12 = (undefined8 *)FUN_14001cc68(0x60,0x10);
          iVar6 = DAT_14cacdef0;
          if (DAT_14cacdef0 < 1) {
            iVar6 = *(int *)(param_1 + 0x8c);
          }
          puVar12[1] = 0;
          *puVar12 = &PTR_FUN_149e06640;
          *(undefined4 *)(puVar12 + 2) = 0;
          puVar12[3] = 0;
          puVar12[4] = 0;
          *(undefined2 *)(puVar12 + 5) = 3;
          puVar12[6] = 0xffffffffffffffff;
          puVar12[7] = 0;
          *puVar12 = &PTR_FUN_14a7ecc90;
          FUN_14795d7b8(puVar12 + 9,param_2,iVar6);
          param_2[0x74] = (undefined *)puVar12;
          local_1a8 = 0;
          local_1b0 = 0xffffffffffffffff;
          local_1b8 = local_1b8 & 0xffffff00;
          FUN_1402a8900(puVar12,0,DAT_14c8442c0,3);
          iVar6 = *(int *)(param_1 + 0x618);
          *(uint *)(param_1 + 0x618) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x61c) < iVar6 + 1U) {
            FUN_147971e2e((ulonglong *)(param_1 + 0x610),iVar6);
          }
          ppuVar9 = *(undefined ***)(param_1 + 0x610);
          ppuVar9[iVar6] = (undefined *)param_2;
        }
        else {
          iVar6 = DAT_14cacdef0;
          if (DAT_14cacdef0 < 1) {
            iVar6 = *(int *)(param_1 + 0x8c);
          }
          local_150 = (undefined8 *)0x0;
          uStack_148 = uStack_148 & 0xffffffff00000000;
          local_140 = 0;
          uStack_138 = 0;
          local_130._0_2_ = 3;
          local_128 = 0xffffffff;
          uStack_124 = 0xffffffff;
          uStack_120 = 0;
          uStack_11c = 0;
          local_158 = &PTR_FUN_14a7ecc90;
          FUN_14795d7b8(&local_110,param_2,iVar6);
          local_128 = 0xffffffff;
          uStack_124 = 0xffffffff;
          uStack_120 = 0;
          uStack_11c = 0;
          LOCK();
          UNLOCK();
          local_130 = CONCAT62(local_130._2_6_,3);
          uStack_138 = 0;
          uStack_148._0_4_ = (int)uStack_148 + 1;
          FUN_14018802a(local_140);
          local_140 = 0;
          (*(code *)local_158[6])(&local_158);
          LOCK();
          uStack_148 = CONCAT44(uStack_148._4_4_,(int)uStack_148 + -1);
          UNLOCK();
          local_158 = &PTR_FUN_149e06640;
          FUN_14018802a(local_140);
          local_140 = 0;
          ppuVar9 = IQueuedWork::vftable;
          local_158 = IQueuedWork::vftable;
          if (local_150 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_150 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              ppuVar9 = (undefined **)(**(code **)*local_150)(local_150,1);
            }
          }
        }
      }
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x181) = 3;
    }
  }
  if (param_2[0x74] == (undefined *)0x0) {
    LOCK();
    uVar2 = *(uint *)(param_2 + 0x66);
    *(uint *)(param_2 + 0x66) = 2;
    ppuVar9 = (undefined **)(ulonglong)uVar2;
    UNLOCK();
  }
  if (param_4 != '\0') {
    local_158 = (undefined **)((ulonglong)local_158 & 0xffffffff00000000);
    local_130 = 0;
    local_128 = 0;
    local_150 = (undefined8 *)0x0;
    uStack_148 = 0;
    uStack_124 = 0x80;
    uStack_120 = 0xffffffff;
    uStack_11c = 0;
    local_110 = 0;
    local_108 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_d4 = 0xffffffff00000080;
    local_cc = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_84 = 0xffffffff00000080;
    local_7c = 0;
    local_70 = 0;
    local_68 = 0;
    (**(code **)(*param_2 + 400))(param_2,&local_158);
    iVar6 = FUN_140209a84(&local_158);
    local_68 = 0;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    FUN_1400fd330(&local_b0);
    local_b8 = 0;
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    FUN_1400fd330(&local_100);
    local_108 = 0;
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    ppuVar9 = (undefined **)FUN_1400fd330(&local_150);
    *(int *)(param_2 + 0x6f) = *(int *)(param_2 + 0x6f) + iVar6;
  }
LAB_143407598:
  if (((ulonglong)local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return ppuVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143407a20 FUN_143407a20 body=461 status=ok
// SIG undefined FUN_143407a20(void)

void FUN_143407a20(longlong param_1,ulonglong param_2)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_248 [40];
  ulonglong local_220;
  ulonglong *local_218;
  undefined8 *local_210;
  undefined1 local_204 [4];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  float local_1e8;
  undefined1 local_1d8 [368];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_220 = param_2;
  if (param_2 != 0) {
    cVar2 = FUN_146269f19();
    if (cVar2 == '\0') {
      local_58 = 0;
      local_48 = &PTR_LAB_14a7eccd0;
      local_68 = &LAB_14340b136;
      local_40 = param_1;
      local_38 = param_2;
      FUN_1415826cc();
    }
    else {
      if (*(int *)(param_1 + 0x340) != *(int *)(param_1 + 0x36c)) {
        uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        lVar4 = param_1 + 0x370;
        if (*(longlong *)(param_1 + 0x378) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x378);
        }
        iVar5 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_1 + 0x380) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        if (iVar5 != -1) {
          lVar4 = *(longlong *)(param_1 + 0x338);
          do {
            if (*(ulonglong *)(lVar4 + (longlong)iVar5 * 0x1a8) == param_2) goto LAB_143407a48;
            iVar5 = *(int *)((longlong)iVar5 * 0x1a8 + lVar4 + 0x1a0);
          } while (iVar5 != -1);
        }
      }
      FUN_147d30f52(&local_200);
      local_218 = &local_220;
      local_210 = &local_200;
      FUN_147971eb4((longlong *)(param_1 + 0x338),local_204,&local_218,0);
      FUN_145821914(local_1d8);
      local_200 = &DAT_3f8000003f800000;
      local_1f8 = 0;
      local_1e8 = 1.0;
      fVar1 = *(float *)(local_220 + 0x34);
      if ((fVar1 != 1.0) || (NAN(fVar1))) {
        local_200 = (undefined1 *)CONCAT44(fVar1,fVar1);
        local_1e8 = fVar1;
      }
      uStack_1f0 = 0;
      local_218 = &local_220;
      local_210 = &local_200;
      FUN_14796b888(param_1 + 0x388,local_204,&local_218,0);
    }
  }
LAB_143407a48:
  if ((local_28 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143407bee FUN_143407bee body=154 status=ok
// SIG undefined FUN_143407bee(void)

void FUN_143407bee(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    cVar1 = FUN_146269f19();
    if (cVar1 != '\0') {
      FUN_14797210c(param_1 + 0x338,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
    }
    local_48 = 0;
    local_38 = &PTR_LAB_14a7eccf0;
    local_58 = &LAB_14340b17a;
    local_30 = param_1;
    local_28 = param_2;
    FUN_1415826cc();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143407c9a FUN_143407c9a body=50 status=ok
// SIG undefined FUN_143407c9a(void)

longlong FUN_143407c9a(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14105a990();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  return lVar2;
}



// FUNCTION 143407cce FUN_143407cce body=56 status=ok
// SIG undefined FUN_143407cce(void)

void FUN_143407cce(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000143407cfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143407d08 FUN_143407d08 body=56 status=ok
// SIG undefined FUN_143407d08(void)

void FUN_143407d08(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000143407d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143407d4a FUN_143407d4a body=712 status=ok
// SIG undefined FUN_143407d4a(void)

void FUN_143407d4a(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 == (longlong *)0x0) {
    cVar6 = FUN_146269f19();
    if (cVar6 == '\0') {
      local_78 = 0;
      local_68 = &PTR_LAB_14a7ecd10;
      local_88 = &LAB_14340b1be;
      local_60 = param_1;
      local_58 = param_2;
      FUN_1415826cc();
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
  }
  else {
    local_90 = 0;
    FUN_14340dba2(&local_90);
    FUN_14340da64(&local_90);
    FUN_14340cba6(&local_90);
  }
  lVar17 = (longlong)*(int *)(param_1 + 0x5c0);
  local_98 = param_3;
  if (0 < (longlong)*(int *)(param_1 + 0x5c0)) {
    do {
      plVar5 = local_98;
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x5b8) + -8 + lVar17 * 8);
      iVar2 = *(int *)(lVar7 + 0x160);
      if (iVar2 == 0) {
        uVar15 = 1;
        uVar8 = 0;
        iVar11 = 0;
        iVar18 = 0;
      }
      else {
        puVar12 = *(uint **)(lVar7 + 0x158);
        if (*(uint **)(lVar7 + 0x158) == (uint *)0x0) {
          puVar12 = (uint *)(lVar7 + 0x148);
        }
        uVar10 = *puVar12;
        if (uVar10 == 0) {
          iVar18 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar18 = iVar2 + -1;
          }
          uVar8 = 0;
          uVar15 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar15 = uVar8;
          }
          iVar11 = 0;
          do {
            if (uVar15 == uVar8) goto LAB_143407f88;
            iVar11 = iVar11 + 0x20;
            uVar10 = puVar12[uVar8 + 1];
            uVar8 = uVar8 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar8 = 0;
          iVar11 = 0;
        }
        uVar15 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar15 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar18 = (iVar11 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar18) {
          iVar18 = iVar2;
        }
      }
      if (iVar18 != iVar2) {
        iVar13 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar13 = iVar2 + -1;
        }
        iVar13 = iVar13 >> 5;
        uVar10 = 0xffffffff;
        do {
          plVar3 = *(longlong **)(*(longlong *)(lVar7 + 0x138) + 8 + (longlong)iVar18 * 0x18);
          if ((plVar3 != (longlong *)0x0) && (*plVar3 == param_2)) {
            if ((local_98 != (longlong *)0x0) &&
               (lVar7 = FUN_1479bd5a0(*(undefined8 *)(lVar7 + 0x30)), lVar7 != 0)) {
              iVar2 = (int)plVar5[1];
              *(uint *)(plVar5 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)plVar5 + 0xc) < iVar2 + 1U) {
                FUN_147972334(plVar5,iVar2);
              }
              *(longlong *)(*plVar5 + (longlong)iVar2 * 8) = lVar7;
            }
            FUN_14796095e(param_1);
            break;
          }
          uVar10 = uVar10 & ~(uint)uVar15;
          puVar12 = *(uint **)(lVar7 + 0x158);
          if (*(uint **)(lVar7 + 0x158) == (uint *)0x0) {
            puVar12 = (uint *)(lVar7 + 0x148);
          }
          iVar18 = (int)uVar8;
          lVar9 = (longlong)iVar18;
          uVar19 = puVar12[lVar9] & uVar10;
          if (uVar19 == 0) {
            iVar14 = iVar13;
            if (iVar13 < iVar18) {
              iVar14 = iVar18;
            }
            if (iVar13 <= iVar18) break;
            lVar16 = 0;
            while( true ) {
              iVar11 = iVar11 + 0x20;
              uVar19 = puVar12[lVar9 + lVar16 + 1];
              if (uVar19 != 0) break;
              lVar16 = lVar16 + 1;
              if (iVar14 - lVar9 == lVar16) goto LAB_143407f88;
            }
            uVar8 = (ulonglong)(iVar18 + (int)lVar16 + 1);
            uVar10 = 0xffffffff;
          }
          uVar15 = (ulonglong)(-uVar19 & uVar19);
          uVar1 = uVar15 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar18 = (iVar11 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        } while (iVar18 < iVar2);
      }
LAB_143407f88:
      bVar4 = 1 < lVar17;
      lVar17 = lVar17 + -1;
    } while (bVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    FUN_14340572a(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143408026 FUN_143408026 body=130 status=ok
// SIG undefined FUN_143408026(void)

void FUN_143408026(longlong param_1,char param_2)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  char local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_146269f19();
  if (cVar1 == '\0') {
    local_48 = 0;
    local_38 = &PTR_LAB_14a7ecd30;
    local_58 = &LAB_14340b204;
    local_30 = param_1;
    local_28 = param_2;
    FUN_1415826cc();
  }
  else {
    *(byte *)(param_1 + 0x599) = *(byte *)(param_1 + 0x599) & 0xfd | param_2 * '\x02';
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434080aa FUN_1434080aa body=137 status=ok
// SIG undefined FUN_1434080aa(void)

void FUN_1434080aa(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_146269f19();
  if (cVar1 == '\0') {
    local_58 = 0;
    local_48 = &PTR_LAB_14a7ecd50;
    local_68 = &LAB_14340b246;
    local_40 = param_1;
    local_38 = param_2;
    FUN_1415826cc();
  }
  else {
    *(undefined4 *)(param_1 + 0x16c) = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143408134 FUN_143408134 body=192 status=ok
// SIG undefined FUN_143408134(void)

void FUN_143408134(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined8 *local_48;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x1c0) = param_2[2];
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  *(undefined8 *)(param_1 + 0x1b0) = uVar1;
  *(undefined8 *)(param_1 + 0x1b8) = uVar2;
  local_78 = *(undefined4 *)param_2;
  uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_70 = *(undefined4 *)(param_2 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_58[0] = (undefined1 *)0x0;
  local_48 = (undefined8 *)FUN_14001cc68(0x30,8);
  *local_48 = &PTR_LAB_14a7ecd70;
  local_48[1] = param_1;
  *(undefined4 *)(local_48 + 4) = local_68;
  *(undefined4 *)((longlong)local_48 + 0x24) = uStack_64;
  *(undefined4 *)(local_48 + 5) = uStack_60;
  *(undefined4 *)((longlong)local_48 + 0x2c) = uStack_5c;
  *(undefined4 *)(local_48 + 2) = local_78;
  *(undefined4 *)((longlong)local_48 + 0x14) = uStack_74;
  *(undefined4 *)(local_48 + 3) = uStack_70;
  *(undefined4 *)((longlong)local_48 + 0x1c) = uStack_6c;
  if (local_48 + 1 != (longlong *)0x0) {
    local_58[0] = &LAB_14340b28a;
  }
  FUN_1415826cc(local_58);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434081f6 FUN_1434081f6 body=184 status=ok
// SIG undefined FUN_1434081f6(void)

void FUN_1434081f6(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_146269f19();
  if (cVar1 == '\0') {
    local_68 = 0;
    local_58 = &PTR_LAB_14a7ecd90;
    local_78 = &LAB_14340b2ea;
    local_50 = param_1;
    local_48 = param_2;
    local_44 = param_3;
    FUN_1415826cc();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_147973c16(param_1 + 0x174,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434082c6 FUN_1434082c6 body=329 status=ok
// SIG undefined FUN_1434082c6(void)

void FUN_1434082c6(longlong param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_146269f19();
  if (cVar1 == '\0') {
    local_78 = 0;
    local_68 = &PTR_LAB_14a7ecdb0;
    local_88 = &LAB_14340b334;
    local_60 = param_1;
    local_58 = param_2;
    local_50 = param_3;
    local_4c = param_4;
    FUN_1415826cc();
  }
  else if (*(int *)(param_1 + 0x390) != *(int *)(param_1 + 0x3bc)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x3c0;
    if (*(longlong *)(param_1 + 0x3c8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x3c8);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x3d0) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x388) + (longlong)iVar4 * 0x30;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x388) + (longlong)iVar4 * 0x30) == param_2) {
          if (lVar3 != -8 && lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
          }
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x28);
      } while (iVar4 != -1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143408438 FUN_143408438 body=106 status=ok
// SIG undefined FUN_143408438(void)

undefined8 * FUN_143408438(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cace038) {
    FUN_144b3d300(&DAT_14cace038);
    if (DAT_14cace038 == -1) {
      DAT_14cace028 = 0;
      uRam000000014cace030 = 0;
      atexit((_func_5014 *)&LAB_14340b381);
      _Init_thread_footer(&DAT_14cace038);
    }
  }
  return &DAT_14cace028;
}



// FUNCTION 143408546 FUN_143408546 body=41 status=ok
// SIG undefined FUN_143408546(void)

void FUN_143408546(void)

{
  DAT_14cace008 = 0;
  if (DAT_14cace000 != 0) {
    FUN_1400020a8();
  }
  FUN_145cacc46();
  return;
}



// FUNCTION 143408570 FUN_143408570 body=73 status=ok
// SIG undefined FUN_143408570(void)

undefined8 * FUN_143408570(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7ec080;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145d0ced0(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434085ba FUN_1434085ba body=133 status=ok
// SIG undefined FUN_1434085ba(void)

void FUN_1434085ba(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_3;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  local_38 = &local_40;
  FUN_145befa90(param_1 + 0x10,&local_2c);
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8 + (longlong)local_2c * 0x18) = param_2;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143408640 FUN_143408640 body=58 status=ok
// SIG undefined FUN_143408640(void)

void FUN_143408640(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  FUN_145901634(param_1 + 0x10,param_3);
                    /* WARNING: Could not recover jumptable at 0x000143408673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 8));
  return;
}



// FUNCTION 14340867a FUN_14340867a body=182 status=ok
// SIG undefined FUN_14340867a(void)

longlong FUN_14340867a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 8));
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar3 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) goto LAB_143408715;
          lVar3 = plVar1[1];
          break;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
      goto LAB_143408717;
    }
  }
LAB_143408715:
  lVar3 = 0;
LAB_143408717:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 8));
  return lVar3;
}



// FUNCTION 143408730 FUN_143408730 body=518 status=ok
// SIG undefined FUN_143408730(void)

void FUN_143408730(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  int local_84;
  longlong *local_80;
  longlong local_70;
  int local_68;
  undefined1 local_60 [8];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 != 0) {
    FUN_14051bf56(param_1,local_60);
    if (local_58 != 0) {
      FUN_14795f0e8(local_58,&local_70);
      FUN_14795f152(local_58,&local_90);
      lVar6 = local_90;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)local_80 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_80 + 0x10))(local_80);
          }
        }
      }
      lVar7 = local_70;
      if (DAT_14cb0d2b0 != 0) {
        lVar12 = (longlong)local_68;
        if (lVar12 != 0) {
          lVar11 = 0;
          do {
            lVar3 = *(longlong *)(lVar7 + lVar11);
            local_98 = lVar3;
            FUN_1400021e4(&local_98,&local_a8);
            iVar4 = (int)local_a0;
            iVar8 = ((int)local_a0 == 0) + 1;
            local_90 = local_a8;
            local_a8 = 0;
            local_88 = (int)local_a0;
            iVar5 = local_a0._4_4_;
            local_84 = local_a0._4_4_;
            local_a0 = 0;
            iVar9 = iVar8 + iVar4;
            if (iVar9 < iVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar8);
            }
            if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar9);
            }
            if (iVar5 < iVar9) {
              FUN_1446f8c06(&local_90);
            }
            uVar10 = 0x20;
            if (lVar3 == lVar6) {
              uVar10 = 0x2a;
            }
            FUN_140002184(&local_90,uVar10);
            if (local_90 != 0) {
              FUN_1400020a8();
            }
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            lVar11 = lVar11 + 8;
          } while (lVar12 * 8 != lVar11);
        }
        FUN_140002266(&local_90,L"-----------------------------------------");
        if (local_90 != 0) {
          FUN_1400020a8();
        }
        FUN_140002266(&local_90,L"Available spatial plugins [count = %i] (* = Active)",local_68);
        if (local_90 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_14051bf10(local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143408938 FUN_143408938 body=273 status=ok
// SIG undefined FUN_143408938(void)

void FUN_143408938(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    lVar5 = 0;
    do {
      iVar1 = *(int *)(lVar2 + 8 + lVar5);
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      FUN_1400020e8(&local_58,*(undefined8 *)(lVar2 + lVar5),iVar4);
      FUN_140002184(&local_58,0x20);
      lVar5 = lVar5 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar5);
  }
  FUN_140ded26a(&local_58);
  FUN_140ded312(&local_58);
  if (param_2 != 0) {
    FUN_14051bf56(param_2,local_70);
    if (local_68 != 0) {
      iVar1 = (int)uStack_50 + -1;
      if ((int)uStack_50 == 0) {
        iVar1 = 0;
      }
      FUN_1446f82e2(&local_40,iVar1,local_58,1);
      FUN_14795f026(local_68,local_40);
    }
    FUN_14051bf10(local_70);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143408a4a FUN_143408a4a body=589 status=ok
// SIG undefined FUN_143408a4a(void)

void FUN_143408a4a(void)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_38[2] = lVar4;
  *local_38 = (longlong)&PTR_FUN_14a7ec190;
  if ((local_38 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*local_38 + 0x30))(), uVar2 = DAT_14c872d00, cVar3 == '\0')) {
    if (local_30 != 0) {
      if (local_38 == (longlong *)0x0) goto LAB_143408c0e;
      (**(code **)*local_38)(local_38,0);
      FUN_1446efa72(&local_38,0,0,0x10);
      goto LAB_143408bfc;
    }
  }
  else {
    if ((DAT_14c872d0c < 1) &&
       (DAT_14c872d08 = DAT_14c872d08 + -1, DAT_14c872d08 <= (int)DAT_14c872d00)) {
      if (0 < (int)DAT_14c872d00) {
        iVar5 = 0;
        do {
          if (((*(int *)(DAT_14c872cf8 + 8 + (longlong)iVar5 * 0x10) == 0) ||
              (plVar1 = *(longlong **)(DAT_14c872cf8 + (longlong)iVar5 * 0x10),
              plVar1 == (longlong *)0x0)) ||
             (cVar3 = (**(code **)(*plVar1 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(&DAT_14c872cf8,iVar5);
            FUN_14005b248(&DAT_14c872cf8);
          }
          else {
            iVar5 = iVar5 + 1;
          }
        } while (iVar5 < (int)DAT_14c872d00);
      }
      DAT_14c872d08 = 2;
      if (2 < (int)(DAT_14c872d00 * 2)) {
        DAT_14c872d08 = DAT_14c872d00 * 2;
      }
      if ((DAT_14c872d08 < (int)uVar2) && (DAT_14c872d04 != DAT_14c872d00)) {
        FUN_14045812c();
      }
    }
    if ((local_30 != 0) && (local_38 != (longlong *)0x0)) {
      (**(code **)(*local_38 + 0x38))(local_38,local_28);
    }
    uVar2 = DAT_14c872d00;
    lVar6 = (longlong)(int)DAT_14c872d00;
    DAT_14c872d00 = DAT_14c872d00 + 1;
    if (DAT_14c872d04 < DAT_14c872d00) {
      FUN_1447a71f6(&DAT_14c872cf8,uVar2);
    }
    lVar4 = DAT_14c872cf8;
    lVar6 = lVar6 * 0x10;
    *(undefined8 *)(DAT_14c872cf8 + lVar6) = 0;
    *(undefined4 *)(lVar4 + 8 + lVar6) = 0;
    *(longlong **)(lVar4 + lVar6) = local_38;
    local_38 = (longlong *)0x0;
    *(int *)(lVar4 + 8 + lVar6) = local_30;
LAB_143408bfc:
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143408c0e:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143408c98 FUN_143408c98 body=29 status=ok
// SIG undefined FUN_143408c98(void)

undefined8 FUN_143408c98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143408cca FUN_143408cca body=85 status=ok
// SIG undefined FUN_143408cca(void)

void FUN_143408cca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7ec190;
  return;
}



// FUNCTION 143408d20 FUN_143408d20 body=85 status=ok
// SIG undefined FUN_143408d20(void)

void FUN_143408d20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7ec190;
  return;
}



// FUNCTION 143408d76 FUN_143408d76 body=118 status=ok
// SIG undefined FUN_143408d76(void)

void FUN_143408d76(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a7ec190;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143408ddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143408e18 FUN_143408e18 body=53 status=ok
// SIG undefined FUN_143408e18(void)

undefined8 FUN_143408e18(void)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = DAT_14cacd9d8;
  if (DAT_14cacd9d8 == (longlong *)0x0) {
    DAT_14cacd9d8 = (longlong *)&DAT_00000008;
  }
  else {
    plVar1 = DAT_14cacd9d8 + 0x6b;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x2c8))();
    }
  }
  return 1;
}



// FUNCTION 143408eee FUN_143408eee body=128 status=ok
// SIG undefined FUN_143408eee(void)

undefined8 FUN_143408eee(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[2];
  if (*(char *)(lVar4 + 0x38) == '\x01') {
    cVar3 = (**(code **)(*plVar2 + 0x430))(plVar2,param_2,lVar4 + 0x80);
    if (cVar3 == '\0') {
      return 1;
    }
    lVar4 = param_1[2];
  }
  cVar3 = FUN_1479510fe(lVar4,param_2,plVar2);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_14171b750(plVar2,iVar1);
    }
    FUN_1400e7d28((longlong)iVar1 * 0x70 + *plVar2,param_2);
  }
  return 1;
}



// FUNCTION 143408f6e FUN_143408f6e body=274 status=ok
// SIG undefined FUN_143408f6e(void)

undefined8 FUN_143408f6e(longlong param_1)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_468 [40];
  undefined8 local_440;
  undefined1 *local_438;
  undefined1 *local_430;
  ulonglong *local_428;
  char local_420;
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_468;
  local_438 = local_418;
  local_420 = '\0';
  local_428 = &local_18;
  local_440 = *(undefined8 *)(param_1 + 8);
  local_430 = local_438;
  FUN_14005eb5c(&local_440,&local_438);
  iVar4 = (int)((ulonglong)((longlong)local_430 - (longlong)local_438) >> 1);
  if (iVar4 < 9) {
    uVar7 = 0;
LAB_143409046:
    if (local_420 == '\x01') {
      FUN_1400020a8();
    }
    if ((local_18 ^ (ulonglong)auStack_468) == DAT_14c707940) {
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar5 = 9;
  lVar8 = 0;
LAB_143408ff0:
  uVar2 = *(ushort *)((longlong)L"Blueprint" + lVar8);
  uVar6 = (ulonglong)uVar2;
  uVar3 = *(ushort *)(local_438 + lVar8 + ((ulonglong)(uint)(iVar4 * 2) - 0x12));
  if (uVar2 == uVar3) {
    uVar9 = 0;
    if ((uVar2 == 0) || (lVar5 == 1)) goto LAB_14340903f;
  }
  else {
    if (0x7f < (uVar3 | uVar2)) {
      uVar9 = (uint)uVar2 - (uint)uVar3;
      uVar6 = (ulonglong)uVar9;
LAB_14340903f:
      uVar7 = CONCAT71((int7)(uVar6 >> 8),uVar9 == 0);
      goto LAB_143409046;
    }
    pbVar1 = &DAT_149e05da0 + uVar6;
    uVar6 = 0;
    if (*pbVar1 != (&DAT_149e05da0)[(uint)uVar3]) {
      uVar9 = (uint)*pbVar1 - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
      goto LAB_14340903f;
    }
    if (lVar5 == 1) {
      uVar9 = 0;
      goto LAB_14340903f;
    }
  }
  lVar5 = lVar5 + -1;
  lVar8 = lVar8 + 2;
  goto LAB_143408ff0;
}



// FUNCTION 1434090d0 FUN_1434090d0 body=111 status=ok
// SIG undefined FUN_1434090d0(void)

undefined8 * FUN_1434090d0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a7ec4c0;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143409121;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143409121:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143409154 FUN_143409154 body=115 status=ok
// SIG undefined FUN_143409154(void)

void FUN_143409154(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7ec530;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7ec4c0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14114e6dc(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1434091c8 FUN_1434091c8 body=115 status=ok
// SIG undefined FUN_1434091c8(void)

void FUN_1434091c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7ec530;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7ec4c0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14114e6dc(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 14340923c FUN_14340923c body=149 status=ok
// SIG undefined FUN_14340923c(void)

void FUN_14340923c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a7ec530;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a7ec4c0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_14114e6dc(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434092c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1434092f4 FUN_1434092f4 body=40 status=ok
// SIG undefined FUN_1434092f4(void)

undefined8 FUN_1434092f4(longlong param_1)

{
  undefined8 in_RAX;
  undefined7 uVar1;
  undefined7 extraout_var;
  
  uVar1 = (undefined7)((ulonglong)in_RAX >> 8);
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0 && *(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
    uVar1 = extraout_var;
  }
  return CONCAT71(uVar1,1);
}



// FUNCTION 14340931c FUN_14340931c body=125 status=ok
// SIG undefined FUN_14340931c(void)

undefined8 * FUN_14340931c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a7ec5a0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14340937b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14340937b:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434093ae FUN_1434093ae body=182 status=ok
// SIG undefined FUN_1434093ae(void)

void FUN_1434093ae(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a7ec5a0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  FUN_1479682e0(puVar2 + 3,param_1 + 0x18);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_144a06ca8(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 << 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 143409464 FUN_143409464 body=182 status=ok
// SIG undefined FUN_143409464(void)

void FUN_143409464(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a7ec5a0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  FUN_1479682e0(puVar2 + 3,param_1 + 0x18);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_144a06ca8(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 << 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 14340951a FUN_14340951a body=222 status=ok
// SIG undefined FUN_14340951a(void)

void FUN_14340951a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14a7ec5a0;
  (p_Var2->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var2->EntryCount = 0;
  FUN_1479682e0(&(p_Var2->ProcessLocksList).Blink,param_1 + 0x18);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_144a06ca8(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 << 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001434095e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143409622 FUN_143409622 body=47 status=ok
// SIG undefined FUN_143409622(void)

undefined8 FUN_143409622(longlong param_1)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x20) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,0,param_1 + 0x28);
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143409652 FUN_143409652 body=111 status=ok
// SIG undefined FUN_143409652(void)

undefined8 * FUN_143409652(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a7ec610;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1434096a3;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1434096a3:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1434096d6 FUN_1434096d6 body=115 status=ok
// SIG undefined FUN_1434096d6(void)

void FUN_1434096d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7ec610;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_1479682e0(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 14340974a FUN_14340974a body=115 status=ok
// SIG undefined FUN_14340974a(void)

void FUN_14340974a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7ec610;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_1479682e0(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 1434097be FUN_1434097be body=149 status=ok
// SIG undefined FUN_1434097be(void)

void FUN_1434097be(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a7ec610;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_1479682e0(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143409844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14340985e FUN_14340985e body=20 status=ok
// SIG undefined FUN_14340985e(void)

undefined1 FUN_14340985e(longlong param_1)

{
  FUN_143409872(param_1 + 0x18);
  return 1;
}



// FUNCTION 143409872 FUN_143409872 body=105 status=ok
// SIG undefined FUN_143409872(void)

void FUN_143409872(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0 && (int)param_1[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,1,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1434098dc FUN_1434098dc body=125 status=ok
// SIG undefined FUN_1434098dc(void)

undefined8 * FUN_1434098dc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a7ec680;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14340993b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14340993b:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340996e FUN_14340996e body=182 status=ok
// SIG undefined FUN_14340996e(void)

void FUN_14340996e(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a7ec680;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  FUN_1479682e0(puVar2 + 3,param_1 + 0x18);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_144a06ca8(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 << 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 143409a24 FUN_143409a24 body=182 status=ok
// SIG undefined FUN_143409a24(void)

void FUN_143409a24(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a7ec680;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  FUN_1479682e0(puVar2 + 3,param_1 + 0x18);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_144a06ca8(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 << 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 143409ada FUN_143409ada body=222 status=ok
// SIG undefined FUN_143409ada(void)

void FUN_143409ada(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e06450;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14a7ec680;
  (p_Var2->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var2->EntryCount = 0;
  FUN_1479682e0(&(p_Var2->ProcessLocksList).Blink,param_1 + 0x18);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_144a06ca8(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 << 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143409ba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143409be2 FUN_143409be2 body=47 status=ok
// SIG undefined FUN_143409be2(void)

undefined8 FUN_143409be2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x20) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,param_1 + 0x28);
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 143409c12 FUN_143409c12 body=111 status=ok
// SIG undefined FUN_143409c12(void)

void FUN_143409c12(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146871dde(local_28,*param_2,0);
  FUN_1467aca2a(local_28,0,0x2f);
  FUN_1405e9454(*param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143409c82 FUN_143409c82 body=47 status=ok
// SIG undefined FUN_143409c82(void)

void FUN_143409c82(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143409cb2 FUN_143409cb2 body=248 status=ok
// SIG undefined FUN_143409cb2(void)

void FUN_143409cb2(longlong param_1,int param_2)

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



// FUNCTION 143409daa FUN_143409daa body=204 status=ok
// SIG undefined FUN_143409daa(void)

void FUN_143409daa(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1479bd5a0(*param_1);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xb08)) {
      local_38 = *(undefined4 *)(param_1 + 2);
      local_40 = param_1[1];
      FUN_1447cd2ec(lVar1 + 0xb00);
    }
    if ((longlong)*(int *)(lVar1 + 0xb18) != 0) {
      lVar2 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar1 + 0xb10) + 8 + lVar2) != 0) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0xb10) + lVar2) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
        }
        lVar2 = lVar2 + 0x10;
      } while ((longlong)*(int *)(lVar1 + 0xb18) * 0x10 != lVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143409eaa FUN_143409eaa body=29 status=ok
// SIG undefined FUN_143409eaa(void)

undefined8 FUN_143409eaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143409ec8 FUN_143409ec8 body=204 status=ok
// SIG undefined FUN_143409ec8(void)

void FUN_143409ec8(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1479bd5a0(*param_1);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xb30)) {
      local_38 = *(undefined4 *)(param_1 + 2);
      local_40 = param_1[1];
      FUN_1447cd2ec(lVar1 + 0xb28);
    }
    if ((longlong)*(int *)(lVar1 + 0xb40) != 0) {
      lVar2 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar1 + 0xb38) + 8 + lVar2) != 0) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0xb38) + lVar2) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
        }
        lVar2 = lVar2 + 0x10;
      } while ((longlong)*(int *)(lVar1 + 0xb40) * 0x10 != lVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143409fc8 FUN_143409fc8 body=29 status=ok
// SIG undefined FUN_143409fc8(void)

undefined8 FUN_143409fc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143409fe5 FUN_143409fe5 body=61 status=ok
// SIG undefined FUN_143409fe5(void)

void FUN_143409fe5(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *puVar1 = FUN_14796a2ab;
  puVar1[1] = FUN_143409fe5;
  FUN_14796a2ca(puVar1 + 2,param_1);
  return;
}



// FUNCTION 14340a046 FUN_14340a046 body=29 status=ok
// SIG undefined FUN_14340a046(void)

undefined8 FUN_14340a046(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340a088 FUN_14340a088 body=29 status=ok
// SIG undefined FUN_14340a088(void)

undefined8 FUN_14340a088(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340a0dc FUN_14340a0dc body=29 status=ok
// SIG undefined FUN_14340a0dc(void)

undefined8 FUN_14340a0dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340a122 FUN_14340a122 body=29 status=ok
// SIG undefined FUN_14340a122(void)

undefined8 FUN_14340a122(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340a166 FUN_14340a166 body=29 status=ok
// SIG undefined FUN_14340a166(void)

undefined8 FUN_14340a166(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340a184 FUN_14340a184 body=144 status=ok
// SIG undefined FUN_14340a184(void)

void FUN_14340a184(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  *(byte *)(*param_1 + 0x5b0) = *(byte *)(*param_1 + 0x5b0) | 1;
  lVar1 = *param_1;
  *(char *)(lVar1 + 0x4f0) = (char)param_1[1];
  lVar3 = param_1[2];
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_1[2];
    }
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(lVar1 + 0x4f8) = lVar3;
  lVar3 = param_1[3];
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_1[3];
    }
  }
  *(longlong *)(lVar1 + 0x500) = lVar3;
  *(longlong *)(lVar1 + 0x508) = param_1[4];
  *(int *)(lVar1 + 0x510) = (int)param_1[5];
  return;
}



// FUNCTION 14340a21e FUN_14340a21e body=29 status=ok
// SIG undefined FUN_14340a21e(void)

void FUN_14340a21e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14340a23c FUN_14340a23c body=29 status=ok
// SIG undefined FUN_14340a23c(void)

undefined8 FUN_14340a23c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14340a25a FUN_14340a25a body=115 status=ok
// SIG undefined FUN_14340a25a(void)

void FUN_14340a25a(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(byte *)(*param_1 + 0x5b0) = *(byte *)(*param_1 + 0x5b0) & 0xfe;
  local_40 = 1;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0x400000003f000000;
  local_20 = 0;
  lVar1 = *param_1;
  FUN_14796c11e(lVar1 + 0x4f0);
  *(undefined4 *)(lVar1 + 0x510) = 0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14340a2e4 FUN_14340a2e4 body=29 status=ok
// SIG undefined FUN_14340a2e4(void)

undefined8 FUN_14340a2e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


