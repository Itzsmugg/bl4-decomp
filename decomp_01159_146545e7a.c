// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146545e7a FUN_146545e7a body=132 status=ok
// SIG undefined FUN_146545e7a(void)

void FUN_146545e7a(longlong param_1,int param_2)

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



// FUNCTION 146545eff FUN_146545eff body=350 status=ok
// SIG undefined FUN_146545eff(void)

void FUN_146545eff(void)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  FUN_140056680(local_30,L"GbxRotationChannelTags");
  FUN_1446f470e(&local_40,L"RotationChannel.Body",1);
  FUN_1413e432a(lVar1,&local_38,local_40,local_30);
  DAT_14cb72618 = local_38;
  FUN_1446f470e(&local_48,L"RotationChannel.Aim",1);
  FUN_1413e432a(lVar1,&local_38,local_48,local_30);
  DAT_14cb72620 = local_38;
  FUN_1446f470e(&local_50,L"RotationChannel.Head",1);
  FUN_1413e432a(lVar1,&local_38,local_50,local_30);
  DAT_14cb72628 = local_38;
  FUN_1446f470e(&local_58,L"RotationChannel.Eye",1);
  FUN_1413e432a(lVar1,&local_38,local_58,local_30);
  DAT_14cb725f8 = local_38;
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654605e FUN_14654605e body=292 status=ok
// SIG undefined FUN_14654605e(void)

void FUN_14654605e(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar1 + 0x70) != '\x01') goto LAB_146546135;
  lVar4 = FUN_144a7be76();
  if (lVar4 == 0) {
LAB_14654615c:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_14654615c;
  }
  local_80[0] = 0;
  local_58 = 0;
  FUN_1456bb102(local_80,lVar4);
  FUN_1447c3578(lVar1 + 0x38,local_50,local_80);
  uVar3 = FUN_144a7fca4(local_50);
  *(undefined1 *)(param_1 + 0x50) = uVar3;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar6 = local_50;
    if (0x18 < local_38) {
      pppuVar6 = (undefined8 ***)local_50[0];
    }
    (*pcVar2)(pppuVar6);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_80);
LAB_146546135:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146546184 FUN_146546184 body=175 status=ok
// SIG undefined FUN_146546184(void)

void FUN_146546184(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x2b8))();
  local_58 = param_5;
  FUN_140bbc088(param_1,param_2,param_3,param_4);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0xa8);
  }
  puVar2 = &DAT_14cb72218;
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_3 + 0x18);
  }
  local_48 = *puVar2;
  FUN_1407ade21(uVar1,&local_48,(char)param_1[6],*(undefined1 *)((longlong)param_1 + 0x31));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146546234 FUN_146546234 body=911 status=ok
// SIG undefined FUN_146546234(void)

void FUN_146546234(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58 [7];
  
  local_58[3] = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(param_1 + 0xa8);
  FUN_140134bd1(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_140134cc6(plVar2);
  }
  lVar8 = *(longlong *)(param_1 + 0x10);
  if (lVar8 == 0) {
    uVar6 = FUN_140d47262();
    lVar8 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x10) = lVar8;
  }
  plVar1 = (longlong *)(param_1 + 8);
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (lVar7 == 0) {
    if ((lVar8 != 0) && (*plVar1 != 0)) {
      plVar4 = *(longlong **)(lVar8 + 0xb8);
      if (plVar4 != (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
        if (cVar5 != '\0') {
          uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar7 = FUN_144aff482(uVar6,plVar1);
          *(longlong *)(param_1 + 0x18) = lVar7;
          if (lVar7 != 0) {
            lVar8 = *(longlong *)(param_1 + 0x10);
            goto LAB_1465462f9;
          }
          goto LAB_146546366;
        }
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  else {
LAB_1465462f9:
    if (lVar8 == 0) {
      uVar6 = FUN_140d47262();
      lVar8 = FUN_14477b664(uVar6);
      *(longlong *)(param_1 + 0x10) = lVar8;
      lVar7 = *(longlong *)(param_1 + 0x18);
      if (((lVar7 == 0) && (lVar7 = 0, lVar8 != 0)) && (*plVar1 != 0)) {
        plVar4 = *(longlong **)(lVar8 + 0xb8);
        if (plVar4 == (longlong *)0x0) {
LAB_1465465b9:
          lVar7 = 0;
        }
        else {
          cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
          if (cVar5 == '\0') goto LAB_1465465b9;
          uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar7 = FUN_144aff482(uVar6,plVar1);
        }
        *(longlong *)(param_1 + 0x18) = lVar7;
      }
    }
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[0] = lVar7;
    FUN_1448417d2();
    iVar3 = *(int *)(param_1 + 0xb0);
    *(uint *)(param_1 + 0xb0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0xb4) < iVar3 + 1U) {
      FUN_140134d46(plVar2,iVar3);
    }
    plVar1 = (longlong *)(*plVar2 + (longlong)iVar3 * 0x18);
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    *plVar1 = local_58[0];
    FUN_1448417d2();
    FUN_140134bf8(local_58);
  }
LAB_146546366:
  lVar8 = *(longlong *)(param_1 + 0x28);
  if (lVar8 == 0) {
    uVar6 = FUN_140d47262();
    lVar8 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x28) = lVar8;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar7 = *(longlong *)(param_1 + 0x30);
  if (lVar7 == 0) {
    if ((lVar8 == 0) || (*plVar1 == 0)) goto LAB_146546442;
    plVar4 = *(longlong **)(lVar8 + 0xb8);
    if (plVar4 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar5 != '\0') {
        uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar7 = FUN_144aff482(uVar6,plVar1);
        *(longlong *)(param_1 + 0x30) = lVar7;
        if (lVar7 == 0) goto LAB_146546442;
        lVar8 = *(longlong *)(param_1 + 0x28);
        goto LAB_1465463db;
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    goto LAB_146546442;
  }
LAB_1465463db:
  if (lVar8 == 0) {
    uVar6 = FUN_140d47262();
    lVar8 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x28) = lVar8;
    lVar7 = *(longlong *)(param_1 + 0x30);
    if (((lVar7 == 0) && (lVar7 = 0, lVar8 != 0)) && (*plVar1 != 0)) {
      plVar4 = *(longlong **)(lVar8 + 0xb8);
      if (plVar4 == (longlong *)0x0) {
LAB_1465465c0:
        lVar7 = 0;
      }
      else {
        cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
        if (cVar5 == '\0') goto LAB_1465465c0;
        uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar7 = FUN_144aff482(uVar6,plVar1);
      }
      *(longlong *)(param_1 + 0x30) = lVar7;
    }
  }
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[0] = lVar7;
  FUN_1448417d2();
  iVar3 = *(int *)(param_1 + 0xb0);
  *(uint *)(param_1 + 0xb0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xb4) < iVar3 + 1U) {
    FUN_140134d46(plVar2,iVar3);
  }
  plVar2 = (longlong *)(*plVar2 + (longlong)iVar3 * 0x18);
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = local_58[0];
  FUN_1448417d2();
  FUN_140134bf8(local_58);
LAB_146546442:
  if ((local_58[3] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465465c4 FUN_1465465c4 body=282 status=ok
// SIG undefined FUN_1465465c4(void)

void FUN_1465465c4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1400b465c();
  if (lVar3 != 0) {
    lVar4 = FUN_144a79464();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      FUN_140457ffc(lVar3 + 0x2a8,param_1);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = 0;
    do {
      local_38 = *(longlong **)(lVar3 + lVar4);
      if (((local_38 == (longlong *)0x0) || (lVar2 = *(longlong *)(lVar3 + 8 + lVar4), lVar2 == -1))
         || (*local_38 != lVar2)) {
        local_38 = (longlong *)0x0;
      }
      else {
        *(int *)(local_38 + 0x21) = (int)local_38[0x21] + 1;
        FUN_14033a7c0();
      }
      FUN_144a61ac8(&local_38);
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    lVar3 = *(longlong *)(param_1 + 0x38);
  }
  iVar1 = *(int *)(param_1 + 0x44);
  FUN_141347b7f(lVar3,uVar5);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465466f2 FUN_1465466f2 body=125 status=ok
// SIG undefined FUN_1465466f2(void)

undefined8 * FUN_1465466f2(undefined8 *param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar1 = (longlong *)FUN_144a7e30a();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      return param_1;
    }
  }
  if ((byte)(*param_2 - 2U) < 8) {
    FUN_144a7bb84(param_1,(ulonglong)((uint)(byte)(*param_2 - 2U) * 0x18 & 0xff) + lVar2 + 0x340);
  }
  return param_1;
}



// FUNCTION 146546770 FUN_146546770 body=726 status=ok
// SIG undefined FUN_146546770(void)

void FUN_146546770(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = FUN_1449e3f1e();
  if (lVar5 == 0) {
    if (*(longlong *)(param_1 + 0xa8) != 0) goto LAB_1465468cc;
    local_50 = 0xaaad1010;
    local_58 = 0;
  }
  else {
    FUN_14123c256(param_1 + 0x48,lVar5 + 0x1f8);
    lVar3 = *(longlong *)(lVar5 + 0x128);
    plVar4 = *(longlong **)(lVar5 + 0x130);
    if (plVar4 == (longlong *)0x0) {
      if (lVar3 != 0) {
        *(longlong *)(param_1 + 0x80) = lVar3;
        plVar6 = *(longlong **)(param_1 + 0x88);
        if (plVar6 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x88) = 0;
LAB_146546937:
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
          if (plVar4 != (longlong *)0x0) goto LAB_146546821;
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
      if (lVar3 != 0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        *(longlong *)(param_1 + 0x80) = lVar3;
        plVar6 = *(longlong **)(param_1 + 0x88);
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
          *(longlong **)(param_1 + 0x88) = plVar4;
          if (plVar6 != (longlong *)0x0) goto LAB_146546937;
        }
      }
LAB_146546821:
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
    if (*(longlong *)(param_1 + 0xa8) != 0) goto LAB_1465468cc;
    local_58 = *(undefined8 *)(lVar5 + 0x1e0);
    local_50 = *(undefined4 *)(lVar5 + 0x1e8);
  }
  local_48 = 0;
  local_68 = 1;
  FUN_14078bff4(&local_40,&local_58,param_1 + 0x38,param_2);
  plVar4 = local_38;
  if ((undefined8 *)(param_1 + 0xa8) != &local_40) {
    *(undefined8 *)(param_1 + 0xa8) = local_40;
    local_40 = 0;
    plVar6 = *(longlong **)(param_1 + 0xb0);
    if (local_38 != plVar6) {
      local_38 = (longlong *)0x0;
      *(longlong **)(param_1 + 0xb0) = plVar4;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar6 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
  }
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_38 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_1465468cc:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146546a68 FUN_146546a68 body=40 status=ok
// SIG undefined FUN_146546a68(void)

undefined8 FUN_146546a68(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146546a90 FUN_146546a90 body=40 status=ok
// SIG undefined FUN_146546a90(void)

undefined8 FUN_146546a90(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146546ab8 FUN_146546ab8 body=85 status=ok
// SIG undefined FUN_146546ab8(void)

void FUN_146546ab8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3ef5e0;
  return;
}



// FUNCTION 146546b0e FUN_146546b0e body=29 status=ok
// SIG undefined FUN_146546b0e(void)

undefined8 FUN_146546b0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146546b2c FUN_146546b2c body=29 status=ok
// SIG undefined FUN_146546b2c(void)

bool FUN_146546b2c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146546b4a FUN_146546b4a body=24 status=ok
// SIG undefined FUN_146546b4a(void)

bool FUN_146546b4a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146546b62 FUN_146546b62 body=56 status=ok
// SIG undefined FUN_146546b62(void)

void FUN_146546b62(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_141207d28(param_1,iVar1);
  }
  FUN_141207d05((longlong)iVar1 * 0x48 + *param_1);
  return;
}



// FUNCTION 146546b9a FUN_146546b9a body=428 status=ok
// SIG undefined FUN_146546b9a(void)

longlong * FUN_146546b9a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146546c7a:
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
    *puVar5 = &PTR_FUN_14b3f0360;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146546c7a;
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
    *puVar5 = &PTR_FUN_14b3f0360;
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



// FUNCTION 146546d46 FUN_146546d46 body=169 status=ok
// SIG undefined FUN_146546d46(void)

undefined8 * FUN_146546d46(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  lVar1 = DAT_14cb72a88;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb72a88 != 0) {
    uVar2 = FUN_14050fd64();
    uVar3 = FUN_144a7ff8c(param_1 + 8);
    FUN_1447325ac(uVar3,&local_30,1);
    local_40 = 0;
    local_48 = 0;
    FUN_140844808(uVar2,param_2,local_30,lVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146546df0 FUN_146546df0 body=966 status=ok
// SIG undefined FUN_146546df0(void)

longlong * FUN_146546df0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = DAT_14cb259f8;
  if (((param_3 == 0) || (param_4 == 0)) || (DAT_14cb259f8 == 0)) goto LAB_146546f6a;
  if ((*param_2 == 0) || (0xfffffffd < (int)param_2[1] - 1U)) {
LAB_146546f97:
    plVar6 = (longlong *)FUN_14001cc68(800);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14b3f03f0;
    plVar8 = plVar6 + 2;
    memset(plVar8,0,0x310);
    FUN_14126c416(plVar8);
    plVar6[2] = (longlong)&PTR_FUN_14b2b43d0;
    local_78 = plVar8;
    local_70 = plVar6;
    FUN_1487f539a(&local_78,plVar8);
    plVar6[7] = param_4;
    FUN_14078c658(&local_50,param_3);
    *(undefined4 *)(plVar6 + 5) = local_50;
    *(undefined4 *)((longlong)plVar6 + 0x2c) = uStack_4c;
    *(undefined4 *)(plVar6 + 6) = uStack_48;
    *(undefined4 *)((longlong)plVar6 + 0x34) = uStack_44;
    FUN_14485c47a(plVar6 + 8,param_4);
    if (plVar6 == (longlong *)0x0) {
      *param_1 = 0x10;
      plVar8 = (longlong *)param_1[1];
      if (plVar8 != (longlong *)0x0) {
        param_1[1] = 0;
LAB_14654707e:
        LOCK();
        plVar6 = plVar8 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000146547174:
          if (iVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      *param_1 = (longlong)plVar8;
      plVar8 = (longlong *)param_1[1];
      if (plVar6 == plVar8) {
        LOCK();
        plVar8 = plVar6 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar8 = plVar6;
          goto joined_r0x000146547174;
        }
      }
      else {
        param_1[1] = (longlong)plVar6;
        if (plVar8 != (longlong *)0x0) goto LAB_14654707e;
      }
    }
    plVar8 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_70 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_146546f6a;
  }
  else {
    uVar5 = FUN_14580b780();
    local_68 = *param_2;
    local_60 = (undefined4)param_2[1];
    local_58 = 0;
    local_98 = param_4;
    FUN_140e775d2(&local_50,&local_68,uVar5,param_3);
    lVar7 = CONCAT44(uStack_4c,local_50);
    if (lVar7 != 0) {
      uVar5 = FUN_14580b780();
      cVar4 = FUN_1448093f4(lVar7,uVar5);
      if (cVar4 != '\0') {
        plVar8 = (longlong *)CONCAT44(uStack_44,uStack_48);
        if (plVar8 == (longlong *)0x0) {
          *param_1 = CONCAT44(uStack_4c,local_50);
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          plVar6 = (longlong *)param_1[1];
          *param_1 = CONCAT44(uStack_4c,local_50);
          if (plVar8 == plVar6) {
            LOCK();
            plVar6 = plVar8 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar7 = *plVar8;
LAB_1465470f7:
                (**(code **)(lVar7 + 0x10))(plVar8);
              }
            }
          }
          else {
            param_1[1] = (longlong)plVar8;
            if (plVar6 != (longlong *)0x0) {
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
                  lVar7 = *plVar6;
                  plVar8 = plVar6;
                  goto LAB_1465470f7;
                }
              }
            }
          }
        }
        lVar7 = CONCAT44(uStack_4c,local_50);
        if ((*(longlong *)(lVar7 + 0x40) != *param_2) || (*(int *)(lVar7 + 0x48) != (int)param_2[1])
           ) {
          *(longlong *)(lVar7 + 0x40) = *param_2;
          *(int *)(lVar7 + 0x48) = (int)param_2[1];
          *(undefined8 *)(lVar7 + 0x50) = 0;
        }
      }
    }
    plVar8 = (longlong *)CONCAT44(uStack_44,uStack_48);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_146546f97;
  }
  plVar8 = (longlong *)param_1[1];
  local_88 = lVar7;
  if (plVar8 == (longlong *)0x0) {
    local_80 = (longlong *)0x0;
    FUN_1408f6a5c(lVar3);
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_80 = plVar8;
    FUN_1408f6a5c(lVar3);
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = (longlong *)*param_1;
  if (*(char *)((longlong)plVar8 + 0x3c) == '\0') {
    *(undefined1 *)((longlong)plVar8 + 0x3c) = 1;
    (**(code **)(*plVar8 + 0x10))();
  }
LAB_146546f6a:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465471b8 FUN_1465471b8 body=165 status=ok
// SIG undefined FUN_1465471b8(void)

undefined8 FUN_1465471b8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x38) + 0x180))(param_1 + -0x38);
  if (lVar1 == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"SymphonicAudio_%s",puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14654725e FUN_14654725e body=44 status=ok
// SIG undefined FUN_14654725e(void)

void FUN_14654725e(longlong param_1,longlong *param_2)

{
  FUN_1407d545c();
  if (*param_2 != 0) {
    *(undefined1 *)(*param_2 + 0xb0) = *(undefined1 *)(param_1 + 0x300);
  }
  return;
}



// FUNCTION 14654728a FUN_14654728a body=177 status=ok
// SIG undefined FUN_14654728a(void)

void FUN_14654728a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_14094b946(param_1,&local_30);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    uVar6 = FUN_14580b780();
    cVar5 = FUN_1448093f4(lVar3,uVar6);
    if (cVar5 != '\0') {
      *(undefined1 *)(lVar3 + 0x300) = *(undefined1 *)(param_1 + 0x148);
    }
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654733c FUN_14654733c body=112 status=ok
// SIG undefined FUN_14654733c(void)

void FUN_14654733c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412aa84a();
  local_18 = 0;
  local_28 = 0;
  local_20 = 1;
  local_38 = L"WallaIdent";
  local_30 = 0x100000011;
  FUN_140c2c993(&local_38,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465473ae FUN_1465473ae body=248 status=ok
// SIG undefined FUN_1465473ae(void)

void FUN_1465473ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar4 = FUN_14479d2ce();
    local_48 = 0;
    local_40 = 0xaaad1010;
    local_38 = 0;
    local_58 = 1;
    FUN_14078bff4(&local_30,&local_48,param_1 + 0x38,uVar4);
    plVar1 = local_28;
    if ((undefined8 *)(param_1 + 0x40) != &local_30) {
      *(undefined8 *)(param_1 + 0x40) = local_30;
      local_30 = 0;
      plVar3 = *(longlong **)(param_1 + 0x48);
      if (local_28 != plVar3) {
        local_28 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x48) = plVar1;
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
      }
    }
    plVar1 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_28)(local_28);
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465474a8 FUN_1465474a8 body=165 status=ok
// SIG undefined FUN_1465474a8(void)

undefined8 FUN_1465474a8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x38) + 0x180))(param_1 + -0x38);
  if (lVar1 == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"WallaAudio_%s",puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14654754e FUN_14654754e body=177 status=ok
// SIG undefined FUN_14654754e(void)

undefined8 FUN_14654754e(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459f02d4();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146547600 FUN_146547600 body=187 status=ok
// SIG undefined FUN_146547600(void)

undefined8 FUN_146547600(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465476bc FUN_1465476bc body=187 status=ok
// SIG undefined FUN_1465476bc(void)

undefined8 FUN_1465476bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146547778 FUN_146547778 body=187 status=ok
// SIG undefined FUN_146547778(void)

undefined8 FUN_146547778(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146547834 FUN_146547834 body=177 status=ok
// SIG undefined FUN_146547834(void)

undefined8 FUN_146547834(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459f0c12();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465478e6 FUN_1465478e6 body=187 status=ok
// SIG undefined FUN_1465478e6(void)

undefined8 FUN_1465478e6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465479a2 FUN_1465479a2 body=100 status=ok
// SIG undefined FUN_1465479a2(void)

void FUN_1465479a2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1449e3f1e();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 800) = *(undefined4 *)(lVar1 + 0x1b8);
    *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(lVar1 + 0x1bc);
    *(float *)(param_1 + 0x328) = *(float *)(lVar1 + 0x1c0) * *(float *)(lVar1 + 0x1c0);
    *(undefined1 *)(param_1 + 0x330) = *(undefined1 *)(lVar1 + 0x1c4);
    *(undefined1 *)(param_1 + 0x331) = *(undefined1 *)(lVar1 + 0x1c5);
  }
  return;
}



// FUNCTION 146547a06 FUN_146547a06 body=172 status=ok
// SIG undefined FUN_146547a06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146547a06(undefined8 param_1)

{
  _DAT_14cb73bf0 = 0;
  DAT_14cb73bf8 = 0;
  _DAT_14cb73c00 = &PTR_FUN_14aff2260;
  _DAT_14cb73c08 = 0;
  _DAT_14cb73c10 = 0xffff0300;
  _DAT_14cb73be8 = &PTR_FUN_14aff2bd0;
  _DAT_14cb73c18 = 0;
  _DAT_14cb73c20 = &DAT_14a171d50;
  _DAT_14cb73c60 = 0;
  _DAT_14cb73c68 = 0;
  _DAT_14cb73c28 = 0;
  uRam000000014cb73c30 = 0;
  _DAT_14cb73c38 = 0;
  uRam000000014cb73c40 = 0;
  _DAT_14cb73c48 = 0;
  _DAT_14cb73c6c = 0xffffffff00000080;
  _DAT_14cb73c74 = 0;
  _DAT_14cb73c80 = 0;
  _DAT_14cb73c88 = 0;
  FUN_146029854(&DAT_14cb73bf0,param_1);
  return;
}



// FUNCTION 146547ab2 FUN_146547ab2 body=609 status=ok
// SIG undefined FUN_146547ab2(void)

void FUN_146547ab2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0x2e8);
  lVar2 = param_1 + 0x2f8;
  local_b8 = (longlong *)&DAT_100000000;
  lStack_a8 = 0xffffffff;
  local_a0 = local_a0 & 0xffffffff00000000;
  iVar8 = 0;
  local_b0 = lVar2;
  if (*(int *)(param_1 + 0x310) != 0) {
    FUN_1449c0562(&local_b8);
    iVar8 = *(int *)(param_1 + 0x310);
  }
  local_78 = lStack_a8;
  lVar3 = local_78;
  local_70 = (uint)local_a0;
  local_6c = local_a0._4_4_;
  local_88 = local_b8;
  local_80 = local_b0;
  local_78._4_4_ = (int)((ulonglong)lStack_a8 >> 0x20);
  iVar6 = local_78._4_4_;
  local_90 = plVar1;
  if ((local_78._4_4_ != iVar8) || (local_78 = lVar3, local_b0 != lVar2)) {
    do {
      local_78 = lVar3;
      lVar3 = *local_90;
      lVar9 = *(longlong *)(lVar3 + 0x10 + (longlong)iVar6 * 0x20);
      if (lVar9 != 0) {
        plVar10 = *(longlong **)(lVar9 + 0x30);
        if (plVar10 != (longlong *)0x0) {
          *(undefined8 *)(lVar9 + 0x30) = 0;
          (**(code **)(*plVar10 + 0x18))();
          lVar9 = *(longlong *)(lVar3 + (longlong)iVar6 * 0x20 + 0x10);
        }
        local_c0 = lVar9 + 0x80;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        lStack_60 = local_c0;
        if (*(int *)(lVar9 + 0x98) == 0) {
          iVar6 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar6 = *(int *)(lVar9 + 0x98);
        }
        plVar10 = (longlong *)(lVar9 + 0x70);
        uStack_98 = CONCAT44(uStack_4c,uStack_50);
        local_a0 = local_58;
        uVar5 = local_a0;
        local_b0 = local_68;
        lStack_a8 = lStack_60;
        local_a0._4_4_ = (int)(local_58 >> 0x20);
        iVar7 = local_a0._4_4_;
        local_b8 = plVar10;
        if ((local_a0._4_4_ != iVar6) || (local_a0 = uVar5, lStack_60 != local_c0)) {
          do {
            local_a0 = uVar5;
            lVar3 = *(longlong *)(*local_b8 + 0x10 + (longlong)iVar7 * 0x20);
            plVar4 = *(longlong **)(lVar3 + 0x30);
            if (plVar4 != (longlong *)0x0) {
              *(undefined8 *)(lVar3 + 0x30) = 0;
              (**(code **)(*plVar4 + 0x18))();
            }
            local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
            FUN_1449c0562(&local_b0);
            iVar7 = local_a0._4_4_;
            uVar5 = local_a0;
          } while (local_b8 != plVar10 || (lStack_a8 != local_c0 || local_a0._4_4_ != iVar6));
        }
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      iVar6 = local_78._4_4_;
      lVar3 = local_78;
    } while (((local_78._4_4_ != iVar8) || (local_80 != lVar2)) || (local_90 != plVar1));
  }
  FUN_14042ef50(param_1);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146547d14 FUN_146547d14 body=132 status=ok
// SIG undefined FUN_146547d14(void)

void FUN_146547d14(longlong param_1,int param_2)

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



// FUNCTION 146547d9a FUN_146547d9a body=29 status=ok
// SIG undefined FUN_146547d9a(void)

undefined8 FUN_146547d9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146547db8 FUN_146547db8 body=118 status=ok
// SIG undefined FUN_146547db8(void)

void FUN_146547db8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3f0360;
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



// FUNCTION 146547e2e FUN_146547e2e body=29 status=ok
// SIG undefined FUN_146547e2e(void)

undefined8 FUN_146547e2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146547e4c FUN_146547e4c body=48 status=ok
// SIG undefined FUN_146547e4c(void)

void FUN_146547e4c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x58,8);
  }
  return;
}



