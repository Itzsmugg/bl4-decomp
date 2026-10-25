// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148eade44 FUN_148eade44 body=38 status=ok
// SIG undefined FUN_148eade44(void)

void FUN_148eade44(longlong param_1)

{
  FUN_14588cd9e();
  if (DAT_14c872bf2 == '\x01') {
    *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xfffde5ff;
  }
  return;
}



// FUNCTION 148eade70 FUN_148eade70 body=400 status=ok
// SIG undefined FUN_148eade70(void)

void FUN_148eade70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1410c2f26();
  lVar7 = FUN_140391552(param_1);
  if ((lVar7 != 0) && (*(longlong *)(param_1 + 0x2b0) == 0)) {
    plVar9 = *(longlong **)(param_1 + 0x10);
    bVar3 = true;
    if (plVar9 == (longlong *)0x0) {
LAB_148eadf00:
      uVar10 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_148eadf00;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar11 = iVar6 == iVar4;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar11);
      uVar10 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      bVar3 = false;
    }
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    local_48 = 3;
    *local_50 = &PTR_LAB_14b4665f0;
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
    local_50[2] = lVar8;
    *local_50 = &PTR_FUN_14b9cce20;
    local_50[3] = uVar10;
    local_50[4] = plVar9;
    FUN_1446ddc76(&local_58,"TitlePicker_InviteAccepted",1);
    FUN_140391af6(lVar7,&local_40,local_58,&local_50);
    *(undefined8 *)(param_1 + 0x2b0) = local_40;
    FUN_1449db362(&local_50);
    if (!bVar3) {
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
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eae002 FUN_148eae002 body=127 status=ok
// SIG undefined FUN_148eae002(void)

void FUN_148eae002(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140391552();
  if (lVar1 != 0) {
    FUN_1446ddc76(&local_30,"TitlePicker_InviteAccepted",1);
    FUN_1401cd85c(lVar1,local_30,param_1 + 0x2b0);
  }
  FUN_1401cd71c(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eae082 FUN_148eae082 body=112 status=ok
// SIG undefined FUN_148eae082(void)

void FUN_148eae082(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  
  if ((DAT_14c872bf2 == '\0') && (lVar1 = FUN_140391552(), lVar1 != 0)) {
    uVar3 = 1;
    if (*param_2 != DAT_14cbdfc90) {
      if (*param_2 != DAT_14cbdfc98) {
        return;
      }
      uVar3 = 0;
    }
    puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar2 = &PTR_FUN_14b9cba40;
    *(undefined1 *)(puVar2 + 1) = uVar3;
    FUN_14039144e(lVar1,puVar2);
    return;
  }
  return;
}



// FUNCTION 148eae0f2 FUN_148eae0f2 body=1463 status=ok
// SIG undefined FUN_148eae0f2(void)

/* WARNING: Removing unreachable block (ram,0x000148eae4cf) */
/* WARNING: Removing unreachable block (ram,0x000148eae54e) */

void FUN_148eae0f2(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_188 [40];
  longlong local_160 [2];
  undefined **local_150;
  undefined8 local_148;
  longlong *local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(int *)(param_1 + 0xe0) < 2) {
    FUN_1400b22c2(&local_150,"Debug Mission Title");
    if ((undefined ***)(param_1 + 0xd8) == &local_150) {
      if (local_150 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        FUN_1400020a8();
      }
      *(undefined ***)(param_1 + 0xd8) = local_150;
      local_150 = (undefined **)0x0;
      *(undefined4 *)(param_1 + 0xe0) = (undefined4)local_148;
      *(undefined4 *)(param_1 + 0xe4) = local_148._4_4_;
    }
    *(undefined1 *)(param_1 + 0x1da) = 0;
  }
  if (*(int *)(param_1 + 0x100) < 2) {
    FUN_1400b22c2(&local_150,
                  "This mission description is being filled in by debug because the mission does not have description text. Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?"
                 );
    if ((undefined ***)(param_1 + 0xf8) == &local_150) {
      if (local_150 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0xf8) != 0) {
        FUN_1400020a8();
      }
      *(undefined ***)(param_1 + 0xf8) = local_150;
      local_150 = (undefined **)0x0;
      *(undefined4 *)(param_1 + 0x100) = (undefined4)local_148;
      *(undefined4 *)(param_1 + 0x104) = local_148._4_4_;
    }
  }
  if (*(int *)(param_1 + 0x110) < 2) {
    FUN_1400b22c2(&local_150,"Debug Zone");
    if ((undefined ***)(param_1 + 0x108) == &local_150) {
      if (local_150 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x108) != 0) {
        FUN_1400020a8();
      }
      *(undefined ***)(param_1 + 0x108) = local_150;
      local_150 = (undefined **)0x0;
      *(undefined4 *)(param_1 + 0x110) = (undefined4)local_148;
      *(undefined4 *)(param_1 + 0x114) = local_148._4_4_;
    }
  }
  if (*(int *)(param_1 + 0x120) < 2) {
    FUN_1400b22c2(&local_150,"very_hard");
    if ((undefined ***)(param_1 + 0x118) == &local_150) {
      if (local_150 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x118) != 0) {
        FUN_1400020a8();
      }
      *(undefined ***)(param_1 + 0x118) = local_150;
      local_150 = (undefined **)0x0;
      *(undefined4 *)(param_1 + 0x120) = (undefined4)local_148;
      *(undefined4 *)(param_1 + 0x124) = local_148._4_4_;
    }
  }
  if (*(int *)(param_1 + 0x130) < 2) {
    FUN_1400b22c2(&local_150,"Unknown");
    if ((undefined ***)(param_1 + 0x128) == &local_150) {
      if (local_150 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x128) != 0) {
        FUN_1400020a8();
      }
      *(undefined ***)(param_1 + 0x128) = local_150;
      local_150 = (undefined **)0x0;
      *(undefined4 *)(param_1 + 0x130) = (undefined4)local_148;
      *(undefined4 *)(param_1 + 0x134) = local_148._4_4_;
    }
  }
  *(undefined1 *)(param_1 + 0x170) = 1;
  if (*(int *)(param_1 + 0x180) < 4) {
    iVar5 = *(int *)(param_1 + 0x180) + -4;
    do {
      FUN_1408f3f9e(&local_150);
      local_150 = &PTR_FUN_14b8b8750;
      local_a0 = (longlong *)0x0;
      uStack_98 = 0;
      local_90 = 1;
      FUN_1400b22c2(&local_78,"grapple");
      if (local_a0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_a0 = local_78;
      local_90 = 0;
      iVar1 = *(int *)(param_1 + 0x180);
      *(uint *)(param_1 + 0x180) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x184) < iVar1 + 1U) {
        FUN_148ebb5ee((longlong *)(param_1 + 0x178),iVar1);
      }
      FUN_148c8696a((longlong)iVar1 * 200 + *(longlong *)(param_1 + 0x178),&local_150);
      local_150 = &PTR_FUN_14b8b8750;
      if (local_a0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_140fe7f26(&local_150);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0);
  }
  *(undefined1 *)(param_1 + 0x188) = 1;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  FUN_1400b22c2(&local_150,"weapontype_pistol");
  uStack_70._0_4_ = 1;
  FUN_1447a1bd6(&local_78,0);
  *local_78 = 0;
  *local_78 = (longlong)local_150;
  local_150 = (undefined **)0x0;
  *(undefined4 *)(local_78 + 1) = (undefined4)local_148;
  *(undefined4 *)((longlong)local_78 + 0xc) = local_148._4_4_;
  FUN_1400b22c2(&local_150,"weapontype_shotgun");
  iVar5 = (int)uStack_70;
  lVar4 = (longlong)(int)uStack_70;
  uVar3 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
  if (uStack_70._4_4_ < uVar3) {
    FUN_1447a1bd6(&local_78,iVar5);
  }
  local_78[lVar4 * 2] = 0;
  local_78[lVar4 * 2] = (longlong)local_150;
  *(undefined4 *)(local_78 + lVar4 * 2 + 1) = (undefined4)local_148;
  *(undefined4 *)((longlong)local_78 + lVar4 * 0x10 + 0xc) = local_148._4_4_;
  local_148 = 0;
  local_150 = (undefined **)0x0;
  FUN_1400b22c2(&local_150,"weapontype_assault");
  uVar2 = uStack_70;
  lVar4 = (longlong)(int)uStack_70;
  uVar3 = (int)uStack_70 + 1;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
  if (uStack_70._4_4_ < uVar3) {
    FUN_1447a1bd6(&local_78,uVar2 & 0xffffffff);
  }
  local_78[lVar4 * 2] = 0;
  local_78[lVar4 * 2] = (longlong)local_150;
  *(undefined4 *)(local_78 + lVar4 * 2 + 1) = (undefined4)local_148;
  *(undefined4 *)((longlong)local_78 + lVar4 * 0x10 + 0xc) = local_148._4_4_;
  local_148 = 0;
  local_150 = (undefined **)0x0;
  if ((*(byte *)(param_1 + 0x1c8) & 2) == 0) {
    do {
      FUN_1400b22c2(local_160,&DAT_14b997cd2);
      iVar5 = rand();
      FUN_148eae7e0(&local_150,local_78 + (longlong)(iVar5 % (int)uStack_70) * 2,local_160);
      FUN_140c71dec(param_1 + 400,&local_150);
      FUN_1407dde54(&local_150);
      if (local_160[0] != 0) {
        FUN_1400020a8();
      }
    } while ((*(byte *)(param_1 + 0x1c8) & 2) == 0);
  }
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eae6aa FUN_148eae6aa body=184 status=ok
// SIG undefined FUN_148eae6aa(void)

undefined8 * FUN_148eae6aa(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b9cbbc0;
  local_20 = param_2;
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[5] = 0;
  }
  else {
    lVar2 = FUN_14479d2ce(&local_20);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar2 + 0x3c0);
    lVar2 = *(longlong *)(lVar2 + 0x3c8);
    param_1[5] = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 1);
  param_1[6] = *param_3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eae7e0 FUN_148eae7e0 body=481 status=ok
// SIG undefined FUN_148eae7e0(void)

undefined8 * FUN_148eae7e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  FUN_1400b22c2(local_38,"tint-");
  FUN_144a7dea0(param_1 + 2,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_1400b22c2(param_1 + 7,"tint-common");
  FUN_1400b22c2(param_1 + 9,"common");
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  plVar4 = (longlong *)FUN_140e82300();
  plVar3 = (longlong *)*plVar4;
  param_1[0xe] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(int *)(param_1 + 0xf) = (int)plVar4[1];
  plVar4 = (longlong *)FUN_140e82300();
  plVar3 = (longlong *)*plVar4;
  param_1[0x10] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(int *)(param_1 + 0x11) = (int)plVar4[1];
  plVar4 = (longlong *)FUN_140e82300();
  plVar3 = (longlong *)*plVar4;
  param_1[0x12] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(int *)(param_1 + 0x13) = (int)plVar4[1];
  plVar4 = (longlong *)FUN_140e82300();
  plVar3 = (longlong *)*plVar4;
  param_1[0x14] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(int *)(param_1 + 0x15) = (int)plVar4[1];
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eae9c2 FUN_148eae9c2 body=142 status=ok
// SIG undefined FUN_148eae9c2(void)

void FUN_148eae9c2(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  FUN_146245af8();
  uVar1 = FUN_14479d2ce(param_1 + 0x30);
  lVar3 = FUN_140391a3c(uVar1);
  if (lVar3 == 0) {
    return;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar4 = &PTR_FUN_14b9cbdd8;
  FUN_14039144e(lVar3,puVar4);
  lVar3 = *(longlong *)(param_1 + 0x288);
  uVar2 = FUN_145c4ace0(lVar3 + 0xd0,lVar3 + 0x340);
  FUN_1466544ca(lVar3,uVar2);
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  FUN_1416ae710(param_1);
  return;
}



// FUNCTION 148eaea50 FUN_148eaea50 body=282 status=ok
// SIG undefined FUN_148eaea50(void)

void FUN_148eaea50(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x288) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x288) + 0x338) == '\x01')) &&
     (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c))) {
    uVar2 = (uint)((ulonglong)DAT_14cbdfdf8 >> 0x10);
    uVar4 = (uint)DAT_14cbdfdf8 & 0xffff;
    lVar3 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x118);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x120) - 1U &
                             (int)((ulonglong)DAT_14cbdfdf8 >> 0x20) +
                             ((uint)DAT_14cbdfdf8 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar5 * 0x18);
        if (*plVar1 == DAT_14cbdfdf8) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            local_20 = 0;
            FUN_14485c47a(&local_20,plVar1[1]);
            FUN_1412e3bcc(param_1,local_20);
          }
          break;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_145eea794(param_1);
  return;
}



// FUNCTION 148eaeb6c FUN_148eaeb6c body=74 status=ok
// SIG undefined FUN_148eaeb6c(void)

