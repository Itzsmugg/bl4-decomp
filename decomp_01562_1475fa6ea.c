// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1475fa6ea FUN_1475fa6ea body=212 status=ok
// SIG undefined FUN_1475fa6ea(void)

void FUN_1475fa6ea(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_stack_00000028;
  undefined1 auStack_138 [40];
  undefined2 *local_110;
  undefined1 *local_108;
  undefined2 local_100;
  undefined2 local_fe;
  undefined2 local_fc;
  undefined1 local_f7;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined2 local_ea;
  undefined1 local_e8 [24];
  undefined1 local_d0 [80];
  longlong local_80;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  local_100 = *(undefined2 *)(lVar1 + 0x4a);
  local_fe = *(undefined2 *)(lVar1 + 0x62);
  local_fc = *(undefined2 *)(lVar2 + 100);
  local_f7 = 0;
  local_f4 = 0x6ff;
  local_f0 = 0;
  local_ea = *(undefined2 *)(lVar1 + 0x11a);
  local_110 = &local_ea;
  local_108 = local_e8;
  FUN_1475f4db6(&local_100,local_e8);
  FUN_1475fd822(local_e8,in_stack_00000028 + 0x28,local_d0);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fa7c0 FUN_1475fa7c0 body=520 status=ok
// SIG undefined FUN_1475fa7c0(void)

longlong * FUN_1475fa7c0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1475fdbfe(param_4,&local_48,*(undefined4 *)(param_1 + 8));
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) goto LAB_1475fa804;
  plVar4 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a4c23f0;
  plVar5 = plVar4 + 2;
  FUN_1475fdd6c(plVar5,param_3);
  local_58 = plVar5;
  local_50 = plVar4;
  FUN_1475ff818(&local_58,plVar5);
  plVar2 = local_40;
  local_48 = plVar5;
  if (plVar4 == (longlong *)0x0) {
    if (local_40 != (longlong *)0x0) {
      local_40 = (longlong *)0x0;
LAB_1475fa98f:
      LOCK();
      plVar5 = plVar2 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001475fa97e:
        if (iVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 == local_40) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar2 = plVar4;
        goto joined_r0x0001475fa97e;
      }
    }
    else {
      bVar6 = local_40 != (longlong *)0x0;
      local_40 = plVar4;
      if (bVar6) goto LAB_1475fa98f;
    }
  }
  plVar5 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = local_48;
  (**(code **)(*local_48 + 0x10))(local_48,*(undefined4 *)(param_1 + 8),param_4);
  local_68 = plVar5;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar5 = local_48;
  }
  FUN_1475fdcb2(param_4,*(undefined4 *)(param_1 + 8),&local_68);
LAB_1475fa804:
  plVar2 = local_40;
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fa9cc FUN_1475fa9cc body=130 status=ok
// SIG undefined FUN_1475fa9cc(void)

void FUN_1475fa9cc(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1475ff8c0(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475faa50 FUN_1475faa50 body=616 status=ok
// SIG undefined FUN_1475faa50(void)

void FUN_1475faa50(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_1475ffc46(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475facba FUN_1475facba body=615 status=ok
// SIG undefined FUN_1475facba(void)

void FUN_1475facba(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar3 = (int)param_4[1];
  local_b8 = param_3;
  if (0 < iVar3) {
    lVar8 = *param_6;
    local_c0 = param_5 + 0x28;
    lVar6 = 0;
    do {
      if (*(short *)(*param_4 + lVar6 * 2) != -1) {
        FUN_1432d4ca4(local_c0,&local_60);
        lVar2 = local_60;
        lVar4 = (longlong)local_58;
        FUN_1475b4978(local_60,&local_60,*(undefined2 *)(*param_3 + 0xc));
        local_b0 = (undefined8 *)(local_50 + lVar4 * 8);
        if (local_50 == 0) {
          local_b0 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_78,*(undefined2 *)(*param_3 + 8));
        puVar7 = (undefined8 *)(local_68 + lVar4 * 8);
        if (local_68 == 0) {
          puVar7 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_90,*(undefined2 *)(*param_3 + 4));
        puVar5 = (undefined8 *)(local_80 + lVar4 * 8);
        if (local_80 == 0) {
          puVar5 = (undefined8 *)0x0;
        }
        FUN_1475b4978(lVar2,&local_a8,*(undefined2 *)*param_3);
        lVar2 = *param_3;
        if ((local_98 != 0) &&
           (puVar1 = (undefined8 *)(local_98 + lVar4 * 8), puVar1 != (undefined8 *)0x0)) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 2)) = *puVar1;
        }
        if (puVar5 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 6)) = *puVar5;
        }
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 10)) = *puVar7;
        }
        if (local_b0 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar8 + (ulonglong)*(ushort *)(lVar2 + 0xe)) = *local_b0;
        }
        if (local_a8 != 0) {
          LOCK();
          *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
          UNLOCK();
          if (local_a0 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
          }
        }
        if (local_90 != 0) {
          LOCK();
          *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
          UNLOCK();
          if (local_88 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
          }
        }
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
          UNLOCK();
          if (local_70 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
          }
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar3 = (int)param_4[1];
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x20;
    } while (lVar6 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475faf22 FUN_1475faf22 body=555 status=ok
// SIG undefined FUN_1475faf22(void)

int * FUN_1475faf22(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[4] == -1)) || (param_1[5] == -1)) ||
     (((param_1[6] == -1 || (param_1[7] == -1)) ||
      ((param_1[8] == -1 || (cVar4 = FUN_1475f1940(param_1,param_3), cVar4 == '\0')))))) {
    *param_2 = -1;
    goto LAB_1475faf80;
  }
  plVar5 = (longlong *)FUN_1475fb19f(param_1,param_7);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x40);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x54);
  FUN_1475f1a86(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1475fb292;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x10;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1475fb0da;
    }
  }
  else {
LAB_1475fb0da:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_1475faf80:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1475fb14e FUN_1475fb14e body=80 status=ok
// SIG undefined FUN_1475fb14e(void)

void FUN_1475fb14e(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1475fb2aa(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fb19f FUN_1475fb19f body=180 status=ok
// SIG undefined FUN_1475fb19f(void)

undefined8 * FUN_1475fb19f(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_LAB_14a4c2390;
  puVar8[2] = &PTR_FUN_14a4c23a8;
  param_2 = (longlong *)*param_2;
  puVar8[3] = param_2;
  puVar8[4] = 0;
  puVar8[5] = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38);
    puVar8[4] = local_38;
    puVar8[5] = uStack_30;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  *(undefined4 *)(puVar8 + 8) = param_1[4];
  *(undefined4 *)((longlong)puVar8 + 0x44) = uVar5;
  *(undefined4 *)(puVar8 + 9) = uVar6;
  *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar7;
  *(undefined4 *)(puVar8 + 6) = uVar1;
  *(undefined4 *)((longlong)puVar8 + 0x34) = uVar2;
  *(undefined4 *)(puVar8 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fb256 FUN_1475fb256 body=29 status=ok
// SIG undefined FUN_1475fb256(void)

undefined8 FUN_1475fb256(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475fb274 FUN_1475fb274 body=29 status=ok
// SIG undefined FUN_1475fb274(void)

undefined8 FUN_1475fb274(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475fb2aa FUN_1475fb2aa body=303 status=ok
// SIG undefined FUN_1475fb2aa(void)

void FUN_1475fb2aa(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar1 = (uint *)*param_3;
  lVar2 = *(longlong *)(local_68 + 0x20);
  local_70 = (ulonglong)puVar1[6];
  lVar3 = 0;
  local_60 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_60 = lVar3;
  }
  local_58 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_58 = lVar3;
  }
  local_50 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_50 = lVar3;
  }
  lVar4 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar4 = lVar3;
  }
  local_98 = lVar2 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_98 = lVar3;
  }
  local_90 = lVar2 + (ulonglong)puVar1[5];
  if ((ulonglong)puVar1[5] == 0xffffffff) {
    local_90 = lVar3;
  }
  local_88 = lVar2 + local_70;
  if (local_70 == 0xffffffff) {
    local_88 = lVar3;
  }
  local_80 = lVar2 + (ulonglong)puVar1[7];
  if ((ulonglong)puVar1[7] == 0xffffffff) {
    local_80 = lVar3;
  }
  local_78 = lVar2 + (ulonglong)puVar1[8];
  if ((ulonglong)puVar1[8] == 0xffffffff) {
    local_78 = lVar3;
  }
  FUN_1475fb3da(param_1,local_68,lVar4,&local_60);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fb3da FUN_1475fb3da body=612 status=ok
// SIG undefined FUN_1475fb3da(void)

void FUN_1475fb3da(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = (ulonglong)*(ushort *)(param_2 + 0xe);
  if (*param_4 == 0) {
    lVar6 = param_4[1];
    if (lVar6 == 0) {
      puVar9 = (undefined8 *)param_4[2];
      if (*(ushort *)(param_2 + 0xe) != 0 && puVar9 != (undefined8 *)0x0) {
        uVar10 = 0;
        do {
          local_50 = *(undefined8 *)(param_9 + uVar10 * 8);
          local_58 = *(undefined8 *)(param_8 + uVar10 * 8);
          local_60 = *(undefined8 *)(param_7 + uVar10 * 8);
          local_68 = *(undefined8 *)(param_6 + uVar10 * 8);
          FUN_1475fb690(*(undefined8 *)(param_3 + uVar10 * 8),*(undefined1 *)(param_5 + uVar10),
                        *puVar9,&local_68);
          uVar10 = uVar10 + 1;
          puVar9 = puVar9 + 2;
        } while (local_78 != uVar10);
      }
    }
    else if (local_78 != 0) {
      uVar10 = 0;
      do {
        uVar8 = (ulonglong)*(ushort *)(lVar6 + uVar10 * 2);
        if (uVar8 != 0) {
          uVar1 = *(undefined8 *)(param_8 + uVar10 * 8);
          uVar2 = *(undefined8 *)(param_7 + uVar10 * 8);
          uVar3 = *(undefined8 *)(param_6 + uVar10 * 8);
          lVar7 = *(longlong *)(param_3 + uVar10 * 8);
          cVar5 = *(char *)(param_5 + uVar10);
          if (cVar5 == '\x04') {
            uVar4 = *(undefined8 *)(param_9 + uVar10 * 8);
            *(undefined8 *)(lVar7 + uVar8) = uVar3;
            *(undefined8 *)(lVar7 + 8 + uVar8) = uVar2;
            *(undefined8 *)(lVar7 + 0x10 + uVar8) = uVar1;
            *(undefined8 *)(lVar7 + 0x18 + uVar8) = uVar4;
          }
          else if (cVar5 == '\x03') {
            *(undefined8 *)(lVar7 + uVar8) = uVar3;
            *(undefined8 *)(lVar7 + 8 + uVar8) = uVar2;
            *(undefined8 *)(lVar7 + 0x10 + uVar8) = uVar1;
          }
          else if (cVar5 == '\x02') {
            *(undefined8 *)(lVar7 + uVar8) = uVar3;
            *(undefined8 *)(lVar7 + 8 + uVar8) = uVar2;
          }
        }
        uVar10 = uVar10 + 1;
      } while (local_78 != uVar10);
    }
  }
  else if (local_78 != 0) {
    uVar10 = 0;
    local_70 = *param_4;
    do {
      local_50 = *(undefined8 *)(param_9 + uVar10 * 8);
      local_58 = *(undefined8 *)(param_8 + uVar10 * 8);
      local_60 = *(undefined8 *)(param_7 + uVar10 * 8);
      local_68 = *(undefined8 *)(param_6 + uVar10 * 8);
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 +
                  (longlong)*(int *)(param_1 + 0x14) * (ulonglong)*(ushort *)(local_70 + uVar10 * 2)
                  ))(*(undefined8 *)(param_3 + uVar10 * 8),*(undefined1 *)(param_5 + uVar10),
                     &local_68);
      uVar10 = uVar10 + 1;
    } while (local_78 != uVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475fb690 FUN_1475fb690 body=179 status=ok
// SIG undefined FUN_1475fb690(void)

void FUN_1475fb690(undefined8 param_1,char param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == '\x04') {
    local_28 = *param_4;
    uStack_24 = param_4[1];
    uStack_20 = param_4[2];
    uStack_1c = param_4[3];
    local_18 = *(undefined8 *)(param_4 + 4);
    uStack_10 = param_4[6];
    uStack_c = param_4[7];
    FUN_1475fbc68(param_3,param_1,&local_28);
  }
  else if (param_2 == '\x03') {
    local_18 = *(undefined8 *)(param_4 + 4);
    local_28 = *param_4;
    uStack_24 = param_4[1];
    uStack_20 = param_4[2];
    uStack_1c = param_4[3];
    FUN_1475fb9d0(param_3,param_1,&local_28);
  }
  else if (param_2 == '\x02') {
    local_28 = *param_4;
    uStack_24 = param_4[1];
    uStack_20 = param_4[2];
    uStack_1c = param_4[3];
    FUN_1475fb744(param_3,param_1,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fb744 FUN_1475fb744 body=244 status=ok
// SIG undefined FUN_1475fb744(void)

void FUN_1475fb744(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar5 = (longlong *)FUN_1406f9508(param_1,param_2);
  if (plVar5 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar5 + 0x80))(plVar5);
    if (cVar4 != '\0') {
      (**(code **)(*plVar5 + 0x98))(plVar5,param_2,param_3);
      goto LAB_1475fb7a5;
    }
  }
  lVar6 = FUN_14479d2ce(local_30);
  if (lVar6 == 0) {
    lVar6 = FUN_1406f977c(local_60);
    if ((lVar6 != 0) &&
       (puVar7 = (undefined4 *)(*(int *)(lVar6 + 0x44) + local_38), puVar7 != (undefined4 *)0x0)) {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *puVar7 = *param_3;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
    }
  }
  else {
    FUN_1475fb83a(param_2,lVar6,param_3);
  }
LAB_1475fb7a5:
  lVar6 = FUN_14479d2ce(local_28);
  if (lVar6 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar6,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fb83a FUN_1475fb83a body=401 status=ok
// SIG undefined FUN_1475fb83a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1475fb83a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475fb8d9;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475fb8f0;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 0x10) goto LAB_1475fb98a;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475fb941;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475fb959;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 << 4);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475fb986;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_1475fb98a:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_1475fb9b4;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475fb9d0 FUN_1475fb9d0 body=255 status=ok
// SIG undefined FUN_1475fb9d0(void)

void FUN_1475fb9d0(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar5 = (longlong *)FUN_1406f9508(param_1,param_2);
  if (plVar5 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar5 + 0x80))(plVar5);
    if (cVar4 != '\0') {
      (**(code **)(*plVar5 + 0x98))(plVar5,param_2,param_3);
      goto LAB_1475fba31;
    }
  }
  lVar6 = FUN_14479d2ce(local_30);
  if (lVar6 == 0) {
    lVar6 = FUN_1406f977c(local_60);
    if ((lVar6 != 0) &&
       (puVar7 = (undefined4 *)(*(int *)(lVar6 + 0x44) + local_38), puVar7 != (undefined4 *)0x0)) {
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(param_3 + 4);
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *puVar7 = *param_3;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
    }
  }
  else {
    FUN_1475fbad0(param_2,lVar6,param_3);
  }
LAB_1475fba31:
  lVar6 = FUN_14479d2ce(local_28);
  if (lVar6 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar6,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fbad0 FUN_1475fbad0 body=402 status=ok
// SIG undefined FUN_1475fbad0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1475fbad0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475fbb6f;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475fbb86;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 0x18) goto LAB_1475fbc21;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475fbbd7;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475fbbf0;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 * 0x18);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475fbc1d;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_1475fbc21:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_1475fbc4b;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475fbc68 FUN_1475fbc68 body=255 status=ok
// SIG undefined FUN_1475fbc68(void)

void FUN_1475fbc68(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar7 = (longlong *)FUN_1406f9508(param_1,param_2);
  if (plVar7 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar7 + 0x80))(plVar7);
    if (cVar6 != '\0') {
      (**(code **)(*plVar7 + 0x98))(plVar7,param_2,param_3);
      goto LAB_1475fbcc9;
    }
  }
  lVar8 = FUN_14479d2ce(local_30);
  if (lVar8 == 0) {
    lVar8 = FUN_1406f977c(local_60);
    if ((lVar8 != 0) &&
       (puVar9 = (undefined4 *)(*(int *)(lVar8 + 0x44) + local_38), puVar9 != (undefined4 *)0x0)) {
      uVar1 = *param_3;
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      uVar5 = *(undefined8 *)(param_3 + 6);
      *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(param_3 + 4);
      *(undefined8 *)(puVar9 + 6) = uVar5;
      *puVar9 = uVar1;
      puVar9[1] = uVar2;
      puVar9[2] = uVar3;
      puVar9[3] = uVar4;
    }
  }
  else {
    FUN_1475fbd68(param_2,lVar8,param_3);
  }
LAB_1475fbcc9:
  lVar8 = FUN_14479d2ce(local_28);
  if (lVar8 != 0) {
    (**(code **)(*param_2 + 0x248))(param_2,lVar8,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fbd68 FUN_1475fbd68 body=401 status=ok
// SIG undefined FUN_1475fbd68(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1475fbd68(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475fbe07;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475fbe1e;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 0x20) goto LAB_1475fbeb8;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475fbe6f;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475fbe87;
                memcpy(_Dst,param_3,(longlong)(int)lVar6 << 5);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x1475fbeb4;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_1475fbeb8:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_1475fbee2;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475fbefe FUN_1475fbefe body=556 status=ok
// SIG undefined FUN_1475fbefe(void)

int * FUN_1475fbefe(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*param_1 == -1) || (param_1[4] == -1)) ||
     (cVar4 = FUN_1475f2e68(param_1,param_3), cVar4 == '\0')) {
    *param_2 = -1;
    goto LAB_1475fbf3c;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  FUN_1475fc17e(plVar5,param_1,param_7,param_8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x40);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x54);
  FUN_1475f2ed8(param_1,local_70);
  local_b8 = &local_b0;
  local_c0 = &LAB_1475fc26e;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0x10;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar5 + 2;
  local_c8 = plVar5;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c7137e(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1475fc0b7;
    }
  }
  else {
LAB_1475fc0b7:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_1475fbf3c:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1475fc12c FUN_1475fc12c body=80 status=ok
// SIG undefined FUN_1475fc12c(void)

void FUN_1475fc12c(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_1475fc286(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fc17e FUN_1475fc17e body=177 status=ok
// SIG undefined FUN_1475fc17e(void)

undefined8 *
FUN_1475fc17e(undefined8 *param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a4c23b0;
  param_1[2] = &PTR_FUN_14a4c23c8;
  param_3 = (longlong *)*param_3;
  uVar8 = *param_4;
  uVar9 = param_4[1];
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  local_48._0_4_ = (undefined4)uVar8;
  local_48._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar9;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(param_1 + 6) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_1 + 0x34) = local_48._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_40._4_4_;
  local_48 = uVar8;
  uStack_40 = uVar9;
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3,&local_38);
    param_1[4] = local_38;
    param_1[5] = uStack_30;
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 10) = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0xb) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fc232 FUN_1475fc232 body=29 status=ok
// SIG undefined FUN_1475fc232(void)

undefined8 FUN_1475fc232(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475fc250 FUN_1475fc250 body=29 status=ok
// SIG undefined FUN_1475fc250(void)

undefined8 FUN_1475fc250(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475fc286 FUN_1475fc286 body=303 status=ok
// SIG undefined FUN_1475fc286(void)

void FUN_1475fc286(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar1 = (uint *)*param_3;
  lVar2 = *(longlong *)(local_68 + 0x20);
  local_70 = (ulonglong)puVar1[6];
  lVar3 = 0;
  local_60 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_60 = lVar3;
  }
  local_58 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_58 = lVar3;
  }
  local_50 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_50 = lVar3;
  }
  lVar4 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar4 = lVar3;
  }
  local_98 = lVar2 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_98 = lVar3;
  }
  local_90 = lVar2 + (ulonglong)puVar1[5];
  if ((ulonglong)puVar1[5] == 0xffffffff) {
    local_90 = lVar3;
  }
  local_88 = lVar2 + local_70;
  if (local_70 == 0xffffffff) {
    local_88 = lVar3;
  }
  local_80 = lVar2 + (ulonglong)puVar1[7];
  if ((ulonglong)puVar1[7] == 0xffffffff) {
    local_80 = lVar3;
  }
  local_78 = lVar2 + (ulonglong)puVar1[8];
  if ((ulonglong)puVar1[8] == 0xffffffff) {
    local_78 = lVar3;
  }
  FUN_1475fc3b6(param_1,local_68,lVar4,&local_60);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fc3b6 FUN_1475fc3b6 body=163 status=ok
// SIG undefined FUN_1475fc3b6(void)

void FUN_1475fc3b6(void)

{
  longlong *in_R9;
  
  if (*in_R9 == 0) {
    if (in_R9[1] == 0) {
      if (in_R9[2] != 0) {
        FUN_1475fc7fc();
      }
    }
    else {
      FUN_1475fc614();
    }
    return;
  }
  FUN_1475fc45a();
  return;
}



// FUNCTION 1475fc45a FUN_1475fc45a body=441 status=ok
// SIG undefined FUN_1475fc45a(void)

void FUN_1475fc45a(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  longlong local_b0;
  undefined8 local_a8 [5];
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_b0 = param_4;
  if (local_b8 != 0) {
    uVar5 = 0;
    puVar4 = param_8;
    puVar8 = param_9;
    puVar9 = param_7;
    do {
      uVar7 = (ulonglong)*(ushort *)(local_b0 + uVar5 * 2);
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      (**(code **)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)*(int *)(param_1 + 0x14) * uVar7))
                (local_80,*(undefined8 *)(param_3 + uVar5 * 8),*(undefined1 *)(param_5 + uVar5));
      puVar2 = puVar8;
      if (param_9 == (undefined8 *)0x0) {
        puVar2 = param_9;
      }
      puVar3 = puVar4;
      if (param_8 == (undefined8 *)0x0) {
        puVar3 = param_8;
      }
      puVar6 = puVar9;
      if (param_7 == (undefined8 *)0x0) {
        puVar6 = param_7;
      }
      lVar1 = *(longlong *)(param_1 + 0x18);
      if (param_6 != 0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 2)) =
             *(undefined8 *)(param_6 + uVar5 * 8);
      }
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 6)) = *puVar6;
      }
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 10)) = *puVar3;
      }
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_a8 + (ulonglong)*(ushort *)(lVar1 + 0xe)) = *puVar2;
      }
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 + (longlong)*(int *)(param_1 + 0x14) * uVar7))
                (*(undefined8 *)(param_3 + uVar5 * 8),
                 CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(param_5 + uVar5)),local_a8);
      uVar5 = uVar5 + 1;
      puVar9 = puVar9 + 1;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    } while (local_b8 != uVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fc614 FUN_1475fc614 body=487 status=ok
// SIG undefined FUN_1475fc614(void)

void FUN_1475fc614(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  undefined4 *puVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar3 != 0) {
    uVar12 = 0;
    puVar6 = param_9;
    puVar8 = param_8;
    puVar9 = param_7;
    do {
      uVar7 = (ulonglong)*(ushort *)(param_4 + uVar12 * 2);
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      cVar2 = *(char *)(param_5 + uVar12);
      lVar4 = *(longlong *)(param_3 + uVar12 * 8);
      if (cVar2 == '\x04') {
        local_68 = *(undefined8 *)(lVar4 + uVar7);
        uStack_60 = ((undefined8 *)(lVar4 + uVar7))[1];
        puVar13 = (undefined8 *)(lVar4 + 0x10 + uVar7);
        local_58 = *puVar13;
        uStack_50 = puVar13[1];
      }
      else if (cVar2 == '\x03') {
        local_58 = *(undefined8 *)(lVar4 + 0x10 + uVar7);
        local_68 = *(undefined8 *)(lVar4 + uVar7);
        uStack_60 = ((undefined8 *)(lVar4 + uVar7))[1];
      }
      else if (cVar2 == '\x02') {
        local_68 = *(undefined8 *)(lVar4 + uVar7);
        uStack_60 = ((undefined8 *)(lVar4 + uVar7))[1];
        local_58 = 0;
        uStack_50 = 0;
      }
      puVar13 = puVar6;
      if (param_9 == (undefined8 *)0x0) {
        puVar13 = param_9;
      }
      puVar10 = puVar8;
      if (param_8 == (undefined8 *)0x0) {
        puVar10 = param_8;
      }
      puVar11 = puVar9;
      if (param_7 == (undefined8 *)0x0) {
        puVar11 = param_7;
      }
      lVar5 = *(longlong *)(param_1 + 0x18);
      if (param_6 != 0) {
        *(undefined8 *)((longlong)&local_68 + (ulonglong)*(ushort *)(lVar5 + 2)) =
             *(undefined8 *)(param_6 + uVar12 * 8);
      }
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)&local_68 + (ulonglong)*(ushort *)(lVar5 + 6)) = *puVar11;
      }
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)&local_68 + (ulonglong)*(ushort *)(lVar5 + 10)) = *puVar10;
      }
      if (puVar13 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)&local_68 + (ulonglong)*(ushort *)(lVar5 + 0xe)) = *puVar13;
      }
      if (cVar2 == '\x04') {
        puVar1 = (undefined4 *)(lVar4 + uVar7);
        *puVar1 = (undefined4)local_68;
        puVar1[1] = local_68._4_4_;
        puVar1[2] = (undefined4)uStack_60;
        puVar1[3] = uStack_60._4_4_;
        puVar1 = (undefined4 *)(lVar4 + 0x10 + uVar7);
        *puVar1 = (undefined4)local_58;
        puVar1[1] = local_58._4_4_;
        puVar1[2] = (undefined4)uStack_50;
        puVar1[3] = uStack_50._4_4_;
      }
      else if (cVar2 == '\x03') {
        puVar1 = (undefined4 *)(lVar4 + uVar7);
        *puVar1 = (undefined4)local_68;
        puVar1[1] = local_68._4_4_;
        puVar1[2] = (undefined4)uStack_60;
        puVar1[3] = uStack_60._4_4_;
        *(undefined8 *)(lVar4 + 0x10 + uVar7) = local_58;
      }
      else if (cVar2 == '\x02') {
        puVar1 = (undefined4 *)(lVar4 + uVar7);
        *puVar1 = (undefined4)local_68;
        puVar1[1] = local_68._4_4_;
        puVar1[2] = (undefined4)uStack_60;
        puVar1[3] = uStack_60._4_4_;
      }
      uVar12 = uVar12 + 1;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar3 != uVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
  local_80 = param_1;
  local_78 = param_3;
  local_70 = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fc7fc FUN_1475fc7fc body=366 status=ok
