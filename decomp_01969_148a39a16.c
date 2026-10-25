// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148a39a16 FUN_148a39a16 body=8 status=ok
// SIG undefined FUN_148a39a16(void)

undefined8 FUN_148a39a16(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x3c0);
}



// FUNCTION 148a39a2e FUN_148a39a2e body=106 status=ok
// SIG undefined FUN_148a39a2e(void)

undefined8 FUN_148a39a2e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x3c8);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x58);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      lVar2 = *(longlong *)(param_1 + 0x3c8);
      if (lVar2 == 0) {
        return 0;
      }
    }
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(lVar2 + 0x134) == 1) {
      return 0;
    }
    if ((*(byte *)(lVar1 + 0x309) & 1) == 0) {
      *(byte *)(lVar2 + 0x138) = *(byte *)(lVar2 + 0x138) | 1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 148a39a98 FUN_148a39a98 body=161 status=ok
// SIG undefined FUN_148a39a98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_148a39a98(longlong param_1)

{
  undefined *puVar1;
  
  if (*(longlong *)(param_1 + 0x3c8) == 0) {
    puVar1 = &DAT_14cb95a40;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb95a70) {
      FUN_144b3d300(&DAT_14cb95a70);
      if (DAT_14cb95a70 == -1) {
        _DAT_14cb95a48 = 0;
        uRam000000014cb95a50 = 0;
        DAT_14cb95a58 = 0;
        _DAT_14cb95a40 = &PTR_FUN_14a5af930;
        DAT_14cb95a60 = 0;
        uRam000000014cb95a68 = 0;
        atexit(FUN_143ed4307);
        _Init_thread_footer(&DAT_14cb95a70);
      }
    }
  }
  else {
    puVar1 = (undefined *)(*(longlong *)(param_1 + 0x3c8) + 0x160);
  }
  return puVar1;
}



// FUNCTION 148a39b3a FUN_148a39b3a body=328 status=ok
// SIG undefined FUN_148a39b3a(void)

undefined8 FUN_148a39b3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_d8 [40];
  undefined2 *local_b0;
  int local_a8;
  longlong local_a0;
  int local_98;
  undefined **local_90 [3];
  byte local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = FUN_14127b0d4(param_3);
  FUN_140b6e6be(local_90,uVar1);
  local_90[0] = &PTR_FUN_14a5af930;
  local_70 = 0;
  uStack_68 = 0;
  FUN_148a39c84(param_1,&local_a0,local_90);
  local_90[0] = &PTR_FUN_14a5af930;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_90[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_78])();
  FUN_140245d8a(local_90,0,&DAT_149dfb77a,0);
  if (1 < local_98) {
    FUN_140002266(&local_b0,L"AuthTicket=%s",local_a0);
    puVar2 = &DAT_149dfb77a;
    if (local_a8 != 0) {
      puVar2 = local_b0;
    }
    FUN_141556918(local_90,puVar2);
    if (local_b0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_141641396(local_90,param_2,0);
  FUN_141238aee(local_90);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a39c84 FUN_148a39c84 body=382 status=ok
// SIG undefined FUN_148a39c84(void)

undefined8 * FUN_148a39c84(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1447210f0();
  local_58 = (longlong *)0x0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_48);
    if (local_48 != (longlong *)0x0) {
      if ((&DAT_149fc1b6e)[*(byte *)(param_3 + 0x18)] == '\x01') {
        if ((*(longlong **)(param_3 + 8) == (longlong *)0x0) ||
           (cVar3 = (**(code **)(**(longlong **)(param_3 + 8) + 0x28))(), cVar3 == '\0'))
        goto LAB_148a39d13;
      }
      else if ((*(uint *)(param_3 + 8) & 0xffffff) == 0) goto LAB_148a39d13;
      plVar4 = local_48;
      uVar5 = FUN_14127b0d4(param_3);
      (**(code **)(*plVar4 + 0x100))(plVar4,&local_58,uVar5);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x30))(local_58,&local_68);
        puVar6 = local_68;
        if (local_60 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        FUN_14020fad6(param_2,puVar6);
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
  }
LAB_148a39d13:
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
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148a39e10 FUN_148a39e10 body=108 status=ok
// SIG undefined FUN_148a39e10(void)

void FUN_148a39e10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x7a) = 1;
  (**(code **)(*param_1 + 0x400))(param_1,0);
  lVar2 = FUN_1447210f0(param_1);
  if (lVar2 != 0) {
    uVar3 = FUN_1401b4c98(param_1);
    plVar1 = param_1 + 0x7d;
    lVar2 = FUN_144a61814(uVar3,plVar1);
    if (lVar2 != 0) {
      FUN_1405a424c(uVar3,*plVar1);
    }
    *plVar1 = 0;
  }
  FUN_143ed4136(param_1);
  return;
}



// FUNCTION 148a39e7c FUN_148a39e7c body=68 status=ok
// SIG undefined FUN_148a39e7c(void)

void FUN_148a39e7c(longlong param_1)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_1 + 0x3d0) = 1;
  plVar1 = *(longlong **)(param_1 + 0x3c0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x650))(plVar1,param_1);
  }
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  FUN_140aeefbc(param_1,1,1);
  return;
}



// FUNCTION 148a39ec0 FUN_148a39ec0 body=245 status=ok
// SIG undefined FUN_148a39ec0(void)

void FUN_148a39ec0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_198 [44];
  undefined1 local_16c [11];
  undefined1 local_161;
  longlong local_160;
  ulonglong *local_158;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_160,lVar2,0);
    local_161 = 0x1a;
    puVar1 = (undefined1 *)*local_158 + 1;
    if ((undefined1 *)local_158[1] < puVar1) {
      (**(code **)(local_160 + 0x170))(&local_160,&local_161,1);
    }
    else {
      local_161 = *(undefined1 *)*local_158;
      *local_158 = (ulonglong)puVar1;
    }
    FUN_14021219d(&local_160,param_2);
    FUN_146214c9d(&local_160,param_3);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_16c,&local_160,1);
    FUN_1449daebe(&local_160);
  }
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a39fb6 FUN_148a39fb6 body=227 status=ok
// SIG undefined FUN_148a39fb6(void)

void FUN_148a39fb6(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  longlong local_158;
  ulonglong *local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_158,lVar2,0);
    local_159 = 0x1c;
    puVar1 = (undefined1 *)*local_150 + 1;
    if ((undefined1 *)local_150[1] < puVar1) {
      (**(code **)(local_158 + 0x170))(&local_158,&local_159,1);
    }
    else {
      local_159 = *(undefined1 *)*local_150;
      *local_150 = (ulonglong)puVar1;
    }
    FUN_14021219d(&local_158,param_2);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_164,&local_158,1);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3a09a FUN_148a3a09a body=173 status=ok
// SIG undefined FUN_148a3a09a(void)

longlong * FUN_148a3a09a(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14a1c8830;
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
  puVar3[2] = lVar5;
  *puVar3 = &PTR_FUN_14b4c2f60;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  return param_1;
}



// FUNCTION 148a3a16a FUN_148a3a16a body=260 status=ok
// SIG undefined FUN_148a3a16a(void)

longlong FUN_148a3a16a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (*(int *)(param_1 + 0x1c0) < 1) {
    return 0;
  }
  lVar9 = 0;
LAB_148a3a192:
  lVar2 = *(longlong *)(param_1 + 0x1b8);
  if (*(longlong *)(lVar2 + lVar9 * 8) != 0) {
    lVar4 = FUN_1458994d2();
    lVar2 = *(longlong *)(lVar2 + lVar9 * 8);
    if ((((lVar2 != 0) && (lVar4 != 0)) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      iVar1 = *(int *)(lVar2 + 0x398);
      if (iVar1 == (int)param_2[1]) {
        if (iVar1 < 2) {
          return lVar2;
        }
        lVar4 = 0;
        do {
          uVar5 = *(ushort *)(*(longlong *)(lVar2 + 0x390) + lVar4);
          uVar6 = (ulonglong)uVar5;
          uVar7 = *(ushort *)(*param_2 + lVar4);
          if (uVar5 == uVar7) {
            if (uVar5 == 0) {
              return lVar2;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar5)) goto LAB_148a3a260;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar8 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
            if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar8]) goto LAB_148a3a260;
          }
          lVar4 = lVar4 + 2;
        } while( true );
      }
      if ((int)param_2[1] + iVar1 == 1) {
        return lVar2;
      }
    }
  }
  goto LAB_148a3a1a0;
LAB_148a3a260:
  if (uVar5 == uVar7) {
    return lVar2;
  }
LAB_148a3a1a0:
  lVar9 = lVar9 + 1;
  if (*(int *)(param_1 + 0x1c0) <= lVar9) {
    return 0;
  }
  goto LAB_148a3a192;
}



// FUNCTION 148a3a26e FUN_148a3a26e body=74 status=ok
// SIG undefined FUN_148a3a26e(void)

void FUN_148a3a26e(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((param_2 != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xf0) == 0)) {
    cVar1 = FUN_143ed5dfa(param_1 + -0x390);
    if (cVar1 == '\0') {
      FUN_143ed949c(param_1 + -0x390,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148a3a2b8 FUN_148a3a2b8 body=65 status=ok
// SIG undefined FUN_148a3a2b8(void)

void FUN_148a3a2b8(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1401b4c98(*param_1);
  param_1 = param_1 + 1;
  lVar2 = FUN_144a61814(uVar1,param_1);
  if (lVar2 != 0) {
    FUN_1405a424c(uVar1,*param_1);
  }
  *param_1 = 0;
  return;
}



// FUNCTION 148a3a2fa FUN_148a3a2fa body=224 status=ok
// SIG undefined FUN_148a3a2fa(void)

void FUN_148a3a2fa(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  longlong local_158;
  ulonglong *local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_158,lVar2,0);
    local_159 = 2;
    puVar1 = (undefined1 *)*local_150 + 1;
    if ((undefined1 *)local_150[1] < puVar1) {
      (**(code **)(local_158 + 0x170))(&local_158,&local_159,1);
    }
    else {
      local_159 = *(undefined1 *)*local_150;
      *local_150 = (ulonglong)puVar1;
    }
    FUN_148a4628c(&local_158,param_2);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_164,&local_158,1);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3a3dc FUN_148a3a3dc body=187 status=ok
// SIG undefined FUN_148a3a3dc(void)

longlong *
FUN_148a3a3dc(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14aa1dbd0;
  puVar3[1] = *param_4;
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
  puVar3[2] = lVar5;
  *puVar3 = &PTR_FUN_14b4c2fd0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  return param_1;
}



// FUNCTION 148a3a498 FUN_148a3a498 body=231 status=ok
// SIG undefined FUN_148a3a498(void)

void FUN_148a3a498(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  longlong local_158;
  ulonglong *local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_158,lVar2,0);
    local_159 = 0x1b;
    puVar1 = (undefined1 *)*local_150 + 1;
    if ((undefined1 *)local_150[1] < puVar1) {
      (**(code **)(local_158 + 0x170))(&local_158,&local_159,1);
    }
    else {
      local_159 = *(undefined1 *)*local_150;
      *local_150 = (ulonglong)puVar1;
    }
    (**(code **)(local_158 + 400))(&local_158,param_2);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_164,&local_158,1);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3a580 FUN_148a3a580 body=107 status=ok
// SIG undefined FUN_148a3a580(void)

undefined8 FUN_148a3a580(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x428);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x420) + lVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar1 + 0x498))();
        if (lVar3 == param_2) {
          return *(undefined8 *)(*(longlong *)(param_1 + 0x420) + lVar4 * 8);
        }
        iVar2 = *(int *)(param_1 + 0x428);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  return 0;
}



// FUNCTION 148a3a5ec FUN_148a3a5ec body=136 status=ok
// SIG undefined FUN_148a3a5ec(void)

void FUN_148a3a5ec(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_20 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    FUN_148a3a676(param_1 + 0x420,&local_20,1);
    if (((*(byte *)(param_2 + 0x65) & 2) == 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
      FUN_140aeefbc(param_2,0,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3a676 FUN_148a3a676 body=243 status=ok
// SIG undefined FUN_148a3a676(void)

undefined8 FUN_148a3a676(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    iVar7 = 1;
    lVar6 = 0;
    lVar9 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar1 + lVar6) == lVar2) {
        if (iVar7 == 0) {
          return 0;
        }
        iVar5 = (int)param_1[1];
        iVar7 = iVar5 - iVar7;
        if (iVar7 != 0) {
          iVar8 = 1;
          if (iVar7 < 1) {
            iVar8 = iVar7;
          }
          memmove((void *)(*param_1 + (lVar9 >> 0x20) * 8),
                  (void *)(*param_1 + (longlong)(iVar5 - iVar8) * 8),(longlong)iVar8 << 3);
          iVar5 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar5 + -1;
        if (param_3 == '\x01') {
          FUN_148a46792(param_1);
          return 1;
        }
        return 1;
      }
      lVar9 = lVar9 + 0x100000000;
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
  }
  return 0;
}



// FUNCTION 148a3a772 FUN_148a3a772 body=203 status=ok
// SIG undefined FUN_148a3a772(void)

void FUN_148a3a772(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_188 [44];
  undefined1 local_15c [11];
  undefined1 local_151;
  longlong local_150;
  ulonglong *local_148;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_150,lVar2,0);
    local_151 = 0x19;
    puVar1 = (undefined1 *)*local_148 + 1;
    if ((undefined1 *)local_148[1] < puVar1) {
      (**(code **)(local_150 + 0x170))(&local_150,&local_151,1);
    }
    else {
      local_151 = *(undefined1 *)*local_148;
      *local_148 = (ulonglong)puVar1;
    }
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_15c,&local_150,1);
    FUN_1449daebe(&local_150);
  }
  if ((local_18 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3a83e FUN_148a3a83e body=271 status=ok
// SIG undefined FUN_148a3a83e(void)

longlong FUN_148a3a83e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar6 = (longlong *)(param_1 + 0x430);
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar5 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar5;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_148a46574(plVar6,uVar1,param_2);
  if (iVar2 != -1) {
    if (*plVar6 + (longlong)iVar2 * 0x28 != 0) {
      lVar7 = *plVar6 + (longlong)iVar2 * 0x28 + 0x10;
      goto LAB_148a3a8ad;
    }
  }
  local_30 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_38 = param_2;
  FUN_148a46d6a(plVar6,local_24);
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar5;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_148a46574(plVar6,uVar1,param_2);
  if (iVar2 != -1) {
    uVar5 = (longlong)iVar2 * 0x28 + *plVar6;
  }
  lVar7 = uVar5 + 0x10;
  if (uVar5 == 0) {
    lVar7 = 0;
  }
  FUN_1449db362(&local_48);
LAB_148a3a8ad:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3a95c FUN_148a3a95c body=271 status=ok
// SIG undefined FUN_148a3a95c(void)

longlong FUN_148a3a95c(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar6 = (longlong *)(param_1 + 0x480);
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar5 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar5;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_148a466c6(plVar6,uVar1,param_2);
  if (iVar2 != -1) {
    if (*plVar6 + (longlong)iVar2 * 0x28 != 0) {
      lVar7 = *plVar6 + (longlong)iVar2 * 0x28 + 0x10;
      goto LAB_148a3a9cb;
    }
  }
  local_30 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_38 = param_2;
  FUN_148a47360(plVar6,local_24);
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar5;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_148a466c6(plVar6,uVar1,param_2);
  if (iVar2 != -1) {
    uVar5 = (longlong)iVar2 * 0x28 + *plVar6;
  }
  lVar7 = uVar5 + 0x10;
  if (uVar5 == 0) {
    lVar7 = 0;
  }
  FUN_1449db362(&local_48);
LAB_148a3a9cb:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3aa7a FUN_148a3aa7a body=177 status=ok
// SIG undefined FUN_148a3aa7a(void)

void FUN_148a3aa7a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_148a3a16a();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x658))(plVar2);
  }
  plVar2 = (longlong *)FUN_148a3a83e(param_1,param_2);
  puVar1 = (undefined8 *)*plVar2;
  if (puVar1 != (undefined8 *)0x0 && (int)plVar2[1] != 0) {
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(plVar2 + 1) = 0;
  }
  plVar2 = (longlong *)FUN_148a3a95c(param_1,param_2);
  puVar1 = (undefined8 *)*plVar2;
  if (puVar1 != (undefined8 *)0x0 && (int)plVar2[1] != 0) {
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(plVar2 + 1) = 0;
  }
  return;
}



