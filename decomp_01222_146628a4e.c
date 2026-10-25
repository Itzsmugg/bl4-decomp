// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146628a4e FUN_146628a4e body=48 status=ok
// SIG undefined FUN_146628a4e(void)

void FUN_146628a4e(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b973328);
  FUN_1406f8a8a(param_1,param_2);
  return;
}



// FUNCTION 146628a7e FUN_146628a7e body=131 status=ok
// SIG undefined FUN_146628a7e(void)

void FUN_146628a7e(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14024bdb0();
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) != 0))
  {
    local_28 = 0x96c94be6;
    uStack_24 = 0xfb204b3f;
    uStack_20 = 0xbb3a5d8d;
    uStack_1c = 0xc56abeac;
    iVar1 = FUN_1448a256a();
    if ((iVar1 < 0) && (*(float *)(param_1 + 0x418) < 0.0)) {
      *(float *)(param_1 + 0x418) = -*(float *)(param_1 + 0x418);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146628b02 FUN_146628b02 body=48 status=ok
// SIG undefined FUN_146628b02(void)

void FUN_146628b02(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b407058);
  FUN_1406f8a8a(param_1,param_2);
  return;
}



// FUNCTION 146628b32 FUN_146628b32 body=274 status=ok
// SIG undefined FUN_146628b32(void)

void FUN_146628b32(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined1 local_8c [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x58))(param_1 + 0x3c0,&DAT_14cb71330);
  if (lVar1 != 0) {
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0xffffffff00000080;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    local_a8 = 0;
    FUN_14485c47a(&local_a8,param_1);
    local_a0 = &DAT_14c9a63f0;
    local_98 = &local_a8;
    FUN_1406c57ae(&local_88,local_8c,&local_a0,0);
    FUN_145897ed6(lVar1 + 0x1288,&local_88);
    FUN_140a87c14(lVar1 + 0x1288,0,0);
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140535736(&local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146628c46 FUN_146628c46 body=432 status=ok
// SIG undefined FUN_146628c46(void)

void FUN_146628c46(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_1 + 0xc18);
  if (((plVar3 == (longlong *)0x0) || (lVar4 = *(longlong *)(param_1 + 0xc20), lVar4 == 0)) ||
     (*(longlong *)(param_1 + 0xba8) != 0)) goto LAB_146628d2f;
  if (*(char *)(lVar4 + 0xa3) == '\x01') {
    local_38 = *(undefined8 *)(lVar4 + 0xa8);
    local_30 = *(undefined4 *)(lVar4 + 0xb0);
    local_28 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x168))(plVar3,&local_38);
  }
  uVar5 = FUN_1447210f0(param_1);
  local_60 = local_38;
  local_58 = local_30;
  local_50 = 0;
  local_68 = 1;
  FUN_14035b3c6(&local_48,&local_60,param_1 + 0x3d8,uVar5);
  plVar3 = local_40;
  if (local_40 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xba8) = local_48;
    plVar6 = *(longlong **)(param_1 + 0xbb0);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xbb0) = 0;
LAB_146628d90:
      LOCK();
      plVar3 = plVar6 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000146628dc3:
        if (iVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xba8) = local_48;
    plVar6 = *(longlong **)(param_1 + 0xbb0);
    if (local_40 == plVar6) {
      LOCK();
      plVar6 = local_40 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar6 = plVar3;
        goto joined_r0x000146628dc3;
      }
    }
    else {
      *(longlong **)(param_1 + 0xbb0) = local_40;
      if (plVar6 != (longlong *)0x0) goto LAB_146628d90;
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
LAB_146628d2f:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146628df8 FUN_146628df8 body=66 status=ok
// SIG undefined FUN_146628df8(void)

undefined8 FUN_146628df8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  if (((lVar1 != 0) && (lVar2 = FUN_144a2f878(), lVar2 != 0)) &&
     (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
    return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                    *(longlong *)
                     (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                    lVar2 + 0x30);
  }
  return 0;
}



// FUNCTION 146628e3a FUN_146628e3a body=121 status=ok
// SIG undefined FUN_146628e3a(void)

void FUN_146628e3a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1458eaa92();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      *(longlong **)(param_1 + 0x838) = plVar1;
      *(char *)(param_1 + 0x840) = (char)plVar1[0x2c];
      goto LAB_146628e5c;
    }
  }
  *(undefined8 *)(param_1 + 0x838) = 0;
LAB_146628e5c:
  FUN_141333d14(param_1,param_2);
  return;
}



// FUNCTION 146628eb4 FUN_146628eb4 body=270 status=ok
// SIG undefined FUN_146628eb4(void)