// SIG undefined FUN_1475fc7fc(void)

void FUN_1475fc7fc(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined1 *param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_98 = param_1;
  local_90 = param_4;
  if (uVar1 != 0) {
    lVar6 = 0;
    do {
      uVar2 = *(undefined8 *)(local_90 + lVar6 * 2);
      local_88[2] = 0;
      local_88[3] = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      FUN_1475fc9cc(*(undefined8 *)(param_3 + lVar6),*param_5,uVar2);
      puVar4 = (undefined8 *)(param_9 + lVar6);
      if (param_9 == 0) {
        puVar4 = (undefined8 *)0x0;
      }
      puVar5 = (undefined8 *)(lVar6 + param_8);
      if (param_8 == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      puVar7 = (undefined8 *)(param_7 + lVar6);
      if (param_7 == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      lVar3 = *(longlong *)(local_98 + 0x18);
      if (param_6 != 0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 2)) =
             *(undefined8 *)(param_6 + lVar6);
      }
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 6)) = *puVar7;
      }
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 10)) = *puVar5;
      }
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)local_88 + (ulonglong)*(ushort *)(lVar3 + 0xe)) = *puVar4;
      }
      FUN_1475fb690(*(undefined8 *)(param_3 + lVar6),
                    CONCAT71((int7)((ulonglong)lVar3 >> 8),*param_5),uVar2,local_88);
      lVar6 = lVar6 + 8;
      param_5 = param_5 + 1;
    } while ((ulonglong)uVar1 * 8 != lVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fc96c FUN_1475fc96c body=95 status=ok
// SIG undefined FUN_1475fc96c(void)

void FUN_1475fc96c(longlong param_1,char param_2,ushort param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 == '\x04') {
    puVar1 = (undefined8 *)(param_1 + (ulonglong)param_3);
    uVar3 = puVar1[1];
    puVar2 = (undefined8 *)(param_1 + 0x10 + (ulonglong)param_3);
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    *param_4 = *puVar1;
    param_4[1] = uVar3;
    param_4[2] = uVar4;
    param_4[3] = uVar5;
  }
  else {
    if (param_2 == '\x03') {
      uVar3 = *(undefined8 *)(param_1 + 0x10 + (ulonglong)param_3);
      puVar1 = (undefined8 *)(param_1 + (ulonglong)param_3);
      uVar4 = puVar1[1];
      *param_4 = *puVar1;
      param_4[1] = uVar4;
      param_4[2] = uVar3;
      param_4[3] = 0;
      return;
    }
    if (param_2 == '\x02') {
      uVar3 = ((undefined8 *)(param_1 + (ulonglong)param_3))[1];
      *param_4 = *(undefined8 *)(param_1 + (ulonglong)param_3);
      param_4[1] = uVar3;
      param_4[2] = 0;
      param_4[3] = 0;
      return;
    }
  }
  return;
}



// FUNCTION 1475fc9cc FUN_1475fc9cc body=191 status=ok
// SIG undefined FUN_1475fc9cc(void)

void FUN_1475fc9cc(undefined8 param_1,char param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\x04') {
    FUN_1475fcb90(param_3,&local_38,param_1);
    *(undefined4 *)param_4 = local_38;
    *(undefined4 *)((longlong)param_4 + 4) = uStack_34;
    *(undefined4 *)(param_4 + 1) = uStack_30;
    *(undefined4 *)((longlong)param_4 + 0xc) = uStack_2c;
    param_4[2] = local_28;
    param_4[3] = uStack_20;
  }
  else if (param_2 == '\x03') {
    FUN_1475fcb06(param_3,&local_38,param_1);
    *param_4 = CONCAT44(uStack_34,local_38);
    param_4[1] = CONCAT44(uStack_2c,uStack_30);
    param_4[2] = local_28;
    param_4[3] = 0;
  }
  else if (param_2 == '\x02') {
    FUN_1475fca8c(param_3,&local_38,param_1);
    *param_4 = CONCAT44(uStack_34,local_38);
    param_4[1] = CONCAT44(uStack_2c,uStack_30);
    param_4[2] = 0;
    param_4[3] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fca8c FUN_1475fca8c body=120 status=ok
// SIG undefined FUN_1475fca8c(void)

undefined8 * FUN_1475fca8c(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1406f9c46(0,local_58);
  lVar4 = FUN_1406f977c(local_58);
  if ((lVar4 != 0) &&
     (puVar5 = (undefined4 *)(*(int *)(lVar4 + 0x44) + local_30), puVar5 != (undefined4 *)0x0)) {
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *(undefined4 *)param_2 = *puVar5;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fcb06 FUN_1475fcb06 body=136 status=ok
// SIG undefined FUN_1475fcb06(void)

undefined8 * FUN_1475fcb06(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1406f9c46(0,local_58);
  lVar4 = FUN_1406f977c(local_58);
  if ((lVar4 != 0) &&
     (puVar5 = (undefined4 *)(*(int *)(lVar4 + 0x44) + local_30), puVar5 != (undefined4 *)0x0)) {
    param_2[2] = *(undefined8 *)(puVar5 + 4);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *(undefined4 *)param_2 = *puVar5;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fcb90 FUN_1475fcb90 body=150 status=ok
// SIG undefined FUN_1475fcb90(void)

undefined8 * FUN_1475fcb90(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3ff0000000000000;
  FUN_1406f9c46(0,local_58);
  lVar6 = FUN_1406f977c(local_58);
  if ((lVar6 != 0) &&
     (puVar7 = (undefined4 *)(*(int *)(lVar6 + 0x44) + local_30), puVar7 != (undefined4 *)0x0)) {
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    uVar5 = *(undefined8 *)(puVar7 + 6);
    param_2[2] = *(undefined8 *)(puVar7 + 4);
    param_2[3] = uVar5;
    *(undefined4 *)param_2 = uVar1;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fcc28 FUN_1475fcc28 body=135 status=ok
// SIG undefined FUN_1475fcc28(void)

undefined4 * FUN_1475fcc28(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 8,param_3 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1400abb7c(param_1 + 0x20,param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_1400abb7c(param_1 + 0x2a,param_3 + 0x2a);
  *(longlong *)(param_1 + 0x34) = param_2;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1475fccb0 FUN_1475fccb0 body=1282 status=ok
// SIG undefined FUN_1475fccb0(void)

void FUN_1475fccb0(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 *local_128;
  int local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 *local_80;
  int local_78;
  undefined8 local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar12 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar12 + 0x1e) == param_4[8]) goto LAB_1475fcd05;
      puVar12 = puVar12 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar12 = (undefined8 *)0x0;
LAB_1475fcd05:
  local_1d4 = *(int *)(lVar2 + 0x14);
  local_190 = param_1;
  if (local_1d4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
  }
  LOCK();
  *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_4[7]) goto LAB_1475fcd3f;
      puVar10 = puVar10 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_1475fcd3f:
  uVar3 = *puVar12;
  local_1d8 = *(int *)(lVar2 + 0x14);
  if (local_1d8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_4[6]) goto LAB_1475fcd7b;
      puVar7 = puVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_1475fcd7b:
  uVar4 = *puVar10;
  local_1dc = *(int *)(lVar2 + 0x14);
  if (local_1dc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar11 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == param_4[5]) goto LAB_1475fcdc0;
      puVar11 = puVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_1475fcdc0:
  local_1b0 = *puVar7;
  local_1e0 = *(int *)(lVar2 + 0x14);
  local_1a8 = uVar4;
  if (local_1e0 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
  }
  LOCK();
  *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
  UNLOCK();
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == param_4[4]) goto LAB_1475fce0d;
      puVar8 = puVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_1475fce0d:
  local_1c8 = *puVar11;
  local_1e4 = *(int *)(lVar2 + 0x14);
  local_1a0 = uVar3;
  if (local_1e4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  local_1d0 = *puVar8;
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_170,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == *param_4) goto LAB_1475fce93;
      puVar9 = puVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_1475fce93:
  iVar1 = *(int *)(lVar2 + 0x14);
  local_198 = param_2;
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  lVar6 = local_130;
  lVar2 = local_148;
  uVar5 = local_1a0;
  uVar4 = local_1a8;
  uVar3 = local_1b0;
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  local_1b8 = *puVar9;
  local_110 = local_170;
  local_108 = local_168;
  local_170 = 0;
  local_1c0 = local_160;
  local_100 = local_160;
  local_160 = 0;
  local_f8 = local_158;
  local_f0 = local_150;
  local_158 = 0;
  local_e8 = local_148;
  local_148 = 0;
  local_e0 = local_140;
  local_d8 = local_138;
  local_140 = 0;
  local_d0 = local_130;
  local_c0 = local_1e4;
  local_b8 = local_1d0;
  local_a8 = local_1e0;
  local_a0 = local_1c8;
  local_90 = local_1dc;
  local_88 = local_1b0;
  local_78 = local_1d8;
  local_70 = local_1a8;
  local_60 = local_1d4;
  local_130 = 0;
  local_58 = local_1a0;
  local_128 = puVar9;
  local_120 = iVar1;
  local_118 = local_1b8;
  local_c8 = puVar8;
  local_b0 = puVar11;
  local_98 = puVar7;
  local_80 = puVar10;
  local_68 = puVar12;
  FUN_1432f59b8();
  local_188 = 0;
  lStack_180 = 0;
  local_178 = 0;
  if (local_1c0 != 0) {
    local_188 = local_1c0;
  }
  if (lVar2 != 0) {
    lStack_180 = lVar2;
  }
  if (lVar6 != 0) {
    local_178 = lVar6;
  }
  local_1f8 = uVar5;
  local_200 = uVar4;
  local_208 = uVar3;
  local_210 = local_1c8;
  local_218 = local_1d0;
  FUN_1475fb3da(local_190,
                *(undefined8 *)(*(longlong *)(*local_198 + 0x60) + (longlong)(int)local_198[1] * 8),
                local_1b8,&local_188);
  FUN_1475f43c0(&local_128);
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475fd1b4 FUN_1475fd1b4 body=118 status=ok
// SIG undefined FUN_1475fd1b4(void)

longlong FUN_1475fd1b4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1475fcc28();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xe0) = param_4;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe8) = local_30;
    *(undefined4 *)(param_1 + 0xec) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf0) = uStack_28;
    *(undefined4 *)(param_1 + 0xf4) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fd22c FUN_1475fd22c body=135 status=ok
// SIG undefined FUN_1475fd22c(void)

undefined4 * FUN_1475fd22c(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 8,param_3 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1400abb7c(param_1 + 0x20,param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_1400abb7c(param_1 + 0x2a,param_3 + 0x2a);
  *(longlong *)(param_1 + 0x34) = param_2;
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1475fd2b4 FUN_1475fd2b4 body=1241 status=ok
// SIG undefined FUN_1475fd2b4(void)

void FUN_1475fd2b4(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  undefined8 local_1c8;
  undefined4 local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  longlong local_188;
  longlong local_180;
  int local_178;
  undefined8 local_170;
  longlong local_168;
  int local_160;
  undefined8 local_158;
  longlong local_150;
  int local_148;
  undefined8 local_140;
  longlong local_138;
  int local_130;
  undefined8 local_128;
  undefined8 *local_120;
  int local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined8 local_b0;
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  longlong local_90;
  int local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  undefined4 local_48;
  short local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_138,param_4[8]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_150,param_4[7]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_168,param_4[6]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_180,param_4[5]);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_4[4]) goto LAB_1475fd386;
      puVar7 = puVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_1475fd386:
  iVar1 = *(int *)(lVar3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  uVar4 = *puVar7;
  local_44 = param_4[3];
  local_48 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_1c8,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_48,param_3);
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar6 = *(undefined8 **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == *param_4) goto LAB_1475fd3f1;
      puVar6 = puVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar6 = (undefined8 *)0x0;
LAB_1475fd3f1:
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar6 + 1));
  }
  LOCK();
  *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + 1;
  UNLOCK();
  local_110 = *puVar6;
  local_108 = local_1c8;
  local_100 = local_1c0;
  local_1c8 = 0;
  local_f8 = local_1b8;
  uStack_f0 = uStack_1b0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_e8 = local_1a8;
  local_e0 = local_1a0;
  local_1a0 = 0;
  local_d8 = local_198;
  local_d0 = local_190;
  local_198 = 0;
  local_c8 = local_188;
  local_188 = 0;
  local_a8 = local_180;
  local_a0 = local_178;
  local_180 = 0;
  local_98 = local_170;
  local_170 = 0;
  local_90 = local_168;
  local_88 = local_160;
  local_168 = 0;
  local_80 = local_158;
  local_158 = 0;
  local_78 = local_150;
  local_70 = local_148;
  local_150 = 0;
  local_68 = local_140;
  local_140 = 0;
  local_60 = local_138;
  local_58 = local_130;
  local_138 = 0;
  local_50 = local_128;
  local_128 = 0;
  local_120 = puVar6;
  local_118 = iVar2;
  local_c0 = puVar7;
  local_b8 = iVar1;
  local_b0 = uVar4;
  FUN_1432f59b8();
  if (local_180 != 0) {
    LOCK();
    *(int *)(local_180 + 0x18) = *(int *)(local_180 + 0x18) + -1;
    UNLOCK();
    if (local_178 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_180 + 8));
    }
  }
  if (local_168 != 0) {
    LOCK();
    *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
    UNLOCK();
    if (local_160 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
    }
  }
  if (local_150 != 0) {
    LOCK();
    *(int *)(local_150 + 0x18) = *(int *)(local_150 + 0x18) + -1;
    UNLOCK();
    if (local_148 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_150 + 8));
    }
  }
  if (local_138 != 0) {
    LOCK();
    *(int *)(local_138 + 0x18) = *(int *)(local_138 + 0x18) + -1;
    UNLOCK();
    if (local_130 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_138 + 8));
    }
  }
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_1d8 = 0;
  if (local_f8 != 0) {
    local_1e8 = local_f8;
  }
  if (local_e0 != 0) {
    lStack_1e0 = local_e0;
  }
  if (local_c8 != 0) {
    local_1d8 = local_c8;
  }
  local_1f8 = local_50;
  local_200 = local_68;
  local_208 = local_80;
  local_210 = local_98;
  local_218 = local_b0;
  FUN_1475fc3b6(param_1,*(undefined8 *)
                         (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_110,
                &local_1e8);
  FUN_1475f4c22(&local_120);
  if ((local_40 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475fd78e FUN_1475fd78e body=146 status=ok
// SIG undefined FUN_1475fd78e(void)

longlong FUN_1475fd78e(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1475fd22c();
  param_4 = (longlong *)*param_4;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  *(longlong **)(param_1 + 0xe0) = param_4;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0xf8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0xfc) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x100) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x104) = uStack_40._4_4_;
  local_48 = uVar1;
  uStack_40 = uVar2;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xe8) = local_30;
    *(undefined4 *)(param_1 + 0xec) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf0) = uStack_28;
    *(undefined4 *)(param_1 + 0xf4) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fd822 FUN_1475fd822 body=698 status=ok
// SIG undefined FUN_1475fd822(void)

void FUN_1475fd822(short *param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  short *psVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_f8 [39];
  char local_d1;
  int local_d0;
  int local_cc;
  longlong local_c8;
  short *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  int local_a8;
  longlong local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) {
    local_b8 = *(undefined8 *)(param_2 + 0x248);
    local_d1 = *(char *)(param_2 + 0x270);
    FUN_14150e78a(&local_60);
    local_d0 = *(int *)(param_2 + 0x10);
    psVar6 = param_1;
    if (local_50 != local_d0) {
      do {
        local_c0 = psVar6;
        psVar6 = local_c0;
        lVar5 = *(longlong *)(*(longlong *)(local_58 + 0x60) + (longlong)local_50 * 8);
        if (local_d1 == '\0') {
          *(undefined4 *)(lVar5 + 0x14) = 0;
          local_c8 = lVar5;
        }
        else {
          local_c8 = 0;
        }
        if (*(ushort *)(lVar5 + 0xc) != 0) {
          plVar9 = *(longlong **)(lVar5 + 0x28);
          lVar7 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar9 + 0x1e) == local_c0[2]) goto LAB_1475fd92f;
            plVar9 = plVar9 + 4;
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != 0);
        }
        plVar9 = (longlong *)0x0;
LAB_1475fd92f:
        iVar2 = *(int *)(lVar5 + 0x14);
        if (iVar2 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
        }
        LOCK();
        *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
        UNLOCK();
        lVar7 = *plVar9;
        if (*(ushort *)(lVar5 + 0xc) != 0) {
          plVar12 = *(longlong **)(lVar5 + 0x28);
          lVar13 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar12 + 0x1e) == psVar6[1]) goto LAB_1475fd95a;
            plVar12 = plVar12 + 4;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
        plVar12 = (longlong *)0x0;
LAB_1475fd95a:
        iVar3 = *(int *)(lVar5 + 0x14);
        if (iVar3 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
        }
        LOCK();
        *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
        UNLOCK();
        lVar13 = *plVar12;
        if (*(ushort *)(lVar5 + 0xc) != 0) {
          plVar10 = *(longlong **)(lVar5 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar10 + 0x1e) == *psVar6) goto LAB_1475fd990;
            plVar10 = plVar10 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        plVar10 = (longlong *)0x0;
LAB_1475fd990:
        iVar4 = *(int *)(lVar5 + 0x14);
        local_cc = iVar2;
        if (iVar4 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
        }
        LOCK();
        *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
        UNLOCK();
        lVar8 = *plVar10;
        local_78 = local_b8;
        local_70 = local_cc;
        uVar1 = *(ushort *)(lVar5 + 0xe);
        local_b0 = plVar10;
        local_a8 = iVar4;
        local_a0 = lVar8;
        local_98 = plVar12;
        local_90 = iVar3;
        local_88 = lVar13;
        local_80 = plVar9;
        local_68 = lVar7;
        if ((ulonglong)uVar1 != 0) {
          uVar11 = 0;
          do {
            FUN_1475fdade(*(undefined8 *)(lVar8 + uVar11 * 8),lVar13,lVar7 + uVar11);
            uVar11 = uVar11 + 1;
            lVar13 = lVar13 + 0x14;
          } while (uVar1 != uVar11);
        }
        FUN_1475f52aa(&local_b0);
        if (local_c8 != 0) {
          *(undefined4 *)(local_c8 + 0x14) = 1;
        }
        local_50 = FUN_1403b8464(&local_60,local_50 + 1);
        psVar6 = local_c0;
      } while (local_50 != local_d0);
    }
    if (local_60 != 0) {
      if (*(char *)(local_58 + 0x270) == '\0') {
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475fdade FUN_1475fdade body=287 status=ok
// SIG undefined FUN_1475fdade(void)

void FUN_1475fdade(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_2 + 8,local_30);
  lVar1 = FUN_140dbb734(param_1,local_30);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar5) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar5 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar5 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    lVar3 = 0;
    if (bVar5) {
      lVar3 = lVar1;
    }
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x70) != 0)) {
    lVar1 = FUN_1457aacfc();
    if (*(longlong *)(lVar3 + 0x70) == lVar1) {
      uVar4 = 2;
      goto LAB_1475fdb9d;
    }
    lVar1 = FUN_14068e11a();
    uVar4 = 3;
    if ((*(longlong *)(lVar3 + 0x70) == lVar1) ||
       (lVar1 = FUN_1457ab7ee(), *(longlong *)(lVar3 + 0x70) == lVar1)) goto LAB_1475fdb9d;
    lVar1 = FUN_1456aec84();
    if (*(longlong *)(lVar3 + 0x70) != lVar1) {
      FUN_146892368();
    }
  }
  uVar4 = 4;
LAB_1475fdb9d:
  *param_3 = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475fdbfe FUN_1475fdbfe body=179 status=ok
// SIG undefined FUN_1475fdbfe(void)

undefined8 * FUN_1475fdbfe(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_1475fdc58;
    }
  }
  uVar6 = 0;
LAB_1475fdc58:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1475fdcb2 FUN_1475fdcb2 body=184 status=ok
// SIG undefined FUN_1475fdcb2(void)

void FUN_1475fdcb2(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fdd6c FUN_1475fdd6c body=241 status=ok
// SIG undefined FUN_1475fdd6c(void)

undefined8 * FUN_1475fdd6c(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4c2410;
  param_1[0x1b] = &PTR_FUN_14a4c2458;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 0x1c) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar1;
  *(int *)(param_1 + 0x1d) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar2;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_30);
    *(undefined4 *)(param_1 + 0x1e) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0x1f) = uStack_28;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fde5e FUN_1475fde5e body=9 status=ok
// SIG undefined FUN_1475fde5e(void)

void FUN_1475fde5e(longlong param_1)

{
  FUN_1475febac(param_1 + 0x10);
  return;
}



// FUNCTION 1475fde68 FUN_1475fde68 body=29 status=ok
// SIG undefined FUN_1475fde68(void)

undefined8 FUN_1475fde68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475fde86 FUN_1475fde86 body=38 status=ok
// SIG undefined FUN_1475fde86(void)

undefined8 FUN_1475fde86(undefined8 param_1,int param_2)

{
  FUN_1475febac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475fded2 FUN_1475fded2 body=82 status=ok
// SIG undefined FUN_1475fded2(void)

void FUN_1475fded2(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58;
  uStack_10 = *(undefined4 *)(lVar1 + 8);
  uStack_c = *(undefined4 *)(lVar1 + 0xc);
  local_18 = *param_4;
  FUN_1475fec5a();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fdf26 FUN_1475fdf26 body=1088 status=ok
// SIG undefined FUN_1475fdf26(void)

ulonglong FUN_1475fdf26(longlong param_1,int param_2,char param_3,char param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong unaff_RBP;
  undefined7 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  byte local_68;
  undefined1 local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_1475fdfa1;
  }
  uVar8 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58);
      local_a8 = *puVar6;
      uStack_a0 = puVar6[1];
      local_98 = *(undefined4 *)(puVar6 + 2);
      uStack_94 = *(undefined4 *)((longlong)puVar6 + 0x14);
      uStack_90 = *(undefined4 *)(puVar6 + 3);
      uStack_8c = *(undefined4 *)((longlong)puVar6 + 0x1c);
      local_88 = *(undefined4 *)(puVar6 + 4);
      uStack_84 = *(undefined4 *)((longlong)puVar6 + 0x24);
      uStack_80 = *(undefined4 *)(puVar6 + 5);
      uStack_7c = *(undefined4 *)((longlong)puVar6 + 0x2c);
      local_68 = *(byte *)(puVar6 + 8);
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_68])(local_78,puVar6 + 6);
      local_60 = *(undefined1 *)(puVar6 + 9);
      local_58 = *(byte *)(puVar6 + 10);
      FUN_1410d7556(param_1 + 0x18,&local_a8);
      (*(code *)(&PTR_LAB_14a4c7e10)
                [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58 + 0x40)])();
      FUN_1475fede6(param_1 + 0x68);
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x48) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar4 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar4);
      }
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x48) <= param_2)) {
        FUN_1475fee5a(param_1 + 0xa0);
      }
      if ((local_58 & 1) != 0) {
        FUN_1475fece4(&local_a8,&local_98);
      }
      (*(code *)(&PTR_LAB_14a4c7e10)[local_68])(local_78);
LAB_1475fe197:
      unaff_RBP = 0;
      goto LAB_1475fdfa1;
    }
    unaff_RBP = CONCAT71(uVar8,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0x50 + (longlong)param_2 * 0x58) & 1) == 0)
    goto LAB_1475fdfa1;
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    lVar12 = *(longlong *)(param_1 + 0xa0);
    uVar11 = 0;
    uVar10 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar1 = (uVar10 >> 1) + uVar11;
        if (*(int *)(lVar12 + (ulonglong)uVar1 * 0x48) < param_2) {
          uVar11 = uVar1 + (uVar10 & 1);
        }
        bVar4 = 1 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar4);
    }
    if ((((int)uVar11 < (int)uVar3) && (*(int *)(lVar12 + (ulonglong)uVar11 * 0x48) <= param_2)) &&
       (lVar12 + (ulonglong)uVar11 * 0x48 != -8)) {
      FUN_1475fece4((longlong)param_2 * 0x58 + *(longlong *)(param_1 + 0x68));
      uVar3 = *(uint *)(param_1 + 0xa8);
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar9 = (ulonglong)uVar3;
        uVar10 = uVar3;
        do {
          uVar9 = uVar9 >> 1;
          uVar11 = (uint)uVar9 + (int)uVar7;
          if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x48) < param_2) {
            uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
          }
          bVar4 = 1 < uVar10;
          uVar10 = (uint)uVar9;
        } while (bVar4);
      }
      unaff_RBP = CONCAT71(uVar8,1);
      if (((int)uVar7 < (int)uVar3) &&
         (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x48) <= param_2)) {
        FUN_1475fee5a(param_1 + 0xa0);
      }
      goto LAB_1475fdfa1;
    }
    unaff_RBP = CONCAT71(uVar8,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x50 + (longlong)param_2 * 0x58);
      if ((bVar2 & 1) == 0) goto LAB_1475fdfa1;
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58);
      *(byte *)(puVar6 + 10) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_1475fdfa1;
      lVar12 = (longlong)param_2 * 0x58;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0x50 + lVar12);
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar12);
      if ((bVar2 & 2) == 0) {
        local_a8 = *puVar6;
        uStack_a0 = puVar6[1];
        local_98 = *(undefined4 *)(puVar6 + 2);
        uStack_94 = *(undefined4 *)((longlong)puVar6 + 0x14);
        uStack_90 = *(undefined4 *)(puVar6 + 3);
        uStack_8c = *(undefined4 *)((longlong)puVar6 + 0x1c);
        local_88 = *(undefined4 *)(puVar6 + 4);
        uStack_84 = *(undefined4 *)((longlong)puVar6 + 0x24);
        uStack_80 = *(undefined4 *)(puVar6 + 5);
        uStack_7c = *(undefined4 *)((longlong)puVar6 + 0x2c);
        local_68 = *(byte *)(puVar6 + 8);
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[local_68])(local_78,puVar6 + 6);
        local_60 = *(undefined1 *)(puVar6 + 9);
        local_58 = *(byte *)(puVar6 + 10);
        FUN_1410d7556(param_1 + 0x18,&local_a8);
        (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar12 + 0x40)])();
        FUN_1475fede6(param_1 + 0x68);
        uVar3 = *(uint *)(param_1 + 0xa8);
        uVar7 = 0;
        if (0 < (int)uVar3) {
          uVar9 = (ulonglong)uVar3;
          uVar10 = uVar3;
          do {
            uVar9 = uVar9 >> 1;
            uVar11 = (uint)uVar9 + (int)uVar7;
            if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar11 * 0x48) < param_2) {
              uVar7 = (ulonglong)(uVar11 + (uVar10 & 1));
            }
            bVar4 = 1 < uVar10;
            uVar10 = (uint)uVar9;
          } while (bVar4);
        }
        if (((int)uVar7 < (int)uVar3) &&
           (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x48) <= param_2)) {
          FUN_1475fee5a(param_1 + 0xa0);
        }
        if ((local_58 & 1) != 0) {
          FUN_1475fece4(&local_a8,&local_98);
        }
        (*(code *)(&PTR_LAB_14a4c7e10)[local_68])(local_78);
        goto LAB_1475fe197;
      }
      if ((bVar2 & 1) == 0) goto LAB_1475fdfa1;
    }
  }
  FUN_1475fece4(puVar6,puVar6 + 2);