void FUN_148eaeb6c(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1402191ca(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_1402191ca(param_1,0);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 148eaebb6 FUN_148eaebb6 body=129 status=ok
// SIG undefined FUN_148eaebb6(void)

void FUN_148eaebb6(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x350) = *(byte *)(lVar1 + 0x350) ^ 1;
    FUN_146654b68(param_1,lVar1 + 0xb0);
    FUN_146654b68(param_1,lVar1 + 0xc0,*(undefined1 *)(lVar1 + 0x350));
    FUN_140de1078(param_1,&DAT_14cbdfdd8,0,0);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148eaec38 FUN_148eaec38 body=320 status=ok
// SIG undefined FUN_148eaec38(void)

void FUN_148eaec38(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) {
    return;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  lVar5 = 0;
  do {
    uVar1 = puVar4[lVar5];
    bVar8 = "sort-dropdown"[lVar5];
    iVar9 = (uint)uVar1 - (uint)bVar8;
    if (iVar9 == 0) {
      if (uVar1 == 0) goto LAB_148eaecf5;
    }
    else {
      if (0x7f < ((uint)bVar8 | (uint)uVar1)) goto LAB_148eaeca3;
      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[bVar8]) goto code_r0x000148eaeca0;
    }
    lVar5 = lVar5 + 1;
  } while( true );
code_r0x000148eaece5:
  iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[bVar8];
LAB_148eaece8:
  if (iVar9 != 0) {
    return;
  }
LAB_148eaed64:
  lVar5 = 0xe0;
  lVar7 = 0x160;
  goto LAB_148eaecff;
code_r0x000148eaeca0:
  iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[bVar8];
LAB_148eaeca3:
  if (iVar9 != 0) {
    lVar5 = 0;
    do {
      uVar1 = puVar4[lVar5];
      bVar8 = "filter-dropdown"[lVar5];
      iVar9 = (uint)uVar1 - (uint)bVar8;
      if (iVar9 == 0) {
        if (uVar1 == 0) goto LAB_148eaed64;
      }
      else {
        if (0x7f < ((uint)bVar8 | (uint)uVar1)) goto LAB_148eaece8;
        if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[bVar8]) goto code_r0x000148eaece5;
      }
      lVar5 = lVar5 + 1;
    } while( true );
  }
LAB_148eaecf5:
  lVar5 = 0x160;
  lVar7 = 0xe0;
LAB_148eaecff:
  bVar8 = *(byte *)(lVar2 + lVar7) ^ 1;
  *(byte *)(lVar2 + lVar7) = bVar8;
  *(undefined1 *)(lVar2 + lVar5) = 0;
  puVar3 = *(ushort **)(lVar2 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
    bVar8 = *(byte *)(lVar2 + lVar7);
  }
  puVar6 = &DAT_14cbdfde8;
  if ((bVar8 & 1) != 0) {
    puVar6 = &DAT_14cbdfdd8;
  }
  FUN_140de1078(param_1,puVar6,0,0);
  return;
}



// FUNCTION 148eaed78 FUN_148eaed78 body=779 status=ok
// SIG undefined FUN_148eaed78(void)

void FUN_148eaed78(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  longlong *plVar13;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x1d0);
    iVar2 = *(int *)(lVar3 + 0x1d8);
    if (iVar2 == (int)param_2[1]) {
      if (1 < iVar2) {
        lVar6 = 0;
        while( true ) {
          uVar10 = *(ushort *)(*plVar1 + lVar6);
          uVar7 = (ulonglong)uVar10;
          uVar12 = *(ushort *)(*param_2 + lVar6);
          if (uVar10 != uVar12) break;
          if (uVar10 == 0) goto LAB_148eaee0d;
LAB_148eaedd8:
          lVar6 = lVar6 + 2;
        }
        if ((uVar12 | uVar10) < 0x80) {
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar11 = (ulonglong)uVar12;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar11]) goto LAB_148eaedd8;
        }
        if (uVar10 != uVar12) goto LAB_148eaee3c;
      }
    }
    else if ((int)param_2[1] + iVar2 != 1) {
LAB_148eaee3c:
      *(undefined1 *)(lVar3 + 0x380) = 0;
      *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 1;
      if ((longlong)*(int *)(lVar3 + 0xb8) != 0) {
        lVar6 = *(longlong *)(lVar3 + 0xb0);
        lVar5 = (longlong)*(int *)(lVar3 + 0xb8) * 0x20 + lVar6;
        do {
          if ((longlong)*(int *)(lVar6 + 0x18) != 0) {
            plVar13 = *(longlong **)(lVar6 + 0x10);
            plVar8 = plVar13 + (longlong)*(int *)(lVar6 + 0x18) * 0x27;
            do {
              iVar2 = (int)plVar13[1];
              if (iVar2 == (int)param_2[1]) {
                if (1 < iVar2) {
                  lVar9 = 0;
                  while( true ) {
                    uVar10 = *(ushort *)(*plVar13 + lVar9);
                    uVar7 = (ulonglong)uVar10;
                    uVar12 = *(ushort *)(*param_2 + lVar9);
                    if (uVar10 != uVar12) break;
                    if (uVar10 == 0) goto LAB_148eaeef1;
LAB_148eaeebf:
                    lVar9 = lVar9 + 2;
                  }
                  if ((uVar12 | uVar10) < 0x80) {
                    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
                    uVar11 = (ulonglong)uVar12;
                    uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                    if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar11]) goto LAB_148eaeebf;
                  }
                  if (uVar10 != uVar12) goto LAB_148eaef4b;
                }
LAB_148eaeef1:
                *(undefined4 *)((longlong)plVar13 + 0xdc) = *(undefined4 *)(param_1 + 0x2c8);
                *(undefined1 *)((longlong)plVar13 + 0x131) = 1;
                FUN_145a03150(plVar1,plVar13);
                *(undefined1 *)(lVar3 + 0x380) = 1;
                puVar4 = *(ushort **)(lVar3 + 0x80);
                if (puVar4 != (ushort *)0x0) {
                  *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
                }
              }
              else {
                if ((int)param_2[1] + iVar2 == 1) goto LAB_148eaeef1;
LAB_148eaef4b:
                *(undefined1 *)((longlong)plVar13 + 0x131) = 0;
              }
              plVar13 = plVar13 + 0x27;
            } while (plVar13 != plVar8);
          }
          lVar6 = lVar6 + 0x20;
        } while (lVar6 != lVar5);
      }
      if ((longlong)*(int *)(lVar3 + 200) != 0) {
        lVar6 = *(longlong *)(lVar3 + 0xc0);
        lVar5 = (longlong)*(int *)(lVar3 + 200) * 0x20 + lVar6;
        do {
          if ((longlong)*(int *)(lVar6 + 0x18) != 0) {
            plVar13 = *(longlong **)(lVar6 + 0x10);
            plVar8 = plVar13 + (longlong)*(int *)(lVar6 + 0x18) * 0x27;
            do {
              iVar2 = (int)plVar13[1];
              if (iVar2 == (int)param_2[1]) {
                if (1 < iVar2) {
                  lVar9 = 0;
                  while( true ) {
                    uVar10 = *(ushort *)(*plVar13 + lVar9);
                    uVar7 = (ulonglong)uVar10;
                    uVar12 = *(ushort *)(*param_2 + lVar9);
                    if (uVar10 != uVar12) break;
                    if (uVar10 == 0) goto LAB_148eaf00b;
LAB_148eaefd9:
                    lVar9 = lVar9 + 2;
                  }
                  if ((uVar12 | uVar10) < 0x80) {
                    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
                    uVar11 = (ulonglong)uVar12;
                    uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                    if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar11]) goto LAB_148eaefd9;
                  }
                  if (uVar10 != uVar12) goto LAB_148eaf065;
                }
LAB_148eaf00b:
                *(undefined4 *)((longlong)plVar13 + 0xdc) = *(undefined4 *)(param_1 + 0x2c8);
                *(undefined1 *)((longlong)plVar13 + 0x131) = 1;
                FUN_145a03150(plVar1,plVar13);
                *(undefined1 *)(lVar3 + 0x380) = 1;
                puVar4 = *(ushort **)(lVar3 + 0x80);
                if (puVar4 != (ushort *)0x0) {
                  *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
                }
              }
              else {
                if ((int)param_2[1] + iVar2 == 1) goto LAB_148eaf00b;
LAB_148eaf065:
                *(undefined1 *)((longlong)plVar13 + 0x131) = 0;
              }
              plVar13 = plVar13 + 0x27;
            } while (plVar13 != plVar8);
          }
          lVar6 = lVar6 + 0x20;
        } while (lVar6 != lVar5);
      }
    }
  }
LAB_148eaee0d:
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148eaf084 FUN_148eaf084 body=313 status=ok
// SIG undefined FUN_148eaf084(void)

void FUN_148eaf084(longlong param_1,undefined8 *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  int iVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  lVar5 = 0;
  do {
    uVar2 = puVar4[lVar5];
    bVar1 = "sort-dropdown"[lVar5];
    iVar6 = (uint)uVar2 - (uint)bVar1;
    if (iVar6 == 0) {
      if (uVar2 == 0) goto LAB_148eaf190;
    }
    else {
      if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_148eaf103;
      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto code_r0x000148eaf100;
    }
    lVar5 = lVar5 + 1;
  } while( true );
code_r0x000148eaf148:
  iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_148eaf14b:
  if (iVar6 != 0) goto LAB_148eaf17b;
LAB_148eaf150:
  FUN_1442ebe80(lVar3,param_3);
  if (param_3 < 0) goto LAB_148eaf17b;
  iVar6 = *(int *)(lVar3 + 0x1b0);
  goto joined_r0x000148eaf164;
code_r0x000148eaf100:
  iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_148eaf103:
  if (iVar6 != 0) {
    lVar5 = 0;
    do {
      uVar2 = puVar4[lVar5];
      bVar1 = "filter-dropdown"[lVar5];
      iVar6 = (uint)uVar2 - (uint)bVar1;
      if (iVar6 == 0) {
        if (uVar2 == 0) goto LAB_148eaf150;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_148eaf14b;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto code_r0x000148eaf148;
      }
      lVar5 = lVar5 + 1;
    } while( true );
  }
LAB_148eaf190:
  FUN_1466544ca(lVar3,param_3);
  if (param_3 < 0) goto LAB_148eaf17b;
  iVar6 = *(int *)(lVar3 + 0x130);
joined_r0x000148eaf164:
  if (param_3 < iVar6) {
    FUN_140de1078(param_1,&DAT_14cbdfdd8,0,0);
  }
LAB_148eaf17b:
  FUN_1416ae7dc(param_1);
  return;
}



// FUNCTION 148eaf1be FUN_148eaf1be body=486 status=ok
// SIG undefined FUN_148eaf1be(void)

void FUN_148eaf1be(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [24];
  longlong local_68;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar2 = FUN_14479d2ce(param_1 + 0x30);
  lVar3 = FUN_140391a3c(uVar2);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    uStack_88 = 0;
    uStack_84 = 0;
    if ((int)param_2[1] == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    FUN_1405f0d29(&local_8c,puVar5,0);
    *puVar4 = &PTR_FUN_14b9cbe18;
    puVar4[1] = CONCAT44(uStack_88,local_8c);
    *(undefined4 *)(puVar4 + 2) = uStack_84;
    FUN_14039144e(lVar3,puVar4);
    if (*(longlong *)(param_1 + 0x288) != 0) {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x288) + 0x338);
      pcVar7 = "missions";
      if (cVar1 == '\x02') {
        pcVar7 = "replay";
      }
      pcVar6 = "contract";
      if (cVar1 != '\x01') {
        pcVar6 = pcVar7;
      }
      uStack_94 = 0;
      uStack_90 = 0;
      FUN_14052b5e0(&local_98,pcVar6,0);
      local_a8 = CONCAT44(uStack_94,local_98);
      local_a0 = uStack_90;
      FUN_1448075d0(local_58);
      FUN_14000bbd8(local_80,param_2,0);
      FUN_1447325ac(local_80,&local_b0,1);
      FUN_1402b5374(local_58,1,local_b0);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      uVar2 = FUN_14001cc68(0x48,0x10);
      local_c0 = DAT_14cbdd930;
      local_b8 = DAT_14cbdd938;
      FUN_148e949f4(uVar2,&local_c0,local_58);
      FUN_14039144e(lVar3,uVar2);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eaf3a6 FUN_148eaf3a6 body=385 status=ok
// SIG undefined FUN_148eaf3a6(void)

void FUN_148eaf3a6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if ((*(char *)(lVar1 + 0x338) == '\x02') && (*(char *)(lVar1 + 0x2b9) == '\x01')) {
      FUN_148eb001a(param_1,0);
    }
    if (*(char *)(lVar1 + 0x2b8) == '\0') {
      uVar2 = FUN_14479d2ce(param_1 + 0x30);
      lVar3 = FUN_1407f492e(uVar2);
      if (lVar3 != 0) {
        lVar4 = FUN_144a5dd5e();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          if ((*(char *)(lVar1 + 0x33a) == '\x01') && (*(char *)(lVar1 + 0x2d4) == '\x01')) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
          }
          if (*(char *)(lVar1 + 0x2e8) == '\x01') {
            uVar2 = FUN_14479d2ce(param_1 + 0x30);
            lVar3 = FUN_140391a3c(uVar2);
            if (lVar3 != 0) {
              puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
              uStack_30 = 0;
              uStack_2c = 0;
              if (*(int *)(lVar1 + 0x1d8) == 0) {
                puVar6 = &DAT_149dfb77a;
              }
              else {
                puVar6 = *(undefined2 **)(lVar1 + 0x1d0);
              }
              FUN_1405f0d29(&local_34,puVar6,0);
              *puVar5 = &PTR_FUN_14b9cbde8;
              puVar5[1] = CONCAT44(uStack_30,local_34);
              *(undefined4 *)(puVar5 + 2) = uStack_2c;
              FUN_14039144e(lVar3,puVar5);
              FUN_140de1078(param_1,&DAT_14cbdfdc8,0,0);
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eaf53c FUN_148eaf53c body=485 status=ok
// SIG undefined FUN_148eaf53c(void)

void FUN_148eaf53c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  code **local_48;
  undefined8 local_40;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar3 = FUN_1407f4df8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      local_38 = FUN_148eaf3a6;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148eaf73c(param_1,param_2,&DAT_14cbc9d88,param_1);
      local_38 = FUN_148eaf858;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148eaf73c(param_1,param_2,&DAT_14cbc9d80,param_1);
      local_38 = FUN_148eafa56;
      local_30 = 0;
      FUN_148eaf948(param_1,param_2,param_1,&local_38);
      local_38 = FUN_140de0f20;
      local_30 = 0;
      FUN_148eafdb6(param_1,param_2,param_1,&local_38);
    }
  }
  if (((*(longlong *)(param_1 + 0x288) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x288) + 0x338) == '\x01')) &&
     (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c))) {
    uVar2 = (uint)((ulonglong)DAT_14cbdfdf8 >> 0x10);
    uVar4 = (uint)DAT_14cbdfdf8 & 0xffff;
    lVar3 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x118);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x120) - 1U &
                             (int)((ulonglong)DAT_14cbdfdf8 >> 0x20) +
                             ((uint)DAT_14cbdfdf8 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar5 * 0x18);
        if (*plVar1 == DAT_14cbdfdf8) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            local_40 = 0;
            FUN_14485c47a(&local_40,plVar1[1]);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
          }
          break;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eaf73c FUN_148eaf73c body=282 status=ok