void FUN_146628eb4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  FUN_145addd5a();
  if (param_2 == 0) {
LAB_146628f42:
    param_2 = 0;
  }
  else {
    lVar3 = FUN_144a7b4ca();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) != lVar3 + 0x30)) goto LAB_146628f42;
  }
  FUN_14485c47a(param_1 + 0x178,param_2);
  cVar2 = FUN_144729dda(param_1 + 0x178);
  if (cVar2 != '\0') {
    lVar4 = FUN_1403ca227();
    lVar3 = *(longlong *)(lVar4 + 0x28);
    if (lVar3 == 0) {
      uVar5 = FUN_14121240e();
      lVar3 = FUN_14477b664(uVar5);
      *(longlong *)(lVar4 + 0x28) = lVar3;
    }
    lVar6 = *(longlong *)(lVar4 + 0x30);
    if (lVar6 != 0) {
LAB_146628f29:
                    /* WARNING: Could not recover jumptable at 0x000146628f3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x640))(param_1,lVar6);
      return;
    }
    if ((lVar3 != 0) && (*(longlong *)(lVar4 + 0x20) != 0)) {
      plVar1 = *(longlong **)(lVar3 + 0xb8);
      if ((plVar1 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')) {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x20));
        *(longlong *)(lVar4 + 0x30) = lVar6;
        if (lVar6 == 0) {
          return;
        }
        goto LAB_146628f29;
      }
      *(undefined8 *)(lVar4 + 0x30) = 0;
    }
  }
  return;
}



// FUNCTION 146628fc2 FUN_146628fc2 body=154 status=ok
// SIG undefined FUN_146628fc2(void)

longlong FUN_146628fc2(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ec804e();
  if (*(int *)(param_2 + 0xc) == -1) {
    lVar1 = FUN_14479d2ce(param_1 + 0x7f0);
    if (lVar1 != 0) {
      FUN_1458ea720(lVar1 + 0xd50,&local_30,param_3);
      FUN_140bc2be4(param_2,&local_30);
      if ((local_24 != -1) && (local_30 != 0)) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662905e FUN_14662905e body=434 status=ok
// SIG undefined FUN_14662905e(void)

void FUN_14662905e(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_1 + 0x3f0);
  if (((plVar3 == (longlong *)0x0) || (lVar5 = *(longlong *)(param_1 + 0xbc8), lVar5 == 0)) ||
     (*(longlong *)(param_1 + 0xba8) != 0)) goto LAB_146629176;
  lVar4 = *(longlong *)(lVar5 + 0xa8);
  uVar8 = *(undefined4 *)(lVar5 + 0xb0);
  local_58 = lVar4;
  if (*(char *)(lVar5 + 0xa3) == '\0') {
    lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
    lVar6 = FUN_14121240e();
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      uVar8 = (undefined4)plVar3[0x9d];
      if (lVar4 != plVar3[0x9c]) {
        local_58 = plVar3[0x9c];
      }
    }
  }
  uVar7 = FUN_1447210f0(param_1);
  local_48 = 0;
  local_68 = 1;
  local_50 = uVar8;
  FUN_14035b3c6(&local_40,&local_58,param_1 + 0x3d8,uVar7);
  plVar3 = local_38;
  if (local_38 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xba8) = local_40;
    plVar9 = *(longlong **)(param_1 + 0xbb0);
    if (plVar9 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xbb0) = 0;
LAB_1466291b6:
      LOCK();
      plVar3 = plVar9 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001466291e1:
        if (iVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xba8) = local_40;
    plVar9 = *(longlong **)(param_1 + 0xbb0);
    if (local_38 == plVar9) {
      LOCK();
      plVar9 = local_38 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar9 = plVar3;
        goto joined_r0x0001466291e1;
      }
    }
    else {
      *(longlong **)(param_1 + 0xbb0) = local_38;
      if (plVar9 != (longlong *)0x0) goto LAB_1466291b6;
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
LAB_146629176:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146629212 FUN_146629212 body=32 status=ok
// SIG undefined FUN_146629212(void)

undefined8 FUN_146629212(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"OakEcho4StandIn");
  return param_2;
}



// FUNCTION 146629232 FUN_146629232 body=692 status=ok
// SIG undefined FUN_146629232(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146629232(void)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  int local_68;
  longlong local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar2 = DAT_14caa8580;
  FUN_140056680(local_60,L"OakStandInTags");
  iVar5 = 0;
  do {
    FUN_140002266(&local_70,L"StandIn.MainMenu.Player.%d",iVar5);
    iVar1 = local_68 + -1;
    if (local_68 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(&local_50,iVar1,local_70,1);
    FUN_1413e432a(lVar2,&local_50,local_50,local_60);
    uVar3 = DAT_14cbcb050;
    lVar6 = (longlong)(int)DAT_14cbcb050;
    DAT_14cbcb050 = DAT_14cbcb050 + 1;
    if (DAT_14cbcb054 < DAT_14cbcb050) {
      FUN_148872cfa(&DAT_14cbcb028,uVar3);
    }
    puVar4 = DAT_14cbcb048;
    if (DAT_14cbcb048 == (undefined *)0x0) {
      puVar4 = &DAT_14cbcb028;
    }
    *(undefined8 *)(puVar4 + lVar6 * 8) = local_50;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  FUN_1446f470e(&local_78,L"StandIn.MainMenu.DefaultPlayer",1);
  FUN_1413e432a(lVar2,&local_70,local_78,local_60);
  DAT_14cbcb058 = local_70;
  iVar5 = 0;
  do {
    FUN_140002266(&local_70,L"StandIn.CharacterSelect.Option.%d",iVar5);
    iVar1 = local_68 + -1;
    if (local_68 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(&local_50,iVar1,local_70,1);
    FUN_1413e432a(lVar2,&local_50,local_50,local_60);
    uVar3 = DAT_14cbcb098;
    lVar6 = (longlong)(int)DAT_14cbcb098;
    DAT_14cbcb098 = DAT_14cbcb098 + 1;
    if (DAT_14cbcb09c < DAT_14cbcb098) {
      FUN_148d4704c(uVar3);
    }
    puVar4 = DAT_14cbcb090;
    if (DAT_14cbcb090 == (undefined *)0x0) {
      puVar4 = &DAT_14cbcb060;
    }
    *(undefined8 *)(puVar4 + lVar6 * 8) = local_50;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 6);
  FUN_1446f470e(&local_80,L"StandIn.CharacterSelect.DefaultOption",1);
  FUN_1413e432a(lVar2,&local_70,local_80,local_60);
  _DAT_14cbcb0a0 = local_70;
  FUN_1446f470e(&local_88,L"StandIn.UI.SkillLoadoutEvent",1);
  FUN_1413e432a(lVar2,&local_70,local_88,local_60);
  DAT_14cbcaf98 = local_70;
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466294ee FUN_1466294ee body=116 status=ok
// SIG undefined FUN_1466294ee(void)

void FUN_1466294ee(longlong param_1,undefined8 param_2)

{
  FUN_140f5d36e();
  FUN_140aa1618(param_1 + 0x80,param_2);
  FUN_140aa1618(param_1 + 0x118,param_2);
  FUN_140aa1618(param_1 + 0x138,param_2);
  FUN_140aa1618(param_1 + 0x158,param_2);
  FUN_140aa1618(param_1 + 0x178,param_2);
  FUN_140aa1618(param_1 + 0x198,param_2);
  return;
}



// FUNCTION 146629568 FUN_146629568 body=76 status=ok
// SIG undefined FUN_146629568(void)

undefined8 FUN_146629568(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14597fce2(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001466295a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1466295d6 FUN_1466295d6 body=62 status=ok
// SIG undefined FUN_1466295d6(void)

undefined8 * FUN_1466295d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146629614 FUN_146629614 body=29 status=ok
// SIG undefined FUN_146629614(void)

undefined8 FUN_146629614(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146629632 FUN_146629632 body=85 status=ok
// SIG undefined FUN_146629632(void)

void FUN_146629632(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9745b0;
  return;
}



// FUNCTION 146629688 FUN_146629688 body=29 status=ok
// SIG undefined FUN_146629688(void)

bool FUN_146629688(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1466296a6 FUN_1466296a6 body=24 status=ok
// SIG undefined FUN_1466296a6(void)

bool FUN_1466296a6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1466296be FUN_1466296be body=29 status=ok
// SIG undefined FUN_1466296be(void)

bool FUN_1466296be(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1466296dc FUN_1466296dc body=24 status=ok
// SIG undefined FUN_1466296dc(void)

bool FUN_1466296dc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1466296f4 FUN_1466296f4 body=600 status=ok
// SIG undefined FUN_1466296f4(void)

void FUN_1466296f4(void)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  FUN_140056680(local_30,L"HitReactions");
  FUN_1446f470e(&local_40,L"HitReactions.FX.Fire",1);
  FUN_1413e432a(lVar1,&local_38,local_40,local_30);
  DAT_14cbcb4c8 = local_38;
  FUN_1446f470e(&local_48,L"HitReactions.FX.Corrosive",1);
  FUN_1413e432a(lVar1,&local_38,local_48,local_30);
  DAT_14cbcb4d0 = local_38;
  FUN_1446f470e(&local_50,L"HitReactions.FX.Cryo",1);
  FUN_1413e432a(lVar1,&local_38,local_50,local_30);
  DAT_14cbcb4d8 = local_38;
  FUN_1446f470e(&local_58,L"HitReactions.FX.Radiation",1);
  FUN_1413e432a(lVar1,&local_38,local_58,local_30);
  DAT_14cbcb4e0 = local_38;
  FUN_1446f470e(&local_60,L"HitReactions.FX.Shock",1);
  FUN_1413e432a(lVar1,&local_38,local_60,local_30);
  DAT_14cbcb4e8 = local_38;
  FUN_1446f470e(&local_68,L"HitReactions.FX.Wound",1);
  FUN_1413e432a(lVar1,&local_38,local_68,local_30);
  FUN_1446f470e(&local_70,L"HitReactions.FX._Custom.Crystalize",1);
  FUN_1413e432a(lVar1,&local_38,local_70,local_30);
  FUN_1446f470e(&local_78,L"HitReactions.FX._Custom.Dissolve",1);
  FUN_1413e432a(lVar1,&local_38,local_78,local_30);
  FUN_1446f470e(&local_80,L"HitReactions.FX._Custom.Husk",1);
  FUN_1413e432a(lVar1,&local_38,local_80,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662994e FUN_14662994e body=289 status=ok
// SIG undefined FUN_14662994e(void)

void FUN_14662994e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(char *)(param_1 + 0x48) == '\x01')) {
    lVar4 = FUN_14011c349();
    if (param_2 != (longlong *)0x0) {
      uVar5 = FUN_140e1f0aa();
      lVar6 = (**(code **)(*param_2 + 0x288))(param_2,uVar5);
      if (lVar6 != 0) {
        uVar5 = FUN_140e1f0aa();
        lVar7 = FUN_144718840(lVar6,uVar5);
        if ((lVar6 != lVar7) && (lVar7 != 0)) {
          FUN_140db960a(param_1 + 0x30,&local_48);
          local_38 = local_48;
          plStack_30 = plStack_40;
          local_48 = 0;
          plStack_40 = (longlong *)0x0;
          local_60 = 0;
          local_68 = 0;
          local_78 = 0;
          local_58 = 1;
          local_70 = 0x3f800000;
          FUN_141348940(lVar7,&local_38,lVar4 + 0xe0,1);
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



// FUNCTION 146629a70 FUN_146629a70 body=243 status=ok
// SIG undefined FUN_146629a70(void)

undefined8 FUN_146629a70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if ((cVar2 != '\0') && (plVar3 = (longlong *)FUN_1447262c2(param_3), plVar3 != (longlong *)0x0)) {
    uVar4 = FUN_140e1f0aa();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_140e1f0aa();
      plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
      if (plVar3 == plVar5) {
        return 0;
      }
      if (plVar5 == (longlong *)0x0) {
        return 0;
      }
      plVar3 = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5);
      if ((longlong)(int)plVar3[1] != 0) {
        lVar6 = 0;
        do {
          lVar1 = *(longlong *)(*plVar3 + lVar6);
          if ((lVar1 != 0) && (*(longlong *)(*(longlong *)(lVar1 + 8) + 0x1d4) == param_1[1])) {
            if (2 < (ulonglong)*(byte *)(param_1 + 2)) {
              return 0;
            }
            lVar1 = lVar1 + (ulonglong)*(byte *)(param_1 + 2) * 0xc;
            uVar7 = FUN_144a7ecd0(param_4);
            *(undefined4 *)(lVar1 + 0x2a8) = uVar7;
            FUN_14020a6cc(lVar1 + 0x2a0,1);
            return 1;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)plVar3[1] * 8 != lVar6);
      }
    }
  }
  return 0;
}



// FUNCTION 146629b64 FUN_146629b64 body=215 status=ok
// SIG undefined FUN_146629b64(void)

void FUN_146629b64(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  plVar3 = (longlong *)FUN_1447262c2(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_141262f1a();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_141262f1a();
      plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
      if ((plVar3 != plVar5) && (plVar5 != (longlong *)0x0)) {
        lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5);
        uVar2 = *(uint *)(lVar6 + 0xa8);
        if (uVar2 != 0) {
          lVar7 = 0x20;
          uVar8 = 0;
          do {
            if ((longlong)uVar8 < (longlong)(int)uVar2) {
              lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0xa0) + lVar7);
              if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
                FUN_1456cec3c(lVar1);
              }
              else if (lVar1 == 0) goto LAB_146629c03;
              FUN_1457c494e(param_1,lVar1);
              uVar2 = *(uint *)(lVar6 + 0xa8);
            }
LAB_146629c03:
            uVar8 = uVar8 + 1;
            lVar7 = lVar7 + 0x170;
          } while (uVar8 < uVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 146629c3c FUN_146629c3c body=231 status=ok
// SIG undefined FUN_146629c3c(void)

void FUN_146629c3c(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if ((*(int *)(param_1 + 0x90) != 0) &&
     (plVar3 = (longlong *)FUN_1447262c2(param_1 + 0x18), plVar3 != (longlong *)0x0)) {
    uVar4 = FUN_141262f1a();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_141262f1a();
      plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
      if (plVar5 != (longlong *)0x0 && plVar3 != plVar5) {
        lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5);
        uVar2 = *(uint *)(lVar6 + 0xa8);
        if (uVar2 != 0) {
          lVar7 = 0x20;
          uVar8 = 0;
          do {
            if ((longlong)uVar8 < (longlong)(int)uVar2) {
              lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0xa0) + lVar7);
              if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
                FUN_1456cec3c(lVar1);
              }
              else if (lVar1 == 0) goto LAB_146629d0d;
              FUN_1457c4a36(param_1,lVar1);
              uVar2 = *(uint *)(lVar6 + 0xa8);
            }
LAB_146629d0d:
            uVar8 = uVar8 + 1;
            lVar7 = lVar7 + 0x170;
          } while (uVar8 < uVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 146629d24 FUN_146629d24 body=392 status=ok
// SIG undefined FUN_146629d24(void)

void FUN_146629d24(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x378) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x380);
    if (plVar6 == (longlong *)0x0) goto LAB_146629d93;
    *(undefined8 *)(param_1 + 0x380) = 0;
LAB_146629e11:
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
    if (plVar4 == (longlong *)0x0) goto LAB_146629d93;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x378) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x380);
    if (plVar4 == plVar6) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x380) = plVar4;
      if (plVar6 != (longlong *)0x0) goto LAB_146629e11;
    }
  }
  LOCK();
  plVar6 = plVar4 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_146629d93:
  local_40 = *param_3;
  local_38 = param_3[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_14141b0b0(param_1,param_2,&local_40);
  puVar5 = (undefined8 *)param_3[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146629ec2 FUN_146629ec2 body=234 status=ok
// SIG undefined FUN_146629ec2(void)

void FUN_146629ec2(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_1415b561e();
  lVar1 = param_1[99];
  if (lVar1 == 0) {
    return;
  }
  lVar5 = *(longlong *)(lVar1 + 0xf0);
  if (lVar5 == 0) {
    uVar4 = FUN_14016979c();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0xf0) = lVar5;
  }
  if (*(longlong *)(lVar1 + 0xf8) == 0) {
    if ((*(longlong *)(lVar1 + 0xe8) != 0) && (lVar5 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(lVar1 + 0xf8) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0xe8));
        *(longlong *)(lVar1 + 0xf8) = lVar5;
        if (lVar5 != 0) goto LAB_146629f82;
      }
    }
    if (*(longlong *)(param_1[99] + 0xdc) == 0) goto LAB_146629f2b;
  }
LAB_146629f82:
  if (*(char *)(param_1[99] + 0x510) != '\x01') {
    return;
  }
LAB_146629f2b:
                    /* WARNING: Could not recover jumptable at 0x000146629f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}



// FUNCTION 146629fac FUN_146629fac body=28 status=ok
// SIG undefined FUN_146629fac(void)

void FUN_146629fac(longlong *param_1)

{
  FUN_14147079a();
                    /* WARNING: Could not recover jumptable at 0x000146629fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}



// FUNCTION 146629fc8 FUN_146629fc8 body=485 status=ok
// SIG undefined FUN_146629fc8(void)

void FUN_146629fc8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2e8) = uVar3;
    plVar7 = *(longlong **)(param_1 + 0x2f0);
    if (plVar7 == (longlong *)0x0) goto LAB_14662a037;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
LAB_14662a112:
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
    if (plVar4 == (longlong *)0x0) goto LAB_14662a037;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x2e8) = uVar3;
    plVar7 = *(longlong **)(param_1 + 0x2f0);
    if (plVar4 == plVar7) {
      LOCK();
      plVar7 = plVar4 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x2f0) = plVar4;
      if (plVar7 != (longlong *)0x0) goto LAB_14662a112;
    }
  }
  LOCK();
  plVar7 = plVar4 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_14662a037:
  lVar5 = *(longlong *)(param_1 + 0x2e8);
  if ((*(longlong *)(param_1 + 0x2f8) != *(longlong *)(lVar5 + 0x538)) ||
     (*(int *)(param_1 + 0x300) != *(int *)(lVar5 + 0x540))) {
    *(longlong *)(param_1 + 0x2f8) = *(longlong *)(lVar5 + 0x538);
    *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(lVar5 + 0x540);
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined1 *)(param_1 + 0x2e4) = 0;
  local_40 = *param_3;
  local_38 = param_3[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_14141b0b0(param_1,param_2,&local_40);
  puVar6 = (undefined8 *)param_3[1];
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar6 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar6)(puVar6);
      LOCK();
      piVar2 = (int *)((longlong)puVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14662a1c4 FUN_14662a1c4 body=64 status=ok
// SIG undefined FUN_14662a1c4(void)

void FUN_14662a1c4(longlong param_1)

{
  char cVar1;
  
  FUN_1415b561e();
  cVar1 = FUN_144729dda(param_1 + 0x290);
  if ((cVar1 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x2e8) + 0x698) == '\x01')) {
    FUN_1460dc37e(param_1);
    return;
  }
  return;
}



// FUNCTION 14662a204 FUN_14662a204 body=296 status=ok
// SIG undefined FUN_14662a204(void)

void FUN_14662a204(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14147079a();
  lVar2 = FUN_14479d2ce(param_1 + 0x290);
  if (lVar2 != 0) {
    if (*(longlong *)(param_1 + 0x310) != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x310);
      uVar3 = FUN_1401b4c98(lVar2);
      lVar4 = FUN_144a61814(uVar3,puVar1);
      if (lVar4 != 0) {
        FUN_1405a424c(uVar3,*puVar1);
      }
      *puVar1 = 0;
    }
    if (*(longlong *)(param_1 + 0x318) != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x318);
      uVar3 = FUN_1401b4c98(lVar2);
      lVar2 = FUN_144a61814(uVar3,puVar1);
      if (lVar2 != 0) {
        FUN_1405a424c(uVar3,*puVar1);
      }
      *puVar1 = 0;
    }
  }
  if (*(char *)(*(longlong *)(param_1 + 0x2e8) + 0x698) == '\x01') {
    local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x2e8) + 0x4d0);
    local_40 = 0x3005;
    local_38 = 0;
    uVar3 = FUN_14479d2ce(param_1 + 0x290);
    FUN_1410228c2(uVar3,&local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662a32e FUN_14662a32e body=48 status=ok
// SIG undefined FUN_14662a32e(void)

void FUN_14662a32e(longlong param_1)

{
  FUN_140d7749e();
  if (*(char *)(*(longlong *)(param_1 + 0x2e8) + 0x699) != '\x01') {
    return;
  }
  FUN_148d4988a(param_1);
  return;
}



// FUNCTION 14662a35e FUN_14662a35e body=908 status=ok
// SIG undefined FUN_14662a35e(void)

void FUN_14662a35e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *param_3;
  plVar5 = (longlong *)param_3[1];
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x350) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x358);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x358) = 0;
LAB_14662a480:
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
      if (plVar5 != (longlong *)0x0) goto LAB_14662a3c4;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x350) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x358);
    if (plVar5 == plVar6) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x358) = plVar5;
      if (plVar6 != (longlong *)0x0) goto LAB_14662a480;
    }
LAB_14662a3c4:
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  *(undefined4 *)(param_1 + 0x300) = 0;
  *(undefined2 *)(param_1 + 0x2e3) = 1;
  lVar4 = *(longlong *)(param_1 + 0x350);
  if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x4d8) == 0)) goto LAB_14662a3fc;
  FUN_1459a0a58(lVar4 + 0x4d8,&local_58);
  local_48 = local_58;
  local_40 = local_50;
  lVar4 = FUN_14141b931();
  plVar5 = local_50;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b976360;
    plVar5[2] = (longlong)&PTR_FUN_14b687aa0;
    plVar5[3] = *(longlong *)(lVar4 + 8);
    lVar4 = *(longlong *)(lVar4 + 0x10);
    plVar5[4] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (plVar5 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x2f0) = 0x10;
      plVar6 = *(longlong **)(param_1 + 0x2f8);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x2f8) = 0;
LAB_14662a5bc:
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
        if (plVar5 != (longlong *)0x0) goto LAB_14662a5e0;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x2f0) = plVar5 + 2;
      plVar6 = *(longlong **)(param_1 + 0x2f8);
      if (plVar5 == plVar6) {
        LOCK();
        plVar6 = plVar5 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      else {
        *(longlong **)(param_1 + 0x2f8) = plVar5;
        if (plVar6 != (longlong *)0x0) goto LAB_14662a5bc;
      }
LAB_14662a5e0:
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    plVar6 = *(longlong **)(param_1 + 0x2f0);
    local_68 = local_48;
    local_60 = local_40;
    if (local_40 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      plVar5 = local_40;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_68);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_14662a3fc:
  local_78 = *param_3;
  local_70 = param_3[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  FUN_14141b0b0(param_1,param_2,&local_78);
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14662a6ec FUN_14662a6ec body=1166 status=ok
// SIG undefined FUN_14662a6ec(void)

void FUN_14662a6ec(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  undefined4 uVar12;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 local_f0;
  undefined1 *local_e8;
  undefined1 local_d9;
  undefined1 local_d8 [40];
  undefined4 local_b0;
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 ***local_78;
  longlong *local_70;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140e0bb56();
  if (*(char *)(param_1 + 0x304) == '\0') goto LAB_14662a728;
  lVar6 = *(longlong *)(param_1 + 0x310);
  if (lVar6 == 0) {
    uVar9 = FUN_14016979c();
    lVar6 = FUN_14477b664(uVar9);
    *(longlong *)(param_1 + 0x310) = lVar6;
  }
  plVar2 = (longlong *)(param_1 + 0x308);
  if (*(longlong *)(param_1 + 0x318) == 0) {
    if ((lVar6 == 0) || (*plVar2 == 0)) goto LAB_14662a728;
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
      *(undefined8 *)(param_1 + 0x318) = 0;
      goto LAB_14662a728;
    }
    uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar6 = FUN_144aff482(uVar9,plVar2);
    *(longlong *)(param_1 + 0x318) = lVar6;
    if (lVar6 == 0) goto LAB_14662a728;
  }
  lVar6 = *(longlong *)(param_1 + 0x350);
  lVar7 = *(longlong *)(lVar6 + 0x600);
  if (lVar7 == 0) {
    uVar9 = FUN_14016979c();
    lVar7 = FUN_14477b664(uVar9);
    *(longlong *)(lVar6 + 0x600) = lVar7;
  }
  if (*(longlong *)(lVar6 + 0x608) == 0) {
    if ((lVar7 == 0) || (*(longlong *)(lVar6 + 0x5f8) == 0)) goto LAB_14662a728;
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
      *(undefined8 *)(lVar6 + 0x608) = 0;
      goto LAB_14662a728;
    }
    uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar7 = FUN_144aff482(uVar9,(longlong *)(lVar6 + 0x5f8));
    *(longlong *)(lVar6 + 0x608) = lVar7;
    if (lVar7 == 0) goto LAB_14662a728;
  }
  uVar9 = FUN_14479d2ce(param_1 + 0x290);
  local_d8[0] = 0;
  local_b0 = 0;
  FUN_1456bb102(local_d8,uVar9);
  local_a8[0] = 0;
  local_80 = 0;
  lVar6 = *(longlong *)(param_1 + 0x350);
  lVar7 = *(longlong *)(lVar6 + 0x600);
  if (lVar7 == 0) {
    uVar9 = FUN_14016979c();
    lVar7 = FUN_14477b664(uVar9);
    *(longlong *)(lVar6 + 0x600) = lVar7;
  }
  lVar8 = *(longlong *)(lVar6 + 0x608);
  if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*(longlong *)(lVar6 + 0x5f8) != 0)) {
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
      lVar8 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar8 = FUN_144aff482(uVar9,(longlong *)(lVar6 + 0x5f8));
    }
    *(longlong *)(lVar6 + 0x608) = lVar8;
  }
  FUN_144750e81(&local_78,lVar8,local_d8);
  uVar12 = FUN_144a7b41a(&local_78,0);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar11 = &local_78;
    if (0x18 < local_60) {
      ppppuVar11 = (undefined8 ****)local_78;
    }
    (*pcVar4)(ppppuVar11);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78);
  }
  FUN_144a5ac3a(local_a8);
  FUN_144a5ac3a(local_d8);
  local_d8[0] = 0;
  local_b0 = 0;
  FUN_148d54b6a(local_d8,param_1 + 0x290);
  local_a8[0] = 0;
  local_80 = 0;
  lVar6 = *(longlong *)(param_1 + 0x310);
  if (lVar6 == 0) {
    uVar9 = FUN_14016979c();
    lVar6 = FUN_14477b664(uVar9);
    *(longlong *)(param_1 + 0x310) = lVar6;
  }
  lVar7 = *(longlong *)(param_1 + 0x318);
  if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar2 != 0)) {
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
      lVar7 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar7 = FUN_144aff482(uVar9,plVar2);
    }
    *(longlong *)(param_1 + 0x318) = lVar7;
  }
  local_e8 = &local_d9;
  local_f0 = 0;
  local_f8 = uVar12;
  FUN_140c40077(&local_78,lVar7,local_d8,0);
  FUN_1418e83ea(param_1 + 800,&local_78);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  FUN_144a5ac3a(local_a8);
  FUN_144a5ac3a(local_d8);
LAB_14662a728:
  cVar5 = FUN_144729dda(param_1 + 0x298);
  if ((cVar5 != '\0') && (plVar2 = *(longlong **)(param_1 + 0x2f0), plVar2 != (longlong *)0x0)) {
    uVar9 = FUN_14479d2ce(param_1 + 0x290);
    uVar10 = FUN_14479d2ce(param_1 + 0x298);
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar10,uVar9);
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14662ab7c FUN_14662ab7c body=86 status=ok
// SIG undefined FUN_14662ab7c(void)

void FUN_14662ab7c(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_141105466(param_1 + 800);
  if (cVar1 != '\0') {
    FUN_140fbcb7d(param_1 + 800);
    *(undefined1 *)(param_1 + 0x304) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
  }
  FUN_140d7749e(param_1,param_2);
  return;
}



// FUNCTION 14662abd2 FUN_14662abd2 body=392 status=ok
// SIG undefined FUN_14662abd2(void)

void FUN_14662abd2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2e8) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x2f0);
    if (plVar6 == (longlong *)0x0) goto LAB_14662ac41;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
LAB_14662acbf:
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
    if (plVar4 == (longlong *)0x0) goto LAB_14662ac41;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x2e8) = uVar3;
    plVar6 = *(longlong **)(param_1 + 0x2f0);
    if (plVar4 == plVar6) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x2f0) = plVar4;
      if (plVar6 != (longlong *)0x0) goto LAB_14662acbf;
    }
  }
  LOCK();
  plVar6 = plVar4 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_14662ac41:
  local_40 = *param_3;
  local_38 = param_3[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_14141b0b0(param_1,param_2,&local_40);
  puVar5 = (undefined8 *)param_3[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14662ad82 FUN_14662ad82 body=40 status=ok
// SIG undefined FUN_14662ad82(void)

undefined8 FUN_14662ad82(undefined8 param_1,int param_2)

{
  FUN_140c09192();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662adaa FUN_14662adaa body=40 status=ok
// SIG undefined FUN_14662adaa(void)

undefined8 FUN_14662adaa(undefined8 param_1,int param_2)

{
  FUN_14097122c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662add2 FUN_14662add2 body=29 status=ok
// SIG undefined FUN_14662add2(void)

undefined8 FUN_14662add2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662adf0 FUN_14662adf0 body=177 status=ok
// SIG undefined FUN_14662adf0(void)

longlong * FUN_14662adf0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,6,0x10);
  *(undefined4 *)(param_1 + 1) = 6;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14b975fe0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b975f70;
  lVar2 = *param_2;
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)*plVar4)(plVar4,puVar1 + 6);
  }
  return param_1;
}



// FUNCTION 14662aea2 FUN_14662aea2 body=177 status=ok
// SIG undefined FUN_14662aea2(void)

longlong * FUN_14662aea2(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,6,0x10);
  *(undefined4 *)(param_1 + 1) = 6;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_149e06450;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b976050;
  lVar2 = *param_2;
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)*plVar4)(plVar4,puVar1 + 6);
  }
  return param_1;
}



// FUNCTION 14662af54 FUN_14662af54 body=93 status=ok
// SIG undefined FUN_14662af54(void)

void FUN_14662af54(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9760c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14662afb2 FUN_14662afb2 body=147 status=ok
// SIG undefined FUN_14662afb2(void)

void FUN_14662afb2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14662b04c FUN_14662b04c body=104 status=ok
// SIG undefined FUN_14662b04c(void)

void FUN_14662b04c(longlong *param_1)

{
  FUN_1447cd2ec(param_1 + 0x363,0);
  if ((((param_1[0x379] != 0) && ((*(byte *)(param_1[0x379] + 0x720) & 4) != 0)) &&
      ((*(byte *)(param_1 + 0x1db) & 2) == 0)) &&
     ((((char)param_1[0x2f] == '\x03' || ((*(byte *)(param_1 + 0xc) & 1) != 0)) ||
      ((*(byte *)((longlong)param_1 + 0x61) & 1) != 0)))) {
    *(undefined1 *)((longlong)param_1 + 0x1152) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014662b0ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6c0))(param_1);
    return;
  }
  return;
}



// FUNCTION 14662b0b4 FUN_14662b0b4 body=103 status=ok
// SIG undefined FUN_14662b0b4(void)

void FUN_14662b0b4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (*(char *)(param_1 + -0xc60) == '\x03') {
      if (*(longlong *)(param_1 + 0x2d4) != 0) {
        FUN_145ac621c(param_1 + 0x298);
      }
      (**(code **)(*(longlong *)(param_1 + 0x290) + 0x70))(param_1 + 0x290);
    }
    FUN_140f0658e(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 14662b11c FUN_14662b11c body=731 status=ok
// SIG undefined FUN_14662b11c(void)

void FUN_14662b11c(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined1 auStack_2e8 [32];
  byte *local_2c8;
  GUID local_2b8;
  undefined8 local_2a8;
  byte local_2a0 [32];
  undefined1 local_280;
  byte local_278 [32];
  byte local_258 [32];
  byte abStack_238 [120];
  undefined1 local_1c0 [32];
  undefined1 local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  undefined1 local_178 [32];
  byte local_158;
  undefined1 local_150 [144];
  char local_c0 [8];
  undefined8 local_b8 [18];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*(char *)(param_1 + -0xef0) == '\x03') {
    if (*(longlong *)(param_1 + -0x308) != DAT_14cb95120) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_2e8);
    }
    lVar1 = *(longlong *)(param_1 + -0xf00);
    if (lVar1 != 0) {
      lVar4 = FUN_144a2f878();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        uVar3 = FUN_1403ae46b();
        FUN_14130b0ce(lVar1,uVar3,0,0);
        FUN_1447f69b6(lVar1 + 0x5330);
        FUN_1447cd2ec(lVar1 + 0x6028,0);
        FUN_1447f69b6(lVar1 + 0x6048);
        local_1a0 = 0;
        FUN_14101bd16(local_1c0,L"start");
        local_2c8 = local_1c0;
        FUN_140d767d6(&local_198,&DAT_14cbcb9b0,3,L"heavy_weapon");
        if ((*(longlong *)(local_198 + 0x3c) == 0) || (*(char *)(local_198 + 0x38) < local_190)) {
          local_280 = 0;
          FUN_14101bd16(local_2a0,L"start");
          pbVar5 = local_278;
          local_2c8 = local_2a0;
          FUN_140d767d6(pbVar5,&DAT_14cbcb9b0,3,L"heavy_weapon");
          bVar2 = false;
        }
        else {
          abStack_238[0x28] = 0;
          FUN_14101bd16(abStack_238 + 8,L"start");
          pbVar5 = abStack_238 + 0x30;
          local_2c8 = abStack_238 + 8;
          FUN_140d767d6(pbVar5,&DAT_14cbcb9b0,3,L"heavy_weapon");
          bVar2 = true;
        }
        FUN_140d76846(local_150,pbVar5);
        FUN_14027c224(local_c0,local_150);
        local_2a8 = 0;
        FUN_14485c47a(&local_2a8,lVar1);
        if (local_c0[0] == '\x01') {
          FUN_1404eedce(local_b8,&DAT_14c9a3c28,local_2a8);
        }
        local_2b8.Data1 = 0;
        local_2b8.Data2 = 0;
        local_2b8.Data3 = 0;
        local_2b8.Data4[0] = '\0';
        local_2b8.Data4[1] = '\0';
        local_2b8.Data4[2] = '\0';
        local_2b8.Data4[3] = '\0';
        local_2b8.Data4[4] = '\0';
        local_2b8.Data4[5] = '\0';
        local_2b8.Data4[6] = '\0';
        local_2b8.Data4[7] = '\0';
        CoCreateGuid(&local_2b8);
        if (local_c0[0] == '\x01') {
          FUN_14111b8d6(local_b8[0],lVar1,&local_2b8);
        }
        FUN_14027c198(local_c0);
        FUN_1404eeb8e(local_150);
        if (bVar2) {
          pbVar5 = abStack_238 + 0x50;
        }
        else {
          pbVar5 = local_258;
        }
        (*(code *)(&PTR_FUN_14a1842f0)[pbVar5[0x20]])(pbVar5);
        if (*(longlong *)(pbVar5 + -0x10) != 0) {
          FUN_1400020a8();
        }
        (*(code *)(&PTR_FUN_14a1842f0)[local_158])(local_178);
        if (local_188 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662b40e FUN_14662b40e body=98 status=ok
// SIG undefined FUN_14662b40e(void)

uint FUN_14662b40e(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  cVar1 = FUN_14486ea84(param_1 + 0x1078);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_14008e0ae(param_1 + 0x1078);
    uVar2 = -(uint)(*(float *)(lVar3 + 0x30) <= *(float *)(lVar3 + 200) ||
                   0.0001 <= ABS(*(float *)(lVar3 + 200) - *(float *)(lVar3 + 0x24)));
  }
  return uVar2 & 0xffffff01;
}



// FUNCTION 14662b470 FUN_14662b470 body=174 status=ok
// SIG undefined FUN_14662b470(void)

undefined8 FUN_14662b470(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = FUN_140231a4a(*(undefined8 *)(param_1 + 0x3f0));
  FUN_140baf30e(uVar3,&local_28);
  if (local_28 != 0) {
    lVar4 = FUN_1401fe4bc(local_28 + 0x18);
    if (lVar4 != 0) {
      uVar3 = FUN_1401fe4bc(local_28 + 0x18);
      goto LAB_14662b4c2;
    }
  }
  uVar3 = FUN_140d0e9b2(param_1);
LAB_14662b4c2:
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662b520 FUN_14662b520 body=131 status=ok
// SIG undefined FUN_14662b520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14662b520(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"Gadget",1);
  FUN_14147d486(&DAT_14cbcb9b0,local_18,3);
  _DAT_14cbcb9b0 = &PTR_FUN_14b976f90;
  FUN_140834d1a(&DAT_14cbcb9b0,L"Events related to gadgets.");
  DAT_14cbcba0d = 1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662b5a4 FUN_14662b5a4 body=254 status=ok
// SIG undefined FUN_14662b5a4(void)

undefined4 *
FUN_14662b5a4(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_144a815a6(param_4);
  if (lVar3 == 0) {
    lVar3 = FUN_140cd1640(param_4);
    if ((lVar3 == 0) || (lVar3 = FUN_14494e0ba(lVar3), lVar3 == 0)) {
LAB_14662b65f:
      lVar3 = 0;
    }
    else {
      lVar4 = FUN_144a5dd5e();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) != lVar4 + 0x30)) goto LAB_14662b65f;
    }
    lVar4 = FUN_140cd1532(param_4);
    if (lVar4 == 0) {
      if (lVar3 != 0) goto LAB_14662b61a;
    }
    else {
      lVar3 = FUN_1401b2ade(lVar4);
      if (lVar3 != 0) {
        lVar4 = FUN_144a5dd5e();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) goto LAB_14662b61a;
      }
    }
LAB_14662b698:
    *(undefined2 *)(param_2 + 6) = 0;
    uVar1 = 0;
  }
  else {
LAB_14662b61a:
    if (*(char *)(param_1 + 9) == '\x01') {
      uVar2 = *(undefined4 *)(lVar3 + 0x2608 + (ulonglong)*(byte *)(param_1 + 8) * 0x40);
    }
    else {
      if (*(char *)(param_1 + 9) != '\0') goto LAB_14662b698;
      uVar2 = *(undefined4 *)(lVar3 + 0x2600 + (ulonglong)*(byte *)(param_1 + 8) * 0x40);
    }
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = uVar2;
    uVar1 = 2;
  }
  *(undefined1 *)(param_2 + 8) = uVar1;
  return param_2;
}



// FUNCTION 14662b6a2 FUN_14662b6a2 body=33 status=ok
// SIG undefined FUN_14662b6a2(void)

void FUN_14662b6a2(longlong param_1)

{
  FUN_1410b16bc(param_1 + 0x9b0);
  FUN_1410b16f8(param_1);
  return;
}



// FUNCTION 14662b6c4 FUN_14662b6c4 body=26 status=ok
// SIG undefined FUN_14662b6c4(void)

void FUN_14662b6c4(undefined8 param_1)

{
  FUN_1400ecd66();
  FUN_140fb4348(param_1);
  return;
}



// FUNCTION 14662b6de FUN_14662b6de body=140 status=ok
// SIG undefined FUN_14662b6de(void)

void FUN_14662b6de(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145c069a4();
  FUN_1446f470e(&local_38,L"bIsUsing",1);
  uVar1 = FUN_140232dfe();
  FUN_140232dfe();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662b76c FUN_14662b76c body=57 status=ok
// SIG undefined FUN_14662b76c(void)

undefined4 FUN_14662b76c(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140d0e492();
  if ((char)uVar1 != '\0') {
    FUN_14151a0ec(param_1 + 0x9b0,param_1 + 0x8c8,1,0);
  }
  return uVar1;
}



// FUNCTION 14662b7a6 FUN_14662b7a6 body=84 status=ok
// SIG undefined FUN_14662b7a6(void)

void FUN_14662b7a6(longlong param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  
  if (param_2 != 0 && (param_3 & 1) != 0) {
    lVar1 = FUN_1401900c0();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      *(longlong *)(param_2 + 0x960) = param_1;
      *(undefined1 *)(param_2 + 0xac1) = *(undefined1 *)(param_1 + 0x30);
    }
  }
  return;
}



// FUNCTION 14662b7fa FUN_14662b7fa body=134 status=ok
// SIG undefined FUN_14662b7fa(void)

void FUN_14662b7fa(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  if ((*(char *)(param_1 + 0xac2) == '\0') && (*(longlong *)(param_1 + 0x168) != 0)) {
    cVar1 = FUN_1403ae288(param_1 + 0x9a8);
    if (cVar1 != '\0') {
      lVar2 = FUN_14008e0ae(param_1 + 0x9a8);
      fVar3 = *(float *)(lVar2 + 0x30) - *(float *)(lVar2 + 0x24);
      fVar3 = (float)(-(uint)(fVar3 != 0.0) &
                     (uint)((*(float *)(lVar2 + 200) - *(float *)(lVar2 + 0x24)) / fVar3));
      cVar1 = '\x03';
      if (fVar3 < 1.0) {
        cVar1 = (0.0 < fVar3) + '\x01';
      }
      *(char *)(param_1 + 0xac2) = cVar1;
    }
  }
  return;
}



// FUNCTION 14662b880 FUN_14662b880 body=254 status=ok
// SIG undefined FUN_14662b880(void)

undefined8
FUN_14662b880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3f7890;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b978640;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14036a282(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662b980 FUN_14662b980 body=254 status=ok
// SIG undefined FUN_14662b980(void)

undefined8
FUN_14662b980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3e9ef0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9788e0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1403524de(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662ba80 FUN_14662ba80 body=326 status=ok
// SIG undefined FUN_14662ba80(void)

void FUN_14662ba80(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_1414dac37();
  if (plVar4 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar4 + 0x100))(plVar4);
    if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014662bb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x398))(param_1);
      return;
    }
  }
  (**(code **)(*param_1 + 0x308))(param_1,param_1 + 0xf);
  if (param_1[0x22] != 0) {
    param_1[0x22] = 0;
    plVar4 = (longlong *)param_1[0x23];
    if (plVar4 != (longlong *)0x0) {
      param_1[0x23] = 0;
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
  if (param_1[0x24] != 0) {
    param_1[0x24] = 0;
    plVar4 = (longlong *)param_1[0x25];
    if (plVar4 != (longlong *)0x0) {
      param_1[0x25] = 0;
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
  if (param_1[0x26] != 0) {
    param_1[0x26] = 0;
    plVar4 = (longlong *)param_1[0x27];
    if (plVar4 != (longlong *)0x0) {
      param_1[0x27] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014662bba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14662bbc6 thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
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
  *param_1 = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
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
  param_1[0x2e] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 14662bbd2 FUN_14662bbd2 body=50 status=ok
// SIG undefined FUN_14662bbd2(void)

void FUN_14662bbd2(longlong param_1)

{
  FUN_145fdf0d2(param_1 + 0x2f58,0);
  FUN_140457ffc(param_1 + 0x1600,param_1);
  FUN_1415d1b4a(param_1);
  return;
}



// FUNCTION 14662bc04 FUN_14662bc04 body=40 status=ok
// SIG undefined FUN_14662bc04(void)

undefined8 FUN_14662bc04(undefined8 param_1,int param_2)

{
  FUN_14097122c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662bc2c FUN_14662bc2c body=29 status=ok
// SIG undefined FUN_14662bc2c(void)

bool FUN_14662bc2c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14662bc4a FUN_14662bc4a body=26 status=ok
// SIG undefined FUN_14662bc4a(void)

bool FUN_14662bc4a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14662bc64 FUN_14662bc64 body=24 status=ok
// SIG undefined FUN_14662bc64(void)

bool FUN_14662bc64(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662bc7c FUN_14662bc7c body=24 status=ok
// SIG undefined FUN_14662bc7c(void)

bool FUN_14662bc7c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662bc94 FUN_14662bc94 body=26 status=ok
// SIG undefined FUN_14662bc94(void)

bool FUN_14662bc94(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14662bcae FUN_14662bcae body=24 status=ok
// SIG undefined FUN_14662bcae(void)

bool FUN_14662bcae(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662bcc6 FUN_14662bcc6 body=29 status=ok
// SIG undefined FUN_14662bcc6(void)

bool FUN_14662bcc6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14662bce4 FUN_14662bce4 body=26 status=ok
// SIG undefined FUN_14662bce4(void)

bool FUN_14662bce4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14662bcfe FUN_14662bcfe body=24 status=ok
// SIG undefined FUN_14662bcfe(void)

bool FUN_14662bcfe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662bd16 FUN_14662bd16 body=29 status=ok
// SIG undefined FUN_14662bd16(void)

bool FUN_14662bd16(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14662bd34 FUN_14662bd34 body=26 status=ok
// SIG undefined FUN_14662bd34(void)

bool FUN_14662bd34(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14662bd4e FUN_14662bd4e body=29 status=ok
// SIG undefined FUN_14662bd4e(void)

bool FUN_14662bd4e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14662bd6c FUN_14662bd6c body=26 status=ok
// SIG undefined FUN_14662bd6c(void)

bool FUN_14662bd6c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14662bd86 FUN_14662bd86 body=24 status=ok
// SIG undefined FUN_14662bd86(void)

bool FUN_14662bd86(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662bd9e FUN_14662bd9e body=29 status=ok
// SIG undefined FUN_14662bd9e(void)

undefined8 FUN_14662bd9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662bdbc FUN_14662bdbc body=74 status=ok
// SIG undefined FUN_14662bdbc(void)

void FUN_14662bdbc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0xa8), lVar1 != 0)) {
    lVar2 = FUN_1400b1372();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_141363faa(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14662be06 FUN_14662be06 body=74 status=ok
// SIG undefined FUN_14662be06(void)

void FUN_14662be06(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0xa8), lVar1 != 0)) {
    lVar2 = FUN_1400b1372();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_141364042(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14662be50 FUN_14662be50 body=93 status=ok
// SIG undefined FUN_14662be50(void)

undefined8 * FUN_14662be50(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140771728(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1406fce60(param_1,iVar1);
      FUN_1406fce23(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14662beae FUN_14662beae body=123 status=ok
// SIG undefined FUN_14662beae(void)

void FUN_14662beae(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xaa0) == '\x01') {
    if (*(int *)(param_1 + 0x9f8) < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = **(undefined8 **)(param_1 + 0x9f0);
    }
    FUN_14596198c(param_1,*(undefined8 *)(param_1 + 0xa00));
    memcpy((void *)(param_1 + 0x890),(void *)(param_1 + 0xa10),0x90);
    if (*(int *)(param_1 + 0x890) == 4) {
      *(undefined8 *)(param_1 + 0x8a8) = uVar1;
    }
    FUN_145cf5f30(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14662bf2a FUN_14662bf2a body=131 status=ok
// SIG undefined FUN_14662bf2a(void)

undefined8 FUN_14662bf2a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 1;
  }
  cVar1 = FUN_144729dda(param_1 + 0x70);
  if ((cVar1 != '\0') &&
     ((((lVar2 = FUN_14479d2ce(param_1 + 0x70), *(longlong *)(lVar2 + 0x3b0) != 0 &&
        (lVar3 = FUN_1402d20ea(lVar2 + 0x3a8), lVar3 == 0)) || (*(longlong *)(lVar2 + 0x3f8) == 0))
      || ((*(longlong *)(lVar2 + 0x398) == 0 || (*(longlong *)(lVar2 + 0x3f0) == 0)))))) {
    return 0;
  }
  uVar4 = FUN_144729dda(param_1 + 0x58);
  return uVar4;
}



// FUNCTION 14662bfae FUN_14662bfae body=422 status=ok
// SIG undefined FUN_14662bfae(void)

longlong * FUN_14662bfae(longlong *param_1,undefined8 *param_2)

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
LAB_14662c084:
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
    *puVar3 = &PTR_FUN_14b97a9f0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_1416c6658;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14662c084;
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
    *puVar3 = &PTR_FUN_14b97a9f0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_1416c6658;
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



// FUNCTION 14662c154 FUN_14662c154 body=202 status=ok
// SIG undefined FUN_14662c154(void)

longlong FUN_14662c154(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_58;
  longlong *local_48;
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  lVar1 = 0;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  local_68 = 0x800040100;
  if (param_2 != 0) {
    lVar1 = FUN_141037e38();
    if (lVar1 != 0) {
      lVar2 = FUN_145afa018();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_14662c1d2;
    }
    lVar1 = 0;
  }
LAB_14662c1d2:
  if (local_58 != 0) {
    plVar3 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar3 = local_38;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662c220 FUN_14662c220 body=317 status=ok
// SIG undefined FUN_14662c220(void)

void FUN_14662c220(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  
  *(undefined8 *)(param_1 + 0x3e0) = *param_4;
  plVar2 = (longlong *)param_4[1];
  plVar9 = *(longlong **)(param_1 + 1000);
  if (plVar9 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(param_1 + 1000);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 1000) = plVar2;
  }
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_2 + 0xc);
  if (param_3[1] == 0) {
    param_3 = param_2;
  }
  *(undefined8 *)(param_1 + 0x3a8) = *param_3;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar5 = *(undefined4 *)(param_3 + 2);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_1 + 0x3b4) = uVar4;
  *(undefined4 *)(param_1 + 0x3b8) = uVar5;
  *(undefined4 *)(param_1 + 0x3bc) = uVar6;
  FUN_144a787a6(param_1 + 0x3c0,param_3 + 3);
  *(undefined8 *)(param_1 + 0x3d0) = param_2[5];
  *(undefined1 *)(param_1 + 0x3d8) = *(undefined1 *)(param_2 + 6);
  lVar3 = *(longlong *)(param_1 + 0x398);
  if (lVar3 != 0) {
    iVar7 = FUN_1457c5e5a(4);
    FUN_1412ff0e6(lVar3,-iVar7);
    plVar2 = *(longlong **)(param_1 + 0x398);
    uVar8 = FUN_1401ca522(param_2 + 7);
    (**(code **)(*plVar2 + 0xa78))(plVar2,uVar8);
  }
  plVar2 = (longlong *)param_4[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar2 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014662c359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14662c35e FUN_14662c35e body=691 status=ok
// SIG undefined FUN_14662c35e(void)

void FUN_14662c35e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 *local_80;
  undefined8 *local_70;
  undefined4 local_68;
  undefined1 local_59;
  undefined8 local_58;
  longlong *local_50;
  undefined4 *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1405f1eac();
  local_48 = (undefined4 *)0x0;
  uStack_40 = 0;
  lVar8 = FUN_14050fd64();
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    lVar9 = FUN_1402d20ea(param_1 + 0x3a8);
    if (lVar9 == 0) {
      uStack_40 = CONCAT44(uStack_40._4_4_,1);
      FUN_1406f071e(&local_48,0);
      uVar5 = *(undefined4 *)(param_1 + 0x3b4);
      uVar6 = *(undefined4 *)(param_1 + 0x3b8);
      uVar7 = *(undefined4 *)(param_1 + 0x3bc);
      *local_48 = *(undefined4 *)(param_1 + 0x3b0);
      local_48[1] = uVar5;
      local_48[2] = uVar6;
      local_48[3] = uVar7;
      *(undefined8 *)(local_48 + 4) = 0;
      iVar3 = *(int *)(param_1 + 0x3c8);
      _Src = *(void **)(param_1 + 0x3c0);
      local_48[6] = iVar3;
      if ((longlong)iVar3 == 0) {
        local_48[7] = 0;
      }
      else {
        puVar11 = (undefined8 *)(local_48 + 4);
        FUN_1446dd670(puVar11,iVar3,0);
        memcpy((void *)*puVar11,_Src,(longlong)iVar3 * 2);
      }
    }
  }
  if (0 < (int)uStack_40) {
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    FUN_1446efa72(&local_70,0,3,0x10);
    puVar11 = local_70;
    local_68 = 3;
    *local_70 = &PTR_LAB_149e020b0;
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
    local_70[2] = lVar10;
    *local_70 = &PTR_FUN_14b97acb0;
    local_70[3] = 0;
    FUN_14485c47a(local_70 + 3,param_1);
    puVar11[4] = FUN_1461b57fa;
    local_80 = &local_59;
    local_88 = 0;
    local_90 = 0;
    local_98 = 0;
    FUN_1457028c8(lVar8 + 0x1e8,&local_58,&local_48,&local_70);
    plVar1 = local_50;
    if ((undefined8 *)(param_1 + 0x428) != &local_58) {
      *(undefined8 *)(param_1 + 0x428) = local_58;
      local_58 = 0;
      plVar4 = *(longlong **)(param_1 + 0x430);
      if (local_50 != plVar4) {
        local_50 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x430) = plVar1;
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
    plVar1 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    FUN_1449db362(&local_70);
  }
  FUN_1461b5824(param_1);
  FUN_140861e20(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662c612 FUN_14662c612 body=137 status=ok
// SIG undefined FUN_14662c612(void)

void FUN_14662c612(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x428) = 0;
  plVar3 = *(longlong **)(param_1 + 0x430);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x430) = 0;
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
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x3f0) = 0;
  }
  FUN_1461f3e02(param_1);
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 14662c69c FUN_14662c69c body=26 status=ok
// SIG undefined FUN_14662c69c(void)

void FUN_14662c69c(undefined8 param_1)

{
  FUN_1412b5f50();
  FUN_146034b14(param_1);
  return;
}



// FUNCTION 14662c6b6 FUN_14662c6b6 body=138 status=ok
// SIG undefined FUN_14662c6b6(void)

void FUN_14662c6b6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_14571695d();
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar3 = FUN_145c272be();
    uVar3 = FUN_14477b664(uVar3);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
  }
  lVar4 = *(longlong *)(lVar2 + 0x28);
  if (lVar4 == 0) {
    lVar4 = FUN_1410ac168();
  }
  lVar1 = *(longlong *)(lVar2 + 0x20);
  lVar4 = FUN_14477b664(lVar4);
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != lVar1) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(longlong *)(param_1 + 0x20) = lVar1;
  if (*(longlong *)(param_1 + 0x28) != lVar4) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar5 = FUN_14477b664(lVar4);
  uVar5 = FUN_14477b664(uVar5);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  return;
}



// FUNCTION 14662c740 FUN_14662c740 body=107 status=ok
// SIG undefined FUN_14662c740(void)

void FUN_14662c740(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  FUN_144a7e84a();
  if (*(char *)((longlong)param_1 + 0x6dc) == '\x01') {
    cVar1 = FUN_1407606b4((longlong)param_1 + 0x6c4,param_2);
    if (cVar1 != '\0') {
      FUN_14090b096(param_1);
    }
  }
  if (*(char *)((longlong)param_1 + 0x6dc) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014662c780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x3b0))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 14662c7d2 FUN_14662c7d2 body=456 status=ok
// SIG undefined FUN_14662c7d2(void)

void FUN_14662c7d2(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))();
    lVar3 = FUN_1413206c6();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      lVar2 = param_1 + 8;
      cVar1 = FUN_144729dda(lVar2);
      if ((param_3 != 0) && (cVar1 != '\0')) {
        lVar3 = FUN_14479d2ce(lVar2);
        lVar3 = *(longlong *)(lVar3 + 0x1c8);
        if (lVar3 == 0) {
          local_38 = DAT_14c8464f0;
          local_48 = DAT_14c8464e0;
          uStack_40 = DAT_14c8464e8;
        }
        else {
          local_48 = *(undefined8 *)(lVar3 + 0x260);
          uStack_40 = *(undefined8 *)(lVar3 + 0x268);
          local_38 = *(undefined8 *)(lVar3 + 0x270);
        }
        local_88 = *(undefined4 *)(param_3 + 0x138);
        local_90 = *(undefined8 *)(param_3 + 0x130);
        local_80 = *(undefined8 *)(param_3 + 0x140);
        local_78 = *(undefined4 *)(param_3 + 0x148);
        local_70 = 0;
        local_68 = *(undefined4 *)(param_3 + 0x158);
        uStack_64 = *(undefined4 *)(param_3 + 0x15c);
        uStack_60 = *(undefined4 *)(param_3 + 0x160);
        uStack_5c = *(undefined4 *)(param_3 + 0x164);
        local_58 = *(undefined4 *)(param_3 + 0x168);
        uStack_54 = *(undefined4 *)(param_3 + 0x16c);
        uStack_50 = *(undefined4 *)(param_3 + 0x170);
        uStack_4c = *(undefined4 *)(param_3 + 0x174);
        local_a0 = 0;
        local_b0 = 0;
        local_b8 = 0;
        local_a8 = 0;
        FUN_141512486(param_2,&local_90,5,&local_48);
        uVar4 = FUN_14479d2ce(param_1 + 0xa8);
        lVar3 = FUN_1412c348c(uVar4);
        if (lVar3 != 0) {
          cVar1 = FUN_148cc6424(lVar3);
          if (cVar1 != '\0') {
            cVar1 = FUN_148d724c2(param_1);
            if (cVar1 != '\0') {
              uVar4 = FUN_14479d2ce(lVar2);
              FUN_148cc63fa(lVar3,uVar4);
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662c99c FUN_14662c99c body=38 status=ok
// SIG undefined FUN_14662c99c(void)

undefined8 FUN_14662c99c(undefined8 param_1,int param_2)

{
  FUN_1457b7af4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662c9c2 FUN_14662c9c2 body=38 status=ok
// SIG undefined FUN_14662c9c2(void)

undefined8 FUN_14662c9c2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"OakMapViewer",1);
  return param_2;
}



// FUNCTION 14662c9e8 FUN_14662c9e8 body=29 status=ok
// SIG undefined FUN_14662c9e8(void)

bool FUN_14662c9e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14662ca06 FUN_14662ca06 body=26 status=ok
// SIG undefined FUN_14662ca06(void)

bool FUN_14662ca06(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14662ca20 FUN_14662ca20 body=24 status=ok
// SIG undefined FUN_14662ca20(void)

bool FUN_14662ca20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662ca38 FUN_14662ca38 body=29 status=ok
// SIG undefined FUN_14662ca38(void)

undefined8 FUN_14662ca38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ca56 FUN_14662ca56 body=29 status=ok
// SIG undefined FUN_14662ca56(void)

undefined8 FUN_14662ca56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ca74 FUN_14662ca74 body=415 status=ok
// SIG undefined FUN_14662ca74(void)

longlong * FUN_14662ca74(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
LAB_14662cb4a:
    *puVar3 = &PTR_LAB_14b968dc0;
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
    *puVar3 = &PTR_FUN_14b97aa80;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14662cb4a;
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
    *puVar3 = &PTR_LAB_14b968dc0;
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
    *puVar3 = &PTR_FUN_14b97aa80;
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



// FUNCTION 14662cc14 FUN_14662cc14 body=422 status=ok
// SIG undefined FUN_14662cc14(void)

longlong * FUN_14662cc14(longlong *param_1,undefined8 *param_2)

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
LAB_14662ccea:
    *puVar3 = &PTR_LAB_14b968e30;
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
    *puVar3 = &PTR_FUN_14b97aaf0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_144195d5e;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14662ccea;
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
    *puVar3 = &PTR_LAB_14b968e30;
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
    *puVar3 = &PTR_FUN_14b97aaf0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_144195d5e;
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



// FUNCTION 14662cdba FUN_14662cdba body=422 status=ok
// SIG undefined FUN_14662cdba(void)

longlong * FUN_14662cdba(longlong *param_1,undefined8 *param_2)

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
LAB_14662ce90:
    *puVar3 = &PTR_LAB_14b97abd0;
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
    *puVar3 = &PTR_FUN_14b97ab60;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_148d7089a;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14662ce90;
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
    *puVar3 = &PTR_LAB_14b97abd0;
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
    *puVar3 = &PTR_FUN_14b97ab60;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_148d7089a;
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



// FUNCTION 14662cf60 FUN_14662cf60 body=132 status=ok
// SIG undefined FUN_14662cf60(void)

void FUN_14662cf60(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14662cfe4 FUN_14662cfe4 body=132 status=ok
// SIG undefined FUN_14662cfe4(void)

void FUN_14662cfe4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14662d06a FUN_14662d06a body=147 status=ok
// SIG undefined FUN_14662d06a(void)

void FUN_14662d06a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x180,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x180)) {
      uVar5 = uVar4 / 0x180 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x180,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14662d0fe FUN_14662d0fe body=124 status=ok
// SIG undefined FUN_14662d0fe(void)

undefined8 * FUN_14662d0fe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if ((*(char *)(param_1 + 3) == '\x01') && (param_1[1] != 0)) {
    FUN_1400020a8();
  }
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1);
  }
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



// FUNCTION 14662d17a FUN_14662d17a body=24 status=ok
// SIG undefined FUN_14662d17a(void)

bool FUN_14662d17a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662d192 FUN_14662d192 body=38 status=ok
// SIG undefined FUN_14662d192(void)

undefined8 FUN_14662d192(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RandomDisplayText",1);
  return param_2;
}



// FUNCTION 14662d1b8 FUN_14662d1b8 body=212 status=ok
// SIG undefined FUN_14662d1b8(void)

uint FUN_14662d1b8(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined8 local_40;
  longlong lStack_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_1 + 0x50))();
  if (cVar2 == '\0') {
    lVar4 = FUN_1406d51c0();
    local_48 = &DAT_14a171d50;
    local_40 = 0;
    lStack_38 = 0;
    local_30 = 0;
    FUN_1401004a0(&local_48,param_1 + 0x9e);
    uVar3 = FUN_144a8028a(lVar4 + 0xb0,&local_48);
    local_48 = &DAT_14a171d50;
    uVar1 = local_30 >> 0x20;
    local_30 = local_30 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      FUN_140115c12(&lStack_38,0);
    }
    local_40 = 0;
    if (lStack_38 != 0) {
      FUN_1400020a8();
    }
    uVar3 = uVar3 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662d28e FUN_14662d28e body=22 status=ok
// SIG undefined FUN_14662d28e(void)

undefined8 FUN_14662d28e(int *param_1)

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
  
  plVar4 = DAT_14cbcdc38;
  if (DAT_14cbcdc38 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cbcdc38 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbcdc38 + 0x154) & 1) == 0) ||
       ((int)DAT_14cbcdc38[0x3a] <= *(int *)((longlong)DAT_14cbcdc38 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cbcdc38 + 0x300))(DAT_14cbcdc38);
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



// FUNCTION 14662d2aa FUN_14662d2aa body=206 status=ok
// SIG undefined FUN_14662d2aa(void)

void FUN_14662d2aa(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_140c05e56();
  if ((lVar5 != 0) && (FUN_1410d53f0(&local_30,lVar5), local_28 != (longlong *)0x0)) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_140457ffc(local_30 + 0x28,param_1);
        FUN_140457ffc(local_30 + 0x40,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14662d37a FUN_14662d37a body=627 status=ok
// SIG undefined FUN_14662d37a(void)

void FUN_14662d37a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14082167c();
  FUN_141193194(param_1,param_2,param_1 + 0x78);
  lVar5 = FUN_140823ef2(param_1,param_2,&DAT_14c948618);
  local_80 = *(undefined4 *)(param_1 + 0x80);
  local_88 = *(undefined8 *)(param_1 + 0x78);
  FUN_14082216c(lVar5);
  plVar6 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b97de20;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b911a90;
  *(undefined4 *)(plVar6 + 4) = 1;
  FUN_140823334(plVar6 + 3,0);
  puVar4 = (undefined8 *)plVar6[3];
  *puVar4 = DAT_14cbcdb00;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  local_98 = CONCAT31(local_98._1_3_,1);
  local_8c = 1;
  uStack_94 = (undefined4)DAT_14cb7c588;
  uStack_90 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
  local_a8 = 2;
  FUN_1408234aa();
  FUN_140821fec(puVar4,&local_88,&local_98,0);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(lVar5 + 0x50);
  *(uint *)(lVar5 + 0x50) = iVar3 + 1U;
  if (*(uint *)(lVar5 + 0x54) < iVar3 + 1U) {
    FUN_140822376((longlong *)(lVar5 + 0x48),iVar3);
  }
  lVar5 = *(longlong *)(lVar5 + 0x48);
  *(longlong **)(lVar5 + (longlong)iVar3 * 0x10) = plVar6 + 2;
  *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  }
  local_a8 = 2;
  FUN_1408234aa();
  FUN_14082207e(&local_98,&local_88,0);
  FUN_140822770(param_2 + 0x2c0,&local_98,1);
  FUN_1447cd778(CONCAT44(uStack_94,local_98),uStack_90);
  if (CONCAT44(uStack_94,local_98) != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662d5ee FUN_14662d5ee body=860 status=ok
// SIG undefined FUN_14662d5ee(void)

void FUN_14662d5ee(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_328 [32];
  ulonglong local_308;
  short local_300;
  longlong local_2f8;
  ulonglong local_2f0;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined1 local_2c4 [12];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 *local_2a8;
  char local_2a0;
  undefined4 local_298 [2];
  longlong local_290;
  undefined1 local_98 [40];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_328;
  local_308 = CONCAT71(local_308._1_7_,1);
  FUN_1408234aa(param_1,local_98,param_2,&DAT_14cbcdb48);
  if (0 < *(int *)(param_1 + 0x90)) {
    local_2e8 = param_2 + 0x2c0;
    local_2f0 = param_1 + 0x10;
    lVar8 = 0;
    uVar9 = 0;
    local_2f8 = param_2;
    do {
      local_2c8 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 8 + lVar8);
      local_2d0 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + lVar8);
      lVar6 = FUN_140823ef2(param_1,param_2,&local_2d0);
      iVar5 = *(int *)(lVar6 + 0x60);
      *(uint *)(lVar6 + 0x60) = iVar5 + 1U;
      if (*(uint *)(lVar6 + 100) < iVar5 + 1U) {
        FUN_140823334((longlong *)(lVar6 + 0x58),iVar5);
      }
      puVar3 = (undefined8 *)(*(longlong *)(lVar6 + 0x58) + (longlong)iVar5 * 0x28);
      *puVar3 = DAT_14cbcdd30;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      uStack_2b0._4_4_ = (int)uVar9 + 1;
      local_2b8._0_4_ = CONCAT31(local_2b8._1_3_,2);
      local_2b8._4_4_ = 0;
      uStack_2b0._0_4_ = 0;
      FUN_140821fec(puVar3,local_98,&local_2b8,0);
      lVar6 = FUN_1406b2efc(local_2e8);
      local_2e0 = CONCAT31(local_2e0._1_3_,1);
      local_2d4 = 1;
      uStack_2dc = (undefined4)DAT_14cb7c588;
      uStack_2d8 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
      local_2b8._0_4_ = (undefined4)DAT_14cbcd1e8;
      local_2b8._4_4_ = (undefined4)((ulonglong)DAT_14cbcd1e8 >> 0x20);
      FUN_1401533ba(local_2c4,&local_2b8,1);
      FUN_140fe4afa(param_1,&local_2b8,&local_2d0,local_2c4);
      local_308 = local_308 & 0xffffffffffffff00;
      FUN_140641812(lVar6 + 0x170,&local_2b8,&local_2e0,0);
      if (local_290 != 0) {
        FUN_1400020a8();
      }
      param_2 = local_2f8;
      uVar1 = uVar9 + 1;
      bVar4 = *(byte *)(param_1 + 8);
      FUN_14089cb6a(param_1,&local_2b8,uVar9 & 0xffffffff,local_2f8);
      local_308 = local_2f0;
      local_300 = (ushort)bVar4 * 2;
      FUN_1408236ae(param_1,param_2,&local_2b8);
      lVar8 = lVar8 + 0xc;
      uVar9 = uVar1;
    } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x90));
  }
  local_2b8 = local_298;
  local_2a0 = '\0';
  local_2a8 = local_98;
  uStack_2b0 = local_2b8;
  FUN_14014e8d0(local_2a8,&local_2b8);
  if (local_2a8 <= (undefined1 *)((longlong)uStack_2b0 + 5U)) {
    FUN_145753a78(&local_2b8,5);
  }
  *(undefined1 *)(uStack_2b0 + 1) = 0x30;
  *uStack_2b0 = 0x203d2120;
  puVar2 = (undefined1 *)((longlong)uStack_2b0 + 5);
  puVar7 = (undefined1 *)((longlong)uStack_2b0 + 6);
  uStack_2b0 = (undefined4 *)puVar2;
  if (local_2a8 <= puVar7) {
    FUN_145753a78(&local_2b8,1);
  }
  *(undefined1 *)uStack_2b0 = 0;
  uStack_2b0 = (undefined4 *)((longlong)uStack_2b0 + 1);
  FUN_140822110(&local_2e0,&local_2b8,0);
  FUN_140822770(param_2 + 0x2c0,&local_2e0,1);
  FUN_1447cd778(CONCAT44(uStack_2dc,local_2e0),uStack_2d8);
  if (CONCAT44(uStack_2dc,local_2e0) != 0) {
    FUN_1400020a8();
  }
  if (local_2a0 == '\x01') {
    FUN_1400020a8(local_2b8);
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662d94c FUN_14662d94c body=173 status=ok
// SIG undefined FUN_14662d94c(void)

void FUN_14662d94c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1406b2efc(param_3 + 0x2c0);
  FUN_145a39ad2(&local_38,param_3);
  FUN_140d89482(lVar1 + 0x170,&local_38);
  lVar1 = FUN_14109105e(param_2,param_3);
  if (lVar1 != 0) {
    lVar1 = FUN_145a39964(lVar1);
    if (lVar1 != 0) {
      local_30 = *(undefined4 *)(lVar1 + 0x94);
      local_38 = *(undefined8 *)(lVar1 + 0x8c);
      FUN_140d89be6(param_2,param_3);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662d9fa FUN_14662d9fa body=102 status=ok
// SIG undefined FUN_14662d9fa(void)

longlong FUN_14662d9fa(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14577a94c();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x178) != 0)) {
    lVar3 = FUN_14030d660();
    lVar2 = *(longlong *)(lVar2 + 0x178);
    if (lVar2 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar1 = *(longlong *)(lVar2 + 0x10);
      if (lVar1 == 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30) {
          return 0;
        }
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 14662da60 FUN_14662da60 body=218 status=ok
// SIG undefined FUN_14662da60(void)

void FUN_14662da60(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_14577a94c();
  if (lVar3 != 0) {
    iVar2 = FUN_14490d72a(lVar3);
    if (iVar2 != 3) {
      if (*(char *)(param_1 + 0x11c) == '\x01') {
        *(undefined1 *)(param_1 + 0x11c) = 0;
      }
      if (((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 0x90) != 0)) &&
         (0 < *(int *)(*(longlong *)(param_1 + 0x90) + 8))) {
        FUN_1401cb356();
        local_28 = *(undefined8 *)(param_1 + 0x88);
        local_20 = *(longlong *)(param_1 + 0x90);
        if (local_20 != 0) {
          LOCK();
          *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
          UNLOCK();
        }
        FUN_140d61352(&local_28);
        lVar3 = *(longlong *)(param_1 + 0x90);
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        if (lVar3 != 0) {
          LOCK();
          piVar1 = (int *)(lVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
          }
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



// FUNCTION 14662db4c FUN_14662db4c body=231 status=ok
// SIG undefined FUN_14662db4c(void)

void FUN_14662db4c(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14b97e600;
  local_28[3] = &DAT_14cbcdd00;
  local_28[4] = FUN_145a25abc;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662dc34 thunk_FUN_1400020a8 body=5 status=ok
// SIG undefined thunk_FUN_1400020a8(void)

void thunk_FUN_1400020a8(longlong param_1)

{
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 14662dc3a FUN_14662dc3a body=54 status=ok
// SIG undefined FUN_14662dc3a(void)

void FUN_14662dc3a(void)

{
  FUN_140b7aa00();
  if (DAT_14cbcd970 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cbcd950 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14662dc70 FUN_14662dc70 body=9 status=ok
// SIG undefined FUN_14662dc70(void)

void FUN_14662dc70(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 14662dc7a FUN_14662dc7a body=29 status=ok
// SIG undefined FUN_14662dc7a(void)

undefined8 FUN_14662dc7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662dc98 FUN_14662dc98 body=96 status=ok
// SIG undefined FUN_14662dc98(void)

ulonglong FUN_14662dc98(longlong param_1)

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
LAB_14662dcdb:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14662dcdb;
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



// FUNCTION 14662dcf8 FUN_14662dcf8 body=59 status=ok
// SIG undefined FUN_14662dcf8(void)

void FUN_14662dcf8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b6aee80;
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14118054a(param_1 + 0x10);
  return;
}



// FUNCTION 14662dd34 FUN_14662dd34 body=29 status=ok
// SIG undefined FUN_14662dd34(void)

undefined8 FUN_14662dd34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662dd52 FUN_14662dd52 body=29 status=ok
// SIG undefined FUN_14662dd52(void)

undefined8 FUN_14662dd52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662dd70 FUN_14662dd70 body=29 status=ok
// SIG undefined FUN_14662dd70(void)

undefined8 FUN_14662dd70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662dd8e FUN_14662dd8e body=29 status=ok
// SIG undefined FUN_14662dd8e(void)

undefined8 FUN_14662dd8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ddac FUN_14662ddac body=29 status=ok
// SIG undefined FUN_14662ddac(void)

undefined8 FUN_14662ddac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ddca FUN_14662ddca body=9 status=ok
// SIG undefined FUN_14662ddca(void)

void FUN_14662ddca(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 14662ddd4 FUN_14662ddd4 body=29 status=ok
// SIG undefined FUN_14662ddd4(void)

undefined8 FUN_14662ddd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ddf2 FUN_14662ddf2 body=98 status=ok
// SIG undefined FUN_14662ddf2(void)

void FUN_14662ddf2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1459b88a2();
  if ((param_2 != 0) && (lVar1 != 0)) {
    lVar1 = FUN_141118888();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      *(undefined1 *)(param_2 + 0x84b) = 0;
      FUN_140457ffc(param_2 + 0x6a8,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14662de54 FUN_14662de54 body=9 status=ok
// SIG undefined FUN_14662de54(void)

void FUN_14662de54(longlong param_1)

{
  FUN_140f4e84a(param_1 + 0x10);
  return;
}



// FUNCTION 14662de5e FUN_14662de5e body=29 status=ok
// SIG undefined FUN_14662de5e(void)

undefined8 FUN_14662de5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662de7c FUN_14662de7c body=29 status=ok
// SIG undefined FUN_14662de7c(void)

undefined8 FUN_14662de7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662de9a FUN_14662de9a body=29 status=ok
// SIG undefined FUN_14662de9a(void)

undefined8 FUN_14662de9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662deb8 FUN_14662deb8 body=29 status=ok
// SIG undefined FUN_14662deb8(void)

undefined8 FUN_14662deb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ded6 FUN_14662ded6 body=9 status=ok
// SIG undefined FUN_14662ded6(void)

void FUN_14662ded6(longlong param_1)

{
  FUN_140fcba78(param_1 + 0x10);
  return;
}



// FUNCTION 14662dee0 FUN_14662dee0 body=29 status=ok
// SIG undefined FUN_14662dee0(void)

undefined8 FUN_14662dee0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662df08 FUN_14662df08 body=29 status=ok
// SIG undefined FUN_14662df08(void)

undefined8 FUN_14662df08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662df26 FUN_14662df26 body=9 status=ok
// SIG undefined FUN_14662df26(void)

void FUN_14662df26(longlong param_1)

{
  FUN_14104c46a(param_1 + 0x10);
  return;
}



// FUNCTION 14662df30 FUN_14662df30 body=29 status=ok
// SIG undefined FUN_14662df30(void)

undefined8 FUN_14662df30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662df4e FUN_14662df4e body=132 status=ok
// SIG undefined FUN_14662df4e(void)

void FUN_14662df4e(longlong param_1,int param_2)

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



// FUNCTION 14662dfd4 FUN_14662dfd4 body=63 status=ok
// SIG undefined FUN_14662dfd4(void)

undefined8 FUN_14662dfd4(longlong *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_140af253a();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if (cVar1 != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00014662e007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(((undefined8 *)*param_1)[1],param_2,UNRECOVERED_JUMPTABLE);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14662e014 FUN_14662e014 body=93 status=ok
// SIG undefined FUN_14662e014(void)

void FUN_14662e014(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97e600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14662e072 FUN_14662e072 body=29 status=ok
// SIG undefined FUN_14662e072(void)

undefined8 FUN_14662e072(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662e090 FUN_14662e090 body=9 status=ok
// SIG undefined FUN_14662e090(void)

void FUN_14662e090(longlong param_1)

{
  FUN_1415eb8d6(param_1 + 0x10);
  return;
}



// FUNCTION 14662e09a FUN_14662e09a body=29 status=ok
// SIG undefined FUN_14662e09a(void)

undefined8 FUN_14662e09a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662e0b8 FUN_14662e0b8 body=85 status=ok
// SIG undefined FUN_14662e0b8(void)

void FUN_14662e0b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b981710;
  return;
}



// FUNCTION 14662e10e FUN_14662e10e body=29 status=ok
// SIG undefined FUN_14662e10e(void)

undefined8 FUN_14662e10e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662e12c FUN_14662e12c body=48 status=ok
// SIG undefined FUN_14662e12c(void)

void FUN_14662e12c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_145c03c5c(param_1 + 0x10);
  return;
}



// FUNCTION 14662e15c FUN_14662e15c body=29 status=ok
// SIG undefined FUN_14662e15c(void)

undefined8 FUN_14662e15c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662e17a FUN_14662e17a body=9 status=ok
// SIG undefined FUN_14662e17a(void)

void FUN_14662e17a(longlong param_1)

{
  FUN_145c03c5c(param_1 + 0x10);
  return;
}



// FUNCTION 14662e184 FUN_14662e184 body=29 status=ok
// SIG undefined FUN_14662e184(void)

undefined8 FUN_14662e184(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662e1a2 FUN_14662e1a2 body=39 status=ok
// SIG undefined FUN_14662e1a2(void)

ulonglong FUN_14662e1a2(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c872bf0 == '\0') && (uVar1 = FUN_140b3f358(), (char)uVar1 == '\0')) {
    return CONCAT71((int7)((ulonglong)uVar1 >> 8),DAT_14c872bf2) ^ 1;
  }
  return 0;
}



// FUNCTION 14662e1ca FUN_14662e1ca body=513 status=ok
// SIG undefined FUN_14662e1ca(void)

void FUN_14662e1ca(longlong param_1,undefined4 param_2,char param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar3 = FUN_14586ca54();
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_14586fca4(local_98,uVar3);
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar5 = 0;
  local_b0 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar5 = local_70;
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = local_98;
  if ((iStack_a4 != iVar5) || (local_b0 != local_88)) {
    bVar4 = false;
    do {
      puVar1 = (undefined8 *)(*local_e0 + (longlong)iStack_c4 * 0x18);
      cVar2 = FUN_145cf80ce(param_1,param_2,*puVar1);
      if (cVar2 == '\0') {
        if (param_3 == '\0') {
          cVar2 = FUN_140b70752(param_1,param_2,*puVar1);
          if (cVar2 == '\0') goto LAB_14662e3b7;
        }
      }
      else {
LAB_14662e3b7:
        FUN_148d8f254(param_1,param_2,*puVar1);
        bVar4 = true;
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (((iStack_c4 != iVar5) || (local_d0 != local_88)) || (local_e0 != local_98));
    if (bVar4) {
      FUN_1401861f4(param_1 + 0x668,param_2);
    }
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14662e3cc FUN_14662e3cc body=136 status=ok
// SIG undefined FUN_14662e3cc(void)

longlong * FUN_14662e3cc(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,2,0x10);
  *(undefined4 *)(param_2 + 1) = 2;
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5407d0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  puVar2[2] = lVar4;
  *puVar2 = &PTR_FUN_14b98a2b0;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  return param_2;
}



// FUNCTION 14662e454 FUN_14662e454 body=136 status=ok
// SIG undefined FUN_14662e454(void)

longlong * FUN_14662e454(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,2,0x10);
  *(undefined4 *)(param_2 + 1) = 2;
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5407d0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  puVar2[2] = lVar4;
  *puVar2 = &PTR_FUN_14b98a320;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  return param_2;
}



// FUNCTION 14662e4dc FUN_14662e4dc body=136 status=ok
// SIG undefined FUN_14662e4dc(void)

longlong * FUN_14662e4dc(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,2,0x10);
  *(undefined4 *)(param_2 + 1) = 2;
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5407d0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  puVar2[2] = lVar4;
  *puVar2 = &PTR_FUN_14b98a390;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  return param_2;
}



// FUNCTION 14662e564 FUN_14662e564 body=136 status=ok
// SIG undefined FUN_14662e564(void)

longlong * FUN_14662e564(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,2,0x10);
  *(undefined4 *)(param_2 + 1) = 2;
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5407d0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  puVar2[2] = lVar4;
  *puVar2 = &PTR_FUN_14b98a400;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  return param_2;
}



// FUNCTION 14662e5ec FUN_14662e5ec body=136 status=ok
// SIG undefined FUN_14662e5ec(void)

longlong * FUN_14662e5ec(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,2,0x10);
  *(undefined4 *)(param_2 + 1) = 2;
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5407d0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  puVar2[2] = lVar4;
  *puVar2 = &PTR_FUN_14b98a470;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  return param_2;
}



// FUNCTION 14662e674 FUN_14662e674 body=85 status=ok
// SIG undefined FUN_14662e674(void)

undefined8 FUN_14662e674(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2d0))();
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1403ca142();
    param_1 = (longlong *)plVar2[2];
    if ((*(int *)(lVar3 + 0x38) <= (int)param_1[7]) &&
       (param_1 = (longlong *)param_1[6], param_1[*(int *)(lVar3 + 0x38)] == lVar3 + 0x30)) {
      uVar4 = (**(code **)(*plVar2 + 0x498))(plVar2);
      bVar6 = (byte)uVar4 < 4;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar1 = 1;
      goto LAB_14662e6bd;
    }
  }
  bVar6 = (byte)param_1;
  bVar1 = 0;
  uVar5 = 0;
LAB_14662e6bd:
  return CONCAT71(uVar5,bVar1 & bVar6);
}



// FUNCTION 14662e6ca FUN_14662e6ca body=83 status=ok
// SIG undefined FUN_14662e6ca(void)

undefined4 * FUN_14662e6ca(undefined4 *param_1,undefined4 *param_2)

{
  if (param_2 != param_1) {
    if (*(char *)(param_1 + 0x4a) == '\x01') {
      FUN_14124efea(param_1 + 2);
    }
    *param_1 = *param_2;
    FUN_14589e2aa(param_1 + 2,param_2 + 2);
    param_1[0x48] = param_2[0x48];
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  return param_1;
}



// FUNCTION 14662e71e FUN_14662e71e body=180 status=ok
// SIG undefined FUN_14662e71e(void)

undefined8 * FUN_14662e71e(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_1446f470e(&local_40,L"CUSTOMSEARCHINT2",1);
  cVar1 = FUN_145e34e2c(param_2 + 0x28,local_40,&local_38);
  if (cVar1 == '\0') {
    *param_1 = 0;
  }
  else {
    puVar2 = local_38;
    if ((int)uStack_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1446f470e(param_1,puVar2,1);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14662e7d4 FUN_14662e7d4 body=428 status=ok
// SIG undefined FUN_14662e7d4(void)

longlong * FUN_14662e7d4(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14662e8b4:
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b98b900;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14662e8b4;
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
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14b98b900;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 14662e980 FUN_14662e980 body=428 status=ok
// SIG undefined FUN_14662e980(void)

longlong * FUN_14662e980(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14662ea60:
    *puVar5 = &PTR_LAB_14b98ba00;
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
    *puVar5 = &PTR_FUN_14b98b990;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14662ea60;
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
    *puVar5 = &PTR_LAB_14b98ba00;
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
    *puVar5 = &PTR_FUN_14b98b990;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 14662eb2c FUN_14662eb2c body=102 status=ok
// SIG undefined FUN_14662eb2c(void)

longlong * FUN_14662eb2c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_2 = 0;
  lVar1 = (**(code **)(*param_1 + 0x2d0))();
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (lVar1 = *(longlong *)(lVar1 + 0x358), *param_2 = lVar1, lVar1 == 0))
    {
      *param_2 = DAT_14cbca7c8;
    }
  }
  return param_2;
}



// FUNCTION 14662eb92 FUN_14662eb92 body=351 status=ok
// SIG undefined FUN_14662eb92(void)

longlong * FUN_14662eb92(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x10);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_14662ec88:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_14662ec88;
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_14b98bee0;
  puVar5[1] = *param_4;
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
  puVar5[2] = lVar11;
  *puVar5 = &PTR_FUN_14b98be70;
  puVar5[3] = uVar12;
  puVar5[4] = plVar10;
  if (bVar9) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14662ed12 FUN_14662ed12 body=29 status=ok
// SIG undefined FUN_14662ed12(void)

undefined8 FUN_14662ed12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ed30 FUN_14662ed30 body=38 status=ok
// SIG undefined FUN_14662ed30(void)

undefined8 FUN_14662ed30(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOakUIEvent_OnExit",1);
  return param_2;
}



// FUNCTION 14662ed56 FUN_14662ed56 body=29 status=ok
// SIG undefined FUN_14662ed56(void)

undefined8 FUN_14662ed56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ed74 FUN_14662ed74 body=29 status=ok
// SIG undefined FUN_14662ed74(void)

undefined8 FUN_14662ed74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ed92 FUN_14662ed92 body=85 status=ok
// SIG undefined FUN_14662ed92(void)

void FUN_14662ed92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b988cc0;
  return;
}



// FUNCTION 14662ede8 FUN_14662ede8 body=29 status=ok
// SIG undefined FUN_14662ede8(void)

undefined8 FUN_14662ede8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ee06 FUN_14662ee06 body=29 status=ok
// SIG undefined FUN_14662ee06(void)

undefined8 FUN_14662ee06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ee24 FUN_14662ee24 body=29 status=ok
// SIG undefined FUN_14662ee24(void)

undefined8 FUN_14662ee24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ee42 FUN_14662ee42 body=29 status=ok
// SIG undefined FUN_14662ee42(void)

undefined8 FUN_14662ee42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ee60 FUN_14662ee60 body=29 status=ok
// SIG undefined FUN_14662ee60(void)

undefined8 FUN_14662ee60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ee7e FUN_14662ee7e body=29 status=ok
// SIG undefined FUN_14662ee7e(void)

undefined8 FUN_14662ee7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ee9c FUN_14662ee9c body=29 status=ok
// SIG undefined FUN_14662ee9c(void)

undefined8 FUN_14662ee9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662eeba FUN_14662eeba body=29 status=ok
// SIG undefined FUN_14662eeba(void)

undefined8 FUN_14662eeba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662eed8 FUN_14662eed8 body=26 status=ok
// SIG undefined FUN_14662eed8(void)

bool FUN_14662eed8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14662eef2 FUN_14662eef2 body=24 status=ok
// SIG undefined FUN_14662eef2(void)

bool FUN_14662eef2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662ef0a FUN_14662ef0a body=26 status=ok
// SIG undefined FUN_14662ef0a(void)

bool FUN_14662ef0a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14662ef24 FUN_14662ef24 body=24 status=ok
// SIG undefined FUN_14662ef24(void)

bool FUN_14662ef24(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662ef3c FUN_14662ef3c body=24 status=ok
// SIG undefined FUN_14662ef3c(void)

bool FUN_14662ef3c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662ef54 FUN_14662ef54 body=93 status=ok
// SIG undefined FUN_14662ef54(void)

void FUN_14662ef54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98abf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98ab80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14662efb2 FUN_14662efb2 body=24 status=ok
// SIG undefined FUN_14662efb2(void)

bool FUN_14662efb2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662efca FUN_14662efca body=93 status=ok
// SIG undefined FUN_14662efca(void)

void FUN_14662efca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c3a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98ac60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14662f028 FUN_14662f028 body=24 status=ok
// SIG undefined FUN_14662f028(void)

bool FUN_14662f028(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662f040 FUN_14662f040 body=93 status=ok
// SIG undefined FUN_14662f040(void)

void FUN_14662f040(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98ad40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98acd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14662f09e FUN_14662f09e body=24 status=ok
// SIG undefined FUN_14662f09e(void)

bool FUN_14662f09e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662f0b6 FUN_14662f0b6 body=93 status=ok
// SIG undefined FUN_14662f0b6(void)

void FUN_14662f0b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98adb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14662f114 FUN_14662f114 body=29 status=ok
// SIG undefined FUN_14662f114(void)

bool FUN_14662f114(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14662f132 FUN_14662f132 body=24 status=ok
// SIG undefined FUN_14662f132(void)

bool FUN_14662f132(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662f14a FUN_14662f14a body=93 status=ok
// SIG undefined FUN_14662f14a(void)

void FUN_14662f14a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98af00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98ae90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14662f1a8 FUN_14662f1a8 body=26 status=ok
// SIG undefined FUN_14662f1a8(void)

bool FUN_14662f1a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14662f1c2 FUN_14662f1c2 body=24 status=ok
// SIG undefined FUN_14662f1c2(void)

bool FUN_14662f1c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662f1da FUN_14662f1da body=16 status=ok
// SIG undefined FUN_14662f1da(void)

byte FUN_14662f1da(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 14662f1ea FUN_14662f1ea body=134 status=ok
// SIG undefined FUN_14662f1ea(void)

ulonglong FUN_14662f1ea(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = 0;
    iVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar5) == *param_2) {
        if (iVar3 != 1) {
          uVar4 = (ulonglong)(uint)-iVar3;
          goto LAB_14662f25b;
        }
        break;
      }
      iVar3 = iVar3 + -1;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 << 4 != lVar5);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1413eac7e(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 0x10) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar2 + 8 + uVar4 * 0x10) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
LAB_14662f25b:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14662f270 FUN_14662f270 body=24 status=ok
// SIG undefined FUN_14662f270(void)

bool FUN_14662f270(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662f288 FUN_14662f288 body=93 status=ok
// SIG undefined FUN_14662f288(void)

void FUN_14662f288(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b98b540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14662f2e6 FUN_14662f2e6 body=29 status=ok
// SIG undefined FUN_14662f2e6(void)

undefined8 FUN_14662f2e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662f304 FUN_14662f304 body=153 status=ok
// SIG undefined FUN_14662f304(void)

undefined8 * FUN_14662f304(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b98b690;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar2 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar2;
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[2] = &PTR_FUN_14b98b6b0;
  *(undefined4 *)(param_1 + 8) = *param_3;
  FUN_14589e2aa(param_1 + 9,param_3 + 2);
  *(undefined4 *)(param_1 + 0x2c) = param_3[0x48];
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  return param_1;
}



// FUNCTION 14662f39e FUN_14662f39e body=118 status=ok
// SIG undefined FUN_14662f39e(void)

void FUN_14662f39e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b900;
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



// FUNCTION 14662f414 FUN_14662f414 body=29 status=ok
// SIG undefined FUN_14662f414(void)

undefined8 FUN_14662f414(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662f432 FUN_14662f432 body=66 status=ok
// SIG undefined FUN_14662f432(void)

undefined8 * FUN_14662f432(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98b990;
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



// FUNCTION 14662f474 FUN_14662f474 body=118 status=ok
// SIG undefined FUN_14662f474(void)

void FUN_14662f474(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98ba00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98b990;
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



// FUNCTION 14662f4ea FUN_14662f4ea body=72 status=ok
// SIG undefined FUN_14662f4ea(void)

void FUN_14662f4ea(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b98bb50;
  FUN_1449db362(param_1 + 0x40);
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b98b6e0;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014662f52e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14662f532 FUN_14662f532 body=29 status=ok
// SIG undefined FUN_14662f532(void)

undefined8 FUN_14662f532(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662f550 FUN_14662f550 body=118 status=ok
// SIG undefined FUN_14662f550(void)

void FUN_14662f550(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98bbb0;
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



// FUNCTION 14662f5c6 FUN_14662f5c6 body=29 status=ok
// SIG undefined FUN_14662f5c6(void)

undefined8 FUN_14662f5c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662f5e4 FUN_14662f5e4 body=66 status=ok
// SIG undefined FUN_14662f5e4(void)

undefined8 * FUN_14662f5e4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98be70;
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



// FUNCTION 14662f626 FUN_14662f626 body=118 status=ok
// SIG undefined FUN_14662f626(void)

void FUN_14662f626(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b98bee0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b98be70;
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



// FUNCTION 14662f69c FUN_14662f69c body=72 status=ok
// SIG undefined FUN_14662f69c(void)

void FUN_14662f69c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b98c7a0;
  FUN_1449db362(param_1 + 0x40);
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b98b6e0;
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014662f6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14662f6e4 FUN_14662f6e4 body=29 status=ok
// SIG undefined FUN_14662f6e4(void)

undefined8 FUN_14662f6e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662f702 FUN_14662f702 body=66 status=ok
// SIG undefined FUN_14662f702(void)

undefined8 * FUN_14662f702(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98c7f0;
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



// FUNCTION 14662f744 FUN_14662f744 body=118 status=ok
// SIG undefined FUN_14662f744(void)

void FUN_14662f744(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98c7f0;
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



// FUNCTION 14662f7ba FUN_14662f7ba body=402 status=ok
// SIG undefined FUN_14662f7ba(void)

undefined8 FUN_14662f7ba(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  longlong local_90;
  longlong local_88;
  byte local_80;
  undefined **local_78 [3];
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x350))(param_1,local_78);
    lVar3 = param_2[1];
    bVar2 = true;
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = *param_2;
      lVar8 = 0;
      do {
        lVar7 = *(longlong *)(lVar1 + lVar8);
        if (lVar7 != 0) {
          local_98 = &PTR_FUN_14a184370;
          local_88 = *(longlong *)(lVar1 + 8 + lVar8);
          if (local_88 != 0) {
            LOCK();
            *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
            UNLOCK();
          }
          local_80 = 0;
          local_90 = lVar7;
          cVar4 = FUN_140ba41f1(local_78,&local_98);
          local_98 = &PTR_FUN_14a184370;
          (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_80])(&local_90);
          if (cVar4 == '\0') {
            lVar7 = *(longlong *)(lVar1 + 0x10 + lVar8);
            if (((lVar7 == 0) || (lVar5 = FUN_140f0c81a(param_1), lVar5 == 0)) ||
               (cVar4 = FUN_145977038(lVar5,lVar7), cVar4 == '\0')) {
              uVar6 = *(undefined8 *)(lVar1 + lVar8);
              lVar7 = FUN_140f0c81a(param_1);
              if ((lVar7 == 0) || (cVar4 = FUN_145977038(lVar7,uVar6), cVar4 == '\0'))
              goto LAB_14662f876;
            }
            bVar2 = false;
            break;
          }
        }
LAB_14662f876:
        lVar8 = lVar8 + 0x38;
      } while ((longlong)(int)lVar3 * 0x38 - lVar8 != 0);
    }
    local_78[0] = &PTR_FUN_14a5af930;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_78[0] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
    if (!bVar2) {
      uVar6 = 1;
      goto LAB_14662f8e9;
    }
  }
  uVar6 = 0;
LAB_14662f8e9:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14662f94e FUN_14662f94e body=138 status=ok
// SIG undefined FUN_14662f94e(void)

void FUN_14662f94e(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar2 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x70);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      do {
        lVar3 = (longlong)iVar1;
        if (*(uint *)(lVar2 + lVar3 * 0x18) == param_2) {
          lVar2 = *(longlong *)(lVar2 + 8 + lVar3 * 0x18);
          FUN_14581b41a((longlong *)(param_1 + 0x30),iVar1);
          if (*(longlong *)(DAT_14cb98ab0 + 0x28) == 0) {
            return;
          }
          if (lVar2 == 0) {
            return;
          }
          FUN_14480f766(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x110,lVar2);
          return;
        }
        iVar1 = *(int *)(lVar2 + lVar3 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14662f9d8 FUN_14662f9d8 body=68 status=ok
// SIG undefined FUN_14662f9d8(void)

void FUN_14662f9d8(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1457e1a6a();
  if (lVar1 == 0) {
    return;
  }
  FUN_140457ffc(lVar1 + 0x1e0,param_1);
  FUN_140457ffc(lVar1 + 0x578,param_1);
  return;
}



// FUNCTION 14662fa1c FUN_14662fa1c body=116 status=ok
// SIG undefined FUN_14662fa1c(void)

undefined8 * FUN_14662fa1c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = FUN_14585af82();
  if (lVar2 == 0) {
    FUN_140056680(param_2,L"unset");
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 0x2c0);
    _Src = *(void **)(lVar2 + 0x2b8);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  return param_2;
}



// FUNCTION 14662fa90 FUN_14662fa90 body=355 status=ok
// SIG undefined FUN_14662fa90(void)

longlong * FUN_14662fa90(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x628);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_14662fb8a:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_14662fb8a;
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 0x620);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_14b3e6380;
  *(undefined4 *)(puVar5 + 1) = *param_4;
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
  puVar5[2] = lVar11;
  *puVar5 = &PTR_FUN_14b9910b0;
  puVar5[3] = uVar12;
  puVar5[4] = plVar10;
  if (bVar9) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14662fbf4 FUN_14662fbf4 body=243 status=ok
// SIG undefined FUN_14662fbf4(void)

longlong * FUN_14662fbf4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x20);
  if ((lVar2 == 0) ||
     (lVar2 = (**(code **)(*(longlong *)(lVar2 + 0xda8) + 0x50))(lVar2 + 0xda8),
     *(longlong *)(lVar2 + 8) == 0)) {
    return (longlong *)0x0;
  }
  cVar1 = FUN_144729dda(lVar2);
  if (cVar1 == '\0') {
    return (longlong *)0x0;
  }
  if (*(longlong *)(lVar2 + 8) == 0) {
    return (longlong *)0x0;
  }
  cVar1 = FUN_144729dda(lVar2);
  if (cVar1 == '\0') {
    return (longlong *)0x0;
  }
  if (*(longlong *)(lVar2 + 8) == 0) {
    return (longlong *)0x0;
  }
  cVar1 = FUN_144729dda(lVar2);
  uVar5 = 0;
  if (cVar1 != '\0') {
    uVar5 = *(undefined8 *)(lVar2 + 8);
  }
  lVar3 = FUN_144b39ee0(uVar5);
  if (lVar3 == 0) {
    return (longlong *)0x0;
  }
  if ((*(longlong *)(lVar2 + 8) == 0) || (cVar1 = FUN_144729dda(lVar2), cVar1 == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + 8);
  }
  plVar4 = (longlong *)FUN_144b39ee0(uVar5);
  if (plVar4 != (longlong *)0x0) {
    uVar5 = FUN_145a3ca5a();
    lVar2 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
    if (lVar2 != 0) {
      uVar5 = FUN_145a3ca5a();
      lVar3 = FUN_144718840(lVar2,uVar5);
      if (lVar2 != lVar3) goto LAB_14662fca7;
    }
  }
  lVar3 = 0;
LAB_14662fca7:
  if (lVar3 == 0) {
    plVar4 = (longlong *)0x0;
  }
  return plVar4;
}



// FUNCTION 14662fce8 FUN_14662fce8 body=223 status=ok
// SIG undefined FUN_14662fce8(void)

ulonglong FUN_14662fce8(longlong param_1)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar3 = FUN_14479d2ce(param_1 + 0x20);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((lVar3 == 0) || (lVar4 = FUN_1447210f0(lVar3), lVar4 == 0)) goto LAB_14662fd56;
  dVar2 = *(double *)(lVar4 + 0x6d0);
  fVar1 = *(float *)(param_1 + 0x414);
  lVar4 = FUN_1409f2447();
  if ((float)dVar2 < fVar1 + *(float *)(lVar4 + 0x44)) {
LAB_14662fdc3:
    uVar6 = 0;
  }
  else {
    lVar4 = FUN_1409f2447();
    if (*(char *)(lVar4 + 0x48) == '\0') {
      if ((longlong)*(int *)(param_1 + 0x408) < 1) {
        iVar5 = 0;
      }
      else {
        lVar4 = param_1 + 0x40;
        if (*(longlong *)(param_1 + 0x400) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x400);
        }
        lVar7 = 0;
        iVar5 = 0;
        do {
          iVar5 = iVar5 + (uint)(*(int *)(lVar4 + lVar7) ==
                                *(int *)(*(longlong *)(lVar3 + 0x398) + 0x394));
          lVar7 = lVar7 + 0x78;
        } while ((longlong)*(int *)(param_1 + 0x408) * 0x78 - lVar7 != 0);
      }
      lVar3 = FUN_1409f2447();
      if (*(int *)(lVar3 + 0x40) <= iVar5) goto LAB_14662fdc3;
    }
    *(float *)(param_1 + 0x414) = (float)dVar2;
  }
LAB_14662fd56:
  return uVar6 & 0xffffffff;
}



// FUNCTION 14662fdc8 FUN_14662fdc8 body=58 status=ok
// SIG undefined FUN_14662fdc8(void)

void FUN_14662fdc8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x120) != 0) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_14480f766(*(longlong *)(param_1 + 0x28) + 0x3da0);
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  return;
}



// FUNCTION 14662fe02 FUN_14662fe02 body=29 status=ok
// SIG undefined FUN_14662fe02(void)

undefined8 FUN_14662fe02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662fe20 FUN_14662fe20 body=29 status=ok
// SIG undefined FUN_14662fe20(void)

undefined8 FUN_14662fe20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662fe3e FUN_14662fe3e body=29 status=ok
// SIG undefined FUN_14662fe3e(void)

undefined8 FUN_14662fe3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662fe5c FUN_14662fe5c body=118 status=ok
// SIG undefined FUN_14662fe5c(void)

void FUN_14662fe5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4d10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b98fb30;
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



// FUNCTION 14662fed2 FUN_14662fed2 body=29 status=ok
// SIG undefined FUN_14662fed2(void)

undefined8 FUN_14662fed2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662fef0 FUN_14662fef0 body=29 status=ok
// SIG undefined FUN_14662fef0(void)

bool FUN_14662fef0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14662ff0e FUN_14662ff0e body=26 status=ok
// SIG undefined FUN_14662ff0e(void)

bool FUN_14662ff0e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14662ff28 FUN_14662ff28 body=24 status=ok
// SIG undefined FUN_14662ff28(void)

bool FUN_14662ff28(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662ff40 FUN_14662ff40 body=24 status=ok
// SIG undefined FUN_14662ff40(void)

bool FUN_14662ff40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14662ff58 FUN_14662ff58 body=29 status=ok
// SIG undefined FUN_14662ff58(void)

undefined8 FUN_14662ff58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ff76 FUN_14662ff76 body=29 status=ok
// SIG undefined FUN_14662ff76(void)

undefined8 FUN_14662ff76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14662ff94 FUN_14662ff94 body=118 status=ok
// SIG undefined FUN_14662ff94(void)

void FUN_14662ff94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b990fd0;
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



// FUNCTION 14663000a FUN_14663000a body=118 status=ok
// SIG undefined FUN_14663000a(void)

void FUN_14663000a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6380;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b9910b0;
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



// FUNCTION 146630080 FUN_146630080 body=434 status=ok
// SIG undefined FUN_146630080(void)

longlong * FUN_146630080(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x628);
  if (plVar6 == (longlong *)0x0) {
LAB_146630166:
    *puVar5 = &PTR_LAB_14b98d050;
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
    *puVar5 = &PTR_FUN_14b991270;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146630166;
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
    uVar7 = *(undefined8 *)(param_2 + 0x620);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b98d050;
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
    *puVar5 = &PTR_FUN_14b991270;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 146630232 FUN_146630232 body=93 status=ok
// SIG undefined FUN_146630232(void)

void FUN_146630232(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b991430;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b9913c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146630290 FUN_146630290 body=24 status=ok
// SIG undefined FUN_146630290(void)

bool FUN_146630290(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1466302a8 FUN_1466302a8 body=24 status=ok
// SIG undefined FUN_1466302a8(void)

bool FUN_1466302a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1466302c0 FUN_1466302c0 body=39 status=ok
// SIG undefined FUN_1466302c0(void)

void FUN_1466302c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001466302e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1466302e8 FUN_1466302e8 body=24 status=ok
// SIG undefined FUN_1466302e8(void)

bool FUN_1466302e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146630300 FUN_146630300 body=61 status=ok
// SIG undefined FUN_146630300(void)

void FUN_146630300(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (*(longlong *)(param_1 + 0x3c0) == 0) {
    lVar1 = param_1;
  }
  FUN_14111beba(lVar1,*(undefined4 *)(param_1 + 0x3c8));
  if (*(longlong *)(param_1 + 0x3c0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14663033e FUN_14663033e body=72 status=ok
// SIG undefined FUN_14663033e(void)

void FUN_14663033e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_141092d32(&DAT_14cb10aa8);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_141092d32(&DAT_14cb10ae8);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 146630386 FUN_146630386 body=237 status=ok
// SIG undefined FUN_146630386(void)

ulonglong FUN_146630386(longlong *param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [44];
  undefined1 local_3c [12];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 != 0) {
    uVar6 = 0;
    lVar3 = FUN_140149a73(lVar3,0);
    if (lVar3 == 0) goto LAB_146630432;
    plVar4 = (longlong *)FUN_14039ffc6(lVar3);
    if (plVar4 != (longlong *)0x0) {
      puVar5 = &DAT_14c9485f0;
      if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
        puVar5 = *(undefined4 **)(param_2 + 8);
      }
      FUN_144a7660c(puVar5,local_3c,1);
      (**(code **)(*plVar4 + 0x78))(plVar4,&local_30,local_3c);
      if (local_30 == 0) {
        uVar6 = 0;
      }
      else {
        cVar2 = FUN_1405f61f4();
        uVar6 = CONCAT71((int7)((ulonglong)plVar4 >> 8),cVar2 == '\x06');
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_28 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_28 + 0x10))(local_28);
          }
        }
      }
      goto LAB_146630432;
    }
  }
  uVar6 = 0;
LAB_146630432:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146630474 FUN_146630474 body=656 status=ok
// SIG undefined FUN_146630474(void)

void FUN_146630474(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  byte *pbVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_e8 [44];
  int local_bc;
  longlong local_b8 [2];
  int local_a4 [3];
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_74 [4];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_145dd2478(param_1);
    FUN_146820ec8(param_1);
  }
  if (((byte *)*param_2 != (byte *)0x0) && ((*(byte *)*param_2 & 0x6b) == 3)) {
    uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,DAT_14cbcf688);
    local_98 = DAT_14cbcf680;
    FUN_1448075d0(&local_70);
    puVar9 = (undefined8 *)FUN_144a06846(param_2);
    pbVar4 = (byte *)*puVar9;
    plVar5 = (longlong *)puVar9[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 0x6b) == 3)) {
      lVar6 = *(longlong *)(pbVar4 + 8);
      plVar1 = (longlong *)(lVar6 + 0x18);
      plVar2 = (longlong *)(lVar6 + 0x30);
      local_98 = 0x100000000;
      local_88 = 0xffffffff;
      uStack_80 = 0;
      uStack_90 = plVar2;
      if (*(int *)(lVar6 + 0x48) == 0) {
        local_bc = 0;
      }
      else {
        FUN_1449c0562(&local_98);
        local_bc = *(int *)(lVar6 + 0x48);
      }
      local_68 = (undefined4)local_98;
      uStack_64 = local_98._4_4_;
      uStack_60 = (undefined4)uStack_90;
      uStack_5c = uStack_90._4_4_;
      uStack_50 = CONCAT44(uStack_7c,uStack_80);
      local_58 = local_88;
      lVar6 = local_58;
      local_58._4_4_ = (int)((ulonglong)local_88 >> 0x20);
      iVar8 = local_58._4_4_;
      local_70 = plVar1;
      if ((local_58._4_4_ != local_bc) || (local_58 = local_88, uStack_90 != plVar2)) {
        do {
          local_58 = lVar6;
          lVar6 = *local_70;
          FUN_144a7660c(lVar6 + (longlong)iVar8 * 0x40,local_a4,1);
          if (local_a4[0] != 0) {
            puVar9 = (undefined8 *)((longlong)iVar8 * 0x40 + 0x28 + lVar6);
            cVar7 = FUN_140c1ab54(puVar9);
            if (cVar7 != '\0') {
              pbVar4 = (byte *)*puVar9;
              if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 3) != 1)) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined8 *)(pbVar4 + 8);
              }
              FUN_1400b22c2(local_b8,uVar10);
              local_98 = FUN_144a8232a(local_a4);
              uStack_90 = local_b8;
              FUN_1406e263c(param_1,local_74,&local_98,0);
              if (local_b8[0] != 0) {
                FUN_1400020a8();
              }
            }
          }
          local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
          FUN_1449c0562(&local_68);
          iVar8 = local_58._4_4_;
          lVar6 = local_58;
        } while (((local_58._4_4_ != local_bc) ||
                 ((longlong *)CONCAT44(uStack_5c,uStack_60) != plVar2)) || (local_70 != plVar1));
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146630706 FUN_146630706 body=131 status=ok
// SIG undefined FUN_146630706(void)

void FUN_146630706(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b993fc0;
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146630785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14663078a FUN_14663078a body=133 status=ok
// SIG undefined FUN_14663078a(void)

undefined8
FUN_14663078a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_1411c044a();
  if (cVar1 == '\0') {
    plVar2 = (longlong *)FUN_144a7ba4c(param_1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = FUN_14030d4a0();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x0001466307fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar2 + 0x260))(plVar2,param_2,param_3,param_4);
        return uVar4;
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