LAB_1475fdfa1:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1475fe368 FUN_1475fe368 body=399 status=ok
// SIG undefined FUN_1475fe368(void)

undefined8 FUN_1475fe368(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar6 = 3;
    if (cVar5 == '\0') goto LAB_1475fe417;
  }
  if (param_3 == '\x01') {
    lVar11 = (longlong)param_2 * 0x58;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + lVar11);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*(longlong *)(param_1 + 0x68) + lVar11 + 0x40)])();
    FUN_1475fede6(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x48) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x48) <= param_2)) {
      FUN_1475fee5a(param_1 + 0xa0);
    }
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x48) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x48) <= param_2)) {
      FUN_1475fee5a(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x50 + (longlong)param_2 * 0x58);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar6 = 1;
  }
LAB_1475fe417:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fe502 FUN_1475fe502 body=266 status=ok
// SIG undefined FUN_1475fe502(void)

void FUN_1475fe502(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    local_80 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar3 = 0;
      do {
        local_68 = *(longlong *)(param_5 + uVar3 * 8);
        if (local_68 != 0) {
          FUN_1475fef70(param_1 + -0xd8,&local_74,&local_68,param_6);
          local_54 = *(undefined4 *)(param_4 + uVar3 * 4);
          local_4a = *(undefined2 *)(param_3 + uVar3 * 2);
          local_58 = local_6c;
          local_60 = local_74;
          local_50 = (byte)uVar2;
          FUN_1449da5a2(local_80,&local_4a,&local_60);
        }
        uVar3 = uVar3 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475fe60e FUN_1475fe60e body=967 status=ok
// SIG undefined FUN_1475fe60e(void)

void FUN_1475fe60e(longlong param_1,char *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  byte *pbVar1;
  undefined8 *puVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int *piVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  uint local_dc;
  longlong local_d8;
  longlong local_d0;
  char *local_c8;
  undefined1 local_bc [8];
  int local_b4;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  longlong local_60;
  byte local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar7 = *(longlong *)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8);
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    puVar13 = *(undefined8 **)(lVar7 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar13 + 0x1e) == **(short **)(param_1 + 8)) goto LAB_1475fe675;
      puVar13 = puVar13 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar13 = (undefined8 *)0x0;
LAB_1475fe675:
  iVar4 = *(int *)(lVar7 + 0x14);
  local_f8 = param_1;
  local_c8 = param_2;
  if (iVar4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar13 + 1));
  }
  LOCK();
  *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + 1;
  UNLOCK();
  uVar3 = *(ushort *)(lVar7 + 0xe);
  if (uVar3 != 0) {
    local_f0 = local_f8 + -0xd8;
    pcVar12 = (char *)*puVar13;
    local_d8 = *param_6;
    local_d0 = param_6[1];
    local_e8 = param_6[2];
    param_5 = param_5 + 8;
    uVar11 = 0;
    do {
      local_b0 = *(longlong *)(param_4 + uVar11 * 4);
      if ((local_b0 != 0) && (cVar5 = FUN_1475ff280(local_f0,&local_b0,param_5), cVar5 != '\0')) {
        FUN_1475fef70(local_f0,local_bc,&local_b0,param_5);
        piVar10 = *(int **)(local_f8 + -0x28);
        if (*piVar10 != 0) {
          FUN_140adeba6(piVar10,local_bc);
          piVar10 = *(int **)(local_f8 + -0x28);
        }
        lVar7 = FUN_1400e4054(piVar10,local_bc);
        if (lVar7 == 0) {
          local_dc = 0;
        }
        else {
          local_dc = (uint)CONCAT71((int7)((ulonglong)lVar7 >> 8),
                                    '\x02' - (*(short *)(lVar7 + 0xe) == 0));
        }
        uVar9 = (ulonglong)local_dc;
        cVar5 = FUN_1475ff306(local_f0,local_b4,uVar9);
        if (cVar5 == '\0') {
          local_58 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          local_50 = *pcVar12;
          if (local_d0 == 0) {
            if (local_d8 == 0) {
              if (local_e8 != 0) {
                local_68 = *(ulonglong *)(local_e8 + uVar11 * 8);
                local_60 = *(longlong *)(local_e8 + 8 + uVar11 * 8);
                uVar8 = local_68;
                cVar5 = local_50;
                if (local_60 != 0) {
                  LOCK();
                  *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
                  UNLOCK();
                  uVar8 = *(ulonglong *)(local_e8 + uVar11 * 8);
                  cVar5 = *pcVar12;
                }
                local_58 = 2;
                FUN_1475fc9cc(*(undefined8 *)(param_4 + uVar11 * 4),
                              CONCAT71((int7)(uVar9 >> 8),cVar5) & 0xffffffff,uVar8);
              }
            }
            else {
              lVar7 = (longlong)*(int *)(local_f8 + 0x24) *
                      (ulonglong)*(ushort *)(local_d8 + uVar11);
              local_68 = *(longlong *)(local_f8 + 0x18) + lVar7;
              (**(code **)(*(longlong *)(local_f8 + 0x18) + 0x18 + lVar7))
                        (&local_a8,*(undefined8 *)(param_4 + uVar11 * 4));
              local_78 = local_98;
              uStack_70 = uStack_90;
              local_88 = CONCAT44(uStack_a4,local_a8);
              uStack_80 = CONCAT44(uStack_9c,uStack_a0);
            }
          }
          else {
            uVar9 = (ulonglong)*(ushort *)(local_d0 + uVar11);
            local_68 = (ulonglong)*(ushort *)(local_d0 + uVar11);
            local_58 = 1;
            lVar7 = *(longlong *)(param_4 + uVar11 * 4);
            if (local_50 == '\x04') {
              local_88 = *(undefined8 *)(lVar7 + uVar9);
              uStack_80 = ((undefined8 *)(lVar7 + uVar9))[1];
              puVar2 = (undefined8 *)(lVar7 + 0x10 + uVar9);
              local_78 = *puVar2;
              uStack_70 = puVar2[1];
            }
            else if (local_50 == '\x03') {
              local_78 = *(undefined8 *)(lVar7 + 0x10 + uVar9);
              local_88 = *(undefined8 *)(lVar7 + uVar9);
              uStack_80 = ((undefined8 *)(lVar7 + uVar9))[1];
              uStack_70 = 0;
            }
            else if (local_50 == '\x02') {
              local_88 = *(undefined8 *)(lVar7 + uVar9);
              uStack_80 = ((undefined8 *)(lVar7 + uVar9))[1];
              local_78 = 0;
              uStack_70 = 0;
            }
          }
          FUN_1475ff39e(local_f0,local_b4,local_dc,&local_88);
          (*(code *)(&PTR_LAB_14a4c7e10)[local_58])(&local_68);
        }
        if (*local_c8 == '\x01') {
          pbVar1 = (byte *)(*(longlong *)(local_f8 + -0x70) + 0x50 + (longlong)local_b4 * 0x58);
          *pbVar1 = *pbVar1 | 2;
        }
      }
      uVar11 = uVar11 + 2;
      pcVar12 = pcVar12 + 1;
      param_5 = param_5 + 0x14;
    } while ((uint)uVar3 * 2 != uVar11);
  }
  if (puVar13 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + -1;
    UNLOCK();
    if (iVar4 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(puVar13 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475fe9d6 FUN_1475fe9d6 body=38 status=ok
// SIG undefined FUN_1475fe9d6(void)

undefined8 FUN_1475fe9d6(undefined8 param_1,int param_2)

{
  FUN_1475febac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475fe9fc FUN_1475fe9fc body=52 status=ok
// SIG undefined FUN_1475fe9fc(void)

void FUN_1475fe9fc(longlong *param_1)

{
  FUN_1475fea66();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1475fea30 FUN_1475fea30 body=53 status=ok
// SIG undefined FUN_1475fea30(void)

void FUN_1475fea30(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    do {
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(param_1 + 0x10)])(param_1);
      param_1 = param_1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1475fea66 FUN_1475fea66 body=324 status=ok
// SIG undefined FUN_1475fea66(void)

void FUN_1475fea66(longlong *param_1)

{
  longlong *plVar1;
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
      (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(*local_70 + (longlong)iStack_54 * 0x58 + 0x40)])();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140e91948(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475febac FUN_1475febac body=173 status=ok
// SIG undefined FUN_1475febac(void)

void FUN_1475febac(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4c2470;
  plVar3 = (longlong *)param_1[0x1a];
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
  FUN_1475fea30(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1475fe9fc(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14588e4a6(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001475fec4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1475fec5a FUN_1475fec5a body=136 status=ok
// SIG undefined FUN_1475fec5a(void)

void FUN_1475fec5a(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x58);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fece4 FUN_1475fece4 body=181 status=ok
// SIG undefined FUN_1475fece4(void)

void FUN_1475fece4(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_1;
  local_34 = param_1[1];
  lVar1 = FUN_14479d2ce(&local_38);
  if (lVar1 != 0) {
    if (*(char *)(param_2 + 0x30) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    if (*(char *)(param_2 + 0x30) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    if (*(longlong *)(param_2 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fede6 FUN_1475fede6 body=116 status=ok
// SIG undefined FUN_1475fede6(void)

void FUN_1475fede6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1475fee5a FUN_1475fee5a body=103 status=ok
// SIG undefined FUN_1475fee5a(void)

void FUN_1475fee5a(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar1 + (ulonglong)param_2 * 0x48 + 0x38)])();
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x48);
    memmove(_Dst,(void *)((longlong)_Dst + 0x48),(longlong)(int)(~param_2 + iVar2) * 0x48);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1475feec2(param_1);
  return;
}



// FUNCTION 1475feec2 FUN_1475feec2 body=62 status=ok
// SIG undefined FUN_1475feec2(void)

void FUN_1475feec2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1475fef00(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 1475fef00 FUN_1475fef00 body=112 status=ok
// SIG undefined FUN_1475fef00(void)

ulonglong FUN_1475fef00(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1475fef3a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_1475fef3a:
  return param_2 & 0xffffffff;
}



// FUNCTION 1475fef70 FUN_1475fef70 body=189 status=ok
// SIG undefined FUN_1475fef70(void)

longlong FUN_1475fef70(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_1475ff02e(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ff02e FUN_1475ff02e body=367 status=ok
// SIG undefined FUN_1475ff02e(void)

int * FUN_1475ff02e(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  undefined4 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(*param_3,param_3[1]);
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar5 = FUN_140bf3c50(plVar1,(uVar7 >> 4) +
                               (uint)uVar2 * 0x10000 + uVar7 + (int)((ulonglong)uVar2 >> 0x20) +
                               (uVar4 >> 2) + uVar4 * 0x40 + (uVar3 << 0x13 | uVar3 & 0xffff) +
                               0x9e3779b9 ^ uVar4,param_3);
  if (((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x1c + *plVar1, lVar6 == 0)) ||
     (iVar5 = *(int *)(lVar6 + 0x10), *param_2 = iVar5, iVar5 == -1)) {
    local_98._0_4_ = *param_3;
    local_98._4_4_ = param_3[1];
    uStack_90._0_4_ = param_3[2];
    uStack_90._4_4_ = param_3[3];
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_1475ff19e(param_1 + 0x68,local_a8);
    *local_a0 = (undefined4)local_98;
    local_a0[1] = local_98._4_4_;
    local_a0[2] = (undefined4)uStack_90;
    local_a0[3] = uStack_90._4_4_;
    *(undefined1 *)(local_a0 + 0x10) = 0;
    *(undefined1 *)(local_a0 + 0x12) = 0;
    *(undefined1 *)(local_a0 + 0x14) = 0;
    *(undefined8 *)(local_a0 + 4) = 0;
    *(undefined8 *)(local_a0 + 6) = 0;
    *(undefined8 *)(local_a0 + 8) = 0;
    *(undefined8 *)(local_a0 + 10) = 0;
    *(undefined8 *)(local_a0 + 0xc) = 0;
    *param_2 = local_a8[0];
    local_98 = param_3;
    uStack_90 = param_2;
    FUN_140bf3cbe(plVar1,local_a8,&local_98,0);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ff19e FUN_1475ff19e body=226 status=ok
// SIG undefined FUN_1475ff19e(void)

int * FUN_1475ff19e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1403e7a24(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x58);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x58) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 1475ff280 FUN_1475ff280 body=132 status=ok
// SIG undefined FUN_1475ff280(void)

byte FUN_1475ff280(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_1475ff518(param_1,local_24,param_2,param_3);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 1475ff306 FUN_1475ff306 body=151 status=ok
// SIG undefined FUN_1475ff306(void)

ulonglong FUN_1475ff306(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0x58 + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0x50);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x48) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x48) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 0x48;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -8);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 0x50));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 1475ff39e FUN_1475ff39e body=376 status=ok
// SIG undefined FUN_1475ff39e(void)

void FUN_1475ff39e(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  longlong lVar10;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar10 = (longlong)param_2 * 0x58 + *(longlong *)(param_1 + 0x68);
  local_5c = param_2;
  if (param_3 == '\x02') {
    bVar9 = *(byte *)(lVar10 + 0x50);
    if ((bVar9 & 1) == 0) {
      uVar2 = *param_4;
      uVar3 = param_4[1];
      uVar4 = param_4[2];
      uVar5 = param_4[3];
      uVar6 = param_4[5];
      uVar7 = param_4[6];
      uVar8 = param_4[7];
      *(undefined4 *)(lVar10 + 0x20) = param_4[4];
      *(undefined4 *)(lVar10 + 0x24) = uVar6;
      *(undefined4 *)(lVar10 + 0x28) = uVar7;
      *(undefined4 *)(lVar10 + 0x2c) = uVar8;
      *(undefined4 *)(lVar10 + 0x10) = uVar2;
      *(undefined4 *)(lVar10 + 0x14) = uVar3;
      *(undefined4 *)(lVar10 + 0x18) = uVar4;
      *(undefined4 *)(lVar10 + 0x1c) = uVar5;
      if ((undefined4 *)(lVar10 + 0x10) != param_4) {
        local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xc));
        (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xc)])
                  (&local_58,param_4 + 8);
        local_28 = local_48;
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        uVar1 = *(ulonglong *)(lVar10 + 0x40);
        uVar2 = *(undefined4 *)(lVar10 + 0x30);
        uVar3 = *(undefined4 *)(lVar10 + 0x34);
        uVar4 = *(undefined4 *)(lVar10 + 0x38);
        uVar5 = *(undefined4 *)(lVar10 + 0x3c);
        *(undefined4 *)(lVar10 + 0x30) = local_58;
        *(undefined4 *)(lVar10 + 0x34) = uStack_54;
        *(undefined4 *)(lVar10 + 0x38) = uStack_50;
        *(undefined4 *)(lVar10 + 0x3c) = uStack_4c;
        *(ulonglong *)(lVar10 + 0x40) = local_48;
        local_58 = uVar2;
        uStack_54 = uVar3;
        uStack_50 = uVar4;
        uStack_4c = uVar5;
        local_48 = uVar1;
        (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
        bVar9 = *(byte *)(lVar10 + 0x50);
      }
      *(undefined1 *)(lVar10 + 0x48) = *(undefined1 *)(param_4 + 0xe);
      *(byte *)(lVar10 + 0x50) = bVar9 | 1;
    }
    else {
      FUN_1475ff67e(param_1 + 0xa0,&local_5c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    uVar2 = *param_4;
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
    uVar6 = param_4[5];
    uVar7 = param_4[6];
    uVar8 = param_4[7];
    *(undefined4 *)(lVar10 + 0x20) = param_4[4];
    *(undefined4 *)(lVar10 + 0x24) = uVar6;
    *(undefined4 *)(lVar10 + 0x28) = uVar7;
    *(undefined4 *)(lVar10 + 0x2c) = uVar8;
    *(undefined4 *)(lVar10 + 0x10) = uVar2;
    *(undefined4 *)(lVar10 + 0x14) = uVar3;
    *(undefined4 *)(lVar10 + 0x18) = uVar4;
    *(undefined4 *)(lVar10 + 0x1c) = uVar5;
    if ((undefined4 *)(lVar10 + 0x10) != param_4) {
      local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_4 + 0xc));
      (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[*(byte *)(param_4 + 0xc)])
                (&local_58,param_4 + 8);
      local_28 = local_48;
      local_38 = local_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      uVar1 = *(ulonglong *)(lVar10 + 0x40);
      uVar2 = *(undefined4 *)(lVar10 + 0x30);
      uVar3 = *(undefined4 *)(lVar10 + 0x34);
      uVar4 = *(undefined4 *)(lVar10 + 0x38);
      uVar5 = *(undefined4 *)(lVar10 + 0x3c);
      *(undefined4 *)(lVar10 + 0x30) = local_58;
      *(undefined4 *)(lVar10 + 0x34) = uStack_54;
      *(undefined4 *)(lVar10 + 0x38) = uStack_50;
      *(undefined4 *)(lVar10 + 0x3c) = uStack_4c;
      *(ulonglong *)(lVar10 + 0x40) = local_48;
      local_58 = uVar2;
      uStack_54 = uVar3;
      uStack_50 = uVar4;
      uStack_4c = uVar5;
      local_48 = uVar1;
      (*(code *)(&PTR_LAB_14a4c7e10)[uVar1 & 0xff])(&local_58);
    }
    *(undefined1 *)(lVar10 + 0x48) = *(undefined1 *)(param_4 + 0xe);
    *(byte *)(lVar10 + 0x50) = *(byte *)(lVar10 + 0x50) | 3;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ff518 FUN_1475ff518 body=189 status=ok
// SIG undefined FUN_1475ff518(void)

longlong FUN_1475ff518(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_1475ff5d6(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ff5d6 FUN_1475ff5d6 body=167 status=ok
// SIG undefined FUN_1475ff5d6(void)

undefined4 * FUN_1475ff5d6(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  uVar1 = *(undefined8 *)(param_3 + 2);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  iVar4 = FUN_140bf3c50((longlong *)(param_1 + 0x18),
                        (uVar7 >> 4) +
                        (uint)uVar1 * 0x10000 + uVar7 + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar3 >> 2) + uVar3 * 0x40 + (uVar2 << 0x13 | uVar2 & 0xffff) + 0x9e3779b9
                        ^ uVar3,param_3);
  uVar6 = 0xffffffff;
  if ((iVar4 != -1) && (lVar5 = (longlong)iVar4 * 0x1c + *(longlong *)(param_1 + 0x18), lVar5 != 0))
  {
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 1475ff67e FUN_1475ff67e body=262 status=ok
// SIG undefined FUN_1475ff67e(void)

void FUN_1475ff67e(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar14 = *param_1;
  if ((int)uVar3 < 1) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    uVar13 = uVar3;
    do {
      uVar1 = (uVar13 >> 1) + uVar15;
      if (*(int *)(lVar14 + (ulonglong)uVar1 * 0x48) < *param_2) {
        uVar15 = uVar1 + (uVar13 & 1);
      }
      bVar4 = 1 < uVar13;
      uVar13 = uVar13 >> 1;
    } while (bVar4);
    if (((int)uVar15 < (int)uVar3) && (*(int *)(lVar14 + (ulonglong)uVar15 * 0x48) <= *param_2)) {
      piVar16 = (int *)(lVar14 + (ulonglong)uVar15 * 0x48);
      FUN_1475fea30(piVar16,1);
      goto LAB_1475ff72e;
    }
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    FUN_1475ff784(param_1,uVar3);
    lVar14 = *param_1;
  }
  lVar5 = (ulonglong)uVar15 * 0x48;
  memmove((void *)(lVar14 + lVar5 + 0x48),(void *)(lVar14 + lVar5),
          (ulonglong)(uVar3 - uVar15) * 0x48);
  piVar16 = (int *)(lVar5 + *param_1);
LAB_1475ff72e:
  *piVar16 = *param_2;
  iVar6 = param_3[1];
  iVar7 = param_3[2];
  iVar8 = param_3[3];
  iVar9 = param_3[4];
  iVar10 = param_3[5];
  iVar11 = param_3[6];
  iVar12 = param_3[7];
  piVar16[2] = *param_3;
  piVar16[3] = iVar6;
  piVar16[4] = iVar7;
  piVar16[5] = iVar8;
  piVar16[6] = iVar9;
  piVar16[7] = iVar10;
  piVar16[8] = iVar11;
  piVar16[9] = iVar12;
  bVar2 = *(byte *)(param_3 + 0xc);
  *(byte *)(piVar16 + 0xe) = bVar2;
  (*(code *)(&switchD_14763af66::switchdataD_14a4c7e30)[bVar2])(piVar16 + 10,param_3 + 8);
  *(char *)(piVar16 + 0x10) = (char)param_3[0xe];
  return;
}



// FUNCTION 1475ff784 FUN_1475ff784 body=147 status=ok
// SIG undefined FUN_1475ff784(void)

void FUN_1475ff784(longlong param_1,int param_2)

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



// FUNCTION 1475ff818 FUN_1475ff818 body=167 status=ok
// SIG undefined FUN_1475ff818(void)

void FUN_1475ff818(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1475ff893;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1475ff893;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1475ff893:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001475ff8b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1475ff8c0 FUN_1475ff8c0 body=900 status=ok
// SIG undefined FUN_1475ff8c0(void)

void FUN_1475ff8c0(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  byte local_319;
  undefined8 *local_2f8;
  int local_2f0;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [8];
  undefined1 local_2b0 [32];
  undefined1 *local_290;
  undefined8 local_288;
  undefined8 local_280 [70];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_2b8;
  if (param_4 != 0) {
    uVar3 = FUN_145990612();
    plVar4 = (longlong *)FUN_144718840(param_4,uVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar10 = *(longlong *)(param_4 + 0x28);
      *(undefined4 *)(lVar10 + 0x29c) = 0;
      lVar5 = 0x10;
      do {
        *(undefined8 *)((longlong)&local_290 + lVar5) = 0;
        *(undefined4 *)((longlong)local_280 + lVar5 + -8) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 8) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x10) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x18) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x20) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x28) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x30) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x38) = 0;
        *(undefined8 *)((longlong)local_280 + lVar5 + 0x40) = 0;
        lVar5 = lVar5 + 0x80;
      } while (lVar5 != 0x210);
      local_2c0 = *(undefined8 *)(param_3 + 8);
      local_2e0 = *param_3;
      uStack_2dc = param_3[1];
      iStack_2d8 = param_3[2];
      uStack_2d4 = param_3[3];
      local_2d0 = *(undefined8 *)(param_3 + 4);
      uStack_2c8 = *(undefined8 *)(param_3 + 6);
      local_290 = (undefined1 *)0x0;
      local_288 = 0x400000000;
      puVar13 = local_280;
      lVar5 = 0;
      do {
        if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar5 & 0x1f) & 1) != 0) {
          local_2c0._0_6_ = CONCAT24(*(undefined2 *)(*param_2 + lVar5 * 4),(undefined4)local_2c0);
          (**(code **)(*plVar4 + 0x10))(plVar4,&local_2f8,&local_2e0,puVar13);
          uVar8 = local_288;
          if (local_2f8 != (undefined8 *)0x0) {
            lVar12 = (longlong)(int)local_288;
            uVar6 = (int)local_288 + 1;
            local_288 = CONCAT44(local_288._4_4_,uVar6);
            if (local_288._4_4_ < uVar6) {
              FUN_14476a5c8(local_2b0,uVar8 & 0xffffffff);
              puVar7 = local_290;
              if (local_290 == (undefined1 *)0x0) {
                puVar7 = local_2b0;
              }
              *(undefined8 **)(puVar7 + lVar12 * 8) = local_2f8;
              if (local_2f8 == (undefined8 *)0x0) goto LAB_1475ffaa2;
            }
            else {
              puVar7 = local_290;
              if (local_290 == (undefined1 *)0x0) {
                puVar7 = local_2b0;
              }
              *(undefined8 **)(puVar7 + lVar12 * 8) = local_2f8;
            }
            LOCK();
            *(int *)(local_2f8 + 1) = *(int *)(local_2f8 + 1) + 1;
            UNLOCK();
            if (local_2f8 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_2f8 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*local_2f8)(local_2f8,1);
              }
            }
          }
        }
LAB_1475ffaa2:
        lVar5 = lVar5 + 1;
        puVar13 = puVar13 + 0x10;
      } while (lVar5 != 4);
      if ((int)local_288 != 0) {
        (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_2b0,1);
      }
      if (*(short *)((longlong)param_3 + 0x22) == -1) {
        local_2f8 = (undefined8 *)0x0;
        local_2e8 = 0;
      }
      else {
        FUN_1475ffc46(lVar10 + 0x28,&local_2f8,*(short *)((longlong)param_3 + 0x22),
                      *(undefined2 *)(param_1 + 0x16));
        local_319 = local_2f0 == 1;
      }
      if (0 < iStack_2d8) {
        lVar5 = 0;
        do {
          uVar2 = *(undefined2 *)(CONCAT44(uStack_2dc,local_2e0) + lVar5 * 2);
          lVar12 = *param_6;
          puVar13 = local_280;
          lVar9 = 0;
          do {
            if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar9 & 0x1f) & 1) != 0) {
              uVar8 = (ulonglong)*(ushort *)(*param_2 + 2 + lVar9 * 4);
              lVar11 = uVar8 + local_2e8;
              if (local_2e8 == 0) {
                lVar11 = 0;
              }
              uVar3 = FUN_147546472(puVar13,uVar2,*(undefined8 *)(param_5 + uVar8),lVar11);
              *(undefined8 *)(lVar5 * 0x20 + lVar12 + uVar8) = uVar3;
            }
            lVar9 = lVar9 + 1;
            puVar13 = puVar13 + 0x10;
          } while (lVar9 != 4);
          lVar5 = lVar5 + 1;
        } while (lVar5 < iStack_2d8);
      }
      *(undefined4 *)(lVar10 + 0x29c) = 1;
      if (local_2f8 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_2f8 + 3) = *(int *)(local_2f8 + 3) + -1;
        UNLOCK();
        if ((local_319 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_2f8 + 1));
        }
      }
      FUN_14588b8d6(local_2b0);
      lVar10 = 0x180;
      do {
        FUN_1475d7c02((longlong)local_280 + lVar10);
        lVar10 = lVar10 + -0x80;
      } while (lVar10 != -0x80);
    }
  }
  if ((local_50 ^ (ulonglong)local_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475ffc46 FUN_1475ffc46 body=185 status=ok
// SIG undefined FUN_1475ffc46(void)

undefined8 * FUN_1475ffc46(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 != 0xffff) {
    uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar4 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar4 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
      uVar1 = *(ushort *)(lVar3 + 0xc);
      if (uVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x28);
        lVar2 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar3 + 0x1e) == param_4) {
            FUN_1475ffd00(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar3 = lVar3 + 0x20;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1475ffd00 FUN_1475ffd00 body=116 status=ok
// SIG undefined FUN_1475ffd00(void)

longlong * FUN_1475ffd00(longlong *param_1,longlong *param_2,int param_3,uint param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (ulonglong)param_4 * 0x20 + *param_2;
  }
  return param_1;
}



// FUNCTION 1475ffd74 FUN_1475ffd74 body=57 status=ok
// SIG undefined FUN_1475ffd74(void)

undefined8 * FUN_1475ffd74(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c24e0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475ffdae FUN_1475ffdae body=152 status=ok
// SIG undefined FUN_1475ffdae(void)

void FUN_1475ffdae(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x28) = param_3;
  uVar2 = FUN_14083f088(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x270);
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_38);
    *(undefined4 *)(param_1 + 0x30) = local_38;
    *(undefined4 *)(param_1 + 0x34) = uStack_34;
    *(undefined4 *)(param_1 + 0x38) = uStack_30;
    *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  }
  if (param_4 != 0) {
    uVar2 = FUN_1475ffefe(param_4,*(undefined2 *)(param_3 + 0x16));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475ffe8c FUN_1475ffe8c body=55 status=ok
// SIG undefined FUN_1475ffe8c(void)

void FUN_1475ffe8c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_147602a54(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1475ffec4 FUN_1475ffec4 body=57 status=ok
// SIG undefined FUN_1475ffec4(void)

undefined8 * FUN_1475ffec4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c24e0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1475ffefe FUN_1475ffefe body=232 status=ok
// SIG undefined FUN_1475ffefe(void)

undefined8 * FUN_1475ffefe(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 local_3a;
  undefined2 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3a = param_2;
  puVar1 = (undefined8 *)FUN_1475fffe8();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a4c2500;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    local_30 = &local_48;
    local_38 = &local_3a;
    local_48 = puVar1;
    FUN_1475d8166(param_1,local_24,&local_38,0);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475fffe8 FUN_1475fffe8 body=104 status=ok
// SIG undefined FUN_1475fffe8(void)

undefined8 FUN_1475fffe8(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 4 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            return *(undefined8 *)(puVar1 + 4);
          }
          return 0;
        }
        iVar2 = *(int *)(puVar1 + 8);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 147600050 FUN_147600050 body=38 status=ok
// SIG undefined FUN_147600050(void)

undefined8 FUN_147600050(undefined8 param_1,int param_2)

{
  FUN_1476000ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147600076 FUN_147600076 body=118 status=ok
// SIG undefined FUN_147600076(void)

void FUN_147600076(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar5);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar4 = param_1 + 0x18;
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
          FUN_147600250(param_1 + 8);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 1476000ec FUN_1476000ec body=71 status=ok
// SIG undefined FUN_1476000ec(void)

void FUN_1476000ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c2500;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_147600168(param_1 + 8);
  FUN_147600134(param_1 + 1);
  return;
}



// FUNCTION 147600134 FUN_147600134 body=52 status=ok
// SIG undefined FUN_147600134(void)

void FUN_147600134(longlong *param_1)

{
  FUN_1476001f6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147600168 FUN_147600168 body=52 status=ok
// SIG undefined FUN_147600168(void)

void FUN_147600168(longlong *param_1)

{
  FUN_14760019c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14760019c FUN_14760019c body=89 status=ok
// SIG undefined FUN_14760019c(void)

void FUN_14760019c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1476001f6 FUN_1476001f6 body=89 status=ok
// SIG undefined FUN_1476001f6(void)

void FUN_1476001f6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147600250 FUN_147600250 body=104 status=ok
// SIG undefined FUN_147600250(void)

void FUN_147600250(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 0x20 + 4) = uVar4;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1476002b8 FUN_1476002b8 body=1327 status=ok
// SIG undefined FUN_1476002b8(void)

void FUN_1476002b8(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  int local_d4;
  int local_d0;
  int local_cc;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_94;
  ushort local_8e;
  char local_8c;
  char local_8a;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar18 = *(longlong **)(param_2 + 0x28);
    lVar13 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar18 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_147600315;
      plVar18 = plVar18 + 4;
      lVar13 = lVar13 + -0x20;
    } while (lVar13 != 0);
  }
  plVar18 = (longlong *)0x0;
LAB_147600315:
  local_c0 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_b8 = *(ulonglong *)(param_1 + 0x40);
  local_cc = *(int *)(param_2 + 0x14);
  if (local_cc == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar18 + 1));
  }
  LOCK();
  *(int *)(plVar18 + 3) = (int)plVar18[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar17 = *(longlong **)(param_2 + 0x28);
    lVar13 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar17 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_147600371;
      plVar17 = plVar17 + 4;
      lVar13 = lVar13 + -0x20;
    } while (lVar13 != 0);
  }
  plVar17 = (longlong *)0x0;
LAB_147600371:
  lVar13 = *plVar18;
  local_d0 = *(int *)(param_2 + 0x14);
  if (local_d0 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar17 + 1));
  }
  LOCK();
  *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar24 = *(longlong **)(param_2 + 0x28);
    lVar14 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar24 + 0x1e) == **(short **)(*(longlong *)(param_1 + 0x28) + 0x18)
         ) goto LAB_1476003bf;
      plVar24 = plVar24 + 4;
      lVar14 = lVar14 + -0x20;
    } while (lVar14 != 0);
  }
  plVar24 = (longlong *)0x0;