// FUNCTION 148a3ab30 FUN_148a3ab30 body=74 status=ok
// SIG undefined FUN_148a3ab30(void)

void FUN_148a3ab30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    lVar2 = FUN_1459f164e();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      FUN_143ed9ab2(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148a3ab7a FUN_148a3ab7a body=90 status=ok
// SIG undefined FUN_148a3ab7a(void)

void FUN_148a3ab7a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[0x76];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_1[0x75];
    lVar3 = 0;
    do {
      (**(code **)(*param_1 + 0x648))(param_1,*(undefined8 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000148a3abd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x440))(param_1,0);
  return;
}



// FUNCTION 148a3abd4 FUN_148a3abd4 body=30 status=ok
// SIG undefined FUN_148a3abd4(void)

void FUN_148a3abd4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x168) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x170);
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 148a3abf2 FUN_148a3abf2 body=72 status=ok
// SIG undefined FUN_148a3abf2(void)

undefined4 FUN_148a3abf2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  uVar3 = 1;
  if (lVar1 != 0) {
    lVar2 = FUN_1459f164e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = *(undefined4 *)(lVar1 + 0x3a8);
    }
  }
  return uVar3;
}



// FUNCTION 148a3ac46 FUN_148a3ac46 body=60 status=ok
// SIG undefined FUN_148a3ac46(void)

undefined8 * FUN_148a3ac46(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_141400982();
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3,0);
  }
  return param_2;
}



// FUNCTION 148a3ac82 FUN_148a3ac82 body=59 status=ok
// SIG undefined FUN_148a3ac82(void)

void FUN_148a3ac82(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1489b8d96();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3acbe FUN_148a3acbe body=122 status=ok
// SIG undefined FUN_148a3acbe(void)

void FUN_148a3acbe(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 400);
  local_20 = param_2;
  if (plVar1 != (longlong *)0x0) {
    FUN_143eda1a6(&local_28);
    (**(code **)(*plVar1 + 0x2b8))(plVar1,local_28);
  }
  plVar1 = (longlong *)FUN_1401e3228(&local_20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x150))(plVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3ad3a FUN_148a3ad3a body=105 status=ok
// SIG undefined FUN_148a3ad3a(void)

void FUN_148a3ad3a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 400);
  if (plVar1 != (longlong *)0x0) {
    FUN_143eda1a6(&local_28,param_2);
    (**(code **)(*plVar1 + 0x2c0))(plVar1,local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_148a3ada4(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3ada4 FUN_148a3ada4 body=147 status=ok
// SIG undefined FUN_148a3ada4(void)

void FUN_148a3ada4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb95d3c) {
    FUN_144b3d300(&DAT_14cb95d3c);
    if (DAT_14cb95d3c == -1) {
      FUN_1446f470e(&DAT_14cb95d34,L"OnlineSubsystem",1);
      _Init_thread_footer(&DAT_14cb95d3c);
    }
  }
  uVar1 = DAT_14cb95d34;
  uVar2 = FUN_144a52528();
  plVar3 = (longlong *)FUN_1401e3324(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000148a3adf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x68))(plVar3,param_1,*(code **)(*plVar3 + 0x68));
  return;
}



// FUNCTION 148a3ae38 FUN_148a3ae38 body=381 status=ok
// SIG undefined FUN_148a3ae38(void)

undefined8 *
FUN_148a3ae38(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140b6e8c2(param_4,&local_40);
  local_28 = local_40;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
    plVar4 = local_38;
    if (local_38 != (longlong *)0x0) {
      uVar5 = FUN_14127b0d4(param_4);
      (**(code **)(*plVar4 + 0x140))(plVar4,param_2,uVar5);
      goto LAB_148a3af1b;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb95c20) {
    FUN_144b3d300(&DAT_14cb95c20);
    if (DAT_14cb95c20 == -1) {
      FUN_140056680(&DAT_14cb95c10,L"InvalidOSSUser");
      atexit((_func_5014 *)&LAB_143eda3c2);
      _Init_thread_footer(&DAT_14cb95c20);
    }
  }
  *param_2 = 0;
  iVar3 = DAT_14cb95c18;
  _Src = DAT_14cb95c10;
  lVar6 = (longlong)DAT_14cb95c18;
  *(int *)(param_2 + 1) = DAT_14cb95c18;
  if (lVar6 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar3,0);
    memcpy((void *)*param_2,_Src,lVar6 * 2);
  }
LAB_148a3af1b:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3afb6 FUN_148a3afb6 body=321 status=ok
// SIG undefined FUN_148a3afb6(void)

undefined8 FUN_148a3afb6(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_48);
    if (local_48 != (longlong *)0x0) {
      plVar4 = (longlong *)FUN_141400982();
      if (plVar4 == (longlong *)0x0) {
        local_50 = 0;
      }
      else {
        (**(code **)(*plVar4 + 8))(plVar4,&local_50,param_2,0);
      }
      plVar4 = local_48;
      FUN_148a3b0f8(local_68,param_1,&local_50,param_4);
      (**(code **)(*plVar4 + 0x90))(plVar4,&local_58,param_3 & 0xffffffff,local_68);
      *(undefined8 *)(param_1 + 0x90) = local_58;
      FUN_1449db362(local_68);
      cVar3 = (**(code **)(*local_48 + 0xf8))(local_48,param_3 & 0xffffffff);
      uVar5 = CONCAT71((uint7)(param_3 >> 8) & 0xffffff,1);
      if (cVar3 != '\0') goto LAB_148a3b00f;
    }
  }
  uVar5 = 0;
LAB_148a3b00f:
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
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148a3b0f8 FUN_148a3b0f8 body=204 status=ok
// SIG undefined FUN_148a3b0f8(void)

longlong *
FUN_148a3b0f8(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14b4c32e0;
  puVar1[1] = *param_3;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  FUN_148a483b8(puVar1 + 2,param_4);
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
  puVar1[4] = lVar3;
  *puVar1 = &PTR_FUN_14b4c3270;
  puVar1[5] = 0;
  FUN_14485c47a(puVar1 + 5,param_2);
  puVar1[6] = FUN_148a3b1c4;
  return param_1;
}



// FUNCTION 148a3b1c4 FUN_148a3b1c4 body=246 status=ok
// SIG undefined FUN_148a3b1c4(void)

void FUN_148a3b1c4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_6;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_48);
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x98))(local_48,param_2,param_1 + 0x90);
    }
  }
  if (((int)param_7[1] != 0) && (plVar3 = (longlong *)*param_7, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3,param_5);
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
  FUN_1449db362(param_7);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3b2bc FUN_148a3b2bc body=175 status=ok
// SIG undefined FUN_148a3b2bc(void)

undefined8 FUN_148a3b2bc(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
    if (local_38 != (longlong *)0x0) {
      iVar3 = (**(code **)(*local_38 + 0x138))(local_38,param_3 & 0xffffffff);
      uVar5 = CONCAT71((int7)((param_3 & 0xffffffff) >> 8),iVar3 == 2);
      goto LAB_148a3b325;
    }
  }
  uVar5 = 0;
LAB_148a3b325:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3b36c FUN_148a3b36c body=219 status=ok
// SIG undefined FUN_148a3b36c(void)

longlong *
FUN_148a3b36c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14b4c33c0;
  puVar1[1] = *param_4;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  FUN_1413d6220(puVar1 + 2,param_5);
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
  puVar1[4] = lVar3;
  *puVar1 = &PTR_FUN_14b4c3350;
  puVar1[5] = 0;
  FUN_14485c47a(puVar1 + 5,param_2);
  puVar1[6] = param_3;
  return param_1;
}



// FUNCTION 148a3b448 FUN_148a3b448 body=400 status=ok
// SIG undefined FUN_148a3b448(void)

void FUN_148a3b448(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *plStack_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_4;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    if ((local_58 != (longlong *)0x0) && (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc))) {
      uVar3 = (uint)((ulonglong)param_4 >> 0x10);
      uVar6 = (uint)param_4 & 0xffff;
      lVar5 = param_1 + 0xd0;
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        lVar5 = *(longlong *)(param_1 + 0xd8);
      }
      iVar7 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_1 + 0xe0) - 1U &
                               (int)((ulonglong)param_4 >> 0x20) + ((uint)param_4 << 0x10 | uVar6) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar7 != -1) {
        do {
          plVar4 = (longlong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar7 * 0x18);
          if (*plVar4 == param_4) {
            if (plVar4 != (longlong *)&DAT_fffffffffffffff8 && plVar4 != (longlong *)0x0) {
              (**(code **)(*local_58 + 0x80))();
            }
            break;
          }
          iVar7 = (int)plVar4[2];
        } while (iVar7 != -1);
      }
    }
  }
  if (((int)param_5[1] != 0) && (plVar4 = (longlong *)*param_5, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x60))(plVar4,param_2,param_3);
  }
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_1449db362(param_5);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a3b5da FUN_148a3b5da body=378 status=ok
// SIG undefined FUN_148a3b5da(void)

void FUN_148a3b5da(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined1 local_78 [8];
  undefined8 local_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = (undefined8 *)0x0;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    plStack_60 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_68);
    if (local_68 != (longlong *)0x0) {
      plVar3 = (longlong *)FUN_141400982();
      if (plVar3 == (longlong *)0x0) {
        local_70 = 0;
      }
      else {
        (**(code **)(*plVar3 + 8))(plVar3,&local_70,param_2,0);
      }
      plVar3 = local_68;
      local_88 = param_4;
      FUN_148a3b36c(&local_50,param_1,FUN_148a3b756,&local_70);
      (**(code **)(*plVar3 + 200))(plVar3,local_78,&local_50);
      FUN_1449db362(&local_50);
      local_50 = &local_70;
      local_48 = local_78;
      FUN_1413f0b32(param_1 + 0xe8,local_3c,&local_50,0);
      (**(code **)(*local_68 + 0xc0))(local_68,param_3);
      goto LAB_148a3b654;
    }
  }
  plVar3 = (longlong *)*param_4;
  if (plVar3 != (longlong *)0x0 && (int)param_4[1] != 0) {
    (**(code **)(*plVar3 + 0x60))(plVar3,param_3,0);
  }
LAB_148a3b654:
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3b756 FUN_148a3b756 body=400 status=ok
// SIG undefined FUN_148a3b756(void)

void FUN_148a3b756(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *plStack_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_4;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    if ((local_58 != (longlong *)0x0) && (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c))) {
      uVar3 = (uint)((ulonglong)param_4 >> 0x10);
      uVar6 = (uint)param_4 & 0xffff;
      lVar5 = param_1 + 0x120;
      if (*(longlong *)(param_1 + 0x128) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x128);
      }
      iVar7 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_1 + 0x130) - 1U &
                               (int)((ulonglong)param_4 >> 0x20) + ((uint)param_4 << 0x10 | uVar6) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar7 != -1) {
        do {
          plVar4 = (longlong *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar7 * 0x18);
          if (*plVar4 == param_4) {
            if (plVar4 != (longlong *)&DAT_fffffffffffffff8 && plVar4 != (longlong *)0x0) {
              (**(code **)(*local_58 + 0xd0))();
            }
            break;
          }
          iVar7 = (int)plVar4[2];
        } while (iVar7 != -1);
      }
    }
  }
  if (((int)param_5[1] != 0) && (plVar4 = (longlong *)*param_5, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x60))(plVar4,param_2,param_3);
  }
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_1449db362(param_5);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a3b8e8 FUN_148a3b8e8 body=206 status=ok
// SIG undefined FUN_148a3b8e8(void)

ulonglong FUN_148a3b8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4
                       )

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      lVar4 = (**(code **)(*local_38 + 0x380))(local_38,param_3);
      if (lVar4 != 0) {
        *param_4 = param_3;
        *(undefined1 *)(param_4 + 1) = *(undefined1 *)(lVar4 + 0x10);
        *(undefined1 *)((longlong)param_4 + 9) = *(undefined1 *)(lVar4 + 0x15);
        *(undefined1 *)((longlong)param_4 + 10) = *(undefined1 *)(lVar4 + 0x17);
        *(undefined1 *)((longlong)param_4 + 0xb) = *(undefined1 *)(lVar4 + 0x18);
        uVar5 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
        goto LAB_148a3b96f;
      }
    }
  }
  uVar5 = 0;