// FUNCTION 146547e7c FUN_146547e7c body=609 status=ok
// SIG undefined FUN_146547e7c(void)

void FUN_146547e7c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0x2e8);
  lVar2 = param_1 + 0x2f8;
  local_b8 = (longlong *)&DAT_100000000;
  lStack_a8 = 0xffffffff;
  local_a0 = local_a0 & 0xffffffff00000000;
  iVar8 = 0;
  local_b0 = lVar2;
  if (*(int *)(param_1 + 0x310) != 0) {
    FUN_1449c0562(&local_b8);
    iVar8 = *(int *)(param_1 + 0x310);
  }
  local_78 = lStack_a8;
  lVar3 = local_78;
  local_70 = (uint)local_a0;
  local_6c = local_a0._4_4_;
  local_88 = local_b8;
  local_80 = local_b0;
  local_78._4_4_ = (int)((ulonglong)lStack_a8 >> 0x20);
  iVar6 = local_78._4_4_;
  local_90 = plVar1;
  if ((local_78._4_4_ != iVar8) || (local_78 = lVar3, local_b0 != lVar2)) {
    do {
      local_78 = lVar3;
      lVar3 = *local_90;
      lVar9 = *(longlong *)(lVar3 + 0x10 + (longlong)iVar6 * 0x20);
      if (lVar9 != 0) {
        plVar10 = *(longlong **)(lVar9 + 0x30);
        if (plVar10 != (longlong *)0x0) {
          *(undefined8 *)(lVar9 + 0x30) = 0;
          (**(code **)(*plVar10 + 0x20))();
          lVar9 = *(longlong *)(lVar3 + (longlong)iVar6 * 0x20 + 0x10);
        }
        local_c0 = lVar9 + 0x80;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        lStack_60 = local_c0;
        if (*(int *)(lVar9 + 0x98) == 0) {
          iVar6 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar6 = *(int *)(lVar9 + 0x98);
        }
        plVar10 = (longlong *)(lVar9 + 0x70);
        uStack_98 = CONCAT44(uStack_4c,uStack_50);
        local_a0 = local_58;
        uVar5 = local_a0;
        local_b0 = local_68;
        lStack_a8 = lStack_60;
        local_a0._4_4_ = (int)(local_58 >> 0x20);
        iVar7 = local_a0._4_4_;
        local_b8 = plVar10;
        if ((local_a0._4_4_ != iVar6) || (local_a0 = uVar5, lStack_60 != local_c0)) {
          do {
            local_a0 = uVar5;
            lVar3 = *(longlong *)(*local_b8 + 0x10 + (longlong)iVar7 * 0x20);
            plVar4 = *(longlong **)(lVar3 + 0x30);
            if (plVar4 != (longlong *)0x0) {
              *(undefined8 *)(lVar3 + 0x30) = 0;
              (**(code **)(*plVar4 + 0x20))();
            }
            local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
            FUN_1449c0562(&local_b0);
            iVar7 = local_a0._4_4_;
            uVar5 = local_a0;
          } while (local_b8 != plVar10 || (lStack_a8 != local_c0 || local_a0._4_4_ != iVar6));
        }
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      iVar6 = local_78._4_4_;
      lVar3 = local_78;
    } while (((local_78._4_4_ != iVar8) || (local_80 != lVar2)) || (local_90 != plVar1));
  }
  FUN_14042ef50(param_1);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1465480de FUN_1465480de body=73 status=ok
// SIG undefined FUN_1465480de(void)

void FUN_1465480de(void)

{
  FUN_1449db362(&DAT_14cb74010);
  FUN_1449db362(&DAT_14cb74000);
  FUN_1449db362(&DAT_14cb73ff0);
  FUN_1449db362(&DAT_14cb73fe0);
  FUN_1449db362(&DAT_14cb73fd0);
  return;
}



// FUNCTION 146548128 FUN_146548128 body=180 status=ok
// SIG undefined FUN_146548128(void)

void FUN_146548128(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  code *local_40;
  undefined8 *local_38;
  undefined1 *local_30;
  code **local_28;
  ulonglong local_20;
  
  lVar1 = DAT_14cb84f20;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb84f20 != 0) {
    local_70 = *(undefined8 *)(param_1 + 0x18);
    local_58 = param_2;
    FUN_1401533ba(&local_64,&local_70,1);
    local_28 = &local_40;
    local_40 = FUN_143cda0a8;
    local_30 = &LAB_143cda09a;
    local_38 = &local_58;
    uVar2 = FUN_14008ea28();
    local_50 = local_64;
    local_48 = local_5c;
    FUN_140e9367e(lVar1,&local_50,uVar2,&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465481de FUN_1465481de body=40 status=ok
// SIG undefined FUN_1465481de(void)

void FUN_1465481de(longlong param_1)

{
  FUN_1405f1eac();
  FUN_1407c0b34(param_1 + 0x450,param_1 + 0x430,param_1);
  return;
}



// FUNCTION 146548206 FUN_146548206 body=40 status=ok
// SIG undefined FUN_146548206(void)

void FUN_146548206(longlong param_1)

{
  FUN_140115e24();
  FUN_1402d7906(param_1 + 0x450,param_1 + 0x430);
  return;
}



// FUNCTION 14654822e FUN_14654822e body=172 status=ok
// SIG undefined FUN_14654822e(void)

void FUN_14654822e(void)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  FUN_140056680(local_38,L"(Native)");
  FUN_1446f470e(&local_40,L"Spline.NoBreadcrumbGraph",1);
  FUN_1413e432a(lVar1,&local_28,local_40,local_38);
  DAT_14cb740f8 = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465482dc FUN_1465482dc body=99 status=ok
// SIG undefined FUN_1465482dc(void)

void FUN_1465482dc(undefined8 *param_1)

{
  FUN_1412f871c(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1465487bc(param_1,0);
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1487ffcc8(param_1 + 2);
    if (*(char *)(param_1 + 0x10) == '\x01') {
      FUN_14031ec32(param_1 + 2);
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}



// FUNCTION 146548340 FUN_146548340 body=231 status=ok
// SIG undefined FUN_146548340(void)

longlong FUN_146548340(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58 [3];
  longlong local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[0] = 0;
  local_58[1] = 0;
  cVar4 = (**(code **)(*param_1 + 0x418))();
  if (cVar4 != '\0') {
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    cVar4 = FUN_1446e9750(param_1,&local_68,local_58,0);
    lVar5 = 0;
    if (cVar4 != '\0') {
      FUN_1411ef135(&local_40,&local_68,param_1,0);
      lVar5 = 0;
      if (local_38 != '\0') {
        lVar5 = local_40;
      }
    }
    plVar3 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (lVar5 != 0) goto LAB_1465483d9;
  }
  lVar5 = FUN_141263ab0();
LAB_1465483d9:
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146548428 FUN_146548428 body=35 status=ok
// SIG undefined FUN_146548428(void)

void FUN_146548428(longlong param_1)

{
  FUN_145cedf04(param_1 + 0x3a58,0);
  FUN_1404775ec(param_1);
  return;
}



// FUNCTION 14654844c FUN_14654844c body=254 status=ok
// SIG undefined FUN_14654844c(void)

void FUN_14654844c(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38,L"GbxCharacterMovementTags");
  FUN_1446f470e(&local_40,L"Movement.JumpType.DefaultJump",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 8) = local_28;
  FUN_1446f470e(&local_40,L"Movement.JumpType.SlideJump",1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1413e432a(DAT_14caa8580,&local_28,local_40,local_38);
  *(undefined8 *)(param_1 + 0x10) = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654854c FUN_14654854c body=76 status=ok
// SIG undefined FUN_14654854c(void)

undefined8 FUN_14654854c(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145876e0c(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014654858d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 146548598 FUN_146548598 body=339 status=ok
// SIG undefined FUN_146548598(void)

void FUN_146548598(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1405f1eac();
  local_50 = *(undefined8 *)(param_1 + 0x3c8);
  FUN_1446dcdd4(&local_48);
  if (DAT_14cb75bb8 == 0) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar4 = FUN_144815d88(DAT_14cb75bb8,&local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (lVar4 != 0) {
      uVar5 = thunk_FUN_14050fd64();
      local_58 = 0;
      FUN_14088df30(uVar5,&local_48,lVar4,0);
      plVar2 = local_40;
      if ((undefined8 *)(param_1 + 0x3e0) != &local_48) {
        *(undefined8 *)(param_1 + 0x3e0) = local_48;
        local_48 = 0;
        plVar3 = *(longlong **)(param_1 + 1000);
        if (local_40 != plVar3) {
          local_40 = (longlong *)0x0;
          *(longlong **)(param_1 + 1000) = plVar2;
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
        }
      }
      plVar2 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_40)(local_40);
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
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465486ec FUN_1465486ec body=76 status=ok
// SIG undefined FUN_1465486ec(void)

undefined8 FUN_1465486ec(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1412573a8(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014654872d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14654874e FUN_14654874e body=76 status=ok
// SIG undefined FUN_14654874e(void)

undefined8 FUN_14654874e(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14592c318(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014654878f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1465487bc FUN_1465487bc body=108 status=ok
// SIG undefined FUN_1465487bc(void)

void FUN_1465487bc(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 146548828 FUN_146548828 body=26 status=ok
// SIG undefined FUN_146548828(void)

bool FUN_146548828(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146548842 FUN_146548842 body=24 status=ok
// SIG undefined FUN_146548842(void)

bool FUN_146548842(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14654885a FUN_14654885a body=113 status=ok
// SIG undefined FUN_14654885a(void)

void FUN_14654885a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 1465488cc FUN_1465488cc body=147 status=ok
// SIG undefined FUN_1465488cc(void)

void FUN_1465488cc(longlong param_1,int param_2)

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



// FUNCTION 146548960 FUN_146548960 body=85 status=ok
// SIG undefined FUN_146548960(void)

void FUN_146548960(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f27f0;
  return;
}



// FUNCTION 1465489b6 FUN_1465489b6 body=29 status=ok
// SIG undefined FUN_1465489b6(void)

undefined8 FUN_1465489b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465489d4 FUN_1465489d4 body=62 status=ok
// SIG undefined FUN_1465489d4(void)

void FUN_1465489d4(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x718) != 0) {
    plVar1 = (longlong *)FUN_1412ba9fc(param_1 + 0x718);
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  }
  FUN_1448c4a0e(param_1,param_2);
  return;
}



// FUNCTION 146548a12 FUN_146548a12 body=86 status=ok
// SIG undefined FUN_146548a12(void)

void FUN_146548a12(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x718) != 0) {
    plVar2 = (longlong *)FUN_1412ba9fc(param_1 + 0x718);
    cVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2);
    if (cVar1 != '\0') {
      FUN_1458187de(param_1 + 0x748,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 146548a68 FUN_146548a68 body=66 status=ok
// SIG undefined FUN_146548a68(void)

void FUN_146548a68(longlong param_1)

{
  longlong lVar1;
  
  FUN_1401a021e();
  if ((*(longlong *)(param_1 + 0xb0) == 0) && (lVar1 = FUN_1448abda6(param_1), lVar1 == 0)) {
    return;
  }
  if ((*(byte *)(param_1 + 0x9c) & 8) != 0) {
    return;
  }
  FUN_141062a52(param_1,0);
  return;
}



// FUNCTION 146548aaa FUN_146548aaa body=65 status=ok
// SIG undefined FUN_146548aaa(void)

void FUN_146548aaa(undefined8 param_1,longlong param_2)

{
  FUN_141122b72(*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x4c),
                *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),param_2 + 0x30,
                *(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x4c),
                *(undefined4 *)(param_2 + 0x50));
  return;
}



// FUNCTION 146548af4 FUN_146548af4 body=45 status=ok
// SIG undefined FUN_146548af4(void)

undefined8 FUN_146548af4(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xeb8))();
  if ((cVar1 != '\0') && (cVar1 = FUN_140178670(param_1), cVar1 != '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 146548b22 FUN_146548b22 body=233 status=ok
// SIG undefined FUN_146548b22(void)

void FUN_146548b22(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  *(undefined8 *)(param_1 + 0x40f0) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x40e0) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x40e4) = uVar2;
  *(undefined4 *)(param_1 + 0x40e8) = uVar3;
  *(undefined4 *)(param_1 + 0x40ec) = uVar4;
  *(undefined8 *)(param_1 + 0x3b68) = *(undefined8 *)(param_1 + 0x3b60);
  FUN_1447cd2ec(param_1 + 0x3ba8,0);
  if ((longlong)*(int *)(param_1 + 0x41a0) != 0) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x4198) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x4198) + lVar5) != 0)) {
        FUN_1404f44a8(param_1 + 0x4198,param_1);
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x41a0) * 0x10 != lVar5);
  }
  if (*(longlong **)(&DAT_00001ce8 + param_1) == (longlong *)0x0) {
    return;
  }
  (**(code **)(**(longlong **)(&DAT_00001ce8 + param_1) + 0x9b0))();
  lVar5 = *(longlong *)(&DAT_00001ce8 + param_1);
  pcVar1 = *(code **)(*(longlong *)(lVar5 + 0x1108) + 0x10);
  if (pcVar1 == (code *)&LAB_144801c46) {
    lVar5 = lVar5 + 0x1600;
  }
  else {
    lVar5 = (*pcVar1)(lVar5 + 0x1108);
  }
  FUN_1400bc96c(lVar5 + 0x108,&DAT_14cb760c8);
  return;
}



// FUNCTION 146548c0c FUN_146548c0c body=276 status=ok
// SIG undefined FUN_146548c0c(void)

void FUN_146548c0c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_1[0x39d] != 0) {
    plVar1 = *(longlong **)(param_1[0x39d] + 0x10);
    lVar5 = plVar1[0x22];
    if (lVar5 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar5 = plVar1[0x22];
      if (lVar5 == 0) {
        return;
      }
    }
    if (*(longlong *)(lVar5 + 0x430) != 0) {
      *(undefined1 *)((longlong)param_1 + 0x293) =
           *(undefined1 *)(*(longlong *)(lVar5 + 0x430) + 0x293);
      *(byte *)((longlong)param_1 + 0x34a) = *(byte *)((longlong)param_1 + 0x34a) | 2;
      cVar3 = (**(code **)(*param_1 + 0x600))(param_1);
      if (((cVar3 != '\0') && ((param_1[0x15] == 0 || (iVar4 = FUN_14487fd02(), iVar4 != 1)))) &&
         ((*(char *)(param_1[0x39d] + 0x178) == '\x01' ||
          (*(char *)(param_1[0x39d] + 0x68) == '\x02')))) {
        lVar5 = param_1[0x102];
        if (lVar5 == 0) {
          lVar5 = (**(code **)(param_1[0x3d] + 0x28))(param_1 + 0x3d);
          param_1[0x102] = lVar5;
          if (lVar5 == 0) {
            return;
          }
        }
        *(undefined8 *)(lVar5 + 0x90) = DAT_14c8464f0;
        uVar2 = DAT_14c8464e8;
        *(undefined8 *)(lVar5 + 0x80) = DAT_14c8464e0;
        *(undefined8 *)(lVar5 + 0x88) = uVar2;
        uVar2 = DAT_14c8463d8;
        *(undefined8 *)(lVar5 + 0xc0) = DAT_14c8463d0;
        *(undefined8 *)(lVar5 + 200) = uVar2;
        uVar2 = DAT_14c8463e8;
        *(undefined8 *)(lVar5 + 0xd0) = DAT_14c8463e0;
        *(undefined8 *)(lVar5 + 0xd8) = uVar2;
      }
    }
  }
  return;
}



// FUNCTION 146548dca FUN_146548dca body=117 status=ok
// SIG undefined FUN_146548dca(void)

void FUN_146548dca(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x648) != 0) {
    FUN_140e7a304(&local_28);
    FUN_140e7a486(param_1 + 0x599,param_1,local_28);
    *(undefined8 *)(param_1 + 0x648) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14015649c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146548e40 FUN_146548e40 body=46 status=ok
// SIG undefined FUN_146548e40(void)

void FUN_146548e40(longlong param_1)

{
  float fVar1;
  
  FUN_144842962();
  fVar1 = 0.0;
  if (0.0 <= *(float *)(param_1 + 0x664)) {
    fVar1 = *(float *)(param_1 + 0x664);
  }
  if (fVar1 <= *(float *)(param_1 + 0x668)) {
    fVar1 = *(float *)(param_1 + 0x668);
  }
  *(float *)(param_1 + 0x664) = fVar1;
  return;
}



// FUNCTION 146548e6e FUN_146548e6e body=269 status=ok
// SIG undefined FUN_146548e6e(void)

void FUN_146548e6e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((((*(longlong *)(param_1 + -0x11a0) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + -0x11a0) + 0x65) & 2) == 0)) &&
      ((*(byte *)(param_1 + -0x11a9) & 0x40) == 0)) &&
     ((lVar1 = *param_2, *(longlong *)(param_1 + 0x650) != lVar1 &&
      (*(int *)(param_1 + 0x6d8) != *(int *)(param_1 + 0x704))))) {
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x708;
    if (*(longlong *)(param_1 + 0x710) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x710);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x718) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x6d0) + (longlong)iVar3 * 0x14);
        if (*plVar5 == lVar1) {
          if (plVar5 == (longlong *)0x0) {
            return;
          }
          plVar5 = plVar5 + 1;
          if (plVar5 == (longlong *)0x0) {
            return;
          }
          lVar1 = *plVar5;
          *(int *)plVar5 = (int)lVar1 + -1;
          if (1 < (int)lVar1) {
            return;
          }
          FUN_140f5e980();
          FUN_14150af62(param_1 + -0x1248);
          return;
        }
        iVar3 = *(int *)((longlong)plVar5 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 146548f9c FUN_146548f9c body=85 status=ok
// SIG undefined FUN_146548f9c(void)

void FUN_146548f9c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f4d70;
  return;
}