LAB_1476003bf:
  lVar14 = *plVar17;
  local_d4 = *(int *)(param_2 + 0x14);
  if (local_d4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar24 + 1));
  }
  LOCK();
  *(int *)(plVar24 + 3) = (int)plVar24[3] + 1;
  UNLOCK();
  local_e0 = *plVar24;
  local_b0 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if (local_c0 != 0) {
    local_c8 = param_1 + 8;
    uVar25 = 0;
    do {
      local_94 = *(int *)(lVar14 + uVar25 * 8);
      uVar3 = *(uint *)(param_1 + 0x10);
      lVar15 = *(longlong *)(param_1 + 8);
      uVar19 = 0;
      if (0 < (int)uVar3) {
        uVar19 = 0;
        uVar21 = (ulonglong)uVar3;
        uVar22 = uVar3;
        do {
          uVar21 = uVar21 >> 1;
          uVar23 = (uint)uVar21 + (int)uVar19;
          if (*(int *)(lVar15 + (ulonglong)uVar23 * 0x28) < local_94) {
            uVar19 = (ulonglong)(uVar23 + (uVar22 & 1));
          }
          bVar4 = 1 < uVar22;
          uVar22 = (uint)uVar21;
        } while (bVar4);
      }
      if (((int)uVar19 < (int)uVar3) && (*(int *)(lVar15 + uVar19 * 0x28) <= local_94)) {
        lVar15 = lVar15 + uVar19 * 0x28;
        if ((undefined4 *)(lVar15 + 8) == (undefined4 *)0x0) goto LAB_1476004a1;
        uVar5 = *(undefined4 *)(lVar15 + 8);
        uVar6 = *(undefined4 *)(lVar15 + 0xc);
        uVar7 = *(undefined4 *)(lVar15 + 0x10);
        uVar8 = *(undefined4 *)(lVar15 + 0x14);
        uVar12 = *(undefined8 *)(lVar15 + 0x20);
        puVar20 = (undefined8 *)(lVar13 + 0x10 + uVar25 * 0x20);
        *puVar20 = *(undefined8 *)(lVar15 + 0x18);
        puVar20[1] = uVar12;
        puVar1 = (undefined4 *)(lVar13 + uVar25 * 0x20);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        puVar1[2] = uVar7;
        puVar1[3] = uVar8;
      }
      else {
LAB_1476004a1:
        lVar15 = FUN_1475b443c(local_b0);
        if (((lVar15 != 0) && (lVar16 = FUN_14479d2ce(lVar15), lVar16 != 0)) &&
           (*(longlong *)(lVar15 + 8) != 0)) {
          local_a8 = *(undefined4 *)(param_1 + 0x30);
          uStack_a4 = *(undefined4 *)(param_1 + 0x34);
          uStack_a0 = *(undefined4 *)(param_1 + 0x38);
          uStack_9c = *(undefined4 *)(param_1 + 0x3c);
          local_f0 = lVar16;
          FUN_140d4d2ba(&local_8e,lVar16,lVar15 + 8,&local_a8);
          lVar16 = *(longlong *)(param_1 + 0x48);
          if (lVar16 == 0) {
LAB_1476004fb:
            if (local_8a == '\0') {
              local_78 = 0;
              uStack_70 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_68 = 1;
              FUN_1476012d6(local_f0,*(undefined1 *)(local_e0 + uVar25),lVar15 + 0x10,&local_88);
            }
            else if (local_8c == '\x01') {
              local_68 = 1;
              (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                          (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_8e))
                        (&local_88,local_f0,*(undefined1 *)(local_e0 + uVar25));
            }
            else {
              uVar19 = (ulonglong)local_8e;
              local_88 = 0;
              uStack_80 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_68 = 1;
              cVar2 = *(char *)(local_e0 + uVar25);
              if (cVar2 == '\x04') {
                local_88 = *(ulonglong *)(local_f0 + uVar19);
                uStack_80 = ((ulonglong *)(local_f0 + uVar19))[1];
                puVar20 = (undefined8 *)(local_f0 + uVar19 + 0x10);
                local_78 = *puVar20;
                uStack_70 = puVar20[1];
              }
              else if (cVar2 == '\x03') {
                local_78 = *(undefined8 *)(local_f0 + uVar19 + 0x10);
                local_88 = *(ulonglong *)(local_f0 + uVar19);
                uStack_80 = ((ulonglong *)(local_f0 + uVar19))[1];
                uStack_70 = 0;
              }
              else if (cVar2 == '\x02') {
                local_88 = *(ulonglong *)(local_f0 + uVar19);
                uStack_80 = ((ulonglong *)(local_f0 + uVar19))[1];
                local_78 = 0;
                uStack_70 = 0;
              }
            }
            puVar20 = &local_88;
            puVar1 = (undefined4 *)(lVar13 + 0x10 + uVar25 * 0x20);
            *puVar1 = (undefined4)local_78;
            puVar1[1] = local_78._4_4_;
            puVar1[2] = (undefined4)uStack_70;
            puVar1[3] = uStack_70._4_4_;
            puVar1 = (undefined4 *)(lVar13 + uVar25 * 0x20);
            *puVar1 = (undefined4)local_88;
            puVar1[1] = local_88._4_4_;
            puVar1[2] = (undefined4)uStack_80;
            puVar1[3] = uStack_80._4_4_;
          }
          else {
            local_e8 = lVar16;
            if (local_8a == '\0') {
              FUN_14760130a(lVar16,&local_88,local_f0,lVar15 + 0x10);
            }
            else if (local_8c == '\x01') {
              FUN_147601b40();
            }
            else {
              FUN_147601d22(lVar16,&local_88,local_f0,local_8e);
            }
            if (local_88._2_1_ == '\x01') {
              puVar20 = (undefined8 *)((local_88 & 0xffff) * 0x20 + *(longlong *)(local_e8 + 8));
            }
            else {
              puVar20 = (undefined8 *)0x0;
            }
            if (puVar20 == (undefined8 *)0x0) goto LAB_1476004fb;
            uVar5 = *(undefined4 *)puVar20;
            uVar6 = *(undefined4 *)((longlong)puVar20 + 4);
            uVar7 = *(undefined4 *)(puVar20 + 1);
            uVar8 = *(undefined4 *)((longlong)puVar20 + 0xc);
            uVar9 = *(undefined4 *)((longlong)puVar20 + 0x14);
            uVar10 = *(undefined4 *)(puVar20 + 3);
            uVar11 = *(undefined4 *)((longlong)puVar20 + 0x1c);
            puVar1 = (undefined4 *)(lVar13 + 0x10 + uVar25 * 0x20);
            *puVar1 = *(undefined4 *)(puVar20 + 2);
            puVar1[1] = uVar9;
            puVar1[2] = uVar10;
            puVar1[3] = uVar11;
            puVar1 = (undefined4 *)(lVar13 + uVar25 * 0x20);
            *puVar1 = uVar5;
            puVar1[1] = uVar6;
            puVar1[2] = uVar7;
            puVar1[3] = uVar8;
          }
          FUN_147601f04(local_c8,&local_94,puVar20);
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != local_c0);
  }
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar24 + 3) = (int)plVar24[3] + -1;
    UNLOCK();
    if (local_d4 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar24 + 1));
    }
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 3) = (int)plVar17[3] + -1;
    UNLOCK();
    if (local_d0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar17 + 1));
    }
  }
  if (plVar18 != (longlong *)0x0) {
    uVar25 = plVar18[2];
    if ((ulonglong)plVar18[2] < local_b8) {
      uVar25 = local_b8;
    }
    plVar18[2] = uVar25;
    LOCK();
    *(int *)(plVar18 + 3) = (int)plVar18[3] + -1;
    UNLOCK();
    if (local_cc == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar18 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476007e8 FUN_1476007e8 body=1849 status=ok
// SIG undefined FUN_1476007e8(void)

void FUN_1476007e8(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_130;
  ulonglong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  undefined8 local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined2 local_da;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  ushort local_94;
  char local_92;
  ushort local_90;
  char cStack_8e;
  undefined5 uStack_8d;
  int local_88;
  longlong local_80;
  ushort local_78;
  char cStack_76;
  undefined5 uStack_75;
  int local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar16 = *(longlong **)(param_2 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar16 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_147600846;
      plVar16 = plVar16 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar16 = (longlong *)0x0;
LAB_147600846:
  local_128 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_e8 = *(ulonglong *)(param_1 + 0x40);
  local_fc = *(int *)(param_2 + 0x14);
  if (local_fc == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar16 + 1));
  }
  LOCK();
  *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar17 = *(longlong **)(param_2 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar17 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1476008a3;
      plVar17 = plVar17 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar17 = (longlong *)0x0;
LAB_1476008a3:
  local_110 = *plVar16;
  local_f0 = *(ulonglong *)(param_1 + 0x40);
  local_100 = *(int *)(param_2 + 0x14);
  if (local_100 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar17 + 1));
  }
  LOCK();
  *(int *)(plVar17 + 3) = (int)plVar17[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar19 = *(longlong **)(param_2 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar19 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_1476008ff;
      plVar19 = plVar19 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar19 = (longlong *)0x0;
LAB_1476008ff:
  puVar15 = (undefined4 *)*plVar17;
  local_104 = *(int *)(param_2 + 0x14);
  if (local_104 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar19 + 1));
  }
  LOCK();
  *(int *)(plVar19 + 3) = (int)plVar19[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar20 = *(longlong **)(param_2 + 0x28);
    lVar12 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar20 + 0x1e) == **(short **)(*(longlong *)(param_1 + 0x28) + 0x18)
         ) goto LAB_147600951;
      plVar20 = plVar20 + 4;
      lVar12 = lVar12 + -0x20;
    } while (lVar12 != 0);
  }
  plVar20 = (longlong *)0x0;