LAB_148a3b96f:
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3b9b8 FUN_148a3b9b8 body=241 status=ok
// SIG undefined FUN_148a3b9b8(void)

void FUN_148a3b9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,byte param_6,byte param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      lVar4 = (**(code **)(*local_38 + 0x380))(local_38,param_3);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x10) = param_4;
        *(undefined1 *)(lVar4 + 0x15) = param_5;
        *(byte *)(lVar4 + 0x17) = ~param_7 & param_6;
        *(byte *)(lVar4 + 0x18) = param_7;
        (**(code **)(*local_38 + 0x98))(local_38,param_3,lVar4,1);
      }
    }
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3baaa FUN_148a3baaa body=449 status=ok
// SIG undefined FUN_148a3baaa(void)

void FUN_148a3baaa(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  plVar6 = (longlong *)FUN_1401e3228();
  if (plVar6 == (longlong *)0x0) {
    local_78 = (longlong *)0x0;
    plStack_70 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_78);
    if (local_78 != (longlong *)0x0) {
      local_88 = 0;
      uStack_80 = 0;
      if ((longlong)(int)param_4[1] != 0) {
        lVar7 = *param_4;
        lVar9 = (longlong)(int)param_4[1] << 5;
        do {
          FUN_1408e4d18(lVar7,&local_98);
          uVar4 = uStack_80;
          plVar6 = plStack_90;
          uVar3 = local_98;
          local_98 = 0;
          plStack_90 = (longlong *)0x0;
          lVar8 = (longlong)(int)uStack_80;
          uVar5 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
          if (uStack_80._4_4_ < uVar5) {
            FUN_1413eac7e(&local_88,uVar4 & 0xffffffff);
          }
          *(undefined8 *)(local_88 + lVar8 * 0x10) = uVar3;
          *(longlong **)(local_88 + 8 + lVar8 * 0x10) = plVar6;
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
          }
          plVar6 = plStack_90;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_90 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_90)(plStack_90);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          lVar7 = lVar7 + 0x20;
          lVar9 = lVar9 + -0x20;
        } while (lVar9 != 0);
      }
      (**(code **)(*local_78 + 0x3c8))(local_78,param_3,&local_88);
      FUN_14127b1cd(local_88,uStack_80 & 0xffffffff);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
    }
  }
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a3bc6c FUN_148a3bc6c body=219 status=ok
// SIG undefined FUN_148a3bc6c(void)

ulonglong FUN_148a3bc6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    plVar4 = local_38;
    if (local_38 != (longlong *)0x0) {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      cVar3 = (**(code **)(*plVar4 + 0x378))(plVar4,param_3,param_4,DAT_14c892fc4);
      uVar5 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      if (cVar3 != '\0') goto LAB_148a3bd00;
    }
  }
  uVar5 = 0;
LAB_148a3bd00:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 148a3bd48 FUN_148a3bd48 body=183 status=ok
// SIG undefined FUN_148a3bd48(void)

undefined8 *
FUN_148a3bd48(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(param_1 + 0x88);
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x68))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 200))(local_38,param_2,param_4);
      goto LAB_148a3bdb7;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_148a3bdb7:
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3be00 FUN_148a3be00 body=245 status=ok
// SIG undefined FUN_148a3be00(void)

undefined8 *
FUN_148a3be00(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(longlong *)(param_1 + 0x88);
  if (((param_4 != 0) && (*(longlong *)(param_4 + 0x58) != 0)) &&
     (iVar3 = FUN_144a43e8c(), iVar3 == 1)) {
    lVar4 = DAT_14cb8e1e0;
    if (DAT_14cb8e1d8 != *(longlong *)(param_4 + 0x1708)) {
      lVar4 = 0;
    }
    if (lVar4 != 0) {
      local_28 = lVar4;
    }
  }
  plVar5 = (longlong *)FUN_1401e3228();
  if (plVar5 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x68))(plVar5,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0xc0))(local_38,param_2,param_5);
      goto LAB_148a3bead;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_148a3bead:
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148a3bef6 FUN_148a3bef6 body=161 status=ok
// SIG undefined FUN_148a3bef6(void)

void FUN_148a3bef6(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_1 + 0x88);
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x68))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x28))(local_38,param_3);
    }
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3bf98 FUN_148a3bf98 body=161 status=ok
// SIG undefined FUN_148a3bf98(void)

void FUN_148a3bf98(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_1 + 0x88);
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x68))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x30))(local_38,param_3);
    }
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3c03a FUN_148a3c03a body=203 status=ok
// SIG undefined FUN_148a3c03a(void)

undefined4
FUN_148a3c03a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *(undefined8 *)(param_1 + 0x88);
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x68))(plVar4,&local_48);
    plVar4 = local_48;
    if (local_48 != (longlong *)0x0) {
      uVar5 = FUN_14127b0d4(param_4);
      uVar3 = (**(code **)(*plVar4 + 0xb0))
                        (plVar4,param_3,uVar5,
                         CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
      goto LAB_148a3c0bd;
    }
  }
  uVar3 = 0;
LAB_148a3c0bd:
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3c106 FUN_148a3c106 body=203 status=ok
// SIG undefined FUN_148a3c106(void)

undefined4
FUN_148a3c106(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *(undefined8 *)(param_1 + 0x88);
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x68))(plVar4,&local_48);
    plVar4 = local_48;
    if (local_48 != (longlong *)0x0) {
      uVar5 = FUN_14127b0d4(param_4);
      uVar3 = (**(code **)(*plVar4 + 0xb8))
                        (plVar4,param_3,uVar5,
                         CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
      goto LAB_148a3c189;
    }
  }
  uVar3 = 0;
LAB_148a3c189:
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3c1d2 FUN_148a3c1d2 body=159 status=ok
// SIG undefined FUN_148a3c1d2(void)

void FUN_148a3c1d2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x70))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x30))(local_38,param_3);
    }
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3c272 FUN_148a3c272 body=158 status=ok
// SIG undefined FUN_148a3c272(void)

void FUN_148a3c272(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x70))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x28))(local_38,param_3);
    }
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3c312 FUN_148a3c312 body=272 status=ok
// SIG undefined FUN_148a3c312(void)

void FUN_148a3c312(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  plVar2 = (longlong *)FUN_1401e3228();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x70))(plVar2,&local_38);
    if (local_38 != (longlong *)0x0) {
      local_70 = 0xffffffff;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_78 = CONCAT44((int)(local_78 >> 0x20),*param_3) & 0xffffff00ffffffff;
      local_6c = param_3[2];
      local_68 = param_3[3];
      local_64 = param_3[4];
      local_60 = param_3[5];
      (**(code **)(*local_38 + 0x38))(local_38,param_2,&local_78,param_4);
      FUN_148a3c424(&local_78);
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
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3c424 FUN_148a3c424 body=60 status=ok
// SIG undefined FUN_148a3c424(void)

void FUN_148a3c424(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a3c460 FUN_148a3c460 body=165 status=ok
// SIG undefined FUN_148a3c460(void)

ulonglong FUN_148a3c460(void)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong **pplVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (longlong *)0x0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 != (longlong *)0x0) {
    pplVar5 = &local_30;
    (**(code **)(*plVar4 + 0x70))(plVar4,pplVar5);
    plVar4 = local_30;
    if (local_30 != (longlong *)0x0) {
      uVar3 = (**(code **)(*local_30 + 0x40))(local_30);
      pplVar5 = (longlong **)(ulonglong)uVar3;
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
    if (plVar4 != (longlong *)0x0) goto LAB_148a3c4df;
  }
  pplVar5 = (longlong **)0x0;
LAB_148a3c4df:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pplVar5 & 0xffffff01;
}



// FUNCTION 148a3c506 FUN_148a3c506 body=42 status=ok
// SIG undefined FUN_148a3c506(void)

void FUN_148a3c506(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_3 + 0x60))();
  }
  FUN_1449db362(param_3);
  return;
}



// FUNCTION 148a3c530 FUN_148a3c530 body=154 status=ok
// SIG undefined FUN_148a3c530(void)

void FUN_148a3c530(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *plStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_28);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x450))();
    }
  }
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3c5cc FUN_148a3c5cc body=154 status=ok
// SIG undefined FUN_148a3c5cc(void)

void FUN_148a3c5cc(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *plStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x40))(plVar3,&local_28);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x418))();
    }
  }
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3c668 FUN_148a3c668 body=154 status=ok
// SIG undefined FUN_148a3c668(void)

void FUN_148a3c668(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *plStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0xd0))(plVar3,&local_28);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x78))();
    }
  }
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3c704 FUN_148a3c704 body=157 status=ok
// SIG undefined FUN_148a3c704(void)

byte FUN_148a3c704(void)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  byte unaff_BL;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_140a68038(1);
  if (plVar3 == (longlong *)0x0) {
    bVar2 = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x70))(plVar3,&local_30);
    if (local_30 != (longlong *)0x0) {
      unaff_BL = (**(code **)(*local_30 + 0xa0))(local_30);
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    bVar2 = local_30 != (longlong *)0x0 & unaff_BL;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 148a3c7a2 FUN_148a3c7a2 body=150 status=ok
// SIG undefined FUN_148a3c7a2(void)

undefined8 FUN_148a3c7a2(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)FUN_140a68038(1);
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x70))(plVar2,&local_28);
    if (local_28 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*local_28 + 0xa8))();
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3c844 FUN_148a3c844 body=427 status=ok
// SIG undefined FUN_148a3c844(void)

void FUN_148a3c844(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_1 + 0x38);
  if ((int)uVar1 < 1) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
  }
  else {
    uVar3 = uVar1 + 0xf & 0xfffffff0;
    if (uVar3 == uVar1) {
      local_48 = (byte *)0x0;
      uStack_40 = 0;
      FUN_144893a1c(&local_48,uVar1);
      iVar2 = (int)uStack_40;
      uStack_40 = CONCAT44(uStack_40._4_4_,(int)uStack_40 + uVar1);
      if ((uint)(uStack_40._4_4_ - iVar2) < uVar1) {
        FUN_1447403be(&local_48);
      }
      memcpy(local_48,*(void **)(param_1 + 0x30),(longlong)(int)uVar3);
      uVar4 = 0;
      do {
        *(uint *)(local_48 + uVar4 * 4) = *(uint *)(local_48 + uVar4 * 4) ^ 0xdeadbeef;
        uVar4 = uVar4 + 1;
      } while ((uVar1 >> 2) + (uint)(uVar1 >> 2 == 0) != uVar4);
      if (((int)(uint)*local_48 < (int)uStack_40) &&
         (*(short *)(local_48 + ((ulonglong)(*local_48 & 0xfffffffe) - 1)) == 0)) {
        FUN_140056680(&local_58);
        if ((longlong *)(param_1 + 0x10) == &local_58) {
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x10) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x10) = local_58;
          local_58 = 0;
          *(undefined4 *)(param_1 + 0x18) = local_50;
          *(undefined4 *)(param_1 + 0x1c) = local_4c;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 0;
        if (*(int *)(param_1 + 0x1c) != 0) {
          FUN_1446f8c06(param_1 + 0x10,0);
        }
        *(undefined4 *)(param_1 + 0x38) = 0;
        if (*(int *)(param_1 + 0x3c) != 0) {
          FUN_144893a1c((undefined8 *)(param_1 + 0x30),0);
        }
      }
      if (local_48 != (byte *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3ca14 FUN_148a3ca14 body=57 status=ok
// SIG undefined FUN_148a3ca14(void)

undefined8 * FUN_148a3ca14(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_148a3ca4d();
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
  }
  return param_2;
}



// FUNCTION 148a3ca4d FUN_148a3ca4d body=127 status=ok
// SIG undefined FUN_148a3ca4d(void)

undefined8 FUN_148a3ca4d(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb95c78) {
    FUN_144b3d300(&DAT_14cb95c78);
    if (DAT_14cb95c78 == -1) {
      FUN_1446f470e(&DAT_14cb95c70,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_14cb95c78);
    }
  }
  lVar1 = FUN_1447c1074(DAT_14cb95c70);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar2;
}



// FUNCTION 148a3cb2e FUN_148a3cb2e body=530 status=ok
// SIG undefined FUN_148a3cb2e(void)

undefined8 *
FUN_148a3cb2e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined **local_60;
  undefined4 *local_58;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)FUN_148a3ca4d();
  if (plVar2 == (longlong *)0x0) {
    local_68 = 0;
  }
  else {
    (**(code **)(*plVar2 + 8))(plVar2,&local_68,param_3);
  }
  FUN_148a28af8(&local_78,0xff,local_68,0);
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x18))(local_78,&local_88);
    if (local_88 != (longlong *)0x0) {
      FUN_140adf126(local_8c,param_4);
      (**(code **)(*local_88 + 0x58))(local_88,&local_60,local_8c);
      uVar3 = (ulonglong)local_30;
      if ((&DAT_14b4c3508)[uVar3] == '\x01') {
        *param_2 = &PTR_FUN_14a184370;
        param_2[1] = 0;
        param_2[2] = 0;
        *(undefined4 *)(param_2 + 1) = *local_58;
        *(undefined1 *)(param_2 + 3) = 1;
        local_60 = &PTR_FUN_14b4c1f68;
        (*(code *)(&PTR_FUN_14b4c1f70)[uVar3])();
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_80 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)local_80 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_80 + 0x10))(local_80);
            }
          }
        }
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
        goto LAB_148a3cd17;
      }
      local_60 = &PTR_FUN_14b4c1f68;
      (*(code *)(&PTR_FUN_14b4c1f70)[uVar3])();
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_80 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
  }
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
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14a184370;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
LAB_148a3cd17:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3cd42 FUN_148a3cd42 body=927 status=ok
// SIG undefined FUN_148a3cd42(void)

