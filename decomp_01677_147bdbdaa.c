// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147bdbdaa FUN_147bdbdaa body=718 status=ok
// SIG undefined FUN_147bdbdaa(void)

void FUN_147bdbdaa(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[1] * 0x60,
             (longlong)*(int *)((longlong)param_1 + 0xc) * 0x60);
  (**(code **)(*param_2 + 0x10))
            (param_2,(int)param_1[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  lVar2 = (longlong)(int)param_1[9] << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  plStack_50 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_1[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78._0_4_ = (undefined4)local_58;
  local_78._4_4_ = local_58._4_4_;
  plStack_70 = plStack_50;
  local_80 = param_1;
  if ((iStack_44 != iVar3) || (plStack_50 != plVar1)) {
    do {
      FUN_147bdc07a((longlong)iStack_64 * 0x60 + *local_80,param_2);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_1 || (plStack_70 != plVar1 || iStack_64 != iVar3));
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[0xb] * 0x60,
             (longlong)*(int *)((longlong)param_1 + 0x5c) * 0x60);
  (**(code **)(*param_2 + 0x10))
            (param_2,(int)param_1[0xf] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_1 + 0x7c) + 0x1fU >> 3 & 0xfffffffc);
  lVar2 = (longlong)(int)param_1[0x13] << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
  plStack_50 = param_1 + 0xc;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  if ((int)param_1[0xf] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_78 = local_58;
  plStack_70 = plStack_50;
  local_80 = param_1 + 10;
  if (iStack_44 < (int)plStack_50[3]) {
    do {
      lVar2 = *local_80;
      lVar4 = (longlong)iStack_64 * 0x60;
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(lVar2 + 0x10 + lVar4) * 0x18,
                 (longlong)*(int *)(lVar2 + 0x14 + lVar4) * 0x18);
      (**(code **)(*param_2 + 0x10))
                (param_2,*(int *)(lVar2 + 0x30 + lVar4) + 0x1fU >> 3 & 0xfffffffc,
                 *(int *)(lVar2 + 0x34 + lVar4) + 0x1fU >> 3 & 0xfffffffc);
      lVar2 = (longlong)*(int *)(lVar2 + 0x50 + lVar4) << 2;
      (**(code **)(*param_2 + 0x10))(param_2,lVar2,lVar2);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)plStack_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdc07a FUN_147bdc07a body=104 status=ok
// SIG undefined FUN_147bdc07a(void)

void FUN_147bdc07a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x10) << 5,(longlong)*(int *)(param_1 + 0x14) << 5
            );
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x30) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x34) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0x50) << 2;
                    /* WARNING: Could not recover jumptable at 0x000147bdc0df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  return;
}



// FUNCTION 147bdc0e2 FUN_147bdc0e2 body=185 status=ok
// SIG undefined FUN_147bdc0e2(void)

undefined8 * FUN_147bdc0e2(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0x7fefffffffffffff;
  param_1[2] = 0x10000000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  local_28 = param_1 + 0xf;
  local_20 = 4;
  FUN_146efab44(param_1 + 6,&local_28,0x3ff0000000000000,0);
  lVar1 = 0x80;
  do {
    *(undefined8 *)((longlong)param_1 + lVar1 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar1) = 0;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0xc0);
  param_1[0xe] = param_1 + 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdc19c FUN_147bdc19c body=276 status=ok
// SIG undefined FUN_147bdc19c(void)

void FUN_147bdc19c(longlong param_1,double param_2,float param_3)

{
  ushort uVar1;
  byte bVar2;
  ulonglong uVar3;
  double dVar4;
  float fVar5;
  
  fVar5 = 1.1;
  if (param_3 <= 1.1) {
    fVar5 = param_3;
  }
  dVar4 = (double)fVar5;
  if (dVar4 < *(double *)(param_1 + 0x28)) {
    *(double *)(param_1 + 0x28) = dVar4;
  }
  if (*(double *)(param_1 + 0x30) <= dVar4 && dVar4 != *(double *)(param_1 + 0x30)) {
    *(double *)(param_1 + 0x30) = dVar4;
  }
  fVar5 = fVar5 * 1000.0;
  if (1.0 <= param_2 - *(double *)(param_1 + 0x20)) {
    FUN_147bdc2b0(param_1);
    bVar2 = *(char *)(param_1 + 8) + 1U & 3;
    *(byte *)(param_1 + 8) = bVar2;
    *(double *)(param_1 + 0x20) = param_2;
    uVar3 = (ulonglong)bVar2;
    *(ushort *)(param_1 + 10 + uVar3 * 4) =
         *(ushort *)(param_1 + 10 + uVar3 * 4) & 0xe000 |
         (ushort)((uint)(int)ROUND(fVar5 + fVar5 + -0.5) >> 1) & 0x1fff;
    *(byte *)(param_1 + 0xc + uVar3 * 4) = (*(byte *)(param_1 + 0xc + uVar3 * 4) & 0xf8) + 1;
  }
  else {
    uVar3 = (ulonglong)*(byte *)(param_1 + 8);
    bVar2 = *(byte *)(param_1 + 0xc + uVar3 * 4);
    if ((~bVar2 & 7) != 0) {
      uVar1 = *(ushort *)(param_1 + 10 + uVar3 * 4);
      *(ushort *)(param_1 + 10 + uVar3 * 4) =
           uVar1 & 0xe000 |
           (short)(((int)ROUND(fVar5 + fVar5 + -0.5) & 0xffffU) >> 1) + uVar1 & 0x1fff;
      *(byte *)(param_1 + 0xc + uVar3 * 4) = bVar2 & 0xf8 | bVar2 + 1 & 7;
    }
  }
  return;
}



// FUNCTION 147bdc2b0 FUN_147bdc2b0 body=158 status=ok
// SIG undefined FUN_147bdc2b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bdc2b0(longlong param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (ulonglong)*(uint *)(param_1 + 0xc) & 0xffffffff000000ff |
                 (ulonglong)*(byte *)(param_1 + 0x10) << 8 |
                 (ulonglong)*(byte *)(param_1 + 0x14) << 0x10 |
                 (ulonglong)*(byte *)(param_1 + 0x18) << 0x18;
  auVar2 = pblendw(auVar2 & _DAT_14a9e5460,(undefined1  [16])0x0,0xfc);
  auVar2 = psadbw(auVar2,(undefined1  [16])0x0);
  dVar1 = 0.0;
  if (auVar2._0_4_ != 0) {
    auVar3._2_2_ = *(undefined2 *)(param_1 + 0xe);
    auVar3._0_2_ = *(undefined2 *)(param_1 + 10);
    auVar3._4_2_ = *(undefined2 *)(param_1 + 0x12);
    auVar3._6_2_ = *(undefined2 *)(param_1 + 0x16);
    auVar3._8_8_ = 0;
    auVar3 = pmovzxwd(auVar3 & _DAT_14a9e5470,auVar3 & _DAT_14a9e5470);
    auVar3 = phaddd(auVar3,auVar3);
    auVar3 = phaddd(auVar3,auVar3);
    dVar1 = (double)auVar3._0_4_ / ((double)auVar2._0_4_ * 1000.0);
  }
  *(double *)(param_1 + 0x38) = dVar1;
  *(double *)(param_1 + 0x40) = dVar1 + *(double *)(param_1 + 0x40);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}



// FUNCTION 147bdc34e FUN_147bdc34e body=139 status=ok
// SIG undefined FUN_147bdc34e(void)

undefined8 * FUN_147bdc34e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140056680(param_1 + 3,&DAT_149dfb77a);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
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
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffff;
  return param_1;
}



// FUNCTION 147bdc3da FUN_147bdc3da body=257 status=ok
// SIG undefined FUN_147bdc3da(void)

void FUN_147bdc3da(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 8) = 0;
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8) = 0;
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x98);
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
  plVar3 = *(longlong **)(param_1 + 0x88);
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
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bdc4cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147bdc4dc FUN_147bdc4dc body=669 status=ok
// SIG undefined FUN_147bdc4dc(void)

longlong * FUN_147bdc4dc(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caf2710) && (FUN_144b3d300(&DAT_14caf2710), DAT_14caf2710 == -1)) {
    DAT_14caf2700 = (longlong *)0x0;
    DAT_14caf2708 = (longlong *)0x0;
    atexit(FUN_1435a4434);
    _Init_thread_footer(&DAT_14caf2710);
  }
  if ((param_2 == 0) || (lVar3 = *(longlong *)(param_2 + 0x1d70), lVar3 == 0)) {
LAB_147bdc58c:
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if (*(longlong *)(param_2 + 0x58) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ulonglong *)(*(longlong *)(param_2 + 0x58) + 0x200);
  }
  if (DAT_14caf2700 == (longlong *)0x0) {
    iVar7 = 1;
  }
  else {
    iVar7 = *(byte *)((longlong)DAT_14caf2700 + 0x11) + 1;
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  plVar4 = DAT_14caf2708;
  plVar1 = DAT_14caf2700;
  if ((uVar6 != DAT_14c892fa8) && (uVar6 != DAT_14c892fac)) goto LAB_147bdc58c;
  if (DAT_14caf2700 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14a9ef240;
    plVar1 = plVar5 + 2;
    *(undefined4 *)(plVar5 + 2) = 4;
    plVar5[3] = lVar3;
    *(undefined2 *)(plVar5 + 4) = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    local_38 = plVar1;
    local_30 = plVar5;
    FUN_147be3ace(&local_38,plVar1);
    plVar4 = DAT_14caf2708;
    DAT_14caf2700 = plVar1;
    if (plVar5 == (longlong *)0x0) {
      if (DAT_14caf2708 != (longlong *)0x0) {
        DAT_14caf2708 = (longlong *)0x0;
LAB_147bdc6ba:
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar7 = *piVar2;
          UNLOCK();
joined_r0x000147bdc6e5:
          if (iVar7 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      if (plVar5 == DAT_14caf2708) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar7 = *piVar2;
          UNLOCK();
          plVar4 = plVar5;
          goto joined_r0x000147bdc6e5;
        }
      }
      else {
        bVar8 = DAT_14caf2708 != (longlong *)0x0;
        plVar4 = DAT_14caf2708;
        DAT_14caf2708 = plVar5;
        if (bVar8) goto LAB_147bdc6ba;
      }
    }
    plVar1 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    plVar4 = DAT_14caf2708;
    *param_1 = (longlong)DAT_14caf2700;
    param_1[1] = (longlong)plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_147bdc5e8;
  }
  else {
    if ((DAT_14caf2708 == (longlong *)0x0) || ((int)DAT_14caf2708[1] != iVar7)) goto LAB_147bdc58c;
    if (*(char *)((longlong)DAT_14caf2700 + 0x11) == '\x01') {
      *(undefined1 *)(DAT_14caf2700 + 2) = 1;
    }
    plVar1[3] = 0;
    *param_1 = (longlong)plVar1;
    param_1[1] = (longlong)plVar4;
  }
  LOCK();
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  UNLOCK();
LAB_147bdc5e8:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147bdc77a FUN_147bdc77a body=231 status=ok
// SIG undefined FUN_147bdc77a(void)

longlong * FUN_147bdc77a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a9ef280;
  plVar1 = plVar4 + 2;
  *(undefined4 *)(plVar4 + 2) = 8;
  plVar4[3] = param_2;
  *(undefined2 *)(plVar4 + 4) = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_147be3bac(&local_38,plVar1);
  plVar3 = local_30;
  *param_1 = (longlong)plVar1;
  param_1[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdc864 FUN_147bdc864 body=148 status=ok
// SIG undefined FUN_147bdc864(void)

void FUN_147bdc864(longlong param_1,undefined8 param_2,double param_3)

{
  double *pdVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  double local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = '\0';
  pdVar1 = *(double **)(param_1 + 0x40);
  if (pdVar1 != (double *)0x0) {
    if (param_3 < *pdVar1) {
      *pdVar1 = param_3;
    }
    if (pdVar1[1] <= param_3 && param_3 != pdVar1[1]) {
      pdVar1[1] = param_3;
    }
  }
  FUN_146efabc2(param_1,param_2,param_3,&local_28);
  if ((local_20 == '\x01') && (lVar2 = *(longlong *)(param_1 + 0x40), lVar2 != 0)) {
    *(double *)(lVar2 + 0x10) = local_28;
    *(double *)(lVar2 + 0x18) = local_28 + *(double *)(lVar2 + 0x18);
    *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdc8fa FUN_147bdc8fa body=103 status=ok
// SIG undefined FUN_147bdc8fa(void)

undefined8 * FUN_147bdc8fa(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 - 2U < 0x7fffffff) {
    *param_2 = 0;
    _Src = *(void **)(param_1 + 0xa0);
    *(int *)(param_2 + 1) = iVar1;
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  else {
    uVar2 = FUN_147bdcf90();
    FUN_140056680(param_2,uVar2);
  }
  return param_2;
}



// FUNCTION 147bdc962 FUN_147bdc962 body=321 status=ok
// SIG undefined FUN_147bdc962(void)

undefined8 FUN_147bdc962(longlong param_1,undefined8 param_2)

{
  int iVar1;
  size_t sVar2;
  wchar_t *_Str;
  undefined1 auStack_268 [40];
  undefined2 *local_240;
  undefined2 *local_238;
  ulonglong *local_230;
  char local_228;
  undefined2 local_220 [256];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_240 = local_220;
  local_228 = '\0';
  local_230 = &local_20;
  local_238 = local_240;
  if (*(int *)(param_1 + 0xb8) - 2U < 0x7fffffff) {
    _Str = *(wchar_t **)(param_1 + 0xb0);
  }
  else {
    _Str = (wchar_t *)FUN_147bdcf90(param_1);
  }
  if (_Str == (wchar_t *)0x0) {
    sVar2 = 0;
  }
  else {
    sVar2 = wcslen(_Str);
  }
  FUN_1449668a2(&local_240,_Str,sVar2);
  if (local_230 <= local_238 + 1) {
    FUN_140213274(&local_240,1);
  }
  *local_238 = 0x3a;
  iVar1 = *(int *)(param_1 + 0xc0);
  if (*(int *)(param_1 + 0xc0) == -1) {
    iVar1 = DAT_14c761620;
  }
  local_238 = local_238 + 1;
  FUN_140212e80(&local_240,&DAT_149e25cfc,iVar1);
  *local_238 = 0;
  FUN_140056680(param_2,local_240);
  if (local_228 == '\x01') {
    FUN_1400020a8(local_240);
  }
  if ((local_20 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147bdcaa4 FUN_147bdcaa4 body=234 status=ok
// SIG undefined FUN_147bdcaa4(void)

void FUN_147bdcaa4(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    local_161 = 0x18;
    puVar1 = (undefined1 *)*local_158 + 1;
    if ((undefined1 *)local_158[1] < puVar1) {
      (**(code **)(local_160 + 0x170))(&local_160,&local_161,1);
    }
    else {
      local_161 = *(undefined1 *)*local_158;
      *local_158 = (ulonglong)puVar1;
    }
    FUN_147be3a4a(&local_160,param_2,param_3);
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



// FUNCTION 147bdcb90 FUN_147bdcb90 body=180 status=ok
// SIG undefined FUN_147bdcb90(void)

void FUN_147bdcb90(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  
  if ((*(uint *)(param_1 + 0x30) & param_2) != 0) {
    uVar5 = 0x1f;
    if (param_2 != 0) {
      for (; param_2 >> uVar5 == 0; uVar5 = uVar5 - 1) {
      }
    }
    bVar2 = *(byte *)(param_1 + 0x38 + (ulonglong)uVar5);
    cVar3 = *(char *)(param_1 + 0x34 + (ulonglong)uVar5);
    if (cVar3 == '\x01') {
      lVar4 = *(longlong *)(param_1 + 0x50);
      *(undefined8 *)(lVar4 + (ulonglong)bVar2 * 0xb8) = 0;
      FUN_146efad46();
      FUN_146efab80(lVar4 + (ulonglong)bVar2 * 0xb8 + 0x30);
      return;
    }
    if (cVar3 == '\0') {
      *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)((uint)bVar2 * 0x30)) = 0;
      FUN_146efad46();
      return;
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (ulonglong)((uint)bVar2 * 0x50));
    *puVar1 = 0;
    FUN_146efad46(puVar1 + 5);
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined8 *)((longlong)puVar1 + 10) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x12) = 0;
    puVar1[4] = 0;
  }
  return;
}



// FUNCTION 147bdcc44 FUN_147bdcc44 body=439 status=ok
// SIG undefined FUN_147bdcc44(void)

void FUN_147bdcc44(longlong *param_1,double param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[5] = (longlong)(param_2 + 1.0);
  if ((*param_1 != 0) && (lVar2 = *(longlong *)(*param_1 + 0x58), lVar2 != 0)) {
    plVar3 = *(longlong **)(lVar2 + 0xf0);
    if ((DAT_14c950c29 == '\x01') && (plVar3 != (longlong *)0x0)) {
      FUN_1456cec3c(plVar3);
    }
    else if (plVar3 == (longlong *)0x0) goto LAB_147bdcdbb;
    (**(code **)(*plVar3 + 800))(plVar3,&local_40);
    lVar2 = local_40;
    plVar4 = (longlong *)param_1[2];
    if (plVar4 == (longlong *)0x0) {
LAB_147bdccfc:
      lVar8 = 0;
    }
    else {
      iVar6 = (int)plVar4[1];
      do {
        if (iVar6 == 0) goto LAB_147bdccfc;
        LOCK();
        iVar5 = (int)plVar4[1];
        bVar9 = iVar6 == iVar5;
        if (bVar9) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar9);
      lVar8 = param_1[1];
      LOCK();
      plVar7 = plVar4 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    plVar4 = local_38;
    if (lVar8 != lVar2) {
      param_1[1] = local_40;
      plVar7 = (longlong *)param_1[2];
      if (plVar7 != local_38) {
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + 1;
          UNLOCK();
          plVar7 = (longlong *)param_1[2];
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
        }
        param_1[2] = (longlong)plVar4;
      }
      (**(code **)(*plVar3 + 0x2c0))(plVar3,&local_50,0);
      if (param_1 + 3 == &local_50) {
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[3] != 0) {
          FUN_1400020a8();
        }
        param_1[3] = local_50;
        local_50 = 0;
        *(undefined4 *)(param_1 + 4) = local_48;
        *(undefined4 *)((longlong)param_1 + 0x24) = local_44;
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
  }
LAB_147bdcdbb:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bdcdfc FUN_147bdcdfc body=201 status=ok
// SIG undefined FUN_147bdcdfc(void)

void FUN_147bdcdfc(longlong *param_1,undefined4 param_2)

{
  byte bVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((*(byte *)(param_1 + 6) & 4) != 0) && (param_1[0x10] != 0)) && (*param_1 != 0)) &&
     ((lVar2 = *(longlong *)(*param_1 + 0x58), lVar2 != 0 && (*(longlong *)(lVar2 + 0xf0) != 0)))) {
    bVar1 = *(byte *)((longlong)param_1 + 0x3a);
    if (*(char *)((longlong)param_1 + 0x36) == '\x01') {
      piVar3 = (int *)((ulonglong)bVar1 * 0xb8 + param_1[10]);
    }
    else if (*(char *)((longlong)param_1 + 0x36) == '\0') {
      piVar3 = (int *)((ulonglong)((uint)bVar1 * 0x30) + param_1[8]);
    }
    else {
      piVar3 = (int *)((ulonglong)((uint)bVar1 * 0x50) + param_1[0xc]);
    }
    *piVar3 = *piVar3 + 1;
    lVar2 = param_1[0x10];
    FUN_147bdc8fa(param_1,local_40);
    FUN_147bdd01a(lVar2,param_2,local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdcec6 FUN_147bdcec6 body=201 status=ok
// SIG undefined FUN_147bdcec6(void)

void FUN_147bdcec6(longlong *param_1,undefined4 param_2)

{
  byte bVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((*(byte *)(param_1 + 6) & 8) != 0) && (param_1[0x12] != 0)) && (*param_1 != 0)) &&
     ((lVar2 = *(longlong *)(*param_1 + 0x58), lVar2 != 0 && (*(longlong *)(lVar2 + 0xf0) != 0)))) {
    bVar1 = *(byte *)((longlong)param_1 + 0x3b);
    if (*(char *)((longlong)param_1 + 0x37) == '\x01') {
      piVar3 = (int *)((ulonglong)bVar1 * 0xb8 + param_1[10]);
    }
    else if (*(char *)((longlong)param_1 + 0x37) == '\0') {
      piVar3 = (int *)((ulonglong)((uint)bVar1 * 0x30) + param_1[8]);
    }
    else {
      piVar3 = (int *)((ulonglong)((uint)bVar1 * 0x50) + param_1[0xc]);
    }
    *piVar3 = *piVar3 + 1;
    lVar2 = param_1[0x12];
    FUN_147bdc962(param_1,local_40);
    FUN_147bdd0f6(lVar2,param_2,local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdcf90 FUN_147bdcf90 body=137 status=ok
// SIG undefined FUN_147bdcf90(void)

undefined2 * FUN_147bdcf90(longlong param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0x7ffffffe < *(int *)(param_1 + 0x20) - 2U) {
    QueryPerformanceCounter(&local_20);
    FUN_147bdcc44(param_1,(double)local_20.QuadPart * DAT_14c83f420 + 16777216.0);
    if (*(int *)(param_1 + 0x20) + 0x7fffffffU < 0x80000001) {
      puVar1 = &DAT_149dfb77a;
      goto LAB_147bdcfb9;
    }
  }
  puVar1 = *(undefined2 **)(param_1 + 0x18);
LAB_147bdcfb9:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdd01a FUN_147bdd01a body=219 status=ok
// SIG undefined FUN_147bdd01a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bdd01a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined1 *)(param_1 + 0x11) = 1;
    *(undefined8 *)(param_1 + 0x18) = param_2;
    plVar6 = *(longlong **)(param_1 + 0x28);
    if (plVar6 == (longlong *)0x0) {
LAB_147bdd08b:
      uVar5 = 0;
      plVar6 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)plVar6[1];
      do {
        if (iVar4 == 0) goto LAB_147bdd08b;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar7);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
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
    local_58 = 0;
    local_48 = &PTR_LAB_14a9ef260;
    local_68 = FUN_1435a6e5a;
    local_40 = uVar5;
    local_38 = plVar6;
    FUN_147065308(param_3,(float)_DAT_14c761618);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bdd0f6 FUN_147bdd0f6 body=219 status=ok
// SIG undefined FUN_147bdd0f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bdd0f6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined1 *)(param_1 + 0x11) = 1;
    *(undefined8 *)(param_1 + 0x18) = param_2;
    plVar6 = *(longlong **)(param_1 + 0x28);
    if (plVar6 == (longlong *)0x0) {
LAB_147bdd167:
      uVar5 = 0;
      plVar6 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)plVar6[1];
      do {
        if (iVar4 == 0) goto LAB_147bdd167;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar7);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
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
    local_58 = 0;
    local_48 = &PTR_LAB_14a9ef2a0;
    local_68 = FUN_1435a6fcc;
    local_40 = uVar5;
    local_38 = plVar6;
    FUN_14706737a(param_3,(float)_DAT_14c76161c);
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bdd1d2 FUN_147bdd1d2 body=1014 status=ok
// SIG undefined FUN_147bdd1d2(void)

void FUN_147bdd1d2(longlong param_1,char param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  wchar_t *pwVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x58) == 0)) goto LAB_147bdd4aa;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xf0);
  if (lVar6 == param_1) {
    if ((param_2 != '\0') || (lVar6 = *(longlong *)(lVar6 + 0x1d70), lVar6 == 0))
    goto LAB_147bdd4aa;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    iVar2 = FUN_1403de9f2(param_3,&local_58,&DAT_149e06162,1);
    if ((iVar2 == 2) && (cVar1 = FUN_1405b43cc(local_58), cVar1 != '\0')) {
      if (*(int *)(local_58 + 1) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)*local_58;
      }
      uVar3 = _wtoi(pwVar4);
      if (uVar3 < 9 && (uVar3 & uVar3 - 1) == 0) {
        iVar2 = *(int *)(local_58 + 3);
        lVar8 = (longlong)iVar2;
        if (iVar2 + 0x7fffffffU < 0x80000020) {
          pvVar5 = (void *)local_58[2];
          if ((void *)((longlong)pvVar5 + lVar8 * 2 + -2) != pvVar5 && iVar2 != 0) {
            lVar7 = 0;
            do {
              if (*(short *)((longlong)pvVar5 + lVar7) != 0x2e &&
                  10 < (ushort)(*(short *)((longlong)pvVar5 + lVar7) - 0x30U)) goto LAB_147bdd56a;
              lVar7 = lVar7 + 2;
            } while (lVar8 * 2 + -2 != lVar7);
          }
          local_68 = (void *)0x0;
          if (iVar2 != 0) goto LAB_147bdd534;
          local_5c = 0;
          local_60 = iVar2;
        }
        else {
          pvVar5 = (void *)local_58[2];
LAB_147bdd534:
          local_68 = (void *)0x0;
          local_60 = iVar2;
          FUN_1446dd670(&local_68,iVar2,0);
          memcpy(local_68,pvVar5,lVar8 * 2);
        }
        FUN_1435a42a2(lVar6,uVar3,&local_68);
      }
    }
LAB_147bdd56a:
  }
  else {
    if (param_2 != '\x01') goto LAB_147bdd4aa;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    iVar2 = FUN_1403de9f2(param_3,&local_58,&DAT_149e06162,1);
    if ((iVar2 == 2) && (cVar1 = FUN_1405b43cc(local_58), cVar1 != '\0')) {
      if (*(int *)(local_58 + 1) == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)*local_58;
      }
      uVar3 = _wtoi(pwVar4);
      if (uVar3 < 9 && (uVar3 & uVar3 - 1) == 0) {
        iVar2 = *(int *)(local_58 + 3);
        lVar6 = (longlong)iVar2;
        if ((iVar2 + 0x7fffffffU < 0x80000020) &&
           (lVar8 = local_58[2], lVar8 + lVar6 * 2 + -2 != lVar8 && iVar2 != 0)) {
          lVar7 = 0;
          do {
            if (*(short *)(lVar8 + lVar7) != 0x2e &&
                10 < (ushort)(*(short *)(lVar8 + lVar7) - 0x30U)) goto LAB_147bdd48d;
            lVar7 = lVar7 + 2;
          } while (lVar6 * 2 + -2 != lVar7);
        }
        if (uVar3 == 8) {
          local_88 = (void *)0x0;
          pvVar5 = (void *)local_58[2];
          local_80 = iVar2;
          if (iVar2 == 0) {
            local_7c = 0;
          }
          else {
            FUN_1446dd670(&local_88,iVar2,0);
            memcpy(local_88,pvVar5,lVar6 * 2);
          }
          pvVar5 = local_88;
          if (*(int *)(param_1 + 0x5e8) < 0x20) {
            FUN_1412fabe8(param_1 + 0x5f0,&local_88);
            pvVar5 = local_88;
          }
        }
        else {
          if (uVar3 != 4) goto LAB_147bdd48d;
          local_78 = (void *)0x0;
          pvVar5 = (void *)local_58[2];
          local_70 = iVar2;
          if (iVar2 == 0) {
            local_6c = 0;
          }
          else {
            FUN_1446dd670(&local_78,iVar2,0);
            memcpy(local_78,pvVar5,lVar6 * 2);
          }
          pvVar5 = local_78;
          if (*(int *)(param_1 + 0x5e8) < 0x20) {
            FUN_1412fabe8(param_1 + 0x5e0,&local_78);
            pvVar5 = local_78;
          }
        }
        if (pvVar5 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
LAB_147bdd48d:
  }
  FUN_1447a1747(local_58,(undefined4)uStack_50);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_147bdd4aa:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bdd5ca FUN_147bdd5ca body=113 status=ok
// SIG undefined FUN_147bdd5ca(void)

void FUN_147bdd5ca(undefined4 *param_1,int *param_2)

{
  longlong lVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  if ((*(char *)(param_1 + 4) == '\0') && (lVar1 = *(longlong *)(param_1 + 2), lVar1 != 0)) {
    if (*param_2 == 0) {
      FUN_1435a3f32(lVar1,*param_1,*(double *)(param_1 + 6) + (double)(float)param_2[10]);
    }
    else {
      FUN_1435a3ff0(lVar1,*param_1);
    }
  }
  *(undefined1 *)(param_1 + 4) = 0;
  if (*(longlong *)(param_2 + 6) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 2) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bdd63c FUN_147bdd63c body=230 status=ok
// SIG undefined FUN_147bdd63c(void)

void FUN_147bdd63c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1435a4470(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdd726 FUN_147bdd726 body=42 status=ok
// SIG undefined FUN_147bdd726(void)

undefined8 FUN_147bdd726(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x5a5,
                L"Pure virtual not implemented (%s)",L"UNetDriver::IsAvailable");
  return 0;
}



// FUNCTION 147bdd750 FUN_147bdd750 body=42 status=ok
// SIG undefined FUN_147bdd750(void)

undefined1 FUN_147bdd750(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x5bd,
                L"Pure virtual not implemented (%s)",L"UNetDriver::InitConnect");
  return 1;
}



// FUNCTION 147bdd77a FUN_147bdd77a body=42 status=ok
// SIG undefined FUN_147bdd77a(void)

undefined1 FUN_147bdd77a(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x5c9,
                L"Pure virtual not implemented (%s)",L"UNetDriver::InitListen");
  return 1;
}



// FUNCTION 147bdd7a4 FUN_147bdd7a4 body=90 status=ok
// SIG undefined FUN_147bdd7a4(void)

void FUN_147bdd7a4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x668,
                L"Pure virtual not implemented (%s)",L"UNetDriver::LowLevelSend");
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
                    /* WARNING: Could not recover jumptable at 0x000147bdd7f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147bdd7fe FUN_147bdd7fe body=42 status=ok
// SIG undefined FUN_147bdd7fe(void)

undefined8 FUN_147bdd7fe(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x6ee,
                L"Pure virtual not implemented (%s)",L"UNetDriver::GetSocketSubsystem");
  return 0;
}



// FUNCTION 147bdd828 FUN_147bdd828 body=42 status=ok
// SIG undefined FUN_147bdd828(void)

undefined8 FUN_147bdd828(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/NetDriver.h",0x703,
                L"Pure virtual not implemented (%s)",L"UNetDriver::IsNetResourceValid");
  return 0;
}



// FUNCTION 147bdd862 FUN_147bdd862 body=45 status=ok
// SIG undefined FUN_147bdd862(void)

longlong FUN_147bdd862(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145918e54(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bdd936 FUN_147bdd936 body=59 status=ok
// SIG undefined FUN_147bdd936(void)

undefined8 FUN_147bdd936(longlong *param_1)

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



// FUNCTION 147bdda58 FUN_147bdda58 body=59 status=ok
// SIG undefined FUN_147bdda58(void)

undefined8 FUN_147bdda58(longlong *param_1)

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



// FUNCTION 147bddb74 FUN_147bddb74 body=59 status=ok
// SIG undefined FUN_147bddb74(void)

undefined8 FUN_147bddb74(longlong *param_1)

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



// FUNCTION 147bddbba FUN_147bddbba body=54 status=ok
// SIG undefined FUN_147bddbba(void)

void FUN_147bddbba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined4 *)(param_2 + 0x68) = 0;
    if (*(longlong *)(param_2 + 0x60) != 0) {
      FUN_1400020a8();
    }
    FUN_14472eaf0(param_2 + 0x20);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147bddc40 FUN_147bddc40 body=93 status=ok
// SIG undefined FUN_147bddc40(void)

longlong FUN_147bddc40(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_147bddc9e(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 147bddc9e FUN_147bddc9e body=146 status=ok
// SIG undefined FUN_147bddc9e(void)

longlong * FUN_147bddc9e(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 147bddd30 FUN_147bddd30 body=193 status=ok
// SIG undefined FUN_147bddd30(void)

void FUN_147bddd30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147bdddc7;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147bdddc7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147bdddf2 FUN_147bdddf2 body=142 status=ok
// SIG undefined FUN_147bdddf2(void)

void FUN_147bdddf2(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x128);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 300)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x48,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x48)) {
        uVar4 = uVar3 / 0x48 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 300) = (int)uVar4;
    FUN_146f2a148(param_1,param_2,uVar4,0x48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147bdde9a FUN_147bdde9a body=47 status=ok
// SIG undefined FUN_147bdde9a(void)

void FUN_147bdde9a(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bddee0 FUN_147bddee0 body=67 status=ok
// SIG undefined FUN_147bddee0(void)

undefined1 FUN_147bddee0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147bddf4c FUN_147bddf4c body=59 status=ok
// SIG undefined FUN_147bddf4c(void)

undefined8 FUN_147bddf4c(longlong *param_1)

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



// FUNCTION 147bddfea FUN_147bddfea body=51 status=ok
// SIG undefined FUN_147bddfea(void)

void FUN_147bddfea(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147bde052 FUN_147bde052 body=54 status=ok
// SIG undefined FUN_147bde052(void)

undefined1 FUN_147bde052(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447a122a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147bde0b0 FUN_147bde0b0 body=59 status=ok
// SIG undefined FUN_147bde0b0(void)

undefined8 FUN_147bde0b0(longlong *param_1)

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



// FUNCTION 147bde0f6 FUN_147bde0f6 body=37 status=ok
// SIG undefined FUN_147bde0f6(void)

void FUN_147bde0f6(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147bde184 FUN_147bde184 body=44 status=ok
// SIG undefined FUN_147bde184(void)

void FUN_147bde184(undefined8 param_1,longlong *param_2)

{
  FUN_145b22c1e(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bde1be FUN_147bde1be body=19 status=ok
// SIG undefined FUN_147bde1be(void)

undefined1 FUN_147bde1be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_147bd7f4c(param_3);
  return 1;
}



// FUNCTION 147bde1d6 FUN_147bde1d6 body=76 status=ok
// SIG undefined FUN_147bde1d6(void)

undefined1 FUN_147bde1d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147bde2e6(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147bde24a FUN_147bde24a body=59 status=ok
// SIG undefined FUN_147bde24a(void)

undefined8 FUN_147bde24a(longlong *param_1)

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



// FUNCTION 147bde2e6 FUN_147bde2e6 body=95 status=ok
// SIG undefined FUN_147bde2e6(void)

undefined8 * FUN_147bde2e6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145b22c1e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147bde346(param_1,iVar1);
      FUN_147bde3a8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147bde346 FUN_147bde346 body=98 status=ok
// SIG undefined FUN_147bde346(void)

void FUN_147bde346(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147bde3a8 FUN_147bde3a8 body=115 status=ok
// SIG undefined FUN_147bde3a8(void)

void FUN_147bde3a8(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1447a127e(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147bde41c FUN_147bde41c body=50 status=ok
// SIG undefined FUN_147bde41c(void)

void FUN_147bde41c(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    FUN_145b22c1e(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147bde44e FUN_147bde44e body=73 status=ok
// SIG undefined FUN_147bde44e(void)

void FUN_147bde44e(uint *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if ((ulonglong)(longlong)(int)param_1[6] <= (ulonglong)(uVar3 - param_1[1])) {
    FUN_145dc9c46(param_1,(ulonglong)(uVar3 - param_1[1]) + 1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  uVar2 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 4) + (ulonglong)(uVar3 & param_1[2]) * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  return;
}



// FUNCTION 147bde498 FUN_147bde498 body=95 status=ok
// SIG undefined FUN_147bde498(void)

void FUN_147bde498(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147bde4f8 FUN_147bde4f8 body=57 status=ok
// SIG undefined FUN_147bde4f8(void)

undefined8 * FUN_147bde4f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a9ee910;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bde538 FUN_147bde538 body=32 status=ok
// SIG undefined FUN_147bde538(void)

undefined8 FUN_147bde538(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"NotImplemented");
  return param_2;
}



// FUNCTION 147bde558 FUN_147bde558 body=57 status=ok
// SIG undefined FUN_147bde558(void)

undefined8 * FUN_147bde558(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a9ee910;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bde596 FUN_147bde596 body=146 status=ok
// SIG undefined FUN_147bde596(void)

undefined8 * FUN_147bde596(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 auStack_58 [32];
  uint local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_1;
  local_38 = uVar1 & 0xfffff;
  FUN_140002266(&local_28,L"NetToken (Auth:%u TypeId=%u Index=%u)",uVar1 >> 0x17 & 1,
                uVar1 >> 0x14 & 7);
  if ((undefined8 *)&local_28 == param_2) {
    if (CONCAT44(uStack_24,local_28) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)param_2 = local_28;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_24;
    *(undefined4 *)(param_2 + 1) = uStack_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bde62a FUN_147bde62a body=29 status=ok
// SIG undefined FUN_147bde62a(void)

undefined8 FUN_147bde62a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bde64c FUN_147bde64c body=29 status=ok
// SIG undefined FUN_147bde64c(void)

undefined8 FUN_147bde64c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bde66e FUN_147bde66e body=59 status=ok
// SIG undefined FUN_147bde66e(void)

int FUN_147bde66e(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bde752(param_1,iVar1);
  }
  FUN_147bde71f((longlong)iVar1 * 0x30 + *param_1);
  return iVar1;
}



// FUNCTION 147bde6aa FUN_147bde6aa body=58 status=ok
// SIG undefined FUN_147bde6aa(void)

int FUN_147bde6aa(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bde7ec(param_1,iVar1);
  }
  thunk_FUN_147bdc0e2((longlong)iVar1 * 0xb8 + *param_1);
  return iVar1;
}



// FUNCTION 147bde6e4 FUN_147bde6e4 body=59 status=ok
// SIG undefined FUN_147bde6e4(void)

int FUN_147bde6e4(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bde8d8(param_1,iVar1);
  }
  FUN_147bde882((longlong)iVar1 * 0x50 + *param_1);
  return iVar1;
}



// FUNCTION 147bde71f FUN_147bde71f body=50 status=ok
// SIG undefined FUN_147bde71f(void)

void FUN_147bde71f(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x7fefffffffffffff;
  param_1[2] = 0x10000000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 147bde752 FUN_147bde752 body=147 status=ok
// SIG undefined FUN_147bde752(void)

void FUN_147bde752(longlong param_1,int param_2)

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



// FUNCTION 147bde7e6 thunk_FUN_147bdc0e2 body=5 status=ok
// SIG undefined thunk_FUN_147bdc0e2(void)

undefined8 * thunk_FUN_147bdc0e2(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 *puStack_28;
  undefined4 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0x7fefffffffffffff;
  param_1[2] = 0x10000000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  puStack_28 = param_1 + 0xf;
  uStack_20 = 4;
  FUN_146efab44(param_1 + 6,&puStack_28,0x3ff0000000000000,0);
  lVar1 = 0x80;
  do {
    *(undefined8 *)((longlong)param_1 + lVar1 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar1) = 0;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0xc0);
  param_1[0xe] = param_1 + 1;
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bde7ec FUN_147bde7ec body=149 status=ok
// SIG undefined FUN_147bde7ec(void)

void FUN_147bde7ec(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb8)) {
      uVar5 = uVar4 / 0xb8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bde882 FUN_147bde882 body=86 status=ok
// SIG undefined FUN_147bde882(void)

void FUN_147bde882(undefined8 *param_1)

{
  ushort *puVar1;
  byte *pbVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  lVar3 = 0;
  do {
    puVar1 = (ushort *)((longlong)param_1 + lVar3 + 10);
    *puVar1 = *puVar1 & 0xe000;
    pbVar2 = (byte *)((longlong)param_1 + lVar3 + 0xc);
    *pbVar2 = *pbVar2 & 0xf8;
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x10);
  param_1[4] = 0;
  param_1[5] = 0x7fefffffffffffff;
  param_1[6] = 0x10000000000000;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}



// FUNCTION 147bde8d8 FUN_147bde8d8 body=147 status=ok
// SIG undefined FUN_147bde8d8(void)

void FUN_147bde8d8(longlong param_1,int param_2)

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



// FUNCTION 147bde96c FUN_147bde96c body=132 status=ok
// SIG undefined FUN_147bde96c(void)

void FUN_147bde96c(longlong param_1,int param_2)

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



// FUNCTION 147bde9f2 FUN_147bde9f2 body=74 status=ok
// SIG undefined FUN_147bde9f2(void)

void FUN_147bde9f2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[3];
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bdea3c FUN_147bdea3c body=31 status=ok
// SIG undefined FUN_147bdea3c(void)

undefined8 FUN_147bdea3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bdea76 FUN_147bdea76 body=101 status=ok
// SIG undefined FUN_147bdea76(void)

void FUN_147bdea76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eea40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147bdeadc FUN_147bdeadc body=101 status=ok
// SIG undefined FUN_147bdeadc(void)

void FUN_147bdeadc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eea40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147bdeb42 FUN_147bdeb42 body=134 status=ok
// SIG undefined FUN_147bdeb42(void)

void FUN_147bdeb42(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca6c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9eea40;
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
                    /* WARNING: Could not recover jumptable at 0x000147bdebb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147bdebc8 FUN_147bdebc8 body=52 status=ok
// SIG undefined FUN_147bdebc8(void)

void FUN_147bdebc8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147bdebf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147bdebfc FUN_147bdebfc body=31 status=ok
// SIG undefined FUN_147bdebfc(void)

undefined8 FUN_147bdebfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bdec36 FUN_147bdec36 body=101 status=ok
// SIG undefined FUN_147bdec36(void)

void FUN_147bdec36(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a9eeab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147bdec9c FUN_147bdec9c body=101 status=ok
// SIG undefined FUN_147bdec9c(void)

void FUN_147bdec9c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a9eeab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147bded02 FUN_147bded02 body=134 status=ok
// SIG undefined FUN_147bded02(void)

void FUN_147bded02(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9eeab0;
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
                    /* WARNING: Could not recover jumptable at 0x000147bded79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147bded88 FUN_147bded88 body=39 status=ok
// SIG undefined FUN_147bded88(void)

void FUN_147bded88(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147bdedab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147bdedb0 FUN_147bdedb0 body=31 status=ok
// SIG undefined FUN_147bdedb0(void)

undefined8 FUN_147bdedb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bdedea FUN_147bdedea body=29 status=ok
// SIG undefined FUN_147bdedea(void)

bool FUN_147bdedea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147bdee08 FUN_147bdee08 body=26 status=ok
// SIG undefined FUN_147bdee08(void)

bool FUN_147bdee08(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147bdee22 FUN_147bdee22 body=101 status=ok
// SIG undefined FUN_147bdee22(void)

void FUN_147bdee22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9eeb90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eeb20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147bdee88 FUN_147bdee88 body=101 status=ok
// SIG undefined FUN_147bdee88(void)

void FUN_147bdee88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9eeb90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eeb20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147bdeeee FUN_147bdeeee body=134 status=ok
// SIG undefined FUN_147bdeeee(void)

void FUN_147bdeeee(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a9eeb90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9eeb20;
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
                    /* WARNING: Could not recover jumptable at 0x000147bdef65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147bdef74 FUN_147bdef74 body=44 status=ok
// SIG undefined FUN_147bdef74(void)

void FUN_147bdef74(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147bdef9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147bdefa0 FUN_147bdefa0 body=144 status=ok
// SIG undefined FUN_147bdefa0(void)

bool FUN_147bdefa0(longlong param_1,undefined8 param_2)

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
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdf034 FUN_147bdf034 body=322 status=ok
// SIG undefined FUN_147bdf034(void)

void FUN_147bdf034(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x7c + (longlong)iVar4 * 0x80) * 4) =
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



// FUNCTION 147bdf178 FUN_147bdf178 body=316 status=ok
// SIG undefined FUN_147bdf178(void)

void FUN_147bdf178(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
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
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x80;
      *(undefined4 *)(lVar1 + 0x70 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x68 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_14472eaf0(lVar1 + lVar2 + 0x28);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14095c99c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdf2b6 FUN_147bdf2b6 body=114 status=ok
// SIG undefined FUN_147bdf2b6(void)

void FUN_147bdf2b6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80 + 4) = uVar4;
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



// FUNCTION 147bdf328 FUN_147bdf328 body=192 status=ok
// SIG undefined FUN_147bdf328(void)

void FUN_147bdf328(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (void *)0x0;
  local_48 = (int)param_4[1];
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_4;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  FUN_147bdf3ea(param_1 + 0xef8,param_2,param_3,&local_50);
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdf3ea FUN_147bdf3ea body=185 status=ok
// SIG undefined FUN_147bdf3ea(void)

void FUN_147bdf3ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (void *)0x0;
  local_48 = (int)param_4[1];
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_4;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  FUN_147bdf4a4(param_1,param_2,param_3,&local_50);
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdf4a4 FUN_147bdf4a4 body=330 status=ok
// SIG undefined FUN_147bdf4a4(void)

void FUN_147bdf4a4(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [44];
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  local_68 = param_2;
  local_60 = param_3;
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    uVar6 = 0;
    do {
      local_6c = (uint)uVar6;
      lVar9 = uVar5 * 0x10 + -8;
      uVar7 = uVar5;
      while ((*(int *)(*param_1 + lVar9) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar9), plVar2 != (longlong *)0x0))) {
        local_58 = (void *)0x0;
        local_50 = (int)param_4[1];
        lVar8 = (longlong)local_50;
        _Src = (void *)*param_4;
        if (lVar8 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,_Src,lVar8 * 2);
        }
        uVar6 = local_68;
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,local_68,local_60,&local_58);
        if (cVar4 == '\0') break;
        lVar9 = lVar9 + -0x10;
        bVar3 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if ((local_6c & 1) != 0) goto LAB_147bdf5ab;
          goto LAB_147bdf5ba;
        }
      }
      uVar5 = uVar7 - 1;
      uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    } while (1 < uVar7);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147bdf5ab:
    FUN_14474d06a(param_1,0);
  }
LAB_147bdf5ba:
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdf5f0 FUN_147bdf5f0 body=114 status=ok
// SIG undefined FUN_147bdf5f0(void)

void FUN_147bdf5f0(longlong *param_1,int param_2)

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



// FUNCTION 147bdf662 FUN_147bdf662 body=31 status=ok
// SIG undefined FUN_147bdf662(void)

undefined8 FUN_147bdf662(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bdf69c FUN_147bdf69c body=29 status=ok
// SIG undefined FUN_147bdf69c(void)

bool FUN_147bdf69c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147bdf6ba FUN_147bdf6ba body=26 status=ok
// SIG undefined FUN_147bdf6ba(void)

bool FUN_147bdf6ba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147bdf6d4 FUN_147bdf6d4 body=101 status=ok
// SIG undefined FUN_147bdf6d4(void)

void FUN_147bdf6d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eec70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147bdf73a FUN_147bdf73a body=101 status=ok
// SIG undefined FUN_147bdf73a(void)

void FUN_147bdf73a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eec70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147bdf7a0 FUN_147bdf7a0 body=134 status=ok
// SIG undefined FUN_147bdf7a0(void)

void FUN_147bdf7a0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9eec70;
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
                    /* WARNING: Could not recover jumptable at 0x000147bdf817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147bdf826 FUN_147bdf826 body=52 status=ok
// SIG undefined FUN_147bdf826(void)

void FUN_147bdf826(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147bdf857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 147bdf85a FUN_147bdf85a body=322 status=ok
// SIG undefined FUN_147bdf85a(void)

void FUN_147bdf85a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 147bdf99e FUN_147bdf99e body=204 status=ok
// SIG undefined FUN_147bdf99e(void)

undefined8 FUN_147bdf99e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  
  uVar5 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (**(code **)(*(longlong *)*param_2 + 0x90))();
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
    lVar7 = (longlong)*(int *)((longlong)plVar9 + uVar6 * 4);
    if (lVar7 != -1) {
      lVar8 = *param_1;
      lVar7 = lVar7 * 0x20;
      plVar1 = *(longlong **)(lVar8 + lVar7);
      cVar3 = (**(code **)(*plVar1 + 0x88))(plVar1,*param_2);
      if (cVar3 == '\0') {
        lVar7 = lVar8 + lVar7;
        do {
          lVar8 = lVar7;
          lVar7 = (longlong)*(int *)(lVar8 + 0x18);
          if (lVar7 == -1) {
            return 0;
          }
          lVar2 = *param_1;
          lVar7 = lVar7 * 0x20;
          plVar9 = *(longlong **)(lVar2 + lVar7);
          cVar3 = (**(code **)(*plVar9 + 0x88))(plVar9,*param_2);
          lVar7 = lVar2 + lVar7;
        } while (cVar3 == '\0');
        puVar10 = (undefined4 *)(lVar8 + 0x18);
      }
      else {
        puVar10 = (undefined4 *)((longlong)plVar9 + uVar6 * 4);
      }
      FUN_147bdfa6a(param_1,*puVar10);
      uVar5 = 1;
    }
  }
  return uVar5;
}



// FUNCTION 147bdfa6a FUN_147bdfa6a body=96 status=ok
// SIG undefined FUN_147bdfa6a(void)

void FUN_147bdfa6a(longlong *param_1,int param_2)

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
  FUN_147bdfaca(param_1,param_2,1);
  return;
}



// FUNCTION 147bdfaca FUN_147bdfaca body=117 status=ok
// SIG undefined FUN_147bdfaca(void)

void FUN_147bdfaca(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 8);
    iVar4 = param_3;
    do {
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_146162790(param_1,param_2,param_3);
  return;
}



// FUNCTION 147bdfb40 FUN_147bdfb40 body=63 status=ok
// SIG undefined FUN_147bdfb40(void)

void FUN_147bdfb40(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bdfb80(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147bdfb80 FUN_147bdfb80 body=117 status=ok
// SIG undefined FUN_147bdfb80(void)

ulonglong FUN_147bdfb80(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 147bdfbf6 FUN_147bdfbf6 body=41 status=ok
// SIG undefined FUN_147bdfbf6(void)

void FUN_147bdfbf6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_147bdfc3e(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 147bdfc20 FUN_147bdfc20 body=29 status=ok
// SIG undefined FUN_147bdfc20(void)

undefined8 FUN_147bdfc20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bdfc3e FUN_147bdfc3e body=213 status=ok
// SIG undefined FUN_147bdfc3e(void)

void FUN_147bdfc3e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    plVar3 = (longlong *)(param_1 + 0x130);
    if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x120);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ec0(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_147bdfd14(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000147bdfd07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147bdfd14 FUN_147bdfd14 body=52 status=ok
// SIG undefined FUN_147bdfd14(void)

void FUN_147bdfd14(longlong *param_1)

{
  FUN_147bdfd48();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bdfd48 FUN_147bdfd48 body=343 status=ok
// SIG undefined FUN_147bdfd48(void)

void FUN_147bdfd48(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
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
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bdfea0 FUN_147bdfea0 body=132 status=ok
// SIG undefined FUN_147bdfea0(void)

void FUN_147bdfea0(longlong param_1,int param_2)

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



// FUNCTION 147bdff26 FUN_147bdff26 body=78 status=ok
// SIG undefined FUN_147bdff26(void)

void FUN_147bdff26(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_147bdff74(param_1,param_2);
  return;
}



// FUNCTION 147bdff74 FUN_147bdff74 body=114 status=ok
// SIG undefined FUN_147bdff74(void)

void FUN_147bdff74(longlong *param_1,int param_2)

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



// FUNCTION 147bdffe6 FUN_147bdffe6 body=132 status=ok
// SIG undefined FUN_147bdffe6(void)

void FUN_147bdffe6(longlong param_1,int param_2)

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



// FUNCTION 147be006c FUN_147be006c body=48 status=ok
// SIG undefined FUN_147be006c(void)

void FUN_147be006c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 147be009c FUN_147be009c body=312 status=ok
// SIG undefined FUN_147be009c(void)

undefined4 * FUN_147be009c(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147be01d6(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147be02bc(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147be03aa(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be01d6 FUN_147be01d6 body=229 status=ok
// SIG undefined FUN_147be01d6(void)

int * FUN_147be01d6(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 147be02bc FUN_147be02bc body=124 status=ok
// SIG undefined FUN_147be02bc(void)

undefined8 FUN_147be02bc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_147be0338(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147be0338 FUN_147be0338 body=114 status=ok
// SIG undefined FUN_147be0338(void)

void FUN_147be0338(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147be03aa FUN_147be03aa body=477 status=ok
// SIG undefined FUN_147be03aa(void)

void FUN_147be03aa(longlong *param_1)

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



// FUNCTION 147be0588 FUN_147be0588 body=62 status=ok
// SIG undefined FUN_147be0588(void)

void FUN_147be0588(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147be05c6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147be05c6 FUN_147be05c6 body=93 status=ok
// SIG undefined FUN_147be05c6(void)

ulonglong FUN_147be05c6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147be0624 FUN_147be0624 body=118 status=ok
// SIG undefined FUN_147be0624(void)

void FUN_147be0624(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x18);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar5) * 0x18);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 147be069a FUN_147be069a body=379 status=ok
// SIG undefined FUN_147be069a(void)

void FUN_147be069a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar1 = (int)param_1[1];
  lVar9 = (longlong)iVar1;
  if (lVar9 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    iVar8 = 0;
    iVar10 = 0;
    bVar5 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar10;
      iVar11 = iVar10;
      lVar6 = lVar7;
      iVar4 = iVar10 + 1;
      if (iVar10 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar12 = iVar4;
        if (lVar9 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar11 + 1;
        iVar12 = iVar11;
      } while (bVar5 == (plVar2[lVar6] == lVar3));
      if (bVar5 == false) {
        if (iVar8 != iVar10) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar12 - iVar10) << 3);
        }
        iVar8 = iVar8 + (iVar12 - iVar10);
      }
      iVar10 = iVar12;
      bVar5 = (bool)(bVar5 ^ 1);
    } while (lVar6 < lVar9);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 147be0816 FUN_147be0816 body=29 status=ok
// SIG undefined FUN_147be0816(void)

undefined8 FUN_147be0816(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147be084e FUN_147be084e body=29 status=ok
// SIG undefined FUN_147be084e(void)

bool FUN_147be084e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147be086c FUN_147be086c body=26 status=ok
// SIG undefined FUN_147be086c(void)

bool FUN_147be086c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147be0886 FUN_147be0886 body=24 status=ok
// SIG undefined FUN_147be0886(void)

bool FUN_147be0886(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147be08aa FUN_147be08aa body=101 status=ok
// SIG undefined FUN_147be08aa(void)

void FUN_147be08aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9eed90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eed20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147be0910 FUN_147be0910 body=101 status=ok
// SIG undefined FUN_147be0910(void)

void FUN_147be0910(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9eed90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9eed20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147be0976 FUN_147be0976 body=134 status=ok
// SIG undefined FUN_147be0976(void)

void FUN_147be0976(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a9eed90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9eed20;
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
                    /* WARNING: Could not recover jumptable at 0x000147be09ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147be09fc FUN_147be09fc body=62 status=ok
// SIG undefined FUN_147be09fc(void)

void FUN_147be09fc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147be0a37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147be0a3a FUN_147be0a3a body=178 status=ok
// SIG undefined FUN_147be0a3a(void)

bool FUN_147be0a3a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_48 = param_5;
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be0af0 FUN_147be0af0 body=110 status=ok
// SIG undefined FUN_147be0af0(void)

void FUN_147be0af0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_147be0b60(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147be0b60 FUN_147be0b60 body=132 status=ok
// SIG undefined FUN_147be0b60(void)

void FUN_147be0b60(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 147be0be4 FUN_147be0be4 body=94 status=ok
// SIG undefined FUN_147be0be4(void)

void FUN_147be0be4(void *param_1)

{
  if (*(int *)((longlong)param_1 + 300) != 0) {
    *(undefined4 *)((longlong)param_1 + 300) = 0;
    if (*(void **)((longlong)param_1 + 0x120) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x120),
              (longlong)*(int *)((longlong)param_1 + 0x128) * 0x48);
      FUN_1446efa72((longlong)param_1 + 0x120,0,0,0x48);
      return;
    }
  }
  return;
}



// FUNCTION 147be0c42 FUN_147be0c42 body=75 status=ok
// SIG undefined FUN_147be0c42(void)

void FUN_147be0c42(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x20),
              (longlong)*(int *)((longlong)param_1 + 0x28) << 3);
      FUN_1446efa72((longlong)param_1 + 0x20,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 147be0c8e FUN_147be0c8e body=131 status=ok
// SIG undefined FUN_147be0c8e(void)

void FUN_147be0c8e(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_144a78877(*param_2,param_2[1]);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x60;
        if ((*(int *)(lVar1 + lVar4) == *param_2) && (*(int *)(lVar1 + 4 + lVar4) == param_2[1])) {
          FUN_147be0d12(param_1);
          return;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 0x58);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147be0d12 FUN_147be0d12 body=95 status=ok
// SIG undefined FUN_147be0d12(void)

void FUN_147be0d12(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_147be0d72();
  return;
}



// FUNCTION 147be0d72 FUN_147be0d72 body=82 status=ok
// SIG undefined FUN_147be0d72(void)

void FUN_147be0d72(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_145919ca2(lVar1 + lVar2 + 8);
  FUN_147be0dc4(param_1,param_2);
  return;
}



// FUNCTION 147be0dc4 FUN_147be0dc4 body=122 status=ok
// SIG undefined FUN_147be0dc4(void)

void FUN_147be0dc4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 147be0e3e FUN_147be0e3e body=114 status=ok
// SIG undefined FUN_147be0e3e(void)

void FUN_147be0e3e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 147be0eb0 FUN_147be0eb0 body=136 status=ok
// SIG undefined FUN_147be0eb0(void)

void FUN_147be0eb0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == param_2) {
          FUN_147be0f38(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x60 + *param_1 + 0x58);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147be0f38 FUN_147be0f38 body=95 status=ok
// SIG undefined FUN_147be0f38(void)

void FUN_147be0f38(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_147be0f98();
  return;
}



// FUNCTION 147be0f98 FUN_147be0f98 body=82 status=ok
// SIG undefined FUN_147be0f98(void)

void FUN_147be0f98(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_141355aac(lVar1 + lVar2 + 8);
  FUN_147be0fea(param_1,param_2);
  return;
}



// FUNCTION 147be0fea FUN_147be0fea body=122 status=ok
// SIG undefined FUN_147be0fea(void)

void FUN_147be0fea(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 147be1064 FUN_147be1064 body=124 status=ok
// SIG undefined FUN_147be1064(void)

longlong FUN_147be1064(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147be10e2();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_147be1140(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x60 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 147be10e2 FUN_147be10e2 body=93 status=ok
// SIG undefined FUN_147be10e2(void)

longlong FUN_147be10e2(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x60;
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147be1140 FUN_147be1140 body=272 status=ok
// SIG undefined FUN_147be1140(void)

undefined4 * FUN_147be1140(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147be1252(param_1,local_48);
  FUN_147be1400(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_147be1340(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147be16bc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be1252 FUN_147be1252 body=238 status=ok
// SIG undefined FUN_147be1252(void)

int * FUN_147be1252(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 147be1340 FUN_147be1340 body=192 status=ok
// SIG undefined FUN_147be1340(void)

undefined8 FUN_147be1340(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar3 * 0x60;
        _Dst = (void *)(lVar1 + lVar4);
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_145919ca2((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_147be0dc4(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147be1400 FUN_147be1400 body=149 status=ok
// SIG undefined FUN_147be1400(void)

undefined8 * FUN_147be1400(undefined8 *param_1,undefined8 *param_2)

{
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
  *param_2 = *(undefined8 *)*param_1;
  FUN_147be1496(param_2 + 1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_145919ca2(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be1496 FUN_147be1496 body=123 status=ok
// SIG undefined FUN_147be1496(void)

undefined8 * FUN_147be1496(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147be1512();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 147be1512 FUN_147be1512 body=425 status=ok
// SIG undefined FUN_147be1512(void)

longlong * FUN_147be1512(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70 = local_50;
    uVar5 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, uStack_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar6 * 0x60;
        *(undefined4 *)(lVar2 + 0x50 + lVar8) = 0;
        if (*(longlong *)(lVar2 + 0x48 + lVar8) != 0) {
          FUN_1400020a8();
        }
        FUN_141355aac(lVar2 + lVar8 + 8);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_88 != param_1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || local_70._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be16bc FUN_147be16bc body=450 status=ok
// SIG undefined FUN_147be16bc(void)

void FUN_147be16bc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
        lVar10 = (longlong)iVar5 * 0x60;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10),*(undefined4 *)(lVar3 + 4 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x5c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 147be1880 FUN_147be1880 body=188 status=ok
// SIG undefined FUN_147be1880(void)

longlong FUN_147be1880(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_147be191f;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147be193e(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_147be191f:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147be193e FUN_147be193e body=272 status=ok
// SIG undefined FUN_147be193e(void)

undefined4 * FUN_147be193e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147be1a50(param_1,local_48);
  FUN_147be1bf6(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_147be1b3e(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147be1eb4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be1a50 FUN_147be1a50 body=238 status=ok
// SIG undefined FUN_147be1a50(void)

int * FUN_147be1a50(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 147be1b3e FUN_147be1b3e body=184 status=ok
// SIG undefined FUN_147be1b3e(void)

undefined8 FUN_147be1b3e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_141355aac((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_147be0fea(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147be1bf6 FUN_147be1bf6 body=156 status=ok
// SIG undefined FUN_147be1bf6(void)

undefined8 * FUN_147be1bf6(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_147be1c94(param_2 + 1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_141355aac(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be1c94 FUN_147be1c94 body=123 status=ok
// SIG undefined FUN_147be1c94(void)

undefined8 * FUN_147be1c94(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147be1d10();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 147be1d10 FUN_147be1d10 body=419 status=ok
// SIG undefined FUN_147be1d10(void)

longlong * FUN_147be1d10(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar10 = (int)param_1[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    uVar8 = local_68;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar9 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar10) || (local_68 = uVar8, uStack_50 != plVar1)) {
      do {
        local_68 = uVar8;
        plVar4 = *(longlong **)(*local_80 + 8 + (longlong)iVar9 * 0x18);
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar8 = local_68;
      } while (local_80 != param_1 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar10));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar7 = param_2[3];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be1eb4 FUN_147be1eb4 body=477 status=ok
// SIG undefined FUN_147be1eb4(void)

void FUN_147be1eb4(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 147be2092 FUN_147be2092 body=411 status=ok
// SIG undefined FUN_147be2092(void)

void FUN_147be2092(longlong *param_1,uint param_2)

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
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
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
        puVar5 = puVar5 + -6;
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



// FUNCTION 147be222e FUN_147be222e body=62 status=ok
// SIG undefined FUN_147be222e(void)

void FUN_147be222e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147be226c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 147be226c FUN_147be226c body=112 status=ok
// SIG undefined FUN_147be226c(void)

ulonglong FUN_147be226c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147be22a6;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      param_2 = param_2 / 0xc;
    }
  }
LAB_147be22a6:
  return param_2 & 0xffffffff;
}



// FUNCTION 147be22dc FUN_147be22dc body=19 status=ok
// SIG undefined FUN_147be22dc(void)

void FUN_147be22dc(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 147be22f0 FUN_147be22f0 body=132 status=ok
// SIG undefined FUN_147be22f0(void)

void FUN_147be22f0(longlong param_1,int param_2)

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



// FUNCTION 147be2376 FUN_147be2376 body=89 status=ok
// SIG undefined FUN_147be2376(void)

void FUN_147be2376(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_145b22c1e(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147be23d0 FUN_147be23d0 body=62 status=ok
// SIG undefined FUN_147be23d0(void)

void FUN_147be23d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147be240e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147be240e FUN_147be240e body=93 status=ok
// SIG undefined FUN_147be240e(void)

ulonglong FUN_147be240e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147be246c FUN_147be246c body=128 status=ok
// SIG undefined FUN_147be246c(void)

undefined4 * FUN_147be246c(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = 5;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_20 = param_2;
  FUN_140244552(param_1 + 2,&local_20,&local_28);
  FUN_147be24ee(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be24ee FUN_147be24ee body=440 status=ok
// SIG undefined FUN_147be24ee(void)

void FUN_147be24ee(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar13 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar12 = (longlong)(int)param_1[8] + 1;
    do {
      lVar9 = lVar13;
      puVar4 = param_1 + 0xe;
      if (lVar12 < lVar13) {
        lVar9 = 0;
        puVar4 = param_1 + 4;
      }
      lVar9 = *(longlong *)(*(longlong *)puVar4 + lVar9 * -8 + lVar12 * 8);
      param_1[10] = param_1[10] + 1;
      if (((lVar9 != 0) && (lVar7 = FUN_144a79cc8(lVar9), lVar7 != 0)) &&
         ((uVar6 = *param_1, (uVar6 & 1) == 0 || ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)))) {
        if ((uVar6 & 2) != 0) {
          cVar5 = FUN_144affb44(lVar9);
          if (cVar5 == '\0') goto LAB_147be2592;
          uVar6 = *param_1;
        }
        if ((uVar6 & 4) == 0) {
          lVar10 = *(longlong *)(lVar7 + 0xc0);
        }
        else {
          if (((*(byte *)(lVar7 + 0x240) & 0x20) == 0) ||
             (bVar8 = 1, (*(byte *)(lVar7 + 0x242) & 8) != 0)) {
            bVar8 = 1;
            if ((*(byte *)(lVar7 + 0x241) & 0x20) == 0) {
              bVar8 = (*(byte *)(lVar7 + 0x241) & 0x40) >> 6;
            }
          }
          lVar10 = *(longlong *)(lVar7 + 0xc0);
          if (lVar10 == 0) {
LAB_147be2675:
            pcVar11 = (char *)0x0;
          }
          else {
            iVar1 = *(int *)(lVar10 + 0x1b0);
            if (((longlong)iVar1 < 0) || (*(int *)(lVar10 + 0x1a8) <= iVar1)) goto LAB_147be2675;
            pcVar11 = (char *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar10 + 0x1a0));
          }
          pcVar3 = *(char **)(lVar7 + 0x2e8);
          if (pcVar3 == (char *)0x0) {
            bVar14 = true;
          }
          else {
            bVar14 = *pcVar3 == '\x02';
          }
          if ((bVar8 & ((pcVar11 == (char *)0x0 || pcVar3 == pcVar11) | bVar14)) != 1)
          goto LAB_147be2592;
        }
        if (lVar10 == lVar2) {
          if (*(longlong *)(lVar2 + 0x30) == lVar7) {
LAB_147be269c:
            *(longlong *)(param_1 + 0xc) = lVar9;
            param_1[8] = (uint)lVar12;
            return;
          }
          lVar7 = FUN_14059e8cc();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_147be269c;
        }
      }
LAB_147be2592:
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[0x10] + lVar13);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 147be26a6 FUN_147be26a6 body=69 status=ok
// SIG undefined FUN_147be26a6(void)

void FUN_147be26a6(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (*(code *)*param_1)(&local_18,*param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be2742 FUN_147be2742 body=230 status=ok
// SIG undefined FUN_147be2742(void)

undefined8 * FUN_147be2742(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be282a FUN_147be282a body=29 status=ok
// SIG undefined FUN_147be282a(void)

undefined8 FUN_147be282a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147be2862 FUN_147be2862 body=29 status=ok
// SIG undefined FUN_147be2862(void)

bool FUN_147be2862(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147be2880 FUN_147be2880 body=26 status=ok
// SIG undefined FUN_147be2880(void)

bool FUN_147be2880(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147be289a FUN_147be289a body=24 status=ok
// SIG undefined FUN_147be289a(void)

bool FUN_147be289a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147be28be FUN_147be28be body=93 status=ok
// SIG undefined FUN_147be28be(void)

void FUN_147be28be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9ef0d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9ef060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147be291c FUN_147be291c body=93 status=ok
// SIG undefined FUN_147be291c(void)

void FUN_147be291c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9ef0d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9ef060;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147be297a FUN_147be297a body=126 status=ok
// SIG undefined FUN_147be297a(void)

void FUN_147be297a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a9ef0d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9ef060;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147be29e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147be29f8 FUN_147be29f8 body=58 status=ok
// SIG undefined FUN_147be29f8(void)

void FUN_147be29f8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147be2a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147be2a32 FUN_147be2a32 body=161 status=ok
// SIG undefined FUN_147be2a32(void)

bool FUN_147be2a32(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be2ad6 FUN_147be2ad6 body=230 status=ok
// SIG undefined FUN_147be2ad6(void)

undefined8 * FUN_147be2ad6(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be2bbe FUN_147be2bbe body=29 status=ok
// SIG undefined FUN_147be2bbe(void)

undefined8 FUN_147be2bbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147be2bf6 FUN_147be2bf6 body=29 status=ok
// SIG undefined FUN_147be2bf6(void)

bool FUN_147be2bf6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147be2c14 FUN_147be2c14 body=26 status=ok
// SIG undefined FUN_147be2c14(void)

bool FUN_147be2c14(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147be2c2e FUN_147be2c2e body=24 status=ok
// SIG undefined FUN_147be2c2e(void)

bool FUN_147be2c2e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147be2c52 FUN_147be2c52 body=93 status=ok
// SIG undefined FUN_147be2c52(void)

void FUN_147be2c52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9ef1b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9ef140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147be2cb0 FUN_147be2cb0 body=93 status=ok
// SIG undefined FUN_147be2cb0(void)

void FUN_147be2cb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9ef1b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9ef140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147be2d0e FUN_147be2d0e body=126 status=ok
// SIG undefined FUN_147be2d0e(void)

void FUN_147be2d0e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a9ef1b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9ef140;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147be2d7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147be2d8c FUN_147be2d8c body=40 status=ok
// SIG undefined FUN_147be2d8c(void)

void FUN_147be2d8c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147be2db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147be2db4 FUN_147be2db4 body=140 status=ok
// SIG undefined FUN_147be2db4(void)

bool FUN_147be2db4(longlong param_1,undefined8 param_2)

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
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be2e44 FUN_147be2e44 body=62 status=ok
// SIG undefined FUN_147be2e44(void)

void FUN_147be2e44(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1[1];
  if (puVar1 + 1 <= (undefined8 *)((longlong *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147be2e6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    return;
  }
  thunk_FUN_146821949();
  return;
}



// FUNCTION 147be2e82 FUN_147be2e82 body=94 status=ok
// SIG undefined FUN_147be2e82(void)

void FUN_147be2e82(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_147be2e44(param_1,param_3);
  return;
}



// FUNCTION 147be2ee0 FUN_147be2ee0 body=230 status=ok
// SIG undefined FUN_147be2ee0(void)

int * FUN_147be2ee0(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 147be2fc6 FUN_147be2fc6 body=131 status=ok
// SIG undefined FUN_147be2fc6(void)

undefined8 FUN_147be2fc6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if (*plVar2 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar2 + 1) = (int)param_3[1];
          *plVar2 = lVar1;
          FUN_147be304a(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147be304a FUN_147be304a body=114 status=ok
// SIG undefined FUN_147be304a(void)

void FUN_147be304a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 147be30bc FUN_147be30bc body=473 status=ok
// SIG undefined FUN_147be30bc(void)

void FUN_147be30bc(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 147be3296 FUN_147be3296 body=147 status=ok
// SIG undefined FUN_147be3296(void)

void FUN_147be3296(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147be332a FUN_147be332a body=331 status=ok
// SIG undefined FUN_147be332a(void)

undefined4 * FUN_147be332a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147be2ee0(param_1,local_48);
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(param_3 + 1);
  *local_40 = *param_3;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_147be2fc6(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)(local_40 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147be30bc(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be3476 FUN_147be3476 body=435 status=ok
// SIG undefined FUN_147be3476(void)

longlong FUN_147be3476(longlong param_1)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  longlong local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[0] = 2;
  local_50 = param_1 + 0x958;
  local_48 = 1;
  local_40 = FUN_146288c34();
  local_38 = param_1 + 0x200;
  FUN_146efad82(param_1,local_58);
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined2 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21a) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x21e) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined ***)(param_1 + 0x200) = &PTR_FUN_149f7d300;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined2 *)(param_1 + 0x232) = 0xffff;
  *(undefined1 *)(param_1 + 0x234) = 0xff;
  *(undefined4 *)(param_1 + 0x236) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0x600000000;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0x600000000;
  *(undefined8 *)(param_1 + 0x920) = 0;
  *(undefined8 *)(param_1 + 0x928) = 0x6000000000;
  *(undefined8 *)(param_1 + 0x948) = 0;
  *(undefined8 *)(param_1 + 0x950) = 0x600000000;
  *(undefined8 *)(param_1 + 0x958) = 0;
  *(undefined4 *)(param_1 + 0x960) = 0;
  FUN_147be362a(param_1 + 0x240);
  FUN_147be362a(param_1 + 0x2b0);
  FUN_147be36a2(param_1 + 800);
  local_88 = *(longlong *)(param_1 + 0x2a0);
  if (*(longlong *)(param_1 + 0x2a0) == 0) {
    local_88 = param_1 + 0x240;
  }
  local_80 = 2;
  local_78 = *(longlong *)(param_1 + 0x310);
  if (*(longlong *)(param_1 + 0x310) == 0) {
    local_78 = param_1 + 0x2b0;
  }
  local_70 = 2;
  local_68 = *(longlong *)(param_1 + 0x920);
  if (*(longlong *)(param_1 + 0x920) == 0) {
    local_68 = param_1 + 800;
  }
  local_60 = 0x20;
  FUN_146efae3e(param_1);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be362a FUN_147be362a body=119 status=ok
// SIG undefined FUN_147be362a(void)

void FUN_147be362a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 < 6) {
    *(undefined4 *)(param_1 + 0x68) = 6;
    if ((uint)(*(int *)(param_1 + 0x6c) - iVar1) < 6U - iVar1) {
      FUN_146effe56(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar2 = param_1;
    }
    FUN_146eff868((longlong)iVar1 * 0x10 + lVar2,6U - iVar1);
    return;
  }
  if (iVar1 == 6) {
    return;
  }
  *(undefined4 *)(param_1 + 0x68) = 6;
  FUN_147be3728(param_1);
  return;
}



// FUNCTION 147be36a2 FUN_147be36a2 body=134 status=ok
// SIG undefined FUN_147be36a2(void)

void FUN_147be36a2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x608);
  if ((longlong)iVar1 < 0x60) {
    *(undefined4 *)(param_1 + 0x608) = 0x60;
    if ((uint)(*(int *)(param_1 + 0x60c) - iVar1) < 0x60U - iVar1) {
      FUN_146efff52(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x600);
    if (*(longlong *)(param_1 + 0x600) == 0) {
      lVar2 = param_1;
    }
    FUN_146eff868((longlong)iVar1 * 0x10 + lVar2,0x60U - iVar1);
    return;
  }
  if (iVar1 == 0x60) {
    return;
  }
  *(undefined4 *)(param_1 + 0x608) = 0x60;
  FUN_147be37ce(param_1);
  return;
}



// FUNCTION 147be3728 FUN_147be3728 body=58 status=ok
// SIG undefined FUN_147be3728(void)

void FUN_147be3728(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147be3762(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == *(int *)(param_1 + 0x6c)) {
    return;
  }
  *(int *)(param_1 + 0x6c) = iVar1;
  FUN_146effecc(param_1,*(undefined4 *)(param_1 + 0x68),iVar1,0x10);
  return;
}



// FUNCTION 147be3762 FUN_147be3762 body=108 status=ok
// SIG undefined FUN_147be3762(void)

ulonglong FUN_147be3762(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 6;
  if (6 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147be37ce FUN_147be37ce body=73 status=ok
// SIG undefined FUN_147be37ce(void)

void FUN_147be37ce(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147be3818(*(undefined4 *)(param_1 + 0x608),*(undefined4 *)(param_1 + 0x60c));
  if (iVar1 == *(int *)(param_1 + 0x60c)) {
    return;
  }
  *(int *)(param_1 + 0x60c) = iVar1;
  FUN_146efffd0(param_1,*(undefined4 *)(param_1 + 0x608),iVar1,0x10);
  return;
}



// FUNCTION 147be3818 FUN_147be3818 body=108 status=ok
// SIG undefined FUN_147be3818(void)

ulonglong FUN_147be3818(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x60;
  if (0x60 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147be3884 FUN_147be3884 body=48 status=ok
// SIG undefined FUN_147be3884(void)

void FUN_147be3884(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 147be38b4 FUN_147be38b4 body=106 status=ok
// SIG undefined FUN_147be38b4(void)

void FUN_147be38b4(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x80;
    if (0x80 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x20c)) {
    *(int *)(param_1 + 0x20c) = iVar3;
    FUN_147be391e(param_1,*(undefined4 *)(param_1 + 0x208));
    return;
  }
  return;
}



// FUNCTION 147be391e FUN_147be391e body=144 status=ok
// SIG undefined FUN_147be391e(void)

void FUN_147be391e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,4);
  return;
}



// FUNCTION 147be39ae FUN_147be39ae body=125 status=ok
// SIG undefined FUN_147be39ae(void)

void FUN_147be39ae(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x80;
    if (0x80 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_147be391e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147be3a2c FUN_147be3a2c body=30 status=ok
// SIG undefined FUN_147be3a2c(void)

void FUN_147be3a2c(longlong param_1)

{
  FUN_147bdc3da(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 147be3a4a FUN_147be3a4a body=77 status=ok
// SIG undefined FUN_147be3a4a(void)

void FUN_147be3a4a(longlong *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_14021219d(param_1,param_3);
  return;
}



// FUNCTION 147be3a98 FUN_147be3a98 body=23 status=ok
// SIG undefined FUN_147be3a98(void)

void FUN_147be3a98(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147be3aaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147be3ab0 FUN_147be3ab0 body=29 status=ok
// SIG undefined FUN_147be3ab0(void)

undefined8 FUN_147be3ab0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147be3ace FUN_147be3ace body=167 status=ok
// SIG undefined FUN_147be3ace(void)

void FUN_147be3ace(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_147be3b49;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_147be3b49;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_147be3b49:
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
                    /* WARNING: Could not recover jumptable at 0x000147be3b69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147be3b76 FUN_147be3b76 body=23 status=ok
// SIG undefined FUN_147be3b76(void)

void FUN_147be3b76(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147be3b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147be3b8e FUN_147be3b8e body=29 status=ok
// SIG undefined FUN_147be3b8e(void)

undefined8 FUN_147be3b8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147be3bac FUN_147be3bac body=167 status=ok
// SIG undefined FUN_147be3bac(void)

void FUN_147be3bac(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_147be3c27;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_147be3c27;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_147be3c27:
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
                    /* WARNING: Could not recover jumptable at 0x000147be3c47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147be3c6c FUN_147be3c6c body=131 status=ok
// SIG undefined FUN_147be3c6c(void)

undefined8 FUN_147be3c6c(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x68);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x70) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        bVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 0x14) == param_2;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar5);
        if (bVar5) {
          return uVar3;
        }
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 0x14 + 0xc);
      } while (iVar4 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147be3cf0 FUN_147be3cf0 body=193 status=ok
// SIG undefined FUN_147be3cf0(void)

void FUN_147be3cf0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + 0x48);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_14480f766(&DAT_14cb0d3a0);
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_14480f766(&DAT_14cb0d3d0);
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_14480f766(&DAT_14cb0f1d0);
    }
    local_28 = 0;
    uStack_20 = 0;
    FUN_147be3db2(lVar1);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be3db2 FUN_147be3db2 body=133 status=ok
// SIG undefined FUN_147be3db2(void)

void FUN_147be3db2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x990);
  *(undefined8 *)(param_1 + 0x988) = uVar3;
  *(longlong *)(param_1 + 0x990) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000147be3e2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147be3e38 FUN_147be3e38 body=83 status=ok
// SIG undefined FUN_147be3e38(void)

void FUN_147be3e38(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x38);
  if (lVar1 == 0) {
    lVar1 = FUN_14479d2ce(param_1 + 0x40);
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x360);
    }
  }
  if (lVar1 != param_2) {
    return;
  }
  FUN_147be3cf0(param_1);
  return;
}



// FUNCTION 147be3e8c FUN_147be3e8c body=83 status=ok
// SIG undefined FUN_147be3e8c(void)

void FUN_147be3e8c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x38);
  if (lVar1 == 0) {
    lVar1 = FUN_14479d2ce(param_1 + 0x40);
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x360);
    }
  }
  if (lVar1 != param_2) {
    return;
  }
  FUN_1435a8dce(param_1);
  return;
}



// FUNCTION 147be3ee0 FUN_147be3ee0 body=83 status=ok
// SIG undefined FUN_147be3ee0(void)

void FUN_147be3ee0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x38);
  if (lVar1 == 0) {
    lVar1 = FUN_14479d2ce(param_1 + 0x40);
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x360);
    }
  }
  if (lVar1 != param_2) {
    return;
  }
  FUN_147be3cf0(param_1);
  return;
}



// FUNCTION 147be3f33 FUN_147be3f33 body=55 status=ok
// SIG undefined FUN_147be3f33(void)

void FUN_147be3f33(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf2898 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf2898 = FUN_14171c317(FUN_1463ed8a7,uVar1,L"EReplayResult");
  }
  return;
}



// FUNCTION 147be3f6a FUN_147be3f6a body=46 status=ok
// SIG undefined FUN_147be3f6a(void)

void FUN_147be3f6a(uint param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  if (param_1 < 0xc) {
    pwVar2 = (wchar_t *)(&DAT_14a9fce88 + *(int *)(&DAT_14a9fce88 + (ulonglong)param_1 * 4));
  }
  else {
    pwVar2 = L"::Invalid";
  }
  do {
    wVar1 = *pwVar2;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L':');
  return;
}



// FUNCTION 147be3fb0 FUN_147be3fb0 body=194 status=ok
// SIG undefined FUN_147be3fb0(void)

void FUN_147be3fb0(longlong param_1)

{
  undefined1 uVar1;
  double dVar2;
  double dVar3;
  
  if ((*(short *)(param_1 + 0x10) == -1) && (*(short *)(param_1 + 0x12) == -1)) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x14);
  }
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  if (*(short *)(param_1 + 0x18) == -1) {
    if (*(short *)(param_1 + 0x1a) == -1) {
      *(undefined1 *)(param_1 + 0x1c) = 0xff;
    }
    uVar1 = *(undefined1 *)(param_1 + 0xb);
  }
  else {
    uVar1 = 1;
    if (*(char *)(param_1 + 0xb) == '\0') {
      uVar1 = *(char *)(param_1 + 0x1c) != -1;
    }
  }
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  dVar2 = 0.0;
  dVar3 = 0.0;
  if (*(short *)(param_1 + 0xe) != -1) {
    dVar3 = (double)(int)*(short *)(param_1 + 0xe) / 1000.0;
  }
  *(double *)(param_1 + 0x28) = dVar3;
  dVar3 = 0.0;
  if (*(short *)(param_1 + 0x12) != -1) {
    dVar3 = (double)(int)*(short *)(param_1 + 0x12) / 1000.0;
  }
  *(double *)(param_1 + 0x30) = dVar3;
  dVar3 = 0.0;
  if (*(short *)(param_1 + 0x1a) != -1) {
    dVar3 = (double)(int)*(short *)(param_1 + 0x1a) / 1000.0;
  }
  *(double *)(param_1 + 0x38) = dVar3;
  if (*(short *)(param_1 + 0x16) != -1) {
    dVar2 = (double)(int)*(short *)(param_1 + 0x16) / 1000.0;
  }
  *(double *)(param_1 + 0x40) = dVar2;
  return;
}



// FUNCTION 147be4072 FUN_147be4072 body=62 status=ok
// SIG undefined FUN_147be4072(void)

ulonglong FUN_147be4072(longlong param_1,longlong param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  sVar1 = *(short *)(param_1 + 0xc);
  iVar2 = *param_3;
  uVar3 = (ulonglong)CONCAT31((int3)(char)((ushort)sVar1 >> 8),sVar1 <= iVar2 && 0 < sVar1);
  if (0 < *(short *)(param_1 + 0x10) && (sVar1 > iVar2 || 0 >= sVar1)) {
    lVar4 = (longlong)*(char *)(param_1 + 0x14) * 0x10;
    uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),
                     (int)*(short *)(param_1 + 0x10) <= iVar2 + *(int *)(lVar4 + -0x10 + param_2));
  }
  return uVar3;
}



// FUNCTION 147be40b0 FUN_147be40b0 body=126 status=ok
// SIG undefined FUN_147be40b0(void)

void FUN_147be40b0(longlong param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  
  FUN_147be3fb0();
  if ('\0' < *(char *)(param_1 + 0x14)) {
    FUN_146effcea(param_1 + 0x60);
  }
  if ('\0' < *(char *)(param_1 + 0x1c)) {
    FUN_146effcea(param_1 + 0x60);
  }
  uVar2 = *(uint *)(param_1 + 0x68);
  if ((ulonglong)uVar2 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = **(char **)(param_1 + 0x60);
    if (1 < (int)uVar2) {
      uVar3 = 1;
      do {
        cVar1 = (*(char **)(param_1 + 0x60))[uVar3];
        if (cVar1 < cVar4) {
          cVar1 = cVar4;
        }
        cVar4 = cVar1;
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
  }
  *(char *)(param_1 + 0x58) = cVar4;
  return;
}



// FUNCTION 147be412e FUN_147be412e body=110 status=ok
// SIG undefined FUN_147be412e(void)

void FUN_147be412e(longlong param_1,longlong *param_2)

{
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)((longlong)param_2 + 9) = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)((longlong)param_2 + 10) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)((longlong)param_2 + 0xb) = *(undefined1 *)(param_1 + 0xb);
  *(undefined2 *)((longlong)param_2 + 0xc) = *(undefined2 *)(param_1 + 0xc);
  *(undefined2 *)((longlong)param_2 + 0xe) = *(undefined2 *)(param_1 + 0xe);
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + 0x10);
  *(undefined2 *)((longlong)param_2 + 0x12) = *(undefined2 *)(param_1 + 0x12);
  *(undefined1 *)((longlong)param_2 + 0x14) = *(undefined1 *)(param_1 + 0x14);
  *(undefined2 *)(param_2 + 3) = *(undefined2 *)(param_1 + 0x18);
  *(undefined2 *)((longlong)param_2 + 0x1a) = *(undefined2 *)(param_1 + 0x1a);
  *(undefined1 *)((longlong)param_2 + 0x1c) = *(undefined1 *)(param_1 + 0x1c);
  *(undefined2 *)((longlong)param_2 + 0x1e) = *(undefined2 *)(param_1 + 0x1e);
  *(undefined2 *)(param_2 + 4) = *(undefined2 *)(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000147be4198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2);
  return;
}



// FUNCTION 147be419c FUN_147be419c body=59 status=ok
// SIG undefined FUN_147be419c(void)

longlong FUN_147be419c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bef528(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x78 + *param_1;
  FUN_147bef4d8(lVar2);
  return lVar2;
}



// FUNCTION 147be41d8 FUN_147be41d8 body=98 status=ok
// SIG undefined FUN_147be41d8(void)

void FUN_147be41d8(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147bef5d4(param_1,iVar1);
    }
    FUN_147bef5b8((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_147bef65a(param_1);
  return;
}



// FUNCTION 147be423a FUN_147be423a body=198 status=ok
// SIG undefined FUN_147be423a(void)

void FUN_147be423a(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1138) < 2) &&
     (pcVar1 = *(code **)(param_1 + 0x10f0), pcVar1 != (code *)0x0)) {
    plVar3 = (longlong *)(param_1 + 0x1110);
    if (*(longlong **)(&DAT_00001100 + param_1) != (longlong *)0x0) {
      plVar3 = *(longlong **)(&DAT_00001100 + param_1);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(&local_38,uVar2);
    if ((longlong *)(param_1 + 0x1130) == &local_38) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x1130) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x1130) = local_38;
      *(undefined4 *)(param_1 + 0x1138) = local_30;
      *(undefined4 *)(param_1 + 0x113c) = local_2c;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be4302 FUN_147be4302 body=198 status=ok
// SIG undefined FUN_147be4302(void)

void FUN_147be4302(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1188) < 2) &&
     (pcVar1 = *(code **)(param_1 + 0x1140), pcVar1 != (code *)0x0)) {
    plVar3 = (longlong *)(param_1 + 0x1160);
    if (*(longlong **)(param_1 + 0x1150) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x1150);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(&local_38,uVar2);
    if ((longlong *)(param_1 + 0x1180) == &local_38) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x1180) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x1180) = local_38;
      *(undefined4 *)(param_1 + 0x1188) = local_30;
      *(undefined4 *)(param_1 + 0x118c) = local_2c;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147be43ca FUN_147be43ca body=175 status=ok
// SIG undefined FUN_147be43ca(void)

void FUN_147be43ca(longlong param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  
  if (param_4 == -1) {
    param_4 = *(int *)(param_1 + 0x1228);
  }
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    pcVar3 = (char *)*param_2;
    pcVar2 = pcVar3 + *(int *)(param_2 + 1);
    do {
      iVar8 = (int)*pcVar3;
      lVar9 = (longlong)iVar8 * 0x10;
      *(undefined4 *)(lVar9 + -0x10 + param_3) = 0;
      *(undefined8 *)(lVar9 + -8 + param_3) = 0;
      if (0 < iVar8) {
        iVar6 = 0;
        dVar10 = 0.0;
        iVar4 = 0;
        iVar7 = param_4;
        do {
          if (iVar7 < 0) {
            iVar5 = *(int *)(param_1 + 0x1220) + iVar7;
          }
          else {
            iVar5 = param_4 - iVar4;
          }
          lVar1 = *(longlong *)(param_1 + 0x1218);
          iVar6 = iVar6 + *(int *)(lVar1 + (longlong)iVar5 * 0x10);
          *(int *)(lVar9 + param_3 + -0x10) = iVar6;
          dVar10 = dVar10 + *(double *)(lVar1 + 8 + (longlong)iVar5 * 0x10);
          *(double *)(lVar9 + param_3 + -8) = dVar10;
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + -1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 != pcVar2);
  }
  return;
}



// FUNCTION 147be447a FUN_147be447a body=553 status=ok
// SIG undefined FUN_147be447a(void)

void FUN_147be447a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  void *_Dst;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  iVar11 = *(int *)(param_1 + 0x13b8);
  if (0 < (longlong)iVar11) {
    uVar13 = 0xffffffff;
    uVar14 = (longlong)iVar11;
    do {
      uVar15 = uVar14 - 1;
      lVar9 = *(longlong *)(param_1 + 0x13b0);
      bVar3 = *(byte *)(*(longlong *)(lVar9 + 8 + uVar15 * 0x10) + 0x101);
      iVar7 = (int)uVar13;
      if ((byte)((bVar3 - *(byte *)(param_1 + 0x1330)) - (bVar3 < *(byte *)(param_1 + 0x1330))) <
          0xef) {
        if (iVar7 == -1) {
          uVar13 = uVar15 & 0xffffffff;
        }
        if (*(int *)(param_1 + 0x1368) != *(int *)(param_1 + 0x1394)) {
          uVar5 = *(ulonglong *)(lVar9 + uVar15 * 0x10);
          uVar8 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          lVar9 = *(longlong *)(param_1 + 0x13a0);
          if (*(longlong *)(param_1 + 0x13a0) == 0) {
            lVar9 = param_1 + 0x1398;
          }
          iVar7 = *(int *)(lVar9 + (ulonglong)
                                   (*(int *)(param_1 + 0x13a8) - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
          if (iVar7 != -1) {
            do {
              lVar9 = *(longlong *)(param_1 + 0x1360) + (longlong)iVar7 * 0x20;
              if (*(ulonglong *)(*(longlong *)(param_1 + 0x1360) + (longlong)iVar7 * 0x20) == uVar5)
              goto LAB_147be44ff;
              iVar7 = *(int *)(lVar9 + 0x18);
            } while (iVar7 != -1);
          }
        }
        lVar9 = 0;
LAB_147be44ff:
        *(undefined8 *)(lVar9 + 8) = 0;
        plVar4 = *(longlong **)(lVar9 + 0x10);
        if (plVar4 != (longlong *)0x0) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
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
      else {
        if ((iVar7 != -1) && (iVar12 = (iVar7 - (int)uVar14) + 1, iVar12 != 0)) {
          iVar10 = *(int *)(param_1 + 0x13b8);
          iVar7 = iVar10 - (iVar7 + 1);
          if (iVar7 != 0) {
            _Dst = (void *)(lVar9 + uVar14 * 0x10);
            memmove(_Dst,(void *)((longlong)iVar12 * 0x10 + (longlong)_Dst),(longlong)iVar7 << 4);
            iVar10 = *(int *)(param_1 + 0x13b8);
          }
          *(int *)(param_1 + 0x13b8) = iVar10 - iVar12;
        }
        uVar13 = 0xffffffff;
      }
      bVar6 = 1 < (longlong)uVar14;
      uVar14 = uVar15;
    } while (bVar6);
    iVar7 = *(int *)(param_1 + 0x13b8);
    if ((int)uVar13 != -1) {
      iVar12 = (int)uVar13 + 1;
      if (iVar7 - iVar12 != 0) {
        memmove(*(void **)(param_1 + 0x13b0),
                (void *)((longlong)iVar12 * 0x10 + (longlong)*(void **)(param_1 + 0x13b0)),
                (longlong)(iVar7 - iVar12) << 4);
        iVar7 = *(int *)(param_1 + 0x13b8);
      }
      iVar7 = iVar7 - iVar12;
      *(int *)(param_1 + 0x13b8) = iVar7;
    }
    if (iVar7 != iVar11) {
      iVar11 = 0x80;
      if (0x80 < iVar7) {
        iVar11 = iVar7;
      }
      if (*(int *)(param_1 + 0x13bc) < iVar11) {
        FUN_147bef6f6(param_1 + 0x13b0);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x13c0) = param_2;
  return;
}



// FUNCTION 147be46a4 FUN_147be46a4 body=1115 status=ok
// SIG undefined FUN_147be46a4(void)

void FUN_147be46a4(longlong param_1,char param_2,double param_3,int *param_4,longlong param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  double dVar12;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar11 = -(ulonglong)(*(double *)(param_1 + 0x10a0) == 0.0);
  dVar12 = (param_3 -
           (double)(~uVar11 & (ulonglong)*(double *)(param_1 + 0x10a0) |
                   *(ulonglong *)(param_1 + 0x68) & uVar11)) + *(double *)(param_4 + 2);
  *(double *)(param_4 + 2) = dVar12;
  if (*(char *)(param_1 + 0x10a9) != '\x01') goto LAB_147be48f5;
  iVar6 = *(int *)(param_1 + 0x1420);
  iVar2 = *(int *)(param_1 + 0x1428);
  if (iVar6 == iVar2) {
    plVar10 = (longlong *)(param_5 + 0x108);
    if (dVar12 < *(double *)(param_1 + 0x1450) || dVar12 == *(double *)(param_1 + 0x1450)) {
LAB_147be48e9:
      plVar4 = (longlong *)*plVar10;
      if (plVar4 == (longlong *)0x0) goto LAB_147be48f5;
    }
    else {
LAB_147be474c:
      plVar10 = (longlong *)(param_5 + 0x108);
      plVar4 = *(longlong **)(param_5 + 0x110);
      if ((plVar4 != (longlong *)0x0) && ((int)plVar4[1] == 1)) {
        *(undefined8 *)(param_5 + 0x108) = 0;
        *(undefined8 *)(param_5 + 0x110) = 0;
        LOCK();
        plVar7 = plVar4 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      plVar4 = (longlong *)*plVar10;
      if (plVar4 == (longlong *)0x0) {
        if ((longlong)*(int *)(param_1 + 0x1420) < 1) {
          iVar8 = -1;
        }
        else {
          plVar7 = (longlong *)(*(longlong *)(param_1 + 0x1418) + 8);
          iVar8 = -1;
          lVar9 = 0;
          do {
            plVar4 = (longlong *)plVar7[-1];
            if (*plVar4 == *(longlong *)(param_1 + 0x1080)) {
              lVar9 = *plVar7;
              if (lVar9 != 0) {
                LOCK();
                *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
                UNLOCK();
              }
              plVar7 = *(longlong **)(param_5 + 0x110);
              *(longlong **)(param_5 + 0x108) = plVar4;
              *(longlong *)(param_5 + 0x110) = lVar9;
              if (plVar7 == (longlong *)0x0) goto LAB_147be48bc;
              LOCK();
              plVar4 = plVar7 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                local_78 = plVar10;
                (**(code **)*plVar7)();
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar10 = local_78;
                if (*piVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                  plVar10 = local_78;
                }
              }
              break;
            }
            if ((iVar8 == -1) &&
               (iVar8 = -1,
               (double)plVar4[2] <= *(double *)(param_4 + 2) &&
               *(double *)(param_4 + 2) != (double)plVar4[2])) {
              iVar8 = (int)lVar9;
            }
            lVar9 = lVar9 + 1;
            plVar7 = plVar7 + 2;
          } while (*(int *)(param_1 + 0x1420) != lVar9);
        }
        plVar4 = (longlong *)*plVar10;
LAB_147be48bc:
        if (plVar4 == (longlong *)0x0) {
          if (iVar8 == -1) {
            if ((iVar6 == iVar2) || (iVar8 = *(int *)(param_1 + 0x1420), iVar8 == -1))
            goto LAB_147be48e9;
          }
          else if (iVar6 == iVar2) {
            iVar6 = 1;
            if (1 < *(int *)(param_1 + 0x1420)) {
              iVar6 = *(int *)(param_1 + 0x1420);
            }
            FUN_1478dd7c2(param_1 + 0x1418,iVar6 + -1);
          }
          plVar4 = (longlong *)FUN_14001cc68(0x68,0x10);
          plVar4[1] = (longlong)&DAT_100000001;
          *plVar4 = (longlong)&PTR_FUN_14a9fcbb0;
          local_70 = plVar4 + 2;
          plVar4[2] = 0;
          plVar4[3] = 0;
          plVar4[4] = 0;
          plVar4[5] = 0;
          plVar4[6] = 0;
          plVar4[7] = 0;
          plVar4[8] = 0;
          plVar4[9] = 0;
          plVar4[10] = 0;
          plVar4[0xb] = 0;
          plVar4[0xc] = 0;
          local_68 = plVar4;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            LOCK();
            plVar7 = plVar4 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
          puVar5 = (undefined8 *)FUN_147be4b00(param_1 + 0x1418,&local_70,iVar8);
          uVar3 = *puVar5;
          lVar9 = puVar5[1];
          if (lVar9 != 0) {
            LOCK();
            *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
            UNLOCK();
          }
          plVar4 = *(longlong **)(param_5 + 0x110);
          *(undefined8 *)(param_5 + 0x108) = uVar3;
          *(longlong *)(param_5 + 0x110) = lVar9;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar4 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
          *(undefined8 *)*plVar10 = *(undefined8 *)(param_1 + 0x1080);
          FUN_144a787a6(*plVar10 + 0x38,param_1 + 0x1130);
          FUN_144a787a6(*plVar10 + 0x48,param_1 + 0x1180);
          plVar4 = local_68;
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_68 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          goto LAB_147be48e9;
        }
      }
    }
  }
  else {
    plVar4 = *(longlong **)(param_5 + 0x108);
    if (plVar4 == (longlong *)0x0) goto LAB_147be474c;
  }
  iVar6 = (int)plVar4[1];
  if ((int)plVar4[1] < *param_4) {
    iVar6 = *param_4;
  }
  *(int *)(plVar4 + 1) = iVar6;
  dVar12 = *(double *)(param_4 + 2);
  if ((double)plVar4[2] <= dVar12 && dVar12 != (double)plVar4[2]) {
    plVar4[2] = (longlong)dVar12;
    FUN_146834d0e(&local_70);
    *(char *)(plVar4 + 3) = (char)(int)local_70._4_4_;
  }
  if (*(char *)(param_5 + 0x102) == '\x03') {
    *(int *)(plVar4 + 6) = (int)plVar4[6] + *(int *)(param_1 + 0x1098);
  }
  if (((param_2 == '\x01') && (*(char *)(param_1 + 0x71) == '\x01')) &&
     (param_3 = param_3 - *(double *)(param_1 + 0x68),
     (double)plVar4[4] <= param_3 && param_3 != (double)plVar4[4])) {
    plVar4[4] = (longlong)param_3;
    *(undefined4 *)(plVar4 + 5) = *(undefined4 *)(param_1 + 0x74);
    FUN_146834d0e(&local_70);
    *(char *)((longlong)plVar4 + 0x2c) = (char)(int)local_70._4_4_;
  }
LAB_147be48f5:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147be4b00 FUN_147be4b00 body=123 status=ok
// SIG undefined FUN_147be4b00(void)

longlong FUN_147be4b00(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1478dd510(param_1,iVar1);
  }
  lVar3 = (longlong)param_3 * 0x10;
  memmove((void *)(*param_1 + lVar3 + 0x10),(void *)(*param_1 + lVar3),
          (ulonglong)(uint)(iVar1 - param_3) << 4);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *(undefined8 *)(lVar2 + 8 + lVar3) = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  return lVar2 + lVar3;
}



// FUNCTION 147be4b7c FUN_147be4b7c body=171 status=ok
// SIG undefined FUN_147be4b7c(void)

void FUN_147be4b7c(longlong param_1,double param_2)

{
  *(double *)(param_1 + 0x58) =
       (param_2 - *(double *)(param_1 + 0x68)) + *(double *)(param_1 + 0x58);
  if (((*(longlong *)(param_1 + 0x1090) != 0) &&
      (*(int *)(param_1 + 0x1394) < *(int *)(param_1 + 0x1368))) && (0 < *(int *)(param_1 + 0x13b8))
     ) {
    FUN_147be46a4(param_1,1,param_2,*(longlong *)(param_1 + 0x1090),
                  *(undefined8 *)(param_1 + 0x1088));
  }
  FUN_147becb62(param_1,param_2);
  *(undefined2 *)(param_1 + 0x70) = 0x100;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x1078) = 0;
  *(undefined8 *)(param_1 + 0x10a0) = 0;
  *(undefined8 *)(param_1 + 0x1080) = 0;
  *(undefined8 *)(param_1 + 0x1088) = 0;
  *(undefined8 *)(param_1 + 0x108c) = 0;
  *(undefined8 *)(param_1 + 0x1094) = 0;
  return;
}



// FUNCTION 147be4c28 FUN_147be4c28 body=251 status=ok
// SIG undefined FUN_147be4c28(void)

void FUN_147be4c28(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  
  if (*(longlong *)(param_1 + 0x1440) == 0) {
    return;
  }
  FUN_147be423a();
  FUN_147be4302(param_1);
  puVar1 = (undefined8 *)(param_1 + 0x13c8);
  iVar2 = *(int *)(param_1 + 0x1138);
  pvVar3 = *(void **)(param_1 + 0x1130);
  *(int *)(param_1 + 0x13d0) = iVar2;
  if (iVar2 == 0 && *(int *)(param_1 + 0x13d4) == 0) {
    *(undefined4 *)(param_1 + 0x13d4) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2);
    if (iVar2 != 0) {
      memcpy((void *)*puVar1,pvVar3,(longlong)iVar2 * 2);
    }
  }
  iVar2 = *(int *)(param_1 + 0x1188);
  pvVar3 = *(void **)(param_1 + 0x1180);
  *(int *)(param_1 + 0x13e0) = iVar2;
  if (iVar2 == 0 && *(int *)(param_1 + 0x13e4) == 0) {
    *(undefined4 *)(param_1 + 0x13e4) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x13d8),iVar2);
    if (iVar2 != 0) {
      memcpy(*(void **)(param_1 + 0x13d8),pvVar3,(longlong)iVar2 * 2);
    }
  }
  FUN_1478ceca6(puVar1,*(longlong *)(param_1 + 0x1440) + 0x20);
  return;
}



// FUNCTION 147be4d24 FUN_147be4d24 body=138 status=ok
// SIG undefined FUN_147be4d24(void)

void FUN_147be4d24(longlong param_1,undefined8 param_2)

{
  double dVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined1 *)(param_1 + 0x1358) = 1;
  dVar1 = *(double *)(param_1 + 0x13c0);
  if ((dVar1 == 0.0) && (!NAN(dVar1))) {
    *(undefined8 *)(param_1 + 0x13c0) = param_2;
  }
  if (*(char *)(param_1 + 0x70) == '\x01') {
    bVar2 = *(byte *)(param_1 + 0x1078);
    lVar3 = *(longlong *)(param_1 + 0x78);
    if (1 < bVar2) {
      lVar4 = 0;
      do {
        if (*(longlong *)(param_1 + 0x88 + lVar4) != lVar3) goto LAB_147be4d84;
        lVar4 = lVar4 + 0x10;
      } while ((ulonglong)bVar2 * 0x10 + -0x10 != lVar4);
    }
    if (bVar2 != 0) {
      FUN_147be4dae(dVar1,lVar3,*(undefined8 *)(lVar3 + 0x18));
      return;
    }
LAB_147be4d84:
    *(undefined1 *)(param_1 + 0x71) = 0;
    if ((*(double *)(param_1 + 0x10a0) == 0.0) && (!NAN(*(double *)(param_1 + 0x10a0)))) {
      *(undefined8 *)(param_1 + 0x10a0) = param_2;
    }
  }
  return;
}



// FUNCTION 147be4dae FUN_147be4dae body=954 status=ok
// SIG undefined FUN_147be4dae(void)

undefined8 FUN_147be4dae(longlong param_1,ulonglong param_2,longlong param_3)

{
  double dVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  char cVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  longlong lVar17;
  int *piVar18;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  char local_59;
  LARGE_INTEGER local_58;
  ulonglong local_50;
  undefined7 uVar11;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_59 = '\0';
  if (*(char *)(param_1 + 0x11f0) == '\0') {
    lVar8 = FUN_147becbd4(param_1);
    cVar4 = local_59;
    bVar16 = *(byte *)(lVar8 + 0x101);
    uVar5 = *(uint *)(param_1 + 0x1330);
    bVar15 = (byte)uVar5;
    *(byte *)(lVar8 + 0x101) = bVar15;
    piVar18 = (int *)((ulonglong)((uVar5 & 0xf) << 4) + lVar8);
    if (local_59 == '\x01') {
      *(undefined1 *)(lVar8 + 0x100) = 1;
      uVar3 = 2;
      if ((longlong)*(int *)(param_1 + 0x10c0) != 0) {
        lVar17 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x10b8) + lVar17) == param_3) {
            uVar3 = 1;
            break;
          }
          lVar17 = lVar17 + 8;
        } while ((longlong)*(int *)(param_1 + 0x10c0) * 8 != lVar17);
      }
      *(undefined1 *)(lVar8 + 0x102) = uVar3;
    }
    else if (bVar16 != bVar15) {
      bVar2 = ~bVar16;
      if (bVar16 < bVar15) {
        bVar2 = -bVar16;
      }
      cVar12 = '\x01';
      if ((int)(uint)(byte)(bVar2 + bVar15) < (int)*(char *)(param_1 + 0x1359)) {
        bVar15 = *(char *)(param_1 + 0x1359) - (bVar2 + bVar15);
        uVar5 = *(uint *)(lVar8 + 0x100);
        if (bVar15 < (byte)*(uint *)(lVar8 + 0x100)) {
          uVar5 = (uint)bVar15;
        }
        bVar15 = (byte)uVar5;
        if (1 < bVar15) {
          uVar6 = bVar16 & 0xf;
          uVar14 = uVar6 - 1;
          if ((char)uVar14 != (byte)((char)uVar6 - bVar15)) {
            piVar9 = (int *)((ulonglong)(uVar6 << 4) + lVar8);
            uVar5 = uVar5 - 1;
            do {
              lVar17 = (ulonglong)((byte)uVar14 & 0xf) * 0x10;
              *(int *)(lVar8 + lVar17) = *(int *)(lVar8 + lVar17) + *piVar9;
              *(double *)(lVar8 + 8 + lVar17) =
                   *(double *)(piVar9 + 2) + *(double *)(lVar8 + 8 + lVar17);
              uVar14 = (uint)(byte)((byte)uVar14 - 1);
              bVar16 = (char)uVar5 - 1;
              uVar5 = (uint)bVar16;
            } while (bVar16 != 0);
          }
        }
        cVar12 = bVar15 + 1;
      }
      *(char *)(lVar8 + 0x100) = cVar12;
      *piVar18 = 0;
      piVar18[2] = 0;
      piVar18[3] = 0;
    }
    *piVar18 = *piVar18 + 1;
    if ((*(char *)(param_1 + 0x71) == '\x01') &&
       (*(longlong *)(param_1 + 0x1080) != param_3 && *(longlong *)(param_1 + 0x1080) != 0)) {
      *(undefined1 *)(param_1 + 0x71) = 0;
    }
    piVar9 = *(int **)(param_1 + 0x1090);
    if (piVar9 == (int *)0x0) {
      *(longlong *)(param_1 + 0x1080) = param_3;
      *(longlong *)(param_1 + 0x1088) = lVar8;
      *(int **)(param_1 + 0x1090) = piVar18;
    }
    else if (piVar9 != piVar18) {
      QueryPerformanceCounter(&local_58);
      dVar1 = (double)local_58.QuadPart * DAT_14c83f420 + 16777216.0;
      local_68 = *(undefined8 *)(param_1 + 0x1088);
      piVar9 = (int *)FUN_147be46a4(param_1,0,dVar1,*(undefined8 *)(param_1 + 0x1090));
      *(double *)(param_1 + 0x10a0) = dVar1;
      *(longlong *)(param_1 + 0x1080) = param_3;
      *(longlong *)(param_1 + 0x1088) = lVar8;
      *(int **)(param_1 + 0x1090) = piVar18;
      *(undefined4 *)(param_1 + 0x1098) = 0;
    }
    uVar11 = (undefined7)((ulonglong)piVar9 >> 8);
    uVar10 = CONCAT71(uVar11,*(char *)(lVar8 + 0x102));
    if ((cVar4 == '\0') && (*(int *)(param_1 + 0x1098) == 0)) {
      if (*(char *)(lVar8 + 0x102) == '\x01') goto LAB_147be4df2;
      uVar10 = CONCAT71(uVar11,2);
      if ((DAT_14c761630 == 1) && (bVar16 = *(byte *)(param_1 + 0x1c), bVar16 != 0xff)) {
        dVar1 = *(double *)(param_1 + 0x38);
        bVar15 = (byte)*(undefined4 *)(lVar8 + 0x100);
        if (bVar15 <= bVar16) {
          bVar16 = bVar15;
        }
        piVar18 = (int *)(lVar8 + (ulonglong)((*(char *)(lVar8 + 0x101) - bVar16) + 1 & 0xf) * 0x10)
        ;
        if ((*(short *)(param_1 + 0x18) == -1) ||
           (uVar10 = 3, *piVar18 < (int)*(short *)(param_1 + 0x18))) {
          uVar10 = 2;
          if ((dVar1 != 0.0) || (NAN(dVar1))) {
            uVar10 = (ulonglong)(dVar1 <= *(double *)(piVar18 + 2)) | 2;
          }
        }
      }
      *(char *)(lVar8 + 0x102) = (char)uVar10;
    }
    cVar4 = (char)uVar10;
joined_r0x000147be515e:
    if (cVar4 == '\x03') {
      *(int *)(param_1 + 0x1098) = *(int *)(param_1 + 0x1098) + 1;
      uVar7 = CONCAT71((int7)(uVar10 >> 8),1);
      goto LAB_147be4df4;
    }
  }
  else if (*(int *)(param_1 + 0x1368) != *(int *)(param_1 + 0x1394)) {
    uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar8 = param_1 + 0x1398;
    if (*(longlong *)(param_1 + 0x13a0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x13a0);
    }
    iVar13 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x13a8) - 1U & (uVar5 >> 0x10 ^ uVar5))
                              * 4);
    if (iVar13 != -1) {
      do {
        lVar8 = *(longlong *)(param_1 + 0x1360) + (longlong)iVar13 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x1360) + (longlong)iVar13 * 0x20) == param_2) {
          if (((ulonglong *)(lVar8 + 8) != (ulonglong *)0x0 && lVar8 != 0) &&
             (uVar10 = *(ulonglong *)(lVar8 + 8), uVar10 != 0)) {
            cVar4 = *(char *)(uVar10 + 0x102);
            goto joined_r0x000147be515e;
          }
          break;
        }
        iVar13 = *(int *)(lVar8 + 0x18);
      } while (iVar13 != -1);
    }
  }
LAB_147be4df2:
  uVar7 = 0;
LAB_147be4df4:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