LAB_147600951:
  local_130 = *plVar19;
  local_108 = *(int *)(param_2 + 0x14);
  if (local_108 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar20 + 1));
  }
  LOCK();
  *(int *)(plVar20 + 3) = (int)plVar20[3] + 1;
  UNLOCK();
  local_118 = *plVar20;
  FUN_140b325e4(param_2,&local_b0,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_a0 == 0) {
    FUN_1410bd96e(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    lVar12 = local_68;
    if (local_68 == 0) {
      FUN_1410bd9c4(param_2,&local_90,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      local_120 = local_80;
      if ((short)local_128 != 0 && local_80 != 0) {
        lVar12 = 0;
        uVar18 = 0;
        do {
          puVar14 = &DAT_149dfb77a;
          if (*(int *)(*(longlong *)(local_120 + lVar12) + 0x58) != 0) {
            puVar14 = *(undefined2 **)(*(longlong *)(local_120 + lVar12) + 0x50);
          }
          local_f8 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(&local_d8,puVar14,1);
          FUN_14760130a(local_f8,&local_94,*(undefined8 *)(local_130 + uVar18 * 8),&local_d8);
          if (local_92 == '\x01') {
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
            puVar2 = (undefined4 *)(lVar6 + (ulonglong)local_94 * 0x20);
            uVar7 = *puVar2;
            uVar8 = puVar2[1];
            uVar9 = puVar2[2];
            uVar10 = puVar2[3];
            puVar3 = (undefined8 *)(lVar6 + 0x10 + (ulonglong)local_94 * 0x20);
            uVar11 = puVar3[1];
            puVar4 = (undefined8 *)((longlong)puVar15 + lVar12 * 2 + 0x10);
            *puVar4 = *puVar3;
            puVar4[1] = uVar11;
            puVar2 = (undefined4 *)((longlong)puVar15 + lVar12 * 2);
            *puVar2 = uVar7;
            puVar2[1] = uVar8;
            puVar2[2] = uVar9;
            puVar2[3] = uVar10;
          }
          else {
            local_c8 = 0;
            uStack_c0 = 0;
            local_d8 = 0;
            uStack_d0 = 0;
            FUN_1475fc9cc(*(undefined8 *)(local_130 + uVar18 * 8),
                          *(undefined1 *)(local_118 + uVar18),*(undefined8 *)(local_120 + lVar12),
                          &local_d8);
            puVar2 = (undefined4 *)((longlong)puVar15 + lVar12 * 2 + 0x10);
            *puVar2 = (undefined4)local_c8;
            puVar2[1] = local_c8._4_4_;
            puVar2[2] = (undefined4)uStack_c0;
            puVar2[3] = uStack_c0._4_4_;
            puVar2 = (undefined4 *)((longlong)puVar15 + lVar12 * 2);
            *puVar2 = (undefined4)local_d8;
            puVar2[1] = local_d8._4_4_;
            puVar2[2] = (undefined4)uStack_d0;
            puVar2[3] = uStack_d0._4_4_;
            local_138 = *(undefined8 *)(local_120 + lVar12);
            FUN_1476025d8(*(undefined8 *)(param_1 + 0x48),&local_da,
                          *(undefined8 *)(local_130 + uVar18 * 8),&local_d8);
            *(undefined2 *)(local_110 + uVar18 * 2) = local_da;
          }
          uVar18 = uVar18 + 1;
          lVar12 = lVar12 + 0x10;
        } while (local_128 != uVar18);
      }
      lVar12 = CONCAT53(uStack_8d,CONCAT12(cStack_8e,local_90));
      if (lVar12 != 0) {
        LOCK();
        piVar1 = (int *)(lVar12 + 0x18);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (local_88 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(CONCAT53(uStack_8d,CONCAT12(cStack_8e,local_90)) + 8));
        }
      }
    }
    else if (local_128 != 0) {
      uVar18 = 0;
      do {
        FUN_147601d22(*(undefined8 *)(param_1 + 0x48),&local_90,
                      *(undefined8 *)(local_130 + uVar18 * 8),*(undefined2 *)(local_68 + uVar18 * 2)
                     );
        if (cStack_8e == '\x01') {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
          puVar2 = (undefined4 *)(lVar6 + (ulonglong)local_90 * 0x20);
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          puVar3 = (undefined8 *)(lVar6 + 0x10 + (ulonglong)local_90 * 0x20);
          uVar11 = puVar3[1];
          *(undefined8 *)(puVar15 + 4) = *puVar3;
          *(undefined8 *)(puVar15 + 6) = uVar11;
          *puVar15 = uVar7;
          puVar15[1] = uVar8;
          puVar15[2] = uVar9;
          puVar15[3] = uVar10;
        }
        else {
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          uVar13 = (ulonglong)*(ushort *)(lVar12 + uVar18 * 2);
          cVar5 = *(char *)(local_118 + uVar18);
          lVar6 = *(longlong *)(local_130 + uVar18 * 8);
          if (cVar5 == '\x04') {
            local_d8 = *(undefined8 *)(lVar6 + uVar13);
            uStack_d0 = ((undefined8 *)(lVar6 + uVar13))[1];
            puVar3 = (undefined8 *)(lVar6 + 0x10 + uVar13);
            local_c8 = *puVar3;
            uStack_c0 = puVar3[1];
          }
          else if (cVar5 == '\x03') {
            local_c8 = *(undefined8 *)(lVar6 + 0x10 + uVar13);
            local_d8 = *(undefined8 *)(lVar6 + uVar13);
            uStack_d0 = ((undefined8 *)(lVar6 + uVar13))[1];
          }
          else if (cVar5 == '\x02') {
            local_d8 = *(undefined8 *)(lVar6 + uVar13);
            uStack_d0 = ((undefined8 *)(lVar6 + uVar13))[1];
            local_c8 = 0;
            uStack_c0 = 0;
          }
          puVar15[4] = (undefined4)local_c8;
          puVar15[5] = local_c8._4_4_;
          puVar15[6] = (undefined4)uStack_c0;
          puVar15[7] = uStack_c0._4_4_;
          *puVar15 = (undefined4)local_d8;
          puVar15[1] = local_d8._4_4_;
          puVar15[2] = (undefined4)uStack_d0;
          puVar15[3] = uStack_d0._4_4_;
          local_138 = CONCAT62(local_138._2_6_,*(undefined2 *)(lVar12 + uVar18 * 2));
          FUN_1476024f6(*(undefined8 *)(param_1 + 0x48),&local_94,
                        *(undefined8 *)(local_130 + uVar18 * 8),&local_d8);
          *(ushort *)(local_110 + uVar18 * 2) = local_94;
        }
        uVar18 = uVar18 + 1;
        puVar15 = puVar15 + 8;
      } while (local_128 != uVar18);
    }
    lVar12 = CONCAT53(uStack_75,CONCAT12(cStack_76,local_78));
    if (lVar12 != 0) {
      LOCK();
      piVar1 = (int *)(lVar12 + 0x18);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (local_70 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(CONCAT53(uStack_75,CONCAT12(cStack_76,local_78)) + 8));
      }
    }
  }
  else if (local_128 != 0) {
    uVar18 = 0;
    do {
      FUN_147601b40(*(undefined8 *)(param_1 + 0x48),&local_78,
                    *(undefined8 *)(local_130 + uVar18 * 8),*(undefined2 *)(local_a0 + uVar18 * 2));
      if (cStack_76 == '\x01') {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
        puVar2 = (undefined4 *)(lVar12 + (ulonglong)local_78 * 0x20);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined8 *)(lVar12 + 0x10 + (ulonglong)local_78 * 0x20);
        uVar11 = puVar3[1];
        *(undefined8 *)(puVar15 + 4) = *puVar3;
        *(undefined8 *)(puVar15 + 6) = uVar11;
        *puVar15 = uVar7;
        puVar15[1] = uVar8;
        puVar15[2] = uVar9;
        puVar15[3] = uVar10;
      }
      else {
        (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                    (longlong)*(int *)(param_1 + 0x3c) *
                    (ulonglong)*(ushort *)(local_a0 + uVar18 * 2)))
                  (&local_d8,*(undefined8 *)(local_130 + uVar18 * 8),
                   *(undefined1 *)(local_118 + uVar18));
        puVar15[4] = (undefined4)local_c8;
        puVar15[5] = local_c8._4_4_;
        puVar15[6] = (undefined4)uStack_c0;
        puVar15[7] = uStack_c0._4_4_;
        *puVar15 = (undefined4)local_d8;
        puVar15[1] = local_d8._4_4_;
        puVar15[2] = (undefined4)uStack_d0;
        puVar15[3] = uStack_d0._4_4_;
        local_138 = CONCAT62(local_138._2_6_,*(undefined2 *)(local_a0 + uVar18 * 2));
        FUN_147602414(*(undefined8 *)(param_1 + 0x48),&local_90,
                      *(undefined8 *)(local_130 + uVar18 * 8),&local_d8);
        *(ushort *)(local_110 + uVar18 * 2) = local_90;
      }
      uVar18 = uVar18 + 1;
      puVar15 = puVar15 + 8;
    } while (local_128 != uVar18);
  }
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 0x18) = *(int *)(local_b0 + 0x18) + -1;
    UNLOCK();
    if (local_a8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_b0 + 8));
    }
  }
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 3) = (int)plVar20[3] + -1;
    UNLOCK();
    if (local_108 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar20 + 1));
    }
  }
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar19 + 3) = (int)plVar19[3] + -1;
    UNLOCK();
    if (local_104 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar19 + 1));
    }
  }
  if (plVar17 != (longlong *)0x0) {
    uVar18 = plVar17[2];
    if ((ulonglong)plVar17[2] < local_f0) {
      uVar18 = local_f0;
    }
    plVar17[2] = uVar18;
    LOCK();
    *(int *)(plVar17 + 3) = (int)plVar17[3] + -1;
    UNLOCK();
    if (local_100 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar17 + 1));
    }
  }
  if (plVar16 != (longlong *)0x0) {
    uVar18 = plVar16[2];
    if ((ulonglong)plVar16[2] < local_e8) {
      uVar18 = local_e8;
    }
    plVar16[2] = uVar18;
    LOCK();
    *(int *)(plVar16 + 3) = (int)plVar16[3] + -1;
    UNLOCK();
    if (local_fc == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar16 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147600f22 FUN_147600f22 body=946 status=ok
// SIG undefined FUN_147600f22(void)

void FUN_147600f22(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined1 auStack_f8 [40];
  ulonglong local_d0;
  longlong local_c8;
  int local_bc;
  int local_b8;
  int local_b4;
  ulonglong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  int local_90;
  undefined8 *local_88;
  longlong local_80;
  int local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_147600f78;
      plVar7 = plVar7 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_147600f78:
  local_d0 = (ulonglong)*(ushort *)(param_2 + 0xe);
  local_b0 = *(ulonglong *)(param_1 + 0x40);
  local_b4 = *(int *)(param_2 + 0x14);
  if (local_b4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_147600fd5;
      plVar8 = plVar8 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147600fd5:
  puVar10 = (undefined4 *)*plVar7;
  local_b8 = *(int *)(param_2 + 0x14);
  if (local_b8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == **(short **)(*(longlong *)(param_1 + 0x28) + 0x18))
      goto LAB_147601024;
      plVar5 = plVar5 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_147601024:
  local_c8 = *plVar8;
  local_bc = *(int *)(param_2 + 0x14);
  if (local_bc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  lVar3 = *plVar5;
  FUN_140b325e4(param_2,&local_80,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  lVar2 = local_c8;
  uVar4 = local_d0;
  local_a8 = plVar8;
  local_a0 = plVar7;
  if (local_70 == 0) {
    FUN_1410bd96e(param_2,&local_68,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    lVar2 = local_c8;
    uVar4 = local_d0;
    if (local_58 == 0) {
      FUN_1410bd9c4(param_2,&local_98,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      uVar4 = local_d0;
      if ((short)local_d0 != 0 && local_88 != (undefined8 *)0x0) {
        uVar6 = 0;
        puVar9 = local_88;
        do {
          FUN_1475fc9cc(*(undefined8 *)(local_c8 + uVar6 * 8),*(undefined1 *)(lVar3 + uVar6),*puVar9
                        ,puVar10);
          uVar6 = uVar6 + 1;
          puVar9 = puVar9 + 2;
          puVar10 = puVar10 + 8;
        } while (uVar4 != uVar6);
      }
      if (local_98 != 0) {
        LOCK();
        *(int *)(local_98 + 0x18) = *(int *)(local_98 + 0x18) + -1;
        UNLOCK();
        if (local_90 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_98 + 8));
        }
      }
    }
    else if (local_d0 != 0) {
      uVar6 = 0;
      do {
        FUN_1475fc96c(*(undefined8 *)(lVar2 + uVar6 * 8),*(undefined1 *)(lVar3 + uVar6),
                      *(undefined2 *)(local_58 + uVar6 * 2),puVar10);
        uVar6 = uVar6 + 1;
        puVar10 = puVar10 + 8;
      } while (uVar4 != uVar6);
    }
    if (CONCAT44(uStack_64,local_68) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_64,local_68) + 0x18);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iStack_60 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(CONCAT44(uStack_64,local_68) + 8));
      }
    }
  }
  else if (local_d0 != 0) {
    uVar6 = 0;
    do {
      (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                  (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)*(ushort *)(local_70 + uVar6 * 2))
      )(&local_68,*(undefined8 *)(lVar2 + uVar6 * 8),*(undefined1 *)(lVar3 + uVar6));
      *(longlong *)(puVar10 + 4) = local_58;
      *(undefined8 *)(puVar10 + 6) = uStack_50;
      *puVar10 = local_68;
      puVar10[1] = uStack_64;
      puVar10[2] = iStack_60;
      puVar10[3] = uStack_5c;
      uVar6 = uVar6 + 1;
      puVar10 = puVar10 + 8;
    } while (uVar4 != uVar6);
  }
  if (local_80 != 0) {
    LOCK();
    *(int *)(local_80 + 0x18) = *(int *)(local_80 + 0x18) + -1;
    UNLOCK();
    if (local_78 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_80 + 8));
    }
  }
  plVar8 = local_a0;
  plVar7 = local_a8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (local_bc == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (local_b8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    uVar4 = plVar8[2];
    if ((ulonglong)plVar8[2] < local_b0) {
      uVar4 = local_b0;
    }
    plVar8[2] = uVar4;
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (local_b4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476012d6 FUN_1476012d6 body=52 status=ok
// SIG undefined FUN_1476012d6(void)

void FUN_1476012d6(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == '\x04') {
    FUN_1476021da(param_1,param_3,param_4);
    return;
  }
  if (param_2 != '\x03') {
    if (param_2 != '\x02') {
      return;
    }
    FUN_147602072(param_1,param_3,param_4);
    return;
  }
  FUN_147602120(param_1,param_3,param_4);
  return;
}



// FUNCTION 14760130a FUN_14760130a body=483 status=ok
// SIG undefined FUN_14760130a(void)

undefined8 FUN_14760130a(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147601438;
        }
        else {
LAB_147601438:
          FUN_1476017a8(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147601874(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1476016dc(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = *param_4;
  local_68 = CONCAT71(local_68._1_7_,2);
  FUN_1476014ee(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476014ee FUN_1476014ee body=493 status=ok
// SIG undefined FUN_1476014ee(void)

undefined2 * FUN_1476014ee(longlong param_1,undefined2 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_48 = param_1 + 0x50;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_40;
    uVar3 = local_78;
    local_70 = local_38;
    local_6c = local_34;
    local_88 = local_50;
    local_80 = local_48;
    local_58 = 0;
    local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_90 = plVar1;
    local_68 = plVar1;
    local_60 = plVar1;
    if (local_78._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar2 = *(ushort *)(*local_90 + 0x14 + (longlong)iVar6 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar7 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147601620;
        }
        else {
LAB_147601620:
          FUN_1476017a8(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_147601874(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_1476016dc(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_147601a88((longlong *)(param_1 + 0x40),uVar5,param_3);
  if ((iVar6 == -1) ||
     (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x40),
     puVar8 = (undefined2 *)(lVar7 + 0x14), puVar8 == (undefined2 *)0x0 || lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    *param_2 = *puVar8;
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476016dc FUN_1476016dc body=203 status=ok
// SIG undefined FUN_1476016dc(void)

void FUN_1476016dc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar6 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)(int)uVar6 * 0x20;
        if (iVar3 < (int)uVar6) {
          iVar5 = *(int *)(lVar2 + lVar7);
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          uVar6 = (ulonglong)iVar1;
          if (uVar6 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar6 * 0x20) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x20) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar6 = (ulonglong)*(uint *)(lVar2 + 4 + lVar7);
        }
      } while ((int)uVar6 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_1446f4a44(param_1,iVar5);
  return;
}



// FUNCTION 1476017a8 FUN_1476017a8 body=90 status=ok
// SIG undefined FUN_1476017a8(void)

void FUN_1476017a8(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147601802();
  return;
}



// FUNCTION 147601802 FUN_147601802 body=114 status=ok
// SIG undefined FUN_147601802(void)

void FUN_147601802(longlong *param_1,int param_2)

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



// FUNCTION 147601874 FUN_147601874 body=68 status=ok
// SIG undefined FUN_147601874(void)

void FUN_147601874(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1476018b8(param_1);
  return;
}



// FUNCTION 1476018b8 FUN_1476018b8 body=462 status=ok
// SIG undefined FUN_1476018b8(void)

void FUN_1476018b8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar11 = (longlong)iVar5 * 0x20;
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),*(undefined4 *)(lVar3 + 4 + lVar11));
        iVar7 = FUN_144a78877(uVar6,*(undefined1 *)(lVar3 + 0x10 + lVar11));
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147601a88 FUN_147601a88 body=107 status=ok
// SIG undefined FUN_147601a88(void)

int FUN_147601a88(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_147601af3(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 147601af3 FUN_147601af3 body=76 status=ok
// SIG undefined FUN_147601af3(void)

undefined8 FUN_147601af3(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    cVar1 = (char)param_1[4];
    if (cVar1 == (char)param_2[4]) {
      if (cVar1 == '\x02') {
        uVar2 = *(ulonglong *)(param_1 + 2);
        bVar4 = uVar2 == *(ulonglong *)(param_2 + 2);
      }
      else {
        if ((cVar1 != '\x01') && (cVar1 != '\0')) {
          return 1;
        }
        uVar2 = (ulonglong)*(ushort *)(param_1 + 2);
        bVar4 = *(ushort *)(param_1 + 2) == *(ushort *)(param_2 + 2);
      }
      uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 147601b40 FUN_147601b40 body=481 status=ok
// SIG undefined FUN_147601b40(void)

undefined8 FUN_147601b40(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147601c6e;
        }
        else {
LAB_147601c6e:
          FUN_1476017a8(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147601874(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1476016dc(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_1476014ee(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147601d22 FUN_147601d22 body=481 status=ok
// SIG undefined FUN_147601d22(void)

undefined8 FUN_147601d22(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147601e50;
        }
        else {
LAB_147601e50:
          FUN_1476017a8(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147601874(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_1476016dc(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = local_68 & 0xffffffffffffff00;
  FUN_1476014ee(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147601f04 FUN_147601f04 body=218 status=ok
// SIG undefined FUN_147601f04(void)

void FUN_147601f04(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar10 = *param_1;
  if ((int)uVar2 < 1) {
    uVar11 = 0;
  }
  else {
    iVar8 = *param_2;
    uVar11 = 0;
    uVar9 = uVar2;
    do {
      uVar1 = (uVar9 >> 1) + uVar11;
      if (*(int *)(lVar10 + (ulonglong)uVar1 * 0x28) < iVar8) {
        uVar11 = uVar1 + (uVar9 & 1);
      }
      bVar3 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar3);
    if (((int)uVar11 < (int)uVar2) && (*(int *)(lVar10 + (ulonglong)uVar11 * 0x28) <= iVar8)) {
      piVar12 = (int *)(lVar10 + (ulonglong)uVar11 * 0x28);
      goto LAB_147601fa9;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_147601fde(param_1,uVar2);
    lVar10 = *param_1;
  }
  lVar4 = (ulonglong)uVar11 * 0x28;
  memmove((void *)(lVar10 + lVar4 + 0x28),(void *)(lVar10 + lVar4),
          (ulonglong)(uVar2 - uVar11) * 0x28);
  piVar12 = (int *)(lVar4 + *param_1);
  iVar8 = *param_2;
LAB_147601fa9:
  *piVar12 = iVar8;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined8 *)(piVar12 + 2) = *param_3;
  *(undefined8 *)(piVar12 + 4) = uVar5;
  *(undefined8 *)(piVar12 + 6) = uVar6;
  *(undefined8 *)(piVar12 + 8) = uVar7;
  return;
}



// FUNCTION 147601fde FUN_147601fde body=147 status=ok
// SIG undefined FUN_147601fde(void)

void FUN_147601fde(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147602072 FUN_147602072 body=173 status=ok
// SIG undefined FUN_147602072(void)

void FUN_147602072(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_2,&local_58);
  puVar1 = local_58;
  if (local_50 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_48,puVar1);
  FUN_147602290(&local_38,param_1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 == '\x01') {
    *param_3 = local_38;
    param_3[1] = uStack_30;
    param_3[2] = 0;
    param_3[3] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147602120 FUN_147602120 body=185 status=ok
// SIG undefined FUN_147602120(void)

void FUN_147602120(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  longlong local_50 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(param_2,&local_60);
  puVar1 = local_60;
  if (local_58 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_50,puVar1);
  FUN_14760230c(&local_40,param_1,local_50);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 == '\x01') {
    *param_3 = local_40;
    param_3[1] = uStack_38;
    param_3[2] = local_30;
    param_3[3] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476021da FUN_1476021da body=181 status=ok
// SIG undefined FUN_1476021da(void)

void FUN_1476021da(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  char local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400021e4(param_2,&local_78);
  puVar1 = local_78;
  if (local_70 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(local_68,puVar1);
  FUN_147602390(&local_58,param_1,local_68);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 == '\x01') {
    *param_3 = local_58;
    param_3[1] = uStack_54;
    param_3[2] = uStack_50;
    param_3[3] = uStack_4c;
    *(undefined8 *)(param_3 + 4) = local_48;
    *(undefined8 *)(param_3 + 6) = uStack_40;
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147602290 FUN_147602290 body=123 status=ok
// SIG undefined FUN_147602290(void)

undefined4 * FUN_147602290(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar5 = FUN_1406f977c(local_48);
  if ((lVar5 == 0) ||
     (puVar6 = (undefined4 *)(*(int *)(lVar5 + 0x44) + local_20), puVar6 == (undefined4 *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *param_1 = *puVar6;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 4) = uVar4;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760230c FUN_14760230c body=131 status=ok
// SIG undefined FUN_14760230c(void)

undefined4 * FUN_14760230c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar5 = FUN_1406f977c(local_48);
  if ((lVar5 == 0) ||
     (puVar6 = (undefined4 *)(*(int *)(lVar5 + 0x44) + local_20), puVar6 == (undefined4 *)0x0)) {
    uVar4 = 0;
  }
  else {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar6 + 4);
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *param_1 = *puVar6;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 6) = uVar4;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147602390 FUN_147602390 body=131 status=ok
// SIG undefined FUN_147602390(void)

undefined4 * FUN_147602390(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar7 = FUN_1406f977c(local_48);
  if ((lVar7 == 0) ||
     (puVar8 = (undefined4 *)(*(int *)(lVar7 + 0x44) + local_20), puVar8 == (undefined4 *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    uVar4 = *(undefined8 *)(puVar8 + 4);
    uVar5 = *(undefined8 *)(puVar8 + 6);
    *param_1 = *puVar8;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    *(undefined8 *)(param_1 + 4) = uVar4;
    *(undefined8 *)(param_1 + 6) = uVar5;
    uVar6 = 1;
  }
  *(undefined1 *)(param_1 + 8) = uVar6;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147602414 FUN_147602414 body=224 status=ok
// SIG undefined FUN_147602414(void)

undefined2 *
FUN_147602414(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             undefined2 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined4 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 1;
  FUN_1476026d6(param_1 + 8,&local_60);
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[5];
  uVar6 = param_4[6];
  uVar7 = param_4[7];
  local_58[4] = param_4[4];
  local_58[5] = uVar5;
  local_58[6] = uVar6;
  local_58[7] = uVar7;
  *local_58 = uVar1;
  local_58[1] = uVar2;
  local_58[2] = uVar3;
  local_58[3] = uVar4;
  local_58 = (undefined4 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1476027bc(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476024f6 FUN_1476024f6 body=224 status=ok
// SIG undefined FUN_1476024f6(void)

undefined2 *
FUN_1476024f6(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             undefined2 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_88 [34];
  undefined2 local_66;
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined4 *local_58;
  undefined8 *local_4c;
  undefined2 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_60 = (undefined8 *)0x0;
    FUN_14485c47a(&local_60,param_3);
    local_4c = local_60;
  }
  local_44 = param_5;
  local_3c = 0;
  FUN_1476026d6(param_1 + 8,&local_60);
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[5];
  uVar6 = param_4[6];
  uVar7 = param_4[7];
  local_58[4] = param_4[4];
  local_58[5] = uVar5;
  local_58[6] = uVar6;
  local_58[7] = uVar7;
  *local_58 = uVar1;
  local_58[1] = uVar2;
  local_58[2] = uVar3;
  local_58[3] = uVar4;
  local_58 = (undefined4 *)&local_66;
  local_66 = local_60._0_2_;
  local_60 = &local_4c;
  FUN_1476027bc(param_1 + 0x40,local_64,&local_60);
  *param_2 = local_66;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476025d8 FUN_1476025d8 body=252 status=ok
// SIG undefined FUN_1476025d8(void)

undefined2 *
FUN_1476025d8(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 *param_4,
             longlong param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_88 [42];
  undefined2 local_5e;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined4 *local_50;
  undefined8 *local_44;
  undefined1 local_3c [8];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  iVar1 = *(int *)(param_5 + 0x58) + -1;
  if (*(int *)(param_5 + 0x58) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_3c,iVar1,*(undefined8 *)(param_5 + 0x50),1);
  local_34 = 2;
  FUN_1476026d6(param_1 + 8,&local_58);
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  local_50[4] = param_4[4];
  local_50[5] = uVar6;
  local_50[6] = uVar7;
  local_50[7] = uVar8;
  *local_50 = uVar2;
  local_50[1] = uVar3;
  local_50[2] = uVar4;
  local_50[3] = uVar5;
  local_50 = (undefined4 *)&local_5e;
  local_5e = local_58._0_2_;
  local_58 = &local_44;
  FUN_1476027bc(param_1 + 0x40,local_5c,&local_58);
  *param_2 = local_5e;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476026d6 FUN_1476026d6 body=229 status=ok
// SIG undefined FUN_1476026d6(void)

int * FUN_1476026d6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1476027bc FUN_1476027bc body=339 status=ok
// SIG undefined FUN_1476027bc(void)

undefined4 * FUN_1476027bc(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147602910(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined2 *)param_3[1];
  *local_40 = *puVar2;
  bVar1 = *(byte *)(puVar2 + 2);
  *(byte *)(local_40 + 2) = bVar1;
  (*(code *)(&PTR_LAB_14a4c7e80)[bVar1])(local_40 + 1,puVar2 + 1);
  *(undefined2 *)((longlong)local_40 + 0x14) = *puVar3;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_144a78877(*(undefined4 *)local_40,*(undefined4 *)((longlong)local_40 + 4));
  uVar6 = FUN_144a78877(uVar5,*(undefined1 *)(local_40 + 2));
  cVar4 = FUN_1476029f6(param_1,uVar6,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1476018b8(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147602910 FUN_147602910 body=229 status=ok
// SIG undefined FUN_147602910(void)

int * FUN_147602910(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1405b363e(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1476029f6 FUN_1476029f6 body=93 status=ok
// SIG undefined FUN_1476029f6(void)

undefined8 FUN_1476029f6(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_147601a88(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_147601802(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 147602a54 FUN_147602a54 body=48 status=ok
// SIG undefined FUN_147602a54(void)

void FUN_147602a54(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 147602a84 FUN_147602a84 body=31 status=ok
// SIG undefined FUN_147602a84(void)

undefined8 FUN_147602a84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147602aa4 FUN_147602aa4 body=912 status=ok
// SIG undefined FUN_147602aa4(void)

void FUN_147602aa4(undefined8 param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined2 *local_1a0;
  uint *local_198;
  undefined8 *local_190;
  undefined2 *local_188;
  undefined2 *local_180;
  undefined2 local_172;
  undefined2 local_170;
  uint local_16e;
  undefined2 local_16a;
  undefined2 local_168;
  undefined2 local_166;
  undefined2 local_164;
  undefined2 local_162;
  undefined2 local_160;
  undefined2 local_15e;
  undefined2 local_15c;
  undefined2 local_15a;
  undefined2 local_158;
  undefined1 local_153;
  undefined4 local_150;
  undefined1 local_14c;
  undefined2 local_148;
  undefined4 local_146;
  undefined2 local_142;
  undefined2 local_140;
  undefined2 local_13e;
  undefined2 local_13c;
  undefined2 local_13a;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined2 local_132;
  undefined2 local_130;
  undefined1 local_12b;
  undefined8 local_128;
  undefined1 local_120 [29];
  byte local_103;
  uint local_100;
  undefined1 local_f8 [80];
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1b8 = param_4;
  lVar4 = FUN_14009d2a0();
  local_148 = *(undefined2 *)(lVar4 + 0x4a);
  local_142 = *(undefined2 *)(lVar4 + 0x108);
  local_146 = *(undefined4 *)(lVar4 + 0x104);
  puVar6 = (undefined2 *)*param_3;
  local_130 = puVar6[0x10];
  local_132 = puVar6[0xe];
  local_134 = puVar6[0xc];
  local_136 = puVar6[10];
  local_138 = puVar6[8];
  local_13a = puVar6[6];
  local_13c = puVar6[4];
  local_140 = *puVar6;
  local_13e = puVar6[2];
  local_12b = 0;
  local_128 = CONCAT35(local_128._5_3_,0x6ff);
  local_170 = *(undefined2 *)(param_2 + 0x14);
  local_1a0 = &local_170;
  local_198 = &local_16e;
  local_1b0 = param_3;
  FUN_140dad0c2(&local_148,local_120);
  local_100 = *(uint *)(param_7 + 0x290);
  local_103 = local_103 & 0xfe | (local_100 & 0xfffffeff) == 1;
  local_1d8 = param_6;
  local_1d0 = param_2;
  local_1c0 = param_2;
  FUN_1432fae56(local_120,&local_190,param_7 + 0x28,param_5);
  if (local_190 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_190 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_190)(local_190,1);
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  puVar3 = local_1b0;
  if (0 < *(int *)(local_1b8 + 4)) {
    local_128 = 0x10000000000;
    puVar6 = (undefined2 *)*local_1b0;
    iVar2 = *(int *)(local_1b0 + 1);
    if ((longlong)iVar2 != 0) {
      lVar5 = 0;
      do {
        FUN_140dba9e6(&local_148,*(undefined2 *)((longlong)puVar6 + lVar5));
        lVar5 = lVar5 + 4;
      } while ((longlong)iVar2 * 4 != lVar5);
      puVar6 = (undefined2 *)*puVar3;
    }
    local_170 = *(undefined2 *)(lVar4 + 0x4a);
    local_16a = *(undefined2 *)(lVar4 + 0x108);
    local_16e = *(uint *)(lVar4 + 0x104);
    local_158 = puVar6[0x10];
    local_15a = puVar6[0xe];
    local_15c = puVar6[0xc];
    local_15e = puVar6[10];
    local_160 = puVar6[8];
    local_162 = puVar6[6];
    local_164 = puVar6[4];
    local_168 = *puVar6;
    local_166 = puVar6[2];
    local_153 = 0;
    local_150 = 0x6ff;
    local_14c = 0;
    FUN_140dada72(local_120);
    FUN_140dad9c2(local_f8,&local_148,2);
    lVar4 = local_1c0;
    local_172 = *(undefined2 *)(local_1c0 + 0x14);
    local_180 = &local_170;
    local_188 = &local_172;
    FUN_1447c44f6(local_f8);
    FUN_140dad9c2(local_f8,&local_148,0x84);
    local_100 = *(uint *)(param_7 + 0x290);
    local_103 = local_103 & 0xfe | (local_100 & 0xfffffeff) == 1;
    local_1c8 = puVar3;
    local_1d0 = lVar4;
    local_1d8 = param_6;
    FUN_1432fb2f4(local_120,&local_1a8,param_7 + 0x28,param_5);
    if (local_1a8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_1a8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_1a8)(local_1a8,1);
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147602e36 FUN_147602e36 body=130 status=ok
// SIG undefined FUN_147602e36(void)

void FUN_147602e36(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined4 *)((longlong)param_7 + 0xc);
  local_20 = *param_7;
  local_40 = &local_20;
  local_48 = *param_6;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1476056ee(param_2,&local_38,param_4,param_5);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147602eba FUN_147602eba body=616 status=ok
// SIG undefined FUN_147602eba(void)

void FUN_147602eba(undefined8 param_1,longlong param_2,longlong *param_3,int param_4,
                  undefined4 *param_5,longlong param_6,undefined4 param_7,longlong *param_8)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  byte local_169;
  longlong local_168;
  longlong local_150;
  int local_148;
  longlong local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)&local_138;
  if (param_6 != 0) {
    lVar2 = *param_3;
    uVar5 = FUN_145990612();
    plVar6 = (longlong *)FUN_144718840(param_6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *(longlong *)(param_6 + 0x28);
      *(undefined4 *)(lVar3 + 0x29c) = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      local_130 = *param_5;
      uStack_12c = param_5[1];
      iStack_128 = param_5[2];
      uStack_124 = param_5[3];
      local_120 = param_5[4];
      uStack_11c = param_5[5];
      uStack_118 = param_5[6];
      uStack_114 = param_5[7];
      uStack_10a = (undefined2)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x30);
      _local_110 = CONCAT24(*(undefined2 *)(lVar2 + (longlong)param_4 * 4),
                            (int)*(undefined8 *)(param_5 + 8));
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_138);
      if (local_138 != (undefined8 *)0x0) {
        FUN_14009fd82(DAT_14c82b500,&local_138,1);
      }
      if (*(short *)((longlong)param_5 + 0x22) == -1) {
        local_168 = 0;
        local_140 = 0;
      }
      else {
        FUN_147605a78(lVar3 + 0x28,&local_150,*(short *)((longlong)param_5 + 0x22),
                      *(undefined2 *)(param_2 + 0x16));
        local_168 = local_150;
        local_169 = local_148 == 1;
      }
      if (0 < iStack_128) {
        lVar8 = 0;
        iVar4 = iStack_128;
        do {
          if ((*(uint *)(param_2 + 0xc) & 1 << ((byte)param_4 & 0x1f)) != 0) {
            if (local_140 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + (longlong)param_4 * 4) + local_140;
            }
            uVar5 = FUN_147546472(&local_100,
                                  *(undefined2 *)(CONCAT44(uStack_12c,local_130) + lVar8 * 2),
                                  param_7,lVar7);
            *(undefined8 *)(*param_8 + lVar8 * 8) = uVar5;
            iVar4 = iStack_128;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar4);
      }
      *(undefined4 *)(lVar3 + 0x29c) = 1;
      if (local_168 != 0) {
        LOCK();
        *(int *)(local_168 + 0x18) = *(int *)(local_168 + 0x18) + -1;
        UNLOCK();
        if ((local_169 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_168 + 8));
        }
      }
      if (local_138 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_138 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_138)(local_138,1);
        }
      }
      FUN_1475d7c02(&local_100);
    }
  }
  if ((local_68 ^ (ulonglong)&local_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147603124 FUN_147603124 body=1123 status=ok
// SIG undefined FUN_147603124(void)

void FUN_147603124(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_178;
  longlong *local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_120;
  int local_118;
  longlong local_110;
  longlong local_108;
  int local_100;
  longlong local_f8;
  longlong local_f0;
  int local_e8;
  longlong local_e0;
  longlong local_d8;
  int local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  iVar2 = (int)param_4[1];
  local_168 = param_3;
  if (0 < iVar2) {
    lVar8 = *param_6;
    local_178 = param_5 + 0x28;
    lVar4 = 0;
    local_170 = param_4;
    do {
      if (*(short *)(*param_4 + lVar4 * 2) != -1) {
        FUN_1432d4ca4(local_178,&local_60);
        lVar6 = local_60;
        plVar1 = local_168;
        lVar9 = (longlong)local_58;
        FUN_1475b4978(local_60,&local_60,*(undefined2 *)(*local_168 + 0x20));
        local_140 = local_50 + lVar9 * 8;
        if (local_50 == 0) {
          local_140 = 0;
        }
        FUN_1475b4978(lVar6,&local_78,*(undefined2 *)(*plVar1 + 0x1c));
        local_148 = local_68 + lVar9 * 8;
        if (local_68 == 0) {
          local_148 = 0;
        }
        FUN_1475b4978(lVar6,&local_90,*(undefined2 *)(*plVar1 + 0x18));
        local_150 = local_80 + lVar9 * 8;
        if (local_80 == 0) {
          local_150 = 0;
        }
        FUN_1475b4978(lVar6,&local_a8,*(undefined2 *)(*plVar1 + 0x14));
        local_158 = local_98 + lVar9 * 8;
        if (local_98 == 0) {
          local_158 = 0;
        }
        FUN_1475b4978(lVar6,&local_c0,*(undefined2 *)(*plVar1 + 0x10));
        local_160 = local_b0 + lVar9 * 8;
        if (local_b0 == 0) {
          local_160 = 0;
        }
        FUN_1475b4978(lVar6,&local_d8,*(undefined2 *)(*plVar1 + 0xc));
        lVar5 = local_c8 + lVar9 * 8;
        if (local_c8 == 0) {
          lVar5 = 0;
        }
        FUN_1475b4978(lVar6,&local_f0,*(undefined2 *)(*plVar1 + 8));
        lVar3 = local_e0 + lVar9 * 8;
        if (local_e0 == 0) {
          lVar3 = 0;
        }
        FUN_1475b4978(lVar6,&local_108,*(undefined2 *)(*plVar1 + 4));
        lVar7 = local_f8 + lVar9 * 8;
        if (local_f8 == 0) {
          lVar7 = 0;
        }
        FUN_1475b4978(lVar6,&local_120,*(undefined2 *)*plVar1);
        lVar6 = local_110 + lVar9 * 8;
        if (local_110 == 0) {
          lVar6 = 0;
        }
        local_138 = (undefined4)*plVar1;
        uStack_134 = *(undefined4 *)((longlong)plVar1 + 4);
        uStack_130 = (undefined4)plVar1[1];
        uStack_12c = *(undefined4 *)((longlong)plVar1 + 0xc);
        local_188 = local_140;
        local_190 = local_148;
        local_198 = local_150;
        local_1a0 = local_158;
        local_1a8 = local_160;
        local_1b8 = lVar3;
        local_1b0 = lVar5;
        FUN_140911be0(&local_138,lVar8,lVar6,lVar7);
        if (local_120 != 0) {
          LOCK();
          *(int *)(local_120 + 0x18) = *(int *)(local_120 + 0x18) + -1;
          UNLOCK();
          if (local_118 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_120 + 8));
          }
        }
        if (local_108 != 0) {
          LOCK();
          *(int *)(local_108 + 0x18) = *(int *)(local_108 + 0x18) + -1;
          UNLOCK();
          if (local_100 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_108 + 8));
          }
        }
        param_4 = local_170;
        if (local_f0 != 0) {
          LOCK();
          *(int *)(local_f0 + 0x18) = *(int *)(local_f0 + 0x18) + -1;
          UNLOCK();
          if (local_e8 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_f0 + 8));
          }
        }
        if (local_d8 != 0) {
          LOCK();
          *(int *)(local_d8 + 0x18) = *(int *)(local_d8 + 0x18) + -1;
          UNLOCK();
          if (local_d0 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_d8 + 8));
          }
        }
        if (local_c0 != 0) {
          LOCK();
          *(int *)(local_c0 + 0x18) = *(int *)(local_c0 + 0x18) + -1;
          UNLOCK();
          if (local_b8 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_c0 + 8));
          }
        }
        if (local_a8 != 0) {
          LOCK();
          *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
          UNLOCK();
          if (local_a0 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
          }
        }
        if (local_90 != 0) {
          LOCK();
          *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
          UNLOCK();
          if (local_88 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
          }
        }
        if (local_78 != 0) {
          LOCK();
          *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
          UNLOCK();
          if (local_70 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
          }
        }
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
          UNLOCK();
          if (local_58 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
          }
        }
        iVar2 = (int)param_4[1];
      }
      lVar4 = lVar4 + 1;
      lVar8 = lVar8 + 0x48;
    } while (lVar4 < iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147603588 FUN_147603588 body=126 status=ok
// SIG undefined FUN_147603588(void)

void FUN_147603588(longlong *param_1,uint param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  (*(code *)(&PTR_LAB_14a4c7e10)[*(byte *)(lVar1 + (longlong)(int)param_2 * 0x68 + 0x60)])();
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x68);
    memmove(_Dst,(void *)((longlong)_Dst + 0x68),(longlong)(int)(~param_2 + iVar2) * 0x68);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  if (param_3 != '\x01') {
    return;
  }
  FUN_147603606(param_1);
  return;
}



// FUNCTION 147603606 FUN_147603606 body=63 status=ok
// SIG undefined FUN_147603606(void)

void FUN_147603606(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147603646(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x68,8);
  }
  return;
}



// FUNCTION 147603646 FUN_147603646 body=109 status=ok
// SIG undefined FUN_147603646(void)

ulonglong FUN_147603646(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x68) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x68,8);
      uVar1 = uVar1 / 0x68;
    }
  }
  return uVar1;
}



// FUNCTION 1476036b4 FUN_1476036b4 body=261 status=ok
// SIG undefined FUN_1476036b4(void)

void FUN_1476036b4(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar5 = *param_1;
  if ((int)uVar3 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    uVar6 = uVar3;
    do {
      uVar1 = (uVar6 >> 1) + uVar9;
      if (*(int *)(lVar5 + (ulonglong)uVar1 * 0x68) < *param_2) {
        uVar9 = uVar1 + (uVar6 & 1);
      }
      bVar4 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar4);
    if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar5 + (ulonglong)uVar9 * 0x68) <= *param_2)) {
      piVar11 = (int *)(lVar5 + (ulonglong)uVar9 * 0x68);
      FUN_14588e4dd(piVar11,1);
      goto LAB_147603762;
    }
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar3) {
    FUN_1476037ba(param_1,uVar3);
    lVar5 = *param_1;
  }
  lVar10 = (ulonglong)uVar9 * 0x68;
  memmove((void *)(lVar5 + lVar10 + 0x68),(void *)(lVar5 + lVar10),(ulonglong)(uVar3 - uVar9) * 0x68
         );
  piVar11 = (int *)(lVar10 + *param_1);
LAB_147603762:
  *piVar11 = *param_2;
  puVar7 = param_3;
  piVar8 = piVar11;
  for (lVar5 = 9; piVar8 = piVar8 + 2, lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)piVar8 = *puVar7;
    puVar7 = puVar7 + 1;
  }
  uVar2 = *(undefined1 *)(param_3 + 0xb);
  puVar7 = param_3 + 9;
  *(undefined1 *)(piVar11 + 0x18) = uVar2;
  piVar8 = piVar11 + 0x14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    *(undefined8 *)piVar8 = *puVar7;
    return;
  case 1:
    *(undefined2 *)piVar8 = *(undefined2 *)puVar7;
    return;
  case 2:
    *(undefined8 *)piVar8 = *puVar7;
    *(undefined8 *)(piVar11 + 0x16) = param_3[10];
    *puVar7 = 0;
    param_3[10] = 0;
    return;
  }
}



// FUNCTION 1476037ba FUN_1476037ba body=143 status=ok
// SIG undefined FUN_1476037ba(void)

void FUN_1476037ba(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14760384a FUN_14760384a body=105 status=ok
// SIG undefined FUN_14760384a(void)

bool FUN_14760384a(short *param_1)

{
  return (param_1[0xc] != -1 && (param_1[0xb] != -1 && param_1[10] != -1)) &&
         ((param_1[9] != -1 && (param_1[8] != -1 && param_1[7] != -1)) &&
         ((param_1[6] != -1 && param_1[5] != -1) && (param_1[4] != -1 && *param_1 != -1)));
}



// FUNCTION 1476038b4 FUN_1476038b4 body=29 status=ok
// SIG undefined FUN_1476038b4(void)

undefined8 FUN_1476038b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476038d2 FUN_1476038d2 body=29 status=ok
// SIG undefined FUN_1476038d2(void)

undefined8 FUN_1476038d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147603bbe FUN_147603bbe body=525 status=ok
// SIG undefined FUN_147603bbe(void)

void FUN_147603bbe(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8 [10];
  undefined8 local_a8 [9];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(ushort *)(param_2 + 0xe) != 0) {
    local_128 = (ulonglong)*(ushort *)(param_2 + 0xe) << 3;
    lVar2 = 0;
    local_120 = param_4;
    do {
      local_110 = *(undefined8 *)(local_120 + lVar2 * 2);
      local_f8[6] = 0;
      local_f8[7] = 0;
      local_f8[4] = 0;
      local_f8[5] = 0;
      local_f8[2] = 0;
      local_f8[3] = 0;
      local_f8[0] = 0;
      local_f8[1] = 0;
      local_f8[8] = 0;
      FUN_1476463b4(local_110,local_a8,*(undefined8 *)(param_3 + lVar2));
      local_138 = param_13 + lVar2;
      if (param_13 == 0) {
        local_138 = 0;
      }
      local_140 = param_12 + lVar2;
      if (param_12 == 0) {
        local_140 = 0;
      }
      local_148 = param_11 + lVar2;
      if (param_11 == 0) {
        local_148 = 0;
      }
      local_150 = param_10 + lVar2;
      if (param_10 == 0) {
        local_150 = 0;
      }
      local_158 = param_9 + lVar2;
      if (param_9 == 0) {
        local_158 = 0;
      }
      local_160 = param_8 + lVar2;
      if (param_8 == 0) {
        local_160 = 0;
      }
      local_168 = param_7 + lVar2;
      if (param_7 == 0) {
        local_168 = 0;
      }
      lVar6 = param_6 + lVar2;
      if (param_6 == 0) {
        lVar6 = 0;
      }
      lVar5 = param_5 + lVar2;
      puVar3 = local_a8;
      puVar4 = local_f8;
      for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      if (param_5 == 0) {
        lVar5 = 0;
      }
      local_108 = *(undefined4 *)(param_1 + 0x18);
      uStack_104 = *(undefined4 *)(param_1 + 0x1c);
      uStack_100 = *(undefined4 *)(param_1 + 0x20);
      uStack_fc = *(undefined4 *)(param_1 + 0x24);
      local_118 = local_138;
      FUN_140911be0(&local_108,local_f8,lVar5,lVar6);
      FUN_1475b9640(local_110,*(undefined8 *)(param_3 + lVar2),local_f8);
      lVar2 = lVar2 + 8;
    } while (local_128 != lVar2);
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147603dcc FUN_147603dcc body=143 status=ok
// SIG undefined FUN_147603dcc(void)

undefined4 * FUN_147603dcc(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 10,param_3 + 10);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  FUN_1400abb7c(param_1 + 0x22,param_3 + 0x22);
  *(undefined8 *)(param_1 + 0x34) = 0;
  FUN_1400abb7c(param_1 + 0x2c,param_3 + 0x2c);
  *(longlong *)(param_1 + 0x36) = param_2;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147603e5c FUN_147603e5c body=518 status=ok
// SIG undefined FUN_147603e5c(void)

void FUN_147603e5c(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    local_42 = param_1[lVar1];
    if (local_42 != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  local_42 = param_1[4];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[5];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[6];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[7];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[8];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[9];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[10];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[0xb];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[0xc];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147604064 FUN_147604064 body=2030 status=ok
// SIG undefined FUN_147604064(void)

void FUN_147604064(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  short *local_288;
  longlong local_280;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 *local_208;
  undefined8 local_200;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  longlong local_190;
  undefined8 *local_188;
  int local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 *local_128;
  int local_120;
  undefined8 local_118;
  undefined8 *local_110;
  int local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 *local_80;
  int local_78;
  undefined8 local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_4[0xc]) goto LAB_1476040ba;
      puVar10 = puVar10 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_1476040ba:
  local_254 = *(int *)(lVar1 + 0x14);
  local_280 = param_3;
  local_1f0 = param_1;
  if (local_254 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar13 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar13 + 0x1e) == param_4[0xb]) goto LAB_1476040f6;
      puVar13 = puVar13 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar13 = (undefined8 *)0x0;
LAB_1476040f6:
  local_200 = *puVar10;
  local_258 = *(int *)(lVar1 + 0x14);
  if (local_258 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar13 + 1));
  }
  LOCK();
  *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar11 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == param_4[10]) goto LAB_14760413d;
      puVar11 = puVar11 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_14760413d:
  local_210 = *puVar13;
  local_25c = *(int *)(lVar1 + 0x14);
  if (local_25c == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
  }
  LOCK();
  *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar17 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar17 + 0x1e) == param_4[9]) goto LAB_147604185;
      puVar17 = puVar17 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar17 = (undefined8 *)0x0;
LAB_147604185:
  local_218 = *puVar11;
  local_260 = *(int *)(lVar1 + 0x14);
  if (local_260 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar17 + 1));
  }
  LOCK();
  *(int *)(puVar17 + 3) = *(int *)(puVar17 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar15 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar15 + 0x1e) == param_4[8]) goto LAB_1476041cf;
      puVar15 = puVar15 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar15 = (undefined8 *)0x0;
LAB_1476041cf:
  local_220 = *puVar17;
  local_264 = *(int *)(lVar1 + 0x14);
  if (local_264 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar15 + 1));
  }
  LOCK();
  *(int *)(puVar15 + 3) = *(int *)(puVar15 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar12 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar12 + 0x1e) == param_4[7]) goto LAB_147604221;
      puVar12 = puVar12 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar12 = (undefined8 *)0x0;
LAB_147604221:
  local_228 = *puVar15;
  local_268 = *(int *)(lVar1 + 0x14);
  local_1f8 = puVar10;
  if (local_268 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
  }
  LOCK();
  *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_4[6]) goto LAB_147604269;
      puVar10 = puVar10 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_147604269:
  local_230 = *puVar12;
  local_26c = *(int *)(lVar1 + 0x14);
  if (local_26c == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar14 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar14 + 0x1e) == param_4[5]) goto LAB_1476042b8;
      puVar14 = puVar14 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar14 = (undefined8 *)0x0;
LAB_1476042b8:
  local_240 = *puVar10;
  local_270 = *(int *)(lVar1 + 0x14);
  local_208 = puVar13;
  if (local_270 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar14 + 1));
  }
  LOCK();
  *(int *)(puVar14 + 3) = *(int *)(puVar14 + 3) + 1;
  UNLOCK();
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar13 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar13 + 0x1e) == param_4[4]) goto LAB_147604305;
      puVar13 = puVar13 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar13 = (undefined8 *)0x0;
LAB_147604305:
  local_248 = *puVar14;
  local_274 = *(int *)(lVar1 + 0x14);
  local_288 = param_4;
  local_238 = param_2;
  if (local_274 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar13 + 1));
  }
  plVar2 = local_238;
  LOCK();
  *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + 1;
  UNLOCK();
  local_250 = *puVar13;
  local_4c = local_288[3];
  local_50 = *(undefined4 *)(local_288 + 1);
  FUN_1410bd8a8(&local_1d0,
                *(undefined8 *)(*(longlong *)(*local_238 + 0x60) + (longlong)(int)local_238[1] * 8),
                &local_50,local_280);
  lVar1 = *(longlong *)(*(longlong *)(*plVar2 + 0x60) + (longlong)(int)plVar2[1] * 8);
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    puVar16 = *(undefined8 **)(lVar1 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar16 + 0x1e) == *local_288) goto LAB_1476043a7;
      puVar16 = puVar16 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar16 = (undefined8 *)0x0;
LAB_1476043a7:
  local_180 = *(int *)(lVar1 + 0x14);
  if (*(int *)(lVar1 + 0x14) == 1) {
    local_288 = (short *)CONCAT44(local_288._4_4_,1);
    AcquireSRWLockShared((PSRWLOCK)(puVar16 + 1));
    local_180 = (int)local_288;
  }
  lVar1 = local_1c0;
  uVar8 = local_200;
  uVar7 = local_210;
  uVar6 = local_218;
  uVar5 = local_220;
  uVar4 = local_228;
  uVar3 = local_230;
  LOCK();
  *(int *)(puVar16 + 3) = *(int *)(puVar16 + 3) + 1;
  UNLOCK();
  local_178 = *puVar16;
  local_170 = local_1d0;
  local_168 = local_1c8;
  local_1d0 = 0;
  local_160 = local_1c0;
  local_1c0 = 0;
  local_158 = local_1b8;
  local_150 = local_1b0;
  local_1b8 = 0;
  local_288 = (short *)local_1a8;
  local_148 = local_1a8;
  local_1a8 = 0;
  local_140 = local_1a0;
  local_138 = local_198;
  local_1a0 = 0;
  local_280 = local_190;
  local_130 = local_190;
  local_120 = local_274;
  local_118 = local_250;
  local_108 = local_270;
  local_100 = local_248;
  local_f0 = local_26c;
  local_e8 = local_240;
  local_d8 = local_268;
  local_d0 = local_230;
  local_c0 = local_264;
  local_b8 = local_228;
  local_a8 = local_260;
  local_a0 = local_220;
  local_90 = local_25c;
  local_88 = local_218;
  local_80 = local_208;
  local_78 = local_258;
  local_70 = local_210;
  local_68 = local_1f8;
  local_60 = local_254;
  local_190 = 0;
  local_58 = local_200;
  local_188 = puVar16;
  local_128 = puVar13;
  local_110 = puVar14;
  local_f8 = puVar10;
  local_e0 = puVar12;
  local_c8 = puVar15;
  local_b0 = puVar17;
  local_98 = puVar11;
  FUN_1432f59b8();
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_1d8 = 0;
  if (lVar1 != 0) {
    local_1e8 = lVar1;
  }
  if (local_288 != (short *)0x0) {
    lStack_1e0 = (longlong)local_288;
  }
  if (local_280 != 0) {
    local_1d8 = local_280;
  }
  local_298 = uVar8;
  local_2a0 = uVar7;
  local_2a8 = uVar6;
  local_2b0 = uVar5;
  local_2b8 = uVar4;
  local_2c0 = uVar3;
  local_2c8 = local_240;
  local_2d0 = local_248;
  local_2d8 = local_250;
  FUN_144919894(local_1f0,
                *(undefined8 *)(*(longlong *)(*local_238 + 0x60) + (longlong)(int)local_238[1] * 8),
                local_178,&local_1e8);
  FUN_147604854(&local_188);
  if ((local_48 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147604854 FUN_147604854 body=424 status=ok
// SIG undefined FUN_147604854(void)

void FUN_147604854(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x24] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x24] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x25] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x24] + 8));
    }
  }
  if (param_1[0x21] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x21] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x22] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x21] + 8));
    }
  }
  if (param_1[0x1e] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1e] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x1f] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x1e] + 8));
    }
  }
  if (param_1[0x1b] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1b] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x1c] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x1b] + 8));
    }
  }
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x19] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x18] + 8));
    }
  }
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x15] + 8));
    }
  }
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x13] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476049ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476049fc FUN_1476049fc body=118 status=ok
// SIG undefined FUN_1476049fc(void)