undefined8 *
FUN_148a3cd42(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined **local_60;
  longlong local_58 [5];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = (longlong *)FUN_148a3ca4d();
  if (plVar4 == (longlong *)0x0) {
    local_68 = 0;
  }
  else {
    (**(code **)(*plVar4 + 8))(plVar4,&local_68,param_3);
  }
  FUN_148a28af8(&local_78,0xff,local_68,0);
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x18))(local_78,&local_88);
    if (local_88 != (longlong *)0x0) {
      local_8c = 0;
      if ((&DAT_149fc1b3a)[*(byte *)(param_4 + 0x18)] == '\x01') {
        local_8c = *(undefined4 *)(param_4 + 8);
      }
      (**(code **)(*local_88 + 0x50))(local_88,&local_60,&local_8c);
      if ((&DAT_14b4c350a)[local_30] == '\x01') {
        if (*(int *)(local_58[0] + 0x18) != *(int *)(local_58[0] + 0x44)) {
          uVar3 = (uint)((ulonglong)DAT_14cb95210 >> 0x10);
          uVar7 = (uint)DAT_14cb95210 & 0xffff;
          lVar6 = local_58[0] + 0x48;
          if (*(longlong *)(local_58[0] + 0x50) != 0) {
            lVar6 = *(longlong *)(local_58[0] + 0x50);
          }
          iVar8 = *(int *)(lVar6 + (ulonglong)
                                   (*(int *)(local_58[0] + 0x58) - 1U &
                                   (int)((ulonglong)DAT_14cb95210 >> 0x20) +
                                   ((uint)DAT_14cb95210 << 0x10 | uVar7) +
                                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
          if (iVar8 != -1) {
            do {
              lVar6 = *(longlong *)(local_58[0] + 0x10) + (longlong)iVar8 * 0x30;
              if (*(longlong *)(*(longlong *)(local_58[0] + 0x10) + (longlong)iVar8 * 0x30) ==
                  DAT_14cb95210) {
                if (lVar6 != -8 && lVar6 != 0) {
                  puVar5 = (undefined8 *)FUN_148a29aaa();
                  *param_2 = 0;
                  iVar8 = *(int *)(puVar5 + 1);
                  pvVar2 = (void *)*puVar5;
                  *(int *)(param_2 + 1) = iVar8;
                  if ((longlong)iVar8 == 0) {
                    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
                  }
                  else {
                    FUN_1446dd670(param_2,iVar8,0);
                    memcpy((void *)*param_2,pvVar2,(longlong)iVar8 * 2);
                  }
                  goto LAB_148a3ce29;
                }
                break;
              }
              iVar8 = *(int *)(lVar6 + 0x28);
            } while (iVar8 != -1);
          }
        }
        *param_2 = 0;
        param_2[1] = 0;
LAB_148a3ce29:
        local_60 = &PTR_FUN_14b4c1f80;
        (*(code *)(&PTR_FUN_14b4c1f90)[local_30])(local_58);
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_80 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)local_80 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_80 + 0x10))(local_80);
            }
          }
        }
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_70 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        goto LAB_148a3cf82;
      }
      local_60 = &PTR_FUN_14b4c1f80;
      (*(code *)(&PTR_FUN_14b4c1f90)[local_30])();
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_80 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_70 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb95c68) && (FUN_144b3d300(&DAT_14cb95c68), DAT_14cb95c68 == -1)) {
    FUN_140056680(&DAT_14cb95c58,L"InvalidOSSUser");
    atexit((_func_5014 *)&LAB_143eda453);
    _Init_thread_footer(&DAT_14cb95c68);
  }
  *param_2 = 0;
  iVar8 = DAT_14cb95c60;
  pvVar2 = DAT_14cb95c58;
  lVar6 = (longlong)DAT_14cb95c60;
  *(int *)(param_2 + 1) = DAT_14cb95c60;
  if (lVar6 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar8,0);
    memcpy((void *)*param_2,pvVar2,lVar6 * 2);
  }
LAB_148a3cf82:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148a3d0e2 FUN_148a3d0e2 body=566 status=ok
// SIG undefined FUN_148a3d0e2(void)

ulonglong FUN_148a3d0e2(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined **local_60;
  longlong local_58;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)FUN_148a3ca4d();
  if (plVar3 == (longlong *)0x0) {
    local_68 = 0;
  }
  else {
    (**(code **)(*plVar3 + 8))(plVar3,&local_68,param_2);
  }
  uVar6 = 0;
  FUN_148a28af8(&local_78,0xfe,local_68,0);
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x18))(local_78,&local_88);
    if (local_88 == (longlong *)0x0) {
      uVar6 = 0;
    }
    else {
      FUN_140adf126(local_8c,param_3);
      (**(code **)(*local_88 + 0x58))(local_88,&local_60,local_8c);
      uVar4 = (ulonglong)local_30;
      if ((&DAT_14b4c3508)[uVar4] == '\x01') {
        if (*(int *)(local_58 + 0x18) != *(int *)(local_58 + 0x44)) {
          uVar2 = (uint)((ulonglong)DAT_14cb95210 >> 0x10);
          uVar8 = (uint)DAT_14cb95210 & 0xffff;
          lVar7 = local_58 + 0x48;
          if (*(longlong *)(local_58 + 0x50) != 0) {
            lVar7 = *(longlong *)(local_58 + 0x50);
          }
          iVar9 = *(int *)(lVar7 + (ulonglong)
                                   (*(int *)(local_58 + 0x58) - 1U &
                                   (int)((ulonglong)DAT_14cb95210 >> 0x20) +
                                   ((uint)DAT_14cb95210 << 0x10 | uVar8) +
                                   (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
          if (iVar9 != -1) {
            do {
              lVar7 = *(longlong *)(local_58 + 0x10) + (longlong)iVar9 * 0x30;
              if (*(longlong *)(*(longlong *)(local_58 + 0x10) + (longlong)iVar9 * 0x30) ==
                  DAT_14cb95210) {
                if (lVar7 != -8 && lVar7 != 0) {
                  uVar5 = FUN_148a29aaa();
                  FUN_144a787a6(param_4,uVar5);
                  uVar4 = (ulonglong)local_30;
                }
                break;
              }
              iVar9 = *(int *)(lVar7 + 0x28);
            } while (iVar9 != -1);
          }
        }
        uVar6 = CONCAT71((int7)((ulonglong)local_8c >> 8),1 < *(int *)(param_4 + 8));
      }
      else {
        uVar6 = 0;
      }
      local_60 = &PTR_FUN_14b4c1f68;
      (*(code *)(&PTR_FUN_14b4c1f70)[uVar4])();
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_80 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 148a3d31a FUN_148a3d31a body=684 status=ok
// SIG undefined FUN_148a3d31a(void)

ulonglong FUN_148a3d31a(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar4 = (longlong *)FUN_148a3ca4d();
  if (plVar4 == (longlong *)0x0) {
    local_a0 = 0;
  }
  else {
    (**(code **)(*plVar4 + 8))(plVar4,&local_a0,param_2);
  }
  uVar6 = 0;
  FUN_148a28af8(&local_b0,0xff,local_a0,0);
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x18))(local_b0,&local_c0);
    if (local_c0 == (undefined8 *)0x0) {
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_b8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b8 + 0x10))(local_b8);
          }
        }
      }
      uVar6 = 0;
    }
    else {
      local_88 = 0xffffffff;
      local_80 = 0;
      local_50 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_48 = 0;
      uStack_40 = 0;
      FUN_140adf126(&local_88,param_3);
      (**(code **)*local_c0)(local_c0,&local_d0,&local_88);
      local_e0 = 0;
      local_d8 = 0;
      local_e8 = param_3;
      FUN_148a483b8(&local_e0,param_4);
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,4,0x10);
      puVar2 = local_98;
      local_90 = 4;
      *local_98 = &PTR_LAB_14b4c3580;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_98[2] = lVar5;
      *local_98 = &PTR_FUN_14b4c3510;
      local_98[3] = 0;
      FUN_14485c47a(local_98 + 3,param_1);
      *(undefined4 *)(puVar2 + 4) = local_e8;
      puVar2[5] = 0;
      *(undefined4 *)(puVar2 + 6) = 0;
      FUN_148a483b8(puVar2 + 5,&local_e0);
      (**(code **)(*local_d0 + 0x28))(local_d0,&local_98);
      FUN_1449db362(&local_98);
      FUN_1449db362(&local_e0);
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_c8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)local_c8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_c8 + 0x10))(local_c8);
          }
        }
      }
      FUN_148a3d5c8(&local_88);
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_b8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b8 + 0x10))(local_b8);
          }
        }
      }
      uVar6 = CONCAT71((int7)((ulonglong)&local_e0 >> 8),1);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a8 + 0x10))(local_a8);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3d5c8 FUN_148a3d5c8 body=78 status=ok
// SIG undefined FUN_148a3d5c8(void)

void FUN_148a3d5c8(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14b4c1fa0)[*(byte *)(param_1 + 0x38)])(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a3d616 FUN_148a3d616 body=358 status=ok
// SIG undefined FUN_148a3d616(void)

ulonglong FUN_148a3d616(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [36];
  undefined1 local_84 [4];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined **local_58;
  longlong local_50;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)FUN_148a3ca4d();
  if (plVar2 == (longlong *)0x0) {
    local_60 = 0;
  }
  else {
    (**(code **)(*plVar2 + 8))(plVar2,&local_60,param_2);
  }
  uVar3 = 0;
  FUN_148a28af8(&local_70,0xff,local_60,0);
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x18))(local_70,&local_80);
    if (local_80 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      FUN_140adf126(local_84,param_3);
      (**(code **)(*local_80 + 0x58))(local_80,&local_58,local_84);
      if ((&DAT_14b4c3508)[local_28] == '\x01') {
        uVar3 = CONCAT71((int7)((ulonglong)local_84 >> 8),*(char *)(local_50 + 8) == '\x03');
      }
      else {
        uVar3 = 0;
      }
      local_58 = &PTR_FUN_14b4c1f68;
      (*(code *)(&PTR_FUN_14b4c1f70)[local_28])();
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_78 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
        }
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3d804 FUN_148a3d804 body=225 status=ok
// SIG undefined FUN_148a3d804(void)

void FUN_148a3d804(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_148a3ca4d();
  if (plVar2 == (longlong *)0x0) {
    local_20 = 0;
  }
  else {
    (**(code **)(*plVar2 + 8))(plVar2,&local_20,param_2);
  }
  FUN_148a28af8(&local_30,0xff,local_20,0);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x40))(local_30,local_40);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3d8e6 FUN_148a3d8e6 body=206 status=ok
// SIG undefined FUN_148a3d8e6(void)

void FUN_148a3d8e6(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  uVar5 = FUN_148a28964();
  FUN_148a29442(uVar5,&local_48);
  lVar4 = local_48;
  lVar7 = (longlong)(int)uStack_40;
  uVar6 = 0;
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(longlong **)(lVar4 + lVar8) + 0x40))(*(longlong **)(lVar4 + lVar8),local_58);
      plVar3 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar7 * 0x10 != lVar8);
    uVar6 = uStack_40 & 0xffffffff;
  }
  FUN_148a4844a(local_48,uVar6);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3d9b6 FUN_148a3d9b6 body=206 status=ok
// SIG undefined FUN_148a3d9b6(void)

void FUN_148a3d9b6(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  uVar5 = FUN_148a28964();
  FUN_148a29442(uVar5,&local_48);
  lVar4 = local_48;
  lVar7 = (longlong)(int)uStack_40;
  uVar6 = 0;
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(longlong **)(lVar4 + lVar8) + 0x40))(*(longlong **)(lVar4 + lVar8),local_58);
      plVar3 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar7 * 0x10 != lVar8);
    uVar6 = uStack_40 & 0xffffffff;
  }
  FUN_148a4844a(local_48,uVar6);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3da86 FUN_148a3da86 body=208 status=ok
// SIG undefined FUN_148a3da86(void)

undefined8 FUN_148a3da86(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  uVar5 = FUN_148a28964();
  FUN_148a29442(uVar5,&local_48);
  lVar4 = local_48;
  lVar7 = (longlong)(int)uStack_40;
  uVar6 = 0;
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      (**(code **)(**(longlong **)(lVar4 + lVar8) + 0x40))(*(longlong **)(lVar4 + lVar8),local_58);
      plVar3 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar7 * 0x10 != lVar8);
    uVar6 = uStack_40 & 0xffffffff;
  }
  FUN_148a4844a(local_48,uVar6);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3db58 FUN_148a3db58 body=293 status=ok
// SIG undefined FUN_148a3db58(void)

