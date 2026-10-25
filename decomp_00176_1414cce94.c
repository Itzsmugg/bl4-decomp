// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1414cce94 FUN_1414cce94 body=171 status=ok
// SIG undefined FUN_1414cce94(void)

void FUN_1414cce94(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  
  if (*(longlong **)(param_1 + 0x710) != (longlong *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x710);
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x20))();
    if (iVar5 == 1) {
      FUN_1411b0914(plVar2);
      FUN_146888c0a(plVar2);
    }
    plVar3 = (longlong *)*plVar2;
    *plVar2 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined8 *)((longlong)puVar6 + 10) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x12) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)((longlong)puVar6 + 0xc) = *(int *)((longlong)puVar6 + 0xc) + 1;
    UNLOCK();
  }
  lVar4 = *(longlong *)(param_1 + 0x718);
  *(undefined8 **)(param_1 + 0x718) = puVar6;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(lVar4);
      FUN_1400020a8(lVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1414ccf40 FUN_1414ccf40 body=1080 status=ok
// SIG undefined FUN_1414ccf40(void)

undefined8 FUN_1414ccf40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined2 *local_a8;
  ulonglong uStack_a0;
  longlong local_90;
  int local_88;
  undefined8 local_80;
  undefined1 local_72;
  char local_71;
  longlong local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = param_3;
  cVar3 = FUN_140988638(&local_80,L"stat",1);
  cVar4 = FUN_140988638(&local_80,L"budget",1);
  uVar1 = local_80;
  if ((cVar3 == '\0') && (cVar4 == '\0')) goto LAB_1414ccf94;
  FUN_140056680(&local_38,local_80);
  FUN_145bc8d6c(&local_90,&local_38);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (1 < local_88) {
    FUN_140056680(&local_38,uVar1);
    uStack_a0 = uStack_30;
    iVar5 = (int)uStack_30;
    if ((int)uStack_30 < 2) {
      local_a8 = (undefined2 *)0x0;
      uStack_a0 = 0;
    }
    else {
      local_a8 = local_38;
      iVar2 = uStack_30._4_4_;
      local_38 = (undefined2 *)0x0;
      uStack_30 = 0;
      if (iVar2 < iVar5) {
        FUN_1446f8c06(&local_a8);
      }
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar8 = local_a8;
    local_b8 = (undefined2 *)0x0;
    lVar9 = (longlong)(int)uStack_a0;
    local_b0 = (int)uStack_a0;
    if (lVar9 == 0) {
      local_ac = 0;
LAB_1414cd0c2:
      local_50 = &DAT_149dfb77a;
    }
    else {
      FUN_1446dd670(&local_b8,uStack_a0 & 0xffffffff,0);
      memcpy(local_b8,puVar8,lVar9 * 2);
      local_50 = local_b8;
      if (local_b0 == 0) goto LAB_1414cd0c2;
    }
    if (cVar3 == '\0') {
      local_38 = (undefined2 *)0x0;
      uStack_30 = 0;
      FUN_140ffc744(&local_50,&local_38,0,0);
      puVar8 = local_38;
    }
    else {
      local_68 = (undefined2 *)0x0;
      uStack_60 = 0;
      FUN_140ffc744(&local_50,&local_68,0,0);
      uVar6 = (int)uStack_60 - 1;
      if ((int)uStack_60 == 0) {
        uVar6 = 0;
      }
      puVar8 = local_68;
      if (0 < (int)uVar6) {
        iVar5 = (int)uStack_60;
        if (local_68[(ulonglong)uVar6 - 1] == 0x2b) {
          if ((int)uStack_60 - uVar6 != 0) {
            memmove(local_68 + ((ulonglong)uVar6 - 1),local_68 + uVar6,
                    (longlong)(int)((int)uStack_60 - uVar6) * 2);
          }
          iVar5 = (int)uStack_60 + -1;
          uStack_60 = CONCAT44(uStack_60._4_4_,iVar5);
        }
        puVar10 = &DAT_149dfb77a;
        puVar8 = local_68;
        if (iVar5 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        FUN_1446f470e(&local_70,puVar8,1);
        local_71 = '\x01';
        local_72 = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c87e630) &&
           (FUN_144b3d300(&DAT_14c87e630), DAT_14c87e630 == -1)) {
          FUN_1446f470e(&DAT_14c87e628,L"STATGROUP_None",1);
          _Init_thread_footer(&DAT_14c87e630);
        }
        if (local_70 == DAT_14c87e628) {
          FUN_140898514(&DAT_14c868820,1);
          puVar8 = local_68;
        }
        else {
          FUN_1400021e4(&local_70,&local_38);
          FUN_1400b22c2(&local_48,"STATGROUP_");
          iVar5 = 0;
          if (local_40 != 0) {
            puVar10 = local_48;
            iVar5 = local_40 + -1;
          }
          FUN_140c540b4(&local_38,puVar10,iVar5,1);
          if (local_48 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if ((longlong)DAT_14c868840 != 0) {
            lVar9 = 0;
            do {
              if ((*(int *)(DAT_14c868838 + 8 + lVar9) != 0) &&
                 (*(longlong *)(DAT_14c868838 + lVar9) != 0)) {
                puVar8 = &DAT_149dfb77a;
                if ((int)uStack_30 != 0) {
                  puVar8 = local_38;
                }
                FUN_146829230(puVar8,&local_71,&local_72);
                puVar8 = &DAT_149dfb77a;
                if ((int)uStack_30 != 0) {
                  puVar8 = local_38;
                }
                puVar7 = &DAT_14c868850;
                if (local_71 != '\0') {
                  puVar7 = &DAT_14c868868;
                }
                FUN_14681c27a(puVar7,puVar8);
                break;
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)DAT_14c868840 * 0x10 != lVar9);
          }
          puVar8 = local_68;
          if (local_38 != (undefined2 *)0x0) {
            FUN_1400020a8();
            puVar8 = local_68;
          }
        }
      }
    }
    if (puVar8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
LAB_1414ccf94:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cd37a FUN_1414cd37a body=157 status=ok
// SIG undefined FUN_1414cd37a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414cd37a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99e178) {
    FUN_144b3d300(&DAT_14c99e178);
    if (DAT_14c99e178 == -1) {
      _DAT_14c99e148 = &PTR_LAB_149e668b0;
      _DAT_14c99e150 = 0;
      FUN_1405bceb4(&DAT_14c99e148);
      _DAT_14c99e148 = &PTR_FUN_149fcd880;
      DAT_14c99e158 = 0;
      _DAT_14c99e160 = 0;
      _DAT_14c99e168 = 0;
      _DAT_14c99e170 = 0;
      atexit((_func_5014 *)&LAB_142aedb63);
      _Init_thread_footer(&DAT_14c99e178);
      return;
    }
  }
  return;
}



// FUNCTION 1414cd418 FUN_1414cd418 body=148 status=ok
// SIG undefined FUN_1414cd418(void)

void FUN_1414cd418(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = param_1[1];
  if (0 < (longlong)(int)lVar2) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*param_1 + lVar4 * 8);
      if (lVar1 != 0) {
        lVar3 = 0xc000;
        do {
          if (*(longlong *)(lVar1 + -0x20 + lVar3) != 0) {
            FUN_1400020a8();
          }
          lVar3 = lVar3 + -0x60;
        } while (lVar3 != 0);
        FUN_1400020a8(lVar1);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != (int)lVar2);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_145bc98d8(param_1,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1414cd4ac FUN_1414cd4ac body=244 status=ok
// SIG undefined FUN_1414cd4ac(void)

void FUN_1414cd4ac(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  FUN_145d16e5a(param_1 + 0x35d8,param_2,&local_58);
  lVar2 = local_58;
  lVar4 = (longlong)(int)uStack_50;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      uVar1 = *(uint *)(lVar2 + lVar5);
      local_68 = *(undefined4 *)(param_2 + 0x38);
      uStack_64 = *(undefined4 *)(param_2 + 0x3c);
      uStack_60 = *(undefined4 *)(param_2 + 0x40);
      iStack_5c = *(int *)(param_2 + 0x44);
      if ((char)local_68 == '\x01') {
        cVar6 = iStack_5c != 0;
      }
      else {
        cVar6 = FUN_140321d1a(&local_68);
      }
      uVar3 = *(uint *)(param_1 + 0x362c) | uVar1;
      if (cVar6 == '\0') {
        uVar3 = ~uVar1 & *(uint *)(param_1 + 0x362c);
      }
      *(uint *)(param_1 + 0x362c) = uVar3;
      FUN_143ce8e58(param_1 + 0x35c0,uVar1);
      lVar5 = lVar5 + 4;
    } while (lVar4 * 4 != lVar5);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414cd5a2 FUN_1414cd5a2 body=134 status=ok
// SIG undefined FUN_1414cd5a2(void)

void FUN_1414cd5a2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41e4a0;
  param_1[4] = &PTR_FUN_14b41e4c0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001414cd61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1414cd62a FUN_1414cd62a body=207 status=ok
// SIG undefined FUN_1414cd62a(void)

void FUN_1414cd62a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b429d30;
  plVar3 = (longlong *)param_1[9];
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
  plVar3 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1414cd6ce;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1414cd6ce:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001414cd6e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1414cd6fa FUN_1414cd6fa body=19 status=ok
// SIG undefined FUN_1414cd6fa(void)

longlong FUN_1414cd6fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80) + 0x30;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar1 = param_1;
  }
  return lVar1;
}



// FUNCTION 1414cd70d FUN_1414cd70d body=679 status=ok
// SIG undefined FUN_1414cd70d(void)

longlong FUN_1414cd70d(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong **local_d0;
  longlong **local_c8;
  int local_bc;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1408f45ee(&local_b8);
  local_e0 = local_b8;
  local_d8 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
    UNLOCK();
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_b0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar3 = (int *)((longlong)plStack_b0 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        }
      }
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
      plStack_b0 = local_d8;
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
      bVar4 = false;
      goto LAB_1414cd79a;
    }
  }
  plStack_b0 = (longlong *)0x0;
  bVar4 = true;
LAB_1414cd79a:
  plVar7 = plStack_b0;
  local_b8 = local_e0;
  uVar5 = (**(code **)(*local_e0 + 0x40))();
  iVar6 = FUN_1408f4668(param_1,uVar5,&local_b8);
  plVar2 = plStack_b0;
  lVar8 = 0;
  if (iVar6 != -1) {
    lVar8 = (longlong)iVar6 * 0x28 + *param_1;
  }
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (!bVar4) {
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (lVar8 == 0) {
    local_b8 = (longlong *)0x0;
    plStack_b0 = (longlong *)0x0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    local_88 = 1;
    local_60 = 0;
    local_58 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_54 = 0xffffffff00000080;
    local_4c = 0;
    local_40 = 0;
    local_38 = 0;
    FUN_140dfac6a(&local_b8);
    plVar7 = (longlong *)FUN_14001cc68(0x98,0x10);
    FUN_145bcba86(plVar7,&local_b8);
    local_f0 = plVar7 + 2;
    local_c8 = &local_f0;
    local_d0 = &local_e0;
    local_e8 = plVar7;
    FUN_145bcbb02(param_1,&local_bc);
    plVar7 = local_e8;
    lVar8 = *param_1;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_e8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    lVar8 = lVar8 + (longlong)local_bc * 0x28;
    FUN_1410fdefc(&local_b8);
  }
  plVar7 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_d8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8 + 0x10;
}



// FUNCTION 1414cd9b6 FUN_1414cd9b6 body=896 status=ok
// SIG undefined FUN_1414cd9b6(void)

void FUN_1414cd9b6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_1c8 [32];
  undefined1 **local_1a8;
  undefined1 **local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  int local_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  uint uStack_170;
  uint local_16c;
  ushort local_166;
  undefined4 local_164;
  longlong *local_160;
  longlong *local_158;
  undefined1 *local_150;
  undefined4 **local_148;
  undefined4 *local_140;
  longlong *local_138;
  longlong *local_130;
  code *local_128;
  byte local_120;
  undefined1 *local_118;
  byte local_110;
  undefined1 local_108 [32];
  undefined8 local_e8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined1 local_80 [32];
  undefined8 local_60;
  undefined1 *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar6 = FUN_14009d2a0();
  local_17c = CONCAT22(*(short *)(lVar6 + 0xfe),*(short *)(lVar6 + 0x4e));
  uStack_178 = CONCAT22(*(short *)(lVar6 + 0x100),*(short *)(lVar6 + 0x54));
  local_16c = local_16c & 0xffffff00;
  lVar3 = *(longlong *)(param_1 + 0x28);
  uStack_170 = *(uint *)(lVar3 + 0x294);
  uStack_174._0_2_ = CONCAT11((uStack_170 & 0xfffffeff) == 1,(undefined1)uStack_174);
  lVar4 = *(longlong *)(lVar3 + 0x548);
  local_166 = (ushort)uStack_174;
  local_128 = FUN_140f90610;
  local_120 = 3;
  if ((((*(short *)(lVar6 + 0x4e) == -1) || (*(short *)(lVar6 + 0xfe) == -1)) ||
      (*(short *)(lVar6 + 0x54) == -1)) || (*(short *)(lVar6 + 0x100) == -1)) goto LAB_1414cda9f;
  cVar5 = FUN_1414cdd38(&local_17c,lVar3 + 0x28);
  if (cVar5 == '\0') goto LAB_1414cda9f;
  plVar7 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a475800;
  plVar7[2] = (longlong)&PTR_FUN_14a475818;
  plVar7[3] = param_1;
  plVar7[4] = lVar4;
  *(undefined4 *)(plVar7 + 5) = local_17c;
  *(undefined4 *)((longlong)plVar7 + 0x2c) = uStack_178;
  *(undefined4 *)(plVar7 + 6) = uStack_174;
  *(uint *)((longlong)plVar7 + 0x34) = uStack_170;
  *(uint *)(plVar7 + 7) = local_16c;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
  local_60 = 0x10000000000;
  local_88 = 0x10000000000;
  FUN_145bcc648(&local_17c,local_80,local_a8);
  local_e8 = 0x10000000000;
  local_c0 = 0x10000000000;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_145bcc69a(&local_17c,local_108);
  local_148 = &local_140;
  local_150 = &LAB_146204f8e;
  local_110 = local_120;
  local_140 = &local_17c;
  (*(code *)(&PTR_LAB_14a475bc0)[local_120])(&local_118);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_1a0 = &local_150;
  local_1a8 = &local_118;
  local_198 = local_108;
  local_190 = local_80;
  local_188 = local_a8;
  local_160 = plVar7 + 2;
  local_158 = plVar7;
  FUN_1406ac01c(param_2,&local_180,&local_166,&local_160);
  if (local_180 == -1) {
    if ((local_166 & 0x400) != 0) {
      FUN_145c71394(param_2,&local_58);
      local_180 = (int)local_58;
      if ((int)local_58 != -1) goto LAB_1414cdc20;
    }
  }
  else {
LAB_1414cdc20:
    local_50 = 0;
    local_58 = &LAB_1432d8ac2;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_1a8 = &local_58;
    local_138 = plVar7 + 2;
    local_130 = plVar7;
    FUN_1406abf4a(param_2,&local_164,&local_166,&local_138);
    FUN_1407ce0e2(param_2,local_180,0xffffffff);
    FUN_1407cdf34(param_2,local_180,local_164);
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
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
LAB_1414cda9f:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414cdd38 FUN_1414cdd38 body=223 status=ok
// SIG undefined FUN_1414cdd38(void)

undefined8 FUN_1414cdd38(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[3];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5 & bVar6);
}



// FUNCTION 1414cde18 FUN_1414cde18 body=574 status=ok
// SIG undefined FUN_1414cde18(void)

undefined8 FUN_1414cde18(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  code *local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((*(byte *)(param_1 + 0x100) & 0x10) == 0) &&
      ((*(byte *)(*(longlong *)(param_1 + 0x80) + 0x5b8) & 1) != 0)) &&
     (*(longlong *)(param_1 + 0x20) != param_2)) {
    if (param_2 == 0) goto LAB_1414cdf81;
    if (DAT_14cacf818 == 0) {
      local_60 = local_40;
      local_40[0] = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1463b216c;
      local_68 = &LAB_1479977e3;
      local_70 = &LAB_1463b2171;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x750;
      FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
    }
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cacf818 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) != DAT_14cacf818 + 0x30)) {
      uVar3 = FUN_144a7b040();
      plVar4 = (longlong *)FUN_144718840(param_2,uVar3);
      if (plVar4 == (longlong *)0x0) {
        if (*(longlong *)(param_2 + 0x10) != 0) {
          local_30 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18);
          FUN_1400021e4(&local_30,local_40);
          local_90 = 0xffffffff;
          local_98 = 0;
          iVar2 = FUN_1447ee042(local_40,L"Water",5,1);
          if (local_40[0] != (code *)0x0) {
            FUN_1400020a8();
          }
          if (iVar2 != -1) goto LAB_1414cde52;
        }
LAB_1414cdf81:
        uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x80) >> 8),
                         *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x5b9));
        goto LAB_1414cde54;
      }
      if ((*(char *)(*(longlong *)(param_1 + 0x80) + 0x5ba) == '\x01') &&
         ((*(char *)(*(longlong *)(param_1 + 0x80) + 0x5bd) != '\0' ||
          (cVar1 = (**(code **)(*plVar4 + 0x40))(plVar4), cVar1 == '\0')))) goto LAB_1414cdecf;
    }
    else if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x5be) == '\x01') {
LAB_1414cdecf:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    }
  }
LAB_1414cde52:
  uVar3 = 0;
LAB_1414cde54:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1414ce072 FUN_1414ce072 body=384 status=ok
// SIG undefined FUN_1414ce072(void)

undefined8 FUN_1414ce072(longlong *param_1,longlong param_2,char *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    if (DAT_14cb56270 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_148630fef;
      local_60 = FUN_1464b6a91;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar2 = (longlong *)FUN_144718840(param_2,DAT_14cb56270);
    if (((plVar2 == (longlong *)0x0) || (lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2), lVar3 == 0))
       || (*(char *)(lVar3 + 0x478) == '\0')) goto LAB_1414ce0d2;
    goto LAB_1414ce11c;
  }
LAB_1414ce0d2:
  if ((param_1[8] != 0) && (((short)param_1[9] < 0 || (param_1[10] != 0)))) {
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    iVar1 = FUN_1412d1158(param_1 + 8,param_2,uVar4);
    if (iVar1 == 0) {
      if (param_3[1] != '\x01') goto LAB_1414ce11c;
    }
    else if ((iVar1 == 2) && (*param_3 == '\0')) {
LAB_1414ce11c:
      uVar4 = 0;
      goto LAB_1414ce11e;
    }
  }
  uVar4 = 1;
LAB_1414ce11e:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1414ce1f4 FUN_1414ce1f4 body=158 status=ok
// SIG undefined FUN_1414ce1f4(void)

ulonglong FUN_1414ce1f4(uint *param_1)

{
  uint uVar1;
  longlong *plVar2;
  DWORD DVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  DVar3 = GetCurrentThreadId();
  uVar4 = *param_1;
  if ((uVar4 & 1) == 0) {
    LOCK();
    uVar1 = *param_1;
    bVar6 = uVar4 == uVar1;
    if (bVar6) {
      *param_1 = uVar4 | 1;
      uVar1 = uVar4;
    }
    uVar4 = uVar1;
    UNLOCK();
    if (bVar6) {
      param_1[1] = DVar3;
      goto LAB_1414ce229;
    }
  }
  if (param_1[1] == DVar3) {
    LOCK();
    *param_1 = *param_1 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(param_1,uVar4);
  }
LAB_1414ce229:
  if (0 < (longlong)(int)param_1[8]) {
    uVar5 = (longlong)(int)param_1[8] + 1;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 6) + -0x10 + uVar5 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  uVar4 = *param_1;
  uVar5 = (ulonglong)uVar4;
  if (uVar4 < 4) {
    param_1[1] = 0;
    if (uVar4 < 2) {
      LOCK();
      uVar1 = *param_1;
      if (uVar4 == uVar1) {
        *param_1 = 0;
      }
      else {
        uVar5 = (ulonglong)uVar1;
      }
      UNLOCK();
      if (uVar4 == uVar1) {
        return uVar5;
      }
    }
    uVar5 = FUN_140d366d2(param_1);
    return uVar5;
  }
  LOCK();
  *param_1 = *param_1 - 4;
  UNLOCK();
  return uVar5;
}



// FUNCTION 1414ce292 FUN_1414ce292 body=89 status=ok
// SIG undefined FUN_1414ce292(void)

void FUN_1414ce292(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_14a8ca920;
  lVar2 = 0x820;
  do {
    puVar1 = *(undefined8 **)(param_1 + lVar2);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    lVar2 = lVar2 + -8;
  } while (lVar2 != 0x30);
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1414ce2ec FUN_1414ce2ec body=104 status=ok
// SIG undefined FUN_1414ce2ec(void)

ulonglong FUN_1414ce2ec(undefined4 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  ulonglong local_58 [9];
  
  local_58[8] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  uVar1 = FUN_1412968b8();
  FUN_143c32260(uVar1,param_1,local_58);
  FUN_1412968b8();
  if ((local_58[8] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_58[0] >> 0x27 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ce356 FUN_1414ce356 body=203 status=ok
// SIG undefined FUN_1414ce356(void)

bool FUN_1414ce356(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  size_t sVar2;
  wchar_t *_Str;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
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
  iVar1 = FUN_142500380(local_30,param_2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ce422 FUN_1414ce422 body=662 status=ok
// SIG undefined FUN_1414ce422(void)

ulonglong FUN_1414ce422(void *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  HWND hWnd;
  void *pvVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_1a8 [36];
  int local_184;
  ulonglong local_180;
  void *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  tagRECT local_158;
  longlong *local_148;
  undefined1 local_140 [152];
  undefined1 local_a8 [64];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_148 = (longlong *)0x0;
  local_178 = param_1;
  iVar3 = CreateDXGIFactory1(&DAT_14a349300);
  if (iVar3 < 0) {
    uVar8 = 0;
  }
  else {
    hWnd = GetFocus();
    local_158.left = 0;
    local_158.top = 0;
    local_158.right = 0;
    local_158.bottom = 0;
    GetWindowRect(hWnd,&local_158);
    local_160 = (longlong *)0x0;
    iVar9 = 0;
    local_180 = 0;
    iVar3 = 0;
    while( true ) {
      plVar2 = local_148;
      plVar1 = local_160;
      if (local_160 != (longlong *)0x0) {
        local_160 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0x10))();
      }
      iVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,iVar3,&local_160);
      plVar1 = local_160;
      if (iVar4 == -0x7785fffe) break;
      local_168 = (longlong *)0x0;
      iVar4 = 0;
      local_184 = iVar3;
      while( true ) {
        plVar2 = local_160;
        plVar1 = local_168;
        if (local_168 != (longlong *)0x0) {
          local_168 = (longlong *)0x0;
          (**(code **)(*plVar1 + 0x10))();
        }
        iVar5 = (**(code **)(*plVar2 + 0x38))(plVar2,iVar4,&local_168);
        plVar1 = local_168;
        iVar3 = local_184;
        if (iVar5 == -0x7785fffe) break;
        (**(code **)(*local_168 + 0x38))(local_168,local_a8);
        if (local_58 != 0) {
          iVar3 = local_60;
          if (local_158.right < local_60) {
            iVar3 = local_158.right;
          }
          iVar5 = local_158.left;
          if (local_158.left < local_68) {
            iVar5 = local_68;
          }
          iVar7 = iVar3 - iVar5;
          if (iVar3 - iVar5 < 1) {
            iVar7 = 0;
          }
          iVar3 = local_5c;
          if (local_158.bottom < local_5c) {
            iVar3 = local_158.bottom;
          }
          iVar5 = local_158.top;
          if (local_158.top < local_64) {
            iVar5 = local_64;
          }
          iVar3 = iVar3 - iVar5;
          if (iVar3 < 1) {
            iVar3 = 0;
          }
          if (iVar9 < iVar3 * iVar7) {
            local_170 = (longlong *)0x0;
            iVar5 = (**(code **)*local_168)(local_168,&DAT_14a3445c0,&local_170);
            if ((-1 < iVar5) &&
               (iVar5 = (**(code **)(*local_170 + 0xd8))(local_170,local_140), -1 < iVar5)) {
              pvVar6 = memcpy(local_178,local_140,0x98);
              local_180 = CONCAT71((int7)((ulonglong)pvVar6 >> 8),1);
              iVar9 = iVar3 * iVar7;
            }
            if (local_170 != (longlong *)0x0) {
              (**(code **)(*local_170 + 0x10))();
            }
          }
        }
        iVar4 = iVar4 + 1;
      }
      if (local_168 != (longlong *)0x0) {
        local_168 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0x10))();
      }
      iVar3 = iVar3 + 1;
    }
    uVar8 = local_180;
    if (local_160 != (longlong *)0x0) {
      local_160 = (longlong *)0x0;
      (**(code **)(*plVar1 + 0x10))();
      uVar8 = local_180;
    }
  }
  plVar1 = local_148;
  if (local_148 != (longlong *)0x0) {
    local_148 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffff01;
}



// FUNCTION 1414ce6ba FUN_1414ce6ba body=618 status=ok
// SIG undefined FUN_1414ce6ba(void)

void FUN_1414ce6ba(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  float fVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 *local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2d8))();
  FUN_140056680(&local_38,&DAT_14a90a49e);
  puVar5 = local_38;
  if ((int)lStack_30 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_48 = &DAT_14c872ce8;
  cVar2 = FUN_1414d73b6(DAT_14c872ce0,puVar5,L"r.Vsync",local_1c);
  if (cVar2 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cadb858) && (FUN_144b3d300(&DAT_14cadb858), DAT_14cadb858 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cadb850 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VSync",1);
      _Init_thread_footer(&DAT_14cadb858);
    }
    puVar5 = &DAT_149e25dfc;
    if ((char)param_1[5] != '\0') {
      puVar5 = &DAT_149e0209e;
    }
    (**(code **)(*DAT_14cadb850 + 0x98))(DAT_14cadb850,puVar5,0x2000000,0);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = DAT_14cb0d2b0;
  uVar3 = (**(code **)(*param_1 + 0x2b0))(param_1);
  *(undefined1 *)((longlong)plVar1 + 0xf49) = uVar3;
  FUN_14375dde0(plVar1);
  fVar6 = (float)(**(code **)(*param_1 + 0x348))(param_1);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  (**(code **)(*DAT_14cb0d2b0 + 0x308))(DAT_14cb0d2b0,fVar6);
  cVar2 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))();
  if (cVar2 != '\0') {
    FUN_145be1251(param_1 + 6,0);
  }
  if (DAT_14cb0d2b0[0x1ea] == 0) {
    local_38 = (undefined2 *)0x0;
    lStack_30 = 0;
    local_28 = 0xffffffff;
  }
  else {
    FUN_1479733cc(&local_38,DAT_14cb0d2b0[0x1ea] + 0x90);
    if (lStack_30 != 0) {
      plVar4 = (longlong *)FUN_14795e9a2();
      plVar1 = (longlong *)*plVar4;
      if (plVar1 == (longlong *)0x0) {
        FUN_1433ff704(lStack_30,(int)plVar4[2]);
      }
      else {
        (**(code **)(*plVar1 + 8))(plVar1);
        FUN_1433ff704(lStack_30,(int)plVar4[2]);
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0x50))();
  FUN_14051bf10(&local_38);
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414ce926 FUN_1414ce926 body=929 status=ok
// SIG undefined FUN_1414ce926(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1414ce926(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_198 [32];
  float local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined8 *local_158;
  int local_150;
  longlong local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120 [5];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_141262aba(&local_c8,param_1 + 0x188);
  FUN_146551782(param_1,&local_c8);
  FUN_146551a20(&local_c8);
  FUN_1402160b8(&local_148);
  lVar4 = local_148;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0.0;
  FUN_14021300e(local_120,0x7b2,1,1);
  lVar6 = local_120[0];
  dVar8 = *(double *)(param_1 + 0x240);
  fVar7 = (float)(**(code **)(*DAT_14cb7fa98 + 0xb8))();
  FUN_1434cface(*(undefined8 *)(param_1 + 0x148),local_120,&DAT_14cb7fa88);
  FUN_141277db8(param_1,&local_128,DAT_14cb7fa88);
  fVar9 = 0.0;
  if (local_120[0] != local_128) {
    dVar8 = (double)fVar7 - ((double)(lVar4 - lVar6) / 10000000.0 - dVar8);
    if (dVar8 <= 0.0) {
      dVar8 = 0.0;
    }
    fVar9 = (float)dVar8;
  }
  local_138 = *(undefined8 *)(param_1 + 0x230);
  local_130 = *(longlong *)(param_1 + 0x238);
  if (local_130 != 0) {
    LOCK();
    *(int *)(local_130 + 0xc) = *(int *)(local_130 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_138);
  uVar5 = FUN_1401cb356();
  plVar3 = local_120 + 1;
  local_f8 = 0;
  local_f0 = 0;
  local_120[1] = 0;
  local_120[2] = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_120[0] = param_1;
  FUN_141262aba(plVar3,&local_c8);
  local_158 = (undefined8 *)0x0;
  local_150 = 0;
  FUN_1446efa72(&local_158,0,7,0x10);
  local_150 = 7;
  *local_158 = &PTR_LAB_149e02020;
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
  local_158[2] = lVar6;
  *local_158 = &PTR_FUN_14b40ae20;
  local_158[3] = local_120[0];
  FUN_14105a876(local_158 + 4,plVar3);
  local_178 = fVar9;
  FUN_1405f67fc(uVar5,&local_148,&local_158,L"ApplyGraphicsSettings");
  *(longlong *)(param_1 + 0x230) = local_148;
  local_148 = 0;
  plVar2 = *(longlong **)(param_1 + 0x238);
  *(longlong **)(param_1 + 0x238) = local_140;
  local_140 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_140 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_140 + 0x10))();
      }
    }
  }
  if (local_150 != 0) {
    if (local_158 == (undefined8 *)0x0) goto LAB_1414cec17;
    (**(code **)*local_158)(local_158,0);
    FUN_1446efa72(&local_158,0,0,0x10);
    local_150 = 0;
  }
  if (local_158 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1414cec17:
  local_d0 = 0;
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(plVar3);
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_c8);
  if ((local_70 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414cecc8 FUN_1414cecc8 body=1237 status=ok
// SIG undefined FUN_1414cecc8(void)

void FUN_1414cecc8(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong *plVar11;
  uint *puVar12;
  undefined ***pppuVar13;
  undefined8 *puVar14;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined1 local_c8;
  undefined1 local_b9;
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined1 *puStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 < 1) {
    if (param_2 <= *(int *)(DAT_14cad6230 + 0xa0)) {
      if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
        FUN_1434cf218();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_f8);
    }
  }
  else if ((param_2 == 2) && (*(int *)(DAT_14cad6230 + 0xa0) != 2)) {
    local_b8 = 0;
    local_a8 = (longlong *)0x0;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_149e16f80;
    puStack_50 = &LAB_1434d5e6c;
    local_78 = FUN_140d11fbe;
    FUN_14170b918(&local_d8);
    plVar6 = plStack_d0;
    local_c8 = 1;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
      UNLOCK();
    }
    puVar3 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar8 = (uint *)*puVar3;
    if (puVar8 != (uint *)0x0) goto LAB_1414cee18;
    while( true ) {
      uVar10 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar10 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar10 | 1;
        __tlregdtor(&LAB_1434d470c);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar7 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar7 = 0xffffffff;
      *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *puVar3 = puVar7;
      FUN_140217a48(puVar3);
      puVar8 = (uint *)*puVar3;
LAB_1414cee18:
      puVar14 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 0xfU & 0xfffffffffffffff0);
      puVar12 = (uint *)(puVar14 + 0x22);
      uVar10 = puVar8[0x12];
      if (puVar12 <= puVar8 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
        LOCK();
        uVar4 = *puVar8;
        *puVar8 = *puVar8 + uVar10 + 1;
        UNLOCK();
        if ((uVar4 ^ uVar10) != 0xffffffff) break;
        puVar8 = (uint *)*puVar3;
        *puVar8 = 0xffffffff;
        *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
        puVar8[0x12] = 0;
        *puVar3 = puVar8;
        puVar14 = (undefined8 *)((longlong)puVar8 + 0x67U & 0xfffffffffffffff0);
        puVar12 = (uint *)(puVar14 + 0x22);
        uVar10 = 0;
        if (puVar12 <= puVar8 + 0x4000) {
          uVar10 = 1;
          goto LAB_1414cee98;
        }
      }
    }
    uVar10 = uVar10 + 1;
LAB_1414cee98:
    *(uint **)(puVar8 + 0x10) = puVar12;
    puVar8[0x12] = uVar10;
    FUN_1447247dc(puVar14,0);
    *puVar14 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
    puVar14[0x16] = local_78;
    puVar14[0x18] = local_68;
    local_68 = (undefined ***)0x0;
    *(undefined4 *)(puVar14 + 0x1c) = local_48;
    *(undefined4 *)((longlong)puVar14 + 0xe4) = uStack_44;
    *(undefined4 *)(puVar14 + 0x1d) = uStack_40;
    *(undefined4 *)((longlong)puVar14 + 0xec) = uStack_3c;
    puVar14[0x1a] = local_58;
    puVar14[0x1b] = puStack_50;
    if (local_78 != (code *)0x0) {
      local_78 = (code *)0x0;
    }
    puVar14[0x1e] = local_d8;
    puVar14[0x1f] = plStack_d0;
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    *(undefined1 *)(puVar14 + 0x20) = 0;
    *(undefined4 *)(puVar14 + 0x21) = 1;
    if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
    }
    puVar14[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar14[9] = puVar14;
    puVar14[10] = puVar14;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar14[0xf] = uVar9;
    puVar14[0x10] = 0xe80000527800b400;
    *(undefined4 *)((longlong)puVar14 + 0x1c) = 3;
    if (puVar14 == (undefined8 *)0x0) {
      local_b9 = 1;
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
      UNLOCK();
      local_b9 = 1;
      FUN_1447439e4(puVar14);
      LOCK();
      piVar2 = (int *)(puVar14 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar14)(puVar14,1);
      }
    }
    plVar11 = plStack_d0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_d0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (local_78 != (code *)0x0) {
      pppuVar13 = &local_58;
      if (local_68 != (undefined ***)0x0) {
        pppuVar13 = local_68;
      }
      (*(code *)(*pppuVar13)[2])(pppuVar13);
    }
    if (local_b8 != 0) {
      plVar11 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar11 = local_98;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar6 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
  }
  *(int *)(DAT_14cad6230 + 0xa0) = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1414cf1ae FUN_1414cf1ae body=239 status=ok
// SIG undefined FUN_1414cf1ae(void)

undefined8 * FUN_1414cf1ae(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *_Dst;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  
  uVar5 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2f8);
  if ((uVar5 & 1) == 0) {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(uint *)(lVar8 + 0x2f8) = uVar5 | 1;
    LOCK();
    UNLOCK();
    uVar5 = (DAT_14c82b9c0 >> 0x10 ^ DAT_14c82b9c0) * 0x45d9f3b;
    uVar5 = (uVar5 >> 0x10 ^ uVar5) * 0x45d9f3b;
    DAT_14c82b9c0 = DAT_14c82b9c0 + 1;
    *(uint *)(lVar8 + 0x2f4) = uVar5 >> 0x10 ^ uVar5;
  }
  lVar8 = *(longlong *)(param_1 + 0x1000);
  if (lVar8 != 0) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      lVar6 = 0;
      do {
        uVar7 = (ulonglong)((*(int *)(lVar4 + 0x2f4) + (int)lVar6 & 0x1fU) << 7);
        plVar1 = (longlong *)(lVar8 + uVar7);
        LOCK();
        bVar9 = *plVar1 == -1;
        if (bVar9) {
          *plVar1 = 0;
        }
        UNLOCK();
        if (bVar9) {
          return (undefined8 *)(lVar8 + uVar7);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x20);
      lVar8 = *(longlong *)(lVar8 + 0x1000);
    } while (lVar8 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x10f4);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10a8));
  if (*(int *)(param_1 + 0x10f4) == iVar3) {
    lVar8 = *(longlong *)(param_1 + 0x1000);
    lVar4 = param_1;
    while (lVar8 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x1000);
      lVar8 = *(longlong *)(lVar4 + 0x1000);
    }
    _Dst = (undefined8 *)FUN_14001cc68(0x1080);
    lVar8 = 0;
    memset(_Dst,0,0x1080);
    do {
      *(undefined8 *)((longlong)_Dst + lVar8) = 0;
      ((undefined8 *)((longlong)_Dst + lVar8))[1] = 0;
      puVar2 = (undefined8 *)((longlong)_Dst + lVar8 + 0x70);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)_Dst + lVar8 + 0x60);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)_Dst + lVar8 + 0x50);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)_Dst + lVar8 + 0x40);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)_Dst + lVar8 + 0x30);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)_Dst + lVar8 + 0x20);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)((longlong)_Dst + lVar8 + 0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)((longlong)_Dst + lVar8) = 0xffffffffffffffff;
      lVar8 = lVar8 + 0x80;
    } while (lVar8 != 0x1000);
    _Dst[0x200] = 0;
    *_Dst = 0;
    *(longlong *)(lVar4 + 0x1000) = (longlong)_Dst;
    LOCK();
    *(int *)(param_1 + 0x10f4) = *(int *)(param_1 + 0x10f4) + 0x20;
    UNLOCK();
    iVar3 = *(int *)(param_1 + 0x10e8);
    *(uint *)(param_1 + 0x10e8) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x10ec) < iVar3 + 1U) {
      FUN_145bd015e((longlong *)(param_1 + 0x10e0),iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x10e0) + (longlong)iVar3 * 8) = _Dst;
  }
  else {
    _Dst = (undefined8 *)FUN_1414cf1ae(param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10a8));
  return _Dst;
}



// FUNCTION 1414cf29e FUN_1414cf29e body=305 status=ok
// SIG undefined FUN_1414cf29e(void)

undefined8 * FUN_1414cf29e(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *_Dst;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x10f4);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10a8));
  if (*(int *)(param_1 + 0x10f4) == iVar2) {
    lVar4 = *(longlong *)(param_1 + 0x1000);
    lVar3 = param_1;
    while (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x1000);
      lVar4 = *(longlong *)(lVar3 + 0x1000);
    }
    _Dst = (undefined8 *)FUN_14001cc68(0x1080);
    lVar4 = 0;
    memset(_Dst,0,0x1080);
    do {
      *(undefined8 *)((longlong)_Dst + lVar4) = 0;
      ((undefined8 *)((longlong)_Dst + lVar4))[1] = 0;
      puVar1 = (undefined8 *)((longlong)_Dst + lVar4 + 0x70);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)_Dst + lVar4 + 0x60);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)_Dst + lVar4 + 0x50);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)_Dst + lVar4 + 0x40);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)_Dst + lVar4 + 0x30);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)_Dst + lVar4 + 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)_Dst + lVar4 + 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)_Dst + lVar4) = 0xffffffffffffffff;
      lVar4 = lVar4 + 0x80;
    } while (lVar4 != 0x1000);
    _Dst[0x200] = 0;
    *_Dst = 0;
    *(longlong *)(lVar3 + 0x1000) = (longlong)_Dst;
    LOCK();
    *(int *)(param_1 + 0x10f4) = *(int *)(param_1 + 0x10f4) + 0x20;
    UNLOCK();
    iVar2 = *(int *)(param_1 + 0x10e8);
    *(uint *)(param_1 + 0x10e8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x10ec) < iVar2 + 1U) {
      FUN_145bd015e((longlong *)(param_1 + 0x10e0),iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x10e0) + (longlong)iVar2 * 8) = _Dst;
  }
  else {
    _Dst = (undefined8 *)FUN_1414cf1ae(param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10a8));
  return _Dst;
}



// FUNCTION 1414cf3d0 FUN_1414cf3d0 body=1 status=ok
// SIG undefined FUN_1414cf3d0(void)

void FUN_1414cf3d0(void)

{
  return;
}



// FUNCTION 1414cf3d2 FUN_1414cf3d2 body=20 status=ok
// SIG undefined FUN_1414cf3d2(void)

undefined8 FUN_1414cf3d2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + 0x68);
  }
  return 0;
}



// FUNCTION 1414cf3e6 FUN_1414cf3e6 body=526 status=ok
// SIG undefined FUN_1414cf3e6(void)

undefined2 * FUN_1414cf3e6(longlong param_1,undefined2 *param_2,ushort *param_3,longlong param_4)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 uVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_68 [36];
  ushort local_44;
  ushort local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_3;
  uVar5 = 0xffff;
  if ((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(param_1 + 0x10))) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 8);
    if ((lVar7 != 0) && (*(uint *)(lVar7 + 8) == (uint)param_3[1])) {
      if (-1 < *(short *)(lVar7 + 4)) {
        do {
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar7 + 2) * 8);
        } while (-1 < *(short *)(lVar7 + 4));
        if (lVar7 == 0) goto LAB_1414cf520;
      }
      puVar1 = (uint *)(lVar7 + 0x24);
      cVar4 = FUN_1411db966(puVar1,param_4);
      if (cVar4 == '\0') {
        if (param_4 == 0) {
          *puVar1 = 0;
          iVar6 = 0;
        }
        else {
          uVar3 = *(uint *)(param_4 + 0xc);
          *puVar1 = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          iVar6 = *(int *)(lVar9 + 0x10);
          if (*(int *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar10 = DAT_14c964868 + 1;
            bVar11 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar11) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar10);
            }
            LOCK();
            iVar6 = *(int *)(lVar9 + 0x10);
            bVar11 = iVar6 == 0;
            if (bVar11) {
              *(int *)(lVar9 + 0x10) = iVar10;
              iVar6 = 0;
            }
            UNLOCK();
            if (bVar11) {
              iVar6 = iVar10;
            }
          }
        }
        *(int *)(lVar7 + 0x28) = iVar6;
      }
      if (param_4 != 0) {
        FUN_140d27df6(param_1,&local_44,param_4);
        if ((-1 < (short)local_44) && ((int)(short)local_44 < *(int *)(param_1 + 0x10))) {
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)local_44 * 8);
          if ((lVar9 != 0) && (*(uint *)(lVar9 + 8) == (uint)local_42)) {
            for (; -1 < *(short *)(lVar9 + 4);
                lVar9 = *(longlong *)
                         (*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar9 + 2) * 8)) {
            }
            if ((lVar9 != 0) && (lVar9 != lVar7)) {
              lVar7 = FUN_143d9c13a(param_1,lVar7);
            }
          }
        }
      }
      if (cVar4 == '\0') {
        FUN_1414f506e(param_1,lVar7);
        FUN_141323fc0(param_1,lVar7,0x80);
      }
      uVar5 = *(undefined2 *)(lVar7 + 2);
      uVar8 = *(undefined2 *)(lVar7 + 8);
      goto LAB_1414cf522;
    }
  }
LAB_1414cf520:
  uVar8 = 0;
LAB_1414cf522:
  *param_2 = uVar5;
  param_2[1] = uVar8;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1414cf5f6 FUN_1414cf5f6 body=713 status=ok
// SIG undefined FUN_1414cf5f6(void)

undefined2 * FUN_1414cf5f6(longlong param_1,undefined2 *param_2,ushort *param_3,longlong param_4)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 uVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_68 [36];
  ushort local_44;
  ushort local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_3;
  uVar6 = 0xffff;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar8 != 0) && (*(uint *)(lVar8 + 8) == (uint)param_3[1])) {
      if (-1 < *(short *)(lVar8 + 4)) {
        do {
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar8 + 2) * 8);
        } while (-1 < *(short *)(lVar8 + 4));
        if (lVar8 == 0) goto LAB_1414cf733;
      }
      if (param_4 == 0) {
        if (*(undefined8 **)(lVar8 + 0x10) != (undefined8 *)0x0) {
          **(undefined8 **)(lVar8 + 0x10) = 0;
        }
LAB_1414cf83d:
        FUN_1414f506e(param_1,lVar8);
        FUN_141323fc0(param_1,lVar8,1);
        FUN_141323fc0(param_1,lVar8,4);
      }
      else {
        FUN_1409845a0(param_1,&local_44,param_4);
        if (((short)local_44 < 0) || (*(int *)(param_1 + 0x10) <= (int)(short)local_44)) {
LAB_1414cf6e1:
          FUN_140ceec26(param_1,&local_44);
          if ((-1 < (short)local_44) && ((int)(short)local_44 < *(int *)(param_1 + 0x10))) {
            lVar12 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)local_44 * 8);
            if ((lVar12 != 0) && (*(uint *)(lVar12 + 8) == (uint)local_42)) {
              for (; -1 < *(short *)(lVar12 + 4);
                  lVar12 = *(longlong *)
                            (*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar12 + 2) * 8)) {
              }
              goto LAB_1414cf768;
            }
          }
          lVar12 = 0;
        }
        else {
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)local_44 * 8);
          if ((lVar12 == 0) || (*(uint *)(lVar12 + 8) != (uint)local_42)) goto LAB_1414cf6e1;
          if (-1 < *(short *)(lVar12 + 4)) {
            do {
              lVar12 = *(longlong *)
                        (*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar12 + 2) * 8);
            } while (-1 < *(short *)(lVar12 + 4));
            if (lVar12 == 0) goto LAB_1414cf6e1;
          }
        }
LAB_1414cf768:
        if ((lVar12 != 0) && (lVar12 != lVar8)) {
          lVar8 = FUN_143d9c13a(param_1,lVar8);
        }
        puVar9 = *(undefined8 **)(lVar8 + 0x10);
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined4 *)(puVar9 + 1) = 0xffffffff;
          lVar12 = *(longlong *)(lVar8 + 0x10);
          *(undefined8 **)(lVar8 + 0x10) = puVar9;
          if (lVar12 != 0) {
            FUN_1400020a8();
            puVar9 = *(undefined8 **)(lVar8 + 0x10);
          }
          if (puVar9 != (undefined8 *)0x0) goto LAB_1414cf7c4;
        }
        else {
LAB_1414cf7c4:
          uVar2 = *(uint *)(param_4 + 0xe0);
          cVar5 = FUN_146551dca(puVar9,param_4);
          puVar3 = *(uint **)(lVar8 + 0x10);
          if ((cVar5 == '\0') || (puVar3[2] != uVar2)) {
            uVar7 = *(uint *)(param_4 + 0xc);
            *puVar3 = uVar7;
            if ((int)uVar7 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            uVar7 = *(uint *)(lVar12 + 0x10);
            if (*(uint *)(lVar12 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              uVar11 = DAT_14c964868 + 1;
              bVar13 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar13) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar11);
              }
              LOCK();
              uVar7 = *(uint *)(lVar12 + 0x10);
              bVar13 = uVar7 == 0;
              if (bVar13) {
                *(uint *)(lVar12 + 0x10) = uVar11;
                uVar7 = 0;
              }
              UNLOCK();
              if (bVar13) {
                uVar7 = uVar11;
              }
            }
            puVar3[1] = uVar7;
            *(uint *)(*(longlong *)(lVar8 + 0x10) + 8) = uVar2;
            goto LAB_1414cf83d;
          }
        }
      }
      uVar6 = *(undefined2 *)(lVar8 + 2);
      uVar10 = *(undefined2 *)(lVar8 + 8);
      goto LAB_1414cf735;
    }
  }
LAB_1414cf733:
  uVar10 = 0;
LAB_1414cf735:
  *param_2 = uVar6;
  param_2[1] = uVar10;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1414cf8c0 FUN_1414cf8c0 body=370 status=ok
// SIG undefined FUN_1414cf8c0(void)

undefined8 * FUN_1414cf8c0(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1414cfa40 FUN_1414cfa40 body=101 status=ok
// SIG undefined FUN_1414cfa40(void)

ulonglong * FUN_1414cfa40(ulonglong *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = *param_2;
  if ((ulonglong)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    uVar2 = (ulonglong)*(uint *)(&DAT_14c892b40 + (ulonglong)uVar1 * 4);
  }
  if (*param_1 == uVar2) {
    if ((int)param_1[1] != 0) {
      return param_1;
    }
    iVar3 = 1;
  }
  else {
    iVar3 = (int)param_1[1] + 1;
  }
  *param_1 = uVar2;
  *(int *)(param_1 + 1) = iVar3;
  return param_1;
}



// FUNCTION 1414cfaa6 FUN_1414cfaa6 body=46 status=ok
// SIG undefined FUN_1414cfaa6(void)

undefined8 FUN_1414cfaa6(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x178);
  }
  return uVar2;
}



// FUNCTION 1414cfad4 FUN_1414cfad4 body=277 status=ok
// SIG undefined FUN_1414cfad4(void)

void FUN_1414cfad4(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  
  if ((longlong)*(int *)(param_1 + 0x290) == 0) {
    iVar4 = *(int *)(param_1 + 0x284);
  }
  else {
    plVar7 = *(longlong **)(param_1 + 0x288);
    lVar9 = (longlong)*(int *)(param_1 + 0x290) * 0x38;
    iVar8 = 0;
    do {
      cVar2 = FUN_14892cae6(plVar7);
      if (cVar2 != '\0') {
        *(int *)(param_1 + 0x400) = *(int *)(param_1 + 0x400) + (int)plVar7[6];
      }
      cVar2 = FUN_14892cae6(plVar7);
      if (cVar2 == '\0') {
        iVar4 = (int)plVar7[6];
      }
      else {
        iVar4 = (int)plVar7[6];
        if (*(char *)((longlong)plVar7 + 0x34) == '\x01') {
          *(int *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) + iVar4;
          iVar3 = FUN_14892cca8(plVar7);
          iVar4 = (int)plVar7[6];
          iVar8 = iVar8 + iVar3 * iVar4;
        }
      }
      if (1 < iVar4) {
        lVar6 = plVar7[1];
        if (lVar6 == 0) {
          uVar5 = FUN_1405a25e0();
          lVar6 = FUN_14477b664(uVar5);
          plVar7[1] = lVar6;
        }
        if (((plVar7[2] == 0) && (lVar6 != 0)) && (*plVar7 != 0)) {
          plVar1 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            lVar6 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar6 = FUN_144aff482(uVar5,plVar7);
          }
          plVar7[2] = lVar6;
        }
      }
      plVar7 = plVar7 + 7;
      lVar9 = lVar9 + -0x38;
    } while (lVar9 != 0);
    iVar4 = *(int *)(param_1 + 0x284);
    if (iVar8 < *(int *)(param_1 + 0x284)) {
      iVar4 = iVar8;
    }
  }
  *(int *)(param_1 + 0x408) = iVar4;
  return;
}



// FUNCTION 1414cfbea FUN_1414cfbea body=2049 status=ok
// SIG undefined FUN_1414cfbea(void)

void FUN_1414cfbea(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  byte *pbVar5;
  char *_Str;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  size_t sVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *puVar17;
  char *pcVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined **local_a8;
  undefined8 *local_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_80;
  longlong local_78;
  undefined2 local_6a;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_6a = 0x102;
  FUN_14000954c(param_2,&local_68);
  puVar17 = &DAT_14c9a1308;
  if ((longlong *)(param_1 + 0x3f0) != &DAT_14c9a1308) {
    if (uStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
      UNLOCK();
    }
    plVar10 = *(longlong **)(param_1 + 0x3f8);
    *(char **)(param_1 + 0x3f0) = local_68;
    *(longlong **)(param_1 + 0x3f8) = uStack_60;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  plVar10 = uStack_60;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_60)(uStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (param_3 == '\0') goto LAB_1414cfca7;
  FUN_14885cf8a(param_1,&local_78);
  if ((((local_78 != 0) && (lVar9 = FUN_14117928e(), lVar9 != 0)) &&
      (*(int *)(lVar9 + 0x38) <= *(int *)(local_78 + 0x38))) &&
     (*(longlong *)(*(longlong *)(local_78 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
      lVar9 + 0x30)) {
    lVar9 = FUN_14117928e();
    if (((lVar9 == 0) || (*(int *)(local_78 + 0x38) < *(int *)(lVar9 + 0x38))) ||
       (*(longlong *)(*(longlong *)(local_78 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
        lVar9 + 0x30)) {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (*(int *)(param_1 + 0x2c) < 0) {
        FUN_1446f8c06((undefined8 *)(param_1 + 0x20),0);
      }
      puVar4 = *(undefined2 **)(param_1 + 0x20);
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    else {
      FUN_1400bbfc4(&local_68,local_78);
      *(undefined4 *)(param_1 + 0x10) = (undefined4)local_68;
      *(undefined4 *)(param_1 + 0x14) = local_68._4_4_;
      *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_60;
      *(undefined4 *)(param_1 + 0x1c) = uStack_60._4_4_;
      if ((undefined8 *)(param_1 + 0x10) == &local_68) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x20) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x20) = local_58;
        local_58 = 0;
        *(undefined4 *)(param_1 + 0x28) = local_50;
        *(undefined4 *)(param_1 + 0x2c) = uStack_4c;
      }
      cVar6 = (*(code *)PTR_FUN_14c758760)();
      uVar7 = *(uint *)(local_78 + 0xc);
      if (cVar6 != '\0') {
        if ((int)uVar7 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        if ((*(uint *)(lVar9 + 8) & 0x8400000) != 0) {
          *(undefined8 *)(param_1 + 8) = 0;
          goto LAB_1414cfdb2;
        }
      }
      *(uint *)(param_1 + 8) = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar8 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar23 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar23) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar16);
        }
        LOCK();
        iVar8 = *(int *)(lVar9 + 0x10);
        bVar23 = iVar8 == 0;
        if (bVar23) {
          *(int *)(lVar9 + 0x10) = iVar16;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar23) {
          iVar8 = iVar16;
        }
      }
      *(int *)(param_1 + 0xc) = iVar8;
    }
  }
LAB_1414cfdb2:
  FUN_14885d23a(param_1,&local_80);
  if (((local_80 != 0) && (lVar9 = FUN_1458f293e(), lVar9 != 0)) &&
     ((*(int *)(lVar9 + 0x38) <= *(int *)(local_80 + 0x38) &&
      (*(longlong *)(*(longlong *)(local_80 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
       lVar9 + 0x30)))) {
    lVar9 = FUN_1458f293e();
    if (((lVar9 == 0) || (*(int *)(local_80 + 0x38) < *(int *)(lVar9 + 0x38))) ||
       (*(longlong *)(*(longlong *)(local_80 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
        lVar9 + 0x30)) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      if (*(int *)(param_1 + 0x54) < 0) {
        FUN_1446f8c06((undefined8 *)(param_1 + 0x48),0);
      }
      puVar4 = *(undefined2 **)(param_1 + 0x48);
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    else {
      FUN_1400bbfc4(&local_68,local_80);
      *(undefined4 *)(param_1 + 0x38) = (undefined4)local_68;
      *(undefined4 *)(param_1 + 0x3c) = local_68._4_4_;
      *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_60;
      *(undefined4 *)(param_1 + 0x44) = uStack_60._4_4_;
      if ((undefined8 *)(param_1 + 0x38) == &local_68) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x48) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x48) = local_58;
        local_58 = 0;
        *(undefined4 *)(param_1 + 0x50) = local_50;
        *(undefined4 *)(param_1 + 0x54) = uStack_4c;
      }
      cVar6 = (*(code *)PTR_FUN_14c758760)();
      iVar8 = DAT_14c9647dc;
      uVar7 = *(uint *)(local_80 + 0xc);
      if (cVar6 != '\0') {
        if ((int)uVar7 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        if ((*(uint *)(lVar9 + 8) & 0x8400000) != 0) {
          *(undefined8 *)(param_1 + 0x30) = 0;
          goto LAB_1414cfe91;
        }
      }
      *(uint *)(param_1 + 0x30) = uVar7;
      if ((int)uVar7 < iVar8) {
        lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar8 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar23 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar23) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar16);
        }
        LOCK();
        iVar8 = *(int *)(lVar9 + 0x10);
        bVar23 = iVar8 == 0;
        if (bVar23) {
          *(int *)(lVar9 + 0x10) = iVar16;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar23) {
          iVar8 = iVar16;
        }
      }
      *(int *)(param_1 + 0x34) = iVar8;
    }
  }
LAB_1414cfe91:
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  FUN_14009b010(&local_98,3,0);
  lVar9 = *(longlong *)(param_1 + 0x3f0);
  if (lVar9 != 0) {
    puVar17 = (undefined8 *)FUN_1446e60f4(lVar9,&DAT_14cb7d9f8);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,DAT_14c9a0ec0);
  local_a8 = (undefined **)DAT_14c9a0eb8;
  FUN_1448075d0(&local_68);
  if (local_98 != 0) {
    local_b8 = 0;
    FUN_14014191c(local_98,&local_68,puVar17,0);
  }
  if (CONCAT44(uStack_4c,local_50) != 0) {
    FUN_1400020a8();
  }
  FUN_14885d4ea(&local_98,param_1 + 0x2b0);
  if (*(longlong *)(param_1 + 0x3f0) == 0) {
    plVar10 = &DAT_14c9a1308;
  }
  else {
    plVar10 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x3f0),&DAT_14cb7d9e8);
  }
  lVar9 = *plVar10;
  plVar10 = (longlong *)plVar10[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if (lVar9 == 0) {
    puVar17 = &DAT_14c9a1308;
  }
  else {
    puVar17 = (undefined8 *)FUN_1446e60f4(lVar9,&DAT_14cb7d9f0);
  }
  pbVar5 = (byte *)*puVar17;
  if (((pbVar5 == (byte *)0x0) || ((*pbVar5 & 3) != 1)) ||
     (_Str = *(char **)(pbVar5 + 8), _Str == (char *)0x0)) {
LAB_1414cff72:
    uVar11 = 0;
    uVar20 = 0;
  }
  else {
    sVar12 = strlen(_Str);
    uVar7 = (uint)sVar12;
    if (uVar7 == 0) goto LAB_1414cff72;
    lVar15 = (longlong)(int)uVar7;
    pcVar18 = _Str + lVar15 + -1;
    uVar14 = 0;
    if (pcVar18 < _Str) {
      lVar22 = 0;
    }
    else {
      do {
        if (9 < (byte)(*pcVar18 - 0x30U)) break;
        uVar14 = uVar14 + 1;
        pcVar18 = pcVar18 + -1;
      } while (_Str <= pcVar18);
      lVar22 = 0;
      if (((uVar14 != 0) && ((int)uVar14 < (int)uVar7)) &&
         ((lVar22 = 0, uVar14 < 0xb &&
          (lVar19 = -(ulonglong)uVar14, _Str[lVar19 + lVar15 + -1] == '_')))) {
        if ((uVar14 == 1) || (_Str[lVar19 + lVar15] != '0')) {
          lVar21 = 0;
          do {
            lVar22 = (longlong)_Str[lVar19 + lVar15] + lVar21 * 10;
            lVar21 = lVar22 + -0x30;
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0);
          if (lVar21 < 0x7fffffff) {
            uVar7 = ~uVar14 + uVar7;
            lVar22 = lVar22 + -0x2f;
            goto LAB_1414cffd9;
          }
        }
        lVar22 = 0;
      }
LAB_1414cffd9:
      if (uVar7 == 0) goto LAB_1414cff72;
    }
    uStack_60._0_5_ = (uint5)uVar7;
    local_68 = _Str;
    uVar7 = FUN_14001a6c0(&local_68,1);
    uVar20 = lVar22 << 0x20;
    uVar11 = (ulonglong)uVar7;
  }
  *(ulonglong *)(param_1 + 0x2c8) = uVar11 | uVar20;
  uVar13 = FUN_140c1345a();
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  if (*(int *)(param_1 + 0x2ec) != 0) {
    FUN_140115c12(param_1 + 0x2e0,0);
  }
  *(undefined8 *)(param_1 + 0x2d8) = uVar13;
  if (lVar9 == 0) {
    puVar17 = &DAT_14c9a1308;
  }
  else {
    puVar17 = (undefined8 *)FUN_1446e60f4(lVar9,&DAT_14cb7da00);
  }
  local_68 = (char *)*puVar17;
  uStack_60 = (longlong *)puVar17[1];
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
    UNLOCK();
  }
  local_a8 = &PTR_FUN_14a177d40;
  local_a0 = &local_68;
  FUN_140558ed4(param_1 + 0x2d0);
  plVar1 = uStack_60;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = uStack_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*uStack_60)(uStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  plVar10 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_1414cfca7:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414d03ec FUN_1414d03ec body=86 status=ok
// SIG undefined FUN_1414d03ec(void)

void FUN_1414d03ec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001414d043e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1414d0442 FUN_1414d0442 body=251 status=ok
// SIG undefined FUN_1414d0442(void)

longlong *
FUN_1414d0442(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (*(code *)PTR_FUN_14c758760)();
  *(undefined1 *)(param_1 + 0xe0) = 1;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  local_50 = param_5;
  local_58 = 0;
  local_68 = 100;
  local_60 = param_4;
  FUN_140421d62(param_1,param_2,param_3,&local_48);
  if ((int)uStack_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_1414d04c3;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    uStack_40 = uStack_40 & 0xffffffff00000000;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1414d04c3:
  *(undefined1 *)(param_1 + 0xe0) = 0;
  if (*param_2 != 0) {
    FUN_140bd4428(*param_2,0,1);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414d053e FUN_1414d053e body=32 status=ok
// SIG undefined FUN_1414d053e(void)

undefined8 * FUN_1414d053e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_2 = param_1[2];
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return param_2;
}



// FUNCTION 1414d055e FUN_1414d055e body=146 status=ok
// SIG undefined FUN_1414d055e(void)

longlong * FUN_1414d055e(longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14069ce7c();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14069ce7c();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar2 == plVar3) {
        return (longlong *)0x0;
      }
      if (plVar3 == (longlong *)0x0) {
        return (longlong *)0x0;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x10);
      if (UNRECOVERED_JUMPTABLE == (code *)&LAB_144a13144) {
        return plVar3 + 0x25d;
      }
      if (UNRECOVERED_JUMPTABLE == (code *)&LAB_144a1313c) {
        return plVar3 + 0x13;
      }
                    /* WARNING: Could not recover jumptable at 0x0001414d05e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar2 = (longlong *)(*UNRECOVERED_JUMPTABLE)(plVar3);
      return plVar2;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1414d05f0 FUN_1414d05f0 body=71 status=ok
// SIG undefined FUN_1414d05f0(void)

longlong FUN_1414d05f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + -0x230);
  if (((lVar1 != 0) || (lVar1 = param_1 + -0x398, lVar1 != 0)) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return lVar1;
}



// FUNCTION 1414d0638 FUN_1414d0638 body=363 status=ok
// SIG undefined FUN_1414d0638(void)

void FUN_1414d0638(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x180))();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
      plVar3 = (longlong *)FUN_1459a1b72();
      if (plVar3 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar3 + 0x2b8))(plVar3);
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 0x68) != 0) {
            puVar1 = *(undefined8 **)(lVar2 + 0x60);
            if (puVar1 != (undefined8 *)0x0) {
              (**(code **)*puVar1)(puVar1,0);
              FUN_1446efa72((longlong *)(lVar2 + 0x60),0,0,0x10);
              *(undefined4 *)(lVar2 + 0x68) = 0;
            }
          }
          if (*(int *)(lVar2 + 0x98) != 0) {
            puVar1 = *(undefined8 **)(lVar2 + 0x90);
            if (puVar1 != (undefined8 *)0x0) {
              (**(code **)*puVar1)(puVar1,0);
              FUN_1446efa72((longlong *)(lVar2 + 0x90),0,0,0x10);
              *(undefined4 *)(lVar2 + 0x98) = 0;
            }
          }
          if (*(int *)(lVar2 + 0x88) != 0) {
            puVar1 = *(undefined8 **)(lVar2 + 0x80);
            if (puVar1 != (undefined8 *)0x0) {
              (**(code **)*puVar1)(puVar1,0);
              FUN_1446efa72((longlong *)(lVar2 + 0x80),0,0,0x10);
              *(undefined4 *)(lVar2 + 0x88) = 0;
            }
          }
          if (*(int *)(lVar2 + 0xa8) != 0) {
            puVar1 = *(undefined8 **)(lVar2 + 0xa0);
            if (puVar1 != (undefined8 *)0x0) {
              (**(code **)*puVar1)(puVar1,0);
              FUN_1446efa72((longlong *)(lVar2 + 0xa0),0,0,0x10);
              *(undefined4 *)(lVar2 + 0xa8) = 0;
            }
          }
          if (*(longlong *)(param_1 + 0x88) != 0) {
            FUN_14480f766(lVar2 + 0x18);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1414d07a4 FUN_1414d07a4 body=1548 status=ok
// SIG undefined FUN_1414d07a4(void)

undefined8 * FUN_1414d07a4(undefined8 *param_1,undefined8 *param_2)

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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong lVar22;
  byte bVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  
  *(undefined8 *)((longlong)param_1 + 0x2d) = *(undefined8 *)((longlong)param_2 + 0x2d);
  uVar17 = *param_2;
  uVar18 = param_2[1];
  uVar19 = param_2[2];
  uVar20 = param_2[3];
  uVar21 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar21;
  param_1[2] = uVar19;
  param_1[3] = uVar20;
  *param_1 = uVar17;
  param_1[1] = uVar18;
  *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)param_2 + 0x35);
  *(undefined1 *)((longlong)param_1 + 0x36) = *(undefined1 *)((longlong)param_2 + 0x36);
  *(undefined1 *)((longlong)param_1 + 0x37) = *(undefined1 *)((longlong)param_2 + 0x37);
  memcpy(param_1 + 7,param_2 + 7,0x358);
  lVar22 = param_2[0x72];
  if (DAT_14c950c29 == 1) {
    if (lVar22 == 0) {
      lVar22 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar22 = param_2[0x72];
    }
  }
  bVar23 = DAT_14c950c29;
  param_1[0x72] = lVar22;
  uVar2 = *(undefined4 *)(param_2 + 0x73);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x39c);
  uVar4 = *(undefined4 *)(param_2 + 0x74);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3a4);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x3ac);
  uVar7 = *(undefined4 *)(param_2 + 0x76);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x3b4);
  *(undefined4 *)(param_1 + 0x75) = *(undefined4 *)(param_2 + 0x75);
  *(undefined4 *)((longlong)param_1 + 0x3ac) = uVar6;
  *(undefined4 *)(param_1 + 0x76) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = uVar8;
  *(undefined4 *)(param_1 + 0x73) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x39c) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = uVar5;
  lVar22 = param_2[0x77];
  if ((bVar23 & 1) != 0) {
    if (lVar22 == 0) {
      lVar22 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar22 = param_2[0x77];
      bVar23 = DAT_14c950c29;
    }
  }
  param_1[0x77] = lVar22;
  uVar17 = param_2[0x79];
  param_1[0x78] = param_2[0x78];
  param_1[0x79] = uVar17;
  *(undefined4 *)(param_1 + 0x7a) = *(undefined4 *)(param_2 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x3d4) = *(undefined1 *)((longlong)param_2 + 0x3d4);
  puVar24 = param_2 + 0x7b;
  puVar25 = param_1 + 0x7b;
  for (lVar22 = 9; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar25 = *puVar24;
    puVar24 = puVar24 + 1;
    puVar25 = puVar25 + 1;
  }
  *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)(param_2 + 0x84);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x421);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x425);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x429);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x42d);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x431);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x435);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x439);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x43d);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x441);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x445);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x449);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x44d);
  uVar14 = *(undefined4 *)(param_2 + 0x8a);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x454);
  uVar16 = *(undefined4 *)(param_2 + 0x8b);
  *(undefined4 *)((longlong)param_1 + 0x44c) = *(undefined4 *)((longlong)param_2 + 0x44c);
  *(undefined4 *)(param_1 + 0x8a) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0x454) = uVar15;
  *(undefined4 *)(param_1 + 0x8b) = uVar16;
  *(undefined4 *)((longlong)param_1 + 0x441) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x445) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x449) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x44d) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x431) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x435) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x439) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x43d) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x421) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x425) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x429) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x42d) = uVar5;
  lVar22 = param_2[0x8c];
  if ((bVar23 & 1) != 0) {
    if (lVar22 == 0) {
      lVar22 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar22 = param_2[0x8c];
      bVar23 = DAT_14c950c29;
    }
  }
  param_1[0x8c] = lVar22;
  *(undefined1 *)(param_1 + 0x91) = *(undefined1 *)(param_2 + 0x91);
  uVar2 = *(undefined4 *)(param_2 + 0x8d);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x46c);
  uVar4 = *(undefined4 *)(param_2 + 0x8e);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x474);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x47c);
  uVar7 = *(undefined4 *)(param_2 + 0x90);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x484);
  *(undefined4 *)(param_1 + 0x8f) = *(undefined4 *)(param_2 + 0x8f);
  *(undefined4 *)((longlong)param_1 + 0x47c) = uVar6;
  *(undefined4 *)(param_1 + 0x90) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x484) = uVar8;
  *(undefined4 *)(param_1 + 0x8d) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x46c) = uVar3;
  *(undefined4 *)(param_1 + 0x8e) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x474) = uVar5;
  lVar22 = param_2[0x92];
  if ((bVar23 & 1) != 0) {
    if (lVar22 == 0) {
      lVar22 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar22 = param_2[0x92];
      bVar23 = DAT_14c950c29;
    }
  }
  param_1[0x92] = lVar22;
  lVar22 = param_2[0x93];
  if ((bVar23 & 1) != 0) {
    if (lVar22 == 0) {
      lVar22 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar22 = param_2[0x93];
      bVar23 = DAT_14c950c29;
    }
  }
  param_1[0x93] = lVar22;
  *(undefined4 *)(param_1 + 0x9a) = *(undefined4 *)(param_2 + 0x9a);
  uVar2 = *(undefined4 *)(param_2 + 0x94);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x4a4);
  uVar4 = *(undefined4 *)(param_2 + 0x95);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x4ac);
  uVar6 = *(undefined4 *)(param_2 + 0x96);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x4b4);
  uVar8 = *(undefined4 *)(param_2 + 0x97);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x4bc);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x4c4);
  uVar11 = *(undefined4 *)(param_2 + 0x99);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x4cc);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)((longlong)param_1 + 0x4c4) = uVar10;
  *(undefined4 *)(param_1 + 0x99) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = uVar12;
  *(undefined4 *)(param_1 + 0x96) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = uVar7;
  *(undefined4 *)(param_1 + 0x97) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = uVar9;
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = uVar3;
  *(undefined4 *)(param_1 + 0x95) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = uVar5;
  lVar22 = param_2[0x9b];
  if ((bVar23 & 1) != 0) {
    if (lVar22 == 0) {
      lVar22 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar22 = param_2[0x9b];
      bVar23 = DAT_14c950c29;
    }
  }
  param_1[0x9b] = lVar22;
  lVar22 = param_2[0x9c];
  if ((bVar23 & 1) != 0) {
    if (lVar22 == 0) {
      lVar22 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar22 = param_2[0x9c];
      bVar23 = DAT_14c950c29;
    }
  }
  param_1[0x9c] = lVar22;
  *(undefined4 *)(param_1 + 0xa3) = *(undefined4 *)(param_2 + 0xa3);
  uVar2 = *(undefined4 *)(param_2 + 0x9d);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x4ec);
  uVar4 = *(undefined4 *)(param_2 + 0x9e);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x4f4);
  uVar6 = *(undefined4 *)(param_2 + 0x9f);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x4fc);
  uVar8 = *(undefined4 *)(param_2 + 0xa0);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x504);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x50c);
  uVar11 = *(undefined4 *)(param_2 + 0xa2);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x514);
  *(undefined4 *)(param_1 + 0xa1) = *(undefined4 *)(param_2 + 0xa1);
  *(undefined4 *)((longlong)param_1 + 0x50c) = uVar10;
  *(undefined4 *)(param_1 + 0xa2) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x514) = uVar12;
  *(undefined4 *)(param_1 + 0x9f) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = uVar7;
  *(undefined4 *)(param_1 + 0xa0) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x504) = uVar9;
  *(undefined4 *)(param_1 + 0x9d) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = uVar3;
  *(undefined4 *)(param_1 + 0x9e) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = uVar5;
  lVar22 = param_2[0xa4];
  if ((bVar23 & 1) != 0) {
    if (lVar22 == 0) {
      lVar22 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar22 = param_2[0xa4];
      bVar23 = DAT_14c950c29;
    }
  }
  param_1[0xa4] = lVar22;
  memcpy(param_1 + 0xa5,param_2 + 0xa5,0xb0);
  lVar22 = param_2[0xbb];
  if ((bVar23 & 1) != 0) {
    if (lVar22 == 0) {
      lVar22 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar22 = param_2[0xbb];
      bVar23 = DAT_14c950c29;
    }
  }
  param_1[0xbb] = lVar22;
  puVar24 = param_2 + 0xbc;
  puVar25 = param_1 + 0xbc;
  for (lVar22 = 9; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar25 = *puVar24;
    puVar24 = puVar24 + 1;
    puVar25 = puVar25 + 1;
  }
  *(undefined4 *)(param_1 + 0xc5) = *(undefined4 *)(param_2 + 0xc5);
  lVar22 = param_2[0xc6];
  if ((bVar23 & 1) != 0) {
    if (lVar22 == 0) {
      lVar22 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar22 = param_2[0xc6];
    }
  }
  param_1[0xc6] = lVar22;
  memcpy(param_1 + 199,param_2 + 199,0xd0);
  memcpy(param_1 + 0xe1,param_2 + 0xe1,0xc0);
  uVar17 = param_2[0xfa];
  uVar18 = param_2[0xfb];
  uVar19 = param_2[0xfc];
  uVar2 = *(undefined4 *)(param_2 + 0xfd);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x7ec);
  uVar4 = *(undefined4 *)(param_2 + 0xfe);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x7f4);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x7f4);
  uVar7 = *(undefined4 *)(param_2 + 0xff);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x7fc);
  uVar9 = *(undefined4 *)(param_2 + 0x100);
  param_1[0xf9] = param_2[0xf9];
  param_1[0xfa] = uVar17;
  param_1[0xfb] = uVar18;
  param_1[0xfc] = uVar19;
  *(undefined4 *)(param_1 + 0xfd) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x7ec) = uVar3;
  *(undefined4 *)(param_1 + 0xfe) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x7f4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x7f4) = uVar6;
  *(undefined4 *)(param_1 + 0xff) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x7fc) = uVar8;
  *(undefined4 *)(param_1 + 0x100) = uVar9;
  uVar2 = *(undefined4 *)(param_2 + 0x101);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x80c);
  uVar4 = *(undefined4 *)(param_2 + 0x102);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x814);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x81c);
  uVar7 = *(undefined4 *)(param_2 + 0x104);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x824);
  *(undefined4 *)(param_1 + 0x103) = *(undefined4 *)(param_2 + 0x103);
  *(undefined4 *)((longlong)param_1 + 0x81c) = uVar6;
  *(undefined4 *)(param_1 + 0x104) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x824) = uVar8;
  *(undefined4 *)(param_1 + 0x101) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x80c) = uVar3;
  *(undefined4 *)(param_1 + 0x102) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x814) = uVar5;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x106);
    _Src = (void *)param_2[0x105];
    *(int *)(param_1 + 0x106) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x834) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x834) = 0;
    }
    else {
      FUN_144721d4c(param_1 + 0x105,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x105],_Src,(longlong)iVar1 << 4);
      }
    }
  }
  puVar24 = param_2 + 0x108;
  puVar25 = param_1 + 0x108;
  for (lVar22 = 9; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar25 = *puVar24;
    puVar24 = puVar24 + 1;
    puVar25 = puVar25 + 1;
  }
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x894);
  uVar3 = *(undefined4 *)(param_2 + 0x113);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x89c);
  *(undefined4 *)(param_1 + 0x112) = *(undefined4 *)(param_2 + 0x112);
  *(undefined4 *)((longlong)param_1 + 0x894) = uVar2;
  *(undefined4 *)(param_1 + 0x113) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x89c) = uVar4;
  lVar22 = param_2[0x115];
  if (DAT_14c950c29 == 1) {
    if (lVar22 == 0) {
      lVar22 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar22 = param_2[0x115];
    }
  }
  param_1[0x115] = lVar22;
  if (param_1 != param_2) {
    if (param_1[0x116] != 0) {
      FUN_1400020a8();
    }
    param_1[0x116] = param_2[0x116];
    param_2[0x116] = 0;
    *(undefined4 *)(param_1 + 0x117) = *(undefined4 *)(param_2 + 0x117);
    *(undefined4 *)((longlong)param_1 + 0x8bc) = *(undefined4 *)((longlong)param_2 + 0x8bc);
    param_2[0x117] = 0;
  }
  return param_1;
}



// FUNCTION 1414d0db0 FUN_1414d0db0 body=449 status=ok
// SIG undefined FUN_1414d0db0(void)

void FUN_1414d0db0(longlong *param_1,undefined8 *****param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 ****local_50;
  code *local_48;
  code *local_40;
  undefined8 ****local_30;
  undefined8 ****local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9ae0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((char)param_1[0x2f] == '\x03') {
    if ((char)param_1[0x4bf] == '\x01') {
      pcVar2 = (char *)((longlong)param_1 + 0x25f9);
    }
    else {
      if (param_1[0x4c3] == 0) goto LAB_1414d0e05;
      pcVar2 = (char *)(param_1[0x4c3] + 0x458);
    }
    if ((param_2 != (undefined8 *****)0x0) && (*pcVar2 == '\x01')) {
      if (DAT_14caf64b8 == 0) {
        local_28 = (undefined8 ****)FUN_141030f22;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_142b4754c;
        local_58 = &LAB_147c45ce0;
        local_60 = &LAB_1463f1ff4;
        local_68 = &DAT_149e063b2;
        local_70 = 0x4000000000;
        local_78 = 0x10000004;
        local_80 = 8;
        local_88 = 0x428;
        local_50 = &local_28;
        FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      }
      if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(param_2[2] + 7)) &&
         (param_2[2][6][*(int *)(DAT_14caf64b8 + 0x38)] == (undefined8 **)(DAT_14caf64b8 + 0x30))) {
        local_30 = param_2;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        local_28 = &local_30;
        FUN_145bda02e(param_1 + 0x4c0);
        FUN_140bfdb7c(param_1);
      }
    }
  }
LAB_1414d0e05:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414d0f72 FUN_1414d0f72 body=151 status=ok
// SIG undefined FUN_1414d0f72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414d0f72(void)

{
  _DAT_14cb49728 = &PTR_LAB_149e668b0;
  _DAT_14cb49730 = 0;
  FUN_1405bceb4(&DAT_14cb49728);
  _DAT_14cb49728 = &PTR_FUN_14aea0640;
  _DAT_14cb49738 = 0;
  _DAT_14cb49740 = L"/Water/Meshes/LakeMesh.LakeMesh";
  _DAT_14cb49748 = 0;
  _DAT_14cb49750 = &PTR_LAB_149e668b0;
  _DAT_14cb49758 = 0;
  FUN_1405bceb4(&DAT_14cb49750);
  _DAT_14cb49750 = &PTR_FUN_14aea0640;
  _DAT_14cb49760 = 0;
  _DAT_14cb49768 = L"/Water/Meshes/RiverMesh.RiverMesh";
  _DAT_14cb49770 = 0;
  return;
}



// FUNCTION 1414d100a FUN_1414d100a body=212 status=ok
// SIG undefined FUN_1414d100a(void)

void FUN_1414d100a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [96];
  undefined1 local_98 [88];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_138);
  }
  local_110 = 0x3ff0000000000000;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1449437a2(param_4,local_f8,param_2);
  local_118 = &local_110;
  FUN_146d29e5a(local_98,param_1,param_3,local_f8);
  FUN_146d0d32b(param_6,local_98);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414d38bc FUN_1414d38bc body=127 status=ok
// SIG undefined FUN_1414d38bc(void)

undefined8 FUN_1414d38bc(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  
  lVar1 = **(longlong **)(param_1 + 0x10);
  if (param_3 == '\0') {
    cVar2 = (**(code **)(lVar1 + 0x88))();
    if (cVar2 != '\0') {
      return 1;
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))(*(longlong **)(param_1 + 0x10),param_2,0);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x88))
                      (*(longlong **)(param_1 + 0x10),param_2);
  }
  else {
    (**(code **)(lVar1 + 0x130))(*(longlong **)(param_1 + 0x10),param_2,param_1);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x118))
                      (*(longlong **)(param_1 + 0x10),param_2);
  }
  if ((cVar2 == '\0') && (*(int *)(param_1 + 0x18) == 0)) {
    DVar3 = GetLastError();
    *(DWORD *)(param_1 + 0x18) = DVar3;
  }
  return 1;
}



// FUNCTION 1414d393c FUN_1414d393c body=299 status=ok
// SIG undefined FUN_1414d393c(void)

void FUN_1414d393c(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if ((((*(int *)((longlong)param_1 + 0xac) != 0) &&
       (uVar2 = *(uint *)(param_1 + 0x15), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) &&
     (((plVar3 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)((longlong)param_1 + 0xac))) &&
      (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))))) {
    FUN_1414d3a68(*plVar3,param_1 + 0x16,*(undefined4 *)(param_1 + 0x4a),
                  *(undefined4 *)((longlong)param_1 + 0x254),0);
  }
  param_1[0x2e] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (*(int *)((longlong)param_1 + 0x18c) != 0) {
    FUN_140115c12(param_1 + 0x30,0);
  }
  param_1[0x2f] = 0;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_1403e0ff1(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001414d3a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1414d3a68 FUN_1414d3a68 body=8777 status=ok
// SIG undefined FUN_1414d3a68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414d3a68(code *param_1,longlong *param_2,int param_3,int param_4,byte param_5)

{
  double dVar1;
  code cVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *_Y;
  code *_X;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  double *pdVar11;
  double *pdVar12;
  undefined8 *puVar13;
  double **ppdVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  code **ppcVar18;
  undefined1 *puVar19;
  longlong lVar20;
  code *pcVar21;
  int iVar22;
  double *pdVar23;
  code **ppcVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  uint *puVar27;
  undefined8 *puVar28;
  undefined4 *puVar29;
  bool bVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  uint uVar44;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  code *pcVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined8 extraout_XMM0_Qb;
  uint uVar45;
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auStack_ad8 [32];
  float local_ab8;
  code **local_ab0;
  code **local_aa8;
  undefined1 *local_aa0;
  code *local_a98;
  longlong *local_a90;
  longlong *local_a88;
  code **local_a80;
  undefined1 *local_a78;
  code *local_a70;
  undefined1 local_a68;
  byte local_a60;
  byte local_a56;
  byte local_a55;
  float local_a54;
  double *local_a50;
  float local_a44;
  float local_a40;
  undefined4 local_a3c;
  undefined1 local_a38 [16];
  byte *local_a28;
  float local_a1c;
  longlong *local_a18;
  code *local_a10;
  longlong *local_a08;
  undefined8 *local_a00;
  double *local_9f8;
  undefined8 *local_9f0;
  code *local_9e8;
  code **local_9e0;
  uint *local_9d8;
  undefined8 *local_9d0;
  longlong *local_9c8;
  int *local_9c0;
  longlong *local_9b8;
  undefined1 *local_9b0;
  code *local_9a8;
  undefined8 *local_9a0;
  uint *local_998;
  longlong local_990;
  undefined4 local_988;
  undefined8 local_980;
  longlong local_978;
  longlong lStack_970;
  longlong local_968;
  longlong lStack_960;
  uint local_958;
  uint uStack_954;
  uint uStack_950;
  uint uStack_94c;
  uint local_948;
  uint uStack_944;
  uint uStack_940;
  uint uStack_93c;
  double *local_938;
  code *pcStack_930;
  undefined1 local_928 [16];
  double local_918;
  double dStack_910;
  double local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  code *local_8d0;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  code *pcStack_8c0;
  double *local_8b8;
  double dStack_8b0;
  double local_8a8;
  undefined4 local_824;
  undefined1 local_810 [24];
  undefined4 local_7f8;
  double *local_7c8;
  double dStack_7c0;
  double local_7b8;
  code *local_7a8;
  code *pcStack_7a0;
  double *local_798 [2];
  double local_788;
  double dStack_780;
  double local_778;
  code *local_768;
  code *pcStack_760;
  double *local_758;
  undefined1 local_741;
  longlong local_740;
  code *local_738;
  code *pcStack_730;
  double *local_728;
  longlong lStack_720;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined4 local_700;
  undefined1 local_6fc;
  undefined4 local_6f8;
  undefined1 local_6f4;
  longlong local_6f0;
  longlong lStack_6e8;
  longlong local_6e0;
  longlong lStack_6d8;
  undefined1 local_6d0 [48];
  undefined1 *local_6a0;
  undefined4 local_698;
  longlong local_690;
  undefined4 local_688;
  undefined8 local_680;
  longlong lStack_678;
  int local_670;
  undefined4 local_66c;
  undefined **local_668;
  longlong local_660;
  longlong local_658;
  ulonglong uStack_650;
  undefined1 local_648 [192];
  undefined8 auStack_588 [12];
  float local_528;
  float local_524;
  float local_520;
  undefined4 local_51c;
  undefined1 local_518;
  code *local_508 [2];
  undefined8 *local_4f8;
  undefined1 local_4c0 [48];
  undefined8 local_490;
  undefined **local_480;
  code *local_478;
  undefined4 local_470;
  undefined8 local_468;
  double local_460 [3];
  code *local_448;
  code *local_440;
  double *local_438;
  double *local_430;
  double dStack_428;
  double local_420;
  uint local_418;
  longlong local_3f8;
  undefined4 local_3f0;
  undefined8 local_3e8;
  undefined1 local_3e0 [48];
  undefined8 local_3b0;
  float local_3a0;
  undefined8 local_398;
  undefined4 local_390;
  longlong local_388;
  int local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  longlong local_350;
  undefined4 local_348;
  undefined8 local_340;
  uint local_338;
  int local_334;
  double local_320;
  double local_318;
  double local_310;
  undefined1 local_2fc;
  undefined **local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  int local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined **local_2b8;
  code *local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  code *local_298 [2];
  double *local_288;
  code *local_280;
  code *pcStack_278;
  double *local_270;
  code *local_268;
  code *pcStack_260;
  double *local_258;
  undefined8 local_250;
  int iStack_248;
  uint uStack_244;
  int iStack_240;
  float fStack_23c;
  undefined8 uStack_238;
  longlong local_230;
  undefined4 local_228;
  undefined8 local_220;
  longlong local_218 [6];
  longlong *local_1e8;
  undefined8 local_1e0;
  float local_1d8;
  uint local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  longlong local_1c0;
  int local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  uint uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  longlong lStack_188;
  int local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  longlong lStack_160;
  code *local_158;
  code *pcStack_150;
  double *local_148;
  undefined2 local_140;
  undefined8 local_13c;
  undefined1 local_134;
  undefined8 local_130;
  undefined **local_128;
  undefined *local_120;
  double local_118 [3];
  ulonglong uStack_100;
  undefined2 local_f8;
  byte bStack_f6;
  undefined1 uStack_f5;
  undefined4 uStack_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_ad8;
  lVar10 = *(longlong *)(param_1 + 0x30);
  if (lVar10 == 0) {
LAB_1414d3b2f:
    lVar10 = 0;
  }
  else {
    if (DAT_14cbbd498 == 0) {
      local_a80 = &local_738;
      local_738 = FUN_140940982;
      local_a70 = FUN_14081d0ea;
      local_a78 = &LAB_146572ba2;
      local_a88 = (longlong *)&LAB_148ca13ba;
      local_a90 = (longlong *)&LAB_140e51436;
      local_a98 = (code *)0x149e2b68a;
      local_aa0 = (undefined1 *)0x0;
      local_aa8 = (code **)CONCAT44(local_aa8._4_4_,0x10000004);
      local_ab0 = (code **)CONCAT44(local_ab0._4_4_,8);
      local_ab8 = 5.88545e-42;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cbbd498 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) != DAT_14cbbd498 + 0x30)) goto LAB_1414d3b2f;
  }
  lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1b0);
  local_a55 = param_2[1] == 0 && *param_2 == 0;
  local_9d8 = (uint *)(param_2 + 0x1d);
  if (*(int *)((longlong)param_2 + 0xec) == 0) {
LAB_1414d5ab7:
    local_a50 = (double *)0x0;
  }
  else {
    uVar31 = *local_9d8;
    local_a50 = (double *)0x0;
    if ((-1 < (int)uVar31) && ((int)uVar31 < DAT_14c9647dc)) {
      plVar16 = (longlong *)
                ((ulonglong)((uVar31 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar31 >> 0x10) * 8));
      if ((plVar16 == (longlong *)0x0) ||
         (((int)plVar16[2] != *(int *)((longlong)param_2 + 0xec) ||
          ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_1414d5ab7;
      local_a50 = (double *)*plVar16;
    }
  }
  local_2b8 = &PTR_FUN_14b32b680;
  local_2b0 = (code *)0x0;
  local_2a8 = 0x34001;
  local_2a0 = 0;
  local_298[0] = DAT_14c8464e0;
  local_298[1] = DAT_14c8464e8;
  local_288 = DAT_14c8464f0;
  local_280 = DAT_14c8464e0;
  pcStack_278 = DAT_14c8464e8;
  local_270 = DAT_14c8464f0;
  local_268 = DAT_14c8464e0;
  pcStack_260 = DAT_14c8464e8;
  local_258 = DAT_14c8464f0;
  local_250 = 0;
  iStack_248 = 0;
  uStack_244 = 0;
  iStack_240 = 0;
  fStack_23c = 0.0;
  uStack_238 = 0;
  local_230 = 0;
  local_228 = 0x3002;
  local_220 = 0;
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0x200000000;
  local_1d8 = 0.0;
  local_1d0 = local_1d0 & 0xffffff00;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = -0xfffff30;
  local_1b0 = 0;
  local_1a8 = 0;
  uStack_1a4 = uStack_1a4 & 0xffffff00;
  local_168 = 0;
  lStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  uStack_190 = 0;
  lStack_188 = 0;
  local_180 = 0;
  local_158 = DAT_14c8464e0;
  pcStack_150 = DAT_14c8464e8;
  local_148 = DAT_14c8464f0;
  local_140 = 0;
  local_13c = 0xbf80000000000000;
  local_134 = 0;
  local_130 = 0;
  FUN_1405c5fa2();
  local_120 = &DAT_14cb769e8;
  local_118[0] = 0.0;
  local_118[1] = 0.0;
  local_128 = &PTR_FUN_14b0394b0;
  uStack_f4 = 0;
  local_118[2] = 0.0;
  uStack_100 = 0;
  local_f8 = 0;
  bStack_f6 = bStack_f6 & 0xfe;
  pcVar21 = (code *)0x0;
  local_a10 = param_1;
  if (*param_2 != 0) {
    puVar29 = *(undefined4 **)(*param_2 + 8);
    puVar26 = &DAT_14c9485f0;
    if (puVar29 != (undefined4 *)0x0) {
      puVar26 = puVar29;
    }
    if (DAT_14c947fe0 == 0) {
      lVar15 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar15);
      DAT_14c947fe0 = lVar15;
    }
    FUN_140045924(DAT_14c947fe0,&local_738,puVar26,1);
    pcVar21 = local_738;
    if (local_2b0 != local_738) {
      local_2a0 = 0;
    }
  }
  local_288 = (double *)param_2[0x27];
  local_298[0] = (code *)param_2[0x25];
  local_298[1] = (code *)param_2[0x26];
  local_2b0 = pcVar21;
  if (lVar20 == 0) {
    local_250 = local_250 & 0xffffffff;
    iVar7 = 0;
  }
  else {
    uVar31 = *(uint *)(lVar20 + 0xc);
    local_250 = CONCAT44(uVar31,(undefined4)local_250);
    if ((int)uVar31 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar31 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar31 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    iVar7 = *(int *)(lVar20 + 0x10);
    if (*(int *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar22 = DAT_14c964868 + 1;
      bVar30 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar30) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar22);
      }
      LOCK();
      iVar7 = *(int *)(lVar20 + 0x10);
      bVar30 = iVar7 == 0;
      if (bVar30) {
        *(int *)(lVar20 + 0x10) = iVar22;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar30) {
        iVar7 = iVar22;
      }
    }
  }
  iStack_248 = iVar7;
  if (lVar10 == 0) {
    uStack_244 = 0;
    iVar7 = 0;
  }
  else {
    uStack_244 = *(uint *)(lVar10 + 0xc);
    if ((int)uStack_244 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uStack_244 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_244 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    iVar7 = *(int *)(lVar20 + 0x10);
    if (*(int *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar22 = DAT_14c964868 + 1;
      bVar30 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar30) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar22);
      }
      LOCK();
      iVar7 = *(int *)(lVar20 + 0x10);
      bVar30 = iVar7 == 0;
      if (bVar30) {
        *(int *)(lVar20 + 0x10) = iVar22;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar30) {
        iVar7 = iVar22;
      }
    }
  }
  uStack_238 = CONCAT44(iVar7,uStack_244);
  if (param_2[10] == 0) {
    puVar29 = &DAT_14c9485f0;
  }
  else {
    puVar26 = *(undefined4 **)(param_2[10] + 8);
    puVar29 = &DAT_14c9485f0;
    if (puVar26 != (undefined4 *)0x0) {
      puVar29 = puVar26;
    }
  }
  iStack_240 = iVar7;
  if (DAT_14c947fe0 == 0) {
    lVar20 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar20);
    DAT_14c947fe0 = lVar20;
  }
  FUN_140045924(DAT_14c947fe0,&local_740,puVar29,1);
  pcVar21 = local_a10;
  if (local_230 != local_740) {
    local_220 = 0;
  }
  local_230 = local_740;
  plVar16 = param_2 + 0xb;
  if (local_218 != plVar16) {
    plVar17 = (longlong *)param_2[0x11];
    if ((longlong *)param_2[0x11] == (longlong *)0x0) {
      plVar17 = plVar16;
    }
    FUN_1400709d4(local_218,plVar17,(int)param_2[0x12],local_1e0._4_4_);
  }
  local_f8 = (undefined2)param_2[2];
  local_9e0 = (code **)(param_2 + 0x16);
  FUN_1403e0f94(local_118 + 2);
  (*(code *)local_128[4])(&local_128,0);
  local_120 = (undefined *)param_2[0x19];
  local_9b8 = param_2 + 0x1a;
  pdVar23 = local_118;
  FUN_1406022fe(pdVar23);
  uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x4c);
  if (*(char *)((longlong)param_2 + 0x34) == '\x01') {
    local_a54 = ((*(float *)((longlong)param_2 + 0x14) + 1.0) / (1.0 - *(float *)(param_2 + 3))) *
                *(float *)((longlong)param_2 + 0x24) *
                (*(float *)(param_2 + 5) + *(float *)((longlong)param_2 + 0x1c)) +
                *(float *)(param_2 + 4);
    *(float *)(param_2 + 6) = local_a54;
    *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  }
  else {
    local_a54 = *(float *)(param_2 + 6);
  }
  local_a44 = *(float *)(param_2 + 7);
  local_a40 = *(float *)((longlong)param_2 + 0x3c);
  local_a38 = ZEXT416(*(uint *)(param_2 + 0x31));
  pdVar12 = local_a50;
  if (lVar10 != 0) {
    pdVar23 = (double *)(lVar10 + 0xdf0);
    lVar10 = (**(code **)(*(longlong *)(lVar10 + 0xdf0) + 0x18))(pdVar23);
    if (lVar10 != 0) {
      local_250 = local_250 | 0x1000;
    }
    lVar10 = (**(code **)((longlong)*pdVar23 + 0x50))(pdVar23);
    pdVar12 = local_a50;
    if ((lVar10 != 0) && ((*(byte *)(param_2 + 0x1c) & 2) != 0)) {
      local_250 = local_250 | 0x2000;
      pdVar23 = (double *)(lVar10 + 0x100);
      pdVar11 = (double *)FUN_1447e736e(pdVar23);
      if ((pdVar11 != (double *)0x0) && (0.0 < *(float *)(pcVar21 + 0x394))) {
        uVar34 = FUN_1449e6cbc(pdVar11);
        uVar44 = (uint)((ulonglong)uVar34 >> 0x20);
        uVar45 = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
        uVar31 = -(uint)((float)uVar34 < *(float *)(pcVar21 + 0x394));
        local_a38._4_4_ = ~uVar44 & local_a38._4_4_ | uVar44;
        local_a38._0_4_ =
             ~uVar31 & local_a38._0_4_ |
             (uint)(((float)uVar34 / *(float *)(pcVar21 + 0x394)) * (float)local_a38._0_4_) & uVar31
        ;
        local_a38._8_4_ = ~(uint)extraout_XMM0_Qb & local_a38._8_4_ | (uint)extraout_XMM0_Qb;
        local_a38._12_4_ = ~uVar45 & local_a38._12_4_ | uVar45;
        pdVar23 = pdVar11;
      }
    }
  }
  if (((byte)pcVar21[0x2d1] & 4) != 0) {
    lVar10 = FUN_1447e736e(*(longlong *)(pcVar21 + 0x358) + 0x1d8);
    if (lVar10 != 0) {
      fVar32 = (float)FUN_1449e6cbc(lVar10);
      local_a54 = local_a54 * fVar32;
    }
    lVar10 = FUN_1447e736e(*(longlong *)(pcVar21 + 0x358) + 0x200);
    if (lVar10 != 0) {
      fVar32 = (float)FUN_1449e6cbc(lVar10);
      local_a44 = local_a44 * fVar32;
    }
    lVar10 = FUN_1447e736e(*(longlong *)(pcVar21 + 0x358) + 0x228);
    if (lVar10 != 0) {
      fVar32 = (float)FUN_1449e6cbc(lVar10);
      local_a40 = local_a40 * fVar32;
    }
    pdVar23 = (double *)(*(longlong *)(pcVar21 + 0x358) + 0x330);
    pdVar11 = (double *)FUN_1447e736e(pdVar23);
    if (pdVar11 != (double *)0x0) {
      fVar32 = (float)FUN_1449e6cbc(pdVar11);
      local_a38._0_4_ = (float)local_a38._0_4_ * fVar32;
      pdVar23 = pdVar11;
    }
  }
  fStack_23c = local_a54;
  local_1d8 = local_a44;
  if (local_180 != 0x4fc71eb4) {
    local_178 = 0;
  }
  local_180 = 0x4fc71eb4;
  if (lStack_188 != param_2[0x13]) {
    local_178 = 0;
  }
  lStack_188 = param_2[0x13];
  local_1d0 = local_1d0 & 0xffffff00;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  if ((local_1c0 != 0) || (local_1b8 != -0xfffff30)) {
    local_1c0 = 0;
    local_1b8 = -0xfffff30;
    local_1b0 = 0;
  }
  local_1a8 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_1a4 = uStack_1a4 & 0xffffff00;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_1a0 = (int)param_2[8];
  uStack_194 = *(undefined4 *)((longlong)param_2 + 0x44);
  if (1e-08 < ABS((float)local_a38._0_4_ + -1.0)) {
    local_140 = CONCAT11(1,(undefined1)local_140);
    local_13c = CONCAT44(local_13c._4_4_,local_a38._0_4_);
  }
  local_9f8 = (double *)(param_2 + 0x25);
  local_a18 = plVar16;
  if ((*(byte *)(param_2 + 0x1c) & 2) != 0) {
    local_250 = local_250 | 1;
    if (pdVar12 == (double *)0x0) {
      if (((((double)param_2[0x1e] != 0.0) || (NAN((double)param_2[0x1e]))) ||
          ((double)param_2[0x1f] != 0.0)) ||
         (((NAN((double)param_2[0x1f]) || ((double)param_2[0x20] != 0.0)) ||
          (NAN((double)param_2[0x20]))))) {
        pdVar23 = (double *)param_2[0x20];
        local_258 = pdVar23;
        local_268 = (code *)param_2[0x1e];
        pcStack_260 = (code *)param_2[0x1f];
      }
      else {
        if ((((double)param_2[0x25] == 0.0) && (!NAN((double)param_2[0x25]))) &&
           (((double)param_2[0x26] == 0.0 &&
            (((!NAN((double)param_2[0x26]) && ((double)param_2[0x27] == 0.0)) &&
             (!NAN((double)param_2[0x27]))))))) goto LAB_1414d44ae;
        local_258 = (double *)param_2[0x27];
        local_268 = (code *)*local_9f8;
        pcStack_260 = (code *)param_2[0x26];
        pdVar23 = local_9f8;
      }
    }
    else {
      uVar31 = *(uint *)((longlong)pdVar12 + 0xc);
      uStack_170 = CONCAT44(uStack_170._4_4_,uVar31);
      if ((int)uVar31 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar31 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar31 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar7 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar22 = DAT_14c964868 + 1;
        bVar30 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar30) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar22);
        }
        LOCK();
        iVar7 = *(int *)(lVar10 + 0x10);
        bVar30 = iVar7 == 0;
        if (bVar30) {
          *(int *)(lVar10 + 0x10) = iVar22;
          iVar7 = 0;
        }
        UNLOCK();
        pdVar12 = local_a50;
        if (bVar30) {
          iVar7 = iVar22;
        }
      }
      uStack_170 = CONCAT44(iVar7,(undefined4)uStack_170);
      lStack_160 = param_2[0x21];
      local_148 = (double *)param_2[0x20];
      local_158 = (code *)param_2[0x1e];
      pcStack_150 = (code *)param_2[0x1f];
      pdVar23 = local_a50;
      (**(code **)((longlong)*pdVar12 + 0x590))(local_a50,&local_738,0);
      local_258 = local_728;
      local_268 = local_738;
      pcStack_260 = pcStack_730;
    }
  }
LAB_1414d44ae:
  local_741 = 0;
  local_a08 = param_2 + 0x2b;
  local_758 = (double *)param_2[0x2d];
  local_768 = (code *)param_2[0x2b];
  pcStack_760 = (code *)param_2[0x2c];
  lVar10 = param_2[0x32];
  local_a3c = (undefined4)CONCAT71((int7)((ulonglong)pdVar23 >> 8),1);
  if (lVar10 != 0) {
    if (*(char *)(lVar10 + 0x2e) == '\x01') {
      local_250 = local_250 | 0x100;
    }
    if (*(char *)(lVar10 + 0x2c) == '\0') {
      if (*(char *)(lVar10 + 0x2d) != '\x01') goto LAB_1414d4558;
      FUN_140c8437c(pcVar21,&local_738,local_a08);
      local_758 = local_728;
      local_768 = local_738;
      pcStack_760 = pcStack_730;
    }
    local_a3c = 0;
  }
LAB_1414d4558:
  if (((byte)pcVar21[0x2d1] & 0x40) != 0) {
    local_250 = local_250 | 0x800;
  }
  local_a56 = *param_2 == 0;
  if (param_3 <= param_4 + param_3 + -1) {
    local_9e8 = (code *)(param_2 + 0x18);
    local_9c8 = param_2 + 7;
    local_a28 = (byte *)(param_2 + 0x1c);
    local_a1c = (float)_DAT_14c7640e0 * 0.001;
    local_a56 = local_a56 & param_5;
    local_998 = &local_338;
    local_9a0 = &uStack_170;
    local_9f0 = &local_2d0;
    local_9b0 = local_810;
    local_9d0 = &local_680;
    local_a00 = auStack_588;
    local_9c0 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    local_9a8 = pcVar21 + 0x390;
    do {
      local_480 = &PTR_FUN_14b32b680;
      local_478 = local_2b0;
      local_470 = local_2a8;
      local_468 = 0;
      ppcVar24 = local_298;
      pdVar23 = local_460;
      for (lVar10 = 0xd; lVar10 != 0; lVar10 = lVar10 + -1) {
        *pdVar23 = (double)*ppcVar24;
        ppcVar24 = ppcVar24 + 1;
        pdVar23 = pdVar23 + 1;
      }
      local_3f8 = local_230;
      local_3f0 = local_228;
      local_3e8 = 0;
      local_3b0 = 0;
      plVar16 = local_1e8;
      if (local_1e8 == (longlong *)0x0) {
        plVar16 = local_218;
      }
      FUN_1400709d4(local_3e0,plVar16,local_1e0 & 0xffffffff,0);
      local_3a0 = local_1d8;
      local_390 = uStack_1c8;
      local_398 = CONCAT44(uStack_1cc,local_1d0);
      local_388 = local_1c0;
      local_380 = local_1b8;
      local_378 = 0;
      local_370 = CONCAT44(uStack_1a4,local_1a8);
      uStack_368 = CONCAT44(uStack_19c,uStack_1a0);
      local_360 = CONCAT44(uStack_194,uStack_198);
      uStack_358 = uStack_190;
      local_350 = lStack_188;
      local_348 = local_180;
      local_340 = 0;
      puVar13 = local_9a0;
      puVar27 = local_998;
      for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
        *(undefined8 *)puVar27 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar27 = puVar27 + 2;
      }
      local_2f0 = (undefined **)&DAT_14a171d50;
      local_2e0 = 0;
      uStack_2d8 = 0;
      local_2e8 = (longlong)local_120;
      FUN_1406022fe();
      uVar6 = uStack_100;
      dVar38 = local_118[2];
      local_2f0 = &PTR_FUN_14b0394b0;
      local_2d0 = 0;
      local_2c8 = (int)uStack_100;
      if ((int)uStack_100 == 0) {
        local_2c4 = 0;
      }
      else {
        FUN_1403e11c4(local_9f0,uStack_100 & 0xffffffff,0);
        FUN_1403e103e(local_2d0,dVar38,uVar6 & 0xffffffff);
      }
      local_2c0 = CONCAT44(uStack_f4,CONCAT13(uStack_f5,CONCAT12(bStack_f6,local_f8)));
      local_778 = local_9f8[2];
      local_788 = *local_9f8;
      dStack_780 = local_9f8[1];
      dVar38 = (double)param_2[0x28];
      dVar1 = (double)param_2[0x29];
      dVar41 = (double)param_2[0x2a];
      local_798[0] = local_758;
      local_7a8 = local_768;
      pcStack_7a0 = pcStack_760;
      lVar10 = param_2[0x32];
      if (lVar10 != 0) {
        fVar32 = *(float *)(param_2 + 9);
        fVar33 = (float)(**(code **)(*(longlong *)pcVar21 + 0x308))(pcVar21);
        local_a98 = local_9a8;
        local_aa0 = &local_741;
        local_aa8 = &local_738;
        local_ab0 = &local_7a8;
        local_ab8 = fVar32;
        FUN_141884f4a(lVar10,&local_768,fVar33 * 0.5,param_3);
        if ((((double)local_738 != 0.0) || ((double)pcStack_730 != 0.0)) ||
           (((double)local_728 != 0.0 || (NAN((double)local_728))))) {
          local_938 = local_728;
          pcStack_930 = local_738;
          local_928._0_8_ = pcStack_730;
          FUN_1401c9a0e(local_a08,&local_8c8,&local_938);
          local_728 = local_8b8;
          local_738 = (code *)CONCAT44(uStack_8c4,local_8c8);
          pcStack_730 = pcStack_8c0;
          dVar38 = dVar38 + (double)local_738;
          local_788 = (double)local_738 + local_788;
          dVar1 = dVar1 + (double)pcStack_8c0;
          dStack_780 = (double)pcStack_8c0 + dStack_780;
          local_778 = local_778 + (double)local_8b8;
          dVar41 = dVar41 + (double)local_8b8;
        }
      }
      if ((char)local_a3c != '\0') {
        FUN_140c8437c(pcVar21,&local_738,&local_768);
        local_798[0] = local_728;
        local_7a8 = local_738;
        pcStack_7a0 = pcStack_730;
      }
      dVar35 = (double)FUN_144719204(local_7a8);
      dVar36 = (double)FUN_144719204(pcStack_7a0);
      pdVar23 = (double *)sin(dVar35 * 0.017453292519943295);
      dVar35 = cos(dVar35 * 0.017453292519943295);
      dVar37 = sin(dVar36 * 0.017453292519943295);
      dVar36 = cos(dVar36 * 0.017453292519943295);
      pcVar3 = (code *)(dVar37 * dVar35);
      pcVar39 = (code *)(dVar36 * dVar35);
      local_7b8 = (double)pdVar23 * 16000.0 + local_778;
      dStack_7c0 = (double)pcVar3 * 16000.0 + dStack_780;
      local_7c8 = (double *)((double)pcVar39 * 16000.0 + local_788);
      bVar30 = false;
      memset(&local_8c8,0,0x100);
      local_7f8 = 0xffffffff;
      uStack_8c4 = 0x3f800000;
      local_824 = 0xffffffff;
      if ((*local_a28 & 4) != 0) {
        local_aa0 = (undefined1 *)CONCAT71(local_aa0._1_7_,local_a55);
        local_aa8 = (code **)CONCAT44(local_aa8._4_4_,(int)param_2[0x33]);
        local_ab8 = (float)CONCAT31(local_ab8._1_3_,local_a55);
        local_ab0 = (code **)0x0;
        FUN_1418bbf62(pcVar21,&local_738,&local_788,&local_7c8);
        memcpy(&local_8c8,&local_738,0x100);
        pdVar12 = (double *)FUN_14485cccc(local_9b0);
        if (((local_a50 != (double *)0x0) && (pdVar12 == local_a50)) && ((*local_a28 & 2) == 0)) {
          local_418 = local_418 | 4;
          local_338 = *(uint *)((longlong)local_a50 + 0xc);
          if ((int)local_338 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((local_338 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_338 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          iVar7 = *(int *)(lVar10 + 0x10);
          if (*(int *)(lVar10 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar22 = DAT_14c964868 + 1;
            bVar30 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar30) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar22);
            }
            LOCK();
            iVar7 = *(int *)(lVar10 + 0x10);
            bVar30 = iVar7 == 0;
            if (bVar30) {
              *(int *)(lVar10 + 0x10) = iVar22;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar30) {
              iVar7 = iVar22;
            }
          }
          pdVar12 = local_a50;
          local_334 = iVar7;
          dVar35 = local_a50[0x39];
          if (dVar35 == 0.0) {
            uVar47 = SUB84(DAT_14c8464f0,0);
            uVar48 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            puVar13 = &DAT_14c8464e0;
          }
          else {
            uVar47 = (undefined4)*(undefined8 *)((longlong)dVar35 + 0x270);
            uVar48 = (undefined4)((ulonglong)*(undefined8 *)((longlong)dVar35 + 0x270) >> 0x20);
            puVar13 = (undefined8 *)((longlong)dVar35 + 0x260);
          }
          uVar49 = *(undefined4 *)puVar13;
          uVar50 = *(undefined4 *)((longlong)puVar13 + 4);
          uVar51 = *(undefined4 *)(puVar13 + 1);
          uVar52 = *(undefined4 *)((longlong)puVar13 + 0xc);
          if (0.0 < *(float *)(param_2 + 0x33) && (local_a55 & 1) == 0) {
            uVar34 = FUN_140757e32();
            plVar16 = (longlong *)FUN_144718840(pdVar12,uVar34);
            if ((plVar16 != (longlong *)0x0) &&
               (lVar10 = (**(code **)(*plVar16 + 0x10))(plVar16), *(char *)(lVar10 + 0x38) == '\x01'
               )) {
              uVar34 = (**(code **)(*plVar16 + 0x10))(plVar16);
              FUN_147ad4b84(uVar34,&local_738,(int)param_2[0x33]);
              uVar47 = local_708;
              uVar48 = uStack_704;
              uVar49 = local_718;
              uVar50 = uStack_714;
              uVar51 = uStack_710;
              uVar52 = uStack_70c;
            }
          }
          local_320 = (double)local_8b8 - (double)CONCAT44(uVar50,uVar49);
          local_318 = dStack_8b0 - (double)CONCAT44(uVar52,uVar51);
          local_310 = local_8a8 - (double)CONCAT44(uVar48,uVar47);
        }
        local_7b8 = local_8a8;
        local_7c8 = local_8b8;
        dStack_7c0 = dStack_8b0;
        pdVar12 = (double *)(local_8a8 - dVar41);
        pcVar5 = (code *)(dStack_8b0 - dVar1);
        pcVar4 = (code *)((double)local_8b8 - dVar38);
        dVar35 = (double)pdVar12 * (double)pdVar12 +
                 (double)pcVar4 * (double)pcVar4 + (double)pcVar5 * (double)pcVar5;
        if (((dVar35 != 1.0) || (pdVar11 = pdVar12, _Y = pcVar5, _X = pcVar4, NAN(dVar35))) &&
           (pdVar11 = DAT_14c8464f0, _Y = DAT_14c8464e8, _X = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar35)) {
          dVar35 = 1.0 / SQRT(dVar35);
          pdVar11 = (double *)((double)pdVar12 * dVar35);
          _Y = (code *)((double)pcVar5 * dVar35);
          _X = (code *)((double)pcVar4 * dVar35);
        }
        bVar30 = true;
        if (0.0 < (double)pdVar23 * (double)pdVar11 +
                  (double)pcVar39 * (double)_X + (double)pcVar3 * (double)_Y) {
          local_788 = dVar38;
          dStack_780 = dVar1;
          local_778 = dVar41;
          local_460[0] = dVar38;
          local_460[1] = dVar1;
          local_460[2] = dVar41;
          pcVar3 = (code *)0x0;
          if ((((double)_X != 0.0) || (NAN((double)_X))) ||
             (((double)_Y != 0.0 || (NAN((double)_Y))))) {
            dVar38 = atan2((double)_Y,(double)_X);
            pcVar3 = (code *)(dVar38 * 57.29577951308232);
          }
          dVar38 = SQRT((double)_X * (double)_X + (double)_Y * (double)_Y);
          pcVar39 = (code *)0x0;
          if ((((double)pdVar11 != 0.0) || (NAN((double)pdVar11))) ||
             ((dVar38 != 0.0 || (NAN(dVar38))))) {
            dVar38 = atan2((double)pdVar11,dVar38);
            pcVar39 = (code *)(dVar38 * 57.29577951308232);
          }
          local_7a8 = pcVar39;
          pcStack_7a0 = pcVar3;
          local_798[0] = (double *)0x0;
          bVar30 = false;
          pcVar3 = _Y;
          pcVar39 = _X;
          pdVar23 = pdVar11;
        }
      }
      local_448 = pcVar39;
      local_440 = pcVar3;
      local_438 = pdVar23;
      if (*param_2 == 0) {
        if (param_2[1] != 0) {
          local_8d0 = pcVar21;
          bVar30 = (*(byte *)(param_2 + 0x1c) & 8) == 0;
          ppdVar14 = (double **)(param_2 + 0x30);
          if (bVar30) {
            ppdVar14 = local_798;
          }
          ppcVar18 = (code **)(param_2 + 0x2e);
          ppcVar24 = (code **)(param_2 + 0x2f);
          if (bVar30) {
            ppcVar18 = &local_7a8;
            ppcVar24 = &pcStack_7a0;
          }
          auVar46._8_8_ = *ppcVar24;
          auVar46._0_8_ = *ppcVar18;
          auVar46 = divpd(auVar46,_DAT_1499387d0);
          auVar43._0_8_ = (double)*ppdVar14 / 360.0;
          auVar43._8_8_ = 0;
          auVar46 = roundpd(auVar46,auVar46,3);
          auVar43 = roundpd(auVar43,auVar43,3);
          dVar41 = ((double)*ppcVar18 - auVar46._0_8_ * (double)DAT_1499387d0) *
                   0.008726646259971648;
          dVar35 = ((double)*ppcVar24 - auVar46._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          dVar38 = ((double)*ppdVar14 - auVar43._0_8_ * (double)DAT_1499387d0) *
                   0.008726646259971648;
          dVar1 = (0.0 - auVar43._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          dVar36 = sin(dVar41);
          dVar37 = sin(dVar35);
          dVar40 = sin(dVar38);
          sin(dVar1);
          dVar41 = cos(dVar41);
          dVar35 = cos(dVar35);
          dVar42 = cos(dVar38);
          cos(dVar1);
          dVar38 = dVar37 * dVar36 * dVar40 + dVar35 * dVar41 * dVar42;
          local_938 = (double *)(dVar36 * dVar37 * dVar42 - dVar41 * dVar35 * dVar40);
          pcStack_930 = (code *)(-(dVar36 * dVar35 * dVar42) - dVar41 * dVar37 * dVar40);
          local_928._8_4_ = SUB84(dVar38,0);
          local_928._0_8_ = -(dVar35 * dVar36 * dVar40) + dVar37 * dVar41 * dVar42;
          local_928._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
          local_918 = local_788;
          dStack_910 = dStack_780;
          local_908 = local_778;
          uStack_900 = 0;
          local_8f8 = 0x3ff0000000000000;
          uStack_8f0 = 0x3ff0000000000000;
          local_8e8 = 0x3ff0000000000000;
          uStack_8e0 = 0;
          fVar32 = *(float *)(param_2 + 0x33);
          if ((DAT_14c86a9f8 == '\x01') && (*local_9c0 != 2)) {
            if (*local_9c0 == 1) {
              DVar8 = FUN_140ad26c0();
              DVar9 = GetCurrentThreadId();
              if (DVar8 == DVar9) goto LAB_1414d58c0;
            }
            local_728 = (double *)*param_2;
            lStack_720 = param_2[1];
            local_718 = CONCAT22(local_718._2_2_,(short)param_2[2]);
            uStack_714 = *(undefined4 *)((longlong)param_2 + 0x14);
            uStack_710 = (undefined4)param_2[3];
            uStack_70c = *(undefined4 *)((longlong)param_2 + 0x1c);
            local_708 = (undefined4)param_2[4];
            uStack_704 = *(undefined4 *)((longlong)param_2 + 0x24);
            local_700 = (undefined4)param_2[5];
            local_6fc = *(undefined1 *)((longlong)param_2 + 0x2c);
            local_6f8 = (undefined4)param_2[6];
            local_6f4 = *(undefined1 *)((longlong)param_2 + 0x34);
            local_6f0 = *local_9c8;
            lStack_6e8 = local_9c8[1];
            local_6e0 = local_9c8[2];
            lStack_6d8 = local_9c8[3];
            local_6a0 = (undefined1 *)0x0;
            plVar16 = (longlong *)param_2[0x11];
            if ((longlong *)param_2[0x11] == (longlong *)0x0) {
              plVar16 = local_a18;
            }
            local_738 = pcVar21;
            pcStack_730 = pcVar21;
            FUN_1400709d4(local_6d0,plVar16,(int)param_2[0x12],0);
            local_690 = param_2[0x13];
            local_688 = (undefined4)param_2[0x14];
            *local_9d0 = 0;
            local_9d0[1] = 0;
            iVar7 = (int)param_2[0x17];
            lVar10 = param_2[0x16];
            local_670 = iVar7;
            if (iVar7 == 0) {
              local_66c = 0;
            }
            else {
              FUN_1403e11c4(&lStack_678,iVar7,0);
              FUN_1403e103e(lStack_678,lVar10,iVar7);
            }
            local_668 = (undefined **)&DAT_14a171d50;
            local_658 = 0;
            uStack_650 = 0;
            local_660 = param_2[0x19];
            FUN_1406022fe(&local_658,local_9b8);
            local_668 = &PTR_FUN_14b0394b0;
            memcpy(local_648,local_a28,0xbc);
            ppdVar14 = &local_938;
            puVar13 = local_a00;
            for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
              *puVar13 = *ppdVar14;
              ppdVar14 = ppdVar14 + 1;
              puVar13 = puVar13 + 1;
            }
            local_528 = local_a54;
            local_524 = local_a44;
            local_520 = local_a40;
            local_51c = local_a38._0_4_;
            local_508[0] = (code *)0x0;
            local_4f8 = (undefined8 *)0x0;
            local_518 = 0.0 < fVar32;
            puVar13 = (undefined8 *)FUN_14001cc68(0x240,0x10);
            *puVar13 = &PTR_LAB_14b9df550;
            puVar13[2] = local_738;
            puVar13[3] = pcStack_730;
            puVar13[4] = local_728;
            puVar13[5] = lStack_720;
            *(undefined2 *)(puVar13 + 6) = (undefined2)local_718;
            *(undefined4 *)((longlong)puVar13 + 0x34) = uStack_714;
            *(undefined4 *)(puVar13 + 7) = uStack_710;
            *(undefined4 *)((longlong)puVar13 + 0x3c) = uStack_70c;
            *(undefined4 *)(puVar13 + 8) = local_708;
            *(undefined4 *)((longlong)puVar13 + 0x44) = uStack_704;
            *(undefined4 *)(puVar13 + 9) = local_700;
            *(undefined1 *)((longlong)puVar13 + 0x4c) = local_6fc;
            *(undefined4 *)(puVar13 + 10) = local_6f8;
            *(undefined1 *)((longlong)puVar13 + 0x54) = local_6f4;
            puVar13[0xd] = local_6e0;
            puVar13[0xe] = lStack_6d8;
            puVar13[0xb] = local_6f0;
            puVar13[0xc] = lStack_6e8;
            puVar13[0x15] = 0;
            puVar19 = local_6a0;
            if (local_6a0 == (undefined1 *)0x0) {
              puVar19 = local_6d0;
            }
            local_4f8 = puVar13;
            FUN_1400709d4(puVar13 + 0xf,puVar19,local_698,0);
            iVar7 = local_670;
            lVar10 = lStack_678;
            puVar13[0x17] = local_690;
            *(undefined4 *)(puVar13 + 0x18) = local_688;
            puVar13[0x19] = 0;
            puVar13[0x1a] = 0;
            *(int *)(puVar13 + 0x1b) = local_670;
            if (local_670 == 0) {
              *(undefined4 *)((longlong)puVar13 + 0xdc) = 0;
            }
            else {
              FUN_1403e11c4(puVar13 + 0x1a,local_670,0);
              FUN_1403e103e(puVar13[0x1a],lVar10,iVar7);
            }
            puVar13[0x1c] = &DAT_14a171d50;
            puVar13[0x1e] = 0;
            puVar13[0x1f] = 0;
            puVar13[0x1d] = local_660;
            FUN_1406022fe(puVar13 + 0x1e,&local_658);
            puVar13[0x1c] = &PTR_FUN_14b0394b0;
            memcpy(puVar13 + 0x20,local_648,0xbc);
            puVar25 = local_a00;
            puVar28 = puVar13 + 0x38;
            for (lVar10 = 0xe; lVar10 != 0; lVar10 = lVar10 + -1) {
              *puVar28 = *puVar25;
              puVar25 = puVar25 + 1;
              puVar28 = puVar28 + 1;
            }
            *(undefined1 *)(puVar13 + 0x46) = *(undefined1 *)(local_a00 + 0xe);
            if (puVar13 != (undefined8 *)&DAT_fffffffffffffff0) {
              local_508[0] = FUN_144358372;
            }
            FUN_1407461b0(1,local_508);
            local_668 = (undefined **)&DAT_14a171d50;
            uVar6 = uStack_650 >> 0x20;
            uStack_650 = uStack_650 & 0xffffffff00000000;
            if ((int)uVar6 != 0) {
              FUN_140115c12(&local_658,0);
            }
            pcVar21 = local_a10;
            local_660 = 0;
            if (local_658 != 0) {
              FUN_1400020a8();
            }
            FUN_1403e0ff1(lStack_678,local_670);
            if (lStack_678 != 0) {
              FUN_1400020a8();
            }
            if (local_6a0 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
LAB_1414d58c0:
            cVar2 = pcVar21[0x2d1];
            lVar10 = param_2[2];
            local_978 = *(longlong *)local_9d8;
            lStack_970 = *(longlong *)(local_9d8 + 2);
            local_968 = *(longlong *)(local_9d8 + 4);
            lStack_960 = *(longlong *)(local_9d8 + 6);
            local_958 = local_9d8[8];
            uStack_954 = local_9d8[9];
            uStack_950 = local_9d8[10];
            uStack_94c = local_9d8[0xb];
            local_948 = local_9d8[0xc];
            uStack_944 = local_9d8[0xd];
            uStack_940 = local_9d8[0xe];
            uStack_93c = local_9d8[0xf];
            local_990 = *(longlong *)(pcVar21 + 0x298);
            local_988 = *(undefined4 *)(pcVar21 + 0x2a0);
            local_980 = 0;
            local_490 = 0;
            plVar16 = (longlong *)param_2[0x11];
            if ((longlong *)param_2[0x11] == (longlong *)0x0) {
              plVar16 = local_a18;
            }
            FUN_1400709d4(local_4c0,plVar16,(int)param_2[0x12],0);
            local_aa0 = (undefined1 *)param_2[10];
            local_a68 = 0.0 < fVar32;
            local_a70 = local_9e8;
            local_a78 = (undefined1 *)CONCAT62(local_a78._2_6_,(short)lVar10);
            local_a80 = local_9e0;
            local_a88 = &local_978;
            local_a90 = &local_990;
            local_aa8 = (code **)CONCAT44(local_aa8._4_4_,local_a38._0_4_);
            local_ab0 = (code **)CONCAT44(local_ab0._4_4_,local_a40);
            local_ab8 = local_a44;
            local_a98 = (code *)local_4c0;
            local_a60 = ((byte)cVar2 & 0x40) >> 6;
            FUN_144351084(&local_8d0,param_2[1],&local_938,local_a54);
          }
        }
      }
      else {
        uVar34 = (**(code **)(*(longlong *)pcVar21 + 0x180))(pcVar21);
        lVar10 = FUN_140877338(uVar34);
        if (lVar10 != 0) {
          local_420 = local_7b8;
          local_430 = local_7c8;
          dStack_428 = dStack_7c0;
          local_2fc = local_741;
          if ((bVar30) &&
             (((*(byte *)(*param_2 + 0x328) & 1) == 0 || ((*(byte *)(*param_2 + 0x354) & 8) == 0))))
          {
            local_418 = local_418 | 0x20;
          }
          if ((0.0 < *(float *)(param_2 + 0x33)) && ((local_418 & 1) == 0)) {
            local_418 = local_418 | 0x40;
          }
          if (local_a56 == 0) {
            FUN_1414621da(lVar10,&local_480,local_a1c);
          }
          else {
            FUN_140842d26(lVar10,&local_738,&local_480);
          }
        }
      }
      FUN_140bba396(&local_480);
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  iVar7 = (**(code **)(*(longlong *)pcVar21 + 0x3c8))(pcVar21);
  if ((((iVar7 == 0) || (iVar7 <= *(int *)(pcVar21 + 0x2dc))) && (param_2[0x32] != 0)) &&
     (*(char *)(param_2[0x32] + 0x29) == '\x01')) {
    pcVar21[0x390] = (code)0x0;
  }
  FUN_140bba396(&local_2b8);
  if ((local_f0 ^ (ulonglong)auStack_ad8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414d5cb2 FUN_1414d5cb2 body=346 status=ok
// SIG undefined FUN_1414d5cb2(void)

void FUN_1414d5cb2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1414d5d44;
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
LAB_1414d5d44:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1414d5e0e FUN_1414d5e0e body=25 status=ok
// SIG undefined FUN_1414d5e0e(void)

void FUN_1414d5e0e(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  *param_1 = &PTR_FUN_14a1ca850;
  param_1[1] = *param_2;
  *(undefined1 *)(param_1 + 2) = param_3;
  return;
}



// FUNCTION 1414d5e28 FUN_1414d5e28 body=596 status=ok
// SIG undefined FUN_1414d5e28(void)

void FUN_1414d5e28(longlong param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  longlong lVar17;
  bool bVar18;
  
  if (DAT_14c76152c == '\0') {
    DAT_14cadb570 = 0;
    iVar13 = DAT_14cadb570;
    if (DAT_14cadb574 == 0) goto LAB_1414d5e72;
    FUN_147ad263c();
  }
  if (*(int *)(param_1 + 0x3e4) < *(int *)(param_1 + 1000)) {
    iVar13 = DAT_14cadb570;
    if (DAT_14cadb570 == 0) goto LAB_1414d5e72;
    lVar17 = (longlong)DAT_14cadb570 << 3;
    puVar11 = DAT_14cadb568;
    do {
      cVar6 = FUN_144729dda(puVar11);
      if ((cVar6 != '\0') && (lVar14 = FUN_14479d2ce(puVar11), DAT_14c76152c == '\x01')) {
        bVar5 = *(byte *)(lVar14 + 0x1fc);
        iVar13 = *(int *)(param_1 + 0x3e4);
        if (iVar13 < 0) {
          iVar13 = FUN_141348de4();
        }
        if (iVar13 < (int)(uint)bVar5) {
          plVar8 = (longlong *)FUN_14479d2ce(puVar11);
          (**(code **)(*plVar8 + 0x420))(plVar8,0);
          *puVar11 = 0;
        }
      }
      puVar11 = puVar11 + 1;
      lVar17 = lVar17 + -8;
    } while (lVar17 != 0);
  }
  iVar4 = DAT_14cadb570;
  puVar11 = DAT_14cadb568;
  iVar13 = DAT_14cadb570;
  if (DAT_14cadb570 != 0) {
    bVar5 = FUN_144729dda(DAT_14cadb568);
    lVar17 = (longlong)iVar4;
    iVar13 = 0;
    iVar7 = 0;
    do {
      lVar14 = (longlong)iVar7;
      iVar10 = iVar7 + 1;
      iVar2 = iVar10;
      if (iVar10 < iVar4) {
        iVar2 = iVar4;
      }
      if (lVar14 + 1 < lVar17) {
        bVar16 = true;
        lVar15 = lVar14 + 2;
        do {
          iVar12 = *(int *)((longlong)puVar11 + lVar15 * 8 + -4);
          bVar3 = bVar5;
          if ((((iVar12 != 0) && (uVar1 = *(uint *)(puVar11 + lVar15 + -1), -1 < (int)uVar1)) &&
              ((int)uVar1 < DAT_14c9647dc)) &&
             ((lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar9 != 0 &&
              (*(int *)(lVar9 + 0x10) == iVar12)))) {
            bVar3 = (*(uint *)(lVar9 + 8) & 0x10200000) == 0 ^ bVar5;
          }
          iVar12 = iVar10;
          if ((bVar3 & 1) != 0) break;
          bVar16 = lVar15 < lVar17;
          iVar10 = iVar10 + 1;
          bVar18 = lVar15 != lVar17;
          lVar15 = lVar15 + 1;
          iVar12 = iVar2;
        } while (bVar18);
      }
      else {
        bVar16 = false;
        iVar12 = iVar2;
      }
      if ((bVar5 & 1) != 0) {
        if (iVar13 != iVar7) {
          memmove(puVar11 + iVar13,puVar11 + lVar14,(longlong)(iVar12 - iVar7) << 3);
        }
        iVar13 = iVar13 + (iVar12 - iVar7);
      }
      bVar5 = bVar5 ^ 1;
      iVar7 = iVar12;
    } while (bVar16);
  }
LAB_1414d5e72:
  DAT_14cadb570 = iVar13;
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x3e4);
  return;
}



// FUNCTION 1414d607c FUN_1414d607c body=462 status=ok
// SIG undefined FUN_1414d607c(void)

void FUN_1414d607c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    lVar3 = FUN_1447210f0(param_2);
    if ((*(longlong *)(param_1 + 0x38) == 0) ||
       (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar4 == 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x360);
    }
    if ((lVar3 == lVar4) && (lVar3 = *(longlong *)(param_2 + 0x430), lVar3 != 0)) {
      if (DAT_14cae9568 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1417de738;
        local_30 = &LAB_145893408;
        local_38 = &LAB_1458cbbd2;
        local_48 = &LAB_147ba21f1;
        local_50 = &LAB_1463e9233;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x1000000c;
        local_70 = 8;
        local_78 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar3 = *(longlong *)(param_2 + 0x430);
        if (lVar3 == 0) goto LAB_1414d6172;
      }
      if ((((DAT_14cae9568 != 0) && (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 != 0)) &&
          (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30)) {
        FUN_1413f457a(param_1,&local_28,*(undefined4 *)(lVar3 + 0xe0));
        if ((local_28 != (code *)0x0) && (local_28[0x18] == (code)0x1)) {
          FUN_141529848(param_1);
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
      }
    }
  }
LAB_1414d6172:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414d62bc FUN_1414d62bc body=2295 status=ok
// SIG undefined FUN_1414d62bc(void)

void FUN_1414d62bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  longlong *plVar22;
  int iVar23;
  longlong *plVar24;
  int iVar25;
  bool bVar26;
  undefined1 auStack_e8 [40];
  uint *local_c0;
  uint local_b4;
  int local_b0;
  int local_ac;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = FUN_1414d6bb4(param_1,param_3);
  plVar5 = (longlong *)FUN_145bdcffc(uVar4,param_2);
  if (plVar5 != (longlong *)0x0) {
    local_98 = plVar5 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = local_98;
    if ((int)plVar5[5] == 0) {
      uVar12 = 1;
      local_b4 = 0xffffffff;
      iVar18 = 0;
      local_58._4_4_ = 0;
      local_90 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_90 = local_68 & 0xffffffff;
      uVar12 = local_68 >> 0x20;
      local_b4 = (uint)local_58;
      iVar18 = (int)plVar5[5];
    }
    if (local_58._4_4_ != iVar18 || local_60 != local_98) {
      local_c0 = (uint *)(param_4 + 2);
      local_88 = param_4 + 7;
      local_a8 = param_4 + 8;
      plVar24 = local_60;
      iVar15 = local_58._4_4_;
      iVar23 = local_50;
      local_b0 = iVar18;
      local_a0 = plVar5;
      local_80 = local_60;
      do {
        lVar21 = *plVar5;
        local_ac = iVar23;
        local_78 = uVar12;
        lVar6 = FUN_14018aa1e((longlong)iVar15 * 0x38 + lVar21 + 8);
        if (lVar6 != 0) {
          uVar14 = *(uint *)(lVar6 + 0xc);
          if ((int)uVar14 < DAT_14c9647dc) {
            lVar6 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          iVar18 = *(int *)(lVar6 + 0x10);
          if (*(int *)(lVar6 + 0x10) == 0) {
            LOCK();
            iVar18 = DAT_14c964868 + 1;
            UNLOCK();
            iVar23 = DAT_14c964868 + 1;
            bVar26 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar18;
            if (bVar26) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar23);
            }
            LOCK();
            iVar18 = *(int *)(lVar6 + 0x10);
            bVar26 = iVar18 == 0;
            if (bVar26) {
              *(int *)(lVar6 + 0x10) = iVar23;
              iVar18 = 0;
            }
            UNLOCK();
            if (bVar26) {
              iVar18 = iVar23;
            }
          }
          if (*(int *)((longlong)param_4 + 0x34) == 0) {
            iVar23 = (int)param_4[1];
            *(int *)(param_4 + 1) = iVar23 + 1;
            if (*(int *)((longlong)param_4 + 0xc) == iVar23) {
              FUN_1403951a8(param_4,iVar23);
            }
            iVar9 = (int)param_4[5];
            if (iVar9 == 0) {
              iVar3 = -1;
            }
            else {
              iVar3 = iVar9 + 0x1e;
              if (-1 < iVar9 + -1) {
                iVar3 = iVar9 + -1;
              }
              iVar3 = iVar3 >> 5;
            }
            iVar10 = iVar9 + 1;
            iVar25 = iVar9 + 0x1f;
            if (-1 < iVar9) {
              iVar25 = iVar9;
            }
            if (iVar25 >> 5 == iVar3) {
              *(int *)(param_4 + 5) = iVar10;
            }
            else {
              if (*(int *)((longlong)param_4 + 0x2c) <= iVar9) {
                if (iVar9 + 0x20U < 0xa0) {
                  iVar10 = 0x80;
                  iVar3 = iVar9;
                }
                else {
                  uVar20 = iVar9 + 0x20U >> 5;
                  local_70 = (ulonglong)uVar20;
                  if (*(int *)((longlong)param_4 + 0x2c) + 0x1fU < 0xa0) {
                    uVar17 = 4;
                    if (4 < uVar20) {
                      uVar17 = uVar20;
                    }
                  }
                  else {
                    uVar17 = (uVar20 * 3 >> 3) + uVar20 + 0x10;
                  }
                  uVar12 = FUN_144a3809e(uVar17 << 2,0);
                  iVar3 = (int)(uVar12 >> 2);
                  iVar10 = -0x20;
                  if ((int)local_70 <= iVar3) {
                    iVar10 = iVar3 << 5;
                  }
                  iVar3 = (int)param_4[5];
                }
                *(int *)((longlong)param_4 + 0x2c) = iVar10;
                FUN_1446efbd8(local_c0,iVar3);
                iVar10 = (int)param_4[5] + 1;
              }
              iVar3 = iVar10 + 0x1f;
              if (-1 < iVar10) {
                iVar3 = iVar10;
              }
              *(int *)(param_4 + 5) = iVar10;
              if (iVar10 % 0x20 != 0) {
                puVar11 = (uint *)param_4[4];
                if ((uint *)param_4[4] == (uint *)0x0) {
                  puVar11 = local_c0;
                }
                bVar8 = -(char)(iVar10 % 0x20);
                puVar11[iVar3 >> 5] = (puVar11[iVar3 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
              }
            }
            lVar6 = (longlong)iVar23;
            puVar11 = (uint *)param_4[4];
            if ((uint *)param_4[4] == (uint *)0x0) {
              puVar11 = local_c0;
            }
            bVar8 = (byte)iVar9 & 0x1f;
            puVar11[iVar25 >> 5] =
                 puVar11[iVar25 >> 5] & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
          }
          else {
            iVar23 = (int)param_4[6];
            lVar6 = (longlong)iVar23;
            iVar9 = *(int *)(*param_4 + 4 + lVar6 * 0x18);
            *(int *)(param_4 + 6) = iVar9;
            iVar3 = *(int *)((longlong)param_4 + 0x34) + -1;
            *(int *)((longlong)param_4 + 0x34) = iVar3;
            if (iVar3 != 0) {
              *(undefined4 *)(*param_4 + (longlong)iVar9 * 0x18) = 0xffffffff;
            }
          }
          plVar24 = local_80;
          plVar7 = local_88;
          plVar5 = local_a0;
          puVar11 = (uint *)param_4[4];
          if ((uint *)param_4[4] == (uint *)0x0) {
            puVar11 = local_c0;
          }
          iVar9 = iVar23 + 0x1f;
          if (-1 < iVar23) {
            iVar9 = iVar23;
          }
          puVar11[iVar9 >> 5] = puVar11[iVar9 >> 5] | 1 << ((byte)iVar23 & 0x1f);
          plVar13 = (longlong *)(*param_4 + lVar6 * 0x18);
          lVar21 = *(longlong *)(lVar21 + (longlong)iVar15 * 0x38);
          *plVar13 = lVar21;
          plVar13[1] = CONCAT44(iVar18,uVar14);
          *(undefined4 *)(plVar13 + 2) = 0xffffffff;
          uVar14 = (uint)((ulonglong)lVar21 >> 0x10);
          uVar20 = (uint)lVar21 & 0xffff;
          uVar14 = ((uint)lVar21 << 0x10 | uVar20) + (int)((ulonglong)lVar21 >> 0x20) +
                   (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar20 >> 4);
          uVar20 = (int)param_4[1] - *(int *)((longlong)param_4 + 0x34);
          if ((uVar20 != 0) && (uVar20 != 1)) {
            plVar22 = (longlong *)param_4[8];
            if ((longlong *)param_4[8] == (longlong *)0x0) {
              plVar22 = local_88;
            }
            iVar18 = *(int *)((longlong)plVar22 + (ulonglong)((int)param_4[9] - 1U & uVar14) * 4);
            if (iVar18 != -1) {
              do {
                plVar22 = (longlong *)(*param_4 + (longlong)iVar18 * 0x18);
                if (*plVar22 == lVar21) {
                  uVar1 = *(undefined4 *)((longlong)plVar13 + 4);
                  lVar21 = plVar13[1];
                  uVar2 = *(undefined4 *)((longlong)plVar13 + 0xc);
                  *(int *)plVar22 = (int)*plVar13;
                  *(undefined4 *)((longlong)plVar22 + 4) = uVar1;
                  *(int *)(plVar22 + 1) = (int)lVar21;
                  *(undefined4 *)((longlong)plVar22 + 0xc) = uVar2;
                  FUN_1487be584(param_4,iVar23);
                  plVar5 = local_a0;
                  goto LAB_1414d65f4;
                }
                iVar18 = (int)plVar22[2];
              } while (iVar18 != -1);
            }
          }
          uVar17 = 1;
          if (3 < uVar20) {
            uVar12 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
            lVar21 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            uVar17 = 1 << ((byte)lVar21 & 0x1f);
          }
          if (((int)uVar20 < 1) || ((int)uVar17 <= (int)param_4[9])) {
            uVar14 = (int)param_4[9] - 1U & uVar14;
            *(uint *)((longlong)plVar13 + 0x14) = uVar14;
            plVar7 = (longlong *)param_4[8];
            if ((longlong *)param_4[8] == (longlong *)0x0) {
              plVar7 = local_88;
            }
            *(undefined4 *)(plVar13 + 2) =
                 *(undefined4 *)
                  ((longlong)plVar7 + ((longlong)(int)param_4[9] - 1U & (longlong)(int)uVar14) * 4);
            plVar7 = (longlong *)param_4[8];
            if ((longlong *)param_4[8] == (longlong *)0x0) {
              plVar7 = local_88;
            }
            *(int *)((longlong)plVar7 + ((longlong)(int)param_4[9] - 1U & (longlong)(int)uVar14) * 4
                    ) = iVar23;
          }
          else {
            *(uint *)(param_4 + 9) = uVar17;
            if (param_4[8] != 0) {
              FUN_1446efa72(local_a8,0,0,4);
              uVar17 = *(uint *)(param_4 + 9);
            }
            if (uVar17 == 1) {
              if (*local_a8 != 0) {
                FUN_1446efa72(local_a8,0,0,4);
              }
LAB_1414d66f2:
              uVar14 = 0;
              do {
                plVar13 = (longlong *)param_4[8];
                if ((longlong *)param_4[8] == (longlong *)0x0) {
                  plVar13 = plVar7;
                }
                *(undefined4 *)
                 ((longlong)plVar13 + (ulonglong)((int)param_4[9] + 0x7fffffffU & uVar14) * 4) =
                     0xffffffff;
                uVar14 = uVar14 + 1;
              } while (uVar17 != uVar14);
            }
            else {
              if (uVar17 == 0) goto LAB_1414d65f4;
              FUN_1446efa72(local_a8,0,uVar17,4);
              if (0 < (int)uVar17) goto LAB_1414d66f2;
            }
            iVar18 = (int)param_4[5];
            if (iVar18 == 0) {
              uVar12 = 0;
              uVar16 = 1;
              iVar15 = 0;
              iVar23 = 0;
            }
            else {
              puVar11 = (uint *)param_4[4];
              if ((uint *)param_4[4] == (uint *)0x0) {
                puVar11 = local_c0;
              }
              uVar14 = *puVar11;
              if (uVar14 == 0) {
                iVar15 = iVar18 + 0x1e;
                if (-1 < iVar18 + -1) {
                  iVar15 = iVar18 + -1;
                }
                uVar12 = 0;
                uVar16 = (ulonglong)(uint)(iVar15 >> 5);
                if (iVar15 >> 5 < 1) {
                  uVar16 = uVar12;
                }
                iVar23 = 0;
                do {
                  if (uVar16 == uVar12) goto LAB_1414d65f4;
                  iVar23 = iVar23 + 0x20;
                  uVar14 = puVar11[uVar12 + 1];
                  uVar12 = uVar12 + 1;
                } while (uVar14 == 0);
              }
              else {
                uVar12 = 0;
                iVar23 = 0;
              }
              uVar16 = (ulonglong)(-uVar14 & uVar14);
              uVar19 = uVar16 * 2 + 1;
              lVar21 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              iVar15 = (iVar23 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
              if (iVar18 <= iVar15) {
                iVar15 = iVar18;
              }
            }
            if (iVar15 < iVar18) {
              uVar14 = 0xffffffff;
              do {
                lVar21 = *param_4;
                lVar6 = (longlong)iVar15;
                uVar4 = *(undefined8 *)(lVar21 + lVar6 * 0x18);
                uVar20 = (uint)((ulonglong)uVar4 >> 0x10);
                uVar17 = (uint)uVar4 & 0xffff;
                uVar19 = (longlong)
                         (int)(((uint)uVar4 << 0x10 | uVar17) + (int)((ulonglong)uVar4 >> 0x20) +
                               (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar17 >> 4)) &
                         (longlong)(int)param_4[9] - 1U;
                iVar18 = (int)uVar19;
                *(int *)(lVar21 + 0x14 + lVar6 * 0x18) = iVar18;
                plVar7 = (longlong *)param_4[8];
                if ((longlong *)param_4[8] == (longlong *)0x0) {
                  plVar7 = local_88;
                }
                *(undefined4 *)(lVar21 + 0x10 + lVar6 * 0x18) =
                     *(undefined4 *)
                      ((longlong)plVar7 + ((longlong)(int)param_4[9] - 1U & uVar19) * 4);
                plVar7 = (longlong *)param_4[8];
                if ((longlong *)param_4[8] == (longlong *)0x0) {
                  plVar7 = local_88;
                }
                *(int *)((longlong)plVar7 + ((longlong)iVar18 & (longlong)(int)param_4[9] - 1U) * 4)
                     = iVar15;
                uVar14 = ~(uint)uVar16 & uVar14;
                puVar11 = (uint *)param_4[4];
                if ((uint *)param_4[4] == (uint *)0x0) {
                  puVar11 = local_c0;
                }
                iVar18 = (int)param_4[5];
                iVar15 = (int)uVar12;
                lVar21 = (longlong)iVar15;
                uVar20 = puVar11[lVar21] & uVar14;
                if (uVar20 == 0) {
                  iVar9 = iVar18 + 0x1e;
                  if (-1 < iVar18 + -1) {
                    iVar9 = iVar18 + -1;
                  }
                  iVar9 = iVar9 >> 5;
                  iVar3 = iVar9;
                  if (iVar9 < iVar15) {
                    iVar3 = iVar15;
                  }
                  if (iVar9 <= iVar15) break;
                  lVar6 = 0;
                  while( true ) {
                    iVar23 = iVar23 + 0x20;
                    uVar20 = puVar11[lVar21 + lVar6 + 1];
                    if (uVar20 != 0) break;
                    lVar6 = lVar6 + 1;
                    if (iVar3 - lVar21 == lVar6) goto LAB_1414d65f4;
                  }
                  uVar12 = (ulonglong)(iVar15 + (int)lVar6 + 1);
                  uVar14 = 0xffffffff;
                }
                uVar16 = (ulonglong)(-uVar20 & uVar20);
                uVar19 = uVar16 * 2 + 1;
                lVar21 = 0x3f;
                if (uVar19 != 0) {
                  for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                  }
                }
                iVar15 = (iVar23 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
              } while (iVar15 < iVar18);
            }
          }
        }
LAB_1414d65f4:
        local_b4 = local_b4 & ~(uint)local_78;
        plVar7 = (longlong *)plVar24[2];
        if ((longlong *)plVar24[2] == (longlong *)0x0) {
          plVar7 = plVar24;
        }
        iVar18 = (int)plVar24[3];
        iVar15 = (int)local_90;
        lVar21 = (longlong)iVar15;
        uVar14 = *(uint *)((longlong)plVar7 + lVar21 * 4) & local_b4;
        iVar23 = local_ac;
        if (uVar14 == 0) {
          iVar9 = iVar18 + 0x1e;
          if (-1 < iVar18 + -1) {
            iVar9 = iVar18 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar23 = local_ac + 0x20;
          iVar3 = iVar9;
          if (iVar9 < iVar15) {
            iVar3 = iVar15;
          }
          if (iVar15 < iVar9) {
            lVar6 = 0;
            do {
              uVar14 = *(uint *)((longlong)plVar7 + lVar6 * 4 + lVar21 * 4 + 4);
              if (uVar14 != 0) {
                local_90 = (ulonglong)(iVar15 + (int)lVar6 + 1);
                local_b4 = 0xffffffff;
                goto LAB_1414d6675;
              }
              iVar23 = iVar23 + 0x20;
              lVar6 = lVar6 + 1;
            } while (iVar3 - lVar21 != lVar6);
            local_b4 = 0xffffffff;
            iVar15 = iVar3;
          }
          local_90 = (ulonglong)(iVar15 + 1);
          uVar12 = local_78;
          plVar5 = local_a0;
          plVar24 = local_80;
          iVar15 = iVar18;
        }
        else {
LAB_1414d6675:
          uVar12 = (ulonglong)(-uVar14 & uVar14);
          uVar16 = uVar12 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar15 = (iVar23 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if (iVar18 <= iVar15) {
            iVar15 = iVar18;
          }
        }
      } while (iVar15 != local_b0 || plVar24 != local_98);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414d6bb4 FUN_1414d6bb4 body=188 status=ok
// SIG undefined FUN_1414d6bb4(void)

longlong FUN_1414d6bb4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x130) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x128);
    lVar4 = (longlong)*(int *)(param_1 + 0x130) * 0xc0 + lVar2;
    do {
      if ((longlong)*(int *)(lVar2 + 0xa8) == 0) {
        return lVar2;
      }
      plVar3 = *(longlong **)(lVar2 + 0xa0);
      plVar1 = plVar3 + *(int *)(lVar2 + 0xa8);
      while( true ) {
        if ((int)param_2[1] != 0) {
          lVar5 = 0;
          do {
            if (*(longlong *)(*param_2 + lVar5) == *plVar3) goto LAB_1414d6c46;
            lVar5 = lVar5 + 8;
          } while ((longlong)(int)param_2[1] << 3 != lVar5);
        }
        if ((longlong)(int)param_2[3] == 0) break;
        lVar5 = 0;
        while (*(longlong *)(param_2[2] + lVar5) != *plVar3) {
          lVar5 = lVar5 + 8;
          if ((longlong)(int)param_2[3] * 8 == lVar5) goto LAB_1414d6c51;
        }
LAB_1414d6c46:
        plVar3 = plVar3 + 1;
        if (plVar3 == plVar1) {
          return lVar2;
        }
      }
LAB_1414d6c51:
      lVar2 = lVar2 + 0xc0;
    } while (lVar2 != lVar4);
  }
  return param_1 + 0x88;
}



// FUNCTION 1414d6c70 FUN_1414d6c70 body=771 status=ok
// SIG undefined FUN_1414d6c70(void)

void FUN_1414d6c70(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar16 = *(uint *)(param_1 + 9);
  if (uVar16 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar16 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar16,4);
    if ((int)uVar16 < 1) goto LAB_1414d6cd6;
  }
  uVar4 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
         0xffffffff;
    uVar4 = uVar4 + 1;
  } while (uVar16 != uVar4);
LAB_1414d6cd6:
  iVar10 = (int)param_1[5];
  if (iVar10 == 0) {
    uVar14 = 0;
    uVar17 = 1;
    iVar13 = 0;
    iVar12 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 2);
    }
    uVar16 = *puVar9;
    if (uVar16 == 0) {
      iVar12 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar12 = iVar10 + -1;
      }
      uVar14 = 0;
      uVar17 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar17 = uVar14;
      }
      iVar12 = 0;
      do {
        if (uVar17 == uVar14) {
          return;
        }
        iVar12 = iVar12 + 0x20;
        uVar16 = puVar9[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar14 = 0;
      iVar12 = 0;
    }
    uVar17 = (ulonglong)(-uVar16 & uVar16);
    uVar11 = uVar17 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar13 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar10 <= iVar13) {
      iVar13 = iVar10;
    }
  }
  if (iVar13 < iVar10) {
    uVar16 = 0xffffffff;
    do {
      lVar15 = *param_1;
      lVar5 = (longlong)iVar13;
      uVar11 = *(ulonglong *)(lVar15 + lVar5 * 0x18);
      plVar6 = *(longlong **)(lVar15 + 8 + lVar5 * 0x18);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      lVar15 = lVar15 + lVar5 * 0x18;
      uVar4 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      uVar11 = (longlong)(int)(uVar4 >> 0x10 ^ uVar4) & (longlong)(int)param_1[9] - 1U;
      iVar10 = (int)uVar11;
      *(int *)(lVar15 + 0x14) = iVar10;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar15 + 0x10) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar16 = uVar16 & ~(uint)uVar17;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 2);
      }
      iVar10 = (int)param_1[5];
      iVar13 = (int)uVar14;
      lVar15 = (longlong)iVar13;
      uVar4 = puVar9[lVar15] & uVar16;
      if (uVar4 == 0) {
        iVar7 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar7 = iVar10 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar13) {
          iVar8 = iVar13;
        }
        if (iVar7 <= iVar13) {
          return;
        }
        lVar5 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar4 = puVar9[lVar15 + lVar5 + 1];
          if (uVar4 != 0) break;
          lVar5 = lVar5 + 1;
          if (iVar8 - lVar15 == lVar5) {
            return;
          }
        }
        uVar14 = (ulonglong)(iVar13 + (int)lVar5 + 1);
        uVar16 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar4 & uVar4);
      uVar11 = uVar17 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar13 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar10);
  }
  return;
}



// FUNCTION 1414d6f74 FUN_1414d6f74 body=13 status=ok
// SIG undefined FUN_1414d6f74(void)

void FUN_1414d6f74(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1414d6f82 FUN_1414d6f82 body=235 status=ok
// SIG undefined FUN_1414d6f82(void)

void FUN_1414d6f82(longlong param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((param_2 != 0) && (param_1 != 0)) && (*(char *)(param_2 + 0x68) != '\x01')) &&
     ((*(longlong *)(param_1 + 0x60) != 0 && (lVar2 = FUN_145c69ae4(), lVar2 != 0)))) {
    FUN_140c5894c(local_68,param_3);
    uVar3 = (**(code **)(*(longlong *)(lVar2 + 8) + 0x30))(lVar2 + 8,param_2);
    FUN_14101bc7a(lVar2 + 8,uVar3,local_68);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar4 = (undefined8 ****)local_60[0];
      if (local_48 < 0x19) {
        ppppuVar4 = local_60;
      }
      (*pcVar1)(ppppuVar4);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60[0]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414d706e FUN_1414d706e body=10 status=ok
// SIG undefined FUN_1414d706e(void)

void FUN_1414d706e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001414d7071. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}



// FUNCTION 1414d7078 FUN_1414d7078 body=23 status=ok
// SIG undefined FUN_1414d7078(void)

void FUN_1414d7078(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18);
  param_2[1] = uVar1;
  return;
}



// FUNCTION 1414d7090 FUN_1414d7090 body=363 status=ok
// SIG undefined FUN_1414d7090(void)

void FUN_1414d7090(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + 0x48) == '\x01') &&
     (plVar3 = *(longlong **)(param_1 + 0x40), plVar3 != (longlong *)0x0)) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1414d7162;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      plStack_40 = *(longlong **)(param_1 + 0x20);
      if (plStack_40 == (longlong *)0x0) {
LAB_1414d7182:
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
        bVar8 = true;
      }
      else {
        iVar7 = (int)plStack_40[1];
        do {
          if (iVar7 == 0) goto LAB_1414d7182;
          LOCK();
          iVar6 = (int)plStack_40[1];
          bVar8 = iVar7 == iVar6;
          if (bVar8) {
            *(int *)(plStack_40 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar8);
        local_48 = *(undefined8 *)(param_1 + 0x18);
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
        bVar8 = false;
      }
      plVar5 = plStack_40;
      local_58 = param_3;
      (**(code **)(*plVar4 + 0x40))(plVar4,local_38,&local_48,param_2);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_30 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      if (!bVar8) {
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_1414d7162:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414d71fc FUN_1414d71fc body=258 status=ok
// SIG undefined FUN_1414d71fc(void)

void FUN_1414d71fc(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb09cb8) {
    FUN_144b3d300(&DAT_14cb09cb8);
    if (DAT_14cb09cb8 == -1) {
      FUN_145bdfb5a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x40;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb09c38,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1437157a3);
      _Init_thread_footer(&DAT_14cb09cb8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414d7300 FUN_1414d7300 body=180 status=ok
// SIG undefined FUN_1414d7300(void)

longlong * FUN_1414d7300(longlong *param_1,uint param_2,longlong *param_3)

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
          if (plVar2 != (longlong *)0x0) goto LAB_1414d7360;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_145bdfd4e(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_1414d7360:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1414d73b6 FUN_1414d73b6 body=137 status=ok
// SIG undefined FUN_1414d73b6(void)

undefined4 FUN_1414d73b6(void)

{
  undefined4 uVar1;
  int iVar2;
  wchar_t *_Str;
  int *in_R9;
  undefined8 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  wchar_t *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (wchar_t *)0x0;
  uStack_20 = 0;
  local_38 = in_stack_00000028;
  uVar1 = FUN_1449da20c();
  if ((char)uVar1 != '\0') {
    _Str = local_28;
    if ((int)uStack_20 == 0) {
      _Str = L"";
    }
    iVar2 = _wtoi(_Str);
    *in_R9 = iVar2;
  }
  if (local_28 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1414d7440 FUN_1414d7440 body=108 status=ok
// SIG undefined FUN_1414d7440(void)

void FUN_1414d7440(longlong param_1,int param_2,int param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_4 != '\0') {
    plVar3 = *(longlong **)(param_1 + 8);
    uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
    uVar1 = uVar1 & 0xff000000;
LAB_1414d746a:
    FUN_140635eb8(plVar3,param_2,uVar1,0);
    return;
  }
  if ((param_3 < 0) || ((DAT_14cb02a29 & 1) == 0)) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))();
    if (iVar2 != param_2) {
      plVar3 = *(longlong **)(param_1 + 8);
      uVar1 = 0x1000000;
      goto LAB_1414d746a;
    }
  }
  return;
}



// FUNCTION 1414d74ac FUN_1414d74ac body=140 status=ok
// SIG undefined FUN_1414d74ac(void)

char FUN_1414d74ac(longlong *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = FUN_14021e994();
  if (bVar1 < 2) {
    if ((param_1[100] == 0) || (*(char *)(param_1[100] + 0x12d) == '\0')) {
      FUN_140f6e9c4(param_1);
      if ((*(char *)((longlong)param_1 + 0x125) == '\0') ||
         ((*(char *)((longlong)param_1 + 0x36e) == '\x01' &&
          (cVar2 = FUN_1466278ca(param_1), cVar2 == '\0')))) {
        (**(code **)(*param_1 + 0x140))(param_1,*(undefined4 *)(param_2 + 8));
      }
      else {
        cVar2 = FUN_145be1a54(param_1);
        if (cVar2 == '\0') {
          return '\x02' - (*(char *)((longlong)param_1 + 0x125) == '\x05');
        }
      }
    }
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x02';
  }
  return cVar2;
}



// FUNCTION 1414d7538 FUN_1414d7538 body=3438 status=ok
// SIG undefined FUN_1414d7538(void)

void FUN_1414d7538(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  double *pdVar10;
  longlong lVar11;
  undefined8 uVar12;
  float *pfVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  double dVar29;
  undefined1 auStack_228 [32];
  float local_208;
  ulonglong local_1f8;
  ulonglong local_1f0;
  longlong local_1e8;
  float *local_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined8 local_1c8;
  double local_1b8;
  double dStack_1b0;
  undefined8 local_1a8;
  float local_1a0;
  float local_19c;
  double local_198;
  double local_190;
  double local_188;
  float local_180;
  float local_17c;
  longlong local_178;
  longlong *plStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  float local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220);
  if (lVar11 == 0) {
    bVar17 = false;
  }
  else {
    bVar17 = *(char *)(lVar11 + 0x130) != '\x02';
  }
  FUN_140f6f67c(param_1);
  if (((*(char *)(param_1 + 0x36f) == '\0') && (*(char *)(param_1 + 0x124) == '\x01')) &&
     (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220), lVar11 != 0)) {
    FUN_1418e647a(param_1,&local_150);
    if (((char)uStack_14c == '\0') || (*(float *)(lVar11 + 0x108) < local_150)) goto LAB_1414d761c;
LAB_1414d76ae:
    *(undefined1 *)(param_1 + 0x125) = 5;
    *(bool *)(param_1 + 0x36e) = bVar17;
    if (bVar17 != false) {
      FUN_14414de5c(param_1);
    }
    lVar11 = *(longlong *)(param_1 + 800);
    if (lVar11 != 0) {
      uVar12 = 5;
LAB_1414d77be:
      FUN_140f6f7b0(lVar11,uVar12);
    }
LAB_1414d77c3:
    *(bool *)(param_1 + 0x36f) = bVar17;
    goto LAB_1414d77c9;
  }
LAB_1414d761c:
  if (*(char *)(param_1 + 0x124) != '\x02') {
    if ((*(char *)(param_1 + 0x36f) == '\0') &&
       (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220), lVar11 != 0)) {
      FUN_1418e647a(param_1,&local_150);
      if (((char)uStack_14c != '\0') &&
         ((local_150 <= *(float *)(lVar11 + 0x108) &&
          (cVar5 = FUN_140f7032c(param_1), cVar5 != '\0')))) goto LAB_1414d76ae;
    }
    cVar5 = FUN_140f6f902(param_1);
    if (cVar5 != '\0') {
      *(undefined1 *)(param_1 + 0x125) = 2;
      *(undefined1 *)(param_1 + 0x36e) = 0;
      if (*(longlong *)(param_1 + 800) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_228);
      }
      goto LAB_1414d77c9;
    }
    if ((*(char *)(param_1 + 0x36f) == '\0') && (cVar5 = FUN_140f6fb68(param_1), cVar5 != '\0')) {
      *(undefined1 *)(param_1 + 0x125) = 2;
      *(bool *)(param_1 + 0x36e) = bVar17;
      if (bVar17 != false) {
        FUN_14414de5c(param_1);
      }
      lVar11 = *(longlong *)(param_1 + 800);
      if (lVar11 != 0) {
        uVar12 = 2;
        goto LAB_1414d77be;
      }
      goto LAB_1414d77c3;
    }
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220);
    if ((lVar11 != 0) &&
       ((*(char *)(lVar11 + 0x120) != '\x05' || (*(char *)(lVar11 + 0x13c) != '\x05')))) {
      plVar9 = (longlong *)FUN_140343d7a(param_1);
      if ((*(longlong **)(param_1 + 0x348) != (longlong *)0x0) &&
         ((((*(int *)(param_1 + 0x344) != 0 &&
            (uVar14 = *(uint *)(param_1 + 0x340), -1 < (int)uVar14)) &&
           ((int)uVar14 < DAT_14c9647dc)) &&
          (((lVar15 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8), lVar15 != 0 &&
            (*(int *)(lVar15 + 0x10) == *(int *)(param_1 + 0x344))) &&
           ((plVar9 != (longlong *)0x0 && ((*(uint *)(lVar15 + 8) & 0x10200000) == 0)))))))) {
        lVar15 = (**(code **)(**(longlong **)(param_1 + 0x348) + 0x18))();
        if (lVar15 == 0) {
          local_178 = 0;
          plStack_170 = (longlong *)0x0;
LAB_1414d7db9:
          bVar17 = false;
        }
        else {
          FUN_1448c1924(lVar15,&local_178);
          if (local_178 == 0) goto LAB_1414d7db9;
          local_d0 = (float *)0x0;
          local_c8 = 0x1000000000;
          FUN_148d34dba(local_178,&local_150);
          bVar17 = false;
          if (1 < (int)local_c8) {
            local_17c = 0.0;
            local_180 = 0.0;
            (**(code **)(*plVar9 + 0x528))(plVar9);
            lVar15 = plVar9[0x39];
            if (lVar15 == 0) {
              local_158 = DAT_14c8464f0;
              local_168 = DAT_14c8464e0;
              dStack_160 = DAT_14c8464e8;
              uVar20 = 0;
              uVar21 = 0;
              uVar22 = 0;
              uVar23 = 0;
              dVar24 = 0.0;
              dVar27 = 1.0;
            }
            else {
              local_168 = *(double *)(lVar15 + 0x260);
              dStack_160 = *(double *)(lVar15 + 0x268);
              local_158 = *(double *)(lVar15 + 0x270);
              uVar20 = *(undefined4 *)(lVar15 + 0x240);
              uVar21 = *(undefined4 *)(lVar15 + 0x244);
              uVar22 = *(undefined4 *)(lVar15 + 0x248);
              uVar23 = *(undefined4 *)(lVar15 + 0x24c);
              dVar24 = *(double *)(lVar15 + 0x250);
              dVar27 = *(double *)(lVar15 + 600);
            }
            dVar26 = (double)CONCAT44(uVar23,uVar22);
            dVar29 = (double)CONCAT44(uVar21,uVar20) * 0.0;
            dVar3 = dVar24 - dVar29;
            dVar29 = dVar29 - dVar26;
            dVar25 = (double)CONCAT44(uVar23,uVar22) * 0.0 + dVar24 * -0.0;
            dVar29 = dVar29 + dVar29;
            dVar3 = dVar3 + dVar3;
            dVar25 = dVar25 + dVar25;
            local_188 = ((double)CONCAT44(uVar21,uVar20) * dVar3 - dVar25 * dVar26) +
                        dVar27 * dVar29 + 0.0;
            local_190 = (dVar24 * dVar25 - dVar29 * (double)CONCAT44(uVar21,uVar20)) +
                        dVar27 * dVar3 + 0.0;
            local_198 = (dVar26 * dVar29 - dVar3 * dVar24) + dVar27 * dVar25 + 1.0;
            pfVar13 = &local_150;
            if (local_d0 != (float *)0x0) {
              pfVar13 = local_d0;
            }
            bVar17 = false;
            if ((longlong)(int)local_c8 != 0) {
              local_1e0 = pfVar13 + (longlong)(int)local_c8 * 2;
              local_1e8 = param_1 + 0x330;
              do {
                plVar2 = *(longlong **)pfVar13;
                if (plVar2 != plVar9 && plVar2 != (longlong *)0x0) {
                  local_19c = 0.0;
                  local_1a0 = 0.0;
                  (**(code **)(*plVar2 + 0x528))(plVar2,&local_19c,&local_1a0);
                  fVar28 = local_180;
                  fVar19 = local_19c;
                  fVar18 = local_1a0;
                  lVar15 = plVar2[0x39];
                  if (lVar15 == 0) {
                    uVar20 = SUB84(DAT_14c8464f0,0);
                    uVar21 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                    pdVar10 = &DAT_14c8464e0;
                  }
                  else {
                    uVar20 = (undefined4)*(undefined8 *)(lVar15 + 0x270);
                    uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x270) >> 0x20);
                    pdVar10 = (double *)(lVar15 + 0x260);
                  }
                  dVar27 = *pdVar10;
                  dVar26 = pdVar10[1];
                  dVar24 = pdVar10[1];
                  local_1a8 = CONCAT44(uVar21,uVar20);
                  local_1b8 = dVar27;
                  dStack_1b0 = dVar26;
                  switch(*(undefined1 *)(lVar11 + 0x120)) {
                  case 0:
switchD_1414d803a_caseD_0:
                    dVar3 = dVar24 - dStack_160;
                    dVar25 = (double)CONCAT44(uVar21,uVar20) - local_158;
                    if ((((float)SQRT(dVar25 * dVar25 +
                                      dVar3 * dVar3 + (dVar27 - local_168) * (dVar27 - local_168)) -
                         local_17c) - local_19c <= *(float *)(lVar11 + 0x124)) &&
                       (ABS((float)(local_158 - (double)CONCAT44(uVar21,uVar20))) <=
                        local_1a0 + local_180)) {
                      local_208 = local_19c;
                      cVar5 = FUN_148d34ce0(&local_168,&switchD_1414d803a::switchdataD_14b972fa4,
                                            &local_198,&local_1b8);
                      if (cVar5 != '\0') {
                        bVar17 = true;
                        goto LAB_1414d835c;
                      }
                    }
                    break;
                  case 1:
                    if (local_180 <= local_1a0) goto switchD_1414d803a_caseD_0;
                    break;
                  case 2:
                    if (local_180 < local_1a0) goto switchD_1414d803a_caseD_0;
                    break;
                  case 3:
                    if (local_1a0 < local_180) goto switchD_1414d803a_caseD_0;
                    break;
                  case 4:
                    if (local_1a0 <= local_180) goto switchD_1414d803a_caseD_0;
                  }
                  if ((longlong)*(int *)(param_1 + 0x338) != 0) {
                    lVar15 = *(longlong *)(param_1 + 0x330);
                    lVar16 = (longlong)*(int *)(param_1 + 0x338) << 3;
                    do {
                      cVar5 = FUN_14069eaf4(lVar15,plVar2);
                      if (cVar5 != '\0') goto switchD_1414d816f_default;
                      lVar15 = lVar15 + 8;
                      lVar16 = lVar16 + -8;
                      fVar19 = local_19c;
                      fVar18 = local_1a0;
                      fVar28 = local_180;
                    } while (lVar16 != 0);
                  }
                  local_1c8 = CONCAT44(uVar21,uVar20);
                  local_1d8 = dVar27;
                  dStack_1d0 = dVar26;
                  switch(*(undefined1 *)(lVar11 + 0x13c)) {
                  case 0:
switchD_1414d816f_caseD_0:
                    dVar24 = dVar24 - dStack_160;
                    dVar26 = (double)CONCAT44(uVar21,uVar20) - local_158;
                    if (((((float)SQRT(dVar26 * dVar26 +
                                       dVar24 * dVar24 + (dVar27 - local_168) * (dVar27 - local_168)
                                      ) - local_17c) - fVar19 <= *(float *)(lVar11 + 0x140)) &&
                        (ABS((float)(local_158 - (double)CONCAT44(uVar21,uVar20))) <=
                         fVar18 + fVar28)) &&
                       (local_208 = fVar19,
                       cVar5 = FUN_148d34ce0(&local_168,local_17c,&local_198,&local_1d8),
                       cVar5 != '\0')) {
                      uVar14 = *(uint *)((longlong)plVar2 + 0xc);
                      local_1f0 = (ulonglong)uVar14;
                      if ((int)uVar14 < DAT_14c9647dc) {
                        lVar15 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
                      }
                      else {
                        lVar15 = 0;
                      }
                      local_1f8 = (ulonglong)*(uint *)(lVar15 + 0x10);
                      if (*(uint *)(lVar15 + 0x10) == 0) {
                        LOCK();
                        iVar7 = DAT_14c964868 + 1;
                        UNLOCK();
                        uVar14 = DAT_14c964868 + 1;
                        bVar17 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar7;
                        if (bVar17) {
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,uVar14);
                        }
                        LOCK();
                        uVar8 = *(uint *)(lVar15 + 0x10);
                        bVar17 = uVar8 == 0;
                        if (bVar17) {
                          *(uint *)(lVar15 + 0x10) = uVar14;
                          uVar8 = 0;
                        }
                        UNLOCK();
                        if (bVar17) {
                          uVar8 = uVar14;
                        }
                        local_1f8 = (ulonglong)uVar8;
                      }
                      iVar7 = *(int *)(param_1 + 0x338);
                      *(uint *)(param_1 + 0x338) = iVar7 + 1U;
                      if (*(uint *)(param_1 + 0x33c) < iVar7 + 1U) {
                        FUN_140155462(local_1e8,iVar7);
                      }
                      *(ulonglong *)(*(longlong *)(param_1 + 0x330) + (longlong)iVar7 * 8) =
                           (local_1f8 << 0x20) + local_1f0;
                      FUN_148d34e38(param_1,plVar2);
                    }
                    break;
                  case 1:
                    if (fVar28 <= fVar18) goto switchD_1414d816f_caseD_0;
                    break;
                  case 2:
                    if (fVar28 < fVar18) goto switchD_1414d816f_caseD_0;
                    break;
                  case 3:
                    if (fVar18 < fVar28) goto switchD_1414d816f_caseD_0;
                    break;
                  case 4:
                    if (fVar18 <= fVar28) goto switchD_1414d816f_caseD_0;
                  }
                }
switchD_1414d816f_default:
                pfVar13 = pfVar13 + 2;
              } while (pfVar13 != local_1e0);
              bVar17 = false;
            }
          }
LAB_1414d835c:
          if (local_d0 != (float *)0x0) {
            FUN_1400020a8();
          }
        }
        plVar9 = plStack_170;
        if (plStack_170 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_170 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_170)(plStack_170);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        if (bVar17) {
          *(undefined1 *)(param_1 + 0x125) = 4;
          *(undefined1 *)(param_1 + 0x36e) = 0;
          if (*(longlong *)(param_1 + 800) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_228);
          }
          goto LAB_1414d77c9;
        }
      }
    }
    plVar9 = *(longlong **)(param_1 + 0xf0);
    if (plVar9 == (longlong *)0x0) goto LAB_1414d7b8d;
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220);
    iVar7 = (int)plVar9[1];
    do {
      if (iVar7 == 0) goto LAB_1414d7b8d;
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar17 = iVar7 == iVar4;
      if (bVar17) {
        *(int *)(plVar9 + 1) = iVar7 + 1;
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      UNLOCK();
    } while (!bVar17);
    cVar5 = '\0';
    if (lVar11 == 0) {
LAB_1414d7da6:
      cVar5 = '\0';
      bVar6 = 0;
    }
    else {
      lVar15 = *(longlong *)(param_1 + 0xe8);
      bVar6 = 0;
      if (lVar15 != 0) {
        uVar14 = *(uint *)(lVar15 + 0x250);
        plVar2 = *(longlong **)(lVar15 + 0x488);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
          UNLOCK();
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        if (0x14 < uVar14) goto LAB_1414d7da6;
        fVar18 = (float)*(double *)(lVar15 + 0x4d8) * 0.017453292;
        fVar18 = (float)(longlong)
                        (fVar18 * 0.15915494 +
                        *(float *)(&DAT_14a184448 + (ulonglong)(fVar18 < 0.0) * 4)) * -6.2831855 +
                 fVar18;
        if (1.5707964 < fVar18) {
          fVar19 = 3.1415927;
LAB_1414d7962:
          fVar18 = fVar19 - fVar18;
          fVar19 = -1.0;
        }
        else {
          if (fVar18 < -1.5707964) {
            fVar19 = -3.1415927;
            goto LAB_1414d7962;
          }
          fVar19 = 1.0;
        }
        fVar28 = fVar18 * fVar18;
        local_168 = (double)*(float *)(lVar11 + 0x11c);
        local_158 = local_168 * 0.0;
        dStack_160 = (double)((((((fVar28 * -2.3889859e-08 + 2.7525562e-06) * fVar28 +
                                 -0.00019840874) * fVar28 + 0.008333331) * fVar28 + -0.16666667) *
                               fVar28 + 1.0) * fVar18) * local_168;
        local_168 = (double)((((((fVar28 * -2.6051615e-07 + 2.4760495e-05) * fVar28 + -0.0013888378)
                                * fVar28 + 0.041666638) * fVar28 + -0.5) * fVar28 + 1.0) * fVar19) *
                    local_168;
        local_f8 = 0xffffffffffffffff;
        uStack_f0 = 0xffffffff;
        uStack_ec = 0xffffffff;
        local_148 = *(undefined4 *)(lVar15 + 0x250);
        uStack_14c = *(undefined4 *)(lVar15 + 0x5d4);
        local_150 = *(float *)(lVar15 + 0x5d0);
        local_140 = *(undefined8 *)(lVar15 + 0x480);
        local_138 = *(longlong **)(lVar15 + 0x488);
        if (local_138 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_138 + 0xc) = *(int *)((longlong)local_138 + 0xc) + 1;
          UNLOCK();
        }
        local_130 = *(undefined8 *)(lVar15 + 0x440);
        if (*(int *)(lVar15 + 0x260) == 1) {
          local_f8 = *(undefined8 *)(lVar15 + 600);
        }
        local_118 = *(double *)(lVar15 + 0x278);
        local_128 = *(undefined4 *)(lVar15 + 0x268);
        uStack_124 = *(undefined4 *)(lVar15 + 0x26c);
        uStack_120 = *(undefined4 *)(lVar15 + 0x270);
        uStack_11c = *(undefined4 *)(lVar15 + 0x274);
        local_100 = local_158 + local_118;
        local_108 = dStack_160 + *(double *)(lVar15 + 0x270);
        local_110 = local_168 + *(double *)(lVar15 + 0x268);
        cVar5 = '\0';
        bVar6 = FUN_14038d3af(&local_150,0,0);
        if (bVar6 == 0) {
          cVar5 = FUN_148d34f6a(param_1,&local_168);
        }
        if (local_138 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_138 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_138 + 0x10))();
          }
        }
        bVar6 = bVar6 ^ 1;
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
    if (bVar6 == 0) {
LAB_1414d7b8d:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_228);
    }
    if (cVar5 == '\0') {
      *(undefined1 *)(param_1 + 0x125) = 3;
      *(undefined1 *)(param_1 + 0x36e) = 0;
      if (*(longlong *)(param_1 + 800) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_228);
      }
      goto LAB_1414d77c9;
    }
  }
  *(undefined1 *)(param_1 + 0x125) = 1;
  *(undefined1 *)(param_1 + 0x36e) = 0;
  if (*(longlong *)(param_1 + 800) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_228);
  }
LAB_1414d77c9:
  if ((local_c0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414d837c FUN_1414d837c body=51 status=ok
// SIG undefined FUN_1414d837c(void)

undefined8 FUN_1414d837c(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar2);
      if ((lVar1 != 0) && (*(char *)(lVar1 + 0x40) == param_2)) {
        return 1;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x48) * 0x10 != lVar2);
  }
  return 0;
}



// FUNCTION 1414d83b0 FUN_1414d83b0 body=127 status=ok
// SIG undefined FUN_1414d83b0(void)

undefined8 * FUN_1414d83b0(undefined8 *param_1)

{
  FUN_144805d84();
  *param_1 = &PTR_FUN_14b508d60;
  param_1[5] = &PTR_FUN_14b5091f0;
  param_1[6] = &PTR_LAB_14b509230;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return param_1;
}



// FUNCTION 1414d842f FUN_1414d842f body=62 status=ok
// SIG undefined FUN_1414d842f(void)

undefined8 FUN_1414d842f(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140425b2f();
  if (lVar1 != 0) {
    uVar2 = FUN_140fbfb94(lVar1,param_1,param_2,param_3);
    return uVar2;
  }
  return 1;
}



// FUNCTION 1414d846e FUN_1414d846e body=183 status=ok
// SIG undefined FUN_1414d846e(void)

longlong FUN_1414d846e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x28c0) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x28c0) + 0x595) != '\x03')) {
    if ((*(longlong *)(param_1 + 0x168) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x168), lVar1 != 0)) {
      lVar2 = FUN_144a5dd5e();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         ((*(byte *)(*(longlong *)(param_1 + 0x168) + 0x60) & 4) != 0)) {
        return lVar1;
      }
    }
  }
  else if ((*(longlong **)(param_1 + 0x2680) != (longlong *)0x0) &&
          (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x2680) + 0x5d8))(), lVar1 != 0)) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1414d8526 FUN_1414d8526 body=274 status=ok
// SIG undefined FUN_1414d8526(void)

void FUN_1414d8526(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar4 = (longlong *)(param_1 + 0x450);
  cVar3 = (**(code **)(*(longlong *)(param_1 + 0x450) + 0x58))(plVar4);
  if (cVar3 == '\0') {
    if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146620ffa(param_1);
    return;
  }
  cVar3 = (**(code **)(*plVar4 + 0x60))(plVar4);
  if (cVar3 != '\0') {
LAB_1414d8623:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if (((*(longlong *)(param_1 + 0x28c0) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x28c0) + 0x2ba) == '\x01')) &&
     (lVar2 = *(longlong *)(param_1 + 0x168), lVar2 != 0)) {
    uVar5 = FUN_14018b740();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar5);
    if ((plVar4 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar4 + 0x58))(plVar4), cVar3 != '\0')) goto LAB_1414d8623;
  }
  local_24 = 0;
  uVar1 = *(undefined1 *)(param_1 + 0x1d3a);
  plVar4 = (longlong *)FUN_1405c6693(param_1);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x7a0))
              (plVar4,param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,
               local_28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1414d8654 FUN_1414d8654 body=57 status=ok
// SIG undefined FUN_1414d8654(void)

void FUN_1414d8654(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b550 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b550 = FUN_140002ddd(FUN_14652c01b,uVar1,L"LootConfigDef");
  }
  return;
}



// FUNCTION 1414d868d FUN_1414d868d body=2297 status=ok
// SIG undefined FUN_1414d868d(void)

void FUN_1414d868d(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  float *pfVar16;
  ulonglong uVar17;
  undefined8 ***pppuVar18;
  undefined8 ****ppppuVar19;
  longlong *plVar20;
  float fVar21;
  undefined1 auStack_348 [32];
  undefined8 ***local_328;
  longlong local_320;
  undefined8 ***local_318;
  undefined1 *local_310;
  undefined8 local_308;
  undefined8 local_300;
  int local_2ec;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined4 local_2d4;
  longlong *local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  undefined8 ***local_2b8;
  undefined1 local_2a9;
  undefined1 local_2a8 [128];
  longlong local_228;
  undefined8 local_220;
  undefined8 ***local_218;
  ulonglong uStack_210;
  ushort local_200;
  byte local_1f8;
  undefined8 ***local_1f0 [2];
  longlong *local_1e0;
  ushort local_1d8;
  byte local_1d0;
  undefined4 local_1c8 [2];
  uint local_1c0;
  undefined1 local_1bc;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined4 local_198 [40];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_b8;
  undefined4 local_b0;
  float local_a8;
  undefined4 uStack_a4;
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if (((((param_3[0xb] == 0) || (param_2 == 0)) || (*param_3 == 0)) ||
      (((*(char *)((longlong)param_3 + 0x4c) == '\x01' && (lVar10 = param_3[10], lVar10 != 0)) &&
       ((lVar11 = FUN_14655449e(param_2), lVar11 != 0 &&
        (param_2 = FUN_1488d5a7a(lVar11,lVar10,param_2), param_2 == 0)))))) ||
     (lVar10 = FUN_14007a5e6(param_1), lVar10 == 0)) goto LAB_1414d870a;
  if (*(char *)((longlong)param_3 + 0x4c) == '\0') {
    *(undefined1 *)((longlong)param_3 + 0x4c) = 1;
    lVar11 = FUN_140cbc0d8(param_1);
    param_3[10] = lVar11;
  }
  local_2a9 = 0;
  local_228 = 0;
  local_220 = 0x800000000;
  local_328 = &local_2b8;
  local_2b8 = (undefined8 ****)0x0;
  local_2ec = FUN_143db0d60(param_1,param_3);
  lVar11 = *param_3;
  lVar2 = param_3[10];
  lVar12 = FUN_14655449e(param_2);
  local_2e0 = lVar2;
  local_2c8 = lVar10;
  local_2c0 = param_1;
  if (lVar12 == 0) {
LAB_1414d87e6:
    local_1c0 = 0;
    local_1bc = 0;
    local_f8 = 0;
    local_f0 = 0x800000000;
    local_e0 = 0;
    local_d8 = 0;
    uStack_d4 = 0x20;
    uStack_d0 = 0xffffffff;
    uStack_cc = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_2e8 = param_4;
    local_2d0 = param_3;
    FUN_145c0ff9c(local_1b8,*(undefined4 *)(param_2 + 0x20));
    uVar13 = FUN_140cc62c2();
    local_2d4 = FUN_140cc6280(uVar13);
    if ((longlong)*(int *)(param_2 + 0x20) != 0) {
      ppppuVar19 = *(undefined8 *****)(param_2 + 0x18);
      ppppuVar14 = ppppuVar19 + (longlong)*(int *)(param_2 + 0x20) * 0x14;
      do {
        if (0 < (longlong)*(int *)(ppppuVar19 + 0xc)) {
          lVar10 = (longlong)*(int *)(ppppuVar19 + 0xc) * 0x110;
          pppuVar18 = ppppuVar19[0xb] + 0x18;
          do {
            local_1f0[0] = (undefined8 ***)((ulonglong)local_1f0[0] & 0xffffffffffffff00);
            local_1c8[0] = 0;
            FUN_1456bb102(local_1f0,lVar11);
            FUN_1448729ea(pppuVar18,&local_a8,local_1f0);
            iVar9 = FUN_14005fbd2(&local_a8,0);
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
            if (pcVar3 != (code *)0x0) {
              pfVar16 = &local_a8;
              if (0x18 < local_90) {
                pfVar16 = (float *)CONCAT44(uStack_a4,local_a8);
              }
              (*pcVar3)(pfVar16);
            }
            if (0x18 < local_90) {
              FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
            }
            FUN_1448173f8(local_1c8);
            if (((char)local_1f0[0] == '\x03') && (local_1e0 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_1e0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_1e0 + 0x10))();
              }
            }
            if (0 < iVar9 && local_2ec < iVar9) goto LAB_1414d8e66;
            local_1f0[0] = (undefined8 ***)((ulonglong)local_1f0[0] & 0xffffffffffffff00);
            local_1c8[0] = 0;
            FUN_1456bb102(local_1f0,lVar11);
            local_320 = local_2e0;
            local_328 = local_1f0;
            cVar5 = FUN_140c7b4a2(pppuVar18 + -0x17,local_2ec,local_2d4,0);
            FUN_1448173f8(local_1c8);
            if (((char)local_1f0[0] == '\x03') && (local_1e0 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_1e0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_1e0 + 0x10))();
              }
            }
            if (cVar5 == '\0') goto LAB_1414d8e66;
            pppuVar18 = pppuVar18 + 0x22;
            lVar10 = lVar10 + -0x110;
          } while (lVar10 != 0);
          local_1f0[0] = (undefined8 ***)((ulonglong)local_1f0[0] & 0xffffffffffffff00);
          local_1c8[0] = 0;
          FUN_1456bb102(local_1f0,lVar11);
          FUN_1448729ea(ppppuVar19 + 1,&local_218,local_1f0);
          if (local_1f8 == 3) {
            fVar21 = local_218._0_4_;
            bVar6 = 3;
          }
          else {
            FUN_1400b56fe(&local_a8,&local_218,3);
            fVar21 = 0.0;
            if (local_88 != 0) {
              fVar21 = local_a8;
            }
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
            if (pcVar3 != (code *)0x0) {
              pfVar16 = &local_a8;
              if (0x18 < local_90) {
                pfVar16 = (float *)CONCAT44(uStack_a4,local_a8);
              }
              (*pcVar3)(pfVar16);
            }
            bVar6 = local_1f8;
            if (0x18 < local_90) {
              FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
              bVar6 = local_1f8;
            }
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar15 = &local_218;
            if (0x18 < local_200) {
              ppppuVar15 = (undefined8 ****)local_218;
            }
            (*pcVar3)(ppppuVar15);
          }
          if (0x18 < local_200) {
            FUN_1400020a8(local_218);
          }
          FUN_1448173f8(local_1c8);
          if (((char)local_1f0[0] == '\x03') && (local_1e0 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_1e0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_1e0 + 0x10))();
            }
          }
          local_1f0[0] = ppppuVar19;
          FUN_145aa7a24(&local_1c0,fVar21,local_1f0);
        }
LAB_1414d8e66:
        ppppuVar19 = ppppuVar19 + 0x14;
      } while (ppppuVar19 != ppppuVar14);
    }
    local_1f0[0] = (undefined8 ****)0x0;
    FUN_14655432c(&local_1c0,local_1f0);
    pppuVar18 = local_1f0[0];
    local_b0 = 0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1458f9990(local_1b8);
    plVar20 = local_2d0;
    uVar13 = local_2e8;
    if ((undefined8 ****)pppuVar18 != (undefined8 ****)0x0) {
      if (*(char *)(pppuVar18 + 0x12) != '\0') {
        local_2b8 = pppuVar18 + 0xd;
      }
      local_2e0 = FUN_14088cdf8(local_2c0);
      local_218 = (undefined8 ****)0x0;
      uStack_210 = 0;
      if ((longlong)*(int *)(pppuVar18 + 0xc) == 0) {
        uVar17 = 0;
      }
      else {
        ppppuVar19 = (undefined8 ****)pppuVar18[0xb];
        lVar10 = (longlong)*(int *)(pppuVar18 + 0xc) * 0x110;
        do {
          uVar4 = uStack_210;
          FUN_14036924e(local_218,uStack_210 & 0xffffffff);
          uVar17 = uStack_210 >> 0x20;
          uStack_210 = uStack_210 & 0xffffffff00000000;
          if (((longlong)uVar4 < 0) && ((int)uVar17 != 0)) {
            FUN_1457048a4(&local_218,0);
          }
          lVar11 = *plVar20;
          uVar7 = rand();
          local_1c0 = local_1c0 & 0xffffff00;
          local_198[0] = 0;
          FUN_1456bb102(&local_1c0,lVar11);
          FUN_1448729ea(ppppuVar19 + 0xe,&local_a8,&local_1c0);
          if (local_88 == 3) {
            uVar8 = 3;
            fVar21 = local_a8;
          }
          else {
            FUN_1400b56fe(local_1f0,&local_a8,3);
            fVar21 = 0.0;
            if (local_1d0 != 0) {
              fVar21 = local_1f0[0]._0_4_;
            }
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_1d0 * 0x120));
            if (pcVar3 != (code *)0x0) {
              ppppuVar14 = local_1f0;
              if (0x18 < local_1d8) {
                ppppuVar14 = (undefined8 ****)local_1f0[0];
              }
              (*pcVar3)(ppppuVar14);
              uVar13 = local_2e8;
            }
            if (0x18 < local_1d8) {
              FUN_1400020a8(local_1f0[0]);
            }
            uVar8 = (uint)local_88;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar8 * 0x120));
          if (pcVar3 != (code *)0x0) {
            pfVar16 = &local_a8;
            if (0x18 < local_90) {
              pfVar16 = (float *)CONCAT44(uStack_a4,local_a8);
            }
            (*pcVar3)(pfVar16);
            uVar13 = local_2e8;
          }
          if (0x18 < local_90) {
            FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
          }
          FUN_1448173f8(local_198);
          if (((char)local_1c0 == '\x03') && (local_1b0 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_1b0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_1b0 + 0x10))();
            }
          }
          plVar20 = local_2d0;
          if ((0.0 < fVar21) && ((float)(uVar7 & 0x7fff) / 32767.0 <= fVar21)) {
            local_300 = param_5;
            local_310 = local_2a8;
            local_318 = local_2b8;
            local_320 = CONCAT44(local_320._4_4_,local_2ec);
            local_328 = ppppuVar19;
            local_308 = uVar13;
            FUN_143db1a5b(ppppuVar19 + 1,local_2c8,local_2e0,local_2d0);
          }
          ppppuVar19 = ppppuVar19 + 0x22;
          lVar10 = lVar10 + -0x110;
        } while (lVar10 != 0);
        uVar17 = uStack_210 & 0xffffffff;
      }
      FUN_14036924e(local_218,uVar17);
      if ((undefined8 ****)local_218 != (undefined8 ****)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    if (lVar2 == 0) {
      param_2 = FUN_1488d591a(lVar12,param_2);
    }
    else {
      param_2 = FUN_1488d5a7a(lVar12,lVar2,param_2);
    }
    if (param_2 != 0) goto LAB_1414d87e6;
  }
  if (local_228 != 0) {
    FUN_1400020a8();
  }
LAB_1414d870a:
  if ((local_80 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414d8f88 FUN_1414d8f88 body=2669 status=ok
// SIG undefined FUN_1414d8f88(void)

void FUN_1414d8f88(longlong param_1)

{
  longlong *_Dst;
  int iVar1;
  longlong *plVar2;
  void *_Src;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((0 < *(int *)(param_1 + 0x2640)) && (iVar1 = *(int *)(param_1 + 0x2920), iVar1 != 0)) {
    local_68 = 0;
    uStack_60 = 0;
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    local_70 = param_1 + 0x2638;
    FUN_14419c85c(&local_68);
    if ((longlong)*(int *)(param_1 + 0x2920) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x2918);
      lVar9 = (longlong)*(int *)(param_1 + 0x2920) * 0x300 + lVar8;
      do {
        lVar11 = (longlong)(int)uStack_60;
        uVar4 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
        if (uStack_60._4_4_ < uVar4) {
          FUN_14419c936(&local_68);
        }
        lVar11 = lVar11 * 0x90;
        _Dst = (longlong *)(local_68 + lVar11);
        plVar12 = (longlong *)(local_68 + lVar11 + 0x28);
        lVar11 = local_68 + lVar11;
        plVar10 = (longlong *)(lVar11 + 0x58);
        memset(_Dst,0,0x90);
        *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)(lVar8 + 0xe8);
        if (*(longlong *)(lVar8 + 400) == 0) {
LAB_1414d9322:
          lVar11 = *(longlong *)(lVar8 + 0x2a8);
          uVar5 = FUN_14005f2f0();
          lVar6 = FUN_14477b664(uVar5);
          _Dst[0xc] = lVar6;
          lVar6 = FUN_14005f2f0();
          uVar5 = FUN_14005f2f0();
          FUN_1402d1bfa(&local_58,uVar5,lVar11);
          if (_Dst[0xb] != local_58) {
            _Dst[0xd] = 0;
          }
          *plVar10 = local_58;
          lVar7 = FUN_14005f2f0();
          if (lVar6 == 0) {
LAB_1414d9399:
            lVar7 = lVar6;
          }
          else if (lVar7 == 0) {
            lVar7 = 0;
          }
          else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
                  (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                   == lVar7 + 0x30)) goto LAB_1414d9399;
          if (_Dst[0xc] != lVar7) {
            _Dst[0xd] = 0;
          }
          uVar5 = FUN_14477b664(lVar7);
          lVar6 = FUN_14477b664(uVar5);
          _Dst[0xc] = lVar6;
          if ((lVar6 != 0) && (_Dst[0xb] != 0)) {
            _Dst[0xd] = lVar11;
          }
          lVar11 = *(longlong *)(lVar8 + 0x2a0);
        }
        else {
          if ((longlong)*(int *)(lVar8 + 0x1a8) != 0) {
            lVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar8 + 0x1a0) + lVar11) == 0) goto LAB_1414d9322;
              lVar11 = lVar11 + 8;
            } while ((longlong)*(int *)(lVar8 + 0x1a8) * 8 != lVar11);
          }
          lVar11 = *(longlong *)(lVar8 + 0x198);
          uVar5 = FUN_14005f2f0();
          lVar6 = FUN_14477b664(uVar5);
          _Dst[0xc] = lVar6;
          lVar6 = FUN_14005f2f0();
          uVar5 = FUN_14005f2f0();
          FUN_1402d1bfa(&local_58,uVar5,lVar11);
          if (_Dst[0xb] != local_58) {
            _Dst[0xd] = 0;
          }
          *plVar10 = local_58;
          lVar7 = FUN_14005f2f0();
          if (lVar6 == 0) {
LAB_1414d9122:
            lVar7 = lVar6;
          }
          else if (lVar7 == 0) {
            lVar7 = 0;
          }
          else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
                  (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                   == lVar7 + 0x30)) goto LAB_1414d9122;
          if (_Dst[0xc] != lVar7) {
            _Dst[0xd] = 0;
          }
          uVar5 = FUN_14477b664(lVar7);
          lVar6 = FUN_14477b664(uVar5);
          _Dst[0xc] = lVar6;
          if ((lVar6 != 0) && (_Dst[0xb] != 0)) {
            _Dst[0xd] = lVar11;
          }
          lVar11 = *(longlong *)(lVar8 + 400);
        }
        if (_Dst[6] == 0) {
          uVar5 = FUN_14042c486();
          lVar6 = FUN_14477b664(uVar5);
          _Dst[6] = lVar6;
        }
        lVar6 = FUN_14042c486();
        uVar5 = FUN_14042c486();
        FUN_1402d1bfa(&local_58,uVar5,lVar11);
        if (*plVar12 != local_58) {
          _Dst[7] = 0;
        }
        *plVar12 = local_58;
        lVar7 = FUN_14042c486();
        if (lVar6 == 0) {
LAB_1414d91d3:
          lVar7 = lVar6;
        }
        else if (lVar7 == 0) {
          lVar7 = 0;
        }
        else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                 == lVar7 + 0x30)) goto LAB_1414d91d3;
        if (_Dst[6] != lVar7) {
          _Dst[7] = 0;
        }
        uVar5 = FUN_14477b664(lVar7);
        lVar6 = FUN_14477b664(uVar5);
        _Dst[6] = lVar6;
        if ((lVar6 != 0) && (_Dst[5] != 0)) {
          _Dst[7] = lVar11;
        }
        lVar11 = _Dst[0xc];
        if (lVar11 == 0) {
          uVar5 = FUN_14005f2f0();
          lVar11 = FUN_14477b664(uVar5);
          _Dst[0xc] = lVar11;
        }
        lVar6 = _Dst[0xd];
        if (lVar6 == 0) {
          if ((lVar11 != 0) && (*plVar10 != 0)) {
            plVar2 = *(longlong **)(lVar11 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
              _Dst[0xd] = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar6 = FUN_144aff482(uVar5);
              _Dst[0xd] = lVar6;
              if (lVar6 != 0) {
                lVar11 = _Dst[0xc];
                goto LAB_1414d922f;
              }
            }
          }
        }
        else {
LAB_1414d922f:
          if (lVar11 == 0) {
            uVar5 = FUN_14005f2f0(lVar6);
            lVar11 = FUN_14477b664(uVar5);
            _Dst[0xc] = lVar11;
            lVar6 = _Dst[0xd];
            if (lVar6 == 0) {
              if (lVar11 == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = 0;
                if (*plVar10 != 0) {
                  plVar2 = *(longlong **)(lVar11 + 0xb8);
                  if ((plVar2 == (longlong *)0x0) ||
                     (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0')) {
                    lVar6 = 0;
                  }
                  else {
                    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
                    lVar6 = FUN_144aff482(uVar5,plVar10);
                  }
                  _Dst[0xd] = lVar6;
                }
              }
            }
          }
          lVar11 = FUN_14087df18(lVar6);
          if (_Dst[3] == 0) {
            uVar5 = FUN_141227ea0();
            lVar6 = FUN_14477b664(uVar5);
            _Dst[3] = lVar6;
          }
          lVar6 = FUN_141227ea0();
          uVar5 = FUN_141227ea0();
          FUN_1402d1bfa(&local_58,uVar5,lVar11);
          if (_Dst[2] != local_58) {
            _Dst[4] = 0;
          }
          _Dst[2] = local_58;
          lVar7 = FUN_141227ea0();
          if (lVar6 == 0) {
LAB_1414d945b:
            lVar7 = lVar6;
          }
          else if (lVar7 == 0) {
            lVar7 = 0;
          }
          else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
                  (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                   == lVar7 + 0x30)) goto LAB_1414d945b;
          if (_Dst[3] != lVar7) {
            _Dst[4] = 0;
          }
          uVar5 = FUN_14477b664(lVar7);
          lVar6 = FUN_14477b664(uVar5);
          _Dst[3] = lVar6;
          if ((lVar6 != 0) && (_Dst[2] != 0)) {
            _Dst[4] = lVar11;
          }
          lVar11 = _Dst[0xc];
          if (lVar11 == 0) {
            uVar5 = FUN_14005f2f0();
            lVar11 = FUN_14477b664(uVar5);
            _Dst[0xc] = lVar11;
          }
          lVar6 = _Dst[0xd];
          if (lVar6 == 0) {
            if (lVar11 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = 0;
              if (*plVar10 != 0) {
                plVar10 = *(longlong **)(lVar11 + 0xb8);
                if ((plVar10 == (longlong *)0x0) ||
                   (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
                  lVar6 = 0;
                }
                else {
                  uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
                  lVar6 = FUN_144aff482(uVar5);
                }
                _Dst[0xd] = lVar6;
              }
            }
          }
          if ((longlong *)(lVar6 + 0x38) != _Dst) {
            iVar1 = *(int *)(lVar6 + 0x40);
            _Src = *(void **)(lVar6 + 0x38);
            *(int *)(_Dst + 1) = iVar1;
            if (iVar1 == 0 && *(int *)((longlong)_Dst + 0xc) == 0) {
              *(undefined4 *)((longlong)_Dst + 0xc) = 0;
            }
            else {
              FUN_1446dd670(_Dst);
              if (iVar1 != 0) {
                memcpy((void *)*_Dst,_Src,(longlong)iVar1 * 2);
              }
            }
          }
        }
        lVar11 = _Dst[6];
        if (lVar11 == 0) {
          uVar5 = FUN_14042c486();
          lVar11 = FUN_14477b664(uVar5);
          _Dst[6] = lVar11;
        }
        lVar6 = _Dst[7];
        if (lVar6 == 0) {
          if ((lVar11 != 0) && (*plVar12 != 0)) {
            plVar10 = *(longlong **)(lVar11 + 0xb8);
            if ((plVar10 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
              _Dst[7] = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
              lVar6 = FUN_144aff482(uVar5);
              _Dst[7] = lVar6;
              if (lVar6 != 0) {
                lVar11 = _Dst[6];
                goto LAB_1414d957f;
              }
            }
          }
        }
        else {
LAB_1414d957f:
          if (lVar11 == 0) {
            uVar5 = FUN_14042c486(lVar6);
            lVar11 = FUN_14477b664(uVar5);
            _Dst[6] = lVar11;
            lVar6 = _Dst[7];
            if (lVar6 == 0) {
              if (lVar11 == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = 0;
                if (*plVar12 != 0) {
                  plVar10 = *(longlong **)(lVar11 + 0xb8);
                  if ((plVar10 == (longlong *)0x0) ||
                     (cVar3 = (**(code **)(*plVar10 + 0x108))(), cVar3 == '\0')) {
                    lVar6 = 0;
                  }
                  else {
                    uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
                    lVar6 = FUN_144aff482(uVar5,plVar12);
                  }
                  _Dst[7] = lVar6;
                }
              }
            }
          }
          lVar11 = FUN_140a2d0dc(lVar6);
          if (_Dst[0xf] == 0) {
            uVar5 = FUN_140428d10();
            lVar6 = FUN_14477b664(uVar5);
            _Dst[0xf] = lVar6;
          }
          lVar6 = FUN_140428d10();
          uVar5 = FUN_140428d10();
          FUN_1402d1bfa(&local_58,uVar5,lVar11);
          if (_Dst[0xe] != local_58) {
            _Dst[0x10] = 0;
          }
          _Dst[0xe] = local_58;
          lVar7 = FUN_140428d10();
          if (lVar6 == 0) {
LAB_1414d96f2:
            lVar7 = lVar6;
          }
          else if (lVar7 == 0) {
            lVar7 = 0;
          }
          else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
                  (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                   == lVar7 + 0x30)) goto LAB_1414d96f2;
          if (_Dst[0xf] != lVar7) {
            _Dst[0x10] = 0;
          }
          uVar5 = FUN_14477b664(lVar7);
          lVar6 = FUN_14477b664(uVar5);
          _Dst[0xf] = lVar6;
          if ((lVar6 != 0) && (_Dst[0xe] != 0)) {
            _Dst[0x10] = lVar11;
          }
          lVar11 = _Dst[6];
          if (lVar11 == 0) {
            uVar5 = FUN_14042c486();
            lVar11 = FUN_14477b664(uVar5);
            _Dst[6] = lVar11;
          }
          lVar6 = _Dst[7];
          if (lVar6 == 0) {
            if (lVar11 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = 0;
              if (*plVar12 != 0) {
                plVar10 = *(longlong **)(lVar11 + 0xb8);
                if ((plVar10 == (longlong *)0x0) ||
                   (cVar3 = (**(code **)(*plVar10 + 0x108))(), cVar3 == '\0')) {
                  lVar6 = 0;
                }
                else {
                  uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
                  lVar6 = FUN_144aff482(uVar5,plVar12);
                }
                _Dst[7] = lVar6;
              }
            }
          }
          lVar11 = FUN_14001d26e(lVar6);
          if (_Dst[9] == 0) {
            uVar5 = FUN_14042c486();
            lVar6 = FUN_14477b664(uVar5);
            _Dst[9] = lVar6;
          }
          lVar6 = FUN_14042c486();
          uVar5 = FUN_14042c486();
          FUN_1402d1bfa(&local_58,uVar5,lVar11);
          if (_Dst[8] != local_58) {
            _Dst[10] = 0;
          }
          _Dst[8] = local_58;
          lVar7 = FUN_14042c486();
          if (lVar6 == 0) {
LAB_1414d9828:
            lVar7 = lVar6;
          }
          else if (lVar7 == 0) {
            lVar7 = 0;
          }
          else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
                  (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                   == lVar7 + 0x30)) goto LAB_1414d9828;
          if (_Dst[9] != lVar7) {
            _Dst[10] = 0;
          }
          uVar5 = FUN_14477b664(lVar7);
          lVar6 = FUN_14477b664(uVar5);
          _Dst[9] = lVar6;
          if ((lVar6 != 0) && (_Dst[8] != 0)) {
            _Dst[10] = lVar11;
          }
          if ((int)_Dst[1] < 2) {
            lVar11 = _Dst[6];
            if (lVar11 == 0) {
              uVar5 = FUN_14042c486();
              lVar11 = FUN_14477b664(uVar5);
              _Dst[6] = lVar11;
            }
            lVar6 = _Dst[7];
            if (lVar6 == 0) {
              if (lVar11 == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = 0;
                if (*plVar12 != 0) {
                  plVar10 = *(longlong **)(lVar11 + 0xb8);
                  if ((plVar10 == (longlong *)0x0) ||
                     (cVar3 = (**(code **)(*plVar10 + 0x108))(), cVar3 == '\0')) {
                    lVar6 = 0;
                  }
                  else {
                    uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
                    lVar6 = FUN_144aff482(uVar5,plVar12);
                  }
                  _Dst[7] = lVar6;
                }
              }
            }
            FUN_140baf52e(lVar6);
            if (&local_58 == _Dst) {
              if (local_58 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*_Dst != 0) {
                FUN_1400020a8();
              }
              *_Dst = local_58;
              *(undefined4 *)(_Dst + 1) = local_50;
              *(undefined4 *)((longlong)_Dst + 0xc) = local_4c;
            }
          }
        }
        lVar8 = lVar8 + 0x300;
      } while (lVar8 != lVar9);
    }
    FUN_14402a9f1(local_70,&local_68);
    FUN_14402b333(local_68,uStack_60 & 0xffffffff);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414d99f8 FUN_1414d99f8 body=486 status=ok
// SIG undefined FUN_1414d99f8(void)

void FUN_1414d99f8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x50;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x4c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x48 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1414d9be0 FUN_1414d9be0 body=3013 status=ok
// SIG undefined FUN_1414d9be0(void)

void FUN_1414d9be0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined *local_108;
  code *local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined8 local_98;
  int local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong uStack_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_58 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_108 = (undefined *)FUN_1446ddbd2();
      local_100 = FUN_1468d96f0;
      local_110 = 0;
      local_118 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
  local_70 = 0;
  local_68 = 0x3001;
  local_60 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_108 = (undefined *)FUN_1446ddbd2();
      local_100 = FUN_14170fd90;
      local_110 = 0x8000000000000000;
      local_118 = (undefined8 *)0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_70);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_70);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_70 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_70);
    }
  }
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951ae0) {
    FUN_144b3d300(&DAT_14c951ae0);
    if (DAT_14c951ae0 == -1) {
      FUN_1446ddbd2();
      local_100 = FUN_140b31576;
      local_108 = &DAT_14c951a38;
      local_110 = 0;
      local_118 = (undefined8 *)0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_88);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_88);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_88);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_88 = (undefined4)uVar2;
      uStack_84 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_88);
    }
  }
  local_8c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_108 = (undefined *)FUN_1446ddbd2();
      local_100 = FUN_14067a048;
      local_110 = 0;
      local_118 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_8c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_8c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_8c = (int)uVar2;
      uStack_88 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_8c);
    }
  }
  iVar5 = local_8c;
  local_a8 = 0;
  uStack_a4 = 0;
  local_a0 = 10;
  local_98 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_108 = (undefined *)FUN_1446ddbd2();
      local_100 = FUN_14170fd90;
      local_110 = 0x8000000000000000;
      local_118 = (undefined8 *)0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_a8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_a8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_a8 = (undefined4)uVar2;
      uStack_a4 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_a8);
    }
  }
  iStack_ac = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_108 = (undefined *)FUN_1446ddbd2();
      local_100 = FUN_14067a048;
      local_110 = 0;
      local_118 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_ac);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_ac);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_ac);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_ac = (int)uVar2;
      local_a8 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_ac);
    }
  }
  iVar4 = iStack_ac;
  local_b0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_100 = FUN_1408a629c;
      local_108 = &DAT_14c9520b8;
      local_110 = 0;
      local_118 = (undefined8 *)0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_b0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_b0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_b0 = (undefined4)uVar2;
      iStack_ac = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_b0);
    }
  }
  uVar6 = uStack_80;
  uVar7 = local_b0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = CONCAT44(uStack_a4,local_a8);
  local_c0 = local_a0;
  local_b8 = 0;
  local_d8 = 0;
  uVar2 = CONCAT44(uStack_84,uStack_88);
  local_d0 = (int)uStack_80;
  if ((int)uStack_80 == 0) {
    local_cc = 0;
  }
  else {
    FUN_145c4cb64(&local_d8,uStack_80 & 0xffffffff,0);
    FUN_141502622(local_d8,uVar2,uVar6 & 0xffffffff);
  }
  local_f0 = local_70;
  local_e8 = local_68;
  local_e0 = 0;
  local_110 = CONCAT71(local_110._1_7_,iVar4 != 0);
  local_108 = (undefined *)CONCAT44(local_108._4_4_,uVar7);
  local_118 = &local_c8;
  uVar7 = FUN_1414da7a6(local_58,&local_f0,&local_d8,iVar5 != 0);
  *param_3 = uVar7;
  if (CONCAT44(uStack_84,uStack_88) != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414da7a6 FUN_1414da7a6 body=687 status=ok
// SIG undefined FUN_1414da7a6(void)

uint FUN_1414da7a6(longlong param_1,longlong *param_2,longlong *param_3,undefined1 param_4,
                  undefined8 *param_5,char param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_168 [40];
  longlong local_140;
  int local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar6 = 0xffffffff;
  uVar1 = uVar6;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    uVar3 = FUN_144a7b040();
    plVar4 = (longlong *)FUN_144718840(param_1,uVar3);
    if ((plVar4 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar4 + 0x10))(), lVar5 != 0)) {
      local_140 = 0;
      local_138 = 0x3001;
      local_130 = 0;
      local_118 = 10;
      uStack_108 = 0;
      uStack_104 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0xf00000d0;
      local_b8 = 0;
      local_b0 = 0x3f800000;
      local_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0xf00000d0;
      local_68 = 0;
      local_60 = 0x3f800000;
      local_58 = 0;
      if ((*param_2 != 0) || ((int)param_2[1] != 0x3001)) {
        local_140 = *param_2;
        local_138 = (int)param_2[1];
      }
      local_120 = *param_5;
      local_110 = 0;
      local_128 = param_4;
      FUN_145be47b0(&uStack_108,param_3);
      uVar1 = FUN_1414daaac(lVar5,&local_140,1);
      if (((int)uVar1 < 0) || (iVar2 = *(int *)(lVar5 + 0x40), iVar2 <= (int)uVar1)) {
        uVar1 = uVar6;
        if (CONCAT44(uStack_104,uStack_108) != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_6 == '\x01' && uVar1 != 0) {
          lVar8 = 0;
          lVar7 = 0;
          do {
            if (lVar7 < *(int *)(lVar5 + 0x40)) {
              FUN_145be4800(*(longlong *)(lVar5 + 0x38) + lVar8,0x3f800000,0x3f800000,0);
            }
            lVar7 = lVar7 + 1;
            lVar8 = lVar8 + 0x88;
          } while ((ulonglong)uVar1 * 0x88 != lVar8);
          iVar2 = *(int *)(lVar5 + 0x40);
        }
        if ((int)uVar1 < iVar2) {
          FUN_145be4800((ulonglong)uVar1 * 0x88 + *(longlong *)(lVar5 + 0x38),0x3f800000,param_7,1);
        }
        if (CONCAT44(uStack_104,uStack_108) != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414daa56 FUN_1414daa56 body=85 status=ok
// SIG undefined FUN_1414daa56(void)

void FUN_1414daa56(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x24);
  fVar3 = *(float *)(param_1 + 0x30) - fVar1;
  if (fVar3 <= 0.0) {
    fVar3 = 1.0;
    fVar2 = fVar3;
  }
  else {
    fVar2 = *(float *)(param_1 + 200) / fVar3;
  }
  if (fVar2 < param_3) {
    fVar2 = param_3 * fVar3 + fVar1;
    fVar3 = param_2 * fVar3 + *(float *)(param_1 + 200);
    if (fVar2 <= fVar3) {
      fVar3 = fVar2;
    }
    FUN_1409d461e(fVar1,fVar3,0);
    return;
  }
  return;
}



// FUNCTION 1414daaac FUN_1414daaac body=395 status=ok
// SIG undefined FUN_1414daaac(void)

int FUN_1414daaac(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = -1;
  if (((*(byte *)(param_1 + 0x55) & 2) != 0) && (lVar2 = FUN_1409d448e(param_2), lVar2 != 0)) {
    if ((param_3 != '\0') &&
       ((uVar6 = (ulonglong)*(int *)(param_1 + 0x40), 0 < (longlong)uVar6 &&
        (cVar1 = FUN_140d03222(*(longlong *)(param_1 + 0x38) + uVar6 * 0x88 + -0x88), cVar1 == '\0')
        ))) {
      lVar2 = uVar6 * 0x88 + -0x110;
      do {
        if (uVar6 < 2) {
          uVar6 = 0;
          goto LAB_1414dabad;
        }
        cVar1 = FUN_140d03222(*(longlong *)(param_1 + 0x38) + lVar2);
        lVar2 = lVar2 + -0x88;
        uVar6 = uVar6 - 1;
      } while (cVar1 == '\0');
      if (lVar2 != -0x198) {
LAB_1414dabad:
        if ((*(longlong *)(param_2 + 0x20) == 0) || (0xfffffffd < *(int *)(param_2 + 0x28) - 1U)) {
          uVar3 = FUN_145e08e5c((uVar6 & 0xffffffff) * 0x88 + *(longlong *)(param_1 + 0x38));
        }
        else {
          uVar3 = FUN_14011c2be(param_2 + 0x20);
        }
        if (*(char *)(param_2 + 0x18) == '\x01') {
          lVar2 = FUN_140ccfc10();
          if (*(int *)(lVar2 + 0xe50) <= (int)uVar6) {
            return -1;
          }
          uVar3 = FUN_14011c2be((uVar6 & 0xffffffff) * 0x18 + *(longlong *)(lVar2 + 0xe48));
        }
        uVar4 = FUN_1409d448e(param_2);
        FUN_1461c10bc(param_1,uVar6 & 0xffffffff,uVar4,uVar3,1);
        return (int)uVar6;
      }
    }
    cVar1 = FUN_14036d004(param_1,param_2);
    if (cVar1 != '\0') {
      FUN_14036aa1c(param_1);
      FUN_140d9183c(param_1);
      FUN_140d919e2(param_1);
      FUN_14036abb0(param_1);
      FUN_14036b0fc(param_1);
      FUN_1447f69b6(param_1 + 0x18);
      *(char *)(param_1 + 0x54) = *(char *)(param_1 + 0x54) + '\x01';
      FUN_14036aa80(param_1);
      iVar5 = *(int *)(param_1 + 0x40) + -1;
    }
  }
  return iVar5;
}



// FUNCTION 1414dac37 FUN_1414dac37 body=63 status=ok
// SIG undefined FUN_1414dac37(void)

longlong FUN_1414dac37(void)

{
  longlong lVar1;
  
  if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) && ((DAT_14ca9a35c & 1) != 0)) &&
     (DAT_14ca84e78 != '\x01')) {
    lVar1 = DAT_14cabd108 + 0x10;
    if (DAT_14cabd108 == 0) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return DAT_14cabd158;
}



// FUNCTION 1414dac76 FUN_1414dac76 body=249 status=ok
// SIG undefined FUN_1414dac76(void)

void FUN_1414dac76(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_3;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x18))();
  lVar2 = plVar3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *plVar3;
    lVar5 = 0;
    do {
      puVar6 = *(undefined4 **)(*(longlong *)(lVar1 + lVar5) + 8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = &DAT_14c9485f0;
      }
      if (DAT_14c947fe0 == 0) {
        lVar4 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar4);
        DAT_14c947fe0 = lVar4;
      }
      FUN_140045924(DAT_14c947fe0,&local_50,puVar6,1);
      if (((local_50 == *param_2) && ((int)param_2[1] == 0x7012)) &&
         (*(longlong *)(lVar1 + 8 + lVar5) == local_58)) {
        *(undefined8 *)(lVar1 + 0x68 + lVar5) = 0;
      }
      lVar5 = lVar5 + 0x78;
    } while ((longlong)(int)lVar2 * 0x78 - lVar5 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414dad70 FUN_1414dad70 body=39 status=ok
// SIG undefined FUN_1414dad70(void)

void FUN_1414dad70(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x0001414dad94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x528))(plVar1,0,*(code **)(*plVar1 + 0x528));
  return;
}



// FUNCTION 1414dad98 FUN_1414dad98 body=506 status=ok
// SIG undefined FUN_1414dad98(void)

void FUN_1414dad98(longlong *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar9 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar11 = *puVar8;
    if (uVar11 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_1414daf23;
        iVar9 = iVar9 + 0x20;
        uVar11 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar2 = uVar14 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar11 = 0xffffffff;
    do {
      lVar10 = *param_1;
      lVar12 = (longlong)iVar4 * 0xb0;
      *(undefined4 *)(lVar10 + 0x98 + lVar12) = 0;
      if (*(longlong *)(lVar10 + 0x90 + lVar12) != 0) {
        FUN_1400020a8();
      }
      FUN_143d3382a(lVar10 + lVar12 + 0x50);
      if (*(longlong *)(lVar10 + lVar12 + 0x40) != 0) {
        FUN_1400020a8();
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar13;
      lVar10 = (longlong)iVar4;
      uVar5 = puVar8[lVar10] & uVar11;
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
        lVar12 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = puVar8[lVar10 + lVar12 + 1];
          if (uVar5 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar7 - lVar10 == lVar12) goto LAB_1414daf23;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar12 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_1414daf23:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1467f17ac(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 1414daf92 FUN_1414daf92 body=389 status=ok
// SIG undefined FUN_1414daf92(void)

void FUN_1414daf92(undefined8 param_1,int *param_2,uint param_3,undefined8 param_4,char param_5,
                  undefined1 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  int local_88;
  undefined8 local_80;
  int local_78;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_2 != 0) {
    local_80 = *(undefined8 *)param_2;
    local_78 = param_2[2];
    FUN_1448075d0(local_70);
    if (DAT_14cb758b8 == 0) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb758b8,local_70);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (lVar1 != 0) {
        puVar2 = (ulonglong *)FUN_14105a298(param_4,param_2);
        uVar3 = (ulonglong)param_3;
        uVar4 = *puVar2;
        if (*(char *)(lVar1 + 0x48) == '\x01') {
          if (param_5 == '\0') {
            if (uVar3 < uVar4) {
              FUN_143cf5f90(param_1,param_2);
            }
            goto LAB_1414db089;
          }
          if (uVar3 <= uVar4) {
            local_88 = param_2[2];
            local_90 = *(undefined8 *)param_2;
            FUN_146549672(param_1,param_6);
            uVar4 = *puVar2;
          }
        }
        if (uVar4 != uVar3) {
          *puVar2 = uVar3;
        }
        if (((int)param_3 < 0) && (DAT_14c7638c0 != '\0')) {
          *puVar2 = 0x7fffffff;
        }
        if (*(char *)(lVar1 + 0x48) == '\x01') {
          FUN_1459dc79c(param_1,param_2,
                        CONCAT71((int7)((ulonglong)local_70 >> 8),param_5) & 0xffffffff,param_6);
        }
        if (uVar4 != uVar3) {
          FUN_14105a360(param_1,param_2,*puVar2,uVar4);
        }
      }
    }
  }
LAB_1414db089:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414db118 FUN_1414db118 body=171 status=ok
// SIG undefined FUN_1414db118(void)

undefined8
FUN_1414db118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined2 *local_48;
  int local_40;
  undefined1 local_34 [4];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140002266(&local_48,L"%d_has_opened");
  local_30 = 0;
  puVar1 = local_48;
  if (local_40 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1405f0d29(local_34,puVar1,0);
  local_58 = 1;
  FUN_1408234aa(param_1,param_2,param_4,local_34);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1414db1c4 FUN_1414db1c4 body=91 status=ok
// SIG undefined FUN_1414db1c4(void)

longlong FUN_1414db1c4(longlong param_1,void *param_2,int param_3)

{
  void *_Dst;
  size_t _Size;
  
  _Size = (size_t)param_3;
  if (*(ulonglong *)(param_1 + 0x10) <= *(longlong *)(param_1 + 8) + _Size) {
    FUN_145753a78(param_1,_Size);
  }
  if (param_3 != 0) {
    _Dst = *(void **)(param_1 + 8);
    memcpy(_Dst,param_2,_Size);
    *(size_t *)(param_1 + 8) = (longlong)_Dst + _Size;
  }
  return param_1;
}



// FUNCTION 1414db220 FUN_1414db220 body=105 status=ok
// SIG undefined FUN_1414db220(void)

void FUN_1414db220(float *param_1,float param_2,float param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = param_2;
  if (param_2 <= param_3) {
    fVar2 = param_3;
    param_3 = param_2;
  }
  fVar4 = param_3;
  if (param_3 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar3 = (fVar4 - param_3) * 0.5;
  if (param_4 != '\0') {
    fVar4 = param_3 + fVar3;
  }
  else {
    fVar4 = fVar4 - fVar3;
  }
  fVar1 = fVar4 - fVar3;
  if (fVar2 <= fVar4 - fVar3) {
    fVar1 = fVar2;
  }
  fVar4 = (fVar2 - fVar1) * 0.5;
  if (param_4 != '\0') {
    fVar2 = fVar1 + fVar4;
  }
  else {
    fVar2 = fVar2 - fVar4;
  }
  param_1[1] = fVar4;
  *param_1 = fVar2;
  return;
}



// FUNCTION 1414db28a FUN_1414db28a body=458 status=ok
// SIG undefined FUN_1414db28a(void)

void FUN_1414db28a(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = (int)param_1[1];
  uVar9 = param_2 - iVar1;
  if (uVar9 != 0 && iVar1 <= (int)param_2) {
    uVar8 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar8);
    }
    iVar12 = *(int *)((longlong)param_1 + 0xc);
    iVar13 = iVar1;
    if (iVar12 < (int)param_2) {
      FUN_140549ad6(param_1);
      iVar13 = (int)param_1[1];
      iVar12 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar13 + uVar9;
    if ((uint)(iVar12 - iVar13) < uVar9) {
      FUN_140549c28(param_1);
    }
    if (iVar13 < (int)param_2) {
      lVar2 = *param_1;
      iVar12 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(lVar2 + uVar8 * 0x28 + -0x24);
      do {
        iVar10 = (int)uVar8;
        if (iVar12 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = iVar10 + -1;
        }
        puVar6[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar8 = uVar8 - 1;
        *puVar6 = uVar3;
        *(int *)(param_1 + 6) = iVar10 + -1;
        iVar12 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar12;
        puVar6 = puVar6 + -10;
      } while ((longlong)iVar13 < (longlong)uVar8);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar9;
      if (param_2 != 0) {
        uVar7 = uVar9 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar7) {
          if ((0x80 < uVar9) || (param_1[4] != 0)) {
            uVar11 = 0;
            if (0x80 < uVar9) {
              uVar11 = uVar7;
            }
            FUN_1446efa72(param_1 + 4,0,uVar11,4);
          }
          *(uint *)((longlong)param_1 + 0x2c) = uVar9 + 0x1f & 0xffffffe0;
        }
        plVar5 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar5 = param_1 + 2;
        }
        if (uVar9 < 0x101) {
          uVar7 = uVar7 + (uVar7 == 0);
        }
        memset(plVar5,0,(ulonglong)(uVar7 << 2));
        iVar1 = (int)param_1[5];
        iVar12 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar12 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          plVar5 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar9) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar9);
      FUN_1447c6044(param_1 + 2,uVar3,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 1414db454 FUN_1414db454 body=104 status=ok
// SIG undefined FUN_1414db454(void)

void FUN_1414db454(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f64e30;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 9;
  return;
}



// FUNCTION 1414db4bc FUN_1414db4bc body=226 status=ok
// SIG undefined FUN_1414db4bc(void)

longlong * FUN_1414db4bc(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630b3ce;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414db5a0 FUN_1414db5a0 body=20 status=ok
// SIG undefined FUN_1414db5a0(void)

undefined8 FUN_1414db5a0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x10) >> 8),
                    *(longlong *)(param_2 + 0x10) == *(longlong *)(param_1 + 0x10));
  }
  return 0;
}



// FUNCTION 1414db5b4 FUN_1414db5b4 body=15 status=ok
// SIG undefined FUN_1414db5b4(void)

void FUN_1414db5b4(longlong param_1)

{
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  return;
}



// FUNCTION 1414db5c4 FUN_1414db5c4 body=76 status=ok
// SIG undefined FUN_1414db5c4(void)

float FUN_1414db5c4(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0xd45) == '\x02') {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(param_1 + 0xb6c);
    if ((*(longlong *)(param_1 + 0xb18) != 0) &&
       (*(longlong **)(param_1 + 0xb20) != (longlong *)0x0)) {
      fVar1 = (float)(**(code **)(**(longlong **)(param_1 + 0xb20) + 0x40))();
      fVar2 = fVar2 * fVar1;
    }
  }
  return fVar2;
}



// FUNCTION 1414db610 FUN_1414db610 body=621 status=ok
// SIG undefined FUN_1414db610(void)

void FUN_1414db610(longlong param_1,undefined8 param_2,char *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  uint local_b8;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
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
  uint local_30;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_30 = (uint)param_2;
  if (*param_3 == '\x01') {
    if (param_3[1] == '\x01') {
      *(uint *)(param_1 + 0x3630) = *(uint *)(param_1 + 0x3630) | local_30;
      FUN_143ce8e58(param_1 + 0x35c0,param_2,1);
      uVar1 = *(ulonglong *)(param_1 + 0x38);
      if (uVar1 < 0xffffffff00000000) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
      }
      uVar7 = (uint)uVar1;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
        puVar5 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar5 = DAT_14c998080;
        }
        if ((*(uint *)(puVar5 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
          lVar4 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
          puVar6 = *(uint **)(lVar4 + 0x18);
          if (*(uint **)(lVar4 + 0x18) == (uint *)0x0) {
            puVar6 = (uint *)(lVar4 + 8);
          }
          *puVar6 = *puVar6 | 0x4000;
          *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) | 1;
        }
      }
    }
    else {
      *(uint *)(param_1 + 0x3628) = *(uint *)(param_1 + 0x3628) | local_30;
      if (param_3[2] == '\x01') {
        param_3 = param_3 + 8;
        cVar3 = FUN_140114204(param_3);
        if (cVar3 != '\0') {
          local_c0 = &local_30;
          local_c8 = param_3;
          FUN_145c31968(param_1 + 0x35d8,local_2c,&local_c8);
          local_c8._0_4_ = (uint)local_c8 & 0xffffff00;
          local_c8._4_4_ = 0;
          local_c0._0_4_ = 0;
          local_c0._4_4_ = 0;
          local_b8 = local_b8 & 0xffffff00;
          uStack_b4 = 0;
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
          FUN_1401aa3da((longlong)&uStack_ac + 4,param_1 + 0x35a8);
          lVar4 = *(longlong *)(param_1 + 0xb0);
          if (lVar4 == 0) {
            lVar4 = FUN_1448abda6(param_1);
          }
          lVar4 = FUN_140149a73(lVar4,0);
          if (lVar4 == 0) {
            local_34 = 2;
          }
          else {
            FUN_140983ba6(param_3,lVar4,&local_c8);
          }
          uVar2 = local_30;
          local_d8 = local_b8;
          uVar7 = local_d8;
          uStack_d4 = (undefined4)uStack_b4;
          uStack_d0 = uStack_b4._4_4_;
          iStack_cc = (int)uStack_ac;
          local_d8._0_1_ = (char)local_b8;
          local_d8 = uVar7;
          if ((char)local_d8 == '\x01') {
            cVar3 = (int)uStack_ac != 0;
          }
          else {
            cVar3 = FUN_140321d1a(&local_d8);
          }
          uVar7 = *(uint *)(param_1 + 0x362c) | uVar2;
          if (cVar3 == '\0') {
            uVar7 = ~uVar2 & *(uint *)(param_1 + 0x362c);
          }
          *(uint *)(param_1 + 0x362c) = uVar7;
          FUN_143ce8e58(param_1 + 0x35c0,uVar2);
          FUN_1409838b8(&local_c8);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414db8a0 FUN_1414db8a0 body=577 status=ok
// SIG undefined FUN_1414db8a0(void)

void FUN_1414db8a0(longlong *param_1,longlong param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 auStack_e8 [40];
  char local_c0 [16];
  longlong *local_b0;
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = *(longlong *)(*param_1 + 0x4210);
  if (*(int *)(lVar3 + 0x5a0) != *(int *)(lVar3 + 0x5cc)) {
    uVar2 = *param_3;
    lVar5 = lVar3 + 0x5d0;
    if (*(longlong *)(lVar3 + 0x5d8) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x5d8);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x5e0) - 1U & uVar2) * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)(lVar3 + 0x598);
      iVar9 = iVar8;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar9 * 0x60) == uVar2) goto LAB_1414db96b;
        iVar9 = *(int *)((longlong)iVar9 * 0x60 + lVar3 + 0x58);
      } while (iVar9 != -1);
    }
  }
  goto LAB_1414db938;
  while (iVar8 = *(int *)(lVar5 + 0x58), iVar8 != -1) {
LAB_1414db96b:
    lVar5 = lVar3 + (longlong)iVar8 * 0x60;
    if (*(uint *)(lVar3 + (longlong)iVar8 * 0x60) == uVar2) goto LAB_1414db98a;
  }
  lVar5 = 0;
LAB_1414db98a:
  local_c0[0] = '\0';
  local_98[0] = 0;
  FUN_1456bb102(local_c0,*(undefined8 *)(*param_1 + 0x4208));
  puVar7 = &local_90;
  FUN_1448729ea(lVar5 + 8,puVar7,local_c0);
  uVar10 = local_90;
  if (local_70 != 3) {
    puVar6 = &local_68;
    FUN_1400b56fe(puVar6,&local_90,3);
    uVar10 = 0;
    if (local_48 != 0) {
      uVar10 = local_68;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_50) {
        puVar6 = (undefined4 *)CONCAT44(uStack_64,local_68);
      }
      (*pcVar4)(puVar6);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  *(undefined4 *)(param_2 + 8) = uVar10;
  FUN_14020a6cc(param_2,1);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_78) {
      puVar7 = (undefined4 *)CONCAT44(uStack_8c,local_90);
    }
    (*pcVar4)(puVar7);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(CONCAT44(uStack_8c,local_90));
  }
  FUN_1448173f8(local_98);
  if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
LAB_1414db938:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414dbae2 FUN_1414dbae2 body=8 status=ok
// SIG undefined FUN_1414dbae2(void)

undefined8 FUN_1414dbae2(void)

{
  return DAT_14cb1aeb8;
}



// FUNCTION 1414dbaea FUN_1414dbaea body=88 status=ok
// SIG undefined FUN_1414dbaea(void)

undefined8 FUN_1414dbaea(longlong *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x80))();
    if (cVar1 != '\0') {
      return 0x8c;
    }
    cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar1 != '\0') {
      if (param_2 == '\0') {
        return 0x14;
      }
      return 0x1e;
    }
  }
  uVar2 = 10;
  if (param_2 == '\0') {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1414dbb42 FUN_1414dbb42 body=848 status=ok
// SIG undefined FUN_1414dbb42(void)

void FUN_1414dbb42(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 *local_80;
  int local_78;
  longlong local_70;
  undefined1 local_64 [4];
  longlong *local_60;
  longlong *local_58;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = param_1[1];
  uVar8 = *(undefined8 *)*param_1;
  local_80 = (undefined8 *)*param_2;
  FUN_1446dcdd4(&local_60);
  lVar7 = FUN_144815d88(uVar8,&local_60);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_70 = lVar7;
  if (lVar7 != 0) {
    uVar8 = FUN_14050fd64();
    local_98 = 0;
    FUN_14088df30(uVar8,&local_60,lVar7,*(undefined4 *)param_1[2]);
    plVar1 = local_58;
    if ((longlong **)(lVar4 + 0x1e90) != &local_60) {
      *(longlong **)(lVar4 + 0x1e90) = local_60;
      local_60 = (longlong *)0x0;
      plVar5 = *(longlong **)(lVar4 + 0x1e98);
      if (local_58 != plVar5) {
        local_58 = (longlong *)0x0;
        *(longlong **)(lVar4 + 0x1e98) = plVar1;
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
    plVar1 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_58 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    local_80 = (undefined8 *)0x0;
    local_78 = 0;
    FUN_1446efa72(&local_80,0,3,0x10);
    puVar6 = local_80;
    local_78 = 3;
    *local_80 = &PTR_LAB_149e020b0;
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
    local_80[2] = lVar9;
    *local_80 = &PTR_FUN_14b3f4f00;
    local_80[3] = 0;
    iVar10 = 0;
    if (lVar4 != 0) {
      uVar3 = *(uint *)(lVar4 + 0xc);
      *(uint *)(local_80 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar10 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar10 = *(int *)(lVar7 + 0x10);
        bVar12 = iVar10 == 0;
        if (bVar12) {
          *(int *)(lVar7 + 0x10) = iVar11;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar10 = iVar11;
        }
      }
    }
    *(int *)((longlong)puVar6 + 0x1c) = iVar10;
    puVar6[4] = &LAB_143ce7d36;
    *(undefined4 *)(puVar6 + 5) = 0;
    uVar8 = *(undefined8 *)(lVar4 + 0x1e90);
    local_90 = 0;
    local_88 = 0;
    FUN_14009d848(&local_90,&local_80);
    FUN_140844560(uVar8,&local_60,&local_90);
    *(longlong **)(lVar4 + 0x1e88) = local_60;
    if (*param_3 == DAT_14caa8578) {
      *(longlong *)(lVar4 + 0x1df0) = local_70;
    }
    else {
      local_58 = &local_70;
      local_60 = param_3;
      FUN_145bfc02e(lVar4 + 0x1df8,local_64);
    }
    if (local_78 != 0) {
      if (local_80 == (undefined8 *)0x0) goto LAB_1414dbdc9;
      (**(code **)*local_80)(local_80,0);
      FUN_1446efa72(&local_80,0,0,0x10);
      local_78 = 0;
    }
    if (local_80 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1414dbdc9:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414dbe94 FUN_1414dbe94 body=156 status=ok
// SIG undefined FUN_1414dbe94(void)

longlong * FUN_1414dbe94(longlong param_1,longlong *param_2)

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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(param_1 + 0x178);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x170);
    lVar19 = 0;
    lVar17 = 0;
    do {
      if (*(char *)(lVar5 + 0x30 + lVar19) == '\x01') {
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_145769c96(param_2,iVar4);
          lVar17 = *param_2;
        }
        puVar1 = (undefined4 *)(lVar5 + lVar19);
        lVar18 = (longlong)iVar4 * 0x38;
        *(undefined8 *)(lVar17 + 0x30 + lVar18) = *(undefined8 *)(puVar1 + 0xc);
        uVar6 = *puVar1;
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        uVar10 = puVar1[4];
        uVar11 = puVar1[5];
        uVar12 = puVar1[6];
        uVar13 = puVar1[7];
        uVar14 = puVar1[9];
        uVar15 = puVar1[10];
        uVar16 = puVar1[0xb];
        puVar2 = (undefined4 *)(lVar17 + 0x20 + lVar18);
        *puVar2 = puVar1[8];
        puVar2[1] = uVar14;
        puVar2[2] = uVar15;
        puVar2[3] = uVar16;
        puVar1 = (undefined4 *)(lVar17 + 0x10 + lVar18);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
        puVar1[2] = uVar12;
        puVar1[3] = uVar13;
        puVar1 = (undefined4 *)(lVar17 + lVar18);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
      }
      lVar19 = lVar19 + 0x38;
    } while ((longlong)iVar3 * 0x38 - lVar19 != 0);
  }
  return param_2;
}



// FUNCTION 1414dbfe4 FUN_1414dbfe4 body=196 status=ok
// SIG undefined FUN_1414dbfe4(void)

void FUN_1414dbfe4(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((*(char *)(param_1 + 0x178) == '\x03') && (*(int *)(param_2 + 0x50) != 0)) &&
      (uVar1 = *(uint *)(param_2 + 0x4c), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_2 + 0x50))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
      lVar2 = FUN_141416276();
      if (lVar2 != 0) {
        if ((*(char *)(param_2 + 0x55) == '\x01') &&
           (*(uint *)(lVar2 + 0x2d8) =
                 *(uint *)(lVar2 + 0x2d8) & 0xfffffffe | (uint)*(byte *)(param_2 + 0x54),
           *(char *)(param_2 + 0x55) == '\x01')) {
          *(undefined1 *)(param_2 + 0x55) = 0;
        }
        if (*(int *)(param_2 + 0x88) < 6) {
          *(undefined4 *)(param_2 + 0x88) = 6;
          if (*(char *)(param_2 + 0x38) != '\x01') {
            FUN_140c7df0a(lVar2);
            return;
          }
          FUN_146341516(lVar2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1414dc0a8 FUN_1414dc0a8 body=491 status=ok
// SIG undefined FUN_1414dc0a8(void)

void FUN_1414dc0a8(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [40];
  longlong local_90;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_1409c5062(local_80,param_2 + 0x10);
    FUN_1411abf60(param_1,local_80);
    puVar1 = (ushort *)(param_2 + 0xc);
    if (*(int *)(param_1 + 0x580) != *(int *)(param_1 + 0x5ac)) {
      lVar4 = param_1 + 0x5b0;
      if (*(longlong *)(param_1 + 0x5b8) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x5b8);
      }
      iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x5c0) - 1U & (uint)*puVar1) * 4);
      if (iVar6 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x578);
        do {
          lVar2 = lVar4 + (longlong)iVar6 * 0x40;
          if (*(ushort *)(lVar4 + (longlong)iVar6 * 0x40) == *puVar1) {
            if ((lVar2 + 8U & 0xfffffffffffffff7) != 0) {
              uVar3 = FUN_1447210f0(param_1);
              lVar4 = FUN_140149a73(uVar3,0);
              if ((lVar4 != 0) &&
                 (plVar5 = (longlong *)FUN_1401499e8(lVar4), plVar5 != (longlong *)0x0)) {
                uVar3 = *(undefined8 *)(lVar2 + 8);
                FUN_1409c5062(local_b8,lVar2 + 0x10);
                (**(code **)(*plVar5 + 0x78))(plVar5,local_b8,uVar3);
                if (local_90 != 0) {
                  FUN_1400020a8();
                }
              }
              FUN_14895633e((longlong *)(param_1 + 0x578),puVar1);
            }
            break;
          }
          iVar6 = *(int *)(lVar2 + 0x38);
        } while (iVar6 != -1);
      }
    }
    FUN_1459021ba(param_1 + 0x528,puVar1);
    FUN_14584534c(param_1 + 0x518,param_2);
    FUN_1407058ce(param_1 + 0x408);
    FUN_140705914(param_1 + 0x408);
    *(undefined8 *)(param_1 + 0x50c) = 0xffffffffffffffff;
    if (*(int *)(param_1 + 0x520) == 0) {
      if (*(longlong *)(param_1 + 0x668) != 0) {
        FUN_14480f766(&DAT_14cadbec8);
      }
      *(undefined8 *)(param_1 + 0x668) = 0;
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414dc294 FUN_1414dc294 body=482 status=ok
// SIG undefined FUN_1414dc294(void)

void FUN_1414dc294(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 1414dc478 FUN_1414dc478 body=112 status=ok
// SIG undefined FUN_1414dc478(void)

void FUN_1414dc478(longlong param_1)

{
  *(undefined2 **)(param_1 + 0xb0) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_140115c12(param_1 + 0xc0,0);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1414dc4e8 FUN_1414dc4e8 body=422 status=ok
// SIG undefined FUN_1414dc4e8(void)

void FUN_1414dc4e8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0xc + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 1414dc69c FUN_1414dc69c body=175 status=ok
// SIG undefined FUN_1414dc69c(void)

void FUN_1414dc69c(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad5ad8);
  if (0 < DAT_14cad5b08) {
    lVar5 = 0;
    uVar6 = 0;
    iVar2 = DAT_14cad5b08;
    do {
      lVar4 = DAT_14cad5b00;
      if ((param_1 != 0) &&
         (cVar1 = FUN_14480f766(DAT_14cad5b00 + lVar5), iVar2 = DAT_14cad5b08, cVar1 != '\0')) {
        lVar3 = (longlong)*(int *)(lVar4 + 8 + lVar5);
        if (lVar3 == 0) goto LAB_1414dc738;
        lVar5 = *(longlong *)(lVar4 + lVar5);
        lVar4 = 0;
        goto LAB_1414dc70a;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while ((longlong)uVar6 < (longlong)iVar2);
  }
  goto LAB_1414dc718;
  while (lVar4 = lVar4 + 0x10, lVar3 * 0x10 != lVar4) {
LAB_1414dc70a:
    if ((*(int *)(lVar5 + 8 + lVar4) != 0) && (*(longlong *)(lVar5 + lVar4) != 0))
    goto LAB_1414dc718;
  }
LAB_1414dc738:
  FUN_140de397a(&DAT_14cad5b10,uVar6 & 0xffffffff,0);
LAB_1414dc718:
                    /* WARNING: Could not recover jumptable at 0x0001414dc728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad5ad8);
  return;
}



// FUNCTION 1414dc74c FUN_1414dc74c body=50 status=ok
// SIG undefined FUN_1414dc74c(void)

undefined8 * FUN_1414dc74c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_144830b78(param_1 + 1,&DAT_14cb41380);
  *(undefined4 *)(param_1 + 1) = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1414dc77e FUN_1414dc77e body=51 status=ok
// SIG undefined FUN_1414dc77e(void)

void FUN_1414dc77e(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0xd69) != '\0')) {
    iVar1 = FUN_1402d8968(param_2,param_3);
    if (iVar1 == 0xb) {
      *(undefined1 *)(param_1 + 0xd69) = 0;
    }
  }
  return;
}



// FUNCTION 1414dc7b2 FUN_1414dc7b2 body=112 status=ok
// SIG undefined FUN_1414dc7b2(void)

void FUN_1414dc7b2(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  
  iVar2 = FUN_14487fd02();
  if (iVar2 == 3) {
    plVar3 = (longlong *)FUN_1403ca102(param_1);
    if (plVar3 == (longlong *)0x0) {
      bVar4 = true;
    }
    else {
      cVar1 = (**(code **)(*plVar3 + 0x498))(plVar3);
      bVar4 = cVar1 != '\b';
    }
    cVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if ((cVar1 == '\0') || (bVar4 || *(char *)((longlong)param_1 + 0x32b9) != '\x01')) {
      *(undefined1 *)((longlong)param_1 + 0x3251) = 1;
    }
    else {
      FUN_1441ee164(param_1);
      *(undefined1 *)(param_1 + 0x64a) = 0;
    }
  }
  return;
}



// FUNCTION 1414dc822 FUN_1414dc822 body=216 status=ok
// SIG undefined FUN_1414dc822(void)

undefined8 FUN_1414dc822(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar7 != -1) {
      lVar2 = *param_1;
      do {
        lVar8 = (longlong)iVar7 * 0x60;
        lVar1 = lVar2 + lVar8;
        if (*(int *)(lVar2 + lVar8) == param_2) {
          iVar3 = *(int *)((longlong)plVar6 + (longlong)*(int *)(lVar1 + 0x5c) * 4);
          if (iVar3 == iVar7) {
            puVar5 = (undefined4 *)((longlong)plVar6 + (longlong)*(int *)(lVar1 + 0x5c) * 4);
          }
          else {
            do {
              lVar4 = (longlong)iVar3;
              iVar3 = *(int *)(lVar2 + 0x58 + lVar4 * 0x60);
            } while (iVar3 != iVar7);
            puVar5 = (undefined4 *)(lVar2 + lVar4 * 0x60 + 0x58);
          }
          *puVar5 = *(undefined4 *)(lVar1 + 0x58);
          lVar2 = *param_1;
          *(undefined4 *)(lVar2 + 0x50 + lVar8) = 0;
          if (*(longlong *)(lVar2 + 0x48 + lVar8) != 0) {
            FUN_1400020a8();
          }
          FUN_144039b6e(lVar2 + lVar8 + 8);
          FUN_1440eabbc(param_1,iVar7);
          return 1;
        }
        iVar7 = *(int *)(lVar1 + 0x58);
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1414dc8fa FUN_1414dc8fa body=407 status=ok
// SIG undefined FUN_1414dc8fa(void)

void FUN_1414dc8fa(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (*(int *)(param_1 + 0x430) != *(int *)(param_1 + 0x45c)) {
    lVar6 = *(longlong *)(param_1 + 0x468);
    if (*(longlong *)(param_1 + 0x468) == 0) {
      lVar6 = param_1 + 0x460;
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x470) - 1U & param_2) * 4);
    if (iVar7 != -1) {
      plVar2 = (longlong *)(param_1 + 0x428);
      do {
        lVar6 = *plVar2 + (longlong)iVar7 * 0x20;
        if (*(uint *)(*plVar2 + (longlong)iVar7 * 0x20) == param_2) {
          if (lVar6 == 0) {
            return;
          }
          lVar9 = *(longlong *)(lVar6 + 8);
          plVar4 = *(longlong **)(lVar6 + 0x10);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          if ((lVar9 != 0) &&
             (plVar5 = (longlong *)FUN_140d1799c(param_1,param_2), plVar5 != (longlong *)0x0)) {
            (**(code **)(*plVar5 + 0x78))(plVar5,lVar9);
            if (*(int *)(param_1 + 0x430) == *(int *)(param_1 + 0x45c)) {
              lVar6 = *plVar2;
              iVar7 = -1;
            }
            else {
              lVar6 = *(longlong *)(param_1 + 0x428);
              lVar9 = param_1 + 0x460;
              if (*(longlong *)(param_1 + 0x468) != 0) {
                lVar9 = *(longlong *)(param_1 + 0x468);
              }
              iVar8 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x470) - 1U & param_2) * 4);
              while ((iVar7 = -1, iVar8 != -1 &&
                     (iVar7 = iVar8, *(uint *)(lVar6 + (longlong)iVar8 * 0x20) != param_2))) {
                iVar8 = *(int *)((longlong)iVar8 * 0x20 + lVar6 + 0x18);
              }
            }
            plVar5 = *(longlong **)(lVar6 + 0x10 + (longlong)iVar7 * 0x20);
            puVar3 = (undefined8 *)(lVar6 + 8 + (longlong)iVar7 * 0x20);
            *puVar3 = 0;
            puVar3[1] = 0;
            FUN_145af6580(plVar2);
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
          }
          if (plVar4 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 != 0) {
            return;
          }
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 != 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001414dc9bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
        iVar7 = *(int *)(lVar6 + 0x18);
      } while (iVar7 != -1);
    }
  }
  return;
}



// FUNCTION 1414dca92 FUN_1414dca92 body=937 status=ok
// SIG undefined FUN_1414dca92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414dca92(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  
  if (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x40c)) {
    lVar6 = param_1 + 0x410;
    if (*(longlong *)(param_1 + 0x418) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x418);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x3d8) + (longlong)iVar8 * 0x60;
        if (*(uint *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar8 * 0x60) == param_2) {
          plVar9 = (longlong *)(lVar6 + 8);
          if (plVar9 != (longlong *)0x0 && lVar6 != 0) {
            iVar8 = *(int *)(lVar6 + 0x30);
            if (iVar8 == 0) {
              uVar13 = 1;
              uVar20 = 0;
              iVar19 = 0;
              iVar16 = 0;
              goto LAB_1414dcc36;
            }
            puVar10 = *(uint **)(lVar6 + 0x28);
            if (*(uint **)(lVar6 + 0x28) == (uint *)0x0) {
              puVar10 = (uint *)(lVar6 + 0x18);
            }
            uVar12 = *puVar10;
            if (uVar12 != 0) {
              uVar20 = 0;
              iVar19 = 0;
              goto LAB_1414dcc0e;
            }
            iVar19 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar19 = iVar8 + -1;
            }
            uVar20 = 0;
            uVar13 = (ulonglong)(uint)(iVar19 >> 5);
            if (iVar19 >> 5 < 1) {
              uVar13 = uVar20;
            }
            iVar19 = 0;
            goto LAB_1414dcbf4;
          }
          break;
        }
        iVar8 = *(int *)(lVar6 + 0x58);
      } while (iVar8 != -1);
    }
  }
  goto LAB_1414dcb1b;
  while( true ) {
    iVar19 = iVar19 + 0x20;
    uVar12 = puVar10[uVar20 + 1];
    uVar20 = uVar20 + 1;
    if (uVar12 != 0) break;
LAB_1414dcbf4:
    if (uVar13 == uVar20) goto LAB_1414dce0e;
  }
LAB_1414dcc0e:
  uVar13 = (ulonglong)(-uVar12 & uVar12);
  uVar4 = uVar13 * 2 + 1;
  lVar15 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  iVar16 = (iVar19 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
  if (iVar8 <= iVar16) {
    iVar16 = iVar8;
  }
LAB_1414dcc36:
  if (iVar16 < iVar8) {
    plVar3 = (longlong *)(param_1 + 0x608);
    uVar12 = 0xffffffff;
    do {
      puVar7 = *(undefined8 **)(*plVar9 + 8 + (longlong)iVar16 * 0x18);
      uVar14 = *(uint *)((longlong)puVar7 + 0x2c);
      if (-1 < (int)uVar14) {
        lVar15 = *(longlong *)(param_1 + 0x628);
        if (*(longlong *)(param_1 + 0x628) == 0) {
          lVar15 = param_1 + 0x618;
        }
        if (((*(uint *)(lVar15 + (ulonglong)(uVar14 >> 5) * 4) >> (uVar14 & 0x1f) & 1) != 0) &&
           (lVar15 = (ulonglong)uVar14 * 0x10, *(longlong *)(*plVar3 + lVar15) != 0)) {
          FUN_146625e4e();
          lVar11 = *plVar3;
          *(undefined8 *)(lVar11 + lVar15) = 0;
          plVar5 = *(longlong **)(lVar11 + 8 + lVar15);
          if (plVar5 != (longlong *)0x0) {
            *(undefined8 *)(lVar11 + lVar15 + 8) = 0;
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar5)();
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          FUN_1458ad586(plVar3,uVar14);
          puVar7 = *(undefined8 **)(*plVar9 + 8 + (longlong)iVar16 * 0x18);
        }
      }
      if (puVar7 != (undefined8 *)0x0) {
        _DAT_14cbc5984 = _DAT_14cbc5984 + -1;
        *puVar7 = DAT_14cbc5978;
        DAT_14cbc5978 = puVar7;
      }
      uVar12 = uVar12 & ~(uint)uVar13;
      puVar10 = *(uint **)(lVar6 + 0x28);
      if (*(uint **)(lVar6 + 0x28) == (uint *)0x0) {
        puVar10 = (uint *)(lVar6 + 0x18);
      }
      iVar8 = *(int *)(lVar6 + 0x30);
      iVar16 = (int)uVar20;
      lVar15 = (longlong)iVar16;
      uVar14 = puVar10[lVar15] & uVar12;
      if (uVar14 == 0) {
        iVar17 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar17 = iVar8 + -1;
        }
        iVar17 = iVar17 >> 5;
        iVar18 = iVar17;
        if (iVar17 < iVar16) {
          iVar18 = iVar16;
        }
        if (iVar17 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar19 = iVar19 + 0x20;
          uVar14 = puVar10[lVar15 + lVar11 + 1];
          if (uVar14 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar18 - lVar15 == lVar11) goto LAB_1414dce0e;
        }
        uVar20 = (ulonglong)(iVar16 + (int)lVar11 + 1);
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar14 & uVar14);
      uVar4 = uVar13 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar16 = (iVar19 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar8);
  }
LAB_1414dce0e:
  FUN_145ee8224();
  FUN_148d019da(param_1 + 0x640,param_2);
LAB_1414dcb1b:
  if (*(int *)(param_1 + 0x480) != *(int *)(param_1 + 0x4ac)) {
    lVar6 = param_1 + 0x4b0;
    if (*(longlong *)(param_1 + 0x4b8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x4b8);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x4c0) - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x478);
      do {
        if (*(uint *)(lVar6 + (longlong)iVar8 * 0x10) == param_2) {
          FUN_14573a2c8((longlong *)(param_1 + 0x478),param_2);
          return;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x10 + lVar6 + 8);
      } while (iVar8 != -1);
    }
  }
  return;
}



// FUNCTION 1414dce3c FUN_1414dce3c body=960 status=ok
// SIG undefined FUN_1414dce3c(void)

void FUN_1414dce3c(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auStack_a8 [44];
  uint local_7c;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x4d0) != *(int *)(param_1 + 0x4fc)) {
    lVar14 = param_1 + 0x500;
    lVar19 = *(longlong *)(param_1 + 0x508);
    if (*(longlong *)(param_1 + 0x508) == 0) {
      lVar19 = lVar14;
    }
    iVar15 = *(int *)(lVar19 + (ulonglong)(*(int *)(param_1 + 0x510) - 1U & param_2) * 4);
    if (iVar15 != -1) {
      plVar2 = (longlong *)(param_1 + 0x4c8);
      lVar19 = *plVar2;
      iVar5 = iVar15;
      do {
        if (*(uint *)(lVar19 + (longlong)iVar5 * 0x60) == param_2) {
          local_58 = 0;
          uStack_50 = 0;
          goto LAB_1414dced9;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x60 + lVar19 + 0x58);
      } while (iVar5 != -1);
    }
  }
  goto LAB_1414dd1ca;
code_r0x0001414dd149:
  iVar15 = *(int *)(lVar13 + 0x58);
  if (iVar15 == -1) goto LAB_1414dd1bb;
  goto LAB_1414dd134;
  while (iVar15 = *(int *)(lVar13 + 0x58), iVar15 != -1) {
LAB_1414dced9:
    lVar13 = lVar19 + (longlong)iVar15 * 0x60;
    if (*(uint *)(lVar19 + (longlong)iVar15 * 0x60) == param_2) goto LAB_1414dcefa;
  }
  lVar13 = 0;
LAB_1414dcefa:
  puVar1 = (uint *)(lVar13 + 0x18);
  iVar15 = *(int *)(lVar13 + 0x30);
  local_7c = param_2;
  local_78 = param_1;
  local_70 = lVar14;
  local_68 = plVar2;
  if (iVar15 == 0) {
    uVar12 = 1;
    uVar18 = 0;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar7 = *(uint **)(lVar13 + 0x28);
    if (*(uint **)(lVar13 + 0x28) == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar17 = *puVar7;
    if (uVar17 == 0) {
      iVar5 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar5 = iVar15 + -1;
      }
      uVar18 = 0;
      uVar12 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar12 = uVar18;
      }
      iVar16 = 0;
      do {
        if (uVar12 == uVar18) goto LAB_1414dd0e0;
        iVar16 = iVar16 + 0x20;
        uVar17 = puVar7[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar18 = 0;
      iVar16 = 0;
    }
    uVar12 = (ulonglong)(-uVar17 & uVar17);
    uVar3 = uVar12 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar5 = (iVar16 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar5) {
      iVar5 = iVar15;
    }
  }
  if (iVar5 != iVar15) {
    uVar17 = 0xffffffff;
    local_60 = lVar13;
    do {
      uVar3 = uStack_50;
      lVar14 = *(longlong *)(lVar13 + 8);
      lVar19 = (longlong)(int)uStack_50;
      uVar6 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
      if (uStack_50._4_4_ < uVar6) {
        FUN_14100c5e2(&local_58,uVar3 & 0xffffffff);
        lVar13 = local_60;
      }
      lVar8 = local_58;
      *(undefined8 *)(local_58 + lVar19 * 8) = *(undefined8 *)((longlong)iVar5 * 0x18 + lVar14);
      uVar17 = uVar17 & ~(uint)uVar12;
      puVar7 = *(uint **)(lVar13 + 0x28);
      if (*(uint **)(lVar13 + 0x28) == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar4 = *(int *)(lVar13 + 0x30);
      iVar5 = (int)uVar18;
      lVar14 = (longlong)iVar5;
      uVar6 = puVar7[lVar14] & uVar17;
      if (uVar6 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar5) {
          iVar10 = iVar5;
        }
        if (iVar5 < iVar9) {
          lVar19 = 0;
          do {
            uVar6 = puVar7[lVar14 + lVar19 + 1];
            if (uVar6 != 0) {
              uVar18 = (ulonglong)(iVar5 + (int)lVar19 + 1);
              uVar17 = 0xffffffff;
              goto LAB_1414dd070;
            }
            iVar16 = iVar16 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar10 - lVar14 != lVar19);
          uVar17 = 0xffffffff;
          iVar5 = iVar10;
        }
        uVar18 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar4;
      }
      else {
LAB_1414dd070:
        uVar12 = (ulonglong)(-uVar6 & uVar6);
        uVar3 = uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar5 = (iVar16 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
      }
    } while (iVar5 != iVar15);
    lVar14 = (longlong)(int)uStack_50;
    if (lVar14 != 0) {
      lVar19 = 0;
      do {
        if (*(longlong *)(lVar8 + lVar19) != 0) {
          FUN_1440e55ee(local_78,*(longlong *)(lVar8 + lVar19),local_7c);
        }
        lVar19 = lVar19 + 8;
      } while (lVar14 * 8 != lVar19);
    }
  }
LAB_1414dd0e0:
  plVar2 = local_68;
  if (*(int *)(local_78 + 0x4d0) != *(int *)(local_78 + 0x4fc)) {
    lVar14 = local_70;
    if (*(longlong *)(local_78 + 0x508) != 0) {
      lVar14 = *(longlong *)(local_78 + 0x508);
    }
    iVar15 = *(int *)(lVar14 + ((longlong)(int)local_7c & (longlong)*(int *)(local_78 + 0x510) - 1U)
                               * 4);
    if (iVar15 != -1) {
      lVar19 = *local_68;
LAB_1414dd134:
      lVar8 = (longlong)iVar15 * 0x60;
      lVar13 = lVar19 + lVar8;
      if (*(uint *)(lVar19 + lVar8) != local_7c) goto code_r0x0001414dd149;
      iVar5 = *(int *)(lVar14 + (longlong)*(int *)(lVar13 + 0x5c) * 4);
      if (iVar5 == iVar15) {
        puVar11 = (undefined4 *)(lVar14 + (longlong)*(int *)(lVar13 + 0x5c) * 4);
      }
      else {
        do {
          lVar14 = (longlong)iVar5;
          iVar5 = *(int *)(lVar19 + 0x58 + lVar14 * 0x60);
        } while (iVar5 != iVar15);
        puVar11 = (undefined4 *)(lVar19 + lVar14 * 0x60 + 0x58);
      }
      *puVar11 = *(undefined4 *)(lVar13 + 0x58);
      lVar14 = *local_68;
      *(undefined4 *)(lVar14 + 0x50 + lVar8) = 0;
      if (*(longlong *)(lVar14 + 0x48 + lVar8) != 0) {
        FUN_1400020a8();
      }
      FUN_144039ab6(lVar14 + lVar8 + 8);
      FUN_1440eace2(plVar2,iVar15);
    }
  }
LAB_1414dd1bb:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1414dd1ca:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414dd1fe FUN_1414dd1fe body=209 status=ok
// SIG undefined FUN_1414dd1fe(void)

void FUN_1414dd1fe(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x130))(param_2,local_48);
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1406f071e(param_1,iVar2);
  }
  _Src = local_30;
  lVar3 = *param_1;
  lVar4 = (longlong)iVar2 * 0x20;
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = local_40;
  puVar1[1] = uStack_3c;
  puVar1[2] = uStack_38;
  puVar1[3] = uStack_34;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
  *(int *)(lVar3 + 0x18 + lVar4) = local_28;
  if ((longlong)local_28 == 0) {
    *(undefined4 *)(lVar3 + lVar4 + 0x1c) = 0;
  }
  else {
    puVar5 = (undefined8 *)(lVar4 + lVar3 + 0x10);
    FUN_1446dd670(puVar5,local_28,0);
    memcpy((void *)*puVar5,_Src,(longlong)local_28 * 2);
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414dd2d0 FUN_1414dd2d0 body=113 status=ok
// SIG undefined FUN_1414dd2d0(void)

longlong FUN_1414dd2d0(uint param_1)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_14caea158;
  if (DAT_14caea160 != (undefined *)0x0) {
    puVar3 = DAT_14caea160;
  }
  do {
    if (DAT_14caea128 != DAT_14caea154) {
      iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14caea168 - 1U & param_1) * 4);
      while (iVar1 != -1) {
        lVar2 = DAT_14caea120 + (longlong)iVar1 * 0x80;
        if (*(uint *)(DAT_14caea120 + (longlong)iVar1 * 0x80) == param_1) goto LAB_1414dd30b;
        iVar1 = *(int *)(lVar2 + 0x70);
      }
    }
    lVar2 = 0;
LAB_1414dd30b:
    param_1 = 0x24;
    if (lVar2 != 0) {
      return lVar2 + 0x10;
    }
  } while( true );
}



// FUNCTION 1414dd342 FUN_1414dd342 body=42 status=ok
// SIG undefined FUN_1414dd342(void)

undefined4 * FUN_1414dd342(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 1414dd36c FUN_1414dd36c body=30 status=ok
// SIG undefined FUN_1414dd36c(void)

void FUN_1414dd36c(void)

{
  FUN_1449bda34();
  return;
}



// FUNCTION 1414dd38a FUN_1414dd38a body=10 status=ok
// SIG undefined FUN_1414dd38a(void)

undefined8 * FUN_1414dd38a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1414dd394 FUN_1414dd394 body=27 status=ok
// SIG undefined FUN_1414dd394(void)

undefined8 FUN_1414dd394(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x398);
  if (lVar1 != 0) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x39a)) &
            0xffffffffffffff08;
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 3);
  }
  return 0;
}



// FUNCTION 1414dd3b0 FUN_1414dd3b0 body=33 status=ok
// SIG undefined FUN_1414dd3b0(void)

undefined1 FUN_1414dd3b0(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x4c3) == '\x01') {
    if (*(char *)(param_1 + 0x4c0) == '\0') {
      uVar1 = *(undefined1 *)(param_1 + 0x4c1);
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1414dd3d2 FUN_1414dd3d2 body=230 status=ok
// SIG undefined FUN_1414dd3d2(void)

void FUN_1414dd3d2(longlong *param_1,int *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x58))();
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  if (iVar4 != -0x662bf3f || ((iVar2 != 0 || iVar1 != 0) || iVar3 != 0)) {
    piVar7 = (int *)*puVar6;
    iVar5 = *(int *)(puVar6 + 1);
    lVar10 = (longlong)iVar5;
    if (lVar10 != 0) {
      lVar9 = lVar10 * 0x28;
      piVar8 = piVar7;
      do {
        if ((((*piVar8 == iVar1) && (piVar8[1] == iVar2)) && (piVar8[2] == iVar3)) &&
           (piVar8[3] == iVar4)) {
          if (piVar8 != (int *)0x0) {
            piVar8[4] = param_3;
            goto LAB_1414dd4a3;
          }
          break;
        }
        piVar8 = piVar8 + 10;
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != 0);
    }
    *(uint *)(puVar6 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)puVar6 + 0xc) < iVar5 + 1U) {
      FUN_14009063a(puVar6,iVar5);
      piVar7 = (int *)*puVar6;
    }
    piVar8 = piVar7 + lVar10 * 10;
    *piVar8 = iVar1;
    piVar8[1] = iVar2;
    piVar8[2] = iVar3;
    piVar8[3] = iVar4;
    piVar8[4] = param_3;
    piVar8[5] = 1;
    piVar8[6] = 0;
    piVar8[7] = 0;
LAB_1414dd4a3:
    *(undefined8 *)(piVar8 + 8) = param_4;
  }
  return;
}



// FUNCTION 1414dd4b8 FUN_1414dd4b8 body=241 status=ok
// SIG undefined FUN_1414dd4b8(void)

uint * FUN_1414dd4b8(longlong *param_1,uint *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [4];
  undefined8 local_bc;
  undefined4 local_b4;
  uint local_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined2 local_2f;
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0[0] = 0;
  local_bc = 0;
  local_b4 = 0;
  local_b0 = local_b0 & 0xffffff00;
  uStack_ac = 0;
  uStack_a4 = 0;
  local_9c = 0;
  local_90 = 0xc69c4000;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_2f = 1;
  local_2d = 0;
  local_2c = 0;
  FUN_1401aa3da((longlong)&uStack_a4 + 4,*param_1 + 0x178);
  lVar1 = FUN_140149a73(param_1[1],0);
  if (lVar1 == 0) {
    local_2c = 2;
  }
  else {
    FUN_140983ba6(param_3,lVar1,local_c0);
  }
  *param_2 = local_b0;
  param_2[1] = (uint)uStack_ac;
  param_2[2] = uStack_ac._4_4_;
  param_2[3] = (uint)uStack_a4;
  FUN_1409838b8(local_c0);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414dd5aa FUN_1414dd5aa body=451 status=ok
// SIG undefined FUN_1414dd5aa(void)

void FUN_1414dd5aa(longlong *param_1)

{
  ushort *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 6);
  if ((int)uVar4 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar4) {
    return;
  }
  lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
  if (lVar6 == 0) {
    return;
  }
  if (*(int *)(lVar6 + 0x10) != *(int *)((longlong)param_1 + 0x34)) {
    return;
  }
  if ((*(uint *)(lVar6 + 8) & 0x10200000) != 0) {
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x8e) & 1) != 0) {
    return;
  }
  lVar6 = FUN_1407f4ede(param_1);
  if (lVar6 != 0) {
    lVar5 = FUN_1407f4df8();
    if ((((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) && ((int)param_1[0x1a] != 0)) &&
       (cVar2 = FUN_143eb4db6(param_1,param_1 + 0x19,(int)param_1[0x29]), cVar2 == '\0')) {
      uVar4 = *(uint *)((longlong)param_1 + 0x8c) & 0xfffeffff;
      goto LAB_1414dd6cf;
    }
  }
  (**(code **)(*param_1 + 0x80))(param_1,lVar6);
  lVar5 = param_1[0x51];
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x50) = 1;
    puVar1 = *(ushort **)(lVar5 + 0x80);
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
    }
  }
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x52) = 0;
    iVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(lVar6 + 0xc);
    *(uint *)(param_1 + 0x52) = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar3 = iVar7;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x294) = iVar3;
  uVar4 = *(uint *)((longlong)param_1 + 0x8c) | 0x10000;
LAB_1414dd6cf:
  *(uint *)((longlong)param_1 + 0x8c) = uVar4;
  return;
}



// FUNCTION 1414dd76e FUN_1414dd76e body=781 status=ok
// SIG undefined FUN_1414dd76e(void)

undefined8 * FUN_1414dd76e(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b9af600;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_60[2] = lVar6;
  *local_60 = (longlong)&PTR_FUN_14b9af590;
  local_60[3] = 0;
  iVar9 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar9 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar9 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar9 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar5;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar9 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar9;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar8;
  *param_2 = 0;
  if ((local_60 == (longlong *)0x0 || local_58 == 0) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_1414dd9cf;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_1414dd9bd;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar9 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar9) {
        iVar5 = iVar9;
        if (0 < iVar9) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
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
        if ((iVar7 < iVar9) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c(param_1);
        }
      }
    }
    if (local_60 == (longlong *)0x0 || local_58 == 0) {
      local_50 = 0;
    }
    else {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
    }
    *param_2 = local_50;
    iVar9 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar9 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar9 + 1U) {
      FUN_1447a71f6(param_1,iVar9);
    }
    lVar2 = *param_1;
    lVar8 = (longlong)iVar9 * 0x10;
    *(undefined8 *)(lVar2 + lVar8) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar8) = 0;
    *(longlong **)(lVar2 + lVar8) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar8) = local_58;
LAB_1414dd9bd:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1414dd9cf:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1414dda7c FUN_1414dda7c body=3314 status=ok
// SIG undefined FUN_1414dda7c(void)

void FUN_1414dda7c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  int *_Src;
  undefined8 *puVar7;
  undefined4 *_Src_00;
  undefined1 *_Src_01;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined1 *local_168;
  code *local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_b4;
  undefined4 local_88;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_1414ddb79;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_1414ddb79:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_48);
            goto LAB_1414ddc4f;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_48,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_48,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_48,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
LAB_1414ddc4f:
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_50);
            goto LAB_1414ddd25;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_50) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_50,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_50,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_50,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_50,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
LAB_1414ddd25:
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_160 = FUN_1405ebbb2;
      local_168 = &DAT_14c9520b8;
      local_170 = 0;
      local_178 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_54);
            goto LAB_1414dddfa;
          }
        }
        _Src_00 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_54) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_54,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_54,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_54,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_54,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
LAB_1414dddfa:
  local_58 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_14067a048;
      local_170 = 0;
      local_178 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_58);
            goto LAB_1414ddecd;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_58) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_58,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_58,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_58,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_58,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
LAB_1414ddecd:
  iVar5 = local_58;
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_158);
            goto LAB_1414ddfa4;
          }
        }
        _Src_01 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_01 != local_158) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_158,_Src_01,(int)plVar1[6]);
          }
          else {
            memcpy(local_158,_Src_01,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_158,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_158,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
LAB_1414ddfa4:
  local_168 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_168 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_170 = CONCAT71(local_170._1_7_,iVar5 != 0);
  local_178 = CONCAT44(local_178._4_4_,local_54);
  (**(code **)(*param_1 + 0x6b0))(param_1,local_40,local_48,local_50);
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414de770 FUN_1414de770 body=977 status=ok
// SIG undefined FUN_1414de770(void)

void FUN_1414de770(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,char param_6,void *param_7)

{
  int iVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_1b8 [44];
  undefined1 local_18c [4];
  longlong local_188;
  undefined1 local_180 [16];
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  memcpy(local_180,param_7,0xb8);
  local_c8 = *(undefined8 *)((longlong)param_7 + 0xb8);
  local_c0 = *(undefined8 *)((longlong)param_7 + 0xc0);
  uStack_b8 = *(undefined8 *)((longlong)param_7 + 200);
  local_b0 = *(undefined4 *)((longlong)param_7 + 0xd0);
  local_ac = *(undefined1 *)((longlong)param_7 + 0xd4);
  local_88 = *(undefined8 *)((longlong)param_7 + 0xf8);
  local_a8 = *(undefined4 *)((longlong)param_7 + 0xd8);
  uStack_a4 = *(undefined4 *)((longlong)param_7 + 0xdc);
  uStack_a0 = *(undefined4 *)((longlong)param_7 + 0xe0);
  uStack_9c = *(undefined4 *)((longlong)param_7 + 0xe4);
  local_98 = *(undefined8 *)((longlong)param_7 + 0xe8);
  uStack_90 = *(undefined8 *)((longlong)param_7 + 0xf0);
  if (((param_4 != 0) && (param_2 != 0)) && (param_6 == '\0')) {
    fVar10 = (float)(*(double *)(param_2 + 400) + *(double *)(param_4 + 400));
    if (0.0 < fVar10) {
      dVar8 = *(double *)(param_2 + 0x270) - *(double *)(param_4 + 0x270);
      dVar3 = *(double *)(param_2 + 0x260) - *(double *)(param_4 + 0x260);
      dVar4 = *(double *)(param_2 + 0x268) - *(double *)(param_4 + 0x268);
      dVar5 = dVar8 * dVar8 + dVar3 * dVar3 + dVar4 * dVar4;
      if (((dVar5 != 1.0) || (local_130 = dVar8, dVar9 = dVar4, dVar6 = dVar3, NAN(dVar5))) &&
         (local_130 = DAT_14c8464f0, dVar9 = DAT_14c8464e8, dVar6 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar5)) {
        dVar6 = 1.0 / SQRT(dVar5);
        local_130 = dVar8 * dVar6;
        dVar9 = dVar4 * dVar6;
        dVar6 = dVar3 * dVar6;
      }
      dVar3 = (double)(float)((*(double *)(param_4 + 400) / (double)fVar10) *
                             (double)(float)SQRT(dVar5));
      dStack_168 = *(double *)(param_4 + 0x268) + dVar9 * dVar3;
      local_160 = *(double *)(param_4 + 0x270) + local_130 * dVar3;
      local_170 = *(double *)(param_4 + 0x260) + dVar3 * dVar6;
      local_128._0_4_ = SUB84(dVar6,0);
      local_128._4_4_ = (undefined4)((ulonglong)dVar6 >> 0x20);
      uStack_120._0_4_ = SUB84(dVar9,0);
      uStack_120._4_4_ = (undefined4)((ulonglong)dVar9 >> 0x20);
      local_140 = (undefined4)local_128;
      uStack_13c = local_128._4_4_;
      uStack_138 = (undefined4)uStack_120;
      uStack_134 = uStack_120._4_4_;
      local_158 = local_170;
      dStack_150 = dStack_168;
      local_148 = local_160;
      local_128 = dVar6;
      uStack_120 = dVar9;
      local_118 = local_130;
    }
  }
  FUN_1411128ea(param_1,*(undefined8 *)(param_1 + 0xa8),param_3,local_180);
  if (param_3 != 0) {
    lVar7 = FUN_140a9a392();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
         ) == lVar7 + 0x30)) {
      lVar7 = FUN_140a9a392();
      iVar1 = *(int *)(lVar7 + 0x38);
      if ((iVar1 <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          == lVar7 + 0x30)) {
        if (*(char *)(param_3 + 0x3d1) == '\0') {
          local_188 = param_3;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(param_3);
          }
          FUN_148f03fbe(param_1 + 0x1a18,local_18c,&local_188);
          FUN_148f01014(param_1);
        }
        else {
          plVar2 = *(longlong **)(param_1 + 0x1990);
          if (plVar2 != (longlong *)0x0) {
            if (plVar2[0x2e2] == 0) {
              if (((*(byte *)((longlong)plVar2 + 0x65) & 2) == 0) &&
                 ((*(byte *)(plVar2 + 0x69) & 2) == 0)) {
                (**(code **)(*plVar2 + 0x5c8))(plVar2,0);
              }
            }
            else {
              FUN_1458ae910(plVar2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),2),0);
            }
          }
        }
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414deb46 FUN_1414deb46 body=1 status=ok
// SIG undefined FUN_1414deb46(void)

void FUN_1414deb46(void)

{
  return;
}



// FUNCTION 1414deb48 FUN_1414deb48 body=216 status=ok
// SIG undefined FUN_1414deb48(void)

void FUN_1414deb48(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ab1ac10;
  FUN_144760e21(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x1c];
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
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1459fe886(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145d03412(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1414dec20 FUN_1414dec20 body=517 status=ok
// SIG undefined FUN_1414dec20(void)

void FUN_1414dec20(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 0x68) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar4 = *(longlong **)(param_1 + 0x70);
  if (plVar4 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x70);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x70) = plVar2;
  }
  local_40 = (void *)0x0;
  uStack_38._0_4_ = *(int *)(param_3 + 1);
  lVar5 = (longlong)(int)uStack_38;
  _Src = (void *)*param_3;
  if (lVar5 == 0) {
    local_44 = 0;
    local_48 = 0;
    local_50 = (void *)0x0;
  }
  else {
    FUN_1446dd670(&local_40,(int)uStack_38,0);
    memcpy(local_40,_Src,lVar5 * 2);
    local_50 = local_40;
    local_48 = (int)uStack_38;
    local_44 = uStack_38._4_4_;
  }
  local_40 = (void *)0x0;
  uStack_38 = 0;
  cVar3 = FUN_140c44378(*param_2);
  if (cVar3 == '\0') {
    local_68 = 0;
    FUN_1413f0866(*param_2,&local_50,&local_68,0);
    FUN_1444bd3c6(&local_68,&local_50,*param_2);
    *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_64,local_68);
    if ((undefined4 *)(param_1 + 0x50) == &local_68) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x58) = local_60;
      local_60 = 0;
      *(undefined4 *)(param_1 + 0x60) = local_58;
      *(undefined4 *)(param_1 + 100) = local_54;
    }
  }
  else {
    FUN_1444bd3c6(&local_68,&local_50,*param_2);
    *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_64,local_68);
    if ((undefined4 *)(param_1 + 0x50) == &local_68) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x58) = local_60;
      local_60 = 0;
      *(undefined4 *)(param_1 + 0x60) = local_58;
      *(undefined4 *)(param_1 + 100) = local_54;
    }
    FUN_1444bea9a(param_1);
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414dee26 FUN_1414dee26 body=321 status=ok
// SIG undefined FUN_1414dee26(void)

void FUN_1414dee26(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae41e10;
  param_1[5] = &PTR_FUN_14ae42300;
  param_1[0x2d] = &PTR_FUN_14ae42340;
  if (*(char *)(param_1 + 0x82) == '\x01') {
    if (param_1[0x80] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x82) = 0;
  }
  FUN_144760e21(param_1[0x7a],*(undefined4 *)(param_1 + 0x7b));
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x77],*(undefined4 *)(param_1 + 0x78));
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x74],*(undefined4 *)(param_1 + 0x75));
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x71],*(undefined4 *)(param_1 + 0x72));
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x70];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  FUN_14117c118(param_1);
  return;
}



// FUNCTION 1414def68 FUN_1414def68 body=544 status=ok
// SIG undefined FUN_1414def68(void)

void FUN_1414def68(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_98 [40];
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 0xc10;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if (*(int *)(param_1 + 0xc20) == 0) {
    uVar12 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_144a7765a(&local_68);
    uVar12 = local_68 >> 0x20;
  }
  lVar7 = local_60;
  iVar16 = (int)local_68;
  uVar15 = (uint)local_58;
  iVar10 = local_58._4_4_;
  iVar13 = local_50;
  if (local_58._4_4_ < *(int *)(local_60 + 0x10)) {
    do {
      lVar8 = *(longlong *)(param_1 + 0xc00);
      if (*(longlong *)(param_1 + 0xc00) == 0) {
        lVar8 = param_1;
      }
      plVar5 = *(longlong **)(lVar8 + 0x20 + (longlong)iVar10 * 0x30);
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
      uVar15 = uVar15 & ~(uint)uVar12;
      lVar8 = *(longlong *)(lVar7 + 8);
      if (*(longlong *)(lVar7 + 8) == 0) {
        lVar8 = lVar7;
      }
      iVar4 = *(int *)(lVar7 + 0x10);
      lVar14 = (longlong)iVar16;
      uVar9 = *(uint *)(lVar8 + lVar14 * 4) & uVar15;
      if (uVar9 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar6 = iVar10;
        if (iVar10 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar10 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar9 = *(uint *)(lVar8 + lVar14 * 4 + 4 + lVar11 * 4);
          if (uVar9 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar14 == lVar11) goto LAB_1414df0ec;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar15 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar9 & uVar9);
      uVar3 = uVar12 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar10 = (iVar13 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar4);
  }
LAB_1414df0ec:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0xc08) = 0;
  if (*(int *)(param_1 + 0xc0c) != param_2) {
    FUN_145bfd66e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0xc28) = 0xffffffff;
  uVar15 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0xc20) = 0;
  if ((*(int *)(param_1 + 0xc24) < (int)uVar15) || (0x40 < *(int *)(param_1 + 0xc24))) {
    uVar9 = 0x40;
    if (0x40 < (int)uVar15) {
      uVar9 = uVar15;
    }
    *(uint *)(param_1 + 0xc24) = uVar9;
    FUN_1401cad60(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414df18a FUN_1414df18a body=28 status=ok
// SIG undefined FUN_1414df18a(void)

undefined8 FUN_1414df18a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 8) == 0) || (lVar1 = *(longlong *)(param_1 + 0x10), lVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 8));
  }
  return uVar2;
}



// FUNCTION 1414df1a6 FUN_1414df1a6 body=692 status=ok
// SIG undefined FUN_1414df1a6(void)

undefined8 FUN_1414df1a6(longlong *param_1,undefined1 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_188 [32];
  undefined1 local_168 [8];
  undefined **local_160 [5];
  byte local_137;
  byte local_136;
  longlong *local_108;
  longlong local_e8;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_7c;
  undefined8 local_74;
  undefined1 local_6c;
  byte local_6b;
  undefined1 local_6a;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar1 = *(uint *)(param_1 + 6);
  if ((uVar1 & 2) == 0) {
    lVar2 = param_1[5];
    if (*(int *)(lVar2 + 0x134) - 2U < 2) {
      if ((uVar1 >> 10 & 1) == 0) {
LAB_1414df1fd:
        if (((*(longlong *)(lVar2 + 0x140) == 0) ||
            (*(char *)(*(longlong *)(lVar2 + 0x140) + 1) == '\x02')) &&
           (((*(byte *)(lVar2 + 0xa4) & 2) != 0 ||
            ((*(longlong *)(*(longlong *)(lVar2 + 0x58) + 0xf0) != 0 ||
             (**(int **)(lVar2 + 0x1410) != *(int *)(lVar2 + 0x1434))))))) {
          FUN_144a679e2(local_160,*(undefined8 *)(lVar2 + 0x68),
                        (longlong)((*(int *)(lVar2 + 0xa0) * 8 - *(int *)(lVar2 + 0x130)) + -0x235))
          ;
          local_160[0] = &PTR_FUN_14a8a3730;
          local_98 = 0;
          local_88 = 0;
          local_80 = *(undefined4 *)((longlong)param_1 + 0x34);
          local_7c = param_1[8];
          local_74 = 0;
          local_6b = local_6b & 0xf8;
          local_38 = 0;
          local_30 = 0x400000000;
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_136 = local_136 & 0xfd | *(char *)(param_1[5] + 0x158) * '\x02';
          if (0x1ff < *(int *)((longlong)param_1 + 0x4c)) {
            local_137 = local_137 | 2;
            for (; local_d8 != 0; local_d8 = *(longlong *)(local_d8 + 0x88)) {
              *(byte *)(local_d8 + 0x29) = *(byte *)(local_d8 + 0x29) | 2;
            }
          }
          local_6c = 0x14;
          *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 4;
          local_90 = param_1;
          local_6a = param_2;
          (**(code **)(*param_1 + 0x308))(param_1,local_168,local_160,0);
          local_160[0] = &PTR_FUN_14a8a3730;
          if (local_38 != 0) {
            FUN_1400020a8();
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          local_160[0] = &PTR_FUN_149e37560;
          if (local_d0 != 0) {
            FUN_1400020a8();
          }
          local_160[0] = &PTR__purecall_149e35f70;
          if (local_108 != (longlong *)0x0) {
            if (*local_108 != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(local_108);
          }
          if (local_e8 != 0) {
            if (*(longlong *)(local_e8 + 0x40) != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(local_e8);
          }
          goto LAB_1414df239;
        }
      }
    }
    else if ((*(int *)(lVar2 + 0x134) == 4) &&
            ((uVar1 & 0x400) == 0 && *(int *)((longlong)param_1 + 0x34) == 0)) goto LAB_1414df1fd;
  }
  local_c0 = 0;
LAB_1414df239:
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return local_c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414df45c FUN_1414df45c body=130 status=ok
// SIG undefined FUN_1414df45c(void)

undefined8 * FUN_1414df45c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_14afcb7e0;
  *(undefined2 *)(param_1 + 2) = 0;
  iVar1 = DAT_14c7632f0 + 1;
  *(int *)((longlong)param_1 + 0x14) = DAT_14c7632f0;
  DAT_14c7632f0 = iVar1;
  uVar2 = FUN_1401cb356();
  FUN_145aa41ca(param_1 + 3,L"FXeLLModule",0,uVar2);
  *param_1 = &PTR_FUN_14afccff0;
  param_1[3] = &PTR_FUN_14afcd0a0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 1414df4f8 FUN_1414df4f8 body=12 status=ok
// SIG undefined FUN_1414df4f8(void)

void FUN_1414df4f8(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 1414df504 FUN_1414df504 body=306 status=ok
// SIG undefined FUN_1414df504(void)

void FUN_1414df504(longlong *param_1,longlong *param_2)

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
  if (param_2 == param_1) goto LAB_1414df58d;
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
LAB_1414df566:
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
      goto LAB_1414df566;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1414df58d;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1414df58d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414df638 FUN_1414df638 body=465 status=ok
// SIG undefined FUN_1414df638(void)

/* WARNING: Removing unreachable block (ram,0x0001414df707) */

void FUN_1414df638(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = FUN_146586a0a();
  lVar10 = 0xd8;
  if (cVar4 == '\0') {
    bVar5 = FUN_145af3d04(param_1,param_2);
    lVar10 = (ulonglong)bVar5 * 8 + 0xd8;
  }
  local_48 = 0;
  uStack_40 = 0;
  plVar2 = (longlong *)*param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((plVar2 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 == '\0')) {
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_58);
  }
  uVar7 = uStack_40;
  lVar8 = (longlong)(int)uStack_40;
  uVar6 = (int)uStack_40 + 1;
  uStack_40 = CONCAT44(uStack_40._4_4_,uVar6);
  if (uStack_40._4_4_ < uVar6) {
    FUN_1447a1bd6(&local_48,uVar7 & 0xffffffff);
  }
  lVar8 = lVar8 * 0x10;
  *(undefined8 *)(local_48 + lVar8) = 0;
  *(longlong *)(local_48 + lVar8) = local_58;
  *(int *)(local_48 + 8 + lVar8) = (int)uStack_50;
  *(undefined4 *)(local_48 + 0xc + lVar8) = uStack_50._4_4_;
  uStack_50 = 0;
  local_58 = 0;
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
  FUN_14131cafa(param_1,&local_58);
  lVar8 = local_58;
  lVar9 = (longlong)(int)uStack_50;
  if (lVar9 == 0) {
    uVar7 = 0;
  }
  else {
    lVar11 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(lVar8 + lVar11) + 0x38);
      if ((plVar2 != (longlong *)0x0) && (cVar4 = (**(code **)(*plVar2 + 0xb8))(), cVar4 != '\0')) {
        plVar2 = *(longlong **)(*(longlong *)(lVar8 + lVar11) + 0x38);
        (**(code **)(*plVar2 + lVar10))(plVar2,&local_48);
      }
      lVar11 = lVar11 + 0x10;
    } while (lVar9 * 0x10 != lVar11);
    uVar7 = uStack_50 & 0xffffffff;
  }
  FUN_14131cf14(local_58,uVar7);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414df80a FUN_1414df80a body=570 status=ok
// SIG undefined FUN_1414df80a(void)

void FUN_1414df80a(longlong param_1,longlong *param_2,undefined8 param_3,int param_4,
                  longlong *param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ushort *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  int local_c8;
  longlong local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  ushort local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = *(longlong *)(param_1 + 0x38);
  local_80 = param_1;
  local_78 = param_3;
  if ((*(byte *)(lVar3 + 0x1d + (longlong)param_4 * 0x20) & 4) == 0) {
    local_4a = *(ushort *)(param_5 + 1);
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (ushort *)*puVar4 + 1;
    if ((ushort *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_4a,2);
      }
      else {
        FUN_1457251a8(param_2,&local_4a);
      }
    }
    else {
      local_4a = *(ushort *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    plVar8 = (longlong *)(lVar3 + (longlong)param_4 * 0x20);
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      uVar6 = *(uint *)(param_5 + 1);
    }
    else {
      uVar6 = (uint)local_4a;
    }
    cVar5 = FUN_1414dfa45(uVar6,*plVar8);
    if (cVar5 == '\0') {
      FUN_14572541c(param_2);
    }
    if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
      uVar6 = *(uint *)(param_5 + 1);
      if (((*(byte *)(param_2 + 5) & 1) != 0) && (uVar6 != local_4a)) {
        lVar3 = *plVar8;
        uVar2 = *(undefined1 *)(lVar3 + 0x70);
        local_5c = (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x178))();
        local_70 = *(longlong *)(lVar3 + 0x78);
        local_60 = *(undefined4 *)(local_70 + 0x34);
        local_68 = param_5;
        local_58 = uVar2;
        FUN_144a8a902(&local_70,local_4a);
        uVar6 = *(uint *)(param_5 + 1);
      }
      if (0 < (int)uVar6) {
        lVar3 = *param_5;
        iVar7 = 0;
        do {
          if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) break;
          local_c0 = (ulonglong)((uint)*(ushort *)((longlong)plVar8 + 10) * iVar7) + lVar3;
          local_c8 = *(ushort *)(plVar8 + 1) - 1;
          local_90 = param_10;
          local_98 = param_9;
          local_a0 = param_8;
          local_a8 = param_7;
          local_b8 = param_6;
          local_b0 = iVar7;
          FUN_1404e55aa(local_80,param_2,local_78,param_4 + 1);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)param_5[1]);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414dfa45 FUN_1414dfa45 body=178 status=ok
// SIG undefined FUN_1414dfa45(void)

bool FUN_1414dfa45(int param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0xfffe < param_1) {
    FUN_14689af94(param_2,&local_38,0);
    local_48 = local_38;
    if (local_30 == 0) {
      local_48 = &DAT_149dfb77a;
    }
    FUN_140002266(local_28,
                  L"ValidateArraySize: Replicated arrays must be smaller than %d elements in size. ArraySize = (%d) Property = (%s)."
                  ,0xffff,param_1);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 < 0xffff;
}



// FUNCTION 1414dfaf8 FUN_1414dfaf8 body=43 status=ok
// SIG undefined FUN_1414dfaf8(void)

void FUN_1414dfaf8(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 1414dfb24 FUN_1414dfb24 body=83 status=ok
// SIG undefined FUN_1414dfb24(void)

longlong FUN_1414dfb24(longlong param_1)

{
  FUN_140056680(param_1,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x10,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x20,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x30,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  return param_1;
}



// FUNCTION 1414dfb78 FUN_1414dfb78 body=14 status=ok
// SIG undefined FUN_1414dfb78(void)

void FUN_1414dfb78(undefined8 *param_1)

{
  *param_1 = DAT_14cad2370;
  return;
}



// FUNCTION 1414dfba2 FUN_1414dfba2 body=787 status=ok
// SIG undefined FUN_1414dfba2(void)

longlong * FUN_1414dfba2(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb98610) && (FUN_144b3d300(&DAT_14cb98610), DAT_14cb98610 == -1)) {
    DAT_14cb98600 = 0;
    DAT_14cb98608 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_143f57a66);
    _Init_thread_footer(&DAT_14cb98610);
  }
  plVar5 = DAT_14cb98608;
  if (((DAT_14cb98600 == 0) || (DAT_14cb98608 == (longlong *)0x0)) || ((int)DAT_14cb98608[1] < 1)) {
    FUN_1446ddc76(&local_38,"ShiftMicropatching",1);
    uVar3 = FUN_144a52528();
    lVar4 = FUN_1401e3324(uVar3,local_38);
    lVar7 = *(longlong *)(lVar4 + 0x10);
    if (lVar7 == 0) {
      plVar5 = (longlong *)FUN_14001cc68(0x118);
      memset(plVar5,0,0x118);
      FUN_145c029c0(plVar5);
      plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar6[1] = (longlong)&DAT_100000001;
      *plVar6 = (longlong)&PTR_FUN_14b4ff0f0;
      plVar6[2] = (longlong)plVar5;
      if ((plVar5 != (longlong *)0x0) &&
         (((*plVar5 == 0 || (plVar5[1] == 0)) || (*(int *)(plVar5[1] + 8) < 1)))) {
        if (plVar6 == (longlong *)0x0) {
          *plVar5 = (longlong)plVar5;
          plVar8 = (longlong *)plVar5[1];
          if (plVar8 != (longlong *)0x0) {
LAB_1414dfe06:
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
            plVar5[1] = (longlong)plVar6;
            if (plVar6 != (longlong *)0x0) goto LAB_1414dfd07;
          }
        }
        else {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          *plVar5 = (longlong)plVar5;
          if ((longlong *)plVar5[1] != plVar6) {
            LOCK();
            *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
            UNLOCK();
            plVar8 = (longlong *)plVar5[1];
            if (plVar8 != (longlong *)0x0) goto LAB_1414dfe06;
            plVar5[1] = (longlong)plVar6;
          }
LAB_1414dfd07:
          LOCK();
          plVar8 = plVar6 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
      }
      *(longlong **)(lVar4 + 0x10) = plVar5;
      plVar5 = *(longlong **)(lVar4 + 0x18);
      if (plVar6 == plVar5) {
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar6 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
            plVar5 = plVar6;
            goto joined_r0x0001414dfe65;
          }
        }
      }
      else {
        *(longlong **)(lVar4 + 0x18) = plVar6;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar5 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
joined_r0x0001414dfe65:
            if (iVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
      FUN_145c02a56(*(undefined8 *)(lVar4 + 0x10));
      lVar7 = *(longlong *)(lVar4 + 0x10);
    }
    plVar5 = *(longlong **)(lVar4 + 0x18);
    DAT_14cb98600 = lVar7;
    plVar6 = DAT_14cb98608;
    if (DAT_14cb98608 != plVar5) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
      }
      plVar8 = DAT_14cb98608;
      plVar6 = plVar5;
      if (DAT_14cb98608 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)DAT_14cb98608 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
    }
    DAT_14cb98608 = plVar6;
    plVar5 = DAT_14cb98608;
    *param_1 = DAT_14cb98600;
    param_1[1] = (longlong)plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_1414dfc0d;
  }
  else {
    *param_1 = DAT_14cb98600;
    param_1[1] = (longlong)plVar5;
  }
  LOCK();
  *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
  UNLOCK();
LAB_1414dfc0d:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414dfeb6 FUN_1414dfeb6 body=422 status=ok
// SIG undefined FUN_1414dfeb6(void)

void FUN_1414dfeb6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x1c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 1414e005e FUN_1414e005e body=422 status=ok
// SIG undefined FUN_1414e005e(void)

void FUN_1414e005e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x1c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 1414e0206 FUN_1414e0206 body=87 status=ok
// SIG undefined FUN_1414e0206(void)

bool FUN_1414e0206(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  bVar2 = true;
  if ((*(longlong *)(param_1 + 0xb0) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x218), lVar1 != 0)) {
    bVar2 = 1 < *(int *)(lVar1 + 8);
  }
  if (*(char *)(param_1 + 0x2f0) == '\x01') {
    if (*(char *)(param_1 + 0x1fb) != '\x02') {
      if (*(char *)(param_1 + 0x1fb) != '\x01') {
        return false;
      }
      if (0 < DAT_14c761450) {
        return bVar2;
      }
      return false;
    }
    if (0 < DAT_14c761450) {
      return bVar2;
    }
  }
  return false;
}



// FUNCTION 1414e025e FUN_1414e025e body=152 status=ok
// SIG undefined FUN_1414e025e(void)

bool FUN_1414e025e(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  
  if (((((DAT_14c76152c == '\x01') && (*(char *)(param_1 + 0x1fc) != '\0')) &&
       ((lVar3 = *(longlong *)(param_1 + 0xb0), lVar3 != 0 ||
        (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)))) &&
      (((*(byte *)(lVar3 + 0x152) == 1 || (*(byte *)(lVar3 + 0x152) - 5 < 2)) &&
       (*(longlong *)(lVar3 + 0x178) != 0)))) && (DAT_14c76152c == '\x01')) {
    bVar1 = *(byte *)(param_1 + 0x1fc);
    iVar2 = *(int *)(*(longlong *)(lVar3 + 0x178) + 0x3e4);
    if (iVar2 < 0) {
      iVar2 = FUN_141348de4();
    }
    if (iVar2 < (int)(uint)bVar1) {
      return false;
    }
  }
  return (int)(uint)*(byte *)(param_1 + 0x1fc) <= DAT_14cb0cbf8;
}



// FUNCTION 1414e02f6 FUN_1414e02f6 body=2215 status=ok
// SIG undefined FUN_1414e02f6(void)

longlong * FUN_1414e02f6(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code **ppcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  uint uVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined1 uVar15;
  int iVar16;
  DWORD DVar17;
  DWORD DVar18;
  undefined4 *puVar19;
  uint *puVar20;
  undefined8 uVar21;
  byte bVar22;
  byte bVar23;
  uint uVar24;
  longlong *plVar25;
  uint *puVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  float fVar29;
  undefined1 auStack_e8 [32];
  code **local_c8;
  longlong local_c0;
  longlong local_b8;
  code *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = param_2;
  param_1[1] = *(longlong *)(param_2 + 0x350);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x308);
  param_1[3] = *(longlong *)(param_2 + 0x400);
  bVar22 = *(byte *)(param_2 + 0x2d4) >> 1 & 1;
  bVar11 = *(byte *)(param_1 + 4);
  *(byte *)(param_1 + 4) = bVar11 & 0xfe | bVar22;
  bVar14 = (*(char *)(param_2 + 0x1fb) == '\x01') * '\x02';
  *(byte *)(param_1 + 4) = bVar11 & 0xfc | bVar22 | bVar14;
  if (*(char *)(param_2 + 0x1fb) == '\0') {
    bVar23 = (*(longlong *)(param_2 + 0xa8) != 0) << 2;
  }
  else {
    bVar23 = 0;
  }
  *(byte *)(param_1 + 4) = bVar11 & 0xf8 | bVar22 | bVar14 | bVar23;
  *(byte *)(param_1 + 4) =
       bVar11 & 0xf0 | bVar22 | bVar14 | bVar23 | *(byte *)(param_2 + 0x2d4) >> 3 & 8;
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)(param_2 + 0x2d8);
  bVar14 = *(byte *)(param_2 + 0x2dc) & 1;
  bVar11 = *(byte *)((longlong)param_1 + 0x22);
  *(byte *)((longlong)param_1 + 0x22) = bVar11 & 0xfe | bVar14;
  bVar22 = *(byte *)(param_2 + 0x2dc) & 2;
  *(byte *)((longlong)param_1 + 0x22) = bVar11 & 0xfc | bVar14 | bVar22;
  *(byte *)((longlong)param_1 + 0x22) =
       bVar11 & 0xf8 | bVar14 | bVar22 | *(byte *)(param_2 + 0x2d4) >> 3 & 4;
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)(param_2 + 0x348);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x2e4);
  fVar29 = *(float *)(param_2 + 0x2e8);
  if (fVar29 <= 0.0) {
    fVar29 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x2c) = fVar29;
  memset(param_1 + 6,0,0x90);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 800);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x324);
  fVar29 = *(float *)(param_2 + 0x328);
  if (10.0 <= fVar29) {
    fVar29 = 10.0;
  }
  if (fVar29 <= 0.1) {
    fVar29 = 0.1;
  }
  *(float *)(param_1 + 0x19) = fVar29;
  fVar29 = *(float *)(param_2 + 0x32c);
  if (1.0 <= fVar29) {
    fVar29 = 1.0;
  }
  if (fVar29 <= 0.0) {
    fVar29 = 0.0;
  }
  *(float *)((longlong)param_1 + 0xcc) = fVar29;
  *(undefined4 *)(param_1 + 0x1a) = (&DAT_14c758c60)[*(byte *)(param_2 + 0x332)];
  *(undefined4 *)((longlong)param_1 + 0xd4) = (&DAT_14c758c60)[*(byte *)(param_2 + 0x331)];
  *(undefined4 *)(param_1 + 0x1b) = (&DAT_14c758c60)[*(byte *)(param_2 + 0x330)];
  *(float *)((longlong)param_1 + 0xdc) = (float)*(byte *)(param_2 + 0x333) * 0.003921569;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_2 + 0x334) & 1;
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)(param_2 + 0x33c);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x338);
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)(param_2 + 0x340);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x344);
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)(param_2 + 0x2ec);
  uVar15 = FUN_1414e0206(param_2);
  *(undefined1 *)(param_1 + 0x1f) = uVar15;
  lVar2 = *(longlong *)(param_2 + 0x268);
  param_1[0x20] = *(longlong *)(param_2 + 0x260);
  param_1[0x21] = lVar2;
  param_1[0x22] = *(longlong *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x304);
  uVar21 = *(undefined8 *)(param_2 + 0x318);
  *(undefined8 *)((longlong)param_1 + 0x11c) = *(undefined8 *)(param_2 + 0x310);
  *(undefined8 *)((longlong)param_1 + 0x124) = uVar21;
  *(undefined1 *)((longlong)param_1 + 300) = *(undefined1 *)(param_2 + 0x30d);
  *(undefined1 *)(param_1 + 0x28) = 0;
  bVar11 = *(byte *)(param_2 + 0x2d3);
  fVar29 = *(float *)(param_2 + 0x2cc);
  fVar7 = (float)(&DAT_14c758c60)[*(byte *)(param_2 + 0x2d0)];
  fVar8 = (float)(&DAT_14c758c60)[*(byte *)(param_2 + 0x2d1)];
  *(float *)((longlong)param_1 + 0x144) =
       fVar29 * (float)(&DAT_14c758c60)[*(byte *)(param_2 + 0x2d2)];
  *(float *)(param_1 + 0x29) = fVar8 * fVar29;
  *(float *)((longlong)param_1 + 0x14c) = fVar7 * fVar29;
  *(float *)(param_1 + 0x2a) = (float)bVar11 * 0.003921569 * fVar29;
  *(byte *)((longlong)param_1 + 0x154) =
       *(byte *)((longlong)param_1 + 0x154) & 0xfe | *(char *)(param_2 + 0x1fb) == '\x02';
  lVar2 = param_2 + 0x360;
  lVar3 = param_2 + 0x410;
  ppcVar4 = (code **)(param_2 + 0x3f0);
  lVar5 = param_2 + 0x4a0;
  uVar9 = *(undefined4 *)(param_2 + 0x3f4);
  param_2 = param_2 + 0x4a4;
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar16 = *(int *)(lVar12 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar16 != 2) {
      if (iVar16 != 1) goto LAB_1414e0668;
      DVar17 = FUN_140ad26c0();
      DVar18 = GetCurrentThreadId();
      if (DVar17 == DVar18) goto LAB_1414e0acd;
      goto LAB_1414e0671;
    }
  }
  else {
LAB_1414e0668:
    if (iVar16 != 0x10) {
LAB_1414e0671:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar16 = *(int *)(lVar12 + 0xc60), iVar16 == 2))
        goto LAB_1414e0acd;
        if (iVar16 == 1) {
          DVar17 = FUN_140ad26c0();
          DVar18 = GetCurrentThreadId();
          if (DVar17 == DVar18) goto LAB_1414e0acd;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar6 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar20 = (uint *)*puVar6;
        if (puVar20 != (uint *)0x0) goto LAB_1414e0828;
        while( true ) {
          uVar24 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar24 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar24 | 1;
            __tlregdtor(&LAB_1434a3d89);
          }
          lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar19 = *(undefined4 **)(lVar12 + 0x310);
          *(undefined8 *)(lVar12 + 0x310) = 0;
          if (puVar19 == (undefined4 *)0x0) {
            puVar19 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar19 = 0xffffffff;
          *(undefined4 **)(puVar19 + 0x10) = puVar19 + 0x16;
          puVar19[0x12] = 0;
          *puVar6 = puVar19;
          FUN_140217a48(puVar6);
          puVar20 = (uint *)*puVar6;
LAB_1414e0828:
          puVar28 = (undefined8 *)(*(longlong *)(puVar20 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar26 = (uint *)(puVar28 + 0x1c);
          uVar24 = puVar20[0x12];
          if (puVar26 <= puVar20 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar20 + 0x10) = puVar20 + 0x4000;
            LOCK();
            uVar10 = *puVar20;
            *puVar20 = *puVar20 + uVar24 + 1;
            UNLOCK();
            if ((uVar10 ^ uVar24) != 0xffffffff) break;
            puVar20 = (uint *)*puVar6;
            *puVar20 = 0xffffffff;
            *(uint **)(puVar20 + 0x10) = puVar20 + 0x16;
            puVar20[0x12] = 0;
            *puVar6 = puVar20;
            puVar28 = (undefined8 *)((longlong)puVar20 + 0x5fU & 0xfffffffffffffff8);
            puVar26 = (uint *)(puVar28 + 0x1c);
            uVar24 = 0;
            if (puVar26 <= puVar20 + 0x4000) {
              uVar24 = 1;
              goto LAB_1414e08aa;
            }
          }
        }
        uVar24 = uVar24 + 1;
LAB_1414e08aa:
        *(uint **)(puVar20 + 0x10) = puVar26;
        puVar20[0x12] = uVar24;
        iVar16 = 0;
        FUN_1447247dc(puVar28,0);
        *puVar28 = &PTR_FUN_14a899990;
        puVar28[0x15] = lVar2;
        puVar28[0x16] = lVar3;
        puVar28[0x17] = ppcVar4;
        puVar28[0x18] = lVar5;
        *(undefined4 *)(puVar28 + 0x19) = uVar9;
        puVar28[0x1a] = param_1;
        puVar28[0x1b] = param_2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar24 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar24 < 2) {
            uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
            iVar16 = 0;
          }
          else {
            uVar27 = 2;
          }
        }
        else {
          iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar27 = 5;
        }
        if (*(code **)(puVar28[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar28[0xe] + 0x18))(puVar28 + 0xe,puVar28 + 9);
        }
        puVar28[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar28[9] = puVar28;
        puVar28[10] = puVar28;
        lVar2 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar2 == 0) {
          uVar13 = 1;
          if ((char)uVar27 != '\x06') {
            uVar13 = uVar27;
          }
          uVar27 = uVar13;
          uVar21 = 0;
        }
        else {
          if ((char)uVar27 == '\x06') {
            uVar27 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
          }
          uVar21 = *(undefined8 *)(lVar2 + 0x30);
        }
        puVar28[0xf] = uVar21;
        puVar28[0x10] = uVar27 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar28 + 0x1c) = iVar16;
        if (puVar28 == (undefined8 *)0x0) {
          local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar28 + 1) = *(int *)(puVar28 + 1) + 1;
          UNLOCK();
          local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(puVar28);
          LOCK();
          piVar1 = (int *)(puVar28 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar28)(puVar28,1);
          }
        }
      }
      else {
        local_a8[0] = (code *)0x0;
        local_98 = (longlong *)FUN_14001cc68(0x40,8);
        *local_98 = (longlong)&PTR_LAB_14a899950;
        local_98[1] = lVar2;
        local_98[2] = lVar3;
        local_98[3] = (longlong)ppcVar4;
        local_98[4] = lVar5;
        *(undefined4 *)(local_98 + 5) = uVar9;
        local_98[6] = (longlong)param_1;
        local_98[7] = param_2;
        if (local_98 + 1 != (longlong *)0x0) {
          local_a8[0] = FUN_1434a40f8;
        }
        local_c8 = local_a8;
        FUN_14005a792(&DAT_14ca9a440,L"FInitSkyProxy",&DAT_14cad3b64);
        if (local_a8[0] != (code *)0x0) {
          plVar25 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar25 = local_88;
          }
          (**(code **)(*plVar25 + 0x10))();
        }
      }
      goto LAB_1414e0748;
    }
  }
LAB_1414e0acd:
  local_c8 = ppcVar4;
  local_c0 = lVar5;
  local_b8 = param_2;
  FUN_147a186b6(param_1,uVar9,lVar2,lVar3);
LAB_1414e0748:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e0b9e FUN_1414e0b9e body=981 status=ok
// SIG undefined FUN_1414e0b9e(void)

void FUN_1414e0b9e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = 0;
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
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_60);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_60);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_60 = *(undefined8 *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_60);
    }
  }
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        uVar1 = *(undefined8 *)(pbVar3 + 1);
        pbVar3 = pbVar3 + 9;
        *(byte **)(param_2 + 0x20) = pbVar3;
        local_58 = (undefined2)uVar1;
        uStack_56 = (undefined2)((ulonglong)uVar1 >> 0x10);
        uStack_54 = (undefined4)((ulonglong)uVar1 >> 0x20);
        puVar4 = (undefined2 *)0x0;
        goto LAB_1414e0cfa;
      }
      (*pcVar2)(uVar1,param_2,&local_58);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
  puVar4 = *(undefined2 **)(param_2 + 0x38);
LAB_1414e0cfa:
  puVar6 = &local_58;
  if (puVar4 != (undefined2 *)0x0) {
    puVar6 = puVar4;
  }
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_68);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_68 = *(longlong *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_68);
    }
  }
  plVar5 = &local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1414e0f74(local_60,puVar6,plVar5);
  if ((DAT_14c950c29 == '\x01') && (*plVar5 != 0)) {
    FUN_1456cec3c();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e0f74 FUN_1414e0f74 body=111 status=ok
// SIG undefined FUN_1414e0f74(void)

void FUN_1414e0f74(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_140114204(param_2);
  if (cVar1 == '\0') {
    return;
  }
  lVar2 = *param_3;
  if (lVar2 == 0) {
    lVar2 = FUN_1414e0fe3(DAT_14c951640,0,0x40,0,0,0);
    *param_3 = lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  FUN_1414e10dc(lVar2,param_2,param_1);
  return;
}



// FUNCTION 1414e0fe3 FUN_1414e0fe3 body=248 status=ok
// SIG undefined FUN_1414e0fe3(void)

undefined8
FUN_1414e0fe3(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_140ffde88();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e10dc FUN_1414e10dc body=319 status=ok
// SIG undefined FUN_1414e10dc(void)

void FUN_1414e10dc(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x38) = *param_2;
  FUN_1447715ec(param_1 + 0x48,param_2 + 2);
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 0x80) = uVar1;
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
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0x84) = iVar3;
  cVar2 = FUN_140114204(param_2);
  if ((((cVar2 != '\0') && (*(int *)(param_1 + 0x84) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x80), -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0)) &&
      ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x84) &&
       ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))))) {
    FUN_1414e121b(param_1);
    return;
  }
  return;
}



// FUNCTION 1414e121b FUN_1414e121b body=3825 status=ok
// SIG undefined FUN_1414e121b(void)

void FUN_1414e121b(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined *puVar14;
  longlong *plVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  int *piVar25;
  int *piVar26;
  undefined4 *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  bool bVar30;
  bool bVar31;
  undefined1 auStack_158 [36];
  uint local_134;
  ulonglong local_130;
  uint local_124;
  undefined8 local_120;
  ulonglong local_118;
  longlong local_110;
  longlong local_108;
  uint *local_100;
  undefined4 local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined2 local_57;
  undefined1 local_55;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_e8 = (uint *)CONCAT44(local_e8._4_4_,(uint)local_e8);
  if ((((((param_1 == 0) ||
         (local_e8 = (uint *)CONCAT44(local_e8._4_4_,(uint)local_e8), *(int *)(param_1 + 0x84) == 0)
         ) || (uVar16 = *(uint *)(param_1 + 0x80),
              local_e8 = (uint *)CONCAT44(local_e8._4_4_,(uint)local_e8), (int)uVar16 < 0)) ||
       ((local_e8 = (uint *)CONCAT44(local_e8._4_4_,(uint)local_e8), DAT_14c9647dc <= (int)uVar16 ||
        (plVar17 = (longlong *)
                   ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
        local_e8 = (uint *)CONCAT44(local_e8._4_4_,(uint)local_e8), plVar17 == (longlong *)0x0))))
      || (local_e8 = (uint *)CONCAT44(local_e8._4_4_,(uint)local_e8),
         (int)plVar17[2] != *(int *)(param_1 + 0x84))) ||
     ((local_e8 = (uint *)CONCAT44(local_e8._4_4_,(uint)local_e8),
      (*(uint *)(plVar17 + 1) & 0x10200000) != 0 ||
      (local_e8 = (uint *)CONCAT44(local_e8._4_4_,(uint)local_e8), *plVar17 == 0))))
  goto LAB_1414e1fcf;
  cVar4 = FUN_140114204();
  if (cVar4 == '\0') goto LAB_1414e1fcf;
  if (*(int *)(param_1 + 0x84) == 0) {
LAB_1414e19e8:
    plVar17 = (longlong *)0x0;
  }
  else {
    uVar16 = *(uint *)(param_1 + 0x80);
    plVar17 = (longlong *)0x0;
    if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x84) ||
          ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1414e19e8;
      plVar17 = (longlong *)*puVar12;
    }
  }
  lVar6 = (**(code **)(*plVar17 + 0x180))();
  if (lVar6 == 0) goto LAB_1414e1fcf;
  uVar28 = *(ulonglong *)(lVar6 + 0x1f0);
  if (uVar28 == 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    iVar19 = 0;
  }
  else {
    uVar16 = *(uint *)(uVar28 + 0xc);
    *(uint *)(param_1 + 0x88) = uVar16;
    if ((int)uVar16 < DAT_14c9647dc) {
      lVar22 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
    }
    else {
      lVar22 = 0;
    }
    iVar19 = *(int *)(lVar22 + 0x10);
    if (*(int *)(lVar22 + 0x10) == 0) {
      LOCK();
      iVar19 = DAT_14c964868 + 1;
      UNLOCK();
      iVar24 = DAT_14c964868 + 1;
      bVar30 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar19;
      if (bVar30) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar24);
      }
      LOCK();
      iVar19 = *(int *)(lVar22 + 0x10);
      bVar30 = iVar19 == 0;
      if (bVar30) {
        *(int *)(lVar22 + 0x10) = iVar24;
        iVar19 = 0;
      }
      UNLOCK();
      if (bVar30) {
        iVar19 = iVar24;
      }
    }
  }
  *(int *)(param_1 + 0x8c) = iVar19;
  lVar6 = FUN_140149a73(lVar6,0);
  if (lVar6 == 0) goto LAB_1414e1fcf;
  if (*(int *)(param_1 + 0x84) == 0) {
LAB_1414e19f6:
    uVar8 = 0;
  }
  else {
    uVar16 = *(uint *)(param_1 + 0x80);
    uVar8 = 0;
    if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x84) ||
          ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1414e19f6;
      uVar8 = *puVar12;
    }
  }
  local_110 = lVar6;
  local_108 = param_1 + 0x38;
  local_120 = FUN_140985360(lVar6,uVar8);
  *(int *)(param_1 + 0x98) = (int)local_120;
  uVar16 = ((uint)(uVar28 >> 0x14) & 0xffff ^ (uint)(uVar28 >> 4)) * -0x7a143595;
  uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
  uVar16 = uVar16 >> 0x10 ^ uVar16;
  uVar16 = (int)local_120 + (uVar16 >> 2) + uVar16 * 0x40 + 0x9e3779b9 ^ uVar16;
  local_118 = uVar28;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_1447a97f4(&local_e8,param_1 + 0x48);
    if (0 < local_e8._4_4_) {
      lVar6 = 0;
      uVar28 = 0;
      iVar19 = local_e8._4_4_;
      iVar24 = DAT_14c948000;
      do {
        bVar30 = (uint)local_e8 != 0;
        bVar31 = (uint)local_e8 != iVar24;
        piVar25 = &DAT_14c948620;
        piVar26 = (int *)&DAT_14c948618;
        if (bVar31 && bVar30) {
          puVar27 = &uStack_e0;
          if (0 < local_c8._4_4_) {
            puVar27 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
          }
          if (1 < iVar19) {
            puVar27 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
          }
          piVar25 = (int *)((longlong)puVar27 + lVar6 + 8);
          piVar26 = (int *)((longlong)puVar27 + lVar6);
        }
        if ((*piVar26 == DAT_14cb7beb0) && (*piVar25 == DAT_14cb7beb8)) {
LAB_1414e1636:
          FUN_1402b5374(&local_e8,uVar28 & 0xffffffff,0);
          iVar19 = local_e8._4_4_;
          iVar24 = DAT_14c948000;
        }
        else {
          piVar25 = &DAT_14c948620;
          piVar26 = (int *)&DAT_14c948618;
          if (bVar31 && bVar30) {
            puVar27 = &uStack_e0;
            if (0 < local_c8._4_4_) {
              puVar27 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
            }
            if (1 < iVar19) {
              puVar27 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
            }
            piVar25 = (int *)((longlong)puVar27 + lVar6 + 8);
            piVar26 = (int *)((longlong)puVar27 + lVar6);
          }
          if ((*piVar26 == DAT_14cb7bec8) && (*piVar25 == DAT_14cb7bed0)) goto LAB_1414e1636;
          piVar25 = &DAT_14c948620;
          piVar26 = (int *)&DAT_14c948618;
          if (bVar31 && bVar30) {
            puVar27 = &uStack_e0;
            if (0 < local_c8._4_4_) {
              puVar27 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
            }
            if (1 < iVar19) {
              puVar27 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
            }
            piVar25 = (int *)((longlong)puVar27 + lVar6 + 8);
            piVar26 = (int *)((longlong)puVar27 + lVar6);
          }
          if ((*piVar26 == DAT_14cb7bee0) && (*piVar25 == DAT_14cb7bee8)) goto LAB_1414e1636;
          piVar25 = &DAT_14c948620;
          piVar26 = (int *)&DAT_14c948618;
          if (bVar31 && bVar30) {
            puVar27 = &uStack_e0;
            if (0 < local_c8._4_4_) {
              puVar27 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
            }
            if (1 < iVar19) {
              puVar27 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
            }
            piVar25 = (int *)((longlong)puVar27 + lVar6 + 8);
            piVar26 = (int *)((longlong)puVar27 + lVar6);
          }
          if ((*piVar26 == DAT_14cb7bef8) && (*piVar25 == DAT_14cb7bf00)) goto LAB_1414e1636;
          piVar25 = &DAT_14c948620;
          piVar26 = (int *)&DAT_14c948618;
          if (bVar31 && bVar30) {
            puVar27 = &uStack_e0;
            if (0 < local_c8._4_4_) {
              puVar27 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
            }
            if (1 < iVar19) {
              puVar27 = (undefined4 *)CONCAT44(uStack_cc,uStack_d0);
            }
            piVar25 = (int *)((longlong)puVar27 + lVar6 + 8);
            piVar26 = (int *)((longlong)puVar27 + lVar6);
          }
          if ((*piVar26 == DAT_14cb7bf10) && (*piVar25 == DAT_14cb7bf18)) goto LAB_1414e1636;
        }
        uVar28 = uVar28 + 1;
        lVar6 = lVar6 + 0xc;
      } while ((longlong)uVar28 < (longlong)iVar19);
    }
    if (CONCAT44(uStack_cc,uStack_d0) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_e8._0_4_ = *(int *)(param_1 + 0x48);
  }
  uVar16 = (uint)local_e8 + (uVar16 >> 2) + uVar16 * 0x40 + 0x9e3779b9 ^ uVar16;
  *(uint *)(param_1 + 0x9c) = uVar16;
  iVar19 = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  lStack_a8 = 0;
  local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
  uVar28 = (ulonglong)DAT_14cb7bfb8;
  local_ec = uVar16;
  if (DAT_14cb7bfb8 != 0) {
    puVar7 = DAT_14cb7bfb0;
    if (DAT_14cb7bfb0 == (uint *)0x0) {
      puVar7 = &DAT_14cb7bfa0;
    }
    uVar5 = *puVar7;
    uVar29 = 0;
    if (uVar5 == 0) {
      iVar19 = DAT_14cb7bfb8 + 0x1e;
      if (-1 < (int)(DAT_14cb7bfb8 - 1)) {
        iVar19 = DAT_14cb7bfb8 - 1;
      }
      uVar29 = 0;
      uVar13 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar13 = 0;
      }
      iVar19 = 0;
      do {
        if (uVar13 == uVar29) goto LAB_1414e1b0c;
        iVar19 = iVar19 + 0x20;
        uVar5 = puVar7[uVar29 + 1];
        uVar29 = uVar29 + 1;
      } while (uVar5 == 0);
    }
    uVar23 = (ulonglong)(-uVar5 & uVar5);
    uVar13 = uVar23 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar5 = (iVar19 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 < (int)DAT_14cb7bfb8) {
      uVar21 = 0xffffffff;
      local_134 = uVar16;
      local_130 = uVar28;
      do {
        lVar22 = (longlong)(int)uVar5 * 0x20;
        lVar6 = DAT_14cb7bf90 + lVar22;
        iVar24 = *(int *)(DAT_14cb7bf90 + 0x10 + lVar22);
        if (0 < (longlong)iVar24) {
          plVar17 = (longlong *)(DAT_14cb7bf90 + lVar22 + 8);
          iVar20 = -iVar24;
          uVar13 = (longlong)iVar24;
          local_124 = uVar21;
          do {
            lVar18 = *plVar17;
            lVar22 = lVar18 + uVar13 * 8;
            puVar7 = (uint *)(lVar22 + -8);
            iVar24 = *(int *)(lVar22 + -4);
            if ((((iVar24 == 0) || (uVar16 = *puVar7, (int)uVar16 < 0)) ||
                (DAT_14c9647dc <= (int)uVar16)) ||
               (((lVar22 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8),
                 lVar22 == 0 || (*(int *)(lVar22 + 0x10) != iVar24)) ||
                ((*(uint *)(lVar22 + 8) & 0x10200000) != 0)))) {
              uVar16 = *(uint *)(lVar6 + 0x10);
              if (uVar13 != uVar16) {
                iVar24 = uVar16 + iVar20;
                if (0 < iVar24) {
                  iVar24 = 1;
                }
                memmove(puVar7,(void *)(lVar18 + (longlong)(int)(uVar16 - iVar24) * 8),
                        (longlong)iVar24 << 3);
                uVar16 = *(uint *)(lVar6 + 0x10);
              }
              *(uint *)(lVar6 + 0x10) = uVar16 - 1;
              FUN_14580d3a6(plVar17);
              uVar28 = local_130;
            }
            iVar20 = iVar20 + 1;
            bVar30 = 1 < uVar13;
            uVar13 = uVar13 - 1;
          } while (bVar30);
          iVar24 = *(int *)(lVar6 + 0x10);
          uVar21 = local_124;
        }
        if (iVar24 == 0) {
          FUN_144980568(&local_e8,&local_100,lVar6,0);
          uVar28 = local_130;
        }
        iVar24 = local_c0;
        uVar21 = uVar21 & ~(uint)uVar23;
        puVar7 = DAT_14cb7bfb0;
        if (DAT_14cb7bfb0 == (uint *)0x0) {
          puVar7 = &DAT_14cb7bfa0;
        }
        iVar20 = (int)uVar29;
        lVar6 = (longlong)iVar20;
        uVar16 = puVar7[lVar6] & uVar21;
        if (uVar16 == 0) {
          iVar10 = DAT_14cb7bfb8 + 0x1e;
          if (-1 < (int)(DAT_14cb7bfb8 - 1)) {
            iVar10 = DAT_14cb7bfb8 - 1;
          }
          iVar10 = iVar10 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar20) {
            iVar11 = iVar20;
          }
          if (iVar20 < iVar10) {
            lVar22 = 0;
            do {
              uVar16 = puVar7[lVar6 + lVar22 + 1];
              if (uVar16 != 0) {
                uVar29 = (ulonglong)(iVar20 + (int)lVar22 + 1);
                uVar21 = 0xffffffff;
                goto LAB_1414e18ed;
              }
              iVar19 = iVar19 + 0x20;
              lVar22 = lVar22 + 1;
            } while (iVar11 - lVar6 != lVar22);
            uVar21 = 0xffffffff;
            iVar20 = iVar11;
          }
          uVar29 = (ulonglong)(iVar20 + 1);
          uVar28 = local_130;
          uVar5 = DAT_14cb7bfb8;
        }
        else {
LAB_1414e18ed:
          uVar23 = (ulonglong)(-uVar16 & uVar16);
          uVar13 = uVar23 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          uVar5 = (iVar19 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if ((int)DAT_14cb7bfb8 <= (int)uVar5) {
            uVar5 = DAT_14cb7bfb8;
          }
        }
      } while (uVar5 != (uint)uVar28);
      uVar16 = local_134;
      if (local_c0 != 0) {
        puVar7 = local_c8;
        if (local_c8 == (uint *)0x0) {
          puVar7 = &local_d8;
        }
        uVar5 = *puVar7;
        if (uVar5 == 0) {
          iVar19 = local_c0 + 0x1e;
          if (-1 < local_c0 + -1) {
            iVar19 = local_c0 + -1;
          }
          uVar28 = 0;
          uVar29 = (ulonglong)(uint)(iVar19 >> 5);
          if (iVar19 >> 5 < 1) {
            uVar29 = uVar28;
          }
          iVar19 = 0;
          do {
            if (uVar29 == uVar28) goto LAB_1414e1b0c;
            iVar19 = iVar19 + 0x20;
            uVar5 = puVar7[uVar28 + 1];
            uVar28 = uVar28 + 1;
          } while (uVar5 == 0);
        }
        else {
          uVar28 = 0;
          iVar19 = 0;
        }
        uVar13 = (ulonglong)(-uVar5 & uVar5);
        uVar29 = uVar13 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar20 = (iVar19 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar20 < local_c0) {
          uVar5 = 0xffffffff;
          do {
            FUN_1458758b8(*(undefined4 *)
                           (CONCAT44(local_e8._4_4_,(uint)local_e8) + (longlong)iVar20 * 0xc));
            uVar5 = ~(uint)uVar13 & uVar5;
            puVar7 = local_c8;
            if (local_c8 == (uint *)0x0) {
              puVar7 = &local_d8;
            }
            iVar20 = (int)uVar28;
            lVar6 = (longlong)iVar20;
            uVar21 = puVar7[lVar6] & uVar5;
            if (uVar21 == 0) {
              iVar10 = local_c0 + 0x1e;
              if (-1 < local_c0 + -1) {
                iVar10 = local_c0 + -1;
              }
              iVar10 = iVar10 >> 5;
              iVar19 = iVar19 + 0x20;
              iVar11 = iVar10;
              if (iVar10 < iVar20) {
                iVar11 = iVar20;
              }
              if (iVar20 < iVar10) {
                lVar22 = 0;
                do {
                  uVar21 = puVar7[lVar6 + lVar22 + 1];
                  if (uVar21 != 0) {
                    uVar28 = (ulonglong)(iVar20 + (int)lVar22 + 1);
                    uVar5 = 0xffffffff;
                    goto LAB_1414e1ad5;
                  }
                  iVar19 = iVar19 + 0x20;
                  lVar22 = lVar22 + 1;
                } while (iVar11 - lVar6 != lVar22);
                uVar5 = 0xffffffff;
                lVar6 = (longlong)iVar11;
              }
              uVar28 = lVar6 + 1U & 0xffffffff;
              uVar16 = local_134;
              iVar20 = local_c0;
            }
            else {
LAB_1414e1ad5:
              uVar13 = (ulonglong)(-uVar21 & uVar21);
              uVar29 = uVar13 * 2 + 1;
              lVar6 = 0x3f;
              if (uVar29 != 0) {
                for (; uVar29 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                }
              }
              iVar20 = (iVar19 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
              if (local_c0 <= iVar20) {
                iVar20 = local_c0;
              }
            }
          } while (iVar20 != iVar24);
        }
      }
    }
LAB_1414e1b0c:
    local_a0 = local_a0 & 0xffffffff00000000;
    if (lStack_a8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1401bc218(&local_e8);
  if (DAT_14cb7bf98 != DAT_14cb7bfc4) {
    puVar14 = &DAT_14cb7bfc8;
    if (DAT_14cb7bfd0 != (undefined *)0x0) {
      puVar14 = DAT_14cb7bfd0;
    }
    iVar19 = *(int *)(puVar14 + (ulonglong)(DAT_14cb7bfd8 - 1U & uVar16) * 4);
    while (iVar19 != -1) {
      lVar6 = DAT_14cb7bf90 + (longlong)iVar19 * 0x20;
      if (*(uint *)(DAT_14cb7bf90 + (longlong)iVar19 * 0x20) == local_ec) {
        if (lVar6 != 0) goto LAB_1414e1bca;
        break;
      }
      iVar19 = *(int *)(lVar6 + 0x18);
    }
  }
  local_e8 = &local_ec;
  FUN_145a5a0bc(&local_100,uVar16);
  lVar6 = DAT_14cb7bf90 + (longlong)(int)local_100 * 0x20;
LAB_1414e1bca:
  plVar17 = (longlong *)(lVar6 + 8);
  if (*(int *)(lVar6 + 0x10) == 0) {
    uVar28 = 0;
    local_e8._0_4_ = (uint)local_e8 & 0xffffff00;
    local_e8._4_4_ = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    local_d8 = local_d8 & 0xffffff00;
    uStack_cc = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    local_bc = CONCAT44(0xc69c4000,(undefined4)local_bc);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_57 = 1;
    local_55 = 0;
    local_54 = 0;
    lStack_a8 = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      uVar16 = *(uint *)(param_1 + 0x80);
      lStack_a8 = 0;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           (((int)plVar15[2] != *(int *)(param_1 + 0x84) ||
            ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) {
          lStack_a8 = 0;
        }
        else {
          lStack_a8 = *plVar15;
        }
      }
    }
    uVar29 = 0;
    if (local_118 != 0) {
      uVar16 = *(uint *)(local_118 + 0xc);
      uVar28 = (ulonglong)uVar16;
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar22 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar22 = 0;
      }
      uVar29 = (ulonglong)*(uint *)(lVar22 + 0x10);
      if (*(uint *)(lVar22 + 0x10) == 0) {
        LOCK();
        iVar19 = DAT_14c964868 + 1;
        UNLOCK();
        uVar16 = DAT_14c964868 + 1;
        bVar30 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar19;
        if (bVar30) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar16);
        }
        LOCK();
        uVar5 = *(uint *)(lVar22 + 0x10);
        bVar30 = uVar5 == 0;
        if (bVar30) {
          *(uint *)(lVar22 + 0x10) = uVar16;
          uVar5 = 0;
        }
        UNLOCK();
        if (bVar30) {
          uVar5 = uVar16;
        }
        uVar29 = (ulonglong)uVar5;
      }
    }
    local_100 = (uint *)0x0;
    local_f8 = 0;
    FUN_1446efa72(&local_100,0,3,0x10);
    local_f8 = 3;
    *(undefined ***)local_100 = &PTR_LAB_14b3fcde0;
    local_100[2] = (uint)local_120;
    *(ulonglong *)(local_100 + 3) = uVar28 | uVar29 << 0x20;
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 1;
    lVar22 = DAT_14c758608 + 1;
    if (lVar18 == 0) {
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 2;
      lVar22 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar22;
    *(longlong *)(local_100 + 6) = lVar18;
    *(undefined ***)local_100 = &PTR_FUN_14b3fcd70;
    *(code **)(local_100 + 8) = FUN_145cb1647;
    local_c8 = local_100;
    local_c0 = 3;
    if ((((*(int *)(param_1 + 0x84) != 0) && (uVar16 = *(uint *)(param_1 + 0x80), -1 < (int)uVar16))
        && ((int)uVar16 < DAT_14c9647dc)) &&
       (((plVar15 = (longlong *)
                    ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
         plVar15 != (longlong *)0x0 && ((int)plVar15[2] == *(int *)(param_1 + 0x84))) &&
        (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 &&
         (plVar15 = (longlong *)*plVar15, plVar15 != (longlong *)0x0)))))) {
      uVar8 = FUN_140427846();
      plVar15 = (longlong *)(**(code **)(*plVar15 + 0x288))(plVar15,uVar8);
      if (plVar15 != (longlong *)0x0) {
        uVar8 = FUN_140427846();
        plVar9 = (longlong *)FUN_144718840(plVar15,uVar8);
        if ((plVar9 != (longlong *)0x0 && plVar15 != plVar9) &&
           (lVar22 = (**(code **)(*plVar9 + 0x10))(plVar9), lVar22 != 0)) {
          local_57 = CONCAT11(*(int *)(lVar22 + 0x10) == 2,(undefined1)local_57);
        }
      }
    }
    FUN_140983ba6(local_108,local_110,&local_e8);
    *(uint *)(param_1 + 0x70) = local_d8;
    *(undefined4 *)(param_1 + 0x74) = uStack_d4;
    *(undefined4 *)(param_1 + 0x78) = uStack_d0;
    *(undefined4 *)(param_1 + 0x7c) = uStack_cc;
    if (local_c8 == (uint *)0x0 || local_c0 == 0) {
      puVar7 = (uint *)0x0;
    }
    else {
      (**(code **)(*(longlong *)local_c8 + 0x38))(local_c8,&local_100);
      puVar7 = local_100;
    }
    *(uint **)(param_1 + 0x90) = puVar7;
    FUN_1409838b8(&local_e8);
  }
  else {
    uVar16 = ((uint *)*plVar17)[1];
    if (uVar16 == 0) {
LAB_1414e2009:
      lVar22 = 0;
    }
    else {
      uVar5 = *(uint *)*plVar17;
      lVar22 = 0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           ((*(uint *)(plVar15 + 2) != uVar16 || ((*(uint *)(plVar15 + 1) & 0x10200000) != 0))))
        goto LAB_1414e2009;
        lVar22 = *plVar15;
      }
    }
    uVar1 = *(undefined4 *)(lVar22 + 0x74);
    uVar2 = *(undefined4 *)(lVar22 + 0x78);
    uVar3 = *(undefined4 *)(lVar22 + 0x7c);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(lVar22 + 0x70);
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
    uVar16 = ((uint *)*plVar17)[1];
    if (uVar16 == 0) {
LAB_1414e2010:
      lVar22 = 0;
    }
    else {
      uVar5 = *(uint *)*plVar17;
      lVar22 = 0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           ((*(uint *)(plVar15 + 2) != uVar16 || ((*(uint *)(plVar15 + 1) & 0x10200000) != 0))))
        goto LAB_1414e2010;
        lVar22 = *plVar15;
      }
    }
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar22 + 0x90);
  }
  uVar16 = *(uint *)(param_1 + 0xc);
  if ((int)uVar16 < DAT_14c9647dc) {
    lVar22 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
  }
  else {
    lVar22 = 0;
  }
  iVar19 = *(int *)(lVar22 + 0x10);
  if (*(int *)(lVar22 + 0x10) == 0) {
    LOCK();
    iVar19 = DAT_14c964868 + 1;
    UNLOCK();
    iVar24 = DAT_14c964868 + 1;
    bVar30 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar19;
    if (bVar30) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar24);
    }
    LOCK();
    iVar19 = *(int *)(lVar22 + 0x10);
    bVar30 = iVar19 == 0;
    if (bVar30) {
      *(int *)(lVar22 + 0x10) = iVar24;
      iVar19 = 0;
    }
    UNLOCK();
    if (bVar30) {
      iVar19 = iVar24;
    }
  }
  iVar24 = *(int *)(lVar6 + 0x10);
  *(uint *)(lVar6 + 0x10) = iVar24 + 1U;
  if (*(uint *)(lVar6 + 0x14) < iVar24 + 1U) {
    FUN_14654d37c(plVar17,iVar24);
  }
  *(ulonglong *)(*plVar17 + (longlong)iVar24 * 8) = CONCAT44(iVar19,uVar16);
LAB_1414e1fcf:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e210d FUN_1414e210d body=81 status=ok
// SIG undefined FUN_1414e210d(void)

void FUN_1414e210d(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1462c59b0(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1414e215e FUN_1414e215e body=232 status=ok
// SIG undefined FUN_1414e215e(void)

void FUN_1414e215e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 1414e2246 FUN_1414e2246 body=2231 status=ok
// SIG undefined FUN_1414e2246(void)

void FUN_1414e2246(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_1414e2331;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_1414e2331:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_1414e23fe;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_1414e23fe:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_1414e24cb;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_1414e24cb:
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1405ebbb2;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_44);
            goto LAB_1414e2597;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_44) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_44,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_44,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_44,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_44,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
LAB_1414e2597:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT44(local_68._4_4_,local_44);
  FUN_1414e2afe(param_1,local_30,local_38,local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e2afe FUN_1414e2afe body=246 status=ok
// SIG undefined FUN_1414e2afe(void)

void FUN_1414e2afe(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x178) != '\x03') {
    return;
  }
  cVar2 = FUN_1418dfc56();
  if (param_3 == 0 || cVar2 != '\x01') {
    return;
  }
  lVar3 = FUN_140ebc504();
  if (*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) {
    return;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
      != lVar3 + 0x30) {
    return;
  }
  cVar2 = FUN_1440d720e((uint *)(param_1 + 0x27a0),param_3);
  if (cVar2 == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x27a8) = 1;
  if (*(int *)(param_1 + 0x27a4) != 0) {
    uVar1 = *(uint *)(param_1 + 0x27a0);
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1414e2bb0;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == *(int *)(param_1 + 0x27a4) && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)
        ))) {
      lVar3 = *plVar4;
      goto LAB_1414e2bb0;
    }
  }
  lVar3 = 0;
LAB_1414e2bb0:
  if (*(longlong *)(param_1 + 0x2740) != 0) {
    FUN_14480f766(lVar3 + 0x2648);
  }
  *(undefined8 *)(param_1 + 0x2738) = *(undefined8 *)(param_1 + 0x27a0);
  *(undefined8 *)(param_1 + 0x27a0) = 0;
  FUN_148cf6c32(param_1);
  return;
}



// FUNCTION 1414e2bf4 FUN_1414e2bf4 body=446 status=ok
// SIG undefined FUN_1414e2bf4(void)

void FUN_1414e2bf4(longlong *param_1)

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
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  plVar4 = local_58;
  iVar5 = (int)local_58[3];
  iVar14 = (int)local_60;
  uVar11 = (uint)local_50;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < iVar5) {
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
          if (iVar3 - lVar12 == lVar9) goto LAB_1414e2d1c;
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
LAB_1414e2d1c:
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e2db4 FUN_1414e2db4 body=456 status=ok
// SIG undefined FUN_1414e2db4(void)

void FUN_1414e2db4(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar2 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar2 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar3 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar3);
      }
      LOCK();
      uVar2 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar2 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar3;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar2 = uVar3;
      }
    }
  }
  local_40 = CONCAT44(uVar2,uVar5);
  iVar1 = FUN_145b03c96(param_1 + 0xd8,uVar2 ^ uVar5);
  if (iVar1 == -1) {
    if (param_2 == 0) {
      local_40._0_4_ = 0;
      iVar1 = 0;
      uVar2 = (uint)local_40;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0xc);
      local_40 = (ulonglong)uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar1 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar1 = *(int *)(lVar6 + 0x10);
        bVar7 = iVar1 == 0;
        if (bVar7) {
          *(int *)(lVar6 + 0x10) = iVar4;
          iVar1 = 0;
        }
        UNLOCK();
        uVar2 = (uint)local_40;
        if (bVar7) {
          iVar1 = iVar4;
        }
      }
    }
    local_40._0_4_ = uVar2;
    local_40 = CONCAT44(iVar1,(uint)local_40);
    FUN_145b03a0e(param_1 + 0xd8,local_44);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414e2f98 FUN_1414e2f98 body=681 status=ok
// SIG undefined FUN_1414e2f98(void)

void FUN_1414e2f98(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  short sVar4;
  undefined4 uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 *local_d0;
  longlong local_c0;
  short *local_b8;
  undefined8 uStack_b0;
  undefined **local_a0;
  short *local_98;
  int local_90;
  int local_84 [3];
  undefined8 local_78;
  undefined ***local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = (short *)0x0;
  uStack_b0 = 0xf00;
  sVar12 = 0;
  FUN_14488eebe(&local_b8,0);
  local_98 = local_b8;
  iVar7 = 0;
  psVar6 = local_b8;
  do {
    iVar8 = -0x20;
    do {
      sVar4 = (short)iVar8;
      *psVar6 = sVar12 + sVar4 + 0x20;
      sVar10 = sVar12 + 0x41 + sVar4;
      psVar6[1] = sVar10;
      sVar11 = sVar12 + 0x21 + sVar4;
      psVar6[2] = sVar11;
      psVar6[3] = sVar12 + 0x42 + sVar4;
      psVar6[4] = sVar11;
      psVar6[5] = sVar10;
      psVar6 = psVar6 + 6;
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0);
    iVar7 = iVar7 + 1;
    sVar12 = sVar12 + 0x21;
  } while (iVar7 != 0x14);
  iVar7 = (int)uStack_b0;
  uVar5 = FUN_1414e3242(0x8001,0);
  local_70 = &local_a0;
  local_a0 = &PTR_FUN_14a249130;
  local_90 = iVar7 * 2;
  local_78 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FTesselatedScreenRectangleIndexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84[1] = 2;
  local_84[2] = 0x8001;
  local_84[0] = local_90;
  if (local_90 == 0) {
    FUN_14570b4be(param_2,&local_78,0x8001,2);
  }
  local_d8 = uVar5;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_1446f970a(param_2,1);
    local_d0 = &local_78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,local_84);
    *(undefined4 *)(local_c0 + 0x18) = uVar5;
    FUN_1446f970a(param_2,0);
  }
  else {
    local_d0 = &local_78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,local_84);
    *(undefined4 *)(local_c0 + 0x18) = uVar5;
  }
  plVar9 = (longlong *)(param_1 + 0x10);
  if (plVar9 != &local_c0) {
    lVar3 = *plVar9;
    *plVar9 = local_c0;
    local_c0 = 0;
    if (lVar3 == 0) goto LAB_1414e3151;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_c0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_c0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1414e3151:
  if (local_b8 != (short *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e3242 FUN_1414e3242 body=103 status=ok
// SIG undefined FUN_1414e3242(void)

uint FUN_1414e3242(uint param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0x78;
  if ((param_1 >> 0xe & 1) == 0) {
    uVar3 = param_1 >> 0xc & 8;
  }
  uVar1 = uVar3;
  if ((param_1 >> 0x10 & 1) != 0) {
    uVar1 = uVar3 | 0x70;
  }
  uVar4 = uVar1 + (param_1 & 0x2000) * 8;
  if (param_2 != '\0') {
    return uVar4;
  }
  uVar2 = 0xc00;
  if ((param_1 & 8) == 0) {
    uVar2 = 0x20000;
  }
  if (((param_1 & 0x2008) == 0) && (uVar2 = uVar3 | 0x70, (param_1 >> 8 & 1) == 0)) {
    uVar2 = (int)(uVar1 << 0x1c) >> 0x1f & uVar4;
  }
  return uVar2;
}



// FUNCTION 1414e32aa FUN_1414e32aa body=1891 status=ok
// SIG undefined FUN_1414e32aa(void)

void FUN_1414e32aa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  undefined1 uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  code *local_80;
  longlong local_78;
  undefined8 local_70 [3];
  undefined8 local_54;
  int local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1468d96f0;
      local_90 = (longlong *)0x0;
      local_98 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_40);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_40);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_40 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_40);
    }
  }
  uStack_48 = 0;
  uStack_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1468d96f0;
      local_90 = (longlong *)0x0;
      local_98 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_48);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      uStack_48 = (undefined4)uVar1;
      uStack_44 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&uStack_48);
    }
  }
  local_4c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_14067a048;
      local_90 = (longlong *)0x0;
      local_98 = (undefined8 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_4c);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_4c);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      local_4c = (int)uVar1;
      uStack_48 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_4c);
    }
  }
  iVar3 = local_4c;
  local_54 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
LAB_1414e3526:
    pbVar5 = *(byte **)(param_2 + 0x20);
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_54);
      goto LAB_1414e3526;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_54);
      goto LAB_1414e3526;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_54);
      goto LAB_1414e3526;
    }
    local_54 = *(undefined8 *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 9;
    *(byte **)(param_2 + 0x20) = pbVar5;
    puVar6 = (undefined8 *)0x0;
  }
  puVar7 = &local_54;
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = puVar6;
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_70);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_70);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        local_70[0] = *(undefined8 *)(pbVar5 + 1);
        pbVar5 = pbVar5 + 9;
        *(byte **)(param_2 + 0x20) = pbVar5;
        puVar6 = (undefined8 *)0x0;
        goto LAB_1414e35b2;
      }
      (*pcVar2)(uVar1,param_2,local_70);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  puVar6 = *(undefined8 **)(param_2 + 0x38);
LAB_1414e35b2:
  puVar9 = local_70;
  if (puVar6 != (undefined8 *)0x0) {
    puVar9 = puVar6;
  }
  local_78 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_78);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_78);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_78 = *(longlong *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_78);
    }
  }
  plVar8 = &local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = puVar9;
  local_90 = plVar8;
  uVar4 = FUN_1414e3a0e(local_40,CONCAT44(uStack_44,uStack_48),iVar3 != 0,puVar7);
  *param_3 = uVar4;
  if ((DAT_14c950c29 == '\x01') && (*plVar8 != 0)) {
    FUN_14689c22e();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e3a0e FUN_1414e3a0e body=245 status=ok
// SIG undefined FUN_1414e3a0e(void)

undefined8
FUN_1414e3a0e(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 *puVar7;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  uVar2 = FUN_14069ce7c();
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  uVar2 = FUN_14069ce7c();
  plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
  if (plVar3 == plVar4) {
    return 0;
  }
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  lVar5 = (**(code **)(*plVar4 + 0x10))();
  if (lVar5 == 0) {
    return 0;
  }
  puVar6 = (uint *)FUN_1414277ce(lVar5,param_2,param_3,param_5);
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  *param_4 = *(undefined8 *)(puVar6 + 2);
  if (puVar6[1] != 0) {
    uVar1 = *puVar6;
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1414e3aec;
    puVar7 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar7 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar7 + 2) == puVar6[1] && ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
      uVar2 = *puVar7;
      goto LAB_1414e3aec;
    }
  }
  uVar2 = 0;
LAB_1414e3aec:
  *param_6 = uVar2;
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// FUNCTION 1414e3b04 FUN_1414e3b04 body=91 status=ok
// SIG undefined FUN_1414e3b04(void)

void FUN_1414e3b04(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  FUN_140bf93b0(param_1 + 8);
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e3b60 FUN_1414e3b60 body=183 status=ok
// SIG undefined FUN_1414e3b60(void)

undefined8 * FUN_1414e3b60(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1d8490;
  *(undefined4 *)(param_1 + 0x53) = 0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_14090bbce(param_1 + 0x4a);
  plVar3 = (longlong *)param_1[0x49];
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
  plVar3 = (longlong *)param_1[0x46];
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
  FUN_1403c4c0a(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1414e3c18 FUN_1414e3c18 body=1152 status=ok
// SIG undefined FUN_1414e3c18(void)

void FUN_1414e3c18(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (int)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1414e409a(local_18,CONCAT44(uStack_1c,uStack_20),local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e409a FUN_1414e409a body=538 status=ok
// SIG undefined FUN_1414e409a(void)

void FUN_1414e409a(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  longlong local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = param_2;
  if ((param_1 != (longlong *)0x0 && param_2 != 0) && ((char)param_1[0x2f] == '\x03')) {
    if (DAT_14cb56270 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148630fef;
      local_50 = FUN_1464b6a91;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,DAT_14cb56270);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb56270 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148630fef;
        local_50 = FUN_1464b6a91;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb56270);
      if (plVar2 != (longlong *)0x0 && plVar1 != plVar2) {
        lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if (lVar3 != 0) {
          if (param_3 == '\0') {
            FUN_1400bc8c2(lVar3 + 0xb8,&local_28);
          }
          else {
            FUN_1400bc96c();
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e42b6 FUN_1414e42b6 body=79 status=ok
// SIG undefined FUN_1414e42b6(void)

void FUN_1414e42b6(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    *(undefined1 *)(param_2 + 8) = 0;
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  if ((*(char *)(*param_1 + 0x80) == '\x01') &&
     (puVar1 = (undefined8 *)(*param_1 + 0x88), puVar1 != (undefined8 *)(param_2 + 0x38))) {
    *(undefined8 *)(param_2 + 0x38) = *puVar1;
    *(undefined1 *)(param_2 + 0x40) = 1;
  }
  return;
}



// FUNCTION 1414e4306 FUN_1414e4306 body=7 status=ok
// SIG undefined FUN_1414e4306(void)

undefined1 FUN_1414e4306(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x2d8);
}



// FUNCTION 1414e430e FUN_1414e430e body=7 status=ok
// SIG undefined FUN_1414e430e(void)

undefined1 FUN_1414e430e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x2d2);
}



// FUNCTION 1414e4316 FUN_1414e4316 body=7 status=ok
// SIG undefined FUN_1414e4316(void)

undefined1 FUN_1414e4316(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x370);
}



// FUNCTION 1414e431e FUN_1414e431e body=7 status=ok
// SIG undefined FUN_1414e431e(void)

undefined1 FUN_1414e431e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x365);
}



// FUNCTION 1414e4326 FUN_1414e4326 body=7 status=ok
// SIG undefined FUN_1414e4326(void)

undefined1 FUN_1414e4326(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x364);
}



// FUNCTION 1414e432e FUN_1414e432e body=7 status=ok
// SIG undefined FUN_1414e432e(void)

undefined1 FUN_1414e432e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3df);
}



// FUNCTION 1414e4336 FUN_1414e4336 body=7 status=ok
// SIG undefined FUN_1414e4336(void)

undefined1 FUN_1414e4336(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x368);
}



// FUNCTION 1414e433e FUN_1414e433e body=7 status=ok
// SIG undefined FUN_1414e433e(void)

undefined1 FUN_1414e433e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3b5);
}



// FUNCTION 1414e4346 FUN_1414e4346 body=7 status=ok
// SIG undefined FUN_1414e4346(void)

undefined1 FUN_1414e4346(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3b1);
}



// FUNCTION 1414e434e FUN_1414e434e body=7 status=ok
// SIG undefined FUN_1414e434e(void)

undefined1 FUN_1414e434e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3b6);
}



// FUNCTION 1414e4356 FUN_1414e4356 body=7 status=ok
// SIG undefined FUN_1414e4356(void)

undefined1 FUN_1414e4356(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3b2);
}



// FUNCTION 1414e435e FUN_1414e435e body=7 status=ok
// SIG undefined FUN_1414e435e(void)

undefined1 FUN_1414e435e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x430);
}



// FUNCTION 1414e4366 FUN_1414e4366 body=7 status=ok
// SIG undefined FUN_1414e4366(void)

undefined1 FUN_1414e4366(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x366);
}



// FUNCTION 1414e436e FUN_1414e436e body=7 status=ok
// SIG undefined FUN_1414e436e(void)

undefined1 FUN_1414e436e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3b7);
}



// FUNCTION 1414e4376 FUN_1414e4376 body=7 status=ok
// SIG undefined FUN_1414e4376(void)

undefined1 FUN_1414e4376(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3b3);
}



// FUNCTION 1414e437e FUN_1414e437e body=7 status=ok
// SIG undefined FUN_1414e437e(void)

undefined1 FUN_1414e437e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3b8);
}



// FUNCTION 1414e4386 FUN_1414e4386 body=7 status=ok
// SIG undefined FUN_1414e4386(void)

undefined1 FUN_1414e4386(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3b4);
}



// FUNCTION 1414e438e FUN_1414e438e body=7 status=ok
// SIG undefined FUN_1414e438e(void)

undefined1 FUN_1414e438e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x362);
}



// FUNCTION 1414e4396 FUN_1414e4396 body=7 status=ok
// SIG undefined FUN_1414e4396(void)

undefined1 FUN_1414e4396(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x363);
}



// FUNCTION 1414e439e FUN_1414e439e body=7 status=ok
// SIG undefined FUN_1414e439e(void)

undefined1 FUN_1414e439e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3dd);
}



// FUNCTION 1414e43a6 FUN_1414e43a6 body=7 status=ok
// SIG undefined FUN_1414e43a6(void)

undefined1 FUN_1414e43a6(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3dc);
}



// FUNCTION 1414e43ae FUN_1414e43ae body=174 status=ok
// SIG undefined FUN_1414e43ae(void)

void FUN_1414e43ae(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = DAT_14cb24ad0;
  if (DAT_14cb24ad0 == 0) {
    plVar2 = (longlong *)FUN_145a7712c();
    lVar1 = plVar2[0x22];
    if (plVar2[0x22] == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar1 = plVar2[0x22];
    }
  }
  DAT_14cb24ad0 = lVar1;
  lVar1 = DAT_14cb24ad0;
  (**(code **)(param_1[-0xe3] + 0x528))(param_1 + -0xe3,local_58,param_1 + -0x9b);
  (**(code **)(*param_1 + 0x20))(param_1,local_58,*(undefined4 *)(lVar1 + 0x50),(float)local_28);
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414e445e FUN_1414e445e body=298 status=ok
// SIG undefined FUN_1414e445e(void)

void FUN_1414e445e(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [4];
  undefined4 local_1a4;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_d8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  memset(local_1a8,0,0x100);
  local_d8 = 0xffffffff;
  local_1a4 = 0x3f800000;
  local_104 = 0xffffffff;
  local_9c = 3;
  local_98 = 0;
  local_88 = (longlong *)0x0;
  local_180 = *param_2;
  uStack_178 = param_2[1];
  local_170 = param_2[2];
  local_150 = (undefined4)DAT_14c8464e0;
  uStack_14c = DAT_14c8464e0._4_4_;
  uStack_148 = (undefined4)DAT_14c8464e8;
  uStack_144 = DAT_14c8464e8._4_4_;
  local_140 = DAT_14c8464f0;
  local_100 = 0xffffffff;
  local_a0 = 0x7f7fffff;
  local_a8 = param_4;
  local_a4 = param_3;
  (**(code **)(*param_1 + 0x18))(param_1,local_1a8);
  if (local_98 != 0) {
    plVar1 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar1 = local_78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_50 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e458a FUN_1414e458a body=4591 status=ok
// SIG undefined FUN_1414e458a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414e458a(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  int iVar16;
  char cVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong extraout_RAX;
  uint uVar23;
  longlong lVar24;
  code *pcVar25;
  double *pdVar26;
  double *pdVar27;
  longlong lVar28;
  bool bVar29;
  ulonglong uVar30;
  float fVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  double dVar40;
  undefined1 auVar39 [16];
  float fVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar45;
  undefined1 auVar44 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined1 auStack_498 [32];
  undefined4 local_478;
  undefined1 local_470;
  longlong *local_460;
  double local_458;
  double dStack_450;
  undefined1 local_448 [24];
  double local_430;
  double local_428;
  double local_420;
  longlong local_418;
  double local_410;
  double local_408;
  double local_400;
  undefined1 local_3f8 [16];
  undefined8 local_3e8;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  double local_3b8 [2];
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  longlong *local_330;
  longlong *local_328;
  double local_318;
  double local_310;
  double local_308;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  longlong local_228;
  longlong *local_218;
  longlong local_208 [4];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  plVar3 = param_1 + -0xe3;
  if ((*(char *)((longlong)param_1 + -0x43b) < '\0') && (0.0 < *(float *)(param_2 + 0x104))) {
    lVar22 = DAT_14cb24ad0;
    if (DAT_14cb24ad0 == 0) {
      plVar19 = (longlong *)FUN_145a7712c();
      lVar22 = plVar19[0x22];
      if (plVar19[0x22] != 0) goto LAB_1414e464a;
      (**(code **)(*plVar19 + 1000))(plVar19);
      DAT_14cb24ad0 = plVar19[0x22];
      lVar22 = DAT_14cb24ad0;
      if (DAT_14cb24ad0 != 0) goto LAB_1414e464a;
LAB_1414e46ba:
      fVar31 = 1.0;
    }
    else {
LAB_1414e464a:
      DAT_14cb24ad0 = lVar22;
      cVar17 = *(char *)((longlong)param_1 + 0x2e9);
      if (cVar17 == '\x03') {
        fVar31 = *(float *)(DAT_14cb24ad0 + 0xfc);
      }
      else if (cVar17 == '\x02') {
        fVar31 = *(float *)(DAT_14cb24ad0 + 0xf8);
      }
      else {
        if (cVar17 != '\x01') goto LAB_1414e46ba;
        fVar31 = *(float *)(DAT_14cb24ad0 + 0xf4);
      }
    }
    if ((9.999999747378752e-05 < ABS(*(double *)(param_2 + 0x58))) ||
       (9.999999747378752e-05 < ABS(*(double *)(param_2 + 0x60)))) {
      fVar41 = *(float *)(param_2 + 0x104);
      dVar32 = *(double *)(param_2 + 0x68);
    }
    else {
      dVar32 = *(double *)(param_2 + 0x68);
      fVar41 = *(float *)(param_2 + 0x104);
      if (ABS(dVar32) <= 9.999999747378752e-05) {
        local_3c8 = *(undefined8 *)(param_2 + 0x38);
        local_3d8 = *(undefined8 *)(param_2 + 0x28);
        uStack_3d0 = *(undefined8 *)(param_2 + 0x30);
        local_470 = 1;
        local_478 = 0;
        (**(code **)(*plVar3 + 0x6c8))(plVar3);
        goto LAB_1414e47d6;
      }
    }
    dVar35 = (double)-fVar41;
    local_410 = (double)fVar31;
    local_400 = dVar32 * dVar35 * local_410;
    local_408 = *(double *)(param_2 + 0x60) * dVar35 * local_410;
    local_410 = *(double *)(param_2 + 0x58) * dVar35 * local_410;
    local_3e8 = *(undefined8 *)(param_2 + 0x38);
    local_3f8 = *(undefined1 (*) [16])(param_2 + 0x28);
    (**(code **)(*plVar3 + 0x6c0))(plVar3,&local_410,local_3f8,0);
  }
LAB_1414e47d6:
  cVar17 = (**(code **)(*param_1 + 0x50))(param_1);
  if ((cVar17 == '\0') || (param_1[1] == 0)) goto LAB_1414e4db9;
  cVar17 = (**(code **)(*param_1 + 0x60))(param_1);
  lVar22 = param_1[1];
  if (cVar17 != '\0') {
    if (lVar22 == 0) goto LAB_1414e4db9;
    lVar20 = FUN_140696450();
    lVar22 = param_1[1];
    if ((((((lVar22 == 0) || (lVar20 == 0)) || (lVar24 = *(longlong *)(lVar22 + 0x10), lVar24 == 0))
         || ((*(int *)(lVar24 + 0x38) < *(int *)(lVar20 + 0x38) ||
             (*(longlong *)(*(longlong *)(lVar24 + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8) !=
              lVar20 + 0x30)))) ||
        ((*(char *)(lVar22 + 0x228) != '\x01' ||
         ((lVar20 = param_1[-0xcd], lVar20 == 0 && (lVar20 = FUN_1448abda6(plVar3), lVar20 == 0)))))
        ) || (*(double *)(lVar20 + 0x6d0) - (double)param_1[6] < *(double *)(lVar22 + 0x230)))
    goto LAB_1414e4db9;
    lVar22 = param_1[1];
  }
  pcVar25 = *(code **)(param_2 + 0x110);
  if (pcVar25 != (code *)0x0) {
    local_418 = lVar22;
    if ((lVar22 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
      pcVar25 = *(code **)(param_2 + 0x110);
    }
    plVar19 = (longlong *)(param_2 + 0x130);
    if (*(longlong **)(param_2 + 0x120) != (longlong *)0x0) {
      plVar19 = *(longlong **)(param_2 + 0x120);
    }
    uVar21 = (**(code **)(*plVar19 + 8))();
    cVar17 = (*pcVar25)(uVar21,&local_418);
    if (cVar17 == '\0') goto LAB_1414e4db9;
    lVar22 = param_1[1];
  }
  fVar31 = *(float *)(param_2 + 0x108);
  if (*(char *)(lVar22 + 0x114) == '\x01') {
    fVar31 = fVar31 + *(float *)((longlong)param_1 + 0x2c);
    *(float *)((longlong)param_1 + 0x2c) = fVar31;
  }
  if (*(float *)(lVar22 + 0x110) <= fVar31) {
    local_430 = (double)*(float *)(param_2 + 0x104);
    local_420 = *(double *)(param_2 + 0x50) * local_430;
    local_428 = *(double *)(param_2 + 0x48) * local_430;
    local_430 = local_430 * *(double *)(param_2 + 0x40);
    cVar17 = (**(code **)(*param_1 + 0x60))(param_1);
    if (cVar17 == '\0') {
      if ((*(byte *)(param_1[1] + 0xdc) & 1) != 0) {
        (**(code **)(param_1[-0xe3] + 0xa78))(plVar3,*(undefined8 *)(param_1[1] + 0xe8));
        lVar22 = param_1[0x5e];
        if ((lVar22 != 0) && (*(char *)(lVar22 + 0x680) != '\0')) {
          *(undefined1 *)(lVar22 + 0x680) = 0;
          FUN_140acee66();
        }
        lVar22 = param_1[-0xcd];
        if (lVar22 == 0) {
          lVar22 = FUN_1448abda6(plVar3);
        }
        FUN_140a32e84(&local_338,lVar22);
        if (local_330 != (longlong *)0x0) {
          iVar18 = (int)local_330[1];
          do {
            if (iVar18 == 0) {
              plVar19 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar16 = (int)local_330[1];
            bVar29 = iVar18 == iVar16;
            if (bVar29) {
              *(int *)(local_330 + 1) = iVar18 + 1;
              iVar16 = iVar18;
            }
            iVar18 = iVar16;
            UNLOCK();
            plVar19 = local_330;
          } while (!bVar29);
          LOCK();
          piVar1 = (int *)((longlong)local_330 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_330 + 0x10))();
          }
          if (plVar19 != (longlong *)0x0) {
            if (local_338 != 0.0) {
              FUN_1411d3172(local_338,param_1 + -0xb7);
            }
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
          }
        }
      }
      lVar22 = param_1[1];
      if (((*(byte *)(lVar22 + 0xdc) & 2) != 0) && (0 < *(int *)(lVar22 + 0x108))) {
        uVar30 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar22 + 0x100) + uVar30 * 8) != 0) {
            (**(code **)(param_1[-0xe3] + 0x638))(plVar3,uVar30 & 0xffffffff);
            lVar22 = param_1[1];
          }
          uVar30 = uVar30 + 1;
        } while ((longlong)uVar30 < (longlong)*(int *)(lVar22 + 0x108));
      }
      *(undefined1 *)(param_1 + 5) = 1;
      local_338 = (double)(CONCAT71(local_338._1_7_,*(undefined1 *)(lVar22 + 0xdc)) &
                          0xffffffffffffff01);
      FUN_1447cd2ec(param_1 + 3);
    }
    if (param_1[1] != 0) {
      lVar20 = FUN_140696450();
      lVar22 = param_1[1];
      if ((((lVar22 != 0) && (lVar20 != 0)) && (lVar24 = *(longlong *)(lVar22 + 0x10), lVar24 != 0))
         && ((*(int *)(lVar20 + 0x38) <= *(int *)(lVar24 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar24 + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8) ==
              lVar20 + 0x30)))) {
        pdVar26 = (double *)(lVar22 + 0x1b0);
        pdVar27 = local_3b8;
        for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
          *pdVar27 = *pdVar26;
          pdVar26 = pdVar26 + 1;
          pdVar27 = pdVar27 + 1;
        }
        if (*(char *)(lVar22 + 0x240) == '\0') {
          lVar20 = *(longlong *)(lVar22 + 0x19c);
          lVar24 = 0;
          if ((lVar20 != 0) && (lVar4 = *(longlong *)(lVar22 + 0xe0), lVar4 != 0)) {
            lVar24 = 0;
            if ((longlong)*(int *)(lVar4 + 0x1b8) != 0) {
              lVar24 = (longlong)*(int *)(lVar4 + 0x1b8) * 8;
              lVar28 = 0;
              do {
                lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x1b0) + lVar28);
                if (*(longlong *)(lVar5 + 0x28) == lVar20) {
                  if (lVar5 != 0) {
                    auVar38 = *(undefined1 (*) [16])(lVar5 + 0x48);
                    auVar36 = divpd(auVar38,_DAT_1499387d0);
                    auVar43._8_8_ = 0;
                    auVar43._0_8_ = *(double *)(lVar5 + 0x58);
                    auVar43 = divpd(auVar43,_DAT_1499387d0);
                    auVar36 = roundpd(auVar36,auVar36,3);
                    auVar43 = roundpd(auVar43,auVar43,3);
                    dVar32 = (auVar38._0_8_ - auVar36._0_8_ * (double)DAT_1499387d0) *
                             0.008726646259971648;
                    dVar35 = (auVar38._8_8_ - auVar36._8_8_ * DAT_1499387d0._8_8_) *
                             0.008726646259971648;
                    dVar50 = (*(double *)(lVar5 + 0x58) - auVar43._0_8_ * (double)DAT_1499387d0) *
                             0.008726646259971648;
                    dVar54 = (0.0 - auVar43._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
                    dVar53 = sin(dVar32);
                    dVar45 = sin(dVar35);
                    dVar37 = sin(dVar50);
                    sin(dVar54);
                    dVar49 = cos(dVar32);
                    dVar35 = cos(dVar35);
                    dVar50 = cos(dVar50);
                    cos(dVar54);
                    local_398 = *(double *)(lVar5 + 0x30) + local_398;
                    dStack_390 = *(double *)(lVar5 + 0x38) + dStack_390;
                    local_388 = *(double *)(lVar5 + 0x40) + local_388;
                    dStack_380 = dStack_380 + 0.0;
                    local_3b8[0] = (dVar53 * dVar45 * dVar50 - dVar49 * dVar35 * dVar37) +
                                   local_3b8[0];
                    local_3b8[1] = (-(dVar53 * dVar35 * dVar50) - dVar49 * dVar45 * dVar37) +
                                   local_3b8[1];
                    dVar32 = dVar45 * dVar53 * dVar37 + dVar35 * dVar49 * dVar50 +
                             (double)local_3a8._8_8_;
                    local_3a8._8_4_ = SUB84(dVar32,0);
                    local_3a8._0_8_ =
                         -(dVar35 * dVar53 * dVar37) + dVar45 * dVar49 * dVar50 +
                         (double)local_3a8._0_8_;
                    local_3a8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
                    local_378 = *(double *)(lVar5 + 0x60) + local_378;
                    dStack_370 = *(double *)(lVar5 + 0x68) + dStack_370;
                    local_368 = *(double *)(lVar5 + 0x70) + local_368;
                    dStack_360 = dStack_360 + 0.0;
                    lVar20 = extraout_RAX;
                  }
                  break;
                }
                lVar28 = lVar28 + 8;
              } while (lVar24 != lVar28);
            }
          }
          auVar38 = *(undefined1 (*) [16])(param_1 + -0x93);
          dVar32 = auVar38._0_8_;
          dVar53 = auVar38._8_8_;
          auVar36 = *(undefined1 (*) [16])(param_1 + -0x91);
          dVar35 = auVar36._0_8_;
          dVar45 = auVar36._8_8_;
          auVar13._8_8_ = dStack_370;
          auVar13._0_8_ = local_378;
          auVar14._8_8_ = dStack_360;
          auVar14._0_8_ = local_368;
          auVar38 = minpd(auVar13,auVar38);
          auVar43 = minpd(auVar14,auVar36);
          auVar36._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
          auVar36._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
          iVar18 = movmskpd((int)lVar20,auVar36);
          auVar38._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
          auVar38._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
          uVar23 = movmskpd((int)lVar24,auVar38);
          if ((uVar23 & 0x3fffffff) == 0 && iVar18 == 0) {
            dVar9 = (double)param_1[-0x9b];
            dVar10 = (double)param_1[-0x9a];
            dVar11 = (double)param_1[-0x99];
            dVar12 = (double)param_1[-0x98];
            dVar49 = (double)param_1[-0x98];
            dVar37 = (double)param_1[-0x98];
            dVar50 = (double)param_1[-0x9b];
            dVar54 = (double)param_1[-0x9b];
            dVar48 = dVar50 * local_3b8[1];
            dVar6 = dVar54 * local_3b8[0];
            dVar51 = (double)param_1[-0x9a];
            dVar52 = (double)param_1[-0x9a];
            dVar7 = local_3b8[0] * dVar51;
            dVar8 = local_3b8[1] * dVar52;
            dVar46 = (double)param_1[-0x99];
            dVar47 = (double)param_1[-0x99];
            dVar40 = local_3b8[0] * dVar47;
            dVar42 = (double)local_3a8._8_8_ * dVar46;
            local_3b8[0] = local_3b8[1] * dVar46 * -1.0 +
                           (double)local_3a8._0_8_ * dVar51 +
                           (double)local_3a8._8_8_ * dVar50 * 1.0 + local_3b8[0] * dVar49;
            local_3b8[1] = dVar40 * 1.0 +
                           (double)local_3a8._8_8_ * dVar52 +
                           (double)local_3a8._0_8_ * dVar54 * -1.0 + local_3b8[1] * dVar37;
            local_398 = local_398 * dVar32;
            dStack_390 = dStack_390 * dVar53;
            local_388 = local_388 * dVar35;
            dStack_380 = dStack_380 * dVar45;
            dVar50 = dStack_390 * dVar9 - dVar10 * local_398;
            dVar51 = local_388 * dVar10 - dVar11 * dStack_390;
            dVar52 = local_398 * dVar11 - dVar9 * local_388;
            dVar54 = dStack_380 * dVar12 - dVar12 * dStack_380;
            dVar51 = dVar51 + dVar51;
            dVar52 = dVar52 + dVar52;
            dVar50 = dVar50 + dVar50;
            dVar54 = dVar54 + dVar54;
            local_398 = (dVar50 * dVar10 - dVar11 * dVar52) + dVar49 * dVar51 + local_398 +
                        (double)param_1[-0x97];
            dStack_390 = (dVar51 * dVar11 - dVar50 * dVar9) + dVar37 * dVar52 + dStack_390 +
                         (double)param_1[-0x96];
            local_388 = (dVar52 * dVar9 - dVar10 * dVar51) + dVar49 * dVar50 + local_388 +
                        (double)param_1[-0x95];
            dStack_380 = (dVar54 * dVar12 - dVar54 * dVar12) + dVar37 * dVar54 + dStack_380 +
                         (double)param_1[-0x94];
            local_3a8._8_8_ =
                 (double)local_3a8._0_8_ * dVar47 * -1.0 +
                 ((dVar6 * -1.0 + (double)local_3a8._8_8_ * dVar37) - dVar8);
            local_3a8._0_8_ =
                 dVar42 * 1.0 + ((dVar48 * 1.0 + (double)local_3a8._0_8_ * dVar49) - dVar7);
            local_378 = local_378 * dVar32;
            dStack_370 = dStack_370 * dVar53;
            local_368 = local_368 * dVar35;
            dStack_360 = dStack_360 * dVar45;
          }
          else {
            dVar50 = (double)param_1[-0x9b];
            dVar54 = (double)param_1[-0x9a];
            dVar51 = (double)param_1[-0x99];
            dVar52 = dVar54 + dVar54;
            dVar46 = dVar51 + dVar51;
            dVar49 = dVar50 * (dVar50 + dVar50);
            local_118 = (1.0 - (dVar49 + dVar54 * dVar52)) * dVar35;
            dVar37 = (double)param_1[-0x98];
            dVar47 = dVar46 * dVar37;
            dVar48 = (dVar50 + dVar50) * (double)param_1[-0x98];
            dVar37 = dVar52 * dVar37;
            local_128 = (dVar37 + (double)param_1[-0x9b] * dVar46) * dVar35;
            local_448._8_4_ = SUB84(dVar45 * dStack_360,0);
            local_448._0_8_ = dVar35 * local_368;
            local_448._12_4_ = (int)((ulonglong)(dVar45 * dStack_360) >> 0x20);
            local_168 = (1.0 - (dVar51 * dVar46 + dVar54 * dVar52)) * dVar32;
            dVar45 = (1.0 - (dVar51 * dVar46 + dVar49)) * dVar53;
            dStack_160 = (dVar52 * dVar50 + dVar47) * dVar32;
            local_138 = (dVar46 * dVar54 + dVar48) * dVar53;
            dStack_120 = (dVar46 * dVar54 - dVar48) * dVar35;
            local_158 = ((double)param_1[-0x9b] * dVar46 - dVar37) * dVar32;
            uStack_150 = 0;
            local_148._8_4_ = SUB84(dVar45,0);
            local_148._0_8_ = (dVar52 * dVar50 - dVar47) * dVar53;
            local_148._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
            uStack_130 = 0;
            uStack_110 = 0;
            local_108 = param_1[-0x97];
            lStack_100 = param_1[-0x96];
            local_f8 = param_1[-0x95];
            uStack_f0 = 0x3ff0000000000000;
            dVar45 = local_3b8[1] + local_3b8[1];
            dVar37 = (double)local_3a8._0_8_ + (double)local_3a8._0_8_;
            dVar35 = local_3b8[0] * (local_3b8[0] + local_3b8[0]);
            local_198 = (1.0 - (dVar35 + local_3b8[1] * dVar45)) * local_368;
            dVar49 = (local_3b8[0] + local_3b8[0]) * (double)local_3a8._8_8_;
            local_1a8 = (dVar45 * (double)local_3a8._8_8_ + local_3b8[0] * dVar37) * local_368;
            local_1c8 = (dVar45 * local_3b8[0] - dVar37 * (double)local_3a8._8_8_) * dStack_370;
            dStack_1a0 = (dVar37 * local_3b8[1] - dVar49) * local_368;
            local_458 = dVar32 * local_378;
            dStack_450 = dVar53 * dStack_370;
            local_1e8 = (1.0 - ((double)local_3a8._0_8_ * dVar37 + local_3b8[1] * dVar45)) *
                        local_378;
            dStack_1c0 = (1.0 - ((double)local_3a8._0_8_ * dVar37 + dVar35)) * dStack_370;
            dStack_1e0 = (dVar45 * local_3b8[0] + dVar37 * (double)local_3a8._8_8_) * local_378;
            local_1b8 = (dVar37 * local_3b8[1] + dVar49) * dStack_370;
            local_1d8 = (local_3b8[0] * dVar37 - dVar45 * (double)local_3a8._8_8_) * local_378;
            uStack_1d0 = 0;
            uStack_1b0 = 0;
            uStack_190 = 0;
            local_188 = local_398;
            dStack_180 = dStack_390;
            local_178 = local_388;
            uStack_170 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_338);
            local_460 = local_328;
            dVar35 = (double)local_328 * (double)local_328 +
                     local_338 * local_338 + (double)local_330 * (double)local_330;
            dVar53 = local_308 * local_308 + local_318 * local_318 + local_310 * local_310;
            dVar32 = local_2e8 * local_2e8 + local_2f8 * local_2f8 + local_2f0 * local_2f0;
            uVar30 = -(ulonglong)(0.0 <= dVar35 + -9.99999993922529e-09);
            dVar35 = (double)(~uVar30 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar35)) & uVar30);
            uVar30 = -(ulonglong)(0.0 <= dVar53 + -9.99999993922529e-09);
            dVar53 = (double)(~uVar30 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar53)) & uVar30);
            uVar30 = -(ulonglong)(0.0 <= dVar32 + -9.99999993922529e-09);
            dVar45 = (double)(~uVar30 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar32)) & uVar30);
            auVar33._8_8_ = -(ulonglong)(0.0 <= dStack_450);
            auVar33._0_8_ = -(ulonglong)(0.0 <= local_458);
            auVar38 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar33);
            uVar21 = local_448._0_8_;
            uVar15 = local_448._8_8_;
            dVar32 = (double)(~-(ulonglong)(0.0 <= (double)local_448._0_8_) & 0xbff0000000000000 |
                             -(ulonglong)(0.0 <= (double)local_448._0_8_) & 0x3ff0000000000000);
            dVar37 = auVar38._0_8_;
            local_338 = local_338 * dVar35 * dVar37;
            local_330 = (longlong *)((double)local_330 * dVar35 * dVar37);
            local_328 = (longlong *)(dVar35 * (double)local_328 * dVar37);
            dVar35 = auVar38._8_8_;
            local_308 = dVar53 * local_308 * dVar35;
            local_310 = local_310 * dVar53 * dVar35;
            local_318 = dVar35 * local_318 * dVar53;
            local_2e8 = dVar45 * local_2e8 * dVar32;
            local_2f0 = local_2f0 * dVar45 * dVar32;
            local_2f8 = dVar32 * local_2f8 * dVar45;
            FUN_14481fd10(&local_358,&local_338);
            dVar32 = local_348 * local_348 + local_358 * local_358;
            dVar35 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
            auVar39._0_8_ = dVar32 + dVar35;
            auVar39._8_8_ = dVar32 + dVar35;
            auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
            auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
            auVar38 = sqrtpd(auVar39,auVar39);
            auVar38 = divpd(_DAT_149934d80,auVar38);
            auVar44._0_8_ = auVar38._0_8_ * local_348;
            auVar44._8_8_ = auVar38._8_8_ * dStack_340;
            local_3b8[0] = (double)((ulonglong)(local_358 * auVar38._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
            local_3b8[1] = (double)((ulonglong)(dStack_350 * auVar38._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
            local_3a8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar44,auVar34);
            local_378 = local_458;
            dStack_370 = dStack_450;
            local_368 = (double)uVar21;
            dStack_360 = (double)uVar15;
            dStack_380 = 0.0;
            local_398 = local_2d8;
            dStack_390 = dStack_2d0;
            local_388 = local_2c8;
          }
        }
        else if (*(char *)(lVar22 + 0x240) == '\x01') {
          local_398 = *(double *)(param_2 + 0x28) + local_398;
          dStack_390 = *(double *)(param_2 + 0x30) + dStack_390;
          local_388 = *(double *)(param_2 + 0x38) + local_388;
          dStack_380 = dStack_380 + 0.0;
        }
        local_338 = (double)((ulonglong)local_338 & 0xffffffffffffff00);
        local_310 = (double)((ulonglong)local_310 & 0xffffffff00000000);
        FUN_1456bb102(&local_338,plVar3);
        FUN_1418a10ac(lVar22 + 0x180,plVar3,local_3b8);
        FUN_1448173f8(&local_310);
        if ((local_338._0_1_ == '\x03') && (local_328 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_328 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_328 + 0x10))();
          }
        }
        if ((param_1[10] != 0) && (plVar19 = (longlong *)param_1[0xb], plVar19 != (longlong *)0x0))
        {
          local_168 = local_398;
          dStack_160 = dStack_390;
          local_158 = local_388;
          FUN_14892be92(&local_338,&local_168,&local_430);
          (**(code **)(*plVar19 + 0x10))(plVar19,param_1,&local_338);
          if (local_228 != 0) {
            if (local_218 == (longlong *)0x0) {
              local_218 = local_208;
            }
            (**(code **)(*local_218 + 0x10))();
          }
        }
        lVar22 = param_1[-0xcd];
        if ((lVar22 != 0) || (lVar22 = FUN_1448abda6(plVar3), lVar22 != 0)) {
          param_1[6] = *(longlong *)(lVar22 + 0x6d0);
        }
      }
    }
  }
LAB_1414e4db9:
  if ((local_e0 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414e577a FUN_1414e577a body=172 status=ok
// SIG undefined FUN_1414e577a(void)

undefined8 FUN_1414e577a(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1[0x9b8] == 0) || (lVar1 = param_1[0x9b9], lVar1 == 0)) ||
     ((*(byte *)((longlong)param_1 + 0x4db9) & 0xfe) != 2)) {
    uVar2 = 0;
  }
  else {
    if ((char)param_1[-0x73a] == '\x03') {
      FUN_145965236(param_1 + 0x9b1,0);
      *(undefined1 *)(param_1 + 0x9b7) = 4;
      if ((param_1[0x9b4] != 0) && ((longlong *)param_1[0x9b5] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x9b5] + 0x78))();
      }
      (**(code **)(*param_1 + 0x98))(param_1,lVar1);
    }
    else {
      param_1 = param_1 + -0x769;
      uVar2 = FUN_14477b072(param_1,DAT_14cba80e0);
      (**(code **)(*param_1 + 0x248))(param_1,uVar2,0);
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1414e5826 FUN_1414e5826 body=2723 status=ok
// SIG undefined FUN_1414e5826(void)

ulonglong FUN_1414e5826(longlong param_1,longlong param_2,longlong *param_3)

{
  void *pvVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined **_Str;
  undefined8 uVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined **local_78;
  int local_70;
  undefined4 local_6c;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = FUN_1414e6368();
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar3 != '\0') goto LAB_1414e606d;
  local_78 = (undefined **)0x0;
  local_70 = *(int *)(param_2 + 0x18);
  lVar15 = (longlong)local_70;
  pvVar1 = *(void **)(param_2 + 0x10);
  if (lVar15 == 0) {
    local_6c = 0;
    iVar6 = 0;
    if (DAT_14cbced38 != 0) goto LAB_1414e58b4;
LAB_1414e5f68:
    bVar17 = true;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar1,lVar15 * 2);
    iVar6 = local_70;
    if (local_70 == DAT_14cbced38) {
      bVar17 = true;
      if (1 < local_70) {
        lVar15 = 0;
        while( true ) {
          uVar10 = *(ushort *)((longlong)local_78 + lVar15);
          uVar11 = (ulonglong)uVar10;
          uVar12 = *(ushort *)(DAT_14cbced30 + lVar15);
          if (uVar10 != uVar12) break;
          if (uVar10 == 0) goto LAB_1414e592c;
LAB_1414e5d14:
          lVar15 = lVar15 + 2;
        }
        if ((uVar12 | uVar10) < 0x80) {
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          uVar14 = (ulonglong)uVar12;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
          if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar14]) goto LAB_1414e5d14;
        }
        if (uVar10 != uVar12) goto LAB_1414e58bf;
      }
    }
    else {
LAB_1414e58b4:
      if (DAT_14cbced38 + iVar6 == 1) goto LAB_1414e5f68;
LAB_1414e58bf:
      local_88 = (void *)0x0;
      local_80 = *(int *)(param_2 + 0x18);
      lVar15 = (longlong)local_80;
      pvVar1 = *(void **)(param_2 + 0x10);
      if (lVar15 == 0) {
        local_7c = 0;
        if (DAT_14cbced48 == 0) goto LAB_1414e5f68;
        iVar6 = 0;
LAB_1414e5919:
        bVar17 = DAT_14cbced48 + iVar6 == 1;
      }
      else {
        FUN_1446dd670(&local_88,local_80,0);
        memcpy(local_88,pvVar1,lVar15 * 2);
        iVar6 = local_80;
        if (local_80 != DAT_14cbced48) goto LAB_1414e5919;
        bVar17 = true;
        if (1 < local_80) {
          lVar15 = 0;
          while( true ) {
            uVar10 = *(ushort *)((longlong)local_88 + lVar15);
            uVar5 = (uint)uVar10;
            uVar12 = *(ushort *)(DAT_14cbced40 + lVar15);
            uVar13 = (uint)uVar12;
            if (uVar10 != uVar12) {
              if ((uVar12 | uVar10) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar10];
                uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_1414e5d9d;
              }
              iVar6 = uVar5 - uVar13;
              goto LAB_1414e5f96;
            }
            if (uVar10 == 0) break;
LAB_1414e5d9d:
            lVar15 = lVar15 + 2;
          }
          iVar6 = 0;
LAB_1414e5f96:
          bVar17 = iVar6 == 0;
        }
      }
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1414e592c:
  if (local_78 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if (bVar17) {
    bVar4 = FUN_1414e62ca(param_1);
    if ((*param_3 != 0 & bVar4) != 1) goto LAB_1414e606d;
    FUN_140b6e6be(&local_78);
    local_78 = &PTR_FUN_14a5af930;
    local_58 = 0;
    uStack_50 = 0;
    if ((*(longlong *)(param_1 + 0x38) == 0) ||
       (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar15 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar15 + 0x360);
    }
    lVar15 = FUN_1463ce09c(uVar8,&local_78);
    if (lVar15 == 0) {
LAB_1414e5e57:
      lVar15 = 0;
    }
    else {
      lVar16 = FUN_144a5dd5e();
      if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar16 + 0x38) * 8) != lVar16 + 0x30)) goto LAB_1414e5e57;
    }
    local_78 = &PTR_FUN_14a5af930;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_78 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
    if (lVar15 == 0) goto LAB_1414e606d;
    local_78 = (undefined **)0x0;
    local_70 = *(int *)(param_2 + 0x18);
    lVar16 = (longlong)local_70;
    pvVar1 = *(void **)(param_2 + 0x10);
    if (lVar16 == 0) {
      local_6c = 0;
      if (DAT_14cbced38 != 0) {
        iVar6 = 0;
        goto LAB_1414e6165;
      }
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar1,lVar16 * 2);
      iVar6 = local_70;
      if (local_70 == DAT_14cbced38) {
        if (local_70 < 2) {
          if (local_78 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1414e617d;
        }
        lVar16 = 0;
        while( true ) {
          uVar10 = *(ushort *)((longlong)local_78 + lVar16);
          uVar5 = (uint)uVar10;
          uVar12 = *(ushort *)(DAT_14cbced30 + lVar16);
          uVar13 = (uint)uVar12;
          if (uVar10 != uVar12) {
            if ((uVar12 | uVar10) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar10];
              uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar12];
              if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_1414e5f21;
            }
            iVar6 = uVar5 - uVar13;
            goto LAB_1414e6261;
          }
          if (uVar10 == 0) break;
LAB_1414e5f21:
          lVar16 = lVar16 + 2;
        }
        iVar6 = 0;
LAB_1414e6261:
        bVar17 = iVar6 == 0;
      }
      else {
LAB_1414e6165:
        bVar17 = DAT_14cbced38 + iVar6 == 1;
      }
      if (local_78 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (!bVar17) {
        local_78 = (undefined **)0x0;
        local_70 = *(int *)(param_2 + 0x18);
        lVar16 = (longlong)local_70;
        pvVar1 = *(void **)(param_2 + 0x10);
        if (lVar16 == 0) {
          local_6c = 0;
          if (DAT_14cbced48 != 0) {
            iVar6 = 0;
            goto LAB_1414e627e;
          }
        }
        else {
          FUN_1446dd670(&local_78,local_70,0);
          memcpy(local_78,pvVar1,lVar16 * 2);
          iVar6 = local_70;
          if (local_70 == DAT_14cbced48) {
            if (local_70 < 2) {
              if (local_78 != (undefined **)0x0) {
                FUN_1400020a8();
              }
              goto LAB_1414e6298;
            }
            lVar16 = 0;
            while( true ) {
              uVar10 = *(ushort *)((longlong)local_78 + lVar16);
              uVar5 = (uint)uVar10;
              uVar12 = *(ushort *)(DAT_14cbced40 + lVar16);
              uVar13 = (uint)uVar12;
              if (uVar10 != uVar12) {
                if ((uVar12 | uVar10) < 0x80) {
                  uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar10];
                  uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar12];
                  if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_1414e6223;
                }
                iVar6 = uVar5 - uVar13;
                goto LAB_1414e62bf;
              }
              if (uVar10 == 0) break;
LAB_1414e6223:
              lVar16 = lVar16 + 2;
            }
            iVar6 = 0;
LAB_1414e62bf:
            bVar17 = iVar6 == 0;
          }
          else {
LAB_1414e627e:
            bVar17 = DAT_14cbced48 + iVar6 == 1;
          }
          if (local_78 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          if (!bVar17) goto LAB_1414e606d;
        }
LAB_1414e6298:
        if (*(int *)(param_1 + 0x668) == 0) goto LAB_1414e606d;
        plVar7 = *(longlong **)(param_1 + 0x660);
        goto LAB_1414e5b14;
      }
    }
LAB_1414e617d:
    if (*(int *)(param_1 + 0x658) == 0) goto LAB_1414e606d;
    plVar7 = *(longlong **)(param_1 + 0x650);
LAB_1414e5b14:
    if (plVar7 == (longlong *)0x0) goto LAB_1414e606d;
    lVar16 = *plVar7;
  }
  else {
    local_78 = (undefined **)0x0;
    local_70 = *(int *)(param_2 + 0x18);
    lVar15 = (longlong)local_70;
    pvVar1 = *(void **)(param_2 + 0x10);
    if (lVar15 == 0) {
      local_6c = 0;
      if (DAT_14cbced58 != 0) {
        iVar6 = 0;
        goto LAB_1414e599f;
      }
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar1,lVar15 * 2);
      iVar6 = local_70;
      if (local_70 == DAT_14cbced58) {
        if (local_70 < 2) {
          if (local_78 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1414e5fba;
        }
        lVar15 = 0;
        while( true ) {
          uVar10 = *(ushort *)((longlong)local_78 + lVar15);
          uVar5 = (uint)uVar10;
          uVar12 = *(ushort *)(DAT_14cbced50 + lVar15);
          uVar13 = (uint)uVar12;
          if (uVar10 != uVar12) {
            if ((uVar12 | uVar10) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar10];
              uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar12];
              if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_1414e5b56;
            }
            iVar6 = uVar5 - uVar13;
            goto LAB_1414e5b81;
          }
          if (uVar10 == 0) break;
LAB_1414e5b56:
          lVar15 = lVar15 + 2;
        }
        iVar6 = 0;
LAB_1414e5b81:
        bVar17 = iVar6 == 0;
      }
      else {
LAB_1414e599f:
        bVar17 = DAT_14cbced58 + iVar6 == 1;
      }
      if (local_78 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (!bVar17) {
        local_78 = (undefined **)0x0;
        local_70 = *(int *)(param_2 + 0x18);
        lVar15 = (longlong)local_70;
        pvVar1 = *(void **)(param_2 + 0x10);
        if (lVar15 == 0) {
          local_6c = 0;
          if (DAT_14cbced68 != 0) {
            iVar6 = 0;
            goto LAB_1414e5f8a;
          }
        }
        else {
          FUN_1446dd670(&local_78,local_70,0);
          memcpy(local_78,pvVar1,lVar15 * 2);
          iVar6 = local_70;
          if (local_70 == DAT_14cbced68) {
            if (local_70 < 2) {
              if (local_78 != (undefined **)0x0) {
                FUN_1400020a8();
              }
              goto LAB_1414e5a88;
            }
            lVar15 = 0;
            while( true ) {
              uVar10 = *(ushort *)((longlong)local_78 + lVar15);
              uVar5 = (uint)uVar10;
              uVar12 = *(ushort *)(DAT_14cbced60 + lVar15);
              uVar13 = (uint)uVar12;
              if (uVar10 != uVar12) {
                if ((uVar12 | uVar10) < 0x80) {
                  uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar10];
                  uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar12];
                  if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_1414e5a44;
                }
                iVar6 = uVar5 - uVar13;
                goto LAB_1414e5a71;
              }
              if (uVar10 == 0) break;
LAB_1414e5a44:
              lVar15 = lVar15 + 2;
            }
            iVar6 = 0;
          }
          else {
LAB_1414e5f8a:
            iVar6 = DAT_14cbced68 + iVar6 + -1;
          }
LAB_1414e5a71:
          if (local_78 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          if (iVar6 != 0) {
            local_78 = (undefined **)0x0;
            local_70 = *(int *)(param_2 + 0x18);
            lVar15 = (longlong)local_70;
            pvVar1 = *(void **)(param_2 + 0x10);
            if (lVar15 == 0) {
              local_6c = 0;
              if (DAT_14cbced78 != 0) {
                iVar6 = 0;
                goto LAB_1414e60d0;
              }
            }
            else {
              FUN_1446dd670(&local_78,local_70,0);
              memcpy(local_78,pvVar1,lVar15 * 2);
              iVar6 = local_70;
              if (local_70 == DAT_14cbced78) {
                if (local_70 < 2) {
                  if (local_78 != (undefined **)0x0) {
                    FUN_1400020a8();
                  }
                  goto LAB_1414e5c55;
                }
                lVar15 = 0;
                while( true ) {
                  uVar10 = *(ushort *)((longlong)local_78 + lVar15);
                  uVar5 = (uint)uVar10;
                  uVar12 = *(ushort *)(DAT_14cbced70 + lVar15);
                  uVar13 = (uint)uVar12;
                  if (uVar10 != uVar12) {
                    if ((uVar12 | uVar10) < 0x80) {
                      uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar10];
                      uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar12];
                      if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_1414e5c11;
                    }
                    iVar6 = uVar5 - uVar13;
                    goto LAB_1414e5c3e;
                  }
                  if (uVar10 == 0) break;
LAB_1414e5c11:
                  lVar15 = lVar15 + 2;
                }
                iVar6 = 0;
              }
              else {
LAB_1414e60d0:
                iVar6 = DAT_14cbced78 + iVar6 + -1;
              }
LAB_1414e5c3e:
              if (local_78 != (undefined **)0x0) {
                FUN_1400020a8();
              }
              if (iVar6 != 0) {
                uVar9 = 0;
                goto LAB_1414e606d;
              }
            }
LAB_1414e5c55:
            cVar3 = FUN_1414e62ca(param_1);
            if (cVar3 != '\0') goto LAB_1414e606d;
            local_78 = (undefined **)0x0;
            local_70 = *(int *)(param_2 + 0x28);
            lVar15 = (longlong)local_70;
            pvVar1 = *(void **)(param_2 + 0x20);
            if (lVar15 == 0) {
              local_6c = 0;
LAB_1414e60fc:
              _Str = (undefined **)&DAT_149dfb77a;
            }
            else {
              FUN_1446dd670(&local_78,local_70,0);
              memcpy(local_78,pvVar1,lVar15 * 2);
              _Str = local_78;
              if (local_70 == 0) goto LAB_1414e60fc;
            }
            iVar6 = _wtoi((wchar_t *)_Str);
            *(int *)(param_1 + 0x760) = iVar6;
            if (local_78 != (undefined **)0x0) {
              FUN_1400020a8();
              iVar6 = *(int *)(param_1 + 0x760);
            }
            if ((*(int *)(param_1 + 0x648) != 0) &&
               (plVar7 = *(longlong **)(param_1 + 0x640), plVar7 != (longlong *)0x0)) {
              (**(code **)(*plVar7 + 0x60))(plVar7,iVar6);
            }
            goto LAB_1414e606d;
          }
        }
LAB_1414e5a88:
        cVar3 = FUN_1414e62ca(param_1);
        if (cVar3 != '\0') goto LAB_1414e606d;
        lVar15 = param_1 + 0x6e8;
        local_78 = (undefined **)0x0;
        local_70 = *(int *)(param_2 + 0x28);
        lVar16 = (longlong)local_70;
        pvVar1 = *(void **)(param_2 + 0x20);
        if (lVar16 == 0) {
          local_6c = 0;
        }
        else {
          FUN_1446dd670(&local_78,local_70,0);
          memcpy(local_78,pvVar1,lVar16 * 2);
        }
        FUN_145c0955e(lVar15,&local_78);
        if (local_78 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        if (*(int *)(param_1 + 0x638) == 0) goto LAB_1414e606d;
        plVar7 = *(longlong **)(param_1 + 0x630);
        goto LAB_1414e5b14;
      }
    }
LAB_1414e5fba:
    cVar3 = FUN_1414e62ca(param_1);
    if (cVar3 != '\0') goto LAB_1414e606d;
    local_78 = (undefined **)0x0;
    local_70 = *(int *)(param_2 + 0x28);
    lVar15 = (longlong)local_70;
    pvVar1 = *(void **)(param_2 + 0x20);
    if (lVar15 == 0) {
      local_6c = 0;
      iVar6 = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar1,lVar15 * 2);
      iVar6 = local_70;
    }
    iVar2 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(&local_88,iVar2,local_78,1);
    *(void **)(param_1 + 0x6e0) = local_88;
    if (local_78 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if ((*(int *)(param_1 + 0x678) == 0) ||
       (plVar7 = *(longlong **)(param_1 + 0x670), plVar7 == (longlong *)0x0)) goto LAB_1414e606d;
    lVar15 = param_1 + 0x6e0;
    lVar16 = *plVar7;
  }
  (**(code **)(lVar16 + 0x60))(plVar7,lVar15);
LAB_1414e606d:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1414e62ca FUN_1414e62ca body=158 status=ok
// SIG undefined FUN_1414e62ca(void)

bool FUN_1414e62ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x70);
    lVar8 = 0;
    uVar6 = 0;
    do {
      if (*(char *)(*(longlong *)(lVar4 + lVar8) + 0x18) != '\0') {
        if ((int)uVar6 < 0) {
          return false;
        }
        if (iVar3 <= (int)uVar6) {
          return false;
        }
        lVar7 = (ulonglong)(uVar6 & 0x7fffffff) * 0x10;
        lVar8 = *(longlong *)(lVar4 + lVar7);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar7);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (lVar8 == 0) {
          bVar9 = false;
        }
        else {
          bVar9 = *(int *)(lVar8 + 0x14) == 0;
        }
        if (plVar5 == (longlong *)0x0) {
          return bVar9;
        }
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return bVar9;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return bVar9;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return bVar9;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 << 4 != lVar8);
  }
  return false;
}



// FUNCTION 1414e6368 FUN_1414e6368 body=489 status=ok
// SIG undefined FUN_1414e6368(void)

ulonglong FUN_1414e6368(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  size_t _Size;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  ulonglong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (void *)0x0;
  uVar5 = *(uint *)(param_2 + 0x18);
  pvVar3 = *(void **)(param_2 + 0x10);
  local_40 = CONCAT44(local_40._4_4_,uVar5);
  if ((longlong)(int)uVar5 == 0) {
    local_40 = (ulonglong)uVar5;
    _Size = 0;
    if (DAT_14cb978c8 != 0) {
      iVar6 = 0;
      _Size = 0;
      goto LAB_1414e63da;
    }
  }
  else {
    FUN_1446dd670(&local_48,uVar5,0);
    _Size = (longlong)(int)uVar5 * 2;
    memcpy(local_48,pvVar3,_Size);
    iVar6 = (int)local_40;
    if ((int)local_40 == DAT_14cb978c8) {
      if ((int)local_40 < 2) {
        if (local_48 != (void *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1414e649c;
      }
      lVar9 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)local_48 + lVar9);
        uVar5 = (uint)uVar1;
        uVar2 = *(ushort *)(DAT_14cb978c0 + lVar9);
        uVar8 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1414e6445;
          }
          iVar6 = uVar5 - uVar8;
          goto LAB_1414e6470;
        }
        if (uVar1 == 0) break;
LAB_1414e6445:
        lVar9 = lVar9 + 2;
      }
      iVar6 = 0;
LAB_1414e6470:
      bVar10 = iVar6 == 0;
    }
    else {
LAB_1414e63da:
      bVar10 = DAT_14cb978c8 + iVar6 == 1;
    }
    _Size = CONCAT71((int7)(_Size >> 8),bVar10);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (bVar10 == false) {
      uVar7 = 0;
      goto LAB_1414e63f6;
    }
  }
LAB_1414e649c:
  cVar4 = FUN_1414e62ca(param_1);
  uVar7 = CONCAT71((int7)(_Size >> 8),1);
  if (cVar4 == '\0') {
    local_48 = (void *)((ulonglong)local_48 & 0xffffffff00000000);
    uVar11 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_58 = (void *)0x0;
    local_50 = *(int *)(param_2 + 0x28);
    lVar9 = (longlong)local_50;
    pvVar3 = *(void **)(param_2 + 0x20);
    if (lVar9 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar3,lVar9 * 2);
      uVar11 = extraout_XMM0_Da;
    }
    cVar4 = FUN_145c0984a(uVar11,&local_58,&local_48);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (cVar4 != '\0') {
      FUN_1414e6552(param_1,&local_48);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1414e63f6:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e6552 FUN_1414e6552 body=709 status=ok
// SIG undefined FUN_1414e6552(void)

void FUN_1414e6552(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong *_Src;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)((longlong)param_1 + 0x54) == 3) {
    plVar1 = param_1 + 0xa5;
    plVar7 = plVar1;
    cVar6 = FUN_148aaf676(param_2,plVar1);
    if ((cVar6 == '\0') || ((char)param_1[0xa4] == '\0')) {
      *(undefined4 *)(param_1 + 0xa5) = *param_2;
      plVar2 = param_1 + 0xa6;
      if (plVar2 != (longlong *)(param_2 + 2)) {
        uVar3 = param_2[4];
        _Src = *(longlong **)(param_2 + 2);
        *(uint *)(param_1 + 0xa7) = uVar3;
        if (uVar3 == 0 && *(int *)((longlong)param_1 + 0x53c) == 0) {
          *(undefined4 *)((longlong)param_1 + 0x53c) = 0;
        }
        else {
          plVar7 = (longlong *)(ulonglong)uVar3;
          FUN_1446dd670(plVar2,plVar7);
          if (uVar3 != 0) {
            memcpy((void *)*plVar2,_Src,(longlong)(int)uVar3 * 2);
            plVar7 = _Src;
          }
        }
      }
      if (*(char *)((longlong)param_1 + 0x21) == '\x01') {
        uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),(char)param_1[0xa4]) ^ 1;
        if (((int)param_1[0xa5] == 0 & (byte)uVar8) == 0) {
          (**(code **)(*param_1 + 0x110))(param_1,uVar8,(int)param_1[0xa5] == 0);
        }
      }
      if ((char)param_1[0xa4] == '\0') {
        *(undefined1 *)(param_1 + 0xa4) = 1;
        if (((int)param_1[0x93] != 0) && ((longlong *)param_1[0x92] != (longlong *)0x0)) {
          (**(code **)(*(longlong *)param_1[0x92] + 0x60))();
        }
        cVar6 = (**(code **)(*param_1 + 0xf8))(param_1);
        if (cVar6 != '\0') goto LAB_1414e6574;
      }
      if ((int)*plVar1 - 1U < 3) {
        lVar4 = param_1[7];
        if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x40))) {
          lVar4 = **(longlong **)(lVar4 + 0x38);
          local_40 = lVar4;
          if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
            FUN_14689c22e(lVar4);
          }
          else if (lVar4 == 0) goto LAB_1414e6574;
          lVar4 = param_1[0xbe];
          local_50 = (undefined8 *)0x0;
          local_48 = 0;
          FUN_1446efa72(&local_50,0,2,0x10);
          local_48 = 2;
          *local_50 = &PTR_LAB_14b4f5d60;
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
          local_50[2] = lVar9;
          *local_50 = &PTR_FUN_14b4f5cf0;
          local_50[3] = param_1;
          FUN_1461ca704(lVar4,&local_40,plVar2,&local_50);
          if (local_48 != 0) {
            if (local_50 == (undefined8 *)0x0) goto LAB_1414e6574;
            (**(code **)*local_50)(local_50,0);
            FUN_1446efa72(&local_50,0,0,0x10);
            local_48 = 0;
          }
          if (local_50 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      else if (((int)param_1[0x97] != 0) && (param_1[0x96] != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
      }
    }
  }
LAB_1414e6574:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e6830 FUN_1414e6830 body=404 status=ok
// SIG undefined FUN_1414e6830(void)

void FUN_1414e6830(longlong *param_1,undefined8 *param_2)

{
  uint *_Dst;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != (longlong *)0x0) {
    uVar4 = FUN_140da3b08();
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_140da3b08();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      if (plVar6 != (longlong *)0x0 && plVar5 != plVar6) {
        plVar5 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6);
        local_48 = *param_2;
        local_40 = param_2[1];
        FUN_1403350f6(plVar5);
        iVar3 = (int)plVar5[1];
        if (0 < iVar3) {
          lVar7 = 0;
          bVar8 = false;
          do {
            while( true ) {
              lVar2 = *plVar5;
              _Dst = (uint *)(lVar2 + lVar7 * 0x10);
              if (((((*(longlong *)(lVar2 + 8 + lVar7 * 0x10) != 0) && (_Dst[1] != 0)) &&
                   (uVar1 = *_Dst, -1 < (int)uVar1)) &&
                  (((int)uVar1 < DAT_14c9647dc &&
                   (plVar6 = (longlong *)
                             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                   plVar6 != (longlong *)0x0)))) &&
                 ((*(uint *)(plVar6 + 2) == _Dst[1] &&
                  (((*(uint *)(plVar6 + 1) >> 0x1c & 1) == 0 && (*plVar6 != 0)))))) break;
              iVar9 = iVar3 + ~(uint)lVar7;
              if (iVar9 != 0) {
                if (0 < iVar9) {
                  iVar9 = 1;
                }
                memmove(_Dst,(void *)(lVar2 + (longlong)(iVar3 - iVar9) * 0x10),(longlong)iVar9 << 4
                       );
                iVar3 = (int)plVar5[1];
              }
              iVar3 = iVar3 + -1;
              *(int *)(plVar5 + 1) = iVar3;
              bVar8 = true;
              if (iVar3 <= lVar7) goto LAB_1414e69bb;
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < iVar3);
          if (bVar8) {
LAB_1414e69bb:
            FUN_1400bbcfc(plVar5);
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414e69c6 FUN_1414e69c6 body=956 status=ok
// SIG undefined FUN_1414e69c6(void)

uint * FUN_1414e69c6(uint *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_198 [48];
  longlong local_168 [2];
  longlong local_158 [2];
  undefined1 local_148 [8];
  longlong local_140;
  int local_138;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = FUN_14571e1e4();
  *(undefined8 *)(param_1 + 8) = uVar3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  plVar4 = (longlong *)FUN_140f2e83e();
  lVar6 = plVar4[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar6 = plVar4[0x22];
  }
  lVar7 = *(longlong *)(lVar6 + 0x60);
  if (*(longlong *)(param_1 + 2) != lVar7) {
    param_1[6] = 0;
    param_1[7] = 0;
  }
  *(longlong *)(param_1 + 2) = lVar7;
  if (*(longlong *)(param_1 + 4) != *(longlong *)(lVar6 + 0x68)) {
    param_1[6] = 0;
    param_1[7] = 0;
  }
  uVar3 = FUN_14477b664();
  lVar5 = FUN_14477b664(uVar3);
  *(longlong *)(param_1 + 4) = lVar5;
  lVar7 = *(longlong *)(lVar6 + 0x70);
  *(longlong *)(param_1 + 6) = lVar7;
  if (lVar5 == 0) {
    uVar3 = FUN_1407f787c();
    lVar5 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 4) = lVar5;
    lVar7 = *(longlong *)(param_1 + 6);
  }
  if (((lVar7 == 0) && (param_1[6] = 0, param_1[7] = 0, lVar5 != 0)) &&
     (*(longlong *)(param_1 + 2) != 0)) {
    plVar4 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar4 + 0x110))(plVar4);
      uVar3 = FUN_144aff482(uVar3,param_1 + 2);
    }
    *(undefined8 *)(param_1 + 6) = uVar3;
  }
  FUN_1413e28b0(&local_140);
  lVar6 = FUN_145ca8b40(&local_140,lVar6 + 0x38,0,0);
  if (lVar6 == 0) {
    *param_1 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(lVar6 + 0xc);
    *param_1 = uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar8 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar8 = *(uint *)(lVar6 + 0x10);
      bVar11 = uVar8 == 0;
      if (bVar11) {
        *(uint *)(lVar6 + 0x10) = uVar9;
        uVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar8 = uVar9;
      }
    }
  }
  param_1[1] = uVar8;
  FUN_140f77756(&local_140);
  if (((param_1[1] != 0) && (uVar8 = *param_1, -1 < (int)uVar8)) &&
     (((int)uVar8 < DAT_14c9647dc &&
      (((plVar4 = (longlong *)
                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
        plVar4 != (longlong *)0x0 && (*(uint *)(plVar4 + 2) == param_1[1])) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar6 = *plVar4;
    }
    else {
      lVar6 = 0;
    }
    lVar7 = (longlong)*(int *)(lVar6 + 0x40);
    if (0 < lVar7) {
      plVar4 = *(longlong **)(lVar6 + 0x38);
      do {
        if (*plVar4 == DAT_14cb543b0) {
          if (plVar4 != (longlong *)0x0) {
            lVar6 = *(longlong *)(param_1 + 8);
            if (1 < *(int *)(lVar6 + 0x48)) {
              lVar7 = 8;
              uVar10 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar6 + 0x40) + lVar7) != 0) {
                  FUN_1401cfb1c(lVar6,local_158,uVar10 & 0xffffffff);
                  FUN_1400b22c2(local_168,&DAT_14afe0534);
                  FUN_1401c7f3e(&local_140,local_168,local_158);
                  iVar1 = local_138 + -1;
                  if (local_138 == 0) {
                    iVar1 = 0;
                  }
                  FUN_1446f82e2(local_148,iVar1,local_140,1);
                  if (local_140 != 0) {
                    FUN_1400020a8();
                  }
                  if (local_168[0] != 0) {
                    FUN_1400020a8();
                  }
                  if (local_158[0] != 0) {
                    FUN_1400020a8();
                  }
                  lVar6 = *(longlong *)(param_1 + 8);
                }
                uVar10 = uVar10 + 1;
                lVar7 = lVar7 + 0x10;
              } while ((longlong)uVar10 < (longlong)*(int *)(lVar6 + 0x48) + -1);
            }
            goto LAB_1414e6b94;
          }
          break;
        }
        plVar4 = (longlong *)((longlong)plVar4 + 0x1c);
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    param_1[0] = 0;
    param_1[1] = 0;
  }
LAB_1414e6b94:
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e6d84 FUN_1414e6d84 body=290 status=ok
// SIG undefined FUN_1414e6d84(void)

undefined8 FUN_1414e6d84(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3e9c20;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_38[2] = lVar5;
  *local_38 = &PTR_FUN_14b416f80;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(local_38 + 3) = *param_3;
  *(undefined4 *)((longlong)local_38 + 0x1c) = uVar1;
  *(undefined4 *)(local_38 + 4) = uVar2;
  *(undefined4 *)((longlong)local_38 + 0x24) = uVar3;
  FUN_140ebcfd8(param_1,param_2,&local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_1414e6e68;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1414e6e68:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e6ea8 FUN_1414e6ea8 body=325 status=ok
// SIG undefined FUN_1414e6ea8(void)

void FUN_1414e6ea8(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 1414e6fee FUN_1414e6fee body=84 status=ok
// SIG undefined FUN_1414e6fee(void)

void FUN_1414e6fee(longlong *param_1)

{
  (**(code **)(*param_1 + 0x3b0))(param_1,(char)param_1[0xe7] != '\0');
  (**(code **)(*param_1 + 0xa78))(param_1);
  FUN_1401c3c2c(param_1);
  param_1[0xcf] = param_1[0xcc];
  FUN_14099bbec(param_1,1);
  FUN_1406cc378(param_1);
  return;
}



// FUNCTION 1414e7042 FUN_1414e7042 body=185 status=ok
// SIG undefined FUN_1414e7042(void)

void FUN_1414e7042(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  *param_1 = &PTR_FUN_14a46cec0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  return;
}



// FUNCTION 1414e70fc FUN_1414e70fc body=107 status=ok
// SIG undefined FUN_1414e70fc(void)

void FUN_1414e70fc(uint *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && (((plVar2 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar2 != (longlong *)0x0 && (*(uint *)(plVar2 + 2) == param_1[1])) &&
         (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*(longlong *)(param_1 + 2) != 0)))))) {
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = 0;
    }
    *(longlong *)(lVar3 + 0x38) = *(longlong *)(param_1 + 2);
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 1414e7168 FUN_1414e7168 body=475 status=ok
// SIG undefined FUN_1414e7168(void)

void FUN_1414e7168(uint *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
LAB_1414e72d9:
    lVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar2 = *(uint *)(lVar7 + 0x10);
    if (uVar2 == 0) {
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
      lVar5 = 0;
      LOCK();
      uVar2 = *(uint *)(lVar7 + 0x10);
      bVar8 = uVar2 == 0;
      if (bVar8) {
        *(uint *)(lVar7 + 0x10) = uVar6;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar2 = uVar6;
      }
      param_1[1] = uVar2;
      if (uVar2 != 0) goto LAB_1414e71d6;
    }
    else {
      param_1[1] = uVar2;
LAB_1414e71d6:
      uVar6 = *param_1;
      lVar5 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        plVar4 = (longlong *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((plVar4 == (longlong *)0x0) ||
           ((*(uint *)(plVar4 + 2) != uVar2 || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
        goto LAB_1414e72d9;
        lVar5 = *plVar4;
      }
    }
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(lVar5 + 0x38);
  local_68 = *(undefined4 *)(param_3 + 1);
  local_70 = *param_3;
  FUN_1448075d0(local_60);
  uVar3 = FUN_1414e7344(param_5,local_60,param_4);
  if (param_1[1] != 0) {
    uVar2 = *param_1;
    lVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1414e72a0;
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       ((*(uint *)(plVar4 + 2) == param_1[1] && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
      lVar7 = *plVar4;
      goto LAB_1414e72a0;
    }
  }
  lVar7 = 0;
LAB_1414e72a0:
  *(undefined8 *)(lVar7 + 0x38) = uVar3;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414e7344 FUN_1414e7344 body=479 status=ok
// SIG undefined FUN_1414e7344(void)

void * FUN_1414e7344(longlong param_1,uint *param_2,int *param_3)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_88 [46];
  undefined2 local_5a;
  uint *local_58;
  undefined2 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
    lVar5 = param_1 + 0x118;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x120);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x128) - 1U & *param_2) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 0xe0);
      do {
        lVar1 = lVar5 + (longlong)iVar4 * 0x38;
        if (*(uint *)(lVar5 + (longlong)iVar4 * 0x38) == *param_2) {
          if ((lVar1 != 0) && ((ushort *)(lVar1 + 0x28) != (ushort *)0x0)) {
            uVar2 = *(ushort *)(lVar1 + 0x28);
            if ((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(param_1 + 0xd8))) {
              _Dst = *(void **)(*(longlong *)(param_1 + 0xd0) + (ulonglong)uVar2 * 8);
              goto LAB_1414e73ef;
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x30);
      } while (iVar4 != -1);
    }
  }
  local_5a = *(undefined2 *)(param_1 + 0xd8);
  local_50 = &local_5a;
  local_58 = param_2;
  FUN_140394d20((longlong *)(param_1 + 0xe0),local_44,&local_58,0);
  iVar4 = *(int *)(param_1 + 0xd8);
  lVar5 = (longlong)iVar4;
  *(uint *)(param_1 + 0xd8) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xdc) < iVar4 + 1U) {
    FUN_145c0e6c4((longlong *)(param_1 + 0xd0),iVar4);
  }
  lVar1 = *(longlong *)(param_1 + 0xd0);
  *(undefined8 *)(lVar1 + lVar5 * 8) = 0;
  _Dst = (void *)FUN_14001cc68(0x158);
  memset(_Dst,0,0x158);
  FUN_145c0e60c(_Dst);
  lVar3 = *(longlong *)(lVar1 + lVar5 * 8);
  *(void **)(lVar1 + lVar5 * 8) = _Dst;
  if (lVar3 != 0) {
    FUN_145a9b0e2(lVar3);
    FUN_1400020a8(lVar3);
    _Dst = *(void **)(lVar1 + lVar5 * 8);
  }
  FUN_1447715ec(_Dst,param_2);
  if (((param_3 == (int *)0x0) || (*param_3 == 0)) || (param_3[1] == 0)) {
    param_3 = (int *)(param_1 + 0x130);
    bVar6 = true;
  }
  else {
    bVar6 = *param_3 == DAT_14c948000;
    if (bVar6) {
      param_3 = (int *)(param_1 + 0x130);
    }
  }
  *(bool *)((longlong)_Dst + 0x28) = bVar6;
  FUN_1414e7674(param_1,_Dst,param_3);
LAB_1414e73ef:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return _Dst;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e7524 FUN_1414e7524 body=335 status=ok
// SIG undefined FUN_1414e7524(void)

undefined2 * FUN_1414e7524(longlong param_1,undefined2 *param_2,ushort *param_3,int *param_4)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 uVar8;
  longlong lVar9;
  
  uVar1 = *param_3;
  uVar5 = 0xffff;
  if (-1 < (short)uVar1) {
    uVar2 = *(uint *)(param_1 + 0x10);
    if ((int)(short)uVar1 < (int)uVar2) {
      lVar3 = *(longlong *)(param_1 + 8);
      lVar7 = *(longlong *)(lVar3 + (ulonglong)uVar1 * 8);
      if ((lVar7 != 0) && (*(uint *)(lVar7 + 8) == (uint)param_3[1])) {
        if (-1 < *(short *)(lVar7 + 4)) {
          do {
            lVar7 = *(longlong *)(lVar3 + (longlong)*(short *)(lVar7 + 2) * 8);
          } while (-1 < *(short *)(lVar7 + 4));
          if (lVar7 == 0) goto LAB_1414e75ef;
        }
        iVar6 = *param_4;
        if (-1 < iVar6) {
          lVar9 = 0;
          do {
            lVar4 = *(longlong *)(lVar3 + lVar9);
            if (((lVar4 != 0) && (*(short *)(lVar4 + 4) < 0)) && (iVar6 == *(int *)(lVar4 + 0x50)))
            {
              uVar1 = *(ushort *)(lVar4 + 2);
              if ((((int)(uint)uVar1 < (int)uVar2 && -1 < (short)uVar1) &&
                  (lVar9 = *(longlong *)(lVar3 + (ulonglong)uVar1 * 8), lVar9 != 0)) &&
                 (*(uint *)(lVar9 + 8) == (uint)*(ushort *)(lVar4 + 8))) {
                for (; -1 < *(short *)(lVar9 + 4);
                    lVar9 = *(longlong *)(lVar3 + (longlong)*(short *)(lVar9 + 2) * 8)) {
                }
                if ((lVar9 != 0) && (lVar9 != lVar7)) {
                  lVar7 = FUN_143d9c13a(param_1,lVar7);
                  iVar6 = *param_4;
                }
              }
              break;
            }
            lVar9 = lVar9 + 8;
          } while ((ulonglong)uVar2 * 8 - lVar9 != 0);
        }
        if (iVar6 != *(int *)(lVar7 + 0x50)) {
          *(int *)(lVar7 + 0x50) = iVar6;
          FUN_1414f506e(param_1,lVar7);
          FUN_141323fc0(param_1,lVar7,8);
        }
        uVar5 = *(undefined2 *)(lVar7 + 2);
        uVar8 = *(undefined2 *)(lVar7 + 8);
        goto LAB_1414e75f1;
      }
    }
  }
LAB_1414e75ef:
  uVar8 = 0;
LAB_1414e75f1:
  *param_2 = uVar5;
  param_2[1] = uVar8;
  return param_2;
}



// FUNCTION 1414e7674 FUN_1414e7674 body=2907 status=ok
// SIG undefined FUN_1414e7674(void)

void FUN_1414e7674(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  short sVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  short *psVar10;
  longlong *plVar11;
  short *psVar12;
  short *psVar13;
  byte bVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  short *psVar20;
  uint uVar21;
  int iVar22;
  longlong *plVar23;
  int iVar24;
  undefined1 auStack_e8 [39];
  char local_c1;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  short *local_78;
  longlong *local_70;
  short local_66;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = param_2 + 0x58;
  FUN_140df79be(local_88,0);
  local_90 = param_2 + 0xa8;
  FUN_140df79be(local_90,0);
  FUN_145a9b1c8(param_2);
  local_98 = (longlong *)(param_2 + 0x148);
  FUN_145c0eb9a(local_98,(int)param_1[0x3f]);
  FUN_1447715ec(param_2 + 0x30,param_3);
  local_a0 = param_1 + 0x18;
  local_66 = 0;
  if (0 < (int)param_1[0x19]) {
    plVar23 = (longlong *)(param_2 + 0xf8);
    local_c0 = plVar23;
    local_b8 = param_2;
    do {
      lVar3 = *(longlong *)(param_1[0x18] + (longlong)local_66 * 8);
      cVar7 = (**(code **)(*param_1 + 800))(param_1,lVar3,0,param_2);
      if (cVar7 != '\0') {
        iVar17 = (int)param_1[0x3f];
        if ((longlong)iVar17 != 0) {
          lVar9 = 0;
          do {
            if (*(longlong *)(param_1[0x3e] + lVar9) == *(longlong *)(lVar3 + 0x78)) {
              uVar18 = (int)(lVar9 >> 4) * -0x33333333;
              if (((-1 < (int)uVar18) && ((int)uVar18 < iVar17)) &&
                 ((int)uVar18 < *(int *)(param_2 + 0x150))) {
                plVar23 = (longlong *)((ulonglong)(uVar18 & 0x7fffffff) * 0x50 + *local_98);
              }
              break;
            }
            lVar9 = lVar9 + 0x50;
          } while ((longlong)iVar17 * 0x50 != lVar9);
        }
        local_c1 = cVar7;
        if ((int)plVar23[1] != *(int *)((longlong)plVar23 + 0x34)) {
          lVar9 = *(longlong *)(lVar3 + 0x80);
          uVar18 = (uint)((ulonglong)lVar9 >> 0x10);
          uVar21 = (uint)lVar9 & 0xffff;
          plVar11 = plVar23 + 7;
          if ((longlong *)plVar23[8] != (longlong *)0x0) {
            plVar11 = (longlong *)plVar23[8];
          }
          iVar17 = *(int *)((longlong)plVar11 +
                           (ulonglong)
                           ((int)plVar23[9] - 1U &
                           (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar21) +
                           (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar21 >> 4)) * 4);
          if (iVar17 != -1) {
            do {
              plVar11 = (longlong *)(*plVar23 + (longlong)iVar17 * 0x18);
              if (*plVar11 == lVar9) {
                if (((plVar11 != (longlong *)0x0) && (plVar11 + 1 != (longlong *)0x0)) &&
                   (psVar10 = (short *)plVar11[1], psVar10 != (short *)0x0)) goto LAB_1414e7a78;
                break;
              }
              iVar17 = (int)plVar11[2];
            } while (iVar17 != -1);
          }
        }
        psVar10 = (short *)FUN_14001cc68(0x68,0x10);
        psVar10[0x20] = 0;
        psVar10[0x21] = 0;
        psVar10[0x22] = 0;
        psVar10[0x23] = 0;
        psVar10[0x24] = 0;
        psVar10[0x25] = 0;
        psVar10[0x26] = 0;
        psVar10[0x27] = 0;
        psVar10[0] = 0;
        psVar10[1] = 0;
        psVar10[2] = 0;
        psVar10[3] = 0;
        psVar10[4] = 0;
        psVar10[5] = 0;
        psVar10[6] = 0;
        psVar10[7] = 0;
        psVar10[8] = 0;
        psVar10[9] = 0;
        psVar10[10] = 0;
        psVar10[0xb] = 0;
        psVar10[0xc] = 0;
        psVar10[0xd] = 0;
        psVar10[0xe] = 0;
        psVar10[0xf] = 0;
        psVar10[0x10] = 0;
        psVar10[0x11] = 0;
        psVar10[0x12] = 0;
        psVar10[0x13] = 0;
        psVar10[0x14] = 0;
        psVar10[0x15] = 0;
        psVar10[0x16] = 0;
        psVar10[0x17] = 0;
        psVar10[0x18] = 0;
        psVar10[0x19] = 0;
        psVar10[0x1a] = 0;
        psVar10[0x1b] = 0;
        psVar10[0x1c] = 0;
        psVar10[0x1d] = 0;
        psVar10[0x1e] = 0;
        psVar10[0x1f] = 0;
        psVar10[0x28] = 0;
        psVar10[0x29] = 0;
        psVar10[0x2a] = 0;
        psVar10[0x2b] = 0;
        psVar10[0x2c] = 0;
        psVar10[0x2d] = 0;
        psVar10[0x2e] = 0;
        psVar10[0x2f] = 0;
        psVar10[0x30] = 0;
        psVar10[0x31] = 0;
        psVar10[0x32] = 0;
        psVar10[0x33] = 0;
        psVar10[0x22] = 0x80;
        psVar10[0x23] = 0;
        psVar10[0x24] = -1;
        psVar10[0x25] = -1;
        if (*(int *)((longlong)plVar23 + 0x34) == 0) {
          iVar17 = (int)plVar23[1];
          *(int *)(plVar23 + 1) = iVar17 + 1;
          if (*(int *)((longlong)plVar23 + 0xc) == iVar17) {
            FUN_14482b872(plVar23,iVar17);
          }
          iVar22 = (int)plVar23[5];
          if (iVar22 == 0) {
            iVar8 = -1;
          }
          else {
            iVar8 = iVar22 + 0x1e;
            if (-1 < iVar22 + -1) {
              iVar8 = iVar22 + -1;
            }
            iVar8 = iVar8 >> 5;
          }
          plVar11 = plVar23 + 2;
          iVar15 = iVar22 + 1;
          iVar24 = iVar22 + 0x1f;
          if (-1 < iVar22) {
            iVar24 = iVar22;
          }
          if (iVar24 >> 5 == iVar8) {
            *(int *)(plVar23 + 5) = iVar15;
          }
          else {
            if (*(int *)((longlong)plVar23 + 0x2c) <= iVar22) {
              if (iVar22 + 0x20U < 0xa0) {
                iVar15 = 0x80;
                iVar8 = iVar22;
              }
              else {
                uVar18 = iVar22 + 0x20U >> 5;
                local_b0 = (longlong *)(ulonglong)uVar18;
                if (*(int *)((longlong)plVar23 + 0x2c) + 0x1fU < 0xa0) {
                  uVar21 = 4;
                  if (4 < uVar18) {
                    uVar21 = uVar18;
                  }
                }
                else {
                  uVar21 = (uVar18 * 3 >> 3) + uVar18 + 0x10;
                }
                uVar16 = FUN_144a3809e(uVar21 << 2,0);
                iVar8 = (int)(uVar16 >> 2);
                iVar15 = iVar8 << 5;
                if (iVar8 < (int)local_b0) {
                  iVar15 = -0x20;
                }
                iVar8 = (int)plVar23[5];
              }
              *(int *)((longlong)plVar23 + 0x2c) = iVar15;
              FUN_1446efbd8(plVar11,iVar8);
              iVar15 = (int)plVar23[5] + 1;
            }
            iVar8 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar8 = iVar15;
            }
            *(int *)(plVar23 + 5) = iVar15;
            if (iVar15 % 0x20 != 0) {
              plVar19 = (longlong *)plVar23[4];
              if ((longlong *)plVar23[4] == (longlong *)0x0) {
                plVar19 = plVar11;
              }
              bVar14 = -(char)(iVar15 % 0x20);
              *(uint *)((longlong)plVar19 + (longlong)(iVar8 >> 5) * 4) =
                   (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar8 >> 5) * 4) <<
                         (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
            }
          }
          lVar9 = (longlong)iVar17;
          if ((longlong *)plVar23[4] != (longlong *)0x0) {
            plVar11 = (longlong *)plVar23[4];
          }
          bVar14 = (byte)iVar22 & 0x1f;
          puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar24 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
        }
        else {
          iVar17 = (int)plVar23[6];
          lVar9 = (longlong)iVar17;
          iVar22 = *(int *)(*plVar23 + 4 + lVar9 * 0x18);
          *(int *)(plVar23 + 6) = iVar22;
          iVar8 = *(int *)((longlong)plVar23 + 0x34) + -1;
          *(int *)((longlong)plVar23 + 0x34) = iVar8;
          if (iVar8 != 0) {
            *(undefined4 *)(*plVar23 + (longlong)iVar22 * 0x18) = 0xffffffff;
          }
        }
        plVar11 = plVar23 + 2;
        if ((longlong *)plVar23[4] != (longlong *)0x0) {
          plVar11 = (longlong *)plVar23[4];
        }
        iVar22 = iVar17 + 0x1f;
        if (-1 < iVar17) {
          iVar22 = iVar17;
        }
        puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar22 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar17 & 0x1f);
        plVar11 = (longlong *)(*plVar23 + lVar9 * 0x18);
        lVar9 = *(longlong *)(lVar3 + 0x80);
        *plVar11 = lVar9;
        plVar11[1] = (longlong)psVar10;
        *(undefined4 *)(plVar11 + 2) = 0xffffffff;
        uVar18 = (uint)((ulonglong)lVar9 >> 0x10);
        uVar21 = (uint)lVar9 & 0xffff;
        uVar18 = ((uint)lVar9 << 0x10 | uVar21) + (int)((ulonglong)lVar9 >> 0x20) +
                 (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar21 >> 4);
        uVar21 = (int)plVar23[1] - *(int *)((longlong)plVar23 + 0x34);
        if ((uVar21 != 0) && (uVar21 != 1)) {
          plVar19 = plVar23 + 7;
          if ((longlong *)plVar23[8] != (longlong *)0x0) {
            plVar19 = (longlong *)plVar23[8];
          }
          iVar22 = *(int *)((longlong)plVar19 + (ulonglong)((int)plVar23[9] - 1U & uVar18) * 4);
          if (iVar22 != -1) {
            do {
              plVar19 = (longlong *)(*plVar23 + (longlong)iVar22 * 0x18);
              if (*plVar19 == lVar9) {
                uVar4 = *(undefined4 *)((longlong)plVar11 + 4);
                lVar9 = plVar11[1];
                uVar5 = *(undefined4 *)((longlong)plVar11 + 0xc);
                *(int *)plVar19 = (int)*plVar11;
                *(undefined4 *)((longlong)plVar19 + 4) = uVar4;
                *(int *)(plVar19 + 1) = (int)lVar9;
                *(undefined4 *)((longlong)plVar19 + 0xc) = uVar5;
                FUN_1489b393a(plVar23,iVar17);
                goto LAB_1414e7a78;
              }
              iVar22 = (int)plVar19[2];
            } while (iVar22 != -1);
          }
        }
        if (uVar21 < 4) {
          iVar22 = 1;
        }
        else {
          uVar16 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
          lVar9 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar22 = 1 << ((byte)lVar9 & 0x1f);
        }
        if (((int)uVar21 < 1) || (iVar22 <= (int)plVar23[9])) {
          uVar18 = (int)plVar23[9] - 1U & uVar18;
          *(uint *)((longlong)plVar11 + 0x14) = uVar18;
          plVar19 = (longlong *)plVar23[8];
          if ((longlong *)plVar23[8] == (longlong *)0x0) {
            plVar19 = plVar23 + 7;
          }
          *(undefined4 *)(plVar11 + 2) =
               *(undefined4 *)
                ((longlong)plVar19 + ((longlong)(int)plVar23[9] - 1U & (longlong)(int)uVar18) * 4);
          plVar11 = (longlong *)plVar23[8];
          if ((longlong *)plVar23[8] == (longlong *)0x0) {
            plVar11 = plVar23 + 7;
          }
          *(int *)((longlong)plVar11 + ((longlong)(int)plVar23[9] - 1U & (longlong)(int)uVar18) * 4)
               = iVar17;
        }
        else {
          *(int *)(plVar23 + 9) = iVar22;
          FUN_1414e81d0(plVar23);
        }
LAB_1414e7a78:
        lVar9 = *(longlong *)(lVar3 + 0x88);
        psVar12 = psVar10;
        if (lVar9 != 0) {
          plVar23 = (longlong *)(psVar10 + 0xc);
          if (*(int *)(psVar10 + 0x10) != *(int *)(psVar10 + 0x26)) {
            uVar18 = (uint)((ulonglong)lVar9 >> 0x10);
            uVar21 = (uint)lVar9 & 0xffff;
            psVar12 = psVar10 + 0x28;
            if (*(short **)(psVar10 + 0x2c) != (short *)0x0) {
              psVar12 = *(short **)(psVar10 + 0x2c);
            }
            iVar17 = *(int *)(psVar12 +
                             (ulonglong)
                             (*(int *)(psVar10 + 0x30) - 1U &
                             (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar21) +
                             (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar21 >> 4)) * 2);
            if (iVar17 != -1) {
              do {
                plVar11 = (longlong *)(*plVar23 + (longlong)iVar17 * 0x18);
                if (*plVar11 == lVar9) {
                  if ((plVar11 + 1 != (longlong *)0x0 && plVar11 != (longlong *)0x0) &&
                     (psVar12 = (short *)plVar11[1], psVar12 != (short *)0x0)) goto LAB_1414e7a8b;
                  break;
                }
                iVar17 = (int)plVar11[2];
              } while (iVar17 != -1);
            }
          }
          psVar12 = (short *)FUN_14001cc68(0x18,0x10);
          psVar12[0] = 0;
          psVar12[1] = 0;
          psVar12[2] = 0;
          psVar12[3] = 0;
          psVar12[4] = 0;
          psVar12[5] = 0;
          psVar12[6] = 0;
          psVar12[7] = 0;
          psVar12[8] = 0;
          psVar12[9] = 0;
          psVar12[10] = 0;
          psVar12[0xb] = 0;
          local_b0 = plVar23;
          if (*(int *)(psVar10 + 0x26) == 0) {
            iVar17 = *(int *)(psVar10 + 0x10);
            *(int *)(psVar10 + 0x10) = iVar17 + 1;
            if (*(int *)(psVar10 + 0x12) == iVar17) {
              FUN_14482b872(plVar23,iVar17);
            }
            iVar22 = *(int *)(psVar10 + 0x20);
            if (iVar22 == 0) {
              iVar8 = -1;
            }
            else {
              iVar8 = iVar22 + 0x1e;
              if (-1 < iVar22 + -1) {
                iVar8 = iVar22 + -1;
              }
              iVar8 = iVar8 >> 5;
            }
            psVar13 = psVar10 + 0x14;
            iVar15 = iVar22 + 1;
            iVar24 = iVar22 + 0x1f;
            if (-1 < iVar22) {
              iVar24 = iVar22;
            }
            if (iVar24 >> 5 == iVar8) {
              *(int *)(psVar10 + 0x20) = iVar15;
            }
            else {
              if (*(int *)(psVar10 + 0x22) <= iVar22) {
                if (iVar22 + 0x20U < 0xa0) {
                  iVar15 = 0x80;
                  iVar8 = iVar22;
                }
                else {
                  uVar18 = iVar22 + 0x20U >> 5;
                  local_a8 = (ulonglong)uVar18;
                  if (*(int *)(psVar10 + 0x22) + 0x1fU < 0xa0) {
                    uVar21 = 4;
                    if (4 < uVar18) {
                      uVar21 = uVar18;
                    }
                  }
                  else {
                    uVar21 = (uVar18 * 3 >> 3) + uVar18 + 0x10;
                  }
                  uVar16 = FUN_144a3809e(uVar21 << 2,0);
                  iVar8 = (int)(uVar16 >> 2);
                  iVar15 = -0x20;
                  if ((int)local_a8 <= iVar8) {
                    iVar15 = iVar8 << 5;
                  }
                  iVar8 = *(int *)(psVar10 + 0x20);
                }
                *(int *)(psVar10 + 0x22) = iVar15;
                FUN_1446efbd8(psVar13,iVar8);
                iVar15 = *(int *)(psVar10 + 0x20) + 1;
              }
              iVar8 = iVar15 + 0x1f;
              if (-1 < iVar15) {
                iVar8 = iVar15;
              }
              *(int *)(psVar10 + 0x20) = iVar15;
              if (iVar15 % 0x20 != 0) {
                psVar20 = *(short **)(psVar10 + 0x1c);
                if (*(short **)(psVar10 + 0x1c) == (short *)0x0) {
                  psVar20 = psVar13;
                }
                bVar14 = -(char)(iVar15 % 0x20);
                *(uint *)(psVar20 + (longlong)(iVar8 >> 5) * 2) =
                     (uint)(*(int *)(psVar20 + (longlong)(iVar8 >> 5) * 2) << (bVar14 & 0x1f)) >>
                     (bVar14 & 0x1f);
              }
            }
            lVar9 = (longlong)iVar17;
            if (*(short **)(psVar10 + 0x1c) != (short *)0x0) {
              psVar13 = *(short **)(psVar10 + 0x1c);
            }
            bVar14 = (byte)iVar22 & 0x1f;
            *(uint *)(psVar13 + (longlong)(iVar24 >> 5) * 2) =
                 *(uint *)(psVar13 + (longlong)(iVar24 >> 5) * 2) &
                 (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
          }
          else {
            iVar17 = *(int *)(psVar10 + 0x24);
            lVar9 = (longlong)iVar17;
            iVar22 = *(int *)(*(longlong *)(psVar10 + 0xc) + 4 + lVar9 * 0x18);
            *(int *)(psVar10 + 0x24) = iVar22;
            iVar8 = *(int *)(psVar10 + 0x26) + -1;
            *(int *)(psVar10 + 0x26) = iVar8;
            if (iVar8 != 0) {
              *(undefined4 *)(*(longlong *)(psVar10 + 0xc) + (longlong)iVar22 * 0x18) = 0xffffffff;
            }
          }
          psVar13 = psVar10 + 0x14;
          if (*(short **)(psVar10 + 0x1c) != (short *)0x0) {
            psVar13 = *(short **)(psVar10 + 0x1c);
          }
          iVar22 = iVar17 + 0x1f;
          if (-1 < iVar17) {
            iVar22 = iVar17;
          }
          *(uint *)(psVar13 + (longlong)(iVar22 >> 5) * 2) =
               *(uint *)(psVar13 + (longlong)(iVar22 >> 5) * 2) | 1 << ((byte)iVar17 & 0x1f);
          plVar23 = (longlong *)(*(longlong *)(psVar10 + 0xc) + lVar9 * 0x18);
          lVar9 = *(longlong *)(lVar3 + 0x88);
          *plVar23 = lVar9;
          plVar23[1] = (longlong)psVar12;
          *(undefined4 *)(plVar23 + 2) = 0xffffffff;
          uVar18 = (uint)((ulonglong)lVar9 >> 0x10);
          uVar21 = (uint)lVar9 & 0xffff;
          uVar18 = ((uint)lVar9 << 0x10 | uVar21) + (int)((ulonglong)lVar9 >> 0x20) +
                   (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar21 >> 4);
          uVar21 = *(int *)(psVar10 + 0x10) - *(int *)(psVar10 + 0x26);
          if (1 < uVar21) {
            psVar13 = psVar10 + 0x28;
            if (*(short **)(psVar10 + 0x2c) != (short *)0x0) {
              psVar13 = *(short **)(psVar10 + 0x2c);
            }
            iVar22 = *(int *)(psVar13 + (ulonglong)(*(int *)(psVar10 + 0x30) - 1U & uVar18) * 2);
            if (iVar22 != -1) {
              do {
                plVar11 = (longlong *)(*local_b0 + (longlong)iVar22 * 0x18);
                if (*plVar11 == lVar9) {
                  uVar4 = *(undefined4 *)((longlong)plVar23 + 4);
                  lVar9 = plVar23[1];
                  uVar5 = *(undefined4 *)((longlong)plVar23 + 0xc);
                  *(int *)plVar11 = (int)*plVar23;
                  *(undefined4 *)((longlong)plVar11 + 4) = uVar4;
                  *(int *)(plVar11 + 1) = (int)lVar9;
                  *(undefined4 *)((longlong)plVar11 + 0xc) = uVar5;
                  FUN_1489b38c8(local_b0,iVar17);
                  goto LAB_1414e7a8b;
                }
                iVar22 = (int)plVar11[2];
              } while (iVar22 != -1);
            }
          }
          iVar22 = 1;
          if (3 < uVar21) {
            uVar16 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
            lVar9 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar22 = 1 << ((byte)lVar9 & 0x1f);
          }
          if (((int)uVar21 < 1) || (iVar22 <= *(int *)(psVar10 + 0x30))) {
            uVar18 = *(int *)(psVar10 + 0x30) - 1U & uVar18;
            *(uint *)((longlong)plVar23 + 0x14) = uVar18;
            psVar13 = *(short **)(psVar10 + 0x2c);
            if (*(short **)(psVar10 + 0x2c) == (short *)0x0) {
              psVar13 = psVar10 + 0x28;
            }
            *(undefined4 *)(plVar23 + 2) =
                 *(undefined4 *)
                  (psVar13 + ((longlong)*(int *)(psVar10 + 0x30) - 1U & (longlong)(int)uVar18) * 2);
            psVar13 = *(short **)(psVar10 + 0x2c);
            if (*(short **)(psVar10 + 0x2c) == (short *)0x0) {
              psVar13 = psVar10 + 0x28;
            }
            *(int *)(psVar13 + ((longlong)*(int *)(psVar10 + 0x30) - 1U & (longlong)(int)uVar18) * 2
                    ) = iVar17;
          }
          else {
            *(int *)(psVar10 + 0x30) = iVar22;
            FUN_1414e8470(local_b0);
          }
        }
LAB_1414e7a8b:
        sVar6 = local_66;
        param_2 = local_b8;
        plVar23 = local_c0;
        if (local_c1 == '\x03') {
          sVar2 = *psVar12;
          iVar17 = *(int *)(psVar12 + 8);
          *(uint *)(psVar12 + 8) = iVar17 + 1U;
          if (*(uint *)(psVar12 + 10) < iVar17 + 1U) {
            FUN_1405b572a(psVar12 + 4,iVar17);
          }
          lVar9 = (longlong)(int)sVar2;
          memmove((void *)(*(longlong *)(psVar12 + 4) + lVar9 * 2 + 2),
                  (void *)(*(longlong *)(psVar12 + 4) + lVar9 * 2),
                  (ulonglong)(uint)(iVar17 - sVar2) * 2);
          *(short *)(*(longlong *)(psVar12 + 4) + lVar9 * 2) = sVar6;
          *psVar12 = *psVar12 + 1;
          psVar12[1] = psVar12[1] + 1;
        }
        else if (local_c1 == '\x01') {
          iVar17 = *(int *)(psVar12 + 8);
          *(uint *)(psVar12 + 8) = iVar17 + 1U;
          if (*(uint *)(psVar12 + 10) < iVar17 + 1U) {
            FUN_1405b572a(psVar12 + 4,iVar17);
          }
          *(short *)(*(longlong *)(psVar12 + 4) + (longlong)iVar17 * 2) = sVar6;
          plVar23 = local_c0;
          param_2 = local_b8;
        }
        else if (local_c1 == '\x02') {
          sVar2 = psVar12[1];
          iVar17 = *(int *)(psVar12 + 8);
          *(uint *)(psVar12 + 8) = iVar17 + 1U;
          if (*(uint *)(psVar12 + 10) < iVar17 + 1U) {
            FUN_1405b572a(psVar12 + 4,iVar17);
          }
          lVar9 = (longlong)(int)sVar2;
          memmove((void *)(*(longlong *)(psVar12 + 4) + lVar9 * 2 + 2),
                  (void *)(*(longlong *)(psVar12 + 4) + lVar9 * 2),
                  (ulonglong)(uint)(iVar17 - sVar2) * 2);
          *(short *)(*(longlong *)(psVar12 + 4) + lVar9 * 2) = sVar6;
          psVar12[1] = psVar12[1] + 1;
          plVar23 = local_c0;
          param_2 = local_b8;
        }
        local_80 = (longlong *)(lVar3 + 0x50);
        local_78 = &local_66;
        FUN_14039531e(local_88,local_64,&local_80,0);
        local_80 = (longlong *)(lVar3 + 0x28);
        local_78 = &local_66;
        FUN_14039531e(local_90,local_64,&local_80,0);
      }
      local_66 = local_66 + 1;
    } while ((int)local_66 < (int)param_1[0x19]);
  }
  local_70 = local_a0;
  local_80 = param_1;
  local_78 = (short *)param_2;
  FUN_145c0ece1();
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414e81d0 FUN_1414e81d0 body=670 status=ok
// SIG undefined FUN_1414e81d0(void)

void FUN_1414e81d0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
LAB_1414e821b:
    uVar4 = 0;
    do {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar11 != uVar4);
  }
  else {
    if (uVar11 == 0) goto LAB_1414e83c7;
    FUN_1446efa72(plVar7,0,uVar11,4);
    if (0 < (int)uVar11) goto LAB_1414e821b;
  }
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
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
  iVar6 = (int)local_68;
  uVar11 = (uint)local_58;
  iVar12 = local_58._4_4_;
  iVar5 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar10 = *param_1;
      lVar14 = (longlong)iVar12;
      uVar2 = *(undefined8 *)(lVar10 + lVar14 * 0x18);
      uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar15 = (uint)uVar2 & 0xffff;
      uVar9 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar8 = (int)uVar9;
      *(int *)(lVar10 + 0x14 + lVar14 * 0x18) = iVar8;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(lVar10 + 0x10 + lVar14 * 0x18) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar11 = ~(uint)uVar13 & uVar11;
      plVar7 = (longlong *)local_60[2];
      if ((longlong *)local_60[2] == (longlong *)0x0) {
        plVar7 = local_60;
      }
      iVar8 = (int)local_60[3];
      lVar10 = (longlong)iVar6;
      uVar4 = *(uint *)((longlong)plVar7 + lVar10 * 4) & uVar11;
      if (uVar4 == 0) {
        iVar12 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar12 = iVar8 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar3 = iVar12;
        if (iVar12 < iVar6) {
          iVar3 = iVar6;
        }
        if (iVar12 <= iVar6) break;
        lVar14 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar4 = *(uint *)((longlong)plVar7 + lVar14 * 4 + lVar10 * 4 + 4);
          if (uVar4 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar3 - lVar10 == lVar14) goto LAB_1414e83c7;
        }
        iVar6 = iVar6 + (int)lVar14 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar13 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar12 = (iVar5 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar8);
  }
LAB_1414e83c7:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e8470 FUN_1414e8470 body=482 status=ok
// SIG undefined FUN_1414e8470(void)

void FUN_1414e8470(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 1414e8653 FUN_1414e8653 body=1254 status=ok
// SIG undefined FUN_1414e8653(void)

void FUN_1414e8653(longlong param_1,uint param_2,undefined8 *param_3)

{
  float fVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_3a8 [32];
  undefined8 *local_388;
  undefined8 *local_380;
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (1 < (int)param_2) {
    memset(local_368,0,0x2f0);
    local_370 = param_1 + (ulonglong)param_2 * 0x18 + -0x18;
    local_378 = param_1;
    fVar22 = logf((float)(int)param_2);
    local_368[0] = (int)(longlong)(fVar22 + fVar22);
    plVar21 = &local_378;
    do {
      puVar10 = (undefined8 *)*plVar21;
      puVar19 = (undefined8 *)plVar21[1];
      iVar15 = (int)plVar21[2];
      uVar11 = (int)((ulonglong)((longlong)puVar19 - (longlong)puVar10) >> 3) * -0x55555555 + 1;
      puVar16 = puVar10;
      puVar14 = puVar10;
      if (iVar15 != 0) {
LAB_1414e870a:
        if (8 < (int)uVar11) {
          uVar12 = (ulonglong)(uVar11 >> 1);
          local_68 = puVar14[uVar12 * 3 + 2];
          uVar5 = puVar14[uVar12 * 3];
          uVar6 = (puVar14 + uVar12 * 3)[1];
          puVar14[uVar12 * 3 + 2] = puVar14[2];
          uVar7 = puVar14[1];
          puVar14[uVar12 * 3] = *puVar14;
          (puVar14 + uVar12 * 3)[1] = uVar7;
          puVar14[2] = local_68;
          local_78._0_4_ = (undefined4)uVar5;
          local_78._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          uStack_70._0_4_ = (undefined4)uVar6;
          uStack_70._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          *(undefined4 *)puVar14 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar14 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_70._4_4_;
          puVar18 = puVar19 + 3;
          puVar16 = puVar14;
          local_388 = puVar10;
          local_380 = puVar19;
          local_78 = uVar5;
          uStack_70 = uVar6;
          do {
            puVar10 = puVar16 + 3;
            puVar20 = puVar16 + 3;
            do {
              puVar16 = puVar20;
              puVar9 = puVar10;
              if (puVar19 < puVar16) break;
              cVar8 = FUN_145c0ef50(*(undefined8 *)*param_3,puVar14[1],puVar16[1]);
              puVar10 = puVar9 + 3;
              puVar20 = puVar16 + 3;
            } while (cVar8 == '\0');
            do {
              puVar20 = puVar18;
              puVar18 = puVar20 + -3;
              if (puVar18 <= puVar14) break;
              lVar13 = (longlong)*(int *)(puVar20[-2] + 0x10);
              fVar22 = 3.4028235e+38;
              if (lVar13 != 0) {
                lVar17 = 0;
                fVar22 = 3.4028235e+38;
                do {
                  uVar2 = *(ushort *)(*(longlong *)(puVar20[-2] + 8) + lVar17);
                  if ((((-1 < (short)uVar2) &&
                       (plVar3 = *(longlong **)(**(longlong **)*param_3 + 0x10),
                       (int)(short)uVar2 < (int)plVar3[1])) &&
                      (lVar4 = *(longlong *)(*plVar3 + (ulonglong)uVar2 * 8), lVar4 != 0)) &&
                     (fVar23 = *(float *)(lVar4 + 0xe4), fVar23 < fVar22)) {
                    fVar22 = fVar23;
                  }
                  lVar17 = lVar17 + 2;
                } while (lVar13 * 2 != lVar17);
              }
              lVar13 = (longlong)*(int *)(puVar14[1] + 0x10);
              fVar23 = 3.4028235e+38;
              if (lVar13 != 0) {
                lVar17 = 0;
                fVar23 = 3.4028235e+38;
                do {
                  uVar2 = *(ushort *)(*(longlong *)(puVar14[1] + 8) + lVar17);
                  if (((-1 < (short)uVar2) &&
                      (plVar3 = *(longlong **)(**(longlong **)*param_3 + 0x10),
                      (int)(short)uVar2 < (int)plVar3[1])) &&
                     ((lVar4 = *(longlong *)(*plVar3 + (ulonglong)uVar2 * 8), lVar4 != 0 &&
                      (fVar1 = *(float *)(lVar4 + 0xe4), fVar1 < fVar23)))) {
                    fVar23 = fVar1;
                  }
                  lVar17 = lVar17 + 2;
                } while (lVar13 * 2 != lVar17);
              }
            } while (fVar23 <= fVar22);
            if (puVar18 < puVar16) goto LAB_1414e88c5;
            local_68 = puVar16[2];
            uVar5 = *puVar16;
            uVar6 = puVar16[1];
            puVar16[2] = puVar20[-1];
            uVar7 = puVar20[-2];
            *puVar16 = *puVar18;
            puVar16[1] = uVar7;
            puVar20[-1] = local_68;
            local_78._0_4_ = (undefined4)uVar5;
            local_78._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            uStack_70._0_4_ = (undefined4)uVar6;
            uStack_70._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            *(undefined4 *)puVar18 = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar20 + -0x14) = local_78._4_4_;
            *(undefined4 *)(puVar20 + -2) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)puVar20 + -0xc) = uStack_70._4_4_;
            local_78 = uVar5;
            uStack_70 = uVar6;
          } while( true );
        }
        if (puVar14 < puVar19) {
          do {
            puVar10 = puVar14;
            if (puVar14 + 3 <= puVar19) {
              puVar16 = puVar14;
              puVar18 = puVar14 + 3;
              do {
                lVar13 = (longlong)*(int *)(puVar10[1] + 0x10);
                fVar22 = 3.4028235e+38;
                if (lVar13 != 0) {
                  lVar17 = 0;
                  fVar22 = 3.4028235e+38;
                  do {
                    uVar2 = *(ushort *)(*(longlong *)(puVar10[1] + 8) + lVar17);
                    if (((-1 < (short)uVar2) &&
                        (plVar3 = *(longlong **)(**(longlong **)*param_3 + 0x10),
                        (int)(short)uVar2 < (int)plVar3[1])) &&
                       ((lVar4 = *(longlong *)(*plVar3 + (ulonglong)uVar2 * 8), lVar4 != 0 &&
                        (fVar23 = *(float *)(lVar4 + 0xe4), fVar23 < fVar22)))) {
                      fVar22 = fVar23;
                    }
                    lVar17 = lVar17 + 2;
                  } while (lVar13 * 2 != lVar17);
                }
                lVar13 = (longlong)*(int *)(puVar16[4] + 0x10);
                fVar23 = 3.4028235e+38;
                if (lVar13 != 0) {
                  lVar17 = 0;
                  fVar23 = 3.4028235e+38;
                  do {
                    uVar2 = *(ushort *)(*(longlong *)(puVar16[4] + 8) + lVar17);
                    if ((((-1 < (short)uVar2) &&
                         (plVar3 = *(longlong **)(**(longlong **)*param_3 + 0x10),
                         (int)(short)uVar2 < (int)plVar3[1])) &&
                        (lVar4 = *(longlong *)(*plVar3 + (ulonglong)uVar2 * 8), lVar4 != 0)) &&
                       (fVar1 = *(float *)(lVar4 + 0xe4), fVar1 < fVar23)) {
                      fVar23 = fVar1;
                    }
                    lVar17 = lVar17 + 2;
                  } while (lVar13 * 2 != lVar17);
                }
                if (fVar22 < fVar23) {
                  puVar10 = puVar18;
                }
                puVar20 = puVar18 + 3;
                puVar16 = puVar18;
                puVar18 = puVar20;
              } while (puVar20 <= puVar19);
            }
            local_68 = puVar10[2];
            local_78 = *puVar10;
            uStack_70 = puVar10[1];
            uVar6 = local_78;
            uVar7 = uStack_70;
            puVar10[2] = puVar19[2];
            uVar5 = puVar19[1];
            *puVar10 = *puVar19;
            puVar10[1] = uVar5;
            puVar19[2] = local_68;
            local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
            uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            *(undefined4 *)puVar19 = (undefined4)local_78;
            *(undefined4 *)((longlong)puVar19 + 4) = local_78._4_4_;
            *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_70._4_4_;
            puVar19 = puVar19 + -3;
            local_78 = uVar6;
            uStack_70 = uVar7;
          } while (puVar14 < puVar19);
        }
        goto LAB_1414e8aba;
      }
LAB_1414e8b05:
      FUN_1489b39ac(puVar16,uVar11,param_3);
LAB_1414e8aba:
      plVar21 = plVar21 + -3;
    } while (&local_378 <= plVar21);
  }
  if ((local_60 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1414e88c5:
  local_68 = puVar14[2];
  local_78 = *puVar14;
  uStack_70 = puVar14[1];
  uVar6 = local_78;
  uVar7 = uStack_70;
  puVar14[2] = puVar20[-1];
  uVar5 = puVar20[-2];
  *puVar14 = *puVar18;
  puVar14[1] = uVar5;
  puVar20[-1] = local_68;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  *(undefined4 *)puVar18 = (undefined4)local_78;
  *(undefined4 *)((longlong)puVar20 + -0x14) = local_78._4_4_;
  *(undefined4 *)(puVar20 + -2) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar20 + -0xc) = uStack_70._4_4_;
  iVar15 = iVar15 + -1;
  puVar20 = puVar20 + -6;
  local_78 = uVar6;
  uStack_70 = uVar7;
  if ((longlong)puVar20 - (longlong)local_388 < (longlong)local_380 - (longlong)puVar9) {
    if (puVar16 < puVar19) {
      *plVar21 = (longlong)puVar16;
      plVar21[1] = (longlong)puVar19;
      *(int *)(plVar21 + 2) = iVar15;
      plVar21 = plVar21 + 3;
    }
    puVar16 = puVar14;
    if (puVar18 <= puVar14 + 3) goto LAB_1414e8aba;
  }
  else {
    if (puVar14 + 3 < puVar18) {
      *plVar21 = (longlong)puVar14;
      plVar21[1] = (longlong)puVar20;
      *(int *)(plVar21 + 2) = iVar15;
      plVar21 = plVar21 + 3;
    }
    puVar14 = puVar9;
    puVar20 = puVar19;
    if (puVar19 <= puVar16) goto LAB_1414e8aba;
  }
  uVar11 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar14) >> 3) * -0x55555555 + 1;
  puVar10 = puVar14;
  puVar19 = puVar20;
  puVar14 = puVar16;
  if (iVar15 == 0) goto LAB_1414e8b05;
  goto LAB_1414e870a;
}



// FUNCTION 1414e8b3a FUN_1414e8b3a body=264 status=ok
// SIG undefined FUN_1414e8b3a(void)

undefined8 * FUN_1414e8b3a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  wchar_t *_Str2;
  undefined2 *puVar3;
  wchar_t *_Str1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined8 local_38;
  wchar_t *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  FUN_140056680(&local_30);
  uVar1 = local_28 - 1;
  if (local_28 == 0) {
    uVar1 = 0;
  }
  if (0 < (int)uVar1) {
    _Str1 = L"";
    _Str2 = L"";
    if (local_28 != 0) {
      _Str2 = local_30;
    }
    if (*(int *)(param_2 + 1) != 0) {
      _Str1 = (wchar_t *)*param_2;
    }
    iVar2 = wcsncmp(_Str1,_Str2,(ulonglong)uVar1);
    if (iVar2 == 0) {
      FUN_1446f470e(param_1,_Str1,1);
      goto LAB_1414e8c12;
    }
  }
  FUN_140474144(&local_48,&local_30,param_2);
  puVar3 = local_48;
  if (local_40 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_38,puVar3,1);
  *param_1 = local_38;
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1414e8c12:
  if (local_30 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1414e8c44 FUN_1414e8c44 body=343 status=ok
// SIG undefined FUN_1414e8c44(void)

undefined8 FUN_1414e8c44(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
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
  if ((byte)(*(byte *)(param_1 + 0xb0) - 1 | *(byte *)(param_1 + 0xb0)) < 8) {
LAB_1414e8c6b:
    uVar3 = 0;
  }
  else {
    if (param_2 != 0) {
      plVar2 = (longlong *)FUN_140d1732e(param_2,param_3);
      if (plVar2 != (longlong *)0x0) {
        if (DAT_14cbadd90 == 0) {
          local_30 = &local_18;
          local_18 = FUN_141030f22;
          local_20 = FUN_14081d0ea;
          local_28 = &LAB_1459f2e4c;
          local_38 = &LAB_148c39de3;
          local_40 = &LAB_1457a9eb2;
          local_48 = &DAT_149e063b2;
          local_50 = 0;
          local_58 = 0x10000004;
          local_60 = 0x10;
          local_68 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
            DAT_14cbadd90 + 0x30)) {
          cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
          if (((cVar1 != '\0') && (*(char *)((longlong)plVar2 + 0x32b9) == '\0')) &&
             ((plVar2[0x73] == 0 || ((*(byte *)(plVar2[0x73] + 0x39a) & 8) == 0))))
          goto LAB_1414e8c6b;
        }
      }
    }
    uVar3 = 1;
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e90a2 FUN_1414e90a2 body=134 status=ok
// SIG undefined FUN_1414e90a2(void)

void FUN_1414e90a2(longlong param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    uVar1 = *param_2;
    if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
      if ((lVar3 != 0) && (*(uint *)(lVar3 + 8) == (uint)param_2[1])) {
        if (-1 < *(short *)(lVar3 + 4)) {
          do {
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar3 + 2) * 8);
          } while (-1 < *(short *)(lVar3 + 4));
          if (lVar3 == 0) {
            return;
          }
        }
        cVar2 = FUN_14654f03a(lVar3 + 0x18,param_3);
        if (cVar2 != '\0') {
          *(undefined8 *)(lVar3 + 0x18) = 0;
          *(undefined4 *)(lVar3 + 0x20) = 0xffffffff;
          FUN_1414f506e(param_1,lVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1414e9128 FUN_1414e9128 body=441 status=ok
// SIG undefined FUN_1414e9128(void)

void FUN_1414e9128(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar5 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar3 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar3);
      }
      LOCK();
      uVar5 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar5 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar3;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar5 = uVar3;
      }
    }
  }
  local_40 = CONCAT44(uVar5,uVar4);
  iVar1 = FUN_145b03c96(param_1 + 0xd8,uVar5 ^ uVar4);
  if (iVar1 != -1) {
    if (param_2 == 0) {
      uVar5 = 0;
      uVar2 = 0;
    }
    else {
      uVar5 = *(uint *)(param_2 + 0xc);
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      uVar2 = (ulonglong)*(uint *)(lVar6 + 0x10);
      if (*(uint *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar4 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar4);
        }
        LOCK();
        uVar3 = *(uint *)(lVar6 + 0x10);
        bVar7 = uVar3 == 0;
        if (bVar7) {
          *(uint *)(lVar6 + 0x10) = uVar4;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar7) {
          uVar3 = uVar4;
        }
        uVar2 = (ulonglong)uVar3;
      }
    }
    FUN_145e42d02(param_1 + 0xd8,(ulonglong)uVar5 | uVar2 << 0x20);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414e9300 FUN_1414e9300 body=533 status=ok
// SIG undefined FUN_1414e9300(void)

void FUN_1414e9300(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  ulonglong local_80;
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14ca4ae08 == (undefined8 *)0x0) {
    DAT_14ca4ae08 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *DAT_14ca4ae08 = 0;
    DAT_14ca4ae08[1] = 0;
  }
  local_88 = param_2;
  FUN_1414e9516(DAT_14ca4ae08,&local_80,param_2);
  FUN_145c10a36(param_1,&local_80);
  FUN_1456b2f8e(&local_80);
  plVar1 = param_1 + 2;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_70._0_4_ = 0xffffffff;
    iVar9 = 0;
    local_70._4_4_ = 0;
    local_80._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_80);
    uVar15 = local_80 >> 0x20;
    iVar9 = (int)param_1[5];
  }
  plVar5 = local_78;
  iVar8 = (int)local_80;
  uVar6 = (uint)local_70;
  iVar7 = local_70._4_4_;
  iVar10 = local_68;
  if (local_70._4_4_ != iVar9 || local_78 != plVar1) {
    do {
      plVar14 = *(longlong **)(*param_1 + (longlong)iVar7 * 8);
      (**(code **)(*plVar14 + 8))(plVar14,local_88);
      uVar6 = ~(uint)uVar15 & uVar6;
      plVar14 = (longlong *)plVar5[2];
      if ((longlong *)plVar5[2] == (longlong *)0x0) {
        plVar14 = plVar5;
      }
      iVar3 = (int)plVar5[3];
      lVar12 = (longlong)iVar8;
      uVar11 = *(uint *)((longlong)plVar14 + lVar12 * 4) & uVar6;
      if (uVar11 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar4 = iVar7;
        if (iVar7 < iVar8) {
          iVar4 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar13 = 0;
          do {
            uVar11 = *(uint *)((longlong)plVar14 + lVar13 * 4 + lVar12 * 4 + 4);
            if (uVar11 != 0) {
              iVar8 = iVar8 + (int)lVar13 + 1;
              uVar6 = 0xffffffff;
              goto LAB_1414e944a;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar4 - lVar12 != lVar13);
          uVar6 = 0xffffffff;
          iVar8 = iVar4;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar3;
      }
      else {
LAB_1414e944a:
        uVar15 = (ulonglong)(-uVar11 & uVar11);
        uVar2 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar9 || plVar5 != plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414e9516 FUN_1414e9516 body=754 status=ok
// SIG undefined FUN_1414e9516(void)

longlong * FUN_1414e9516(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  FUN_140037bbc(param_2,(int)param_1[1]);
  if ((longlong)(int)param_1[1] != 0) {
    puVar17 = (undefined8 *)*param_1;
    puVar5 = puVar17 + (int)param_1[1];
    plVar1 = param_2 + 2;
    uVar19 = 0;
    do {
      lVar6 = (**(code **)(*(longlong *)*puVar17 + 8))((longlong *)*puVar17,param_3);
      if (lVar6 != 0) {
        uVar7 = (ulonglong)(int)param_2[5];
        uVar18 = (uint)uVar19;
        if ((longlong)uVar19 < (longlong)uVar7) {
          plVar8 = (longlong *)param_2[4];
          if ((longlong *)param_2[4] == (longlong *)0x0) {
            plVar8 = plVar1;
          }
          uVar14 = uVar19;
          if ((*(uint *)((longlong)plVar8 + (uVar19 >> 5 & 0x7ffffff) * 4) >> (uVar18 & 0x1f) & 1)
              == 0) goto LAB_1414e95af;
        }
        else {
LAB_1414e95af:
          iVar4 = (int)param_2[1];
          if ((int)uVar18 < iVar4) {
            lVar16 = *param_2;
          }
          else {
            iVar10 = uVar18 + 1;
            *(int *)(param_2 + 1) = iVar10;
            if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar4) < (uint)(iVar10 - iVar4)) {
              FUN_14055ddfe(param_2);
              iVar10 = (int)param_2[1];
              uVar7 = (ulonglong)*(uint *)(param_2 + 5);
            }
            lVar16 = *param_2;
            if ((int)uVar7 < iVar10) {
              do {
                iVar4 = (int)uVar7;
                *(undefined4 *)(lVar16 + (longlong)iVar4 * 8) = 0xffffffff;
                lVar3 = param_2[6];
                *(int *)(lVar16 + 4 + (longlong)iVar4 * 8) = (int)lVar3;
                if (*(int *)((longlong)param_2 + 0x34) != 0) {
                  *(int *)(lVar16 + (longlong)(int)lVar3 * 8) = iVar4;
                }
                *(int *)(param_2 + 6) = iVar4;
                iVar4 = (int)param_2[5];
                if (iVar4 == 0) {
                  iVar10 = -1;
                }
                else {
                  iVar10 = iVar4 + 0x1e;
                  if (-1 < iVar4 + -1) {
                    iVar10 = iVar4 + -1;
                  }
                  iVar10 = iVar10 >> 5;
                }
                iVar11 = iVar4 + 1;
                iVar15 = iVar4 + 0x1f;
                if (-1 < iVar4) {
                  iVar15 = iVar4;
                }
                if (iVar15 >> 5 == iVar10) {
                  *(int *)(param_2 + 5) = iVar11;
                }
                else {
                  if (*(int *)((longlong)param_2 + 0x2c) <= iVar4) {
                    if (iVar4 + 0x20U < 0xa0) {
                      iVar11 = 0x80;
                      iVar10 = iVar4;
                    }
                    else {
                      uVar13 = iVar4 + 0x20U >> 5;
                      if (*(int *)((longlong)param_2 + 0x2c) + 0x1fU < 0xa0) {
                        uVar12 = 4;
                        if (4 < uVar13) {
                          uVar12 = uVar13;
                        }
                      }
                      else {
                        uVar12 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
                      }
                      uVar7 = FUN_144a3809e(uVar12 << 2,0);
                      iVar10 = (int)(uVar7 >> 2);
                      iVar11 = -0x20;
                      if ((int)uVar13 <= iVar10) {
                        iVar11 = iVar10 << 5;
                      }
                      iVar10 = (int)param_2[5];
                    }
                    *(int *)((longlong)param_2 + 0x2c) = iVar11;
                    FUN_1446efbd8(plVar1,iVar10);
                    iVar11 = (int)param_2[5] + 1;
                  }
                  iVar10 = iVar11 + 0x1f;
                  if (-1 < iVar11) {
                    iVar10 = iVar11;
                  }
                  *(int *)(param_2 + 5) = iVar11;
                  if (iVar11 % 0x20 != 0) {
                    plVar8 = (longlong *)param_2[4];
                    if ((longlong *)param_2[4] == (longlong *)0x0) {
                      plVar8 = plVar1;
                    }
                    bVar9 = -(char)(iVar11 % 0x20);
                    *(uint *)((longlong)plVar8 + (longlong)(iVar10 >> 5) * 4) =
                         (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar10 >> 5) * 4) <<
                               (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
                  }
                }
                plVar8 = (longlong *)param_2[4];
                if ((longlong *)param_2[4] == (longlong *)0x0) {
                  plVar8 = plVar1;
                }
                bVar9 = (byte)iVar4 & 0x1f;
                puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar15 >> 5) * 4);
                *puVar2 = *puVar2 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
                *(int *)((longlong)param_2 + 0x34) = *(int *)((longlong)param_2 + 0x34) + 1;
                uVar7 = (ulonglong)*(uint *)(param_2 + 5);
              } while ((int)*(uint *)(param_2 + 5) < (int)param_2[1]);
            }
          }
          *(int *)((longlong)param_2 + 0x34) = *(int *)((longlong)param_2 + 0x34) + -1;
          uVar14 = (ulonglong)(int)uVar18;
          iVar4 = *(int *)(lVar16 + uVar14 * 8);
          iVar10 = *(int *)(lVar16 + 4 + uVar14 * 8);
          if ((longlong)iVar4 == -1) {
            *(int *)(param_2 + 6) = iVar10;
          }
          else {
            *(int *)(lVar16 + 4 + (longlong)iVar4 * 8) = iVar10;
          }
          if (iVar10 != -1) {
            *(int *)(lVar16 + (longlong)iVar10 * 8) = iVar4;
          }
          plVar8 = (longlong *)param_2[4];
          if ((longlong *)param_2[4] == (longlong *)0x0) {
            plVar8 = plVar1;
          }
          uVar13 = uVar18 + 0x1f;
          if (-1 < (int)uVar18) {
            uVar13 = uVar18;
          }
          puVar2 = (uint *)((longlong)plVar8 + (longlong)((int)uVar13 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)uVar19 & 0x1f);
        }
        *(longlong *)(*param_2 + uVar14 * 8) = lVar6;
      }
      uVar19 = uVar19 + 1;
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar5);
  }
  return param_2;
}



// FUNCTION 1414e9808 FUN_1414e9808 body=296 status=ok
// SIG undefined FUN_1414e9808(void)

void FUN_1414e9808(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == (ulonglong)(*(uint *)(*(longlong *)(param_1 + 0x588) + 0xdc) & 0xffffff)) {
    puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764850);
    (**(code **)(*(longlong *)*puVar5 + 0x10))((longlong *)*puVar5,&local_48);
    FUN_140adf1ea(&local_58,&local_48);
    puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    uVar4 = param_2[1];
    uVar3 = *(undefined8 *)(param_1 + 0x588);
    QueryPerformanceCounter(&local_48);
    puVar5[1] = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
    puVar5[2] = uVar3;
    *puVar5 = &PTR_FUN_14ba43db0;
    FUN_140df9946(local_58,puVar5 + 3);
    *(int *)(puVar5 + 5) = (int)uVar4;
    FUN_143e6b0f2(param_1,puVar5);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414e9958 FUN_1414e9958 body=66 status=ok
// SIG undefined FUN_1414e9958(void)

void FUN_1414e9958(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a38ce90;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xc7efffffe0000000;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f) = 0;
  return;
}



// FUNCTION 1414e999a FUN_1414e999a body=183 status=ok
// SIG undefined FUN_1414e999a(void)

void FUN_1414e999a(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = (ulonglong)(*(int *)(param_1 + 0x30) + -1 + (uint)(*(int *)(param_1 + 0x30) == 0)) * 2 + 1
  ;
  lVar4 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  FUN_145ca3810(param_1 + 0x20);
  FUN_1408fb8b0(param_1,0,0,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
  uVar6 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x38);
  if (-1 < (int)uVar6) {
    plVar1 = (longlong *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0x14);
    if (iVar5 < (int)uVar6) {
      FUN_144893a1c(plVar1);
      iVar5 = *(int *)(param_1 + 0x14);
      uVar6 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x38);
    }
    iVar3 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar3 + uVar6;
    if ((uint)(iVar5 - iVar3) < uVar6) {
      FUN_1447403be(plVar1);
    }
    memset((void *)((longlong)iVar3 + *plVar1),0,(longlong)(int)uVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar6);
}



// FUNCTION 1414e9a52 FUN_1414e9a52 body=1389 status=ok
// SIG undefined FUN_1414e9a52(void)

void FUN_1414e9a52(longlong *param_1,char *param_2)

{
  int *piVar1;
  void **ppvVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  void *_Src;
  int iVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  char *local_128;
  longlong *local_120;
  void *local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  code *local_f8;
  undefined1 local_f0 [128];
  undefined1 *local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (DAT_14cb92ed0 == 0) goto LAB_1414e9a8e;
  local_108 = (longlong *)0x0;
  uStack_100 = 0;
  local_128 = param_2;
  FUN_1457e58f6();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 10));
  local_70 = (undefined1 *)0x0;
  FUN_1401151e2(local_f0,param_1[8],(int)param_1[9]);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 10));
  local_118 = (void *)0x0;
  uStack_110 = 0;
  lVar16 = param_1[0x18];
  local_120 = param_1;
  if (lVar16 == 0) {
LAB_1414e9b31:
    lVar13 = 0;
  }
  else {
    if (DAT_14cae9568 == 0) {
      local_140 = &local_f8;
      local_f8 = FUN_1417de738;
      local_130 = &LAB_145893408;
      local_138 = &LAB_1458cbbd2;
      local_148 = &LAB_147ba21f1;
      local_150 = &LAB_1463e9233;
      local_158 = L"Engine";
      local_160 = 0;
      local_168 = 0x1000000c;
      local_170 = 8;
      local_178 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar16 = param_1[0x18];
      if (lVar16 == 0) goto LAB_1414e9b31;
    }
    lVar13 = 0;
    if ((DAT_14cae9568 != 0) && (lVar14 = *(longlong *)(lVar16 + 0x10), lVar14 != 0)) {
      if (*(int *)(lVar14 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) goto LAB_1414e9b31;
      lVar13 = 0;
      if (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30) {
        lVar13 = lVar16;
      }
    }
  }
  if ((longlong)(int)uStack_100 != 0) {
    plVar3 = local_108 + (int)uStack_100;
    plVar17 = local_108;
    do {
      lVar16 = *plVar17;
      if (lVar16 != 0) {
        puVar11 = &DAT_149dfb77a;
        if (*(int *)(lVar16 + 0x40) != 0) {
          puVar11 = *(undefined2 **)(lVar16 + 0x38);
        }
        FUN_1446f470e(&local_f8,puVar11,1);
        if (local_f8 == (code *)0x0) {
          lVar14 = *(longlong *)(lVar16 + 0x50);
          if (lVar14 == 0) {
            uVar9 = FUN_145d84ce4();
            lVar14 = FUN_14477b664(uVar9);
            *(longlong *)(lVar16 + 0x50) = lVar14;
          }
          if (*(longlong *)(lVar16 + 0x58) == 0) {
            if ((lVar14 != 0) && (*(longlong *)(lVar16 + 0x48) != 0)) {
              plVar4 = *(longlong **)(lVar14 + 0xb8);
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar7 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar7 == '\0')) {
                *(undefined8 *)(lVar16 + 0x58) = 0;
              }
              else {
                uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
                lVar14 = FUN_144aff482(uVar9,(longlong *)(lVar16 + 0x48));
                *(longlong *)(lVar16 + 0x58) = lVar14;
                if (lVar14 != 0) goto LAB_1414e9c33;
              }
            }
            goto LAB_1414e9d35;
          }
        }
LAB_1414e9c33:
        if (*(char *)(lVar16 + 0x70) != '\0' || *(char *)(lVar16 + 0x6e) != '\0') {
          cVar7 = *(char *)(lVar16 + 0x60);
          if ((longlong)(int)local_68 < 1) {
            bVar18 = false;
          }
          else {
            iVar15 = -local_68;
            bVar18 = false;
            uVar10 = (longlong)(int)local_68;
            do {
              puVar12 = local_70;
              if (local_70 == (undefined1 *)0x0) {
                puVar12 = local_f0;
              }
              lVar14 = *(longlong *)(puVar12 + uVar10 * 8 + -8);
              if (((lVar14 != 0) && (*(longlong *)(lVar14 + 0x378) == lVar16)) &&
                 (*(char *)(lVar14 + 0xcc) == '\0')) {
                if (*(char *)(lVar14 + 0x3e0) == '\x01') {
                  *(undefined1 *)(lVar14 + 0x3e0) = 0;
                }
                if (*(char *)(lVar14 + 0x3e1) == '\0') {
                  if (uVar10 != local_68) {
                    memmove(puVar12 + uVar10 * 8 + -8,puVar12 + uVar10 * 8,
                            (longlong)(int)(local_68 + iVar15) << 3);
                  }
                  local_68 = local_68 - 1;
                  FUN_143eb936e(local_f0);
                  bVar18 = true;
                }
              }
              iVar15 = iVar15 + 1;
              bVar5 = 1 < uVar10;
              uVar10 = uVar10 - 1;
            } while (bVar5);
          }
          uVar10 = uStack_110;
          if ((!bVar18) && ((lVar13 == 0) == (bool)cVar7)) {
            lVar14 = (longlong)(int)uStack_110;
            uVar8 = (int)uStack_110 + 1;
            uStack_110 = CONCAT44(uStack_110._4_4_,uVar8);
            if (uStack_110._4_4_ < uVar8) {
              FUN_14656f45a(&local_118,uVar10 & 0xffffffff);
            }
            *(longlong *)((longlong)local_118 + lVar14 * 8) = lVar16;
          }
        }
      }
LAB_1414e9d35:
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar3);
  }
  _Src = local_118;
  plVar3 = local_120;
  ppvVar2 = (void **)(local_120 + 0x26);
  if (ppvVar2 != &local_118) {
    iVar15 = (int)uStack_110;
    lVar16 = (longlong)(int)uStack_110;
    *(int *)(local_120 + 0x27) = (int)uStack_110;
    if ((int)uStack_110 == 0 && *(int *)((longlong)local_120 + 0x13c) == 0) {
      *(undefined4 *)((longlong)local_120 + 0x13c) = 0;
    }
    else {
      FUN_14656f4de(ppvVar2,uStack_110 & 0xffffffff);
      if (iVar15 != 0) {
        memcpy(*ppvVar2,_Src,lVar16 << 3);
      }
    }
  }
  FUN_145af475c(plVar3 + 0x28,local_f0);
  if (((*local_128 == '\x02') || (*local_128 == '\a')) &&
     ((lVar16 = (**(code **)(*plVar3 + 0x180))(plVar3), lVar16 != 0 &&
      (lVar16 = FUN_1449baec6(lVar16), lVar16 != 0)))) {
    plVar17 = *(longlong **)(lVar16 + 0x138);
    if (plVar17 == (longlong *)0x0) {
LAB_1414e9e89:
      *(undefined1 *)(plVar3 + 0xb) = 1;
    }
    else {
      iVar15 = (int)plVar17[1];
      do {
        if (iVar15 == 0) goto LAB_1414e9e89;
        LOCK();
        iVar6 = (int)plVar17[1];
        bVar18 = iVar15 == iVar6;
        if (bVar18) {
          *(int *)(plVar17 + 1) = iVar15 + 1;
          iVar6 = iVar15;
        }
        iVar15 = iVar6;
        UNLOCK();
      } while (!bVar18);
      if (*(longlong *)(lVar16 + 0x130) == 0) {
        *(undefined1 *)(plVar3 + 0xb) = 1;
      }
      else {
        if (0 < (longlong)(int)plVar3[0x29]) {
          uVar10 = (longlong)(int)plVar3[0x29] + 1;
          do {
            lVar16 = *(longlong *)(plVar3[0x28] + -0x10 + uVar10 * 8);
            if ((lVar16 != 0) && (*(longlong *)(lVar16 + 0x378) != 0)) {
              *(undefined1 *)(lVar16 + 0x3e0) = 1;
            }
            uVar10 = uVar10 - 1;
          } while (1 < uVar10);
        }
        FUN_1461bf25a(plVar3);
      }
      LOCK();
      plVar3 = plVar17 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
  }
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1414e9a8e:
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414e9fc0 FUN_1414e9fc0 body=191 status=ok
// SIG undefined FUN_1414e9fc0(void)

void FUN_1414e9fc0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cadbed0;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cadbedc = DAT_14cadbedc + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cadbec8 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cadbec8 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cadbedc = DAT_14cadbedc + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_1414ea066;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cadbedc = DAT_14cadbedc + -1;
LAB_1414ea066:
  FUN_14474d06a(&DAT_14cadbec8,0);
  return;
}



// FUNCTION 1414ea07f FUN_1414ea07f body=315 status=ok
// SIG undefined FUN_1414ea07f(void)

void FUN_1414ea07f(longlong param_1,longlong param_2)

{
  longlong lVar1;
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
  if (param_2 != 0 && param_1 != 0) {
    if (DAT_14cb61cd0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463b31ae;
      local_48 = &LAB_1486dca4f;
      local_50 = &LAB_1464f50a6;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
      lVar1 = FUN_140149a73(param_2,0);
      if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ea1d0 FUN_1414ea1d0 body=260 status=ok
// SIG undefined FUN_1414ea1d0(void)

undefined4 FUN_1414ea1d0(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar5 = FUN_1406eea5e();
    lVar6 = FUN_14477b664(uVar5);
    param_2[1] = lVar6;
  }
  if (param_2[2] == 0) {
    uVar4 = 0;
    if ((lVar6 == 0) || (*param_2 == 0)) goto LAB_1414ea2a8;
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      param_2[2] = 0;
      uVar4 = 0;
      goto LAB_1414ea2a8;
    }
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,param_2);
    param_2[2] = lVar6;
    if (lVar6 == 0) goto LAB_1414ea2a8;
  }
  FUN_144224464(param_1,&local_38,param_2);
  if (local_38 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*local_38 + 0x30))();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
LAB_1414ea2a8:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1414ea2d5 FUN_1414ea2d5 body=633 status=ok
// SIG undefined FUN_1414ea2d5(void)

void FUN_1414ea2d5(void)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined *puVar15;
  ulonglong uVar16;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c13707();
  FUN_145c13e7c();
  FUN_145c13b58();
  FUN_145c13c80();
  FUN_145c13d54();
  FUN_1414eb18a();
  local_60 = 0x100000000;
  local_58 = &DAT_14ca81328;
  local_50 = 0xffffffff;
  local_48 = 0;
  if (DAT_14ca81340 == 0) {
    uVar16 = 1;
    local_50._0_4_ = 0xffffffff;
    iVar12 = 0;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar16 = local_60 >> 0x20;
    iVar12 = DAT_14ca81340;
  }
  puVar6 = local_58;
  iVar8 = (int)local_60;
  uVar11 = (uint)local_50;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ != iVar12 || local_58 != &DAT_14ca81328) {
    do {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(DAT_14ca81318 + 8 + (longlong)iVar7 * 0x18) + 8);
      uVar9 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar9 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      uVar11 = uVar11 & ~(uint)uVar16;
      puVar15 = *(undefined **)(puVar6 + 0x10);
      if (*(undefined **)(puVar6 + 0x10) == (undefined *)0x0) {
        puVar15 = puVar6;
      }
      iVar3 = *(int *)(puVar6 + 0x18);
      lVar13 = (longlong)iVar8;
      uVar9 = *(uint *)(puVar15 + lVar13 * 4) & uVar11;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar4 = iVar7;
        if (iVar7 < iVar8) {
          iVar4 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar14 = 0;
          do {
            uVar9 = *(uint *)(puVar15 + lVar14 * 4 + lVar13 * 4 + 4);
            if (uVar9 != 0) {
              iVar8 = iVar8 + (int)lVar14 + 1;
              uVar11 = 0xffffffff;
              goto LAB_1414ea431;
            }
            iVar10 = iVar10 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar4 - lVar13 != lVar14);
          uVar11 = 0xffffffff;
          iVar8 = iVar4;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar3;
      }
      else {
LAB_1414ea431:
        uVar16 = (ulonglong)(-uVar9 & uVar9);
        uVar2 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar12 || puVar6 != &DAT_14ca81328);
  }
  FUN_145c136cc();
  plVar5 = DAT_14ca808c0;
  LOCK();
  DAT_14ca808c0 = (longlong *)0x0;
  UNLOCK();
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x30))(plVar5,1);
  }
  lVar13 = DAT_14ca811c8;
  if (DAT_14ca811c8 != 0) {
    DAT_14ca811c8 = 0;
    FUN_145c13958(lVar13);
    FUN_1400020a8(lVar13);
  }
  lVar13 = DAT_14ca811d0;
  if (DAT_14ca811d0 != 0) {
    DAT_14ca811d0 = 0;
    FUN_145c13a58(lVar13);
    FUN_1400020a8(lVar13);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414ea550 FUN_1414ea550 body=158 status=ok
// SIG undefined FUN_1414ea550(void)

void FUN_1414ea550(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  iVar1 = *(int *)(param_1 + 0x268);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x260);
    lVar3 = 0;
    do {
      FUN_1414ea5ee(param_1,*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_1414ea5ee(param_1,*(undefined8 *)(param_1 + 0x210));
  FUN_1414ea5ee(param_1,*(undefined8 *)(param_1 + 0x208));
  FUN_1414ea5ee(param_1,*(undefined8 *)(param_1 + 0x220));
  FUN_1414ea5ee(param_1,*(undefined8 *)(param_1 + 0x218));
                    /* WARNING: Could not recover jumptable at 0x0001414ea5e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  return;
}



// FUNCTION 1414ea5ee FUN_1414ea5ee body=406 status=ok
// SIG undefined FUN_1414ea5ee(void)

void FUN_1414ea5ee(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  iVar2 = (int)param_2[5];
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar12 = 0;
    iVar3 = 0;
    iVar9 = 0;
  }
  else {
    puVar7 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar7 = (uint *)(param_2 + 2);
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar12 = 0;
      uVar13 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar13 = uVar12;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar12) goto LAB_1414ea743;
        iVar9 = iVar9 + 0x20;
        uVar11 = puVar7[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar12 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar13 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar3 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      if (*(longlong *)(*param_2 + 8 + (longlong)iVar3 * 0x18) != 0) {
        FUN_1402ce13e();
        iVar2 = (int)param_2[5];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      puVar7 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar7 = (uint *)(param_2 + 2);
      }
      iVar3 = (int)uVar12;
      lVar10 = (longlong)iVar3;
      uVar4 = puVar7[lVar10] & uVar11;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar5 <= iVar3) break;
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar7[lVar10 + lVar8 + 1];
          if (uVar4 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar6 - lVar10 == lVar8) goto LAB_1414ea743;
        }
        uVar12 = (ulonglong)(iVar3 + (int)lVar8 + 1);
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar13 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar3 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
LAB_1414ea743:
                    /* WARNING: Could not recover jumptable at 0x0001414ea754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  return;
}



// FUNCTION 1414ea784 FUN_1414ea784 body=158 status=ok
// SIG undefined FUN_1414ea784(void)

void FUN_1414ea784(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  iVar1 = *(int *)(param_1 + 0x268);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x260);
    lVar3 = 0;
    do {
      FUN_1414ea822(param_1,*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_1414ea822(param_1,*(undefined8 *)(param_1 + 0x210));
  FUN_1414ea822(param_1,*(undefined8 *)(param_1 + 0x208));
  FUN_1414ea822(param_1,*(undefined8 *)(param_1 + 0x220));
  FUN_1414ea822(param_1,*(undefined8 *)(param_1 + 0x218));
                    /* WARNING: Could not recover jumptable at 0x0001414ea81b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  return;
}



// FUNCTION 1414ea822 FUN_1414ea822 body=412 status=ok
// SIG undefined FUN_1414ea822(void)

void FUN_1414ea822(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  iVar2 = (int)param_2[5];
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar12 = 0;
    iVar3 = 0;
    iVar9 = 0;
  }
  else {
    puVar7 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar7 = (uint *)(param_2 + 2);
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar12 = 0;
      uVar13 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar13 = uVar12;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar12) goto LAB_1414ea97d;
        iVar9 = iVar9 + 0x20;
        uVar11 = puVar7[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar12 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar13 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar3 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      if (*(longlong *)(*param_2 + 0xd8 + (longlong)iVar3 * 0xe8) != 0) {
        FUN_1402ce13e();
        iVar2 = (int)param_2[5];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      puVar7 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar7 = (uint *)(param_2 + 2);
      }
      iVar3 = (int)uVar12;
      lVar10 = (longlong)iVar3;
      uVar4 = puVar7[lVar10] & uVar11;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar5 <= iVar3) break;
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar7[lVar10 + lVar8 + 1];
          if (uVar4 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar6 - lVar10 == lVar8) goto LAB_1414ea97d;
        }
        uVar12 = (ulonglong)(iVar3 + (int)lVar8 + 1);
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar13 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar3 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
LAB_1414ea97d:
                    /* WARNING: Could not recover jumptable at 0x0001414ea98e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  return;
}



// FUNCTION 1414ea9be FUN_1414ea9be body=582 status=ok
// SIG undefined FUN_1414ea9be(void)

void FUN_1414ea9be(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  PSRWLOCK SRWLock;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_98 [32];
  longlong local_78;
  PSRWLOCK local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  SRWLock = (PSRWLOCK)(param_1 + 8);
  local_78 = param_1 + 0x30;
  local_70 = SRWLock;
LAB_1414eaa0e:
  lVar16 = local_78;
  AcquireSRWLockExclusive(SRWLock);
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = lVar16;
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar10 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    iVar11 = 0;
    lVar16 = local_78;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar10 = local_68 >> 0x20;
    lVar16 = local_60;
    iVar11 = (int)local_68;
  }
  uVar15 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar14 = local_50;
  if (*(int *)(lVar16 + 0x18) <= local_58._4_4_) {
LAB_1414eab04:
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(int *)(param_1 + 0x8c) != 0) {
      FUN_1448f21ac(param_1 + 0x80,0);
    }
    ReleaseSRWLockExclusive(local_70);
    if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  do {
    lVar8 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(lVar8 + 8 + (longlong)iVar6 * 0x20) != 0) {
      cVar4 = FUN_1402ce39e();
      SRWLock = local_70;
      if (cVar4 == '\0') break;
      plVar12 = (longlong *)((longlong)iVar6 * 0x20 + lVar8 + 8);
      puVar3 = (undefined8 *)*plVar12;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
        *plVar12 = 0;
      }
    }
    uVar15 = uVar15 & ~(uint)uVar10;
    lVar8 = *(longlong *)(lVar16 + 0x10);
    if (*(longlong *)(lVar16 + 0x10) == 0) {
      lVar8 = lVar16;
    }
    iVar2 = *(int *)(lVar16 + 0x18);
    lVar13 = (longlong)iVar11;
    uVar5 = *(uint *)(lVar8 + lVar13 * 4) & uVar15;
    if (uVar5 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      iVar6 = iVar6 >> 5;
      iVar7 = iVar6;
      if (iVar6 < iVar11) {
        iVar7 = iVar11;
      }
      if (iVar6 <= iVar11) goto LAB_1414eab04;
      lVar9 = 0;
      while( true ) {
        iVar14 = iVar14 + 0x20;
        uVar5 = *(uint *)(lVar8 + lVar13 * 4 + 4 + lVar9 * 4);
        if (uVar5 != 0) break;
        lVar9 = lVar9 + 1;
        if (iVar7 - lVar13 == lVar9) goto LAB_1414eab04;
      }
      iVar11 = iVar11 + (int)lVar9 + 1;
      uVar15 = 0xffffffff;
    }
    uVar10 = (ulonglong)(-uVar5 & uVar5);
    uVar1 = uVar10 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) goto LAB_1414eab04;
  } while( true );
  ReleaseSRWLockExclusive(local_70);
  FUN_14000f986(0x3c23d70a);
  goto LAB_1414eaa0e;
}



// FUNCTION 1414eac06 FUN_1414eac06 body=582 status=ok
// SIG undefined FUN_1414eac06(void)

void FUN_1414eac06(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  PSRWLOCK SRWLock;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_98 [32];
  longlong local_78;
  PSRWLOCK local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  SRWLock = (PSRWLOCK)(param_1 + 8);
  local_78 = param_1 + 0x30;
  local_70 = SRWLock;
LAB_1414eac56:
  lVar16 = local_78;
  AcquireSRWLockExclusive(SRWLock);
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = lVar16;
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar10 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    iVar11 = 0;
    lVar16 = local_78;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar10 = local_68 >> 0x20;
    lVar16 = local_60;
    iVar11 = (int)local_68;
  }
  uVar15 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar14 = local_50;
  if (*(int *)(lVar16 + 0x18) <= local_58._4_4_) {
LAB_1414ead4c:
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(int *)(param_1 + 0x8c) != 0) {
      FUN_1448f21ac(param_1 + 0x80,0);
    }
    ReleaseSRWLockExclusive(local_70);
    if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  do {
    lVar8 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(lVar8 + 8 + (longlong)iVar6 * 0x20) != 0) {
      cVar4 = FUN_1402ce39e();
      SRWLock = local_70;
      if (cVar4 == '\0') break;
      plVar12 = (longlong *)((longlong)iVar6 * 0x20 + lVar8 + 8);
      puVar3 = (undefined8 *)*plVar12;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
        *plVar12 = 0;
      }
    }
    uVar15 = uVar15 & ~(uint)uVar10;
    lVar8 = *(longlong *)(lVar16 + 0x10);
    if (*(longlong *)(lVar16 + 0x10) == 0) {
      lVar8 = lVar16;
    }
    iVar2 = *(int *)(lVar16 + 0x18);
    lVar13 = (longlong)iVar11;
    uVar5 = *(uint *)(lVar8 + lVar13 * 4) & uVar15;
    if (uVar5 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      iVar6 = iVar6 >> 5;
      iVar7 = iVar6;
      if (iVar6 < iVar11) {
        iVar7 = iVar11;
      }
      if (iVar6 <= iVar11) goto LAB_1414ead4c;
      lVar9 = 0;
      while( true ) {
        iVar14 = iVar14 + 0x20;
        uVar5 = *(uint *)(lVar8 + lVar13 * 4 + 4 + lVar9 * 4);
        if (uVar5 != 0) break;
        lVar9 = lVar9 + 1;
        if (iVar7 - lVar13 == lVar9) goto LAB_1414ead4c;
      }
      iVar11 = iVar11 + (int)lVar9 + 1;
      uVar15 = 0xffffffff;
    }
    uVar10 = (ulonglong)(-uVar5 & uVar5);
    uVar1 = uVar10 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) goto LAB_1414ead4c;
  } while( true );
  ReleaseSRWLockExclusive(local_70);
  FUN_14000f986(0x3c23d70a);
  goto LAB_1414eac56;
}



// FUNCTION 1414eae4e FUN_1414eae4e body=250 status=ok
// SIG undefined FUN_1414eae4e(void)

void FUN_1414eae4e(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_1402ce666(param_1,*(undefined8 *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220),
                param_1 + 0x78,0);
  FUN_1402ce43e(param_1 + 0x78);
  FUN_14493fe30(param_1,param_1 + 0x28,param_1 + 0x270);
  FUN_1402ce666(param_1,*(undefined8 *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220),
                param_1 + 0x28,1);
  lVar2 = (longlong)*(int *)(param_1 + 0x18);
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    lVar2 = lVar2 * 0x10 + -8;
    do {
      FUN_1402ce13e(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar2));
      uVar3 = uVar3 - 1;
      lVar2 = lVar2 + -0x10;
    } while (1 < uVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) < 0) {
    FUN_14740ebf4((longlong *)(param_1 + 0x10));
  }
  FUN_1414ec2ec(param_1);
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if (*(char *)(param_1 + 0x2b1) == '\x01') {
    uVar1 = FUN_1402cef90(param_1,param_1 + 0x218,param_1 + 0x220);
    *(undefined4 *)(param_1 + 0x2a8) = uVar1;
    *(undefined1 *)(param_1 + 0x2b1) = 0;
  }
  return;
}



// FUNCTION 1414eaf48 FUN_1414eaf48 body=255 status=ok
// SIG undefined FUN_1414eaf48(void)

void FUN_1414eaf48(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_1404ef6aa(param_1,*(undefined8 *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220),
                param_1 + 0x78,0);
  FUN_1404ef47c(param_1 + 0x78);
  FUN_1449ce46c(param_1,param_1 + 0x28,param_1 + 0x270);
  FUN_1404ef6aa(param_1,*(undefined8 *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220),
                param_1 + 0x28,1);
  lVar2 = (longlong)*(int *)(param_1 + 0x18);
  if (0 < lVar2) {
    uVar3 = lVar2 + 1;
    lVar2 = lVar2 * 0xe0 + -8;
    do {
      FUN_1402ce13e(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar2));
      uVar3 = uVar3 - 1;
      lVar2 = lVar2 + -0xe0;
    } while (1 < uVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) < 0) {
    FUN_1474107a2((longlong *)(param_1 + 0x10));
  }
  FUN_1414ecb60(param_1);
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if (*(char *)(param_1 + 0x2b1) == '\x01') {
    uVar1 = FUN_1404efa56(param_1,param_1 + 0x218,param_1 + 0x220);
    *(undefined4 *)(param_1 + 0x2a8) = uVar1;
    *(undefined1 *)(param_1 + 0x2b1) = 0;
  }
  return;
}



// FUNCTION 1414eb048 FUN_1414eb048 body=321 status=ok
// SIG undefined FUN_1414eb048(void)

void FUN_1414eb048(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = param_1 + 0x78;
  FUN_1404549da(param_1,*(undefined8 *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220),lVar5,0);
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    FUN_145711e66(lVar5);
    FUN_145711d52(lVar5);
  }
  FUN_140454cb0(param_1,param_1 + 0x28,param_1 + 0x270);
  FUN_1404549da(param_1,*(undefined8 *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220),
                param_1 + 0x28,1);
  uVar3 = (ulonglong)*(int *)(param_1 + 0x18);
  if (0 < (longlong)uVar3) {
    uVar4 = uVar3 + 1;
    lVar5 = uVar3 * 0x60 + -8;
    do {
      FUN_1402ce13e(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar5));
      uVar4 = uVar4 - 1;
      lVar5 = lVar5 + -0x60;
    } while (1 < uVar4);
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x18);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  FUN_1414adea7(*(undefined8 *)(param_1 + 0x10),uVar3 & 0xffffffff);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_14740fd88((longlong *)(param_1 + 0x10));
  }
  FUN_1414ebb18(param_1);
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if (*(char *)(param_1 + 0x2b1) == '\x01') {
    uVar2 = FUN_140454f1a(param_1,param_1 + 0x218,param_1 + 0x220);
    *(undefined4 *)(param_1 + 0x2a8) = uVar2;
    *(undefined1 *)(param_1 + 0x2b1) = 0;
  }
  return;
}



// FUNCTION 1414eb18a FUN_1414eb18a body=501 status=ok
// SIG undefined FUN_1414eb18a(void)

void FUN_1414eb18a(void)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  
  cVar2 = FUN_1403966e6();
  if (cVar2 == '\0') {
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
  iVar1 = DAT_14ca80580;
  if (DAT_14ca80580 == 0) {
    uVar16 = 1;
    uVar10 = 0;
    iVar12 = 0;
    iVar7 = 0;
  }
  else {
    puVar15 = &DAT_14ca80568;
    if (DAT_14ca80578 != (uint *)0x0) {
      puVar15 = DAT_14ca80578;
    }
    uVar11 = *puVar15;
    if (uVar11 == 0) {
      iVar12 = DAT_14ca80580 + 0x1e;
      if (-1 < DAT_14ca80580 + -1) {
        iVar12 = DAT_14ca80580 + -1;
      }
      uVar10 = 0;
      uVar8 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar8 = uVar10;
      }
      iVar12 = 0;
      do {
        if (uVar8 == uVar10) goto LAB_1414eb242;
        iVar12 = iVar12 + 0x20;
        uVar11 = puVar15[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar10 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar16 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar7 = (iVar12 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (DAT_14ca80580 <= iVar7) {
      iVar7 = DAT_14ca80580;
    }
  }
  if (iVar7 != DAT_14ca80580) {
    uVar11 = 0xffffffff;
    lVar3 = DAT_14ca80558;
    iVar9 = DAT_14ca80580;
    do {
      if (*(longlong *)(lVar3 + 8 + (longlong)iVar7 * 0x18) != 0) {
        FUN_1400020a8();
        lVar3 = DAT_14ca80558;
        iVar9 = DAT_14ca80580;
      }
      uVar11 = uVar11 & ~(uint)uVar16;
      puVar15 = DAT_14ca80578;
      if (DAT_14ca80578 == (uint *)0x0) {
        puVar15 = &DAT_14ca80568;
      }
      iVar7 = (int)uVar10;
      lVar13 = (longlong)iVar7;
      uVar4 = puVar15[lVar13] & uVar11;
      if (uVar4 == 0) {
        iVar5 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar5 = iVar9 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar7 < iVar5) {
          lVar14 = 0;
          do {
            uVar4 = puVar15[lVar13 + lVar14 + 1];
            if (uVar4 != 0) {
              uVar10 = (ulonglong)(iVar7 + (int)lVar14 + 1);
              uVar11 = 0xffffffff;
              goto LAB_1414eb336;
            }
            iVar12 = iVar12 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar6 - lVar13 != lVar14);
          uVar11 = 0xffffffff;
          lVar13 = (longlong)iVar6;
        }
        uVar10 = lVar13 + 1U & 0xffffffff;
        iVar7 = iVar9;
      }
      else {
LAB_1414eb336:
        uVar16 = (ulonglong)(-uVar4 & uVar4);
        uVar8 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar9 <= iVar7) {
          iVar7 = iVar9;
        }
      }
    } while (iVar7 != iVar1);
  }
LAB_1414eb242:
  FUN_14631b596();
  FUN_145c387d8();
  FUN_1403d43ee(&DAT_14ca80608,0);
  DAT_14ca80658 = 0;
  FUN_14616486e();
  DAT_14ca80670 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001414eb283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
  return;
}



// FUNCTION 1414eb380 FUN_1414eb380 body=950 status=ok
// SIG undefined FUN_1414eb380(void)

void FUN_1414eb380(longlong *param_1)

{
  longlong *plVar1;
  void *_Src;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_188 [32];
  longlong *local_168;
  int local_160;
  uint local_15c;
  uint *local_158;
  uint local_150;
  int local_14c;
  int local_148;
  longlong *local_140;
  longlong *local_138;
  undefined2 local_130;
  undefined1 local_124 [4];
  void *local_120;
  longlong *local_118;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((longlong)(int)param_1[0x4d] != 0) {
    plVar15 = (longlong *)param_1[0x4c];
    plVar1 = plVar15 + (int)param_1[0x4d];
    do {
      local_168 = (longlong *)*plVar15;
      local_158 = (uint *)(local_168 + 2);
      local_14c = (int)local_168[5];
      local_15c = 1;
      if (local_14c == 0) {
        local_148 = 0;
        local_160 = 0;
        local_14c = 0;
      }
      else {
        puVar11 = (uint *)local_168[4];
        if ((uint *)local_168[4] == (uint *)0x0) {
          puVar11 = local_158;
        }
        uVar8 = *puVar11;
        if (uVar8 == 0) {
          iVar10 = local_14c + 0x1e;
          if (-1 < local_14c + -1) {
            iVar10 = local_14c + -1;
          }
          uVar12 = 0;
          uVar9 = (ulonglong)(uint)(iVar10 >> 5);
          if (iVar10 >> 5 < 1) {
            uVar9 = uVar12;
          }
          local_160 = (int)uVar9 + 1;
          local_148 = (int)uVar9 * 0x20 + 0x20;
          iVar10 = 0;
          do {
            if (uVar9 == uVar12) goto LAB_1414eb465;
            iVar10 = iVar10 + 0x20;
            uVar8 = puVar11[uVar12 + 1];
            uVar12 = uVar12 + 1;
          } while (uVar8 == 0);
          local_160 = (int)uVar12;
          local_148 = iVar10;
        }
        else {
          local_148 = 0;
          local_160 = 0;
        }
        local_15c = -uVar8 & uVar8;
        uVar9 = (ulonglong)local_15c * 2 + 1;
        lVar14 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar10 = (local_148 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar10 < local_14c) {
          local_14c = iVar10;
        }
      }
LAB_1414eb465:
      local_150 = 0xffffffff;
      local_130 = 0;
      local_140 = local_168;
      local_138 = local_168;
      if (local_14c < (int)local_168[5]) {
        do {
          _Src = (void *)(*local_168 + (longlong)local_14c * 0xe8);
          plVar13 = (longlong *)(*local_168 + (longlong)local_14c * 0xe8 + 0xd8);
          plVar7 = (longlong *)param_1[0x41];
          uVar6 = FUN_140032235(_Src);
          iVar10 = FUN_1456b279a(plVar7,uVar6,_Src);
          if ((iVar10 == -1) ||
             (lVar14 = (longlong)iVar10 * 0xe8 + *plVar7, plVar7 = (longlong *)(lVar14 + 0xd8),
             plVar7 == (longlong *)0x0 || lVar14 == 0)) {
            FUN_1404ef9ba(param_1[0x42],_Src);
            local_120 = _Src;
            local_118 = plVar13;
            FUN_1404efec8(param_1[0x41],local_124);
            memcpy(&local_120,_Src,0xd8);
            uVar2 = *(undefined8 *)((longlong)_Src + 0xd8);
            iVar10 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar10 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
              FUN_14571cade(param_1,iVar10);
            }
            lVar14 = *param_1;
            memcpy((void *)((longlong)iVar10 * 0xe0 + lVar14),&local_120,0xd8);
            *(undefined8 *)(lVar14 + 0xd8 + (longlong)iVar10 * 0xe0) = uVar2;
          }
          else if (*plVar7 != *plVar13) {
            *(int *)((longlong)param_1 + 0x2ac) = *(int *)((longlong)param_1 + 0x2ac) + 1;
            iVar10 = (int)param_1[0x46];
            *(uint *)(param_1 + 0x46) = iVar10 + 1U;
            if (*(uint *)((longlong)param_1 + 0x234) < iVar10 + 1U) {
              FUN_1404f01fe(param_1 + 0x45,iVar10);
            }
            *(longlong *)(param_1[0x45] + (longlong)iVar10 * 8) = *plVar13;
          }
          FUN_1404ef416(local_140,local_14c);
          local_130 = CONCAT11(local_130._1_1_,1);
          local_150 = local_150 & ~local_15c;
          FUN_1449c0562(&local_160);
        } while (local_14c < (int)local_158[6]);
        if (((local_130 & 1) != 0) && (local_130._1_1_ == '\x01')) {
          FUN_14741075c(local_138,(int)local_138[1] - *(int *)((longlong)local_138 + 0x34));
        }
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar1);
  }
  uVar9 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar9) {
    iVar10 = -(int)param_1[1];
    lVar14 = uVar9 * 0xe0;
    do {
      cVar5 = FUN_1402ce39e(*(undefined8 *)(*param_1 + -8 + lVar14));
      if (cVar5 != '\0') {
        FUN_1402ce13e(*(undefined8 *)(*param_1 + -8 + lVar14));
        uVar8 = *(uint *)(param_1 + 1);
        if (uVar9 != uVar8) {
          iVar4 = iVar10 + uVar8;
          if (0 < (int)(iVar10 + uVar8)) {
            iVar4 = 1;
          }
          memmove((void *)(*param_1 + lVar14 + -0xe0),
                  (void *)((longlong)(int)(uVar8 - iVar4) * 0xe0 + *param_1),(longlong)iVar4 * 0xe0)
          ;
          uVar8 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar8 - 1;
      }
      iVar10 = iVar10 + 1;
      lVar14 = lVar14 + -0xe0;
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 - 1;
    } while (bVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414eb738 FUN_1414eb738 body=991 status=ok
// SIG undefined FUN_1414eb738(void)

void FUN_1414eb738(longlong *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  char cVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  int local_98;
  uint local_94;
  uint *local_90;
  uint local_88;
  int local_84;
  int local_80;
  longlong *local_78;
  longlong *local_70;
  undefined2 local_68;
  undefined8 *local_60;
  ulonglong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)(int)param_1[0x4d] != 0) {
    plVar18 = (longlong *)param_1[0x4c];
    plVar1 = plVar18 + (int)param_1[0x4d];
    do {
      local_a0 = (longlong *)*plVar18;
      local_90 = (uint *)(local_a0 + 2);
      local_84 = (int)local_a0[5];
      local_94 = 1;
      if (local_84 == 0) {
        local_80 = 0;
        local_98 = 0;
        local_84 = 0;
      }
      else {
        puVar14 = (uint *)local_a0[4];
        if ((uint *)local_a0[4] == (uint *)0x0) {
          puVar14 = local_90;
        }
        uVar11 = *puVar14;
        if (uVar11 == 0) {
          iVar13 = local_84 + 0x1e;
          if (-1 < local_84 + -1) {
            iVar13 = local_84 + -1;
          }
          uVar15 = 0;
          uVar10 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar10 = uVar15;
          }
          local_98 = (int)uVar10 + 1;
          local_80 = (int)uVar10 * 0x20 + 0x20;
          iVar13 = 0;
          do {
            if (uVar10 == uVar15) goto LAB_1414eb81d;
            iVar13 = iVar13 + 0x20;
            uVar11 = puVar14[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar11 == 0);
          local_98 = (int)uVar15;
          local_80 = iVar13;
        }
        else {
          local_80 = 0;
          local_98 = 0;
        }
        local_94 = -uVar11 & uVar11;
        uVar10 = (ulonglong)local_94 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar13 = (local_80 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar13 < local_84) {
          local_84 = iVar13;
        }
      }
LAB_1414eb81d:
      local_88 = 0xffffffff;
      local_68 = 0;
      local_78 = local_a0;
      local_70 = local_a0;
      if (local_84 < (int)local_a0[5]) {
        do {
          puVar2 = (ulonglong *)(*local_a0 + (longlong)local_84 * 0x18);
          puVar16 = puVar2 + 1;
          plVar4 = (longlong *)param_1[0x41];
          uVar10 = *puVar2;
          if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
            uVar11 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
            uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
            plVar12 = plVar4 + 7;
            if ((longlong *)plVar4[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar4[8];
            }
            iVar13 = *(int *)((longlong)plVar12 +
                             (ulonglong)((int)plVar4[9] - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
            if (iVar13 != -1) {
              do {
                puVar2 = (ulonglong *)(*plVar4 + (longlong)iVar13 * 0x18);
                if (*puVar2 == uVar10) {
                  if (puVar2 + 1 != (ulonglong *)0x0 && puVar2 != (ulonglong *)0x0) {
                    if (puVar2[1] != *puVar16) {
                      *(int *)((longlong)param_1 + 0x2ac) = *(int *)((longlong)param_1 + 0x2ac) + 1;
                      iVar13 = (int)param_1[0x46];
                      *(uint *)(param_1 + 0x46) = iVar13 + 1U;
                      if (*(uint *)((longlong)param_1 + 0x234) < iVar13 + 1U) {
                        FUN_1402cf380(param_1 + 0x45,iVar13);
                      }
                      *(ulonglong *)(param_1[0x45] + (longlong)iVar13 * 8) = *puVar16;
                    }
                    goto LAB_1414eba30;
                  }
                  break;
                }
                iVar13 = (int)puVar2[2];
              } while (iVar13 != -1);
            }
          }
          puVar3 = (undefined8 *)(*local_a0 + (longlong)local_84 * 0x18);
          FUN_1402ce9dc(param_1[0x42]);
          local_60 = puVar3;
          local_58 = puVar16;
          FUN_1402ceb44(param_1[0x41],local_4c);
          uVar5 = *puVar3;
          uVar6 = puVar3[1];
          iVar13 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar13 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar13 + 1U) {
            FUN_1456f60d2(param_1,iVar13);
          }
          lVar17 = *param_1;
          *(undefined8 *)(lVar17 + (longlong)iVar13 * 0x10) = uVar5;
          *(undefined8 *)(lVar17 + 8 + (longlong)iVar13 * 0x10) = uVar6;
LAB_1414eba30:
          FUN_1402cea7c(local_78,local_84);
          local_68 = CONCAT11(local_68._1_1_,1);
          local_88 = local_88 & ~local_94;
          FUN_1449c0562(&local_98);
        } while (local_84 < (int)local_90[6]);
        if (((local_68 & 1) != 0) && (local_68._1_1_ == '\x01')) {
          FUN_14740ebae(local_70,(int)local_70[1] - *(int *)((longlong)local_70 + 0x34));
        }
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar1);
  }
  uVar10 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar10) {
    iVar13 = -(int)param_1[1];
    lVar17 = uVar10 << 4;
    do {
      cVar9 = FUN_1402ce39e(*(undefined8 *)(*param_1 + -8 + lVar17));
      if (cVar9 != '\0') {
        FUN_1402ce13e(*(undefined8 *)(*param_1 + -8 + lVar17));
        uVar11 = *(uint *)(param_1 + 1);
        if (uVar10 != uVar11) {
          iVar8 = iVar13 + uVar11;
          if (0 < (int)(iVar13 + uVar11)) {
            iVar8 = 1;
          }
          memmove((void *)(*param_1 + lVar17 + -0x10),
                  (void *)((longlong)(int)(uVar11 - iVar8) * 0x10 + *param_1),(longlong)iVar8 << 4);
          uVar11 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar11 - 1;
      }
      iVar13 = iVar13 + 1;
      lVar17 = lVar17 + -0x10;
      bVar7 = 1 < uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414ebb18 FUN_1414ebb18 body=2003 status=ok
// SIG undefined FUN_1414ebb18(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1414ebb18(longlong param_1)

{
  undefined8 ******ppppppuVar1;
  void *_Src;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  bool bVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong *local_c0;
  uint *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 *******local_a0;
  undefined8 uStack_98;
  undefined8 ******local_90;
  undefined8 *******local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined **local_68;
  undefined8 ******local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar6 = *(char *)(param_1 + 0x2b1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca813a8) && (FUN_144b3d300(&DAT_14ca813a8), DAT_14ca813a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca813a0 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
    _Init_thread_footer(&DAT_14ca813a8);
  }
  if (((DAT_14ca84df4 == 0x10de) && (DAT_14ca813a0 != (longlong *)0x0)) &&
     (iVar7 = (**(code **)(*DAT_14ca813a0 + 0xb0))(), 0 < iVar7)) {
    if (DAT_14c872bd8 == '\x01') {
      if (**(longlong **)(param_1 + 0x2d8) != 0) {
        do {
          lVar17 = **(longlong **)(param_1 + 0x2d8);
          if (lVar17 != 0) {
            uVar2 = *(undefined8 *)(lVar17 + 8);
            *(longlong *)(param_1 + 0x2d8) = lVar17;
            iVar7 = *(int *)(param_1 + 0x230);
            *(uint *)(param_1 + 0x230) = iVar7 + 1U;
            if (*(uint *)(param_1 + 0x234) < iVar7 + 1U) {
              FUN_14740f546((longlong *)(param_1 + 0x228),iVar7);
            }
            *(undefined8 *)(*(longlong *)(param_1 + 0x228) + (longlong)iVar7 * 8) = uVar2;
          }
        } while (**(longlong **)(param_1 + 0x2d8) != 0);
      }
      DAT_14c760d70 = -1;
    }
    else if (cVar6 != '\0') {
      *(undefined4 *)(param_1 + 0x2f8) = 0;
      plVar22 = *(longlong **)(param_1 + 0x218);
      iVar7 = (int)plVar22[5];
      uVar21 = 0;
      if (iVar7 != 0) {
        local_b8 = (uint *)(plVar22 + 2);
        puVar14 = (uint *)plVar22[4];
        if ((uint *)plVar22[4] == (uint *)0x0) {
          puVar14 = local_b8;
        }
        uVar12 = *puVar14;
        uVar18 = 0;
        iVar20 = 0;
        if (uVar12 == 0) {
          iVar20 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar20 = iVar7 + -1;
          }
          uVar21 = 0;
          uVar3 = iVar20 >> 5;
          if (iVar20 >> 5 < 1) {
            uVar3 = uVar21;
          }
          uVar18 = 0;
          iVar20 = 0;
          do {
            if (uVar3 == uVar18) goto LAB_1414ebd28;
            iVar20 = iVar20 + 0x20;
            uVar12 = puVar14[uVar18 + 1];
            uVar18 = uVar18 + 1;
          } while (uVar12 == 0);
        }
        uVar23 = (ulonglong)(-uVar12 & uVar12);
        uVar24 = uVar23 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar19 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar19 < iVar7) {
          local_c0 = (longlong *)CONCAT44(local_c0._4_4_,0xffffffff);
          do {
            lVar17 = *plVar22;
            if (*(longlong *)(lVar17 + 0x58 + (longlong)iVar19 * 0x68) == 0) {
              bVar11 = false;
            }
            else {
              cVar6 = FUN_1402ce39e();
              bVar11 = true;
              if (cVar6 != '\0') {
                bVar11 = DAT_14c867d10 <
                         *(longlong *)
                          (*(longlong *)(lVar17 + (longlong)iVar19 * 0x68 + 0x58) + 0x10) + 0x1eU;
              }
            }
            uVar21 = (uint)bVar11 + *(int *)(param_1 + 0x2f8);
            *(uint *)(param_1 + 0x2f8) = uVar21;
            uVar12 = (uint)local_c0 & ~(uint)uVar23;
            puVar14 = (uint *)plVar22[4];
            if ((uint *)plVar22[4] == (uint *)0x0) {
              puVar14 = local_b8;
            }
            iVar26 = (int)plVar22[5];
            iVar19 = (int)uVar18;
            lVar17 = (longlong)iVar19;
            local_c0 = (longlong *)CONCAT44(local_c0._4_4_,uVar12);
            uVar12 = puVar14[lVar17] & uVar12;
            if (uVar12 == 0) {
              iVar15 = iVar26 + 0x1e;
              if (-1 < iVar26 + -1) {
                iVar15 = iVar26 + -1;
              }
              iVar15 = iVar15 >> 5;
              iVar20 = iVar20 + 0x20;
              iVar16 = iVar15;
              if (iVar15 < iVar19) {
                iVar16 = iVar19;
              }
              if (iVar19 < iVar15) {
                lVar25 = 0;
                do {
                  uVar12 = puVar14[lVar17 + lVar25 + 1];
                  if (uVar12 != 0) {
                    uVar18 = (ulonglong)(iVar19 + (int)lVar25 + 1);
                    local_c0 = (longlong *)CONCAT44(local_c0._4_4_,0xffffffff);
                    goto LAB_1414ec0d6;
                  }
                  iVar20 = iVar20 + 0x20;
                  lVar25 = lVar25 + 1;
                } while (iVar16 - lVar17 != lVar25);
                local_c0 = (longlong *)CONCAT44(local_c0._4_4_,0xffffffff);
                iVar19 = iVar16;
              }
              uVar18 = (ulonglong)(iVar19 + 1);
              iVar19 = iVar26;
            }
            else {
LAB_1414ec0d6:
              uVar23 = (ulonglong)(-uVar12 & uVar12);
              uVar24 = uVar23 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar24 != 0) {
                for (; uVar24 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar19 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              if (iVar26 <= iVar19) {
                iVar19 = iVar26;
              }
            }
          } while (iVar19 != iVar7);
          plVar22 = *(longlong **)(param_1 + 0x218);
        }
        else {
          uVar21 = 0;
        }
      }
LAB_1414ebd28:
      iVar7 = DAT_14c760d74 * DAT_14c760d70 + uVar21;
      if (iVar7 < (int)plVar22[1] - *(int *)((longlong)plVar22 + 0x34)) {
        local_a0 = &local_90;
        local_88 = &local_a0;
        FUN_14740fe30(plVar22);
        FUN_14740fa34(plVar22);
        local_c0 = *(longlong **)(param_1 + 0x218);
        local_b8 = (uint *)(local_c0 + 2);
        iVar20 = (int)local_c0[5];
        if (iVar20 == 0) {
          uVar24 = 1;
          uVar18 = 0;
          iVar26 = 0;
          iVar19 = 0;
        }
        else {
          puVar14 = (uint *)local_c0[4];
          if ((uint *)local_c0[4] == (uint *)0x0) {
            puVar14 = local_b8;
          }
          uVar21 = *puVar14;
          if (uVar21 == 0) {
            iVar19 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar19 = iVar20 + -1;
            }
            uVar18 = 0;
            uVar24 = (ulonglong)(uint)(iVar19 >> 5);
            if (iVar19 >> 5 < 1) {
              uVar24 = uVar18;
            }
            iVar26 = 0;
            do {
              if (uVar24 == uVar18) goto LAB_1414ebba5;
              iVar26 = iVar26 + 0x20;
              uVar21 = puVar14[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar21 == 0);
          }
          else {
            uVar18 = 0;
            iVar26 = 0;
          }
          uVar24 = (ulonglong)(-uVar21 & uVar21);
          uVar23 = uVar24 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar19 = (iVar26 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar20 <= iVar19) {
            iVar19 = iVar20;
          }
        }
        if (iVar19 < iVar20) {
          local_a8 = param_1 + 0x2b8;
          uVar21 = 0xffffffff;
          while (iVar7 < *(int *)(*(longlong *)(param_1 + 0x218) + 8) -
                         *(int *)(*(longlong *)(param_1 + 0x218) + 0x34)) {
            if ((*(longlong *)(*local_c0 + 0x58 + (longlong)iVar19 * 0x68) != 0) &&
               (cVar6 = FUN_1402ce39e(), cVar6 != '\0')) {
              lVar17 = *local_c0;
              local_b0 = FUN_147410508(local_a8);
              FUN_14740f91a(local_b0 + 8,(longlong)iVar19 * 0x68 + lVar17);
              **(longlong **)(param_1 + 0x2c0) = local_b0;
              *(longlong *)(param_1 + 0x2c0) = local_b0;
              FUN_145711ff2(local_c0,iVar19);
            }
            uVar21 = uVar21 & ~(uint)uVar24;
            puVar14 = (uint *)local_c0[4];
            if ((uint *)local_c0[4] == (uint *)0x0) {
              puVar14 = local_b8;
            }
            iVar20 = (int)local_c0[5];
            iVar19 = (int)uVar18;
            lVar17 = (longlong)iVar19;
            uVar12 = puVar14[lVar17] & uVar21;
            if (uVar12 == 0) {
              iVar15 = iVar20 + 0x1e;
              if (-1 < iVar20 + -1) {
                iVar15 = iVar20 + -1;
              }
              iVar16 = iVar15 >> 5;
              if (iVar15 >> 5 < iVar19) {
                iVar16 = iVar19;
              }
              lVar25 = 0;
              do {
                if (iVar16 - lVar17 == lVar25) goto LAB_1414ebba5;
                iVar26 = iVar26 + 0x20;
                uVar12 = puVar14[lVar17 + lVar25 + 1];
                lVar25 = lVar25 + 1;
              } while (uVar12 == 0);
              uVar18 = (ulonglong)(uint)(iVar19 + (int)lVar25);
              uVar21 = 0xffffffff;
            }
            uVar24 = (ulonglong)(-uVar12 & uVar12);
            uVar23 = uVar24 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar19 = (iVar26 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar20 <= iVar19) break;
          }
        }
      }
    }
  }
LAB_1414ebba5:
  iVar7 = *(int *)(param_1 + 0x230);
  lVar17 = (longlong)iVar7;
  if (lVar17 == 0) goto LAB_1414ebed3;
  _Src = *(void **)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  iVar20 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar20 != 2) {
      if (iVar20 != 1) goto LAB_1414ebbec;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1414ebbf5;
      goto LAB_1414ebe32;
    }
LAB_1414ebbf5:
    local_88 = (undefined8 *******)0x0;
    local_80 = iVar7;
    FUN_1431e83d0(&local_88,iVar7);
    memcpy(local_88,_Src,lVar17 << 3);
    pppppppuVar5 = local_88;
    if (DAT_14ca85164 == '\x01') {
      lVar17 = (longlong)local_80;
      pppppppuVar4 = local_88;
      if (lVar17 != 0) {
        lVar25 = 0;
        do {
          FUN_1402ce13e(*(undefined8 *)((longlong)pppppppuVar5 + lVar25));
          puVar13 = *(undefined8 **)((longlong)pppppppuVar5 + lVar25);
          if (puVar13 != (undefined8 *)0x0) {
            (**(code **)*puVar13)(puVar13,1);
          }
          lVar25 = lVar25 + 8;
          pppppppuVar4 = local_88;
        } while (lVar17 * 8 != lVar25);
      }
      goto joined_r0x0001414ebebf;
    }
    puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar10 + 4;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x28);
      puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar10 + 4;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar10;
    DAT_14ca85130 = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_14a37d600;
    puVar10[2] = local_88;
    *(int *)(puVar10 + 3) = local_80;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = local_7c;
  }
  else {
LAB_1414ebbec:
    if (iVar20 == 0x10) goto LAB_1414ebbf5;
LAB_1414ebe32:
    local_a0 = (undefined8 *******)0x0;
    uStack_98 = CONCAT44(uStack_98._4_4_,iVar7);
    FUN_1431e83d0(&local_a0,iVar7);
    memcpy(local_a0,_Src,lVar17 << 3);
    local_78 = 0;
    local_68 = &PTR_LAB_14a37d610;
    local_60 = local_a0;
    uStack_58 = uStack_98;
    local_a0 = (undefined8 *******)0x0;
    uStack_98 = 0;
    local_88 = (undefined8 *******)FUN_1431e84fc;
    local_c8 = 2;
    FUN_14014aede(&local_90);
    pppppppuVar4 = local_a0;
    if (local_90 != (undefined8 ******)0x0) {
      LOCK();
      ppppppuVar1 = local_90 + 1;
      *(int *)ppppppuVar1 = *(int *)ppppppuVar1 + -1;
      UNLOCK();
      if (*(int *)ppppppuVar1 == 0) {
        (*(code *)**local_90)(local_90,1);
        pppppppuVar4 = local_a0;
      }
    }
joined_r0x0001414ebebf:
    if (pppppppuVar4 != (undefined8 *******)0x0) {
      FUN_1400020a8(pppppppuVar4);
    }
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
  }
LAB_1414ebed3:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ec2ec FUN_1414ec2ec body=2162 status=ok
// SIG undefined FUN_1414ec2ec(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1414ec2ec(longlong param_1)

{
  undefined8 ******ppppppuVar1;
  ulonglong uVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  longlong local_c8;
  undefined8 local_c0;
  uint *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 *******local_a0;
  undefined8 uStack_98;
  undefined8 ******local_90;
  undefined8 *******local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined **local_68;
  undefined8 ******local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar6 = *(char *)(param_1 + 0x2b1);
  local_c8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca813a8) && (FUN_144b3d300(&DAT_14ca813a8), DAT_14ca813a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca813a0 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
    _Init_thread_footer(&DAT_14ca813a8);
    param_1 = local_c8;
  }
  if (((DAT_14ca84df4 == 0x10de) && (DAT_14ca813a0 != (longlong *)0x0)) &&
     (iVar8 = (**(code **)(*DAT_14ca813a0 + 0xb0))(), 0 < iVar8)) {
    if (DAT_14c872bd8 == '\x01') {
      if (**(longlong **)(param_1 + 0x2d8) != 0) {
        plVar14 = (longlong *)(local_c8 + 0x228);
        do {
          lVar17 = **(longlong **)(local_c8 + 0x2d8);
          if (lVar17 != 0) {
            uVar3 = *(undefined8 *)(lVar17 + 8);
            *(longlong *)(local_c8 + 0x2d8) = lVar17;
            iVar8 = *(int *)(local_c8 + 0x230);
            *(uint *)(local_c8 + 0x230) = iVar8 + 1U;
            if (*(uint *)(local_c8 + 0x234) < iVar8 + 1U) {
              FUN_1402cf380(plVar14,iVar8);
            }
            *(undefined8 *)(*plVar14 + (longlong)iVar8 * 8) = uVar3;
          }
        } while (**(longlong **)(local_c8 + 0x2d8) != 0);
      }
      DAT_14c760d70 = -1;
      param_1 = local_c8;
    }
    else if (cVar6 != '\0') {
      *(undefined4 *)(param_1 + 0x2f8) = 0;
      plVar14 = *(longlong **)(param_1 + 0x218);
      uVar26 = *(uint *)(plVar14 + 5);
      if (uVar26 == 0) {
        uVar18 = 1;
        uVar27 = 0;
        uVar19 = 0;
        local_c0 = (longlong *)((ulonglong)local_c0._4_4_ << 0x20);
      }
      else {
        puVar15 = (uint *)plVar14[4];
        if ((uint *)plVar14[4] == (uint *)0x0) {
          puVar15 = (uint *)(plVar14 + 2);
        }
        uVar19 = *puVar15;
        if (uVar19 == 0) {
          iVar8 = uVar26 + 0x1e;
          if (-1 < (int)(uVar26 - 1)) {
            iVar8 = uVar26 - 1;
          }
          uVar9 = 0;
          uVar23 = iVar8 >> 5;
          if (iVar8 >> 5 < 1) {
            uVar23 = uVar9;
          }
          uVar27 = 0;
          local_c0 = (longlong *)((ulonglong)local_c0 & 0xffffffff00000000);
          do {
            if (uVar23 == uVar27) goto LAB_1414ec6ef;
            local_c0 = (longlong *)CONCAT44(local_c0._4_4_,(int)local_c0 + 0x20);
            uVar19 = puVar15[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar19 == 0);
        }
        else {
          uVar27 = 0;
          local_c0 = (longlong *)((ulonglong)local_c0._4_4_ << 0x20);
        }
        uVar18 = (ulonglong)(-uVar19 & uVar19);
        uVar2 = uVar18 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar19 = ((int)local_c0 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar26 <= (int)uVar19) {
          uVar19 = uVar26;
        }
      }
      if (uVar19 == uVar26) {
        uVar9 = 0;
      }
      else {
        uVar23 = 0xffffffff;
        local_b8 = (uint *)(ulonglong)uVar26;
        do {
          lVar17 = *plVar14;
          if (*(longlong *)(lVar17 + 8 + (longlong)(int)uVar19 * 0x18) == 0) {
            bVar7 = false;
          }
          else {
            cVar6 = FUN_1402ce39e();
            if (cVar6 == '\0') {
              bVar7 = true;
            }
            else {
              bVar7 = DAT_14c867d10 <
                      *(longlong *)(*(longlong *)(lVar17 + (longlong)(int)uVar19 * 0x18 + 8) + 0x10)
                      + 0x1eU;
            }
          }
          uVar9 = (uint)bVar7 + *(int *)(local_c8 + 0x2f8);
          *(uint *)(local_c8 + 0x2f8) = uVar9;
          uVar23 = uVar23 & ~(uint)uVar18;
          puVar15 = (uint *)plVar14[4];
          if ((uint *)plVar14[4] == (uint *)0x0) {
            puVar15 = (uint *)(plVar14 + 2);
          }
          uVar26 = *(uint *)(plVar14 + 5);
          iVar8 = (int)uVar27;
          lVar17 = (longlong)iVar8;
          uVar19 = puVar15[lVar17] & uVar23;
          if (uVar19 == 0) {
            iVar16 = uVar26 + 0x1e;
            if (-1 < (int)(uVar26 - 1)) {
              iVar16 = uVar26 - 1;
            }
            iVar16 = iVar16 >> 5;
            local_c0 = (longlong *)CONCAT44(local_c0._4_4_,(int)local_c0 + 0x20);
            iVar20 = iVar16;
            if (iVar16 < iVar8) {
              iVar20 = iVar8;
            }
            if (iVar8 < iVar16) {
              lVar25 = 0;
              do {
                uVar19 = puVar15[lVar17 + lVar25 + 1];
                if (uVar19 != 0) {
                  uVar27 = (ulonglong)(iVar8 + (int)lVar25 + 1);
                  uVar23 = 0xffffffff;
                  goto LAB_1414ec681;
                }
                local_c0 = (longlong *)CONCAT44(local_c0._4_4_,(int)local_c0 + 0x20);
                lVar25 = lVar25 + 1;
              } while (iVar20 - lVar17 != lVar25);
              uVar23 = 0xffffffff;
              iVar8 = iVar20;
            }
            uVar27 = (ulonglong)(iVar8 + 1);
            uVar19 = uVar26;
          }
          else {
LAB_1414ec681:
            uVar18 = (ulonglong)(-uVar19 & uVar19);
            uVar2 = uVar18 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            uVar19 = ((int)local_c0 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if ((int)uVar26 <= (int)uVar19) {
              uVar19 = uVar26;
            }
          }
        } while (uVar19 != (uint)local_b8);
        plVar14 = *(longlong **)(local_c8 + 0x218);
        param_1 = local_c8;
      }
LAB_1414ec6ef:
      iVar8 = DAT_14c760d74 * DAT_14c760d70 + uVar9;
      if (iVar8 < (int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34)) {
        local_a0 = &local_90;
        local_88 = &local_a0;
        FUN_14740ec28();
        FUN_1402cf4e2(plVar14);
        local_c0 = *(longlong **)(param_1 + 0x218);
        local_b8 = (uint *)(local_c0 + 2);
        iVar16 = (int)local_c0[5];
        param_1 = local_c8;
        if (iVar16 == 0) {
          uVar18 = 1;
          uVar27 = 0;
          iVar24 = 0;
          iVar20 = 0;
        }
        else {
          puVar15 = (uint *)local_c0[4];
          if ((uint *)local_c0[4] == (uint *)0x0) {
            puVar15 = local_b8;
          }
          uVar26 = *puVar15;
          if (uVar26 == 0) {
            iVar20 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar20 = iVar16 + -1;
            }
            uVar27 = 0;
            uVar18 = (ulonglong)(uint)(iVar20 >> 5);
            if (iVar20 >> 5 < 1) {
              uVar18 = uVar27;
            }
            iVar24 = 0;
            do {
              if (uVar18 == uVar27) goto LAB_1414ec37e;
              iVar24 = iVar24 + 0x20;
              uVar26 = puVar15[uVar27 + 1];
              uVar27 = uVar27 + 1;
            } while (uVar26 == 0);
          }
          else {
            uVar27 = 0;
            iVar24 = 0;
          }
          uVar18 = (ulonglong)(-uVar26 & uVar26);
          uVar2 = uVar18 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar20 = (iVar24 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar16 <= iVar20) {
            iVar20 = iVar16;
          }
        }
        if (iVar20 < iVar16) {
          local_a8 = local_c8 + 0x2b8;
          uVar26 = 0xffffffff;
          while (param_1 = local_c8,
                iVar8 < *(int *)(*(longlong *)(local_c8 + 0x218) + 8) -
                        *(int *)(*(longlong *)(local_c8 + 0x218) + 0x34)) {
            if ((*(longlong *)(*local_c0 + 8 + (longlong)iVar20 * 0x18) != 0) &&
               (cVar6 = FUN_1402ce39e(), plVar14 = local_c0, cVar6 != '\0')) {
              local_b0 = *local_c0;
              lVar17 = FUN_14740f356(local_a8);
              *(undefined8 *)(lVar17 + 8) = *(undefined8 *)(local_b0 + (longlong)iVar20 * 0x18);
              **(longlong **)(local_c8 + 0x2c0) = lVar17;
              *(longlong *)(local_c8 + 0x2c0) = lVar17;
              FUN_1402cea7c(plVar14,iVar20);
            }
            uVar26 = uVar26 & ~(uint)uVar18;
            puVar15 = (uint *)local_c0[4];
            if ((uint *)local_c0[4] == (uint *)0x0) {
              puVar15 = local_b8;
            }
            iVar16 = (int)local_c0[5];
            iVar20 = (int)uVar27;
            lVar17 = (longlong)iVar20;
            uVar19 = puVar15[lVar17] & uVar26;
            param_1 = local_c8;
            if (uVar19 == 0) {
              iVar21 = iVar16 + 0x1e;
              if (-1 < iVar16 + -1) {
                iVar21 = iVar16 + -1;
              }
              iVar22 = iVar21 >> 5;
              if (iVar21 >> 5 < iVar20) {
                iVar22 = iVar20;
              }
              lVar25 = 0;
              do {
                if (iVar22 - lVar17 == lVar25) goto LAB_1414ec37e;
                iVar24 = iVar24 + 0x20;
                uVar19 = puVar15[lVar17 + lVar25 + 1];
                lVar25 = lVar25 + 1;
              } while (uVar19 == 0);
              uVar27 = (ulonglong)(uint)(iVar20 + (int)lVar25);
              uVar26 = 0xffffffff;
            }
            uVar18 = (ulonglong)(-uVar19 & uVar19);
            uVar2 = uVar18 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar20 = (iVar24 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar16 <= iVar20) break;
          }
        }
      }
    }
  }
LAB_1414ec37e:
  iVar8 = *(int *)(param_1 + 0x230);
  lVar17 = (longlong)iVar8;
  if (lVar17 == 0) goto LAB_1414ec8b0;
  _Src = *(void **)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  iVar16 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar16 != 2) {
      if (iVar16 != 1) goto LAB_1414ec3c5;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_1414ec3ce;
      goto LAB_1414ec80f;
    }
LAB_1414ec3ce:
    local_88 = (undefined8 *******)0x0;
    local_80 = iVar8;
    FUN_1431e7d12(&local_88,iVar8);
    memcpy(local_88,_Src,lVar17 << 3);
    pppppppuVar5 = local_88;
    if (DAT_14ca85164 == '\x01') {
      lVar17 = (longlong)local_80;
      pppppppuVar4 = local_88;
      if (lVar17 != 0) {
        lVar25 = 0;
        do {
          FUN_1402ce13e(*(undefined8 *)((longlong)pppppppuVar5 + lVar25));
          puVar13 = *(undefined8 **)((longlong)pppppppuVar5 + lVar25);
          if (puVar13 != (undefined8 *)0x0) {
            (**(code **)*puVar13)(puVar13,1);
          }
          lVar25 = lVar25 + 8;
          pppppppuVar4 = local_88;
        } while (lVar17 * 8 != lVar25);
      }
      goto joined_r0x0001414ec89c;
    }
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 4;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x28);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 4;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a37d570;
    puVar12[2] = local_88;
    *(int *)(puVar12 + 3) = local_80;
    *(undefined4 *)((longlong)puVar12 + 0x1c) = local_7c;
  }
  else {
LAB_1414ec3c5:
    if (iVar16 == 0x10) goto LAB_1414ec3ce;
LAB_1414ec80f:
    local_a0 = (undefined8 *******)0x0;
    uStack_98 = CONCAT44(uStack_98._4_4_,iVar8);
    FUN_1431e7d12(&local_a0,iVar8);
    memcpy(local_a0,_Src,lVar17 << 3);
    local_78 = 0;
    local_68 = &PTR_LAB_14a37d580;
    local_60 = local_a0;
    uStack_58 = uStack_98;
    local_a0 = (undefined8 *******)0x0;
    uStack_98 = 0;
    local_88 = (undefined8 *******)FUN_1431e7e3e;
    local_d8 = 2;
    FUN_14014aede(&local_90);
    pppppppuVar4 = local_a0;
    if (local_90 != (undefined8 ******)0x0) {
      LOCK();
      ppppppuVar1 = local_90 + 1;
      *(int *)ppppppuVar1 = *(int *)ppppppuVar1 + -1;
      UNLOCK();
      if (*(int *)ppppppuVar1 == 0) {
        (*(code *)**local_90)(local_90,1);
        pppppppuVar4 = local_a0;
      }
    }
joined_r0x0001414ec89c:
    if (pppppppuVar4 != (undefined8 *******)0x0) {
      FUN_1400020a8(pppppppuVar4);
    }
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
  }
LAB_1414ec8b0:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ecb60 FUN_1414ecb60 body=2179 status=ok
// SIG undefined FUN_1414ecb60(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1414ecb60(longlong param_1)

{
  undefined8 ******ppppppuVar1;
  ulonglong uVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  int iVar26;
  ulonglong uVar27;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  uint *local_b0;
  longlong local_a8;
  undefined8 *******local_a0;
  undefined8 uStack_98;
  undefined8 ******local_90;
  undefined8 *******local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined **local_68;
  undefined8 ******local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar6 = *(char *)(param_1 + 0x2b1);
  local_c0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca813a8) && (FUN_144b3d300(&DAT_14ca813a8), DAT_14ca813a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca813a0 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
    _Init_thread_footer(&DAT_14ca813a8);
    param_1 = local_c0;
  }
  if (((DAT_14ca84df4 == 0x10de) && (DAT_14ca813a0 != (longlong *)0x0)) &&
     (iVar8 = (**(code **)(*DAT_14ca813a0 + 0xb0))(), 0 < iVar8)) {
    if (DAT_14c872bd8 == '\x01') {
      if (**(longlong **)(param_1 + 0x2d8) != 0) {
        plVar14 = (longlong *)(local_c0 + 0x228);
        do {
          lVar17 = **(longlong **)(local_c0 + 0x2d8);
          if (lVar17 != 0) {
            uVar3 = *(undefined8 *)(lVar17 + 8);
            *(longlong *)(local_c0 + 0x2d8) = lVar17;
            iVar8 = *(int *)(local_c0 + 0x230);
            *(uint *)(local_c0 + 0x230) = iVar8 + 1U;
            if (*(uint *)(local_c0 + 0x234) < iVar8 + 1U) {
              FUN_1404f01fe(plVar14,iVar8);
            }
            *(undefined8 *)(*plVar14 + (longlong)iVar8 * 8) = uVar3;
          }
        } while (**(longlong **)(local_c0 + 0x2d8) != 0);
      }
      DAT_14c760d70 = -1;
      param_1 = local_c0;
    }
    else if (cVar6 != '\0') {
      *(undefined4 *)(param_1 + 0x2f8) = 0;
      plVar14 = *(longlong **)(param_1 + 0x218);
      uVar21 = *(uint *)(plVar14 + 5);
      if (uVar21 == 0) {
        uVar18 = 1;
        uVar27 = 0;
        uVar19 = 0;
        local_b8 = (longlong *)((ulonglong)local_b8._4_4_ << 0x20);
      }
      else {
        puVar15 = (uint *)plVar14[4];
        if ((uint *)plVar14[4] == (uint *)0x0) {
          puVar15 = (uint *)(plVar14 + 2);
        }
        uVar19 = *puVar15;
        if (uVar19 == 0) {
          iVar8 = uVar21 + 0x1e;
          if (-1 < (int)(uVar21 - 1)) {
            iVar8 = uVar21 - 1;
          }
          uVar9 = 0;
          uVar24 = iVar8 >> 5;
          if (iVar8 >> 5 < 1) {
            uVar24 = uVar9;
          }
          uVar27 = 0;
          local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
          do {
            if (uVar24 == uVar27) goto LAB_1414ecf6b;
            local_b8 = (longlong *)CONCAT44(local_b8._4_4_,(int)local_b8 + 0x20);
            uVar19 = puVar15[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar19 == 0);
        }
        else {
          uVar27 = 0;
          local_b8 = (longlong *)((ulonglong)local_b8._4_4_ << 0x20);
        }
        uVar18 = (ulonglong)(-uVar19 & uVar19);
        uVar2 = uVar18 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar19 = ((int)local_b8 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar21 <= (int)uVar19) {
          uVar19 = uVar21;
        }
      }
      if (uVar19 == uVar21) {
        uVar9 = 0;
      }
      else {
        uVar24 = 0xffffffff;
        local_b0 = (uint *)(ulonglong)uVar21;
        do {
          lVar17 = *plVar14;
          if (*(longlong *)(lVar17 + 0xd8 + (longlong)(int)uVar19 * 0xe8) == 0) {
            bVar7 = false;
          }
          else {
            cVar6 = FUN_1402ce39e();
            if (cVar6 == '\0') {
              bVar7 = true;
            }
            else {
              bVar7 = DAT_14c867d10 <
                      *(longlong *)
                       (*(longlong *)(lVar17 + (longlong)(int)uVar19 * 0xe8 + 0xd8) + 0x10) + 0x1eU;
            }
          }
          uVar9 = (uint)bVar7 + *(int *)(local_c0 + 0x2f8);
          *(uint *)(local_c0 + 0x2f8) = uVar9;
          uVar24 = uVar24 & ~(uint)uVar18;
          puVar15 = (uint *)plVar14[4];
          if ((uint *)plVar14[4] == (uint *)0x0) {
            puVar15 = (uint *)(plVar14 + 2);
          }
          uVar21 = *(uint *)(plVar14 + 5);
          iVar8 = (int)uVar27;
          lVar17 = (longlong)iVar8;
          uVar19 = puVar15[lVar17] & uVar24;
          if (uVar19 == 0) {
            iVar16 = uVar21 + 0x1e;
            if (-1 < (int)(uVar21 - 1)) {
              iVar16 = uVar21 - 1;
            }
            iVar16 = iVar16 >> 5;
            local_b8 = (longlong *)CONCAT44(local_b8._4_4_,(int)local_b8 + 0x20);
            iVar20 = iVar16;
            if (iVar16 < iVar8) {
              iVar20 = iVar8;
            }
            if (iVar8 < iVar16) {
              lVar25 = 0;
              do {
                uVar19 = puVar15[lVar17 + lVar25 + 1];
                if (uVar19 != 0) {
                  uVar27 = (ulonglong)(iVar8 + (int)lVar25 + 1);
                  uVar24 = 0xffffffff;
                  goto LAB_1414ecefd;
                }
                local_b8 = (longlong *)CONCAT44(local_b8._4_4_,(int)local_b8 + 0x20);
                lVar25 = lVar25 + 1;
              } while (iVar20 - lVar17 != lVar25);
              uVar24 = 0xffffffff;
              iVar8 = iVar20;
            }
            uVar27 = (ulonglong)(iVar8 + 1);
            uVar19 = uVar21;
          }
          else {
LAB_1414ecefd:
            uVar18 = (ulonglong)(-uVar19 & uVar19);
            uVar2 = uVar18 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            uVar19 = ((int)local_b8 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if ((int)uVar21 <= (int)uVar19) {
              uVar19 = uVar21;
            }
          }
        } while (uVar19 != (uint)local_b0);
        plVar14 = *(longlong **)(local_c0 + 0x218);
        param_1 = local_c0;
      }
LAB_1414ecf6b:
      iVar8 = DAT_14c760d74 * DAT_14c760d70 + uVar9;
      if (iVar8 < (int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34)) {
        local_a0 = &local_90;
        local_88 = &local_a0;
        FUN_1474107d6();
        FUN_1404f04d6(plVar14);
        local_b8 = *(longlong **)(param_1 + 0x218);
        local_b0 = (uint *)(local_b8 + 2);
        iVar16 = (int)local_b8[5];
        param_1 = local_c0;
        if (iVar16 == 0) {
          uVar27 = 1;
          uVar18 = 0;
          iVar26 = 0;
          iVar20 = 0;
        }
        else {
          puVar15 = (uint *)local_b8[4];
          if ((uint *)local_b8[4] == (uint *)0x0) {
            puVar15 = local_b0;
          }
          uVar21 = *puVar15;
          if (uVar21 == 0) {
            iVar20 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar20 = iVar16 + -1;
            }
            uVar18 = 0;
            uVar27 = (ulonglong)(uint)(iVar20 >> 5);
            if (iVar20 >> 5 < 1) {
              uVar27 = uVar18;
            }
            iVar26 = 0;
            do {
              if (uVar27 == uVar18) goto LAB_1414ecbf2;
              iVar26 = iVar26 + 0x20;
              uVar21 = puVar15[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar21 == 0);
          }
          else {
            uVar18 = 0;
            iVar26 = 0;
          }
          uVar27 = (ulonglong)(-uVar21 & uVar21);
          uVar2 = uVar27 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar20 = (iVar26 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar16 <= iVar20) {
            iVar20 = iVar16;
          }
        }
        if (iVar20 < iVar16) {
          local_a8 = local_c0 + 0x2b8;
          uVar21 = 0xffffffff;
          while (param_1 = local_c0,
                iVar8 < *(int *)(*(longlong *)(local_c0 + 0x218) + 8) -
                        *(int *)(*(longlong *)(local_c0 + 0x218) + 0x34)) {
            if ((*(longlong *)(*local_b8 + 0xd8 + (longlong)iVar20 * 0xe8) != 0) &&
               (cVar6 = FUN_1402ce39e(), cVar6 != '\0')) {
              lVar17 = *local_b8;
              lVar25 = FUN_147410ff6(local_a8);
              memcpy((void *)(lVar25 + 8),(void *)((longlong)iVar20 * 0xe8 + lVar17),0xd8);
              **(longlong **)(local_c0 + 0x2c0) = lVar25;
              *(longlong *)(local_c0 + 0x2c0) = lVar25;
              FUN_1404ef416(local_b8,iVar20);
            }
            uVar21 = uVar21 & ~(uint)uVar27;
            puVar15 = (uint *)local_b8[4];
            if ((uint *)local_b8[4] == (uint *)0x0) {
              puVar15 = local_b0;
            }
            iVar16 = (int)local_b8[5];
            iVar20 = (int)uVar18;
            lVar17 = (longlong)iVar20;
            uVar19 = puVar15[lVar17] & uVar21;
            param_1 = local_c0;
            if (uVar19 == 0) {
              iVar22 = iVar16 + 0x1e;
              if (-1 < iVar16 + -1) {
                iVar22 = iVar16 + -1;
              }
              iVar23 = iVar22 >> 5;
              if (iVar22 >> 5 < iVar20) {
                iVar23 = iVar20;
              }
              lVar25 = 0;
              do {
                if (iVar23 - lVar17 == lVar25) goto LAB_1414ecbf2;
                iVar26 = iVar26 + 0x20;
                uVar19 = puVar15[lVar17 + lVar25 + 1];
                lVar25 = lVar25 + 1;
              } while (uVar19 == 0);
              uVar18 = (ulonglong)(uint)(iVar20 + (int)lVar25);
              uVar21 = 0xffffffff;
            }
            uVar27 = (ulonglong)(-uVar19 & uVar19);
            uVar2 = uVar27 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar20 = (iVar26 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar16 <= iVar20) break;
          }
        }
      }
    }
  }
LAB_1414ecbf2:
  iVar8 = *(int *)(param_1 + 0x230);
  lVar17 = (longlong)iVar8;
  if (lVar17 == 0) goto LAB_1414ed12b;
  _Src = *(void **)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  iVar16 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar16 != 2) {
      if (iVar16 != 1) goto LAB_1414ecc39;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_1414ecc42;
      goto LAB_1414ed08a;
    }
LAB_1414ecc42:
    local_88 = (undefined8 *******)0x0;
    local_80 = iVar8;
    FUN_1431e8a8e(&local_88,iVar8);
    memcpy(local_88,_Src,lVar17 << 3);
    pppppppuVar5 = local_88;
    if (DAT_14ca85164 == '\x01') {
      lVar17 = (longlong)local_80;
      pppppppuVar4 = local_88;
      if (lVar17 != 0) {
        lVar25 = 0;
        do {
          FUN_1402ce13e(*(undefined8 *)((longlong)pppppppuVar5 + lVar25));
          puVar13 = *(undefined8 **)((longlong)pppppppuVar5 + lVar25);
          if (puVar13 != (undefined8 *)0x0) {
            (**(code **)*puVar13)(puVar13,1);
          }
          lVar25 = lVar25 + 8;
          pppppppuVar4 = local_88;
        } while (lVar17 * 8 != lVar25);
      }
      goto joined_r0x0001414ed117;
    }
    puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar13 = puVar12 + 4;
    if (DAT_14ca85108 < puVar13) {
      FUN_140023dd8(&DAT_14ca85100,0x28);
      puVar12 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar13 = puVar12 + 4;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar13;
    *DAT_14ca85130 = puVar12;
    DAT_14ca85130 = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a37d690;
    puVar12[2] = local_88;
    *(int *)(puVar12 + 3) = local_80;
    *(undefined4 *)((longlong)puVar12 + 0x1c) = local_7c;
  }
  else {
LAB_1414ecc39:
    if (iVar16 == 0x10) goto LAB_1414ecc42;
LAB_1414ed08a:
    local_a0 = (undefined8 *******)0x0;
    uStack_98 = CONCAT44(uStack_98._4_4_,iVar8);
    FUN_1431e8a8e(&local_a0,iVar8);
    memcpy(local_a0,_Src,lVar17 << 3);
    local_78 = 0;
    local_68 = &PTR_LAB_14a37d6a0;
    local_60 = local_a0;
    uStack_58 = uStack_98;
    local_a0 = (undefined8 *******)0x0;
    uStack_98 = 0;
    local_88 = (undefined8 *******)FUN_1431e8bba;
    local_c8 = 2;
    FUN_14014aede(&local_90);
    pppppppuVar4 = local_a0;
    if (local_90 != (undefined8 ******)0x0) {
      LOCK();
      ppppppuVar1 = local_90 + 1;
      *(int *)ppppppuVar1 = *(int *)ppppppuVar1 + -1;
      UNLOCK();
      if (*(int *)ppppppuVar1 == 0) {
        (*(code *)**local_90)(local_90,1);
        pppppppuVar4 = local_a0;
      }
    }
joined_r0x0001414ed117:
    if (pppppppuVar4 != (undefined8 *******)0x0) {
      FUN_1400020a8(pppppppuVar4);
    }
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
  }
LAB_1414ed12b:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ed3e4 FUN_1414ed3e4 body=1041 status=ok
// SIG undefined FUN_1414ed3e4(void)

void FUN_1414ed3e4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong lVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong *puVar15;
  
  if ((((*(longlong *)(param_1 + -0x11a0) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + -0x11a0) + 0x65) & 2) == 0)) &&
      ((*(byte *)(param_1 + -0x11a9) & 0x40) == 0)) && ((longlong)(int)param_2[1] != 0)) {
    lVar1 = param_1 + -0x1248;
    puVar13 = (ulonglong *)*param_2;
    puVar8 = puVar13 + (int)param_2[1];
    bVar11 = false;
    do {
      uVar2 = *puVar13;
      if (uVar2 != 0) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(uVar2);
        }
        iVar6 = *(int *)(param_1 + 0x448);
        if ((longlong)iVar6 != 0) {
          lVar9 = *(longlong *)(param_1 + 0x440);
          iVar14 = 1;
          lVar12 = 0;
          lVar10 = 0;
          bVar4 = DAT_14c950c29;
          do {
            if ((bVar4 & 1) != 0) {
              FUN_1456cec3c(uVar2);
              bVar4 = DAT_14c950c29;
            }
            if (*(ulonglong *)(lVar9 + lVar12) == uVar2) {
              iVar6 = *(int *)(param_1 + 0x448);
              if (iVar14 != 0) {
                memmove((void *)(*(longlong *)(param_1 + 0x440) + (lVar10 >> 0x20) * 8),
                        (void *)(*(longlong *)(param_1 + 0x440) + (lVar10 >> 0x20) * 8 + 8),
                        (longlong)(iVar6 - iVar14) << 3);
                iVar6 = *(int *)(param_1 + 0x448) + -1;
                *(int *)(param_1 + 0x448) = iVar6;
                bVar11 = true;
              }
              goto LAB_1414ed505;
            }
            lVar10 = lVar10 + 0x100000000;
            iVar14 = iVar14 + 1;
            lVar12 = lVar12 + 8;
          } while ((longlong)iVar6 * 8 != lVar12);
          iVar6 = *(int *)(param_1 + 0x448);
LAB_1414ed505:
          if (iVar6 != 0) {
            lVar9 = 0;
            do {
              if (*(ulonglong *)(*(longlong *)(param_1 + 0x440) + lVar9) == uVar2)
              goto LAB_1414ed54f;
              lVar9 = lVar9 + 8;
            } while ((longlong)iVar6 * 8 != lVar9);
          }
        }
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(uVar2);
        }
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(uVar2);
        }
        if (*(int *)(param_1 + 0x458) != *(int *)(param_1 + 0x484)) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(uVar2);
          }
          uVar7 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          lVar9 = *(longlong *)(param_1 + 0x490);
          if (*(longlong *)(param_1 + 0x490) == 0) {
            lVar9 = param_1 + 0x488;
          }
          iVar6 = *(int *)(lVar9 + ((longlong)(int)(uVar7 >> 0x10 ^ uVar7) &
                                   (longlong)*(int *)(param_1 + 0x498) - 1U) * 4);
          bVar4 = DAT_14c950c29;
          while (iVar6 != -1) {
            puVar15 = (ulonglong *)((longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x450));
            if ((bVar4 & 1) != 0) {
              FUN_1456cec3c(uVar2);
              bVar4 = DAT_14c950c29;
            }
            uVar3 = *puVar15;
            if (((bVar4 & 1) != 0) && (uVar3 != 0)) {
              FUN_1456cec3c(uVar3);
              bVar4 = DAT_14c950c29;
            }
            if ((bVar4 & 1) != 0) {
              FUN_1456cec3c(uVar2);
              bVar4 = DAT_14c950c29;
            }
            if (uVar3 == uVar2) {
              FUN_145c158a0((longlong *)(param_1 + 0x450));
              break;
            }
            iVar6 = (int)puVar15[3];
          }
        }
      }
LAB_1414ed54f:
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar8);
    if ((bVar11) &&
       (((((*(longlong *)(param_1 + -0x11a0) != 0 &&
           (*(char *)(*(longlong *)(param_1 + -0x11a0) + 0x178) == '\x03')) ||
          (cVar5 = FUN_140f2b868(lVar1), cVar5 == '\0')) &&
         ((*(byte *)(param_1 + -0x11ac) & 1) != 0)) ||
        (((*(longlong *)(param_1 + -0x11a0) == 0 ||
          (*(char *)(*(longlong *)(param_1 + -0x11a0) + 0x178) != '\x03')) &&
         ((*(byte *)(param_1 + -0x11a9) & 0x20) != 0)))))) {
      FUN_140f2b9a2(lVar1);
      FUN_140f2be08(lVar1);
      if ((longlong)*(int *)(param_1 + 0x750) != 0) {
        lVar9 = 0;
        do {
          if ((*(int *)(*(longlong *)(param_1 + 0x748) + 8 + lVar9) != 0) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x748) + lVar9) != 0)) {
            FUN_140f2bd4c(param_1 + 0x748,lVar1,param_2,0);
            return;
          }
          lVar9 = lVar9 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x750) * 0x10 != lVar9);
      }
    }
  }
  return;
}



// FUNCTION 1414ed7f6 FUN_1414ed7f6 body=523 status=ok
// SIG undefined FUN_1414ed7f6(void)

void FUN_1414ed7f6(longlong param_1,undefined8 param_2,longlong *param_3,ushort param_4,
                  short param_5)

{
  longlong lVar1;
  undefined2 *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined2 local_b8;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_94 [4];
  longlong local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined2 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = (ulonglong)param_4;
  lVar4 = param_1 + 0x38;
  while( true ) {
    if (((short)uVar5 < 0) || ((int)param_3[1] <= (int)(short)uVar5)) break;
    lVar1 = *param_3 + uVar5 * 0x1c;
    if (*(char *)(*param_3 + 0x10 + uVar5 * 0x1c) == '\0') {
      FUN_1400021e4(lVar1 + 8,&local_70);
      FUN_14475c2da(&local_70,0x2e,0x5f,1);
      puVar2 = &DAT_149dfb77a;
      if (local_68 != 0) {
        puVar2 = local_70;
      }
      FUN_1446f470e(&local_78,puVar2,1);
      local_88 = 0;
      uStack_80 = 0;
      local_a0 = lVar4;
      FUN_1414eda02(lVar4,local_78,&local_88);
      lVar4 = local_88;
      lVar3 = (longlong)(int)uStack_80;
      if (lVar3 != 0) {
        lVar6 = 0;
        local_a8 = param_2;
        do {
          local_90 = *(longlong *)(lVar4 + lVar6);
          if (local_90 != 0) {
            FUN_145c15ca6(local_a8,local_94,&local_90,0);
            if ((*(char *)(lVar1 + 0x11) == '\x01') && (*(short *)(lVar1 + 0x1a) < 1)) {
              FUN_1470a1314(local_a8,local_90);
            }
          }
          lVar6 = lVar6 + 8;
          param_2 = local_a8;
        } while (lVar3 * 8 != lVar6);
      }
      lVar4 = local_a0;
      if (local_88 != 0) {
        FUN_1400020a8(local_88);
      }
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (0 < *(short *)(lVar1 + 0x18)) {
      local_b8 = *(undefined2 *)(lVar1 + 0x1a);
      FUN_1414ed7f6(param_1,param_2,param_3);
    }
    param_5 = param_5 + -1;
    if ((param_5 == 0) || ((uVar5 = uVar5 + 1, param_5 < 0 && (-1 < *(short *)(lVar1 + 0x16)))))
    break;
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1414eda02 FUN_1414eda02 body=233 status=ok
// SIG undefined FUN_1414eda02(void)

void FUN_1414eda02(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((int)param_1[9] != 0) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (longlong)
                    (int)((int)param_1[9] - 1U &
                         ((uint)param_2 << 0x10 | uVar6) + (int)((ulonglong)param_2 >> 0x20) +
                         (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar4 = iVar5, iVar4 != -1) {
      lVar7 = *param_1;
      iVar5 = *(int *)(lVar7 + 0x10 + (longlong)iVar4 * 0x18);
      if (*(longlong *)(lVar7 + (longlong)iVar4 * 0x18) == param_2) {
        do {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_145c15c22(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) =
               *(undefined8 *)(lVar7 + (longlong)iVar4 * 0x18 + 8);
          do {
            iVar4 = iVar5;
            if (iVar4 == -1) {
              return;
            }
            lVar7 = *param_1;
            iVar5 = *(int *)(lVar7 + 0x10 + (longlong)iVar4 * 0x18);
          } while (*(longlong *)(lVar7 + (longlong)iVar4 * 0x18) != param_2);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 1414edaeb FUN_1414edaeb body=1995 status=ok
// SIG undefined FUN_1414edaeb(void)

longlong FUN_1414edaeb(undefined8 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined1 local_1d0 [8];
  undefined8 local_1c8;
  undefined1 local_1c0 [8];
  undefined8 local_1b8;
  undefined1 local_1b0 [8];
  undefined8 local_1a8;
  undefined1 local_1a0 [8];
  undefined8 local_198;
  undefined1 local_190 [8];
  undefined8 local_188;
  undefined1 local_180 [8];
  undefined8 local_178;
  undefined1 local_170 [8];
  undefined8 local_168;
  undefined1 local_160 [8];
  undefined8 local_158;
  undefined1 local_150 [8];
  undefined8 local_148;
  undefined1 local_140 [8];
  undefined8 local_138;
  undefined1 local_130 [8];
  undefined8 local_128;
  undefined8 *local_120;
  ulonglong *local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 *local_f8;
  undefined8 *local_f0;
  undefined1 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_118 = (ulonglong *)CONCAT44(local_118._4_4_,DAT_14cb86b50);
  local_120 = DAT_14cb86b48;
  FUN_1448075d0(&local_108);
  pbVar5 = (byte *)*param_1;
  if (pbVar5 != (byte *)0x0) {
    if ((*pbVar5 & 2) == 0) {
      plVar12 = &DAT_14c9a1288;
    }
    else {
      plVar12 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
    }
    if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
      plVar15 = plVar12 + 8;
      if ((longlong *)plVar12[9] != (longlong *)0x0) {
        plVar15 = (longlong *)plVar12[9];
      }
      iVar11 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar12[10] - 1U & (uint)local_108) * 4
                       );
      if (iVar11 != -1) {
        do {
          lVar16 = *plVar12 + (longlong)iVar11 * 0x40;
          if (*(uint *)(*plVar12 + (longlong)iVar11 * 0x40) == (uint)local_108) {
            if ((((lVar16 != 0) &&
                 (puVar14 = (undefined8 *)(lVar16 + 0x28), puVar14 != (undefined8 *)0x0)) &&
                ((byte *)*puVar14 != (byte *)0x0)) && ((*(byte *)*puVar14 & 0x40) == 0))
            goto LAB_1414edbb5;
            break;
          }
          iVar11 = *(int *)(lVar16 + 0x38);
        } while (iVar11 != -1);
      }
    }
  }
  puVar14 = &DAT_14c9a1308;
LAB_1414edbb5:
  if (local_f0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar14 == (byte *)0x0) || ((*(byte *)*puVar14 & 3) != 1)) {
    uVar8 = FUN_1401bd880();
    lVar16 = 0;
    FUN_140006e7f(&local_108,param_1,uVar8,0);
    bVar17 = (char)uStack_100 != '\x01';
    uStack_100 = (undefined8 *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
    if (bVar17) goto LAB_1414edd08;
    lVar16 = CONCAT44(local_108._4_4_,(uint)local_108);
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb86a30) {
      FUN_144b3d300(&DAT_14cb86a30);
      if (DAT_14cb86a30 == -1) {
        FUN_1446ddc76(&local_110,"Custom",1);
        uVar8 = FUN_1446f4bba();
        local_128 = FUN_140277b32(uVar8,0,L"/Script/GbxGame.ObjectiveTypeSettings_Custom",0);
        uStack_100 = &local_128;
        local_108 = &local_110;
        FUN_1446ddc76(local_130,"Composite",1);
        uVar8 = FUN_1446f4bba();
        local_138 = FUN_140277b32(uVar8,0,L"/Script/GbxGame.ObjectiveTypeSettings_Composite",0);
        local_f0 = &local_138;
        local_f8 = local_130;
        FUN_1446ddc76(local_140,"External",1);
        uVar8 = FUN_1446f4bba();
        local_148 = FUN_140277b32(uVar8,0,L"/Script/GbxGame.ObjectiveTypeSettings_External",0);
        local_e0 = &local_148;
        local_e8 = local_140;
        FUN_1446ddc76(local_150,&DAT_14a3fdcc7,1);
        uVar8 = FUN_1446f4bba();
        local_158 = FUN_140277b32(uVar8,0,L"/Script/OakGame.ObjectiveTypeSettings_OakKill",0);
        local_d0 = &local_158;
        local_d8 = local_150;
        FUN_1446ddc76(local_160,"Escort",1);
        uVar8 = FUN_1446f4bba();
        local_168 = FUN_140277b32(uVar8,0,L"/Script/OakGame.ObjectiveTypeSettings_OakEscort",0);
        local_c0 = &local_168;
        local_c8 = local_160;
        FUN_1446ddc76(local_170,"ExchangeItem",1);
        uVar8 = FUN_1446f4bba();
        local_178 = FUN_140277b32(uVar8,0,L"/Script/OakGame.ObjectiveTypeSettings_OakExchangeItem",0
                                 );
        local_b0 = &local_178;
        local_b8 = local_170;
        FUN_1446ddc76(local_180,"Travel",1);
        uVar8 = FUN_1446f4bba();
        local_188 = FUN_140277b32(uVar8,0,L"/Script/OakGame.ObjectiveTypeSettings_OakTravel",0);
        local_a0 = &local_188;
        local_a8 = local_180;
        FUN_1446ddc76(local_190,&DAT_14b41a5ea,1);
        uVar8 = FUN_1446f4bba();
        local_198 = FUN_140277b32(uVar8,0,L"/Script/GbxGame.ObjectiveTypeSettings_Talk",0);
        local_90 = &local_198;
        local_98 = local_190;
        FUN_1446ddc76(local_1a0,"Interact",1);
        uVar8 = FUN_1446f4bba();
        local_1a8 = FUN_140277b32(uVar8,0,L"/Script/OakGame.ObjectiveTypeSettings_OakInteract",0);
        local_80 = &local_1a8;
        local_88 = local_1a0;
        FUN_1446ddc76(local_1b0,"PerformAction",1);
        uVar8 = FUN_1446f4bba();
        local_1b8 = FUN_140277b32(uVar8,0,L"/Script/OakGame.ObjectiveTypeSettings_OakPerformAction",
                                  0);
        local_70 = &local_1b8;
        local_78 = local_1b0;
        FUN_1446ddc76(local_1c0,&DAT_14b41a730,1);
        uVar8 = FUN_1446f4bba();
        local_1c8 = FUN_140277b32(uVar8,0,L"/Script/OakGame.ObjectiveTypeSettings_OakLoot",0);
        local_60 = &local_1c8;
        local_68 = local_1c0;
        FUN_1446ddc76(local_1d0,"Pickup",1);
        uVar8 = FUN_1446f4bba();
        local_1d8 = FUN_140277b32(uVar8,0,L"/Script/OakGame.ObjectiveTypeSettings_OakPickup",0);
        local_50 = &local_1d8;
        local_120 = &local_108;
        local_118 = &local_48;
        local_58 = local_1d0;
        FUN_145c15fdc(&DAT_14cb869e0);
        atexit(FUN_143df127a);
        _Init_thread_footer(&DAT_14cb86a30);
      }
    }
    FUN_14068d188(puVar14,&local_108,0);
    lVar9 = CONCAT44((undefined4)uStack_100,local_108._4_4_);
    if ((lVar9 == DAT_14c948034) && (lVar9 = DAT_14c948034, (uint)local_108 != DAT_14c948030)) {
      FUN_14011791e(&local_110,(uint)local_108,(ulonglong)uStack_100 & 0xffffffff);
      lVar9 = local_110;
    }
    if (DAT_14cb869e8 != DAT_14cb86a14) {
      uVar6 = (uint)((ulonglong)lVar9 >> 0x10);
      uVar10 = (uint)lVar9 & 0xffff;
      puVar13 = &DAT_14cb86a18;
      if (DAT_14cb86a20 != (undefined *)0x0) {
        puVar13 = DAT_14cb86a20;
      }
      iVar11 = *(int *)(puVar13 +
                       (ulonglong)
                       (DAT_14cb86a28 - 1U &
                       (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar10) +
                       (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar10 >> 4)) * 4);
      if (iVar11 != -1) {
        lVar16 = 0;
        do {
          plVar12 = (longlong *)(DAT_14cb869e0 + (longlong)iVar11 * 0x18);
          if (*plVar12 == lVar9) {
            if (plVar12 + 1 == (longlong *)0x0 || plVar12 == (longlong *)0x0) goto LAB_1414ede5f;
            lVar16 = plVar12[1];
            break;
          }
          iVar11 = (int)plVar12[2];
        } while (iVar11 != -1);
        goto LAB_1414edc0c;
      }
    }
LAB_1414ede5f:
    lVar16 = 0;
  }
LAB_1414edc0c:
  if (lVar16 == 0) {
    lVar16 = 0;
    goto LAB_1414edd08;
  }
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar2 = (undefined4 *)(lVar9 + 0xc7c);
  uVar4 = *puVar2;
  pbVar5 = (byte *)(lVar9 + 0xc80);
  bVar3 = *pbVar5;
  if ((bVar3 & 1) != 0) {
    *pbVar5 = 0;
    *puVar2 = 0;
  }
  local_108._0_4_ = 0;
  local_108._4_4_ = 0;
  uStack_100._0_4_ = 0;
  uStack_100._4_4_ = 0;
  local_f8 = (undefined1 *)0x0;
  FUN_140005f6c(&local_108,lVar16,0,0);
  lVar9 = CONCAT44(local_108._4_4_,(uint)local_108);
  if (lVar9 == 0) {
LAB_1414ee27c:
    plVar15 = (longlong *)0x0;
    plVar12 = (longlong *)0x0;
  }
  else {
    uVar8 = FUN_1401bd880();
    cVar7 = FUN_1448093f4(lVar9,uVar8);
    if (cVar7 == '\0') goto LAB_1414ee27c;
    plVar12 = (longlong *)CONCAT44(local_108._4_4_,(uint)local_108);
    plVar15 = (longlong *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
    if (plVar15 == (longlong *)0x0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
  }
  lVar9 = (**(code **)(*plVar12 + 0x30))(plVar12,param_1);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar15 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (lVar9 != 0) {
    lVar16 = lVar9;
  }
  plVar12 = (longlong *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar12 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  local_108 = (longlong *)CONCAT44(local_108._4_4_,(uint)local_108);
  uStack_100 = (undefined8 *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
  if ((bVar3 & 1) != 0) {
    *puVar2 = uVar4;
    *pbVar5 = 1;
    local_108 = (longlong *)CONCAT44(local_108._4_4_,(uint)local_108);
    uStack_100 = (undefined8 *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
  }
LAB_1414edd08:
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar16;
}



// FUNCTION 1414ee2b8 FUN_1414ee2b8 body=482 status=ok
// SIG undefined FUN_1414ee2b8(void)

void FUN_1414ee2b8(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 1414ee49c FUN_1414ee49c body=326 status=ok
// SIG undefined FUN_1414ee49c(void)

void FUN_1414ee49c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1463eca0c(param_1);
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(longlong *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    FUN_145a0c4bc(*(undefined8 *)(param_1 + 0x858));
  }
  if (param_2 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x1a8) = param_2;
    lVar3 = param_2;
LAB_1414ee544:
    lVar2 = lVar3;
    lVar3 = lVar2;
    if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x0001414ee553;
    goto LAB_1414ee567;
  }
LAB_1414ee4c3:
  plVar1 = *(longlong **)(param_1 + 0x830);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001414ee4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x2b0))(*(longlong **)(param_1 + 0x830),param_2)
    ;
    return;
  }
  return;
code_r0x0001414ee553:
  lVar3 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) goto LAB_1414ee544;
  lVar3 = FUN_142840154(lVar2);
LAB_1414ee567:
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(lVar2 + 0x20);
    goto LAB_1414ee544;
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(param_1 + 0x1b0) = lVar3;
  *(longlong *)(param_1 + 0x2f8) = param_2 + 0x28;
  FUN_14597435c(param_1,param_2);
  if (*(char *)(param_1 + 0x849) == '\x01') {
    if (*(char *)(param_1 + 0x848) == '\x01') {
      *(undefined1 *)(param_1 + 0x848) = 0;
    }
    else {
      FUN_147bd684e(param_2);
    }
  }
  else {
    FUN_140174ce6(*(undefined8 *)(param_1 + 0x858),param_2,param_1);
  }
  goto LAB_1414ee4c3;
}



// FUNCTION 1414ee5e2 FUN_1414ee5e2 body=189 status=ok
// SIG undefined FUN_1414ee5e2(void)

int FUN_1414ee5e2(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1414ee620:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1414ee697;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1414ee697;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1414ee63a;
    }
  }
  return -1;
LAB_1414ee697:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1414ee63a:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1414ee620;
}



// FUNCTION 1414ee6a0 FUN_1414ee6a0 body=251 status=ok
// SIG undefined FUN_1414ee6a0(void)

void FUN_1414ee6a0(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,5);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_1414ee6e8;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1414ee6e8:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + lVar5 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
  }
  lVar3 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar3 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar2 + lVar5 * 4 + 4 + lVar3 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[4]) goto LAB_1414ee77b;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1414ee77b:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(*param_3 + 0x10 + lVar5 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1414ee79c FUN_1414ee79c body=2350 status=ok
// SIG undefined FUN_1414ee79c(void)

void FUN_1414ee79c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined7 *puVar7;
  undefined7 *puVar8;
  undefined1 auStack_348 [32];
  undefined1 *local_328;
  undefined4 *local_320;
  undefined8 local_318;
  code *local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  longlong local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  longlong lStack_2e0;
  undefined1 local_2d1;
  undefined7 uStack_2d0;
  undefined1 uStack_2c9;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_274;
  undefined4 local_26c;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0;
  undefined4 local_178;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_2b0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_318 = FUN_1446ddbd2();
      local_310 = FUN_1468d96f0;
      local_320 = (undefined4 *)0x0;
      local_328 = (undefined1 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2b0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2b0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2b0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_2b0 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2b0);
    }
  }
  local_2b8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_318 = FUN_1446ddbd2();
      local_310 = FUN_1468d96f0;
      local_320 = (undefined4 *)0x0;
      local_328 = (undefined1 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2b8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2b8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2b8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_2b8 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2b8);
    }
  }
  local_280 = 0;
  local_278 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  local_274 = 0xffffffff00000080;
  local_26c = 0;
  local_260 = 0;
  local_258 = 0;
  local_230 = 0;
  local_228 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_224 = 0xffffffff00000080;
  local_21c = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0xffffffff00000000;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1c4 = 0xffffffff00000080;
  local_1bc = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_178 = 0;
  local_150 = 0;
  local_148 = 0x200000000;
  local_138 = 0;
  local_130 = 0;
  uStack_12c = 0x20;
  uStack_128 = 0xffffffff;
  uStack_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_e8 = 0;
  local_e0 = 0x200000000;
  local_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0x20;
  uStack_c0 = 0xffffffff;
  uStack_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0x200000000;
  local_68 = 0;
  local_60 = 0;
  uStack_5c = 0x20;
  uStack_58 = 0xffffffff;
  uStack_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  plVar1 = (longlong *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2a8);
LAB_1414eeb05:
    pbVar5 = *(byte **)(param_2 + 0x20);
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2a8);
      goto LAB_1414eeb05;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2a8);
      goto LAB_1414eeb05;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_2a8);
      goto LAB_1414eeb05;
    }
    local_2a8 = *(undefined8 *)(pbVar5 + 1);
    pbVar5 = pbVar5 + 9;
    *(byte **)(param_2 + 0x20) = pbVar5;
    puVar6 = (undefined8 *)0x0;
  }
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_2d0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_2d0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_2d0);
    }
    else {
      if (pcVar3 == (code *)&LAB_1428293cc) {
        uVar2 = *(undefined8 *)(pbVar5 + 1);
        pbVar5 = pbVar5 + 9;
        *(byte **)(param_2 + 0x20) = pbVar5;
        uStack_2d0 = (undefined7)uVar2;
        uStack_2c9 = (undefined1)((ulonglong)uVar2 >> 0x38);
        puVar8 = (undefined7 *)0x0;
        goto LAB_1414eeb84;
      }
      (*pcVar3)(uVar2,param_2,&uStack_2d0);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  puVar8 = *(undefined7 **)(param_2 + 0x38);
LAB_1414eeb84:
  local_2d1 = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d1);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2d1);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2d1);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      local_2d1 = (undefined1)uVar2;
      uStack_2d0 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2d1);
    }
  }
  puVar4 = (undefined1 *)*plVar1;
  local_2f0 = 0xffffffffffffffff;
  uStack_2e8 = 0;
  lStack_2e0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_318 = FUN_1446ddbd2();
      local_310 = FUN_1403a682c;
      local_320 = (undefined4 *)0x0;
      local_328 = (undefined1 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2f0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2f0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2f0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_2f0 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2f0);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_308 = (undefined4)local_2f0;
  uStack_304 = local_2f0._4_4_;
  uStack_300 = (undefined4)uStack_2e8;
  uStack_2fc = uStack_2e8._4_4_;
  local_2f8 = lStack_2e0;
  if ((lStack_2e0 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_328 = &local_2d1;
  if (puVar4 != (undefined1 *)0x0) {
    local_328 = puVar4;
  }
  puVar7 = &uStack_2d0;
  if (puVar8 != (undefined7 *)0x0) {
    puVar7 = puVar8;
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = &local_2a8;
  }
  local_320 = &local_308;
  FUN_1414ef0cc(local_2b0,local_2b8,puVar6,puVar7);
  local_2a8 = 0;
  FUN_14076ba36(&uStack_2a0);
  if ((local_28 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1414ef0cc FUN_1414ef0cc body=224 status=ok
// SIG undefined FUN_1414ef0cc(void)

void FUN_1414ef0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(param_4 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_4 = (undefined4)DAT_14c8464e0;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 0x1f0) == 0) {
      lVar4 = lVar4 + 0x460;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x1f0) + 0xf8);
    }
    uVar5 = FUN_14001cc68(0x48,0x10);
    FUN_1414ef1ac(uVar5,param_2,param_3,param_4,param_5,param_6,1);
    FUN_140b1330e(lVar4,*(undefined8 *)(param_6 + 0x10),*(undefined4 *)(param_6 + 4),uVar5);
    return;
  }
  return;
}



// FUNCTION 1414ef1ac FUN_1414ef1ac body=678 status=ok
// SIG undefined FUN_1414ef1ac(void)

undefined8 *
FUN_1414ef1ac(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6,undefined4 param_7)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_14ac8c750;
  *(undefined4 *)(param_1 + 1) = *param_6;
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_6 + 2);
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  if (*(longlong *)(param_6 + 4) == 0) {
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(param_6 + 4) + 0xc);
    *(uint *)((longlong)param_1 + 0x14) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar6 = iVar8;
      }
    }
  }
  *(int *)(param_1 + 3) = iVar6;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_4;
  *(undefined4 *)(param_1 + 7) = param_7;
  param_1[8] = param_5;
  if ((param_2 != 0) && (cVar5 = FUN_140dbf4b8(param_3), cVar5 != '\0')) {
    uVar7 = FUN_1447210f0(param_2);
    FUN_1409e0c66(&local_58,uVar7);
    if (local_50 != (longlong *)0x0) {
      iVar6 = (int)local_50[1];
      do {
        if (iVar6 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar8 = (int)local_50[1];
        bVar11 = iVar6 == iVar8;
        if (bVar11) {
          *(int *)(local_50 + 1) = iVar6 + 1;
          iVar8 = iVar6;
        }
        iVar6 = iVar8;
        UNLOCK();
        plVar10 = local_50;
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
      if (plVar10 != (longlong *)0x0) {
        if (local_58 != 0) {
          local_68 = 0;
          FUN_140a41f04(local_58,&local_58,param_2,param_3);
          plVar2 = local_50;
          if (param_1 + 4 != &local_58) {
            param_1[4] = local_58;
            local_58 = 0;
            plVar4 = (longlong *)param_1[5];
            if (local_50 != plVar4) {
              local_50 = (longlong *)0x0;
              param_1[5] = plVar2;
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
          plVar2 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_50 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
        }
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1414ef453 FUN_1414ef453 body=4 status=ok
// SIG undefined FUN_1414ef453(void)

undefined8 FUN_1414ef453(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 1414ef458 FUN_1414ef458 body=944 status=ok
// SIG undefined FUN_1414ef458(void)

void FUN_1414ef458(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  byte bVar14;
  
  lVar7 = FUN_140983b3e();
  if (lVar7 == 0) {
    bVar13 = true;
  }
  else {
    iVar6 = FUN_14490d72a(lVar7);
    bVar13 = iVar6 != 3;
  }
  if ((DAT_14cb0d2b0 != 0) && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)) {
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar8);
      if (*(longlong *)(lVar4 + 0x360) == lVar7) {
        if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x230) != 0)) &&
           (plVar9 = *(longlong **)(*(longlong *)(lVar4 + 0x230) + 0x30), plVar9 != (longlong *)0x0)
           ) {
          if (*(code **)(*plVar9 + 0x3c0) == (code *)&LAB_1448ff5f6) {
            bVar14 = plVar9[0x1e] == 0;
          }
          else {
            bVar14 = (**(code **)(*plVar9 + 0x3c0))();
          }
          bVar13 = (bool)(bVar13 & bVar14);
        }
        break;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar8);
  }
  if (bVar13 == false) {
    lVar7 = *(longlong *)(param_1 + 0x1b0);
    plVar9 = *(longlong **)(param_1 + 0x1b8);
LAB_1414ef539:
    if (plVar9 == (longlong *)0x0) {
LAB_1414ef5e1:
      plVar9 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
  }
  else {
    if (*(char *)(param_1 + 0x168) == '\x01') {
      lVar7 = *(longlong *)(param_1 + 0x1a0);
      plVar9 = *(longlong **)(param_1 + 0x1a8);
      goto LAB_1414ef539;
    }
    if ((((*(int *)(param_1 + 0x54) != 0) && (uVar3 = *(uint *)(param_1 + 0x50), -1 < (int)uVar3))
        && (((int)uVar3 < DAT_14c9647dc &&
            ((plVar9 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0x54))))))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar7 = *plVar9;
      }
      else {
        lVar7 = 0;
      }
      if (*(char *)(lVar7 + 0x1f8) == '\x01') {
        lVar7 = *(longlong *)(param_1 + 400);
        plVar9 = *(longlong **)(param_1 + 0x198);
        goto LAB_1414ef539;
      }
    }
    plVar9 = *(longlong **)(param_1 + 0x188);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      lVar7 = 0;
    }
    else {
      iVar6 = (int)plVar9[1];
      lVar7 = 0;
      do {
        if (iVar6 == 0) goto LAB_1414ef5e1;
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar13 = iVar6 == iVar5;
        if (bVar13) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar13);
      lVar7 = *(longlong *)(param_1 + 0x180);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x170);
  plVar12 = *(longlong **)(param_1 + 0x178);
  bVar14 = 1;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar6 = (int)plVar12[1];
    lVar8 = 0;
    do {
      if (iVar6 == 0) {
        plVar12 = (longlong *)0x0;
        goto LAB_1414ef61f;
      }
      LOCK();
      iVar5 = (int)plVar12[1];
      bVar13 = iVar6 == iVar5;
      if (bVar13) {
        *(int *)(plVar12 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar13);
    lVar8 = *plVar2;
    bVar14 = 0;
  }
LAB_1414ef61f:
  if (lVar8 == lVar7) goto LAB_1414ef787;
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x151) != '\0') {
      *(undefined1 *)(lVar8 + 0x151) = 0;
    }
    FUN_140291d9a(param_1,1);
  }
  *(longlong *)(param_1 + 0x170) = lVar7;
  plVar11 = *(longlong **)(param_1 + 0x178);
  if (plVar11 != plVar9) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      plVar11 = *(longlong **)(param_1 + 0x178);
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    *(longlong **)(param_1 + 0x178) = plVar9;
    plVar11 = plVar9;
  }
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar11[1];
    lVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar11 = (longlong *)0x0;
        goto LAB_1414ef6bc;
      }
      LOCK();
      iVar5 = (int)plVar11[1];
      bVar13 = iVar6 == iVar5;
      if (bVar13) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar13);
    lVar7 = *plVar2;
  }
LAB_1414ef6bc:
  plVar10 = (longlong *)0x0;
  if (plVar11 == plVar12) {
    plVar10 = plVar11;
  }
  if ((bool)(bVar14 | plVar11 == plVar12)) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
        plVar12 = plVar11;
        goto joined_r0x0001414ef705;
      }
    }
  }
  else {
    LOCK();
    plVar10 = plVar12 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar6 = *piVar1;
      UNLOCK();
joined_r0x0001414ef705:
      if (iVar6 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x151) == '\0')) {
    *(undefined1 *)(lVar7 + 0x151) = 1;
  }
  plVar12 = plVar11;
  if (((((*(int *)(param_1 + 100) != 0) && (uVar3 = *(uint *)(param_1 + 0x60), -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 100))))) &&
     (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
      (((longlong *)*plVar10 != (longlong *)0x0 &&
       (lVar7 = (**(code **)(*(longlong *)*plVar10 + 0x2b8))(), lVar7 != 0)))))) {
    FUN_145822174(lVar7,plVar2);
  }
LAB_1414ef787:
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001414ef7da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x10))(plVar9);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1414ef808 FUN_1414ef808 body=812 status=ok
// SIG undefined FUN_1414ef808(void)

void FUN_1414ef808(longlong param_1)

{
  ulonglong uVar1;
  float fVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((((*(int *)(param_1 + 0x20) != 0) && (uVar3 = *(uint *)(param_1 + 0x1c), -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) &&
      ((puVar10 = (undefined8 *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       puVar10 != (undefined8 *)0x0 && (*(int *)(puVar10 + 2) == *(int *)(param_1 + 0x20))))) &&
     ((*(uint *)(puVar10 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar10 + 1) & 0x10200000) == 0) {
      plVar9 = (longlong *)*puVar10;
    }
    else {
      plVar9 = (longlong *)0x0;
    }
    cVar4 = (**(code **)(*plVar9 + 0x490))();
    if (cVar4 == '\0') {
      fVar2 = *(float *)(param_1 + 0x30);
      uVar18 = FUN_143d2bfe0(param_1,1);
      uVar3 = *(uint *)(param_1 + 0x60);
      if (uVar3 == 0) {
        uVar14 = 1;
        iVar12 = 0;
        uVar17 = 0;
        uVar15 = 0;
      }
      else {
        puVar7 = *(uint **)(param_1 + 0x58);
        if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x48);
        }
        uVar15 = *puVar7;
        if (uVar15 == 0) {
          iVar12 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar12 = uVar3 - 1;
          }
          uVar17 = 0;
          uVar14 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar14 = uVar17;
          }
          iVar12 = 0;
          do {
            if (uVar14 == uVar17) goto LAB_1414ef960;
            iVar12 = iVar12 + 0x20;
            uVar15 = puVar7[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar15 == 0);
        }
        else {
          iVar12 = 0;
          uVar17 = 0;
        }
        uVar14 = (ulonglong)(-uVar15 & uVar15);
        uVar1 = uVar14 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar15 = (iVar12 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar15) {
          uVar15 = uVar3;
        }
      }
      if (uVar15 != uVar3) {
        uVar13 = 0xffffffff;
        local_b0 = (ulonglong)uVar3;
        do {
          lVar8 = *(longlong *)(param_1 + 0x38);
          local_a8 = 0;
          uStack_a0 = 0;
          cVar4 = FUN_14493c216(&local_a8,0);
          if (cVar4 == '\0') {
            uStack_a0 = 0;
          }
          lVar11 = lVar8 + (longlong)(int)uVar15 * 0x300;
          lVar8 = (longlong)(int)uVar15 * 0x300 + lVar8;
          *(undefined8 *)(lVar8 + 0x100) = local_a8;
          *(undefined8 *)(lVar8 + 0x108) = uStack_a0;
          if ((0.0 <= *(float *)(lVar11 + 0x2a0)) &&
             ((*(int *)(lVar11 + 0x6c) == 0 || ((byte)(*(char *)(lVar11 + 0x298) - 5U) < 2)))) {
            fVar19 = *(float *)(lVar11 + 0x2a0) - (fVar2 - *(float *)(lVar11 + 0x29c));
            if (fVar19 <= 0.0) {
              fVar19 = 0.0;
            }
            *(float *)(lVar11 + 0x2a0) = fVar19;
          }
          *(undefined4 *)(lVar11 + 0x29c) = uVar18;
          *(byte *)(lVar11 + 0x2b0) =
               *(byte *)(lVar11 + 0x2b0) & 0xfb | (*(char *)(lVar11 + 0x2b8) == '\x01') << 2;
          uVar13 = uVar13 & ~(uint)uVar14;
          puVar7 = *(uint **)(param_1 + 0x58);
          if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
            puVar7 = (uint *)(param_1 + 0x48);
          }
          uVar3 = *(uint *)(param_1 + 0x60);
          iVar16 = (int)uVar17;
          lVar8 = (longlong)iVar16;
          uVar15 = puVar7[lVar8] & uVar13;
          if (uVar15 == 0) {
            iVar5 = uVar3 + 0x1e;
            if (-1 < (int)(uVar3 - 1)) {
              iVar5 = uVar3 - 1;
            }
            iVar5 = iVar5 >> 5;
            iVar12 = iVar12 + 0x20;
            iVar6 = iVar5;
            if (iVar5 < iVar16) {
              iVar6 = iVar16;
            }
            if (iVar16 < iVar5) {
              lVar11 = 0;
              do {
                uVar15 = puVar7[lVar8 + lVar11 + 1];
                if (uVar15 != 0) {
                  uVar17 = (ulonglong)(iVar16 + (int)lVar11 + 1);
                  uVar13 = 0xffffffff;
                  goto LAB_1414efada;
                }
                iVar12 = iVar12 + 0x20;
                lVar11 = lVar11 + 1;
              } while (iVar6 - lVar8 != lVar11);
              uVar13 = 0xffffffff;
              iVar16 = iVar6;
            }
            uVar17 = (ulonglong)(iVar16 + 1);
            uVar15 = uVar3;
          }
          else {
LAB_1414efada:
            uVar14 = (ulonglong)(-uVar15 & uVar15);
            uVar1 = uVar14 * 2 + 1;
            lVar8 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            uVar15 = (iVar12 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
            if ((int)uVar3 <= (int)uVar15) {
              uVar15 = uVar3;
            }
          }
        } while (uVar15 != (uint)local_b0);
      }
    }
  }
LAB_1414ef960:
  if ((local_90 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