// FUNCTION 146548ff2 FUN_146548ff2 body=29 status=ok
// SIG undefined FUN_146548ff2(void)

undefined8 FUN_146548ff2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146549010 FUN_146549010 body=26 status=ok
// SIG undefined FUN_146549010(void)

bool FUN_146549010(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14654902a FUN_14654902a body=24 status=ok
// SIG undefined FUN_14654902a(void)

bool FUN_14654902a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146549042 FUN_146549042 body=148 status=ok
// SIG undefined FUN_146549042(void)

bool FUN_146549042(longlong param_1)

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



// FUNCTION 1465490d8 FUN_1465490d8 body=170 status=ok
// SIG undefined FUN_1465490d8(void)

int FUN_1465490d8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar7 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar7 + uVar3) == *param_2) {
        iVar2 = (int)(uVar3 >> 3) * -0x42108421;
        if (iVar2 != -1) {
          return iVar2;
        }
        break;
      }
      uVar3 = uVar3 + 0xf8;
    } while (lVar5 * 0xf8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145a109f6(param_1,iVar1);
    lVar7 = *param_1;
  }
  plVar6 = (longlong *)(lVar7 + lVar5 * 0xf8);
  *plVar6 = *param_2;
  FUN_1402c781e(plVar6 + 1,param_2 + 1);
  plVar6 = param_2 + 0x16;
  plVar8 = (longlong *)(lVar7 + 0xb0 + lVar5 * 0xf8);
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar8 = *plVar6;
    plVar6 = plVar6 + 1;
    plVar8 = plVar8 + 1;
  }
  return iVar1;
}



// FUNCTION 146549182 FUN_146549182 body=427 status=ok
// SIG undefined FUN_146549182(void)