longlong FUN_1476049fc(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147603dcc();
  param_4 = (longlong *)*param_4;
  *(longlong **)(param_1 + 0xe8) = param_4;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xf0) = local_30;
    *(undefined4 *)(param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf8) = uStack_28;
    *(undefined4 *)(param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147604a74 FUN_147604a74 body=143 status=ok
// SIG undefined FUN_147604a74(void)

undefined4 * FUN_147604a74(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  param_1[4] = param_3[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1403b8af8(param_1 + 10,param_3 + 10);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  FUN_1400abb7c(param_1 + 0x22,param_3 + 0x22);
  *(undefined8 *)(param_1 + 0x34) = 0;
  FUN_1400abb7c(param_1 + 0x2c,param_3 + 0x2c);
  *(longlong *)(param_1 + 0x36) = param_2;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147604b04 FUN_147604b04 body=548 status=ok
// SIG undefined FUN_147604b04(void)

void FUN_147604b04(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 1;
  do {
    if (param_1[lVar1] != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      local_42 = param_1[lVar1];
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  if (param_1[4] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[4];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[5] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[5];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[6] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[6];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[7] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[7];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[8] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[8];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[9] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[9];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[10] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[10];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[0xb] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[0xb];
    FUN_147552f5e(param_2,param_3);
  }
  if (param_1[0xc] != -1) {
    local_58 = &local_42;
    local_50 = &local_40;
    local_42 = param_1[0xc];
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147604d2a FUN_147604d2a body=1889 status=ok
// SIG undefined FUN_147604d2a(void)

void FUN_147604d2a(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  longlong local_2c8;
  longlong lStack_2c0;
  longlong local_2b8;
  undefined8 local_2a8;
  undefined4 local_2a0;
  longlong local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  longlong local_280;
  undefined8 local_278;
  undefined4 local_270;
  longlong local_268;
  longlong local_260;
  int local_258;
  undefined8 local_250;
  longlong local_248;
  int local_240;
  undefined8 local_238;
  longlong local_230;
  int local_228;
  undefined8 local_220;
  longlong local_218;
  int local_210;
  undefined8 local_208;
  longlong local_200;
  int local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  int local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  int local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  int local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  int local_198;
  undefined8 local_190;
  undefined8 *local_188;
  int local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_130;
  longlong local_128;
  int local_120;
  undefined8 local_118;
  longlong local_110;
  int local_108;
  undefined8 local_100;
  longlong local_f8;
  int local_f0;
  undefined8 local_e8;
  longlong local_e0;
  int local_d8;
  undefined8 local_d0;
  longlong local_c8;
  int local_c0;
  undefined8 local_b8;
  longlong local_b0;
  int local_a8;
  undefined8 local_a0;
  longlong local_98;
  int local_90;
  undefined8 local_88;
  longlong local_80;
  int local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1a0,param_4[0xc]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1b8,param_4[0xb]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1d0,param_4[10]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_1e8,param_4[9]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_200,param_4[8]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_218,param_4[7]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_230,param_4[6]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_248,param_4[5]);
  FUN_1475b4978(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_260,param_4[4]);
  local_4c = param_4[3];
  local_50 = *(undefined4 *)(param_4 + 1);
  FUN_1410bd8a8(&local_2a8,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_50,param_3);
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_4) goto LAB_147604ed8;
      puVar4 = puVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar4 = (undefined8 *)0x0;
LAB_147604ed8:
  iVar1 = *(int *)(lVar2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 1));
  }
  LOCK();
  *(int *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1;
  UNLOCK();
  local_178 = *puVar4;
  local_170 = local_2a8;
  local_168 = local_2a0;
  local_2a8 = 0;
  local_160 = local_298;
  uStack_158 = uStack_290;
  local_298 = 0;
  uStack_290 = 0;
  local_150 = local_288;
  local_148 = local_280;
  local_280 = 0;
  local_140 = local_278;
  local_138 = local_270;
  local_278 = 0;
  local_130 = local_268;
  local_268 = 0;
  local_128 = local_260;
  local_120 = local_258;
  local_260 = 0;
  local_118 = local_250;
  local_250 = 0;
  local_110 = local_248;
  local_108 = local_240;
  local_248 = 0;
  local_100 = local_238;
  local_238 = 0;
  local_f8 = local_230;
  local_f0 = local_228;
  local_230 = 0;
  local_e8 = local_220;
  local_220 = 0;
  local_e0 = local_218;
  local_d8 = local_210;
  local_218 = 0;
  local_d0 = local_208;
  local_208 = 0;
  local_c8 = local_200;
  local_c0 = local_1f8;
  local_200 = 0;
  local_b8 = local_1f0;
  local_1f0 = 0;
  local_b0 = local_1e8;
  local_a8 = local_1e0;
  local_1e8 = 0;
  local_a0 = local_1d8;
  local_1d8 = 0;
  local_98 = local_1d0;
  local_90 = local_1c8;
  local_1d0 = 0;
  local_88 = local_1c0;
  local_1c0 = 0;
  local_80 = local_1b8;
  local_78 = local_1b0;
  local_1b8 = 0;
  local_70 = local_1a8;
  local_1a8 = 0;
  local_68 = local_1a0;
  local_60 = local_198;
  local_1a0 = 0;
  local_58 = local_190;
  local_190 = 0;
  local_188 = puVar4;
  local_180 = iVar1;
  FUN_1432f59b8();
  if (local_260 != 0) {
    LOCK();
    *(int *)(local_260 + 0x18) = *(int *)(local_260 + 0x18) + -1;
    UNLOCK();
    if (local_258 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_260 + 8));
    }
  }
  if (local_248 != 0) {
    LOCK();
    *(int *)(local_248 + 0x18) = *(int *)(local_248 + 0x18) + -1;
    UNLOCK();
    if (local_240 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_248 + 8));
    }
  }
  if (local_230 != 0) {
    LOCK();
    *(int *)(local_230 + 0x18) = *(int *)(local_230 + 0x18) + -1;
    UNLOCK();
    if (local_228 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_230 + 8));
    }
  }
  if (local_218 != 0) {
    LOCK();
    *(int *)(local_218 + 0x18) = *(int *)(local_218 + 0x18) + -1;
    UNLOCK();
    if (local_210 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_218 + 8));
    }
  }
  if (local_200 != 0) {
    LOCK();
    *(int *)(local_200 + 0x18) = *(int *)(local_200 + 0x18) + -1;
    UNLOCK();
    if (local_1f8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_200 + 8));
    }
  }
  if (local_1e8 != 0) {
    LOCK();
    *(int *)(local_1e8 + 0x18) = *(int *)(local_1e8 + 0x18) + -1;
    UNLOCK();
    if (local_1e0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1e8 + 8));
    }
  }
  if (local_1d0 != 0) {
    LOCK();
    *(int *)(local_1d0 + 0x18) = *(int *)(local_1d0 + 0x18) + -1;
    UNLOCK();
    if (local_1c8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1d0 + 8));
    }
  }
  if (local_1b8 != 0) {
    LOCK();
    *(int *)(local_1b8 + 0x18) = *(int *)(local_1b8 + 0x18) + -1;
    UNLOCK();
    if (local_1b0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1b8 + 8));
    }
  }
  if (local_1a0 != 0) {
    LOCK();
    *(int *)(local_1a0 + 0x18) = *(int *)(local_1a0 + 0x18) + -1;
    UNLOCK();
    if (local_198 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_1a0 + 8));
    }
  }
  local_2c8 = 0;
  lStack_2c0 = 0;
  local_2b8 = 0;
  if (local_160 != 0) {
    local_2c8 = local_160;
  }
  if (local_148 != 0) {
    lStack_2c0 = local_148;
  }
  if (local_130 != 0) {
    local_2b8 = local_130;
  }
  local_2d8 = local_58;
  local_2e0 = local_70;
  local_2e8 = local_88;
  local_2f0 = local_a0;
  local_2f8 = local_b8;
  local_300 = local_d0;
  local_308 = local_e8;
  local_310 = local_100;
  local_318 = local_118;
  FUN_1409116e8(param_1,*(undefined8 *)
                         (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_178,
                &local_2c8);
  FUN_14760548c(&local_188);
  if ((local_48 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14760548c FUN_14760548c body=424 status=ok
// SIG undefined FUN_14760548c(void)

void FUN_14760548c(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x24] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x24] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x25] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x24] + 8));
    }
  }
  if (param_1[0x21] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x21] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x22] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x21] + 8));
    }
  }
  if (param_1[0x1e] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1e] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x1f] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x1e] + 8));
    }
  }
  if (param_1[0x1b] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1b] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x1c] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x1b] + 8));
    }
  }
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x19] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x18] + 8));
    }
  }
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x15] + 8));
    }
  }
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x13] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  FUN_1432f59b8(param_1 + 3);
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147605626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147605634 FUN_147605634 body=146 status=ok
// SIG undefined FUN_147605634(void)