// SIG undefined FUN_148eaf73c(void)

void FUN_148eaf73c(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1442ee3c0(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eaf858 FUN_148eaf858 body=238 status=ok
// SIG undefined FUN_148eaf858(void)

void FUN_148eaf858(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1[0x51];
  if (lVar1 != 0) {
    uVar2 = FUN_14479d2ce(param_1 + 6);
    lVar3 = FUN_140391a3c(uVar2);
    if (lVar3 != 0) {
      (**(code **)(*param_1 + 0x108))(param_1,param_1 + 0x2e,1);
      *(byte *)(param_1 + 0x53) = *(byte *)(param_1 + 0x53) | 0x40;
      puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uStack_28 = 0;
      uStack_24 = 0;
      if (*(int *)(lVar1 + 0x1d8) == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = *(undefined2 **)(lVar1 + 0x1d0);
      }
      FUN_1405f0d29(&local_2c,puVar5,0);
      *puVar4 = &PTR_FUN_14b9cbdf8;
      puVar4[1] = CONCAT44(uStack_28,local_2c);
      *(undefined4 *)(puVar4 + 2) = uStack_24;
      *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
      FUN_14039144e(lVar3,puVar4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eaf948 FUN_148eaf948 body=269 status=ok
// SIG undefined FUN_148eaf948(void)

void FUN_148eaf948(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = (code *)*param_4;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1442ee444(param_2,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_40 = DAT_14cbc9d90;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_40);
  if (lVar4 != 0) {
    local_40 = FUN_140ed4b7e;
    local_38 = 0;
    local_48 = &local_40;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eafa56 FUN_148eafa56 body=862 status=ok
// SIG undefined FUN_148eafa56(void)

void FUN_148eafa56(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 auStack_148 [32];
  longlong **local_128;
  longlong **local_120;
  undefined1 local_114 [4];
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    uVar4 = FUN_14479d2ce(param_1 + 0x30);
    lVar5 = FUN_140391a3c(uVar4);
    lVar7 = DAT_14cb8d378;
    if ((lVar5 != 0) && (DAT_14cb8d378 != 0)) {
      local_88[0] = 0;
      local_88[1] = 0;
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      FUN_1446ddda2(local_88,"UIMissionLog_AbandonContract",0);
      plVar6 = (longlong *)FUN_144837462(lVar7,local_88);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
        lVar8 = FUN_140c54336();
        if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
            lVar8 + 0x30)) {
          FUN_140009b9a(local_f8,lVar3 + 0x1e0);
          FUN_14023409e(&local_108,plVar6 + 3,1);
          local_88[0] = CONCAT44(local_88[0]._4_4_,4);
          FUN_14023423e(&local_78,local_f8);
          local_c0 = &uStack_68;
          local_c8 = local_88;
          FUN_14010d304(&local_b8,&local_c8);
          local_d8 = local_108;
          local_d0 = local_100;
          if (local_100 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_100 + 1) = (int)local_100[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_e8,&local_d8,&local_b8);
          FUN_14007f2db(local_b8,uStack_b0 & 0xffffffff);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          if ((longlong *)CONCAT44(uStack_74,local_78) != (longlong *)0x0) {
            (**(code **)(*(longlong *)CONCAT44(uStack_74,local_78) + 0x10))();
          }
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
          uVar4 = FUN_14001cc68(0x58,0x10);
          local_78 = 0;
          local_88[0] = 0;
          local_88[1] = 0;
          local_70 = 0;
          uStack_68 = 0;
          FUN_1446ddda2(local_88,"CancelText",0);
          FUN_1410d1eba(&local_c8,local_88);
          local_a8 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          FUN_1446ddda2(&local_b8,"AbandonText",0);
          FUN_1410d1eba(&local_d8,&local_b8);
          local_110 = 0;
          if (*(int *)(lVar3 + 0x1d8) == 0) {
            puVar9 = &DAT_149dfb77a;
          }
          else {
            puVar9 = *(undefined2 **)(lVar3 + 0x1d0);
          }
          FUN_1405f0d29(local_114,puVar9,0);
          local_128 = &local_d8;
          local_120 = &local_c8;
          FUN_148eb011c(uVar4,local_114,plVar6 + 5,local_e8);
          FUN_14039144e(lVar5,uVar4);
          if (local_d8 != (longlong *)0x0) {
            (**(code **)(*local_d8 + 0x10))();
          }
          if (local_a0 != 0) {
            FUN_1400020a8();
          }
          if (local_c8 != (longlong *)0x0) {
            (**(code **)(*local_c8 + 0x10))();
          }
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          if (local_e8[0] != (longlong *)0x0) {
            (**(code **)(*local_e8[0] + 0x10))();
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eafdb6 FUN_148eafdb6 body=329 status=ok
// SIG undefined FUN_148eafdb6(void)

void FUN_148eafdb6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  lVar1 = param_1 + 0x138;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1442ee4d6(param_2,2);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_1442ee4d6(param_2,8,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar5 = FUN_1442ee4d6(param_2,0x10,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eaff00 FUN_148eaff00 body=263 status=ok
// SIG undefined FUN_148eaff00(void)

void FUN_148eaff00(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14586a994();
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    uVar2 = (uint)((ulonglong)DAT_14cbdfdf8 >> 0x10);
    uVar4 = (uint)DAT_14cbdfdf8 & 0xffff;
    lVar3 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x118);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x120) - 1U &
                             (int)((ulonglong)DAT_14cbdfdf8 >> 0x20) +
                             ((uint)DAT_14cbdfdf8 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar5 * 0x18);
        if (*plVar1 == DAT_14cbdfdf8) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            local_20 = 0;
            FUN_14485c47a(&local_20,plVar1[1]);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
          }
          break;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eb001a FUN_148eb001a body=257 status=ok
// SIG undefined FUN_148eb001a(void)

void FUN_148eb001a(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    lVar3 = FUN_140391a3c(uVar2);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      pcVar5 = "replay_new_db";
      if (param_2 != '\0') {
        pcVar5 = "replay_leave_db";
      }
      uStack_30 = 0;
      uStack_2c = 0;
      FUN_14052b5e0(&local_34,pcVar5,0);
      uStack_3c = 0;
      uStack_38 = 0;
      if (*(int *)(lVar1 + 0x1d8) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = *(undefined2 **)(lVar1 + 0x1d0);
      }
      FUN_1405f0d29(&local_40,puVar6,0);
      *puVar4 = &PTR_FUN_14b9cb8b8;
      puVar4[1] = CONCAT44(uStack_3c,local_40);
      *(undefined4 *)(puVar4 + 2) = uStack_38;
      *(ulonglong *)((longlong)puVar4 + 0x14) = CONCAT44(uStack_30,local_34);
      *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_2c;
      FUN_14039144e(lVar3,puVar4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb011c FUN_148eb011c body=161 status=ok
// SIG undefined FUN_148eb011c(void)

undefined8 *
FUN_148eb011c(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,longlong *param_6)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b9cbe08;
  param_1[1] = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 1);
  plVar1 = (longlong *)*param_3;
  param_1[3] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 4) = (int)param_3[1];
  plVar1 = (longlong *)*param_4;
  param_1[5] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 6) = (int)param_4[1];
  plVar1 = (longlong *)*param_5;
  param_1[7] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 8) = (int)param_5[1];
  plVar1 = (longlong *)*param_6;
  param_1[9] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 10) = (int)param_6[1];
  return param_1;
}



// FUNCTION 148eb01be FUN_148eb01be body=373 status=ok
// SIG undefined FUN_148eb01be(void)

void FUN_148eb01be(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  longlong lVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = thunk_FUN_1402735c8();
  cVar3 = FUN_148eb04ae(lVar4 + 0x870,param_2);
  if (cVar3 == '\f') {
    iVar7 = *(int *)(param_2 + 1);
    puVar5 = (undefined2 *)*param_2;
    puVar8 = puVar5;
    if (iVar7 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    lVar4 = 0;
    do {
      uVar2 = puVar8[lVar4];
      bVar1 = "active"[lVar4];
      iVar6 = (uint)uVar2 - (uint)bVar1;
      if (iVar6 == 0) {
        if (uVar2 == 0) goto LAB_148eb02be;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_148eb02ba;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto code_r0x000148eb02b8;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  if (cVar3 != '\v') {
    if (cVar3 != '\n') goto LAB_148eb0238;
    param_1 = param_1 + 0x10;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(local_40,puVar5,1);
  FUN_1409d9716(param_1,local_40);
  goto LAB_148eb0238;
code_r0x000148eb02b8:
  iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_148eb02ba:
  if (iVar6 == 0) {
LAB_148eb02be:
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 1;
    iVar7 = *(int *)(param_2 + 1);
    puVar5 = (undefined2 *)*param_2;
  }
  if (iVar7 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  lVar4 = 0;
  do {
    uVar2 = puVar5[lVar4];
    bVar1 = "completed"[lVar4];
    iVar7 = (uint)uVar2 - (uint)bVar1;
    if (iVar7 == 0) {
      if (uVar2 == 0) goto LAB_148eb0314;
    }
    else {
      if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_148eb030b;
      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) break;
    }
    lVar4 = lVar4 + 1;
  } while( true );
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_148eb030b:
  if (iVar7 == 0) {
LAB_148eb0314:
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 2;
  }
LAB_148eb0238:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb0334 FUN_148eb0334 body=377 status=ok
// SIG undefined FUN_148eb0334(void)

void FUN_148eb0334(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  longlong lVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = thunk_FUN_1402735c8();
  cVar3 = FUN_148eb04ae(lVar4 + 0x870,param_2);
  if (cVar3 == '\f') {
    iVar7 = *(int *)(param_2 + 1);
    puVar5 = (undefined2 *)*param_2;
    puVar8 = puVar5;
    if (iVar7 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    lVar4 = 0;
    do {
      uVar2 = puVar8[lVar4];
      bVar1 = "active"[lVar4];
      iVar6 = (uint)uVar2 - (uint)bVar1;
      if (iVar6 == 0) {
        if (uVar2 == 0) goto LAB_148eb0439;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_148eb0435;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto code_r0x000148eb0433;
      }
      lVar4 = lVar4 + 1;
    } while( true );
  }
  if (cVar3 != '\v') {
    if (cVar3 != '\n') goto LAB_148eb03b3;
    param_1 = param_1 + 0x10;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(local_48,puVar5,1);
  local_40 = local_48;
  FUN_1408ff3be(param_1);
  goto LAB_148eb03b3;
code_r0x000148eb0433:
  iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_148eb0435:
  if (iVar6 == 0) {
LAB_148eb0439:
    *(char *)(param_1 + 0x20) = *(char *)(param_1 + 0x20) + -1;
    iVar7 = *(int *)(param_2 + 1);
    puVar5 = (undefined2 *)*param_2;
  }
  if (iVar7 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  lVar4 = 0;
  do {
    uVar2 = puVar5[lVar4];
    bVar1 = "completed"[lVar4];
    iVar7 = (uint)uVar2 - (uint)bVar1;
    if (iVar7 == 0) {
      if (uVar2 == 0) goto LAB_148eb048e;
    }
    else {
      if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_148eb0485;
      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) break;
    }
    lVar4 = lVar4 + 1;
  } while( true );
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_148eb0485:
  if (iVar7 == 0) {
LAB_148eb048e:
    *(char *)(param_1 + 0x20) = *(char *)(param_1 + 0x20) + -2;
  }
LAB_148eb03b3:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb04ae FUN_148eb04ae body=103 status=ok
// SIG undefined FUN_148eb04ae(void)

uint FUN_148eb04ae(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  uVar7 = 0;
  uVar5 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar5 = uVar7;
  }
  uVar1 = FUN_144a49b4a(uVar5,puVar6);
  iVar2 = FUN_148e23256(param_1,uVar1,param_2);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *param_1;
    pbVar4 = (byte *)(lVar3 + 0x10);
    if (pbVar4 == (byte *)0x0 || lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)*pbVar4;
    }
  }
  return uVar7;
}



// FUNCTION 148eb0516 FUN_148eb0516 body=553 status=ok
// SIG undefined FUN_148eb0516(void)

void FUN_148eb0516(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_f8 [44];
  undefined4 local_cc;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined4 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined1 local_88 [24];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_cc = param_3;
  local_c8 = param_4;
  uVar4 = FUN_144a06846(param_2,&DAT_14cbdd9d8);
  plVar5 = (longlong *)FUN_1407cbaec(uVar4);
  if ((longlong)(int)plVar5[2] != 0) {
    lVar9 = *plVar5;
    lVar7 = (longlong)(int)plVar5[2] * 0x10 + lVar9;
    local_c0 = lVar7;
    do {
      cVar3 = FUN_140c1ab54(lVar9);
      if (cVar3 != '\0') {
        uVar4 = FUN_140625082(param_2,&DAT_14c9a12e0);
        FUN_1447a97f4(local_88,uVar4);
        uVar4 = FUN_144a7cdd6(lVar9,0);
        local_b8 = 0;
        plStack_b0 = (longlong *)0x0;
        local_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        FUN_1446ddda2(&local_b8,uVar4,0);
        FUN_1407cbbb2(param_1,local_88,&local_b8);
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
        FUN_140714dae(param_1,local_88);
        FUN_14480757c(&local_b8,local_c8);
        uVar4 = FUN_144a06846(param_2,&local_b8);
        plVar5 = (longlong *)FUN_1407cbaec(uVar4);
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
        if (0 < (longlong)(int)plVar5[2]) {
          puVar8 = (undefined8 *)*plVar5;
          puVar6 = puVar8 + (longlong)(int)plVar5[2] * 2;
          do {
            local_b8 = *puVar8;
            plStack_b0 = (longlong *)puVar8[1];
            if (plStack_b0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
              UNLOCK();
            }
            FUN_148eb0516(param_1,&local_b8,local_cc,local_c8);
            plVar5 = plStack_b0;
            if (plStack_b0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_b0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plStack_b0)(plStack_b0);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
            puVar8 = puVar8 + 2;
          } while (puVar8 != puVar6);
        }
        lVar7 = local_c0;
        if (local_70 != 0) {
          FUN_1400020a8();
          lVar7 = local_c0;
        }
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != lVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eb07bc FUN_148eb07bc body=411 status=ok
// SIG undefined FUN_148eb07bc(void)

ulonglong FUN_148eb07bc(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  uVar4 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = uVar4;
  if (1 < *(int *)(param_1 + 0x300)) {
    uVar4 = FUN_144729dda(param_1 + 0x30);
    if ((char)uVar4 != '\0') {
      uVar5 = FUN_14479d2ce(param_1 + 0x30);
      uVar4 = FUN_148a0050a(uVar5);
      if ((char)uVar4 == '\0') {
        uVar6 = *(uint *)(param_1 + 800);
        if (*(char *)(param_1 + 0x329) == '\x01') {
          uVar7 = uVar6;
          if (uVar6 == 0xffffffff) {
            uVar7 = *(uint *)(param_1 + 0x2f8);
          }
          iVar1 = *(int *)(param_1 + 0x300);
          lVar3 = *(longlong *)(param_1 + 0x288);
          do {
            lVar10 = (longlong)(int)(uVar7 + iVar1 + -1);
            uVar4 = lVar10 / (longlong)iVar1 & 0xffffffff;
            uVar9 = lVar10 % (longlong)iVar1;
            uVar7 = (uint)uVar9;
            local_24 = uVar7;
            if (((lVar3 == 0) || ((int)uVar7 < 0)) ||
               (uVar4 = (ulonglong)*(uint *)(lVar3 + 200), (int)*(uint *)(lVar3 + 200) <= (int)uVar7
               )) break;
            lVar10 = *(longlong *)(lVar3 + 0xc0);
            uVar9 = uVar9 & 0xffffffff;
            lVar8 = uVar9 * 0xb0 + lVar10;
            if (lVar8 == 0) break;
            if ((*(char *)(lVar8 + 8) == '\0') && (*(char *)(lVar8 + 0x80) != '\x01'))
            goto LAB_148eb092e;
            uVar2 = uVar6;
            if (uVar6 == 0xffffffff) {
              uVar2 = *(uint *)(param_1 + 0x2f8);
            }
            uVar4 = (ulonglong)uVar2;
          } while (uVar2 != uVar7);
        }
        else {
          if (uVar6 == 0xffffffff) {
            uVar6 = *(uint *)(param_1 + 0x2f8);
          }
          lVar3 = *(longlong *)(param_1 + 0x288);
          local_24 = uVar6 - 1;
          uVar4 = (ulonglong)local_24;
          if ((lVar3 != 0) && (0 < (int)uVar6)) {
            uVar4 = (ulonglong)*(uint *)(lVar3 + 200);
            do {
              if ((int)*(uint *)(lVar3 + 200) < (int)uVar6) break;
              uVar7 = uVar6 - 1;
              lVar10 = *(longlong *)(lVar3 + 0xc0);
              uVar9 = (ulonglong)uVar7;
              lVar8 = uVar9 * 0xb0 + lVar10;
              if (lVar8 == 0) break;
              if ((*(char *)(lVar8 + 8) == '\0') && (*(char *)(lVar8 + 0x80) != '\x01'))
              goto LAB_148eb092e;
              local_24 = uVar6 - 2;
              uVar6 = uVar6 - 1;
            } while (0 < (int)uVar6);
          }
        }
      }
    }
  }
LAB_148eb0802:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
LAB_148eb092e:
  if ((uVar7 < (uint)uVar4) && (uVar4 = uVar9 * 0xb0, lVar10 + uVar4 != 0)) {
    uVar4 = FUN_1460768f0(param_1,&local_24);
  }
  goto LAB_148eb0802;
}



// FUNCTION 148eb0958 FUN_148eb0958 body=398 status=ok
// SIG undefined FUN_148eb0958(void)

ulonglong FUN_148eb0958(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = uVar2;
  if (1 < *(int *)(param_1 + 0x300)) {
    uVar2 = FUN_144729dda(param_1 + 0x30);
    if ((char)uVar2 != '\0') {
      uVar3 = FUN_14479d2ce(param_1 + 0x30);
      uVar2 = FUN_148a0050a(uVar3);
      if (((char)uVar2 == '\0') && (lVar1 = *(longlong *)(param_1 + 0x288), lVar1 != 0)) {
        uVar7 = *(uint *)(param_1 + 800);
        if (*(char *)(param_1 + 0x329) == '\x01') {
          uVar9 = uVar7;
          if (uVar7 == 0xffffffff) {
            uVar9 = *(uint *)(param_1 + 0x2f8);
          }
          uVar4 = (ulonglong)uVar9;
          do {
            lVar8 = (longlong)((int)uVar4 + 1);
            uVar2 = lVar8 / (longlong)*(int *)(param_1 + 0x300) & 0xffffffff;
            uVar5 = lVar8 % (longlong)*(int *)(param_1 + 0x300);
            uVar4 = uVar5 & 0xffffffff;
            local_1c = (uint)uVar5;
            if (((int)local_1c < 0) ||
               (uVar2 = (ulonglong)*(uint *)(lVar1 + 200),
               (int)*(uint *)(lVar1 + 200) <= (int)local_1c)) break;
            lVar8 = *(longlong *)(lVar1 + 0xc0);
            uVar5 = uVar5 & 0xffffffff;
            lVar6 = uVar5 * 0xb0 + lVar8;
            if (lVar6 == 0) break;
            if ((*(char *)(lVar6 + 8) == '\0') && (*(char *)(lVar6 + 0x80) != '\x01'))
            goto LAB_148eb0abd;
            uVar9 = uVar7;
            if (uVar7 == 0xffffffff) {
              uVar9 = *(uint *)(param_1 + 0x2f8);
            }
            uVar2 = (ulonglong)uVar9;
          } while (uVar9 != local_1c);
        }
        else {
          if (uVar7 == 0xffffffff) {
            uVar7 = *(uint *)(param_1 + 0x2f8);
          }
          uVar9 = uVar7 + 1;
          local_1c = uVar9;
          if (-2 < (int)uVar7) {
            uVar2 = (ulonglong)*(uint *)(lVar1 + 200);
            do {
              uVar5 = (ulonglong)local_1c;
              if ((int)*(uint *)(lVar1 + 200) <= (int)local_1c) break;
              lVar8 = *(longlong *)(lVar1 + 0xc0);
              lVar6 = uVar5 * 0xb0 + lVar8;
              if (lVar6 == 0) break;
              if ((*(char *)(lVar6 + 8) == '\0') && (*(char *)(lVar6 + 0x80) != '\x01')) {
                if (-1 < (int)local_1c) goto LAB_148eb0abd;
                break;
              }
              local_1c = local_1c + 1;
            } while (-2 < (int)uVar9);
          }
        }
      }
    }
  }
LAB_148eb099d:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
LAB_148eb0abd:
  if (((int)local_1c < (int)uVar2) && (uVar2 = uVar5 * 0xb0, lVar8 + uVar2 != 0)) {
    uVar2 = FUN_1460768f0(param_1,&local_1c);
  }
  goto LAB_148eb099d;
}



// FUNCTION 148eb0ae8 FUN_148eb0ae8 body=560 status=ok
// SIG undefined FUN_148eb0ae8(void)

ulonglong FUN_148eb0ae8(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  wchar_t *_Str;
  size_t sVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_208 [44];
  uint local_1dc;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  uVar6 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_20 = uVar6;
  if (1 < *(int *)(param_1 + 0x304)) {
    lVar1 = param_1 + 0x30;
    uVar6 = FUN_144729dda(lVar1);
    if ((char)uVar6 != '\0') {
      uVar7 = FUN_14479d2ce(lVar1);
      uVar6 = FUN_148a0050a(uVar7);
      if ((char)uVar6 == '\0') {
        uVar9 = *(uint *)(param_1 + 0x324);
        if (*(char *)(param_1 + 0x329) == '\x01') {
          local_1dc = uVar9;
          if (uVar9 == 0xffffffff) {
            local_1dc = *(uint *)(param_1 + 0x2fc);
          }
          iVar2 = *(int *)(param_1 + 0x304);
          do {
            lVar12 = (longlong)(int)(local_1dc + iVar2 + -1);
            uVar6 = lVar12 / (longlong)iVar2 & 0xffffffff;
            uVar5 = lVar12 % (longlong)iVar2;
            local_1dc = (uint)uVar5;
            if (((int)local_1dc < 0) || (*(int *)(param_1 + 0x310) <= (int)local_1dc)) break;
            lVar12 = (uVar5 & 0xffffffff) * 0xb0;
            if ((*(char *)(*(longlong *)(param_1 + 0x308) + 8 + lVar12) == '\0') &&
               (*(char *)(*(longlong *)(param_1 + 0x308) + lVar12 + 0x80) != '\x01'))
            goto LAB_148eb0c3c;
            uVar3 = uVar9;
            if (uVar9 == 0xffffffff) {
              uVar3 = *(uint *)(param_1 + 0x2fc);
            }
            uVar6 = (ulonglong)uVar3;
          } while (uVar3 != local_1dc);
        }
        else {
          if (uVar9 == 0xffffffff) {
            uVar9 = *(uint *)(param_1 + 0x2fc);
          }
          local_1dc = uVar9 - 1;
          if (0 < (int)uVar9) {
            uVar6 = (ulonglong)*(uint *)(param_1 + 0x310);
            lVar11 = (ulonglong)local_1dc * 0xb0 + 0x80;
            lVar12 = (ulonglong)local_1dc + 1;
            do {
              if ((int)*(uint *)(param_1 + 0x310) < (int)lVar12) break;
              if ((*(char *)(*(longlong *)(param_1 + 0x308) + -0x78 + lVar11) == '\0') &&
                 (*(char *)(*(longlong *)(param_1 + 0x308) + lVar11) != '\x01')) goto LAB_148eb0c3c;
              local_1dc = (int)lVar12 - 2;
              lVar11 = lVar11 + -0xb0;
              lVar10 = lVar12 + -1;
              bVar4 = 0 < lVar12;
              lVar12 = lVar10;
            } while (lVar10 != 0 && bVar4);
          }
        }
      }
    }
  }
LAB_148eb0b34:
  if ((local_20 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
LAB_148eb0c3c:
  FUN_14615de26(param_1,&local_1dc);
  uVar7 = FUN_14479d2ce(lVar1);
  local_1d8 = local_1b8;
  local_1c0 = '\0';
  local_1c8 = local_b8;
  local_1d0 = local_1d8;
  _Str = (wchar_t *)FUN_140c7f682(param_1,L"Event_SetActiveSubNavItemByIndex",&local_1d8);
  local_38 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar8 = wcslen(_Str);
    FUN_1446fe5a4(local_b8,_Str,sVar8 & 0xffffffff,1);
  }
  uVar6 = FUN_140c7f7d4(uVar7,local_30,&local_1dc);
  if (local_38 != 0) {
    uVar6 = FUN_1400020a8();
  }
  if (local_1c0 == '\x01') {
    uVar6 = FUN_1400020a8(local_1d8);
  }
  goto LAB_148eb0b34;
}



// FUNCTION 148eb0d1a FUN_148eb0d1a body=563 status=ok
// SIG undefined FUN_148eb0d1a(void)

ulonglong FUN_148eb0d1a(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  wchar_t *_Str;
  size_t sVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_208 [44];
  uint local_1dc;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  uVar4 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_20 = uVar4;
  if (1 < *(int *)(param_1 + 0x304)) {
    lVar1 = param_1 + 0x30;
    uVar4 = FUN_144729dda(lVar1);
    if ((char)uVar4 != '\0') {
      uVar5 = FUN_14479d2ce(lVar1);
      uVar4 = FUN_148a0050a(uVar5);
      if ((char)uVar4 == '\0') {
        uVar7 = *(uint *)(param_1 + 0x324);
        if (*(char *)(param_1 + 0x329) == '\x01') {
          local_1dc = uVar7;
          if (uVar7 == 0xffffffff) {
            local_1dc = *(uint *)(param_1 + 0x2fc);
          }
          do {
            uVar4 = (longlong)(int)(local_1dc + 1) / (longlong)*(int *)(param_1 + 0x304) &
                    0xffffffff;
            uVar3 = (longlong)(int)(local_1dc + 1) % (longlong)*(int *)(param_1 + 0x304);
            local_1dc = (uint)uVar3;
            if (((int)local_1dc < 0) || (*(int *)(param_1 + 0x310) <= (int)local_1dc)) break;
            lVar9 = (uVar3 & 0xffffffff) * 0xb0;
            if ((*(char *)(*(longlong *)(param_1 + 0x308) + 8 + lVar9) == '\0') &&
               (*(char *)(*(longlong *)(param_1 + 0x308) + lVar9 + 0x80) != '\x01'))
            goto LAB_148eb0e71;
            uVar2 = uVar7;
            if (uVar7 == 0xffffffff) {
              uVar2 = *(uint *)(param_1 + 0x2fc);
            }
            uVar4 = (ulonglong)uVar2;
          } while (uVar2 != local_1dc);
        }
        else {
          if (uVar7 == 0xffffffff) {
            uVar7 = *(uint *)(param_1 + 0x2fc);
          }
          uVar2 = uVar7 + 1;
          uVar4 = (ulonglong)uVar2;
          local_1dc = uVar2;
          if (-2 < (int)uVar7) {
            lVar9 = (ulonglong)uVar2 * 0xb0 + 0x80;
            uVar7 = uVar7 + 2;
            do {
              uVar8 = uVar7;
              if (*(int *)(param_1 + 0x310) <= (int)(uVar8 - 1)) break;
              if ((*(char *)(*(longlong *)(param_1 + 0x308) + -0x78 + lVar9) == '\0') &&
                 (*(char *)(*(longlong *)(param_1 + 0x308) + lVar9) != '\x01')) goto LAB_148eb0e71;
              lVar9 = lVar9 + 0xb0;
              uVar7 = uVar8 + 1;
              local_1dc = uVar8;
            } while (-2 < (int)uVar2);
          }
        }
      }
    }
  }
LAB_148eb0d66:
  if ((local_20 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
LAB_148eb0e71:
  FUN_14615de26(param_1,&local_1dc);
  uVar5 = FUN_14479d2ce(lVar1);
  local_1d8 = local_1b8;
  local_1c0 = '\0';
  local_1c8 = local_b8;
  local_1d0 = local_1d8;
  _Str = (wchar_t *)FUN_140c7f682(param_1,L"Event_SetActiveSubNavItemByIndex",&local_1d8);
  local_38 = 0;
  if (_Str == (wchar_t *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar6 = wcslen(_Str);
    FUN_1446fe5a4(local_b8,_Str,sVar6 & 0xffffffff,1);
  }
  uVar4 = FUN_140c7f7d4(uVar5,local_30,&local_1dc);
  if (local_38 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if (local_1c0 == '\x01') {
    uVar4 = FUN_1400020a8(local_1d8);
  }
  goto LAB_148eb0d66;
}



// FUNCTION 148eb0f4e FUN_148eb0f4e body=108 status=ok
// SIG undefined FUN_148eb0f4e(void)

void FUN_148eb0f4e(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148a0191e();
  FUN_1400b22c2(local_28,"back_sound");
  FUN_140de1078(param_1,local_28,0,0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb0fbc FUN_148eb0fbc body=887 status=ok
// SIG undefined FUN_148eb0fbc(void)

void FUN_148eb0fbc(longlong param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_168 [40];
  longlong local_140;
  longlong *local_138;
  longlong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  char *local_118;
  longlong local_110;
  int local_108;
  undefined4 local_104;
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar5 = FUN_144a2383e();
  if ((lVar5 != 0) && (lVar12 = *(longlong *)(param_1 + 0x288), lVar12 != 0)) {
    if (*(longlong *)(param_1 + 0x160) == 0) {
      puVar6 = &DAT_14c9a1308;
    }
    else {
      puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdd960);
    }
    plVar7 = (longlong *)FUN_1407cbaec(puVar6);
    iVar2 = *param_2;
    if ((-1 < (longlong)iVar2) && (iVar2 < (int)plVar7[2])) {
      lVar10 = *(longlong *)(*plVar7 + (longlong)iVar2 * 0x10);
      if (lVar10 == 0) {
        puVar6 = &DAT_14c9a1308;
      }
      else {
        puVar6 = (undefined8 *)FUN_1446e60f4(lVar10,&DAT_14cbdd968);
      }
      plVar7 = (longlong *)FUN_1407cbaec(puVar6);
      iVar2 = *param_3;
      if ((-1 < (longlong)iVar2) && (iVar2 < (int)plVar7[2])) {
        plVar7 = (longlong *)((longlong)iVar2 * 0x10 + *plVar7);
        cVar3 = FUN_144a8220c(plVar7);
        if (cVar3 != '\0') {
          lVar10 = *plVar7;
          local_140 = lVar12;
          if (lVar10 == 0) {
            puVar6 = &DAT_14c9a1308;
          }
          else {
            puVar6 = (undefined8 *)FUN_1446e60f4(lVar10,&DAT_14cbdfe60);
          }
          plVar7 = (longlong *)FUN_1407cbaec(puVar6);
          uVar8 = *(uint *)(plVar7 + 2);
          if ((ulonglong)uVar8 != 0) {
            local_130 = local_140 + 0x1c8;
            local_138 = (longlong *)(param_1 + 0x308);
            lVar12 = 0;
            uVar9 = 0;
            do {
              FUN_1415a78b6(&local_110);
              local_104 = (undefined4)uVar9;
              FUN_143eb659a(param_1,*plVar7 + lVar12,&local_110,1);
              if ((local_78[0] == 0) || (cVar3 = FUN_145cc8dbe(lVar5,local_78), cVar3 != '\0')) {
                uStack_124 = 0;
                iStack_120 = 0;
                FUN_14052b5e0(&local_128,"sub_entries",0);
                local_118 = "sub_entries";
                FUN_1407cbb06(local_130,&local_110,*(undefined4 *)(param_1 + 0x208));
                iVar2 = *(int *)(param_1 + 0x310);
                *(uint *)(param_1 + 0x310) = iVar2 + 1U;
                if (*(uint *)(param_1 + 0x314) < iVar2 + 1U) {
                  FUN_1407cce00(local_138,iVar2);
                }
                FUN_14573e60c((longlong)iVar2 * 0xb0 + *local_138,&local_110);
              }
              FUN_140716244(&local_110);
              uVar9 = uVar9 + 1;
              lVar12 = lVar12 + 0x10;
            } while (uVar8 != uVar9);
          }
          lVar5 = local_140;
          if ((longlong)*(int *)(param_1 + 0x310) != 0) {
            lVar10 = *(longlong *)(param_1 + 0x308);
            lVar11 = (longlong)*(int *)(param_1 + 0x310) * 0xb0 + lVar10;
            lVar12 = local_140 + 0x188;
            do {
              FUN_1400021e4(lVar10,&local_128);
              local_104 = uStack_11c;
              local_108 = iStack_120;
              uVar8 = iStack_120 - 1;
              if (iStack_120 == 0) {
                uVar8 = 0;
              }
              if (0 < (int)uVar8) {
                uVar9 = 0;
                do {
                  uVar1 = *(ushort *)(CONCAT44(uStack_124,local_128) + uVar9 * 2);
                  *(ushort *)(CONCAT44(uStack_124,local_128) + uVar9 * 2) =
                       (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
                  uVar9 = uVar9 + 1;
                } while (uVar8 != uVar9);
              }
              local_110 = CONCAT44(uStack_124,local_128);
              local_128 = 0;
              uStack_124 = 0;
              iStack_120 = 0;
              uStack_11c = 0;
              uVar4 = FUN_144a23846(lVar12,&local_110);
              *(undefined1 *)(lVar10 + 0x80) = uVar4;
              if (local_110 != 0) {
                FUN_1400020a8();
              }
              if (CONCAT44(uStack_124,local_128) != 0) {
                FUN_1400020a8();
              }
              lVar10 = lVar10 + 0xb0;
            } while (lVar10 != lVar11);
          }
          FUN_1407161be(lVar5 + 0x1a8,param_1 + 0x308);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eb1334 FUN_148eb1334 body=84 status=ok
// SIG undefined FUN_148eb1334(void)

longlong FUN_148eb1334(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 0x10) <= lVar1 + 0xeU) {
    FUN_140213274(param_1,7);
    lVar1 = *(longlong *)(param_1 + 8);
  }
  lVar2 = 0;
  do {
    *(short *)(lVar1 + lVar2 * 2) = (short)(char)(&DAT_14b9c970d)[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 7);
  *(longlong *)(param_1 + 8) = lVar1 + 0xe;
  return param_1;
}



// FUNCTION 148eb1388 FUN_148eb1388 body=121 status=ok
// SIG undefined FUN_148eb1388(void)

longlong FUN_148eb1388(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x4b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb1402 FUN_148eb1402 body=113 status=ok
// SIG undefined FUN_148eb1402(void)

void FUN_148eb1402(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*param_2 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x88));
    pcVar1 = (code *)*param_2;
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    cVar2 = (*pcVar1)(uVar3,param_1);
    if (cVar2 != '\0') {
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000148eb1461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x88));
    return;
  }
  return;
}



// FUNCTION 148eb1474 FUN_148eb1474 body=38 status=ok
// SIG undefined FUN_148eb1474(void)

undefined8 FUN_148eb1474(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_149e8cb32,1);
  return param_2;
}



// FUNCTION 148eb149a FUN_148eb149a body=29 status=ok
// SIG undefined FUN_148eb149a(void)

undefined8 FUN_148eb149a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb14b8 FUN_148eb14b8 body=38 status=ok
// SIG undefined FUN_148eb14b8(void)

undefined8 FUN_148eb14b8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MarkSeen",1);
  return param_2;
}



// FUNCTION 148eb14de FUN_148eb14de body=29 status=ok
// SIG undefined FUN_148eb14de(void)

undefined8 FUN_148eb14de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb14fc FUN_148eb14fc body=38 status=ok
// SIG undefined FUN_148eb14fc(void)

undefined8 FUN_148eb14fc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,&DAT_14a491e31,1);
  return param_2;
}



// FUNCTION 148eb1522 FUN_148eb1522 body=29 status=ok
// SIG undefined FUN_148eb1522(void)

undefined8 FUN_148eb1522(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1540 FUN_148eb1540 body=29 status=ok
// SIG undefined FUN_148eb1540(void)

undefined8 FUN_148eb1540(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb155e FUN_148eb155e body=38 status=ok
// SIG undefined FUN_148eb155e(void)

undefined8 FUN_148eb155e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_EchoUpgrade_UpgradeSDU",1);
  return param_2;
}



// FUNCTION 148eb1584 FUN_148eb1584 body=29 status=ok
// SIG undefined FUN_148eb1584(void)

undefined8 FUN_148eb1584(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb15a2 FUN_148eb15a2 body=38 status=ok
// SIG undefined FUN_148eb15a2(void)

undefined8 FUN_148eb15a2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_EchoUpgrade_RefreshGraph",1);
  return param_2;
}



// FUNCTION 148eb15c8 FUN_148eb15c8 body=38 status=ok
// SIG undefined FUN_148eb15c8(void)

undefined8 FUN_148eb15c8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ClearStandIn",1);
  return param_2;
}



// FUNCTION 148eb15ee FUN_148eb15ee body=29 status=ok
// SIG undefined FUN_148eb15ee(void)

undefined8 FUN_148eb15ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb160c FUN_148eb160c body=29 status=ok
// SIG undefined FUN_148eb160c(void)

undefined8 FUN_148eb160c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb162a FUN_148eb162a body=38 status=ok
// SIG undefined FUN_148eb162a(void)

undefined8 FUN_148eb162a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CompleteEULASequence",1);
  return param_2;
}



// FUNCTION 148eb1650 FUN_148eb1650 body=29 status=ok
// SIG undefined FUN_148eb1650(void)

undefined8 FUN_148eb1650(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb166e FUN_148eb166e body=38 status=ok
// SIG undefined FUN_148eb166e(void)

undefined8 FUN_148eb166e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ConfirmContentWarning",1);
  return param_2;
}



// FUNCTION 148eb1694 FUN_148eb1694 body=47 status=ok
// SIG undefined FUN_148eb1694(void)

longlong FUN_148eb1694(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb16c4 FUN_148eb16c4 body=38 status=ok
// SIG undefined FUN_148eb16c4(void)

undefined8 FUN_148eb16c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AcceptEULA",1);
  return param_2;
}



// FUNCTION 148eb16ea FUN_148eb16ea body=29 status=ok
// SIG undefined FUN_148eb16ea(void)

undefined8 FUN_148eb16ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1708 FUN_148eb1708 body=38 status=ok
// SIG undefined FUN_148eb1708(void)

undefined8 FUN_148eb1708(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetGameSettings",1);
  return param_2;
}



// FUNCTION 148eb172e FUN_148eb172e body=29 status=ok
// SIG undefined FUN_148eb172e(void)

undefined8 FUN_148eb172e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb174c FUN_148eb174c body=38 status=ok
// SIG undefined FUN_148eb174c(void)

undefined8 FUN_148eb174c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetGameSetting_TrueMode",1);
  return param_2;
}



// FUNCTION 148eb1772 FUN_148eb1772 body=78 status=ok
// SIG undefined FUN_148eb1772(void)

void FUN_148eb1772(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb0);
  memset(_Dst,0,0xb0);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8acba0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 148eb17c0 FUN_148eb17c0 body=38 status=ok
// SIG undefined FUN_148eb17c0(void)

undefined8 FUN_148eb17c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AddStandInTransform",1);
  return param_2;
}



// FUNCTION 148eb17e6 FUN_148eb17e6 body=29 status=ok
// SIG undefined FUN_148eb17e6(void)

undefined8 FUN_148eb17e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1804 FUN_148eb1804 body=38 status=ok
// SIG undefined FUN_148eb1804(void)

undefined8 FUN_148eb1804(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AddStandInCameraTransform",1);
  return param_2;
}



// FUNCTION 148eb182a FUN_148eb182a body=29 status=ok
// SIG undefined FUN_148eb182a(void)

undefined8 FUN_148eb182a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1848 FUN_148eb1848 body=38 status=ok
// SIG undefined FUN_148eb1848(void)

undefined8 FUN_148eb1848(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AddStandInCameraFOV",1);
  return param_2;
}



// FUNCTION 148eb186e FUN_148eb186e body=29 status=ok
// SIG undefined FUN_148eb186e(void)

undefined8 FUN_148eb186e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb188c FUN_148eb188c body=38 status=ok
// SIG undefined FUN_148eb188c(void)

undefined8 FUN_148eb188c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetStandInInventoryIdentity",1);
  return param_2;
}



// FUNCTION 148eb18b2 FUN_148eb18b2 body=42 status=ok
// SIG undefined FUN_148eb18b2(void)

longlong FUN_148eb18b2(longlong param_1,int param_2)

{
  FUN_140368b56(param_1 + 0x38);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb18dc FUN_148eb18dc body=38 status=ok
// SIG undefined FUN_148eb18dc(void)

undefined8 FUN_148eb18dc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetStandInCameraIdentity",1);
  return param_2;
}



// FUNCTION 148eb1902 FUN_148eb1902 body=29 status=ok
// SIG undefined FUN_148eb1902(void)

undefined8 FUN_148eb1902(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1920 FUN_148eb1920 body=38 status=ok
// SIG undefined FUN_148eb1920(void)

undefined8 FUN_148eb1920(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ResetStandInCamera",1);
  return param_2;
}



// FUNCTION 148eb1946 FUN_148eb1946 body=29 status=ok
// SIG undefined FUN_148eb1946(void)

undefined8 FUN_148eb1946(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1964 FUN_148eb1964 body=38 status=ok
// SIG undefined FUN_148eb1964(void)

undefined8 FUN_148eb1964(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"EnterStandInCameraMode",1);
  return param_2;
}



// FUNCTION 148eb198a FUN_148eb198a body=29 status=ok
// SIG undefined FUN_148eb198a(void)

undefined8 FUN_148eb198a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb19a8 FUN_148eb19a8 body=29 status=ok
// SIG undefined FUN_148eb19a8(void)

undefined8 FUN_148eb19a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb19c6 FUN_148eb19c6 body=38 status=ok
// SIG undefined FUN_148eb19c6(void)

undefined8 FUN_148eb19c6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_OnDLCCharacterSelected",1);
  return param_2;
}



// FUNCTION 148eb19ec FUN_148eb19ec body=29 status=ok
// SIG undefined FUN_148eb19ec(void)

undefined8 FUN_148eb19ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1a0a FUN_148eb1a0a body=38 status=ok
// SIG undefined FUN_148eb1a0a(void)

undefined8 FUN_148eb1a0a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"LoadCharacter_LineupMode",1);
  return param_2;
}



// FUNCTION 148eb1a30 FUN_148eb1a30 body=29 status=ok
// SIG undefined FUN_148eb1a30(void)

undefined8 FUN_148eb1a30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1a4e FUN_148eb1a4e body=38 status=ok
// SIG undefined FUN_148eb1a4e(void)

undefined8 FUN_148eb1a4e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SelectCharacter",1);
  return param_2;
}



// FUNCTION 148eb1a74 FUN_148eb1a74 body=29 status=ok
// SIG undefined FUN_148eb1a74(void)

undefined8 FUN_148eb1a74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1a92 FUN_148eb1a92 body=38 status=ok
// SIG undefined FUN_148eb1a92(void)

undefined8 FUN_148eb1a92(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_OnCharacterSelected_LateJoin",1);
  return param_2;
}



// FUNCTION 148eb1ab8 FUN_148eb1ab8 body=64 status=ok
// SIG undefined FUN_148eb1ab8(void)

longlong FUN_148eb1ab8(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1af8 FUN_148eb1af8 body=38 status=ok
// SIG undefined FUN_148eb1af8(void)

undefined8 FUN_148eb1af8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RequestDeleteCharacter",1);
  return param_2;
}



// FUNCTION 148eb1b1e FUN_148eb1b1e body=59 status=ok
// SIG undefined FUN_148eb1b1e(void)

longlong FUN_148eb1b1e(longlong param_1,int param_2)

{
  FUN_140cb1696(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1b5a FUN_148eb1b5a body=38 status=ok
// SIG undefined FUN_148eb1b5a(void)

undefined8 FUN_148eb1b5a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_ViewRecentFriendProfiles",1);
  return param_2;
}



// FUNCTION 148eb1b80 FUN_148eb1b80 body=48 status=ok
// SIG undefined FUN_148eb1b80(void)

void FUN_148eb1b80(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 148eb1bb0 FUN_148eb1bb0 body=29 status=ok
// SIG undefined FUN_148eb1bb0(void)

undefined8 FUN_148eb1bb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1bce FUN_148eb1bce body=38 status=ok
// SIG undefined FUN_148eb1bce(void)

undefined8 FUN_148eb1bce(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_UpdatePageForCategory",1);
  return param_2;
}



// FUNCTION 148eb1bf4 FUN_148eb1bf4 body=104 status=ok
// SIG undefined FUN_148eb1bf4(void)

void FUN_148eb1bf4(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb70);
  memset(_Dst,0,0xb70);
  FUN_145854e74(_Dst);
  *_Dst = &PTR_FUN_14b8b64f0;
  *(undefined4 *)(_Dst + 0x16d) = 0;
  _Dst[0x16a] = 0;
  _Dst[0x16b] = 0;
  *(undefined4 *)(_Dst + 0x16c) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 148eb1c5c FUN_148eb1c5c body=68 status=ok
// SIG undefined FUN_148eb1c5c(void)

void FUN_148eb1c5c(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xd8);
  memset(_Dst,0,0xd8);
  FUN_148c816f8(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 148eb1ca0 FUN_148eb1ca0 body=29 status=ok
// SIG undefined FUN_148eb1ca0(void)

undefined8 FUN_148eb1ca0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1cbe FUN_148eb1cbe body=38 status=ok
// SIG undefined FUN_148eb1cbe(void)

undefined8 FUN_148eb1cbe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_StopMatchmaking",1);
  return param_2;
}



// FUNCTION 148eb1ce4 FUN_148eb1ce4 body=29 status=ok
// SIG undefined FUN_148eb1ce4(void)

undefined8 FUN_148eb1ce4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1d02 FUN_148eb1d02 body=38 status=ok
// SIG undefined FUN_148eb1d02(void)

undefined8 FUN_148eb1d02(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_MatchmakingMenuOpenStatusChanged",1);
  return param_2;
}



// FUNCTION 148eb1d28 FUN_148eb1d28 body=29 status=ok
// SIG undefined FUN_148eb1d28(void)

undefined8 FUN_148eb1d28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1d46 FUN_148eb1d46 body=38 status=ok
// SIG undefined FUN_148eb1d46(void)

undefined8 FUN_148eb1d46(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_StartMatchmaking",1);
  return param_2;
}



// FUNCTION 148eb1d6c FUN_148eb1d6c body=47 status=ok
// SIG undefined FUN_148eb1d6c(void)

longlong FUN_148eb1d6c(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1d9c FUN_148eb1d9c body=38 status=ok
// SIG undefined FUN_148eb1d9c(void)

undefined8 FUN_148eb1d9c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_SelectExperience",1);
  return param_2;
}



// FUNCTION 148eb1dc2 FUN_148eb1dc2 body=29 status=ok
// SIG undefined FUN_148eb1dc2(void)

undefined8 FUN_148eb1dc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1de0 FUN_148eb1de0 body=38 status=ok
// SIG undefined FUN_148eb1de0(void)

undefined8 FUN_148eb1de0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_EnableOnline",1);
  return param_2;
}



// FUNCTION 148eb1e06 FUN_148eb1e06 body=29 status=ok
// SIG undefined FUN_148eb1e06(void)

undefined8 FUN_148eb1e06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1e24 FUN_148eb1e24 body=38 status=ok
// SIG undefined FUN_148eb1e24(void)

undefined8 FUN_148eb1e24(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_ClearSelectedExperiences",1);
  return param_2;
}



// FUNCTION 148eb1e4a FUN_148eb1e4a body=47 status=ok
// SIG undefined FUN_148eb1e4a(void)

longlong FUN_148eb1e4a(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1e7a FUN_148eb1e7a body=38 status=ok
// SIG undefined FUN_148eb1e7a(void)

undefined8 FUN_148eb1e7a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_SelectRegion",1);
  return param_2;
}



// FUNCTION 148eb1ea0 FUN_148eb1ea0 body=29 status=ok
// SIG undefined FUN_148eb1ea0(void)

undefined8 FUN_148eb1ea0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1ebe FUN_148eb1ebe body=38 status=ok
// SIG undefined FUN_148eb1ebe(void)

undefined8 FUN_148eb1ebe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SetMatchmakingGameSettings",1);
  return param_2;
}



// FUNCTION 148eb1ee4 FUN_148eb1ee4 body=29 status=ok
// SIG undefined FUN_148eb1ee4(void)

undefined8 FUN_148eb1ee4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1f02 FUN_148eb1f02 body=38 status=ok
// SIG undefined FUN_148eb1f02(void)

undefined8 FUN_148eb1f02(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_UpdateMatchmakingSettings",1);
  return param_2;
}



// FUNCTION 148eb1f28 FUN_148eb1f28 body=99 status=ok
// SIG undefined FUN_148eb1f28(void)

void FUN_148eb1f28(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(200);
  memset(_Dst,0,200);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8b7360;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  _Dst[0x18] = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 148eb1f8c FUN_148eb1f8c body=29 status=ok
// SIG undefined FUN_148eb1f8c(void)

undefined8 FUN_148eb1f8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb1faa FUN_148eb1faa body=38 status=ok
// SIG undefined FUN_148eb1faa(void)

undefined8 FUN_148eb1faa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_ReplayMissionWarning",1);
  return param_2;
}



// FUNCTION 148eb1fd0 FUN_148eb1fd0 body=85 status=ok
// SIG undefined FUN_148eb1fd0(void)

void FUN_148eb1fd0(undefined8 param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb8);
  memset(_Dst,0,0xb8);
  FUN_1408f3f9e(_Dst);
  *_Dst = &PTR_FUN_14b8b8110;
  *(undefined1 *)(_Dst + 0x16) = 0;
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 148eb2026 FUN_148eb2026 body=29 status=ok
// SIG undefined FUN_148eb2026(void)

undefined8 FUN_148eb2026(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb2044 FUN_148eb2044 body=38 status=ok
// SIG undefined FUN_148eb2044(void)

undefined8 FUN_148eb2044(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"TitlePicker_TitleChosen",1);
  return param_2;
}



// FUNCTION 148eb206a FUN_148eb206a body=29 status=ok
// SIG undefined FUN_148eb206a(void)

undefined8 FUN_148eb206a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb2088 FUN_148eb2088 body=38 status=ok
// SIG undefined FUN_148eb2088(void)

undefined8 FUN_148eb2088(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"WantsToAcceptTraitMission",1);
  return param_2;
}



// FUNCTION 148eb20ae FUN_148eb20ae body=38 status=ok
// SIG undefined FUN_148eb20ae(void)

undefined8 FUN_148eb20ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AcceptAndTrackMission",1);
  return param_2;
}



// FUNCTION 148eb20d4 FUN_148eb20d4 body=29 status=ok
// SIG undefined FUN_148eb20d4(void)

undefined8 FUN_148eb20d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb20f2 FUN_148eb20f2 body=29 status=ok
// SIG undefined FUN_148eb20f2(void)

undefined8 FUN_148eb20f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb2110 FUN_148eb2110 body=38 status=ok
// SIG undefined FUN_148eb2110(void)

undefined8 FUN_148eb2110(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_RefreshMissionLog",1);
  return param_2;
}



// FUNCTION 148eb2136 FUN_148eb2136 body=29 status=ok
// SIG undefined FUN_148eb2136(void)

undefined8 FUN_148eb2136(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb2154 FUN_148eb2154 body=38 status=ok
// SIG undefined FUN_148eb2154(void)

undefined8 FUN_148eb2154(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_TrackMission",1);
  return param_2;
}



// FUNCTION 148eb217a FUN_148eb217a body=29 status=ok
// SIG undefined FUN_148eb217a(void)

undefined8 FUN_148eb217a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb2198 FUN_148eb2198 body=38 status=ok
// SIG undefined FUN_148eb2198(void)

undefined8 FUN_148eb2198(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_ShowMissionOnMap",1);
  return param_2;
}



// FUNCTION 148eb21be FUN_148eb21be body=38 status=ok
// SIG undefined FUN_148eb21be(void)

undefined8 FUN_148eb21be(undefined8 param_1,int param_2)

{
  FUN_148eb220a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb21e4 FUN_148eb21e4 body=38 status=ok
// SIG undefined FUN_148eb21e4(void)

undefined8 FUN_148eb21e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_AbandonContractWarning",1);
  return param_2;
}



// FUNCTION 148eb220a FUN_148eb220a body=81 status=ok
// SIG undefined FUN_148eb220a(void)

void FUN_148eb220a(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148eb2250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148eb225c FUN_148eb225c body=29 status=ok
// SIG undefined FUN_148eb225c(void)

undefined8 FUN_148eb225c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb227a FUN_148eb227a body=38 status=ok
// SIG undefined FUN_148eb227a(void)

undefined8 FUN_148eb227a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_MissionLog_ClearPip",1);
  return param_2;
}



// FUNCTION 148eb22a0 FUN_148eb22a0 body=38 status=ok
// SIG undefined FUN_148eb22a0(void)

undefined8 FUN_148eb22a0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RemoveTag",1);
  return param_2;
}



// FUNCTION 148eb22c6 FUN_148eb22c6 body=29 status=ok
// SIG undefined FUN_148eb22c6(void)

undefined8 FUN_148eb22c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb22e4 FUN_148eb22e4 body=38 status=ok
// SIG undefined FUN_148eb22e4(void)

undefined8 FUN_148eb22e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PlayerController",1);
  return param_2;
}



// FUNCTION 148eb230a FUN_148eb230a body=29 status=ok
// SIG undefined FUN_148eb230a(void)

undefined8 FUN_148eb230a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148eb2328 FUN_148eb2328 body=86 status=ok
// SIG undefined FUN_148eb2328(void)

void FUN_148eb2328(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_148eb237e(lVar1);
      if (lVar1 != 0) {
        FUN_14426981c(lVar1 + 0x30);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148eb237e FUN_148eb237e body=103 status=ok
// SIG undefined FUN_148eb237e(void)

void FUN_148eb237e(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145b93420();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_148eb23e6(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb23e6 FUN_148eb23e6 body=76 status=ok
// SIG undefined FUN_148eb23e6(void)

void FUN_148eb23e6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145b93420();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_148eb2423;
    }
  }
  lVar2 = 0;
LAB_148eb2423:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 148eb2432 FUN_148eb2432 body=30 status=ok
// SIG undefined FUN_148eb2432(void)

void * FUN_148eb2432(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb245c FUN_148eb245c body=333 status=ok
// SIG undefined FUN_148eb245c(void)

void FUN_148eb245c(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  longlong local_88 [5];
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[2] = 0;
  local_88[3] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_88[0] = 0;
  local_58 = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,&local_58,local_88);
  FUN_1409ee323(local_58,local_88[0],local_88 + 2);
  local_88[0] = 0;
  local_88[1] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  local_58 = 0;
  local_60 = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,&local_60,&local_58);
  FUN_1409ee323(local_60,local_58,local_88);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,2);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_58);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_88 + 2,local_88
               ,local_58 & 0xffffffff);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb25aa FUN_148eb25aa body=30 status=ok
// SIG undefined FUN_148eb25aa(void)

void * FUN_148eb25aa(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb25d4 FUN_148eb25d4 body=159 status=ok
// SIG undefined FUN_148eb25d4(void)

void FUN_148eb25d4(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_1c);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_20);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_1c,local_20);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb2674 FUN_148eb2674 body=30 status=ok
// SIG undefined FUN_148eb2674(void)

void * FUN_148eb2674(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb269e FUN_148eb269e body=197 status=ok
// SIG undefined FUN_148eb269e(void)

void FUN_148eb269e(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_58[3] = 0;
  local_58[2] = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,local_58 + 2,local_58 + 3);
  FUN_1409ee323(local_58[2],local_58[3],local_58);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_58);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[4] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb2764 FUN_148eb2764 body=30 status=ok
// SIG undefined FUN_148eb2764(void)

void * FUN_148eb2764(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb278e FUN_148eb278e body=234 status=ok
// SIG undefined FUN_148eb278e(void)

void FUN_148eb278e(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_58[3] = 0;
  local_58[2] = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,local_58 + 2,local_58 + 3);
  FUN_1409ee323(local_58[2],local_58[3],local_58);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar2 + 0x220))(plVar2,local_58 + 3);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_58,
               local_58[3] & 0xffffffff);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[4] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb287a FUN_148eb287a body=30 status=ok
// SIG undefined FUN_148eb287a(void)

void * FUN_148eb287a(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb2898 FUN_148eb2898 body=37 status=ok
// SIG undefined FUN_148eb2898(void)

void FUN_148eb2898(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000148eb28b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148eb28c4 FUN_148eb28c4 body=244 status=ok
// SIG undefined FUN_148eb28c4(void)

undefined8 *
FUN_148eb28c4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_148eb29ba(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb29ba FUN_148eb29ba body=384 status=ok
// SIG undefined FUN_148eb29ba(void)

void FUN_148eb29ba(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148eb2acd:
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
    *puVar5 = &PTR_FUN_14b9cbf20;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148eb2acd;
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
    *puVar5 = &PTR_FUN_14b9cbf20;
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
                    /* WARNING: Could not recover jumptable at 0x000148eb2ac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148eb2b3a FUN_148eb2b3a body=64 status=ok
// SIG undefined FUN_148eb2b3a(void)

undefined8 * FUN_148eb2b3a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9cbf20;
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



// FUNCTION 148eb2b7e FUN_148eb2b7e body=81 status=ok
// SIG undefined FUN_148eb2b7e(void)

undefined8 FUN_148eb2b7e(longlong param_1)

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



// FUNCTION 148eb2bd6 FUN_148eb2bd6 body=89 status=ok
// SIG undefined FUN_148eb2bd6(void)

bool FUN_148eb2bd6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148eb2c21;
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
LAB_148eb2c21:
  return lVar6 == param_2;
}



// FUNCTION 148eb2c4c FUN_148eb2c4c body=118 status=ok
// SIG undefined FUN_148eb2c4c(void)

void FUN_148eb2c4c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9cbf20;
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



// FUNCTION 148eb2cc2 FUN_148eb2cc2 body=118 status=ok
// SIG undefined FUN_148eb2cc2(void)

void FUN_148eb2cc2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9cbf20;
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



// FUNCTION 148eb2d38 FUN_148eb2d38 body=156 status=ok
// SIG undefined FUN_148eb2d38(void)

void FUN_148eb2d38(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9cbf20;
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
                    /* WARNING: Could not recover jumptable at 0x000148eb2dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148eb2dd4 FUN_148eb2dd4 body=100 status=ok
// SIG undefined FUN_148eb2dd4(void)

void FUN_148eb2dd4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148eb2e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148eb2e2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148eb2e38 FUN_148eb2e38 body=100 status=ok
// SIG undefined FUN_148eb2e38(void)

ulonglong FUN_148eb2e38(longlong param_1)

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
LAB_148eb2e91:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148eb2e91;
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



// FUNCTION 148eb2e9c FUN_148eb2e9c body=48 status=ok
// SIG undefined FUN_148eb2e9c(void)

void FUN_148eb2e9c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xa8,8);
  }
  return;
}



// FUNCTION 148eb2ecc FUN_148eb2ecc body=132 status=ok
// SIG undefined FUN_148eb2ecc(void)

void FUN_148eb2ecc(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148eb2f52 FUN_148eb2f52 body=325 status=ok
// SIG undefined FUN_148eb2f52(void)

undefined8 * FUN_148eb2f52(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  FUN_14023423e(param_1 + 6,param_2 + 6);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  FUN_14023423e(param_1 + 9,param_2 + 9);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  FUN_14023423e(param_1 + 0xc,param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  param_1[0x10] = 0;
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  param_2[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x12] = param_2[0x12];
  param_2[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  param_2[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)((longlong)param_2 + 0xa4);
  return param_1;
}



// FUNCTION 148eb3098 FUN_148eb3098 body=146 status=ok
// SIG undefined FUN_148eb3098(void)

void FUN_148eb3098(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0xa8,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xa8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148eb312c FUN_148eb312c body=30 status=ok
// SIG undefined FUN_148eb312c(void)

void * FUN_148eb312c(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb3156 FUN_148eb3156 body=122 status=ok
// SIG undefined FUN_148eb3156(void)

void FUN_148eb3156(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_1c);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_1c);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb31d2 FUN_148eb31d2 body=132 status=ok
// SIG undefined FUN_148eb31d2(void)

void FUN_148eb31d2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148eb3258 FUN_148eb3258 body=30 status=ok
// SIG undefined FUN_148eb3258(void)

void * FUN_148eb3258(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb3276 FUN_148eb3276 body=37 status=ok
// SIG undefined FUN_148eb3276(void)

void FUN_148eb3276(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000148eb3297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148eb32a2 FUN_148eb32a2 body=30 status=ok
// SIG undefined FUN_148eb32a2(void)

void * FUN_148eb32a2(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb32c6 FUN_148eb32c6 body=30 status=ok
// SIG undefined FUN_148eb32c6(void)

void * FUN_148eb32c6(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb32f0 FUN_148eb32f0 body=234 status=ok
// SIG undefined FUN_148eb32f0(void)

void FUN_148eb32f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_58[3] = 0;
  local_58[2] = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,local_58 + 2,local_58 + 3);
  FUN_1409ee323(local_58[2],local_58[3],local_58);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar2 + 0x220))(plVar2,local_58 + 3);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_58,
               local_58[3] & 0xffffffff);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[4] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb33dc FUN_148eb33dc body=30 status=ok
// SIG undefined FUN_148eb33dc(void)

void * FUN_148eb33dc(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb3406 FUN_148eb3406 body=432 status=ok
// SIG undefined FUN_148eb3406(void)

void FUN_148eb3406(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Src;
  ulonglong uVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  ulonglong uStack_80;
  longlong local_78 [3];
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78[0] = 0;
  local_78[1] = 0;
  plVar6 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_88 = (void *)0x0;
  local_58 = 0;
  (**(code **)(*plVar6 + 0x1c8))(plVar6,&local_58,&local_88);
  FUN_1409ee323(local_58,local_88,local_78);
  local_88 = (void *)0x0;
  uStack_80 = 0;
  plVar6 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  local_58 = 0;
  local_60 = 0;
  (**(code **)(*plVar6 + 0x1c8))(plVar6,&local_60,&local_58);
  FUN_1409ee323(local_60,local_58,&local_88);
  plVar6 = (longlong *)(**(code **)(*param_2 + 8))(param_2,2);
  (**(code **)(*plVar6 + 0x220))(plVar6,&local_58);
  cVar5 = (**(code **)(*param_2 + 0x30))(param_2);
  uVar4 = local_58;
  _Src = local_88;
  if (cVar5 == '\0') {
    pcVar2 = *(code **)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    lVar3 = *(longlong *)(param_1 + 8);
    local_98 = (void *)0x0;
    lVar7 = (longlong)(int)uStack_80;
    local_90 = (int)uStack_80;
    if (lVar7 == 0) {
      local_8c = 0;
    }
    else {
      FUN_1446dd670(&local_98,uStack_80 & 0xffffffff,0);
      memcpy(local_98,_Src,lVar7 * 2);
    }
    (*pcVar2)(iVar1 + lVar3,local_78,&local_98,uVar4 & 0xffffffff);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb35b8 FUN_148eb35b8 body=68 status=ok
// SIG undefined FUN_148eb35b8(void)

undefined8 * FUN_148eb35b8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9cc0b0;
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



// FUNCTION 148eb3600 FUN_148eb3600 body=81 status=ok
// SIG undefined FUN_148eb3600(void)

undefined8 FUN_148eb3600(longlong param_1)

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



// FUNCTION 148eb3658 FUN_148eb3658 body=89 status=ok
// SIG undefined FUN_148eb3658(void)

bool FUN_148eb3658(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148eb36a3;
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
LAB_148eb36a3:
  return lVar6 == param_2;
}



// FUNCTION 148eb36ce FUN_148eb36ce body=118 status=ok
// SIG undefined FUN_148eb36ce(void)

void FUN_148eb36ce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9cc0b0;
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



// FUNCTION 148eb3744 FUN_148eb3744 body=118 status=ok
// SIG undefined FUN_148eb3744(void)

void FUN_148eb3744(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9cc0b0;
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



// FUNCTION 148eb37ba FUN_148eb37ba body=156 status=ok
// SIG undefined FUN_148eb37ba(void)

void FUN_148eb37ba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9cc0b0;
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
                    /* WARNING: Could not recover jumptable at 0x000148eb3846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148eb3856 FUN_148eb3856 body=100 status=ok
// SIG undefined FUN_148eb3856(void)

void FUN_148eb3856(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148eb38a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148eb38af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148eb38ba FUN_148eb38ba body=100 status=ok
// SIG undefined FUN_148eb38ba(void)

ulonglong FUN_148eb38ba(longlong param_1)

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
LAB_148eb3913:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148eb3913;
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



// FUNCTION 148eb391e FUN_148eb391e body=68 status=ok
// SIG undefined FUN_148eb391e(void)

undefined8 * FUN_148eb391e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9cc120;
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



// FUNCTION 148eb3966 FUN_148eb3966 body=81 status=ok
// SIG undefined FUN_148eb3966(void)

undefined8 FUN_148eb3966(longlong param_1)

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



// FUNCTION 148eb39be FUN_148eb39be body=89 status=ok
// SIG undefined FUN_148eb39be(void)

bool FUN_148eb39be(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148eb3a09;
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
LAB_148eb3a09:
  return lVar6 == param_2;
}



// FUNCTION 148eb3a34 FUN_148eb3a34 body=118 status=ok
// SIG undefined FUN_148eb3a34(void)

void FUN_148eb3a34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9cc120;
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



// FUNCTION 148eb3aaa FUN_148eb3aaa body=118 status=ok
// SIG undefined FUN_148eb3aaa(void)

void FUN_148eb3aaa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9cc120;
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



// FUNCTION 148eb3b20 FUN_148eb3b20 body=156 status=ok
// SIG undefined FUN_148eb3b20(void)

void FUN_148eb3b20(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b160;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9cc120;
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
                    /* WARNING: Could not recover jumptable at 0x000148eb3bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148eb3bbc FUN_148eb3bbc body=104 status=ok
// SIG undefined FUN_148eb3bbc(void)

void FUN_148eb3bbc(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148eb3c09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148eb3c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148eb3c24 FUN_148eb3c24 body=101 status=ok
// SIG undefined FUN_148eb3c24(void)

ulonglong FUN_148eb3c24(longlong param_1)

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
LAB_148eb3c7e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148eb3c7e;
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



// FUNCTION 148eb3c8a FUN_148eb3c8a body=64 status=ok
// SIG undefined FUN_148eb3c8a(void)

undefined8 * FUN_148eb3c8a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9cc190;
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



// FUNCTION 148eb3cce FUN_148eb3cce body=81 status=ok
// SIG undefined FUN_148eb3cce(void)

undefined8 FUN_148eb3cce(longlong param_1)

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



// FUNCTION 148eb3d26 FUN_148eb3d26 body=89 status=ok
// SIG undefined FUN_148eb3d26(void)

bool FUN_148eb3d26(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148eb3d71;
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
LAB_148eb3d71:
  return lVar6 == param_2;
}



// FUNCTION 148eb3d9c FUN_148eb3d9c body=118 status=ok
// SIG undefined FUN_148eb3d9c(void)

void FUN_148eb3d9c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9cc190;
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



// FUNCTION 148eb3e12 FUN_148eb3e12 body=118 status=ok
// SIG undefined FUN_148eb3e12(void)

void FUN_148eb3e12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9cc190;
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



// FUNCTION 148eb3e88 FUN_148eb3e88 body=156 status=ok
// SIG undefined FUN_148eb3e88(void)

void FUN_148eb3e88(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9cc190;
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
                    /* WARNING: Could not recover jumptable at 0x000148eb3f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148eb3f24 FUN_148eb3f24 body=104 status=ok
// SIG undefined FUN_148eb3f24(void)

void FUN_148eb3f24(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148eb3f71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148eb3f82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148eb3f8c FUN_148eb3f8c body=101 status=ok
// SIG undefined FUN_148eb3f8c(void)

ulonglong FUN_148eb3f8c(longlong param_1)

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
LAB_148eb3fe6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148eb3fe6;
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



// FUNCTION 148eb3ff2 FUN_148eb3ff2 body=68 status=ok
// SIG undefined FUN_148eb3ff2(void)

undefined8 * FUN_148eb3ff2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9cc220;
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



// FUNCTION 148eb403a FUN_148eb403a body=83 status=ok
// SIG undefined FUN_148eb403a(void)

undefined8 FUN_148eb403a(longlong param_1)

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



// FUNCTION 148eb4094 FUN_148eb4094 body=89 status=ok
// SIG undefined FUN_148eb4094(void)

bool FUN_148eb4094(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148eb40df;
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
LAB_148eb40df:
  return lVar6 == param_2;
}



// FUNCTION 148eb410a FUN_148eb410a body=118 status=ok
// SIG undefined FUN_148eb410a(void)

void FUN_148eb410a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9cc220;
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



// FUNCTION 148eb4180 FUN_148eb4180 body=156 status=ok
// SIG undefined FUN_148eb4180(void)

void FUN_148eb4180(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9cc220;
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
                    /* WARNING: Could not recover jumptable at 0x000148eb420c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148eb421c FUN_148eb421c body=100 status=ok
// SIG undefined FUN_148eb421c(void)

void FUN_148eb421c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148eb4268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148eb4275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148eb4280 FUN_148eb4280 body=100 status=ok
// SIG undefined FUN_148eb4280(void)

ulonglong FUN_148eb4280(longlong param_1)

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
LAB_148eb42d9:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148eb42d9;
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



// FUNCTION 148eb42e4 FUN_148eb42e4 body=30 status=ok
// SIG undefined FUN_148eb42e4(void)

void * FUN_148eb42e4(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb4314 FUN_148eb4314 body=333 status=ok
// SIG undefined FUN_148eb4314(void)

void FUN_148eb4314(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  longlong local_88 [5];
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[2] = 0;
  local_88[3] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_88[0] = 0;
  local_58 = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,&local_58,local_88);
  FUN_1409ee323(local_58,local_88[0],local_88 + 2);
  local_88[0] = 0;
  local_88[1] = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  local_58 = 0;
  local_60 = 0;
  (**(code **)(*plVar2 + 0x1c8))(plVar2,&local_60,&local_58);
  FUN_1409ee323(local_60,local_58,local_88);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,2);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_58);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_88 + 2,local_88
               ,local_58 & 0xffffffff);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb4462 FUN_148eb4462 body=30 status=ok
// SIG undefined FUN_148eb4462(void)

void * FUN_148eb4462(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb4480 FUN_148eb4480 body=37 status=ok
// SIG undefined FUN_148eb4480(void)

void FUN_148eb4480(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000148eb44a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148eb44b2 FUN_148eb44b2 body=244 status=ok
// SIG undefined FUN_148eb44b2(void)

undefined8 *
FUN_148eb44b2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_148eb45a8(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb45a8 FUN_148eb45a8 body=384 status=ok
// SIG undefined FUN_148eb45a8(void)

void FUN_148eb45a8(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148eb46bb:
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
    *puVar5 = &PTR_FUN_14b9cc2d0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148eb46bb;
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
    *puVar5 = &PTR_FUN_14b9cc2d0;
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
                    /* WARNING: Could not recover jumptable at 0x000148eb46b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148eb4728 FUN_148eb4728 body=64 status=ok
// SIG undefined FUN_148eb4728(void)

undefined8 * FUN_148eb4728(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9cc2d0;
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



// FUNCTION 148eb476c FUN_148eb476c body=81 status=ok
// SIG undefined FUN_148eb476c(void)

undefined8 FUN_148eb476c(longlong param_1)

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



// FUNCTION 148eb47c4 FUN_148eb47c4 body=89 status=ok
// SIG undefined FUN_148eb47c4(void)

bool FUN_148eb47c4(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148eb480f;
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
LAB_148eb480f:
  return lVar6 == param_2;
}



// FUNCTION 148eb483a FUN_148eb483a body=118 status=ok
// SIG undefined FUN_148eb483a(void)

void FUN_148eb483a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9cc2d0;
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



// FUNCTION 148eb48b0 FUN_148eb48b0 body=118 status=ok
// SIG undefined FUN_148eb48b0(void)

void FUN_148eb48b0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9cc2d0;
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



// FUNCTION 148eb4926 FUN_148eb4926 body=156 status=ok
// SIG undefined FUN_148eb4926(void)

void FUN_148eb4926(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9cc2d0;
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
                    /* WARNING: Could not recover jumptable at 0x000148eb49b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148eb49c2 FUN_148eb49c2 body=100 status=ok
// SIG undefined FUN_148eb49c2(void)

void FUN_148eb49c2(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148eb4a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148eb4a1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148eb4a26 FUN_148eb4a26 body=100 status=ok
// SIG undefined FUN_148eb4a26(void)

ulonglong FUN_148eb4a26(longlong param_1)

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
LAB_148eb4a7f:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148eb4a7f;
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



// FUNCTION 148eb4a8a FUN_148eb4a8a body=30 status=ok
// SIG undefined FUN_148eb4a8a(void)

void * FUN_148eb4a8a(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb4ab4 FUN_148eb4ab4 body=167 status=ok
// SIG undefined FUN_148eb4ab4(void)

void FUN_148eb4ab4(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
  FUN_140f67fee(uVar2,&local_28);
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar3 + 0x220))(plVar3,&local_2c);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),&local_28,local_2c);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb4b5c FUN_148eb4b5c body=30 status=ok
// SIG undefined FUN_148eb4b5c(void)

void * FUN_148eb4b5c(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb4b86 FUN_148eb4b86 body=167 status=ok
// SIG undefined FUN_148eb4b86(void)

void FUN_148eb4b86(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
  FUN_140f67fee(uVar2,&local_28);
  plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar3 + 0x238))(plVar3,&local_29);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),&local_28,local_29);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb4c2e FUN_148eb4c2e body=30 status=ok
// SIG undefined FUN_148eb4c2e(void)

void * FUN_148eb4c2e(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb4c4c FUN_148eb4c4c body=37 status=ok
// SIG undefined FUN_148eb4c4c(void)

void FUN_148eb4c4c(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000148eb4c6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 148eb4c78 FUN_148eb4c78 body=30 status=ok
// SIG undefined FUN_148eb4c78(void)

void * FUN_148eb4c78(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148eb4ca2 FUN_148eb4ca2 body=48 status=ok
// SIG undefined FUN_148eb4ca2(void)

void FUN_148eb4ca2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x70,8);
  }
  return;
}



// FUNCTION 148eb4cd2 FUN_148eb4cd2 body=114 status=ok
// SIG undefined FUN_148eb4cd2(void)

void FUN_148eb4cd2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 148eb4d44 FUN_148eb4d44 body=122 status=ok
// SIG undefined FUN_148eb4d44(void)

void FUN_148eb4d44(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
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



// FUNCTION 148eb4dbe FUN_148eb4dbe body=244 status=ok
// SIG undefined FUN_148eb4dbe(void)

undefined8 *
FUN_148eb4dbe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_148eb4eb4(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb4eb4 FUN_148eb4eb4 body=384 status=ok
// SIG undefined FUN_148eb4eb4(void)

void FUN_148eb4eb4(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148eb4fc7:
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
    *puVar5 = &PTR_FUN_14b9cc3c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148eb4fc7;
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
    *puVar5 = &PTR_FUN_14b9cc3c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148eb4fc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148eb5034 FUN_148eb5034 body=64 status=ok
// SIG undefined FUN_148eb5034(void)

undefined8 * FUN_148eb5034(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9cc3c0;
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



// FUNCTION 148eb5078 FUN_148eb5078 body=81 status=ok
// SIG undefined FUN_148eb5078(void)

undefined8 FUN_148eb5078(longlong param_1)

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



// FUNCTION 148eb50d0 FUN_148eb50d0 body=89 status=ok
// SIG undefined FUN_148eb50d0(void)

bool FUN_148eb50d0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148eb511b;
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
LAB_148eb511b:
  return lVar6 == param_2;
}



// FUNCTION 148eb5146 FUN_148eb5146 body=118 status=ok
// SIG undefined FUN_148eb5146(void)

void FUN_148eb5146(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9cc3c0;
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



// FUNCTION 148eb51bc FUN_148eb51bc body=118 status=ok
// SIG undefined FUN_148eb51bc(void)

void FUN_148eb51bc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9cc3c0;
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



// FUNCTION 148eb5232 FUN_148eb5232 body=156 status=ok
// SIG undefined FUN_148eb5232(void)

void FUN_148eb5232(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9cc3c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148eb52be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148eb52ce FUN_148eb52ce body=100 status=ok
// SIG undefined FUN_148eb52ce(void)

void FUN_148eb52ce(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148eb531a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148eb5327. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148eb5332 FUN_148eb5332 body=100 status=ok
// SIG undefined FUN_148eb5332(void)

ulonglong FUN_148eb5332(longlong param_1)

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
LAB_148eb538b:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148eb538b;
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



// FUNCTION 148eb5396 FUN_148eb5396 body=259 status=ok
// SIG undefined FUN_148eb5396(void)

undefined8 *
FUN_148eb5396(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b47b110;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063f168(puVar4 + 4);
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_148eb549a(uVar5,param_4);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb549a FUN_148eb549a body=384 status=ok
// SIG undefined FUN_148eb549a(void)

void FUN_148eb549a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148eb55ad:
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9cc430;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148eb55ad;
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
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9cc430;
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
                    /* WARNING: Could not recover jumptable at 0x000148eb55a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148eb561a FUN_148eb561a body=64 status=ok
// SIG undefined FUN_148eb561a(void)

undefined8 * FUN_148eb561a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9cc430;
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



// FUNCTION 148eb565e FUN_148eb565e body=81 status=ok
// SIG undefined FUN_148eb565e(void)

undefined8 FUN_148eb565e(longlong param_1)

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



// FUNCTION 148eb56b6 FUN_148eb56b6 body=89 status=ok
// SIG undefined FUN_148eb56b6(void)

bool FUN_148eb56b6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148eb5701;
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
LAB_148eb5701:
  return lVar6 == param_2;
}



// FUNCTION 148eb572c FUN_148eb572c body=118 status=ok
// SIG undefined FUN_148eb572c(void)

void FUN_148eb572c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9cc430;
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



// FUNCTION 148eb57a2 FUN_148eb57a2 body=118 status=ok
// SIG undefined FUN_148eb57a2(void)

void FUN_148eb57a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9cc430;
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



// FUNCTION 148eb5818 FUN_148eb5818 body=156 status=ok
// SIG undefined FUN_148eb5818(void)

void FUN_148eb5818(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b160;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9cc430;
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
                    /* WARNING: Could not recover jumptable at 0x000148eb58a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148eb58b4 FUN_148eb58b4 body=104 status=ok
// SIG undefined FUN_148eb58b4(void)

void FUN_148eb58b4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148eb5901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148eb5912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148eb591c FUN_148eb591c body=101 status=ok
// SIG undefined FUN_148eb591c(void)

ulonglong FUN_148eb591c(longlong param_1)

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
LAB_148eb5976:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148eb5976;
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



// FUNCTION 148eb5982 FUN_148eb5982 body=244 status=ok
// SIG undefined FUN_148eb5982(void)

undefined8 *
FUN_148eb5982(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b5afc70;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_145f8a6a4(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_148eb5a78(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eb5a78 FUN_148eb5a78 body=384 status=ok
// SIG undefined FUN_148eb5a78(void)

void FUN_148eb5a78(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_148eb5b8b:
    *puVar5 = &PTR_LAB_14b5afcc0;
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
    *puVar5 = &PTR_FUN_14b9cc4a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148eb5b8b;
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
    *puVar5 = &PTR_LAB_14b5afcc0;
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
    *puVar5 = &PTR_FUN_14b9cc4a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148eb5b87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148eb5bf8 FUN_148eb5bf8 body=64 status=ok
// SIG undefined FUN_148eb5bf8(void)

undefined8 * FUN_148eb5bf8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9cc4a0;
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