void FUN_146549182(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 14654932e FUN_14654932e body=487 status=ok
// SIG undefined FUN_14654932e(void)

void FUN_14654932e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 146549516 FUN_146549516 body=95 status=ok
// SIG undefined FUN_146549516(void)

void FUN_146549516(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146549576 FUN_146549576 body=108 status=ok
// SIG undefined FUN_146549576(void)

bool FUN_146549576(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14049cbd6(param_3);
  FUN_140fda471(local_34,uVar1);
  FUN_140e3418c(local_34,&local_28,1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 == *(longlong *)(param_1 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465495e4 FUN_1465495e4 body=140 status=ok
// SIG undefined FUN_1465495e4(void)

void FUN_1465495e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switchD_143c3d4dc::caseD_42();
  FUN_1446f470e(&local_38,L"Currencies",1);
  uVar1 = FUN_14588b01c();
  FUN_14588b01c();
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



// FUNCTION 146549672 FUN_146549672 body=225 status=ok
// SIG undefined FUN_146549672(void)

void FUN_146549672(longlong param_1,byte param_2,int *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  cVar2 = FUN_144729dda(param_1 + 0x48);
  if ((cVar2 != '\0') && (0 < (int)*(uint *)(param_1 + 0x90))) {
    plVar5 = (longlong *)(param_1 + 0x88);
    lVar4 = 8;
    lVar7 = 0;
    lVar1 = *plVar5;
    uVar6 = 0;
    do {
      if ((*(int *)(lVar1 + -8 + lVar4) == *param_3) && (*(int *)(lVar1 + lVar4) == param_3[2])) {
        uVar3 = FUN_14479d2ce(param_1 + 0x48);
        uVar3 = FUN_1447210f0(uVar3);
        lVar4 = FUN_140149a73(uVar3,0);
        if (lVar4 != 0) {
          FUN_140bc53f1((lVar1 - lVar7) + 0x10,
                        (lVar1 - lVar7) + (ulonglong)(param_2 ^ 1) * 0x10 + 0x48,lVar4,0);
        }
        FUN_14881c8c4(plVar5,uVar6 & 0xffffffff);
        FUN_14881c930(plVar5);
        return;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + -0x70;
      lVar4 = lVar4 + 0x70;
    } while (*(uint *)(param_1 + 0x90) != uVar6);
  }
  return;
}



// FUNCTION 146549754 FUN_146549754 body=629 status=ok
// SIG undefined FUN_146549754(void)

void FUN_146549754(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  byte *local_98;
  longlong *local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
    FUN_14881caf0(plVar1);
  }
  if ((((byte *)*param_2 != (byte *)0x0) && ((*(byte *)*param_2 & 3) != 0)) &&
     (cVar4 = FUN_140dddae6(param_2), cVar4 != '\0')) {
    local_90 = (longlong *)CONCAT44(local_90._4_4_,DAT_14cb765c8);
    local_98 = DAT_14cb765c0;
    FUN_1448075d0(&local_88,&local_98);
    puVar5 = (undefined8 *)FUN_144a06846(param_2,&local_88);
    local_98 = (byte *)*puVar5;
    local_90 = (longlong *)puVar5[1];
    if (local_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_90 + 1) = (int)local_90[1] + 1;
      UNLOCK();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (((local_98 != (byte *)0x0) && ((*local_98 & 3) != 0)) &&
       (cVar4 = FUN_142b159be(&local_98), cVar4 != '\0')) {
      plVar6 = (longlong *)FUN_1407cbaec(&local_98);
      if ((longlong)(int)plVar6[2] != 0) {
        lVar8 = *plVar6;
        lVar9 = (longlong)(int)plVar6[2] << 4;
        do {
          local_88 = 0;
          lStack_80 = 0;
          local_78 = 0;
          uVar7 = FUN_140625082(lVar8,&DAT_14c9a12e0);
          FUN_1447325ac(uVar7,&local_a0,1);
          if (local_88 != local_a0) {
            local_78 = 0;
          }
          local_88 = local_a0;
          if (lStack_80 == 0) {
            uVar7 = FUN_1464d4ba6();
            lStack_80 = FUN_14477b664(uVar7);
          }
          if (local_78 == 0) {
            if (((lStack_80 != 0) && (local_88 != 0)) &&
               ((plVar6 = *(longlong **)(lStack_80 + 0xb8), plVar6 != (longlong *)0x0 &&
                (cVar4 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar4 != '\0')))) {
              uVar7 = (**(code **)(*plVar6 + 0x110))(plVar6);
              local_78 = FUN_144aff482(uVar7,&local_88);
              if (local_78 != 0) goto LAB_14654997c;
            }
          }
          else {
LAB_14654997c:
            iVar3 = *(int *)(param_1 + 0x10);
            *(uint *)(param_1 + 0x10) = iVar3 + 1U;
            if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
              FUN_14881c9d6(plVar1,iVar3);
            }
            FUN_1486df9be((longlong)iVar3 * 0x18 + *plVar1,&local_88);
          }
          lVar8 = lVar8 + 0x10;
          lVar9 = lVar9 + -0x10;
        } while (lVar9 != 0);
      }
    }
    plVar1 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_90 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_90)(local_90);
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
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1465499ca FUN_1465499ca body=221 status=ok
// SIG undefined FUN_1465499ca(void)

undefined4 FUN_1465499ca(longlong param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_60 = 0;
  FUN_1456bb102(local_88);
  FUN_1448729ea(param_1 + 0x48,local_58,local_88);
  uVar3 = FUN_144a7b41a(local_58,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_58;
    if (0x18 < local_40) {
      pppuVar2 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146549aa8 FUN_146549aa8 body=1623 status=ok
// SIG undefined FUN_146549aa8(void)

void FUN_146549aa8(longlong param_1,undefined1 *param_2,undefined8 param_3,double *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,longlong param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 ***pppuVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined7 uStack_127;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined4 local_100;
  undefined8 **local_f8;
  double local_f0;
  double local_e8;
  ushort local_e0;
  byte local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar1 = *param_6;
  local_128 = 0;
  local_100 = 0;
  FUN_1456bb102(&local_128,uVar1);
  FUN_1448729ea(param_1 + 0x98,&local_f8,&local_128);
  fVar19 = (float)FUN_144a7b41a(&local_f8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d8 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar18 = &local_f8;
    if (0x18 < local_e0) {
      pppuVar18 = (undefined8 ***)local_f8;
    }
    (*pcVar2)(pppuVar18);
  }
  if (0x18 < local_e0) {
    FUN_1400020a8(local_f8);
  }
  FUN_144a5ac3a(&local_128);
  fVar19 = fVar19 * 0.017453292 * 0.5;
  fVar19 = (float)(longlong)
                  (fVar19 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar19 < 0.0) * 4))
           * -6.2831855 + fVar19;
  if (1.5707964 < fVar19) {
    fVar20 = 3.1415927;
  }
  else {
    if (-1.5707964 <= fVar19) {
      fVar20 = 1.0;
      goto LAB_146549c26;
    }
    fVar20 = -3.1415927;
  }
  fVar19 = fVar20 - fVar19;
  fVar20 = -1.0;
LAB_146549c26:
  fVar22 = fVar19 * fVar19;
  fVar20 = (((((fVar22 * -2.6051615e-07 + 2.4760495e-05) * fVar22 + -0.0013888378) * fVar22 +
             0.041666638) * fVar22 + -0.5) * fVar22 + 1.0) * fVar20;
  if ((param_8 == 0) || (*(char *)(param_8 + 0x7c) != '\x01')) {
    local_128 = 0;
    local_100 = 0;
    FUN_1456bb102(&local_128,uVar1);
    FUN_1448729ea(param_1 + 0x48,&local_f8,&local_128);
    fVar21 = (float)FUN_144a7b41a(&local_f8);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d8 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppuVar18 = &local_f8;
      if (0x18 < local_e0) {
        pppuVar18 = (undefined8 ***)local_f8;
      }
      (*pcVar2)(pppuVar18);
    }
    if (0x18 < local_e0) {
      FUN_1400020a8(local_f8);
    }
    FUN_144a5ac3a(&local_128);
  }
  else {
    fVar21 = *(float *)(param_8 + 0x78);
  }
  fVar19 = fVar19 * (((((fVar22 * -2.3889859e-08 + 2.7525562e-06) * fVar22 + -0.00019840874) *
                       fVar22 + 0.008333331) * fVar22 + -0.16666667) * fVar22 + 1.0);
  FUN_144a76660(param_5,&local_f8);
  dVar5 = (double)fVar20;
  dVar8 = (double)fVar21;
  if (fVar20 < 0.70710677) {
    dVar23 = (double)fVar19 * dVar8;
    dVar25 = local_e8 * dVar8 * dVar5 + param_4[2];
    dVar7 = local_f0 * dVar8 * dVar5 + param_4[1];
    dVar5 = dVar5 * (double)local_f8 * dVar8 + *param_4;
  }
  else {
    dVar23 = dVar8 / (dVar5 + dVar5);
    dVar25 = dVar23 * local_e8 + param_4[2];
    dVar7 = dVar23 * local_f0 + param_4[1];
    dVar5 = dVar23 * (double)local_f8 + *param_4;
  }
  *param_2 = 3;
  param_2[1] = param_2[1] & 0xfe;
  *(undefined4 *)(param_2 + 4) = 2;
  *(float *)(param_2 + 8) = (float)dVar23;
  *(float *)(param_2 + 0x164) = fVar21;
  *(double *)(param_2 + 0x20) = dVar5;
  *(double *)(param_2 + 0x28) = dVar7;
  *(double *)(param_2 + 0x30) = dVar25;
  uVar1 = param_5[1];
  *(undefined8 *)(param_2 + 0x38) = *param_5;
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  *(undefined8 *)(param_2 + 0x48) = param_5[2];
  uVar10 = *(undefined4 *)((longlong)param_4 + 4);
  uVar11 = *(undefined4 *)(param_4 + 1);
  uVar12 = *(undefined4 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)param_4;
  *(undefined4 *)(param_2 + 0x54) = uVar10;
  *(undefined4 *)(param_2 + 0x58) = uVar11;
  *(undefined4 *)(param_2 + 0x5c) = uVar12;
  *(double *)(param_2 + 0x60) = param_4[2];
  *(double *)(param_2 + 0x68) = (double)local_f8 * dVar8;
  *(double *)(param_2 + 0x70) = local_f0 * dVar8;
  *(double *)(param_2 + 0x78) = local_e8 * dVar8;
  FUN_144a7484c(param_5,&local_128);
  dVar13 = *param_4;
  dVar14 = param_4[1];
  local_118 = local_118 * -1.0;
  dStack_110 = dStack_110 * 1.0;
  dVar8 = -(double)CONCAT71(uStack_127,local_128);
  dVar7 = -dStack_120;
  dVar24 = param_4[2] * 1.0;
  dVar5 = *param_4;
  auVar3._8_4_ = SUB84(dStack_120,0);
  auVar3._0_8_ = dVar8;
  auVar3._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x80) = auVar3;
  auVar6._8_4_ = SUB84(dStack_110,0);
  auVar6._0_8_ = local_118;
  auVar6._12_4_ = (int)((ulonglong)dStack_110 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x90) = auVar6;
  dVar25 = dVar14 * dVar8 - dVar7 * dVar13;
  dVar9 = dVar24 * dVar7 - local_118 * dVar14;
  dVar23 = dVar5 * local_118 - dVar8 * dVar24;
  dVar9 = dVar9 + dVar9;
  dVar23 = dVar23 + dVar23;
  dVar25 = dVar25 + dVar25;
  dVar5 = 0.0 - (dVar25 * (double)CONCAT71(uStack_127,local_128) + local_118 * dVar9 +
                dStack_110 * dVar23 + dVar14);
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = 0.0 - ((dVar25 * dVar7 - dVar23 * local_118) + dStack_110 * dVar9 + dVar13);
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0xa0) = auVar4;
  *(double *)(param_2 + 0xb0) =
       0.0 - (dStack_110 * dVar25 + dVar24 + (dVar23 * dVar8 - dVar9 * dVar7));
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 200) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  puVar16 = (undefined8 *)(param_2 + 0x80);
  puVar17 = (undefined8 *)(param_2 + 0xe0);
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(float *)(param_2 + 0x168) = fVar20;
  *(float *)(param_2 + 0x16c) = fVar19;
  *(float *)(param_2 + 0x170) = fVar21;
  if ((local_d0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654a100 FUN_14654a100 body=435 status=ok
// SIG undefined FUN_14654a100(void)

undefined1 *
FUN_14654a100(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             char param_5,undefined4 param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)FUN_1447262c2(param_4);
  if (plVar2 == (longlong *)0x0) {
LAB_14654a28f:
    *param_2 = 0;
    *(undefined4 *)(param_2 + 4) = 0xffffffff;
    if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  uVar3 = FUN_1403ec9c0();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
  if (plVar2 == (longlong *)0x0) goto LAB_14654a28f;
  uVar3 = FUN_1403ec9c0();
  plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
  if ((plVar2 == plVar4) || (plVar4 == (longlong *)0x0)) goto LAB_14654a28f;
  uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
  local_60 = *(undefined8 *)(param_1 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    local_58 = plVar2;
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  lVar5 = FUN_1457959c2(uVar3,*(undefined1 *)(param_1 + 8),param_3,&local_60);
  if (param_5 == '\x01') {
    lVar5 = lVar5 + 0x18;
  }
  else if (param_5 == '\0') {
    lVar5 = lVar5 + 0x24;
  }
  else {
    if (param_5 != '\x02') {
      if (param_5 != '\x03') goto LAB_14654a28f;
      lVar5 = lVar5 + 0x30;
      uVar3 = 3;
      goto LAB_14654a1fc;
    }
    lVar5 = lVar5 + 0x3c;
  }
  uVar3 = 1;
LAB_14654a1fc:
  local_68 = param_7;
  FUN_1402a4426(lVar5,param_2,uVar3,param_6);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
}



// FUNCTION 14654a2b4 FUN_14654a2b4 body=286 status=ok
// SIG undefined FUN_14654a2b4(void)

byte FUN_14654a2b4(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  
  plVar3 = (longlong *)FUN_1447262c2(param_3);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_1403ec9c0();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar4);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = FUN_1403ec9c0();
      plVar5 = (longlong *)FUN_144718840(plVar3,uVar4);
      if (plVar3 == plVar5) {
        return 0;
      }
      if (plVar5 == (longlong *)0x0) {
        return 0;
      }
      lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar7 = (ulonglong)(*(char *)(param_1 + 8) != '\0') * 0x10;
      lVar8 = (longlong)*(int *)(lVar7 + 0x198 + lVar6);
      if (lVar8 != 0) {
        lVar7 = *(longlong *)(lVar7 + 400 + lVar6);
        lVar6 = lVar8 * 0x48;
        lVar8 = 0;
        do {
          if (*(longlong *)(lVar7 + lVar8) == param_2) {
            lVar6 = 0;
            if (lVar7 + lVar8 != 0) {
              cVar1 = thunk_FUN_1409d14a4(lVar7 + lVar8 + 0x18,param_4);
              bVar9 = 1;
              if (((cVar1 == '\0') &&
                  (cVar1 = thunk_FUN_1409d14a4(lVar7 + lVar8 + 0x24,param_4), cVar1 == '\0')) &&
                 (cVar1 = thunk_FUN_1409d14a4(lVar7 + lVar8 + 0x30,param_4), cVar1 == '\0')) {
                bVar2 = thunk_FUN_1409d14a4(lVar7 + lVar8 + 0x3c,param_4);
              }
              else {
                bVar2 = 1;
              }
              goto LAB_14654a376;
            }
            break;
          }
          lVar8 = lVar8 + 0x48;
        } while (lVar6 != lVar8);
      }
      bVar2 = (byte)lVar6;
      bVar9 = 0;
LAB_14654a376:
      return bVar9 & bVar2;
    }
  }
  return 0;
}



// FUNCTION 14654a3d2 FUN_14654a3d2 body=331 status=ok
// SIG undefined FUN_14654a3d2(void)

void FUN_14654a3d2(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (0 < *(int *)(param_1 + 200)) {
    local_138 = 0;
    local_130 = 0x3002;
    local_128 = 0;
    local_f0 = 0;
    local_e8 = 0x200000000;
    local_e0 = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_c0 = (undefined4)DAT_14c8464e0;
    uStack_bc = DAT_14c8464e0._4_4_;
    uStack_b8 = (undefined4)DAT_14c8464e8;
    uStack_b4 = DAT_14c8464e8._4_4_;
    local_b0 = DAT_14c8464f0;
    local_a8 = (undefined4)DAT_14c8464e0;
    uStack_a4 = DAT_14c8464e0._4_4_;
    uStack_a0 = (undefined4)DAT_14c8464e8;
    uStack_9c = DAT_14c8464e8._4_4_;
    local_98 = DAT_14c8464f0;
    local_90 = (undefined4)DAT_14c8464e0;
    uStack_8c = DAT_14c8464e0._4_4_;
    uStack_88 = (undefined4)DAT_14c8464e8;
    uStack_84 = DAT_14c8464e8._4_4_;
    local_80 = DAT_14c8464f0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1405c5fa2();
    local_58 = &DAT_14cb769e8;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = &PTR_FUN_14b0394b0;
    FUN_14187b2d4(&local_138,param_2);
    uVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
    FUN_14863130d(param_1 + 0xc0,uVar1,&local_138);
    FUN_141845be6(&local_138);
  }
  FUN_14095dc64(param_1 + 0x50,param_2);
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654a51e FUN_14654a51e body=215 status=ok
// SIG undefined FUN_14654a51e(void)

void FUN_14654a51e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1405fd34a(&local_28);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar5 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar5 != (longlong *)0x0) {
      if ((local_28 != 0) && ((longlong)*(int *)(local_28 + 0x78) != 0)) {
        lVar6 = 0;
        do {
          piVar1 = *(int **)(*(longlong *)(local_28 + 0x70) + lVar6);
          if (*piVar1 == *(int *)(param_1 + 0x10)) {
            if (piVar1 != (int *)0x0) {
              FUN_14074668c();
            }
            break;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)*(int *)(local_28 + 0x78) * 8 != lVar6);
      }
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14654a5f6 FUN_14654a5f6 body=144 status=ok
// SIG undefined FUN_14654a5f6(void)

undefined8 * FUN_14654a5f6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140b4b994(&local_28);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654a6aa FUN_14654a6aa body=142 status=ok
// SIG undefined FUN_14654a6aa(void)

undefined8 * FUN_14654a6aa(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = param_2;
  param_1[1] = *param_3;
  lVar3 = param_3[1];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  FUN_1413e94bc(param_1 + 3,0);
  FUN_1413e94bc((longlong)param_1 + 0x24,0);
  FUN_1413e94bc(param_1 + 6,0x3f800000);
  FUN_1413e94bc((longlong)param_1 + 0x3c,0);
  plVar4 = (longlong *)param_3[1];
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
  return param_1;
}



// FUNCTION 14654a738 FUN_14654a738 body=147 status=ok
// SIG undefined FUN_14654a738(void)

void FUN_14654a738(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14654a7cc FUN_14654a7cc body=85 status=ok
// SIG undefined FUN_14654a7cc(void)

void FUN_14654a7cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f63e0;
  return;
}



// FUNCTION 14654a822 FUN_14654a822 body=29 status=ok
// SIG undefined FUN_14654a822(void)

undefined8 FUN_14654a822(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654a840 FUN_14654a840 body=132 status=ok
// SIG undefined FUN_14654a840(void)

void FUN_14654a840(longlong param_1,int param_2)

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



// FUNCTION 14654a8c6 FUN_14654a8c6 body=130 status=ok
// SIG undefined FUN_14654a8c6(void)

void FUN_14654a8c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    FUN_1402a453c((int *)(param_1 + 8));
    iVar4 = *(int *)(param_1 + 8);
  }
  FUN_1448a8284(DAT_14c9a3d60 + (longlong)iVar4 * 0x88 + -0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014654a944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14654a948 FUN_14654a948 body=131 status=ok
// SIG undefined FUN_14654a948(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14654a948(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"Damage",1);
  FUN_14147d486(&DAT_14cb76a78,local_18,3);
  _DAT_14cb76a78 = &PTR_FUN_14b3f67f0;
  FUN_140834d1a(&DAT_14cb76a78,L"Events relevant to dealing or taking damage.");
  DAT_14cb76ad5 = 1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654a9cc FUN_14654a9cc body=28 status=ok
// SIG undefined FUN_14654a9cc(void)

void FUN_14654a9cc(longlong param_1,undefined8 param_2)

{
  if (((*(byte *)(param_1 + 0x55) & 6) == 2) && (0 < *(int *)(param_1 + 0x40))) {
    FUN_1409d451a(*(undefined8 *)(param_1 + 0x38),param_2,0);
    return;
  }
  return;
}



// FUNCTION 14654a9e8 FUN_14654a9e8 body=67 status=ok
// SIG undefined FUN_14654a9e8(void)

void FUN_14654a9e8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x88;
    do {
      FUN_1409d451a(lVar1,0,0);
      lVar1 = lVar1 + 0x88;
      lVar2 = lVar2 + -0x88;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14654aa2c FUN_14654aa2c body=97 status=ok
// SIG undefined FUN_14654aa2c(void)

void FUN_14654aa2c(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (0 < iVar1) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      if (uVar2 != *(uint *)(param_1 + 0x5c)) {
        FUN_145be4800(*(longlong *)(param_1 + 0x38) + lVar3,0x3f800000,0x3f800000,0);
        iVar1 = *(int *)(param_1 + 0x40);
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x88;
    } while ((longlong)uVar2 < (longlong)iVar1);
  }
  return;
}



// FUNCTION 14654aa8e FUN_14654aa8e body=508 status=ok
// SIG undefined FUN_14654aa8e(void)

void FUN_14654aa8e(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (DAT_14cb77c58 < 0) {
    DAT_14cb77c58 = 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x60);
  }
  else {
    do {
      lVar7 = lVar5;
      lVar5 = *(longlong *)(lVar7 + 0x88);
    } while (lVar5 != 0);
    puVar6 = (undefined8 *)(lVar7 + 0x88);
  }
  *puVar6 = param_2;
  lVar5 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x30));
  param_2[0x26] = (float)*(double *)(lVar5 + 0x6d0);
  if (*(longlong *)(lVar5 + 0x1f0) == 0) {
    puVar6 = (undefined8 *)(lVar5 + 0x458);
  }
  else {
    puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
  }
  uVar2 = *param_2;
  uVar3 = *puVar6;
  uVar1 = param_2[2];
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  FUN_1446efa72(&local_c0,0,3,0x10);
  puVar6 = local_c0;
  local_b8 = 3;
  *local_c0 = &PTR_LAB_14a1c8830;
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
  local_c0[2] = lVar7;
  *local_c0 = &PTR_FUN_14b3f7550;
  local_c0[3] = 0;
  FUN_14485c47a(local_c0 + 3,uVar4);
  puVar6[4] = param_1;
  *(undefined4 *)(puVar6 + 5) = uVar2;
  local_a8 = 0;
  local_a0 = 0;
  FUN_14487d8d8(&local_a8,&local_c0);
  local_68 = 1;
  local_c8 = local_b0;
  local_b0[0] = 1;
  local_ac = 0xbf800000;
  FUN_1406f4044(uVar3,param_2 + 0x24,&local_a8,uVar1);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
  FUN_1449db362(&local_c0);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654acac FUN_14654acac body=132 status=ok
// SIG undefined FUN_14654acac(void)

void FUN_14654acac(longlong param_1,int param_2)

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



// FUNCTION 14654ad30 FUN_14654ad30 body=147 status=ok
// SIG undefined FUN_14654ad30(void)

void FUN_14654ad30(longlong param_1,int param_2)

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



// FUNCTION 14654adc4 FUN_14654adc4 body=85 status=ok
// SIG undefined FUN_14654adc4(void)

void FUN_14654adc4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f7770;
  return;
}



// FUNCTION 14654ae1a FUN_14654ae1a body=29 status=ok
// SIG undefined FUN_14654ae1a(void)

undefined8 FUN_14654ae1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654ae38 FUN_14654ae38 body=87 status=ok
// SIG undefined FUN_14654ae38(void)

undefined8 * FUN_14654ae38(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a184350;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 14654ae90 FUN_14654ae90 body=29 status=ok
// SIG undefined FUN_14654ae90(void)

undefined8 FUN_14654ae90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654aeb8 FUN_14654aeb8 body=83 status=ok
// SIG undefined FUN_14654aeb8(void)

void FUN_14654aeb8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_141030f22();
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x3a8) + 0x20))(param_1 + 0x3a8);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014654af08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1,param_2,*(code **)(*plVar1 + 0x30));
      return;
    }
  }
  return;
}



// FUNCTION 14654af0c FUN_14654af0c body=105 status=ok
// SIG undefined FUN_14654af0c(void)

void FUN_14654af0c(longlong param_1)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_140872868(param_1 + 0x5f0);
  }
  FUN_145741a14(param_1 + 0x1260,0);
  if (*(longlong *)(param_1 + 0x1338) != 0) {
    lVar1 = FUN_14492b4b4(*(undefined8 *)(param_1 + 0x168));
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x1338) != 0)) {
      FUN_14480f766(lVar1);
    }
  }
  FUN_140872622(param_1);
  return;
}



// FUNCTION 14654af76 FUN_14654af76 body=67 status=ok
// SIG undefined FUN_14654af76(void)

void FUN_14654af76(longlong param_1)

{
  FUN_140115e24();
  FUN_1402d7906(param_1 + 0x1188,param_1 + 0x3e0);
  FUN_1404d4e8e(param_1 + 0x3f0,param_1);
  FUN_14071060c(param_1 + 0x12d8,param_1);
  return;
}