longlong FUN_147605634(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147604a74();
  param_4 = (longlong *)*param_4;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  *(longlong **)(param_1 + 0xe8) = param_4;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_1 + 0x100) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x104) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x108) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x10c) = uStack_40._4_4_;
  local_48 = uVar1;
  uStack_40 = uVar2;
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4,&local_30);
    *(undefined4 *)(param_1 + 0xf0) = local_30;
    *(undefined4 *)(param_1 + 0xf4) = uStack_2c;
    *(undefined4 *)(param_1 + 0xf8) = uStack_28;
    *(undefined4 *)(param_1 + 0xfc) = uStack_24;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476056c8 FUN_1476056c8 body=38 status=ok
// SIG undefined FUN_1476056c8(void)

undefined8 FUN_1476056c8(undefined8 param_1,int param_2)

{
  FUN_14588e3f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476056ee FUN_1476056ee body=905 status=ok
// SIG undefined FUN_1476056ee(void)

void FUN_1476056ee(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int *piVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  byte local_599;
  undefined8 *local_578;
  int local_570;
  longlong local_568;
  undefined4 local_560;
  undefined4 uStack_55c;
  int iStack_558;
  undefined4 uStack_554;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined1 local_538 [8];
  undefined1 local_530 [32];
  undefined1 *local_510;
  undefined8 local_508;
  undefined8 local_500 [150];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_538;
  if (param_4 != 0) {
    uVar3 = FUN_145990612();
    plVar4 = (longlong *)FUN_144718840(param_4,uVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar9 = *(longlong *)(param_4 + 0x28);
      *(undefined4 *)(lVar9 + 0x29c) = 0;
      lVar5 = 0x10;
      do {
        *(undefined8 *)((longlong)&local_510 + lVar5) = 0;
        *(undefined4 *)((longlong)local_500 + lVar5 + -8) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 8) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x10) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x18) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x20) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x28) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x30) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x38) = 0;
        *(undefined8 *)((longlong)local_500 + lVar5 + 0x40) = 0;
        lVar5 = lVar5 + 0x80;
      } while (lVar5 != 0x490);
      local_540 = *(undefined8 *)(param_3 + 8);
      local_560 = *param_3;
      uStack_55c = param_3[1];
      iStack_558 = param_3[2];
      uStack_554 = param_3[3];
      local_550 = *(undefined8 *)(param_3 + 4);
      uStack_548 = *(undefined8 *)(param_3 + 6);
      local_510 = (undefined1 *)0x0;
      local_508 = 0x400000000;
      puVar13 = local_500;
      lVar5 = 0;
      do {
        if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar5 & 0x1f) & 1) != 0) {
          local_540._0_6_ = CONCAT24(*(undefined2 *)(*param_2 + lVar5 * 4),(undefined4)local_540);
          (**(code **)(*plVar4 + 0x10))(plVar4,&local_578,&local_560,puVar13);
          uVar12 = local_508;
          if (local_578 != (undefined8 *)0x0) {
            lVar11 = (longlong)(int)local_508;
            uVar6 = (int)local_508 + 1;
            local_508 = CONCAT44(local_508._4_4_,uVar6);
            if (local_508._4_4_ < uVar6) {
              FUN_14476a5c8(local_530,uVar12 & 0xffffffff);
              puVar7 = local_510;
              if (local_510 == (undefined1 *)0x0) {
                puVar7 = local_530;
              }
              *(undefined8 **)(puVar7 + lVar11 * 8) = local_578;
              if (local_578 == (undefined8 *)0x0) goto LAB_1476058d0;
            }
            else {
              puVar7 = local_510;
              if (local_510 == (undefined1 *)0x0) {
                puVar7 = local_530;
              }
              *(undefined8 **)(puVar7 + lVar11 * 8) = local_578;
            }
            LOCK();
            *(int *)(local_578 + 1) = *(int *)(local_578 + 1) + 1;
            UNLOCK();
            if (local_578 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_578 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*local_578)(local_578,1);
              }
            }
          }
        }
LAB_1476058d0:
        lVar5 = lVar5 + 1;
        puVar13 = puVar13 + 0x10;
      } while (lVar5 != 9);
      if ((int)local_508 != 0) {
        (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_530,1);
      }
      if (*(short *)((longlong)param_3 + 0x22) == -1) {
        local_578 = (undefined8 *)0x0;
        local_568 = 0;
      }
      else {
        FUN_147605a78(lVar9 + 0x28,&local_578,*(short *)((longlong)param_3 + 0x22),
                      *(undefined2 *)(param_1 + 0x16));
        local_599 = local_570 == 1;
      }
      if (0 < iStack_558) {
        lVar5 = 0;
        do {
          uVar2 = *(undefined2 *)(CONCAT44(uStack_55c,local_560) + lVar5 * 2);
          lVar11 = *param_6;
          puVar13 = local_500;
          lVar8 = 0;
          do {
            if ((*(uint *)(param_1 + 0xc) >> ((uint)lVar8 & 0x1f) & 1) != 0) {
              uVar12 = (ulonglong)*(ushort *)(*param_2 + 2 + lVar8 * 4);
              lVar10 = uVar12 + local_568;
              if (local_568 == 0) {
                lVar10 = 0;
              }
              uVar3 = FUN_147546472(puVar13,uVar2,*(undefined8 *)(param_5 + uVar12),lVar10);
              *(undefined8 *)(lVar5 * 0x48 + lVar11 + uVar12) = uVar3;
            }
            lVar8 = lVar8 + 1;
            puVar13 = puVar13 + 0x10;
          } while (lVar8 != 9);
          lVar5 = lVar5 + 1;
        } while (lVar5 < iStack_558);
      }
      *(undefined4 *)(lVar9 + 0x29c) = 1;
      if (local_578 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_578 + 3) = *(int *)(local_578 + 3) + -1;
        UNLOCK();
        if ((local_599 & 1) != 0) {
          ReleaseSRWLockShared((PSRWLOCK)(local_578 + 1));
        }
      }
      FUN_14588b8d6(local_530);
      lVar9 = 0x400;
      do {
        FUN_1475d7c02((longlong)local_500 + lVar9);
        lVar9 = lVar9 + -0x80;
      } while (lVar9 != -0x80);
    }
  }
  if ((local_50 ^ (ulonglong)local_538) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147605a78 FUN_147605a78 body=185 status=ok
// SIG undefined FUN_147605a78(void)

undefined8 * FUN_147605a78(longlong param_1,undefined8 *param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_4 != 0xffff) {
    uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar4 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar4 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar4 * 8);
      uVar1 = *(ushort *)(lVar3 + 0xc);
      if (uVar1 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x28);
        lVar2 = (ulonglong)uVar1 << 5;
        do {
          if (*(ushort *)(lVar3 + 0x1e) == param_4) {
            FUN_147605b32(param_2,lVar3,*(char *)(param_1 + 0x270) != '\0',
                          *(undefined2 *)
                           (*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8));
            return param_2;
          }
          lVar3 = lVar3 + 0x20;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 147605b32 FUN_147605b32 body=121 status=ok
// SIG undefined FUN_147605b32(void)

longlong * FUN_147605b32(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (longlong)param_4 * 0x48 + *param_2;
  }
  return param_1;
}



// FUNCTION 147605bac FUN_147605bac body=57 status=ok
// SIG undefined FUN_147605bac(void)

undefined8 * FUN_147605bac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c25e0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147605be6 FUN_147605be6 body=57 status=ok
// SIG undefined FUN_147605be6(void)

undefined8 * FUN_147605be6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c25e0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147605c20 FUN_147605c20 body=232 status=ok
// SIG undefined FUN_147605c20(void)

undefined8 * FUN_147605c20(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined2 local_3a;
  undefined2 *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3a = param_2;
  puVar1 = (undefined8 *)FUN_147605d0a();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x98);
    memset(puVar1 + 2,0,0x88);
    *puVar1 = &PTR_FUN_14a4c2600;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
    *(undefined1 *)(puVar1 + 0x12) = 0;
    local_30 = &local_48;
    local_38 = &local_3a;
    local_48 = puVar1;
    FUN_1475d8166(param_1,local_24,&local_38,0);
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147605d0a FUN_147605d0a body=104 status=ok
// SIG undefined FUN_147605d0a(void)

undefined8 FUN_147605d0a(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 4 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            return *(undefined8 *)(puVar1 + 4);
          }
          return 0;
        }
        iVar2 = *(int *)(puVar1 + 8);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 147605d72 FUN_147605d72 body=38 status=ok
// SIG undefined FUN_147605d72(void)

undefined8 FUN_147605d72(undefined8 param_1,int param_2)

{
  FUN_147605e0e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147605d98 FUN_147605d98 body=118 status=ok
// SIG undefined FUN_147605d98(void)

void FUN_147605d98(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar5);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x30)) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar4 = param_1 + 0x18;
        }
        if ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
          FUN_147605ee4(param_1 + 8);
        }
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 147605e0e FUN_147605e0e body=71 status=ok
// SIG undefined FUN_147605e0e(void)

void FUN_147605e0e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4c2600;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_147605e56(param_1 + 8);
  FUN_1475b4ca4(param_1 + 1);
  return;
}



// FUNCTION 147605e56 FUN_147605e56 body=52 status=ok
// SIG undefined FUN_147605e56(void)

void FUN_147605e56(longlong *param_1)

