// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1491d577e FUN_1491d577e body=499 status=ok
// SIG undefined FUN_1491d577e(void)

undefined8 FUN_1491d577e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  uint *local_a0;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 local_8c;
  undefined1 local_84;
  longlong local_80;
  code *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  uint *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar3 = FUN_1403f35db(*param_2,&DAT_14cc07488);
  if (cVar3 == '\0') {
    cVar3 = FUN_1403f35db(*param_2,&DAT_14cc074b8);
    if (cVar3 != '\0') {
      local_98 = local_98 & 0xffffff00;
      uStack_94 = 0x1ff;
      uStack_90 = 0x7f7fffff;
      local_8c = 0;
      local_84 = 0;
      local_68 = 0;
      local_58 = &PTR_LAB_14bb902c0;
      local_78[0] = FUN_1444a9cf2;
      local_50 = param_1;
      local_48 = &local_98;
      FUN_14449bc3c(*(undefined8 *)(param_1 + 0x2f8),local_78,1);
      lVar1 = *(longlong *)(param_1 + 0x2f8);
      iVar4 = *(int *)(lVar1 + 0xc0);
      local_a8 = param_1;
      local_a0 = &local_98;
      if (0 < iVar4) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + lVar5 * 8);
          if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\b')) {
            local_80 = lVar2;
            FUN_1444aa17a(&local_a8,&local_80);
            iVar4 = *(int *)(lVar1 + 0xc0);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar4);
      }
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x2f8);
    iVar4 = *(int *)(lVar1 + 0xc0);
    local_a8 = param_1;
    if (0 < iVar4) {
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + lVar5 * 8);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\x01')) {
          local_98 = (uint)lVar2;
          uStack_94 = (undefined4)((ulonglong)lVar2 >> 0x20);
          FUN_1444a90e4(&local_a8,&local_98);
          iVar4 = *(int *)(lVar1 + 0xc0);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar4);
      lVar1 = *(longlong *)(param_1 + 0x2f8);
      iVar4 = *(int *)(lVar1 + 0xc0);
      local_a8 = param_1;
      if (0 < iVar4) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + lVar5 * 8);
          if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\b')) {
            local_98 = (uint)lVar2;
            uStack_94 = (undefined4)((ulonglong)lVar2 >> 0x20);
            FUN_1444a9bd8(&local_a8,&local_98);
            iVar4 = *(int *)(lVar1 + 0xc0);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1491d5972 FUN_1491d5972 body=109 status=ok
// SIG undefined FUN_1491d5972(void)

void FUN_1491d5972(longlong param_1)

{
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1491a10fe();
  local_48 = 0;
  local_38 = &PTR_LAB_14bb902f0;
  local_58[0] = FUN_1444aa560;
  local_30 = param_1;
  FUN_14449bc3c(*(undefined8 *)(param_1 + 0x2f8),local_58,1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d59e0 FUN_1491d59e0 body=329 status=ok
// SIG undefined FUN_1491d59e0(void)

void FUN_1491d59e0(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  (**(code **)(*param_1 + 0x340))();
  FUN_1409a7ac8(param_1,param_2);
  plVar5 = (longlong *)param_1[0x6c];
  plVar2 = (longlong *)param_1[0x6d];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar5 == (longlong *)0x0) goto LAB_1491d5a7f;
  lVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
  if (lVar3 == 0) {
LAB_1491d5a4e:
    lVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
    if (lVar3 == 0) goto LAB_1491d5a7f;
    lVar4 = FUN_140f5e1c2();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_1491d5a7f;
    lVar4 = FUN_144b00dc8(lVar3);
    if (lVar4 != 0) {
      FUN_1427ff290(lVar4 + 0x240,lVar3);
    }
    FUN_1400337aa(lVar3);
    lVar4 = lVar3 + 0x50;
  }
  else {
    lVar4 = FUN_144a74fb4();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_1491d5a4e;
    plVar5 = (longlong *)FUN_144a81888(lVar3);
    if (plVar5 == (longlong *)0x0) goto LAB_1491d5a7f;
    lVar3 = (**(code **)(*plVar5 + 0x3f0))(plVar5);
    lVar4 = (**(code **)(*plVar5 + 0x308))(plVar5);
  }
  FUN_1491d5b2a(param_1,lVar4,lVar3);
LAB_1491d5a7f:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001491d5aa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1491d5b2a FUN_1491d5b2a body=742 status=ok
// SIG undefined FUN_1491d5b2a(void)

void FUN_1491d5b2a(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  longlong *local_c0;
  longlong local_b8;
  code *local_b0;
  undefined4 *local_a8;
  longlong local_a0 [2];
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  (**(code **)(*param_1 + 0x340))();
  FUN_14150bb00(param_1[0x5f],1);
  lVar4 = FUN_14449bdee(param_1[0x5f],1);
  local_90 = lVar4;
  if (lVar4 != 0) {
    local_88 = 0;
    uStack_84 = 0;
    local_d0 = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_d8 = 1;
    FUN_1491d4242(lVar4,local_a0,param_2,&local_88);
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    if (*(char *)((longlong)param_1 + 0xae9) == '\x01') {
      if ((int)param_1[0x161] < 1) {
        if ((param_3 != 0) && (*(char *)((longlong)param_1 + 0xaea) == '\x01')) {
          local_88 = (undefined4)lVar4;
          uStack_84 = (undefined4)((ulonglong)lVar4 >> 0x20);
          local_b0 = FUN_1444aa2a0;
          local_a8 = &local_88;
          FUN_1403f1474(param_3);
        }
      }
      else {
        lVar6 = 0;
        do {
          FUN_1491d5fec(lVar4,&local_88,*(undefined8 *)(param_1[0x160] + lVar6 * 8),0);
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int)param_1[0x161]);
      }
    }
    if ((char)param_1[0x15d] == '\x01') {
      lVar6 = param_1[0x15f];
      local_c0 = param_1;
      local_b8 = lVar4;
      if ((longlong)(int)lVar6 == 0) {
        lVar4 = param_1[0x5f];
        iVar2 = *(int *)(lVar4 + 0xc0);
        if (0 < iVar2) {
          lVar6 = 0;
          do {
            lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + lVar6 * 8);
            if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) == '\x01')) {
              FUN_14449c16c(&local_c0);
              iVar2 = *(int *)(lVar4 + 0xc0);
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < iVar2);
        }
      }
      else {
        lVar4 = param_1[0x15e];
        lVar5 = 0;
        do {
          local_88 = CONCAT31(local_88._1_3_,1);
          uStack_84 = (undefined4)*(undefined8 *)(lVar4 + lVar5);
          uStack_80 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + lVar5) >> 0x20);
          lVar1 = param_1[0x5f];
          uVar3 = FUN_140813180(lVar1,&local_88);
          if ((((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar1 + 0xc0))) &&
              (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar3 * 8), lVar1 != 0
              )) && (*(char *)(lVar1 + 0x10) == '\x01')) {
            FUN_14449c16c(&local_c0);
          }
          lVar5 = lVar5 + 8;
        } while ((longlong)(int)lVar6 * 8 != lVar5);
      }
      local_78 = 0;
      local_68 = &PTR_LAB_14bb902f0;
      local_88 = 0x444aa560;
      uStack_84 = 1;
      local_60 = param_1;
      FUN_14449bc3c(param_1[0x5f],&local_88,1);
    }
    if (*(char *)((longlong)param_1 + 0xae9) == '\x01') {
      lVar4 = param_1[0x5f];
      local_c0 = &local_90;
      iVar2 = *(int *)(lVar4 + 0xc0);
      if (0 < iVar2) {
        lVar6 = 0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + lVar6 * 8);
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) == '\b')) {
            local_88 = (undefined4)lVar5;
            uStack_84 = (undefined4)((ulonglong)lVar5 >> 0x20);
            FUN_1444aa2e2(&local_c0,&local_88);
            iVar2 = *(int *)(lVar4 + 0xc0);
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar2);
      }
    }
    FUN_1491d5f66(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491d5e12 FUN_1491d5e12 body=339 status=ok
// SIG undefined FUN_1491d5e12(void)

void FUN_1491d5e12(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 *local_50;
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined8 local_3c;
  undefined1 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0xae0) != param_2) {
    *(char *)(param_1 + 0xae0) = param_2;
    lVar1 = *(longlong *)(param_1 + 0x2f8);
    if (lVar1 != 0) {
      local_58 = param_1;
      if (param_2 == '\x01') {
        local_50 = local_48;
        local_44 = 0x7f7fffff000001ff;
        local_3c = 0;
        local_34 = 0;
        local_48[0] = 2;
        iVar3 = *(int *)(lVar1 + 0xc0);
        if (0 < iVar3) {
          lVar4 = 0;
          do {
            lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + lVar4 * 8);
            if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\x04')) {
              local_30 = lVar2;
              FUN_1444aa9f4(&local_58,&local_30);
              iVar3 = *(int *)(lVar1 + 0xc0);
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 < iVar3);
        }
      }
      else {
        local_50 = local_48;
        local_44 = 0x7f7fffff000001ff;
        local_3c = 0;
        local_34 = 0;
        local_48[0] = 2;
        iVar3 = *(int *)(lVar1 + 0xc0);
        if (0 < iVar3) {
          lVar4 = 0;
          do {
            lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + lVar4 * 8);
            if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\x04')) {
              local_30 = lVar2;
              FUN_1444aabc4(&local_58,&local_30);
              iVar3 = *(int *)(lVar1 + 0xc0);
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 < iVar3);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491d5f66 FUN_1491d5f66 body=133 status=ok
// SIG undefined FUN_1491d5f66(void)

void FUN_1491d5f66(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x2f8) + 0xc0);
    if (*(uint *)(param_1 + 0xad8) != uVar2) {
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar2);
      }
      puVar1 = (undefined8 *)(param_1 + 0xad0);
      *(undefined4 *)(param_1 + 0xad8) = 0;
      if (*(uint *)(param_1 + 0xadc) != uVar2) {
        FUN_14475e67c(puVar1,uVar2);
      }
      uVar3 = (ulonglong)uVar2;
      FUN_1448c4dd6(puVar1,uVar3,1);
      if ((longlong)*(int *)(param_1 + 0xad8) != 0) {
        memset((void *)*puVar1,(int)CONCAT71((int7)(uVar3 >> 8),1),
               (longlong)*(int *)(param_1 + 0xad8));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1491d5fec FUN_1491d5fec body=300 status=ok
// SIG undefined FUN_1491d5fec(void)

undefined8 *
FUN_1491d5fec(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_3;
  cVar2 = FUN_14576d4b4();
  if (cVar2 == '\0') {
    *(undefined1 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
    goto LAB_1491d6032;
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) {
LAB_1491d608c:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1491d608c;
  }
  lVar3 = FUN_1491ed902(param_1,0);
  uVar1 = *(undefined1 *)(lVar4 + 0x4c8);
  *(undefined1 *)(lVar4 + 0x4c8) = 0;
  *(undefined1 *)(lVar3 + 0x10) = 8;
  FUN_1491ec4cc(param_1,&local_70,&local_68,8);
  *(undefined8 *)(lVar3 + 0x14) = local_70;
  local_78 = &local_68;
  FUN_1491ec5ea(param_1,lVar3,0,0);
  if (*(undefined4 **)(lVar3 + 0x50) != (undefined4 *)0x0) {
    **(undefined4 **)(lVar3 + 0x50) = param_4;
  }
  *(undefined1 *)(lVar3 + 0x48) = 0;
  *(undefined1 *)(lVar4 + 0x4c8) = uVar1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0x18);
  *param_2 = *(undefined8 *)(lVar3 + 0x10);
LAB_1491d6032:
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d611a FUN_1491d611a body=309 status=ok
// SIG undefined FUN_1491d611a(void)

longlong FUN_1491d611a(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4
                      ,undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_188 [32];
  undefined8 local_168 [12];
  undefined8 local_108 [13];
  undefined4 local_9c [27];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar2 = *param_2;
  uVar3 = *param_3;
  puVar7 = local_9c + 3;
  for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *param_4;
    param_4 = param_4 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar8 = local_168;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *param_5;
    param_5 = param_5 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar8 = local_108;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *param_6;
    param_6 = param_6 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14920b6d8(param_1,iVar1);
  }
  lVar5 = *param_1;
  lVar4 = (longlong)iVar1 * 0x170;
  puVar8 = (undefined8 *)(lVar5 + lVar4);
  puVar8[1] = uVar2;
  *(undefined4 *)(puVar8 + 2) = 0xffffffff;
  *puVar8 = &PTR_FUN_14bb89190;
  puVar8[3] = uVar3;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  puVar7 = local_9c;
  puVar10 = (undefined4 *)((longlong)puVar8 + 0x24);
  for (lVar6 = 0x1b; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar10 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar8 = local_108;
  puVar9 = (undefined8 *)(lVar5 + 0x90 + lVar4);
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = (undefined8 *)(lVar5 + 0xf0 + lVar4);
  puVar9 = local_168;
  puVar11 = puVar8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  *(undefined1 *)(puVar8 + 0xe) = 1;
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return lVar4 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d6250 FUN_1491d6250 body=325 status=ok
// SIG undefined FUN_1491d6250(void)

undefined8 * FUN_1491d6250(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined ***local_80;
  longlong *local_78;
  undefined1 local_70;
  longlong local_68 [2];
  undefined **local_58 [2];
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 1) < 2) {
    lVar2 = 0;
  }
  else {
    uVar5 = *param_1;
    uVar1 = FUN_1446f4bba();
    lVar2 = FUN_140277b32(uVar1,0,uVar5,0);
  }
  plVar3 = (longlong *)FUN_14001cc68(0x28,0x10);
  FUN_1446e6d0e(plVar3,lVar2);
  *param_2 = plVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_FUN_14a4c7c20;
  puVar4[2] = plVar3;
  param_2[1] = puVar4;
  FUN_144a81de8(local_58);
  local_58[0] = &PTR_FUN_14bb89c20;
  local_48 = 0;
  local_40 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_40,local_68);
  uVar5 = (**(code **)(*plVar3 + 0x18))(plVar3);
  if (*(int *)(param_1 + 3) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)param_1[2];
  }
  local_70 = 1;
  local_88 = 0;
  local_80 = local_58;
  local_78 = local_68;
  FUN_14115911a(lVar2,puVar6,uVar5,0);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d6396 FUN_1491d6396 body=104 status=ok
// SIG undefined FUN_1491d6396(void)

undefined8 FUN_1491d6396(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  bool bVar4;
  
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 == *(int *)(param_2 + 1)) {
    if ((1 < iVar2) && (iVar2 = wcscmp((wchar_t *)*param_1,(wchar_t *)*param_2), iVar2 != 0)) {
      return 0;
    }
  }
  else if (*(int *)(param_2 + 1) + iVar2 != 1) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 3);
  iVar1 = *(int *)(param_2 + 3);
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
    iVar2 = wcscmp((wchar_t *)param_1[2],(wchar_t *)param_2[2]);
    uVar3 = CONCAT44(extraout_var,iVar2);
    bVar4 = iVar2 == 0;
  }
  else {
    uVar3 = (ulonglong)(uint)(iVar1 + iVar2);
    bVar4 = iVar1 + iVar2 == 1;
  }
  return CONCAT71((int7)(uVar3 >> 8),bVar4);
}



// FUNCTION 1491d63fe FUN_1491d63fe body=88 status=ok
// SIG undefined FUN_1491d63fe(void)

void FUN_1491d63fe(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  
  iVar1 = *(int *)(param_1 + 3);
  puVar7 = &DAT_149dfb77a;
  puVar5 = &DAT_149dfb77a;
  if (iVar1 != 0) {
    puVar5 = (undefined2 *)param_1[2];
  }
  iVar6 = 0;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = iVar6;
  }
  uVar2 = FUN_144a49b4a(iVar4,puVar5);
  if (*(int *)(param_1 + 1) != 0) {
    puVar7 = (undefined2 *)*param_1;
    iVar6 = *(int *)(param_1 + 1) + -1;
  }
  uVar3 = FUN_144a49b4a(iVar6,puVar7);
  FUN_144a78877(uVar3,uVar2);
  return;
}



// FUNCTION 1491d6456 FUN_1491d6456 body=239 status=ok
// SIG undefined FUN_1491d6456(void)

longlong FUN_1491d6456(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14919e822(*(undefined8 *)(param_1 + 0x10),param_2 + 0x10);
  if (lVar2 == 0) {
    if (param_3 != 0) {
      puVar3 = (undefined8 *)FUN_1491d6546(param_2);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*puVar3;
      }
      FUN_140002266(local_40,L"Resolved target not found for connector \'%s\'.",puVar4);
      FUN_140233b1a(local_30,local_40);
      FUN_140008f88(param_3,local_30);
      if (local_30[0] != (longlong *)0x0) {
        (**(code **)(*local_30[0] + 0x10))();
      }
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x18);
    if (lVar2 != 0) {
      bVar1 = *(byte *)(lVar2 + 0x10);
      if ((((ulonglong)bVar1 < 0x21) && ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
         (bVar1 == 0x80)) goto LAB_1491d64b8;
    }
  }
  lVar2 = 0;
LAB_1491d64b8:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1491d6546 FUN_1491d6546 body=151 status=ok
// SIG undefined FUN_1491d6546(void)

longlong * FUN_1491d6546(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x40) < 2) && (*(longlong *)(param_1 + 0x14) != 0)) {
    FUN_1400021e4(param_1 + 0x14,&local_30);
    if ((longlong *)(param_1 + 0x38) == &local_30) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x38) = local_30;
      *(undefined4 *)(param_1 + 0x40) = local_28;
      *(undefined4 *)(param_1 + 0x44) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (longlong *)(param_1 + 0x38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d65de FUN_1491d65de body=233 status=ok
// SIG undefined FUN_1491d65de(void)

undefined8 * FUN_1491d65de(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_38);
  plVar1 = local_38;
  *param_2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 0x18);
  param_2[2] = local_38;
  if (local_38 == (longlong *)0x0) {
    *(undefined4 *)(param_2 + 3) = local_30;
  }
  else {
    (**(code **)(*local_38 + 8))(local_38);
    *(undefined4 *)(param_2 + 3) = local_30;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  FUN_144a5dc74(&local_38);
  *(undefined1 *)((longlong)param_2 + 0xc) = 1;
  if (plVar1 != local_38) {
    param_2[2] = local_38;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_2 + 3) = local_30;
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491d66c8 FUN_1491d66c8 body=442 status=ok
// SIG undefined FUN_1491d66c8(void)

undefined8 * FUN_1491d66c8(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined5 local_78;
  undefined3 uStack_73;
  undefined4 local_70;
  undefined1 uStack_6c;
  longlong *local_68 [2];
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a5dc74(&local_78);
  *param_2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 0x18);
  plVar2 = (longlong *)CONCAT35(uStack_73,local_78);
  param_2[2] = plVar2;
  if (plVar2 == (longlong *)0x0) {
    *(undefined4 *)(param_2 + 3) = local_70;
  }
  else {
    (**(code **)(*plVar2 + 8))(plVar2);
    *(undefined4 *)(param_2 + 3) = local_70;
    if ((longlong *)CONCAT35(uStack_73,local_78) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT35(uStack_73,local_78) + 0x10))();
    }
  }
  FUN_144a5dc74(&local_78);
  *(undefined1 *)((longlong)param_2 + 0xc) = 2;
  plVar3 = (longlong *)CONCAT35(uStack_73,local_78);
  if (plVar2 != plVar3) {
    param_2[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    plVar3 = (longlong *)CONCAT35(uStack_73,local_78);
  }
  *(undefined4 *)(param_2 + 3) = local_70;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar4 = (longlong)*(int *)(param_1 + 0x10) * 0x20 + lVar5;
    do {
      plVar2 = (longlong *)FUN_1491d39be(lVar5,&local_58);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_78,param_3,param_4);
        *(ulonglong *)((longlong)param_2 + 5) = CONCAT17(uStack_6c,CONCAT43(local_70,uStack_73));
        *param_2 = CONCAT35(uStack_73,local_78);
        FUN_140008f88(param_2 + 2,local_68);
        if (local_68[0] != (longlong *)0x0) {
          (**(code **)(*local_68[0] + 0x10))();
        }
        if ((*(byte *)((longlong)param_2 + 0xc) & 0xfe) != 2) break;
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != lVar4);
    plVar2 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_50)(plStack_50);
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d6884 FUN_1491d6884 body=72 status=ok
// SIG undefined FUN_1491d6884(void)

void FUN_1491d6884(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined1 *)(param_1 + 0xc) = 2;
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x18) = (int)param_2[1];
  return;
}



// FUNCTION 1491d68cc FUN_1491d68cc body=442 status=ok
// SIG undefined FUN_1491d68cc(void)

undefined8 * FUN_1491d68cc(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined5 local_78;
  undefined3 uStack_73;
  undefined4 local_70;
  undefined1 uStack_6c;
  longlong *local_68 [2];
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a5dc74(&local_78);
  *param_2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 0x18);
  plVar2 = (longlong *)CONCAT35(uStack_73,local_78);
  param_2[2] = plVar2;
  if (plVar2 == (longlong *)0x0) {
    *(undefined4 *)(param_2 + 3) = local_70;
  }
  else {
    (**(code **)(*plVar2 + 8))(plVar2);
    *(undefined4 *)(param_2 + 3) = local_70;
    if ((longlong *)CONCAT35(uStack_73,local_78) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT35(uStack_73,local_78) + 0x10))();
    }
  }
  FUN_144a5dc74(&local_78);
  *(undefined1 *)((longlong)param_2 + 0xc) = 2;
  plVar3 = (longlong *)CONCAT35(uStack_73,local_78);
  if (plVar2 != plVar3) {
    param_2[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    plVar3 = (longlong *)CONCAT35(uStack_73,local_78);
  }
  *(undefined4 *)(param_2 + 3) = local_70;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar4 = (longlong)*(int *)(param_1 + 0x10) * 0x20 + lVar5;
    do {
      plVar2 = (longlong *)FUN_1491d39be(lVar5,&local_58);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_78,param_3,param_4);
        *(ulonglong *)((longlong)param_2 + 5) = CONCAT17(uStack_6c,CONCAT43(local_70,uStack_73));
        *param_2 = CONCAT35(uStack_73,local_78);
        FUN_140008f88(param_2 + 2,local_68);
        if (local_68[0] != (longlong *)0x0) {
          (**(code **)(*local_68[0] + 0x10))();
        }
        if ((*(byte *)((longlong)param_2 + 0xc) & 0xfe) == 2) break;
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != lVar4);
    plVar2 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_50)(plStack_50);
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
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d6a88 FUN_1491d6a88 body=656 status=ok
// SIG undefined FUN_1491d6a88(void)

undefined8 * FUN_1491d6a88(longlong param_1,undefined8 *param_2,longlong param_3)

{
  void *_Src;
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined1 auStack_a8 [40];
  undefined2 *local_80;
  int local_78;
  longlong local_70 [2];
  longlong *local_60;
  int local_58;
  longlong *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_144a5dc74(&local_50);
  plVar7 = local_50;
  *param_2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 0x18);
  param_2[2] = local_50;
  if (local_50 == (longlong *)0x0) {
    *(int *)(param_2 + 3) = local_48;
  }
  else {
    (**(code **)(*local_50 + 8))(local_50);
    *(int *)(param_2 + 3) = local_48;
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  FUN_144a5dc74(&local_50);
  plVar1 = local_50;
  *(undefined1 *)((longlong)param_2 + 0xc) = 2;
  plVar5 = plVar7;
  if (plVar7 != local_50) {
    param_2[2] = local_50;
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 8))(local_50);
    }
    plVar5 = plVar1;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  *(int *)(param_2 + 3) = local_48;
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))(local_50);
  }
  bVar2 = *(byte *)(param_1 + 8);
  if ((*(byte *)(param_3 + 0x10) & ~bVar2) != 0) {
    if (DAT_14cc079b0 == 0) {
      uVar3 = FUN_1408c25db();
      DAT_14cc079b0 = FUN_14171c317(FUN_141906a4d,uVar3,L"ERigElementType");
      bVar2 = *(byte *)(param_1 + 8);
    }
    FUN_1406f1d90(DAT_14cc079b0,&local_60,bVar2);
    puVar4 = (undefined8 *)FUN_1447a1f4a(&local_60);
    local_50 = (longlong *)0x0;
    local_48 = *(int *)(puVar4 + 1);
    lVar6 = (longlong)local_48;
    _Src = (void *)*puVar4;
    if (lVar6 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,_Src,lVar6 * 2);
    }
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
    plVar7 = (longlong *)&DAT_149dfb77a;
    if (local_48 != 0) {
      plVar7 = local_50;
    }
    FUN_14919e8cc((byte *)(param_3 + 0x10),&local_80);
    puVar8 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar8 = local_80;
    }
    FUN_140002266(local_70,L"Element \'%s\' is not of the expected type (%s).",puVar8,plVar7);
    FUN_140233b1a(&local_60,local_70);
    *(undefined1 *)((longlong)param_2 + 0xc) = 1;
    if (plVar5 != local_60) {
      param_2[2] = local_60;
      if (local_60 != (longlong *)0x0) {
        (**(code **)(*local_60 + 8))();
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    *(int *)(param_2 + 3) = local_58;
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491d6d19 FUN_1491d6d19 body=55 status=ok
// SIG undefined FUN_1491d6d19(void)

void FUN_1491d6d19(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc079b0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc079b0 = FUN_14171c317(FUN_141906a4d,uVar1,L"ERigElementType");
  }
  return;
}



// FUNCTION 1491d6d50 FUN_1491d6d50 body=546 status=ok
// SIG undefined FUN_1491d6d50(void)

undefined8 *
FUN_1491d6d50(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_b8 [40];
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  longlong local_70 [2];
  undefined8 local_60;
  undefined4 local_58;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144a5dc74(&local_50);
  plVar1 = local_50;
  *param_2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 0x18);
  param_2[2] = local_50;
  if (local_50 == (longlong *)0x0) {
    *(undefined4 *)(param_2 + 3) = local_48;
  }
  else {
    (**(code **)(*local_50 + 8))(local_50);
    *(undefined4 *)(param_2 + 3) = local_48;
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  FUN_144a5dc74(&local_50);
  plVar2 = local_50;
  *(undefined1 *)((longlong)param_2 + 0xc) = 2;
  plVar4 = plVar1;
  if (plVar1 != local_50) {
    param_2[2] = local_50;
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 8))(local_50);
    }
    plVar4 = plVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_2 + 3) = local_48;
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))(local_50);
  }
  local_58 = *(undefined4 *)(param_3 + 0x18);
  local_60 = *(undefined8 *)(param_3 + 0x10);
  cVar3 = FUN_1491879ee(*param_4,&local_60,*(undefined8 *)(param_1 + 8));
  if (cVar3 == '\0') {
    FUN_1400021e4(param_1 + 8,&local_80);
    puVar5 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar5 = local_80;
    }
    FUN_14919e8cc((undefined8 *)(param_3 + 0x10),&local_90);
    puVar6 = &DAT_149dfb77a;
    if (local_88 != 0) {
      puVar6 = local_90;
    }
    FUN_140002266(local_70,L"Element \'%s\' does not contain tag \'%s\'.",puVar6,puVar5);
    FUN_140233b1a(&local_50,local_70);
    *(undefined1 *)((longlong)param_2 + 0xc) = 1;
    if (plVar4 != local_50) {
      param_2[2] = local_50;
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 8))();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    *(undefined4 *)(param_2 + 3) = local_48;
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491d6f74 FUN_1491d6f74 body=890 status=ok
// SIG undefined FUN_1491d6f74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1491d6f74(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_a8 [40];
  undefined2 *local_80;
  int local_78;
  longlong local_70 [2];
  longlong *local_60;
  undefined4 local_58;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_144a5dc74(&local_50);
  plVar2 = local_50;
  *param_2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 0x18);
  param_2[2] = local_50;
  if (local_50 == (longlong *)0x0) {
    *(undefined4 *)(param_2 + 3) = local_48;
  }
  else {
    (**(code **)(*local_50 + 8))(local_50);
    *(undefined4 *)(param_2 + 3) = local_48;
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  puVar10 = param_2 + 3;
  FUN_144a5dc74(&local_50);
  plVar3 = local_50;
  *(undefined1 *)((longlong)param_2 + 0xc) = 2;
  plVar8 = plVar2;
  if (plVar2 != local_50) {
    param_2[2] = local_50;
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 8))(local_50);
    }
    plVar8 = plVar3;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)puVar10 = local_48;
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))(local_50);
  }
  FUN_144a5dc74(&local_50);
  lVar5 = FUN_1491d36c0(param_4,&local_50);
  if ((lVar5 == 0) || (lVar5 = FUN_1491d6456(param_4,lVar5,&local_50), lVar5 == 0)) {
    *(undefined1 *)((longlong)param_2 + 0xc) = 1;
    if (plVar8 != local_50) {
      param_2[2] = local_50;
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 8))();
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    *(undefined4 *)puVar10 = local_48;
    goto LAB_1491d707b;
  }
  if (lVar5 == param_3) {
    FUN_14919e8cc(param_3 + 0x10,&local_80);
    puVar9 = local_80;
    if (local_78 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    pwVar7 = L"Target \'%s\' is already used for the primary.";
  }
  else {
    if ((SBORROW1('\0',*(char *)(lVar5 + 0x10))) &&
       (lVar6 = FUN_140813120(extraout_XMM0_Da,lVar5), lVar6 != 0)) {
      bVar1 = *(byte *)(lVar6 + 0x10);
      if ((((0x20 < (ulonglong)bVar1) || ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) &&
          (bVar1 != 0x80)) || (lVar5 = lVar6, lVar6 != param_3)) goto LAB_1491d713e;
    }
    else {
LAB_1491d713e:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc07738) && (FUN_144b3d300(&DAT_14cc07738), DAT_14cc07738 == -1))
      {
        _DAT_14cc07708 = 0;
        _DAT_14cc07710 = 0;
        _DAT_14cc076e8 = 0;
        uRam000000014cc076f0 = 0;
        _DAT_14cc07714 = 0xffffffff00000080;
        _DAT_14cc0771c = 0;
        DAT_14cc07728 = 0;
        _DAT_14cc07730 = 0;
        atexit(FUN_14449c3bd);
        _Init_thread_footer(&DAT_14cc07738);
      }
      cVar4 = FUN_1491d72f0(*param_4,param_3,lVar5,&DAT_14cc076e8);
      if (cVar4 != '\0') goto LAB_1491d707b;
    }
    FUN_14919e8cc(param_3 + 0x10,&local_80);
    puVar9 = local_80;
    if (local_78 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    pwVar7 = L"Target \'%s\' is not a child of the primary.";
  }
  FUN_140002266(local_70,pwVar7,puVar9);
  FUN_140233b1a(&local_60,local_70);
  *(undefined1 *)((longlong)param_2 + 0xc) = 1;
  if (plVar8 != local_60) {
    param_2[2] = local_60;
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 8))();
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  *(undefined4 *)puVar10 = local_58;
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1491d707b:
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491d72f0 FUN_1491d72f0 body=120 status=ok
// SIG undefined FUN_1491d72f0(void)

void FUN_1491d72f0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  *(undefined4 *)(param_1 + 0x468) = 0;
  if (*(int *)(param_1 + 0x46c) < 0) {
    FUN_14475e67c(param_1 + 0x460,0);
  }
  if (*(int *)(param_4 + 8) != *(int *)(param_4 + 0x34)) {
    FUN_1403ed7b2(param_1 + 0x460,*(undefined4 *)(param_1 + 0xc0),1);
  }
  FUN_1491df222(param_1,param_2,param_3,param_4,1);
  return;
}



// FUNCTION 1491d73b0 FUN_1491d73b0 body=254 status=ok
// SIG undefined FUN_1491d73b0(void)

undefined2 * FUN_1491d73b0(undefined2 *param_1)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8 [4];
  longlong local_b8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = 0x900;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  memset(param_1 + 0x12,0,0x108);
  param_1[0x96] = 1;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xc5) = 0;
  *(undefined8 *)(param_1 + 0xc9) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  param_1[0xd8] = 3;
  FUN_145df188e(local_d8);
  *(undefined8 *)(param_1 + 0x98) = local_d8[0];
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d74b0 FUN_1491d74b0 body=486 status=ok
// SIG undefined FUN_1491d74b0(void)

void FUN_1491d74b0(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  
  switch(*(undefined1 *)(param_1 + 1)) {
  case 1:
  case 2:
    FUN_1491f6dd8(param_1 + 0x10,1);
    puVar1 = *(undefined1 **)(param_1 + 0x10);
    *puVar1 = param_2;
    puVar1[1] = param_2;
    break;
  case 3:
    FUN_1491f6dd8(param_1 + 0x10,2);
    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined1 *)(lVar3 + 2) = param_2;
    *(undefined1 *)(lVar3 + 3) = param_2;
    puVar4 = *(undefined2 **)(param_1 + 0x10);
    uVar2 = *(undefined2 *)(lVar3 + 2);
    goto LAB_1491d7621;
  case 4:
    FUN_1491f6dd8(param_1 + 0x10,3);
    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined1 *)(lVar3 + 4) = param_2;
    *(undefined1 *)(lVar3 + 5) = param_2;
    goto LAB_1491d7611;
  case 5:
    FUN_1491f6dd8(param_1 + 0x10,3);
    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined1 *)(lVar3 + 4) = param_4;
    *(undefined1 *)(lVar3 + 5) = param_4;
    goto LAB_1491d7611;
  case 6:
    FUN_1491f6dd8(param_1 + 0x10,3);
    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined1 *)(lVar3 + 4) = param_3;
    *(undefined1 *)(lVar3 + 5) = param_3;
LAB_1491d7611:
    uVar2 = *(undefined2 *)(lVar3 + 4);
    *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 2) = uVar2;
    puVar4 = *(undefined2 **)(param_1 + 0x10);
LAB_1491d7621:
    *puVar4 = uVar2;
    break;
  case 7:
  case 9:
    FUN_1491f6dd8(param_1 + 0x10,9);
    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined1 *)(lVar3 + 4) = param_2;
    *(undefined1 *)(lVar3 + 5) = param_2;
    uVar2 = *(undefined2 *)(lVar3 + 4);
    *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 2) = uVar2;
    **(undefined2 **)(param_1 + 0x10) = uVar2;
    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined1 *)(lVar3 + 10) = param_3;
    *(undefined1 *)(lVar3 + 0xb) = param_3;
    uVar2 = *(undefined2 *)(lVar3 + 10);
    *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 6) = uVar2;
    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined1 *)(lVar3 + 0x10) = param_4;
    *(undefined1 *)(lVar3 + 0x11) = param_4;
    uVar2 = *(undefined2 *)(lVar3 + 0x10);
    *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 0xe) = uVar2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 0xc) = uVar2;
    break;
  case 8:
    FUN_1491f6dd8(param_1 + 0x10,6);
    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined1 *)(lVar3 + 4) = param_2;
    *(undefined1 *)(lVar3 + 5) = param_2;
    uVar2 = *(undefined2 *)(lVar3 + 4);
    *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 2) = uVar2;
    **(undefined2 **)(param_1 + 0x10) = uVar2;
    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined1 *)(lVar3 + 10) = param_3;
    *(undefined1 *)(lVar3 + 0xb) = param_3;
    uVar2 = *(undefined2 *)(lVar3 + 10);
    *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar2;
    *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 6) = uVar2;
    break;
  case 10:
    FUN_1491f6dd8(param_1 + 0x10,1);
    puVar1 = *(undefined1 **)(param_1 + 0x10);
    *puVar1 = param_4;
    puVar1[1] = param_4;
    break;
  default:
    if (*(int *)(param_1 + 0x1c) < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      FUN_149210760(param_1 + 0x10,0);
      return;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1491d7696 FUN_1491d7696 body=413 status=ok
// SIG undefined FUN_1491d7696(void)

longlong FUN_1491d7696(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
                      undefined8 *param_5,undefined8 *param_6,void *param_7,undefined8 *param_8,
                      undefined8 *param_9,undefined4 *param_10)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_3c8 [32];
  undefined **local_3a8;
  undefined8 local_3a0;
  undefined1 local_390;
  undefined8 local_384;
  undefined4 local_37c;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368 [12];
  undefined1 local_308 [128];
  char local_288;
  undefined1 local_284 [132];
  undefined1 local_200;
  undefined8 local_ec;
  undefined8 local_d8 [12];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  FUN_1491d7834(&local_3a8);
  local_3a0 = *param_2;
  local_37c = 0xffffffff;
  local_384 = *param_4;
  local_370 = 0xffffffff;
  local_378 = *param_5;
  puVar3 = local_368;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_6;
    param_6 = param_6 + 1;
    puVar3 = puVar3 + 1;
  }
  local_390 = (char)param_3;
  memcpy(local_308,param_7,0x84);
  memset(local_284,0,0x84);
  local_ec = *param_8;
  puVar3 = local_d8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_9;
    param_9 = param_9 + 1;
    puVar3 = puVar3 + 1;
  }
  local_78 = *param_10;
  uStack_74 = param_10[1];
  uStack_70 = param_10[2];
  uStack_6c = param_10[3];
  if (local_288 == '\0') {
    FUN_14919dde6(local_308,&DAT_14c846480,param_3,local_200);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14920b76e(param_1,iVar1);
  }
  FUN_149203b20(*param_1 + (longlong)iVar1 * 0x360,&local_3a8);
  lVar2 = *param_1;
  local_3a8 = &PTR_FUN_14bb89f40;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return lVar2 + (longlong)iVar1 * 0x360;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d7834 FUN_1491d7834 body=251 status=ok
// SIG undefined FUN_1491d7834(void)

undefined8 * FUN_1491d7834(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *param_1 = &PTR_FUN_14bb89f40;
  *(undefined1 *)(param_1 + 3) = 7;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memset(param_1 + 0x14,0,0x10a);
  *(undefined4 *)((longlong)param_1 + 0x1aa) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1ae) = 1;
  memset(param_1 + 0x36,0,0x108);
  *(undefined2 *)(param_1 + 0x57) = 0x101;
  FUN_1446f470e((longlong)param_1 + 700,L"Gizmo",1);
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x5a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x66] = 0x3f800000;
  param_1[0x67] = 0x3f80000000000000;
  param_1[0x6b] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  return param_1;
}



// FUNCTION 1491d7930 FUN_1491d7930 body=104 status=ok
// SIG undefined FUN_1491d7930(void)

longlong FUN_1491d7930(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = *param_2;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14920b802(param_1,iVar1);
  }
  lVar3 = *param_1;
  lVar4 = (longlong)iVar1 * 0x20;
  *(undefined8 *)(lVar3 + 8 + lVar4) = uVar2;
  *(undefined4 *)(lVar3 + 0x10 + lVar4) = 0xffffffff;
  *(undefined ***)(lVar3 + lVar4) = &PTR_FUN_14bb8a230;
  *(undefined4 *)(lVar3 + 0x18 + lVar4) = param_3;
  return lVar4 + *param_1;
}



// FUNCTION 1491d7c54 FUN_1491d7c54 body=781 status=ok
// SIG undefined FUN_1491d7c54(void)

void FUN_1491d7c54(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  undefined4 local_88;
  ulonglong local_80;
  undefined4 local_78;
  ulonglong *local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 *local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != (longlong *)0x0) {
    uVar3 = (ulonglong)*(byte *)(param_2 + 2);
    if (uVar3 < 0x21) {
      if ((0x100010016U >> (uVar3 & 0x3f) & 1) != 0) goto LAB_1491d7ca9;
      if (uVar3 != 8) goto LAB_1491d7f52;
      iVar1 = *(int *)((longlong)param_2 + 0x4c);
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x200))) &&
         ((longlong)iVar1 * 4 + *(longlong *)(param_1 + 0x1f8) == param_2[10])) goto LAB_1491d7ec2;
      local_80 = local_80 & 0xffffffff00000000;
      FUN_1466cd7fe((longlong *)(param_1 + 0x1f8),&local_60,1);
      puVar4 = &local_60;
      if (local_50 != (undefined8 *)0x0) {
        puVar4 = local_50;
      }
      *(undefined4 *)((longlong)param_2 + 0x4c) = *(undefined4 *)puVar4;
      if (local_50 == (undefined8 *)0x0) goto LAB_1491d7e52;
LAB_1491d7e4d:
      FUN_1400020a8();
    }
    else {
LAB_1491d7f52:
      if (*(byte *)(param_2 + 2) == 0x80) {
LAB_1491d7ca9:
        iVar1 = (int)param_2[0xd];
        if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x1c0))) &&
           ((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x1b8) == param_2[0xe]))
        goto LAB_1491d7ec2;
        uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
        FUN_141906ab0((longlong *)(param_1 + 0x1b8),&local_60,uVar2);
        local_90 = local_90 & 0xffffffffffffff00;
        uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
        FUN_141906c0e(param_1 + 0x1d8,&local_80,uVar2,&local_90);
        puVar4 = local_50;
        if (local_50 == (undefined8 *)0x0) {
          puVar4 = &local_60;
        }
        *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)puVar4;
        *(undefined4 *)(param_2 + 9) = *(undefined4 *)((longlong)puVar4 + 4);
        *(undefined4 *)(param_2 + 0xf) = *(undefined4 *)(puVar4 + 1);
        *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)((longlong)puVar4 + 0xc);
        puVar5 = local_70;
        if (local_70 == (ulonglong *)0x0) {
          puVar5 = &local_80;
        }
        *(int *)(param_2 + 0x17) = (int)*puVar5;
        *(undefined4 *)(param_2 + 0x13) = *(undefined4 *)((longlong)puVar5 + 4);
        *(int *)(param_2 + 0x15) = (int)puVar5[1];
        *(undefined4 *)(param_2 + 0x11) = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((char)param_2[2] == '\x04') {
          puVar4 = &local_60;
          if (local_50 != (undefined8 *)0x0) {
            puVar4 = local_50;
          }
          *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(puVar4 + 2);
          *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)((longlong)puVar4 + 0x14);
          *(undefined4 *)(param_2 + 0x86) = *(undefined4 *)(puVar4 + 3);
          *(undefined4 *)(param_2 + 0x82) = *(undefined4 *)((longlong)puVar4 + 0x1c);
          puVar5 = &local_80;
          if (local_70 != (ulonglong *)0x0) {
            puVar5 = local_70;
          }
          *(int *)(param_2 + 0x8e) = (int)puVar5[2];
          *(undefined4 *)(param_2 + 0x8a) = *(undefined4 *)((longlong)puVar5 + 0x14);
          *(int *)(param_2 + 0x8c) = (int)puVar5[3];
          *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)((longlong)puVar5 + 0x1c);
          *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(puVar4 + 4);
          *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)((longlong)puVar4 + 0x24);
          *(undefined4 *)(param_2 + 0x96) = *(undefined4 *)(puVar4 + 5);
          *(undefined4 *)(param_2 + 0x92) = *(undefined4 *)((longlong)puVar4 + 0x2c);
          *(int *)(param_2 + 0x9e) = (int)puVar5[4];
          *(undefined4 *)(param_2 + 0x9a) = *(undefined4 *)((longlong)puVar5 + 0x24);
          *(int *)(param_2 + 0x9c) = (int)puVar5[5];
          *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)((longlong)puVar5 + 0x2c);
        }
        if (local_70 != (ulonglong *)0x0) {
          FUN_1400020a8(local_70);
        }
        if (local_50 != (undefined8 *)0x0) goto LAB_1491d7e4d;
      }
    }
  }
LAB_1491d7e52:
  if (param_3 == '\0') {
    local_60 = *(undefined8 *)(param_1 + 0x1f8);
    local_58 = *(undefined4 *)(param_1 + 0x200);
    local_80 = *(ulonglong *)(param_1 + 0x1d8);
    local_78 = *(undefined4 *)(param_1 + 0x1e0);
    local_90 = *(ulonglong *)(param_1 + 0x1b8);
    local_88 = *(undefined4 *)(param_1 + 0x1c0);
    (**(code **)(*param_2 + 0x48))(param_2);
  }
  else {
    FUN_140e4aa06(param_1);
  }
  FUN_140e4a7b6(param_1 + 0x218);
LAB_1491d7ec2:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491d7f62 FUN_1491d7f62 body=44 status=ok
// SIG undefined FUN_1491d7f62(void)

void FUN_1491d7f62(longlong param_1)

{
  if (-1 < *(int *)(param_1 + 0x10c)) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  FUN_14481578e(param_1 + 0x100,0);
  return;
}



// FUNCTION 1491d7f8e FUN_1491d7f8e body=404 status=ok
// SIG undefined FUN_1491d7f8e(void)

void FUN_1491d7f8e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_14920ef3a(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1491ca918(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar3 = 0;
  local_50 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_2[5];
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_2;
  if ((iStack_44 != iVar3) || (local_50 != plVar1)) {
    do {
      do {
        local_58 = *local_80 + (longlong)iStack_64 * 0x20;
        local_50 = (longlong *)((longlong)iStack_64 * 0x20 + *local_80 + 0xc);
        FUN_1491ca586(param_1,local_34,&local_58,0);
        local_68 = local_68 & ~local_78._4_4_;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar3);
    } while ((local_70 != plVar1) || (local_80 != param_2));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491d8124 FUN_1491d8124 body=522 status=ok
// SIG undefined FUN_1491d8124(void)

void FUN_1491d8124(undefined1 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = FUN_144a78877(param_1[1],*param_1);
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  uVar3 = FUN_144a78877(uVar3,((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4));
  uVar3 = FUN_144a78877(uVar3,param_1[0xc]);
  uVar3 = FUN_144a78877(uVar3,param_1[0xd]);
  uVar3 = FUN_144a78877(uVar3,param_1[0x20]);
  uVar3 = FUN_144a78877(uVar3,param_1[300]);
  uVar3 = FUN_144a78877(uVar3,param_1[0x12d]);
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  uVar3 = FUN_144a78877(uVar3,((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4));
  uVar4 = FUN_1448eb174(param_1 + 0x138,0x10,0);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  uVar5 = ((uint)(*(ulonglong *)(param_1 + 0x150) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)(param_1 + 0x150) >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar3 = FUN_144a78877(uVar3,uVar5 >> 0x10 ^ uVar5);
  iVar1 = *(int *)(param_1 + 0x180);
  iVar6 = iVar1 * 0x11 + 3;
  if ((longlong)iVar1 != 0) {
    lVar8 = 0;
    do {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 4 + lVar8);
      uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar7 = (uint)uVar2 & 0xffff;
      iVar6 = (uint)*(byte *)(*(longlong *)(param_1 + 0x178) + lVar8) + iVar6 +
              (((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
               (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4)) * 10;
      lVar8 = lVar8 + 0xc;
    } while ((longlong)iVar1 * 0xc != lVar8);
  }
  uVar3 = FUN_144a78877(uVar3,iVar6);
  uVar3 = FUN_144a78877(uVar3,param_1[0x198]);
  uVar3 = FUN_144a78877(uVar3,param_1[0x199]);
  uVar3 = FUN_144a78877(uVar3,*(undefined4 *)(param_1 + 0x1a8));
  iVar1 = *(int *)(param_1 + 0x1a8);
  if ((longlong)iVar1 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x1a0);
    lVar9 = 0;
    do {
      uVar3 = FUN_144a78877(uVar3,*(undefined1 *)(lVar8 + lVar9));
      lVar9 = lVar9 + 1;
    } while (iVar1 != lVar9);
  }
  FUN_144a78877(uVar3,param_1[0x1b0]);
  return;
}



// FUNCTION 1491d832e FUN_1491d832e body=96 status=ok
// SIG undefined FUN_1491d832e(void)

void FUN_1491d832e(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x20);
  if (uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar5 = uVar4 << 5;
    do {
      uVar1 = FUN_1491d63fe(lVar3);
      uVar2 = FUN_144a78877(uVar4 & 0xffffffff,uVar1);
      uVar4 = (ulonglong)uVar2;
      lVar3 = lVar3 + 0x20;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  uVar1 = FUN_144a78877(*(undefined1 *)(param_1 + 0x10),uVar4);
  FUN_144a78877(uVar1,*(undefined1 *)(param_1 + 0x11));
  return;
}



// FUNCTION 1491d838e FUN_1491d838e body=8 status=ok
// SIG undefined FUN_1491d838e(void)

longlong FUN_1491d838e(longlong param_1)

{
  return param_1 + 0x400;
}



// FUNCTION 1491d8396 FUN_1491d8396 body=8 status=ok
// SIG undefined FUN_1491d8396(void)

longlong FUN_1491d8396(longlong param_1)

{
  return param_1 + 0x440;
}



// FUNCTION 1491d839e FUN_1491d839e body=8 status=ok
// SIG undefined FUN_1491d839e(void)

longlong FUN_1491d839e(longlong param_1)

{
  return param_1 + 0x88;
}



// FUNCTION 1491d83a6 FUN_1491d83a6 body=8 status=ok
// SIG undefined FUN_1491d83a6(void)

longlong FUN_1491d83a6(longlong param_1)

{
  return param_1 + 0x4c0;
}



// FUNCTION 1491d83ae FUN_1491d83ae body=5 status=ok
// SIG undefined FUN_1491d83ae(void)

longlong FUN_1491d83ae(longlong param_1)

{
  return param_1 + 0x48;
}



// FUNCTION 1491d83b4 FUN_1491d83b4 body=69 status=ok
// SIG undefined FUN_1491d83b4(void)

void FUN_1491d83b4(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
    puVar1 = &DAT_14bb83710;
    if (*(undefined1 **)(param_2 + 0x18) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(param_2 + 0x18);
    }
    **(undefined1 **)(param_1 + 0x18) = *puVar1;
  }
  if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
    puVar1 = &DAT_14bb83710;
    if (*(undefined1 **)(param_2 + 8) != (undefined1 *)0x0) {
      puVar1 = *(undefined1 **)(param_2 + 8);
    }
    **(undefined1 **)(param_1 + 8) = *puVar1;
  }
  return;
}



// FUNCTION 1491d83fa FUN_1491d83fa body=8 status=ok
// SIG undefined FUN_1491d83fa(void)

longlong FUN_1491d83fa(longlong param_1)

{
  return param_1 + 0x480;
}



// FUNCTION 1491d8402 FUN_1491d8402 body=60 status=ok
// SIG undefined FUN_1491d8402(void)

undefined8 FUN_1491d8402(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_140813180();
  if ((((int)uVar2 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar2)) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0x24) != -1);
  }
  return uVar3;
}



// FUNCTION 1491d843e FUN_1491d843e body=445 status=ok
// SIG undefined FUN_1491d843e(void)

/* WARNING: Removing unreachable block (ram,0x0001491d85da) */

longlong * FUN_1491d843e(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [144];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1491952da(param_1,&local_58,1);
  *param_2 = 0;
  param_2[1] = 0;
  if (local_50 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_50);
  }
  if (local_50 != 0) {
    FUN_14920c552(param_2);
    if ((longlong)local_50 != 0) {
      lVar5 = (longlong)local_50 * 0xc;
      lVar4 = local_58;
      do {
        uVar2 = FUN_140813180(param_1,lVar4);
        if (((((int)uVar2 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar2)) ||
            (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar2 * 8), lVar3 == 0
            )) || (!SBORROW1('\0',*(char *)(lVar3 + 0x10)))) {
          lVar3 = 0;
        }
        if (*(int *)(lVar3 + 0x24) == -1) {
          FUN_1491d85fe(lVar3,local_f8,param_1);
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_14920c5ba(param_2,iVar1);
          }
          lVar3 = *param_2;
          lVar6 = (longlong)iVar1 * 0xa0;
          memcpy((void *)(lVar6 + lVar3),local_f8,0x90);
          *(undefined8 *)(lVar3 + 0x90 + lVar6) = 0;
          *(undefined8 *)(lVar3 + 0x90 + lVar6) = local_68;
          local_68 = 0;
          *(undefined4 *)(lVar3 + 0x98 + lVar6) = (undefined4)local_60;
          *(undefined4 *)(lVar3 + 0x9c + lVar6) = local_60._4_4_;
          local_60 = 0;
        }
        lVar4 = lVar4 + 0xc;
        lVar5 = lVar5 + -0xc;
      } while (lVar5 != 0);
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d85fe FUN_1491d85fe body=489 status=ok
// SIG undefined FUN_1491d85fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1491d85fe(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64 [4];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 4;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_108 = param_2 + 0x10;
  uVar1 = CONCAT44(uRam000000014cc07d30,uRam000000014cc07d2c);
  param_2[0x10] = CONCAT44(uRam000000014cc07d28,_DAT_14cc07d24);
  param_2[0x11] = uVar1;
  local_100 = param_2 + 0x12;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *param_2 = *(undefined8 *)(param_1 + 0x14);
  local_118 = (undefined8 *)local_64;
  local_64[0] = 0;
  local_60 = 0;
  local_70 = *(undefined8 *)(param_1 + 0x10);
  local_68 = *(undefined4 *)(param_1 + 0x18);
  FUN_1491861e6(param_3,param_2 + 1,&local_70,DAT_14cc079a0);
  if (((DAT_14c87eb08 + 1U <= (uint)*(ushort *)((longlong)param_2 + 0xe)) ||
      (*(longlong *)((longlong)param_2 + 0xc) == 0)) || (*(char *)(param_2 + 1) == '\0')) {
    local_80 = *(undefined8 *)(param_1 + 0x10);
    local_78 = *(undefined4 *)(param_1 + 0x18);
    FUN_1408130c0(param_3,&local_e8);
    *(undefined4 *)(param_2 + 2) = uStack_e0;
    param_2[1] = CONCAT44(local_e8._4_4_,(undefined4)local_e8);
  }
  FUN_144afced8(param_3,&local_e8,*(undefined4 *)(param_1 + 0x1c),1);
  puVar3 = &local_e8;
  puVar4 = param_2 + 4;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_e8._0_4_ = _DAT_14cc07d24;
  local_e8._4_4_ = uRam000000014cc07d28;
  uStack_e0 = uRam000000014cc07d2c;
  uStack_dc = uRam000000014cc07d30;
  local_58 = *(undefined8 *)(param_1 + 0x10);
  local_50 = *(undefined4 *)(param_1 + 0x18);
  local_118 = &local_e8;
  FUN_149183b7c(param_3,&local_f8,&local_58,DAT_14cc07d38);
  *(undefined4 *)local_108 = local_f8;
  *(undefined4 *)((longlong)local_108 + 4) = uStack_f4;
  *(undefined4 *)(local_108 + 1) = uStack_f0;
  *(undefined4 *)((longlong)local_108 + 0xc) = uStack_ec;
  FUN_1491f7d9e(param_1,&local_e8,param_3);
  if (local_100 == &local_e8) {
    if (CONCAT44(local_e8._4_4_,(undefined4)local_e8) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x12) = (undefined4)local_e8;
    *(undefined4 *)((longlong)param_2 + 0x94) = local_e8._4_4_;
    *(undefined4 *)(param_2 + 0x13) = uStack_e0;
    *(undefined4 *)((longlong)param_2 + 0x9c) = uStack_dc;
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d87e8 FUN_1491d87e8 body=852 status=ok
// SIG undefined FUN_1491d87e8(void)

longlong * FUN_1491d87e8(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined1 local_260;
  ulonglong local_258;
  longlong local_250;
  undefined1 local_248;
  undefined1 local_240;
  longlong *local_238;
  undefined8 *local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218 [12];
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8 [12];
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108 [12];
  undefined8 local_a8;
  undefined4 local_a0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = *param_3;
  uVar3 = 0;
  if ((longlong)(int)param_3[1] != 0) {
    lVar6 = (longlong)(int)param_3[1] * 0xa0;
    uVar9 = lVar5 + 0x80;
    local_238 = param_3;
    do {
      local_128 = CONCAT31(local_128._1_3_,0x80);
      uStack_124 = (undefined4)*(undefined8 *)(uVar9 - 0x80);
      uStack_120 = (undefined4)((ulonglong)*(undefined8 *)(uVar9 - 0x80) >> 0x20);
      uVar2 = FUN_140813180(param_1,&local_128);
      if (((((int)uVar2 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar2)) ||
          (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar2 * 8), lVar5 == 0))
         || (!SBORROW1('\0',*(char *)(lVar5 + 0x10)))) {
        uVar4 = FUN_14449bdee(param_1,1);
        local_250 = uVar9 + 0x10;
        puVar7 = (undefined8 *)(uVar9 - 0x60);
        puVar8 = local_218;
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        local_220 = *(undefined4 *)(uVar9 - 0x70);
        local_228 = *(undefined8 *)(uVar9 - 0x78);
        local_240 = 0;
        local_248 = 0;
        local_260 = 0;
        local_268 = local_218;
        local_258 = uVar9;
        FUN_1491d8f5c(uVar4,&local_a8,*(undefined8 *)(uVar9 - 0x80),&local_228);
        uStack_120 = local_a0;
        local_128 = (undefined4)local_a8;
        uStack_124 = (undefined4)((ulonglong)local_a8 >> 0x20);
      }
      else {
        uVar4 = FUN_14449bdee(param_1,1);
        local_138 = *(undefined8 *)(uVar9 - 0x78);
        local_130 = *(undefined4 *)(uVar9 - 0x70);
        local_148 = CONCAT44(uStack_124,local_128);
        local_140 = uStack_120;
        FUN_1491d8b3e(uVar4,&local_148,&local_138,1);
        FUN_1491d8d1a(lVar5,uVar9,param_1);
        FUN_1491d8e54(lVar5,uVar9 + 0x10,param_1);
        local_230 = (undefined8 *)(uVar9 - 0x60);
        puVar7 = local_230;
        puVar8 = local_108;
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        local_110 = uStack_120;
        local_118 = CONCAT44(uStack_124,local_128);
        puVar7 = local_108;
        puVar8 = &local_a8;
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        uVar3 = FUN_140813180(param_1,&local_118);
        local_258 = local_258 & 0xffffffffffffff00;
        local_260 = 0;
        local_268._0_1_ = 1;
        FUN_140122cc6(param_1,uVar3,&local_a8,1);
        puVar7 = local_230;
        puVar8 = local_1a8;
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        local_1b0 = uStack_120;
        local_1b8 = CONCAT44(uStack_124,local_128);
        puVar7 = local_1a8;
        puVar8 = &local_a8;
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        uVar3 = FUN_140813180(param_1,&local_1b8);
        local_258 = local_258 & 0xffffffffffffff00;
        local_260 = 0;
        local_268 = (undefined8 *)CONCAT71(local_268._1_7_,1);
        FUN_140122cc6(param_1,uVar3,&local_a8,0);
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149192788(param_2,iVar1);
      }
      lVar5 = *param_2;
      *(undefined4 *)(lVar5 + 8 + (longlong)iVar1 * 0xc) = uStack_120;
      *(ulonglong *)(lVar5 + (longlong)iVar1 * 0xc) = CONCAT44(uStack_124,local_128);
      uVar9 = uVar9 + 0xa0;
      lVar6 = lVar6 + -0xa0;
    } while (lVar6 != 0);
    uVar3 = (undefined4)local_238[1];
    lVar5 = *local_238;
    param_3 = local_238;
  }
  FUN_149197183(lVar5,uVar3);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d8b3e FUN_1491d8b3e body=468 status=ok
// SIG undefined FUN_1491d8b3e(void)

undefined8 FUN_1491d8b3e(longlong param_1,char *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_14576d4b4();
  if (cVar2 != '\0') {
    lVar7 = *(longlong *)(param_1 + 0x20);
    if (lVar7 == 0) {
LAB_1491d8bbd:
      lVar7 = 0;
    }
    else {
      lVar4 = FUN_141095a0a();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) != lVar4 + 0x30)) goto LAB_1491d8bbd;
    }
    uVar3 = FUN_140813180(lVar7,param_2);
    if ((((int)uVar3 < 0) || (*(int *)(lVar7 + 0xc0) <= (int)uVar3)) ||
       (lVar4 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + (ulonglong)uVar3 * 8), lVar4 == 0)) {
      FUN_14919e8cc(param_2,&local_48);
      puVar6 = local_48;
      if (local_40 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      FUN_1491f17ec(param_1,L"Cannot Set Parent, Child \'%s\' not found.",puVar6);
    }
    else {
      uVar3 = FUN_140813180(lVar7,param_3);
      if (((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar7 + 0xc0))) &&
         (lVar1 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + (ulonglong)uVar3 * 8), lVar1 != 0)) {
        local_70 = 1;
        local_78 = param_4;
        FUN_1491dc426(param_1,lVar4,lVar1,0x3f800000);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
      }
      if (SBORROW1('\0',*param_2)) {
        local_50 = *(undefined4 *)(param_3 + 1);
        local_58 = *param_3;
        local_68 = *(undefined8 *)param_2;
        local_60 = *(undefined4 *)(param_2 + 8);
        FUN_14918f172(lVar7,&local_68,DAT_14cc079a0);
        FUN_140ad4746(lVar7,0x12,lVar4);
        uVar5 = 1;
        goto LAB_1491d8b70;
      }
      FUN_14919e8cc(param_3,&local_48);
      puVar6 = local_48;
      if (local_40 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      FUN_1491f1848(param_1,L"Cannot Set Parent, Parent \'%s\' not found.",puVar6);
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar5 = 0;
LAB_1491d8b70:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1491d8d1a FUN_1491d8d1a body=312 status=ok
// SIG undefined FUN_1491d8d1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1491d8d1a(longlong param_1,float *param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 local_78;
  undefined4 local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = &local_48;
  local_48 = _DAT_14cc07d24;
  uStack_44 = uRam000000014cc07d28;
  uStack_40 = uRam000000014cc07d2c;
  uStack_3c = uRam000000014cc07d30;
  local_58 = *(undefined8 *)(param_1 + 0x10);
  local_50 = *(undefined4 *)(param_1 + 0x18);
  FUN_149183b7c(param_3,&local_38,&local_58,DAT_14cc07d38);
  if ((((0.0001 <= ABS(local_38 - *param_2)) || (0.0001 <= ABS(local_34 - param_2[1]))) ||
      (0.0001 <= ABS(local_30 - param_2[2]))) || (0.0001 <= ABS(local_2c - param_2[3]))) {
    local_68 = *param_2;
    fStack_64 = param_2[1];
    fStack_60 = param_2[2];
    fStack_5c = param_2[3];
    local_78 = *(undefined8 *)(param_1 + 0x10);
    local_70 = *(undefined4 *)(param_1 + 0x18);
    FUN_14918d846(param_3,&local_78,DAT_14cc07d38);
    FUN_140813180(param_3,(undefined8 *)(param_1 + 0x10));
    FUN_140ad4746(param_3,0x10,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d8e54 FUN_1491d8e54 body=263 status=ok
// SIG undefined FUN_1491d8e54(void)

void FUN_1491d8e54(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_2 + 1) < 2) {
    local_30 = 0;
  }
  else {
    FUN_1446f470e(&local_30,*param_2,1);
  }
  local_48 = *(undefined8 *)(param_1 + 0x10);
  local_40 = *(undefined4 *)(param_1 + 0x18);
  local_68 = 0;
  FUN_149184980(param_3,&local_38,&local_48,DAT_14cc07d40);
  if ((local_38 != (int)local_30) || (local_34 != local_30._4_4_)) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = (undefined2 *)*param_2;
    }
    FUN_1446f470e(&local_50,puVar1,1);
    local_60 = *(undefined8 *)(param_1 + 0x10);
    local_58 = *(undefined4 *)(param_1 + 0x18);
    FUN_14918e288(param_3,&local_60,DAT_14cc07d40,local_50);
    FUN_140ad4746(param_3,0x11,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d8f5c FUN_1491d8f5c body=622 status=ok
// SIG undefined FUN_1491d8f5c(void)

undefined8 *
FUN_1491d8f5c(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,byte param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_79;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = param_3;
  cVar1 = FUN_14576d4b4();
  if (cVar1 == '\0') {
    *(undefined1 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
    goto LAB_1491d8fa3;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_1491d8ffd:
    lVar5 = 0;
  }
  else {
    lVar3 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1491d8ffd;
  }
  uVar6 = 0;
  lVar3 = FUN_1491edd58(param_1,0);
  local_79 = *(undefined1 *)(lVar5 + 0x4c8);
  *(undefined1 *)(lVar5 + 0x4c8) = 0;
  *(undefined1 *)(lVar3 + 0x10) = 0x80;
  FUN_1491ec4cc(param_1,&local_58,&local_50,0x80);
  *(undefined8 *)(lVar3 + 0x14) = local_58;
  uVar2 = FUN_140813180(lVar5,param_4);
  if (-1 < (int)uVar2) {
    if ((int)uVar2 < *(int *)(lVar5 + 0xc0)) {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar2 * 8);
    }
    else {
      uVar6 = 0;
    }
  }
  local_a8 = &local_50;
  FUN_1491ec5ea(param_1,lVar3,uVar6,1);
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8._0_1_ = 1;
  FUN_140122d4e(lVar5,lVar3,param_5,(uint)param_6 * 2);
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = (undefined8 *)CONCAT71(local_a8._1_7_,1);
  FUN_140122d4e(lVar5,lVar3,param_5,(uint)param_6 * 2 + 1);
  FUN_144b3caae(lVar3 + 0x48,lVar3 + 0x68);
  if (*(undefined1 **)(lVar3 + 0xa0) != (undefined1 *)0x0) {
    puVar4 = &DAT_14bb83710;
    if (*(undefined1 **)(lVar3 + 0xc0) != (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(lVar3 + 0xc0);
    }
    **(undefined1 **)(lVar3 + 0xa0) = *puVar4;
  }
  if (*(undefined1 **)(lVar3 + 0x90) != (undefined1 *)0x0) {
    puVar4 = &DAT_14bb83710;
    if (*(undefined1 **)(lVar3 + 0xb0) != (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(lVar3 + 0xb0);
    }
    **(undefined1 **)(lVar3 + 0x90) = *puVar4;
  }
  FUN_1491d8d1a(lVar3,param_7,lVar5);
  FUN_1491d8e54(lVar3,param_8,lVar5);
  local_60 = *(undefined4 *)(param_4 + 1);
  local_68 = *param_4;
  local_78 = *(undefined8 *)(lVar3 + 0x10);
  local_70 = *(undefined4 *)(lVar3 + 0x18);
  FUN_14918f172(lVar5,&local_78,DAT_14cc079a0);
  *(undefined1 *)(lVar5 + 0x4c8) = local_79;
  *param_2 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0x18);
LAB_1491d8fa3:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d91cc FUN_1491d91cc body=431 status=ok
// SIG undefined FUN_1491d91cc(void)

longlong * FUN_1491d91cc(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_149192b12(param_1,&local_58,1);
  *param_2 = 0;
  param_2[1] = 0;
  if (local_50 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_50);
  }
  if (local_50 != 0) {
    FUN_14920c64e(param_2);
    if ((longlong)local_50 != 0) {
      lVar7 = (longlong)local_50 * 0xc;
      lVar5 = local_58;
      do {
        uVar3 = FUN_140813180(param_1,lVar5);
        if (((((int)uVar3 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar3)) ||
            (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar3 * 8), lVar4 == 0
            )) || (*(char *)(lVar4 + 0x10) != '@')) {
          lVar4 = 0;
        }
        if (*(int *)(lVar4 + 0x24) == -1) {
          FUN_1491d937e(lVar4,&local_98,param_1);
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_14920c6a4(param_2,iVar2);
          }
          lVar4 = *param_2;
          lVar6 = (longlong)iVar2 * 0x40;
          *(undefined4 *)(lVar4 + 0x10 + lVar6) = local_88;
          puVar1 = (undefined4 *)(lVar4 + lVar6);
          *puVar1 = local_98;
          puVar1[1] = uStack_94;
          puVar1[2] = uStack_90;
          puVar1[3] = uStack_8c;
          *(undefined8 *)(lVar4 + 0x18 + lVar6) = 0;
          *(undefined8 *)(lVar4 + 0x18 + lVar6) = local_80;
          local_80 = 0;
          *(undefined4 *)(lVar4 + 0x20 + lVar6) = (undefined4)local_78;
          *(undefined4 *)(lVar4 + 0x24 + lVar6) = local_78._4_4_;
          local_78 = 0;
          *(undefined2 *)(lVar4 + 0x28 + lVar6) = local_70;
          *(undefined8 *)(lVar4 + 0x30 + lVar6) = 0;
          *(undefined8 *)(lVar4 + 0x30 + lVar6) = local_68;
          local_68 = 0;
          *(undefined4 *)(lVar4 + 0x38 + lVar6) = (undefined4)local_60;
          *(undefined4 *)(lVar4 + 0x3c + lVar6) = local_60._4_4_;
          local_60 = 0;
          FUN_149189aca(&local_80);
        }
        lVar5 = lVar5 + 0xc;
        lVar7 = lVar7 + -0xc;
      } while (lVar7 != 0);
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491d937e FUN_1491d937e body=150 status=ok
// SIG undefined FUN_1491d937e(void)

undefined8 * FUN_1491d937e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = *(undefined8 *)(param_1 + 0x14);
  if ((*(char *)(param_1 + 0x10) == '@') && (*(longlong *)(param_3 + 0x570) != 0)) {
    puVar1 = (undefined8 *)
             FUN_1408133a6(*(longlong *)(param_3 + 0x570),(undefined8 *)(param_1 + 0x10));
    if (puVar1 != (undefined8 *)0x0) goto LAB_1491d93d5;
  }
  puVar1 = (undefined8 *)(param_1 + 0x10);
LAB_1491d93d5:
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar1 + 1);
  param_2[1] = *puVar1;
  FUN_144a787a6(param_2 + 3,param_1 + 0x48);
  *(undefined2 *)(param_2 + 5) = *(undefined2 *)(param_1 + 0x58);
  FUN_1491bf11c(param_2 + 6,param_1 + 0x60);
  return param_2;
}



// FUNCTION 1491d9414 FUN_1491d9414 body=476 status=ok
// SIG undefined FUN_1491d9414(void)

longlong * FUN_1491d9414(longlong param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_d1;
  longlong *local_d0;
  undefined1 local_c8 [44];
  undefined1 local_9c [8];
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  param_2[1] = 0;
  lVar6 = *param_3;
  uVar5 = 0;
  local_d1 = param_4;
  if ((longlong)(int)param_3[1] != 0) {
    lVar7 = (longlong)(int)param_3[1] << 6;
    lVar6 = lVar6 + 0x18;
    local_d0 = param_3;
    do {
      local_58 = CONCAT31(local_58._1_3_,0x40);
      uStack_54 = (undefined4)*(undefined8 *)(lVar6 + -0x18);
      uStack_50 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + -0x18) >> 0x20);
      uVar3 = FUN_140813180(param_1,&local_58);
      if (((((int)uVar3 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar3)) ||
          (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar3 * 8), lVar2 == 0))
         || (*(char *)(lVar2 + 0x10) != '@')) {
        uVar4 = FUN_14449bdee(param_1,1);
        FUN_149189a2a(local_c8,lVar6);
        FUN_1491d95f2(uVar4,local_9c,*(undefined8 *)(lVar6 + -0x18),local_c8);
        uStack_50 = local_94;
        local_58 = local_9c._0_4_;
        uStack_54 = local_9c._4_4_;
      }
      else {
        FUN_149189a2a(local_80,lVar6);
        local_90 = CONCAT44(uStack_54,local_58);
        local_88 = uStack_50;
        local_e0 = 0;
        local_e8 = 0;
        FUN_14918998e(param_1,&local_90,local_80,local_d1);
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149192788(param_2,iVar1);
      }
      lVar2 = *param_2;
      *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = uStack_50;
      *(ulonglong *)(lVar2 + (longlong)iVar1 * 0xc) = CONCAT44(uStack_54,local_58);
      lVar6 = lVar6 + 0x40;
      lVar7 = lVar7 + -0x40;
    } while (lVar7 != 0);
    uVar5 = (undefined4)local_d0[1];
    lVar6 = *local_d0;
    param_3 = local_d0;
  }
  FUN_149197159(lVar6,uVar5);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d95f2 FUN_1491d95f2 body=988 status=ok
// SIG undefined FUN_1491d95f2(void)

undefined8 * FUN_1491d95f2(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  void *_Src;
  char cVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined4 local_64;
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_50 = param_3;
  cVar3 = FUN_14576d4b4();
  if (cVar3 == '\0') {
    *(undefined1 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
    goto LAB_1491d96d5;
  }
  lVar13 = *(longlong *)(param_1 + 0x20);
  if (lVar13 == 0) {
LAB_1491d965e:
    lVar13 = 0;
  }
  else {
    lVar4 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_1491d965e;
  }
  if (*(char *)(param_4 + 0x10) == '\0') {
    local_b0 = param_2;
    local_a8 = param_4;
    FUN_149192bd8(lVar13,&local_60,0);
    if ((longlong)local_58 != 0) {
      plVar9 = local_60 + local_58;
      plVar12 = local_60;
LAB_1491d9723:
      lVar4 = *plVar12;
      if ((*(char *)(lVar4 + 0x58) == '\0') && (*(longlong *)(lVar13 + 0x558) != 0)) {
        lVar2 = *(longlong *)(*(longlong *)(lVar13 + 0x558) + 0xc0);
        local_70 = (undefined2 *)0x0;
        local_68 = *(int *)(lVar2 + 0x1c8);
        lVar8 = (longlong)local_68;
        _Src = *(void **)(lVar2 + 0x1c0);
        if (lVar8 != 0) {
          FUN_1446dd670(&local_70,local_68,0);
          memcpy(local_70,_Src,lVar8 * 2);
          if (local_68 < 2) goto LAB_1491d9795;
          local_90 = *(undefined8 *)(lVar4 + 0x10);
          local_88 = *(undefined4 *)(lVar4 + 0x18);
          FUN_1491da198(lVar13,&local_80);
          param_2 = local_b0;
          if (1 < local_78) {
            if (local_78 == local_68) {
              lVar4 = 0;
              do {
                uVar5 = *(ushort *)(local_80 + lVar4);
                uVar6 = (ulonglong)uVar5;
                uVar10 = *(ushort *)((longlong)local_70 + lVar4);
                if (uVar5 == uVar10) {
                  if (uVar5 == 0) goto LAB_1491d9855;
                }
                else {
                  if (0x7f < (uVar10 | uVar5)) goto LAB_1491d99bf;
                  uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
                  uVar11 = (ulonglong)uVar10;
                  uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                  if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar11]) goto LAB_1491d99bf;
                }
                lVar4 = lVar4 + 2;
              } while( true );
            }
            if (local_68 + local_78 != 1) goto LAB_1491d97e0;
            goto LAB_1491d9855;
          }
          goto LAB_1491d97e0;
        }
        local_64 = 0;
        goto LAB_1491d9795;
      }
      goto LAB_1491d972d;
    }
LAB_1491d9691:
    param_4 = local_a8;
    param_2 = local_b0;
    if (*(char *)(local_a8 + 0x11) == '\x01') {
      FUN_1400021e4(&local_50,&local_70);
      param_2 = local_b0;
      puVar7 = local_70;
      if (local_68 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      FUN_1491edc96(param_1,puVar7);
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      *(undefined1 *)param_2 = 0;
      *(undefined8 *)((longlong)param_2 + 4) = 0;
LAB_1491d9959:
      if (local_60 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1491d96d5;
    }
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar4 = FUN_1491edd02(param_1,0);
  uVar1 = *(undefined1 *)(lVar13 + 0x4c8);
  *(undefined1 *)(lVar13 + 0x4c8) = 0;
  *(undefined1 *)(lVar4 + 0x10) = 0x40;
  FUN_1491ec4cc(param_1,&local_60,&local_50,0x40);
  *(longlong **)(lVar4 + 0x14) = local_60;
  FUN_144a787a6(lVar4 + 0x48,param_4);
  *(undefined2 *)(lVar4 + 0x58) = *(undefined2 *)(param_4 + 0x10);
  FUN_1491bf11c(lVar4 + 0x60,param_4 + 0x18);
  local_b8 = &local_50;
  FUN_1491ec5ea(param_1,lVar4,0,1);
  *(undefined1 *)(lVar13 + 0x4c8) = uVar1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar4 + 0x18);
  *param_2 = *(undefined8 *)(lVar4 + 0x10);
LAB_1491d96d5:
  FUN_149189aca(param_4);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_1491d99bf:
  if (uVar5 == uVar10) {
LAB_1491d9855:
    FUN_1400021e4(&local_50,&local_a0);
    param_4 = local_a8;
    puVar7 = local_a0;
    if (local_98 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_1491edc2a(param_1,puVar7);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_1491d9959;
  }
LAB_1491d97e0:
  if (local_80 != 0) {
    FUN_1400020a8();
  }
LAB_1491d9795:
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1491d972d:
  plVar12 = plVar12 + 1;
  if (plVar12 == plVar9) goto LAB_1491d9691;
  goto LAB_1491d9723;
}



// FUNCTION 1491d99d0 FUN_1491d99d0 body=76 status=ok
// SIG undefined FUN_1491d99d0(void)

undefined8 FUN_1491d99d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_1401242c6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_1491a1474(lVar1,param_2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1491d9a1c FUN_1491d9a1c body=101 status=ok
// SIG undefined FUN_1491d9a1c(void)

undefined8 * FUN_1491d9a1c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = FUN_140813180(0,param_3);
  if ((((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0xc0))) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8), lVar2 != 0)) &&
     (lVar2 = (longlong)*(int *)(lVar2 + 0x34), lVar2 != -1)) {
    FUN_1491d9a82(lVar2 * 0x60 + *(longlong *)(param_1 + 0x268),param_2);
  }
  return param_2;
}



// FUNCTION 1491d9a82 FUN_1491d9a82 body=763 status=ok
// SIG undefined FUN_1491d9a82(void)

void FUN_1491d9a82(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_144732142(&local_98,uVar7);
    iVar5 = 1;
    if (3 < uVar7) {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_144869b4a();
    }
  }
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_1402191ca(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar3 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        lVar2 = *(longlong *)(lVar1 + lVar3 * 0x18);
        uVar7 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar6 = (uint)lVar2 & 0xffff;
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar5 = *(int *)(puVar4 + (ulonglong)
                                       (local_50 - 1U &
                                       (int)((ulonglong)lVar2 >> 0x20) +
                                       ((uint)lVar2 << 0x10 | uVar6) +
                                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4)) * 4);
            iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_98 + 8)) {
          if (*(longlong *)(local_98 + (longlong)iVar5 * 0x10) == lVar2) goto LAB_1491d9c2e;
        }
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1446f84a2(param_2,iVar5);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar3 * 0x18 + lVar1);
      FUN_144a13f80(&local_98,&local_b8,(longlong)iStack_c4 * 0x18 + *local_e0,0);
LAB_1491d9c2e:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d9d80 FUN_1491d9d80 body=245 status=ok
// SIG undefined FUN_1491d9d80(void)

undefined1 FUN_1491d9d80(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = FUN_140813180();
  if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0xc0))) &&
      (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar2 * 8), lVar4 != 0)) &&
     (lVar4 = (longlong)*(int *)(lVar4 + 0x34), lVar4 != -1)) {
    lVar1 = *(longlong *)(param_1 + 0x268);
    lVar4 = lVar4 * 0x60;
    if (*(int *)(lVar1 + 8 + lVar4) != *(int *)(lVar1 + 0x34 + lVar4)) {
      plVar3 = (longlong *)(lVar1 + lVar4);
      uVar2 = (uint)((ulonglong)param_3 >> 0x10);
      uVar6 = (uint)param_3 & 0xffff;
      plVar5 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[8];
      }
      iVar7 = *(int *)((longlong)plVar5 +
                      (ulonglong)
                      ((int)plVar3[9] - 1U &
                      (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar7 != -1) {
        do {
          plVar5 = (longlong *)(*plVar3 + (longlong)iVar7 * 0x18);
          if (*plVar5 == param_3) {
            if (plVar5 + 1 == (longlong *)0x0 || plVar5 == (longlong *)0x0) {
              return 0x14;
            }
            return *(undefined1 *)(plVar5[1] + 0x10);
          }
          iVar7 = (int)plVar5[2];
        } while (iVar7 != -1);
      }
    }
  }
  return 0x14;
}



// FUNCTION 1491d9e76 FUN_1491d9e76 body=103 status=ok
// SIG undefined FUN_1491d9e76(void)

void FUN_1491d9e76(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_3;
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_1491d9ede(param_1,uVar2,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491d9ede FUN_1491d9ede body=359 status=ok
// SIG undefined FUN_1491d9ede(void)

ulonglong FUN_1491d9ede(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  longlong *plVar8;
  
  iVar4 = *(int *)(param_2 + 0x34);
  if ((-1 < (longlong)iVar4) && (iVar4 < *(int *)(param_1 + 0x270))) {
    lVar1 = *(longlong *)(param_1 + 0x268);
    lVar3 = (longlong)iVar4 * 0x60;
    if (*(int *)(lVar1 + 8 + lVar3) != *(int *)(lVar1 + 0x34 + lVar3)) {
      plVar8 = (longlong *)(lVar1 + lVar3);
      lVar1 = *param_3;
      uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
      uVar6 = (uint)lVar1 & 0xffff;
      plVar5 = plVar8 + 7;
      if ((longlong *)plVar8[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar8[8];
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      (ulonglong)
                      ((int)plVar8[9] - 1U &
                      (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          plVar5 = (longlong *)(*plVar8 + (longlong)iVar4 * 0x18);
          if (*plVar5 == lVar1) {
            if (plVar5 != (longlong *)0x0) {
              FUN_1491dfecc(plVar5 + 1);
              FUN_14920e32a(plVar8,*param_3);
              if ((int)plVar8[1] == *(int *)((longlong)plVar8 + 0x34)) {
                if (*(int *)(param_2 + 0x34) != -1) {
                  iVar4 = *(int *)(param_1 + 0x280);
                  *(uint *)(param_1 + 0x280) = iVar4 + 1U;
                  if (*(uint *)(param_1 + 0x284) < iVar4 + 1U) {
                    FUN_1446f48e2((longlong *)(param_1 + 0x278),iVar4);
                  }
                  *(undefined4 *)(*(longlong *)(param_1 + 0x278) + (longlong)iVar4 * 4) =
                       *(undefined4 *)(param_2 + 0x34);
                }
                *(undefined4 *)(param_2 + 0x34) = 0xffffffff;
              }
              else if (plVar8[10] == *param_3) {
                plVar8[0xb] = 0;
              }
              uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
              if (*(longlong *)(param_1 + 0x590) != param_2) {
                FUN_1491e07f8(param_1,param_2 + 0x10,param_3);
              }
              goto LAB_1491d9f1b;
            }
            break;
          }
          iVar4 = (int)plVar5[2];
        } while (iVar4 != -1);
      }
    }
  }
  uVar7 = 0;
LAB_1491d9f1b:
  return uVar7 & 0xffffffff;
}



// FUNCTION 1491da046 FUN_1491da046 body=55 status=ok
// SIG undefined FUN_1491da046(void)

void FUN_1491da046(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140813180();
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_140da0538(param_1,uVar2);
  return;
}



// FUNCTION 1491da07e FUN_1491da07e body=280 status=ok
// SIG undefined FUN_1491da07e(void)

longlong * FUN_1491da07e(undefined8 param_1,longlong *param_2,char *param_3)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48 [2];
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((uint)*(ushort *)(param_3 + 6) < DAT_14c87eb08 + 1U) && (*(longlong *)(param_3 + 4) != 0))
     && (*param_3 != '\0')) {
    local_38 = *(undefined8 *)param_3;
    local_30 = *(undefined4 *)(param_3 + 8);
    local_68 = 0;
    FUN_149184980(param_1,&local_28,&local_38,DAT_14cc06408);
    if (local_28 == 0) {
      FUN_1400021e4(param_3 + 4,local_48);
      local_58 = 0;
      uStack_50 = 0;
      cVar1 = FUN_1491d31c2(local_48,&local_58,0,1);
      if ((cVar1 == '\0') || ((int)uStack_50 < 2)) {
        *param_2 = 0;
      }
      else {
        FUN_1446f470e(param_2,local_58,1);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *param_2 = local_28;
    }
  }
  else {
    *param_2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491da198 FUN_1491da198 body=117 status=ok
// SIG undefined FUN_1491da198(void)

undefined8 * FUN_1491da198(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = *(undefined4 *)(param_3 + 1);
  FUN_1491d3868(param_1,&local_20,&local_30);
  if (local_20 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_1400021e4(&local_20,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491da20e FUN_1491da20e body=157 status=ok
// SIG undefined FUN_1491da20e(void)

undefined4 FUN_1491da20e(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  uVar2 = FUN_1491bc052();
  uVar1 = FUN_1491d31c2(uVar2,local_48 + 2,local_48,1);
  if (param_2 != 0 && (char)uVar1 == '\x01') {
    FUN_1491bc09e(param_2,local_48);
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491da2ac FUN_1491da2ac body=386 status=ok
// SIG undefined FUN_1491da2ac(void)

void FUN_1491da2ac(undefined8 param_1,byte param_2)

{
  ushort _C;
  short sVar1;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar4 = (undefined8 *)FUN_1491bc052();
  local_58 = (void *)0x0;
  local_50 = *(int *)(puVar4 + 1);
  lVar5 = (longlong)local_50;
  pvVar2 = (void *)*puVar4;
  if (lVar5 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar2,lVar5 * 2);
    if (local_50 - 2U < 0x7fffffff) {
      lVar5 = 0;
      bVar6 = false;
      do {
        pvVar2 = local_58;
        iVar3 = iswalpha(*(wint_t *)((longlong)local_58 + lVar5 * 2));
        if ((((iVar3 == 0) && (_C = *(ushort *)((longlong)pvVar2 + lVar5 * 2), 1 < _C - 0x2d)) &&
            (_C != 0x5f)) &&
           (((_C != 0x7c && (iVar3 = iswdigit(_C), iVar3 == 0)) &&
            (sVar1 = *(short *)((longlong)pvVar2 + lVar5 * 2),
            (sVar1 == 0x3a & param_2) == 0 && (sVar1 != 0x20 || lVar5 == 0))))) {
          *(undefined2 *)((longlong)pvVar2 + lVar5 * 2) = 0x5f;
          bVar6 = true;
        }
        lVar5 = lVar5 + 1;
        iVar3 = local_50 + -1;
        if (local_50 == 0) {
          iVar3 = 0;
        }
      } while (lVar5 < iVar3);
      if (iVar3 < 0x65) {
        if (!bVar6) goto LAB_1491da3c5;
      }
      else {
        FUN_14496493a(&local_58,100,iVar3 + -100,1);
      }
      FUN_1491bc09e(param_1,&local_58);
    }
  }
LAB_1491da3c5:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491da430 FUN_1491da430 body=820 status=ok
// SIG undefined FUN_1491da430(void)

undefined4 FUN_1491da430(ulonglong param_1,int *param_2,char param_3)

{
  byte bVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined8 unaff_RBP;
  undefined1 auStack_98 [32];
  char local_78 [4];
  longlong local_74;
  undefined4 local_6c;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar6 = (longlong *)FUN_149192960(param_2);
  lVar9 = *plVar6;
  local_78[0] = param_3;
  local_74 = lVar9;
  FUN_1491da766(&local_50);
  if (((lVar9 == CONCAT44(uStack_48,uStack_4c)) && ((char)local_50 == param_3)) ||
     (iVar3 = FUN_140813180(param_1,local_78), iVar3 != -1)) {
    uVar5 = 0;
    goto LAB_1491da495;
  }
  if (*param_2 == -1) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = *(undefined8 *)param_2;
  }
  local_50 = (int)uVar8;
  uStack_4c = (undefined4)((ulonglong)uVar8 >> 0x20);
  FUN_141121e90(&uStack_48,param_2 + 2);
  if (local_3c == -1) {
    if (local_50 != -1) {
      iVar3 = FUN_140180c78(&local_50);
      goto LAB_1491da4f6;
    }
    iVar4 = -1;
    iVar11 = -1;
LAB_1491da51d:
    if ((iVar4 == -1) && (iVar11 == -1)) goto LAB_1491da4fb;
    if (iVar4 == -1) {
      lVar9 = FUN_1491bc052(&local_50);
      if (1 < *(int *)(lVar9 + 8)) goto LAB_1491da534;
      goto LAB_1491da4fb;
    }
    if (CONCAT44(uStack_4c,local_50) == 0) goto LAB_1491da4fb;
LAB_1491da534:
    bVar1 = *(byte *)(param_1 + 0x52d);
    lVar9 = *(longlong *)(param_1 + 0x20);
    if (lVar9 == 0) {
LAB_1491da5c3:
      uVar8 = FUN_141225fe0();
      lVar9 = FUN_144a78ede(param_1,uVar8);
      param_1 = CONCAT71((int7)(param_1 >> 8),1);
      if ((lVar9 != 0) &&
         ((((lVar7 = *(longlong *)(lVar9 + 0x30), lVar7 != 0 &&
            (lVar10 = FUN_1446f8646(), lVar10 != 0)) &&
           (*(int *)(lVar10 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
          ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
            lVar10 + 0x30 && (lVar7 = *(longlong *)(lVar9 + 0x30), lVar7 != 0)))))) {
        lVar9 = *(longlong *)(lVar7 + 0x110);
        if (lVar9 == 0) {
          FUN_140aa6c08(lVar7);
          lVar9 = *(longlong *)(lVar7 + 0x110);
          if (lVar9 == 0) goto LAB_1491da69d;
        }
        lVar7 = FUN_1401242c6();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) goto LAB_1491da564;
      }
    }
    else {
      lVar7 = FUN_1401242c6();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) != lVar7 + 0x30)) goto LAB_1491da5c3;
LAB_1491da564:
      cVar2 = FUN_14919eb14(lVar9);
      if (cVar2 == '\0') {
        lVar9 = *(longlong *)(lVar9 + 0x10);
        lVar7 = FUN_145b9ea06();
        param_1 = CONCAT71((int7)(param_1 >> 8),1);
        if ((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar9 + 0x38))) {
          param_1 = 1;
          if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            param_1 = (ulonglong)bVar1;
          }
        }
      }
      else {
        param_1 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar1) & 0xffffffff;
      }
    }
LAB_1491da69d:
    if (local_50 == -1) {
      local_68 = 0xffffffff;
    }
    else {
      local_68 = CONCAT44(uStack_4c,local_50);
    }
    local_60 = (void *)0x0;
    if (local_3c == -1) {
      local_58 = 0xffffffff00000000;
    }
    else {
      _Src = (void *)CONCAT44(uStack_44,uStack_48);
      local_58 = CONCAT44(local_58._4_4_,local_40);
      if ((longlong)(int)local_40 == 0) {
        local_58 = (ulonglong)local_40;
      }
      else {
        FUN_1446dd670(&local_60,local_40,0);
        memcpy(local_60,_Src,(longlong)(int)local_40 * 2);
      }
    }
    FUN_1491da2ac(&local_68,param_1 & 0xffffffff);
    local_6c = 0;
    uVar5 = FUN_1491bc10a(&local_68,&local_50);
    if ((local_58._4_4_ != -1) && (local_60 != (void *)0x0)) {
      FUN_1400020a8();
    }
  }
  else {
    iVar3 = local_40 - 1;
    if (local_40 == 0) {
      iVar3 = 0;
    }
LAB_1491da4f6:
    iVar4 = local_50;
    iVar11 = local_3c;
    if (iVar3 < 0x65) goto LAB_1491da51d;
LAB_1491da4fb:
    uVar5 = 0;
  }
  if ((local_3c != -1) && (CONCAT44(uStack_44,uStack_48) != 0)) {
    FUN_1400020a8();
  }
LAB_1491da495:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1491da766 FUN_1491da766 body=124 status=ok
// SIG undefined FUN_1491da766(void)

undefined1 * FUN_1491da766(undefined1 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc077c0) {
    FUN_144b3d300(&DAT_14cc077c0);
    if (DAT_14cc077c0 == -1) {
      FUN_1446f470e(&DAT_14cc077b8,L"DefaultParent",1);
      _Init_thread_footer(&DAT_14cc077c0);
    }
  }
  *param_1 = 0x20;
  *(undefined8 *)(param_1 + 4) = DAT_14cc077b8;
  return param_1;
}



// FUNCTION 1491da7e2 FUN_1491da7e2 body=869 status=ok
// SIG undefined FUN_1491da7e2(void)

undefined8 * FUN_1491da7e2(longlong param_1,undefined8 *param_2,int *param_3,undefined4 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  int local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int local_64;
  undefined8 local_60;
  void *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_3 == -1) {
    local_60 = 0xffffffff;
  }
  else {
    local_60 = *(undefined8 *)param_3;
  }
  FUN_141121e90(&local_58,param_3 + 2);
  FUN_1491da2ac(&local_60,1);
  *(undefined1 *)(param_1 + 0x52d) = 1;
  if (*(longlong *)(param_1 + 0x558) != 0) {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x558) + 0xc0);
    cVar2 = FUN_1491dab48(lVar10);
    if (cVar2 != '\0') {
      local_78 = -1;
      uStack_74 = 0;
      iStack_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      local_64 = -1;
      cVar2 = FUN_1491da20e(&local_60);
      if (cVar2 != '\0') {
        if (local_78 == -1) {
          if ((int)local_60 != -1) {
            local_60 = 0xffffffff;
          }
        }
        else {
          local_60 = CONCAT44(uStack_74,local_78);
        }
        FUN_14054da5a(&local_58);
      }
      uVar4 = FUN_1491bc052(&local_60);
      local_98 = (void *)0x0;
      local_90 = *(int *)(lVar10 + 0x1c8);
      lVar9 = (longlong)local_90;
      pvVar1 = *(void **)(lVar10 + 0x1c0);
      if (lVar9 == 0) {
        local_8c = 0;
      }
      else {
        FUN_1446dd670(&local_98,local_90,0);
        memcpy(local_98,pvVar1,lVar9 * 2);
      }
      FUN_144a7dea0(local_88,&local_98,uVar4);
      FUN_1491bc09e(&local_60,local_88);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_1 + 0x52d) = 1;
      if ((local_64 != -1) && (CONCAT44(uStack_6c,iStack_70) != 0)) {
        FUN_1400020a8();
      }
    }
  }
  pvVar1 = local_58;
  uVar4 = local_60;
  if ((int)local_60 == -1) {
    uVar4 = 0xffffffff;
  }
  *param_2 = uVar4;
  param_2[1] = 0;
  if (local_4c == -1) {
    param_2[2] = 0xffffffff00000000;
  }
  else {
    *(int *)(param_2 + 2) = local_50;
    if ((longlong)local_50 == 0) {
      *(undefined4 *)((longlong)param_2 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(param_2 + 1,local_50,0);
      memcpy((void *)param_2[1],pvVar1,(longlong)local_50 * 2);
    }
  }
  cVar2 = FUN_1491da430(param_1,param_2,param_4);
  if (cVar2 == '\0') {
    iVar6 = 2;
    do {
      puVar5 = (undefined8 *)FUN_1491bc052(&local_60);
      local_78 = 0;
      uStack_74 = 0;
      iStack_70 = *(int *)(puVar5 + 1);
      lVar10 = (longlong)iStack_70;
      pvVar1 = (void *)*puVar5;
      if (lVar10 == 0) {
        uStack_6c = 0;
        iVar3 = 0;
      }
      else {
        FUN_1446dd670(&local_78,iStack_70,0);
        memcpy((void *)CONCAT44(uStack_74,local_78),pvVar1,lVar10 * 2);
        iVar3 = iStack_70;
      }
      iVar7 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar7 = 0;
      }
      if (0x60 < iVar7) {
        FUN_14496493a(&local_78,0x60,iVar7 + -0x60,1);
        iVar3 = iStack_70;
      }
      puVar8 = &DAT_149dfb77a;
      if (iVar3 != 0) {
        puVar8 = (undefined2 *)CONCAT44(uStack_74,local_78);
      }
      FUN_140002266(local_88,L"%s_%d",puVar8,iVar6);
      FUN_1491bc09e(param_2,local_88);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_74,local_78) != 0) {
        FUN_1400020a8();
      }
      cVar2 = FUN_1491da430(param_1,param_2);
      iVar6 = iVar6 + 1;
    } while (cVar2 == '\0');
  }
  *(undefined1 *)(param_1 + 0x52d) = 0;
  if ((local_4c != -1) && (local_58 != (void *)0x0)) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491dab48 FUN_1491dab48 body=146 status=ok
// SIG undefined FUN_1491dab48(void)

ulonglong FUN_1491dab48(longlong param_1)

{
  void *_Src;
  size_t _Size;
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (void *)0x0;
  local_28 = *(int *)(param_1 + 0x1c8);
  lVar1 = (longlong)local_28;
  _Src = *(void **)(param_1 + 0x1c0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_1446dd670(&local_30,local_28,0);
    _Size = lVar1 * 2;
    memcpy(local_30,_Src,_Size);
    uVar2 = CONCAT71((int7)(_Size >> 8),1 < local_28);
    if (local_30 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dabdc FUN_1491dabdc body=1253 status=ok
// SIG undefined FUN_1491dabdc(void)

/* WARNING: Removing unreachable block (ram,0x0001491daef1) */

longlong * FUN_1491dabdc(longlong param_1,longlong *param_2,char *param_3,longlong *param_4)

{
  byte bVar1;
  longlong *plVar2;
  void *pvVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong local_c8 [2];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((int)*param_4 != -1) || (*(int *)((longlong)param_4 + 0x14) != -1)) {
    if ((int)*param_4 == -1) {
      lVar16 = FUN_1491bc052(param_4);
      if (1 < *(int *)(lVar16 + 8)) goto LAB_1491dac7a;
    }
    else if (*param_4 != 0) {
LAB_1491dac7a:
      uVar17 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_d0 = param_2;
      if ((((uint)*(ushort *)(param_3 + 6) < DAT_14c87eb08 + 1U) &&
          (*(longlong *)(param_3 + 4) != 0)) && (*param_3 != '\0')) {
        local_a8 = *(undefined8 *)param_3;
        local_a0 = *(undefined4 *)(param_3 + 8);
        FUN_14449fd62(param_1,&local_78,&local_a8,0);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        local_98 = local_78;
        uStack_90 = CONCAT44(uStack_6c,uStack_70);
      }
      else {
        iVar11 = *(int *)(param_1 + 0xc0);
        if ((longlong)iVar11 != 0) {
          lVar16 = *(longlong *)(param_1 + 0xb8);
          lVar10 = 0;
          do {
            lVar15 = *(longlong *)(lVar16 + lVar10);
            bVar1 = *(byte *)(lVar15 + 0x10);
            if (((((ulonglong)bVar1 < 0x21) &&
                 ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) || (bVar1 == 0x80)) &&
               (iVar6 = FUN_14449ffea(uVar17,lVar15), uVar4 = uStack_90, uVar17 = extraout_XMM0_Da,
               iVar6 == 0)) {
              lVar14 = (longlong)(int)uStack_90;
              uVar7 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
              if (uStack_90._4_4_ < uVar7) {
                uVar17 = FUN_149192788(&local_98,uVar4 & 0xffffffff);
              }
              *(undefined4 *)(local_98 + 8 + lVar14 * 0xc) = *(undefined4 *)(lVar15 + 0x18);
              *(undefined8 *)(local_98 + lVar14 * 0xc) = *(undefined8 *)(lVar15 + 0x10);
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)iVar11 * 8 != lVar10);
        }
      }
      param_2 = local_d0;
      if ((int)*param_4 == -1) {
        local_78 = 0xffffffff;
      }
      else {
        local_78 = *param_4;
      }
      FUN_141121e90(&uStack_70,param_4 + 1);
      FUN_1491da2ac(&local_78,1);
      lVar16 = local_78;
      if ((int)local_78 == -1) {
        lVar16 = 0xffffffff;
      }
      *param_2 = lVar16;
      param_2[1] = 0;
      if (local_64 == -1) {
        param_2[2] = -0x100000000;
      }
      else {
        pvVar3 = (void *)CONCAT44(uStack_6c,uStack_70);
        *(int *)(param_2 + 2) = local_68;
        if ((longlong)local_68 == 0) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        }
        else {
          FUN_1446dd670(param_2 + 1,local_68,0);
          memcpy((void *)param_2[1],pvVar3,(longlong)local_68 * 2);
        }
      }
      local_b8 = 0;
      uStack_b0 = 0;
      if ((longlong)(int)uStack_90 != 0) {
        lVar16 = (longlong)(int)uStack_90 * 0xc;
        lVar10 = local_98;
        puVar13 = local_88;
        uVar4 = uStack_80;
        do {
          uStack_80 = uVar4;
          local_88 = puVar13;
          uVar7 = FUN_140813180(param_1,lVar10);
          if ((((int)uVar7 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar7)) ||
             (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar7 * 8),
             plVar2 == (longlong *)0x0)) {
            local_88 = (undefined2 *)0x0;
            uStack_80 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar2 + 0x20))();
            FUN_1400021e4(uVar8,&local_88);
          }
          uVar4 = uStack_b0;
          lVar15 = (longlong)(int)uStack_b0;
          uVar7 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
          if (uStack_b0._4_4_ < uVar7) {
            FUN_1447a1bd6(&local_b8,uVar4 & 0xffffffff);
          }
          lVar15 = lVar15 * 0x10;
          *(undefined8 *)(local_b8 + lVar15) = 0;
          *(undefined2 **)(local_b8 + lVar15) = local_88;
          local_88 = (undefined2 *)0x0;
          puVar13 = local_88;
          *(int *)(local_b8 + 8 + lVar15) = (int)uStack_80;
          *(undefined4 *)(local_b8 + 0xc + lVar15) = uStack_80._4_4_;
          uStack_80 = 0;
          uVar4 = uStack_80;
          uStack_80 = 0;
          local_88 = (undefined2 *)0x0;
          lVar10 = lVar10 + 0xc;
          lVar16 = lVar16 + -0xc;
        } while (lVar16 != 0);
      }
      uVar8 = FUN_1491bc052(param_2);
      cVar5 = FUN_144a23846(&local_b8,uVar8);
      if (cVar5 != '\0') {
        iVar11 = 2;
        do {
          puVar9 = (undefined8 *)FUN_1491bc052(&local_78);
          local_88 = (undefined2 *)0x0;
          uVar7 = *(uint *)(puVar9 + 1);
          pvVar3 = (void *)*puVar9;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
          if ((longlong)(int)uVar7 == 0) {
            uStack_80 = (ulonglong)uVar7;
            iVar6 = 0;
          }
          else {
            FUN_1446dd670(&local_88,uVar7,0);
            memcpy(local_88,pvVar3,(longlong)(int)uVar7 * 2);
            iVar6 = (int)uStack_80;
          }
          iVar12 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar12 = 0;
          }
          if (0x60 < iVar12) {
            FUN_14496493a(&local_88,0x60,iVar12 + -0x60,1);
            iVar6 = (int)uStack_80;
          }
          puVar13 = &DAT_149dfb77a;
          if (iVar6 != 0) {
            puVar13 = local_88;
          }
          FUN_140002266(local_c8,L"%s_%d",puVar13,iVar11);
          FUN_1491bc09e(param_2,local_c8);
          if (local_c8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_88 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          uVar8 = FUN_1491bc052(param_2);
          cVar5 = FUN_144a23846(&local_b8,uVar8);
          iVar11 = iVar11 + 1;
        } while (cVar5 != '\0');
      }
      FUN_1447a1747(local_b8,uStack_b0 & 0xffffffff);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if ((local_64 != -1) && (CONCAT44(uStack_6c,uStack_70) != 0)) {
        FUN_1400020a8();
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1491dac34;
    }
  }
  *(undefined4 *)param_2 = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
LAB_1491dac34:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491db0c2 FUN_1491db0c2 body=418 status=ok
// SIG undefined FUN_1491db0c2(void)

undefined8 FUN_1491db0c2(undefined8 param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_145b9ea06();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if (lVar2 != 0) {
    FUN_1491b5b30(lVar2,&local_40,param_3 + 2,0);
    if (1 < local_38) {
      FUN_140009b9a(param_2,&local_40);
      goto LAB_1491db130;
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  FUN_1400021e4(uVar1,&local_40);
  FUN_1491d31c2(&local_40,0,&local_40,1);
  if (param_4 == '\0') {
LAB_1491db19f:
    puVar3 = local_40;
    if (local_38 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140056680(local_68,puVar3);
    FUN_140233b1a(param_2,local_68);
  }
  else {
    local_58 = param_3[2];
    local_50 = (undefined4)param_3[3];
    local_88 = 0;
    FUN_149184980(param_1,&local_48,&local_58,DAT_14cc063f0);
    if (local_48 == 0) goto LAB_1491db19f;
    FUN_1400021e4(&local_48,local_68);
    FUN_1491d2e98(local_78,local_68,&local_40);
    FUN_140009b9a(param_2,local_78);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
LAB_1491db130:
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491db266 FUN_1491db266 body=89 status=ok
// SIG undefined FUN_1491db266(void)

undefined8 FUN_1491db266(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = FUN_140813180(param_1,param_3);
  if ((((int)uVar2 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar2)) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 == 0)) {
    FUN_144a5dc74(param_2);
  }
  else {
    FUN_1491db0c2(param_1,param_2,lVar1,param_4);
  }
  return param_2;
}



// FUNCTION 1491db2c0 FUN_1491db2c0 body=189 status=ok
// SIG undefined FUN_1491db2c0(void)

undefined8 * FUN_1491db2c0(undefined8 *param_1,void *param_2)

{
  undefined1 *_Dst;
  longlong lVar1;
  void *_Src;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  undefined1 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  local_40 = (undefined1 *)0x0;
  local_38 = *(int *)((longlong)param_2 + 0x20);
  lVar1 = (longlong)local_38;
  if (lVar1 == 0) {
    local_34 = 3;
  }
  else {
    _Src = *(void **)((longlong)param_2 + 0x18);
    if (*(void **)((longlong)param_2 + 0x18) == (void *)0x0) {
      _Src = param_2;
    }
    FUN_14920c8c8(local_58,local_38,0);
    _Dst = local_40;
    if (local_40 == (undefined1 *)0x0) {
      _Dst = local_58;
    }
    memcpy(_Dst,_Src,lVar1 << 3);
  }
  FUN_14920c7f4(local_58,param_1);
  if (*(longlong *)((longlong)param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491db37e FUN_1491db37e body=124 status=ok
// SIG undefined FUN_1491db37e(void)

undefined1 * FUN_1491db37e(undefined1 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc077d0) {
    FUN_144b3d300(&DAT_14cc077d0);
    if (DAT_14cc077d0 == -1) {
      FUN_1446f470e(&DAT_14cc077c8,L"WorldSpace",1);
      _Init_thread_footer(&DAT_14cc077d0);
    }
  }
  *param_1 = 0x20;
  *(undefined8 *)(param_1 + 4) = DAT_14cc077c8;
  return param_1;
}



// FUNCTION 1491db3fa FUN_1491db3fa body=246 status=ok
// SIG undefined FUN_1491db3fa(void)

longlong * FUN_1491db3fa(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar7 * 8);
      if (lVar2 != 0) {
        pcVar3 = (code *)*param_3;
        plVar6 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar6 = param_3 + 4;
        }
        local_50 = lVar2;
        uVar5 = (**(code **)(*plVar6 + 8))();
        cVar4 = (*pcVar3)(uVar5,&local_50);
        if (cVar4 != '\0') {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_145c8ed70(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0xc0));
  }
  if (*param_3 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491db4f2 FUN_1491db4f2 body=300 status=ok
// SIG undefined FUN_1491db4f2(void)

longlong FUN_1491db4f2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  float *pfVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  undefined1 local_38 [8];
  undefined1 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1444a0862(param_1,&local_48,param_2,0);
  if (0 < local_40) {
    FUN_14449d5e6(param_1,local_38,param_2,0);
    uVar2 = (ulonglong)local_28;
    if ((longlong)uVar2 < 1) {
      bVar6 = false;
    }
    else {
      puVar4 = local_38;
      if (local_30 != (undefined1 *)0x0) {
        puVar4 = local_30;
      }
      pfVar3 = (float *)(local_48 + 8);
      bVar6 = true;
      uVar5 = 1;
      do {
        if (((1e-08 < pfVar3[-2]) || (1e-08 < pfVar3[-1])) || (1e-08 < *pfVar3)) {
          iVar1 = *(int *)(*(longlong *)(puVar4 + uVar5 * 8 + -8) + 0x1c);
          if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0xc0))) {
            param_1 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar1 * 8);
            break;
          }
        }
        bVar6 = uVar5 < uVar2;
        pfVar3 = pfVar3 + 3;
        bVar7 = uVar5 != uVar2;
        uVar5 = uVar5 + 1;
      } while (bVar7);
    }
    if (local_30 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar6) goto LAB_1491db5d8;
  }
  param_1 = 0;
LAB_1491db5d8:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491db620 FUN_1491db620 body=375 status=ok
// SIG undefined FUN_1491db620(void)

undefined8 * FUN_1491db620(longlong param_1,undefined8 *param_2,byte *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  byte *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x528) != *(int *)(param_1 + 0xa8)) {
    FUN_1444aadf2(param_1 + 0x4d8);
    *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_1 + 0xa8);
  }
  *(undefined1 *)param_2 = 0;
  *(undefined8 *)((longlong)param_2 + 4) = 0;
  if (*(int *)(param_1 + 0x4e0) != *(int *)(param_1 + 0x50c)) {
    lVar2 = *(longlong *)(param_3 + 4);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2 & 0xffff;
    lVar6 = param_1 + 0x510;
    if (*(longlong *)(param_1 + 0x518) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x518);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x520) - 1U &
                             (uint)*param_3 +
                             ((int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) * 10) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x4d8);
      do {
        lVar7 = (longlong)iVar5 * 0x20;
        lVar1 = lVar6 + lVar7;
        if ((*(longlong *)(lVar6 + 4 + lVar7) == lVar2) && (*(byte *)(lVar6 + lVar7) == *param_3)) {
          if ((lVar1 != 0) && ((undefined8 *)(lVar1 + 0xc) != (undefined8 *)0x0)) {
            *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x14);
            *param_2 = *(undefined8 *)(lVar1 + 0xc);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x18);
      } while (iVar5 != -1);
    }
  }
  local_48 = *(undefined4 *)(param_3 + 8);
  local_50 = *(undefined8 *)param_3;
  FUN_1408130c0(param_1,param_2);
  local_40 = param_3;
  local_38 = param_2;
  FUN_1491ca586((longlong *)(param_1 + 0x4d8),local_2c,&local_40,0);
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491db798 FUN_1491db798 body=58 status=ok
// SIG undefined FUN_1491db798(void)

undefined4 FUN_1491db798(ulonglong param_1,uint param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0xc0) <= (int)param_2)) {
    uVar4 = 0;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0xb8);
    param_1 = (ulonglong)param_2;
    uVar4 = *(undefined8 *)(*plVar1 + param_1 * 8);
  }
  lVar3 = FUN_140813120(param_1,uVar4);
  if (lVar3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(lVar3 + 0x1c);
  }
  return uVar2;
}



// FUNCTION 1491db7d2 FUN_1491db7d2 body=52 status=ok
// SIG undefined FUN_1491db7d2(void)

void FUN_1491db7d2(void)

{
  FUN_140813180();
  FUN_14449ffea();
  return;
}



// FUNCTION 1491db806 FUN_1491db806 body=37 status=ok
// SIG undefined FUN_1491db806(void)

void FUN_1491db806(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xc0))) {
    FUN_14449ffea((ulonglong)param_2,
                  *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)param_2 * 8));
    return;
  }
  FUN_14449ffea(param_1,0);
  return;
}



// FUNCTION 1491db82c FUN_1491db82c body=129 status=ok
// SIG undefined FUN_1491db82c(void)

undefined8
FUN_1491db82c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  undefined8 uVar3;
  
  uVar1 = FUN_140813180(param_1,param_4);
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  uVar1 = FUN_140813180(param_1,param_3);
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  FUN_1491db8ae(param_2,uVar2,uVar3,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff
               );
  return param_2;
}



// FUNCTION 1491db8ae FUN_1491db8ae body=279 status=ok
// SIG undefined FUN_1491db8ae(void)

undefined8 * FUN_1491db8ae(undefined8 *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  if ((param_2 != 0) &&
     (((*(char *)(param_2 + 0x10) == '\x04' || (*(char *)(param_2 + 0x10) == '\x02')) &&
      (*(int *)(param_2 + 0x1c8) != *(int *)(param_2 + 500))))) {
    lVar2 = *(longlong *)(param_3 + 0x14);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2 & 0xffff;
    lVar6 = param_2 + 0x1f8;
    if (*(longlong *)(param_2 + 0x200) != 0) {
      lVar6 = *(longlong *)(param_2 + 0x200);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_2 + 0x208) - 1U &
                             (uint)*(byte *)(param_3 + 0x10) +
                             ((int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) * 10) * 4);
    if (iVar5 != -1) {
      do {
        lVar6 = *(longlong *)(param_2 + 0x1c0) + (longlong)iVar5 * 0x18;
        if ((*(longlong *)(lVar6 + 4) == lVar2) &&
           (*(byte *)(*(longlong *)(param_2 + 0x1c0) + (longlong)iVar5 * 0x18) ==
            *(byte *)(param_3 + 0x10))) {
          if ((undefined4 *)(lVar6 + 0xc) != (undefined4 *)0x0 && lVar6 != 0) {
            uVar1 = *(undefined4 *)(lVar6 + 0xc);
            FUN_1491db9c6(uVar1,param_1,param_2,uVar1,param_4);
            return param_1;
          }
          break;
        }
        iVar5 = *(int *)(lVar6 + 0x10);
      } while (iVar5 != -1);
    }
  }
  *param_1 = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 1) = 0x7f7fffff;
  return param_1;
}



// FUNCTION 1491db9c6 FUN_1491db9c6 body=129 status=ok
// SIG undefined FUN_1491db9c6(void)

void FUN_1491db9c6(undefined8 param_1,undefined8 *param_2,longlong param_3,uint param_4,char param_5
                  )

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((param_3 != 0) &&
      (((*(char *)(param_3 + 0x10) == '\x04' || (*(char *)(param_3 + 0x10) == '\x02')) &&
       (-1 < (int)param_4)))) && ((int)param_4 < *(int *)(param_3 + 0x1b0))) {
    lVar3 = param_3 + 0x110;
    if (*(longlong *)(param_3 + 0x1a0) != 0) {
      lVar3 = *(longlong *)(param_3 + 0x1a0);
    }
    lVar1 = (ulonglong)param_4 * 0x90;
    if (param_5 == '\0') {
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0x10 + lVar1);
      uVar2 = *(undefined8 *)(lVar3 + 8 + lVar1);
    }
    else {
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0x1c + lVar1);
      uVar2 = *(undefined8 *)(lVar3 + 0x14 + lVar1);
    }
    *param_2 = uVar2;
    return;
  }
  *param_2 = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_2 + 1) = 0x7f7fffff;
  return;
}



// FUNCTION 1491dba48 FUN_1491dba48 body=248 status=ok
// SIG undefined FUN_1491dba48(void)

undefined8 * FUN_1491dba48(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  char local_3c [4];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_140813180(param_1,param_3);
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  lVar2 = FUN_1491db4f2(param_1,uVar3);
  if (lVar2 == 0) {
    if (param_4 != '\0') {
      FUN_1491db37e(param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    *(undefined1 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
  }
  else {
    if (param_4 != '\0') {
      local_40 = *(undefined4 *)(param_3 + 1);
      local_48 = *param_3;
      FUN_1491db620(param_1,local_3c);
      if ((*(longlong *)(lVar2 + 0x14) == local_38) && (*(char *)(lVar2 + 0x10) == local_3c[0])) {
        FUN_1491da766(param_2);
        goto LAB_1491dbab5;
      }
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar2 + 0x18);
    *param_2 = *(undefined8 *)(lVar2 + 0x10);
  }
LAB_1491dbab5:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dbb44 FUN_1491dbb44 body=199 status=ok
// SIG undefined FUN_1491dbb44(void)

void FUN_1491dbb44(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *param_4;
  local_38 = *(undefined4 *)(param_4 + 1);
  uVar1 = FUN_140813180(param_1,param_3);
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  uVar1 = FUN_140813180(param_1,param_2);
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  local_50 = param_6;
  local_58 = param_5;
  FUN_1444a0948(param_1,uVar2,uVar3,&local_40);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dbc0c FUN_1491dbc0c body=894 status=ok
// SIG undefined FUN_1491dbc0c(void)

ulonglong FUN_1491dbc0c(longlong param_1,undefined8 *param_2,char *param_3,undefined8 param_4,
                       longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar7;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1444a11d6(param_1,&local_58,param_2,param_3);
  *(int *)(param_3 + 8) = local_50;
  *(ulonglong *)param_3 = CONCAT44(uStack_54,local_58);
  uVar3 = FUN_140813180(param_1,param_2);
  if ((((int)uVar3 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar3)) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar3 * 8), lVar1 == 0)) {
    if (param_5 != 0) {
      FUN_14919e8cc(param_2,&local_58);
      if (local_50 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = (undefined2 *)CONCAT44(uStack_54,local_58);
      }
      pwVar6 = L"Child Element %s cannot be found.";
      goto LAB_1491dbe9b;
    }
  }
  else {
    uVar3 = FUN_140813180(param_1,param_3);
    uVar8 = (undefined7)((ulonglong)unaff_RBP >> 8);
    if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0xc0))) {
      lVar5 = *(longlong *)(param_1 + 0xb8);
      lVar2 = *(longlong *)(lVar5 + (ulonglong)uVar3 * 8);
      if (lVar2 != 0) {
        lVar4 = FUN_140813120(lVar5,lVar1);
        uVar7 = CONCAT71(uVar8,1);
        if (lVar4 != lVar2) {
          if ((*(char *)(lVar1 + 0x10) == '\x04') || (*(char *)(lVar1 + 0x10) == '\x02')) {
            local_7c = (undefined4)CONCAT71((int7)((ulonglong)lVar5 >> 8),param_5 != 0);
          }
          else if (param_5 == 0) {
            local_7c = 0;
          }
          else {
            FUN_14919e8cc(param_2,&local_58);
            if (local_50 == 0) {
              puVar10 = &DAT_149dfb77a;
            }
            else {
              puVar10 = (undefined2 *)CONCAT44(uStack_54,local_58);
            }
            FUN_1407c8b48(param_5,
                          L"Child Element %s does not allow space switching (it\'s not a multi parent element)."
                          ,puVar10);
            lVar5 = CONCAT44(uStack_54,local_58);
            if (lVar5 != 0) {
              FUN_1400020a8();
            }
            local_7c = (undefined4)CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
          }
          if ((*(char *)(lVar2 + 0x10) != '\x02') && (*(char *)(lVar2 + 0x10) != '\x04')) {
            if ((char)local_7c == '\0') {
              uVar3 = FUN_1491d72f0(param_1,lVar2,lVar1,param_4);
              uVar7 = (ulonglong)uVar3 ^ 1;
              goto LAB_1491dbdb2;
            }
            FUN_14919e8cc(param_3,&local_58);
            if (local_50 == 0) {
              puVar10 = &DAT_149dfb77a;
            }
            else {
              puVar10 = (undefined2 *)CONCAT44(uStack_54,local_58);
            }
            FUN_1407c8b48(param_5,L"Parent Element %s is not a transform element",puVar10);
            if (CONCAT44(uStack_54,local_58) != 0) {
              FUN_1400020a8();
            }
          }
          uVar3 = FUN_1491d72f0(param_1,lVar2,lVar1,param_4);
          uVar7 = (ulonglong)uVar3 ^ 1;
          if ((byte)((byte)local_7c & (byte)uVar3) == 1) {
            FUN_14919e8cc(param_3,&local_58);
            puVar10 = &DAT_149dfb77a;
            puVar9 = &DAT_149dfb77a;
            if (local_50 != 0) {
              puVar9 = (undefined2 *)CONCAT44(uStack_54,local_58);
            }
            FUN_14919e8cc(param_2,&local_78);
            if (local_70 != 0) {
              puVar10 = (undefined2 *)CONCAT44(uStack_74,local_78);
            }
            FUN_1407c8b48(param_5,L"Cannot switch \'%s\' to \'%s\' - would cause a cycle.",puVar10,
                          puVar9);
            if (CONCAT44(uStack_74,local_78) != 0) {
              FUN_1400020a8();
            }
            if (CONCAT44(uStack_54,local_58) != 0) {
              FUN_1400020a8();
            }
          }
        }
        goto LAB_1491dbdb2;
      }
    }
    if (((DAT_14c87eb08 + 1U <= (uint)*(ushort *)(param_3 + 6)) || (*(longlong *)(param_3 + 4) == 0)
        ) || (*param_3 == '\0')) {
      local_60 = *(undefined4 *)(param_2 + 1);
      local_68 = *param_2;
      FUN_1408130c0(param_1,&local_58);
      FUN_1491db37e(&local_78);
      if (CONCAT44(local_50,uStack_54) == CONCAT44(local_70,uStack_74)) {
        uVar7 = CONCAT71(uVar8,1);
        if ((char)local_58 == (char)local_78) goto LAB_1491dbdb2;
      }
    }
    if (param_5 != 0) {
      FUN_14919e8cc(param_3,&local_58);
      if (local_50 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = (undefined2 *)CONCAT44(uStack_54,local_58);
      }
      pwVar6 = L"Parent Element %s cannot be found.";
LAB_1491dbe9b:
      FUN_1407c8b48(param_5,pwVar6,puVar10);
      if (CONCAT44(uStack_54,local_58) != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar7 = 0;
LAB_1491dbdb2:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1491dbf8c FUN_1491dbf8c body=197 status=ok
// SIG undefined FUN_1491dbf8c(void)

void FUN_1491dbf8c(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [44];
  undefined8 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1444a11d6(param_1,&local_3c,param_2,param_3);
  *(undefined4 *)(param_3 + 1) = local_34;
  *param_3 = local_3c;
  uVar1 = FUN_140813180(param_1,param_3);
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  uVar1 = FUN_140813180(param_1,param_2);
  if (((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_1491dc052(param_1,uVar2,uVar3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68,uVar2);
}



// FUNCTION 1491dc052 FUN_1491dc052 body=978 status=ok
// SIG undefined FUN_1491dc052(void)

undefined8
FUN_1491dc052(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  undefined7 extraout_var;
  longlong lVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  char *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  char local_9c [4];
  longlong local_98;
  char local_90 [4];
  longlong local_8c;
  char local_84 [4];
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar1 = *(undefined1 *)(param_1 + 0x330);
  *(undefined1 *)(param_1 + 0x330) = 1;
  if (param_2 != 0) {
    local_d0 = (char *)(param_2 + 0x10);
    local_50 = *(undefined4 *)(param_2 + 0x18);
    local_58 = *(undefined8 *)(param_2 + 0x10);
    if (param_3 == 0) {
      local_70 = *(undefined4 *)(param_2 + 0x18);
      local_78 = *(undefined8 *)local_d0;
      FUN_1491db620(param_1,&local_68);
    }
    else {
      uStack_60 = *(undefined4 *)(param_3 + 0x18);
      local_68 = (undefined4)*(undefined8 *)(param_3 + 0x10);
      uStack_64 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
    }
    FUN_1491dba48(param_1,local_84,&local_58,1);
    if ((local_80 == CONCAT44(uStack_60,uStack_64)) &&
       (uVar7 = extraout_var, local_84[0] == (char)local_68)) {
LAB_1491dc168:
      uVar6 = CONCAT71(uVar7,1);
      goto LAB_1491dc08f;
    }
    FUN_1491da766(local_90);
    if ((local_80 == local_8c) && (local_84[0] == local_90[0])) {
      local_a0 = local_50;
      local_a8 = local_58;
      FUN_1491db620(param_1,local_9c);
      if (local_98 == CONCAT44(uStack_60,uStack_64)) {
        uVar7 = (undefined7)((ulonglong)local_98 >> 8);
        if (local_9c[0] == (char)local_68) goto LAB_1491dc168;
      }
    }
    pcVar3 = local_d0;
    if (param_3 != 0) {
      local_b0 = *(undefined4 *)(param_3 + 0x18);
      local_b8 = *(undefined8 *)(param_3 + 0x10);
      local_c8 = *(undefined8 *)local_d0;
      local_c0 = *(undefined4 *)(local_d0 + 8);
      local_e8 = param_7;
      cVar4 = FUN_1491dbc0c(param_1,&local_c8,&local_b8,param_6);
      if (cVar4 == '\0') goto LAB_1491dc08d;
    }
    if ((*pcVar3 == '\x04') || (*pcVar3 == '\x02')) {
      uVar12 = 0xffffffff;
      if (param_3 != 0) {
        if (*(int *)(param_2 + 0x1c8) != *(int *)(param_2 + 500)) {
          lVar5 = *(longlong *)(param_3 + 0x14);
          uVar2 = (uint)((ulonglong)lVar5 >> 0x10);
          uVar11 = (uint)lVar5 & 0xffff;
          lVar9 = param_2 + 0x1f8;
          if (*(longlong *)(param_2 + 0x200) != 0) {
            lVar9 = *(longlong *)(param_2 + 0x200);
          }
          iVar8 = *(int *)(lVar9 + (ulonglong)
                                   (*(int *)(param_2 + 0x208) - 1U &
                                   (uint)*(byte *)(param_3 + 0x10) +
                                   ((int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar11)
                                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar11 >> 4)) * 10) * 4);
          if (iVar8 != -1) {
            do {
              lVar9 = *(longlong *)(param_2 + 0x1c0) + (longlong)iVar8 * 0x18;
              if ((*(longlong *)(lVar9 + 4) == lVar5) &&
                 (*(byte *)(*(longlong *)(param_2 + 0x1c0) + (longlong)iVar8 * 0x18) ==
                  *(byte *)(param_3 + 0x10))) {
                puVar10 = (undefined4 *)(lVar9 + 0xc);
                if (puVar10 != (undefined4 *)0x0 && lVar9 != 0) goto LAB_1491dc2a9;
                break;
              }
              iVar8 = *(int *)(lVar9 + 0x10);
            } while (iVar8 != -1);
          }
        }
        lVar5 = FUN_14449bdee(param_1,1);
        if (lVar5 != 0) {
          local_e0 = 0;
          local_e8 = CONCAT71(local_e8._1_7_,1);
          cVar4 = FUN_1491dc426(lVar5,param_2,param_3,0);
          if (cVar4 != '\0') {
            if (*(int *)(param_2 + 0x1c8) != *(int *)(param_2 + 500)) {
              lVar5 = *(longlong *)(param_3 + 0x14);
              uVar2 = (uint)((ulonglong)lVar5 >> 0x10);
              uVar11 = (uint)lVar5 & 0xffff;
              lVar9 = param_2 + 0x1f8;
              if (*(longlong *)(param_2 + 0x200) != 0) {
                lVar9 = *(longlong *)(param_2 + 0x200);
              }
              iVar8 = *(int *)(lVar9 + (ulonglong)
                                       (*(int *)(param_2 + 0x208) - 1U &
                                       (uint)*(byte *)(param_3 + 0x10) +
                                       ((int)((ulonglong)lVar5 >> 0x20) +
                                        ((uint)lVar5 << 0x10 | uVar11) +
                                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar11 >> 4)) * 10) * 4)
              ;
              if (iVar8 != -1) {
                do {
                  lVar9 = *(longlong *)(param_2 + 0x1c0) + (longlong)iVar8 * 0x18;
                  if ((*(longlong *)(lVar9 + 4) == lVar5) &&
                     (*(byte *)(*(longlong *)(param_2 + 0x1c0) + (longlong)iVar8 * 0x18) ==
                      *(byte *)(param_3 + 0x10))) goto LAB_1491dc386;
                  iVar8 = *(int *)(lVar9 + 0x10);
                } while (iVar8 != -1);
              }
            }
            lVar9 = 0;
LAB_1491dc386:
            puVar10 = (undefined4 *)(lVar9 + 0xc);
LAB_1491dc2a9:
            uVar12 = *puVar10;
          }
        }
      }
      local_e8 = CONCAT71(local_e8._1_7_,param_5);
      uVar6 = FUN_1444a12f0(param_1,param_2,uVar12,param_4);
      goto LAB_1491dc08f;
    }
  }
LAB_1491dc08d:
  uVar6 = 0;
LAB_1491dc08f:
  *(undefined1 *)(param_1 + 0x330) = uVar1;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1491dc426 FUN_1491dc426 body=2424 status=ok
// SIG undefined FUN_1491dc426(void)

undefined8
FUN_1491dc426(longlong param_1,longlong param_2,longlong param_3,float param_4,byte param_5,
             char param_6)

{
  undefined8 *puVar1;
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
  char cVar13;
  byte bVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong lVar22;
  undefined1 *puVar23;
  undefined2 *puVar24;
  uint uVar25;
  undefined8 unaff_RBP;
  byte *pbVar26;
  longlong lVar27;
  byte **ppbVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined1 local_190;
  byte *local_180;
  undefined4 local_174;
  int local_170;
  int local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  byte *local_148;
  undefined8 local_140;
  int iStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  int local_12c;
  byte *local_128;
  int *piStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  ulonglong local_c0;
  byte *pbVar21;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_3 != 0 && param_2 != 0) {
    bVar14 = *(byte *)(param_2 + 0x10);
    uVar16 = (ulonglong)bVar14;
    if (uVar16 < 0x21) {
      if ((0x100010002U >> (uVar16 & 0x3f) & 1) != 0) goto LAB_1491dc539;
      if ((0x14UL >> (uVar16 & 0x3f) & 1) == 0) goto LAB_1491dc762;
      lVar27 = param_2 + 0x110;
      if (*(longlong *)(param_2 + 0x1a0) != 0) {
        lVar27 = *(longlong *)(param_2 + 0x1a0);
      }
      if ((longlong)*(int *)(param_2 + 0x1b0) != 0) {
        lVar17 = 0;
        do {
          if (*(longlong *)(lVar27 + lVar17) == param_3) goto LAB_1491dc49b;
          lVar17 = lVar17 + 0x90;
        } while ((longlong)*(int *)(param_2 + 0x1b0) * 0x90 != lVar17);
      }
    }
    else {
LAB_1491dc762:
      if (bVar14 == 0x80) {
LAB_1491dc539:
        param_6 = '\x01';
        if (*(longlong *)(param_2 + 0x108) == param_3) goto LAB_1491dc49b;
      }
    }
    if ((*(char *)(param_3 + 0x10) != '\x04') || (*(char *)(param_3 + 0x210) != '\x01')) {
      uVar25 = (uint)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
      fVar30 = param_4;
      if (bVar14 == 4) {
        bVar29 = *(char *)(param_2 + 0x210) != '\x01';
        fVar30 = 0.0;
        if (bVar29) {
          fVar30 = param_4;
        }
        uVar25 = (uint)param_5;
        if (!bVar29) {
          uVar25 = 0;
        }
        if ((*(char *)(param_2 + 0x3a9) == '\x01') && ((longlong)*(int *)(param_2 + 0x370) != 0)) {
          lVar27 = 0;
          do {
            if ((*(longlong *)(*(longlong *)(param_2 + 0x368) + 4 + lVar27) ==
                 *(longlong *)(param_3 + 0x14)) &&
               (*(char *)(*(longlong *)(param_2 + 0x368) + lVar27) == *(char *)(param_3 + 0x10)))
            goto LAB_1491dc49b;
            lVar27 = lVar27 + 0xc;
          } while ((longlong)*(int *)(param_2 + 0x370) * 0xc != lVar27);
        }
      }
      lVar27 = *(longlong *)(param_1 + 0x20);
      if (lVar27 == 0) {
LAB_1491dc5f6:
        lVar27 = 0;
      }
      else {
        lVar17 = FUN_141095a0a();
        if ((*(int *)(*(longlong *)(lVar27 + 0x10) + 0x38) < *(int *)(lVar17 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar17 + 0x38) * 8) != lVar17 + 0x30)) goto LAB_1491dc5f6;
      }
      local_108 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = (byte *)0x0;
      piStack_120 = (int *)0x0;
      uStack_100 = 0x8000000000;
      local_f8 = 0xffffffff;
      cVar13 = FUN_1491d72f0(lVar27,param_3,param_2,&local_128);
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      local_180 = (byte *)(param_2 + 0x10);
      pbVar26 = (byte *)(param_3 + 0x10);
      uVar18 = FUN_14083ed90(&local_128);
      if (cVar13 == '\0') {
        cVar13 = (char)uVar25;
        if (param_6 == '\0') {
          local_174 = (undefined4)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
          if (1e-08 < fVar30) goto LAB_1491dc69f;
          local_174 = 0;
          pbVar21 = local_180;
        }
        else {
          uVar18 = FUN_1491f190c(param_1,param_2,uVar25);
          local_174 = (undefined4)CONCAT71((int7)((ulonglong)uVar18 >> 8),1e-08 < fVar30);
LAB_1491dc69f:
          pbVar21 = local_180;
          bVar14 = *local_180;
          if ((((ulonglong)bVar14 < 0x21) && ((0x100010016U >> ((ulonglong)bVar14 & 0x3f) & 1) != 0)
              ) || (bVar14 == 0x80)) {
            if (cVar13 == '\0') {
              FUN_1401571e4(lVar27,&local_128,param_2,1);
              FUN_1401571e4(lVar27,&local_128,param_2,0);
              lVar17 = 0xb0;
              lVar22 = 0x90;
            }
            else {
              FUN_1401571e4(lVar27,&local_128,param_2,3);
              FUN_1401571e4(lVar27,&local_128,param_2,2);
              lVar17 = 0xc0;
              lVar22 = 0xa0;
            }
            puVar23 = *(undefined1 **)(param_2 + lVar22);
            if (puVar23 == (undefined1 *)0x0) {
              puVar23 = &DAT_14cc07bfc;
            }
            *puVar23 = 1;
            puVar23 = *(undefined1 **)(param_2 + lVar17);
            if (puVar23 == (undefined1 *)0x0) {
              puVar23 = &DAT_14cc07bfc;
            }
            *puVar23 = 1;
            bVar14 = *(byte *)(param_2 + 0x10);
          }
          if (bVar14 == 4) {
            FUN_14449ed30(lVar27,&local_128,param_2,1);
            FUN_14449ed30(lVar27,&local_128,param_2,0);
          }
        }
        uVar12 = uRam000000014c8464d8;
        uVar11 = DAT_14c8464d0;
        uVar10 = DAT_14c8464c8;
        uVar9 = DAT_14c8464c0;
        uVar8 = DAT_14c8464b8;
        uVar7 = DAT_14c8464b0;
        uVar6 = DAT_14c8464a8;
        uVar5 = DAT_14c8464a0;
        uVar4 = DAT_14c846498;
        uVar3 = DAT_14c846490;
        uVar2 = DAT_14c846488;
        uVar18 = DAT_14c846480;
        bVar14 = *pbVar26;
        if ((((ulonglong)bVar14 < 0x21) && ((0x100010016U >> ((ulonglong)bVar14 & 0x3f) & 1) != 0))
           || (bVar14 == 0x80)) {
          bVar14 = *pbVar21;
          uVar20 = 0;
          if (bVar14 < 0x10) {
            ppbVar28 = &local_128;
            if (bVar14 == 1) goto LAB_1491dc9db;
            if (bVar14 != 2) {
              if (bVar14 != 4) goto LAB_1491dc49d;
              lVar17 = *(longlong *)(param_2 + 0x214);
              if (lVar17 != 0) {
                local_140._0_4_ = 0xffffffff;
                local_140._4_4_ = 0;
                iStack_138 = 0;
                uStack_134 = 0;
                uStack_130 = 0;
                local_12c = -1;
                if ((undefined8 *)(param_2 + 0x214) != &local_140) {
                  local_140._0_4_ = (undefined4)lVar17;
                  local_140._4_4_ = (undefined4)((ulonglong)lVar17 >> 0x20);
                }
                FUN_1491dabdc(lVar27,ppbVar28,pbVar26,&local_140);
                pbVar21 = (byte *)((ulonglong)local_128 & 0xffffffff);
                if ((int)local_128 == -1) {
                  ppbVar28 = (byte **)&DAT_14cc08210;
                  pbVar21 = &DAT_ffffffff;
                  if ((local_118._4_4_ != -1) && (1 < (int)local_118)) {
                    FUN_1446f470e(&local_148,piStack_120,1);
                    local_128 = local_148;
                    ppbVar28 = &local_128;
                    pbVar21 = local_148;
                  }
                }
                iVar15 = (int)pbVar21;
                *(undefined8 *)(param_2 + 0x214) = *ppbVar28;
                if (local_118._4_4_ != -1) {
                  if (piStack_120 != (int *)0x0) {
                    FUN_1400020a8();
                    iVar15 = (int)local_128;
                  }
                  piStack_120 = (int *)0x0;
                  local_118 = 0xffffffff00000000;
                }
                if (iVar15 != -1) {
                  local_128 = &DAT_ffffffff;
                }
                if ((local_12c != -1) && (CONCAT44(uStack_134,iStack_138) != 0)) {
                  FUN_1400020a8();
                }
              }
            }
            FUN_1491f1aa6(param_3,param_2);
            local_16c = *(int *)(param_2 + 0x1b0);
            lVar17 = (longlong)local_16c;
            *(uint *)(param_2 + 0x1b0) = local_16c + 1U;
            if (*(uint *)(param_2 + 0x1b4) < local_16c + 1U) {
              local_170 = local_16c;
              FUN_1492101e6(param_2 + 0x110);
              local_16c = local_170;
            }
            lVar22 = param_2 + 0x110;
            if (*(longlong *)(param_2 + 0x1a0) != 0) {
              lVar22 = *(longlong *)(param_2 + 0x1a0);
            }
            lVar19 = lVar17 * 0x90;
            *(longlong *)(lVar22 + lVar17 * 0x90) = param_3;
            *(float *)(lVar22 + (lVar17 * 0x12 + 1) * 8) = fVar30;
            *(float *)(lVar22 + lVar19 + 0xc) = fVar30;
            *(float *)(lVar22 + (lVar17 * 0x12 + 2) * 8) = fVar30;
            *(float *)(lVar22 + lVar19 + 0x14) = fVar30;
            *(float *)(lVar22 + (lVar17 * 0x12 + 3) * 8) = fVar30;
            *(float *)(lVar22 + lVar19 + 0x1c) = fVar30;
            puVar1 = (undefined8 *)(lVar22 + (lVar17 * 0x12 + 4) * 8);
            *puVar1 = uVar18;
            puVar1[1] = uVar2;
            puVar1 = (undefined8 *)(lVar22 + (lVar17 * 0x12 + 6) * 8);
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
            puVar1 = (undefined8 *)(lVar22 + (lVar17 * 0x12 + 8) * 8);
            *puVar1 = uVar5;
            puVar1[1] = uVar6;
            puVar1 = (undefined8 *)(lVar22 + (lVar17 * 0x12 + 10) * 8);
            *puVar1 = uVar7;
            puVar1[1] = uVar8;
            puVar1 = (undefined8 *)(lVar22 + (lVar17 * 0x12 + 0xc) * 8);
            *puVar1 = uVar9;
            puVar1[1] = uVar10;
            puVar1 = (undefined8 *)(lVar22 + (lVar17 * 0x12 + 0xe) * 8);
            *puVar1 = uVar11;
            puVar1[1] = uVar12;
            *(undefined1 *)(lVar22 + (lVar17 * 0x12 + 0x10) * 8) = 1;
            *(ulonglong *)(lVar22 + lVar19 + 0x81) = CONCAT44(local_140._4_4_,(undefined4)local_140)
            ;
            *(ulonglong *)(lVar22 + (lVar17 * 0x12 + 0x11) * 8) =
                 CONCAT35((undefined3)uStack_134,CONCAT41(iStack_138,local_140._7_1_));
            piStack_120 = &local_16c;
            local_128 = pbVar26;
            FUN_140fe526c(param_2 + 0x1c0,&local_148,&local_128,0);
            pbVar26 = local_180;
            if ((char)local_174 == '\0') {
              *(int *)(lVar27 + 0xa8) = *(int *)(lVar27 + 0xa8) + 1;
              if (*(int *)(lVar27 + 0x480) != *(int *)(lVar27 + 0x4ac)) {
                FUN_14920d1d6(lVar27 + 0x478);
                FUN_14920d31a(lVar27 + 0x478);
              }
            }
            else {
              if (*local_180 == 4) {
                puVar23 = *(undefined1 **)(param_2 + 0x448);
                if (puVar23 == (undefined1 *)0x0) {
                  puVar23 = &DAT_14cc07bfc;
                }
                *puVar23 = 1;
                puVar23 = *(undefined1 **)(param_2 + 0x468);
                if (puVar23 == (undefined1 *)0x0) {
                  puVar23 = &DAT_14cc07bfc;
                }
                *puVar23 = 1;
                puVar23 = *(undefined1 **)(param_2 + 0x4c8);
                if (puVar23 == (undefined1 *)0x0) {
                  puVar23 = &DAT_14cc07bfc;
                }
                *puVar23 = 1;
                puVar23 = *(undefined1 **)(param_2 + 0x4e8);
                if (puVar23 == (undefined1 *)0x0) {
                  puVar23 = &DAT_14cc07bfc;
                }
                *puVar23 = 1;
              }
              *(int *)(lVar27 + 0xa8) = *(int *)(lVar27 + 0xa8) + 1;
              if (*(int *)(lVar27 + 0x480) != *(int *)(lVar27 + 0x4ac)) {
                FUN_14920d1d6(lVar27 + 0x478);
                FUN_14920d31a(lVar27 + 0x478);
              }
              if (cVar13 == '\0') {
                local_190 = 1;
                local_198 = 1;
                FUN_1448340d4(lVar27,param_2,1,1);
                local_190 = 1;
                local_198 = 1;
                FUN_1448340d4(lVar27,param_2,0,1);
              }
            }
            if (*pbVar26 == 4) {
              FUN_1401571e4(lVar27,&local_128,param_2,0);
              FUN_1491ed5c6(lVar27,param_2,&local_128);
              *(undefined8 *)(param_2 + 0x3e0) = *(undefined8 *)(param_2 + 0x3f8);
              *(undefined4 *)(param_2 + 0x3d0) = *(undefined4 *)(param_2 + 1000);
              *(undefined4 *)(param_2 + 0x3d4) = *(undefined4 *)(param_2 + 0x3ec);
              *(undefined4 *)(param_2 + 0x3d8) = *(undefined4 *)(param_2 + 0x3f0);
              *(undefined4 *)(param_2 + 0x3dc) = *(undefined4 *)(param_2 + 0x3f4);
            }
          }
          else {
            if (((bVar14 != 0x10) && (bVar14 != 0x80)) && (bVar14 != 0x20)) goto LAB_1491dc49d;
LAB_1491dc9db:
            FUN_1491f1aa6(param_3,param_2);
            *(longlong *)(param_2 + 0x108) = param_3;
            if (SBORROW1('\0',*(char *)(param_2 + 0x10))) {
              local_150 = *(undefined4 *)(param_3 + 0x18);
              local_158 = *(undefined8 *)pbVar26;
              local_168 = *(undefined8 *)pbVar21;
              local_160 = *(undefined4 *)(pbVar21 + 8);
              FUN_14918f172(lVar27,&local_168,DAT_14cc079a0);
              FUN_140ad4746(lVar27,0x12,param_2);
            }
            *(int *)(lVar27 + 0xa8) = *(int *)(lVar27 + 0xa8) + 1;
            if (*(int *)(lVar27 + 0x480) != *(int *)(lVar27 + 0x4ac)) {
              FUN_14920d1d6(lVar27 + 0x478);
              FUN_14920d31a(lVar27 + 0x478);
            }
            if (cVar13 == '\0') {
              local_190 = 1;
              local_198 = 1;
              FUN_1448340d4(lVar27,param_2,1,1);
              local_190 = 1;
              local_198 = 1;
              FUN_1448340d4(lVar27,param_2,0,1);
            }
          }
          FUN_1491ec404(param_1,5,param_2);
          uVar20 = 1;
          goto LAB_1491dc49d;
        }
      }
      else {
        FUN_14919e8cc(pbVar26,&local_128);
        puVar24 = &DAT_149dfb77a;
        pbVar26 = (byte *)&DAT_149dfb77a;
        if ((int)piStack_120 != 0) {
          pbVar26 = local_128;
        }
        FUN_14919e8cc(local_180,&local_140);
        if (iStack_138 != 0) {
          puVar24 = (undefined2 *)CONCAT44(local_140._4_4_,(undefined4)local_140);
        }
        FUN_1491f18a4(param_1,puVar24,pbVar26);
        if (CONCAT44(local_140._4_4_,(undefined4)local_140) != 0) {
          FUN_1400020a8();
        }
        if (local_128 != (byte *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_1491dc49b:
  uVar20 = 0;
LAB_1491dc49d:
  if ((local_c0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20;
}



// FUNCTION 1491dcda0 FUN_1491dcda0 body=120 status=ok
// SIG undefined FUN_1491dcda0(void)

void FUN_1491dcda0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1491da766(local_3c);
  local_40 = *(undefined4 *)(param_2 + 1);
  local_48 = *param_2;
  local_58 = param_4;
  FUN_149190650(param_1,&local_48,local_3c,param_3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dce1a FUN_1491dce1a body=121 status=ok
// SIG undefined FUN_1491dce1a(void)

void FUN_1491dce1a(undefined8 param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1491da766(local_3c);
  local_40 = *(undefined4 *)(param_2 + 0x18);
  local_48 = *(undefined8 *)(param_2 + 0x10);
  local_58 = param_4;
  FUN_149190650(param_1,&local_48,local_3c,param_3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dce94 FUN_1491dce94 body=120 status=ok
// SIG undefined FUN_1491dce94(void)

void FUN_1491dce94(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1491db37e(local_3c);
  local_40 = *(undefined4 *)(param_2 + 1);
  local_48 = *param_2;
  local_58 = param_4;
  FUN_149190650(param_1,&local_48,local_3c,param_3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dcf0e FUN_1491dcf0e body=121 status=ok
// SIG undefined FUN_1491dcf0e(void)

void FUN_1491dcf0e(undefined8 param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1491db37e(local_3c);
  local_40 = *(undefined4 *)(param_2 + 0x18);
  local_48 = *(undefined8 *)(param_2 + 0x10);
  local_58 = param_4;
  FUN_149190650(param_1,&local_48,local_3c,param_3);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dcf88 FUN_1491dcf88 body=324 status=ok
// SIG undefined FUN_1491dcf88(void)

undefined8 * FUN_1491dcf88(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_4c [4];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(undefined1 *)(param_1 + 0x330);
  *(undefined1 *)(param_1 + 0x330) = 1;
  FUN_1491db37e(local_4c);
  uVar2 = FUN_140813180(param_1,local_4c);
  if ((((int)uVar2 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar2)) ||
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar2 * 8), lVar3 == 0)) {
    lVar3 = FUN_14449bdee(param_1,1);
    if (lVar3 == 0) {
      *(undefined1 *)param_2 = 0;
      *(undefined8 *)((longlong)param_2 + 4) = 0;
    }
    else {
      local_60 = 0;
      local_58 = 0;
      puVar4 = (undefined8 *)FUN_144a72ab6(0x28,&local_60);
      *puVar4 = &PTR_LAB_14bb90400;
      uVar5 = FUN_144a3f946();
      puVar4[2] = uVar5;
      *puVar4 = &PTR_FUN_14bb90390;
      puVar4[3] = 0;
      FUN_14485c47a(puVar4 + 3,param_1);
      puVar4[4] = FUN_1491dd2b0;
      local_6c = 0;
      local_68 = 0;
      local_78 = &local_60;
      FUN_1491dd0ce(lVar3,param_2,local_48);
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0x18);
    *param_2 = *(undefined8 *)(lVar3 + 0x10);
  }
  *(undefined1 *)(param_1 + 0x330) = uVar1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dd0ce FUN_1491dd0ce body=481 status=ok
// SIG undefined FUN_1491dd0ce(void)

undefined8 *
FUN_1491dd0ce(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = param_3;
  cVar1 = FUN_14576d4b4();
  if (cVar1 == '\0') {
    *(undefined1 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
    goto LAB_1491dd117;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_1491dd173:
    lVar5 = 0;
  }
  else {
    lVar3 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1491dd173;
  }
  uVar6 = 0;
  lVar3 = FUN_1491edbd4(param_1,0);
  local_59 = *(undefined1 *)(lVar5 + 0x4c8);
  *(undefined1 *)(lVar5 + 0x4c8) = 0;
  *(undefined1 *)(lVar3 + 0x10) = 0x20;
  FUN_1491ec4cc(param_1,&local_58,&local_50,0x20);
  *(undefined8 *)(lVar3 + 0x14) = local_58;
  FUN_1491bef34(lVar3 + 0x110,param_5);
  uVar2 = FUN_140813180(lVar5,param_4);
  if (-1 < (int)uVar2) {
    if ((int)uVar2 < *(int *)(lVar5 + 0xc0)) {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar2 * 8);
    }
    else {
      uVar6 = 0;
    }
  }
  local_88 = &local_50;
  FUN_1491ec5ea(param_1,lVar3,uVar6,1);
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = (undefined8 *)CONCAT71(local_88._1_7_,1);
  FUN_140122d4e(lVar5,lVar3,&DAT_14c846480,0);
  FUN_144b3caae(lVar3 + 0x48,lVar3 + 0x68);
  if (*(undefined1 **)(lVar3 + 0xa0) != (undefined1 *)0x0) {
    puVar4 = &DAT_14bb83710;
    if (*(undefined1 **)(lVar3 + 0xc0) != (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(lVar3 + 0xc0);
    }
    **(undefined1 **)(lVar3 + 0xa0) = *puVar4;
  }
  if (*(undefined1 **)(lVar3 + 0x90) != (undefined1 *)0x0) {
    puVar4 = &DAT_14bb83710;
    if (*(undefined1 **)(lVar3 + 0xb0) != (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(lVar3 + 0xb0);
    }
    **(undefined1 **)(lVar3 + 0x90) = *puVar4;
  }
  *(undefined1 *)(lVar5 + 0x4c8) = local_59;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0x18);
  *param_2 = *(undefined8 *)(lVar3 + 0x10);
LAB_1491dd117:
  FUN_1449db362(param_5);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dd2b0 FUN_1491dd2b0 body=636 status=ok
// SIG undefined FUN_1491dd2b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1491dd2b0(undefined4 param_1,double *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  double *pdVar15;
  double *pdVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  
  uVar11 = FUN_144a799b0();
  lVar12 = FUN_144a78ede();
  if (lVar12 != 0) {
    auVar1 = *(undefined1 (*) [16])(lVar12 + 0x280);
    auVar2 = *(undefined1 (*) [16])(lVar12 + 0x290);
    lVar17 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
    auVar23._8_4_ = (int)lVar17;
    auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
    auVar23._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar13 = movmskpd(param_1,auVar23);
    lVar17 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
    auVar25._8_4_ = (int)lVar17;
    auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
    auVar25._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar14 = movmskpd(uVar11,auVar25);
    if ((uVar14 & 0x3fffffff) != 0 || iVar13 != 0) {
      auVar25 = divpd(_DAT_149934d80,auVar1);
      auVar23 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
      dVar18 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar25._0_8_);
      dVar19 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar25._8_8_);
      dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar23._0_8_);
      dVar10 = *(double *)(lVar12 + 0x240);
      dVar20 = -dVar10;
      dVar21 = -*(double *)(lVar12 + 0x248);
      dVar5 = *(double *)(lVar12 + 0x250) * -1.0;
      dVar6 = *(double *)(lVar12 + 600) * 1.0;
      dVar22 = *(double *)(lVar12 + 0x260) * dVar18;
      dVar24 = *(double *)(lVar12 + 0x268) * dVar19;
      dVar4 = *(double *)(lVar12 + 0x270) * dVar3;
      *param_2 = dVar20;
      param_2[1] = dVar21;
      auVar1._8_4_ = SUB84(dVar6,0);
      auVar1._0_8_ = dVar5;
      auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 2) = auVar1;
      dVar8 = dVar24 * dVar20 - dVar21 * dVar22;
      dVar9 = dVar4 * dVar21 - dVar5 * dVar24;
      dVar7 = dVar22 * dVar5 - dVar20 * dVar4;
      dVar9 = dVar9 + dVar9;
      dVar7 = dVar7 + dVar7;
      dVar8 = dVar8 + dVar8;
      param_2[4] = 0.0 - ((dVar8 * dVar21 - dVar7 * dVar5) + dVar6 * dVar9 + dVar22);
      param_2[5] = 0.0 - (dVar8 * dVar10 + dVar5 * dVar9 + dVar6 * dVar7 + dVar24);
      param_2[6] = 0.0 - (dVar6 * dVar8 + dVar4 + (dVar7 * dVar20 - dVar9 * dVar21));
      param_2[7] = 0.0;
      param_2[8] = dVar18;
      param_2[9] = dVar19;
      param_2[10] = dVar3;
      param_2[0xb] = 0.0;
      return param_2;
    }
  }
  pdVar15 = (double *)&DAT_14c846480;
  pdVar16 = param_2;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *pdVar16 = *pdVar15;
    pdVar15 = pdVar15 + 1;
    pdVar16 = pdVar16 + 1;
  }
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
  return param_2;
}



// FUNCTION 1491dd52c FUN_1491dd52c body=203 status=ok
// SIG undefined FUN_1491dd52c(void)

int * FUN_1491dd52c(undefined8 param_1,int *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_98 [40];
  code *local_70;
  int **local_68;
  int *local_60;
  undefined1 *local_58;
  int **local_50;
  int local_44;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = &local_21;
  local_60 = &local_44;
  local_44 = 0;
  local_58 = &LAB_1444ab206;
  local_50 = &local_60;
  local_38 = param_1;
  local_30 = param_3;
  local_21 = param_4;
  FUN_1444a143c(&local_40);
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (local_44 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_44);
  }
  if (local_44 != 0) {
    FUN_14920a7da(param_2);
  }
  local_70 = FUN_1444ab20c;
  local_68 = &local_60;
  local_60 = param_2;
  FUN_1444a143c(&local_40);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dd5fa FUN_1491dd5fa body=47 status=ok
// SIG undefined FUN_1491dd5fa(void)

char * FUN_1491dd5fa(longlong param_1,char *param_2)

{
  char *pcVar1;
  
  if (((*param_2 == '@') && (*(longlong *)(param_1 + 0x570) != 0)) &&
     (pcVar1 = (char *)FUN_1408133a6(*(longlong *)(param_1 + 0x570),param_2), pcVar1 != (char *)0x0)
     ) {
    return pcVar1;
  }
  return param_2;
}



// FUNCTION 1491dd62a FUN_1491dd62a body=502 status=ok
// SIG undefined FUN_1491dd62a(void)

void FUN_1491dd62a(longlong param_1,undefined4 *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined1 *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    plVar2 = (longlong *)(param_1 + 0x80);
    lVar4 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x80) + 8 + lVar4) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x80) + lVar4) != 0)) {
        local_90 = 0;
        FUN_14485c47a(&local_90,param_1);
        if (param_3 == '\0') {
          FUN_1491cbf44(plVar2,param_1,param_2);
        }
        else {
          local_e0 = local_90;
          local_d8 = 0;
          uStack_d0 = 0;
          local_c8 = 2;
          if (plVar2 != &local_d8) {
            FUN_14920d0a4(&local_d8,plVar2);
          }
          local_a0 = *(undefined8 *)(param_2 + 8);
          local_c0 = *param_2;
          uStack_bc = param_2[1];
          uStack_b8 = param_2[2];
          uStack_b4 = param_2[3];
          local_b0 = param_2[4];
          uStack_ac = param_2[5];
          uStack_a8 = param_2[6];
          uStack_a4 = param_2[7];
          local_88[0] = (undefined1 *)0x0;
          puVar3 = (undefined8 *)FUN_14001cc68(0x50,8);
          *puVar3 = &PTR_LAB_14bb90470;
          puVar3[1] = local_e0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 2;
          local_78 = puVar3;
          FUN_14019d794(puVar3 + 2,&local_d8);
          puVar3[9] = local_a0;
          *(undefined4 *)(puVar3 + 5) = local_c0;
          *(undefined4 *)((longlong)puVar3 + 0x2c) = uStack_bc;
          *(undefined4 *)(puVar3 + 6) = uStack_b8;
          *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_b4;
          *(undefined4 *)(puVar3 + 7) = local_b0;
          *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_ac;
          *(undefined4 *)(puVar3 + 8) = uStack_a8;
          *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_a4;
          if (puVar3 != (undefined8 *)&DAT_fffffffffffffff8) {
            local_88[0] = &LAB_1444ab252;
          }
          local_e8 = 1;
          FUN_14014aede(&local_98,local_88);
          if (local_98 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_98 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*local_98)(local_98,1);
            }
          }
          FUN_144760e21(local_d8,uStack_d0 & 0xffffffff);
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x88) * 0x10 != lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dd822 FUN_1491dd822 body=177 status=ok
// SIG undefined FUN_1491dd822(void)

void FUN_1491dd822(longlong param_1,undefined8 *param_2,float param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  float local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_54 = 0;
  local_38 = 0;
  local_58[0] = 1;
  local_4c = *param_2;
  local_44 = *(undefined4 *)(param_2 + 1);
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_40 = param_3;
  if (lVar1 != 0) {
    lVar2 = FUN_1401242c6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_40 = param_3 + *(float *)(lVar1 + 0x4c);
    }
  }
  FUN_1491dd62a(param_1,local_58,param_4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dd8d4 FUN_1491dd8d4 body=7 status=ok
// SIG undefined FUN_1491dd8d4(void)

undefined1 FUN_1491dd8d4(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x330);
}



// FUNCTION 1491dd8dc FUN_1491dd8dc body=247 status=ok
// SIG undefined FUN_1491dd8dc(void)

longlong FUN_1491dd8dc(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x338);
  if (lVar2 == 0 && param_2 == '\x01') {
    FUN_144a4a122(&local_19);
    FUN_1446f470e(&local_28,L"RuleManager",1);
    lVar2 = FUN_1491dd9d4(param_1,local_28);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x338) = lVar2;
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x4000000);
    FUN_14485c47a(*(longlong *)(param_1 + 0x338) + 0x28,param_1);
    lVar2 = *(longlong *)(param_1 + 0x338);
    FUN_144a49ece(&local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dd9d4 FUN_1491dd9d4 body=183 status=ok
// SIG undefined FUN_1491dd9d4(void)

undefined8 FUN_1491dd9d4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14594ca34();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0x40;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dda8c FUN_1491dda8c body=105 status=ok
// SIG undefined FUN_1491dda8c(void)

undefined8
FUN_1491dda8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined1 local_30;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *(undefined4 *)(param_5 + 1);
  local_20 = *param_5;
  local_38 = &local_20;
  local_30 = param_6;
  FUN_1444a18e6(param_1,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ddaf6 FUN_1491ddaf6 body=135 status=ok
// SIG undefined FUN_1491ddaf6(void)

undefined1 * FUN_1491ddaf6(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  puVar5 = &DAT_14c846480;
  puVar6 = (undefined8 *)(param_1 + 0x20);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = &DAT_14c846480;
  puVar6 = (undefined8 *)(param_1 + 0x80);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined8 *)(param_1 + 0xf0) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xe0) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  FUN_1491da766(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x104) = 0;
  return param_1;
}



// FUNCTION 1491ddba4 FUN_1491ddba4 body=92 status=ok
// SIG undefined FUN_1491ddba4(void)

void FUN_1491ddba4(void)

{
  undefined8 *in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = *(undefined4 *)(in_stack_00000028 + 1);
  local_18 = *in_stack_00000028;
  local_28 = &local_18;
  local_20 = in_stack_00000030;
  FUN_1444a1d06();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ddc02 FUN_1491ddc02 body=202 status=ok
// SIG undefined FUN_1491ddc02(void)

ulonglong FUN_1491ddc02(char *param_1,ulonglong param_2)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((((*(short *)(param_1 + 0xc) != -1) && ((uint)*(ushort *)(param_1 + 6) < DAT_14c87eb08 + 1U))
      && (*(longlong *)(param_1 + 4) != 0)) && (*param_1 != '\0')) {
    iVar2 = FUN_144a78877(param_2 & 0xffffffff);
    if (*(longlong *)(param_2 + 0x570) != 0) {
      iVar2 = FUN_144a78877(iVar2);
    }
    if (iVar2 == *(int *)(param_1 + 0x10)) {
      uVar1 = *(ushort *)(param_1 + 0xc);
      if ((int)(uint)uVar1 < *(int *)(param_2 + 0xc0)) {
        lVar4 = *(longlong *)(*(longlong *)(param_2 + 0xb8) + (ulonglong)uVar1 * 8);
      }
      else {
        lVar4 = 0;
      }
      if (*(longlong *)(param_1 + 0x18) == lVar4) {
        if (uVar1 == 0xffff) {
          return 0;
        }
        if (DAT_14c87eb08 + 1U <= (uint)*(ushort *)(param_1 + 6)) {
          return 0;
        }
        if (*(longlong *)(param_1 + 4) == 0) {
          return 0;
        }
        return (ulonglong)CONCAT11((char)(*(ushort *)(param_1 + 6) >> 8),*param_1 != '\0');
      }
    }
  }
  uVar3 = FUN_144828dba(param_1,param_1,param_2);
  return uVar3;
}



// FUNCTION 1491ddccc FUN_1491ddccc body=262 status=ok
// SIG undefined FUN_1491ddccc(void)

void FUN_1491ddccc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x98);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
    *(undefined8 *)(param_1 + 0x98) = 0;
    plVar3 = *(longlong **)(param_1 + 0xa0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
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
  }
  lVar4 = *param_2;
  if (lVar4 != 0) {
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar3 = *(longlong **)(param_1 + 0xa0);
    *(longlong *)(param_1 + 0x98) = lVar4;
    *(longlong *)(param_1 + 0xa0) = lVar5;
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
    (**(code **)(**(longlong **)(param_1 + 0x98) + 8))(*(longlong **)(param_1 + 0x98),param_1);
  }
  plVar3 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001491dddce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1491dddd2 FUN_1491dddd2 body=177 status=ok
// SIG undefined FUN_1491dddd2(void)

void FUN_1491dddd2(longlong param_1,undefined1 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 auStack_58 [44];
  undefined2 local_2c;
  undefined1 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)(param_3 + 0x10);
    local_2a = *(undefined1 *)(param_3 + 0x13);
    local_2c = *(undefined2 *)(param_3 + 0x11);
    uVar3 = *(undefined8 *)(param_3 + 0x14);
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = param_2;
  *(undefined1 *)((longlong)puVar2 + 0xc) = uVar4;
  *(undefined2 *)((longlong)puVar2 + 0xd) = local_2c;
  *(undefined1 *)((longlong)puVar2 + 0xf) = local_2a;
  puVar2[2] = uVar3;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x580);
    *(undefined8 **)(param_1 + 0x580) = puVar2;
    *puVar1 = puVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dde84 FUN_1491dde84 body=64 status=ok
// SIG undefined FUN_1491dde84(void)

bool FUN_1491dde84(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    *param_2 = *(undefined8 *)(lVar1 + 8);
    param_2[1] = uVar3;
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    if (lVar2 != 0) {
      FUN_1400020a8(lVar2);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 1491ddec4 FUN_1491ddec4 body=103 status=ok
// SIG undefined FUN_1491ddec4(void)

void FUN_1491ddec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Found invalid queued notification %s - %s. Skipping notification.",
                param_2,param_3);
  FUN_1491ed958(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ddf2c FUN_1491ddf2c body=163 status=ok
// SIG undefined FUN_1491ddf2c(void)

undefined8
FUN_1491ddf2c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,int param_5)

{
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1401261c4(param_1,local_98,param_3,(param_5 - 1U & 0xfffffffd) == 0);
  local_a8 = param_5;
  local_a0 = local_98;
  FUN_1444a2580(param_1,param_2,param_4,param_3 + 0x110);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ddfd0 FUN_1491ddfd0 body=177 status=ok
// SIG undefined FUN_1491ddfd0(void)

void FUN_1491ddfd0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined8 local_108 [12];
  undefined1 local_a4 [132];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  memset(local_a4,0,0x84);
  FUN_14919dde6(local_a4,param_2,*(undefined1 *)(param_1 + 1),*(undefined1 *)(param_1 + 0xc));
  local_118 = param_1 + 0xa8;
  FUN_1491c1c06(local_a4,param_1 + 0x10,*(undefined1 *)(param_1 + 1),param_1 + 0x24);
  FUN_1491932b8(local_a4,local_108,*(undefined1 *)(param_1 + 1),*(undefined1 *)(param_1 + 0xc));
  puVar2 = local_108;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491de082 FUN_1491de082 body=178 status=ok
// SIG undefined FUN_1491de082(void)

undefined8 *
FUN_1491de082(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             char param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_3 != 0) {
    if ((param_5 == '\0') || (*(char *)(param_3 + 0x3c1) != '\x01')) {
      FUN_141706cfc(&local_30,param_4);
      uVar1 = CONCAT44(uStack_24,uStack_28);
      *param_2 = local_20;
      param_2[1] = CONCAT44(uStack_2c,local_30);
    }
    else {
      FUN_14690c377(&local_30,param_4,*(undefined1 *)(param_3 + 0x3c8),1);
      *(undefined4 *)param_2 = local_30;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_2c;
      *(undefined4 *)(param_2 + 1) = uStack_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_24;
      uVar1 = local_20;
    }
    param_2[2] = uVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491de136 FUN_1491de136 body=566 status=ok
// SIG undefined FUN_1491de136(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1491de136(char *param_1,double *param_2,char param_3,undefined4 param_4,char param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8 [24];
  double local_90;
  double dStack_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = param_2[2];
  local_78 = *param_2;
  dStack_70 = param_2[1];
  if (*param_1 != (char)param_4) {
    local_c8 = 0;
    FUN_14690c9ab(&local_90,&local_78,param_4,
                  CONCAT71((int7)((ulonglong)local_68 >> 8),*param_1) & 0xffffffff);
    local_68 = local_80;
    local_78 = local_90;
    dStack_70 = dStack_88;
  }
  dVar4 = local_68;
  dVar3 = dStack_70;
  dVar13 = local_78;
  if (param_5 == '\0') {
    pdVar5 = (double *)(param_1 + 0x20);
    if (param_3 == '\0') {
      pdVar5 = (double *)(param_1 + 8);
    }
    pdVar5[2] = local_68;
    *pdVar5 = local_78;
    pdVar5[1] = dStack_70;
  }
  else {
    pdVar5 = (double *)(param_1 + 0x20);
    if (param_3 == '\0') {
      pdVar5 = (double *)(param_1 + 8);
    }
    local_80 = *pdVar5;
    local_90 = pdVar5[1];
    dStack_88 = pdVar5[2];
    FUN_1467fae54(&local_90,local_a8,&local_c0);
    dVar1 = (double)DAT_1499387d0;
    dVar2 = DAT_1499387d0._8_8_;
    auVar11._8_8_ = dVar4 - local_b8;
    auVar11._0_8_ = dVar3 - local_c0;
    auVar6 = divpd(auVar11,_DAT_1499387d0);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (dVar13 - local_b0) / 360.0;
    auVar6 = roundpd(auVar6,auVar6,3);
    auVar11 = roundpd(auVar10,auVar10,3);
    auVar16._0_8_ = (dVar13 - local_b0) - auVar11._0_8_ * dVar1;
    auVar16._8_8_ = 0.0 - auVar11._8_8_ * dVar2;
    dVar13 = (dVar3 - local_c0) - auVar6._0_8_ * dVar1;
    dVar3 = (dVar4 - local_b8) - auVar6._8_8_ * dVar2;
    auVar15._0_8_ = dVar13 + dVar1;
    auVar15._8_8_ = dVar3 + dVar2;
    auVar14._0_8_ = dVar1 + auVar16._0_8_;
    auVar14._8_8_ = dVar2 + auVar16._8_8_;
    auVar7._8_8_ = -(ulonglong)(0.0 <= dVar3);
    auVar7._0_8_ = -(ulonglong)(0.0 <= dVar13);
    auVar6._8_4_ = SUB84(dVar3,0);
    auVar6._0_8_ = dVar13;
    auVar6._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar11 = blendvpd(auVar15,auVar6,auVar7);
    auVar8._8_8_ = -(ulonglong)(0.0 <= auVar16._8_8_);
    auVar8._0_8_ = -(ulonglong)(0.0 <= auVar16._0_8_);
    auVar6 = blendvpd(auVar14,auVar16,auVar8);
    auVar12._0_8_ = auVar11._0_8_ + -360.0;
    auVar12._8_8_ = auVar11._8_8_ + -360.0;
    auVar9._8_8_ = -(ulonglong)(180.0 < auVar11._8_8_);
    auVar9._0_8_ = -(ulonglong)(180.0 < auVar11._0_8_);
    auVar11 = blendvpd(auVar11,auVar12,auVar9);
    dVar13 = auVar6._0_8_;
    *pdVar5 = (double)(~-(ulonglong)(180.0 < dVar13) & (ulonglong)dVar13 |
                      (ulonglong)(dVar13 + -360.0) & -(ulonglong)(180.0 < dVar13)) + local_80;
    pdVar5[1] = auVar11._0_8_ + local_90;
    pdVar5[2] = auVar11._8_8_ + dStack_88;
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491de36e FUN_1491de36e body=374 status=ok
// SIG undefined FUN_1491de36e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1491de36e(void)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc07800) && (FUN_144b3d300(&DAT_14cc07800), DAT_14cc07800 == -1)) {
    DAT_14cc077f0 = 0;
    _DAT_14cc077f8 = 0;
    atexit(FUN_1444a656a);
    _Init_thread_footer(&DAT_14cc07800);
  }
  if (DAT_14cc077f8 == 0) {
    lVar8 = 0;
    do {
      uVar6 = FUN_149197637();
      FUN_1406f1d90(uVar6,local_50,lVar8);
      puVar7 = (undefined8 *)FUN_1447a1f4a(local_50);
      uVar4 = _DAT_14cc077f8;
      lVar9 = (longlong)DAT_14cc077f8;
      uVar5 = DAT_14cc077f8 + 1;
      _DAT_14cc077f8 = CONCAT44(DAT_14cc077fc,uVar5);
      if (DAT_14cc077fc < uVar5) {
        FUN_1447a1bd6(&DAT_14cc077f0,uVar4 & 0xffffffff);
      }
      lVar3 = DAT_14cc077f0;
      lVar9 = lVar9 * 0x10;
      puVar1 = (undefined8 *)(DAT_14cc077f0 + lVar9);
      *(undefined8 *)(DAT_14cc077f0 + lVar9) = 0;
      iVar2 = *(int *)(puVar7 + 1);
      _Src = (void *)*puVar7;
      *(int *)(lVar3 + 8 + lVar9) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
      if (local_50[0] != (longlong *)0x0) {
        (**(code **)(*local_50[0] + 0x10))();
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491de4e6 FUN_1491de4e6 body=657 status=ok
// SIG undefined FUN_1491de4e6(void)

void FUN_1491de4e6(undefined8 param_1,longlong param_2,undefined8 *param_3,uint param_4,
                  undefined1 param_5,undefined8 param_6,char param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *unaff_RDI;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_120;
  char local_118;
  undefined1 local_110;
  undefined1 local_108 [96];
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 != 0) {
    lVar2 = 0x468;
    uVar9 = (ulonglong)param_4;
    if (param_4 < 4) {
      lVar2 = *(longlong *)(&DAT_14bb907d8 + uVar9 * 8);
    }
    pcVar4 = "";
    if (*(char **)(param_2 + lVar2) != (char *)0x0) {
      pcVar4 = *(char **)(param_2 + lVar2);
    }
    if (*pcVar4 == '\0') {
      if (param_4 == 0) {
        lVar2 = param_2 + 0x420;
      }
      else if (param_4 == 1) {
        lVar2 = param_2 + 0x400;
      }
      else if (param_4 == 3) {
        lVar2 = param_2 + 0x410;
      }
      else {
        lVar2 = param_2 + 0x430;
      }
      puVar3 = (undefined8 *)FUN_144b3cbe6(lVar2);
      unaff_RDI = local_a8;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *unaff_RDI = *puVar3;
        puVar3 = puVar3 + 1;
        unaff_RDI = unaff_RDI + 1;
      }
      if ((param_7 == '\0') && (cVar1 = FUN_141124de2(local_a8,param_3,0x38d1b717), cVar1 != '\0'))
      goto LAB_1491de6a2;
    }
    FUN_1401261c4(param_1,local_a8,param_2,param_4);
    local_120 = 1;
    local_128 = 1;
    FUN_1448340d4(param_1,param_2,(param_4 & 0xfffffffd) == 0,
                  CONCAT71((int7)((ulonglong)unaff_RDI >> 8),param_5) & 0xffffffff);
    bVar10 = (param_4 - 1 & 0xfffffffd) == 0;
    FUN_1401571e4(param_1,local_108,param_2,bVar10);
    uVar7 = (ulonglong)!bVar10 * 0x20;
    puVar5 = *(undefined1 **)(param_2 + 0x90 + uVar7);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_14cc07bfc;
    }
    *puVar5 = 1;
    if (param_4 < 4) {
      lVar2 = *(longlong *)(&DAT_14bb907b8 + uVar9 * 8);
      lVar6 = (longlong)(int)(&switchD_140157364::switchdataD_14bb90818)[uVar9];
    }
    else {
      lVar2 = 0x430;
      lVar6 = 0;
    }
    puVar3 = *(undefined8 **)(param_2 + 8 + lVar2);
    if (puVar3 != (undefined8 *)0x0) {
      puVar8 = param_3;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    lVar2 = 0x468;
    if (param_4 < 4) {
      lVar2 = *(longlong *)(&DAT_14bb907d8 + uVar9 * 8);
    }
    puVar5 = *(undefined1 **)(param_2 + lVar2);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_14cc07bfc;
    }
    *puVar5 = 0;
    puVar5 = *(undefined1 **)(param_2 + 0x440 + *(longlong *)(&DAT_14bb90848 + lVar6 * 8));
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_14cc07bfc;
    }
    *puVar5 = 1;
    puVar5 = *(undefined1 **)(param_2 + 0x4c0 + (uVar7 | 8));
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_14cc07bfc;
    }
    *puVar5 = 1;
    if ((param_4 & 0xfffffffd) == 0) {
      local_110 = 0;
      local_118 = param_7;
      local_120 = 0;
      local_128 = param_5;
      FUN_1491de4e6(param_1,param_2,param_3,(1 < param_4) * '\x02' + '\x01');
    }
  }
LAB_1491de6a2:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491de778 FUN_1491de778 body=1388 status=ok
// SIG undefined FUN_1491de778(void)

undefined8 FUN_1491de778(char *param_1,char *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  char cVar17;
  int iVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  longlong lVar24;
  undefined1 auStack_208 [32];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
       (*(longlong *)(param_1 + 4) == *(longlong *)(param_2 + 4))) &&
      ((param_1[0xc] == param_2[0xc] && (param_1[0xd] == param_2[0xd])))) &&
     (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))) {
    cVar17 = FUN_14921099e(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
    if (((cVar17 != '\0') && (param_1[0x20] == param_2[0x20])) &&
       ((param_1[300] == param_2[300] &&
        (((param_1[0x12d] == param_2[0x12d] &&
          (*(longlong *)(param_1 + 0x130) == *(longlong *)(param_2 + 0x130))) &&
         (param_1[0x148] == param_2[0x148])))))) {
      lVar24 = *(longlong *)(param_2 + 0x150);
      if ((lVar24 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar24);
      }
      if ((((*(longlong *)(param_1 + 0x150) == lVar24) &&
           (ABS(*(float *)(param_1 + 0x138) - *(float *)(param_2 + 0x138)) < 0.001)) &&
          ((ABS(*(float *)(param_1 + 0x13c) - *(float *)(param_2 + 0x13c)) < 0.001 &&
           ((ABS(*(float *)(param_1 + 0x140) - *(float *)(param_2 + 0x140)) < 0.001 &&
            (ABS(*(float *)(param_1 + 0x144) - *(float *)(param_2 + 0x144)) < 0.001)))))) &&
         (*(int *)(param_1 + 0x160) == *(int *)(param_2 + 0x160))) {
        cVar17 = FUN_1492109ce(*(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_2 + 0x158));
        if ((cVar17 != '\0') && (*(int *)(param_1 + 0x180) == *(int *)(param_2 + 0x180))) {
          cVar17 = FUN_1492109ce(*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_2 + 0x178));
          if ((cVar17 != '\0') &&
             ((param_1[0x198] == param_2[0x198] && (param_1[0x199] == param_2[0x199])))) {
            iVar18 = *(int *)(param_1 + 0x1a8);
            if (iVar18 == *(int *)(param_2 + 0x1a8)) {
              if (iVar18 != 0) {
                iVar18 = memcmp(*(void **)(param_1 + 0x1a0),*(void **)(param_2 + 0x1a0),
                                (longlong)iVar18);
                if (iVar18 != 0) goto LAB_1491de7ea;
              }
              if ((param_1[0x1b0] == param_2[0x1b0]) && (param_1[0x1b1] == param_2[0x1b1])) {
                FUN_1491932b8(param_1 + 0x24,&local_c8,param_1[1],param_1[0xc]);
                pcVar23 = param_2 + 0x24;
                uVar19 = FUN_1491932b8(pcVar23,&local_128,param_1[1],param_1[0xc]);
                auVar6._8_8_ = -(ulonglong)(0.001 < ABS(dStack_a0 - dStack_100));
                auVar6._0_8_ = -(ulonglong)(0.001 < ABS(local_a8 - local_108));
                iVar18 = movmskpd(uVar19,auVar6);
                lVar24 = -(ulonglong)(0.001 < ABS(dStack_90 - dStack_f0));
                auVar1._8_4_ = (int)lVar24;
                auVar1._0_8_ = -(ulonglong)(0.001 < ABS(local_98 - local_f8));
                auVar1._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                uVar21 = movmskpd((int)pcVar23,auVar1);
                if ((uVar21 & 0x3fffffff) == 0 && iVar18 == 0) {
                  lVar24 = -(ulonglong)(0.001 < ABS(dStack_c0 - dStack_120));
                  auVar15._8_4_ = (int)lVar24;
                  auVar15._0_8_ = -(ulonglong)(0.001 < ABS(local_c8 - local_128));
                  auVar15._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                  uVar21 = movmskpd(iVar18,auVar15);
                  auVar12._8_8_ = -(ulonglong)(0.001 < ABS(dStack_b0 - dStack_110));
                  auVar12._0_8_ = -(ulonglong)(0.001 < ABS(local_b8 - local_118));
                  iVar18 = movmskpd(0,auVar12);
                  uVar22 = iVar18 << 2 | uVar21;
                  if (uVar22 != 0) {
                    auVar7._8_8_ = -(ulonglong)(0.001 < ABS(dStack_c0 + dStack_120));
                    auVar7._0_8_ = -(ulonglong)(0.001 < ABS(local_c8 + local_128));
                    uVar21 = movmskpd(uVar21,auVar7);
                    lVar24 = -(ulonglong)(0.001 < ABS(dStack_b0 + dStack_110));
                    auVar4._8_4_ = (int)lVar24;
                    auVar4._0_8_ = -(ulonglong)(0.001 < ABS(local_b8 + local_118));
                    auVar4._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                    uVar22 = movmskpd(uVar22,auVar4);
                    if ((uVar22 & 0x3fffffff) != 0 || uVar21 != 0) goto LAB_1491de7ea;
                  }
                  auVar8._8_8_ = -(ulonglong)(0.001 < ABS(dStack_80 - dStack_e0));
                  auVar8._0_8_ = -(ulonglong)(0.001 < ABS(local_88 - local_e8));
                  iVar18 = movmskpd(uVar21,auVar8);
                  lVar24 = -(ulonglong)(0.001 < ABS(dStack_70 - dStack_d0));
                  auVar2._8_4_ = (int)lVar24;
                  auVar2._0_8_ = -(ulonglong)(0.001 < ABS(local_78 - local_d8));
                  auVar2._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                  uVar21 = movmskpd(0,auVar2);
                  if ((uVar21 & 0x3fffffff) == 0 && iVar18 == 0) {
                    FUN_1491932b8(param_1 + 0xa8,&local_188,param_1[1],param_1[0xc]);
                    param_2 = param_2 + 0xa8;
                    uVar20 = FUN_1491932b8(param_2,&local_1e8,param_1[1],param_1[0xc]);
                    auVar9._8_8_ = -(ulonglong)(0.001 < ABS(dStack_160 - dStack_1c0));
                    auVar9._0_8_ = -(ulonglong)(0.001 < ABS(local_168 - local_1c8));
                    iVar18 = movmskpd((int)uVar20,auVar9);
                    lVar24 = -(ulonglong)(0.001 < ABS(dStack_150 - dStack_1b0));
                    auVar3._8_4_ = (int)lVar24;
                    auVar3._0_8_ = -(ulonglong)(0.001 < ABS(local_158 - local_1b8));
                    auVar3._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                    uVar21 = movmskpd((int)param_2,auVar3);
                    if ((uVar21 & 0x3fffffff) == 0 && iVar18 == 0) {
                      lVar24 = -(ulonglong)(0.001 < ABS(dStack_180 - dStack_1e0));
                      auVar16._8_4_ = (int)lVar24;
                      auVar16._0_8_ = -(ulonglong)(0.001 < ABS(local_188 - local_1e8));
                      auVar16._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                      uVar21 = movmskpd(iVar18,auVar16);
                      auVar13._8_8_ = -(ulonglong)(0.001 < ABS(dStack_170 - dStack_1d0));
                      auVar13._0_8_ = -(ulonglong)(0.001 < ABS(local_178 - local_1d8));
                      iVar18 = movmskpd(0,auVar13);
                      uVar22 = iVar18 << 2 | uVar21;
                      if (uVar22 != 0) {
                        auVar10._8_8_ = -(ulonglong)(0.001 < ABS(dStack_180 + dStack_1e0));
                        auVar10._0_8_ = -(ulonglong)(0.001 < ABS(local_188 + local_1e8));
                        uVar21 = movmskpd(uVar21,auVar10);
                        lVar24 = -(ulonglong)(0.001 < ABS(dStack_170 + dStack_1d0));
                        auVar5._8_4_ = (int)lVar24;
                        auVar5._0_8_ = -(ulonglong)(0.001 < ABS(local_178 + local_1d8));
                        auVar5._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                        uVar22 = movmskpd(uVar22,auVar5);
                        if ((uVar22 & 0x3fffffff) != 0 || uVar21 != 0) goto LAB_1491de7ea;
                      }
                      auVar11._8_8_ = -(ulonglong)(0.001 < ABS(dStack_140 - dStack_1a0));
                      auVar11._0_8_ = -(ulonglong)(0.001 < ABS(local_148 - local_1a8));
                      iVar18 = movmskpd(uVar21,auVar11);
                      lVar24 = -(ulonglong)(0.001 < ABS(dStack_130 - dStack_190));
                      auVar14._8_4_ = (int)lVar24;
                      auVar14._0_8_ = -(ulonglong)(0.001 < ABS(local_138 - local_198));
                      auVar14._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                      uVar21 = movmskpd(0,auVar14);
                      uVar20 = CONCAT71((int7)(CONCAT44((int)((ulonglong)uVar20 >> 0x20),iVar18) >>
                                              8),(uVar21 & 0x3fffffff) == 0 && iVar18 == 0);
                      goto LAB_1491de7ec;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1491de7ea:
  uVar20 = 0;
LAB_1491de7ec:
  if ((local_60 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dece6 FUN_1491dece6 body=539 status=ok
// SIG undefined FUN_1491dece6(void)

void FUN_1491dece6(undefined8 param_1,longlong param_2,float *param_3,char *param_4)

{
  char cVar1;
  double *pdVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  double local_f0 [3];
  double local_d8 [4];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (3 < *(byte *)(param_2 + 0x211) - 6) goto LAB_1491ded32;
  cVar1 = *param_4;
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  switch((uint)*(byte *)(param_2 + 0x211)) {
  case 6:
    local_a8 = (double)param_3[2];
    dStack_b0 = (double)param_3[1];
    local_b8 = (double)*param_3;
    uVar6 = *(undefined1 *)(param_2 + 0x3c8);
    pdVar2 = &local_b8;
    uVar5 = CONCAT71((int7)(local_70 >> 8),cVar1 == '\0') & 0xffffffff;
    goto LAB_1491dedf5;
  default:
    dStack_a0 = (double)param_3[3];
    uVar3 = (uint)CONCAT71(uVar4,cVar1 == '\0');
    local_a8 = (double)param_3[2];
    dStack_b0 = (double)param_3[1];
    local_b8 = (double)*param_3;
    local_f8 = 1;
    pdVar2 = local_d8;
    FUN_1491de082(param_1,pdVar2,param_2);
    uVar6 = *(undefined1 *)(param_2 + 0x3c8);
    break;
  case 9:
    uVar3 = (uint)CONCAT71(uVar4,cVar1 == '\0');
    local_90 = (double)param_3[2];
    local_98 = (double)param_3[1];
    dStack_a0 = (double)*param_3;
    local_a8 = (double)param_3[5];
    dStack_b0 = (double)param_3[4];
    local_b8 = (double)param_3[3];
    local_78 = (double)param_3[8];
    local_80 = (double)param_3[7];
    local_88 = (double)param_3[6];
    FUN_144a7484c(&dStack_a0,local_d8);
    local_f8 = 1;
    pdVar2 = local_f0;
    FUN_1491de082(param_1,pdVar2,param_2,local_d8);
    uVar6 = *(undefined1 *)(param_2 + 0x3c8);
  }
  uVar5 = (ulonglong)uVar3;
LAB_1491dedf5:
  local_f8 = 1;
  FUN_1491de136(param_2 + 0x3c8,pdVar2,uVar5,uVar6);
LAB_1491ded32:
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491def02 FUN_1491def02 body=133 status=ok
// SIG undefined FUN_1491def02(void)

undefined4 *
FUN_1491def02(undefined1 *param_1,undefined4 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  local_20 = param_3[1];
  local_30 = param_3[2];
  local_38 = param_5;
  FUN_1491de136((int)local_28,&local_30,param_4,*param_1);
  *(undefined8 *)(param_2 + 4) = param_3[2];
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  uVar2 = *(undefined4 *)(param_3 + 1);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = *(undefined4 *)param_3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491def88 FUN_1491def88 body=70 status=ok
// SIG undefined FUN_1491def88(void)

void FUN_1491def88(undefined8 param_1,longlong param_2,char param_3)

{
  if ((((param_2 != 0) && (*(char *)(param_2 + 0x210) != '\x01')) &&
      ((*(char *)(param_2 + 0x210) != '\x02' || (*(char *)(param_2 + 0x33d) != '\x01')))) &&
     ((*(char *)(param_2 + 0x211) != '\0' && (*(char *)(param_2 + 0x33c) != param_3)))) {
    *(char *)(param_2 + 0x33c) = param_3;
    FUN_140ad4746(param_1,8,param_2);
    return;
  }
  return;
}



// FUNCTION 1491defce FUN_1491defce body=142 status=ok
// SIG undefined FUN_1491defce(void)

undefined8 FUN_1491defce(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  if (uVar1 == *(uint *)(param_2 + 1)) {
    if (1 < (int)uVar1) {
      iVar2 = wcscmp((wchar_t *)*param_1,(wchar_t *)*param_2);
      uVar3 = CONCAT44(extraout_var,iVar2);
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  else if (*(uint *)(param_2 + 1) + uVar1 != 1) {
    return 0;
  }
  if ((*(char *)(param_1 + 2) == *(char *)(param_2 + 2)) &&
     (*(char *)((longlong)param_1 + 0x11) == *(char *)((longlong)param_2 + 0x11))) {
    uVar1 = *(uint *)(param_1 + 4);
    uVar5 = (ulonglong)uVar1;
    if (uVar1 == *(uint *)(param_2 + 4)) {
      if ((int)uVar1 < 1) {
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      lVar7 = param_1[3];
      lVar6 = param_2[3];
      do {
        uVar5 = uVar5 - 1;
        uVar4 = FUN_1491d6396(lVar7,lVar6);
        if ((char)uVar4 == '\0') {
          return uVar4;
        }
        lVar6 = lVar6 + 0x20;
        lVar7 = lVar7 + 0x20;
      } while (uVar5 != 0);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1491df068 FUN_1491df068 body=214 status=ok
// SIG undefined FUN_1491df068(void)

void FUN_1491df068(longlong param_1,undefined8 *param_2,byte *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
    lVar2 = *(longlong *)(param_3 + 4);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar7 = param_1 + 0x3c8;
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x3d0);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x3d8) - 1U &
                             (uint)*param_3 +
                             ((int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 10) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x390);
      uVar4 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar1 = lVar7 + lVar8;
        if ((*(longlong *)(lVar7 + 4 + lVar8) == lVar2) && (*(byte *)(lVar7 + lVar8) == *param_3)) {
          if (lVar1 == -0xc || lVar1 == 0) goto LAB_1491df07a;
          uVar4 = *(undefined8 *)(lVar1 + 0x10);
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_1491df07c;
    }
  }
LAB_1491df07a:
  uVar4 = 0;
LAB_1491df07c:
  *param_2 = uVar4;
  return;
}



// FUNCTION 1491df13e FUN_1491df13e body=228 status=ok
// SIG undefined FUN_1491df13e(void)

void FUN_1491df13e(longlong param_1,undefined8 *param_2,byte *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x348) != *(int *)(param_1 + 0x374)) {
    lVar2 = *(longlong *)(param_3 + 4);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2 & 0xffff;
    lVar6 = param_1 + 0x378;
    if (*(longlong *)(param_1 + 0x380) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x380);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x388) - 1U &
                             (uint)*param_3 +
                             ((int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) * 10) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x340);
      do {
        lVar7 = (longlong)iVar5 * 0x20;
        lVar1 = lVar6 + lVar7;
        if ((*(longlong *)(lVar6 + 4 + lVar7) == lVar2) && (*(byte *)(lVar6 + lVar7) == *param_3)) {
          if ((undefined8 *)(lVar1 + 0xc) != (undefined8 *)0x0 && lVar1 != 0) {
            *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x14);
            *param_2 = *(undefined8 *)(lVar1 + 0xc);
            return;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x18);
      } while (iVar5 != -1);
    }
  }
  *(undefined1 *)param_2 = 0;
  *(undefined8 *)((longlong)param_2 + 4) = 0;
  return;
}



// FUNCTION 1491df222 FUN_1491df222 body=1392 status=ok
// SIG undefined FUN_1491df222(void)

undefined1
FUN_1491df222(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,byte param_5)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  byte bVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_a8;
  uint local_a0;
  uint local_9c;
  ulonglong local_98 [11];
  
  local_98[10] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 != 0 && param_2 != 0) {
    uVar5 = 1;
    if (param_2 == param_3) goto LAB_1491df25c;
    uVar3 = *(uint *)(param_2 + 0x1c);
    uVar4 = *(uint *)(param_3 + 0x1c);
    piVar1 = (int *)(param_1 + 0x408);
    iVar11 = *(int *)(param_1 + 0xa8);
    local_a0 = uVar3;
    local_9c = uVar4;
    if ((*(int *)(param_1 + 0x408) != iVar11) || (*(int *)(param_1 + 0x41c) == -1)) {
      local_98[4] = 0;
      local_98[7] = 0;
      local_98[8] = 0;
      local_98[9] = 0;
      local_98[2] = 0;
      local_98[3] = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[5] = 0x8000000000;
      local_98[6] = 0xffffffff;
      if ((ulonglong *)(param_1 + 0x410) == local_98) {
        *piVar1 = iVar11;
        local_98[9] = 0;
      }
      else {
        FUN_14920d60e((ulonglong *)(param_1 + 0x410),local_98);
        *piVar1 = iVar11;
        local_98[9] = local_98[9] & 0xffffffff00000000;
        if (local_98[8] != 0) {
          FUN_1400020a8();
        }
      }
      FUN_148273ad2(local_98);
    }
    plVar7 = (longlong *)FUN_1491df794(piVar1);
    if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
      plVar12 = plVar7 + 7;
      if ((longlong *)plVar7[8] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar7[8];
      }
      uVar10 = *(uint *)((longlong)plVar12 +
                        (ulonglong)
                        ((int)plVar7[9] - 1U &
                        (uVar3 * 0x40 + uVar4 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3)) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar2 = (uint *)(*plVar7 + (longlong)(int)uVar10 * 0x14);
          if ((*puVar2 == uVar3) && (*(uint *)(*plVar7 + 4 + (longlong)(int)uVar10 * 0x14) == uVar4)
             ) {
            if ((puVar2 != (uint *)0x0) && (puVar2 + 2 != (uint *)0x0)) {
              uVar5 = (undefined1)puVar2[2];
              goto LAB_1491df25c;
            }
            break;
          }
          uVar10 = puVar2[3];
        } while (uVar10 != 0xffffffff);
      }
    }
    plVar7 = (longlong *)FUN_1491df794(piVar1);
    if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
      plVar12 = plVar7 + 7;
      if ((longlong *)plVar7[8] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar7[8];
      }
      uVar10 = *(uint *)((longlong)plVar12 +
                        (ulonglong)
                        ((int)plVar7[9] - 1U &
                        (uVar4 * 0x40 + uVar3 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4)) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar2 = (uint *)(*plVar7 + (longlong)(int)uVar10 * 0x14);
          if ((*puVar2 == uVar4) && (*(uint *)(*plVar7 + 4 + (longlong)(int)uVar10 * 0x14) == uVar3)
             ) {
            if ((puVar2 + 2 != (uint *)0x0 && puVar2 != (uint *)0x0) && ((char)puVar2[2] != '\0'))
            goto LAB_1491df25a;
            break;
          }
          uVar10 = puVar2[3];
        } while (uVar10 != 0xffffffff);
      }
    }
    if (*(int *)(param_1 + 0x468) != 0) {
      if ((*(int *)(param_1 + 0x468) <= (int)uVar3 || (int)uVar3 < 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x460) + (ulonglong)uVar3) != '\0')) goto LAB_1491df25a;
      *(undefined1 *)(*(longlong *)(param_1 + 0x460) + (ulonglong)uVar3) = 1;
    }
    uVar8 = (ulonglong)*(byte *)(param_2 + 0x10);
    if (uVar8 < 0x21) {
      if ((0x14UL >> (uVar8 & 0x3f) & 1) == 0) {
        if ((0x100010002U >> (uVar8 & 0x3f) & 1) == 0) goto LAB_1491df5ff;
        goto LAB_1491df60a;
      }
      lVar14 = param_2 + 0x110;
      if (*(longlong *)(param_2 + 0x1a0) != 0) {
        lVar14 = *(longlong *)(param_2 + 0x1a0);
      }
      if ((longlong)*(int *)(param_2 + 0x1b0) != 0) {
        local_a8 = (longlong)*(int *)(param_2 + 0x1b0) * 0x90;
        lVar13 = 0;
        do {
          local_b8 = 1;
          bVar6 = FUN_1491df222(param_1,*(undefined8 *)(lVar14 + lVar13),param_3,param_4);
          if ((bVar6 & param_5) == 1) {
            uVar9 = FUN_1491df794(piVar1);
            local_98[0] = CONCAT71(local_98[0]._1_7_,1);
            FUN_14920d764(uVar9,local_a0 * 0x40 + local_9c + (local_a0 >> 2) + 0x9e3779b9 ^ local_a0
                          ,&local_a0,local_98);
          }
          if (bVar6 != 0) goto LAB_1491df78c;
          lVar13 = lVar13 + 0x90;
        } while (local_a8 != lVar13);
      }
    }
    else {
LAB_1491df5ff:
      if (*(byte *)(param_2 + 0x10) == 0x80) {
LAB_1491df60a:
        local_b8 = 1;
        bVar6 = FUN_1491df222(param_1,*(undefined8 *)(param_2 + 0x108),param_3,param_4);
        if ((bVar6 & param_5) == 1) {
          uVar9 = FUN_1491df794(piVar1);
          local_98[0] = CONCAT71(local_98[0]._1_7_,1);
          FUN_14920d764(uVar9,local_a0 * 0x40 + local_9c + (local_a0 >> 2) + 0x9e3779b9 ^ local_a0);
LAB_1491df78c:
          uVar5 = 1;
          goto LAB_1491df25c;
        }
        uVar5 = 1;
        if (bVar6 != 0) goto LAB_1491df25c;
      }
    }
    if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
      plVar7 = param_4 + 7;
      if ((longlong *)param_4[8] != (longlong *)0x0) {
        plVar7 = (longlong *)param_4[8];
      }
      iVar11 = *(int *)((longlong)plVar7 +
                       (ulonglong)((int)param_4[9] - 1U & *(uint *)(param_2 + 0x1c)) * 4);
      if (iVar11 != -1) {
        do {
          lVar14 = *param_4 + (longlong)iVar11 * 0x20;
          if (*(uint *)(*param_4 + (longlong)iVar11 * 0x20) == *(uint *)(param_2 + 0x1c)) {
            if (((lVar14 + 8U & 0xfffffffffffffff7) != 0) &&
               (iVar11 = *(int *)(lVar14 + 0x10), (longlong)iVar11 != 0)) {
              lVar14 = *(longlong *)(lVar14 + 8);
              lVar13 = 0;
              goto LAB_1491df670;
            }
            break;
          }
          iVar11 = *(int *)(lVar14 + 0x18);
        } while (iVar11 != -1);
      }
    }
    goto LAB_1491df480;
  }
  goto LAB_1491df25a;
  while (lVar13 = lVar13 + 4, (longlong)iVar11 * 4 != lVar13) {
LAB_1491df670:
    local_b8 = 0;
    bVar6 = FUN_1491df222(param_1,*(undefined8 *)
                                   (*(longlong *)(param_1 + 0xb8) +
                                   (longlong)*(int *)(lVar14 + lVar13) * 8),param_3,param_4);
    if ((bVar6 & param_5) == 1) {
      uVar9 = FUN_1491df794(piVar1);
      local_98[0] = CONCAT71(local_98[0]._1_7_,1);
      FUN_14920d764(uVar9,local_a0 * 0x40 + local_9c + (local_a0 >> 2) + 0x9e3779b9 ^ local_a0,
                    &local_a0,local_98);
    }
    if (bVar6 != 0) goto LAB_1491df78c;
  }
LAB_1491df480:
  if (param_5 != 0) {
    uVar9 = FUN_1491df794(piVar1);
    local_98[0] = local_98[0] & 0xffffffffffffff00;
    FUN_14920d764(uVar9,local_a0 * 0x40 + local_9c + (local_a0 >> 2) + 0x9e3779b9 ^ local_a0);
  }
LAB_1491df25a:
  uVar5 = 0;
LAB_1491df25c:
  if ((local_98[10] ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1491df794 FUN_1491df794 body=158 status=ok
// SIG undefined FUN_1491df794(void)

undefined8 * FUN_1491df794(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)(param_1 + 8);
  if (*(int *)(param_1 + 0x14) == -1) {
    local_48 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_40 = 0x8000000000;
    local_38 = 0xffffffff;
    if (&local_68 != puVar1) {
      FUN_14920c2be(puVar1,&local_68);
      uStack_20 = uStack_20 & 0xffffffff00000000;
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_148273ad2(&local_68);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491df834 FUN_1491df834 body=214 status=ok
// SIG undefined FUN_1491df834(void)

undefined8 FUN_1491df834(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar2 = FUN_14479d2ce(param_1 + 0x308);
    if (lVar2 != 0) {
      local_28 = *(undefined4 *)(param_2 + 0x18);
      local_30 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = FUN_140813180(lVar2);
      if (((int)uVar1 < 0) || (*(int *)(lVar2 + 0xc0) <= (int)uVar1)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0xb8) + (ulonglong)uVar1 * 8);
      }
      uVar3 = FUN_1491df834(lVar2,uVar3);
      goto LAB_1491df8a4;
    }
    if ((longlong)*(int *)(param_1 + 800) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x318);
      lVar4 = 0;
      do {
        if ((*(longlong *)(lVar2 + 4 + lVar4) == *(longlong *)(param_2 + 0x14)) &&
           (*(char *)(lVar2 + lVar4) == *(char *)(param_2 + 0x10))) {
          uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
          goto LAB_1491df8a4;
        }
        lVar4 = lVar4 + 0xc;
      } while ((longlong)*(int *)(param_1 + 800) * 0xc != lVar4);
    }
  }
  uVar3 = 0;
LAB_1491df8a4:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491df90c FUN_1491df90c body=281 status=ok
// SIG undefined FUN_1491df90c(void)

undefined8 * FUN_1491df90c(undefined8 param_1,uint param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)param_2;
  puVar1 = (undefined8 *)FUN_14001cc68((longlong)(int)param_2 * 0x210,0);
  puVar2 = puVar1;
  uVar4 = uVar3;
  if ((int)param_2 < 1) {
    *(uint *)((longlong)puVar1 + 0x2c) = param_2;
  }
  else {
    do {
      FUN_140e63fbe(puVar2,param_1,2);
      puVar2[0x34] = 0;
      puVar2[0x36] = 0x100000000;
      puVar2[0x3c] = 0;
      *(undefined4 *)(puVar2 + 0x3d) = 0;
      puVar2[0x38] = 0;
      puVar2[0x39] = 0;
      *(undefined8 *)((longlong)puVar2 + 0x1ec) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar2 + 500) = 0;
      puVar2[0x40] = 0;
      *(undefined4 *)(puVar2 + 0x41) = 0;
      *puVar2 = &PTR_FUN_14bb58e60;
      uVar4 = uVar4 - 1;
      puVar2 = puVar2 + 0x42;
    } while (uVar4 != 0);
    *(uint *)((longlong)puVar1 + 0x2c) = param_2;
    puVar2 = puVar1;
    if (param_3 != '\0') {
      do {
        FUN_1491d7c54(param_1,puVar2,0);
        uVar3 = uVar3 - 1;
        puVar2 = puVar2 + 0x42;
      } while (uVar3 != 0);
    }
  }
  return puVar1;
}



// FUNCTION 1491dfa26 FUN_1491dfa26 body=76 status=ok
// SIG undefined FUN_1491dfa26(void)

longlong FUN_1491dfa26(undefined8 param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x500,0);
  FUN_149191c08(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0x2c) = 1;
  if (param_2 != '\0') {
    FUN_1491d7c54(param_1,lVar1,0);
  }
  return lVar1;
}



// FUNCTION 1491dfa72 FUN_1491dfa72 body=198 status=ok
// SIG undefined FUN_1491dfa72(void)

undefined8 * FUN_1491dfa72(undefined8 param_1,uint param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_2;
  puVar1 = (undefined8 *)FUN_14001cc68((longlong)(int)param_2 * 0x128,0);
  uVar3 = uVar4;
  puVar2 = puVar1;
  if ((int)param_2 < 1) {
    *(uint *)((longlong)puVar1 + 0x2c) = param_2;
  }
  else {
    do {
      FUN_140e63fbe(puVar2,param_1,0x10);
      puVar2[0x21] = 0;
      *puVar2 = &PTR_FUN_14bb77100;
      puVar2[0x22] = 0;
      puVar2[0x23] = 0;
      *(undefined4 *)(puVar2 + 0x24) = 0x3f800000;
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 0x25;
    } while (uVar3 != 0);
    *(uint *)((longlong)puVar1 + 0x2c) = param_2;
    puVar2 = puVar1;
    if (param_3 != '\0') {
      do {
        FUN_1491d7c54(param_1,puVar2,0);
        uVar4 = uVar4 - 1;
        puVar2 = puVar2 + 0x25;
      } while (uVar4 != 0);
    }
  }
  return puVar1;
}



// FUNCTION 1491dfb38 FUN_1491dfb38 body=191 status=ok
// SIG undefined FUN_1491dfb38(void)

undefined8 * FUN_1491dfb38(undefined8 param_1,uint param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_2;
  puVar1 = (undefined8 *)FUN_14001cc68((longlong)(int)param_2 * 0x120,0);
  uVar3 = uVar4;
  puVar2 = puVar1;
  if ((int)param_2 < 1) {
    *(uint *)((longlong)puVar1 + 0x2c) = param_2;
  }
  else {
    do {
      FUN_140e63fbe(puVar2,param_1,0x20);
      puVar2[0x21] = 0;
      puVar2[0x22] = 0;
      *puVar2 = &PTR_FUN_14bb77160;
      *(undefined4 *)(puVar2 + 0x23) = 0;
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 0x24;
    } while (uVar3 != 0);
    *(uint *)((longlong)puVar1 + 0x2c) = param_2;
    puVar2 = puVar1;
    if (param_3 != '\0') {
      do {
        FUN_1491d7c54(param_1,puVar2,0);
        uVar4 = uVar4 - 1;
        puVar2 = puVar2 + 0x24;
      } while (uVar4 != 0);
    }
  }
  return puVar1;
}



// FUNCTION 1491dfbf8 FUN_1491dfbf8 body=211 status=ok
// SIG undefined FUN_1491dfbf8(void)

longlong FUN_1491dfbf8(undefined8 param_1,uint param_2,char param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_2;
  lVar2 = FUN_14001cc68((longlong)(int)param_2 * 0x70,0);
  if ((int)param_2 < 1) {
    *(uint *)(lVar2 + 0x2c) = param_2;
  }
  else {
    lVar3 = 0;
    do {
      *(undefined8 *)(lVar2 + 8 + lVar3) = param_1;
      *(undefined1 *)(lVar2 + 0x10 + lVar3) = 0x40;
      *(undefined8 *)(lVar2 + 0x14 + lVar3) = 0;
      *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0xffffffffffffffff;
      *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0xffffffff;
      *(undefined1 *)(lVar2 + 0x28 + lVar3) = 0;
      *(undefined8 *)(lVar2 + 0x2c + lVar3) = 0xffffffff00000000;
      *(undefined4 *)(lVar2 + 0x34 + lVar3) = 0xffffffff;
      puVar1 = (undefined8 *)(lVar2 + 0x38 + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined ***)(lVar2 + lVar3) = &PTR_FUN_14bb771c0;
      puVar1 = (undefined8 *)(lVar2 + 0x48 + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined2 *)(lVar2 + 0x58 + lVar3) = 0;
      puVar1 = (undefined8 *)(lVar2 + 0x60 + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar3 = lVar3 + 0x70;
    } while (uVar4 * 0x70 - lVar3 != 0);
    *(uint *)(lVar2 + 0x2c) = param_2;
    lVar3 = lVar2;
    if (param_3 != '\0') {
      do {
        FUN_1491d7c54(param_1,lVar3,0);
        uVar4 = uVar4 - 1;
        lVar3 = lVar3 + 0x70;
      } while (uVar4 != 0);
    }
  }
  return lVar2;
}



// FUNCTION 1491dfccc FUN_1491dfccc body=166 status=ok
// SIG undefined FUN_1491dfccc(void)

undefined8 * FUN_1491dfccc(undefined8 param_1,uint param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_2;
  puVar1 = (undefined8 *)FUN_14001cc68((longlong)(int)param_2 * 0x110,0);
  uVar3 = uVar4;
  puVar2 = puVar1;
  if ((int)param_2 < 1) {
    *(uint *)((longlong)puVar1 + 0x2c) = param_2;
  }
  else {
    do {
      FUN_140e63fbe(puVar2,param_1,0x80);
      puVar2[0x21] = 0;
      *puVar2 = &PTR_FUN_14bb77220;
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 0x22;
    } while (uVar3 != 0);
    *(uint *)((longlong)puVar1 + 0x2c) = param_2;
    puVar2 = puVar1;
    if (param_3 != '\0') {
      do {
        FUN_1491d7c54(param_1,puVar2,0);
        uVar4 = uVar4 - 1;
        puVar2 = puVar2 + 0x22;
      } while (uVar4 != 0);
    }
  }
  return puVar1;
}



// FUNCTION 1491dfd72 FUN_1491dfd72 body=65 status=ok
// SIG undefined FUN_1491dfd72(void)

longlong FUN_1491dfd72(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_140813180();
  if (((((int)uVar1 < 0) || (*(int *)(param_1 + 0xc0) <= (int)uVar1)) ||
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)uVar1 * 8), lVar2 == 0)) ||
     ((*(char *)(lVar2 + 0x10) != '\x02' && (*(char *)(lVar2 + 0x10) != '\x04')))) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1491dfdb4 FUN_1491dfdb4 body=278 status=ok
// SIG undefined FUN_1491dfdb4(void)

void FUN_1491dfdb4(longlong *param_1)

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
      FUN_1491dfecc(*local_70 + (longlong)iStack_54 * 0x18 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (local_70 != param_1 || (local_60 != plVar1 || iStack_54 != iVar2));
  }
  FUN_14920d9d0(param_1);
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dfecc FUN_1491dfecc body=100 status=ok
// SIG undefined FUN_1491dfecc(void)

void FUN_1491dfecc(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *param_1;
  local_11 = *(undefined1 *)(lVar1 + 0x10);
  plVar2 = (longlong *)FUN_1491f7e72();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2f0))(plVar2,lVar1,1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_1400020a8(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491dff32 FUN_1491dff32 body=1019 status=ok
// SIG undefined FUN_1491dff32(void)

void FUN_1491dff32(longlong ***param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong ***ppplVar2;
  uint *puVar3;
  ulonglong *puVar4;
  longlong **pplVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_c8 [32];
  longlong ***local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong *local_80;
  undefined8 local_78;
  uint local_70;
  undefined1 local_6c [4];
  longlong **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc077e0) && (FUN_144b3d300(&DAT_14cc077e0), DAT_14cc077e0 == -1)) {
    if (DAT_14cc079e0 == 0) {
      uVar8 = FUN_1408c25db();
      DAT_14cc079e0 = FUN_14171c317(FUN_1466cee30,uVar8,L"ERigMetadataType");
    }
    DAT_14cc077d8 = DAT_14cc079e0;
    _Init_thread_footer(&DAT_14cc077e0);
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_80 = (longlong *)
               CONCAT44(local_80._4_4_,*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34));
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_80,4);
      }
      else {
        FUN_14572512c(param_2,&local_80);
      }
    }
    else {
      local_80 = (longlong *)CONCAT44(local_80._4_4_,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar1;
    }
    ppplVar2 = param_1 + 2;
    local_68 = (longlong **)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = ppplVar2;
    if (*(int *)(param_1 + 5) == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar10 = *(int *)(param_1 + 5);
    }
    uStack_88 = CONCAT44(uStack_4c,uStack_50);
    local_90 = local_58;
    uVar8 = local_90;
    local_a0 = local_68;
    uStack_98 = (undefined4)uStack_60;
    uStack_94 = uStack_60._4_4_;
    local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar6 = local_90._4_4_;
    local_a8 = param_1;
    if ((local_90._4_4_ != iVar10) || (local_90 = uVar8, uStack_60 != ppplVar2)) {
      do {
        local_90 = uVar8;
        pplVar5 = *local_a8;
        lVar7 = (longlong)iVar6;
        local_68 = (longlong **)pplVar5[lVar7 * 3];
        FUN_1414aa4be(DAT_14cc077d8,&local_78,(char)pplVar5[lVar7 * 3 + 1][2]);
        (**(code **)(*param_2 + 0x160))(param_2,&local_68);
        (**(code **)(*param_2 + 0x160))(param_2,&local_78);
        (**(code **)(*pplVar5[lVar7 * 3 + 1] + 8))(pplVar5[lVar7 * 3 + 1],param_2);
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        iVar6 = local_90._4_4_;
        uVar8 = local_90;
      } while (local_a8 != param_1 ||
               ((longlong ***)CONCAT44(uStack_94,uStack_98) != ppplVar2 || local_90._4_4_ != iVar10)
              );
    }
  }
  else {
    FUN_1491dfdb4(param_1);
    local_70 = 0;
    puVar4 = (ulonglong *)param_2[1];
    puVar3 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar3) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_70,4);
      }
      else {
        FUN_14572512c(param_2,&local_70);
      }
    }
    else {
      local_70 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar3;
    }
    uVar9 = local_70;
    if ((uint)(*(int *)(param_1 + 1) - *(int *)((longlong)param_1 + 0x34)) < local_70) {
      if ((int)local_70 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)local_70);
      }
      FUN_14920db58(param_1,local_70);
      iVar10 = 1;
      if (3 < uVar9) {
        uVar9 = (uVar9 | 1) + 0xe;
        iVar10 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        iVar10 = 1 << ((byte)iVar10 & 0x1f);
      }
      if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) < iVar10)) {
        *(int *)(param_1 + 9) = iVar10;
        FUN_14920dcf4(param_1);
      }
    }
    if (0 < (int)local_70) {
      iVar10 = 0;
      do {
        local_68 = (longlong **)0x0;
        local_78 = 0;
        (**(code **)(*param_2 + 0x160))(param_2,&local_68);
        (**(code **)(*param_2 + 0x160))(param_2,&local_78);
        lVar7 = DAT_14cc077d8;
        iVar6 = FUN_1448e5bf4(DAT_14cc077d8,local_78,0);
        if (iVar6 == -1) {
          uVar8 = 0xffffffffffffffff;
        }
        else {
          uVar8 = *(undefined8 *)(*(longlong *)(lVar7 + 0x40) + 8 + (longlong)iVar6 * 0x10);
        }
        local_80 = (longlong *)FUN_1491e032e(&local_68,uVar8);
        (**(code **)(*local_80 + 8))(local_80,param_2);
        local_a0 = &local_80;
        local_a8 = &local_68;
        FUN_14920dece(param_1,local_6c);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)local_70);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491e032e FUN_1491e032e body=138 status=ok
// SIG undefined FUN_1491e032e(void)

longlong FUN_1491e032e(undefined8 *param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = param_2;
  plVar1 = (longlong *)FUN_1491f7e72();
  lVar2 = FUN_14001cc68((longlong)
                        (int)(-*(int *)((longlong)plVar1 + 0x5c) &
                             ((int)plVar1[0xb] + *(int *)((longlong)plVar1 + 0x5c)) - 1U),0);
  (**(code **)(*plVar1 + 0x2e8))(plVar1,lVar2,1);
  *(undefined8 *)(lVar2 + 8) = *param_1;
  *(undefined1 *)(lVar2 + 0x10) = param_2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e03ba FUN_1491e03ba body=755 status=ok
// SIG undefined FUN_1491e03ba(void)

ulonglong FUN_1491e03ba(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined8 local_218;
  undefined **local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined8 local_1e8;
  undefined8 local_1d8;
  longlong local_1a8;
  int local_1a0;
  int local_174;
  undefined1 local_170 [8];
  undefined1 *local_168;
  int local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined1 local_118 [8];
  int local_110;
  int local_e4;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined1 local_88 [8];
  int local_80;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_c8 = 0;
  local_b8 = 0;
  FUN_1466cd94a(param_1 + 0x1b8,local_88);
  local_158 = 0;
  local_148 = 0;
  FUN_1466cdc5c(param_1 + 0x1d8,local_118);
  local_1e8 = 0;
  local_1d8 = 0;
  FUN_1466cdf4a(param_1 + 0x1f8,&local_1a8);
  if ((local_80 != local_54) || (local_110 != local_e4)) {
    local_218 = 0;
    local_208 = &PTR_LAB_14bb904b0;
    local_228 = &LAB_1444ab4e2;
    local_200 = local_88;
    local_1f8 = local_118;
    FUN_140e4abf2(param_1);
  }
  if (local_1a0 != local_174) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc077e8) && (FUN_144b3d300(&DAT_14cc077e8), DAT_14cc077e8 == -1)) {
      DAT_14cc077e4 = 3;
      _Init_thread_footer(&DAT_14cc077e8);
    }
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0xf0) + 8 + (longlong)DAT_14cc077e4 * 0x10);
    if (lVar4 != 0) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + (longlong)DAT_14cc077e4 * 0x10);
      plVar1 = plVar3 + lVar4;
      puVar7 = local_168;
      if (local_168 == (undefined1 *)0x0) {
        puVar7 = local_170;
      }
      do {
        lVar4 = *plVar3;
        if ((lVar4 == 0) || (*(char *)(lVar4 + 0x10) != '\b')) {
          lVar4 = 0;
        }
        if (local_1a0 != local_174) {
          iVar5 = *(int *)(puVar7 + (ulonglong)(*(uint *)(lVar4 + 0x4c) & local_160 - 1U) * 4);
          while (iVar5 != -1) {
            lVar2 = local_1a8 + (longlong)iVar5 * 0x10;
            if (*(uint *)(local_1a8 + (longlong)iVar5 * 0x10) == *(uint *)(lVar4 + 0x4c)) {
              if ((undefined4 *)(lVar2 + 4) != (undefined4 *)0x0 && lVar2 != 0) {
                *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)(lVar2 + 4);
              }
              break;
            }
            iVar5 = *(int *)(lVar2 + 8);
          }
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
  }
  if (((local_80 == local_54) && (local_110 == local_e4)) && (local_1a0 == local_174)) {
    uVar6 = 0;
  }
  else {
    FUN_140e4aa06(param_1);
    FUN_140e4926c(param_1);
    uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  local_160 = 0;
  if (local_168 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(&local_1a8);
  local_d0 = 0;
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(local_118);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(local_88);
  if ((local_38 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1491e06ae FUN_1491e06ae body=286 status=ok
// SIG undefined FUN_1491e06ae(void)

longlong *
FUN_1491e06ae(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
             int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_141125054(param_1,*(undefined4 *)param_3[1]);
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x14) != *(longlong *)((char *)*param_3 + 4))) ||
     (*(char *)(lVar1 + 0x10) != *(char *)*param_3)) {
switchD_1491e0777_default:
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  if (param_5 - 1U < 2) {
    if (*(char *)(lVar1 + 0x10) != '\x04') goto switchD_1491e0777_default;
    lVar2 = (ulonglong)(param_5 != 1) * 0x80;
    FUN_144b3caae(lVar1 + 0x48,lVar1 + lVar2 + 0x400);
    FUN_144b3caae(lVar1 + 0x68,lVar1 + lVar2 + 0x420);
    FUN_140e37f6e(lVar1 + 0x88,lVar1 + lVar2 + 0x440);
  }
  switch(param_4) {
  case 0:
    lVar2 = lVar1 + 0x68;
    lVar3 = lVar1 + 0xb8;
    break;
  case 1:
    lVar3 = lVar1 + 0x98;
    *param_2 = lVar1 + 0x48;
    goto LAB_1491e07ad;
  case 2:
    lVar2 = lVar1 + 0x78;
    lVar3 = lVar1 + 0xa8;
    break;
  case 3:
    *param_2 = lVar1 + 0x58;
    param_2[1] = lVar1 + 0x88;
    return param_2;
  default:
    goto switchD_1491e0777_default;
  }
  *param_2 = lVar2;
LAB_1491e07ad:
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 1491e07cc FUN_1491e07cc body=43 status=ok
// SIG undefined FUN_1491e07cc(void)

longlong FUN_1491e07cc(longlong param_1,longlong param_2)

{
  FUN_144b3caae();
  FUN_144b3caae(param_1 + 0x20,param_2 + 0x20);
  return param_1;
}



// FUNCTION 1491e07f8 FUN_1491e07f8 body=68 status=ok
// SIG undefined FUN_1491e07f8(void)

void FUN_1491e07f8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  if ((*(char *)(param_1 + 0x2e9) == '\0') && ((longlong)*(int *)(param_1 + 0x58) != 0)) {
    lVar8 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x50) + 8 + lVar8) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar8) != 0)) {
        iVar1 = *(int *)(param_1 + 100);
        *(int *)(param_1 + 100) = iVar1 + 1;
        uVar6 = (ulonglong)*(int *)(param_1 + 0x58);
        if ((longlong)uVar6 < 1) {
          *(int *)(param_1 + 100) = iVar1;
          return;
        }
        bVar7 = false;
        do {
          lVar8 = uVar6 * 0x10 + -8;
          uVar9 = uVar6;
          while (((lVar2 = *(longlong *)(param_1 + 0x50), *(int *)(lVar2 + lVar8) != 0 &&
                  (plVar3 = *(longlong **)(lVar2 + -8 + lVar8), plVar3 != (longlong *)0x0)) &&
                 (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3), cVar5 != '\0'))) {
            lVar8 = lVar8 + -0x10;
            bVar4 = uVar9 < 2;
            uVar9 = uVar9 - 1;
            if (bVar4) {
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
              if (!bVar7) {
                return;
              }
              goto LAB_14920c52b;
            }
          }
          uVar6 = uVar9 - 1;
          bVar7 = true;
        } while (1 < uVar9);
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
LAB_14920c52b:
        FUN_14474d06a((longlong *)(param_1 + 0x50),0);
        return;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x58) * 0x10 != lVar8);
  }
  return;
}



// FUNCTION 1491e083c FUN_1491e083c body=69 status=ok
// SIG undefined FUN_1491e083c(void)

void FUN_1491e083c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  *(short *)(param_1 + 0xb0) = *(short *)(param_1 + 0xb0) + 1;
  if ((*(char *)(param_1 + 0x2e9) == '\0') && ((longlong)*(int *)(param_1 + 0x70) != 0)) {
    lVar8 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x68) + 8 + lVar8) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar8) != 0)) {
        iVar1 = *(int *)(param_1 + 0x7c);
        *(int *)(param_1 + 0x7c) = iVar1 + 1;
        uVar6 = (ulonglong)*(int *)(param_1 + 0x70);
        if ((longlong)uVar6 < 1) {
          *(int *)(param_1 + 0x7c) = iVar1;
          return;
        }
        bVar7 = false;
        do {
          lVar8 = uVar6 * 0x10 + -8;
          uVar9 = uVar6;
          while (((lVar2 = *(longlong *)(param_1 + 0x68), *(int *)(lVar2 + lVar8) != 0 &&
                  (plVar3 = *(longlong **)(lVar2 + -8 + lVar8), plVar3 != (longlong *)0x0)) &&
                 (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3,param_4),
                 cVar5 != '\0'))) {
            lVar8 = lVar8 + -0x10;
            bVar4 = uVar9 < 2;
            uVar9 = uVar9 - 1;
            if (bVar4) {
              *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
              if (!bVar7) {
                return;
              }
              goto LAB_14920e2ff;
            }
          }
          uVar6 = uVar9 - 1;
          bVar7 = true;
        } while (1 < uVar9);
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
LAB_14920e2ff:
        FUN_14474d06a((longlong *)(param_1 + 0x68),0);
        return;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x70) * 0x10 != lVar8);
  }
  return;
}



// FUNCTION 1491e0882 FUN_1491e0882 body=581 status=ok
// SIG undefined FUN_1491e0882(void)

void FUN_1491e0882(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  char param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [44];
  undefined1 local_cc [4];
  longlong *local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_60 [2];
  longlong *local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar4 = *(int *)(param_2 + 0x34);
  if ((iVar4 < 0) || (*(int *)(param_1 + 0x270) <= iVar4)) {
    local_a8 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = (longlong *)0x0;
    plStack_c0 = (longlong *)0x0;
    uStack_a0 = 0x8000000000;
    local_98 = 0xffffffff;
    local_78 = 0;
    uStack_70 = 0;
    FUN_1491e0ac8((longlong *)(param_1 + 0x268),local_60);
    plVar7 = local_60;
    if (local_50 != (longlong *)0x0) {
      plVar7 = local_50;
    }
    *(int *)(param_2 + 0x34) = (int)*plVar7;
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uStack_80 = uStack_80 & 0xffffffff00000000;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_1491970a2(&local_c8);
    iVar4 = *(int *)(param_2 + 0x34);
  }
  lVar1 = *(longlong *)(param_1 + 0x268);
  plVar7 = (longlong *)(lVar1 + (longlong)iVar4 * 0x60);
  lVar1 = *(longlong *)(lVar1 + 0x58 + (longlong)iVar4 * 0x60);
  lVar2 = *param_3;
  if (((lVar1 == 0) || (plVar7[10] != lVar2)) || (*(char *)(lVar1 + 0x10) != (char)param_4)) {
    if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
      uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar6 = (uint)lVar2 & 0xffff;
      plVar5 = plVar7 + 7;
      if ((longlong *)plVar7[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar7[8];
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      (ulonglong)
                      ((int)plVar7[9] - 1U &
                      (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          plVar5 = (longlong *)(*plVar7 + (longlong)iVar4 * 0x18);
          if (*plVar5 == lVar2) {
            if ((plVar5 != (longlong *)0x0) && (plVar5 = plVar5 + 1, plVar5 != (longlong *)0x0)) {
              local_60[0] = *plVar5;
              if (*(char *)(local_60[0] + 0x10) == (char)param_4) goto LAB_1491e09de;
              FUN_1491dfecc(plVar5);
              local_60[0] = FUN_1491e032e(param_3,param_4);
              *plVar5 = local_60[0];
              goto LAB_1491e09a5;
            }
            break;
          }
          iVar4 = (int)plVar5[2];
        } while (iVar4 != -1);
      }
    }
    local_60[0] = FUN_1491e032e(param_3,param_4);
    plStack_c0 = local_60;
    local_c8 = param_3;
    FUN_14920dece(plVar7,local_cc);
LAB_1491e09a5:
    if (param_5 != '\0') {
      FUN_1491e07f8(param_1,param_2 + 0x10,param_3);
    }
LAB_1491e09de:
    plVar7[10] = *param_3;
    plVar7[0xb] = local_60[0];
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491e0ac8 FUN_1491e0ac8 body=404 status=ok
// SIG undefined FUN_1491e0ac8(void)

longlong FUN_1491e0ac8(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0x400000000;
  iVar7 = (int)param_1[3];
  if (iVar7 < 1) {
    iVar9 = ((int)param_1[1] - iVar7) + 1;
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
      FUN_14920c052(param_1);
      iVar7 = (int)param_1[3];
    }
    if (iVar7 == 0) {
      iVar7 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
        FUN_14920c0c2(param_1,iVar7);
      }
      lVar11 = *param_1;
      lVar10 = (longlong)iVar7 * 0x60;
      *(undefined8 *)(lVar11 + 0x20 + lVar10) = 0;
      *(undefined4 *)(lVar11 + 0x28 + lVar10) = 0;
      *(undefined8 *)(lVar11 + lVar10) = 0;
      ((undefined8 *)(lVar11 + lVar10))[1] = 0;
      *(undefined8 *)(lVar11 + 0x2c + lVar10) = 0xffffffff00000080;
      *(undefined4 *)(lVar11 + 0x34 + lVar10) = 0;
      *(undefined8 *)(lVar11 + 0x40 + lVar10) = 0;
      *(undefined4 *)(lVar11 + 0x48 + lVar10) = 0;
      FUN_14920bbbe(lVar11 + lVar10,param_3);
      uVar3 = *(undefined4 *)(param_3 + 0x54);
      uVar4 = *(undefined4 *)(param_3 + 0x58);
      uVar5 = *(undefined4 *)(param_3 + 0x5c);
      puVar1 = (undefined4 *)(lVar11 + 0x50 + lVar10);
      *puVar1 = *(undefined4 *)(param_3 + 0x50);
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      iVar9 = *(int *)(param_2 + 0x18);
      *(uint *)(param_2 + 0x18) = iVar9 + 1U;
      if (*(uint *)(param_2 + 0x1c) < iVar9 + 1U) {
        FUN_1400c4ccc(param_2,iVar9);
      }
      lVar11 = *(longlong *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        lVar11 = param_2;
      }
      *(int *)(lVar11 + (longlong)iVar9 * 4) = iVar7;
      return param_2;
    }
    iVar9 = *(int *)(param_2 + 0x18);
    uVar8 = *(uint *)(param_2 + 0x1c);
  }
  else {
    iVar9 = 0;
    uVar8 = 4;
  }
  uVar3 = *(undefined4 *)(param_1[2] + -4 + (longlong)iVar7 * 4);
  *(int *)(param_1 + 3) = iVar7 + -1;
  *(uint *)(param_2 + 0x18) = iVar9 + 1U;
  if (uVar8 < iVar9 + 1U) {
    FUN_1400c4ccc(param_2,iVar9);
  }
  lVar11 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar11 = param_2;
  }
  *(undefined4 *)(lVar11 + (longlong)iVar9 * 4) = uVar3;
  lVar11 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar11 = param_2;
  }
  lVar10 = *param_1;
  lVar11 = (longlong)*(int *)(lVar11 + (longlong)(*(int *)(param_2 + 0x18) + -1) * 4) * 0x60;
  FUN_14920bbbe(lVar10 + lVar11,param_3);
  uVar6 = *(undefined8 *)(param_3 + 0x58);
  puVar2 = (undefined8 *)(lVar10 + 0x50 + lVar11);
  *puVar2 = *(undefined8 *)(param_3 + 0x50);
  puVar2[1] = uVar6;
  return param_2;
}



// FUNCTION 1491e0c5e FUN_1491e0c5e body=276 status=ok
// SIG undefined FUN_1491e0c5e(void)

longlong FUN_1491e0c5e(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar6 = *(int *)(param_2 + 0x34);
  if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(param_1 + 0x270))) {
    lVar2 = *(longlong *)(param_1 + 0x268);
    lVar10 = (longlong)iVar6 * 0x60;
    plVar1 = (longlong *)(lVar2 + lVar10);
    lVar3 = *param_3;
    if (lVar3 == *(longlong *)(lVar2 + 0x50 + lVar10)) {
      lVar4 = plVar1[0xb];
      if (param_4 == '\x14') {
        return lVar4;
      }
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) == param_4)) {
        return lVar4;
      }
    }
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
      uVar9 = (uint)lVar3 & 0xffff;
      plVar7 = plVar1 + 7;
      if ((longlong *)plVar1[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar1[8];
      }
      iVar6 = *(int *)((longlong)plVar7 +
                      (ulonglong)
                      ((int)plVar1[9] - 1U &
                      (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar9) +
                      (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          plVar7 = (longlong *)(*plVar1 + (longlong)iVar6 * 0x18);
          if (*plVar7 == lVar3) {
            plVar8 = plVar7 + 1;
            if ((plVar8 != (longlong *)0x0 && plVar7 != (longlong *)0x0) &&
               ((param_4 == '\x14' || (*(char *)(*plVar8 + 0x10) == param_4)))) {
              plVar1[10] = lVar3;
              lVar2 = *plVar8;
              plVar1[0xb] = lVar2;
              return lVar2;
            }
            break;
          }
          iVar6 = (int)plVar7[2];
        } while (iVar6 != -1);
      }
    }
    *(undefined8 *)(lVar2 + lVar10 + 0x50) = 0;
    *(undefined8 *)(lVar2 + lVar10 + 0x58) = 0;
  }
  return 0;
}



// FUNCTION 1491e0d72 thunk_FUN_1491e0c5e body=5 status=ok
// SIG undefined thunk_FUN_1491e0c5e(void)

longlong thunk_FUN_1491e0c5e(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar6 = *(int *)(param_2 + 0x34);
  if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(param_1 + 0x270))) {
    lVar2 = *(longlong *)(param_1 + 0x268);
    lVar10 = (longlong)iVar6 * 0x60;
    plVar1 = (longlong *)(lVar2 + lVar10);
    lVar3 = *param_3;
    if (lVar3 == *(longlong *)(lVar2 + 0x50 + lVar10)) {
      lVar4 = plVar1[0xb];
      if (param_4 == '\x14') {
        return lVar4;
      }
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) == param_4)) {
        return lVar4;
      }
    }
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
      uVar9 = (uint)lVar3 & 0xffff;
      plVar7 = plVar1 + 7;
      if ((longlong *)plVar1[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar1[8];
      }
      iVar6 = *(int *)((longlong)plVar7 +
                      (ulonglong)
                      ((int)plVar1[9] - 1U &
                      (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar9) +
                      (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          plVar7 = (longlong *)(*plVar1 + (longlong)iVar6 * 0x18);
          if (*plVar7 == lVar3) {
            plVar8 = plVar7 + 1;
            if ((plVar8 != (longlong *)0x0 && plVar7 != (longlong *)0x0) &&
               ((param_4 == '\x14' || (*(char *)(*plVar8 + 0x10) == param_4)))) {
              plVar1[10] = lVar3;
              lVar2 = *plVar8;
              plVar1[0xb] = lVar2;
              return lVar2;
            }
            break;
          }
          iVar6 = (int)plVar7[2];
        } while (iVar6 != -1);
      }
    }
    *(undefined8 *)(lVar2 + lVar10 + 0x50) = 0;
    *(undefined8 *)(lVar2 + lVar10 + 0x58) = 0;
  }
  return 0;
}



// FUNCTION 1491e0d78 FUN_1491e0d78 body=58 status=ok
// SIG undefined FUN_1491e0d78(void)

ulonglong FUN_1491e0d78(undefined8 param_1,longlong param_2)

{
  ulonglong unaff_RSI;
  
  while ((param_2 != 0 && (*(byte *)(param_2 + 0x210) < 2))) {
    unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
    if (((*(byte *)(param_2 + 0x210) != 1) ||
        (param_2 = FUN_140813120(param_1,param_2), param_2 == 0)) ||
       (*(char *)(param_2 + 0x10) != '\x04')) goto LAB_1491e0daa;
  }
  unaff_RSI = 0;
LAB_1491e0daa:
  return unaff_RSI & 0xffffffff;
}



// FUNCTION 1491e0db2 FUN_1491e0db2 body=320 status=ok
// SIG undefined FUN_1491e0db2(void)

void FUN_1491e0db2(longlong param_1,ulonglong param_2,int *param_3,int *param_4,int *param_5,
                  float *param_6)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar1 = 0x10;
    if ((param_2 & 0xfffffffd) == 0) {
      lVar1 = 0x1c;
    }
    lVar4 = 0;
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x90);
      if (*(longlong *)(param_1 + 0x90) == 0) {
        lVar2 = param_1;
      }
      *(undefined1 *)(lVar2 + 0x80 + lVar4) = 1;
      lVar2 = *(longlong *)(param_1 + 0x90);
      if (*(longlong *)(param_1 + 0x90) == 0) {
        lVar2 = param_1;
      }
      lVar2 = lVar2 + lVar1;
      iVar5 = (int)lVar6;
      if (1e-08 < *(float *)(lVar4 + -8 + lVar2)) {
        *param_5 = *param_5 + 1;
        *param_6 = *(float *)(lVar2 + -8 + lVar4) + *param_6;
        piVar3 = param_3;
        if ((*param_3 == -1) || (piVar3 = param_4, *param_4 == -1)) {
          *piVar3 = iVar5;
        }
      }
      if (1e-08 < *(float *)(lVar4 + -4 + lVar2)) {
        param_5[1] = param_5[1] + 1;
        param_6[1] = *(float *)(lVar2 + -4 + lVar4) + param_6[1];
        piVar3 = param_3 + 1;
        if ((param_3[1] == -1) || (piVar3 = param_4 + 1, param_4[1] == -1)) {
          *piVar3 = iVar5;
        }
      }
      if (1e-08 < *(float *)(lVar4 + lVar2)) {
        param_5[2] = param_5[2] + 1;
        param_6[2] = *(float *)(lVar2 + lVar4) + param_6[2];
        piVar3 = param_3 + 2;
        if ((param_3[2] == -1) || (piVar3 = param_4 + 2, param_4[2] == -1)) {
          *piVar3 = iVar5;
        }
      }
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x90;
    } while (lVar6 < *(int *)(param_1 + 0xa0));
  }
  return;
}



// FUNCTION 1491e0ef2 FUN_1491e0ef2 body=120 status=ok
// SIG undefined FUN_1491e0ef2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1491e0ef2(longlong param_1)

{
  undefined *puVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    puVar1 = &DAT_14cc07820;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc0782c) {
      FUN_144b3d300(&DAT_14cc0782c);
      if (DAT_14cc0782c == -1) {
        DAT_14cc07820 = 0;
        _DAT_14cc07824 = 0;
        _Init_thread_footer(&DAT_14cc0782c);
      }
    }
  }
  else {
    puVar1 = (undefined *)(*(longlong *)(param_1 + 0x18) + 0x10);
  }
  return puVar1;
}



// FUNCTION 1491e0f6a FUN_1491e0f6a body=341 status=ok
// SIG undefined FUN_1491e0f6a(void)

undefined8 FUN_1491e0f6a(char *param_1,char *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((*(longlong *)(param_2 + 4) == *(longlong *)(param_1 + 4)) && (*param_2 == *param_1)) {
    uVar4 = *(uint *)(param_3 + 0xa8);
    uVar3 = uVar4 >> 0xd ^ (int)param_3 - uVar4;
    uVar1 = 0x9e3779b9;
    uVar5 = uVar3 << 8 ^ (-0x61c88647 - uVar4) - uVar3;
    uVar6 = uVar5 >> 0xd ^ (uVar4 - uVar3) - uVar5;
    uVar3 = uVar6 >> 0xc ^ (uVar3 - uVar5) - uVar6;
    uVar4 = uVar3 << 0x10 ^ (uVar5 - uVar6) - uVar3;
    uVar5 = uVar4 >> 5 ^ (uVar6 - uVar3) - uVar4;
    uVar3 = uVar5 >> 3 ^ (uVar3 - uVar4) - uVar5;
    uVar4 = uVar3 << 10 ^ (uVar4 - uVar5) - uVar3;
    uVar4 = uVar4 >> 0xf ^ uVar5 - (uVar3 + uVar4);
    if (*(longlong *)(param_3 + 0x570) != 0) {
      uVar3 = *(uint *)(*(longlong *)(param_3 + 0x570) + 0xa0);
      uVar6 = uVar3 >> 0xd ^ uVar4 - uVar3;
      uVar5 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
      uVar4 = uVar5 >> 0xd ^ (uVar3 - uVar6) - uVar5;
      uVar3 = uVar4 >> 0xc ^ (uVar6 - uVar5) - uVar4;
      uVar5 = uVar3 << 0x10 ^ (uVar5 - uVar4) - uVar3;
      uVar6 = uVar5 >> 5 ^ (uVar4 - uVar3) - uVar5;
      uVar4 = uVar6 >> 3 ^ (uVar3 - uVar5) - uVar6;
      uVar3 = uVar4 << 10 ^ (uVar5 - uVar6) - uVar4;
      uVar4 = uVar4 + uVar3;
      uVar1 = (ulonglong)uVar4;
      uVar4 = uVar3 >> 0xf ^ uVar6 - uVar4;
    }
    uVar2 = CONCAT71((int7)(uVar1 >> 8),uVar4 == *(uint *)(param_1 + 0x10));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1491e10c0 FUN_1491e10c0 body=574 status=ok
// SIG undefined FUN_1491e10c0(void)

undefined8 * FUN_1491e10c0(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
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
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  uVar2 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar2);
    }
    FUN_14920ebb8(param_1,uVar2);
    iVar3 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) < iVar3)) {
      *(int *)(param_1 + 9) = iVar3;
      FUN_14920ed52(param_1);
    }
  }
  uVar4 = (longlong)(int)param_2[1] - (longlong)*(int *)((longlong)param_2 + 0x34);
  uVar2 = (uint)uVar4;
  if ((uint)(*(int *)(param_1 + 0xb) - *(int *)((longlong)param_1 + 0x84)) < uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar4);
    }
    FUN_14920ef3a(param_1 + 10,uVar4 & 0xffffffff);
    iVar3 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x13) == 0) || (*(int *)(param_1 + 0x13) < iVar3)) {
      *(int *)(param_1 + 0x13) = iVar3;
      FUN_1491ca918(param_1 + 10);
    }
  }
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_2[5];
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_2;
  if ((iStack_44 != iVar3) || (local_50 != plVar1)) {
    do {
      FUN_1491e1300(param_1,*local_80 + (longlong)iStack_64 * 0x20,
                    *local_80 + (longlong)iStack_64 * 0x20 + 0xc,param_3);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 || (local_70 != plVar1 || iStack_64 != iVar3));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e1300 FUN_1491e1300 body=426 status=ok
// SIG undefined FUN_1491e1300(void)

void FUN_1491e1300(longlong param_1,byte *param_2,byte *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 auStack_88 [40];
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 local_50;
  byte *local_40;
  uint *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*param_2 != 0 && *(longlong *)(param_2 + 4) != 0) &&
      (uint)*(ushort *)(param_2 + 6) < DAT_14c87eb08 + 1U) {
    lVar1 = *(longlong *)(param_3 + 4);
    if ((*(longlong *)(param_2 + 4) != lVar1) || (*param_2 != *param_3)) {
      if ((*param_3 != 0 && lVar1 != 0) &&
          ((uint)((ulonglong)lVar1 >> 0x10) & 0xffff) < DAT_14c87eb08 + 1U) {
        local_60 = local_60 & 0xffffff00;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0xffff;
        local_50 = 0xffffffff;
        FUN_144828dba(&local_60,param_3,param_4);
        local_60 = (uint)*(undefined8 *)param_3;
        uStack_5c = (undefined4)((ulonglong)*(undefined8 *)param_3 >> 0x20);
        uStack_58 = *(undefined4 *)(param_3 + 8);
        local_40 = param_2;
        local_38 = &local_60;
        FUN_14920f0d8(param_1,local_2c);
      }
      local_60 = (uint)param_2;
      uStack_5c = (undefined4)((ulonglong)param_2 >> 0x20);
      uStack_58 = SUB84(param_3,0);
      uStack_54 = (undefined2)((ulonglong)param_3 >> 0x20);
      uStack_52 = (undefined2)((ulonglong)param_3 >> 0x30);
      FUN_1491ca586(param_1 + 0x50,&local_40,&local_60,0);
      uVar2 = *(undefined8 *)(param_3 + 4);
      uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar8 = (uint)uVar2 & 0xffff;
      uVar3 = *(undefined8 *)(param_2 + 4);
      uVar5 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar6 = (uint)uVar3 & 0xffff;
      uVar7 = FUN_144a78877((uint)*param_2 +
                            (((uint)uVar3 << 0x10 | uVar6) + (int)((ulonglong)uVar3 >> 0x20) +
                             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar6 >> 4)) * 10,
                            (uint)*param_3 +
                            (((uint)uVar2 << 0x10 | uVar8) + (int)((ulonglong)uVar2 >> 0x20) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 10);
      uVar7 = FUN_144a78877(*(undefined4 *)(param_1 + 0xa0),uVar7);
      *(undefined4 *)(param_1 + 0xa0) = uVar7;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e14ac FUN_1491e14ac body=69 status=ok
// SIG undefined FUN_1491e14ac(void)

longlong FUN_1491e14ac(longlong param_1,longlong param_2)

{
  FUN_1492036b2();
  FUN_14920387c(param_1 + 0x10,param_2 + 0x10);
  FUN_149203a12(param_1 + 0x20,param_2 + 0x20);
  FUN_149203bfc(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 1491e14f2 FUN_1491e14f2 body=4596 status=ok
// SIG undefined FUN_1491e14f2(void)

/* WARNING: Type propagation algorithm not settling */

longlong * FUN_1491e14f2(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  bool bVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_178 [32];
  longlong *local_158;
  undefined ***local_150;
  longlong *local_148;
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  uint local_f8;
  uint uStack_f4;
  int iStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined **local_d8;
  undefined4 *local_d0;
  int local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_3 + 0x28);
  if ((((iVar2 != 0) && (*(int *)(param_3 + 0x18) == iVar2)) && (*(int *)(param_3 + 0x38) == iVar2))
     && (*(int *)(param_3 + 0x48) == iVar2)) {
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    local_128 = param_1;
    local_120 = param_2;
    if ((longlong)(int)param_1[1] != 0) {
      plVar10 = (longlong *)*param_1;
      plVar7 = plVar10 + (longlong)(int)param_1[1] * 0x2e;
      do {
        uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
        local_e8 = CONCAT31(local_e8._1_3_,uVar5);
        uStack_e4 = (undefined4)plVar10[1];
        uStack_e0 = (uint)((ulonglong)plVar10[1] >> 0x20);
        uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
        local_f8 = CONCAT31(local_f8._1_3_,uVar5);
        uStack_f4 = (uint)plVar10[1];
        iStack_f0 = (int)((ulonglong)plVar10[1] >> 0x20);
        local_d8 = (undefined **)&local_f8;
        local_d0 = &local_e8;
        FUN_14920f436(&local_b8,&local_c0,&local_d8);
        plVar10 = plVar10 + 0x2e;
      } while (plVar10 != plVar7);
    }
    if ((longlong)(int)local_128[5] != 0) {
      plVar10 = (longlong *)local_128[4];
      plVar7 = plVar10 + (longlong)(int)local_128[5] * 0x6c;
      do {
        uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
        local_e8 = CONCAT31(local_e8._1_3_,uVar5);
        uStack_e4 = (undefined4)plVar10[1];
        uStack_e0 = (uint)((ulonglong)plVar10[1] >> 0x20);
        uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
        local_f8 = CONCAT31(local_f8._1_3_,uVar5);
        uStack_f4 = (uint)plVar10[1];
        iStack_f0 = (int)((ulonglong)plVar10[1] >> 0x20);
        local_d8 = (undefined **)&local_f8;
        local_d0 = &local_e8;
        FUN_14920f436(&local_b8,&local_c0,&local_d8);
        plVar10 = plVar10 + 0x6c;
      } while (plVar10 != plVar7);
    }
    if ((longlong)(int)local_128[3] != 0) {
      plVar10 = (longlong *)local_128[2];
      plVar7 = plVar10 + (longlong)(int)local_128[3] * 0x1e;
      do {
        uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
        local_e8 = CONCAT31(local_e8._1_3_,uVar5);
        uStack_e4 = (undefined4)plVar10[1];
        uStack_e0 = (uint)((ulonglong)plVar10[1] >> 0x20);
        uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
        local_f8 = CONCAT31(local_f8._1_3_,uVar5);
        uStack_f4 = (uint)plVar10[1];
        iStack_f0 = (int)((ulonglong)plVar10[1] >> 0x20);
        local_d8 = (undefined **)&local_f8;
        local_d0 = &local_e8;
        FUN_14920f436(&local_b8,&local_c0,&local_d8);
        plVar10 = plVar10 + 0x1e;
      } while (plVar10 != plVar7);
    }
    if ((longlong)(int)local_128[7] != 0) {
      plVar10 = (longlong *)local_128[6];
      plVar7 = plVar10 + (longlong)(int)local_128[7] * 4;
      do {
        uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
        local_e8 = CONCAT31(local_e8._1_3_,uVar5);
        uStack_e4 = (undefined4)plVar10[1];
        uStack_e0 = (uint)((ulonglong)plVar10[1] >> 0x20);
        uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
        local_f8 = CONCAT31(local_f8._1_3_,uVar5);
        uStack_f4 = (uint)plVar10[1];
        iStack_f0 = (int)((ulonglong)plVar10[1] >> 0x20);
        local_d8 = (undefined **)&local_f8;
        local_d0 = &local_e8;
        FUN_14920f436(&local_b8,&local_c0,&local_d8);
        plVar10 = plVar10 + 4;
      } while (plVar10 != plVar7);
    }
    FUN_144a81de8(&local_d8);
    local_d8 = &PTR_FUN_14bb8a6e0;
    local_c8 = 0;
    local_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    param_2 = local_120;
    if (0 < *(int *)(param_3 + 0x18)) {
      local_108 = local_128 + 4;
      local_110 = local_128 + 2;
      local_118 = local_128 + 6;
      lVar13 = 8;
      lVar17 = 0;
      bVar12 = false;
      do {
        local_c8 = 0;
        plVar7 = (longlong *)0x0;
        plVar10 = (longlong *)0x0;
        switch(*(undefined1 *)(*(longlong *)(param_3 + 0x10) + lVar17)) {
        case 1:
          plVar7 = (longlong *)FUN_14001cc68(0x180,0x10);
          plVar7[1] = (longlong)&DAT_100000001;
          *plVar7 = (longlong)&PTR_FUN_14bb904d0;
          plVar7[3] = 0;
          *(undefined4 *)(plVar7 + 4) = 0xffffffff;
          plVar7[2] = (longlong)&PTR_FUN_14bb89190;
          plVar7[5] = 0;
          *(undefined4 *)(plVar7 + 6) = 0xffffffff;
          plVar10 = &DAT_14c846480;
          plVar16 = plVar7 + 8;
          for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
            *plVar16 = *plVar10;
            plVar10 = plVar10 + 1;
            plVar16 = plVar16 + 1;
          }
          plVar10 = &DAT_14c846480;
          plVar16 = plVar7 + 0x14;
          for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
            *plVar16 = *plVar10;
            plVar10 = plVar10 + 1;
            plVar16 = plVar16 + 1;
          }
          plVar10 = &DAT_14c846480;
          plVar16 = plVar7 + 0x20;
          for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
            *plVar16 = *plVar10;
            plVar10 = plVar10 + 1;
            plVar16 = plVar16 + 1;
          }
          plVar7[0x2c] = 0;
          plVar7[0x2d] = 0;
          *(undefined1 *)(plVar7 + 0x2e) = 0;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            LOCK();
            plVar10 = plVar7 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
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
          lVar15 = DAT_14cc07618;
          lVar14 = DAT_14cc07618;
          if (DAT_14cc07618 == 0) {
            uVar8 = FUN_1408c25db();
            DAT_14cc07618 = FUN_140002ddd(FUN_1466ccfb3,uVar8,L"RigBone");
            lVar15 = DAT_14cc07618;
            lVar14 = DAT_14cc07618;
            if (DAT_14cc07618 == 0) {
              uVar8 = FUN_1408c25db();
              lVar15 = FUN_140002ddd(FUN_1466ccfb3,uVar8,L"RigBone");
              DAT_14cc07618 = lVar15;
LAB_1491e1d6f:
              lVar14 = 0;
            }
          }
          break;
        case 2:
          plVar7 = (longlong *)FUN_14001cc68(0x100,0x10);
          plVar7[1] = (longlong)&DAT_100000001;
          *plVar7 = (longlong)&PTR_FUN_14bb90510;
          plVar7[3] = 0;
          *(undefined4 *)(plVar7 + 4) = 0xffffffff;
          plVar7[2] = (longlong)&PTR_FUN_14bb8a6c0;
          *(undefined1 *)(plVar7 + 5) = 0;
          *(undefined8 *)((longlong)plVar7 + 0x2c) = 0;
          *(undefined4 *)((longlong)plVar7 + 0x34) = 0xffffffff;
          plVar10 = &DAT_14c846480;
          plVar16 = plVar7 + 8;
          for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
            *plVar16 = *plVar10;
            plVar10 = plVar10 + 1;
            plVar16 = plVar16 + 1;
          }
          plVar10 = &DAT_14c846480;
          plVar16 = plVar7 + 0x14;
          for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
            *plVar16 = *plVar10;
            plVar10 = plVar10 + 1;
            plVar16 = plVar16 + 1;
          }
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            LOCK();
            plVar10 = plVar7 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
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
          lVar15 = DAT_14cc08068;
          lVar14 = DAT_14cc08068;
          if (DAT_14cc08068 == 0) {
            uVar8 = FUN_1408c25db();
            DAT_14cc08068 = FUN_140002ddd(FUN_1466d0865,uVar8,L"RigSpace");
            lVar15 = DAT_14cc08068;
            lVar14 = DAT_14cc08068;
            if (DAT_14cc08068 == 0) {
              uVar8 = FUN_1408c25db();
              lVar15 = FUN_140002ddd(FUN_1466d0865,uVar8,L"RigSpace");
              DAT_14cc08068 = lVar15;
              goto LAB_1491e1d6f;
            }
          }
          break;
        case 3:
        case 5:
        case 6:
        case 7:
          goto switchD_1491e191a_caseD_3;
        case 4:
          plVar7 = (longlong *)FUN_14001cc68(0x370,0x10);
          plVar7[1] = (longlong)&DAT_100000001;
          *plVar7 = (longlong)&PTR_FUN_14bb904f0;
          plVar10 = plVar7 + 2;
          FUN_1491d7834(plVar10);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            LOCK();
            plVar16 = plVar7 + 1;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)*plVar16 == 0) {
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
          lVar14 = DAT_14cc07748;
          if (DAT_14cc07748 == 0) {
            uVar8 = FUN_1408c25db();
            DAT_14cc07748 = FUN_140002ddd(FUN_1466cd55f,uVar8,L"RigControl");
            lVar14 = DAT_14cc07748;
            if (DAT_14cc07748 == 0) {
              uVar8 = FUN_1408c25db();
              DAT_14cc07748 = FUN_140002ddd(FUN_1466cd55f,uVar8,L"RigControl");
              lVar14 = 0;
            }
          }
          local_c0 = *(longlong *)(DAT_14cc07748 + 0x18);
          FUN_1400021e4(&local_c0,&local_f8);
          puVar11 = &DAT_149dfb77a;
          if (*(int *)(*(longlong *)(param_3 + 0x20) + lVar13) != 0) {
            puVar11 = *(undefined2 **)(*(longlong *)(param_3 + 0x20) + -8 + lVar13);
          }
          goto LAB_1491e1c41;
        case 8:
          plVar7 = (longlong *)FUN_14001cc68(0x30,0x10);
          plVar7[1] = (longlong)&DAT_100000001;
          *plVar7 = (longlong)&PTR_FUN_14bb90530;
          plVar7[3] = 0;
          *(undefined4 *)(plVar7 + 4) = 0xffffffff;
          plVar7[2] = (longlong)&PTR_FUN_14bb8a230;
          *(undefined4 *)(plVar7 + 5) = 0;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
            LOCK();
            plVar10 = plVar7 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
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
          lVar15 = DAT_14cc07778;
          lVar14 = DAT_14cc07778;
          if (DAT_14cc07778 == 0) {
            uVar8 = FUN_1408c25db();
            DAT_14cc07778 = FUN_140002ddd(FUN_1466cd6ed,uVar8,L"RigCurve");
            lVar15 = DAT_14cc07778;
            lVar14 = DAT_14cc07778;
            if (DAT_14cc07778 == 0) {
              uVar8 = FUN_1408c25db();
              lVar15 = FUN_140002ddd(FUN_1466cd6ed,uVar8,L"RigCurve");
              DAT_14cc07778 = lVar15;
              goto LAB_1491e1d6f;
            }
          }
          break;
        default:
          plVar10 = (longlong *)0x0;
          goto switchD_1491e191a_caseD_3;
        }
        local_c0 = *(longlong *)(lVar15 + 0x18);
        FUN_1400021e4(&local_c0,&local_f8);
        puVar11 = &DAT_149dfb77a;
        if (*(int *)(*(longlong *)(param_3 + 0x20) + lVar13) != 0) {
          puVar11 = *(undefined2 **)(*(longlong *)(param_3 + 0x20) + -8 + lVar13);
        }
        plVar10 = plVar7 + 2;
LAB_1491e1c41:
        local_148 = (longlong *)&local_f8;
        local_150 = &local_d8;
        local_140 = CONCAT71(local_140._1_7_,1);
        local_158 = (longlong *)((ulonglong)local_158 & 0xffffffff00000000);
        FUN_14115911a(lVar14,puVar11,plVar10,0);
        if (CONCAT44(uStack_f4,local_f8) != 0) {
          FUN_1400020a8();
        }
        if (0 < local_c8) {
          bVar12 = true;
          if (plVar7 != (longlong *)0x0) {
            bVar4 = false;
            goto LAB_1491e1c97;
          }
LAB_1491e1e89:
          FUN_14920f5ac(CONCAT44(uStack_e4,local_e8),uStack_e0);
          param_2 = local_120;
          if (CONCAT44(uStack_e4,local_e8) != 0) {
            FUN_1400020a8();
          }
          local_70 = 0;
          if (local_78 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_14128f766(&local_b8);
          if ((!bVar12) && (*param_2 != 0)) {
            FUN_1400020a8();
          }
          goto LAB_1491e1545;
        }
switchD_1491e191a_caseD_3:
        uVar3 = uStack_e0;
        lVar15 = (longlong)(int)uStack_e0;
        uStack_e0 = uStack_e0 + 1;
        if (uStack_dc < uStack_e0) {
          FUN_14920f6aa(&local_e8,uVar3);
        }
        *(longlong **)(CONCAT44(uStack_e4,local_e8) + lVar15 * 0x10) = plVar10;
        *(longlong **)(CONCAT44(uStack_e4,local_e8) + 8 + lVar15 * 0x10) = plVar7;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
          bVar4 = true;
LAB_1491e1c97:
          LOCK();
          plVar10 = plVar7 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
          if (!bVar4) goto LAB_1491e1e89;
        }
        lVar17 = lVar17 + 1;
        lVar13 = lVar13 + 0x10;
      } while (lVar17 < *(int *)(param_3 + 0x18));
      param_2 = local_120;
      if (0 < *(int *)(param_3 + 0x18)) {
        lVar13 = 0;
        plVar10 = local_128;
        do {
          switch(*(undefined1 *)(*(longlong *)(param_3 + 0x10) + lVar13)) {
          case 1:
            plVar7 = *(longlong **)(CONCAT44(uStack_e4,local_e8) + lVar13 * 0x10);
            local_c0 = 0;
            (**(code **)(*plVar7 + 0x10))(plVar7,&local_f8,0);
            if ((int)uStack_b0 != local_84) {
              uVar3 = (uint)((ulonglong)CONCAT44(iStack_f0,uStack_f4) >> 0x10);
              puVar9 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar9 = local_80;
              }
              iVar2 = *(int *)(puVar9 + (ulonglong)
                                        (local_70 - 1U &
                                        (local_f8 & 0xff) +
                                        (iStack_f0 + (uStack_f4 << 0x10 | uStack_f4 & 0xffff) +
                                         (uVar3 << 0x13 | uVar3 & 0xffff) +
                                        ((uStack_f4 & 0xffff) >> 4)) * 10) * 4);
              while (iVar2 != -1) {
                lVar15 = (longlong)iVar2 * 0x20;
                lVar17 = local_b8 + lVar15;
                if ((*(longlong *)(local_b8 + 4 + lVar15) == CONCAT44(iStack_f0,uStack_f4)) &&
                   (*(char *)(local_b8 + lVar15) == (char)local_f8)) {
                  if (lVar17 != -0xc && lVar17 != 0) {
                    local_c0 = *(longlong *)(lVar17 + 0x10);
                  }
                  break;
                }
                iVar2 = *(int *)(lVar17 + 0x18);
              }
            }
            local_150 = (undefined ***)(lVar13 * 0x60 + *(longlong *)(param_3 + 0x40));
            local_158 = plVar7 + 0x1e;
            plVar10 = (longlong *)FUN_1491d611a(plVar10,plVar7 + 1,&local_c0,plVar7 + 6);
            break;
          case 2:
            plVar7 = *(longlong **)(CONCAT44(uStack_e4,local_e8) + lVar13 * 0x10);
            local_c0 = 0;
            (**(code **)(*plVar7 + 0x10))(plVar7,&local_f8);
            if ((int)uStack_b0 != local_84) {
              uVar3 = (uint)((ulonglong)CONCAT44(iStack_f0,uStack_f4) >> 0x10);
              puVar9 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar9 = local_80;
              }
              iVar2 = *(int *)(puVar9 + (ulonglong)
                                        (local_70 - 1U &
                                        (local_f8 & 0xff) +
                                        (iStack_f0 + (uStack_f4 << 0x10 | uStack_f4 & 0xffff) +
                                         (uVar3 << 0x13 | uVar3 & 0xffff) +
                                        ((uStack_f4 & 0xffff) >> 4)) * 10) * 4);
              while (iVar2 != -1) {
                lVar17 = (longlong)iVar2 * 0x20;
                puVar9 = (undefined1 *)(local_b8 + lVar17);
                if ((*(longlong *)(local_b8 + 4 + lVar17) == CONCAT44(iStack_f0,uStack_f4)) &&
                   (*(char *)(local_b8 + lVar17) == (char)local_f8)) {
                  if (puVar9 != &DAT_fffffffffffffff4 && puVar9 != (undefined1 *)0x0) {
                    local_c0 = *(longlong *)(puVar9 + 0x10);
                  }
                  break;
                }
                iVar2 = *(int *)(puVar9 + 0x18);
              }
            }
            local_158 = plVar7 + 6;
            plVar10 = (longlong *)FUN_1491e26e8(local_110,plVar7 + 1,(char)plVar7[3],&local_c0);
            break;
          default:
            goto switchD_1491e1f39_caseD_3;
          case 4:
            plVar7 = *(longlong **)(CONCAT44(uStack_e4,local_e8) + lVar13 * 0x10);
            local_c0 = 0;
            (**(code **)(*plVar7 + 0x10))(plVar7,&local_f8);
            if ((int)uStack_b0 != local_84) {
              uVar3 = (uint)((ulonglong)CONCAT44(iStack_f0,uStack_f4) >> 0x10);
              puVar9 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar9 = local_80;
              }
              iVar2 = *(int *)(puVar9 + (ulonglong)
                                        (local_70 - 1U &
                                        (local_f8 & 0xff) +
                                        (iStack_f0 + (uStack_f4 << 0x10 | uStack_f4 & 0xffff) +
                                         (uVar3 << 0x13 | uVar3 & 0xffff) +
                                        ((uStack_f4 & 0xffff) >> 4)) * 10) * 4);
              while (iVar2 != -1) {
                lVar17 = (longlong)iVar2 * 0x20;
                puVar9 = (undefined1 *)(local_b8 + lVar17);
                if ((*(longlong *)(local_b8 + 4 + lVar17) == CONCAT44(iStack_f0,uStack_f4)) &&
                   (*(char *)(local_b8 + lVar17) == (char)local_f8)) {
                  if (puVar9 != &DAT_fffffffffffffff4 && puVar9 != (undefined1 *)0x0) {
                    local_c0 = *(longlong *)(puVar9 + 0x10);
                  }
                  break;
                }
                iVar2 = *(int *)(puVar9 + 0x18);
              }
            }
            local_100 = 0;
            (**(code **)(*plVar7 + 0x18))(plVar7,&local_f8);
            if ((int)uStack_b0 != local_84) {
              uVar3 = (uint)((ulonglong)CONCAT44(iStack_f0,uStack_f4) >> 0x10);
              puVar9 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar9 = local_80;
              }
              iVar2 = *(int *)(puVar9 + (ulonglong)
                                        (local_70 - 1U &
                                        (local_f8 & 0xff) +
                                        (iStack_f0 + (uStack_f4 << 0x10 | uStack_f4 & 0xffff) +
                                         (uVar3 << 0x13 | uVar3 & 0xffff) +
                                        ((uStack_f4 & 0xffff) >> 4)) * 10) * 4);
              while (iVar2 != -1) {
                lVar17 = (longlong)iVar2 * 0x20;
                puVar9 = (undefined1 *)(local_b8 + lVar17);
                if ((*(longlong *)(local_b8 + 4 + lVar17) == CONCAT44(iStack_f0,uStack_f4)) &&
                   (*(char *)(local_b8 + lVar17) == (char)local_f8)) {
                  if (puVar9 != &DAT_fffffffffffffff4 && puVar9 != (undefined1 *)0x0) {
                    local_100 = *(longlong *)(puVar9 + 0x10);
                  }
                  break;
                }
                iVar2 = *(int *)(puVar9 + 0x18);
              }
            }
            local_130 = plVar7 + 0x66;
            local_138 = plVar7 + 0x5a;
            local_140 = (longlong)plVar7 + 700;
            local_148 = plVar7 + 0x14;
            local_150 = (undefined ***)(plVar7 + 8);
            local_158 = &local_100;
            plVar10 = (longlong *)FUN_1491d7696(local_108,plVar7 + 1,(char)plVar7[3],&local_c0);
            *(undefined8 *)((longlong)plVar10 + 0x1c) = *(undefined8 *)((longlong)plVar7 + 0x1c);
            *(undefined1 *)((longlong)plVar10 + 0x1aa) = *(undefined1 *)((longlong)plVar7 + 0x1aa);
            *(char *)(plVar10 + 0x35) = (char)plVar7[0x35];
            *(undefined1 *)((longlong)plVar10 + 0x1ab) = *(undefined1 *)((longlong)plVar7 + 0x1ab);
            *(undefined1 *)((longlong)plVar10 + 0x1ac) = *(undefined1 *)((longlong)plVar7 + 0x1ac);
            *(undefined1 *)((longlong)plVar10 + 0x1ad) = *(undefined1 *)((longlong)plVar7 + 0x1ad);
            memcpy(plVar10 + 0x36,plVar7 + 0x36,0x84);
            memcpy((void *)((longlong)plVar10 + 0x234),(void *)((longlong)plVar7 + 0x234),0x84);
            *(undefined1 *)((longlong)plVar10 + 0x1ae) = *(undefined1 *)((longlong)plVar7 + 0x1ae);
            *(char *)(plVar10 + 0x57) = (char)plVar7[0x57];
            *(undefined1 *)((longlong)plVar10 + 0x2b9) = *(undefined1 *)((longlong)plVar7 + 0x2b9);
            lVar17 = plVar7[0x6b];
            if (DAT_14c950c29 == '\x01') {
              if (lVar17 == 0) {
                lVar17 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar17 = plVar7[0x6b];
              }
            }
            plVar10[0x6b] = lVar17;
            lVar17 = *plVar10;
            goto LAB_1491e2449;
          case 8:
            plVar10 = *(longlong **)(CONCAT44(uStack_e4,local_e8) + lVar13 * 0x10);
            plVar7 = (longlong *)FUN_1491d7930(local_118,plVar10 + 1,(int)plVar10[3]);
            uVar5 = (**(code **)(*plVar7 + 8))(plVar7);
            lVar17 = plVar7[1];
            bVar6 = (**(code **)(*plVar10 + 8))(plVar10);
            param_2 = local_120;
            local_f8 = CONCAT31(local_f8._1_3_,bVar6);
            lVar15 = plVar10[1];
            uStack_f4 = (uint)lVar15;
            iStack_f0 = (int)((ulonglong)lVar15 >> 0x20);
            uVar3 = (uint)((ulonglong)lVar15 >> 0x10);
            puVar9 = (undefined1 *)
                     FUN_14920f730(&local_b8,
                                   (uint)bVar6 +
                                   ((uStack_f4 << 0x10 | uStack_f4 & 0xffff) + iStack_f0 +
                                    (uVar3 << 0x13 | uVar3 & 0xffff) + ((uStack_f4 & 0xffff) >> 4))
                                   * 10,&local_f8);
            *puVar9 = uVar5;
            *(longlong *)(puVar9 + 4) = lVar17;
            uVar5 = (**(code **)(*plVar7 + 8))(plVar7);
            lVar17 = plVar7[1];
            goto LAB_1491e24d4;
          }
          lVar17 = *plVar10;
LAB_1491e2449:
          uVar5 = (**(code **)(lVar17 + 8))(plVar10);
          lVar17 = plVar10[1];
          bVar6 = (**(code **)(*plVar7 + 8))(plVar7);
          local_f8 = CONCAT31(local_f8._1_3_,bVar6);
          lVar15 = plVar7[1];
          uStack_f4 = (uint)lVar15;
          iStack_f0 = (int)((ulonglong)lVar15 >> 0x20);
          uVar3 = (uint)((ulonglong)lVar15 >> 0x10);
          puVar9 = (undefined1 *)
                   FUN_14920f730(&local_b8,
                                 (uint)bVar6 +
                                 ((uStack_f4 << 0x10 | uStack_f4 & 0xffff) + iStack_f0 +
                                  (uVar3 << 0x13 | uVar3 & 0xffff) + ((uStack_f4 & 0xffff) >> 4)) *
                                 10);
          *puVar9 = uVar5;
          *(longlong *)(puVar9 + 4) = lVar17;
          uVar5 = (**(code **)(*plVar10 + 8))(plVar10);
          lVar17 = plVar10[1];
          param_2 = local_120;
LAB_1491e24d4:
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_149192788(param_2,iVar2);
          }
          lVar15 = *param_2;
          *(undefined1 *)(lVar15 + (longlong)iVar2 * 0xc) = uVar5;
          *(longlong *)(lVar15 + 4 + (longlong)iVar2 * 0xc) = lVar17;
          plVar10 = local_128;
switchD_1491e1f39_caseD_3:
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(param_3 + 0x18));
      }
    }
    FUN_14920f5ac(CONCAT44(uStack_e4,local_e8),uStack_e0);
    if (CONCAT44(uStack_e4,local_e8) != 0) {
      FUN_1400020a8();
    }
    local_70 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14128f766(&local_b8);
  }
LAB_1491e1545:
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e26e8 FUN_1491e26e8 body=255 status=ok
// SIG undefined FUN_1491e26e8(void)

longlong FUN_1491e26e8(longlong *param_1,undefined8 *param_2,undefined1 param_3,undefined8 *param_4,
                      undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_128 [32];
  undefined8 local_108 [13];
  undefined8 local_a0 [13];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  puVar8 = local_a0;
  uVar2 = *param_2;
  uVar3 = *param_4;
  puVar7 = param_5;
  for (lVar5 = 0xc; puVar8 = puVar8 + 1, lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
  }
  puVar8 = local_108;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *param_5;
    param_5 = param_5 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149210f34(param_1,iVar1);
  }
  lVar5 = *param_1;
  lVar4 = (longlong)iVar1 * 0xf0;
  puVar8 = (undefined8 *)(lVar5 + lVar4);
  puVar8[1] = uVar2;
  *(undefined4 *)(puVar8 + 2) = 0xffffffff;
  *puVar8 = &PTR_FUN_14bb8a6c0;
  *(undefined1 *)(puVar8 + 3) = param_3;
  *(undefined8 *)((longlong)puVar8 + 0x1c) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x24) = 0xffffffff;
  puVar7 = local_a0;
  puVar8 = puVar8 + 5;
  for (lVar6 = 0xd; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar8 = local_108;
  puVar7 = (undefined8 *)(lVar5 + 0x90 + lVar4);
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return lVar4 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e27f8 FUN_1491e27f8 body=675 status=ok
// SIG undefined FUN_1491e27f8(void)

void FUN_1491e27f8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_5e8 [32];
  undefined1 *local_5c8;
  undefined1 local_5c0;
  undefined1 local_5b8;
  undefined8 local_5b0;
  undefined4 local_5a8;
  undefined1 local_5a0 [444];
  undefined8 local_3e4;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined1 local_3d0 [444];
  uint local_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined1 local_1f0 [440];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5e8;
  local_208 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_208);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_208);
  }
  local_214 = local_214 & 0xffffff00;
  uStack_210 = 0;
  uStack_20c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_214);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_214);
  }
  FUN_1491d73b0(local_3d0);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3d0);
  }
  local_3d4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d4);
  }
  local_3d8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14918b1f6(local_5a0,local_3d0);
  uVar1 = local_208;
  local_5b0 = CONCAT44(uStack_210,local_214);
  local_5a8 = uStack_20c;
  FUN_14918b1f6(local_1f0,local_5a0);
  local_200 = local_5b0;
  local_1f8 = local_5a8;
  local_5b8 = 0;
  local_5c0 = 0;
  local_5c8 = local_1f0;
  FUN_1491ed744(param_1,&local_3e4,uVar1);
  FUN_14918b3e4(local_5a0);
  *(undefined4 *)(param_3 + 1) = local_3dc;
  *param_3 = local_3e4;
  FUN_14918b3e4(local_3d0);
  if ((local_38 ^ (ulonglong)auStack_5e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e2aae FUN_1491e2aae body=420 status=ok
// SIG undefined FUN_1491e2aae(void)

void FUN_1491e2aae(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = local_2c & 0xffffff00;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_38 = local_38 & 0xffffff00;
  uStack_34 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = uStack_30;
  local_50 = CONCAT44(uStack_34,local_38);
  local_60 = CONCAT44(uStack_28,local_2c);
  local_58 = uStack_24;
  uVar1 = FUN_1491e2c54(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e2c54 FUN_1491e2c54 body=497 status=ok
// SIG undefined FUN_1491e2c54(void)

undefined8 FUN_1491e2c54(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_14576d4b4();
  if (cVar2 == '\0') goto LAB_1491e2c80;
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 == 0) {
LAB_1491e2cce:
    lVar6 = 0;
  }
  else {
    lVar4 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_1491e2cce;
  }
  uVar3 = FUN_140813180(lVar6,param_2);
  if ((((int)uVar3 < 0) || (*(int *)(lVar6 + 0xc0) <= (int)uVar3)) ||
     (lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0xb8) + (ulonglong)uVar3 * 8), lVar4 == 0)) {
    FUN_14919e8cc(param_2,&local_40);
    puVar5 = local_40;
    if (local_38 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1491f1c5e(param_1,L"Cannot Add Available Space, Control \'%s\' not found.",puVar5);
  }
  else if (*(char *)(lVar4 + 0x10) == '\x04') {
    uVar3 = FUN_140813180(lVar6,param_3);
    if ((((int)uVar3 < 0) || (*(int *)(lVar6 + 0xc0) <= (int)uVar3)) ||
       (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xb8) + (ulonglong)uVar3 * 8), lVar6 == 0)) {
      FUN_14919e8cc(param_3,&local_40);
      puVar5 = local_40;
      if (local_38 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_1491f1d16(param_1,puVar5);
    }
    else {
      bVar1 = *(byte *)(lVar6 + 0x10);
      if ((((ulonglong)bVar1 < 0x21) && ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
         (bVar1 == 0x80)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
      FUN_14919e8cc(param_3,&local_40);
      puVar5 = local_40;
      if (local_38 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_1491f1d7c(param_1,L"Cannot Add Available Space, \'%s\' is not a Transform.",puVar5);
    }
  }
  else {
    FUN_14919e8cc(param_2,&local_40);
    puVar5 = local_40;
    if (local_38 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1491f1cba(param_1,L"Cannot Add Available Space, \'%s\' is not a Control.",puVar5);
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1491e2c80:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1491e2e78 FUN_1491e2e78 body=850 status=ok
// SIG undefined FUN_1491e2e78(void)

void FUN_1491e2e78(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined1 local_160;
  undefined1 local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128 [12];
  undefined8 local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_ad;
  int local_ac;
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_44 = local_44 & 0xffffff00;
  uStack_40 = 0;
  uStack_3c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_ac = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  iVar1 = local_ac;
  local_ad = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ad);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ad);
  }
  local_b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  local_b8 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_158 = local_ad;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_168 = local_128;
  puVar3 = local_a8;
  puVar4 = local_168;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_130 = uStack_3c;
  local_138 = CONCAT44(uStack_40,local_44);
  local_160 = iVar1 != 0;
  local_148 = 0;
  local_150 = 0;
  FUN_1491e31cc(param_1,&local_c4,local_38);
  *(undefined4 *)(param_3 + 1) = local_bc;
  *param_3 = local_c4;
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e31cc FUN_1491e31cc body=524 status=ok
// SIG undefined FUN_1491e31cc(void)

undefined8 *
FUN_1491e31cc(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,byte param_6,undefined1 param_7)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = param_3;
  cVar1 = FUN_14576d4b4();
  if (cVar1 == '\0') {
    *(undefined1 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
    goto LAB_1491e320d;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_1491e3261:
    lVar5 = 0;
  }
  else {
    lVar3 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1491e3261;
  }
  uVar6 = 0;
  lVar3 = FUN_1491ec476(param_1,0);
  local_59 = *(undefined1 *)(lVar5 + 0x4c8);
  *(undefined1 *)(lVar5 + 0x4c8) = 0;
  *(undefined1 *)(lVar3 + 0x10) = 1;
  FUN_1491ec4cc(param_1,&local_58,&local_50,1);
  *(undefined8 *)(lVar3 + 0x14) = local_58;
  *(undefined1 *)(lVar3 + 0x110) = param_7;
  uVar2 = FUN_140813180(lVar5,param_4);
  if (-1 < (int)uVar2) {
    if ((int)uVar2 < *(int *)(lVar5 + 0xc0)) {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar2 * 8);
    }
    else {
      uVar6 = 0;
    }
  }
  local_88 = &local_50;
  FUN_1491ec5ea(param_1,lVar3,uVar6,1);
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88._0_1_ = 1;
  FUN_140122d4e(lVar5,lVar3,param_5,(uint)param_6 * 2);
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = (undefined8 *)CONCAT71(local_88._1_7_,1);
  FUN_140122d4e(lVar5,lVar3,param_5,(uint)param_6 * 2 + 1);
  FUN_144b3caae(lVar3 + 0x48,lVar3 + 0x68);
  if (*(undefined1 **)(lVar3 + 0xa0) != (undefined1 *)0x0) {
    puVar4 = &DAT_14bb83710;
    if (*(undefined1 **)(lVar3 + 0xc0) != (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(lVar3 + 0xc0);
    }
    **(undefined1 **)(lVar3 + 0xa0) = *puVar4;
  }
  if (*(undefined1 **)(lVar3 + 0x90) != (undefined1 *)0x0) {
    puVar4 = &DAT_14bb83710;
    if (*(undefined1 **)(lVar3 + 0xb0) != (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(lVar3 + 0xb0);
    }
    **(undefined1 **)(lVar3 + 0x90) = *puVar4;
  }
  *(undefined1 *)(lVar5 + 0x4c8) = local_59;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0x18);
  *param_2 = *(undefined8 *)(lVar3 + 0x10);
LAB_1491e320d:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e33ec FUN_1491e33ec body=428 status=ok
// SIG undefined FUN_1491e33ec(void)

void FUN_1491e33ec(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = local_2c & 0xffffff00;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_38 = local_38 & 0xffffff00;
  uStack_34 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = uStack_30;
  local_50 = CONCAT44(uStack_34,local_38);
  local_60 = CONCAT44(uStack_28,local_2c);
  local_58 = uStack_24;
  local_68 = 0;
  uVar1 = FUN_1491e359a(param_1,&local_60,&local_50,0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e359a FUN_1491e359a body=984 status=ok
// SIG undefined FUN_1491e359a(void)

undefined8 FUN_1491e359a(longlong param_1,undefined8 *param_2,char *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = FUN_14576d4b4();
  if (cVar3 != '\0') {
    lVar8 = *(longlong *)(param_1 + 0x20);
    if (lVar8 == 0) {
LAB_1491e361f:
      lVar8 = 0;
    }
    else {
      lVar5 = FUN_141095a0a();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) != lVar5 + 0x30)) goto LAB_1491e361f;
    }
    uVar4 = FUN_140813180(lVar8,param_2);
    if ((((int)uVar4 < 0) || (*(int *)(lVar8 + 0xc0) <= (int)uVar4)) ||
       (lVar5 = *(longlong *)(*(longlong *)(lVar8 + 0xb8) + (ulonglong)uVar4 * 8), lVar5 == 0)) {
      FUN_14919e8cc(param_2,&local_58);
      puVar7 = local_58;
      if (local_50 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      FUN_1491f1c02(param_1,L"Cannot Add Channel Host, Channel \'%s\' not found.",puVar7);
    }
    else if (*(char *)(lVar5 + 0x10) == '\x04') {
      if (*(char *)(lVar5 + 0x210) == '\x01') {
        uVar4 = FUN_140813180(lVar8,param_3);
        if ((((int)uVar4 < 0) || (*(int *)(lVar8 + 0xc0) <= (int)uVar4)) ||
           (lVar1 = *(longlong *)(*(longlong *)(lVar8 + 0xb8) + (ulonglong)uVar4 * 8), lVar1 == 0))
        {
          FUN_14919e8cc(param_3,&local_58);
          puVar7 = local_58;
          if (local_50 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
          FUN_1491f25b0(param_1,puVar7);
        }
        else {
          if (*(char *)(lVar1 + 0x10) != '\x04') {
            FUN_14919e8cc(param_3,&local_58);
            goto joined_r0x0001491e370b;
          }
          if (*(char *)(lVar1 + 0x210) == '\x01') {
            FUN_14919e8cc(param_3,&local_58);
            puVar7 = local_58;
            if (local_50 == 0) {
              puVar7 = &DAT_149dfb77a;
            }
            FUN_1491f2616(param_1,puVar7);
          }
          else {
            local_68 = *param_2;
            local_60 = *(undefined4 *)(param_2 + 1);
            FUN_1444a063c(lVar8,&local_58,&local_68,0);
            bVar2 = true;
            if ((longlong)local_50 != 0) {
              lVar8 = 0;
              do {
                if ((*(longlong *)((longlong)local_58 + lVar8 + 4) == *(longlong *)(param_3 + 4)) &&
                   (*(char *)((longlong)local_58 + lVar8) == *param_3)) {
                  bVar2 = false;
                  break;
                }
                lVar8 = lVar8 + 0xc;
              } while ((longlong)local_50 * 0xc != lVar8);
            }
            if (local_58 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (bVar2) {
              if ((longlong)*(int *)(lVar5 + 0x370) != 0) {
                lVar8 = 0;
                do {
                  if ((*(longlong *)(*(longlong *)(lVar5 + 0x368) + 4 + lVar8) ==
                       *(longlong *)(lVar1 + 0x14)) &&
                     (*(char *)(*(longlong *)(lVar5 + 0x368) + lVar8) == *(char *)(lVar1 + 0x10))) {
                    FUN_14919e8cc(param_2,&local_58);
                    puVar7 = &DAT_149dfb77a;
                    if (local_50 != 0) {
                      puVar7 = local_58;
                    }
                    FUN_14919e8cc(param_3,&local_78);
                    puVar9 = &DAT_149dfb77a;
                    if (local_70 != 0) {
                      puVar9 = local_78;
                    }
                    FUN_1491f26e4(param_1,puVar9,puVar7);
                    goto LAB_1491e38ca;
                  }
                  lVar8 = lVar8 + 0xc;
                } while ((longlong)*(int *)(lVar5 + 0x370) * 0xc != lVar8);
              }
              uVar6 = FUN_1491f1dd8(param_1,lVar5,lVar1);
              goto LAB_1491e35cd;
            }
            FUN_14919e8cc(param_2,&local_58);
            puVar7 = &DAT_149dfb77a;
            if (local_50 != 0) {
              puVar7 = local_58;
            }
            FUN_14919e8cc(param_3,&local_78);
            puVar9 = &DAT_149dfb77a;
            if (local_70 != 0) {
              puVar9 = local_78;
            }
            FUN_1491f267c(param_1,puVar9,puVar7);
LAB_1491e38ca:
            if (local_78 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
      else {
        FUN_14919e8cc(param_2,&local_58);
        puVar7 = local_58;
        if (local_50 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        FUN_1491f22ec(param_1,L"Cannot Add Channel Host, \'%s\' is not an animation channel.",puVar7
                     );
      }
    }
    else {
      FUN_14919e8cc(param_2,&local_58);
joined_r0x0001491e370b:
      puVar7 = local_58;
      if (local_50 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      FUN_1491f1790(param_1,L"Cannot Add Channel Host, \'%s\' is not a Control.",puVar7);
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar6 = 0;
LAB_1491e35cd:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e3980 FUN_1491e3980 body=468 status=ok
// SIG undefined FUN_1491e3980(void)

void FUN_1491e3980(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [44];
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_70 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149189a2a(local_a8,&local_68);
  FUN_1491d95f2(param_1,&local_7c,local_38,local_a8);
  *(undefined4 *)(param_3 + 1) = local_74;
  *param_3 = local_7c;
  FUN_149189aca(&local_68);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e3b56 FUN_1491e3b56 body=20 status=ok
// SIG undefined FUN_1491e3b56(void)

undefined8 * FUN_1491e3b56(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 1491e3b7a FUN_1491e3b7a body=731 status=ok
// SIG undefined FUN_1491e3b7a(void)

void FUN_1491e3b7a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_518 [32];
  undefined1 *local_4f8;
  undefined1 *local_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined1 local_4d8 [444];
  undefined1 local_31c [132];
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined1 local_284 [132];
  undefined1 local_200 [444];
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_518;
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_44 = local_44 & 0xffffff00;
  uStack_40 = 0;
  uStack_3c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  FUN_1491d73b0(local_200);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_200);
  }
  memset(local_284,0,0x84);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_284);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_284);
  }
  local_288 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_288);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_288);
  }
  local_28c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  memcpy(local_31c,local_284,0x84);
  FUN_14918b1f6(local_4d8,local_200);
  local_4e8 = CONCAT44(uStack_40,local_44);
  local_4e0 = uStack_3c;
  local_4f8 = local_4d8;
  local_4f0 = local_31c;
  FUN_1491e3e56(param_1,&local_298,local_38);
  *(undefined4 *)(param_3 + 1) = local_290;
  *param_3 = local_298;
  FUN_14918b3e4(local_200);
  if ((local_30 ^ (ulonglong)auStack_518) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e3e56 FUN_1491e3e56 body=279 status=ok
// SIG undefined FUN_1491e3e56(void)

undefined8
FUN_1491e3e56(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,void *param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_3a8 [32];
  undefined1 *local_388;
  undefined1 *local_380;
  undefined8 *local_378;
  undefined8 *local_370;
  undefined1 local_368;
  undefined1 local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined1 local_348 [444];
  undefined1 local_18c [132];
  undefined8 local_108 [12];
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  puVar2 = &DAT_14c846480;
  puVar3 = local_a8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = local_108;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memcpy(local_18c,param_6,0x84);
  FUN_14918b1f6(local_348,param_5);
  local_358 = *param_4;
  local_350 = *(undefined4 *)(param_4 + 1);
  local_360 = 0;
  local_368 = 0;
  local_370 = local_a8;
  local_388 = local_348;
  local_380 = local_18c;
  local_378 = local_108;
  FUN_1491ecf78(param_1,param_2,param_3);
  FUN_14918b3e4(param_5);
  if ((local_48 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e3f7a FUN_1491e3f7a body=397 status=ok
// SIG undefined FUN_1491e3f7a(void)

void FUN_1491e3f7a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491d5fec(param_1,&local_40,local_28,local_2c);
  *(undefined4 *)(param_3 + 1) = local_38;
  *param_3 = local_40;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e4120 FUN_1491e4120 body=763 status=ok
// SIG undefined FUN_1491e4120(void)

void FUN_1491e4120(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128 [13];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined8 local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_44 = local_44 & 0xffffff00;
  uStack_40 = 0;
  uStack_3c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_ac = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  iVar1 = local_ac;
  local_b0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_158 = local_128;
  puVar3 = local_a8;
  puVar4 = local_158;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_130 = uStack_3c;
  local_138 = CONCAT44(uStack_40,local_44);
  local_150 = iVar1 != 0;
  local_140 = 0;
  local_148 = 0;
  FUN_1491e441c(param_1,&local_c0,local_38);
  *(undefined4 *)(param_3 + 1) = local_b8;
  *param_3 = local_c0;
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e441c FUN_1491e441c body=461 status=ok
// SIG undefined FUN_1491e441c(void)

undefined8 *
FUN_1491e441c(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,byte param_6)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = param_3;
  cVar1 = FUN_14576d4b4();
  if (cVar1 == '\0') {
    *(undefined1 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
    goto LAB_1491e445d;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_1491e44b1:
    lVar5 = 0;
  }
  else {
    lVar3 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1491e44b1;
  }
  uVar6 = 0;
  lVar3 = FUN_1491ecf22(param_1,0);
  local_59 = *(undefined1 *)(lVar5 + 0x4c8);
  *(undefined1 *)(lVar5 + 0x4c8) = 0;
  *(undefined1 *)(lVar3 + 0x10) = 2;
  FUN_1491ec4cc(param_1,&local_58,&local_50,2);
  *(undefined8 *)(lVar3 + 0x14) = local_58;
  uVar2 = FUN_140813180(lVar5,param_4);
  if (-1 < (int)uVar2) {
    if ((int)uVar2 < *(int *)(lVar5 + 0xc0)) {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar2 * 8);
    }
    else {
      uVar6 = 0;
    }
  }
  local_88 = &local_50;
  FUN_1491ec5ea(param_1,lVar3,uVar6,0);
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = (undefined8 *)CONCAT71(local_88._1_7_,1);
  FUN_140122d4e(lVar5,lVar3,param_5,(uint)param_6 * 2);
  FUN_144b3caae(lVar3 + 0x48,lVar3 + 0x68);
  if (*(undefined1 **)(lVar3 + 0xa0) != (undefined1 *)0x0) {
    puVar4 = &DAT_14bb83710;
    if (*(undefined1 **)(lVar3 + 0xc0) != (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(lVar3 + 0xc0);
    }
    **(undefined1 **)(lVar3 + 0xa0) = *puVar4;
  }
  if (*(undefined1 **)(lVar3 + 0x90) != (undefined1 *)0x0) {
    puVar4 = &DAT_14bb83710;
    if (*(undefined1 **)(lVar3 + 0xb0) != (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(lVar3 + 0xb0);
    }
    **(undefined1 **)(lVar3 + 0x90) = *puVar4;
  }
  *(undefined1 *)(lVar5 + 0x4c8) = local_59;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0x18);
  *param_2 = *(undefined8 *)(lVar3 + 0x10);
LAB_1491e445d:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e45fc FUN_1491e45fc body=509 status=ok
// SIG undefined FUN_1491e45fc(void)

void FUN_1491e45fc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_34 = local_34 & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_40 = local_40 & 0xffffff00;
  uStack_3c = 0;
  uStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar1 = local_48;
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = CONCAT44(uStack_3c,local_40);
  local_50 = uStack_38;
  local_68 = CONCAT44(uStack_30,local_34);
  local_60 = uStack_2c;
  local_78 = iVar1 != 0;
  uVar2 = FUN_1491e47fa(param_1,&local_68,&local_58,local_44);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e47fa FUN_1491e47fa body=456 status=ok
// SIG undefined FUN_1491e47fa(void)

undefined8
FUN_1491e47fa(longlong param_1,undefined8 param_2,char *param_3,undefined4 param_4,
             undefined1 param_5)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_14576d4b4();
  if (cVar1 == '\0') goto LAB_1491e482e;
  if (SBORROW1('\0',*param_3)) {
    FUN_14919e8cc(param_2,&local_50);
    puVar4 = local_50;
    if (local_48 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_1491f1790(param_1,L"Cannot parent Child \'%s\' under a Socket parent.",puVar4);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) {
LAB_1491e48a4:
      lVar5 = 0;
    }
    else {
      lVar3 = FUN_141095a0a();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) != lVar3 + 0x30)) goto LAB_1491e48a4;
    }
    uVar2 = FUN_140813180(lVar5,param_2);
    if ((((int)uVar2 < 0) || (*(int *)(lVar5 + 0xc0) <= (int)uVar2)) ||
       (lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar2 * 8), lVar3 == 0)) {
      FUN_14919e8cc(param_2,&local_50);
      puVar4 = local_50;
      if (local_48 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_1491f17ec(param_1,L"Cannot Add Parent, Child \'%s\' not found.",puVar4);
    }
    else {
      uVar2 = FUN_140813180(lVar5,param_3);
      if (((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar5 + 0xc0))) &&
         (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar2 * 8), lVar5 != 0)) {
        local_68 = param_5;
        local_60 = 0;
        FUN_1491dc426(param_1,lVar3,lVar5,param_4);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
      }
      FUN_14919e8cc(param_3,&local_50);
      puVar4 = local_50;
      if (local_48 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_1491f1848(param_1,L"Cannot Add Parent, Parent \'%s\' not found.",puVar4);
    }
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1491e482e:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1491e49da FUN_1491e49da body=862 status=ok
// SIG undefined FUN_1491e49da(void)

void FUN_1491e49da(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined4 local_190;
  undefined8 *local_188;
  undefined1 local_180;
  undefined1 local_178;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148 [13];
  undefined8 local_dc;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_3c = local_3c & 0xffffff00;
  uStack_38 = 0;
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0x3f800000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0x3ff00000;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  local_cc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_cc);
  }
  local_d0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_188 = local_148;
  puVar2 = local_c8;
  puVar3 = local_188;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_198 = &local_158;
  local_158 = (undefined4)local_58;
  uStack_154 = local_58._4_4_;
  uStack_150 = (undefined4)uStack_50;
  uStack_14c = uStack_50._4_4_;
  local_168 = CONCAT44(uStack_38,local_3c);
  local_160 = uStack_34;
  local_178 = 0;
  local_180 = 0;
  local_190 = local_5c;
  FUN_1491e4d44(param_1,&local_dc,local_30);
  *(undefined4 *)(param_3 + 1) = local_d4;
  *param_3 = local_dc;
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e4d3a FUN_1491e4d3a body=10 status=ok
// SIG undefined FUN_1491e4d3a(void)

undefined4 * FUN_1491e4d3a(undefined4 *param_1)

{
  *param_1 = 0x3f800000;
  return param_1;
}



// FUNCTION 1491e4d44 FUN_1491e4d44 body=653 status=ok
// SIG undefined FUN_1491e4d44(void)

undefined8 *
FUN_1491e4d44(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             int *param_5,undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_69;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = param_3;
  cVar4 = FUN_14576d4b4();
  if (cVar4 != '\0') {
    lVar9 = *(longlong *)(param_1 + 0x20);
    if (lVar9 == 0) {
LAB_1491e4de1:
      lVar9 = 0;
    }
    else {
      lVar6 = FUN_141095a0a();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) goto LAB_1491e4de1;
    }
    if (((param_5[1] == 0 && *param_5 == 0) && param_5[2] == 0) && param_5[3] == 0) {
      FUN_140056680(&local_68,L"Physics Solver Guid is not valid");
      FUN_1491ed958(param_1,&local_68);
    }
    else {
      lVar6 = FUN_1491d99d0(lVar9,param_5);
      if (lVar6 != 0) {
        uVar10 = 0;
        lVar6 = FUN_1491edb7e(param_1,0);
        local_69 = *(undefined1 *)(lVar9 + 0x4c8);
        *(undefined1 *)(lVar9 + 0x4c8) = 0;
        *(undefined1 *)(lVar6 + 0x10) = 0x10;
        FUN_1491ec4cc(param_1,&local_68,&local_50,0x10);
        *(undefined2 **)(lVar6 + 0x14) = local_68;
        iVar1 = param_5[1];
        iVar2 = param_5[2];
        iVar3 = param_5[3];
        *(int *)(lVar6 + 0x110) = *param_5;
        *(int *)(lVar6 + 0x114) = iVar1;
        *(int *)(lVar6 + 0x118) = iVar2;
        *(int *)(lVar6 + 0x11c) = iVar3;
        *(undefined4 *)(lVar6 + 0x120) = param_6;
        uVar5 = FUN_140813180(lVar9,param_4);
        if (-1 < (int)uVar5) {
          if ((int)uVar5 < *(int *)(lVar9 + 0xc0)) {
            uVar10 = *(undefined8 *)(*(longlong *)(lVar9 + 0xb8) + (ulonglong)uVar5 * 8);
          }
          else {
            uVar10 = 0;
          }
        }
        local_98 = &local_50;
        FUN_1491ec5ea(param_1,lVar6,uVar10,1);
        local_80 = 0;
        local_88 = 0;
        local_90 = 0;
        local_98 = (undefined8 *)CONCAT71(local_98._1_7_,1);
        FUN_140122d4e(lVar9,lVar6,param_7,0);
        FUN_144b3caae(lVar6 + 0x48,lVar6 + 0x68);
        if (*(undefined1 **)(lVar6 + 0xa0) != (undefined1 *)0x0) {
          puVar8 = &DAT_14bb83710;
          if (*(undefined1 **)(lVar6 + 0xc0) != (undefined1 *)0x0) {
            puVar8 = *(undefined1 **)(lVar6 + 0xc0);
          }
          **(undefined1 **)(lVar6 + 0xa0) = *puVar8;
        }
        if (*(undefined1 **)(lVar6 + 0x90) != (undefined1 *)0x0) {
          puVar8 = &DAT_14bb83710;
          if (*(undefined1 **)(lVar6 + 0xb0) != (undefined1 *)0x0) {
            puVar8 = *(undefined1 **)(lVar6 + 0xb0);
          }
          **(undefined1 **)(lVar6 + 0x90) = *puVar8;
        }
        *(undefined1 *)(lVar9 + 0x4c8) = local_69;
        if (*(longlong *)(param_1 + 0x20) != 0) {
          FUN_141095a0a();
        }
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar6 + 0x18);
        *param_2 = *(undefined8 *)(lVar6 + 0x10);
        goto LAB_1491e4d85;
      }
      local_68 = (undefined2 *)0x0;
      uStack_60 = 0;
      FUN_1407c869a(param_5,&local_68,0);
      puVar7 = local_68;
      if ((int)uStack_60 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      FUN_1491edb18(param_1,puVar7);
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)param_2 = 0;
  *(undefined8 *)((longlong)param_2 + 4) = 0;
LAB_1491e4d85:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491e4fea FUN_1491e4fea body=966 status=ok
// SIG undefined FUN_1491e4fea(void)

void FUN_1491e4fea(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined1 local_1a0;
  undefined1 *local_198;
  longlong *local_190;
  undefined1 local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168 [13];
  undefined8 local_fc;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8 [3];
  undefined1 local_cc [16];
  int local_bc;
  undefined8 local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_4c = local_4c & 0xffffff00;
  uStack_48 = 0;
  uStack_44 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_bc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  iVar1 = local_bc;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_cc);
  }
  puVar5 = local_cc;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_e8[0] = 0;
  local_e8[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  local_ec = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ec);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ec);
  }
  local_f0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1a8 = local_168;
  puVar3 = local_b8;
  puVar4 = local_1a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_170 = uStack_44;
  local_178 = CONCAT44(uStack_48,local_4c);
  local_1a0 = iVar1 != 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = local_e8;
  local_198 = puVar5;
  FUN_1491d8f5c(param_1,&local_fc,local_40);
  *(undefined4 *)(param_3 + 1) = local_f4;
  *param_3 = local_fc;
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e53b6 FUN_1491e53b6 body=88 status=ok
// SIG undefined FUN_1491e53b6(void)

void FUN_1491e53b6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = FUN_14601dce2(0,&local_28,0);
  *param_3 = uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e5416 FUN_1491e5416 body=189 status=ok
// SIG undefined FUN_1491e5416(void)

void FUN_1491e5416(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [44];
  uint local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = local_3c & 0xffffff00;
  uStack_38 = 0;
  uStack_34 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = uStack_34;
  local_30 = CONCAT44(uStack_38,local_3c);
  uVar1 = FUN_1491eb3b2(param_1,&local_30,0,0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e54e6 FUN_1491e54e6 body=556 status=ok
// SIG undefined FUN_1491e54e6(void)

void FUN_1491e54e6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar1 = local_4c;
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_70 = (int)uStack_40;
  if (lVar2 == 0) {
    local_6c = 0;
  }
  else {
    FUN_149192186(&local_78,uStack_40 & 0xffffffff,0);
    memcpy(local_78,_Src,lVar2 * 0xc);
  }
  FUN_1491e5714(param_1,&local_68,&local_78,iVar1 != 0);
  if (&local_68 == param_3) {
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_68;
    local_68 = 0;
    *(undefined4 *)(param_3 + 1) = local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_5c;
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e5714 FUN_1491e5714 body=314 status=ok
// SIG undefined FUN_1491e5714(void)

undefined8 FUN_1491e5714(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = (void *)0x0;
  local_58 = (int)param_3[1];
  lVar2 = (longlong)local_58;
  pvVar1 = (void *)*param_3;
  if (lVar2 == 0) {
    local_54 = 0;
  }
  else {
    FUN_149192186(&local_60,local_58,0);
    memcpy(local_60,pvVar1,lVar2 * 0xc);
  }
  FUN_1491e5ad6(param_1,&local_50,&local_60);
  pvVar1 = local_50;
  local_70 = (void *)0x0;
  local_68 = local_48;
  if ((longlong)local_48 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_48,0);
    memcpy(local_70,pvVar1,(longlong)local_48 * 2);
  }
  local_78 = param_4;
  FUN_1491e7c58(param_1,param_2,&local_70,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_141095a0a();
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e5850 FUN_1491e5850 body=139 status=ok
// SIG undefined FUN_1491e5850(void)

void FUN_1491e5850(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491e58dc(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e58dc FUN_1491e58dc body=169 status=ok
// SIG undefined FUN_1491e58dc(void)

undefined8 * FUN_1491e58dc(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14576d4b4();
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = FUN_141095a0a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_1491e594e;
  }
  lVar3 = 0;
LAB_1491e594e:
  FUN_1415bd5cc(lVar3,local_38,0xff);
  FUN_1491e5ad6(param_1,param_2,local_38);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491e5986 FUN_1491e5986 body=334 status=ok
// SIG undefined FUN_1491e5986(void)

void FUN_1491e5986(undefined8 param_1,longlong param_2,longlong *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_40;
  local_60 = (int)uStack_40;
  if (lVar1 == 0) {
    local_5c = 0;
  }
  else {
    FUN_149192186(&local_68,uStack_40 & 0xffffffff,0);
    memcpy(local_68,_Src,lVar1 * 0xc);
  }
  FUN_1491e5ad6(param_1,&local_58,&local_68);
  if (&local_58 == param_3) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e5ad6 FUN_1491e5ad6 body=3841 status=ok
// SIG undefined FUN_1491e5ad6(void)

undefined8 * FUN_1491e5ad6(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined ***pppuVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  longlong lVar16;
  undefined1 auStack_688 [32];
  undefined8 local_668;
  undefined4 local_660;
  undefined8 local_658;
  undefined1 local_650;
  longlong *local_648;
  undefined8 *local_640;
  undefined8 local_638;
  undefined4 local_630;
  undefined8 local_628;
  undefined4 local_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined **local_608;
  undefined8 uStack_600;
  undefined8 *local_5f8;
  undefined8 uStack_5f0;
  longlong local_5e8;
  undefined8 uStack_5e0;
  longlong local_5d8;
  undefined8 uStack_5d0;
  longlong local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  byte *local_578;
  int local_570;
  undefined **local_568 [2];
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  uint uStack_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  uint local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined8 local_4a8;
  longlong local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  ulonglong uStack_450;
  undefined4 local_448;
  undefined8 local_3c8;
  undefined8 local_3b8;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_37c;
  undefined4 local_374;
  undefined8 local_368;
  undefined4 local_360;
  undefined1 local_358 [760];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_688;
  cVar4 = FUN_14576d4b4();
  if ((cVar4 == '\0') || ((int)param_3[1] == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_1491e5b21;
  }
  lVar16 = *(longlong *)(param_1 + 0x20);
  local_640 = param_2;
  if (lVar16 == 0) {
LAB_1491e5b95:
    lVar16 = 0;
  }
  else {
    lVar6 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_1491e5b95;
  }
  FUN_141124f54(lVar16);
  local_648 = param_3;
  FUN_1491901b4(lVar16,&local_578,param_3);
  local_588 = 0;
  uStack_580 = 0;
  local_598 = 0;
  uStack_590 = 0;
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_5b8 = 0;
  uStack_5b0 = 0;
  local_5c8 = 0;
  uStack_5c0 = 0;
  if ((longlong)local_570 != 0) {
    pbVar1 = local_578 + (longlong)local_570 * 0xc;
    pbVar15 = local_578;
    do {
      uVar5 = FUN_140813180(lVar16,pbVar15);
      if ((((int)uVar5 < 0) || (*(int *)(lVar16 + 0xc0) <= (int)uVar5)) ||
         (lVar6 = *(longlong *)(*(longlong *)(lVar16 + 0xb8) + (ulonglong)uVar5 * 8), lVar6 == 0))
      goto LAB_1491e5cc0;
      local_5d8 = 0;
      uStack_5d0 = 0;
      local_5e8 = 0;
      uStack_5e0 = 0;
      local_5f8 = (undefined8 *)0x0;
      uStack_5f0 = 0;
      local_608 = (undefined **)0x0;
      uStack_600 = 0;
      local_618 = 0;
      uStack_610 = 0;
      local_620 = *(undefined4 *)(pbVar15 + 8);
      local_628 = *(undefined8 *)pbVar15;
      local_638 = *(undefined8 *)pbVar15;
      local_630 = *(undefined4 *)(pbVar15 + 8);
      FUN_1444a063c(lVar16,local_568,&local_638,0);
      if (local_608 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      local_608 = local_568[0];
      uStack_600 = local_568[1];
      if ((*(char *)(lVar6 + 0x10) == '\x04') || (*(char *)(lVar6 + 0x10) == '\x02')) {
        lVar10 = lVar6 + 0x110;
        if (*(longlong *)(lVar6 + 0x1a0) != 0) {
          lVar10 = *(longlong *)(lVar6 + 0x1a0);
        }
        iVar3 = *(int *)(lVar6 + 0x1b0);
        if ((longlong)iVar3 != 0) {
          lVar8 = 0;
          do {
            uVar9 = uStack_5f0;
            lVar12 = (longlong)(int)uStack_5f0;
            uVar5 = (int)uStack_5f0 + 1;
            uStack_5f0 = CONCAT44(uStack_5f0._4_4_,uVar5);
            if (uStack_5f0._4_4_ < uVar5) {
              FUN_14920cd2c(&local_5f8,uVar9 & 0xffffffff);
            }
            puVar13 = (undefined8 *)(lVar10 + 8 + lVar8);
            *(undefined4 *)((longlong)local_5f8 + lVar12 * 0xc + 8) = *(undefined4 *)(puVar13 + 1);
            *(undefined8 *)((longlong)local_5f8 + lVar12 * 0xc) = *puVar13;
            lVar8 = lVar8 + 0x90;
          } while ((longlong)iVar3 * 0x90 != lVar8);
        }
      }
      else {
        FUN_1491ede9c(&local_5f8);
        if (0 < (int)uStack_5f0) {
          *local_5f8 = &DAT_3f8000003f800000;
          *(undefined4 *)(local_5f8 + 1) = 0x3f800000;
        }
      }
      bVar2 = *(byte *)(lVar6 + 0x10);
      if ((((ulonglong)bVar2 < 0x21) && ((0x100010016U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) ||
         (bVar2 == 0x80)) {
        FUN_1401571e4(lVar16,local_568,lVar6,0);
        lVar10 = (longlong)(int)(uint)uStack_5e0;
        uVar5 = (uint)uStack_5e0 + 1;
        if (uStack_5e0._4_4_ < uVar5) {
          uVar9 = uStack_5e0 & 0xffffffff;
          uStack_5e0._0_4_ = uVar5;
          FUN_144a2c682(&local_5e8,uVar9);
          uVar5 = (uint)uStack_5e0;
        }
        uStack_5e0._0_4_ = uVar5;
        pppuVar11 = local_568;
        puVar13 = (undefined8 *)(lVar10 * 0x60 + local_5e8);
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar13 = *pppuVar11;
          pppuVar11 = pppuVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        FUN_1401571e4(lVar16,local_568,lVar6,1);
        uVar5 = (uint)uStack_5e0;
        lVar10 = (longlong)(int)(uint)uStack_5e0;
        uStack_5e0._0_4_ = (uint)uStack_5e0 + 1;
        if (uStack_5e0._4_4_ < (uint)uStack_5e0) {
          FUN_144a2c682(&local_5e8,uVar5);
        }
        pppuVar11 = local_568;
        puVar13 = (undefined8 *)(lVar10 * 0x60 + local_5e8);
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar13 = *pppuVar11;
          pppuVar11 = pppuVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        FUN_1401571e4(lVar16,local_568,lVar6,2);
        uVar5 = (uint)uStack_5e0;
        lVar10 = (longlong)(int)(uint)uStack_5e0;
        uStack_5e0._0_4_ = (uint)uStack_5e0 + 1;
        if (uStack_5e0._4_4_ < (uint)uStack_5e0) {
          FUN_144a2c682(&local_5e8,uVar5);
        }
        pppuVar11 = local_568;
        puVar13 = (undefined8 *)(lVar10 * 0x60 + local_5e8);
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar13 = *pppuVar11;
          pppuVar11 = pppuVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        FUN_1401571e4(lVar16,local_568,lVar6);
        uVar5 = (uint)uStack_5e0;
        lVar10 = (longlong)(int)(uint)uStack_5e0;
        uStack_5e0._0_4_ = (uint)uStack_5e0 + 1;
        if (uStack_5e0._4_4_ < (uint)uStack_5e0) {
          FUN_144a2c682(&local_5e8,uVar5);
        }
        pppuVar11 = local_568;
        puVar13 = (undefined8 *)(lVar10 * 0x60 + local_5e8);
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar13 = *pppuVar11;
          pppuVar11 = pppuVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        puVar14 = *(undefined1 **)(lVar6 + 0xc0);
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = &DAT_14cc07bfc;
        }
        lVar10 = (longlong)(int)(uint)uStack_5d0;
        uVar5 = (uint)uStack_5d0 + 1;
        if (uStack_5d0._4_4_ < uVar5) {
          uVar9 = uStack_5d0 & 0xffffffff;
          uStack_5d0._0_4_ = uVar5;
          FUN_1401c3474(&local_5d8,uVar9);
          uVar5 = (uint)uStack_5d0;
        }
        uStack_5d0._0_4_ = uVar5;
        uVar5 = (uint)uStack_5d0;
        *(undefined1 *)(local_5d8 + lVar10) = *puVar14;
        puVar14 = *(undefined1 **)(lVar6 + 0xa0);
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = &DAT_14cc07bfc;
        }
        lVar10 = (longlong)(int)(uint)uStack_5d0;
        uStack_5d0._0_4_ = (uint)uStack_5d0 + 1;
        if (uStack_5d0._4_4_ < (uint)uStack_5d0) {
          FUN_1401c3474(&local_5d8,uVar5);
        }
        uVar5 = (uint)uStack_5d0;
        *(undefined1 *)(local_5d8 + lVar10) = *puVar14;
        puVar14 = *(undefined1 **)(lVar6 + 0xb0);
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = &DAT_14cc07bfc;
        }
        lVar10 = (longlong)(int)(uint)uStack_5d0;
        uStack_5d0._0_4_ = (uint)uStack_5d0 + 1;
        if (uStack_5d0._4_4_ < (uint)uStack_5d0) {
          FUN_1401c3474(&local_5d8,uVar5);
        }
        uVar5 = (uint)uStack_5d0;
        *(undefined1 *)(local_5d8 + lVar10) = *puVar14;
        puVar14 = *(undefined1 **)(lVar6 + 0x90);
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = &DAT_14cc07bfc;
        }
        lVar10 = (longlong)(int)(uint)uStack_5d0;
        uStack_5d0._0_4_ = (uint)uStack_5d0 + 1;
        if (uStack_5d0._4_4_ < (uint)uStack_5d0) {
          FUN_1401c3474(&local_5d8,uVar5);
        }
        *(undefined1 *)(local_5d8 + lVar10) = *puVar14;
      }
      bVar2 = *pbVar15;
      if (0xf < bVar2) {
        if (bVar2 < 0x40) {
          if (bVar2 == 0x10) {
            local_568[1] = (undefined **)0x0;
            local_558 = CONCAT31(local_558._1_3_,0x10);
            uStack_554 = 0;
            uStack_550 = 0;
            uStack_54c = 0xffffffff;
            uStack_548 = 0xffffffff;
            uStack_544 = 0xffffffff;
            uStack_540 = (uint)uStack_540._1_3_ << 8;
            uStack_53c = 0;
            local_538 = 0xffffffff;
            uStack_534 = 0xffffffff;
            uStack_530 = 0;
            local_528 = 0;
            uStack_520 = CONCAT44(uStack_520._4_4_,0xffffffff);
            local_518 = 0;
            local_510 = 0xffffffff;
            local_508 = 0;
            uStack_500 = CONCAT44(uStack_500._4_4_,0xffffffff);
            local_4f8 = 0;
            local_4f0 = 0xffffffff;
            local_4e8 = 0;
            local_4e0 = 0xffffffff;
            local_4d8 = 0;
            local_4d0 = 0xffffffff;
            local_4c8 = 0;
            local_4c0 = 0xffffffff;
            local_4b8 = 0;
            local_4b0 = 0xffffffff;
            local_4a8 = 0;
            local_470 = 0;
            local_468 = 0x300000000;
            local_460 = 0;
            local_568[0] = &PTR_FUN_14bb77100;
            local_458 = 0;
            uStack_450 = 0;
            local_448 = 0x3f800000;
            uVar7 = FUN_1466c8c4e();
            goto LAB_1491e6886;
          }
          if (bVar2 == 0x20) {
            local_568[1] = (undefined **)0x0;
            local_558 = CONCAT31(local_558._1_3_,0x20);
            uStack_554 = 0;
            uStack_550 = 0;
            uStack_54c = 0xffffffff;
            uStack_548 = 0xffffffff;
            uStack_544 = 0xffffffff;
            uStack_540 = (uint)uStack_540._1_3_ << 8;
            uStack_53c = 0;
            local_538 = 0xffffffff;
            uStack_534 = 0xffffffff;
            uStack_530 = 0;
            local_528 = 0;
            uStack_520 = CONCAT44(uStack_520._4_4_,0xffffffff);
            local_518 = 0;
            local_510 = 0xffffffff;
            local_508 = 0;
            uStack_500 = CONCAT44(uStack_500._4_4_,0xffffffff);
            local_4f8 = 0;
            local_4f0 = 0xffffffff;
            local_4e8 = 0;
            local_4e0 = 0xffffffff;
            local_4d8 = 0;
            local_4d0 = 0xffffffff;
            local_4c8 = 0;
            local_4c0 = 0xffffffff;
            local_4b8 = 0;
            local_4b0 = 0xffffffff;
            local_4a8 = 0;
            local_470 = 0;
            local_468 = 0x300000000;
            local_460 = 0;
            local_568[0] = &PTR_FUN_14bb77160;
            local_458 = 0;
            uStack_450 = uStack_450 & 0xffffffff00000000;
            uVar7 = FUN_1466c8ce4();
            local_658 = 0;
            local_660 = 0;
            local_668 = 0;
            local_650 = 1;
            FUN_1446df618(uVar7,&local_618,lVar6);
            FUN_1491beef8(local_568);
          }
        }
        else {
          if (bVar2 == 0x40) {
            local_568[1] = (undefined **)0x0;
            local_558 = CONCAT31(local_558._1_3_,0x40);
            uStack_554 = 0;
            uStack_550 = 0;
            uStack_54c = 0xffffffff;
            uStack_548 = 0xffffffff;
            uStack_544 = 0xffffffff;
            uStack_540 = (uint)uStack_540._1_3_ << 8;
            uStack_53c = 0;
            local_538 = 0xffffffff;
            uStack_534 = 0xffffffff;
            uStack_530 = 0;
            local_528 = 0;
            local_568[0] = &PTR_FUN_14bb771c0;
            uStack_520 = 0;
            local_518 = 0;
            local_510 = local_510 & 0xffff0000;
            local_508 = 0;
            uStack_500 = 0;
            uVar7 = FUN_1466c8eda();
            local_658 = 0;
            local_668 = 0;
            local_650 = 1;
            local_660 = 0;
            FUN_1446df618(uVar7,&local_618,lVar6);
            FUN_149189aca(&uStack_520);
            goto LAB_1491e68c0;
          }
          if (bVar2 == 0x80) {
            local_568[1] = (undefined **)0x0;
            local_558 = CONCAT31(local_558._1_3_,0x80);
            uStack_554 = 0;
            uStack_550 = 0;
            uStack_54c = 0xffffffff;
            uStack_548 = 0xffffffff;
            uStack_544 = 0xffffffff;
            uStack_540 = (uint)uStack_540._1_3_ << 8;
            uStack_53c = 0;
            local_538 = 0xffffffff;
            uStack_534 = 0xffffffff;
            uStack_530 = 0;
            local_528 = 0;
            uStack_520 = CONCAT44(uStack_520._4_4_,0xffffffff);
            local_518 = 0;
            local_510 = 0xffffffff;
            local_508 = 0;
            uStack_500 = CONCAT44(uStack_500._4_4_,0xffffffff);
            local_4f8 = 0;
            local_4f0 = 0xffffffff;
            local_4e8 = 0;
            local_4e0 = 0xffffffff;
            local_4d8 = 0;
            local_4d0 = 0xffffffff;
            local_4c8 = 0;
            local_4c0 = 0xffffffff;
            local_4b8 = 0;
            local_4b0 = 0xffffffff;
            local_4a8 = 0;
            local_470 = 0;
            local_468 = 0x300000000;
            local_460 = 0;
            local_568[0] = &PTR_FUN_14bb77220;
            uVar7 = FUN_1466c9008();
            goto LAB_1491e6886;
          }
        }
        goto switchD_1491e6061_caseD_3;
      }
      switch(bVar2) {
      case 1:
        local_568[1] = (undefined **)0x0;
        local_558 = CONCAT31(local_558._1_3_,1);
        uStack_554 = 0;
        uStack_550 = 0;
        uStack_54c = 0xffffffff;
        uStack_548 = 0xffffffff;
        uStack_544 = 0xffffffff;
        uStack_540 = uStack_540 & 0xffffff00;
        uStack_53c = 0;
        local_538 = 0xffffffff;
        uStack_534 = 0xffffffff;
        uStack_530 = 0;
        local_528 = 0;
        uStack_520 = CONCAT44(uStack_520._4_4_,0xffffffff);
        local_518 = 0;
        local_510 = 0xffffffff;
        local_508 = 0;
        uStack_500 = CONCAT44(uStack_500._4_4_,0xffffffff);
        local_4f8 = 0;
        local_4f0 = 0xffffffff;
        local_4e8 = 0;
        local_4e0 = 0xffffffff;
        local_4d8 = 0;
        local_4d0 = 0xffffffff;
        local_4c8 = 0;
        local_4c0 = 0xffffffff;
        local_4b8 = 0;
        local_4b0 = 0xffffffff;
        local_4a8 = 0;
        local_470 = 0;
        local_468 = 0x300000000;
        local_460 = 0;
        local_568[0] = &PTR_FUN_14bb58da0;
        local_458 = CONCAT71(local_458._1_7_,1);
        uVar7 = FUN_140bc9494();
LAB_1491e6886:
        local_650 = 1;
        local_658 = 0;
        local_668 = 0;
        local_660 = 0;
        FUN_1446df618(uVar7,&local_618,lVar6);
        local_568[0] = &PTR_FUN_14bb58d10;
        if (local_470 != 0) {
          FUN_1400020a8();
        }
        break;
      case 2:
        local_568[1] = (undefined **)0x0;
        local_558 = CONCAT31(local_558._1_3_,2);
        uStack_554 = 0;
        uStack_550 = 0;
        uStack_54c = 0xffffffff;
        uStack_548 = 0xffffffff;
        uStack_544 = 0xffffffff;
        uStack_540 = (uint)uStack_540._1_3_ << 8;
        uStack_53c = 0;
        local_538 = 0xffffffff;
        uStack_534 = 0xffffffff;
        uStack_530 = 0;
        local_528 = 0;
        uStack_520 = CONCAT44(uStack_520._4_4_,0xffffffff);
        local_518 = 0;
        local_510 = 0xffffffff;
        local_508 = 0;
        uStack_500 = CONCAT44(uStack_500._4_4_,0xffffffff);
        local_4f8 = 0;
        local_4f0 = 0xffffffff;
        local_4e8 = 0;
        local_4e0 = 0xffffffff;
        local_4d8 = 0;
        local_4d0 = 0xffffffff;
        local_4c8 = 0;
        local_4c0 = 0xffffffff;
        local_4b8 = 0;
        local_4b0 = 0xffffffff;
        local_4a8 = 0;
        local_470 = 0;
        local_468 = 0x300000000;
        local_3c8 = 0;
        local_3b8 = 0x100000000;
        local_388 = 0;
        local_380 = 0;
        local_3a8 = 0;
        uStack_3a0 = 0;
        local_37c = 0xffffffff00000080;
        local_374 = 0;
        local_368 = 0;
        local_360 = 0;
        local_568[0] = &PTR_FUN_14bb58e60;
        uVar7 = FUN_1466c8798();
        local_658 = 0;
        local_660 = 0;
        local_668 = 0;
        local_650 = 1;
        FUN_1446df618(uVar7,&local_618,lVar6);
        goto LAB_1491e674c;
      default:
        goto switchD_1491e6061_caseD_3;
      case 4:
        FUN_149191c08(local_568,0);
        uVar7 = FUN_1466c8990();
        local_658 = 0;
        local_668 = 0;
        local_650 = 1;
        local_660 = 0;
        FUN_1446df618(uVar7,&local_618,lVar6);
        FUN_14918b3e4(local_358);
LAB_1491e674c:
        FUN_14918079a(local_568);
        goto switchD_1491e6061_caseD_3;
      case 8:
        local_568[1] = (undefined **)0x0;
        local_558 = CONCAT31(local_558._1_3_,8);
        uStack_554 = 0;
        uStack_550 = 0;
        uStack_54c = 0xffffffff;
        uStack_548 = 0xffffffff;
        uStack_544 = 0xffffffff;
        uStack_540 = (uint)uStack_540._1_3_ << 8;
        uStack_53c = 0;
        local_538 = 0xffffffff;
        uStack_534 = 0xffffffff;
        uStack_530 = 0;
        local_528 = 0;
        local_568[0] = &PTR_FUN_14bb770a0;
        uStack_520 = CONCAT71(uStack_520._1_7_,1);
        uStack_520 = CONCAT44(0xffffffff,(undefined4)uStack_520);
        local_518 = 0;
        uVar7 = FUN_14578225e();
        local_650 = 1;
        local_658 = 0;
        local_668 = 0;
        local_660 = 0;
        FUN_1446df618(uVar7,&local_618,lVar6);
      }
LAB_1491e68c0:
      FUN_140da04fc(local_568);
switchD_1491e6061_caseD_3:
      uVar9 = uStack_5c0;
      lVar6 = (longlong)(int)uStack_5c0;
      uVar5 = (int)uStack_5c0 + 1;
      uStack_5c0 = CONCAT44(uStack_5c0._4_4_,uVar5);
      if (uStack_5c0._4_4_ < uVar5) {
        FUN_14920fb24(&local_5c8,uVar9 & 0xffffffff);
      }
      FUN_1491bffa4(lVar6 * 0x60 + local_5c8,&local_628);
      FUN_1491bfae4();
LAB_1491e5cc0:
      pbVar15 = pbVar15 + 0xc;
    } while (pbVar15 != pbVar1);
  }
  param_2 = local_640;
  *local_640 = 0;
  local_640[1] = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_538 = 0;
  uStack_534 = 0;
  uStack_530 = 0;
  uStack_548 = 0;
  uStack_544 = 0;
  uStack_540 = 0;
  uStack_53c = 0;
  local_558 = 0;
  uStack_554 = 0;
  uStack_550 = 0;
  uStack_54c = 0;
  local_568[0] = (undefined **)0x0;
  local_568[1] = (undefined **)0x0;
  uVar7 = FUN_1466c9134();
  local_658 = 0;
  local_668 = 0;
  local_650 = 1;
  local_660 = 0;
  FUN_1446df618(uVar7,param_2,&local_5c8,local_568);
  FUN_1491bfd60(local_568);
  FUN_1491bfd60(&local_5c8);
  param_3 = local_648;
  if (local_578 != (byte *)0x0) {
    FUN_1400020a8();
    param_3 = local_648;
  }
LAB_1491e5b21:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_688) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e69d8 FUN_1491e69d8 body=239 status=ok
// SIG undefined FUN_1491e69d8(void)

void FUN_1491e69d8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8 [444];
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_2c = local_2c & 0xffffff00;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1f8 = CONCAT44(uStack_28,local_2c);
  local_1f0 = uStack_24;
  FUN_1491e6ac8(param_1,local_1e8);
  FUN_1491e6b60(param_3,local_1e8);
  FUN_14918b3e4(local_1e8);
  if ((local_20 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e6ac8 FUN_1491e6ac8 body=151 status=ok
// SIG undefined FUN_1491e6ac8(void)

undefined8 FUN_1491e6ac8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_14576d4b4();
  if (cVar1 == '\0') goto LAB_1491e6b4c;
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) {
LAB_1491e6b0a:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1491e6b0a;
  }
  uVar2 = FUN_140813180(lVar4,param_3);
  if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar4 + 0xc0))) &&
      (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)uVar2 * 8), lVar4 != 0)) &&
     (*(char *)(lVar4 + 0x10) == '\x04')) {
    FUN_14918b1f6(param_2,lVar4 + 0x210);
    return param_2;
  }
LAB_1491e6b4c:
  FUN_1491d73b0(param_2);
  return param_2;
}



// FUNCTION 1491e6b60 FUN_1491e6b60 body=431 status=ok
// SIG undefined FUN_1491e6b60(void)

undefined8 * FUN_1491e6b60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  *(undefined8 *)((longlong)param_1 + 6) = *(undefined8 *)((longlong)param_2 + 6);
  *param_1 = uVar1;
  if (param_1 != param_2) {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  memcpy(param_1 + 4,param_2 + 4,0x129);
  lVar2 = param_2[0x2a];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0x2a];
    }
  }
  param_1[0x2a] = lVar2;
  FUN_149203d16(param_1 + 0x2b,param_2 + 0x2b);
  if (param_1 == param_2) {
    *(undefined2 *)(param_1 + 0x33) = *(undefined2 *)(param_2 + 0x33);
  }
  else {
    if (param_1[0x2f] != 0) {
      FUN_1400020a8();
    }
    param_1[0x2f] = param_2[0x2f];
    param_2[0x2f] = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x184);
    param_2[0x30] = 0;
    if (param_1[0x31] != 0) {
      FUN_1400020a8();
    }
    param_1[0x31] = param_2[0x31];
    param_2[0x31] = 0;
    *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 0x32);
    *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_2 + 0x194);
    param_2[0x32] = 0;
    *(undefined2 *)(param_1 + 0x33) = *(undefined2 *)(param_2 + 0x33);
    if (param_1[0x34] != 0) {
      FUN_1400020a8();
    }
    param_1[0x34] = param_2[0x34];
    param_2[0x34] = 0;
    *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)(param_2 + 0x35);
    *(undefined4 *)((longlong)param_1 + 0x1ac) = *(undefined4 *)((longlong)param_2 + 0x1ac);
    param_2[0x35] = 0;
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_2 + 0x36);
  return param_1;
}



// FUNCTION 1491e6d10 FUN_1491e6d10 body=78 status=ok
// SIG undefined FUN_1491e6d10(void)

void FUN_1491e6d10(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_141095a0a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1491e6d54;
  }
  lVar2 = 0;
LAB_1491e6d54:
  *param_3 = lVar2;
  return;
}



// FUNCTION 1491e6d5e FUN_1491e6d5e body=57 status=ok
// SIG undefined FUN_1491e6d5e(void)

longlong FUN_1491e6d5e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_141095a0a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1491e6db6 FUN_1491e6db6 body=722 status=ok
// SIG undefined FUN_1491e6db6(void)

void FUN_1491e6db6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  iVar4 = local_54;
  local_58 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  iVar3 = local_58;
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  iVar2 = local_5c;
  local_60 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  iVar1 = local_60;
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = iVar2 != 0;
  local_90 = iVar3 != 0;
  local_80 = iVar1 != 0;
  local_98 = iVar4 != 0;
  FUN_1491e708a(param_1,&local_78,local_48,local_50);
  if (&local_78 == param_3) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_78;
    *(undefined4 *)(param_3 + 1) = local_70;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_6c;
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e708a FUN_1491e708a body=368 status=ok
// SIG undefined FUN_1491e708a(void)

undefined8
FUN_1491e708a(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined1 local_180;
  undefined1 local_178;
  undefined1 local_170;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_f8 = 0;
  local_f0 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 1;
  local_50 = 0;
  uStack_48 = 0;
  local_160 = param_4;
  if (param_3 != 0) {
    FUN_140816b78(&local_158,param_3 + 0x50);
  }
  local_170 = param_8;
  local_178 = param_7;
  local_180 = param_6;
  local_188 = param_5;
  FUN_1491d4242(param_1,param_2,&local_158,&local_160);
  FUN_14074f6ec(&local_158);
  if ((local_38 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e720e FUN_1491e720e body=547 status=ok
// SIG undefined FUN_1491e720e(void)

void FUN_1491e720e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar2 = local_44;
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar1 = local_48;
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = iVar1 != 0;
  local_78 = iVar2 != 0;
  local_68 = 0;
  FUN_1491e7432(param_1,&local_60,local_38,local_40);
  if (&local_60 == param_3) {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_60;
    *(undefined4 *)(param_3 + 1) = local_58;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_54;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e7432 FUN_1491e7432 body=343 status=ok
// SIG undefined FUN_1491e7432(void)

longlong *
FUN_1491e7432(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,char param_5,
             undefined1 param_6)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  void *local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == 0) goto LAB_1491e745b;
  cVar2 = FUN_14576d4b4();
  if (cVar2 == '\0') goto LAB_1491e745b;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_1491e74c5:
    lVar5 = 0;
  }
  else {
    lVar3 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1491e74c5;
  }
  FUN_140ad4746(lVar5,0xc,0);
  uVar4 = FUN_14498be06(param_3 + 0x28);
  local_58 = param_6;
  FUN_1491eddae(param_1,&local_48,uVar4,param_4);
  if ((longlong)(int)local_40 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + local_40;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < local_40) {
      FUN_149192788(param_2,iVar1);
    }
    memmove((void *)((longlong)iVar1 * 0xc + *param_2),local_48,(longlong)(int)local_40 * 0xc);
    local_40 = 0;
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (param_5 != '\0') {
    FUN_14601dce2(param_1,param_2,0);
  }
  FUN_140ad4746(lVar5,0xd,0);
LAB_1491e745b:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e759c FUN_1491e759c body=542 status=ok
// SIG undefined FUN_1491e759c(void)

void FUN_1491e759c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar2 = local_44;
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  iVar1 = local_48;
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = iVar1 != 0;
  local_78 = iVar2 != 0;
  FUN_1491e77bc(param_1,&local_60,local_38,local_40);
  if (&local_60 == param_3) {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_60;
    *(undefined4 *)(param_3 + 1) = local_58;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_54;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e77bc FUN_1491e77bc body=508 status=ok
// SIG undefined FUN_1491e77bc(void)

longlong *
FUN_1491e77bc(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,char param_5,
             undefined1 param_6)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_68;
  void *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == (longlong *)0x0) goto LAB_1491e77e9;
  cVar2 = FUN_14576d4b4();
  if (cVar2 == '\0') goto LAB_1491e77e9;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_1491e7857:
    lVar5 = 0;
  }
  else {
    lVar3 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1491e7857;
  }
  FUN_140ad4746(lVar5,0xc,0);
  uVar4 = (**(code **)(*param_3 + 0x3f8))(param_3);
  local_68 = 0;
  local_70 = param_6;
  local_78 = 0;
  FUN_1491e7432(param_1,&local_58,uVar4,param_4);
  if ((longlong)(int)local_50 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + local_50;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < local_50) {
      FUN_149192788(param_2,iVar1);
    }
    memmove((void *)((longlong)iVar1 * 0xc + *param_2),local_58,(longlong)(int)local_50 * 0xc);
    local_50 = 0;
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = FUN_14498be06(param_3 + 0x1b);
  local_78 = param_6;
  FUN_1491eddae(param_1,&local_58,uVar4,param_4);
  lVar3 = (longlong)(int)local_50;
  if (lVar3 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + local_50;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < local_50) {
      FUN_149192788(param_2,iVar1);
    }
    memmove((void *)((longlong)iVar1 * 0xc + *param_2),local_58,lVar3 * 0xc);
    local_50 = 0;
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (param_5 != '\0') {
    FUN_14601dce2(param_1,param_2,0);
  }
  FUN_140ad4746(lVar5,0xd,0);
LAB_1491e77e9:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e79d2 FUN_1491e79d2 body=645 status=ok
// SIG undefined FUN_1491e79d2(void)

void FUN_1491e79d2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  iVar2 = local_5c;
  local_60 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  iVar1 = local_60;
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_68 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  _Src = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_50;
  local_80 = (int)uStack_50;
  if (lVar3 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,uStack_50 & 0xffffffff,0);
    memcpy(local_88,_Src,lVar3 * 2);
  }
  local_98 = iVar1 != 0;
  FUN_1491e7c58(param_1,&local_78,&local_88,iVar2 != 0);
  if (&local_78 == param_3) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_78;
    local_78 = 0;
    *(undefined4 *)(param_3 + 1) = local_70;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_6c;
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e7c58 FUN_1491e7c58 body=203 status=ok
// SIG undefined FUN_1491e7c58(void)

undefined8
FUN_1491e7c58(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
             undefined1 param_5)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (void *)0x0;
  local_50 = (int)param_3[1];
  lVar1 = (longlong)local_50;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  local_68 = param_5;
  FUN_1491edf18(param_1,param_2,&local_58,param_4);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e7d36 FUN_1491e7d36 body=768 status=ok
// SIG undefined FUN_1491e7d36(void)

void FUN_1491e7d36(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined2 local_70 [4];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_70[0] = 0x301;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  local_74 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  iVar1 = local_74;
  local_78 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491e9a8c(local_b8,local_70);
  _Src = local_48;
  local_c8 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_c0 = (int)uStack_40;
  if (lVar2 == 0) {
    local_bc = 0;
  }
  else {
    FUN_149192186(&local_c8,uStack_40 & 0xffffffff,0);
    memcpy(local_c8,_Src,lVar2 * 0xc);
  }
  local_d8 = iVar1 != 0;
  FUN_1491e8038(param_1,&local_90,&local_c8,local_b8);
  if (&local_90 == param_3) {
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_90;
    local_90 = 0;
    *(undefined4 *)(param_3 + 1) = local_88;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_84;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e8038 FUN_1491e8038 body=6738 status=ok
// SIG undefined FUN_1491e8038(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_1491e8038(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined1 param_5)

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
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  longlong lVar13;
  longlong *plVar14;
  void **ppvVar15;
  void *pvVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  double *pdVar22;
  undefined8 unaff_RDI;
  double *pdVar23;
  ushort uVar24;
  undefined2 *puVar25;
  ushort uVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar46;
  undefined1 auVar45 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auStack_938 [32];
  uint local_918;
  undefined1 local_910;
  undefined1 local_908;
  undefined1 local_900;
  undefined1 local_8f1;
  longlong local_8f0;
  longlong local_8e8;
  longlong local_8e0;
  longlong local_8d8;
  uint local_8cc;
  longlong *local_8c8;
  undefined8 local_8c0;
  undefined4 local_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined4 local_8a0;
  double local_898 [12];
  undefined8 local_838;
  undefined4 local_830;
  double local_828 [12];
  undefined8 local_7c8;
  undefined4 local_7c0;
  double local_7b8 [12];
  undefined8 local_758;
  undefined4 local_750;
  double local_748 [12];
  double local_6e8;
  double dStack_6e0;
  undefined1 local_6d8 [16];
  undefined1 local_6c8 [16];
  double local_6b8;
  double dStack_6b0;
  undefined1 local_6a8 [16];
  undefined1 local_698 [16];
  double local_688;
  double dStack_680;
  double local_678;
  double dStack_670;
  double local_668;
  double dStack_660;
  double local_658;
  double dStack_650;
  undefined1 local_648 [16];
  undefined1 local_638 [16];
  undefined8 local_628;
  undefined4 local_620;
  undefined8 local_618;
  undefined4 local_610;
  undefined1 local_608 [96];
  undefined8 local_5a8;
  undefined4 local_5a0;
  undefined8 local_598;
  undefined4 local_590;
  double local_588 [12];
  undefined8 local_528;
  undefined4 local_520;
  undefined1 local_518 [96];
  undefined8 local_4b8;
  undefined4 local_4b0;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  undefined4 local_478;
  undefined4 uStack_474;
  double dStack_470;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  void **local_440;
  void *local_438;
  int local_430;
  undefined1 local_428 [96];
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined1 local_3b8 [96];
  void *local_358;
  uint local_350;
  undefined4 local_34c;
  void *local_348;
  uint local_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined2 *local_318;
  double dStack_310;
  double local_308;
  undefined8 uStack_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  double local_288;
  double dStack_280;
  double local_278;
  double local_268;
  double local_260;
  double local_258;
  double local_248;
  double local_240;
  double local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  ulonglong local_218;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
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
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_938;
  lVar28 = *(longlong *)(param_1 + 0x20);
  local_8f0 = param_4;
  if (lVar28 != 0) {
    lVar20 = FUN_141095a0a();
    if ((*(int *)(lVar20 + 0x38) <= *(int *)(*(longlong *)(lVar28 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar28 + 0x10) + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8
         ) == lVar20 + 0x30)) goto LAB_1491e80fa;
  }
  lVar28 = 0;
LAB_1491e80fa:
  FUN_140ad4746(lVar28,0xc,0);
  local_8c8 = param_3;
  FUN_1491901b4(lVar28,&local_348,param_3);
  pvVar16 = local_348;
  local_358 = (void *)0x0;
  lVar20 = (longlong)(int)local_340;
  local_350 = local_340;
  if (lVar20 == 0) {
    local_34c = 0;
  }
  else {
    FUN_149192186(&local_358,local_340,0);
    memcpy(local_358,pvVar16,lVar20 * 0xc);
  }
  FUN_1491e5714(param_1,param_2,&local_358,
                CONCAT71((int7)((ulonglong)unaff_RDI >> 8),param_5) & 0xffffffff);
  auVar12 = _DAT_149934d80;
  uVar18 = *(uint *)(param_2 + 1);
  if (uVar18 == local_340) {
    if (0 < (int)uVar18) {
      lVar20 = 0;
      do {
        if (*(char *)(*param_2 + lVar20) != *(char *)((longlong)local_348 + lVar20))
        goto LAB_1491e9286;
        lVar20 = lVar20 + 0xc;
      } while ((ulonglong)uVar18 * 0xc != lVar20);
      lVar20 = 0;
      do {
        lVar21 = lVar20 * 0xc;
        local_3c8 = *(undefined8 *)((longlong)local_348 + lVar21);
        local_3c0 = *(undefined4 *)((longlong)local_348 + lVar21 + 8);
        uVar17 = FUN_140813180(lVar28,&local_3c8);
        FUN_14486750c(lVar28,local_3b8,uVar17,0);
        dStack_280 = (double)CONCAT44(dStack_280._4_4_,
                                      *(undefined4 *)((longlong)local_348 + lVar21 + 8));
        local_288 = *(double *)((longlong)local_348 + lVar21);
        uVar17 = FUN_140813180(lVar28,&local_288);
        FUN_14486750c(lVar28,local_428,uVar17);
        lVar13 = local_8f0;
        local_8d8 = lVar20;
        if (*(char *)((longlong)local_348 + lVar21) == '\x04') {
          local_8e0 = lVar21;
          uVar18 = FUN_140813180(lVar28,lVar20 * 0xc + *param_2);
          if ((((-1 < (int)uVar18) && ((int)uVar18 < *(int *)(lVar28 + 0xc0))) &&
              (lVar21 = *(longlong *)(*(longlong *)(lVar28 + 0xb8) + (ulonglong)uVar18 * 8),
              lVar21 != 0)) && (*(char *)(lVar21 + 0x10) == '\x04')) {
            local_288 = 0.0;
            dStack_280 = 0.0;
            local_8e8 = lVar21;
            FUN_1491f2880(&local_440,lVar21 + 0x220,&local_288);
            if (local_288 != 0.0) {
              FUN_1400020a8();
            }
            lVar21 = local_8e0;
            local_4b8 = *(undefined8 *)((longlong)local_348 + local_8e0);
            local_4b0 = *(undefined4 *)((longlong)local_348 + local_8e0 + 8);
            uVar17 = FUN_140813180(lVar28,&local_4b8);
            uVar29 = 0;
            FUN_1491829ae(lVar28,&local_4a8,uVar17,0);
            local_520 = *(undefined4 *)(*param_2 + 8 + lVar21);
            local_528 = *(undefined8 *)(*param_2 + lVar21);
            FUN_149185020(lVar28,local_518,&local_528,0);
            FUN_14915a206(local_8f0,&local_288,&local_4a8);
            FUN_1449437a2(&local_288,local_588,local_518);
            local_590 = *(undefined4 *)(*param_2 + 8 + lVar21);
            local_598 = *(undefined8 *)(*param_2 + lVar21);
            pdVar22 = local_588;
            pdVar23 = &local_288;
            for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
              *pdVar23 = *pdVar22;
              pdVar22 = pdVar22 + 1;
              pdVar23 = pdVar23 + 1;
            }
            uVar17 = FUN_140813180(lVar28,&local_598);
            local_908 = 0;
            local_910 = 1;
            local_918 = local_918 & 0xffffff00;
            FUN_14918a3ce(lVar28,uVar17,&local_288,1);
            local_5a0 = *(undefined4 *)(*param_2 + 8 + local_8e0);
            local_5a8 = *(undefined8 *)(*param_2 + local_8e0);
            pdVar22 = local_588;
            pdVar23 = &local_288;
            for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
              *pdVar23 = *pdVar22;
              pdVar22 = pdVar22 + 1;
              pdVar23 = pdVar23 + 1;
            }
            uVar17 = FUN_140813180(lVar28,&local_5a8);
            local_908 = 0;
            local_910 = 1;
            local_918 = local_918 & 0xffffff00;
            FUN_14918a3ce(lVar28,uVar17,&local_288,0);
            local_610 = *(undefined4 *)(*param_2 + 8 + local_8e0);
            local_618 = *(undefined8 *)(*param_2 + local_8e0);
            uVar17 = FUN_140813180(lVar28,&local_618);
            FUN_1491829ae(lVar28,local_608,uVar17,0);
            uVar30 = CONCAT71((int7)((ulonglong)pdVar22 >> 8),2);
            do {
              local_620 = *(undefined4 *)(*param_2 + 8 + lVar20 * 0xc);
              local_628 = *(undefined8 *)(*param_2 + lVar20 * 0xc);
              uVar17 = FUN_140813180(lVar28,&local_628);
              local_8f1 = (undefined1)uVar30;
              FUN_149181d3e(lVar28,&local_288,uVar17,uVar30 & 0xffffffff);
              pdVar22 = &local_288;
              FUN_1491932b8(&local_288,&local_688,*(undefined1 *)(local_8e8 + 0x211),
                            *(undefined1 *)(local_8e8 + 0x21c));
              local_6b8 = 0.0;
              dStack_6b0 = 0.0;
              local_6c8 = ZEXT816(0);
              dVar1 = local_468._0_8_;
              dVar5 = local_468._8_8_;
              dVar2 = local_458._0_8_;
              dVar6 = local_458._8_8_;
              dVar3 = local_648._0_8_;
              dVar7 = local_648._8_8_;
              dVar4 = local_638._0_8_;
              dVar8 = local_638._8_8_;
              auVar36 = minpd(local_648,local_468);
              auVar41 = minpd(local_638,local_458);
              auVar43._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
              auVar43._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
              iVar19 = movmskpd((int)local_6c8,auVar43);
              auVar36._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
              auVar36._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
              uVar18 = movmskpd((int)pdVar22,auVar36);
              local_8cc = (uint)uVar29;
              dVar49 = auVar12._8_8_;
              dVar35 = auVar12._0_8_;
              if ((uVar18 & 0x3fffffff) == 0 && iVar19 == 0) {
                local_6e8 = dStack_680 * local_498 * -1.0 +
                            local_678 * dStack_4a0 +
                            dStack_670 * local_4a8 * 1.0 + local_688 * dStack_490;
                dStack_6e0 = local_688 * local_498 * 1.0 +
                             dStack_670 * dStack_4a0 +
                             local_678 * local_4a8 * -1.0 + dStack_680 * dStack_490;
                local_6d8._8_8_ =
                     local_678 * local_498 * -1.0 +
                     ((local_4a8 * local_688 * -1.0 + dStack_670 * dStack_490) -
                     dStack_680 * dStack_4a0);
                local_6d8._0_8_ =
                     dStack_670 * local_498 * 1.0 +
                     ((local_4a8 * dStack_680 * 1.0 + local_678 * dStack_490) -
                     local_688 * dStack_4a0);
                dVar11 = local_668 * dVar1;
                dVar46 = dStack_660 * dVar5;
                dVar9 = local_658 * dVar2;
                dVar10 = dStack_650 * dVar6;
                dVar47 = dVar46 * local_4a8 - dStack_4a0 * dVar11;
                dVar48 = dVar9 * dStack_4a0 - local_498 * dVar46;
                dVar34 = dVar11 * local_498 - local_4a8 * dVar9;
                dVar40 = dVar10 * dStack_490 - dStack_490 * dVar10;
                dVar48 = dVar48 + dVar48;
                dVar34 = dVar34 + dVar34;
                dVar47 = dVar47 + dVar47;
                dVar40 = dVar40 + dVar40;
                dVar46 = (dVar48 * local_498 - dVar47 * local_4a8) + dStack_490 * dVar34 + dVar46 +
                         dStack_480;
                local_6c8._8_4_ = SUB84(dVar46,0);
                local_6c8._0_8_ =
                     (dVar47 * dStack_4a0 - local_498 * dVar34) + dStack_490 * dVar48 + dVar11 +
                     local_488;
                local_6c8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
                local_6b8 = (dVar34 * local_4a8 - dStack_4a0 * dVar48) + dStack_490 * dVar47 + dVar9
                            + (double)CONCAT44(uStack_474,local_478);
                dStack_6b0 = (dVar40 * dStack_490 - dVar40 * dStack_490) +
                             dStack_490 * dVar40 + dVar10 + dStack_470;
              }
              else {
                dVar46 = dStack_4a0 + dStack_4a0;
                dVar47 = local_498 + local_498;
                dVar34 = local_4a8 * (local_4a8 + local_4a8);
                local_128 = (1.0 - (dVar34 + dStack_4a0 * dVar46)) * dVar2;
                dVar48 = (local_4a8 + local_4a8) * dStack_490;
                local_138 = (dVar46 * dStack_490 + local_4a8 * dVar47) * dVar2;
                dStack_130 = (dVar47 * dStack_4a0 - dVar48) * dVar2;
                local_178 = (dVar35 - (local_498 * dVar47 + dStack_4a0 * dVar46)) * dVar1;
                dVar34 = (dVar49 - (local_498 * dVar47 + dVar34)) * dVar5;
                dStack_170 = (dVar46 * local_4a8 + dVar47 * dStack_490) * dVar1;
                local_148 = (dVar47 * dStack_4a0 + dVar48) * dVar5;
                local_168 = (local_4a8 * dVar47 - dVar46 * dStack_490) * dVar1;
                uStack_160 = 0;
                local_158._8_4_ = SUB84(dVar34,0);
                local_158._0_8_ = (dVar46 * local_4a8 - dVar47 * dStack_490) * dVar5;
                local_158._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
                uStack_140 = 0;
                uStack_120 = 0;
                local_118 = local_488;
                dStack_110 = dStack_480;
                local_108 = (double)CONCAT44(uStack_474,local_478);
                uStack_100 = 0x3ff0000000000000;
                dVar46 = dStack_680 + dStack_680;
                dVar47 = local_678 + local_678;
                dVar34 = local_688 * (local_688 + local_688);
                dVar48 = (local_688 + local_688) * dStack_670;
                local_1f8._8_8_ = (dVar46 * local_688 + dVar47 * dStack_670) * dVar3;
                local_1f8._0_8_ = (dVar35 - (local_678 * dVar47 + dStack_680 * dVar46)) * dVar3;
                local_1e8._8_8_ = 0;
                local_1e8._0_8_ = (local_688 * dVar47 - dVar46 * dStack_670) * dVar3;
                local_1d8._8_8_ = (dVar49 - (local_678 * dVar47 + dVar34)) * dVar7;
                local_1d8._0_8_ = (dVar46 * local_688 - dVar47 * dStack_670) * dVar7;
                local_1c8._8_8_ = 0;
                local_1c8._0_8_ = (dVar47 * dStack_680 + dVar48) * dVar7;
                local_1b8._8_8_ = (dVar47 * dStack_680 - dVar48) * dVar4;
                local_1b8._0_8_ = (dVar46 * dStack_670 + local_688 * dVar47) * dVar4;
                local_1a8._8_8_ = 0;
                local_1a8._0_8_ = (1.0 - (dVar34 + dStack_680 * dVar46)) * dVar4;
                local_198 = local_668;
                dStack_190 = dStack_660;
                local_188 = local_658;
                uStack_180 = 0x3ff0000000000000;
                FUN_1447fea8d(&local_318,local_1f8,&local_178);
                FUN_144a1c686(&local_318,0x3e45798ee0000000);
                auVar41._8_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
                auVar41._0_8_ = -(ulonglong)(0.0 <= dVar1 * dVar3);
                auVar36 = blendvpd(_DAT_149936790,auVar12,auVar41);
                uVar30 = -(ulonglong)(0.0 <= dVar2 * dVar4);
                dVar47 = (double)(~uVar30 & 0xbff0000000000000 | uVar30 & 0x3ff0000000000000);
                dVar48 = auVar36._0_8_;
                local_308 = local_308 * dVar48;
                dStack_310 = dStack_310 * dVar48;
                local_318 = (undefined2 *)((double)local_318 * dVar48);
                dVar48 = auVar36._8_8_;
                local_2e8 = local_2e8 * dVar48;
                local_2f8._8_8_ = (double)local_2f8._8_8_ * dVar48;
                local_2f8._0_8_ = dVar48 * (double)local_2f8._0_8_;
                local_2c8 = local_2c8 * dVar47;
                dStack_2d0 = dStack_2d0 * dVar47;
                local_2d8 = dVar47 * local_2d8;
                FUN_14481fd10(&local_338,&local_318);
                dVar47 = local_328 * local_328 + local_338 * local_338;
                dVar48 = dStack_320 * dStack_320 + dStack_330 * dStack_330;
                auVar37._0_8_ = dVar47 + dVar48;
                auVar37._8_8_ = dVar47 + dVar48;
                auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
                auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
                auVar36 = sqrtpd(auVar37,auVar37);
                auVar36 = divpd(auVar12,auVar36);
                auVar42._0_8_ = auVar36._0_8_ * local_328;
                auVar42._8_8_ = auVar36._8_8_ * dStack_320;
                local_6e8 = (double)((ulonglong)(local_338 * auVar36._0_8_) &
                                    -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
                dStack_6e0 = (double)((ulonglong)(dStack_330 * auVar36._8_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
                local_6d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar31);
                local_6b8 = (double)CONCAT44(uStack_2a4,local_2a8);
                local_6c8._8_8_ = dStack_2b0;
                local_6c8._0_8_ = local_2b8;
                dStack_6b0 = 0.0;
              }
              dVar8 = dVar8 * dVar6;
              local_6a8._8_4_ = SUB84(dVar7 * dVar5,0);
              local_6a8._0_8_ = dVar3 * dVar1;
              local_6a8._12_4_ = (int)((ulonglong)(dVar7 * dVar5) >> 0x20);
              local_698._8_4_ = SUB84(dVar8,0);
              local_698._0_8_ = dVar4 * dVar2;
              local_698._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
              FUN_14915a206(local_8f0,&local_318,&local_6e8);
              FUN_1449437a2(&local_318,&local_178,local_608);
              memset(&local_318,0,0x84);
              lVar21 = local_8e8;
              FUN_14919dde6(&local_318,&local_178,*(undefined1 *)(local_8e8 + 0x211),
                            *(undefined1 *)(local_8e8 + 0x21c));
              local_900 = 0;
              local_908 = 0;
              local_910 = 0;
              local_918 = local_918 & 0xffffff00;
              FUN_1444a57a4(lVar28,lVar21,&local_318,local_8f1);
              uVar30 = CONCAT71((int7)((ulonglong)&local_178 >> 8),3);
              uVar29 = CONCAT71((int7)((ulonglong)lVar21 >> 8),1);
            } while ((local_8cc & 1) == 0);
            FUN_14915a206(local_8f0,local_748,local_3b8);
            lVar20 = local_8e0;
            local_750 = *(undefined4 *)(*param_2 + 8 + local_8e0);
            local_758 = *(undefined8 *)(*param_2 + local_8e0);
            pdVar22 = local_748;
            pdVar23 = &local_288;
            for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
              *pdVar23 = *pdVar22;
              pdVar22 = pdVar22 + 1;
              pdVar23 = pdVar23 + 1;
            }
            uVar17 = FUN_140813180(lVar28,&local_758);
            local_908 = 0;
            local_910 = 1;
            local_918 = local_918 & 0xffffff00;
            FUN_144831e8e(lVar28,uVar17,&local_288,1);
            FUN_14915a206(local_8f0,local_7b8,local_3b8);
            local_7c0 = *(undefined4 *)(*param_2 + 8 + lVar20);
            local_7c8 = *(undefined8 *)(*param_2 + lVar20);
            pdVar22 = local_7b8;
            pdVar23 = &local_288;
            for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
              *pdVar23 = *pdVar22;
              pdVar22 = pdVar22 + 1;
              pdVar23 = pdVar23 + 1;
            }
            uVar17 = FUN_140813180(lVar28,&local_7c8);
            local_908 = 0;
            local_910 = 1;
            local_918 = local_918 & 0xffffff00;
            FUN_144831e8e(lVar28,uVar17,&local_288,0);
            lVar20 = lVar28;
            FUN_14449ed30(lVar28,&local_688,local_8e8,0);
            local_1c8 = ZEXT816(0);
            local_1d8 = ZEXT816(0);
            dVar1 = local_468._0_8_;
            dVar5 = local_468._8_8_;
            dVar2 = local_458._0_8_;
            dVar6 = local_458._8_8_;
            dVar3 = local_648._0_8_;
            dVar7 = local_648._8_8_;
            dVar4 = local_638._0_8_;
            dVar8 = local_638._8_8_;
            auVar36 = minpd(local_648,local_468);
            auVar43 = minpd(local_638,local_458);
            auVar38._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
            auVar38._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
            iVar19 = movmskpd((int)local_1d8,auVar38);
            auVar44._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
            auVar44._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
            uVar18 = movmskpd((int)lVar20,auVar44);
            if ((uVar18 & 0x3fffffff) == 0 && iVar19 == 0) {
              dVar35 = local_688 * local_498 * 1.0 +
                       dStack_670 * dStack_4a0 +
                       local_678 * local_4a8 * -1.0 + dStack_680 * dStack_490;
              local_1f8._8_4_ = SUB84(dVar35,0);
              local_1f8._0_8_ =
                   dStack_680 * local_498 * -1.0 +
                   local_678 * dStack_4a0 + dStack_670 * local_4a8 * 1.0 + local_688 * dStack_490;
              local_1f8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
              local_1e8._8_8_ =
                   local_678 * local_498 * -1.0 +
                   ((local_4a8 * local_688 * -1.0 + dStack_670 * dStack_490) -
                   dStack_680 * dStack_4a0);
              local_1e8._0_8_ =
                   dStack_670 * local_498 * 1.0 +
                   ((local_4a8 * dStack_680 * 1.0 + local_678 * dStack_490) - local_688 * dStack_4a0
                   );
              dVar10 = local_668 * dVar1;
              dVar34 = dStack_660 * dVar5;
              dVar46 = local_658 * dVar2;
              dVar9 = dStack_650 * dVar6;
              dVar35 = dVar34 * local_4a8 - dStack_4a0 * dVar10;
              dVar47 = dVar46 * dStack_4a0 - local_498 * dVar34;
              dVar48 = dVar10 * local_498 - local_4a8 * dVar46;
              dVar49 = dVar9 * dStack_490 - dStack_490 * dVar9;
              dVar47 = dVar47 + dVar47;
              dVar48 = dVar48 + dVar48;
              dVar35 = dVar35 + dVar35;
              dVar49 = dVar49 + dVar49;
              dVar34 = (dVar47 * local_498 - dVar35 * local_4a8) + dStack_490 * dVar48 + dVar34 +
                       dStack_480;
              local_1d8._8_4_ = SUB84(dVar34,0);
              local_1d8._0_8_ =
                   (dVar35 * dStack_4a0 - local_498 * dVar48) + dStack_490 * dVar47 + dVar10 +
                   local_488;
              local_1d8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
              local_1c8._0_8_ =
                   (dVar48 * local_4a8 - dStack_4a0 * dVar47) + dStack_490 * dVar35 + dVar46 +
                   (double)CONCAT44(uStack_474,local_478);
              local_1c8._8_8_ =
                   (dVar49 * dStack_490 - dVar49 * dStack_490) + dStack_490 * dVar49 + dVar9 +
                   dStack_470;
            }
            else {
              dVar46 = dStack_4a0 + dStack_4a0;
              dVar47 = local_498 + local_498;
              dVar34 = local_4a8 * (local_4a8 + local_4a8);
              local_2c8 = (1.0 - (dVar34 + dStack_4a0 * dVar46)) * dVar2;
              dVar48 = (local_4a8 + local_4a8) * dStack_490;
              local_2d8 = (dVar46 * dStack_490 + local_4a8 * dVar47) * dVar2;
              dStack_2d0 = (dVar47 * dStack_4a0 - dVar48) * dVar2;
              local_318 = (undefined2 *)
                          ((dVar35 - (local_498 * dVar47 + dStack_4a0 * dVar46)) * dVar1);
              dVar34 = (dVar49 - (local_498 * dVar47 + dVar34)) * dVar5;
              dStack_310 = (dVar46 * local_4a8 + dVar47 * dStack_490) * dVar1;
              local_2e8 = (dVar47 * dStack_4a0 + dVar48) * dVar5;
              local_308 = (local_4a8 * dVar47 - dVar46 * dStack_490) * dVar1;
              uStack_300 = 0;
              local_2f8._8_4_ = SUB84(dVar34,0);
              local_2f8._0_8_ = (dVar46 * local_4a8 - dVar47 * dStack_490) * dVar5;
              local_2f8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
              uStack_2e0 = 0;
              uStack_2c0 = 0;
              local_2b8 = local_488;
              dStack_2b0 = dStack_480;
              local_2a8 = local_478;
              uStack_2a4 = uStack_474;
              uStack_2a0 = 0;
              uStack_29c = 0x3ff00000;
              dVar46 = dStack_680 + dStack_680;
              dVar47 = local_678 + local_678;
              dVar34 = local_688 * (local_688 + local_688);
              local_128 = (1.0 - (dVar34 + dStack_680 * dVar46)) * dVar4;
              dVar48 = (local_688 + local_688) * dStack_670;
              local_138 = (dVar46 * dStack_670 + local_688 * dVar47) * dVar4;
              dStack_130 = (dVar47 * dStack_680 - dVar48) * dVar4;
              local_178 = (dVar35 - (local_678 * dVar47 + dStack_680 * dVar46)) * dVar3;
              dStack_170 = (dVar46 * local_688 + dVar47 * dStack_670) * dVar3;
              local_148 = (dVar47 * dStack_680 + dVar48) * dVar7;
              local_168 = (local_688 * dVar47 - dVar46 * dStack_670) * dVar3;
              uStack_160 = 0;
              local_158._8_8_ = (dVar49 - (local_678 * dVar47 + dVar34)) * dVar7;
              local_158._0_8_ = (dVar46 * local_688 - dVar47 * dStack_670) * dVar7;
              uStack_140 = 0;
              uStack_120 = 0;
              local_118 = local_668;
              dStack_110 = dStack_660;
              local_108 = local_658;
              uStack_100 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_288,&local_178,&local_318);
              FUN_144a1c686(&local_288,0x3e45798ee0000000);
              auVar32._8_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
              auVar32._0_8_ = -(ulonglong)(0.0 <= dVar1 * dVar3);
              auVar36 = blendvpd(_DAT_149936790,auVar12,auVar32);
              uVar30 = -(ulonglong)(0.0 <= dVar2 * dVar4);
              dVar35 = (double)(~uVar30 & 0xbff0000000000000 | uVar30 & 0x3ff0000000000000);
              dVar49 = auVar36._0_8_;
              local_278 = local_278 * dVar49;
              dStack_280 = dStack_280 * dVar49;
              local_288 = local_288 * dVar49;
              dVar49 = auVar36._8_8_;
              local_258 = local_258 * dVar49;
              local_260 = local_260 * dVar49;
              local_268 = dVar49 * local_268;
              local_238 = local_238 * dVar35;
              local_240 = local_240 * dVar35;
              local_248 = dVar35 * local_248;
              FUN_14481fd10(&local_6e8,&local_288);
              dVar35 = (double)local_6d8._0_8_ * (double)local_6d8._0_8_ + local_6e8 * local_6e8;
              dVar49 = (double)local_6d8._8_8_ * (double)local_6d8._8_8_ + dStack_6e0 * dStack_6e0;
              auVar39._0_8_ = dVar35 + dVar49;
              auVar39._8_8_ = dVar35 + dVar49;
              auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
              auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
              auVar36 = sqrtpd(auVar39,auVar39);
              auVar36 = divpd(auVar12,auVar36);
              auVar45._0_8_ = auVar36._0_8_ * (double)local_6d8._0_8_;
              auVar45._8_8_ = auVar36._8_8_ * (double)local_6d8._8_8_;
              local_1e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar33);
              local_1f8._8_8_ =
                   (ulonglong)(dStack_6e0 * auVar36._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
              local_1f8._0_8_ =
                   (ulonglong)(local_6e8 * auVar36._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
              local_1c8._8_8_ = 0;
              local_1c8._0_8_ = local_218;
              local_1d8._8_8_ = uStack_220;
              local_1d8._0_8_ = local_228;
            }
            lVar20 = local_8f0;
            dVar8 = dVar8 * dVar6;
            local_1b8._8_4_ = SUB84(dVar7 * dVar5,0);
            local_1b8._0_8_ = dVar3 * dVar1;
            local_1b8._12_4_ = (int)((ulonglong)(dVar7 * dVar5) >> 0x20);
            local_1a8._8_4_ = SUB84(dVar8,0);
            local_1a8._0_8_ = dVar4 * dVar2;
            local_1a8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            FUN_14915a206(local_8f0,&local_318,local_1f8);
            FUN_1449437a2(&local_318,&local_288,local_608);
            lVar21 = local_8e8;
            local_908 = 0;
            local_910 = 0;
            local_918 = local_918 & 0xffffff00;
            FUN_1444a525c(lVar28,local_8e8,&local_288,0);
            FUN_14915a206(lVar20,&local_318,local_1f8);
            FUN_1449437a2(&local_318,&local_288,local_608);
            local_908 = 0;
            local_910 = 0;
            local_918 = local_918 & 0xffffff00;
            FUN_1444a525c(lVar28,lVar21,&local_288);
            iVar19 = local_430;
            pvVar16 = local_438;
            ppvVar15 = local_440;
            if (local_440 != &local_438) {
              lVar20 = (longlong)local_430;
              *(int *)(local_440 + 1) = local_430;
              if (local_430 == 0 && *(int *)((longlong)local_440 + 0xc) == 0) {
                *(undefined4 *)((longlong)local_440 + 0xc) = 0;
              }
              else {
                FUN_149192126(local_440,local_430);
                if (iVar19 != 0) {
                  memcpy(*ppvVar15,pvVar16,lVar20 * 2);
                }
              }
            }
            if (local_438 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          FUN_14915a206(local_8f0,local_828,local_3b8);
          local_830 = *(undefined4 *)(*param_2 + 8 + lVar21);
          local_838 = *(undefined8 *)(*param_2 + lVar21);
          pdVar22 = local_828;
          pdVar23 = &local_288;
          for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
            *pdVar23 = *pdVar22;
            pdVar22 = pdVar22 + 1;
            pdVar23 = pdVar23 + 1;
          }
          uVar17 = FUN_140813180(lVar28,&local_838);
          local_908 = 0;
          local_910 = 1;
          local_918 = local_918 & 0xffffff00;
          FUN_144831e8e(lVar28,uVar17,&local_288);
          FUN_14915a206(lVar13,local_898,local_3b8);
          local_8a0 = *(undefined4 *)(*param_2 + 8 + lVar21);
          local_8a8 = *(undefined8 *)(*param_2 + lVar21);
          pdVar22 = local_898;
          pdVar23 = &local_288;
          for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
            *pdVar23 = *pdVar22;
            pdVar22 = pdVar22 + 1;
            pdVar23 = pdVar23 + 1;
          }
          uVar17 = FUN_140813180(lVar28,&local_8a8);
          local_908 = 0;
          local_910 = 1;
          local_918 = local_918 & 0xffffff00;
          FUN_144831e8e(lVar28,uVar17,&local_288);
        }
        lVar20 = local_8d8 + 1;
      } while (lVar20 < (int)local_340);
    }
    if (((1 < *(int *)(local_8f0 + 0x10)) && (1 < *(int *)(local_8f0 + 0x20))) &&
       (local_8d8 = FUN_14449bdee(lVar28,1), 0 < (int)param_2[1])) {
      lVar20 = 0;
      do {
        local_1f8._0_8_ = *(undefined8 *)((longlong)local_348 + lVar20 * 0xc + 4);
        FUN_1400021e4(local_1f8,&local_288);
        puVar25 = &DAT_149dfb77a;
        if (*(int *)(local_8f0 + 0x10) != 0) {
          puVar25 = *(undefined2 **)(local_8f0 + 8);
        }
        local_918 = 0;
        FUN_140807d8e(&local_288,&local_318,puVar25);
        if (dStack_310._0_4_ == dStack_280._0_4_) {
          if (1 < dStack_310._0_4_) {
            lVar21 = 0;
            while( true ) {
              uVar24 = *(ushort *)((longlong)local_318 + lVar21);
              uVar30 = (ulonglong)uVar24;
              uVar26 = *(ushort *)((longlong)local_288 + lVar21);
              if (uVar24 != uVar26) break;
              if (uVar24 == 0) goto LAB_1491e924a;
LAB_1491e91b1:
              lVar21 = lVar21 + 2;
            }
            if ((uVar26 | uVar24) < 0x80) {
              uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar30];
              uVar27 = (ulonglong)uVar26;
              uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar27];
              if ((&DAT_149e05da0)[uVar30] == (&DAT_149e05da0)[uVar27]) goto LAB_1491e91b1;
            }
            if (uVar24 != uVar26) goto LAB_1491e91dd;
          }
        }
        else if (dStack_280._0_4_ + dStack_310._0_4_ != 1) {
LAB_1491e91dd:
          puVar25 = local_318;
          if (dStack_310._0_4_ == 0) {
            puVar25 = &DAT_149dfb77a;
          }
          FUN_1446f470e(&local_8b0,puVar25,1);
          local_8c0 = *(undefined8 *)(*param_2 + lVar20 * 0xc);
          local_8b8 = *(undefined4 *)(*param_2 + 8 + lVar20 * 0xc);
          local_918 = CONCAT31(local_918._1_3_,1);
          FUN_1491eae6a(local_8d8,&local_178,&local_8c0,local_8b0);
        }
LAB_1491e924a:
        if (local_318 != (undefined2 *)0x0) {
          FUN_1400020a8(local_318);
        }
        if (local_288 != 0.0) {
          FUN_1400020a8();
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < (int)param_2[1]);
    }
  }
LAB_1491e9286:
  plVar14 = local_8c8;
  if (local_348 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140ad4746(lVar28,0xd,0);
  if (*plVar14 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(local_8f0 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(local_8f0 + 8) != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_938) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e9a8c FUN_1491e9a8c body=172 status=ok
// SIG undefined FUN_1491e9a8c(void)

undefined2 * FUN_1491e9a8c(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar2 = *(void **)(param_2 + 4);
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 10) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 0xc);
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy(*(void **)(param_1 + 0xc),pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1491e9b50 FUN_1491e9b50 body=405 status=ok
// SIG undefined FUN_1491e9b50(void)

void FUN_1491e9b50(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_34 = local_34 & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar1 = local_38;
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = uStack_2c;
  local_50 = CONCAT44(uStack_30,local_34);
  uVar2 = FUN_1491e9ce6(param_1,&local_50,iVar1 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e9ce6 FUN_1491e9ce6 body=250 status=ok
// SIG undefined FUN_1491e9ce6(void)

undefined8 FUN_1491e9ce6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14576d4b4();
  if (cVar1 == '\0') goto LAB_1491e9d10;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_1491e9d5c:
    lVar5 = 0;
  }
  else {
    lVar3 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1491e9d5c;
  }
  uVar2 = FUN_140813180(lVar5,param_2);
  if (((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar5 + 0xc0))) &&
     (*(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar2 * 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  FUN_14919e8cc(param_2,&local_38);
  puVar4 = local_38;
  if (local_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1491f1c02(param_1,L"Cannot Remove All Parents, Child \'%s\' not found.",puVar4);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1491e9d10:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1491e9e0a FUN_1491e9e0a body=420 status=ok
// SIG undefined FUN_1491e9e0a(void)

void FUN_1491e9e0a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = local_2c & 0xffffff00;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_38 = local_38 & 0xffffff00;
  uStack_34 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = uStack_30;
  local_50 = CONCAT44(uStack_34,local_38);
  local_60 = CONCAT44(uStack_28,local_2c);
  local_58 = uStack_24;
  uVar1 = FUN_1491e9fb0(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491e9fb0 FUN_1491e9fb0 body=490 status=ok
// SIG undefined FUN_1491e9fb0(void)

undefined8 FUN_1491e9fb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_14576d4b4();
  if (cVar2 == '\0') goto LAB_1491e9fdc;
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 == 0) {
LAB_1491ea02a:
    lVar6 = 0;
  }
  else {
    lVar4 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_1491ea02a;
  }
  uVar3 = FUN_140813180(lVar6,param_2);
  if ((((int)uVar3 < 0) || (*(int *)(lVar6 + 0xc0) <= (int)uVar3)) ||
     (lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0xb8) + (ulonglong)uVar3 * 8), lVar4 == 0)) {
    FUN_14919e8cc(param_2,&local_40);
    puVar5 = local_40;
    if (local_38 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1491f2004(param_1,puVar5);
  }
  else if (*(char *)(lVar4 + 0x10) == '\x04') {
    uVar3 = FUN_140813180(lVar6,param_3);
    if ((((int)uVar3 < 0) || (*(int *)(lVar6 + 0xc0) <= (int)uVar3)) ||
       (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xb8) + (ulonglong)uVar3 * 8), lVar6 == 0)) {
      FUN_14919e8cc(param_3,&local_40);
      puVar5 = local_40;
      if (local_38 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_1491f1d7c(param_1,L"Cannot Remove Available Space, Space \'%s\' not found.",puVar5);
    }
    else {
      bVar1 = *(byte *)(lVar6 + 0x10);
      if ((((ulonglong)bVar1 < 0x21) && ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
         (bVar1 == 0x80)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
      FUN_14919e8cc(param_3,&local_40);
      puVar5 = local_40;
      if (local_38 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_1491f20d0(param_1,L"Cannot Remove Available Space, \'%s\' is not a Transform.",puVar5);
    }
  }
  else {
    FUN_14919e8cc(param_2,&local_40);
    puVar5 = local_40;
    if (local_38 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1491f206a(param_1,puVar5);
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1491e9fdc:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1491ea1c6 FUN_1491ea1c6 body=420 status=ok
// SIG undefined FUN_1491ea1c6(void)

void FUN_1491ea1c6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = local_2c & 0xffffff00;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_38 = local_38 & 0xffffff00;
  uStack_34 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = uStack_30;
  local_50 = CONCAT44(uStack_34,local_38);
  local_60 = CONCAT44(uStack_28,local_2c);
  local_58 = uStack_24;
  uVar1 = FUN_1491ea36c(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ea36c FUN_1491ea36c body=750 status=ok
// SIG undefined FUN_1491ea36c(void)

undefined8 FUN_1491ea36c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_14576d4b4();
  if (cVar1 == '\0') goto LAB_1491ea398;
  lVar7 = *(longlong *)(param_1 + 0x20);
  if (lVar7 == 0) {
LAB_1491ea3e6:
    lVar7 = 0;
  }
  else {
    lVar3 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1491ea3e6;
  }
  uVar2 = FUN_140813180(lVar7,param_2);
  if ((((int)uVar2 < 0) || (*(int *)(lVar7 + 0xc0) <= (int)uVar2)) ||
     (lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + (ulonglong)uVar2 * 8), lVar3 == 0)) {
    FUN_14919e8cc(param_2,&local_40);
    puVar4 = local_40;
    if (local_38 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_1491f1c5e(param_1,L"Cannot Remove Channel Host, Channel \'%s\' not found.",puVar4);
  }
  else if (*(char *)(lVar3 + 0x10) == '\x04') {
    if (*(char *)(lVar3 + 0x210) == '\x01') {
      uVar2 = FUN_140813180(lVar7,param_3);
      if ((((int)uVar2 < 0) || (*(int *)(lVar7 + 0xc0) <= (int)uVar2)) ||
         (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + (ulonglong)uVar2 * 8), lVar7 == 0)) {
        FUN_14919e8cc(param_3,&local_40);
        puVar4 = local_40;
        if (local_38 == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        FUN_1491f1c02(param_1,L"Cannot Remove Channel Host, Host \'%s\' not found.",puVar4);
      }
      else {
        if (*(char *)(lVar7 + 0x10) != '\x04') {
          FUN_14919e8cc(param_3,&local_40);
          goto joined_r0x0001491ea4ce;
        }
        if (*(char *)(lVar7 + 0x210) == '\x01') {
          FUN_14919e8cc(param_3,&local_40);
          puVar4 = local_40;
          if (local_38 == 0) {
            puVar4 = &DAT_149dfb77a;
          }
          FUN_1491f27b2(param_1,puVar4);
        }
        else {
          if ((longlong)*(int *)(lVar3 + 0x370) != 0) {
            lVar5 = 0;
            do {
              if ((*(longlong *)(*(longlong *)(lVar3 + 0x368) + 4 + lVar5) ==
                   *(longlong *)(lVar7 + 0x14)) &&
                 (*(char *)(*(longlong *)(lVar3 + 0x368) + lVar5) == '\x04')) {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
              }
              lVar5 = lVar5 + 0xc;
            } while ((longlong)*(int *)(lVar3 + 0x370) * 0xc != lVar5);
          }
          FUN_14919e8cc(param_2,&local_40);
          puVar4 = &DAT_149dfb77a;
          if (local_38 != 0) {
            puVar4 = local_40;
          }
          FUN_14919e8cc(param_3,&local_50);
          puVar6 = &DAT_149dfb77a;
          if (local_48 != 0) {
            puVar6 = local_50;
          }
          FUN_1491f2818(param_1,puVar6,puVar4);
          if (local_50 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
    else {
      FUN_14919e8cc(param_2,&local_40);
      puVar4 = local_40;
      if (local_38 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_1491f274c(param_1,puVar4);
    }
  }
  else {
    FUN_14919e8cc(param_2,&local_40);
joined_r0x0001491ea4ce:
    puVar4 = local_40;
    if (local_38 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_1491f1cba(param_1,L"Cannot Remove Channel Host, \'%s\' is not a Control.",puVar4);
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1491ea398:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ea686 FUN_1491ea686 body=329 status=ok
// SIG undefined FUN_1491ea686(void)

void FUN_1491ea686(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = local_2c & 0xffffff00;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = uStack_24;
  local_40 = CONCAT44(uStack_28,local_2c);
  uVar1 = FUN_1491ea7d0(param_1,&local_40,0,0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ea7d0 FUN_1491ea7d0 body=241 status=ok
// SIG undefined FUN_1491ea7d0(void)

undefined8 FUN_1491ea7d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14576d4b4();
  if (cVar1 == '\0') goto LAB_1491ea7f5;
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) {
LAB_1491ea83f:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1491ea83f;
  }
  uVar2 = FUN_140813180(lVar4,param_2);
  if (((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar4 + 0xc0))) &&
     (*(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)uVar2 * 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  FUN_14919e8cc(param_2,&local_30);
  puVar5 = local_30;
  if (local_28 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1491f028c(param_1,L"Cannot Remove Element: \'%s\' not found.",puVar5);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1491ea7f5:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1491ea8ec FUN_1491ea8ec body=512 status=ok
// SIG undefined FUN_1491ea8ec(void)

void FUN_1491ea8ec(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_34 = local_34 & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_40 = local_40 & 0xffffff00;
  uStack_3c = 0;
  uStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar1 = local_44;
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = uStack_38;
  local_58 = CONCAT44(uStack_3c,local_40);
  local_68 = CONCAT44(uStack_30,local_34);
  local_60 = uStack_2c;
  local_70 = 0;
  local_78 = 0;
  uVar2 = FUN_1491eaaee(param_1,&local_68,&local_58,iVar1 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491eaaee FUN_1491eaaee body=342 status=ok
// SIG undefined FUN_1491eaaee(void)

undefined8 FUN_1491eaaee(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_14576d4b4();
  if (cVar1 == '\0') goto LAB_1491eab1f;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_1491eab6f:
    lVar5 = 0;
  }
  else {
    lVar3 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1491eab6f;
  }
  uVar2 = FUN_140813180(lVar5,param_2);
  if ((((int)uVar2 < 0) || (*(int *)(lVar5 + 0xc0) <= (int)uVar2)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar2 * 8) == 0)) {
    FUN_14919e8cc(param_2,&local_48);
    puVar4 = local_48;
    if (local_40 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_1491f1b36(param_1,puVar4);
  }
  else {
    uVar2 = FUN_140813180(lVar5,param_3);
    if (((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar5 + 0xc0))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar2 * 8) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
    FUN_14919e8cc(param_3,&local_48);
    puVar4 = local_48;
    if (local_40 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_1491f1b9c(param_1,puVar4);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1491eab1f:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1491eac76 FUN_1491eac76 body=499 status=ok
// SIG undefined FUN_1491eac76(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1491eac76(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44 [3];
  undefined8 local_38;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = local_2c & 0xffffff00;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_44[2] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_44 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_44 + 2);
  }
  local_44[1] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_44 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_44 + 1);
  }
  local_44[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = CONCAT44(uStack_28,local_2c);
  local_58 = uStack_24;
  local_68 = local_44[0] != 0;
  FUN_1491eae6a(param_1,&local_50,&local_60,local_38);
  *(undefined4 *)(param_3 + 1) = local_48;
  *param_3 = local_50;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491eae6a FUN_1491eae6a body=306 status=ok
// SIG undefined FUN_1491eae6a(void)

undefined8 *
FUN_1491eae6a(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_4;
  cVar1 = FUN_14576d4b4();
  if (cVar1 != '\0') {
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) {
LAB_1491eaef1:
      lVar5 = 0;
    }
    else {
      lVar3 = FUN_141095a0a();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) != lVar3 + 0x30)) goto LAB_1491eaef1;
    }
    uVar2 = FUN_140813180(lVar5,param_3);
    if ((((int)uVar2 < 0) || (*(int *)(lVar5 + 0xc0) <= (int)uVar2)) ||
       (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar2 * 8), lVar5 == 0)) {
      FUN_14919e8cc(param_3,&local_40);
      puVar4 = local_40;
      if (local_38 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_1491f028c(param_1,L"Cannot Rename Element: \'%s\' not found.",puVar4);
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      cVar1 = FUN_1491f0fbe(param_1,lVar5,&local_30,param_5);
      if (cVar1 != '\0') {
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar5 + 0x18);
        *param_2 = *(undefined8 *)(lVar5 + 0x10);
        goto LAB_1491eaea4;
      }
    }
  }
  *(undefined1 *)param_2 = 0;
  *(undefined8 *)((longlong)param_2 + 4) = 0;
LAB_1491eaea4:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491eafb0 FUN_1491eafb0 body=398 status=ok
// SIG undefined FUN_1491eafb0(void)

void FUN_1491eafb0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = local_2c & 0xffffff00;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = CONCAT44(uStack_28,local_2c);
  local_40 = uStack_24;
  uVar1 = FUN_1491eb140(param_1,&local_48,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491eb140 FUN_1491eb140 body=238 status=ok
// SIG undefined FUN_1491eb140(void)

undefined8 FUN_1491eb140(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14576d4b4();
  if (cVar1 == '\0') goto LAB_1491eb223;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_1491eb197:
    lVar5 = 0;
  }
  else {
    lVar3 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1491eb197;
  }
  uVar2 = FUN_140813180(lVar5,param_2);
  if (((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar5 + 0xc0))) &&
     (*(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar2 * 8) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  FUN_14919e8cc(param_2,&local_38);
  puVar4 = local_38;
  if (local_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1491f14d8(param_1,puVar4);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1491eb223:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1491eb258 FUN_1491eb258 body=344 status=ok
// SIG undefined FUN_1491eb258(void)

void FUN_1491eb258(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  int local_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = local_34 & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar1 = local_38;
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = uStack_2c;
  local_48 = CONCAT44(uStack_30,local_34);
  uVar2 = FUN_1491eb3b2(param_1,&local_48,iVar1 != 0,local_3c != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491eb3b2 FUN_1491eb3b2 body=566 status=ok
// SIG undefined FUN_1491eb3b2(void)

ulonglong FUN_1491eb3b2(longlong param_1,longlong *param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong **local_40;
  ulonglong local_38;
  
  cVar4 = (char)param_3;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar5 = FUN_14576d4b4();
  if (cVar5 != '\0') {
    if (param_4 != '\0') {
      local_58 = (longlong *)0x0;
      uStack_50 = 1;
      FUN_149192788(&local_58,0);
      *(int *)(local_58 + 1) = (int)param_2[1];
      *local_58 = *param_2;
      uVar6 = FUN_14601dce2(param_1,&local_58,0);
      uVar9 = (ulonglong)uVar6;
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1491eb4a8;
    }
    lVar10 = *(longlong *)(param_1 + 0x20);
    if (lVar10 == 0) {
LAB_1491eb419:
      lVar10 = 0;
    }
    else {
      lVar7 = FUN_141095a0a();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_1491eb419;
    }
    lVar7 = FUN_14479d2ce(lVar10 + 0x308);
    if (lVar7 != 0) {
      lVar7 = FUN_14449bdee(lVar7,1);
      if (lVar7 != 0) {
        local_60 = (undefined4)param_2[1];
        local_68 = *param_2;
        uVar6 = FUN_1491eb3b2(lVar7,&local_68,param_3,0);
        uVar9 = (ulonglong)uVar6;
        goto LAB_1491eb4a8;
      }
    }
    uStack_50 = CONCAT44(uStack_50._4_4_,(int)param_2[1]);
    local_58 = (longlong *)*param_2;
    if (*(longlong *)(lVar10 + 0x570) != 0) {
      puVar8 = (undefined8 *)FUN_1408133a6(*(longlong *)(lVar10 + 0x570),&local_58);
      if (puVar8 != (undefined8 *)0x0) {
        cVar5 = FUN_1491ddc02(puVar8,lVar10);
        if (cVar5 != '\0') {
          uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)(puVar8 + 1));
          local_58 = (longlong *)*puVar8;
        }
      }
    }
    uVar6 = FUN_140813180(lVar10,&local_58);
    if ((((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(lVar10 + 0xc0))) &&
        (lVar7 = *(longlong *)(*(longlong *)(lVar10 + 0xb8) + (ulonglong)uVar6 * 8), lVar7 != 0)) &&
       (*(char *)(lVar7 + 0x28) != cVar4)) {
      plVar1 = (longlong *)(lVar10 + 0x318);
      *(char *)(lVar7 + 0x28) = cVar4;
      if (cVar4 == '\0') {
        local_40 = &local_58;
        FUN_14920aa12(plVar1);
      }
      else {
        iVar2 = *(int *)(lVar10 + 800);
        *(uint *)(lVar10 + 800) = iVar2 + 1U;
        if (*(uint *)(lVar10 + 0x324) < iVar2 + 1U) {
          FUN_149192788(plVar1,iVar2);
        }
        lVar3 = *plVar1;
        *(undefined4 *)(lVar3 + 8 + (longlong)iVar2 * 0xc) = (undefined4)uStack_50;
        *(longlong **)(lVar3 + (longlong)iVar2 * 0xc) = local_58;
      }
      FUN_1491ec404(param_1,'\x04' - *(char *)(lVar7 + 0x28),lVar7);
      FUN_1415c47a2(lVar10);
      uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      goto LAB_1491eb4a8;
    }
  }
  uVar9 = 0;
LAB_1491eb4a8:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491eb5fc FUN_1491eb5fc body=495 status=ok
// SIG undefined FUN_1491eb5fc(void)

void FUN_1491eb5fc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_2c = local_2c & 0xffffff00;
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_38 = local_38 & 0xffffff00;
  uStack_34 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = CONCAT44(uStack_34,local_38);
  local_48 = uStack_30;
  local_60 = CONCAT44(uStack_28,local_2c);
  local_58 = uStack_24;
  uVar1 = FUN_1491eb7ec(param_1,&local_60,&local_50,local_3c);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491eb7ec FUN_1491eb7ec body=499 status=ok
// SIG undefined FUN_1491eb7ec(void)

undefined8 FUN_1491eb7ec(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_14576d4b4();
  if (cVar2 == '\0') goto LAB_1491eb81d;
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 == 0) {
LAB_1491eb86d:
    lVar6 = 0;
  }
  else {
    lVar4 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_1491eb86d;
  }
  uVar3 = FUN_140813180(lVar6,param_2);
  if ((((int)uVar3 < 0) || (*(int *)(lVar6 + 0xc0) <= (int)uVar3)) ||
     (lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0xb8) + (ulonglong)uVar3 * 8), lVar4 == 0)) {
    FUN_14919e8cc(param_2,&local_48);
    puVar5 = local_48;
    if (local_40 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1491f2220(param_1,puVar5);
  }
  else if (*(char *)(lVar4 + 0x10) == '\x04') {
    uVar3 = FUN_140813180(lVar6,param_3);
    if ((((int)uVar3 < 0) || (*(int *)(lVar6 + 0xc0) <= (int)uVar3)) ||
       (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xb8) + (ulonglong)uVar3 * 8), lVar6 == 0)) {
      FUN_14919e8cc(param_3,&local_48);
      puVar5 = local_48;
      if (local_40 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_1491f20d0(param_1,L"Cannot Set Available Space Index, Space \'%s\' not found.",puVar5);
    }
    else {
      bVar1 = *(byte *)(lVar6 + 0x10);
      if ((((ulonglong)bVar1 < 0x21) && ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
         (bVar1 == 0x80)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
      FUN_14919e8cc(param_3,&local_48);
      puVar5 = local_48;
      if (local_40 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_1491f22ec(param_1,L"Cannot Set Available Space Index, \'%s\' is not a Transform.",puVar5);
    }
  }
  else {
    FUN_14919e8cc(param_2,&local_48);
    puVar5 = local_48;
    if (local_40 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1491f2286(param_1,puVar5);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1491eb81d:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1491eba0e FUN_1491eba0e body=412 status=ok
// SIG undefined FUN_1491eba0e(void)

void FUN_1491eba0e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_3e8 [40];
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined1 local_3b0 [444];
  undefined4 local_1f4;
  undefined1 local_1f0 [444];
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_34 = local_34 & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  FUN_1491d73b0(local_1f0);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1f0);
  }
  local_1f4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1f4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1f4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14918b1f6(local_3b0,local_1f0);
  local_3c0 = CONCAT44(uStack_30,local_34);
  local_3b8 = uStack_2c;
  uVar1 = FUN_1491ebbac(param_1,&local_3c0,local_3b0);
  *param_3 = uVar1;
  FUN_14918b3e4(local_1f0);
  if ((local_28 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ebbac FUN_1491ebbac body=498 status=ok
// SIG undefined FUN_1491ebbac(void)

ulonglong FUN_1491ebbac(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined1 local_170;
  undefined1 local_168;
  undefined1 local_160;
  undefined1 local_150 [132];
  undefined1 local_cc [132];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  cVar2 = FUN_14576d4b4();
  if (cVar2 != '\0') {
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (lVar6 == 0) {
LAB_1491ebc10:
      lVar6 = 0;
    }
    else {
      lVar4 = FUN_141095a0a();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) != lVar4 + 0x30)) goto LAB_1491ebc10;
    }
    uVar3 = FUN_140813180(lVar6,param_2);
    if ((((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar6 + 0xc0))) &&
        (lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0xb8) + (ulonglong)uVar3 * 8), lVar4 != 0)) &&
       (*(char *)(lVar4 + 0x10) == '\x04')) {
      lVar1 = lVar4 + 0x210;
      FUN_149191da2(lVar1,param_3);
      if (*(int *)(lVar4 + 0x228) == 0) {
        FUN_1491d74b0(lVar1,0,0,0);
      }
      uVar5 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      local_178._0_1_ = 1;
      FUN_1444a0032(lVar6,local_cc,lVar4,0);
      local_178 = CONCAT71(local_178._1_7_,1);
      FUN_1444a0032(lVar6,local_150,lVar4,1);
      local_178 = lVar4 + 0x2b8U;
      FUN_1491c1c06(local_cc,lVar4 + 0x220,*(undefined1 *)(lVar4 + 0x211),lVar4 + 0x234);
      local_178 = lVar4 + 0x2b8U;
      FUN_1491c1c06(local_150,lVar4 + 0x220,*(undefined1 *)(lVar4 + 0x211),lVar4 + 0x234);
      FUN_140ad4746(lVar6,7,lVar4);
      local_160 = 0;
      local_168 = 0;
      local_170 = 0;
      local_178 = local_178 & 0xffffffffffffff00;
      FUN_1444a57a4(lVar6,lVar4,local_cc,0);
      local_160 = 0;
      local_168 = 0;
      local_170 = 0;
      local_178 = local_178 & 0xffffffffffffff00;
      FUN_1444a57a4(lVar6,lVar4,local_150,1);
      goto LAB_1491ebd67;
    }
  }
  uVar5 = 0;
LAB_1491ebd67:
  FUN_14918b3e4(param_3);
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ebdb2 FUN_1491ebdb2 body=495 status=ok
// SIG undefined FUN_1491ebdb2(void)

void FUN_1491ebdb2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined8 local_40;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_34 = local_34 & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar1 = local_44;
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT44(uStack_30,local_34);
  local_60 = uStack_2c;
  local_78 = iVar1 != 0;
  FUN_1491ebfa2(param_1,&local_58,&local_68,local_40);
  *param_3 = local_58;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ebfa2 FUN_1491ebfa2 body=290 status=ok
// SIG undefined FUN_1491ebfa2(void)

undefined8 *
FUN_1491ebfa2(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_4;
  cVar1 = FUN_14576d4b4();
  if (cVar1 != '\0') {
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) {
LAB_1491ec025:
      lVar5 = 0;
    }
    else {
      lVar3 = FUN_141095a0a();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) != lVar3 + 0x30)) goto LAB_1491ec025;
    }
    uVar2 = FUN_140813180(lVar5,param_3);
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar5 + 0xc0))) &&
        (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar2 * 8), lVar5 != 0)) &&
       (*(char *)(lVar5 + 0x10) == '\x04')) {
      local_48 = param_5;
      FUN_1491f153e(param_1,param_2,lVar5,&local_30);
      goto LAB_1491ebfd8;
    }
    FUN_14919e8cc(param_3,&local_40);
    puVar4 = local_40;
    if (local_38 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_1491f028c(param_1,L"Cannot Rename Control: \'%s\' not found.",puVar4);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1491ebfd8:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491ec0de FUN_1491ec0de body=502 status=ok
// SIG undefined FUN_1491ec0de(void)

void FUN_1491ec0de(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = local_34 & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_40 = local_40 & 0xffffff00;
  uStack_3c = 0;
  uStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar1 = local_44;
  local_48 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = uStack_38;
  local_58 = CONCAT44(uStack_3c,local_40);
  local_68 = CONCAT44(uStack_30,local_34);
  local_60 = uStack_2c;
  uVar2 = FUN_1491d8b3e(param_1,&local_68,&local_58,iVar1 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ec2e2 FUN_1491ec2e2 body=267 status=ok
// SIG undefined FUN_1491ec2e2(void)

void FUN_1491ec2e2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14601dce2(param_1,plVar2,0);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ec404 FUN_1491ec404 body=114 status=ok
// SIG undefined FUN_1491ec404(void)

void FUN_1491ec404(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_14576d4b4();
  if (((cVar1 == '\0') || (*(char *)(param_1 + 0x48) != '\0')) ||
     (((byte)((char)param_2 - 3U) < 2 && (*(char *)(param_1 + 0x49) != '\0')))) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = FUN_141095a0a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_1491ec462;
  }
  lVar3 = 0;
LAB_1491ec462:
  FUN_140ad4746(lVar3,param_2,param_3);
  return;
}



// FUNCTION 1491ec476 FUN_1491ec476 body=85 status=ok
// SIG undefined FUN_1491ec476(void)

void FUN_1491ec476(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_141095a0a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1491ec4ad;
  }
  lVar2 = 0;
LAB_1491ec4ad:
  lVar2 = FUN_140e63f0e(lVar2,1,param_2);
  *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_1 + 0x4c);
  return;
}



// FUNCTION 1491ec4cc FUN_1491ec4cc body=284 status=ok
// SIG undefined FUN_1491ec4cc(void)

undefined8 *
FUN_1491ec4cc(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40._0_4_ = 0xffffffff;
  local_40._4_4_ = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_2c = -1;
  if (&local_40 != param_3) {
    local_40._0_4_ = (undefined4)*param_3;
    local_40._4_4_ = (undefined4)((ulonglong)*param_3 >> 0x20);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar1 = FUN_141095a0a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1491ec539;
  }
  lVar3 = 0;
LAB_1491ec539:
  FUN_1491da7e2(lVar3,&local_58,&local_40,param_4);
  puVar2 = &local_58;
  if ((((int)local_58 == -1) && (puVar2 = &DAT_14cc08210, local_44 != -1)) && (1 < local_48)) {
    FUN_1446f470e(&local_60,local_50,1);
    local_58 = local_60;
    puVar2 = &local_58;
  }
  *param_2 = *puVar2;
  if ((local_44 != -1) && (local_50 != 0)) {
    FUN_1400020a8();
  }
  if ((local_2c != -1) && (CONCAT44(uStack_34,uStack_38) != 0)) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491ec5ea FUN_1491ec5ea body=2359 status=ok
// SIG undefined FUN_1491ec5ea(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1491ec5ea(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  longlong *param_5)

{
  undefined1 uVar1;
  void *pvVar2;
  bool bVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined2 *puVar14;
  undefined2 *puVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int *piVar19;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined1 local_190;
  undefined1 local_179;
  char *local_178;
  longlong local_170;
  int local_168;
  int iStack_164;
  undefined8 uStack_160;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  char local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  int local_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int local_7c;
  int local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int local_64;
  ulonglong local_60;
  int iVar13;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_179 = param_4;
  FUN_14576d4b4();
  lVar16 = *(longlong *)(param_1 + 0x20);
  if (lVar16 == 0) {
LAB_1491ec653:
    lVar16 = 0;
  }
  else {
    lVar7 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_1491ec653;
  }
  *(undefined4 *)(param_2 + 0x40) = 0;
  if (*(int *)(param_2 + 0x44) < 0) {
    FUN_1446f8c06((undefined8 *)(param_2 + 0x38),0);
  }
  puVar14 = *(undefined2 **)(param_2 + 0x38);
  if (puVar14 != (undefined2 *)0x0) {
    *puVar14 = 0;
  }
  local_170 = param_3;
  iVar6 = FUN_1402aff74(*(undefined1 *)(param_2 + 0x10));
  *(undefined4 *)(param_2 + 0x20) =
       *(undefined4 *)(*(longlong *)(lVar16 + 0xf0) + 8 + (longlong)iVar6 * 0x10);
  iVar6 = *(int *)(lVar16 + 0xc0);
  *(uint *)(lVar16 + 0xc0) = iVar6 + 1U;
  if (*(uint *)(lVar16 + 0xc4) < iVar6 + 1U) {
    FUN_145c8ed70(lVar16 + 0xb8,iVar6);
  }
  local_178 = (char *)(param_2 + 0x10);
  *(longlong *)(*(longlong *)(lVar16 + 0xb8) + (longlong)iVar6 * 8) = param_2;
  *(int *)(param_2 + 0x1c) = iVar6;
  iVar6 = FUN_1402aff74(*(undefined1 *)(param_2 + 0x10));
  lVar7 = *(longlong *)(lVar16 + 0xf0);
  lVar8 = (longlong)iVar6 * 0x10;
  iVar6 = *(int *)(lVar7 + 8 + lVar8);
  *(uint *)(lVar7 + 8 + lVar8) = iVar6 + 1U;
  if (*(uint *)(lVar7 + 0xc + lVar8) < iVar6 + 1U) {
    FUN_145c8ed70((longlong *)(lVar7 + lVar8),iVar6);
  }
  piVar19 = &iStack_74;
  *(longlong *)(*(longlong *)(lVar7 + lVar8) + (longlong)iVar6 * 8) = param_2;
  local_168 = (int)local_178;
  iStack_164 = (int)((ulonglong)local_178 >> 0x20);
  uStack_160 = param_2 + 0x1c;
  FUN_140fe526c(lVar16 + 0x118,&local_78,&local_168,0);
  FUN_1491d7c54(lVar16,param_2,1);
  *(int *)(lVar16 + 0xa8) = *(int *)(lVar16 + 0xa8) + 1;
  if (*(int *)(lVar16 + 0x480) != *(int *)(lVar16 + 0x4ac)) {
    FUN_14920d1d6(lVar16 + 0x478);
    FUN_14920d31a(lVar16 + 0x478);
  }
  local_78 = -1;
  iStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  iStack_68 = 0;
  local_64 = -1;
  if ((longlong *)&local_78 != param_5) {
    local_78 = (int)*param_5;
    iStack_74 = (int)((ulonglong)*param_5 >> 0x20);
  }
  FUN_1491da2ac(&local_78,1);
  local_90 = -1;
  iStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  local_7c = -1;
  cVar5 = FUN_1491da20e(&local_78);
  if (cVar5 != '\0') {
    iVar6 = local_90;
    iVar17 = iStack_8c;
    if ((local_90 == -1) && (iVar6 = local_78, iVar17 = iStack_74, local_78 != -1)) {
      iVar6 = -1;
      iVar17 = 0;
    }
    iStack_74 = iVar17;
    local_78 = iVar6;
    FUN_14054da5a(&uStack_70);
  }
  lVar7 = uStack_160;
  if (*param_5 != 0) {
    iVar6 = local_78;
    iVar17 = local_78;
    if (local_78 == -1) {
      if ((local_64 == -1) || (iStack_68 < 2)) {
        piVar19 = (int *)((longlong)&DAT_14cc08210 + 4);
        iVar6 = (int)DAT_14cc08210;
        iVar17 = -1;
      }
      else {
        FUN_1446f470e(&local_168,CONCAT44(uStack_6c,uStack_70),1);
        local_78 = local_168;
        iStack_74 = iStack_164;
        iVar6 = local_78;
        iVar17 = local_78;
      }
    }
    if ((*(int *)(param_2 + 0x14) != iVar6) ||
       (lVar7 = uStack_160, *(int *)(param_2 + 0x18) != *piVar19)) {
      puVar11 = (undefined8 *)&local_78;
      if ((iVar17 == -1) && ((puVar11 = &DAT_14cc08210, local_64 != -1 && (1 < iStack_68)))) {
        FUN_1446f470e(&local_168,CONCAT44(uStack_6c,uStack_70),1);
        local_78 = local_168;
        iStack_74 = iStack_164;
        puVar11 = (undefined8 *)&local_78;
      }
      pcVar4 = local_178;
      local_a0 = *(undefined8 *)local_178;
      local_98 = *(undefined4 *)(local_178 + 8);
      FUN_14918e288(lVar16,&local_a0,DAT_14cc063f8,*puVar11);
      local_ac = *pcVar4;
      puVar11 = (undefined8 *)&local_78;
      if (((local_78 == -1) && (puVar11 = &DAT_14cc08210, local_64 != -1)) && (1 < iStack_68)) {
        FUN_1446f470e(&local_168,CONCAT44(uStack_6c,uStack_70),1);
        local_78 = local_168;
        iStack_74 = iStack_164;
        puVar11 = (undefined8 *)&local_78;
      }
      local_a8 = *puVar11;
      local_b8 = *(undefined8 *)local_178;
      local_b0 = *(undefined4 *)(local_178 + 8);
      FUN_14918f172(lVar16,&local_b8,DAT_14cc06400);
      lVar7 = uStack_160;
    }
  }
  uStack_160._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
  if (*(longlong *)(lVar16 + 0x558) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(lVar16 + 0x558) + 0xc0);
    local_168 = 0;
    iStack_164 = 0;
    uStack_160._0_4_ = *(int *)(lVar8 + 0x1c8);
    lVar7 = CONCAT44(uStack_160._4_4_,(int)uStack_160);
    lVar18 = (longlong)(int)uStack_160;
    pvVar2 = *(void **)(lVar8 + 0x1c0);
    if (lVar18 != 0) {
      FUN_1446dd670(&local_168,(int)uStack_160,0);
      memcpy((void *)CONCAT44(iStack_164,local_168),pvVar2,lVar18 * 2);
      iVar6 = (int)uStack_160;
      if (CONCAT44(iStack_164,local_168) != 0) {
        FUN_1400020a8();
      }
      lVar7 = CONCAT44(uStack_160._4_4_,(int)uStack_160);
      if (1 < iVar6) {
        uVar10 = FUN_1491d6546(param_2);
        local_168 = 0;
        iStack_164 = 0;
        uStack_160._0_4_ = *(int *)(lVar8 + 0x1c8);
        lVar7 = (longlong)(int)uStack_160;
        pvVar2 = *(void **)(lVar8 + 0x1c0);
        if (lVar7 == 0) {
          uStack_160._4_4_ = 0;
          puVar14 = &DAT_149dfb77a;
          iVar6 = 0;
        }
        else {
          FUN_1446dd670(&local_168,(int)uStack_160,0);
          memcpy((void *)CONCAT44(iStack_164,local_168),pvVar2,lVar7 * 2);
          iVar6 = 0;
          if ((int)uStack_160 == 0) {
            puVar14 = &DAT_149dfb77a;
          }
          else {
            puVar14 = (undefined2 *)CONCAT44(iStack_164,local_168);
            iVar6 = (int)uStack_160 + -1;
          }
        }
        cVar5 = FUN_144a791f8(uVar10,puVar14,iVar6,1);
        if (CONCAT44(iStack_164,local_168) != 0) {
          FUN_1400020a8();
        }
        if (cVar5 != '\0') {
          local_168 = 0;
          iStack_164 = 0;
          uStack_160._0_4_ = *(int *)(lVar8 + 0x1c8);
          lVar7 = (longlong)(int)uStack_160;
          pvVar2 = *(void **)(lVar8 + 0x1c0);
          if (lVar7 == 0) {
            uStack_160._4_4_ = 0;
LAB_1491ecbe4:
            puVar14 = &DAT_149dfb77a;
          }
          else {
            FUN_1446dd670(&local_168,(int)uStack_160,0);
            memcpy((void *)CONCAT44(iStack_164,local_168),pvVar2,lVar7 * 2);
            if ((int)uStack_160 == 0) goto LAB_1491ecbe4;
            puVar14 = (undefined2 *)CONCAT44(iStack_164,local_168);
          }
          FUN_1446f470e(&local_c0,puVar14,1);
          local_d0 = *(undefined8 *)local_178;
          local_c8 = *(undefined4 *)(local_178 + 8);
          FUN_14918e288(lVar16,&local_d0,DAT_14cc06410,local_c0);
          if (CONCAT44(iStack_164,local_168) != 0) {
            FUN_1400020a8();
          }
          local_168 = 0;
          iStack_164 = 0;
          uStack_160._0_4_ = *(int *)(lVar8 + 0x1c8);
          lVar7 = (longlong)(int)uStack_160;
          pvVar2 = *(void **)(lVar8 + 0x1c0);
          if (lVar7 == 0) {
            uStack_160._4_4_ = 0;
            iVar6 = 0;
          }
          else {
            FUN_1446dd670(&local_168,(int)uStack_160,0);
            memcpy((void *)CONCAT44(iStack_164,local_168),pvVar2,lVar7 * 2);
            iVar6 = (int)uStack_160;
          }
          iVar17 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar17 = 0;
          }
          iVar13 = 1;
          if (1 < iVar17) {
            iVar13 = iVar17;
          }
          uVar12 = iVar13 - 1;
          bVar3 = 0 < (int)(iVar17 - uVar12);
          if ((int)uVar12 < iVar17) {
            iVar17 = iVar6 - (uVar12 + bVar3);
            if (iVar17 != 0) {
              memmove((void *)(CONCAT44(iStack_164,local_168) + (ulonglong)uVar12 * 2),
                      (void *)(CONCAT44(iStack_164,local_168) + (ulonglong)uVar12 * 2 + 2),
                      (longlong)iVar17 * 2);
              iVar6 = (int)uStack_160;
            }
            iVar6 = iVar6 - (uint)bVar3;
          }
          puVar14 = (undefined2 *)CONCAT44(iStack_164,local_168);
          puVar15 = &DAT_149dfb77a;
          if (iVar6 != 0) {
            puVar15 = puVar14;
          }
          local_168 = 0;
          iStack_164 = 0;
          uStack_160._0_4_ = 0;
          uStack_160._4_4_ = 0;
          FUN_1446f470e(&local_d8,puVar15,1);
          local_e8 = *(undefined8 *)local_178;
          local_e0 = *(undefined4 *)(local_178 + 8);
          FUN_14918e288(lVar16,&local_e8,DAT_14cc06408,local_d8);
          if (puVar14 != (undefined2 *)0x0) {
            FUN_1400020a8(puVar14);
          }
          if (CONCAT44(iStack_164,local_168) != 0) {
            FUN_1400020a8();
          }
          lVar7 = *(longlong *)(lVar16 + 0x570);
          if (lVar7 != 0) {
            cVar5 = *local_178;
            puVar11 = (undefined8 *)&local_78;
            if (((local_78 == -1) && (puVar11 = &DAT_14cc08210, local_64 != -1)) && (1 < iStack_68))
            {
              FUN_1446f470e(&local_168,CONCAT44(uStack_6c,uStack_70),1);
              local_78 = local_168;
              iStack_74 = iStack_164;
              puVar11 = (undefined8 *)&local_78;
            }
            local_168 = CONCAT31(local_168._1_3_,cVar5);
            iStack_164 = (int)*puVar11;
            uStack_160._0_4_ = (int)((ulonglong)*puVar11 >> 0x20);
            FUN_1491e1300(lVar7,&local_168,local_178,lVar16);
          }
        }
        lVar7 = CONCAT44(uStack_160._4_4_,(int)uStack_160);
        if (*(longlong *)(lVar8 + 0x1d8) != 0) {
          FUN_1491b2ae6(*(longlong *)(lVar8 + 0x1d8),&local_168);
          if (1 < (int)uStack_160) {
            FUN_1446f470e(&local_f0,CONCAT44(iStack_164,local_168),1);
            local_100 = *(undefined8 *)local_178;
            local_f8 = *(undefined4 *)(local_178 + 8);
            FUN_14918e288(lVar16,&local_100,DAT_14cc063f0,local_f0);
          }
          lVar7 = CONCAT44(uStack_160._4_4_,(int)uStack_160);
          if (CONCAT44(iStack_164,local_168) != 0) {
            FUN_1400020a8();
            lVar7 = CONCAT44(uStack_160._4_4_,(int)uStack_160);
          }
        }
      }
    }
  }
  uVar1 = *(undefined1 *)(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0x48) = 1;
  uStack_160 = lVar7;
  if (local_170 == 0 || param_2 == 0) {
    *(undefined1 *)(param_1 + 0x48) = uVar1;
    if (param_2 == 0) goto LAB_1491eca91;
  }
  else {
    local_198 = local_179;
    local_190 = 1;
    FUN_1491dc426(param_1,param_2,local_170,0x3f800000);
    *(undefined1 *)(param_1 + 0x48) = uVar1;
  }
  lVar7 = uStack_160;
  if (*local_178 == '\x04') {
    FUN_14449ed30(lVar16,&local_168,param_2,1);
    FUN_14449ed30(lVar16,&local_168,param_2,0);
    puVar9 = *(undefined1 **)(param_2 + 0x4c8);
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &DAT_14cc07bfc;
    }
    *puVar9 = 1;
    puVar9 = *(undefined1 **)(param_2 + 0x4e8);
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &DAT_14cc07bfc;
    }
    *puVar9 = 1;
    lVar7 = uStack_160;
  }
LAB_1491eca91:
  uStack_160 = lVar7;
  FUN_1491ec404(param_1,0,param_2);
  if ((local_7c != -1) && (CONCAT44(uStack_84,uStack_88) != 0)) {
    FUN_1400020a8();
  }
  if ((local_64 != -1) && (CONCAT44(uStack_6c,uStack_70) != 0)) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ecf22 FUN_1491ecf22 body=85 status=ok
// SIG undefined FUN_1491ecf22(void)

void FUN_1491ecf22(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_141095a0a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1491ecf59;
  }
  lVar2 = 0;
LAB_1491ecf59:
  lVar2 = FUN_1491df90c(lVar2,1,param_2);
  *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_1 + 0x4c);
  return;
}



// FUNCTION 1491ecf78 FUN_1491ecf78 body=1532 status=ok
// SIG undefined FUN_1491ecf78(void)

undefined8 *
FUN_1491ecf78(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  void *_Src;
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 **ppuVar9;
  longlong lVar10;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined1 local_d9;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d8 = param_3;
  cVar1 = FUN_14576d4b4();
  if (cVar1 == '\0') {
    *(undefined1 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
    goto LAB_1491ed53c;
  }
  lVar10 = *(longlong *)(param_1 + 0x20);
  if (lVar10 == 0) {
LAB_1491ecfe9:
    lVar10 = 0;
  }
  else {
    lVar4 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_1491ecfe9;
  }
  lVar4 = FUN_1491ed576(param_1,0);
  local_d9 = *(undefined1 *)(lVar10 + 0x4c8);
  *(undefined1 *)(lVar10 + 0x4c8) = 0;
  *(undefined1 *)(lVar4 + 0x10) = 4;
  FUN_1491ec4cc(param_1,&local_c8,&local_d8,4);
  *(undefined1 **)(lVar4 + 0x14) = local_c8;
  FUN_149191da2(lVar4 + 0x210,param_5);
  if (*(int *)(lVar4 + 0x228) == 0) {
    FUN_1491d74b0(lVar4 + 0x210,0,0,0);
  }
  puVar7 = (undefined8 *)(lVar4 + 0x214);
  lVar6 = *(longlong *)(lVar4 + 0x214);
  if (lVar6 == 0) {
    if (*(longlong *)(lVar10 + 0x558) != 0) {
      lVar6 = *(longlong *)(*(longlong *)(lVar10 + 0x558) + 0xc0);
      local_c8 = (undefined1 *)0x0;
      iVar2 = *(int *)(lVar6 + 0x1c8);
      _Src = *(void **)(lVar6 + 0x1c0);
      local_c0 = CONCAT44(local_c0._4_4_,iVar2);
      if ((longlong)iVar2 != 0) {
        FUN_1446dd670(&local_c8,iVar2,0);
        ppuVar9 = &local_c8;
        memcpy(local_c8,_Src,(longlong)iVar2 * 2);
        iVar2 = (int)local_c0;
        if (local_c8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (iVar2 < 2) goto LAB_1491ed2a1;
        uStack_50 = 0;
        iStack_4c = -1;
        uStack_58 = 0;
        uStack_54 = 0;
        local_60._0_4_ = (undefined4)local_d8;
        local_60._4_4_ = (undefined4)((ulonglong)local_d8 >> 0x20);
        FUN_1491dabdc(lVar10,ppuVar9,param_4);
        puVar5 = (undefined1 *)((ulonglong)local_c8 & 0xffffffff);
        if ((int)local_c8 == -1) {
          ppuVar9 = (undefined1 **)&DAT_14cc08210;
          puVar5 = &DAT_ffffffff;
          if ((local_b8._4_4_ != -1) && (1 < (int)local_b8)) {
            FUN_1446f470e(&local_d0,local_c0,1);
            local_c8 = local_d0;
            ppuVar9 = &local_c8;
            puVar5 = local_d0;
          }
        }
        iVar2 = (int)puVar5;
        *puVar7 = *ppuVar9;
        if (local_b8._4_4_ != -1) {
          if (local_c0 != 0) {
            FUN_1400020a8();
            iVar2 = (int)local_c8;
          }
          local_c0 = 0;
          local_b8 = 0xffffffff00000000;
        }
        goto LAB_1491ed276;
      }
    }
  }
  else {
    local_60._0_4_ = 0xffffffff;
    local_60._4_4_ = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    iStack_4c = -1;
    if (puVar7 != &local_60) {
      local_60._0_4_ = (undefined4)lVar6;
      local_60._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
    }
    FUN_1491dabdc(lVar10,&local_c8,param_4,&local_60);
    puVar5 = (undefined1 *)((ulonglong)local_c8 & 0xffffffff);
    if ((int)local_c8 == -1) {
      iVar2 = -1;
      ppuVar9 = (undefined1 **)&DAT_14cc08210;
      if ((local_b8._4_4_ != -1) && (1 < (int)local_b8)) {
        FUN_1446f470e(&local_d0,local_c0,1);
        local_c8 = local_d0;
        puVar5 = local_d0;
        goto LAB_1491ed23a;
      }
    }
    else {
LAB_1491ed23a:
      iVar2 = (int)puVar5;
      ppuVar9 = &local_c8;
    }
    *puVar7 = *ppuVar9;
    if (local_b8._4_4_ != -1) {
      if (local_c0 != 0) {
        FUN_1400020a8();
        iVar2 = (int)local_c8;
      }
      local_c0 = 0;
      local_b8 = 0xffffffff00000000;
    }
LAB_1491ed276:
    if (iVar2 != -1) {
      local_c8 = &DAT_ffffffff;
    }
    if ((iStack_4c != -1) && (CONCAT44(uStack_54,uStack_58) != 0)) {
      FUN_1400020a8();
    }
  }
LAB_1491ed2a1:
  uVar3 = FUN_140813180(lVar10,param_4);
  if (((int)uVar3 < 0) || (*(int *)(lVar10 + 0xc0) <= (int)uVar3)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(longlong *)(lVar10 + 0xb8) + (ulonglong)uVar3 * 8);
  }
  local_108 = &local_d8;
  FUN_1491ec5ea(param_1,lVar4,uVar8,0);
  if (*(undefined8 **)(lVar4 + 0x428) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x428);
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *param_7;
      param_7 = param_7 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  puVar5 = *(undefined1 **)(lVar4 + 0x478);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_14cc07bfc;
  }
  *puVar5 = 0;
  if (*(undefined8 **)(lVar4 + 0x4a8) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x4a8);
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *param_8;
      param_8 = param_8 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  puVar5 = *(undefined1 **)(lVar4 + 0x4f8);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_14cc07bfc;
  }
  *puVar5 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = (undefined8 *)((ulonglong)local_108 & 0xffffffffffffff00);
  FUN_1444a57a4(lVar10,lVar4,param_6,0);
  FUN_1401571e4(lVar10,&local_c8,lVar4,0);
  FUN_1491ed5c6(lVar10,lVar4,&local_c8);
  puVar5 = *(undefined1 **)(lVar4 + 0x468);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_14cc07bfc;
  }
  *puVar5 = 1;
  puVar5 = *(undefined1 **)(lVar4 + 0xb0);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_14cc07bfc;
  }
  *puVar5 = 1;
  puVar5 = *(undefined1 **)(lVar4 + 0x4e8);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_14cc07bfc;
  }
  *puVar5 = 1;
  FUN_144b3caae(lVar4 + 0x400,lVar4 + 0x420);
  if (*(undefined1 **)(lVar4 + 0x458) != (undefined1 *)0x0) {
    puVar5 = &DAT_14bb83710;
    if (*(undefined1 **)(lVar4 + 0x478) != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(lVar4 + 0x478);
    }
    **(undefined1 **)(lVar4 + 0x458) = *puVar5;
  }
  if (*(undefined1 **)(lVar4 + 0x448) != (undefined1 *)0x0) {
    puVar5 = &DAT_14bb83710;
    if (*(undefined1 **)(lVar4 + 0x468) != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(lVar4 + 0x468);
    }
    **(undefined1 **)(lVar4 + 0x448) = *puVar5;
  }
  FUN_144b3caae(lVar4 + 0x48,lVar4 + 0x68);
  if (*(undefined1 **)(lVar4 + 0xa0) != (undefined1 *)0x0) {
    puVar5 = &DAT_14bb83710;
    if (*(undefined1 **)(lVar4 + 0xc0) != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(lVar4 + 0xc0);
    }
    **(undefined1 **)(lVar4 + 0xa0) = *puVar5;
  }
  if (*(undefined1 **)(lVar4 + 0x90) != (undefined1 *)0x0) {
    puVar5 = &DAT_14bb83710;
    if (*(undefined1 **)(lVar4 + 0xb0) != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(lVar4 + 0xb0);
    }
    **(undefined1 **)(lVar4 + 0x90) = *puVar5;
  }
  *(undefined8 *)(lVar4 + 0x3e0) = *(undefined8 *)(lVar4 + 0x3f8);
  *(undefined4 *)(lVar4 + 0x3d0) = *(undefined4 *)(lVar4 + 1000);
  *(undefined4 *)(lVar4 + 0x3d4) = *(undefined4 *)(lVar4 + 0x3ec);
  *(undefined4 *)(lVar4 + 0x3d8) = *(undefined4 *)(lVar4 + 0x3f0);
  *(undefined4 *)(lVar4 + 0x3dc) = *(undefined4 *)(lVar4 + 0x3f4);
  FUN_144b3caae(lVar4 + 0x480,lVar4 + 0x4a0);
  if (*(undefined1 **)(lVar4 + 0x4d8) != (undefined1 *)0x0) {
    puVar5 = &DAT_14bb83710;
    if (*(undefined1 **)(lVar4 + 0x4f8) != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(lVar4 + 0x4f8);
    }
    **(undefined1 **)(lVar4 + 0x4d8) = *puVar5;
  }
  if (*(undefined1 **)(lVar4 + 0x4c8) != (undefined1 *)0x0) {
    puVar5 = &DAT_14bb83710;
    if (*(undefined1 **)(lVar4 + 0x4e8) != (undefined1 *)0x0) {
      puVar5 = *(undefined1 **)(lVar4 + 0x4e8);
    }
    **(undefined1 **)(lVar4 + 0x4c8) = *puVar5;
  }
  *(undefined1 *)(lVar10 + 0x4c8) = local_d9;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar4 + 0x18);
  *param_2 = *(undefined8 *)(lVar4 + 0x10);
LAB_1491ed53c:
  FUN_14918b3e4(param_5);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ed576 FUN_1491ed576 body=79 status=ok
// SIG undefined FUN_1491ed576(void)

void FUN_1491ed576(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_141095a0a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1491ed5ad;
  }
  lVar2 = 0;
LAB_1491ed5ad:
  lVar2 = FUN_1491dfa26(lVar2,param_2);
  *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_1 + 0x4c);
  return;
}



// FUNCTION 1491ed5c6 FUN_1491ed5c6 body=381 status=ok
// SIG undefined FUN_1491ed5c6(void)

void FUN_1491ed5c6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = param_3[4];
  uStack_90 = param_3[5];
  local_88 = param_3[6];
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_38 = param_3[2];
  uStack_30 = *(undefined4 *)(param_3 + 3);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0x1c);
  FUN_1448052ee(&local_48,&local_80);
  local_68 = param_3[8];
  uStack_60 = param_3[9];
  local_58 = param_3[10];
  if (param_2 != 0) {
    cVar1 = *(char *)(param_2 + 0x211);
    if (cVar1 == '\t') {
      puVar2 = &local_b0;
      local_b0 = local_70;
      local_a8 = local_80;
      local_a0 = local_78;
      FUN_149203e52(param_1,&local_48,param_2,puVar2);
    }
    else {
      if (cVar1 == '\b') {
        FUN_144a7484c(&local_80,&local_48);
        local_48 = local_70;
        uStack_40 = local_80;
        local_38 = local_78;
      }
      else {
        if (cVar1 != '\a') goto LAB_1491ed659;
        local_48 = local_70;
        uStack_40 = local_80;
        local_38 = local_78;
      }
      puVar2 = &local_48;
    }
    FUN_149203d86(param_1,param_2,puVar2,1);
  }
LAB_1491ed659:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ed744 FUN_1491ed744 body=445 status=ok
// SIG undefined FUN_1491ed744(void)

undefined1 *
FUN_1491ed744(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_3a8 [32];
  undefined1 *local_388;
  undefined1 *local_380;
  undefined8 *local_378;
  undefined8 *local_370;
  undefined1 local_368;
  undefined1 local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined1 local_348 [444];
  undefined1 local_18c [132];
  undefined8 local_108 [12];
  undefined8 local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  cVar1 = FUN_14576d4b4();
  if (cVar1 != '\0') {
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) {
LAB_1491ed7b4:
      lVar5 = 0;
    }
    else {
      lVar3 = FUN_141095a0a();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) != lVar3 + 0x30)) goto LAB_1491ed7b4;
    }
    uVar2 = FUN_140813180(lVar5);
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar5 + 0xc0))) &&
        (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xb8) + (ulonglong)uVar2 * 8), lVar5 != 0)) &&
       (*(char *)(lVar5 + 0x10) == '\x04')) {
      *param_5 = 1;
      param_5[0x198] = 1;
      puVar4 = &DAT_14c846480;
      puVar6 = local_a8;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar4 = &DAT_14c846480;
      puVar6 = local_108;
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      memset(local_18c,0,0x84);
      FUN_14919dde6(local_18c,&DAT_14c846480,param_5[1],param_5[0xc]);
      FUN_14918b1f6(local_348,param_5);
      local_358 = *(undefined8 *)(lVar5 + 0x10);
      local_350 = *(undefined4 *)(lVar5 + 0x18);
      local_360 = 0;
      local_368 = 0;
      local_370 = local_a8;
      local_378 = local_108;
      local_388 = local_348;
      local_380 = local_18c;
      FUN_1491ecf78(param_1,param_2,param_3);
      goto LAB_1491ed8c9;
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
LAB_1491ed8c9:
  FUN_14918b3e4(param_5);
  if ((local_48 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ed902 FUN_1491ed902 body=85 status=ok
// SIG undefined FUN_1491ed902(void)

void FUN_1491ed902(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_141095a0a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1491ed939;
  }
  lVar2 = 0;
LAB_1491ed939:
  lVar2 = FUN_1466ce38c(lVar2,1,param_2);
  *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_1 + 0x4c);
  return;
}



// FUNCTION 1491ed958 FUN_1491ed958 body=446 status=ok
// SIG undefined FUN_1491ed958(void)

void FUN_1491ed958(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  code *pcVar2;
  void *_Src;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  ulonglong uStack_48;
  undefined2 *local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x50);
    if (pcVar2 == (code *)0x0) {
      local_40 = (undefined2 *)0x0;
      uVar1 = *(uint *)(param_2 + 1);
      _Src = (void *)*param_2;
      uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        uStack_38 = (ulonglong)uVar1;
      }
      else {
        FUN_1446dd670(&local_40,uVar1,0);
        memcpy(local_40,_Src,(longlong)(int)uVar1 * 2);
      }
      lVar5 = *(longlong *)(param_1 + 0x20);
      if (lVar5 != 0) {
        lVar4 = FUN_141095a0a();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          lVar5 = FUN_144a79778(lVar5);
          if (lVar5 != 0) {
            puVar8 = &DAT_149dfb77a;
            if (*(int *)(param_2 + 1) != 0) {
              puVar8 = (undefined2 *)*param_2;
            }
            FUN_14010318a(lVar5,&local_60,0);
            puVar6 = &DAT_149dfb77a;
            if (local_58 != 0) {
              puVar6 = local_60;
            }
            FUN_140002266(&local_50,L"%s : %s",puVar6,puVar8);
            if (local_40 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            local_40 = local_50;
            uStack_38 = uStack_48;
            local_50 = (undefined2 *)0x0;
            uStack_48 = 0;
            if (local_60 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
      uVar3 = FUN_14626b866();
      puVar8 = &DAT_149dfb77a;
      if ((int)uStack_38 != 0) {
        puVar8 = local_40;
      }
      FUN_14586ad08(uVar3,2,puVar8);
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      local_40 = (undefined2 *)CONCAT44(local_40._4_4_,1);
      plVar7 = (longlong *)(param_1 + 0x70);
      if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
        plVar7 = *(longlong **)(param_1 + 0x60);
      }
      uVar3 = (**(code **)(*plVar7 + 8))(plVar7);
      (*pcVar2)(uVar3,&local_40,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491edb18 FUN_1491edb18 body=100 status=ok
// SIG undefined FUN_1491edb18(void)

void FUN_1491edb18(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"Physics Solver with guid \'%s\' cannot be found.",param_2);
  FUN_1491ed958(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491edb7e FUN_1491edb7e body=85 status=ok
// SIG undefined FUN_1491edb7e(void)

void FUN_1491edb7e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_141095a0a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1491edbb5;
  }
  lVar2 = 0;
LAB_1491edbb5:
  lVar2 = FUN_1491dfa72(lVar2,1,param_2);
  *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_1 + 0x4c);
  return;
}



// FUNCTION 1491edbd4 FUN_1491edbd4 body=85 status=ok
// SIG undefined FUN_1491edbd4(void)

void FUN_1491edbd4(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_141095a0a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1491edc0b;
  }
  lVar2 = 0;
LAB_1491edc0b:
  lVar2 = FUN_1491dfb38(lVar2,1,param_2);
  *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_1 + 0x4c);
  return;
}



// FUNCTION 1491edc2a FUN_1491edc2a body=107 status=ok
// SIG undefined FUN_1491edc2a(void)

void FUN_1491edc2a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_20,L"Cannot add connector \'%s\' - there already is a primary connector.",
                param_2);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1491ed958(param_1,local_20);
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491edc96 FUN_1491edc96 body=107 status=ok
// SIG undefined FUN_1491edc96(void)

void FUN_1491edc96(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_20,L"Cannot add connector \'%s\' - primary connectors cannot be optional.",
                param_2);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1491ed958(param_1,local_20);
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491edd02 FUN_1491edd02 body=85 status=ok
// SIG undefined FUN_1491edd02(void)

void FUN_1491edd02(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_141095a0a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1491edd39;
  }
  lVar2 = 0;
LAB_1491edd39:
  lVar2 = FUN_1491dfbf8(lVar2,1,param_2);
  *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_1 + 0x4c);
  return;
}



// FUNCTION 1491edd58 FUN_1491edd58 body=85 status=ok
// SIG undefined FUN_1491edd58(void)

void FUN_1491edd58(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_141095a0a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_1491edd8f;
  }
  lVar2 = 0;
LAB_1491edd8f:
  lVar2 = FUN_1491dfccc(lVar2,1,param_2);
  *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_1 + 0x4c);
  return;
}



// FUNCTION 1491eddae FUN_1491eddae body=237 status=ok
// SIG undefined FUN_1491eddae(void)

undefined8 *
FUN_1491eddae(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_50;
  code *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 == 0) goto LAB_1491eddd7;
  cVar1 = FUN_14576d4b4();
  if (cVar1 == '\0') goto LAB_1491eddd7;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
LAB_1491ede41:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_141095a0a();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1491ede41;
  }
  FUN_140ad4746(lVar3,0xc,0);
  local_40 = &local_70;
  local_50 = param_5;
  local_48 = FUN_1444ab60e;
  local_70 = param_1;
  local_68 = lVar3;
  local_60 = param_4;
  local_58 = param_2;
  (**(code **)(*(longlong *)(param_3 + 0x28) + 0x10))(param_3 + 0x28);
  FUN_140ad4746(lVar3,0xd,0);
LAB_1491eddd7:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ede9c FUN_1491ede9c body=123 status=ok
// SIG undefined FUN_1491ede9c(void)

void FUN_1491ede9c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14920cd2c(param_1);
    }
    memset((void *)((longlong)iVar1 * 0xc + *param_1),0,(longlong)(param_2 - iVar1) * 0xc);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14920fa76(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1491edf18 FUN_1491edf18 body=4953 status=ok
// SIG undefined FUN_1491edf18(void)

longlong *
FUN_1491edf18(longlong param_1,longlong *param_2,longlong *param_3,char param_4,char param_5)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  byte *pbVar15;
  longlong lVar16;
  byte *pbVar17;
  void *_Dst;
  ulonglong uVar18;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined ***local_2b0;
  byte **local_2a8;
  undefined1 local_2a0;
  char local_289;
  longlong local_288;
  longlong *local_280;
  longlong *local_278;
  byte *local_270;
  byte *local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined4 local_238;
  byte local_234;
  undefined2 local_233;
  undefined1 local_231;
  longlong local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  byte *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  byte *local_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined **local_140 [2];
  int local_130;
  byte *local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_d8 = 0;
  uStack_d0 = 0;
  cVar4 = FUN_14576d4b4();
  if (cVar4 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_1491edf69;
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = (byte *)0x0;
  uStack_120 = 0;
  FUN_144a81de8(local_140);
  local_140[0] = &PTR_FUN_14bb8a740;
  local_130 = 0;
  uVar6 = FUN_1466c9134();
  lVar7 = FUN_1466c9134();
  local_b8 = *(longlong *)(lVar7 + 0x18);
  FUN_1400021e4(&local_b8,&local_1c8);
  if ((int)param_3[1] == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  else {
    puVar11 = (undefined2 *)*param_3;
  }
  local_2b0 = local_140;
  local_2a0 = 1;
  local_2b8 = (byte **)((ulonglong)local_2b8._4_4_ << 0x20);
  local_2a8 = &local_1c8;
  FUN_14115911a(uVar6,puVar11,&local_128,0);
  if (local_1c8 != (byte *)0x0) {
    FUN_1400020a8();
  }
  if (0 < local_130) goto LAB_1491ee088;
  iVar5 = (int)uStack_120;
  local_289 = param_4;
  local_288 = param_1;
  if ((longlong)(int)uStack_120 == 0) {
    if (0 < (int)uStack_100) {
      iVar5 = (int)uStack_110;
      local_280 = param_3;
      local_278 = param_2;
      if (0 < (int)uStack_110) {
        lVar13 = 0;
        lVar7 = local_118;
        do {
          if (*(char *)(lVar7 + lVar13) == '\0') {
            uVar14 = ~(uint)lVar13;
            do {
              lVar7 = local_108;
              if (*(longlong *)(local_108 + lVar13 * 0x10) != 0) {
                FUN_1400020a8();
              }
              if ((int)uStack_100 + uVar14 != 0) {
                _Dst = (void *)(lVar7 + lVar13 * 0x10);
                memmove(_Dst,(void *)((longlong)_Dst + 0x10),
                        (longlong)(int)((int)uStack_100 + uVar14) << 4);
              }
              uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_100 + -1);
              FUN_140b12644(&local_108);
              if ((int)uStack_110 + uVar14 != 0) {
                memmove((void *)(local_118 + lVar13),(void *)(local_118 + lVar13 + 1),
                        (longlong)(int)((int)uStack_110 + uVar14));
              }
              uStack_110 = CONCAT44(uStack_110._4_4_,(int)uStack_110 + -1);
              FUN_14920fbb8(&local_118);
              if ((int)uStack_f0 + uVar14 != 0) {
                memmove((void *)(local_f8 + lVar13 * 0x60),(void *)(local_f8 + lVar13 * 0x60 + 0x60)
                        ,(longlong)(int)((int)uStack_f0 + uVar14) * 0x60);
              }
              uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)uStack_f0 + -1);
              FUN_1469124fc(&local_f8);
              if ((int)uStack_e0 + uVar14 != 0) {
                memmove((void *)(local_e8 + lVar13 * 0x60),(void *)(local_e8 + lVar13 * 0x60 + 0x60)
                        ,(longlong)(int)((int)uStack_e0 + uVar14) * 0x60);
              }
              uStack_e0 = CONCAT44(uStack_e0._4_4_,(int)uStack_e0 + -1);
              FUN_1469124fc(&local_e8);
              lVar12 = (longlong)(int)uStack_110;
              iVar5 = (int)uStack_110;
              if (lVar12 <= lVar13) goto LAB_1491ee546;
              lVar7 = local_118;
            } while (*(char *)(local_118 + lVar13) == '\0');
          }
          else {
            lVar12 = (longlong)iVar5;
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < lVar12);
      }
LAB_1491ee546:
      lVar7 = local_288;
      if (iVar5 < 0) {
        FUN_1491ef272(local_288);
      }
      local_198 = 0;
      uStack_190 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1c8 = (byte *)0x0;
      uStack_1c0 = (byte *)0x0;
      FUN_1491e14f2(&local_1c8,&local_b8,&local_128);
      param_2 = local_278;
      param_3 = local_280;
      iVar5 = (int)uStack_b0;
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (0 < iVar5) {
        FUN_1491ef2dc(lVar7,param_2,&local_1c8);
        FUN_1491f007e(&local_1c8);
        goto LAB_1491ee0bb;
      }
      FUN_1491f007e(&local_1c8);
    }
LAB_1491ee088:
    *param_2 = local_d8;
    local_d8 = 0;
    *(int *)(param_2 + 1) = (int)uStack_d0;
    *(uint *)((longlong)param_2 + 0xc) = uStack_d0._4_4_;
    uStack_d0 = 0;
  }
  else {
    local_1c8 = (byte *)0x0;
    uStack_1c0 = (byte *)0x0;
    lVar7 = (longlong)(int)uStack_120 * 0x60;
    pbVar15 = local_128;
    local_278 = param_2;
    do {
      pbVar17 = uStack_1c0;
      if (*pbVar15 != 0) {
        lVar13 = (longlong)(int)uStack_1c0;
        uVar14 = (int)uStack_1c0 + 1;
        uStack_1c0 = (byte *)CONCAT44(uStack_1c0._4_4_,uVar14);
        if (uStack_1c0._4_4_ < uVar14) {
          FUN_14920fb24(&local_1c8,(ulonglong)pbVar17 & 0xffffffff);
        }
        FUN_1491bffa4(local_1c8 + lVar13 * 0x60,pbVar15);
        param_1 = local_288;
      }
      pbVar15 = pbVar15 + 0x60;
      lVar7 = lVar7 + -0x60;
    } while (lVar7 != 0);
    FUN_1491f00e0(&local_128,&local_1c8);
    FUN_1491bfdd0(local_1c8,(ulonglong)uStack_1c0 & 0xffffffff);
    if (local_1c8 != (byte *)0x0) {
      FUN_1400020a8();
    }
    if ((int)uStack_120 < iVar5) {
      FUN_1491ef272(param_1);
    }
    lVar7 = *(longlong *)(param_1 + 0x20);
    if (lVar7 == 0) {
LAB_1491ee3a9:
      lVar7 = 0;
    }
    else {
      lVar13 = FUN_141095a0a();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar13 + 0x38) * 8) != lVar13 + 0x30)) goto LAB_1491ee3a9;
    }
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    iVar5 = *(int *)(lVar7 + 0xc0);
    local_280 = param_3;
    if ((longlong)iVar5 != 0) {
      lVar13 = *(longlong *)(lVar7 + 0xb8);
      lVar12 = 0;
      do {
        local_1c8 = (byte *)(*(longlong *)(lVar13 + lVar12) + 0x10);
        uStack_1c0 = local_1c8;
        FUN_1491ca586(&local_b8,&local_158,&local_1c8,0);
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar5 * 8 != lVar12);
    }
    local_158 = 0;
    uStack_150 = 0;
    FUN_140ad4746(lVar7,0xc);
    if ((longlong)(int)uStack_120 != 0) {
      local_270 = local_128 + (longlong)(int)uStack_120 * 0x60;
      pbVar15 = local_128;
      cVar4 = local_289;
      do {
        local_130 = 0;
        local_160 = (byte *)0x0;
        bVar2 = *pbVar15;
        if (0xf < bVar2) {
          if (bVar2 < 0x40) {
            if (bVar2 == 0x10) {
              pbVar17 = (byte *)FUN_1491edb7e(local_288,1);
              local_160 = pbVar17;
              uVar6 = FUN_1466c8c4e();
              lVar13 = FUN_1466c8c4e();
            }
            else {
              if (bVar2 != 0x20) goto switchD_1491ee616_caseD_3;
              pbVar17 = (byte *)FUN_1491edbd4(local_288,1);
              local_160 = pbVar17;
              uVar6 = FUN_1466c8ce4();
              lVar13 = FUN_1466c8ce4();
            }
          }
          else if (bVar2 == 0x40) {
            pbVar17 = (byte *)FUN_1491edd02(local_288,1);
            local_160 = pbVar17;
            uVar6 = FUN_1466c8eda();
            lVar13 = FUN_1466c8eda();
          }
          else {
            if (bVar2 != 0x80) goto switchD_1491ee616_caseD_3;
            pbVar17 = (byte *)FUN_1491edd58(local_288,1);
            local_160 = pbVar17;
            uVar6 = FUN_1466c9008();
            lVar13 = FUN_1466c9008();
          }
          goto LAB_1491ee7c1;
        }
        switch(bVar2) {
        case 1:
          pbVar17 = (byte *)FUN_1491ec476(local_288,1);
          local_160 = pbVar17;
          uVar6 = FUN_140bc9494();
          lVar13 = FUN_140bc9494();
          local_c0 = *(undefined8 *)(lVar13 + 0x18);
          FUN_1400021e4(&local_c0,&local_1c8);
          puVar11 = &DAT_149dfb77a;
          if (*(int *)(pbVar15 + 0x18) != 0) {
            puVar11 = *(undefined2 **)(pbVar15 + 0x10);
          }
          local_2a8 = &local_1c8;
          local_2b0 = local_140;
          local_2a0 = 1;
          local_2b8 = (byte **)((ulonglong)local_2b8 & 0xffffffff00000000);
          FUN_14115911a(uVar6,puVar11,pbVar17,0);
          if (local_1c8 != (byte *)0x0) {
            FUN_1400020a8();
          }
          if ((local_160 == (byte *)0x0) || (pbVar17 = local_160, local_160[0x10] != 1)) {
            pbVar17 = (byte *)0x0;
          }
          pbVar17[0x110] = 1;
          goto switchD_1491ee616_caseD_3;
        case 2:
          pbVar17 = (byte *)FUN_1491ecf22(local_288,1);
          local_160 = pbVar17;
          uVar6 = FUN_1466c8798();
          lVar13 = FUN_1466c8798();
          break;
        default:
          goto switchD_1491ee616_caseD_3;
        case 4:
          pbVar17 = (byte *)FUN_1491ed576(local_288,1);
          local_160 = pbVar17;
          uVar6 = FUN_1466c8990();
          lVar13 = FUN_1466c8990();
          break;
        case 8:
          pbVar17 = (byte *)FUN_1491ed902(local_288,1);
          local_160 = pbVar17;
          uVar6 = FUN_14578225e();
          lVar13 = FUN_14578225e();
        }
LAB_1491ee7c1:
        local_c0 = *(undefined8 *)(lVar13 + 0x18);
        FUN_1400021e4(&local_c0,&local_1c8);
        puVar11 = &DAT_149dfb77a;
        if (*(int *)(pbVar15 + 0x18) != 0) {
          puVar11 = *(undefined2 **)(pbVar15 + 0x10);
        }
        local_2a8 = &local_1c8;
        local_2b0 = local_140;
        local_2a0 = 1;
        local_2b8 = (byte **)((ulonglong)local_2b8 & 0xffffffff00000000);
        FUN_14115911a(uVar6,puVar11,pbVar17,0);
        if (local_1c8 != (byte *)0x0) {
          FUN_1400020a8();
        }
switchD_1491ee616_caseD_3:
        *(undefined4 *)(local_160 + 0x18) = *(undefined4 *)(pbVar15 + 8);
        *(undefined8 *)(local_160 + 0x10) = *(undefined8 *)pbVar15;
        if ((((cVar4 == '\0') ||
             (uVar14 = FUN_140813180(lVar7,local_160 + 0x10), pbVar17 = local_160, (int)uVar14 < 0))
            || (*(int *)(lVar7 + 0xc0) <= (int)uVar14)) ||
           (plVar3 = *(longlong **)(*(longlong *)(lVar7 + 0xb8) + (ulonglong)uVar14 * 8),
           plVar3 == (longlong *)0x0)) {
          pbVar17 = local_160;
          lVar13 = local_288;
          local_1c8 = *(byte **)(local_160 + 0x14);
          FUN_1491ec4cc(local_288,&local_c0,&local_1c8,local_160[0x10]);
          *(undefined8 *)(pbVar17 + 0x14) = local_c0;
          local_2b8 = &local_1c8;
          FUN_1491ec5ea(lVar13,pbVar17,0,1);
          pbVar17 = local_160;
          uVar6 = *(undefined8 *)(pbVar15 + 4);
          uVar14 = (uint)((ulonglong)uVar6 >> 0x10);
          uVar10 = (uint)uVar6 & 0xffff;
          puVar9 = (undefined8 *)
                   FUN_14920fc30(&local_b8,
                                 (uint)*pbVar15 +
                                 (((uint)uVar6 << 0x10 | uVar10) + (int)((ulonglong)uVar6 >> 0x20) +
                                  (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar10 >> 4)) * 10);
          *puVar9 = *(undefined8 *)(pbVar17 + 0x10);
          *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(pbVar17 + 0x18);
        }
        else {
          local_2b8 = (byte **)((ulonglong)local_2b8 & 0xffffffffffffff00);
          (**(code **)(*plVar3 + 0x38))(plVar3,local_160,1);
          if ((char)plVar3[2] == '\x04') {
            FUN_14449ed30(lVar7,&local_1c8,plVar3);
            FUN_14449ed30(lVar7,&local_1c8,plVar3);
            puVar8 = (undefined1 *)plVar3[0x99];
            if (puVar8 == (undefined1 *)0x0) {
              puVar8 = &DAT_14cc07bfc;
            }
            *puVar8 = 1;
            puVar8 = (undefined1 *)plVar3[0x9d];
            if (puVar8 == (undefined1 *)0x0) {
              puVar8 = &DAT_14cc07bfc;
            }
            *puVar8 = 1;
          }
          pbVar1 = (byte *)(plVar3 + 2);
          local_1d8 = *(undefined8 *)(pbVar17 + 0x10);
          local_1d0 = *(undefined4 *)(pbVar17 + 0x18);
          FUN_1444a063c(lVar7,&local_1c8,&local_1d8);
          if ((int)uStack_1c0 == *(int *)(pbVar15 + 0x28)) {
            if ((int)uStack_1c0 != 0) {
              pbVar17 = local_1c8;
              do {
                lVar13 = 0;
                while ((*(longlong *)(lVar13 + *(longlong *)(pbVar15 + 0x20) + 4) !=
                        *(longlong *)(pbVar17 + 4) ||
                       (*(byte *)(lVar13 + *(longlong *)(pbVar15 + 0x20)) != *pbVar17))) {
                  lVar13 = lVar13 + 0xc;
                  if ((longlong)(int)uStack_1c0 * 0xc == lVar13) goto LAB_1491ee9a4;
                }
                pbVar17 = pbVar17 + 0xc;
              } while (pbVar17 != local_1c8 + (longlong)(int)uStack_1c0 * 0xc);
            }
          }
          else {
LAB_1491ee9a4:
            local_1e0 = (undefined4)plVar3[3];
            local_1e8 = *(undefined8 *)pbVar1;
            FUN_1491e9ce6(local_288,&local_1e8);
            iVar5 = *(int *)(pbVar15 + 0x28);
            if ((longlong)iVar5 != 0) {
              lVar13 = *(longlong *)(pbVar15 + 0x20);
              lVar12 = 0;
              do {
                local_1f0 = *(undefined4 *)(lVar13 + 8 + lVar12);
                local_1f8 = *(undefined8 *)(lVar13 + lVar12);
                local_208 = *(undefined8 *)pbVar1;
                local_200 = (undefined4)plVar3[3];
                local_2b8 = (byte **)CONCAT71(local_2b8._1_7_,1);
                FUN_1491e47fa(local_288,&local_208,&local_1f8,0);
                lVar12 = lVar12 + 0xc;
              } while ((longlong)iVar5 * 0xc != lVar12);
            }
          }
          local_268 = pbVar1;
          if (0 < *(int *)(pbVar15 + 0x38)) {
            lVar13 = 0;
            uVar18 = 0;
            do {
              local_210 = *(undefined4 *)(*(longlong *)(pbVar15 + 0x30) + 8 + lVar13);
              local_218 = *(undefined8 *)(*(longlong *)(pbVar15 + 0x30) + lVar13);
              local_2b0._0_1_ = 1;
              local_2b8._0_1_ = 1;
              FUN_1444a0a9e(lVar7,plVar3,uVar18 & 0xffffffff,&local_218);
              local_228 = *(undefined8 *)(*(longlong *)(pbVar15 + 0x30) + lVar13);
              local_220 = *(undefined4 *)(*(longlong *)(pbVar15 + 0x30) + 8 + lVar13);
              local_2b0 = (undefined ***)CONCAT71(local_2b0._1_7_,1);
              local_2b8 = (byte **)((ulonglong)local_2b8._1_7_ << 8);
              FUN_1444a0a9e(lVar7,plVar3);
              uVar18 = uVar18 + 1;
              lVar13 = lVar13 + 0xc;
            } while ((longlong)uVar18 < (longlong)*(int *)(pbVar15 + 0x38));
          }
          uVar18 = uStack_d0;
          lVar13 = (longlong)(int)uStack_d0;
          uVar14 = (int)uStack_d0 + 1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar14);
          if (uStack_d0._4_4_ < uVar14) {
            FUN_149192788(&local_d8,uVar18 & 0xffffffff);
          }
          uVar18 = uStack_150;
          pbVar17 = local_268;
          *(undefined4 *)(local_d8 + 8 + lVar13 * 0xc) = *(undefined4 *)(local_268 + 8);
          *(undefined8 *)(local_d8 + lVar13 * 0xc) = *(undefined8 *)local_268;
          lVar13 = (longlong)(int)uStack_150;
          uVar14 = (int)uStack_150 + 1;
          uStack_150 = CONCAT44(uStack_150._4_4_,uVar14);
          if (uStack_150._4_4_ < uVar14) {
            FUN_149192788(&local_158,uVar18 & 0xffffffff);
          }
          *(undefined4 *)(local_158 + 8 + lVar13 * 0xc) = *(undefined4 *)(pbVar17 + 8);
          *(undefined8 *)(local_158 + lVar13 * 0xc) = *(undefined8 *)pbVar17;
          FUN_14449d868(lVar7,&local_160);
          cVar4 = local_289;
          if (local_1c8 != (byte *)0x0) {
            FUN_1400020a8();
            cVar4 = local_289;
          }
        }
        pbVar15 = pbVar15 + 0x60;
      } while (pbVar15 != local_270);
    }
    FUN_140e4aa06(lVar7);
    if ((longlong)(int)uStack_120 != 0) {
      pbVar17 = local_128 + (longlong)(int)uStack_120 * 0x60;
      pbVar15 = local_128;
      local_270 = pbVar17;
      do {
        lVar13 = *(longlong *)(pbVar15 + 4);
        if ((longlong)(int)uStack_150 != 0) {
          lVar12 = 0;
          do {
            if ((*(longlong *)(local_158 + 4 + lVar12) == lVar13) &&
               (*(byte *)(local_158 + lVar12) == *pbVar15)) goto LAB_1491eeea7;
            lVar12 = lVar12 + 0xc;
          } while ((longlong)(int)uStack_150 * 0xc != lVar12);
        }
        if ((int)uStack_b0 != local_84) {
          uVar14 = (uint)((ulonglong)lVar13 >> 0x10);
          uVar10 = (uint)lVar13 & 0xffff;
          puVar8 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar8 = local_80;
          }
          iVar5 = *(int *)(puVar8 + (ulonglong)
                                    (local_70 - 1U &
                                    (uint)*pbVar15 +
                                    ((int)((ulonglong)lVar13 >> 0x20) +
                                     ((uint)lVar13 << 0x10 | uVar10) +
                                     (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar10 >> 4)) * 10) * 4);
          while (iVar5 != -1) {
            lVar16 = (longlong)iVar5 * 0x20;
            lVar12 = local_b8 + lVar16;
            if ((*(longlong *)(local_b8 + 4 + lVar16) == lVar13) &&
               (*(byte *)(local_b8 + lVar16) == *pbVar15)) goto LAB_1491eedb1;
            iVar5 = *(int *)(lVar12 + 0x18);
          }
        }
        lVar12 = 0;
LAB_1491eedb1:
        uStack_1c0 = (byte *)CONCAT44(uStack_1c0._4_4_,*(undefined4 *)(lVar12 + 0x14));
        local_1c8 = *(byte **)(lVar12 + 0xc);
        uVar14 = FUN_140813180(lVar7,&local_1c8);
        if (((int)uVar14 < 0) || (*(int *)(lVar7 + 0xc0) <= (int)uVar14)) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + (ulonglong)uVar14 * 8);
        }
        if ((longlong)*(int *)(pbVar15 + 0x28) != 0) {
          pbVar17 = *(byte **)(pbVar15 + 0x20);
          local_268 = pbVar17 + (longlong)*(int *)(pbVar15 + 0x28) * 0xc;
          do {
            local_234 = *pbVar17;
            local_c0 = CONCAT62(CONCAT51(local_c0._3_5_,pbVar17[3]),*(undefined2 *)(pbVar17 + 1));
            local_230 = *(longlong *)(pbVar17 + 4);
            if ((int)uStack_b0 != local_84) {
              uVar14 = (uint)((ulonglong)local_230 >> 0x10);
              uVar10 = (uint)local_230 & 0xffff;
              puVar8 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar8 = local_80;
              }
              iVar5 = *(int *)(puVar8 + (ulonglong)
                                        (local_70 - 1U &
                                        (uint)local_234 +
                                        ((int)((ulonglong)local_230 >> 0x20) +
                                         ((uint)local_230 << 0x10 | uVar10) +
                                         (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar10 >> 4)) * 10) *
                                        4);
              while (iVar5 != -1) {
                lVar16 = (longlong)iVar5 * 0x20;
                lVar12 = local_b8 + lVar16;
                if ((*(longlong *)(local_b8 + 4 + lVar16) == local_230) &&
                   (*(byte *)(local_b8 + lVar16) == local_234)) {
                  if (lVar12 != -0xc && lVar12 != 0) {
                    local_234 = *(byte *)(lVar12 + 0xc);
                    local_c0 = CONCAT62(CONCAT51(local_c0._3_5_,*(undefined1 *)(lVar12 + 0xf)),
                                        *(undefined2 *)(lVar12 + 0xd));
                    local_230 = *(longlong *)(lVar12 + 0x10);
                  }
                  break;
                }
                iVar5 = *(int *)(lVar12 + 0x18);
              }
            }
            local_231 = local_c0._2_1_;
            local_233 = (undefined2)local_c0;
            local_240 = *(undefined8 *)(lVar13 + 0x10);
            local_238 = *(undefined4 *)(lVar13 + 0x18);
            local_2b8 = (byte **)CONCAT71(local_2b8._1_7_,1);
            FUN_1491e47fa(local_288,&local_240,&local_234,0);
            pbVar17 = pbVar17 + 0xc;
          } while (pbVar17 != local_268);
        }
        if (0 < *(int *)(pbVar15 + 0x38)) {
          lVar12 = 0;
          uVar18 = 0;
          do {
            local_248 = *(undefined4 *)(*(longlong *)(pbVar15 + 0x30) + 8 + lVar12);
            local_250 = *(undefined8 *)(*(longlong *)(pbVar15 + 0x30) + lVar12);
            local_2b0._0_1_ = 1;
            local_2b8._0_1_ = 1;
            FUN_1444a0a9e(lVar7,lVar13,uVar18 & 0xffffffff,&local_250);
            local_260 = *(undefined8 *)(*(longlong *)(pbVar15 + 0x30) + lVar12);
            local_258 = *(undefined4 *)(*(longlong *)(pbVar15 + 0x30) + 8 + lVar12);
            local_2b0 = (undefined ***)CONCAT71(local_2b0._1_7_,1);
            local_2b8 = (byte **)((ulonglong)local_2b8._1_7_ << 8);
            FUN_1444a0a9e(lVar7,lVar13,uVar18 & 0xffffffff,&local_260);
            uVar18 = uVar18 + 1;
            lVar12 = lVar12 + 0xc;
          } while ((longlong)uVar18 < (longlong)*(int *)(pbVar15 + 0x38));
        }
        FUN_149197016(&local_d8,lVar13 + 0x10);
        pbVar17 = local_270;
LAB_1491eeea7:
        pbVar15 = pbVar15 + 0x60;
      } while (pbVar15 != pbVar17);
      if ((longlong)(int)uStack_120 != 0) {
        pbVar17 = local_128 + (longlong)(int)uStack_120 * 0x60;
        pbVar15 = local_128;
        do {
          if ((int)uStack_b0 != local_84) {
            lVar13 = *(longlong *)(pbVar15 + 4);
            uVar14 = (uint)((ulonglong)lVar13 >> 0x10);
            uVar10 = (uint)lVar13 & 0xffff;
            puVar8 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar8 = local_80;
            }
            iVar5 = *(int *)(puVar8 + (ulonglong)
                                      (local_70 - 1U &
                                      (uint)*pbVar15 +
                                      ((int)((ulonglong)lVar13 >> 0x20) +
                                       ((uint)lVar13 << 0x10 | uVar10) +
                                       (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar10 >> 4)) * 10) * 4
                            );
            while (iVar5 != -1) {
              lVar16 = (longlong)iVar5 * 0x20;
              lVar12 = local_b8 + lVar16;
              if ((*(longlong *)(local_b8 + 4 + lVar16) == lVar13) &&
                 (*(byte *)(local_b8 + lVar16) == *pbVar15)) goto LAB_1491ef0d3;
              iVar5 = *(int *)(lVar12 + 0x18);
            }
          }
          lVar12 = 0;
LAB_1491ef0d3:
          uStack_1c0 = (byte *)CONCAT44(uStack_1c0._4_4_,*(undefined4 *)(lVar12 + 0x14));
          local_1c8 = *(byte **)(lVar12 + 0xc);
          uVar14 = FUN_140813180(lVar7,&local_1c8);
          if (((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(lVar7 + 0xc0))) &&
             (lVar13 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + (ulonglong)uVar14 * 8),
             lVar13 != 0)) {
            bVar2 = *(byte *)(lVar13 + 0x10);
            if (((((ulonglong)bVar2 < 0x21) &&
                 ((0x100010016U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) || (bVar2 == 0x80)) &&
               (1 < *(int *)(pbVar15 + 0x48))) {
              local_2a0 = 0;
              local_2a8 = (byte **)((ulonglong)local_2a8 & 0xffffffffffffff00);
              local_2b0 = (undefined ***)((ulonglong)local_2b0 & 0xffffffffffffff00);
              local_2b8._0_1_ = 1;
              FUN_140122d4e(lVar7,lVar13,*(undefined8 *)(pbVar15 + 0x40),0);
              local_2a0 = 0;
              local_2a8 = (byte **)((ulonglong)local_2a8 & 0xffffffffffffff00);
              local_2b0 = (undefined ***)((ulonglong)local_2b0 & 0xffffffffffffff00);
              local_2b8 = (byte **)CONCAT71(local_2b8._1_7_,1);
              FUN_140122d4e(lVar7,lVar13);
            }
          }
          pbVar15 = pbVar15 + 0x60;
        } while (pbVar15 != pbVar17);
      }
    }
    if (param_5 != '\0') {
      FUN_14601dce2(local_288,&local_d8,0);
    }
    param_2 = local_278;
    *local_278 = local_d8;
    local_d8 = 0;
    *(int *)(local_278 + 1) = (int)uStack_d0;
    *(uint *)((longlong)local_278 + 0xc) = uStack_d0._4_4_;
    uStack_d0 = 0;
    FUN_140ad4746(lVar7,0xd,0);
    param_3 = local_280;
    if (local_158 != 0) {
      FUN_1400020a8();
    }
    local_70 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14128f766(&local_b8);
  }
LAB_1491ee0bb:
  FUN_1491bfd60(&local_128);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
LAB_1491edf69:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ef272 FUN_1491ef272 body=104 status=ok
// SIG undefined FUN_1491ef272(void)

void FUN_1491ef272(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_20,L"Some elements were not allowed to be pasted.");
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1491ed958(param_1,local_20);
  }
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ef2dc FUN_1491ef2dc body=3488 status=ok
// SIG undefined FUN_1491ef2dc(void)

undefined8 * FUN_1491ef2dc(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 uVar7;
  byte bVar8;
  longlong lVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  undefined1 *puVar17;
  longlong lVar18;
  undefined1 auStack_a68 [32];
  longlong *local_a48;
  undefined1 *local_a40;
  longlong *local_a38;
  longlong *local_a30;
  undefined1 local_a28;
  undefined1 local_a20;
  longlong *local_a18;
  longlong local_a10;
  longlong local_a08;
  undefined8 *local_a00;
  undefined **local_9f8;
  undefined4 local_9f0;
  undefined1 local_9ec;
  undefined2 local_9eb;
  undefined1 local_9e9;
  undefined8 local_9e8;
  undefined **local_9e0;
  undefined4 local_9d8;
  undefined1 local_9d0;
  undefined2 local_9cf;
  undefined1 local_9cd;
  undefined8 local_9cc;
  undefined1 local_9c4 [4];
  undefined8 local_9c0;
  longlong local_9b8 [55];
  undefined1 local_800 [136];
  longlong local_778 [12];
  longlong local_718 [13];
  byte local_6b0;
  byte bStack_6af;
  undefined2 uStack_6ae;
  ushort uStack_6ac;
  ushort uStack_6aa;
  int iStack_6a8;
  undefined1 local_6a4;
  undefined1 local_6a3;
  undefined1 local_690;
  undefined1 local_68c [132];
  undefined1 local_608 [132];
  undefined1 local_584;
  undefined **local_580;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  longlong local_560;
  undefined1 local_518;
  undefined1 local_4f4 [4];
  undefined8 local_4f0;
  longlong local_4e8 [12];
  undefined8 local_488;
  undefined4 local_480;
  longlong local_478 [12];
  undefined2 local_414 [2];
  undefined1 local_410 [12];
  undefined1 local_404 [6];
  ushort uStack_3fe;
  undefined **local_3f8;
  byte *local_3f0;
  longlong local_3d8;
  undefined **local_13c;
  longlong local_b8;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a68;
  lVar18 = *(longlong *)(param_1 + 0x20);
  local_a10 = param_1;
  if (lVar18 != 0) {
    lVar9 = FUN_141095a0a();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) goto LAB_1491ef337;
  }
  lVar18 = 0;
LAB_1491ef337:
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_a08 = lVar18;
  local_a00 = param_2;
  FUN_140ad4746(lVar18,0xc);
  local_a18 = param_3;
  if ((longlong)(int)param_3[1] != 0) {
    plVar12 = (longlong *)*param_3;
    plVar13 = plVar12 + (longlong)(int)param_3[1] * 0x2e;
    do {
      (**(code **)(*plVar12 + 0x10))(plVar12,&local_6b0,1);
      lVar18 = CONCAT44(iStack_6a8,CONCAT22(uStack_6aa,uStack_6ac));
      if ((local_6b0 == 0 || lVar18 == 0) || DAT_14c87eb08 + 1U <= (uint)uStack_6aa) {
        pbVar10 = (byte *)0x0;
      }
      else {
        if ((int)uStack_90 != local_64) {
          uVar3 = (uint)((ulonglong)lVar18 >> 0x10);
          puVar17 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar17 = local_60;
          }
          iVar1 = *(int *)(puVar17 +
                          (ulonglong)
                          (local_50 - 1U &
                          (uint)local_6b0 +
                          (iStack_6a8 + (CONCAT22(uStack_6aa,uStack_6ac) << 0x10 | (uint)uStack_6ac)
                           + (uVar3 << 0x13 | uVar3 & 0xffff) + (uint)(uStack_6ac >> 4)) * 10) * 4);
          while (iVar1 != -1) {
            lVar11 = (longlong)iVar1 * 0x20;
            lVar9 = local_98 + lVar11;
            if ((*(longlong *)(local_98 + 4 + lVar11) == lVar18) &&
               (*(byte *)(local_98 + lVar11) == local_6b0)) goto LAB_1491ef9f2;
            iVar1 = *(int *)(lVar9 + 0x18);
          }
        }
        lVar9 = 0;
LAB_1491ef9f2:
        pbVar10 = (byte *)(lVar9 + 0xc);
        if (lVar9 == 0) {
          pbVar10 = (byte *)0x0;
        }
      }
      if (pbVar10 == (byte *)0x0) {
        pbVar10 = &local_6b0;
      }
      plVar14 = plVar12 + 6;
      plVar15 = local_478;
      for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
        *plVar15 = *plVar14;
        plVar14 = plVar14 + 1;
        plVar15 = plVar15 + 1;
      }
      local_480 = *(undefined4 *)(pbVar10 + 8);
      local_488 = *(undefined8 *)pbVar10;
      local_a28 = 0;
      local_a30 = (longlong *)((ulonglong)local_a30 & 0xffffffffffffff00);
      local_a38 = (longlong *)CONCAT71(local_a38._1_7_,1);
      local_a40 = (undefined1 *)CONCAT71(local_a40._1_7_,1);
      local_a48 = local_478;
      FUN_1491e31cc(local_a10,local_404,plVar12[1],&local_488);
      uVar7 = (**(code **)(*plVar12 + 8))(plVar12);
      local_410[0] = uVar7;
      local_410._4_8_ = plVar12[1];
      local_3f8 = (undefined **)local_410;
      local_3f0 = local_404;
      FUN_14920ab8e(&local_98,local_414);
      plVar12 = plVar12 + 0x2e;
    } while (plVar12 != plVar13);
  }
  lVar18 = local_a10;
  if ((longlong)(int)local_a18[3] != 0) {
    plVar12 = (longlong *)local_a18[2];
    lVar9 = (longlong)(int)local_a18[3] * 0xf0;
    do {
      plVar13 = plVar12 + 6;
      plVar14 = local_4e8;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *plVar14 = *plVar13;
        plVar13 = plVar13 + 1;
        plVar14 = plVar14 + 1;
      }
      local_4f4[0] = 0;
      local_4f0 = 0;
      local_a30 = (longlong *)((ulonglong)local_a30 & 0xffffffffffffff00);
      local_a38 = (longlong *)((ulonglong)local_a38 & 0xffffffffffffff00);
      local_a40 = (undefined1 *)((ulonglong)local_a40 & 0xffffffffffffff00);
      local_a48 = local_4e8;
      FUN_1491e441c(lVar18,&local_6b0,plVar12[1],local_4f4);
      uVar7 = (**(code **)(*plVar12 + 8))(plVar12);
      local_404[0] = uVar7;
      unique0x00023e00 = plVar12[1];
      local_3f8 = (undefined **)local_404;
      local_3f0 = &local_6b0;
      FUN_14920ab8e(&local_98,local_410);
      plVar12 = plVar12 + 0x1e;
      lVar9 = lVar9 + -0xf0;
    } while (lVar9 != 0);
  }
  if ((longlong)(int)local_a18[5] != 0) {
    plVar12 = (longlong *)local_a18[4];
    lVar18 = (longlong)(int)local_a18[5] * 0x360;
    do {
      FUN_1491d73b0(&local_6b0);
      bStack_6af = *(byte *)(plVar12 + 3);
      uVar2 = *(undefined8 *)((longlong)plVar12 + 0x1c);
      uStack_6ac = (ushort)uVar2;
      uStack_6aa = (ushort)((ulonglong)uVar2 >> 0x10);
      iStack_6a8 = (int)((ulonglong)uVar2 >> 0x20);
      local_6a4 = (undefined1)plVar12[0x35];
      local_6a3 = *(undefined1 *)((longlong)plVar12 + 0x1a9);
      if (*(char *)((longlong)plVar12 + 0x1aa) == '\x01') {
        if ((bStack_6af != 0 & *(byte *)(plVar12 + 0x57)) == 1) {
          local_6b0 = 0;
        }
        else {
          local_6b0 = 1;
        }
      }
      else {
        local_6b0 = 2;
      }
      FUN_1491d74b0(&local_6b0,*(undefined1 *)((longlong)plVar12 + 0x1ab),
                    *(undefined1 *)((longlong)plVar12 + 0x1ac),
                    *(undefined1 *)((longlong)plVar12 + 0x1ad));
      local_690 = *(undefined1 *)((longlong)plVar12 + 0x1ae);
      memcpy(local_68c,plVar12 + 0x36,0x84);
      memcpy(local_608,(void *)((longlong)plVar12 + 0x234),0x84);
      local_584 = *(undefined1 *)((longlong)plVar12 + 0x2b9);
      local_580 = *(undefined ***)((longlong)plVar12 + 700);
      local_578 = (undefined4)plVar12[0x66];
      uStack_574 = *(undefined4 *)((longlong)plVar12 + 0x334);
      uStack_570 = (undefined4)plVar12[0x67];
      uStack_56c = *(undefined4 *)((longlong)plVar12 + 0x33c);
      lVar9 = plVar12[0x6b];
      if (DAT_14c950c29 == '\x01') {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar9 = plVar12[0x6b];
        }
      }
      if ((local_6b0 < 2) && ((ulonglong)bStack_6af < 0xb)) {
        local_518 = (&DAT_14bb90868)[bStack_6af];
      }
      else {
        local_518 = 0;
      }
      local_560 = lVar9;
      FUN_1491d7834(&local_3f8);
      ppuVar6 = local_13c;
      ppuVar5 = local_580;
      local_3f8 = &PTR_FUN_14bb89f40;
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (ppuVar5 == ppuVar6) {
        FUN_145df188e(&local_3f8);
        local_580 = local_3f8;
        if (local_3d8 != 0) {
          FUN_1400020a8();
        }
      }
      memcpy(local_800,plVar12 + 0x14,0x84);
      plVar13 = plVar12 + 0x5a;
      plVar14 = local_718;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *plVar14 = *plVar13;
        plVar13 = plVar13 + 1;
        plVar14 = plVar14 + 1;
      }
      plVar13 = plVar12 + 8;
      plVar14 = local_778;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *plVar14 = *plVar13;
        plVar13 = plVar13 + 1;
        plVar14 = plVar14 + 1;
      }
      FUN_14918b1f6(local_9b8,&local_6b0);
      local_9c4[0] = 0;
      local_9c0 = 0;
      local_a20 = 0;
      local_a28 = 0;
      local_a48 = local_9b8;
      local_a40 = local_800;
      local_a38 = local_778;
      local_a30 = local_718;
      FUN_1491ecf78(local_a10,local_404,plVar12[1],local_9c4);
      uVar7 = (**(code **)(*plVar12 + 8))(plVar12);
      local_410[0] = uVar7;
      local_410._4_8_ = plVar12[1];
      local_3f8 = (undefined **)local_410;
      local_3f0 = local_404;
      FUN_14920ab8e(&local_98,local_414);
      FUN_14918b3e4(&local_6b0);
      plVar12 = plVar12 + 0x6c;
      lVar18 = lVar18 + -0x360;
    } while (lVar18 != 0);
  }
  lVar18 = local_a10;
  if ((longlong)(int)local_a18[7] != 0) {
    plVar12 = (longlong *)local_a18[6];
    lVar9 = (longlong)(int)local_a18[7] << 5;
    do {
      FUN_1491d5fec(lVar18,&local_6b0,plVar12[1],(int)plVar12[3]);
      uVar7 = (**(code **)(*plVar12 + 8))(plVar12);
      local_404[0] = uVar7;
      unique0x00023e00 = plVar12[1];
      local_3f8 = (undefined **)local_404;
      local_3f0 = &local_6b0;
      FUN_14920ab8e(&local_98,local_410);
      plVar12 = plVar12 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar12 = local_a18;
  if ((longlong)(int)local_a18[3] != 0) {
    plVar13 = (longlong *)local_a18[2];
    plVar14 = plVar13 + (longlong)(int)local_a18[3] * 0x1e;
    do {
      bVar8 = (**(code **)(*plVar13 + 8))(plVar13);
      if ((int)uStack_90 != local_64) {
        lVar18 = plVar13[1];
        uVar3 = (uint)((ulonglong)lVar18 >> 0x10);
        uVar16 = (uint)lVar18 & 0xffff;
        puVar17 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar17 = local_60;
        }
        iVar1 = *(int *)(puVar17 +
                        (ulonglong)
                        (local_50 - 1U &
                        (uint)bVar8 +
                        ((int)((ulonglong)lVar18 >> 0x20) + ((uint)lVar18 << 0x10 | uVar16) +
                         (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar16 >> 4)) * 10) * 4);
        while (iVar1 != -1) {
          lVar11 = (longlong)iVar1 * 0x20;
          lVar9 = local_98 + lVar11;
          if ((*(longlong *)(local_98 + 4 + lVar11) == lVar18) &&
             (*(byte *)(local_98 + lVar11) == bVar8)) goto LAB_1491efb4a;
          iVar1 = *(int *)(lVar9 + 0x18);
        }
      }
      lVar9 = 0;
LAB_1491efb4a:
      local_3f0 = (byte *)CONCAT44(local_3f0._4_4_,*(undefined4 *)(lVar9 + 0x14));
      local_3f8 = *(undefined ***)(lVar9 + 0xc);
      (**(code **)(*plVar13 + 0x10))(plVar13,&local_6b0);
      lVar18 = CONCAT44(iStack_6a8,CONCAT22(uStack_6aa,uStack_6ac));
      if ((local_6b0 != 0 && lVar18 != 0) && (uint)uStack_6aa < DAT_14c87eb08 + 1U) {
        if ((int)uStack_90 != local_64) {
          uVar3 = (uint)((ulonglong)lVar18 >> 0x10);
          puVar17 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar17 = local_60;
          }
          iVar1 = *(int *)(puVar17 +
                          (ulonglong)
                          (local_50 - 1U &
                          (uint)local_6b0 +
                          (iStack_6a8 + (CONCAT22(uStack_6aa,uStack_6ac) << 0x10 | (uint)uStack_6ac)
                           + (uVar3 << 0x13 | uVar3 & 0xffff) + (uint)(uStack_6ac >> 4)) * 10) * 4);
          while (iVar1 != -1) {
            lVar11 = (longlong)iVar1 * 0x20;
            lVar9 = local_98 + lVar11;
            if ((*(longlong *)(local_98 + 4 + lVar11) == lVar18) &&
               (*(byte *)(local_98 + lVar11) == local_6b0)) {
              if (lVar9 != -0xc && lVar9 != 0) {
                local_9d0 = *(undefined1 *)(lVar9 + 0xc);
                local_404[2] = *(undefined1 *)(lVar9 + 0xf);
                local_404._0_2_ = *(undefined2 *)(lVar9 + 0xd);
                local_9cc = *(undefined8 *)(lVar9 + 0x10);
                goto LAB_1491efcd8;
              }
              break;
            }
            iVar1 = *(int *)(lVar9 + 0x18);
          }
        }
        local_9d0 = 0;
        local_9cc = 0;
LAB_1491efcd8:
        local_9cd = local_404[2];
        local_9cf = local_404._0_2_;
        local_9e0 = local_3f8;
        local_9d8 = local_3f0._0_4_;
        FUN_1491d8b3e(local_a10,&local_9e0,&local_9d0,0);
      }
      plVar13 = plVar13 + 0x1e;
    } while (plVar13 != plVar14);
  }
  lVar18 = (longlong)(int)plVar12[5];
  if (lVar18 != 0) {
    plVar12 = (longlong *)plVar12[4];
    plVar13 = plVar12 + lVar18 * 0x6c;
    do {
      bVar8 = (**(code **)(*plVar12 + 8))(plVar12);
      if ((int)uStack_90 != local_64) {
        lVar18 = plVar12[1];
        uVar3 = (uint)((ulonglong)lVar18 >> 0x10);
        uVar16 = (uint)lVar18 & 0xffff;
        puVar17 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar17 = local_60;
        }
        iVar1 = *(int *)(puVar17 +
                        (ulonglong)
                        (local_50 - 1U &
                        (uint)bVar8 +
                        ((int)((ulonglong)lVar18 >> 0x20) + ((uint)lVar18 << 0x10 | uVar16) +
                         (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar16 >> 4)) * 10) * 4);
        while (iVar1 != -1) {
          lVar11 = (longlong)iVar1 * 0x20;
          lVar9 = local_98 + lVar11;
          if ((*(longlong *)(local_98 + 4 + lVar11) == lVar18) &&
             (*(byte *)(local_98 + lVar11) == bVar8)) goto LAB_1491efdee;
          iVar1 = *(int *)(lVar9 + 0x18);
        }
      }
      lVar9 = 0;
LAB_1491efdee:
      local_3f0 = (byte *)CONCAT44(local_3f0._4_4_,*(undefined4 *)(lVar9 + 0x14));
      local_3f8 = *(undefined ***)(lVar9 + 0xc);
      (**(code **)(*plVar12 + 0x10))(plVar12,&local_6b0);
      (**(code **)(*plVar12 + 0x18))(plVar12,local_404);
      pbVar10 = local_404;
      if (local_404[0] == 0) {
        pbVar10 = &local_6b0;
      }
      if (stack0xfffffffffffffc00 == 0) {
        pbVar10 = &local_6b0;
      }
      if (DAT_14c87eb08 + 1U <= (uint)uStack_3fe) {
        pbVar10 = &local_6b0;
      }
      uVar2 = *(undefined8 *)pbVar10;
      local_6b0 = (byte)uVar2;
      bStack_6af = (byte)((ulonglong)uVar2 >> 8);
      uStack_6ae = (undefined2)((ulonglong)uVar2 >> 0x10);
      uStack_6ac = (ushort)((ulonglong)uVar2 >> 0x20);
      uStack_6aa = (ushort)((ulonglong)uVar2 >> 0x30);
      iStack_6a8 = *(int *)(pbVar10 + 8);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x20);
      lVar18 = CONCAT44(iStack_6a8,uVar3);
      if ((lVar18 != 0 && (uint)uStack_6aa < DAT_14c87eb08 + 1U) && local_6b0 != 0) {
        if ((int)uStack_90 != local_64) {
          uVar16 = (uint)((ulonglong)lVar18 >> 0x10);
          puVar17 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar17 = local_60;
          }
          iVar1 = *(int *)(puVar17 +
                          (ulonglong)
                          (local_50 - 1U &
                          ((uint)uVar2 & 0xff) +
                          (iStack_6a8 + (uVar3 << 0x10 | uVar3 & 0xffff) +
                           (uVar16 << 0x13 | uVar16 & 0xffff) + ((uVar3 & 0xffff) >> 4)) * 10) * 4);
          while (iVar1 != -1) {
            lVar11 = (longlong)iVar1 * 0x20;
            lVar9 = local_98 + lVar11;
            if ((*(longlong *)(local_98 + 4 + lVar11) == lVar18) &&
               (*(byte *)(local_98 + lVar11) == local_6b0)) {
              if (lVar9 != -0xc && lVar9 != 0) {
                local_9ec = *(undefined1 *)(lVar9 + 0xc);
                local_410[2] = *(undefined1 *)(lVar9 + 0xf);
                local_410._0_2_ = *(undefined2 *)(lVar9 + 0xd);
                local_9e8 = *(undefined8 *)(lVar9 + 0x10);
                goto LAB_1491effc0;
              }
              break;
            }
            iVar1 = *(int *)(lVar9 + 0x18);
          }
        }
        local_9e8 = 0;
        local_9ec = 0;
LAB_1491effc0:
        local_9e9 = local_410[2];
        local_9eb = local_410._0_2_;
        local_9f8 = local_3f8;
        local_9f0 = local_3f0._0_4_;
        FUN_1491d8b3e(local_a10,&local_9f8,&local_9ec,0);
      }
      plVar12 = plVar12 + 0x6c;
    } while (plVar12 != plVar13);
  }
  puVar4 = local_a00;
  *local_a00 = 0;
  local_a00[1] = 0;
  FUN_1491f0130(&local_98,local_a00);
  FUN_140ad4746(local_a08,0xd,0);
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14128f766(&local_98);
  if ((local_48 ^ (ulonglong)auStack_a68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f007e FUN_1491f007e body=98 status=ok
// SIG undefined FUN_1491f007e(void)

void FUN_1491f007e(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_149202f0c(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_149201f5c(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1491f00e0 FUN_1491f00e0 body=80 status=ok
// SIG undefined FUN_1491f00e0(void)

longlong * FUN_1491f00e0(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1491bfdd0(*param_1,(int)param_1[1]);
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



// FUNCTION 1491f0130 FUN_1491f0130 body=346 status=ok
// SIG undefined FUN_1491f0130(void)

void FUN_1491f0130(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar4) {
    FUN_14920a7da(param_2);
  }
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar2 = iStack_5c;
      lVar3 = *local_78;
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_149192788(param_2,iVar4);
      }
      lVar3 = (longlong)iVar2 * 0x20 + lVar3;
      lVar1 = *param_2;
      *(undefined4 *)(lVar1 + 8 + (longlong)iVar4 * 0xc) = *(undefined4 *)(lVar3 + 0x14);
      *(undefined8 *)(lVar1 + (longlong)iVar4 * 0xc) = *(undefined8 *)(lVar3 + 0xc);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491f028c FUN_1491f028c body=90 status=ok
// SIG undefined FUN_1491f028c(void)

void FUN_1491f028c(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28);
  FUN_1491f28ee(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491f08d8 FUN_1491f08d8 body=1598 status=ok
// SIG undefined FUN_1491f08d8(void)

undefined8 FUN_1491f08d8(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_110;
  char local_101;
  longlong local_100;
  longlong local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_3 != 0) {
    bVar2 = *(byte *)(param_3 + 0x10);
    if ((((ulonglong)bVar2 < 0x21) && ((0x100010016U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) ||
       (bVar2 == 0x80)) {
      lVar14 = *(longlong *)(param_1 + 0x20);
      if (lVar14 == 0) {
LAB_1491f095e:
        lVar14 = 0;
      }
      else {
        lVar6 = FUN_141095a0a();
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_1491f095e;
      }
      pcVar1 = (char *)(param_2 + 0x10);
      uVar7 = (ulonglong)*(byte *)(param_2 + 0x10);
      if (uVar7 < 0x21) {
        if ((0x100010002U >> (uVar7 & 0x3f) & 1) == 0) {
          if ((0x14UL >> (uVar7 & 0x3f) & 1) != 0) {
            if (0 < (longlong)*(int *)(param_2 + 0x1b0)) {
              lVar6 = param_2 + 0x110;
              lVar12 = *(longlong *)(param_2 + 0x1a0);
              if (*(longlong *)(param_2 + 0x1a0) == 0) {
                lVar12 = lVar6;
              }
              iVar17 = 1;
              lVar16 = 0;
LAB_1491f0a00:
              if (*(longlong *)(lVar12 + lVar16) != param_3) goto code_r0x0001491f0a0a;
              local_100 = lVar6;
              local_f8 = param_3 + 0x10;
              if (param_4 == '\0') {
                FUN_1401571e4(lVar14,&local_c8,param_2,1);
                FUN_1401571e4(lVar14,&local_c8,param_2,0);
                lVar6 = 0xb0;
                lVar12 = 0x90;
              }
              else {
                FUN_1401571e4(lVar14,&local_c8,param_2,3);
                FUN_1401571e4(lVar14,&local_c8,param_2,2);
                lVar6 = 0xc0;
                lVar12 = 0xa0;
              }
              puVar13 = *(undefined1 **)(param_2 + lVar12);
              if (puVar13 == (undefined1 *)0x0) {
                puVar13 = &DAT_14cc07bfc;
              }
              *puVar13 = 1;
              puVar13 = *(undefined1 **)(param_2 + lVar6);
              if (puVar13 == (undefined1 *)0x0) {
                puVar13 = &DAT_14cc07bfc;
              }
              *puVar13 = 1;
              local_101 = param_4;
              FUN_1491f0f18(param_3,param_2);
              lVar6 = local_100;
              lVar12 = *(longlong *)(param_2 + 0x1a0);
              if (*(longlong *)(param_2 + 0x1a0) == 0) {
                lVar12 = local_100;
              }
              local_e0 = *(undefined4 *)(*(longlong *)(lVar12 + lVar16) + 0x18);
              local_e8 = *(undefined8 *)(*(longlong *)(lVar12 + lVar16) + 0x10);
              uVar9 = *(undefined8 *)(param_2 + 0x14);
              uVar4 = (uint)((ulonglong)uVar9 >> 0x10);
              uVar15 = (uint)uVar9 & 0xffff;
              local_f0 = pcVar1;
              puVar10 = (undefined8 *)
                        FUN_14920fc30(lVar14 + 0x340,
                                      (uint)*(byte *)(param_2 + 0x10) +
                                      (((uint)uVar9 << 0x10 | uVar15) +
                                       (int)((ulonglong)uVar9 >> 0x20) +
                                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) * 10,pcVar1
                                     );
              *(undefined4 *)(puVar10 + 1) = local_e0;
              *puVar10 = local_e8;
              iVar11 = *(int *)(param_2 + 0x1b0);
              if (iVar11 - iVar17 != 0) {
                lVar12 = *(longlong *)(param_2 + 0x1a0);
                if (*(longlong *)(param_2 + 0x1a0) == 0) {
                  lVar12 = lVar6;
                }
                memmove((void *)(lVar12 + lVar16),(void *)(lVar12 + lVar16 + 0x90),
                        (longlong)(iVar11 - iVar17) * 0x90);
                iVar11 = *(int *)(param_2 + 0x1b0);
              }
              *(int *)(param_2 + 0x1b0) = iVar11 + -1;
              FUN_149210282(lVar6);
              plVar8 = (longlong *)(param_2 + 0x1c0);
              FUN_14920fefa(plVar8,local_f8);
              lVar6 = param_2 + 0x1d0;
              local_68 = 0x100000000;
              local_58 = 0xffffffff;
              local_50 = 0;
              iVar11 = 0;
              local_60 = lVar6;
              if (*(int *)(param_2 + 0x1e8) != 0) {
                FUN_1449c0562(&local_68);
                iVar11 = *(int *)(param_2 + 0x1e8);
              }
              local_b0 = local_58;
              uVar9 = local_b0;
              local_a8 = local_50;
              local_a4 = local_4c;
              local_c0 = local_68;
              local_b8 = local_60;
              local_b0._4_4_ = (int)((ulonglong)local_58 >> 0x20);
              iVar5 = local_b0._4_4_;
              local_c8 = plVar8;
              if ((local_b0._4_4_ != iVar11) || (local_b0 = uVar9, local_60 != lVar6)) {
                do {
                  local_b0 = uVar9;
                  iVar3 = *(int *)(*local_c8 + 0xc + (longlong)iVar5 * 0x18);
                  if (iVar17 + -1 < iVar3) {
                    *(int *)(*local_c8 + (longlong)iVar5 * 0x18 + 0xc) = iVar3 + -1;
                  }
                  local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0 & ~local_c0._4_4_);
                  FUN_1449c0562(&local_c0);
                  iVar5 = local_b0._4_4_;
                  uVar9 = local_b0;
                } while (local_c8 != plVar8 || (local_b8 != lVar6 || local_b0._4_4_ != iVar11));
              }
              if (*local_f0 == '\x04') {
                puVar13 = *(undefined1 **)(param_2 + 0x448);
                if (puVar13 == (undefined1 *)0x0) {
                  puVar13 = &DAT_14cc07bfc;
                }
                *puVar13 = 1;
                puVar13 = *(undefined1 **)(param_2 + 0x468);
                if (puVar13 == (undefined1 *)0x0) {
                  puVar13 = &DAT_14cc07bfc;
                }
                *puVar13 = 1;
                puVar13 = *(undefined1 **)(param_2 + 0x4c8);
                if (puVar13 == (undefined1 *)0x0) {
                  puVar13 = &DAT_14cc07bfc;
                }
                *puVar13 = 1;
                puVar13 = *(undefined1 **)(param_2 + 0x4e8);
                if (puVar13 == (undefined1 *)0x0) {
                  puVar13 = &DAT_14cc07bfc;
                }
                *puVar13 = 1;
              }
              *(int *)(lVar14 + 0xa8) = *(int *)(lVar14 + 0xa8) + 1;
              param_4 = local_101;
              if (*(int *)(lVar14 + 0x480) != *(int *)(lVar14 + 0x4ac)) goto LAB_1491f0b99;
              goto LAB_1491f0bb0;
            }
            goto LAB_1491f098f;
          }
          goto LAB_1491f0a2e;
        }
      }
      else {
LAB_1491f0a2e:
        if (*(byte *)(param_2 + 0x10) != 0x80) goto LAB_1491f098f;
      }
      if (*(longlong *)(param_2 + 0x108) == param_3) {
        if (param_4 == '\0') {
          FUN_1401571e4(lVar14,&local_c8,param_2,1);
          FUN_1401571e4(lVar14,&local_c8,param_2,0);
          lVar6 = 0xb0;
          lVar12 = 0x90;
        }
        else {
          FUN_1401571e4(lVar14,&local_c8,param_2,3);
          FUN_1401571e4(lVar14,&local_c8,param_2,2);
          lVar6 = 0xc0;
          lVar12 = 0xa0;
        }
        puVar13 = *(undefined1 **)(param_2 + lVar12);
        if (puVar13 == (undefined1 *)0x0) {
          puVar13 = &DAT_14cc07bfc;
        }
        *puVar13 = 1;
        puVar13 = *(undefined1 **)(param_2 + lVar6);
        if (puVar13 == (undefined1 *)0x0) {
          puVar13 = &DAT_14cc07bfc;
        }
        *puVar13 = 1;
        local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(*(longlong *)(param_2 + 0x108) + 0x18));
        local_c8 = *(longlong **)(*(longlong *)(param_2 + 0x108) + 0x10);
        uVar9 = *(undefined8 *)(param_2 + 0x14);
        uVar4 = (uint)((ulonglong)uVar9 >> 0x10);
        uVar15 = (uint)uVar9 & 0xffff;
        plVar8 = (longlong *)
                 FUN_14920fc30(lVar14 + 0x340,
                               (uint)*(byte *)(param_2 + 0x10) +
                               (((uint)uVar9 << 0x10 | uVar15) + (int)((ulonglong)uVar9 >> 0x20) +
                                (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) * 10,pcVar1);
        *(undefined4 *)(plVar8 + 1) = (undefined4)local_c0;
        *plVar8 = (longlong)local_c8;
        *(undefined8 *)(param_2 + 0x108) = 0;
        if (SBORROW1('\0',*(char *)(param_2 + 0x10))) {
          local_d8 = *(undefined8 *)pcVar1;
          local_d0 = *(undefined4 *)(param_2 + 0x18);
          FUN_1491d9e76(lVar14,&local_d8,DAT_14cc079a0);
          FUN_140ad4746(lVar14,0x12,param_2);
        }
        FUN_1491f0f18(param_3,param_2);
        *(int *)(lVar14 + 0xa8) = *(int *)(lVar14 + 0xa8) + 1;
        if (*(int *)(lVar14 + 0x480) != *(int *)(lVar14 + 0x4ac)) {
LAB_1491f0b99:
          FUN_14920d1d6(lVar14 + 0x478);
          FUN_14920d31a(lVar14 + 0x478);
        }
LAB_1491f0bb0:
        if (param_4 == '\0') {
          local_110 = 1;
          local_118 = 1;
          FUN_1448340d4(lVar14,param_2,1,1);
          local_110 = 1;
          local_118 = 1;
          FUN_1448340d4(lVar14,param_2,0,1);
        }
        FUN_1491ec404(param_1,5,param_2);
        uVar9 = 1;
        goto LAB_1491f0991;
      }
    }
  }
LAB_1491f098f:
  uVar9 = 0;
LAB_1491f0991:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
code_r0x0001491f0a0a:
  lVar16 = lVar16 + 0x90;
  iVar17 = iVar17 + 1;
  if ((longlong)*(int *)(param_2 + 0x1b0) * 0x90 == lVar16) goto LAB_1491f098f;
  goto LAB_1491f0a00;
}



// FUNCTION 1491f0f18 FUN_1491f0f18 body=165 status=ok
// SIG undefined FUN_1491f0f18(void)

void FUN_1491f0f18(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined4 local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && param_1 != 0) {
    bVar1 = *(byte *)(param_2 + 0x10);
    if ((((ulonglong)bVar1 < 0x21) && ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
       (bVar1 == 0x80)) {
      bVar1 = *(byte *)(param_1 + 0x10);
      if ((((ulonglong)bVar1 < 0x21) && ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
         (bVar1 == 0x80)) {
        local_10 = &local_20;
        local_18 = 0xffffffff;
        local_20 = param_2;
        FUN_1492103d0(param_1 + 200);
      }
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