// FUNCTION 14654afc0 FUN_14654afc0 body=52 status=ok
// SIG undefined FUN_14654afc0(void)

void FUN_14654afc0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14654aff4 FUN_14654aff4 body=131 status=ok
// SIG undefined FUN_14654aff4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14654aff4(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446ddc76(&local_18,"GbxDiscovery",1);
  FUN_14147d486(&DAT_14cb77ed8,local_18,3);
  _DAT_14cb77ed8 = &PTR_FUN_14b3f8790;
  FUN_140834d1a(&DAT_14cb77ed8,L"Events relevant to discovery.");
  DAT_14cb77f35 = 1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654b078 FUN_14654b078 body=97 status=ok
// SIG undefined FUN_14654b078(void)

undefined8 FUN_14654b078(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x10) + 0x58) == '\x01')) {
    bVar1 = FUN_144729dda(param_1 + 0x50);
    if ((*(longlong *)(param_1 + 0x10) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x78) & bVar1) != 0)) {
      return 1;
    }
  }
  lVar2 = FUN_1412fe774(param_1 + 0xd0);
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_144729dda(param_1 + 0xf8);
  return uVar3;
}



// FUNCTION 14654b0da FUN_14654b0da body=249 status=ok
// SIG undefined FUN_14654b0da(void)

void FUN_14654b0da(longlong param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_3 == 0) {
    plVar4 = *(longlong **)(param_2 + 0x10);
    do {
      if (plVar4[5] != 0) {
        lVar2 = *(longlong *)(plVar4[5] + 0x30);
        if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x360) != 0)) &&
            (lVar2 = FUN_1400f6f32(), lVar2 != 0)) && (*(longlong *)(lVar2 + 0x68) != 0)) {
          uVar3 = FUN_140d1732e(*(longlong *)(lVar2 + 0x68),param_2 + 0x18);
          FUN_1407934de(&local_30,uVar3);
          if (local_30 != 0) {
            FUN_1409da528(local_30,uVar3,*(undefined4 *)(param_1 + 0x100),1);
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
        }
        break;
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2f0))(plVar4);
    } while (plVar4 != (longlong *)0x0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14654b1d4 FUN_14654b1d4 body=249 status=ok
// SIG undefined FUN_14654b1d4(void)

void FUN_14654b1d4(longlong param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_3 == 0) {
    plVar4 = *(longlong **)(param_2 + 0x10);
    do {
      if (plVar4[5] != 0) {
        lVar2 = *(longlong *)(plVar4[5] + 0x30);
        if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x360) != 0)) &&
            (lVar2 = FUN_1400f6f32(), lVar2 != 0)) && (*(longlong *)(lVar2 + 0x68) != 0)) {
          uVar3 = FUN_140d1732e(*(longlong *)(lVar2 + 0x68),param_2 + 0x18);
          FUN_1407934de(&local_30,uVar3);
          if (local_30 != 0) {
            FUN_1409da528(local_30,uVar3,*(undefined4 *)(param_1 + 0x100),2);
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
        }
        break;
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2f0))(plVar4);
    } while (plVar4 != (longlong *)0x0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14654b2f0 FUN_14654b2f0 body=81 status=ok
// SIG undefined FUN_14654b2f0(void)

undefined8 *
FUN_14654b2f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2,param_3);
  param_1[3] = 0;
  FUN_14485c47a(param_1 + 3,param_4);
  return param_1;
}



// FUNCTION 14654b342 FUN_14654b342 body=132 status=ok
// SIG undefined FUN_14654b342(void)

void FUN_14654b342(longlong param_1,int param_2)

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



// FUNCTION 14654b3c8 FUN_14654b3c8 body=123 status=ok
// SIG undefined FUN_14654b3c8(void)

undefined8 FUN_14654b3c8(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = &DAT_14c9485f0;
  if (*(undefined4 **)(*param_2 + 8) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(*param_2 + 8);
  }
  FUN_1447325ac(puVar2,&local_28,1);
  if (local_28 == *param_1) {
    uVar1 = FUN_1409d2f40(param_2 + 2,param_1[3]);
  }
  else {
    uVar1 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654b444 FUN_14654b444 body=29 status=ok
// SIG undefined FUN_14654b444(void)

bool FUN_14654b444(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14654b462 FUN_14654b462 body=26 status=ok
// SIG undefined FUN_14654b462(void)

bool FUN_14654b462(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14654b47c FUN_14654b47c body=24 status=ok
// SIG undefined FUN_14654b47c(void)

bool FUN_14654b47c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14654b494 FUN_14654b494 body=64 status=ok
// SIG undefined FUN_14654b494(void)

void FUN_14654b494(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        if (DAT_14c872a72 == '\0') {
          FUN_140113f48();
        }
        *(undefined8 *)(param_1 + lVar1 * 8) = 0;
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 14654b4d4 FUN_14654b4d4 body=132 status=ok
// SIG undefined FUN_14654b4d4(void)

void FUN_14654b4d4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14654b55a FUN_14654b55a body=29 status=ok
// SIG undefined FUN_14654b55a(void)

undefined8 FUN_14654b55a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654b578 FUN_14654b578 body=85 status=ok
// SIG undefined FUN_14654b578(void)

void FUN_14654b578(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f8e70;
  return;
}



// FUNCTION 14654b5ce FUN_14654b5ce body=29 status=ok
// SIG undefined FUN_14654b5ce(void)

undefined8 FUN_14654b5ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654b5ec FUN_14654b5ec body=29 status=ok
// SIG undefined FUN_14654b5ec(void)

undefined8 FUN_14654b5ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654b60a FUN_14654b60a body=29 status=ok
// SIG undefined FUN_14654b60a(void)

undefined8 FUN_14654b60a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654b628 FUN_14654b628 body=29 status=ok
// SIG undefined FUN_14654b628(void)

undefined8 FUN_14654b628(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654b646 FUN_14654b646 body=446 status=ok
// SIG undefined FUN_14654b646(void)

void FUN_14654b646(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  size_t sVar7;
  int iVar8;
  char *_Str;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar5 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cb78858);
  pbVar2 = (byte *)*puVar5;
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(pbVar2 + 8);
  }
  FUN_1446ddc76(&local_38,uVar6,1);
  *param_1 = local_38;
  uVar6 = FUN_144a06846(param_2,&DAT_14cb78880);
  iVar8 = 0;
  uVar4 = FUN_140e1edd4(uVar6,0);
  *(undefined4 *)(param_1 + 1) = uVar4;
  uVar6 = FUN_144a06846(param_2,&DAT_14cb788a8);
  uVar4 = FUN_140e1edd4(uVar6,0);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  puVar5 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cb788d0);
  pbVar2 = (byte *)*puVar5;
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(pbVar2 + 8);
  }
  FUN_1446ddc76(&local_38,uVar6,1);
  param_1[2] = local_38;
  puVar5 = (undefined8 *)FUN_144a06846(param_2,&DAT_14cb788f8);
  pbVar2 = (byte *)*puVar5;
  if (pbVar2 == (byte *)0x0) {
    bVar3 = false;
    _Str = (char *)0x0;
  }
  else if (((*pbVar2 & 3) == 1) && (_Str = *(char **)(pbVar2 + 8), _Str != (char *)0x0)) {
    sVar7 = strlen(_Str);
    iVar8 = (int)sVar7;
    bVar3 = true;
  }
  else {
    bVar3 = false;
    _Str = (char *)0x0;
    iVar8 = 0;
  }
  plVar1 = param_1 + 3;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) < 0) {
    FUN_141701710(plVar1,0);
  }
  FUN_1410fe350(plVar1,iVar8 + 1,1);
  *(undefined1 *)(*plVar1 + (longlong)iVar8) = 0;
  if (bVar3 && 0 < iVar8) {
    strcpy((char *)*plVar1,_Str);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654b806 FUN_14654b806 body=989 status=ok
// SIG undefined FUN_14654b806(void)

undefined4 *
FUN_14654b806(undefined8 *param_1,undefined4 *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined1 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_3 != (longlong *)0x0) &&
     (lVar10 = (**(code **)(*param_3 + 0x5e0))(param_3), lVar10 != 0)) {
    lVar11 = *(longlong *)(lVar10 + 0x1c8);
    if (lVar11 == 0) {
      local_68 = DAT_14c8464f0;
      local_78 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_70 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_78 = *(undefined8 *)(lVar11 + 0x260);
      uStack_70 = *(undefined8 *)(lVar11 + 0x268);
      local_68 = *(undefined8 *)(lVar11 + 0x270);
    }
    lVar11 = FUN_1447210f0(param_3);
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(longlong *)(lVar11 + 0x18);
    }
    FUN_1405f0c40(DAT_14cb84f20,&local_90,lVar11);
    lVar14 = local_90;
    if (local_90 == 0) {
      lVar14 = lVar11;
    }
    if ((longlong)*(int *)(param_1 + 1) != 0) {
      puVar15 = (undefined4 *)*param_1;
      lVar11 = (longlong)*(int *)(param_1 + 1) * 0x78;
      do {
        cVar8 = FUN_14882d14a(puVar15,param_3);
        if (cVar8 != '\0') {
          if (param_4 != (undefined4 *)0x0) {
            uVar2 = *puVar15;
            uVar3 = puVar15[1];
            uVar4 = puVar15[2];
            uVar5 = puVar15[3];
            uVar12 = *(undefined8 *)(puVar15 + 4);
            uVar6 = *(undefined8 *)(puVar15 + 6);
            uVar7 = *(undefined8 *)(puVar15 + 10);
            *(undefined8 *)(param_4 + 8) = *(undefined8 *)(puVar15 + 8);
            *(undefined8 *)(param_4 + 10) = uVar7;
            *(undefined8 *)(param_4 + 4) = uVar12;
            *(undefined8 *)(param_4 + 6) = uVar6;
            *param_4 = uVar2;
            param_4[1] = uVar3;
            param_4[2] = uVar4;
            param_4[3] = uVar5;
            if (puVar15 != param_4) {
              if (*(char *)(puVar15 + 0x18) == '\x01') {
                uVar2 = puVar15[0xc];
                uVar3 = puVar15[0xd];
                uVar4 = puVar15[0xe];
                uVar5 = puVar15[0xf];
                uVar12 = *(undefined8 *)(puVar15 + 0x10);
                uVar6 = *(undefined8 *)(puVar15 + 0x12);
                uVar7 = *(undefined8 *)(puVar15 + 0x16);
                *(undefined8 *)(param_4 + 0x14) = *(undefined8 *)(puVar15 + 0x14);
                *(undefined8 *)(param_4 + 0x16) = uVar7;
                *(undefined8 *)(param_4 + 0x10) = uVar12;
                *(undefined8 *)(param_4 + 0x12) = uVar6;
                param_4[0xc] = uVar2;
                param_4[0xd] = uVar3;
                param_4[0xe] = uVar4;
                param_4[0xf] = uVar5;
                uVar9 = 1;
              }
              else {
                if (*(char *)(param_4 + 0x18) != '\x01') goto LAB_14654b962;
                uVar9 = 0;
              }
              *(undefined1 *)(param_4 + 0x18) = uVar9;
            }
LAB_14654b962:
            *(undefined1 *)(param_4 + 0x1c) = *(undefined1 *)(puVar15 + 0x1c);
            *(undefined8 *)(param_4 + 0x1a) = *(undefined8 *)(puVar15 + 0x1a);
          }
          cVar8 = *(char *)(puVar15 + 2);
          if (cVar8 == '\x01') {
            if (lVar14 == *(longlong *)(puVar15 + 4)) {
              FUN_14882d1c2(puVar15,param_2,&local_78,lVar10);
LAB_14654ba41:
              *(undefined1 *)(param_2 + 6) = 1;
              goto LAB_14654b8c1;
            }
          }
          else if (cVar8 == '\x02') {
            local_90 = *(longlong *)(puVar15 + 0x1a);
            local_88 = 0;
            lStack_80 = 0;
            uVar12 = FUN_14073f72a();
            local_88 = FUN_14477b664(uVar12);
            if (lStack_80 == 0) {
              if ((((local_88 != 0) && (local_90 != 0)) &&
                  (plVar1 = *(longlong **)(local_88 + 0xb8), plVar1 != (longlong *)0x0)) &&
                 (cVar8 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar8 != '\0')) {
                uVar12 = (**(code **)(*plVar1 + 0x110))(plVar1);
                lStack_80 = FUN_144aff482(uVar12,&local_90);
                if (lStack_80 != 0) goto LAB_14654b9e7;
              }
            }
            else {
LAB_14654b9e7:
              lVar13 = lStack_80;
              if (local_88 == 0) {
                uVar12 = FUN_14073f72a();
                local_88 = FUN_14477b664(uVar12);
                lVar13 = lStack_80;
                if (lStack_80 == 0) {
                  if (local_88 == 0) {
                    lVar13 = 0;
                  }
                  else {
                    lVar13 = 0;
                    if (local_90 != 0) {
                      plVar1 = *(longlong **)(local_88 + 0xb8);
                      if ((plVar1 == (longlong *)0x0) ||
                         (cVar8 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar8 == '\0')) {
                        lVar13 = 0;
                        lStack_80 = lVar13;
                      }
                      else {
                        uVar12 = (**(code **)(*plVar1 + 0x110))(plVar1);
                        lVar13 = FUN_144aff482(uVar12,&local_90);
                        lStack_80 = lVar13;
                      }
                    }
                  }
                }
              }
              if (*(longlong *)(lVar13 + 0x130) == lVar14) {
                if (local_88 == 0) {
                  uVar12 = FUN_14073f72a();
                  local_88 = FUN_14477b664(uVar12);
                  lVar13 = lStack_80;
                }
                if (lVar13 == 0) {
                  lStack_80 = 0;
                  lVar13 = 0;
                  if ((local_88 != 0) && (local_90 != 0)) {
                    plVar1 = *(longlong **)(local_88 + 0xb8);
                    if ((plVar1 == (longlong *)0x0) ||
                       (cVar8 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar8 == '\0')) {
                      lVar13 = 0;
                      lStack_80 = lVar13;
                    }
                    else {
                      uVar12 = (**(code **)(*plVar1 + 0x110))(plVar1);
                      lVar13 = FUN_144aff482(uVar12,&local_90);
                      lStack_80 = lVar13;
                    }
                  }
                }
                FUN_1447210f0(param_3);
                uVar2 = *(undefined4 *)(lVar13 + 0x204);
                uVar3 = *(undefined4 *)(lVar13 + 0x208);
                uVar4 = *(undefined4 *)(lVar13 + 0x20c);
                *param_2 = *(undefined4 *)(lVar13 + 0x200);
                param_2[1] = uVar2;
                param_2[2] = uVar3;
                param_2[3] = uVar4;
                *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar13 + 0x210);
                goto LAB_14654ba41;
              }
            }
          }
          else if (cVar8 == '\0') break;
        }
        puVar15 = puVar15 + 0x1e;
        lVar11 = lVar11 + -0x78;
      } while (lVar11 != 0);
    }
  }
  *(undefined1 *)(param_2 + 6) = 0;
LAB_14654b8c1:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14654bbe4 FUN_14654bbe4 body=139 status=ok
// SIG undefined FUN_14654bbe4(void)

void FUN_14654bbe4(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  (**(code **)(*param_1 + 0x180))();
  lVar4 = param_1[7];
  uVar2 = 0;
  if ((longlong)(int)param_1[8] != 0) {
    lVar3 = (longlong)(int)param_1[8] * 0x18;
    lVar4 = lVar4 + 8;
    do {
      if (param_1[6] != 0) {
        FUN_140993b54(param_1[6],lVar4);
      }
      lVar4 = lVar4 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
    uVar2 = (undefined4)param_1[8];
    lVar4 = param_1[7];
  }
  iVar1 = *(int *)((longlong)param_1 + 0x44);
  FUN_14117d0df(lVar4,uVar2);
  *(undefined4 *)(param_1 + 8) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x44) != 0)) {
    FUN_14883663a(param_1 + 7,0);
    return;
  }
  return;
}



// FUNCTION 14654bc7a FUN_14654bc7a body=218 status=ok
// SIG undefined FUN_14654bc7a(void)