void FUN_148a3db58(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_148a3ca4d();
  if (plVar3 != (longlong *)0x0) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_14114e6dc(&local_48,param_2);
    FUN_1446efa72(&local_38,0,3,0x10);
    puVar1 = local_38;
    local_30 = 3;
    *local_38 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_38[2] = lVar4;
    *local_38 = &PTR_FUN_14b4c35f0;
    local_38[3] = 0;
    FUN_14485c47a(local_38 + 3,param_1);
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_14114e6dc(puVar1 + 4,&local_48);
    FUN_1449db362(&local_48);
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
    FUN_1449db362(&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3dc9e FUN_148a3dc9e body=646 status=ok
// SIG undefined FUN_148a3dc9e(void)

void FUN_148a3dc9e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar14 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
    if (cVar14 != '\0') {
      (**(code **)(*(longlong *)*param_2 + 0x40))((longlong *)*param_2,&local_e0);
      if (local_e0 != (longlong *)0x0) {
        (**(code **)(*local_e0 + 0x10))(local_e0,&local_e8);
        uVar5 = *local_e8;
        local_88 = (undefined8 *)0x0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        FUN_1446efa72(&local_88,0,2,0x10);
        uStack_80 = CONCAT44(uStack_80._4_4_,2);
        *local_88 = &PTR_LAB_14b4c36d0;
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar16 == 0) {
          LOCK();
          UNLOCK();
          lVar16 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_88[2] = lVar16;
        *local_88 = &PTR_FUN_14b4c3660;
        local_88[3] = param_1;
        FUN_148a485de(uVar5,&local_d0,&local_88);
        FUN_1449db362(&local_88);
        FUN_148a48494(&local_c8,local_d0,local_e8);
        iVar4 = *(int *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x2c) < iVar4 + 1U) {
          FUN_148a48792((longlong *)(param_1 + 0x20),iVar4);
        }
        lVar6 = *(longlong *)(param_1 + 0x20);
        lVar16 = (longlong)iVar4 * 0x40;
        *(undefined8 *)(lVar6 + lVar16) = 0;
        *(undefined8 *)(lVar6 + 0x10 + lVar16) = 0;
        uVar5 = *(undefined8 *)(lVar6 + lVar16);
        uVar7 = ((undefined8 *)(lVar6 + lVar16))[1];
        puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar16);
        uVar8 = *puVar3;
        uVar9 = puVar3[1];
        puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar16);
        uVar10 = *puVar3;
        uVar11 = puVar3[1];
        puVar3 = (undefined8 *)(lVar6 + 0x30 + lVar16);
        uVar12 = *puVar3;
        uVar13 = puVar3[1];
        puVar3 = (undefined8 *)(lVar6 + 0x30 + lVar16);
        *puVar3 = CONCAT44(uStack_94,local_98);
        puVar3[1] = CONCAT44(uStack_8c,uStack_90);
        puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar16);
        *puVar3 = CONCAT44(uStack_a4,local_a8);
        puVar3[1] = CONCAT44(uStack_9c,uStack_a0);
        puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar16);
        *puVar3 = CONCAT44(uStack_b4,local_b8);
        puVar3[1] = CONCAT44(uStack_ac,uStack_b0);
        *(undefined8 *)(lVar6 + lVar16) = CONCAT44(uStack_c4,local_c8);
        ((undefined8 *)(lVar6 + lVar16))[1] = CONCAT44(uStack_bc,uStack_c0);
        local_88._0_4_ = (undefined4)uVar5;
        local_88._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_80._0_4_ = (undefined4)uVar7;
        uStack_80._4_4_ = (undefined4)(uVar7 >> 0x20);
        local_78._0_4_ = (undefined4)uVar8;
        local_78._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
        uStack_70._0_4_ = (undefined4)uVar9;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
        local_68._0_4_ = (undefined4)uVar10;
        local_68._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        uStack_60._0_4_ = (undefined4)uVar11;
        uStack_60._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        local_58._0_4_ = (undefined4)uVar12;
        local_58._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
        uStack_50._0_4_ = (undefined4)uVar13;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
        local_98 = (undefined4)local_58;
        uStack_94 = local_58._4_4_;
        uStack_90 = (undefined4)uStack_50;
        uStack_8c = uStack_50._4_4_;
        local_a8 = (undefined4)local_68;
        uStack_a4 = local_68._4_4_;
        uStack_a0 = (undefined4)uStack_60;
        uStack_9c = uStack_60._4_4_;
        local_b8 = (undefined4)local_78;
        uStack_b4 = local_78._4_4_;
        uStack_b0 = (undefined4)uStack_70;
        uStack_ac = uStack_70._4_4_;
        local_c8 = (undefined4)local_88;
        uStack_c4 = local_88._4_4_;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        local_88 = (undefined8 *)uVar5;
        uStack_80 = uVar7;
        local_78 = uVar8;
        uStack_70 = uVar9;
        local_68 = uVar10;
        uStack_60 = uVar11;
        local_58 = uVar12;
        uStack_50 = uVar13;
        FUN_148a40bca(&local_c8);
        if (CONCAT44(uStack_c4,local_c8) != 0) {
          plVar15 = (longlong *)CONCAT44(uStack_b4,local_b8);
          if ((longlong *)CONCAT44(uStack_b4,local_b8) == (longlong *)0x0) {
            plVar15 = (longlong *)&local_a8;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_d8 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar1 = (int *)((longlong)local_d8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_d8 + 0x10))(local_d8);
          }
        }
      }
    }
  }
  plVar15 = (longlong *)param_2[1];
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar15 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3df26 FUN_148a3df26 body=742 status=ok
// SIG undefined FUN_148a3df26(void)

void FUN_148a3df26(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined8 *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14114e6dc(param_1 + 0x10);
  local_e8 = 0;
  uStack_e0 = 0;
  uVar13 = FUN_148a28964();
  FUN_148a29442(uVar13,&local_e8);
  lVar12 = local_e8;
  lVar18 = (longlong)(int)uStack_e0;
  uVar16 = 0;
  if (lVar18 != 0) {
    local_108 = (longlong *)(param_1 + 0x20);
    lVar17 = 0;
    do {
      (**(code **)(**(longlong **)(lVar12 + lVar17) + 0x40))
                (*(longlong **)(lVar12 + lVar17),&local_f8);
      if (local_f8 != (longlong *)0x0) {
        (**(code **)(*local_f8 + 0x10))(local_f8,&local_100);
        puVar3 = local_100;
        uVar13 = *local_100;
        local_88 = (undefined8 *)0x0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        FUN_1446efa72(&local_88,0,2,0x10);
        uStack_80 = CONCAT44(uStack_80._4_4_,2);
        *local_88 = &PTR_LAB_14b4c36d0;
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 1;
        lVar5 = DAT_14c758608 + 1;
        if (lVar14 == 0) {
          LOCK();
          UNLOCK();
          lVar14 = DAT_14c758608 + 2;
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        local_88[2] = lVar14;
        *local_88 = &PTR_FUN_14b4c3760;
        local_88[3] = param_1;
        FUN_148a485de(uVar13,&local_d0,&local_88);
        FUN_1449db362(&local_88);
        FUN_148a48494(&local_c8,local_d0,puVar3);
        iVar4 = *(int *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x2c) < iVar4 + 1U) {
          FUN_148a48792(local_108,iVar4);
        }
        lVar5 = *local_108;
        lVar14 = (longlong)iVar4 * 0x40;
        *(undefined8 *)(lVar5 + lVar14) = 0;
        *(undefined8 *)(lVar5 + 0x10 + lVar14) = 0;
        uVar13 = *(undefined8 *)(lVar5 + lVar14);
        uVar16 = ((undefined8 *)(lVar5 + lVar14))[1];
        puVar3 = (undefined8 *)(lVar5 + 0x10 + lVar14);
        uVar6 = *puVar3;
        uVar7 = puVar3[1];
        puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar14);
        uVar8 = *puVar3;
        uVar9 = puVar3[1];
        puVar3 = (undefined8 *)(lVar5 + 0x30 + lVar14);
        uVar10 = *puVar3;
        uVar11 = puVar3[1];
        puVar3 = (undefined8 *)(lVar5 + 0x30 + lVar14);
        *puVar3 = CONCAT44(uStack_94,local_98);
        puVar3[1] = CONCAT44(uStack_8c,uStack_90);
        puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar14);
        *puVar3 = CONCAT44(uStack_a4,local_a8);
        puVar3[1] = CONCAT44(uStack_9c,uStack_a0);
        puVar3 = (undefined8 *)(lVar5 + 0x10 + lVar14);
        *puVar3 = CONCAT44(uStack_b4,local_b8);
        puVar3[1] = CONCAT44(uStack_ac,uStack_b0);
        *(undefined8 *)(lVar5 + lVar14) = CONCAT44(uStack_c4,local_c8);
        ((undefined8 *)(lVar5 + lVar14))[1] = CONCAT44(uStack_bc,uStack_c0);
        local_88._0_4_ = (undefined4)uVar13;
        local_88._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
        uStack_80._0_4_ = (undefined4)uVar16;
        uStack_80._4_4_ = (undefined4)(uVar16 >> 0x20);
        local_78._0_4_ = (undefined4)uVar6;
        local_78._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_70._0_4_ = (undefined4)uVar7;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_68._0_4_ = (undefined4)uVar8;
        local_68._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
        uStack_60._0_4_ = (undefined4)uVar9;
        uStack_60._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
        local_58._0_4_ = (undefined4)uVar10;
        local_58._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        uStack_50._0_4_ = (undefined4)uVar11;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        local_98 = (undefined4)local_58;
        uStack_94 = local_58._4_4_;
        uStack_90 = (undefined4)uStack_50;
        uStack_8c = uStack_50._4_4_;
        local_a8 = (undefined4)local_68;
        uStack_a4 = local_68._4_4_;
        uStack_a0 = (undefined4)uStack_60;
        uStack_9c = uStack_60._4_4_;
        local_b8 = (undefined4)local_78;
        uStack_b4 = local_78._4_4_;
        uStack_b0 = (undefined4)uStack_70;
        uStack_ac = uStack_70._4_4_;
        local_c8 = (undefined4)local_88;
        uStack_c4 = local_88._4_4_;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        local_88 = (undefined8 *)uVar13;
        uStack_80 = uVar16;
        local_78 = uVar6;
        uStack_70 = uVar7;
        local_68 = uVar8;
        uStack_60 = uVar9;
        local_58 = uVar10;
        uStack_50 = uVar11;
        FUN_148a40bca(&local_c8);
        if (CONCAT44(uStack_c4,local_c8) != 0) {
          plVar15 = (longlong *)CONCAT44(uStack_b4,local_b8);
          if ((longlong *)CONCAT44(uStack_b4,local_b8) == (longlong *)0x0) {
            plVar15 = (longlong *)&local_a8;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      plVar15 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
      lVar17 = lVar17 + 0x10;
    } while (lVar18 * 0x10 != lVar17);
    uVar16 = uStack_e0 & 0xffffffff;
  }
  FUN_148a4844a(local_e8,uVar16);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3e222 FUN_148a3e222 body=240 status=ok
// SIG undefined FUN_148a3e222(void)

void FUN_148a3e222(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_38);
  if (local_38 == (longlong *)0x0) {
    *param_2 = 0;
    plVar2 = (longlong *)*param_4;
    if (plVar2 != (longlong *)0x0 && (int)param_4[1] != 0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_3,1);
    }
  }
  else {
    (**(code **)(*local_38 + 0xf0))(local_38,&local_48,param_4);
    *param_2 = local_48;
    local_48 = 0;
    uStack_40 = 0;
    (**(code **)(*local_38 + 0xe8))(local_38,param_3,&local_48);
    FUN_1449db362(&local_48);
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3e314 FUN_148a3e314 body=205 status=ok
// SIG undefined FUN_148a3e314(void)

undefined8 *
FUN_148a3e314(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_38);
  if (local_38 == (longlong *)0x0) {
    plVar2 = (longlong *)*param_4;
    if (plVar2 != (longlong *)0x0 && (int)param_4[1] != 0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_3,1);
    }
  }
  else {
    (**(code **)(*local_38 + 200))(local_38,param_2,param_4);
    (**(code **)(*local_38 + 0xc0))(local_38,param_3);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3e3e2 FUN_148a3e3e2 body=261 status=ok
// SIG undefined FUN_148a3e3e2(void)

void FUN_148a3e3e2(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_38);
  if (local_38 != (longlong *)0x0) {
    iVar2 = (**(code **)(*local_38 + 0x38))(local_38,param_2);
    if (iVar2 == 0) {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1);
      uVar4 = (**(code **)(*param_1 + 0x2d0))(param_1);
      uVar4 = FUN_14119d4d6(uVar4);
      (**(code **)(*plVar3 + 0x2f8))(plVar3,uVar4,param_3);
    }
    else {
      FUN_1461f4a06(param_1 + 0x17,param_3);
      *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_3 + 0x118);
      FUN_148a3e314(param_1,&local_40,param_2,param_1 + 5);
      param_1[0x10] = local_40;
    }
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3e4e8 FUN_148a3e4e8 body=56 status=ok
// SIG undefined FUN_148a3e4e8(void)

void FUN_148a3e4e8(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2e0))();
  if (cVar1 != '\0') {
    return;
  }
  FUN_147d811a6(DAT_14cb0d2b0,param_2,param_3);
  return;
}



// FUNCTION 148a3e520 FUN_148a3e520 body=123 status=ok
// SIG undefined FUN_148a3e520(void)

bool FUN_148a3e520(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 == param_2) && (*(char *)((longlong)param_1 + 0x1d9) == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x1d9) = 1;
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    FUN_148a3e222(param_1,param_1 + 0x12,DAT_14c892fbc,param_1 + 9);
  }
  return lVar1 == param_2;
}



// FUNCTION 148a3e59c FUN_148a3e59c body=434 status=ok
// SIG undefined FUN_148a3e59c(void)

void FUN_148a3e59c(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x180))();
  local_60 = (undefined8 *)0x0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    if (local_48 != (longlong *)0x0) {
      lVar5 = (**(code **)(*local_48 + 0x20))(local_48,param_2);
      plVar4 = local_48;
      if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x148) | 4) == 6)) {
        local_60 = (undefined8 *)0x0;
        local_58 = 0;
        FUN_1446efa72(&local_60,0,3,0x10);
        puVar3 = local_60;
        local_58 = 3;
        *local_60 = &PTR_LAB_149eae4d0;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar5 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        local_60[2] = lVar6;
        *local_60 = &PTR_FUN_14b4c3920;
        local_60[3] = 0;
        FUN_14485c47a(local_60 + 3,param_1);
        puVar3[4] = &LAB_148a3e750;
        (**(code **)(*plVar4 + 0x78))(plVar4,&local_50,&local_60);
        param_1[0x14] = local_50;
        FUN_1449db362(&local_60);
        (**(code **)(*local_48 + 0x70))(local_48,param_2);
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3e75e FUN_148a3e75e body=435 status=ok
// SIG undefined FUN_148a3e75e(void)

void FUN_148a3e75e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x180))();
  local_60 = (undefined8 *)0x0;
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    if (local_48 != (longlong *)0x0) {
      lVar5 = (**(code **)(*local_48 + 0x20))(local_48,param_2);
      plVar4 = local_48;
      if ((lVar5 != 0) && (*(int *)(lVar5 + 0x148) == 4)) {
        local_60 = (undefined8 *)0x0;
        local_58 = 0;
        FUN_1446efa72(&local_60,0,3,0x10);
        puVar3 = local_60;
        local_58 = 3;
        *local_60 = &PTR_LAB_149eae4d0;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar5 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        local_60[2] = lVar6;
        *local_60 = &PTR_FUN_14b4c3920;
        local_60[3] = 0;
        FUN_14485c47a(local_60 + 3,param_1);
        puVar3[4] = &LAB_148a3e912;
        (**(code **)(*plVar4 + 200))(plVar4,&local_50,&local_60);
        param_1[0x15] = local_50;
        FUN_1449db362(&local_60);
        (**(code **)(*local_48 + 0xc0))(local_48,param_2);
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3e920 FUN_148a3e920 body=236 status=ok
// SIG undefined FUN_148a3e920(void)

void FUN_148a3e920(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      lVar4 = (**(code **)(*local_38 + 0x380))();
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x10) = *(undefined1 *)(param_3 + 1);
        *(undefined1 *)(lVar4 + 0x15) = *(undefined1 *)((longlong)param_3 + 9);
        bVar5 = *(byte *)((longlong)param_3 + 0xb) ^ 1;
        if (*(char *)((longlong)param_3 + 10) == '\0') {
          bVar5 = 0;
        }
        *(byte *)(lVar4 + 0x17) = bVar5;
        *(undefined1 *)(lVar4 + 0x18) = *(undefined1 *)((longlong)param_3 + 0xb);
        *(undefined4 *)(lVar4 + 8) = *(undefined4 *)((longlong)param_3 + 0xc);
        (**(code **)(*local_38 + 0x98))(local_38,*param_3,lVar4,0);
      }
    }
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3ea0d FUN_148a3ea0d body=148 status=ok
// SIG undefined FUN_148a3ea0d(void)