{
  FUN_147605e8a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147605e8a FUN_147605e8a body=89 status=ok
// SIG undefined FUN_147605e8a(void)

void FUN_147605e8a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147605ee4 FUN_147605ee4 body=104 status=ok
// SIG undefined FUN_147605ee4(void)

void FUN_147605ee4(longlong *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (ulonglong)param_2 * 0x48);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (ulonglong)(param_2 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147605f4c FUN_147605f4c body=1025 status=ok
// SIG undefined FUN_147605f4c(void)

void FUN_147605f4c(longlong param_1,longlong param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  int local_f8;
  int local_f4;
  longlong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c4;
  ushort local_be;
  char local_bc;
  char local_ba;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_147605fa9;
      plVar9 = plVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_147605fa9:
  uVar2 = *(ushort *)(param_2 + 0xe);
  local_e8 = *(ulonglong *)(param_1 + 0x40);
  local_f4 = *(int *)(param_2 + 0x14);
  if (local_f4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar16 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar16 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x13e))
      goto LAB_147605fff;
      plVar16 = plVar16 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar16 = (longlong *)0x0;
LAB_147605fff:
  local_100 = *plVar9;
  local_f8 = *(int *)(param_2 + 0x14);
  if (local_f8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
  }
  LOCK();
  *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
  UNLOCK();
  lVar6 = *plVar16;
  local_e0 = (**(code **)**(undefined8 **)(param_1 + 0x20))();
  if ((ulonglong)uVar2 != 0) {
    local_f0 = param_1 + 8;
    uVar15 = 0;
    do {
      local_c4 = *(int *)(lVar6 + uVar15 * 8);
      uVar3 = *(uint *)(param_1 + 0x10);
      lVar8 = *(longlong *)(param_1 + 8);
      uVar14 = 0;
      if (0 < (int)uVar3) {
        uVar14 = 0;
        uVar13 = uVar3;
        do {
          uVar1 = (uVar13 >> 1) + uVar14;
          if (*(int *)(lVar8 + (ulonglong)uVar1 * 0x50) < local_c4) {
            uVar14 = uVar1 + (uVar13 & 1);
          }
          bVar5 = 1 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar5);
      }
      if ((((int)uVar14 < (int)uVar3) && (*(int *)(lVar8 + (ulonglong)uVar14 * 0x50) <= local_c4))
         && (puVar10 = (undefined8 *)(lVar8 + (ulonglong)uVar14 * 0x50 + 8),
            puVar10 != (undefined8 *)0x0)) {
        puVar11 = (undefined8 *)(local_100 + uVar15 * 0x48);
        for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
      }
      else {
        lVar8 = FUN_1475b443c(local_e0);
        if (((lVar8 != 0) && (lVar7 = FUN_14479d2ce(lVar8), lVar7 != 0)) &&
           (*(longlong *)(lVar8 + 8) != 0)) {
          local_d8 = *(undefined4 *)(param_1 + 0x30);
          uStack_d4 = *(undefined4 *)(param_1 + 0x34);
          uStack_d0 = *(undefined4 *)(param_1 + 0x38);
          uStack_cc = *(undefined4 *)(param_1 + 0x3c);
          FUN_140d4d2ba(&local_be,lVar7,lVar8 + 8,&local_d8);
          lVar4 = *(longlong *)(param_1 + 0x48);
          if (lVar4 == 0) {
LAB_147606135:
            if (local_ba == '\0') {
              local_88 = 0;
              uStack_80 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_78 = 0;
              local_70 = 1;
              puVar10 = &local_b8;
              FUN_14760692c(lVar7,lVar8 + 0x10,puVar10);
            }
            else if (local_bc == '\x01') {
              local_70 = 1;
              puVar10 = &local_b8;
              (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                          (longlong)*(int *)(param_1 + 0x3c) * (ulonglong)local_be))(puVar10,lVar7);
            }
            else {
              local_b8 = 0;
              uStack_b0 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_98 = 0;
              uStack_90 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_78 = 0;
              local_70 = 1;
              puVar10 = &local_b8;
              puVar11 = (undefined8 *)(lVar7 + (ulonglong)local_be);
              puVar12 = puVar10;
              for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
                *puVar12 = *puVar11;
                puVar11 = puVar11 + 1;
                puVar12 = puVar12 + 1;
              }
            }
          }
          else {
            local_108 = lVar4;
            if (local_ba == '\0') {
              FUN_1476069e8(lVar4,&local_b8,lVar7,lVar8 + 0x10);
            }
            else if (local_bc == '\x01') {
              FUN_147607216();
            }
            else {
              FUN_1476073f8(lVar4,&local_b8,lVar7,local_be);
            }
            if (local_b8._2_1_ == '\x01') {
              puVar10 = (undefined8 *)
                        ((ulonglong)((uint)(ushort)local_b8 * 0x48) + *(longlong *)(local_108 + 8));
            }
            else {
              puVar10 = (undefined8 *)0x0;
            }
            if (puVar10 == (undefined8 *)0x0) goto LAB_147606135;
          }
          puVar11 = (undefined8 *)(local_100 + uVar15 * 0x48);
          for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          FUN_1476075da(local_f0,&local_c4);
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar2);
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 3) = (int)plVar16[3] + -1;
    UNLOCK();
    if (local_f8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar16 + 1));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    uVar15 = plVar9[2];
    if ((ulonglong)plVar9[2] < local_e8) {
      uVar15 = local_e8;
    }
    plVar9[2] = uVar15;
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_f4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14760634e FUN_14760634e body=1500 status=ok
// SIG undefined FUN_14760634e(void)

void FUN_14760634e(longlong param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *_Src;
  undefined2 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *_Dst;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  ulonglong local_120;
  longlong local_118;
  int local_10c;
  int local_108;
  int local_104;
  ulonglong local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined2 local_e2;
  undefined8 local_e0 [9];
  longlong local_98;
  int local_90;
  longlong local_88;
  ushort local_7c;
  char local_7a;
  ushort local_78;
  char cStack_76;
  undefined5 uStack_75;
  int local_70;
  longlong local_68;
  ushort local_60;
  char cStack_5e;
  undefined5 uStack_5d;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar6 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x60))
      goto LAB_1476063a3;
      plVar6 = plVar6 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_1476063a3:
  uVar2 = *(ushort *)(param_2 + 0xe);
  uVar11 = (ulonglong)uVar2;
  local_f8 = *(ulonglong *)(param_1 + 0x40);
  local_104 = *(int *)(param_2 + 0x14);
  if (local_104 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_1476063f6;
      puVar10 = puVar10 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_1476063f6:
  local_118 = *plVar6;
  local_100 = *(ulonglong *)(param_1 + 0x40);
  local_108 = *(int *)(param_2 + 0x14);
  if (local_108 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_14760644f;
      plVar9 = plVar9 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_14760644f:
  _Dst = (undefined8 *)*puVar10;
  local_10c = *(int *)(param_2 + 0x14);
  if (local_10c == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  local_128 = *plVar9;
  FUN_140b325e4(param_2,&local_98,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  local_130 = local_88;
  local_120 = uVar11;
  if (local_88 == 0) {
    FUN_1410bd96e(param_2,&local_60,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_50 == 0) {
      FUN_1410bd9c4(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      local_130 = local_68;
      if (uVar2 != 0 && local_68 != 0) {
        local_120 = (ulonglong)((uint)uVar2 * 2);
        uVar11 = 0;
        do {
          lVar4 = *(longlong *)(local_130 + uVar11 * 8);
          puVar5 = &DAT_149dfb77a;
          if (*(int *)(lVar4 + 0x58) != 0) {
            puVar5 = *(undefined2 **)(lVar4 + 0x50);
          }
          uVar3 = *(undefined8 *)(param_1 + 0x48);
          FUN_1446f470e(local_e0,puVar5,1);
          FUN_1476069e8(uVar3,&local_7c,*(undefined8 *)(local_128 + uVar11 * 4),local_e0);
          if (local_7a == '\x01') {
            puVar7 = (undefined8 *)
                     ((ulonglong)((uint)local_7c * 0x48) +
                     *(longlong *)(*(longlong *)(param_1 + 0x48) + 8));
            puVar8 = _Dst;
            for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          else {
            FUN_1476463b4(*(undefined8 *)(local_130 + uVar11 * 8),local_e0,
                          *(undefined8 *)(local_128 + uVar11 * 4));
            puVar7 = local_e0;
            puVar8 = _Dst;
            for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            local_138 = *(undefined8 *)(local_130 + uVar11 * 8);
            FUN_1476079ae(*(undefined8 *)(param_1 + 0x48),&local_e2,
                          *(undefined8 *)(local_128 + uVar11 * 4),local_e0);
            *(undefined2 *)(local_118 + uVar11) = local_e2;
          }
          uVar11 = uVar11 + 2;
          _Dst = _Dst + 9;
        } while (local_120 != uVar11);
      }
      lVar4 = CONCAT53(uStack_75,CONCAT12(cStack_76,local_78));
      if (lVar4 != 0) {
        LOCK();
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (local_70 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(CONCAT53(uStack_75,CONCAT12(cStack_76,local_78)) + 8));
        }
      }
    }
    else {
      local_130 = local_50;
      if (uVar11 != 0) {
        uVar11 = 0;
        do {
          FUN_1476073f8(*(undefined8 *)(param_1 + 0x48),&local_78,
                        *(undefined8 *)(local_128 + uVar11 * 8),
                        *(undefined2 *)(local_50 + uVar11 * 2));
          if (cStack_76 == '\x01') {
            puVar7 = (undefined8 *)
                     ((ulonglong)((uint)local_78 * 0x48) +
                     *(longlong *)(*(longlong *)(param_1 + 0x48) + 8));
            puVar8 = _Dst;
            for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          else {
            _Src = (undefined8 *)
                   ((ulonglong)*(ushort *)(local_130 + uVar11 * 2) +
                   *(longlong *)(local_128 + uVar11 * 8));
            puVar7 = _Src;
            puVar8 = local_e0;
            for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            memmove(_Dst,_Src,0x48);
            local_138 = CONCAT62(local_138._2_6_,*(undefined2 *)(local_130 + uVar11 * 2));
            FUN_1476078cc(*(undefined8 *)(param_1 + 0x48),&local_7c,
                          *(undefined8 *)(local_128 + uVar11 * 8),local_e0);
            *(ushort *)(local_118 + uVar11 * 2) = local_7c;
          }
          uVar11 = uVar11 + 1;
          _Dst = _Dst + 9;
        } while (local_120 != uVar11);
      }
    }
    lVar4 = CONCAT53(uStack_5d,CONCAT12(cStack_5e,local_60));
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (local_58 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(CONCAT53(uStack_5d,CONCAT12(cStack_5e,local_60)) + 8));
      }
    }
  }
  else {
    local_f0 = param_1;
    if (uVar11 != 0) {
      uVar11 = 0;
      do {
        FUN_147607216(*(undefined8 *)(param_1 + 0x48),&local_60,
                      *(undefined8 *)(local_128 + uVar11 * 8),
                      *(undefined2 *)(local_130 + uVar11 * 2));
        if (cStack_5e == '\x01') {
          puVar7 = (undefined8 *)
                   ((ulonglong)((uint)local_60 * 0x48) +
                   *(longlong *)(*(longlong *)(param_1 + 0x48) + 8));
          puVar8 = _Dst;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        else {
          (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18 +
                      (longlong)*(int *)(param_1 + 0x3c) *
                      (ulonglong)*(ushort *)(local_130 + uVar11 * 2)))
                    (local_e0,*(undefined8 *)(local_128 + uVar11 * 8));
          puVar7 = local_e0;
          puVar8 = _Dst;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          local_138 = CONCAT62(local_138._2_6_,*(undefined2 *)(local_130 + uVar11 * 2));
          FUN_1476077ea(*(undefined8 *)(param_1 + 0x48),&local_78,
                        *(undefined8 *)(local_128 + uVar11 * 8),local_e0);
          *(ushort *)(local_118 + uVar11 * 2) = local_78;
        }
        uVar11 = uVar11 + 1;
        _Dst = _Dst + 9;
      } while (local_120 != uVar11);
    }
  }
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 0x18) = *(int *)(local_98 + 0x18) + -1;
    UNLOCK();
    if (local_90 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_98 + 8));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_10c == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    uVar11 = puVar10[2];
    if ((ulonglong)puVar10[2] < local_100) {
      uVar11 = local_100;
    }
    puVar10[2] = uVar11;
    LOCK();
    *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + -1;
    UNLOCK();
    if (local_108 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar10 + 1));
    }
  }
  if (plVar6 != (longlong *)0x0) {
    uVar11 = plVar6[2];
    if ((ulonglong)plVar6[2] < local_f8) {
      uVar11 = local_f8;
    }
    plVar6[2] = uVar11;
    LOCK();
    *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
    UNLOCK();
    if (local_104 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14760692c FUN_14760692c body=186 status=ok
// SIG undefined FUN_14760692c(void)

void FUN_14760692c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [40];
  undefined2 *local_90;
  int local_88;
  longlong local_80 [2];
  undefined8 local_70 [9];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400021e4(param_2,&local_90);
  puVar2 = local_90;
  if (local_88 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140056680(local_80,puVar2);
  FUN_14760774c(local_70,param_1,local_80);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28 == '\x01') {
    puVar3 = local_70;
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *param_3 = *puVar3;
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476069e8 FUN_1476069e8 body=483 status=ok
// SIG undefined FUN_1476069e8(void)

undefined8 FUN_1476069e8(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147606b16;
        }
        else {
LAB_147606b16:
          FUN_147606e7e(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147606f4a(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_147606dba(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = *param_4;
  local_68 = CONCAT71(local_68._1_7_,2);
  FUN_147606bcc(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147606bcc FUN_147606bcc body=493 status=ok
// SIG undefined FUN_147606bcc(void)

undefined2 * FUN_147606bcc(longlong param_1,undefined2 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_48 = param_1 + 0x50;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_40;
    uVar3 = local_78;
    local_70 = local_38;
    local_6c = local_34;
    local_88 = local_50;
    local_80 = local_48;
    local_58 = 0;
    local_78._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_90 = plVar1;
    local_68 = plVar1;
    local_60 = plVar1;
    if (local_78._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar2 = *(ushort *)(*local_90 + 0x14 + (longlong)iVar6 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar7 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147606cfe;
        }
        else {
LAB_147606cfe:
          FUN_147606e7e(local_68);
          local_58 = CONCAT11(local_58._1_1_,1);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
      } while (local_78._4_4_ < *(int *)(local_80 + 0x18));
      uVar3 = local_78;
      if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
        FUN_147606f4a(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
        uVar3 = local_78;
      }
    }
    local_78 = uVar3;
    FUN_147606dba(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  uVar5 = FUN_144a78877(*param_3,param_3[1]);
  uVar5 = FUN_144a78877(uVar5,*(undefined1 *)(param_3 + 4));
  iVar6 = FUN_14760715e((longlong *)(param_1 + 0x40),uVar5,param_3);
  if ((iVar6 == -1) ||
     (lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x40),
     puVar8 = (undefined2 *)(lVar7 + 0x14), puVar8 == (undefined2 *)0x0 || lVar7 == 0)) {
    uVar4 = 0;
  }
  else {
    *param_2 = *puVar8;
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 1) = uVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147606dba FUN_147606dba body=196 status=ok
// SIG undefined FUN_147606dba(void)

void FUN_147606dba(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)(int)uVar7;
        if (iVar3 < (int)uVar7) {
          iVar5 = *(int *)(lVar2 + lVar6 * 0x48);
          iVar1 = *(int *)(lVar2 + 4 + lVar6 * 0x48);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x48) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x48) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + lVar6 * 0x48);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_1403af08a(param_1,iVar5);
  return;
}



// FUNCTION 147606e7e FUN_147606e7e body=90 status=ok
// SIG undefined FUN_147606e7e(void)

void FUN_147606e7e(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147606ed8();
  return;
}



// FUNCTION 147606ed8 FUN_147606ed8 body=114 status=ok
// SIG undefined FUN_147606ed8(void)

void FUN_147606ed8(longlong *param_1,int param_2)

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



// FUNCTION 147606f4a FUN_147606f4a body=68 status=ok
// SIG undefined FUN_147606f4a(void)

void FUN_147606f4a(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147606f8e(param_1);
  return;
}



// FUNCTION 147606f8e FUN_147606f8e body=462 status=ok
// SIG undefined FUN_147606f8e(void)

void FUN_147606f8e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar11 = (longlong)iVar5 * 0x20;
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),*(undefined4 *)(lVar3 + 4 + lVar11));
        iVar7 = FUN_144a78877(uVar6,*(undefined1 *)(lVar3 + 0x10 + lVar11));
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14760715e FUN_14760715e body=107 status=ok
// SIG undefined FUN_14760715e(void)

int FUN_14760715e(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_1476071c9(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1476071c9 FUN_1476071c9 body=76 status=ok
// SIG undefined FUN_1476071c9(void)

undefined8 FUN_1476071c9(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    cVar1 = (char)param_1[4];
    if (cVar1 == (char)param_2[4]) {
      if (cVar1 == '\x02') {
        uVar2 = *(ulonglong *)(param_1 + 2);
        bVar4 = uVar2 == *(ulonglong *)(param_2 + 2);
      }
      else {
        if ((cVar1 != '\x01') && (cVar1 != '\0')) {
          return 1;
        }
        uVar2 = (ulonglong)*(ushort *)(param_1 + 2);
        bVar4 = *(ushort *)(param_1 + 2) == *(ushort *)(param_2 + 2);
      }
      uVar3 = CONCAT71((int7)(uVar2 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 147607216 FUN_147607216 body=481 status=ok
// SIG undefined FUN_147607216(void)

undefined8 FUN_147607216(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147607344;
        }
        else {
LAB_147607344:
          FUN_147606e7e(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147606f4a(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_147606dba(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_147606bcc(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476073f8 FUN_1476073f8 body=481 status=ok
// SIG undefined FUN_1476073f8(void)

undefined8 FUN_1476073f8(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_90 = param_1 + 0x50;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_98);
    }
    local_60 = local_88;
    uVar4 = local_60;
    local_58 = local_80;
    local_54 = local_7c;
    local_70 = local_98;
    local_68 = local_90;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_90 + 0x18)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar4;
      do {
        uVar2 = *(ushort *)(*local_78 + 0x14 + (longlong)iVar3 * 0x20);
        if ((int)(uint)uVar2 < *(int *)(param_1 + 0x30)) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar5 = param_1 + 0x18;
          }
          if ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_147607526;
        }
        else {
LAB_147607526:
          FUN_147606e7e(local_50);
          local_40 = CONCAT11(local_40._1_1_,1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar4 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147606f4a(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar4 = local_60;
      }
    }
    local_60 = uVar4;
    FUN_147606dba(param_1 + 8);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  local_78 = (longlong *)0x0;
  if (param_3 != 0) {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_3);
    local_78 = (longlong *)local_98;
  }
  local_70 = CONCAT62(local_70._2_6_,param_4);
  local_68 = local_68 & 0xffffffffffffff00;
  FUN_147606bcc(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476075da FUN_1476075da body=221 status=ok
// SIG undefined FUN_1476075da(void)

void FUN_1476075da(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  if ((int)uVar2 < 1) {
    uVar9 = 0;
  }
  else {
    iVar5 = *param_2;
    uVar9 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar9;
      if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x50) < iVar5) {
        uVar9 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar9 < (int)uVar2) && (*(int *)(lVar7 + (ulonglong)uVar9 * 0x50) <= iVar5)) {
      piVar8 = (int *)(lVar7 + (ulonglong)uVar9 * 0x50);
      goto LAB_14760768b;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_1476076b8(param_1,uVar2);
    lVar7 = *param_1;
  }
  lVar4 = (ulonglong)uVar9 * 0x50;
  memmove((void *)(lVar7 + lVar4 + 0x50),(void *)(lVar7 + lVar4),(ulonglong)(uVar2 - uVar9) * 0x50);
  piVar8 = (int *)(lVar4 + *param_1);
  iVar5 = *param_2;
LAB_14760768b:
  *piVar8 = iVar5;
  for (lVar7 = 9; piVar8 = piVar8 + 2, lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined8 *)piVar8 = *param_3;
    param_3 = param_3 + 1;
  }
  return;
}



// FUNCTION 1476076b8 FUN_1476076b8 body=147 status=ok
// SIG undefined FUN_1476076b8(void)

void FUN_1476076b8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14760774c FUN_14760774c body=157 status=ok
// SIG undefined FUN_14760774c(void)

undefined4 * FUN_14760774c(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406fa5f4(local_48);
  lVar12 = FUN_1406f977c(local_48);
  if ((lVar12 == 0) ||
     (puVar13 = (undefined4 *)(*(int *)(lVar12 + 0x44) + local_20), puVar13 == (undefined4 *)0x0)) {
    uVar11 = 0;
  }
  else {
    uVar2 = puVar13[1];
    uVar3 = puVar13[2];
    uVar4 = puVar13[3];
    uVar5 = *(undefined8 *)(puVar13 + 4);
    uVar6 = *(undefined8 *)(puVar13 + 6);
    uVar7 = *(undefined8 *)(puVar13 + 8);
    uVar8 = *(undefined8 *)(puVar13 + 10);
    uVar9 = *(undefined8 *)(puVar13 + 0xc);
    uVar10 = *(undefined8 *)(puVar13 + 0xe);
    uVar1 = *(undefined8 *)(puVar13 + 0x10);
    *param_1 = *puVar13;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    *(undefined8 *)(param_1 + 4) = uVar5;
    *(undefined8 *)(param_1 + 6) = uVar6;
    *(undefined8 *)(param_1 + 8) = uVar7;
    *(undefined8 *)(param_1 + 10) = uVar8;
    *(undefined8 *)(param_1 + 0xc) = uVar9;
    *(undefined8 *)(param_1 + 0xe) = uVar10;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    uVar11 = 1;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar11;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476077ea FUN_1476077ea body=224 status=ok
// SIG undefined FUN_1476077ea(void)

undefined2 *
FUN_1476077ea(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 *param_4,
             undefined2 param_5)

{
  longlong lVar1;
  undefined1 auStack_98 [42];
  undefined2 local_6e;
  undefined1 local_6c [4];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_54;
  undefined2 local_4c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_68 = (undefined8 *)0x0;
    FUN_14485c47a(&local_68,param_3);
    local_54 = local_68;
  }
  local_4c = param_5;
  local_44 = 1;
  FUN_147607aa4(param_1 + 8,&local_68);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *local_60 = *param_4;
    param_4 = param_4 + 1;
    local_60 = local_60 + 1;
  }
  local_60 = (undefined8 *)&local_6e;
  local_6e = local_68._0_2_;
  local_68 = &local_54;
  FUN_147607b8a(param_1 + 0x40,local_6c,&local_68);
  *param_2 = local_6e;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476078cc FUN_1476078cc body=224 status=ok
// SIG undefined FUN_1476078cc(void)

undefined2 *
FUN_1476078cc(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 *param_4,
             undefined2 param_5)

{
  longlong lVar1;
  undefined1 auStack_98 [42];
  undefined2 local_6e;
  undefined1 local_6c [4];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_54;
  undefined2 local_4c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_68 = (undefined8 *)0x0;
    FUN_14485c47a(&local_68,param_3);
    local_54 = local_68;
  }
  local_4c = param_5;
  local_44 = 0;
  FUN_147607aa4(param_1 + 8,&local_68);
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *local_60 = *param_4;
    param_4 = param_4 + 1;
    local_60 = local_60 + 1;
  }
  local_60 = (undefined8 *)&local_6e;
  local_6e = local_68._0_2_;
  local_68 = &local_54;
  FUN_147607b8a(param_1 + 0x40,local_6c,&local_68);
  *param_2 = local_6e;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476079ae FUN_1476079ae body=245 status=ok
// SIG undefined FUN_1476079ae(void)

undefined2 *
FUN_1476079ae(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 *param_4,
             longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [42];
  undefined2 local_5e;
  undefined1 local_5c [4];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_44;
  undefined1 local_3c [8];
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = (undefined8 *)0x0;
  if (param_3 != 0) {
    local_58 = (undefined8 *)0x0;
    FUN_14485c47a(&local_58,param_3);
    local_44 = local_58;
  }
  iVar1 = *(int *)(param_5 + 0x58) + -1;
  if (*(int *)(param_5 + 0x58) == 0) {
    iVar1 = 0;
  }
  FUN_1446f82e2(local_3c,iVar1,*(undefined8 *)(param_5 + 0x50),1);
  local_34 = 2;
  FUN_147607aa4(param_1 + 8,&local_58);
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *local_50 = *param_4;
    param_4 = param_4 + 1;
    local_50 = local_50 + 1;
  }
  local_50 = (undefined8 *)&local_5e;
  local_5e = local_58._0_2_;
  local_58 = &local_44;
  FUN_147607b8a(param_1 + 0x40,local_5c,&local_58);
  *param_2 = local_5e;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147607aa4 FUN_147607aa4 body=230 status=ok
// SIG undefined FUN_147607aa4(void)

int * FUN_147607aa4(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14021b4e8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 147607b8a FUN_147607b8a body=339 status=ok
// SIG undefined FUN_147607b8a(void)

undefined4 * FUN_147607b8a(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147607cde(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined2 *)param_3[1];
  *local_40 = *puVar2;
  bVar1 = *(byte *)(puVar2 + 2);
  *(byte *)(local_40 + 2) = bVar1;
  (*(code *)(&PTR_LAB_14a4c7e80)[bVar1])(local_40 + 1,puVar2 + 1);
  *(undefined2 *)((longlong)local_40 + 0x14) = *puVar3;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = FUN_144a78877(*(undefined4 *)local_40,*(undefined4 *)((longlong)local_40 + 4));
  uVar6 = FUN_144a78877(uVar5,*(undefined1 *)(local_40 + 2));
  cVar4 = FUN_147607dc4(param_1,uVar6,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_147606f8e(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147607cde FUN_147607cde body=229 status=ok
// SIG undefined FUN_147607cde(void)

int * FUN_147607cde(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1405b363e(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 147607dc4 FUN_147607dc4 body=93 status=ok
// SIG undefined FUN_147607dc4(void)

undefined8 FUN_147607dc4(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_14760715e(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_147606ed8(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 147607e22 FUN_147607e22 body=113 status=ok
// SIG undefined FUN_147607e22(void)

void FUN_147607e22(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 147607e94 FUN_147607e94 body=136 status=ok
// SIG undefined FUN_147607e94(void)

void FUN_147607e94(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x14c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x28,0);
      iVar4 = (int)(uVar3 / 0x28);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x14c) = iVar5;
    FUN_147607f1e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147607f1e FUN_147607f1e body=149 status=ok
// SIG undefined FUN_147607f1e(void)

void FUN_147607f1e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x140);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x140,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 0x140),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x140,param_2,param_3,0x28);
  return;
}



// FUNCTION 147607fb4 FUN_147607fb4 body=114 status=ok
// SIG undefined FUN_147607fb4(void)

void FUN_147607fb4(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147608026 FUN_147608026 body=79 status=ok
// SIG undefined FUN_147608026(void)

undefined8 * FUN_147608026(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c2610;
  if (*(char *)((longlong)param_1 + 0x74) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147608076 FUN_147608076 body=78 status=ok
// SIG undefined FUN_147608076(void)

undefined8 FUN_147608076(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476080c6();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476080c6 FUN_1476080c6 body=309 status=ok
// SIG undefined FUN_1476080c6(void)

undefined2 * FUN_1476080c6(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1412fd2fe(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x78) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_141210972(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476082ae FUN_1476082ae body=59 status=ok
// SIG undefined FUN_1476082ae(void)

undefined8 FUN_1476082ae(longlong *param_1)

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



// FUNCTION 1476082f4 FUN_1476082f4 body=45 status=ok
// SIG undefined FUN_1476082f4(void)

void FUN_1476082f4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_LAB_14a4c28a0;
    FUN_147521a50(param_2 + 5);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 147608370 FUN_147608370 body=52 status=ok
// SIG undefined FUN_147608370(void)

undefined8 * FUN_147608370(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4c28a0;
  FUN_147521a50(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147608458 FUN_147608458 body=59 status=ok
// SIG undefined FUN_147608458(void)

undefined8 FUN_147608458(longlong *param_1)

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



// FUNCTION 14760849e FUN_14760849e body=45 status=ok
// SIG undefined FUN_14760849e(void)

void FUN_14760849e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_LAB_14a4c2a10;
    FUN_147521a50(param_2 + 5);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 14760851a FUN_14760851a body=52 status=ok
// SIG undefined FUN_14760851a(void)

undefined8 * FUN_14760851a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4c2a10;
  FUN_147521a50(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476085fe FUN_1476085fe body=59 status=ok
// SIG undefined FUN_1476085fe(void)

undefined8 FUN_1476085fe(longlong *param_1)

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



// FUNCTION 147608644 FUN_147608644 body=45 status=ok
// SIG undefined FUN_147608644(void)

void FUN_147608644(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_LAB_14a4c2b80;
    FUN_147521a50(param_2 + 3);
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 1476086c0 FUN_1476086c0 body=52 status=ok
// SIG undefined FUN_1476086c0(void)

undefined8 * FUN_1476086c0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4c2b80;
  FUN_147521a50(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476087fc FUN_1476087fc body=59 status=ok
// SIG undefined FUN_1476087fc(void)

undefined8 FUN_1476087fc(longlong *param_1)

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



// FUNCTION 147608842 FUN_147608842 body=45 status=ok
// SIG undefined FUN_147608842(void)

void FUN_147608842(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xc) == '\x01') {
    *param_2 = &PTR_LAB_14a4c2cf0;
    FUN_147521a50(param_2 + 9);
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1476088be FUN_1476088be body=52 status=ok
// SIG undefined FUN_1476088be(void)

undefined8 * FUN_1476088be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4c2cf0;
  FUN_147521a50(param_1 + 9);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147608960 FUN_147608960 body=59 status=ok
// SIG undefined FUN_147608960(void)

undefined8 FUN_147608960(longlong *param_1)

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



// FUNCTION 147608a02 FUN_147608a02 body=69 status=ok
// SIG undefined FUN_147608a02(void)

undefined8 * FUN_147608a02(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c2e60;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147608a48 FUN_147608a48 body=78 status=ok
// SIG undefined FUN_147608a48(void)

undefined8 FUN_147608a48(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147608b34();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147608a98 FUN_147608a98 body=69 status=ok
// SIG undefined FUN_147608a98(void)

void FUN_147608a98(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x20));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x38));
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 147608ade FUN_147608ade body=85 status=ok
// SIG undefined FUN_147608ade(void)

void FUN_147608ade(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  uVar1 = (undefined4)param_3[1];
  FUN_140c3721a(param_1 + 8,lVar2,uVar1);
  FUN_140c37182(param_1 + 0x20,lVar2,uVar1);
  FUN_147608c42(param_1 + 0x38,lVar2,uVar1);
  return;
}



// FUNCTION 147608b34 FUN_147608b34 body=268 status=ok
// SIG undefined FUN_147608b34(void)

undefined2 *
FUN_147608b34(undefined8 param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 local_78;
  undefined8 local_70;
  char local_61;
  undefined1 local_60 [16];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_61 = '\0';
  FUN_147608a98(param_1,param_2,param_4,&local_61);
  local_50 = 0;
  local_48 = 0x200000000;
  local_70 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),local_61 * '\x02' + '\x01',param_4,local_60);
  FUN_140560464(param_3,&local_88,param_4);
  FUN_147608ade(param_1);
  local_98 = local_88;
  local_90 = local_80;
  local_8c = 1;
  FUN_14163869e(local_60,&local_98,&local_70);
  *param_2 = local_78;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147608c42 FUN_147608c42 body=160 status=ok
// SIG undefined FUN_147608c42(void)

void FUN_147608c42(short *param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_1) goto LAB_147608c75;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147608c75:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar6 = *plVar8;
  lVar7 = (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar8 + 0x1c);
  *(undefined8 *)(lVar6 + 0x10 + lVar7) = *(undefined8 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 6);
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 10);
  puVar1 = (undefined4 *)(lVar6 + lVar7);
  *puVar1 = *(undefined4 *)(param_1 + 4);
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  if ((char)param_1[0x10] == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147608cd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147608ce2 FUN_147608ce2 body=69 status=ok
// SIG undefined FUN_147608ce2(void)

undefined8 * FUN_147608ce2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c2e80;
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147608d28 FUN_147608d28 body=78 status=ok
// SIG undefined FUN_147608d28(void)

undefined8 FUN_147608d28(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147608e22();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147608d78 FUN_147608d78 body=82 status=ok
// SIG undefined FUN_147608d78(void)

void FUN_147608d78(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147608f30(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147608dcc FUN_147608dcc body=86 status=ok
// SIG undefined FUN_147608dcc(void)

void FUN_147608dcc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    uVar1 = (undefined4)param_3[1];
    FUN_140659bfa(param_1 + 8,lVar2,uVar1);
    FUN_140659c98(param_1 + 0x28,lVar2,uVar1);
    FUN_140659abc(param_1 + 0x40,lVar2,uVar1);
    return;
  }
  return;
}



// FUNCTION 147608e22 FUN_147608e22 body=269 status=ok
// SIG undefined FUN_147608e22(void)

undefined2 * FUN_147608e22(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_147608f30(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x58) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_147608dcc(param_1,param_3,&local_80);
  local_90 = local_80;
  local_88 = local_78;
  local_84 = 1;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147608f30 FUN_147608f30 body=73 status=ok
// SIG undefined FUN_147608f30(void)

void FUN_147608f30(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
    return;
  }
  return;
}



// FUNCTION 147609024 FUN_147609024 body=59 status=ok
// SIG undefined FUN_147609024(void)

undefined8 FUN_147609024(longlong *param_1)

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



// FUNCTION 1476090fa FUN_1476090fa body=63 status=ok
// SIG undefined FUN_1476090fa(void)

undefined1 FUN_1476090fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475b0838(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 147609162 FUN_147609162 body=59 status=ok
// SIG undefined FUN_147609162(void)

undefined8 FUN_147609162(longlong *param_1)

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



// FUNCTION 1476091ae FUN_1476091ae body=40 status=ok
// SIG undefined FUN_1476091ae(void)

void FUN_1476091ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_145bfd3a0(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 147609226 FUN_147609226 body=147 status=ok
// SIG undefined FUN_147609226(void)

void FUN_147609226(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476092ba FUN_1476092ba body=79 status=ok
// SIG undefined FUN_1476092ba(void)

undefined8 * FUN_1476092ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3180;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760930a FUN_14760930a body=78 status=ok
// SIG undefined FUN_14760930a(void)

undefined8 FUN_14760930a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147609406();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760935a FUN_14760935a body=82 status=ok
// SIG undefined FUN_14760935a(void)

void FUN_14760935a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14760953c(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476093ae FUN_1476093ae body=86 status=ok
// SIG undefined FUN_1476093ae(void)

void FUN_1476093ae(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147609596(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147609406 FUN_147609406 body=308 status=ok
// SIG undefined FUN_147609406(void)

undefined2 * FUN_147609406(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_14760953c(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x70) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147609596(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760953c FUN_14760953c body=89 status=ok
// SIG undefined FUN_14760953c(void)

void FUN_14760953c(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  if (*(char *)(param_2 + 0xd) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0xc]);
  }
  FUN_140dba9e6(*param_1,param_2[0x10]);
  FUN_140dba9e6(*param_1,param_2[0x1c]);
  FUN_140dba9e6(*param_1,param_2[0x28]);
  return;
}



// FUNCTION 147609596 FUN_147609596 body=84 status=ok
// SIG undefined FUN_147609596(void)

void FUN_147609596(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1476095ea(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140b5f80c(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140b5f80c(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1476095ea FUN_1476095ea body=184 status=ok
// SIG undefined FUN_1476095ea(void)

void FUN_1476095ea(short *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == *param_1) goto LAB_14760961f;
      plVar5 = plVar5 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_14760961f:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  lVar3 = *plVar5;
  bVar1 = *(byte *)((longlong)plVar5 + 0x1c);
  lVar4 = *(longlong *)(param_1 + 4);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_1 + 4);
    }
  }
  *(longlong *)(lVar3 + (longlong)param_3 * (ulonglong)bVar1) = lVar4;
  if ((char)param_1[8] == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147609684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1476096a2 FUN_1476096a2 body=59 status=ok
// SIG undefined FUN_1476096a2(void)

undefined8 * FUN_1476096a2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c31a0;
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476096de FUN_1476096de body=78 status=ok
// SIG undefined FUN_1476096de(void)

undefined8 FUN_1476096de(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476097c8();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760972e FUN_14760972e body=82 status=ok
// SIG undefined FUN_14760972e(void)

void FUN_14760972e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147609902(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147609782 FUN_147609782 body=70 status=ok
// SIG undefined FUN_147609782(void)

void FUN_147609782(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
    return;
  }
  lVar2 = param_3[1];
  FUN_140659abc(param_1 + 8,lVar1,(int)lVar2);
  FUN_1476095ea(param_1 + 0x28,lVar1,(int)lVar2);
  return;
}



// FUNCTION 1476097c8 FUN_1476097c8 body=312 status=ok
// SIG undefined FUN_1476097c8(void)

undefined2 * FUN_1476097c8(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_147609902(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x40) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  uVar2 = local_78;
  lVar1 = local_80;
  if (local_80 == 0) {
    local_80 = 0;
  }
  else {
    FUN_140659abc(param_1 + 8,local_80,local_78);
    FUN_1476095ea(param_1 + 0x28,lVar1,uVar2);
  }
  local_88 = local_78;
  local_84 = 1;
  local_90 = local_80;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147609902 FUN_147609902 body=65 status=ok
// SIG undefined FUN_147609902(void)

void FUN_147609902(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  if (*(char *)(param_2 + 0xd) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0xc]);
  }
  FUN_140dba9e6(*param_1,param_2[0x10]);
  return;
}



// FUNCTION 147609944 FUN_147609944 body=75 status=ok
// SIG undefined FUN_147609944(void)

undefined8 * FUN_147609944(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c31c0;
  if (*(char *)((longlong)param_1 + 0xa4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147609990 FUN_147609990 body=78 status=ok
// SIG undefined FUN_147609990(void)

undefined8 FUN_147609990(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147609a8c();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476099e0 FUN_1476099e0 body=85 status=ok
// SIG undefined FUN_1476099e0(void)

void FUN_1476099e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147609b9a(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147609a36 FUN_147609a36 body=85 status=ok
// SIG undefined FUN_147609a36(void)

void FUN_147609a36(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  uVar1 = (undefined4)param_3[1];
  FUN_140659abc(param_1 + 8,lVar2,uVar1);
  FUN_1476095ea(param_1 + 0x28,lVar2,uVar1);
  FUN_147609be8(param_1 + 0x40,lVar2,uVar1);
  return;
}



// FUNCTION 147609a8c FUN_147609a8c body=269 status=ok
// SIG undefined FUN_147609a8c(void)

undefined2 * FUN_147609a8c(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_147609b9a(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xa8) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_147609a36(param_1);
  local_90 = local_80;
  local_88 = local_78;
  local_84 = 1;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147609b9a FUN_147609b9a body=77 status=ok
// SIG undefined FUN_147609b9a(void)

void FUN_147609b9a(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  if (*(char *)(param_2 + 0xd) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0xc]);
  }
  FUN_140dba9e6(*param_1,param_2[0x10]);
  FUN_140dba9e6(*param_1,param_2[0x1c]);
  return;
}



// FUNCTION 147609be8 FUN_147609be8 body=163 status=ok
// SIG undefined FUN_147609be8(void)

void FUN_147609be8(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  short *psVar4;
  undefined4 *puVar5;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_147609c1e;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_147609c1e:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  puVar5 = (undefined4 *)
           ((longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c) + *plVar3);
  psVar4 = param_1;
  for (lVar2 = 0x18; psVar4 = psVar4 + 2, lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *(undefined4 *)psVar4;
    puVar5 = puVar5 + 1;
  }
  if ((char)param_1[0x32] == '\x01') {
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147609c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 147609c8c FUN_147609c8c body=49 status=ok
// SIG undefined FUN_147609c8c(void)

undefined8 * FUN_147609c8c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c31e0;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147609cbe FUN_147609cbe body=78 status=ok
// SIG undefined FUN_147609cbe(void)

undefined8 FUN_147609cbe(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147609d4c();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147609d0e FUN_147609d0e body=40 status=ok
// SIG undefined FUN_147609d0e(void)

void FUN_147609d0e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 147609d4c FUN_147609d4c body=269 status=ok
// SIG undefined FUN_147609d4c(void)

undefined2 * FUN_147609d4c(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x20) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_140b5f80c(param_1 + 8,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147609e5a FUN_147609e5a body=49 status=ok
// SIG undefined FUN_147609e5a(void)

undefined8 * FUN_147609e5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3200;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147609e8c FUN_147609e8c body=78 status=ok
// SIG undefined FUN_147609e8c(void)

undefined8 FUN_147609e8c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147609f1a();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147609edc FUN_147609edc body=40 status=ok
// SIG undefined FUN_147609edc(void)

void FUN_147609edc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *param_4 = 1;
  }
  return;
}