void FUN_14654bc7a(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  if (*(int *)(param_1 + 0x3c4) < 0) {
    FUN_148836a94(param_1 + 0x3b8);
  }
  if ((((*(longlong *)(param_1 + 0x20) != 0) &&
       (cVar3 = FUN_144729dda(param_1 + 0x18), cVar3 != '\0')) &&
      (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(), lVar5 != 0)) &&
     (iVar4 = *(int *)(lVar5 + 0x118), 0 < iVar4)) {
    lVar9 = 0;
    do {
      if (*(char *)(*(longlong *)(lVar5 + 0x110) + 0x18 + lVar9 * 0x38) != '\0') {
        lVar8 = *(longlong *)(lVar5 + 0x110) + lVar9 * 0x38;
        piVar6 = (int *)FUN_14882f5d2(param_1 + 0x3b8);
        *piVar6 = (int)lVar9 + 1;
        uVar7 = FUN_14882f144(*(undefined1 *)(lVar8 + 0x18));
        *(undefined8 *)(piVar6 + 2) = uVar7;
        *(undefined8 *)(piVar6 + 8) = *(undefined8 *)(lVar8 + 0x30);
        iVar4 = *(int *)(lVar8 + 0x24);
        iVar1 = *(int *)(lVar8 + 0x28);
        iVar2 = *(int *)(lVar8 + 0x2c);
        piVar6[4] = *(int *)(lVar8 + 0x20);
        piVar6[5] = iVar4;
        piVar6[6] = iVar1;
        piVar6[7] = iVar2;
        iVar4 = *(int *)(lVar5 + 0x118);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar4);
  }
  FUN_1447f69b6(param_1);
  return;
}



// FUNCTION 14654bd54 FUN_14654bd54 body=177 status=ok
// SIG undefined FUN_14654bd54(void)

undefined8 FUN_14654bd54(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459876ee();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654be06 FUN_14654be06 body=159 status=ok
// SIG undefined FUN_14654be06(void)

void FUN_14654be06(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    lVar2 = *(longlong *)(param_1 + 200);
    uVar1 = 0;
    if ((longlong)*(int *)(param_1 + 0xd0) != 0) {
      lVar3 = (longlong)*(int *)(param_1 + 0xd0) * 0x88;
      lVar2 = lVar2 + 0x48;
      do {
        FUN_141819b80(lVar2,0);
        lVar2 = lVar2 + 0x88;
        lVar3 = lVar3 + -0x88;
      } while (lVar3 != 0);
      uVar1 = *(undefined4 *)(param_1 + 0xd0);
      lVar2 = *(longlong *)(param_1 + 200);
    }
    FUN_145c1aeb3(lVar2,uVar1);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    if (*(int *)(param_1 + 0xd4) != 0) {
      FUN_148838050(param_1 + 200);
    }
  }
  FUN_141245f18(param_1,param_2);
  return;
}



// FUNCTION 14654bea6 FUN_14654bea6 body=76 status=ok
// SIG undefined FUN_14654bea6(void)

undefined8 FUN_14654bea6(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145982cfa(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014654bee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14654bef8 FUN_14654bef8 body=39 status=ok
// SIG undefined FUN_14654bef8(void)

void FUN_14654bef8(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_141188596(param_1 + 0x30,0);
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 14654bf20 FUN_14654bf20 body=212 status=ok
// SIG undefined FUN_14654bf20(void)

longlong * FUN_14654bf20(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b3fbad0;
  plVar1 = plVar4 + 2;
  plVar4[3] = (longlong)&DAT_14cb79040;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *(undefined1 *)(plVar4 + 6) = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b141330;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)*plVar1)(plVar1);
  }
  *param_1 = (longlong)plVar1;
  param_1[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_1;
}



// FUNCTION 14654bff4 FUN_14654bff4 body=75 status=ok
// SIG undefined FUN_14654bff4(void)

void FUN_14654bff4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    FUN_14485c47a(param_1 + 8);
    lVar1 = FUN_14479d2ce(param_1 + 8);
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x360);
    }
    FUN_145c18a2c(param_1,uVar2);
    return;
  }
  return;
}



// FUNCTION 14654c040 FUN_14654c040 body=236 status=ok
// SIG undefined FUN_14654c040(void)

void FUN_14654c040(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar3 = FUN_144729dda(param_1 + 8);
  if (cVar3 != '\0') {
    lVar4 = FUN_14479d2ce(param_1 + 8);
    if (*(longlong *)(lVar4 + 0x30) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x360);
      goto LAB_14654c080;
    }
  }
  lVar4 = 0;
LAB_14654c080:
  FUN_1457ec0b4(param_1,lVar4);
  if (((*(longlong *)(param_1 + 0x68) != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x70) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x68);
    local_20 = *(longlong *)(param_1 + 0x70);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    plVar2 = *(longlong **)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if (lVar4 != 0) {
    FUN_140457ffc(lVar4 + 0x570,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654c12e FUN_14654c12e body=839 status=ok
// SIG undefined FUN_14654c12e(void)

void FUN_14654c12e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = param_2;
  puVar11 = local_78;
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    cVar4 = FUN_144729dda(param_1 + 8);
    if (cVar4 != '\0') {
      lVar7 = FUN_14479d2ce(param_1 + 8);
      if ((*(longlong *)(lVar7 + 0x30) != 0) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + 0x360) != 0)) {
        iVar5 = FUN_14490d72a();
        puVar11 = local_78;
        if (iVar5 == 3) goto LAB_14654c41f;
      }
    }
    plVar1 = (longlong *)(param_1 + 0x28);
    local_c8 = param_1 + 0x38;
    local_b8 = (longlong *)&DAT_100000000;
    local_a8 = (undefined8 *)&DAT_ffffffff;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    uStack_b0 = local_c8;
    if (*(int *)(param_1 + 0x50) == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_b8);
      iVar5 = *(int *)(param_1 + 0x50);
    }
    local_78 = local_a8;
    puVar11 = local_78;
    uStack_70 = uStack_a0;
    local_88 = (undefined4)local_b8;
    uStack_84 = local_b8._4_4_;
    uStack_80 = (undefined4)uStack_b0;
    uStack_7c = uStack_b0._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar5) || (uStack_b0 != local_c8)) {
      iVar6 = local_78._4_4_;
      local_78 = puVar11;
      do {
        if ((*(int *)(*local_90 + (longlong)iVar6 * 0x68) != 0) &&
           (puVar11 = (undefined8 *)(*local_90 + (longlong)iVar6 * 0x68),
           *(int *)((longlong)puVar11 + 0x44) < *(int *)(puVar11 + 3))) {
          puVar2 = puVar11 + 4;
          local_68 = 0x100000000;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_60 = puVar2;
          if (*(int *)(puVar11 + 7) != 0) {
            FUN_1449c0562(&local_68);
          }
          plVar3 = puVar11 + 2;
          uStack_a0 = local_58;
          local_98 = local_50;
          local_94 = local_4c;
          uStack_b0 = local_68;
          local_a8 = local_60;
          uVar10 = *(uint *)(puVar11 + 7);
          local_68 = CONCAT44(1 << ((byte)uVar10 & 0x1f),(int)uVar10 >> 5);
          local_58 = CONCAT44(uVar10,-1 << ((byte)uVar10 & 0x1f));
          local_50 = uVar10 & 0xffffffe0;
          local_b8 = plVar3;
          local_60 = puVar2;
          if (*(uint *)(puVar11 + 7) != uVar10) {
            FUN_1449c0562(&local_68);
            uVar10 = local_58._4_4_;
          }
          puVar2 = local_60;
          if ((local_b8 != plVar3 || local_a8 != local_60) || uStack_a0._4_4_ != uVar10) {
            do {
              if (*(int *)(*local_b8 + (longlong)(int)uStack_a0._4_4_ * 0x38) != 0) {
                puVar12 = (undefined8 *)(*local_b8 + (longlong)(int)uStack_a0._4_4_ * 0x38);
                puVar8 = (undefined1 *)FUN_140116e58(local_c0);
                *puVar8 = 9;
                *(undefined4 *)(puVar8 + 0x30) = *(undefined4 *)(puVar11 + 1);
                *(undefined8 *)(puVar8 + 0x28) = *puVar11;
                *(undefined8 *)(puVar8 + 0x34) = *puVar12;
                *(undefined4 *)(puVar8 + 0x3c) = *(undefined4 *)(puVar12 + 1);
                puVar9 = &DAT_14cb7c580;
                if (*(char *)(puVar12 + 2) != '\0') {
                  puVar9 = &DAT_14cb7c588;
                }
                *(undefined8 *)(puVar8 + 0x40) = *puVar9;
              }
              uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
              FUN_1449c0562(&uStack_b0);
            } while (((uStack_a0._4_4_ != uVar10) || (local_a8 != puVar2)) || (local_b8 != plVar3));
          }
        }
        local_78 = (undefined8 *)CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        puVar11 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != local_c8 || local_78._4_4_ != iVar5));
    }
  }
LAB_14654c41f:
  local_78 = puVar11;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654c476 FUN_14654c476 body=54 status=ok
// SIG undefined FUN_14654c476(void)

undefined8 * FUN_14654c476(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654c4b2 FUN_14654c4b2 body=287 status=ok
// SIG undefined FUN_14654c4b2(void)

void FUN_14654c4b2(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 0x20 + (longlong)iStack_44 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654c5d2 FUN_14654c5d2 body=132 status=ok
// SIG undefined FUN_14654c5d2(void)

void FUN_14654c5d2(longlong param_1,int param_2)

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



// FUNCTION 14654c658 FUN_14654c658 body=29 status=ok
// SIG undefined FUN_14654c658(void)

bool FUN_14654c658(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14654c676 FUN_14654c676 body=29 status=ok
// SIG undefined FUN_14654c676(void)

bool FUN_14654c676(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14654c694 FUN_14654c694 body=26 status=ok
// SIG undefined FUN_14654c694(void)

bool FUN_14654c694(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14654c6ae FUN_14654c6ae body=24 status=ok
// SIG undefined FUN_14654c6ae(void)

bool FUN_14654c6ae(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14654c6c6 FUN_14654c6c6 body=29 status=ok
// SIG undefined FUN_14654c6c6(void)

bool FUN_14654c6c6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14654c6e4 FUN_14654c6e4 body=26 status=ok
// SIG undefined FUN_14654c6e4(void)

bool FUN_14654c6e4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14654c6fe FUN_14654c6fe body=29 status=ok
// SIG undefined FUN_14654c6fe(void)

bool FUN_14654c6fe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14654c71c FUN_14654c71c body=26 status=ok
// SIG undefined FUN_14654c71c(void)

bool FUN_14654c71c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14654c736 FUN_14654c736 body=24 status=ok
// SIG undefined FUN_14654c736(void)

bool FUN_14654c736(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14654c74e FUN_14654c74e body=147 status=ok
// SIG undefined FUN_14654c74e(void)

void FUN_14654c74e(longlong param_1,int param_2)

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



// FUNCTION 14654c7e2 FUN_14654c7e2 body=24 status=ok
// SIG undefined FUN_14654c7e2(void)

bool FUN_14654c7e2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14654c7fa FUN_14654c7fa body=118 status=ok
// SIG undefined FUN_14654c7fa(void)

void FUN_14654c7fa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fba10;
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



// FUNCTION 14654c870 FUN_14654c870 body=85 status=ok
// SIG undefined FUN_14654c870(void)

void FUN_14654c870(void)

{
  FUN_144760e21(DAT_14cb78ca0,DAT_14cb78ca8);
  if (DAT_14cb78ca0 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14cb78c88,DAT_14cb78c90);
  if (DAT_14cb78c88 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14654c8c6 FUN_14654c8c6 body=29 status=ok
// SIG undefined FUN_14654c8c6(void)

undefined8 FUN_14654c8c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654c8e4 FUN_14654c8e4 body=21 status=ok
// SIG undefined FUN_14654c8e4(void)

undefined8 FUN_14654c8e4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14654c8fa FUN_14654c8fa body=93 status=ok
// SIG undefined FUN_14654c8fa(void)

void FUN_14654c8fa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fbdb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14654c958 FUN_14654c958 body=29 status=ok
// SIG undefined FUN_14654c958(void)

undefined8 FUN_14654c958(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654c976 FUN_14654c976 body=198 status=ok
// SIG undefined FUN_14654c976(void)

void FUN_14654c976(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0xe) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0xf) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
    lVar7 = *param_1;
    plVar4 = param_1;
  }
  else {
    uVar5 = FUN_14589e80e();
    plVar6 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FUN_14589e80e();
      plVar8 = (longlong *)FUN_144718840(plVar6,uVar5);
      if (plVar8 != (longlong *)0x0 && plVar6 != plVar8) {
        plVar4 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8);
        if (plVar4 == (longlong *)0x0) {
          return;
        }
        lVar7 = (**(code **)(*plVar4 + 0x2b0))(plVar4);
        goto LAB_14654c9cb;
      }
    }
    lVar7 = *plVar4;
  }
  uVar5 = (**(code **)(lVar7 + 0x180))(plVar4);
  lVar7 = FUN_140149a73(uVar5,0);
LAB_14654c9cb:
  if (lVar7 == 0) {
    return;
  }
  FUN_140bc53f1(param_1 + 7,param_1 + 0xe,lVar7,0);
  return;
}



// FUNCTION 14654ca3c FUN_14654ca3c body=135 status=ok
// SIG undefined FUN_14654ca3c(void)

void FUN_14654ca3c(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1 + 0x20) & ~*(uint *)(param_4 + 0x30)) == 0) {
    uVar1 = FUN_14105e99c(param_2);
    lVar2 = FUN_14105e9e4(uVar1);
    if (lVar2 != 0) {
      local_28 = *(undefined8 *)(param_4 + 0x28);
      FUN_1401533ba(local_34,&local_28,1);
      FUN_140f7e106(lVar2,local_34,param_4,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654cac4 FUN_14654cac4 body=48 status=ok
// SIG undefined FUN_14654cac4(void)

undefined8 FUN_14654cac4(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1401499b2();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1403a12cc(lVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014654cae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x58))(plVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14654caf4 FUN_14654caf4 body=239 status=ok
// SIG undefined FUN_14654caf4(void)

undefined8 FUN_14654caf4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a1e1a40;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b3fd590;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_14615379e;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654cbe4 FUN_14654cbe4 body=414 status=ok
// SIG undefined FUN_14654cbe4(void)

void FUN_14654cbe4(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  char param_5)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_f8 [40];
  char local_d0 [4];
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined4 uStack_71;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_cc = 0xffffffffffffffff;
  local_c0 = 0;
  uStack_b8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_71 = 0;
  local_d0[0] = param_5;
  uStack_94 = *(undefined4 *)(param_2 + 1);
  uStack_9c = (undefined4)*param_2;
  uStack_98 = (undefined4)((ulonglong)*param_2 >> 0x20);
  local_90 = param_3;
  local_c4 = param_4;
  plVar1 = (longlong *)(param_1 + 0xd8);
  uVar2 = *(uint *)(param_1 + 0xe0);
  uVar5 = (ulonglong)uVar2;
  if (0 < (longlong)(int)uVar2) {
    puVar8 = (undefined1 *)*plVar1;
    do {
      cVar3 = FUN_145a2af2e(puVar8,local_d0);
      if (cVar3 != '\0') {
        if (param_5 == '\x04') {
          *puVar8 = 4;
        }
        *(undefined8 *)(puVar8 + 0x40) = param_3;
        *(undefined8 *)(puVar8 + 0x48) = 0;
        *(undefined8 *)(puVar8 + 0x50) = 0;
        *(undefined4 *)(puVar8 + 0xc) = param_4;
        goto LAB_14654ccd6;
      }
      puVar8 = puVar8 + 0x68;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *(uint *)(param_1 + 0xe0) = uVar2 + 1;
  if (*(uint *)(param_1 + 0xe4) < uVar2 + 1) {
    FUN_140116b62(plVar1,uVar2);
  }
  pcVar6 = local_d0;
  puVar7 = (undefined8 *)((longlong)(int)uVar2 * 0x68 + *plVar1);
  for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *(undefined8 *)pcVar6;
    pcVar6 = pcVar6 + 8;
    puVar7 = puVar7 + 1;
  }
LAB_14654ccd6:
  lVar4 = *(longlong *)(param_1 + 0x28);
  local_68 = param_1;
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_1);
  }
  FUN_1405f6d44(lVar4 + 0x16c8,&local_68);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654cd84 FUN_14654cd84 body=228 status=ok
// SIG undefined FUN_14654cd84(void)

undefined8 FUN_14654cd84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3fdf50;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b3fdbe0;
  local_38[3] = param_3;
  local_38[4] = FUN_145aeb7f2;
  FUN_145a0b054(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654ce6a FUN_14654ce6a body=80 status=ok
// SIG undefined FUN_14654ce6a(void)

longlong * FUN_14654ce6a(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140bc669e(*param_1,(int)param_1[1]);
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



// FUNCTION 14654ceba FUN_14654ceba body=74 status=ok
// SIG undefined FUN_14654ceba(void)

void FUN_14654ceba(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*param_3 == 0) && (*(longlong **)(param_2 + 0x10) != (longlong *)0x0)) {
    lVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x2b0))();
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_1403a12cc(lVar1);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014654cefb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x40))(plVar2,1,1,*(code **)(*plVar2 + 0x40));
        return;
      }
    }
  }
  return;
}



// FUNCTION 14654cf04 FUN_14654cf04 body=346 status=ok
// SIG undefined FUN_14654cf04(void)

undefined8 * FUN_14654cf04(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_78 [36];
  uint local_54 [2];
  int local_4c;
  uint local_48;
  int local_40;
  uint local_3c;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_1401144ce(param_3);
  if (cVar2 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  FUN_140ac173c(local_54,param_3);
  uVar4 = local_54[0];
  if (local_4c != 0) {
    uVar4 = FUN_144a78877(local_54[0]);
  }
  if (local_40 != 0) {
    local_48 = FUN_144a78877(local_48);
  }
  if (local_34 != 0) {
    local_3c = FUN_144a78877(local_3c);
  }
  iVar3 = FUN_1410b645c((longlong *)(param_1 + 0x4d8),local_48 ^ uVar4 ^ local_3c,local_54);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x4d8);
    lVar5 = lVar1 + (longlong)iVar3 * 0x50;
    if ((lVar5 != 0) && (lVar1 + (longlong)iVar3 * 0x50 != -0x28)) {
      *param_2 = 0;
      iVar3 = *(int *)(lVar5 + 0x30);
      _Src = *(void **)(lVar5 + 0x28);
      *(int *)(param_2 + 1) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_1459d21be(param_2,iVar3,0);
        memcpy((void *)*param_2,_Src,(longlong)iVar3 << 2);
      }
      goto LAB_14654cfd3;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14654cfd3:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654d062 FUN_14654d062 body=80 status=ok
// SIG undefined FUN_14654d062(void)

undefined8 * FUN_14654d062(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
    lVar3 = FUN_140718ac0(param_1,param_3);
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar3 + 0x130);
      puVar6 = param_2;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      uVar2 = 1;
      goto LAB_14654d0a0;
    }
  }
  uVar2 = 0;
LAB_14654d0a0:
  *(undefined1 *)(param_2 + 0xc) = uVar2;
  return param_2;
}



// FUNCTION 14654d0b2 FUN_14654d0b2 body=123 status=ok
// SIG undefined FUN_14654d0b2(void)