undefined8 FUN_148a3ea0d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a86a4a();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3eaa2 FUN_148a3eaa2 body=226 status=ok
// SIG undefined FUN_148a3eaa2(void)

void FUN_148a3eaa2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_1477dabc8();
  *(byte *)(param_1 + 0x2a8) = *(byte *)(param_1 + 0x2a8) | 4;
  plVar1 = (longlong *)FUN_1477daf7c(param_1);
  lVar2 = *param_2;
  if (lVar2 != 0) {
    if (plVar1[0x24] == 0) {
      FUN_140486fc4(plVar1,lVar2,0);
    }
    else {
      (**(code **)(*plVar1 + 0x490))(plVar1,lVar2,&DAT_14cadada0,0);
    }
    if ((*(byte *)((longlong)plVar1 + 0x9c) & 1) == 0) {
      lVar2 = *(longlong *)(*param_2 + 0xb0);
      if (lVar2 == 0) {
        lVar2 = FUN_1448abda6();
      }
      FUN_140b506dc(plVar1,lVar2,0);
      *(undefined4 *)((longlong)plVar1 + 0x494) = 0xffffffff;
    }
  }
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
    *(longlong *)(param_1 + 0x2b0) = lVar2;
  }
  lVar2 = param_2[2];
  if (lVar2 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
    *(longlong *)(param_1 + 0x850) = lVar2;
  }
  return;
}



// FUNCTION 148a3eb84 FUN_148a3eb84 body=409 status=ok
// SIG undefined FUN_148a3eb84(void)

ulonglong FUN_148a3eb84(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  wchar_t *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = 0;
  if ((DAT_14cb0d2b0 != 0) && (lVar3 = FUN_145cbb6ba(), lVar1 = DAT_14cb0d2b0, lVar3 != 0)) {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    plVar4 = (longlong *)FUN_1456d2c7c(lVar1,lVar3,DAT_14c892fa8);
    if ((plVar4 != (longlong *)0x0) && (iVar2 = FUN_144a43e8c(plVar4), uVar7 = 0, iVar2 < 3)) {
      (**(code **)(*plVar4 + 0x308))(plVar4,&local_30);
      FUN_1400b22c2(&local_40,L":Asset");
      iVar2 = local_38 + -1;
      pwVar6 = local_40;
      if (local_38 == 0) {
        pwVar6 = L"";
        iVar2 = 0;
      }
      local_50 = 0xffffffff;
      local_58 = 1;
      iVar2 = FUN_1447ee042(&local_30,pwVar6,iVar2,1);
      if (local_40 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (iVar2 == -1) {
        uVar7 = 0;
      }
      else {
        puVar5 = local_30;
        if (local_28 == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        uVar7 = 0;
        uVar10 = local_28 - 1;
        if (local_28 == 0) {
          uVar10 = 0;
        }
        uVar8 = iVar2 + 1U;
        if ((int)uVar10 <= (int)(iVar2 + 1U)) {
          uVar8 = uVar10;
        }
        uVar9 = (ulonglong)uVar8;
        if ((int)uVar8 < 1) {
          uVar9 = uVar7;
        }
        FUN_14006620a(&local_40,puVar5 + uVar9,uVar10 - (int)uVar9);
        if (1 < local_38) {
          uVar10 = _wtoi(local_40);
          uVar7 = (ulonglong)uVar10;
        }
        if (local_40 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_30 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3ed1e FUN_148a3ed1e body=341 status=ok
// SIG undefined FUN_148a3ed1e(void)

undefined8 *
FUN_148a3ed1e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             byte param_5)

{
  uint *puVar1;
  int iVar2;
  void *pvVar3;
  byte bVar4;
  
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  pvVar3 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,pvVar3,(longlong)iVar2 * 2);
  }
  param_1[2] = 0;
  iVar2 = *(int *)(param_3 + 1);
  pvVar3 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar2,0);
    memcpy((void *)param_1[2],pvVar3,(longlong)iVar2 * 2);
  }
  puVar1 = (uint *)(param_4 + 8);
  param_1[4] = &PTR_FUN_14a184370;
  bVar4 = *(byte *)(param_4 + 0x18);
  *(byte *)(param_1 + 7) = bVar4;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar4])(param_1 + 5,puVar1);
  param_1[4] = &PTR_FUN_14a5af930;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(byte *)((longlong)param_1 + 0x51) = param_5;
  if ((param_5 & 1) != 0) {
    bVar4 = 0;
    if ((*(int *)(param_2 + 1) < 2) && (bVar4 = 0, *(int *)(param_3 + 1) < 2)) {
      if ((&DAT_149fc1b6e)[*(byte *)(param_4 + 0x18)] == '\x01') {
        if (*(longlong **)puVar1 == (longlong *)0x0) {
          bVar4 = 0;
        }
        else {
          bVar4 = (**(code **)(**(longlong **)puVar1 + 0x28))();
        }
      }
      else {
        bVar4 = (*puVar1 & 0xffffff) != 0;
      }
      bVar4 = bVar4 ^ 1;
    }
    *(byte *)(param_1 + 10) = bVar4;
  }
  return param_1;
}



// FUNCTION 148a3ee74 FUN_148a3ee74 body=132 status=ok
// SIG undefined FUN_148a3ee74(void)

longlong * FUN_148a3ee74(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  FUN_141238a10(param_1 + 4,param_2 + 4);
  *(short *)(param_1 + 10) = (short)param_2[10];
  return param_1;
}



// FUNCTION 148a3eef8 FUN_148a3eef8 body=101 status=ok
// SIG undefined FUN_148a3eef8(void)

void FUN_148a3eef8(longlong *param_1)

{
  param_1[4] = (longlong)&PTR_FUN_14a5af930;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = (longlong)&PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 7)])(param_1 + 5);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a3ef5e FUN_148a3ef5e body=68 status=ok
// SIG undefined FUN_148a3ef5e(void)

void FUN_148a3ef5e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1411bcc5e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_148a3ef91;
  }
  param_2 = 0;
LAB_148a3ef91:
  FUN_148a3efa2(param_1,param_2);
  return;
}



// FUNCTION 148a3efa2 FUN_148a3efa2 body=560 status=ok
// SIG undefined FUN_148a3efa2(void)

byte FUN_148a3efa2(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  byte bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) {
    bVar10 = 0;
    goto LAB_148a3efde;
  }
  if ((int)param_1[1] < 2) {
    bVar11 = false;
  }
  else {
    local_38 = *(undefined8 *)(param_2 + 0x18);
    FUN_1400021e4(&local_38,&local_48);
    iVar6 = (int)param_1[1];
    if (iVar6 == local_40) {
      bVar11 = true;
      if (1 < iVar6) {
        lVar8 = 0;
        while( true ) {
          uVar1 = *(ushort *)(*param_1 + lVar8);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)(local_48 + lVar8);
          uVar9 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148a3f055;
            }
            iVar6 = uVar5 - uVar9;
            goto LAB_148a3f1be;
          }
          if (uVar1 == 0) break;
LAB_148a3f055:
          lVar8 = lVar8 + 2;
        }
        iVar6 = 0;
LAB_148a3f1be:
        bVar11 = iVar6 == 0;
      }
    }
    else {
      bVar11 = local_40 + iVar6 == 1;
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    bVar11 = (bool)(bVar11 ^ 1);
  }
  bVar12 = true;
  if (1 < (int)param_1[3]) {
    local_38 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18);
    FUN_1400021e4(&local_38,&local_48);
    iVar6 = (int)param_1[3];
    if (iVar6 == local_40) {
      bVar12 = true;
      if (1 < iVar6) {
        lVar8 = 0;
        while( true ) {
          uVar1 = *(ushort *)(param_1[2] + lVar8);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)(local_48 + lVar8);
          uVar9 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148a3f14c;
            }
            iVar6 = uVar5 - uVar9;
            goto LAB_148a3f1cb;
          }
          if (uVar1 == 0) break;
LAB_148a3f14c:
          lVar8 = lVar8 + 2;
        }
        iVar6 = 0;
LAB_148a3f1cb:
        bVar12 = iVar6 == 0;
      }
    }
    else {
      bVar12 = local_40 + iVar6 == 1;
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((&DAT_149fc1b6e)[*(byte *)(param_1 + 7)] == '\x01') {
    bVar4 = 1;
    if ((longlong *)param_1[5] != (longlong *)0x0) {
      cVar3 = (**(code **)(*(longlong *)param_1[5] + 0x28))();
      if (cVar3 != '\0') goto LAB_148a3f0d8;
    }
  }
  else {
    bVar4 = 1;
    if ((*(uint *)(param_1 + 5) & 0xffffff) != 0) {
LAB_148a3f0d8:
      uVar7 = FUN_148a39a98(param_2);
      bVar4 = FUN_140ba41f1(param_1 + 4,uVar7);
    }
  }
  bVar10 = *(byte *)(param_1 + 10);
  if (!bVar11 && bVar10 == 0) {
    bVar10 = bVar12 & bVar4;
  }
LAB_148a3efde:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3f1d3 FUN_148a3f1d3 body=317 status=ok
// SIG undefined FUN_148a3f1d3(void)

longlong * FUN_148a3f1d3(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [88];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = 0;
  uStack_b0 = 0;
  uVar4 = FUN_1411bcc5e();
  local_c8 = 0;
  FUN_14123d74c(uVar4,&local_b8,1,0x10);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_148a3f312(local_a8,param_2);
  lVar2 = local_b8;
  lVar8 = (longlong)(int)uStack_b0;
  if (lVar8 != 0) {
    lVar6 = 0;
    do {
      cVar3 = FUN_148a3ef5e(local_a8,*(undefined8 *)(lVar2 + lVar6));
      if (cVar3 != '\0') {
        lVar7 = *(longlong *)(lVar2 + lVar6);
        if (lVar7 == 0) {
LAB_148a3f294:
          lVar7 = 0;
        }
        else {
          lVar5 = FUN_1411bcc5e();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_148a3f294;
        }
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_148a491d2(param_1,iVar1);
        }
        *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar7;
      }
      lVar6 = lVar6 + 8;
    } while (lVar8 * 8 != lVar6);
  }
  FUN_148a3eef8(local_a8);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3f312 FUN_148a3f312 body=230 status=ok
// SIG undefined FUN_148a3f312(void)

undefined8 * FUN_148a3f312(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  pvVar3 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,pvVar3,(longlong)iVar2 * 2);
  }
  param_1[2] = 0;
  iVar2 = *(int *)(param_2 + 3);
  pvVar3 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar2,0);
    memcpy((void *)param_1[2],pvVar3,(longlong)iVar2 * 2);
  }
  param_1[4] = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(param_2 + 7);
  *(byte *)(param_1 + 7) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(param_1 + 5,param_2 + 5);
  param_1[4] = &PTR_FUN_14a5af930;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 148a3f3f8 FUN_148a3f3f8 body=45 status=ok
// SIG undefined FUN_148a3f3f8(void)

longlong FUN_148a3f3f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a25e5e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a3f426 FUN_148a3f426 body=24 status=ok
// SIG undefined FUN_148a3f426(void)

bool FUN_148a3f426(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x4b0))();
  return lVar1 != 0;
}



// FUNCTION 148a3f43e FUN_148a3f43e body=45 status=ok
// SIG undefined FUN_148a3f43e(void)

longlong FUN_148a3f43e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145918d2a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a3f46c FUN_148a3f46c body=38 status=ok
// SIG undefined FUN_148a3f46c(void)

undefined8 FUN_148a3f46c(undefined8 param_1,int param_2)

{
  FUN_148a49258();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a3f4a0 FUN_148a3f4a0 body=50 status=ok
// SIG undefined FUN_148a3f4a0(void)

void FUN_148a3f4a0(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x3c8) = param_2;
  return;
}



// FUNCTION 148a3f51a FUN_148a3f51a body=60 status=ok
// SIG undefined FUN_148a3f51a(void)

undefined1 FUN_148a3f51a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 148a3f57e FUN_148a3f57e body=59 status=ok
// SIG undefined FUN_148a3f57e(void)

undefined8 FUN_148a3f57e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3f5c4 FUN_148a3f5c4 body=37 status=ok
// SIG undefined FUN_148a3f5c4(void)