void FUN_14654d0b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  cVar2 = FUN_144a61b4f();
  if ((param_2 != 0) && (cVar2 != '\0')) {
    uVar3 = FUN_140b95084(param_2);
    iVar4 = FUN_145dac774((longlong *)(param_1 + 0x438),uVar3,param_2);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x438);
      if ((lVar1 + (longlong)iVar4 * 0x24 != 0) &&
         (puVar5 = (undefined4 *)(lVar1 + (longlong)iVar4 * 0x24 + 0x18),
         puVar5 != (undefined4 *)0x0)) {
        FUN_140d82418(param_1,*puVar5,1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14654d12e FUN_14654d12e body=422 status=ok
// SIG undefined FUN_14654d12e(void)

longlong * FUN_14654d12e(longlong *param_1,undefined8 *param_2)

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
LAB_14654d204:
    *puVar3 = &PTR_LAB_14b3e6310;
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
    *puVar3 = &PTR_FUN_14b3fcca0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = &LAB_1461763be;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14654d204;
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
    *puVar3 = &PTR_LAB_14b3e6310;
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
    *puVar3 = &PTR_FUN_14b3fcca0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_1461763be;
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



// FUNCTION 14654d2d4 FUN_14654d2d4 body=118 status=ok
// SIG undefined FUN_14654d2d4(void)

void FUN_14654d2d4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fcca0;
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



// FUNCTION 14654d34a FUN_14654d34a body=49 status=ok
// SIG undefined FUN_14654d34a(void)

void FUN_14654d34a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14654d37c FUN_14654d37c body=132 status=ok
// SIG undefined FUN_14654d37c(void)

void FUN_14654d37c(longlong param_1,int param_2)

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



// FUNCTION 14654d400 FUN_14654d400 body=29 status=ok
// SIG undefined FUN_14654d400(void)

undefined8 FUN_14654d400(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654d41e FUN_14654d41e body=29 status=ok
// SIG undefined FUN_14654d41e(void)

undefined8 FUN_14654d41e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654d43c FUN_14654d43c body=147 status=ok
// SIG undefined FUN_14654d43c(void)

void FUN_14654d43c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14654d4d0 FUN_14654d4d0 body=29 status=ok
// SIG undefined FUN_14654d4d0(void)

bool FUN_14654d4d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14654d4ee FUN_14654d4ee body=26 status=ok
// SIG undefined FUN_14654d4ee(void)

bool FUN_14654d4ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14654d508 FUN_14654d508 body=24 status=ok
// SIG undefined FUN_14654d508(void)

bool FUN_14654d508(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14654d520 FUN_14654d520 body=132 status=ok
// SIG undefined FUN_14654d520(void)

void FUN_14654d520(longlong param_1,int param_2)

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



// FUNCTION 14654d5a4 FUN_14654d5a4 body=29 status=ok
// SIG undefined FUN_14654d5a4(void)

undefined8 FUN_14654d5a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654d5c2 FUN_14654d5c2 body=29 status=ok
// SIG undefined FUN_14654d5c2(void)

undefined8 FUN_14654d5c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654d5e0 FUN_14654d5e0 body=29 status=ok
// SIG undefined FUN_14654d5e0(void)

undefined8 FUN_14654d5e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654d5fe FUN_14654d5fe body=55 status=ok
// SIG undefined FUN_14654d5fe(void)

void FUN_14654d5fe(longlong *param_1)

{
  FUN_14099030e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14654d636 FUN_14654d636 body=55 status=ok
// SIG undefined FUN_14654d636(void)

void FUN_14654d636(longlong *param_1)

{
  FUN_14575bfe0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14654d66e FUN_14654d66e body=55 status=ok
// SIG undefined FUN_14654d66e(void)

void FUN_14654d66e(longlong *param_1)

{
  FUN_14098f828(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14654d6a6 FUN_14654d6a6 body=55 status=ok
// SIG undefined FUN_14654d6a6(void)

void FUN_14654d6a6(longlong *param_1)

{
  FUN_14098fa36(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14654d6de FUN_14654d6de body=53 status=ok
// SIG undefined FUN_14654d6de(void)

void FUN_14654d6de(longlong *param_1)

{
  FUN_1414dad98();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14654d714 FUN_14654d714 body=53 status=ok
// SIG undefined FUN_14654d714(void)

void FUN_14654d714(longlong *param_1)

{
  FUN_1459b45d0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14654d74a FUN_14654d74a body=53 status=ok
// SIG undefined FUN_14654d74a(void)

void FUN_14654d74a(longlong *param_1)

{
  FUN_1459dcb92();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14654d780 FUN_14654d780 body=29 status=ok
// SIG undefined FUN_14654d780(void)

bool FUN_14654d780(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14654d79e FUN_14654d79e body=26 status=ok
// SIG undefined FUN_14654d79e(void)

bool FUN_14654d79e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14654d7b8 FUN_14654d7b8 body=24 status=ok
// SIG undefined FUN_14654d7b8(void)

bool FUN_14654d7b8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14654d7d0 FUN_14654d7d0 body=326 status=ok
// SIG undefined FUN_14654d7d0(void)

void FUN_14654d7d0(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x4c + (longlong)iVar4 * 0x50) * 4) =
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



// FUNCTION 14654d918 FUN_14654d918 body=288 status=ok
// SIG undefined FUN_14654d918(void)

void FUN_14654d918(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_145c6b660(*local_60 + (longlong)iStack_44 * 0x50 + 0x28);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140e9549c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654da3a FUN_14654da3a body=82 status=ok
// SIG undefined FUN_14654da3a(void)

void FUN_14654da3a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x151) == '\x01') {
    cVar1 = FUN_140bde87c();
    if (cVar1 != '\0') {
      lVar2 = FUN_14479d2ce(param_1 + 0x140);
      if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x30) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
      }
      FUN_145822528(uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 14654da8c FUN_14654da8c body=481 status=ok
// SIG undefined FUN_14654da8c(void)

ulonglong FUN_14654da8c(undefined8 param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar14;
  undefined7 uVar13;
  
  if (param_2 == 0) {
    uVar12 = 0;
    goto LAB_14654db4b;
  }
  plVar8 = (longlong *)FUN_140bc52d2(param_2);
  lVar4 = *plVar8;
  plVar8 = (longlong *)plVar8[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  if ((lVar4 == 0) || (bVar5 = FUN_1405f61f4(lVar4), (bVar5 | 2) != 6)) {
    uVar12 = 0;
  }
  else {
    lVar9 = FUN_140bc5192(param_1,param_2 + 0x10);
    uVar13 = (undefined7)((ulonglong)(param_2 + 0x10) >> 8);
    uVar12 = CONCAT71(uVar13,1);
    if (lVar9 != 0) {
      plVar10 = (longlong *)FUN_140bc52d2(lVar9);
      lVar9 = *plVar10;
      plVar10 = (longlong *)plVar10[1];
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      uVar12 = CONCAT71(uVar13,1);
      if (lVar9 != 0) {
        bVar6 = FUN_1405f61f4(lVar9);
        if (bVar6 == 6) goto LAB_14654db2a;
        if ((bVar5 != 6) && (2 < bVar6)) {
          lVar9 = *(longlong *)(*(longlong *)(lVar9 + 8) + 0x60);
          uVar7 = 0;
          uVar11 = 0;
          if (lVar9 != 0) {
            cVar3 = *(char *)(lVar9 + 0x38);
            if (cVar3 == '\x03') {
              bVar14 = *(longlong *)(lVar9 + 0x3c) == 0;
LAB_14654db91:
              uVar11 = (uint)!bVar14;
            }
            else if (cVar3 == '\x02') {
              uVar11 = *(uint *)(lVar9 + 0x44);
            }
            else if (cVar3 == '\x01') {
              bVar14 = *(int *)(lVar9 + 0x44) == 0;
              goto LAB_14654db91;
            }
          }
          lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x60);
          if (lVar4 != 0) {
            cVar3 = *(char *)(lVar4 + 0x38);
            if (cVar3 == '\x03') {
              bVar14 = *(longlong *)(lVar4 + 0x3c) == 0;
LAB_14654dbb7:
              uVar7 = (uint)!bVar14;
            }
            else if (cVar3 == '\x02') {
              uVar7 = *(uint *)(lVar4 + 0x44);
            }
            else if (cVar3 == '\x01') {
              bVar14 = *(int *)(lVar4 + 0x44) == 0;
              goto LAB_14654dbb7;
            }
          }
          if (param_3 == '\0') {
            if ((int)uVar7 <= (int)uVar11) goto LAB_14654db2a;
          }
          else if ((int)uVar7 < (int)uVar11) {
LAB_14654db2a:
            uVar12 = 0;
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
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_14654db4b:
  return uVar12 & 0xffffffff;
}



// FUNCTION 14654dc6e FUN_14654dc6e body=1205 status=ok
// SIG undefined FUN_14654dc6e(void)

void FUN_14654dc6e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_128 [40];
  undefined8 *local_100;
  longlong *local_f8;
  int local_ec;
  undefined8 *local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  longlong *local_b8;
  undefined8 *puStack_b0;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1447f69b6(param_1 + 1);
  *(undefined1 *)((longlong)param_1 + 0x155) = 1;
  (**(code **)(*param_1 + 0x10))(param_1,0,0);
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x153);
  *(undefined1 *)((longlong)param_1 + 0x153) = 1;
  local_90 = (longlong *)CONCAT44(local_90._4_4_,DAT_14cb7c898);
  local_98 = DAT_14cb7c890;
  FUN_1448075d0(&local_70);
  puVar6 = (undefined8 *)FUN_144a06846(param_2,&local_70);
  pbVar3 = (byte *)*puVar6;
  plVar9 = &DAT_14c9a1288;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 2) != 0)) {
    plVar9 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = plVar9 + 3;
  local_98 = (undefined8 *)&DAT_100000000;
  puStack_88 = (undefined8 *)&DAT_ffffffff;
  local_80 = (ulonglong)local_80._4_4_ << 0x20;
  iVar8 = 0;
  local_90 = plVar1;
  if ((int)plVar9[6] != 0) {
    FUN_1449c0562(&local_98);
    iVar8 = (int)plVar9[6];
  }
  local_58 = puStack_88;
  puVar6 = local_58;
  local_50 = (uint)local_80;
  local_4c = local_80._4_4_;
  local_68 = local_98;
  local_60 = local_90;
  local_58._4_4_ = (int)((ulonglong)puStack_88 >> 0x20);
  iVar5 = local_58._4_4_;
  local_70 = plVar9;
  if ((local_58._4_4_ != iVar8) || (local_58 = puVar6, local_90 != plVar1)) {
    do {
      local_58 = puVar6;
      local_f8 = (longlong *)*local_70;
      local_100 = (undefined8 *)((longlong)iVar5 * 0x40);
      FUN_144a7660c((undefined1 *)((longlong)local_f8 + (longlong)local_100),&local_c4,1);
      local_d0 = local_c4;
      local_c8 = local_bc;
      FUN_1448075d0(&local_98);
      bVar4 = true;
      if ((DAT_14cb86df8 != 0) &&
         ((lVar7 = FUN_144837462(DAT_14cb86df8,&local_98), lVar7 != 0 &&
          (*(char *)(lVar7 + 0x58) != '\0')))) {
        bVar4 = false;
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      local_f8 = (longlong *)((longlong)local_100 + (longlong)local_f8 + 0x28);
      if (bVar4) {
        local_98 = &local_c4;
        local_90 = local_f8;
        FUN_14884d642(param_1 + 0x6c,&local_b8);
      }
      else {
        puStack_b0 = (undefined8 *)CONCAT44(puStack_b0._4_4_,DAT_14cb7d0a0);
        local_b8 = DAT_14cb7d098;
        FUN_1448075d0(&local_98);
        local_f8 = (longlong *)FUN_144a06846(local_f8,&local_98);
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        pbVar3 = (byte *)*local_f8;
        local_100 = &DAT_14c9a1288;
        if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 2) != 0)) {
          local_100 = (undefined8 *)(*(longlong *)(pbVar3 + 8) + 0x18);
        }
        local_e8 = local_100 + 3;
        local_b8 = (longlong *)&DAT_100000000;
        local_a8 = 0xffffffff;
        uStack_a0 = 0;
        puStack_b0 = local_e8;
        if (*(int *)(local_100 + 6) == 0) {
          local_ec = 0;
        }
        else {
          FUN_1449c0562(&local_b8);
          local_ec = *(int *)(local_100 + 6);
        }
        uStack_78 = CONCAT44(uStack_9c,uStack_a0);
        local_80 = local_a8;
        lVar7 = local_80;
        local_90 = local_b8;
        puStack_88 = puStack_b0;
        local_98 = local_100;
        local_80._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
        iVar5 = local_80._4_4_;
        if ((local_80._4_4_ != local_ec) || (local_80 = lVar7, puStack_b0 != local_e8)) {
          do {
            local_80 = lVar7;
            local_f8 = (longlong *)*local_98;
            FUN_144a7660c(local_f8 + (longlong)iVar5 * 8,&local_b8,1);
            local_d8 = puStack_b0._0_4_;
            local_e0 = local_b8;
            FUN_14104297e(param_1,local_f8 + (longlong)iVar5 * 8 + 5,&local_e0,&local_c4);
            local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
            FUN_1449c0562(&local_90);
            iVar5 = local_80._4_4_;
            lVar7 = local_80;
          } while (local_98 != local_100 || (puStack_88 != local_e8 || local_80._4_4_ != local_ec));
        }
      }
      local_58 = (undefined8 *)CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
      FUN_1449c0562(&local_68);
      iVar5 = local_58._4_4_;
      puVar6 = local_58;
    } while (((local_58._4_4_ != iVar8) || (local_60 != plVar1)) || (local_70 != plVar9));
  }
  *(undefined1 *)((longlong)param_1 + 0x152) = 1;
  *(undefined1 *)((longlong)param_1 + 0x153) = uVar2;
  FUN_141042ee2(param_1);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14654e124 FUN_14654e124 body=100 status=ok
// SIG undefined FUN_14654e124(void)

void FUN_14654e124(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x2b0))();
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_140d17acc(lVar1,param_2 + 0x1c);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014654e17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x80))
                  (plVar2,*(undefined4 *)(param_1 + 0x100),param_4,*(code **)(*plVar2 + 0x80));
        return;
      }
    }
  }
  return;
}



// FUNCTION 14654e188 FUN_14654e188 body=201 status=ok
// SIG undefined FUN_14654e188(void)

undefined8 * FUN_14654e188(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_1409e1656();
  *param_1 = &PTR_FUN_14b3fe750;
  uVar1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_2);
  param_1[6] = 0;
  param_1[7] = param_3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xbf800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0xbf800000;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x92) = 2;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (param_2 != 0) {
    uVar1 = FUN_14034eff0(param_2);
  }
  FUN_14485c47a(param_1 + 6,uVar1);
  return param_1;
}



// FUNCTION 14654e252 FUN_14654e252 body=53 status=ok
// SIG undefined FUN_14654e252(void)

void FUN_14654e252(longlong *param_1)

{
  FUN_1412f52be();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14654e288 FUN_14654e288 body=53 status=ok
// SIG undefined FUN_14654e288(void)

void FUN_14654e288(longlong *param_1)

{
  FUN_1412f5142();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14654e2be FUN_14654e2be body=53 status=ok
// SIG undefined FUN_14654e2be(void)

void FUN_14654e2be(longlong *param_1)

{
  FUN_14126e0ae();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14654e2f4 FUN_14654e2f4 body=29 status=ok
// SIG undefined FUN_14654e2f4(void)

undefined8 FUN_14654e2f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654e312 FUN_14654e312 body=29 status=ok
// SIG undefined FUN_14654e312(void)

bool FUN_14654e312(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14654e330 FUN_14654e330 body=26 status=ok
// SIG undefined FUN_14654e330(void)

bool FUN_14654e330(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14654e34a FUN_14654e34a body=24 status=ok
// SIG undefined FUN_14654e34a(void)

bool FUN_14654e34a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14654e362 FUN_14654e362 body=48 status=ok
// SIG undefined FUN_14654e362(void)

void FUN_14654e362(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14654e392 FUN_14654e392 body=29 status=ok
// SIG undefined FUN_14654e392(void)

undefined8 FUN_14654e392(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654e3b0 FUN_14654e3b0 body=67 status=ok
// SIG undefined FUN_14654e3b0(void)

void FUN_14654e3b0(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145aec51e(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14113065a(param_1);
    return;
  }
  FUN_14884fed8(param_1);
  FUN_145aec51e(param_1,0);
  return;
}



// FUNCTION 14654e3f4 FUN_14654e3f4 body=42 status=ok
// SIG undefined FUN_14654e3f4(void)

void FUN_14654e3f4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14485c47a(param_1 + 0x10);
  FUN_14485c47a(param_1 + 0x18,param_3);
  return;
}



// FUNCTION 14654e41e FUN_14654e41e body=27 status=ok
// SIG undefined FUN_14654e41e(void)

undefined8 FUN_14654e41e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145979a62();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  return uVar2;
}



// FUNCTION 14654e43a FUN_14654e43a body=66 status=ok
// SIG undefined FUN_14654e43a(void)

void FUN_14654e43a(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*param_3 == 0) && (*(longlong **)(param_2 + 0x10) != (longlong *)0x0)) {
    lVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x2b0))();
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_1401499e8(lVar1);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014654e472. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14654e47c FUN_14654e47c body=150 status=ok
// SIG undefined FUN_14654e47c(void)

void FUN_14654e47c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_14485c47a(param_1 + 8);
  FUN_14485c47a(param_1 + 0x10,param_3);
  if (DAT_14cb7bd70 != 0) {
    FUN_144a78877((undefined4)DAT_14cb7bd68,DAT_14cb7bd70);
  }
  uVar1 = FUN_140726908(param_1 + 0x78);
  if (DAT_14cb7bd88 != 0) {
    FUN_144a78877((undefined4)DAT_14cb7bd80,DAT_14cb7bd88);
  }
  FUN_140726d02(uVar1);
  return;
}



// FUNCTION 14654e512 FUN_14654e512 body=970 status=ok
// SIG undefined FUN_14654e512(void)

void FUN_14654e512(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_88;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 1);
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0xe4) = uVar2;
  if ((int)uVar2 == 0) goto LAB_14654e556;
  cVar3 = FUN_144729dda(param_1 + 0x10);
  if (cVar3 == '\0') {
LAB_14654e6ff:
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_14479d2ce(param_1 + 0x10);
    if ((*(longlong *)(lVar8 + 0x30) == 0) ||
       (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x360), lVar8 == 0)) goto LAB_14654e6ff;
    iVar5 = FUN_14490d72a(lVar8);
    if (iVar5 == 3) goto LAB_14654e556;
  }
  lVar8 = FUN_140149a73(lVar8,0);
  if ((lVar8 != 0) && (plVar9 = (longlong *)FUN_1401499e8(lVar8), plVar9 != (longlong *)0x0)) {
    bVar4 = FUN_145a0e3da(param_1);
    *(byte *)(param_1 + 0xe0) = bVar4 ^ 1;
    if ((bVar4 ^ 1) == 0) {
      if (0 < *(int *)(param_1 + 0xd0)) {
        local_100 = param_1 + 200;
        FUN_148854f40(&local_e8);
        local_f8 = 0;
        uStack_f0 = 0;
        if ((longlong)(int)local_e0 == 0) {
          uVar12 = 0;
        }
        else {
          lVar8 = (longlong)(int)local_e0 * 0x50;
          puVar14 = local_e8;
          do {
            FUN_144a659ac(puVar14 + 2,&local_c8,1);
            if (((int)local_c8 == *(int *)(param_1 + 0xe4)) &&
               ((int)local_c0 == *(int *)(param_1 + 0xec))) {
              local_c8 = (longlong *)0x0;
              local_b8 = (longlong *)0x0;
              uStack_70 = 0;
              local_88 = 0;
              uStack_80 = 0;
              uStack_7e = 0;
              uStack_78 = SUB82(puVar14 + 9,0);
              uStack_76 = (undefined6)((ulonglong)(puVar14 + 9) >> 0x10);
              (**(code **)(*plVar9 + 0xb0))(plVar9,puVar14,puVar14 + 7,&local_c8);
              uVar12 = uStack_f0;
              lVar13 = (longlong)(int)uStack_f0;
              uVar7 = (int)uStack_f0 + 1;
              uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
              if (uStack_f0._4_4_ < uVar7) {
                FUN_140f12bd2(&local_f8,uVar12 & 0xffffffff);
              }
              puVar10 = (undefined8 *)(lVar13 * 0x38 + local_f8);
              *(undefined2 *)puVar10 = 0;
              *(undefined8 *)((longlong)puVar10 + 4) = 0;
              puVar10[2] = 0;
              puVar10[3] = 0;
              *(undefined4 *)(puVar10 + 4) = 0;
              puVar10[5] = 0;
              puVar10[6] = 0;
              *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
              *puVar10 = *puVar14;
              FUN_1447715ec(puVar10 + 2,puVar14 + 2);
              if (local_c8 != (longlong *)0x0) {
                plVar11 = local_b8;
                if (local_b8 == (longlong *)0x0) {
                  plVar11 = (longlong *)&local_a8;
                }
                (**(code **)(*plVar11 + 0x10))();
              }
            }
            puVar14 = puVar14 + 10;
            lVar8 = lVar8 + -0x50;
          } while (lVar8 != 0);
          uVar12 = 0;
          if ((longlong)(int)uStack_f0 != 0) {
            lVar13 = (longlong)(int)uStack_f0 * 0x38;
            lVar8 = local_f8;
            do {
              FUN_148853666(local_100,lVar8);
              lVar8 = lVar8 + 0x38;
              lVar13 = lVar13 + -0x38;
            } while (lVar13 != 0);
            uVar12 = uStack_f0 & 0xffffffff;
          }
        }
        FUN_1405d7ab2(local_f8,uVar12);
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
        FUN_14575b7cb(local_e8,(ulonglong)local_e0 & 0xffffffff);
        if (local_e8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      plVar11 = (longlong *)(param_1 + 0x18);
      plVar1 = (longlong *)(param_1 + 0x28);
      local_e8 = (undefined8 *)&DAT_100000000;
      local_d8 = 0xffffffff;
      local_d0 = 0;
      iVar5 = 0;
      local_e0 = plVar1;
      if (*(int *)(param_1 + 0x40) != 0) {
        FUN_1449c0562(&local_e8);
        iVar5 = *(int *)(param_1 + 0x40);
      }
      local_c0 = local_e8;
      local_b8 = local_e0;
      local_b0 = local_d8;
      uVar2 = local_b0;
      local_a8 = local_d0;
      uStack_a4 = local_cc;
      local_b0._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
      iVar6 = local_b0._4_4_;
      local_c8 = plVar11;
      if ((local_b0._4_4_ != iVar5) || (local_b0 = local_d8, local_e0 != plVar1)) {
        do {
          do {
            local_b0 = uVar2;
            local_108 = 1;
            FUN_14885394c(param_1,*local_c8 + (longlong)iVar6 * 0x90 + 0x10,0,plVar9);
            local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0 & ~local_c0._4_4_);
            FUN_1449c0562(&local_c0);
            iVar6 = local_b0._4_4_;
            uVar2 = local_b0;
          } while (local_b0._4_4_ != iVar5);
        } while ((local_b8 != plVar1) || (local_c8 != plVar11));
      }
    }
  }
LAB_14654e556:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14654e8de FUN_14654e8de body=76 status=ok
// SIG undefined FUN_14654e8de(void)

undefined8 FUN_14654e8de(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14585a500(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00014654e91f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14654e92a FUN_14654e92a body=136 status=ok
// SIG undefined FUN_14654e92a(void)

void FUN_14654e92a(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_1 + 0x24);
  fVar2 = *(float *)(param_1 + 0x30);
  if (fVar3 < fVar2) {
    fVar4 = fVar2 - fVar3;
    fVar1 = 0.0;
    if ((fVar4 != 0.0) || (NAN(fVar4))) {
      fVar1 = (*(float *)(param_1 + 200) - fVar3) / fVar4;
    }
    if (fVar2 <= fVar3) {
      fVar3 = 0.0;
    }
    else {
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      if (param_3 <= 0.0) {
        param_3 = 0.0;
      }
      fVar2 = fVar1 - param_2;
      if (fVar1 - param_2 <= param_3) {
        fVar2 = param_3;
      }
      if (1.0 <= fVar2) {
        fVar2 = 1.0;
      }
      param_2 = 0.0;
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      fVar3 = fVar2 * fVar4 + fVar3;
    }
    FUN_1409d461e(param_2,fVar3,1);
    return;
  }
  return;
}



// FUNCTION 14654e9da FUN_14654e9da body=29 status=ok
// SIG undefined FUN_14654e9da(void)

bool FUN_14654e9da(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14654e9f8 FUN_14654e9f8 body=26 status=ok
// SIG undefined FUN_14654e9f8(void)

bool FUN_14654e9f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14654ea12 FUN_14654ea12 body=24 status=ok
// SIG undefined FUN_14654ea12(void)

bool FUN_14654ea12(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14654ea2a FUN_14654ea2a body=147 status=ok
// SIG undefined FUN_14654ea2a(void)

void FUN_14654ea2a(longlong param_1,int param_2)

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



// FUNCTION 14654eabe FUN_14654eabe body=29 status=ok
// SIG undefined FUN_14654eabe(void)

undefined8 FUN_14654eabe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654eadc FUN_14654eadc body=29 status=ok
// SIG undefined FUN_14654eadc(void)

undefined8 FUN_14654eadc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654eafa FUN_14654eafa body=66 status=ok
// SIG undefined FUN_14654eafa(void)

undefined8 * FUN_14654eafa(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b401ca0;
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



// FUNCTION 14654eb3c FUN_14654eb3c body=143 status=ok
// SIG undefined FUN_14654eb3c(void)

void FUN_14654eb3c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14654ebcc FUN_14654ebcc body=85 status=ok
// SIG undefined FUN_14654ebcc(void)

void FUN_14654ebcc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b402380;
  return;
}



// FUNCTION 14654ec22 FUN_14654ec22 body=29 status=ok
// SIG undefined FUN_14654ec22(void)

undefined8 FUN_14654ec22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654ec40 FUN_14654ec40 body=336 status=ok
// SIG undefined FUN_14654ec40(void)

void FUN_14654ec40(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  
  FUN_141245f18();
  uVar1 = *(uint *)(param_1 + 0x38);
  uVar11 = (ulonglong)(int)uVar1;
  if (uVar11 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    plVar6 = (longlong *)FUN_14479d2ce(lVar2);
    bVar12 = true;
    if (plVar6 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 0x180))(plVar6);
      bVar12 = lVar7 != param_2;
    }
    iVar5 = 0;
    uVar10 = 0;
LAB_14654ecb6:
    do {
      iVar4 = (int)uVar10;
      uVar10 = (ulonglong)(iVar4 + 1U);
      if ((int)(iVar4 + 1U) < (int)uVar1) {
        uVar10 = (longlong)iVar4 + 1;
        lVar7 = (longlong)iVar4 * 0x10 + lVar2 + 0x10;
        bVar3 = true;
        do {
          plVar6 = (longlong *)FUN_14479d2ce(lVar7);
          if (plVar6 == (longlong *)0x0) {
            if (bVar12 == false) goto LAB_14654ed38;
          }
          else {
            lVar8 = (**(code **)(*plVar6 + 0x180))(plVar6);
            if ((lVar8 != param_2) != bVar12) goto LAB_14654ed0f;
          }
          uVar10 = uVar10 + 1;
          bVar3 = (longlong)uVar10 < (longlong)uVar11;
          lVar7 = lVar7 + 0x10;
        } while (uVar11 != uVar10);
        uVar10 = (ulonglong)uVar1;
LAB_14654ed0f:
        if (bVar12 != false) {
          bVar12 = false;
          if (!bVar3) break;
          goto LAB_14654ecb6;
        }
      }
      else {
        if (bVar12 != false) break;
        bVar3 = false;
      }
LAB_14654ed38:
      iVar9 = (int)uVar10 - iVar4;
      if (iVar5 != iVar4) {
        memmove((void *)((longlong)iVar5 * 0x10 + lVar2),(void *)((longlong)iVar4 * 0x10 + lVar2),
                (longlong)iVar9 << 4);
      }
      iVar5 = iVar5 + iVar9;
      bVar12 = true;
    } while (bVar3);
    *(int *)(param_1 + 0x38) = iVar5;
  }
  return;
}



// FUNCTION 14654ed90 FUN_14654ed90 body=56 status=ok
// SIG undefined FUN_14654ed90(void)

void FUN_14654ed90(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    cVar1 = FUN_144729dda();
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
      FUN_145e437ec(uVar2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14654edc8 FUN_14654edc8 body=390 status=ok
// SIG undefined FUN_14654edc8(void)

void FUN_14654edc8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0x308) == 0) || (*(longlong *)(param_1 + 0x310) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x310) + 8) < 1)) {
    uVar5 = FUN_1401cb356();
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    puVar3 = local_48;
    local_40 = 3;
    *local_48 = &PTR_LAB_149e02020;
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
    local_48[2] = lVar6;
    *local_48 = &PTR_FUN_14b4035d0;
    local_48[3] = 0;
    FUN_14485c47a(local_48 + 3,param_1);
    puVar3[4] = &LAB_143d4f4d2;
    *(undefined4 *)(puVar3 + 5) = 0;
    local_58 = 0x3dcccccd;
    FUN_1405f67fc(uVar5,&local_38,&local_48,L"UGbxGameInstance.UpdateJunkSystem");
    *(undefined8 *)(param_1 + 0x308) = local_38;
    local_38 = 0;
    plVar2 = *(longlong **)(param_1 + 0x310);
    *(longlong **)(param_1 + 0x310) = local_30;
    local_30 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
    }
    FUN_1449db362(&local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14654ef50 FUN_14654ef50 body=115 status=ok
// SIG undefined FUN_14654ef50(void)

undefined8 FUN_14654ef50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_2 != 0) && (*(char *)(param_1 + 0x540) == '\0')) &&
     (*(longlong *)(param_2 + 0x398) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x398) + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x3b8);
    if (((lVar3 == 0) || (lVar2 = FUN_1400d1928(), lVar2 == 0)) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x3b8);
    }
    if (lVar1 == lVar3) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14654efc4 FUN_14654efc4 body=116 status=ok
// SIG undefined FUN_14654efc4(void)

void FUN_14654efc4(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1461ed868(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148868ddc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14654f03a FUN_14654f03a body=120 status=ok
// SIG undefined FUN_14654f03a(void)

ulonglong FUN_14654f03a(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654f0b4 FUN_14654f0b4 body=265 status=ok
// SIG undefined FUN_14654f0b4(void)

void FUN_14654f0b4(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  longlong local_58;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0xa0))();
  FUN_1405682ba(param_1);
  if ((char)param_1[0x46] == '\x01') {
    uVar4 = FUN_14479d2ce(param_1 + 9);
    lVar5 = FUN_14598d578(uVar4);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x18) != 0)) {
      cVar3 = FUN_144729dda(lVar5 + 0x10);
      if (cVar3 != '\0') {
        uVar4 = FUN_14045cd5e(param_1);
        FUN_140851e80(local_70,uVar4);
        FUN_1470d65b6(lVar5,local_70);
        if (local_28 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_28 + 0x10))();
          }
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
    }
    *(undefined1 *)(param_1 + 0x46) = 0;
  }
  plVar2 = (longlong *)param_1[0x45];
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654f1c4 FUN_14654f1c4 body=27 status=ok
// SIG undefined FUN_14654f1c4(void)

void FUN_14654f1c4(void)

{
  FUN_145bff0ac();
  return;
}



// FUNCTION 14654f1de FUN_14654f1de body=153 status=ok
// SIG undefined FUN_14654f1de(void)

void FUN_14654f1de(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  longlong *local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_3;
  local_28 = param_4;
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    if (param_3 == 0) {
      local_30 = *(longlong *)(param_2 + 0x1c8);
    }
    local_38 = &local_58;
    local_50 = &local_30;
    local_48 = &local_28;
    local_40 = &LAB_143d554fc;
    local_58 = param_2;
    FUN_14056916e(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654f278 FUN_14654f278 body=102 status=ok
// SIG undefined FUN_14654f278(void)

void FUN_14654f278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = &local_10;
  local_38 = &local_18;
  local_20 = &local_40;
  local_28 = &LAB_143d5551e;
  local_40 = param_2;
  local_18 = param_3;
  local_10 = param_4;
  FUN_14056916e();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14654f2df FUN_14654f2df body=93 status=ok
// SIG undefined FUN_14654f2df(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14654f2df(void)

{
  _DAT_14cb7dea0 = 0;
  uRam000000014cb7dea8 = 0;
  _DAT_14cb7de90 = 0;
  uRam000000014cb7de98 = 0;
  _DAT_14cb7de88 = &PTR__purecall_14b403660;
  if (DAT_14cb7df00 == '\0') {
    FUN_14595fdfe(&DAT_14cb7de88);
    DAT_14cb7df00 = '\x01';
  }
  _DAT_14cb7de88 = &PTR_FUN_14b403640;
  atexit((_func_5014 *)&LAB_143d5403c);
  return;
}



// FUNCTION 14654f33c FUN_14654f33c body=93 status=ok
// SIG undefined FUN_14654f33c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14654f33c(void)

{
  _DAT_14cb7dec8 = 0;
  uRam000000014cb7ded0 = 0;
  _DAT_14cb7deb8 = 0;
  uRam000000014cb7dec0 = 0;
  _DAT_14cb7deb0 = &PTR__purecall_14b4036a0;
  if (DAT_14cb7df14 == '\0') {
    FUN_14595fdfe(&DAT_14cb7deb0);
    DAT_14cb7df14 = '\x01';
  }
  _DAT_14cb7deb0 = &PTR_FUN_14b403680;
  atexit((_func_5014 *)&LAB_143d54058);
  return;
}



// FUNCTION 14654f399 FUN_14654f399 body=93 status=ok
// SIG undefined FUN_14654f399(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14654f399(void)

{
  _DAT_14cb7def0 = 0;
  uRam000000014cb7def8 = 0;
  _DAT_14cb7dee0 = 0;
  uRam000000014cb7dee8 = 0;
  _DAT_14cb7ded8 = &PTR__purecall_14b4036f0;
  if (DAT_14cb7df24 == '\0') {
    FUN_14595fdfe(&DAT_14cb7ded8);
    DAT_14cb7df24 = '\x01';
  }
  _DAT_14cb7ded8 = &PTR_FUN_14b4036d0;
  atexit((_func_5014 *)&LAB_143d54074);
  return;
}



// FUNCTION 14654f3f6 FUN_14654f3f6 body=29 status=ok
// SIG undefined FUN_14654f3f6(void)

bool FUN_14654f3f6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14654f414 FUN_14654f414 body=26 status=ok
// SIG undefined FUN_14654f414(void)

bool FUN_14654f414(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14654f42e FUN_14654f42e body=24 status=ok
// SIG undefined FUN_14654f42e(void)

bool FUN_14654f42e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14654f446 FUN_14654f446 body=29 status=ok
// SIG undefined FUN_14654f446(void)

undefined8 FUN_14654f446(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14654f464 FUN_14654f464 body=29 status=ok
// SIG undefined FUN_14654f464(void)

bool FUN_14654f464(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14654f482 FUN_14654f482 body=26 status=ok
// SIG undefined FUN_14654f482(void)

bool FUN_14654f482(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14654f49c FUN_14654f49c body=24 status=ok
// SIG undefined FUN_14654f49c(void)

bool FUN_14654f49c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14654f4b4 FUN_14654f4b4 body=101 status=ok
// SIG undefined FUN_14654f4b4(void)

void FUN_14654f4b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4033a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}