void FUN_148a3f5c4(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148a3f680 FUN_148a3f680 body=54 status=ok
// SIG undefined FUN_148a3f680(void)

undefined1 FUN_148a3f680(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a33b3a(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148a3f6de FUN_148a3f6de body=59 status=ok
// SIG undefined FUN_148a3f6de(void)

undefined8 FUN_148a3f6de(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3f724 FUN_148a3f724 body=34 status=ok
// SIG undefined FUN_148a3f724(void)

void FUN_148a3f724(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148a34282(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148a3f7dc FUN_148a3f7dc body=54 status=ok
// SIG undefined FUN_148a3f7dc(void)

undefined1 FUN_148a3f7dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a3f93c(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148a3f83a FUN_148a3f83a body=59 status=ok
// SIG undefined FUN_148a3f83a(void)

undefined8 FUN_148a3f83a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3f880 FUN_148a3f880 body=34 status=ok
// SIG undefined FUN_148a3f880(void)

void FUN_148a3f880(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148a3f8f0(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148a3f8f0 FUN_148a3f8f0 body=75 status=ok
// SIG undefined FUN_148a3f8f0(void)

void FUN_148a3f8f0(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a3f93c FUN_148a3f93c body=69 status=ok
// SIG undefined FUN_148a3f93c(void)

longlong FUN_148a3f93c(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_1447a122a(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 148a3f9fc FUN_148a3f9fc body=88 status=ok
// SIG undefined FUN_148a3f9fc(void)

undefined8 FUN_148a3f9fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141238a10(param_2,param_3);
    FUN_144a787a6(param_2 + 0x30,param_3 + 0x30);
    FUN_144a787a6(param_2 + 0x40,param_3 + 0x40);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0x50);
    param_2 = param_2 + 0x58;
    param_3 = param_3 + 0x58;
  }
  return 1;
}



// FUNCTION 148a3fa7c FUN_148a3fa7c body=59 status=ok
// SIG undefined FUN_148a3fa7c(void)

undefined8 FUN_148a3fa7c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3fac2 FUN_148a3fac2 body=34 status=ok
// SIG undefined FUN_148a3fac2(void)

void FUN_148a3fac2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_145c7f17e(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148a3fb34 FUN_148a3fb34 body=38 status=ok
// SIG undefined FUN_148a3fb34(void)

undefined8 FUN_148a3fb34(undefined8 param_1,int param_2)

{
  FUN_14124f074();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a3fb5a FUN_148a3fb5a body=95 status=ok
// SIG undefined FUN_148a3fb5a(void)

void FUN_148a3fb5a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14124f12c(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000148a3fbad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a3fbba FUN_148a3fbba body=103 status=ok
// SIG undefined FUN_148a3fbba(void)

void FUN_148a3fbba(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 5,0,0xf8);
  *param_2 = &PTR_FUN_14b4c3b18;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_145ad316c(param_2 + 5);
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  *(undefined4 *)(param_2 + 0x23) = 9999;
  return;
}



// FUNCTION 148a3fc22 FUN_148a3fc22 body=82 status=ok
// SIG undefined FUN_148a3fc22(void)

void FUN_148a3fc22(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b4c3b18;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_145ad316c(param_2 + 5);
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  *(undefined4 *)(param_2 + 0x23) = 9999;
  return;
}



// FUNCTION 148a3fc92 FUN_148a3fc92 body=74 status=ok
// SIG undefined FUN_148a3fc92(void)

undefined8 FUN_148a3fc92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1461f4a06(param_2,param_3);
    *(undefined4 *)(param_2 + 0x118) = *(undefined4 *)(param_3 + 0x118);
    param_2 = param_2 + 0x120;
    param_3 = param_3 + 0x120;
  }
  return 1;
}



// FUNCTION 148a3fd04 FUN_148a3fd04 body=59 status=ok
// SIG undefined FUN_148a3fd04(void)

undefined8 FUN_148a3fd04(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a3fd50 FUN_148a3fd50 body=38 status=ok
// SIG undefined FUN_148a3fd50(void)

void FUN_148a3fd50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_14124efea(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 148a3fdc6 FUN_148a3fdc6 body=38 status=ok
// SIG undefined FUN_148a3fdc6(void)

undefined8 FUN_148a3fdc6(undefined8 param_1,int param_2)

{
  FUN_148a4004a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a3fdee FUN_148a3fdee body=120 status=ok
// SIG undefined FUN_148a3fdee(void)

longlong * FUN_148a3fdee(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xe8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4c3aa0;
  FUN_145ad316c(plVar3 + 2);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 148a3fe66 FUN_148a3fe66 body=73 status=ok
// SIG undefined FUN_148a3fe66(void)

undefined8 * FUN_148a3fe66(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4c3a98;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_148a3feb0(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a3feb0 FUN_148a3feb0 body=54 status=ok
// SIG undefined FUN_148a3feb0(void)

void FUN_148a3feb0(longlong *param_1)

{
  FUN_148a3fee6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a3fee6 FUN_148a3fee6 body=353 status=ok
// SIG undefined FUN_148a3fee6(void)

void FUN_148a3fee6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_140c3a2ac(*local_70 + (longlong)iStack_54 * 0x38 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144748838(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148a4004a FUN_148a4004a body=97 status=ok
// SIG undefined FUN_148a4004a(void)

void FUN_148a4004a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4c3a80;
  param_1[4] = &PTR_FUN_14b4c3a98;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_148a3feb0(param_1 + 5);
  FUN_145fee2f2(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a400ac FUN_148a400ac body=9 status=ok
// SIG undefined FUN_148a400ac(void)

void FUN_148a400ac(longlong param_1)

{
  FUN_14124f074(param_1 + 0x10);
  return;
}



// FUNCTION 148a400b6 FUN_148a400b6 body=29 status=ok
// SIG undefined FUN_148a400b6(void)

undefined8 FUN_148a400b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a400d4 FUN_148a400d4 body=93 status=ok
// SIG undefined FUN_148a400d4(void)

undefined8 * FUN_148a400d4(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_1412c5fc6(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 148a40132 FUN_148a40132 body=47 status=ok
// SIG undefined FUN_148a40132(void)

void FUN_148a40132(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf8);
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0xffffffff00000080;
  return;
}



// FUNCTION 148a401ee FUN_148a401ee body=63 status=ok
// SIG undefined FUN_148a401ee(void)

undefined1 FUN_148a401ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a403ea(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148a40256 FUN_148a40256 body=59 status=ok
// SIG undefined FUN_148a40256(void)

undefined8 FUN_148a40256(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a402a2 FUN_148a402a2 body=40 status=ok
// SIG undefined FUN_148a402a2(void)

void FUN_148a402a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_148a40318(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148a40318 FUN_148a40318 body=210 status=ok
// SIG undefined FUN_148a40318(void)

void FUN_148a40318(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x15);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a403ea FUN_148a403ea body=182 status=ok
// SIG undefined FUN_148a403ea(void)

longlong FUN_148a403ea(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  FUN_144a787a6(param_1 + 0x58,param_2 + 0x58);
  FUN_144a787a6(param_1 + 0x68,param_2 + 0x68);
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
  FUN_144a787a6(param_1 + 0x98,param_2 + 0x98);
  FUN_14058acb2(param_1 + 0xa8,param_2 + 0xa8);
  return param_1;
}



// FUNCTION 148a404a2 FUN_148a404a2 body=37 status=ok
// SIG undefined FUN_148a404a2(void)

void FUN_148a404a2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe8);
  FUN_148a34f7a(param_2);
  return;
}



// FUNCTION 148a404ee FUN_148a404ee body=63 status=ok
// SIG undefined FUN_148a404ee(void)

undefined1 FUN_148a404ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a40618(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 148a40556 FUN_148a40556 body=59 status=ok
// SIG undefined FUN_148a40556(void)

undefined8 FUN_148a40556(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a405a2 FUN_148a405a2 body=40 status=ok
// SIG undefined FUN_148a405a2(void)

void FUN_148a405a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_148a3501c(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148a40618 FUN_148a40618 body=337 status=ok
// SIG undefined FUN_148a40618(void)

longlong FUN_148a40618(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_144a787a6();
  plVar1 = *(longlong **)(param_2 + 0x10);
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
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  plVar1 = *(longlong **)(param_2 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x20) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  plVar1 = *(longlong **)(param_2 + 0x30);
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x30) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  plVar1 = *(longlong **)(param_2 + 0x40);
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x40) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  plVar1 = *(longlong **)(param_2 + 0x58);
  plVar2 = *(longlong **)(param_1 + 0x58);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x58) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  uVar4 = *(undefined4 *)(param_2 + 0x88);
  uVar5 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  *(undefined4 *)(param_1 + 0x8c) = uVar5;
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  FUN_14058acb2(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 148a407a8 FUN_148a407a8 body=80 status=ok
// SIG undefined FUN_148a407a8(void)

undefined1 FUN_148a407a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    FUN_144a787a6(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148a40820 FUN_148a40820 body=59 status=ok
// SIG undefined FUN_148a40820(void)

undefined8 FUN_148a40820(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a40866 FUN_148a40866 body=34 status=ok
// SIG undefined FUN_148a40866(void)

void FUN_148a40866(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_148a408d6(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148a408d6 FUN_148a408d6 body=61 status=ok
// SIG undefined FUN_148a408d6(void)

void FUN_148a408d6(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a40914 FUN_148a40914 body=37 status=ok
// SIG undefined FUN_148a40914(void)

void FUN_148a40914(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x400)) {
    *(undefined4 *)(param_1 + 0x404) = 0x400;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a4093a FUN_148a4093a body=148 status=ok
// SIG undefined FUN_148a4093a(void)

longlong * FUN_148a4093a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    param_1[2] = param_2[2];
    param_2[2] = 0;
    plVar2 = (longlong *)param_2[3];
    plVar3 = (longlong *)param_1[3];
    if (plVar2 != plVar3) {
      param_2[3] = 0;
      param_1[3] = (longlong)plVar2;
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
  lVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar4;
  return param_1;
}



// FUNCTION 148a409ce FUN_148a409ce body=181 status=ok
// SIG undefined FUN_148a409ce(void)

void FUN_148a409ce(longlong param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar3 = *(longlong *)(param_1 + 8);
  lVar6 = (longlong)param_2 * 0x20;
  iVar2 = **(int **)(lVar3 + 0x18 + lVar6);
  *param_3 = *(undefined8 *)(lVar3 + 0x10 + lVar6);
  *(int *)(param_3 + 1) = iVar2;
  *(int *)(param_3 + 2) = iVar2 << 3;
  uVar4 = *(undefined8 *)(lVar3 + lVar6);
  plVar5 = *(longlong **)(lVar3 + 8 + lVar6);
  if (plVar5 == (longlong *)0x0) {
    param_3[4] = uVar4;
    plVar7 = (longlong *)param_3[5];
    if (plVar7 == (longlong *)0x0) goto LAB_148a40a74;
    param_3[5] = 0;
LAB_148a40a3e:
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_148a40a74;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar5 = plVar7;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    param_3[4] = uVar4;
    plVar7 = (longlong *)param_3[5];
    if (plVar5 != plVar7) {
      param_3[5] = plVar5;
      if (plVar7 == (longlong *)0x0) goto LAB_148a40a74;
      goto LAB_148a40a3e;
    }
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_148a40a74;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_148a40a74:
  *(undefined4 *)(param_3 + 6) = 0;
  return;
}



// FUNCTION 148a40a84 FUN_148a40a84 body=38 status=ok
// SIG undefined FUN_148a40a84(void)

undefined8 FUN_148a40a84(undefined8 param_1,int param_2)

{
  FUN_14124efea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a40aaa FUN_148a40aaa body=38 status=ok
// SIG undefined FUN_148a40aaa(void)

undefined8 FUN_148a40aaa(undefined8 param_1,int param_2)

{
  FUN_148a38158();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a40ad0 FUN_148a40ad0 body=61 status=ok
// SIG undefined FUN_148a40ad0(void)

undefined8 * FUN_148a40ad0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4c1f68;
  (*(code *)(&PTR_FUN_14b4c1f70)[*(byte *)(param_1 + 6)])(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a40b0e FUN_148a40b0e body=56 status=ok
// SIG undefined FUN_148a40b0e(void)

void FUN_148a40b0e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x000148a40b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a40b46 FUN_148a40b46 body=61 status=ok
// SIG undefined FUN_148a40b46(void)

undefined8 * FUN_148a40b46(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4c1f80;
  (*(code *)(&PTR_FUN_14b4c1f90)[*(byte *)(param_1 + 6)])(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a40b84 FUN_148a40b84 body=56 status=ok
// SIG undefined FUN_148a40b84(void)

void FUN_148a40b84(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x000148a40bb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a40bca FUN_148a40bca body=275 status=ok
// SIG undefined FUN_148a40bca(void)

void FUN_148a40bca(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pcVar1 = (code *)*param_1;
  if (pcVar1 != (code *)0x0) {
    plVar9 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[2];
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar1)(uVar8);
    local_98 = *param_1;
    uStack_50 = param_1[1];
    local_88 = (longlong *)param_1[2];
    uStack_40 = param_1[3];
    local_38 = param_1[4];
    uStack_30 = param_1[5];
    local_28 = param_1[6];
    uStack_20 = param_1[7];
    lVar6 = local_28;
    lVar7 = uStack_20;
    lVar4 = local_38;
    lVar5 = uStack_30;
    local_48 = local_88;
    lVar3 = uStack_40;
    local_58 = local_98;
    lVar2 = uStack_50;
    param_1[6] = CONCAT44(uStack_64,local_68);
    param_1[7] = CONCAT44(uStack_5c,uStack_60);
    param_1[4] = CONCAT44(uStack_74,local_78);
    param_1[5] = CONCAT44(uStack_6c,uStack_70);
    param_1[2] = 0;
    param_1[3] = CONCAT44(uStack_7c,uStack_80);
    *param_1 = 0;
    param_1[1] = CONCAT44(uStack_8c,uStack_90);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
    uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
    local_68 = (undefined4)local_28;
    uStack_64 = local_28._4_4_;
    uStack_60 = (undefined4)uStack_20;
    uStack_5c = uStack_20._4_4_;
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_50 = lVar2;
    uStack_40 = lVar3;
    local_38 = lVar4;
    uStack_30 = lVar5;
    local_28 = lVar6;
    uStack_20 = lVar7;
    if (local_98 != 0) {
      plVar9 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar9 = (longlong *)&local_78;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a40cde FUN_148a40cde body=29 status=ok
// SIG undefined FUN_148a40cde(void)

undefined8 FUN_148a40cde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a40d16 FUN_148a40d16 body=29 status=ok
// SIG undefined FUN_148a40d16(void)

bool FUN_148a40d16(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a40d34 FUN_148a40d34 body=26 status=ok
// SIG undefined FUN_148a40d34(void)

bool FUN_148a40d34(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a40d4e FUN_148a40d4e body=24 status=ok
// SIG undefined FUN_148a40d4e(void)

bool FUN_148a40d4e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a40d66 FUN_148a40d66 body=93 status=ok
// SIG undefined FUN_148a40d66(void)

void FUN_148a40d66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c2000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a40dc4 FUN_148a40dc4 body=93 status=ok
// SIG undefined FUN_148a40dc4(void)

void FUN_148a40dc4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c2000;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a40e22 FUN_148a40e22 body=126 status=ok
// SIG undefined FUN_148a40e22(void)

void FUN_148a40e22(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b438700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4c2000;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a40e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a40ea0 FUN_148a40ea0 body=48 status=ok
// SIG undefined FUN_148a40ea0(void)

void FUN_148a40ea0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a40ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148a40ed0 FUN_148a40ed0 body=163 status=ok
// SIG undefined FUN_148a40ed0(void)

bool FUN_148a40ed0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a40f74 FUN_148a40f74 body=29 status=ok
// SIG undefined FUN_148a40f74(void)

undefined8 FUN_148a40f74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a40fac FUN_148a40fac body=29 status=ok
// SIG undefined FUN_148a40fac(void)

bool FUN_148a40fac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a40fca FUN_148a40fca body=26 status=ok
// SIG undefined FUN_148a40fca(void)

bool FUN_148a40fca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a40fe4 FUN_148a40fe4 body=24 status=ok
// SIG undefined FUN_148a40fe4(void)

bool FUN_148a40fe4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a40ffc FUN_148a40ffc body=93 status=ok
// SIG undefined FUN_148a40ffc(void)

void FUN_148a40ffc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c2070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a4105a FUN_148a4105a body=93 status=ok
// SIG undefined FUN_148a4105a(void)

void FUN_148a4105a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c2070;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a410b8 FUN_148a410b8 body=126 status=ok
// SIG undefined FUN_148a410b8(void)

void FUN_148a410b8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b438700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4c2070;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a41127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a41136 FUN_148a41136 body=48 status=ok
// SIG undefined FUN_148a41136(void)

void FUN_148a41136(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a41163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148a41166 FUN_148a41166 body=163 status=ok
// SIG undefined FUN_148a41166(void)

bool FUN_148a41166(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a4120a FUN_148a4120a body=31 status=ok
// SIG undefined FUN_148a4120a(void)

undefined8 FUN_148a4120a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a41244 FUN_148a41244 body=29 status=ok
// SIG undefined FUN_148a41244(void)

bool FUN_148a41244(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a41262 FUN_148a41262 body=26 status=ok
// SIG undefined FUN_148a41262(void)

bool FUN_148a41262(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a4127c FUN_148a4127c body=24 status=ok
// SIG undefined FUN_148a4127c(void)

bool FUN_148a4127c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a41294 FUN_148a41294 body=93 status=ok
// SIG undefined FUN_148a41294(void)

void FUN_148a41294(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c20e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a412f2 FUN_148a412f2 body=93 status=ok
// SIG undefined FUN_148a412f2(void)

void FUN_148a412f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c20e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a41350 FUN_148a41350 body=126 status=ok
// SIG undefined FUN_148a41350(void)

void FUN_148a41350(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b438870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4c20e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a413bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a413ce FUN_148a413ce body=56 status=ok
// SIG undefined FUN_148a413ce(void)

void FUN_148a413ce(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a41403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148a41406 FUN_148a41406 body=182 status=ok
// SIG undefined FUN_148a41406(void)

bool FUN_148a41406(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_48 = param_5;
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a414be FUN_148a414be body=31 status=ok
// SIG undefined FUN_148a414be(void)

undefined8 FUN_148a414be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a414f8 FUN_148a414f8 body=29 status=ok
// SIG undefined FUN_148a414f8(void)

bool FUN_148a414f8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a41516 FUN_148a41516 body=26 status=ok
// SIG undefined FUN_148a41516(void)

bool FUN_148a41516(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a41530 FUN_148a41530 body=24 status=ok
// SIG undefined FUN_148a41530(void)

bool FUN_148a41530(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a41548 FUN_148a41548 body=93 status=ok
// SIG undefined FUN_148a41548(void)

void FUN_148a41548(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c2150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a415a6 FUN_148a415a6 body=93 status=ok
// SIG undefined FUN_148a415a6(void)

void FUN_148a415a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c2150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a41604 FUN_148a41604 body=126 status=ok
// SIG undefined FUN_148a41604(void)

void FUN_148a41604(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149eae4d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4c2150;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a41673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a41682 FUN_148a41682 body=48 status=ok
// SIG undefined FUN_148a41682(void)

void FUN_148a41682(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a416af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148a416b2 FUN_148a416b2 body=163 status=ok
// SIG undefined FUN_148a416b2(void)

bool FUN_148a416b2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a41756 FUN_148a41756 body=31 status=ok
// SIG undefined FUN_148a41756(void)

undefined8 FUN_148a41756(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a41790 FUN_148a41790 body=29 status=ok
// SIG undefined FUN_148a41790(void)

bool FUN_148a41790(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a417ae FUN_148a417ae body=26 status=ok
// SIG undefined FUN_148a417ae(void)

bool FUN_148a417ae(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a417c8 FUN_148a417c8 body=24 status=ok
// SIG undefined FUN_148a417c8(void)

bool FUN_148a417c8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a417e0 FUN_148a417e0 body=93 status=ok
// SIG undefined FUN_148a417e0(void)

void FUN_148a417e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c21c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a4183e FUN_148a4183e body=93 status=ok
// SIG undefined FUN_148a4183e(void)

void FUN_148a4183e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149eae4d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c21c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a4189c FUN_148a4189c body=126 status=ok
// SIG undefined FUN_148a4189c(void)

void FUN_148a4189c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149eae4d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4c21c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a4190b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a4191a FUN_148a4191a body=48 status=ok
// SIG undefined FUN_148a4191a(void)

void FUN_148a4191a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a41947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148a4194a FUN_148a4194a body=163 status=ok
// SIG undefined FUN_148a4194a(void)

bool FUN_148a4194a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a419ee FUN_148a419ee body=29 status=ok
// SIG undefined FUN_148a419ee(void)

undefined8 FUN_148a419ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a41a26 FUN_148a41a26 body=29 status=ok
// SIG undefined FUN_148a41a26(void)

bool FUN_148a41a26(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a41a44 FUN_148a41a44 body=26 status=ok
// SIG undefined FUN_148a41a44(void)

bool FUN_148a41a44(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a41a5e FUN_148a41a5e body=24 status=ok
// SIG undefined FUN_148a41a5e(void)

bool FUN_148a41a5e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a41a82 FUN_148a41a82 body=93 status=ok
// SIG undefined FUN_148a41a82(void)

void FUN_148a41a82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c3ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c2230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a41ae0 FUN_148a41ae0 body=93 status=ok
// SIG undefined FUN_148a41ae0(void)

void FUN_148a41ae0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c3ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c2230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a41b3e FUN_148a41b3e body=126 status=ok
// SIG undefined FUN_148a41b3e(void)

void FUN_148a41b3e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4c3ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4c2230;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a41bad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a41bbc FUN_148a41bbc body=132 status=ok
// SIG undefined FUN_148a41bbc(void)

void FUN_148a41bbc(longlong param_1,longlong *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  pcVar1 = *(code **)(param_1 + 0x20);
  local_30 = *param_2;
  *param_2 = 0;
  local_28 = (undefined4)param_2[1];
  local_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  (*pcVar1)(uVar2,&local_30,param_3);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a41c42 FUN_148a41c42 body=212 status=ok
// SIG undefined FUN_148a41c42(void)

bool FUN_148a41c42(longlong param_1,longlong *param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar4 = local_40;
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x20);
    local_40 = *param_2;
    *param_2 = 0;
    local_38 = (undefined4)param_2[1];
    local_34 = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    (*pcVar1)(lVar3,&local_40,param_3);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a41d1a FUN_148a41d1a body=130 status=ok
// SIG undefined FUN_148a41d1a(void)

void FUN_148a41d1a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a41d9e FUN_148a41d9e body=29 status=ok
// SIG undefined FUN_148a41d9e(void)

undefined8 FUN_148a41d9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a41dd6 FUN_148a41dd6 body=29 status=ok
// SIG undefined FUN_148a41dd6(void)

bool FUN_148a41dd6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a41df4 FUN_148a41df4 body=26 status=ok
// SIG undefined FUN_148a41df4(void)

bool FUN_148a41df4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a41e0e FUN_148a41e0e body=24 status=ok
// SIG undefined FUN_148a41e0e(void)

bool FUN_148a41e0e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a41e26 FUN_148a41e26 body=93 status=ok
// SIG undefined FUN_148a41e26(void)

void FUN_148a41e26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c3ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c22a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a41e84 FUN_148a41e84 body=93 status=ok
// SIG undefined FUN_148a41e84(void)

void FUN_148a41e84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4c3ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c22a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a41ee2 FUN_148a41ee2 body=126 status=ok
// SIG undefined FUN_148a41ee2(void)

void FUN_148a41ee2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4c3ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4c22a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a41f51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a41f60 FUN_148a41f60 body=132 status=ok
// SIG undefined FUN_148a41f60(void)

void FUN_148a41f60(longlong param_1,longlong *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14479d2ce(param_1 + 0x18);
  pcVar1 = *(code **)(param_1 + 0x20);
  local_30 = *param_2;
  *param_2 = 0;
  local_28 = (undefined4)param_2[1];
  local_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  (*pcVar1)(uVar2,&local_30,param_3);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a41fe6 FUN_148a41fe6 body=212 status=ok
// SIG undefined FUN_148a41fe6(void)

bool FUN_148a41fe6(longlong param_1,longlong *param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar4 = local_40;
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x20);
    local_40 = *param_2;
    *param_2 = 0;
    local_38 = (undefined4)param_2[1];
    local_34 = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    (*pcVar1)(lVar3,&local_40,param_3);
  }
  if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar4);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a420bb FUN_148a420bb body=41 status=ok
// SIG undefined FUN_148a420bb(void)

void FUN_148a420bb(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14124efea(param_1);
    param_1 = param_1 + 0x120;
  }
  return;
}



// FUNCTION 148a420e4 FUN_148a420e4 body=115 status=ok
// SIG undefined FUN_148a420e4(void)

void FUN_148a420e4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x120,8);
    iVar2 = (int)(uVar1 / 0x120);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x120,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a42157 FUN_148a42157 body=72 status=ok
// SIG undefined FUN_148a42157(void)

void FUN_148a42157(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14589e2aa(param_1,param_2);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
    param_1 = param_1 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return;
}



// FUNCTION 148a421a0 FUN_148a421a0 body=31 status=ok
// SIG undefined FUN_148a421a0(void)

undefined8 FUN_148a421a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a421da FUN_148a421da body=29 status=ok
// SIG undefined FUN_148a421da(void)

bool FUN_148a421da(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a421f8 FUN_148a421f8 body=26 status=ok
// SIG undefined FUN_148a421f8(void)

bool FUN_148a421f8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a42212 FUN_148a42212 body=24 status=ok
// SIG undefined FUN_148a42212(void)

bool FUN_148a42212(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a4222a FUN_148a4222a body=93 status=ok
// SIG undefined FUN_148a4222a(void)

void FUN_148a4222a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c2310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a42288 FUN_148a42288 body=93 status=ok
// SIG undefined FUN_148a42288(void)

void FUN_148a42288(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c2310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a422e6 FUN_148a422e6 body=126 status=ok
// SIG undefined FUN_148a422e6(void)

void FUN_148a422e6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4c2310;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a42355. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a42364 FUN_148a42364 body=38 status=ok
// SIG undefined FUN_148a42364(void)

void FUN_148a42364(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a42387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148a4238a FUN_148a4238a body=150 status=ok
// SIG undefined FUN_148a4238a(void)

bool FUN_148a4238a(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a42422 FUN_148a42422 body=24 status=ok
// SIG undefined FUN_148a42422(void)

void FUN_148a42422(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a42436. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148a4243a FUN_148a4243a body=29 status=ok
// SIG undefined FUN_148a4243a(void)

undefined8 FUN_148a4243a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a42458 FUN_148a42458 body=147 status=ok
// SIG undefined FUN_148a42458(void)

void FUN_148a42458(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x120,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x120)) {
      uVar5 = uVar4 / 0x120 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x120,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a424ec FUN_148a424ec body=98 status=ok
// SIG undefined FUN_148a424ec(void)

void FUN_148a424ec(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a4254e FUN_148a4254e body=52 status=ok
// SIG undefined FUN_148a4254e(void)

void FUN_148a4254e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148a42582(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 148a42582 FUN_148a42582 body=312 status=ok
// SIG undefined FUN_148a42582(void)

undefined8 * FUN_148a42582(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148a426ba FUN_148a426ba body=29 status=ok
// SIG undefined FUN_148a426ba(void)

undefined8 FUN_148a426ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a426f2 FUN_148a426f2 body=29 status=ok
// SIG undefined FUN_148a426f2(void)

bool FUN_148a426f2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a42710 FUN_148a42710 body=26 status=ok
// SIG undefined FUN_148a42710(void)

bool FUN_148a42710(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a4272a FUN_148a4272a body=24 status=ok
// SIG undefined FUN_148a4272a(void)

bool FUN_148a4272a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a42742 FUN_148a42742 body=93 status=ok
// SIG undefined FUN_148a42742(void)

void FUN_148a42742(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c23a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a427a0 FUN_148a427a0 body=93 status=ok
// SIG undefined FUN_148a427a0(void)

void FUN_148a427a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b438ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4c23a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a427fe FUN_148a427fe body=126 status=ok
// SIG undefined FUN_148a427fe(void)

void FUN_148a427fe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b438ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4c23a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a4286d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a4287c FUN_148a4287c body=48 status=ok
// SIG undefined FUN_148a4287c(void)

void FUN_148a4287c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a428a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148a428ac FUN_148a428ac body=163 status=ok
// SIG undefined FUN_148a428ac(void)

bool FUN_148a428ac(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a42950 FUN_148a42950 body=9 status=ok
// SIG undefined FUN_148a42950(void)

void FUN_148a42950(longlong param_1)

{
  FUN_145842390(param_1 + 0x10);
  return;
}



// FUNCTION 148a4295a FUN_148a4295a body=29 status=ok
// SIG undefined FUN_148a4295a(void)

undefined8 FUN_148a4295a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a42978 FUN_148a42978 body=29 status=ok
// SIG undefined FUN_148a42978(void)

undefined8 FUN_148a42978(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


