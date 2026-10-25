// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14925695c FUN_14925695c body=489 status=ok
// SIG undefined FUN_14925695c(void)

void FUN_14925695c(longlong param_1,undefined8 *param_2,float param_3,float *param_4,
                  longlong param_5)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_f0;
  undefined1 local_e0 [4];
  undefined8 local_dc;
  float local_d4 [32];
  undefined1 local_54;
  undefined2 local_53;
  undefined1 local_51;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_e0[0] = 4;
    local_dc = *param_2;
    cVar2 = FUN_144828dba(param_5,local_e0,lVar1);
    if (cVar2 != '\0') {
      if (ABS(param_3 + -1.0) <= 1e-08) {
        local_d4[0] = *param_4;
        uVar3 = 0xffffffff;
        if (*(ushort *)(param_5 + 0xc) != 0xffff) {
          uVar3 = (uint)*(ushort *)(param_5 + 0xc);
        }
      }
      else {
        uVar3 = (uint)*(ushort *)(param_5 + 0xc);
        if (uVar3 == 0xffff) {
          uVar3 = 0xffffffff;
        }
        FUN_149181d3e(lVar1,local_d4,uVar3,1);
        if (1.0 <= param_3) {
          param_3 = 1.0;
        }
        if (param_3 <= 0.0) {
          param_3 = 0.0;
        }
        uVar3 = (uint)*(ushort *)(param_5 + 0xc);
        if (*(ushort *)(param_5 + 0xc) == 0xffff) {
          uVar3 = 0xffffffff;
        }
        local_d4[0] = (*param_4 - local_d4[0]) * param_3 + local_d4[0];
      }
      local_51 = 0;
      local_53 = 0;
      local_54 = 1;
      local_d4[0x1e] = 0.0;
      local_d4[0x1f] = 0.0;
      local_d4[0x1d] = 0.0;
      local_d4[0x1c] = 0.0;
      local_d4[0x1b] = 0.0;
      local_d4[0x19] = 0.0;
      local_d4[0x1a] = 0.0;
      local_d4[0x17] = 0.0;
      local_d4[0x18] = 0.0;
      local_d4[0x15] = 0.0;
      local_d4[0x16] = 0.0;
      local_d4[0x13] = 0.0;
      local_d4[0x14] = 0.0;
      local_d4[0x11] = 0.0;
      local_d4[0x12] = 0.0;
      local_d4[0xf] = 0.0;
      local_d4[0x10] = 0.0;
      local_d4[0xd] = 0.0;
      local_d4[0xe] = 0.0;
      local_d4[0xb] = 0.0;
      local_d4[0xc] = 0.0;
      local_d4[9] = 0.0;
      local_d4[10] = 0.0;
      local_d4[7] = 0.0;
      local_d4[8] = 0.0;
      local_d4[5] = 0.0;
      local_d4[6] = 0.0;
      local_d4[3] = 0.0;
      local_d4[4] = 0.0;
      local_d4[1] = 0.0;
      local_d4[2] = 0.0;
      local_f0 = 0;
      local_f8 = 0;
      FUN_14918c0c6(lVar1,uVar3,local_d4,1);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149256b46 FUN_149256b46 body=154 status=ok
// SIG undefined FUN_149256b46(void)

void FUN_149256b46(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = (longlong *)*param_2;
  puVar2 = (undefined8 *)*param_2;
  uVar1 = *(undefined4 *)param_2[4];
  lVar3 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar4 = FUN_144828ac0(param_2 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar3 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar3 * 0x14));
  local_40 = *puVar2;
  local_38 = *(undefined4 *)(puVar2 + 1);
  FUN_149256c58(*(undefined8 *)(param_1 + 0xc0),&local_40,uVar1,uVar4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149256be2 FUN_149256be2 body=117 status=ok
// SIG undefined FUN_149256be2(void)

void FUN_149256be2(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_149256c58(param_1 + 0x10,&local_28,*(undefined4 *)(param_1 + 0x200),param_1 + 0x208);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149256c58 FUN_149256c58 body=200 status=ok
// SIG undefined FUN_149256c58(void)

void FUN_149256c58(longlong param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x1b0) != 0) &&
     (FUN_14924b442(param_4,(int)param_2[1]), 0 < (int)param_2[1])) {
    lVar3 = 0;
    lVar1 = 0;
    lVar2 = 0;
    do {
      local_54 = *(undefined4 *)(*param_2 + 8 + lVar1);
      local_68 = *param_4 + lVar3;
      FUN_14925695c(param_1,*param_2 + lVar1,param_3,&local_54);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0xc;
      lVar3 = lVar3 + 0x20;
    } while (lVar2 < (int)param_2[1]);
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149256d22 FUN_149256d22 body=107 status=ok
// SIG undefined FUN_149256d22(void)

void FUN_149256d22(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined4 *)puVar2[4];
  uVar4 = puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_149256dda(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar1,uVar4,uVar6);
  return;
}



// FUNCTION 149256d8e FUN_149256d8e body=75 status=ok
// SIG undefined FUN_149256d8e(void)

void FUN_149256d8e(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149256dda(param_1 + 0x10,param_1 + 0x1f0,*(undefined4 *)(param_1 + 0x1f8),param_1 + 0x1fc,
                param_1 + 0x200);
  return;
}



// FUNCTION 149256dda FUN_149256dda body=503 status=ok
// SIG undefined FUN_149256dda(void)

void FUN_149256dda(longlong param_1,undefined8 *param_2,int param_3,int *param_4,longlong param_5)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_f0;
  undefined1 local_e0 [4];
  undefined8 local_dc;
  int local_d4 [32];
  undefined1 local_54;
  undefined2 local_53;
  undefined1 local_51;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_e0[0] = 4;
    local_dc = *param_2;
    cVar2 = FUN_144828dba(param_5,local_e0,lVar1);
    if (cVar2 != '\0') {
      fVar4 = (float)param_3;
      if (ABS(fVar4 + -1.0) <= 1e-08) {
        local_d4[0] = *param_4;
        uVar3 = 0xffffffff;
        if (*(ushort *)(param_5 + 0xc) != 0xffff) {
          uVar3 = (uint)*(ushort *)(param_5 + 0xc);
        }
      }
      else {
        uVar3 = (uint)*(ushort *)(param_5 + 0xc);
        if (uVar3 == 0xffff) {
          uVar3 = 0xffffffff;
        }
        FUN_149181d3e(lVar1,local_d4,uVar3,1);
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        local_d4[0] = (int)(((float)*param_4 - (float)local_d4[0]) * fVar4 + (float)local_d4[0]);
        uVar3 = (uint)*(ushort *)(param_5 + 0xc);
        if (*(ushort *)(param_5 + 0xc) == 0xffff) {
          uVar3 = 0xffffffff;
        }
      }
      local_51 = 0;
      local_53 = 0;
      local_54 = 1;
      local_d4[0x1e] = 0;
      local_d4[0x1f] = 0;
      local_d4[0x1d] = 0;
      local_d4[0x1c] = 0;
      local_d4[0x1b] = 0;
      local_d4[0x19] = 0;
      local_d4[0x1a] = 0;
      local_d4[0x17] = 0;
      local_d4[0x18] = 0;
      local_d4[0x15] = 0;
      local_d4[0x16] = 0;
      local_d4[0x13] = 0;
      local_d4[0x14] = 0;
      local_d4[0x11] = 0;
      local_d4[0x12] = 0;
      local_d4[0xf] = 0;
      local_d4[0x10] = 0;
      local_d4[0xd] = 0;
      local_d4[0xe] = 0;
      local_d4[0xb] = 0;
      local_d4[0xc] = 0;
      local_d4[9] = 0;
      local_d4[10] = 0;
      local_d4[7] = 0;
      local_d4[8] = 0;
      local_d4[5] = 0;
      local_d4[6] = 0;
      local_d4[3] = 0;
      local_d4[4] = 0;
      local_d4[1] = 0;
      local_d4[2] = 0;
      local_f0 = 0;
      local_f8 = 0;
      FUN_14918c0c6(lVar1,uVar3,local_d4,1);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149256fd2 FUN_149256fd2 body=154 status=ok
// SIG undefined FUN_149256fd2(void)

void FUN_149256fd2(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = (longlong *)*param_2;
  puVar2 = (undefined8 *)*param_2;
  uVar1 = *(undefined4 *)param_2[4];
  lVar3 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar4 = FUN_144828ac0(param_2 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar3 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar3 * 0x14));
  local_40 = *puVar2;
  local_38 = *(undefined4 *)(puVar2 + 1);
  FUN_1492570e4(*(undefined8 *)(param_1 + 0xc0),&local_40,uVar1,uVar4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925706e FUN_14925706e body=117 status=ok
// SIG undefined FUN_14925706e(void)

void FUN_14925706e(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_1492570e4(param_1 + 0x10,&local_28,*(undefined4 *)(param_1 + 0x200),param_1 + 0x208);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492570e4 FUN_1492570e4 body=202 status=ok
// SIG undefined FUN_1492570e4(void)

void FUN_1492570e4(longlong param_1,longlong *param_2,float param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x1b0) != 0) &&
     (FUN_14924b442(param_4,(int)param_2[1]), 0 < (int)param_2[1])) {
    lVar3 = 0;
    lVar1 = 0;
    lVar2 = 0;
    do {
      local_64 = *(undefined4 *)(*param_2 + 8 + lVar1);
      local_78 = *param_4 + lVar3;
      FUN_149256dda(param_1,*param_2 + lVar1,(int)param_3,&local_64);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0xc;
      lVar3 = lVar3 + 0x20;
    } while (lVar2 < (int)param_2[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492571b0 FUN_1492571b0 body=114 status=ok
// SIG undefined FUN_1492571b0(void)

void FUN_1492571b0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined4 *)puVar2[4];
  uVar4 = puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_14925726e(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar1,uVar4,uVar6);
  return;
}



// FUNCTION 149257222 FUN_149257222 body=76 status=ok
// SIG undefined FUN_149257222(void)

void FUN_149257222(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14925726e(param_1 + 0x10,param_1 + 0x1f0,*(undefined4 *)(param_1 + 0x1f8),param_1 + 0x200,
                param_1 + 0x210);
  return;
}



// FUNCTION 14925726e FUN_14925726e body=575 status=ok
// SIG undefined FUN_14925726e(void)

void FUN_14925726e(longlong param_1,undefined8 *param_2,float param_3,double *param_4,
                  longlong param_5)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 local_100;
  undefined1 local_f0 [4];
  undefined8 local_ec;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
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
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined2 local_63;
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar3 = *(longlong *)(param_1 + 0x1b0);
  if (lVar3 != 0) {
    local_f0[0] = 4;
    local_ec = *param_2;
    cVar4 = FUN_144828dba(param_5,local_f0,lVar3);
    if (cVar4 != '\0') {
      dVar1 = param_4[1];
      dVar2 = *param_4;
      if (ABS(param_3 + -1.0) <= 1e-08) {
        uVar5 = 0xffffffff;
        if (*(ushort *)(param_5 + 0xc) != 0xffff) {
          uVar5 = (uint)*(ushort *)(param_5 + 0xc);
        }
        local_dc = 0.0;
        local_e4 = (float)dVar2;
        local_e0 = (float)dVar1;
      }
      else {
        uVar5 = (uint)*(ushort *)(param_5 + 0xc);
        if (uVar5 == 0xffff) {
          uVar5 = 0xffffffff;
        }
        FUN_149181d3e(lVar3,&local_e4,uVar5,1);
        if (1.0 <= param_3) {
          param_3 = 1.0;
        }
        if (param_3 <= 0.0) {
          param_3 = 0.0;
        }
        local_dc = (0.0 - local_dc) * param_3 + local_dc;
        local_e0 = ((float)dVar1 - local_e0) * param_3 + local_e0;
        local_e4 = ((float)dVar2 - local_e4) * param_3 + local_e4;
        uVar5 = (uint)*(ushort *)(param_5 + 0xc);
        if (*(ushort *)(param_5 + 0xc) == 0xffff) {
          uVar5 = 0xffffffff;
        }
      }
      uStack_68 = 0;
      uStack_6c = 0;
      uStack_70 = 0;
      uStack_74 = 0;
      local_78 = 0;
      uStack_7c = 0;
      uStack_80 = 0;
      uStack_84 = 0;
      local_88 = 0;
      uStack_8c = 0;
      uStack_90 = 0;
      uStack_94 = 0;
      local_98 = 0;
      uStack_9c = 0;
      uStack_a0 = 0;
      uStack_a4 = 0;
      local_a8 = 0;
      uStack_ac = 0;
      uStack_b0 = 0;
      uStack_b4 = 0;
      local_b8 = 0;
      uStack_bc = 0;
      uStack_c0 = 0;
      uStack_c4 = 0;
      uStack_c8 = 0;
      uStack_cc = 0;
      uStack_d0 = 0;
      uStack_d4 = 0;
      uStack_d8 = 0;
      local_61 = 0;
      local_63 = 0;
      local_64 = 1;
      local_100 = 0;
      local_108 = 0;
      FUN_14918c0c6(lVar3,uVar5,&local_e4,1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492574ae FUN_1492574ae body=154 status=ok
// SIG undefined FUN_1492574ae(void)

void FUN_1492574ae(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = (longlong *)*param_2;
  puVar2 = (undefined8 *)*param_2;
  uVar1 = *(undefined4 *)param_2[4];
  lVar3 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar4 = FUN_144828ac0(param_2 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar3 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar3 * 0x14));
  local_40 = *puVar2;
  local_38 = *(undefined4 *)(puVar2 + 1);
  FUN_1492575c0(*(undefined8 *)(param_1 + 0xc0),&local_40,uVar1,uVar4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925754a FUN_14925754a body=117 status=ok
// SIG undefined FUN_14925754a(void)

void FUN_14925754a(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_1492575c0(param_1 + 0x10,&local_28,*(undefined4 *)(param_1 + 0x200),param_1 + 0x208);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492575c0 FUN_1492575c0 body=198 status=ok
// SIG undefined FUN_1492575c0(void)

void FUN_1492575c0(longlong param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x1b0) != 0) &&
     (FUN_14924b442(param_4,(int)param_2[1]), 0 < (int)param_2[1])) {
    lVar4 = 0;
    lVar2 = 0;
    lVar3 = 0;
    do {
      puVar1 = (undefined4 *)(*param_2 + 8 + lVar2);
      local_68 = *puVar1;
      uStack_64 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_5c = puVar1[3];
      local_78 = *param_4 + lVar4;
      FUN_14925726e(param_1,*param_2 + lVar2,param_3,&local_68);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x18;
      lVar4 = lVar4 + 0x20;
    } while (lVar3 < (int)param_2[1]);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149257688 FUN_149257688 body=128 status=ok
// SIG undefined FUN_149257688(void)

void FUN_149257688(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar1 = *(undefined4 *)puVar3[4];
  uVar5 = puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar3 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_14925775e(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar1,uVar5,uVar2,uVar7);
  return;
}



// FUNCTION 149257708 FUN_149257708 body=86 status=ok
// SIG undefined FUN_149257708(void)

void FUN_149257708(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14925775e(param_1 + 0x10,param_1 + 0x1f0,*(undefined4 *)(param_1 + 0x1f8),param_1 + 0x200,
                *(undefined1 *)(param_1 + 0x218),param_1 + 0x220);
  return;
}



// FUNCTION 14925775e FUN_14925775e body=858 status=ok
// SIG undefined FUN_14925775e(void)

void FUN_14925775e(longlong param_1,undefined8 *param_2,float param_3,double *param_4,char param_5,
                  longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d4 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    local_d4[0] = 4;
    local_d0 = *param_2;
    cVar6 = FUN_144828dba(param_6,local_d4,lVar2);
    if (cVar6 != '\0') {
      uVar1 = *(ushort *)(param_6 + 0xc);
      uVar7 = (uint)uVar1;
      uVar5 = 0xffffffff;
      if ((((uVar7 == 0xffff) || (uVar5 = uVar7, *(int *)(lVar2 + 0xc0) <= (int)(uint)uVar1)) ||
          (lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
          lVar8 == 0)) || (*(char *)(lVar8 + 0x10) != '\x04')) {
        uVar7 = uVar5;
        lVar8 = 0;
      }
      cVar6 = *(char *)(lVar8 + 0x211);
      local_e8 = DAT_14c846490;
      uStack_e0 = DAT_14c846498;
      local_f8 = DAT_14c846480;
      uStack_f0 = DAT_14c846488;
      uVar13 = (undefined4)DAT_14c8464a0;
      uVar14 = DAT_14c8464a0._4_4_;
      uVar15 = (undefined4)DAT_14c8464a8;
      uVar16 = DAT_14c8464a8._4_4_;
      dVar17 = DAT_14c8464c0;
      dVar18 = DAT_14c8464c8;
      dVar9 = DAT_14c8464b0;
      uVar10 = DAT_14c8464b8;
      dVar11 = DAT_14c8464d0;
      uVar12 = uRam000000014c8464d8;
      if (param_5 == '\x01') {
        FUN_14486750c(lVar2,&local_c8,uVar7,0);
        local_e8 = local_b8;
        uStack_e0 = uStack_b0;
        local_f8 = local_c8;
        uStack_f0 = uStack_c0;
        uVar13 = local_a8._0_4_;
        uVar14 = local_a8._4_4_;
        uVar15 = local_a8._8_4_;
        uVar16 = local_a8._12_4_;
        dVar17 = local_88;
        dVar18 = dStack_80;
        dVar9 = local_98;
        uVar10 = uStack_90;
        dVar11 = local_78;
        uVar12 = uStack_70;
      }
      dVar3 = (double)CONCAT44(uVar16,uVar15);
      dVar4 = (double)CONCAT44(uVar14,uVar13);
      if (cVar6 == '\x05') {
        if (ABS(param_3 + -1.0) <= 1e-08) {
          dVar17 = *param_4;
          dVar18 = param_4[1];
          dVar11 = param_4[2];
          uVar12 = 0;
        }
        else {
          if (1.0 <= param_3) {
            param_3 = 1.0;
          }
          if (param_3 <= 0.0) {
            param_3 = 0.0;
          }
          dVar4 = (double)param_3;
          dVar17 = (*param_4 - dVar17) * dVar4 + dVar17;
          dVar11 = (param_4[2] - dVar11) * dVar4 + dVar11;
          dVar18 = (param_4[1] - dVar18) * dVar4 + dVar18;
          uVar12 = 0;
          dVar4 = (double)CONCAT44(uVar14,uVar13);
          dVar3 = (double)CONCAT44(uVar16,uVar15);
        }
      }
      else {
        dVar4 = (double)CONCAT44(uVar14,uVar13);
        dVar3 = (double)CONCAT44(uVar16,uVar15);
        if (cVar6 == '\x04') {
          if (ABS(param_3 + -1.0) <= 1e-08) {
            dVar9 = param_4[2];
            uVar10 = 0;
            dVar4 = *param_4;
            dVar3 = param_4[1];
          }
          else {
            if (1.0 <= param_3) {
              param_3 = 1.0;
            }
            if (param_3 <= 0.0) {
              param_3 = 0.0;
            }
            dVar3 = (double)param_3;
            dVar9 = (param_4[2] - dVar9) * dVar3 + dVar9;
            uVar10 = 0;
            dVar4 = (*param_4 - (double)CONCAT44(uVar14,uVar13)) * dVar3 +
                    (double)CONCAT44(uVar14,uVar13);
            dVar3 = (param_4[1] - (double)CONCAT44(uVar16,uVar15)) * dVar3 +
                    (double)CONCAT44(uVar16,uVar15);
          }
        }
      }
      uVar13 = (undefined4)((ulonglong)dVar3 >> 0x20);
      if (param_5 == '\0') {
        uVar7 = 0xffffffff;
        if (*(ushort *)(param_6 + 0xc) != 0xffff) {
          uVar7 = (uint)*(ushort *)(param_6 + 0xc);
        }
        local_b8 = local_e8;
        uStack_b0 = uStack_e0;
        local_c8 = local_f8;
        uStack_c0 = uStack_f0;
        local_a8._8_4_ = SUB84(dVar3,0);
        local_a8._0_8_ = dVar4;
        local_a8._12_4_ = uVar13;
        local_108 = 0;
        local_110 = 0;
        local_118 = 1;
        local_98 = dVar9;
        uStack_90 = uVar10;
        local_88 = dVar17;
        dStack_80 = dVar18;
        local_78 = dVar11;
        uStack_70 = uVar12;
        FUN_140122cc6(lVar2,uVar7,&local_c8,0);
      }
      else if (param_5 == '\x01') {
        uVar7 = 0xffffffff;
        if (*(ushort *)(param_6 + 0xc) != 0xffff) {
          uVar7 = (uint)*(ushort *)(param_6 + 0xc);
        }
        local_b8 = local_e8;
        uStack_b0 = uStack_e0;
        local_c8 = local_f8;
        uStack_c0 = uStack_f0;
        local_a8._8_4_ = SUB84(dVar3,0);
        local_a8._0_8_ = dVar4;
        local_a8._12_4_ = uVar13;
        local_108 = 0;
        local_110 = 0;
        local_118 = 1;
        local_98 = dVar9;
        uStack_90 = uVar10;
        local_88 = dVar17;
        dStack_80 = dVar18;
        local_78 = dVar11;
        uStack_70 = uVar12;
        FUN_144831e8e(lVar2,uVar7,&local_c8,0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149257aba FUN_149257aba body=128 status=ok
// SIG undefined FUN_149257aba(void)

void FUN_149257aba(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar1 = *(undefined4 *)puVar3[4];
  uVar5 = puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar3 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_149257b90(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar1,uVar5,uVar2,uVar7);
  return;
}



// FUNCTION 149257b3a FUN_149257b3a body=86 status=ok
// SIG undefined FUN_149257b3a(void)

void FUN_149257b3a(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149257b90(param_1 + 0x10,param_1 + 0x1f0,*(undefined4 *)(param_1 + 0x1f8),param_1 + 0x200,
                *(undefined1 *)(param_1 + 0x218),param_1 + 0x220);
  return;
}



// FUNCTION 149257b90 FUN_149257b90 body=934 status=ok
// SIG undefined FUN_149257b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149257b90(longlong param_1,undefined8 *param_2,float param_3,undefined8 param_4,
                  char param_5,longlong param_6)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined1 local_170;
  undefined1 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d4 [4];
  undefined8 local_d0;
  undefined1 local_c8 [12];
  undefined4 uStack_bc;
  undefined1 local_b8 [12];
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
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_d4[0] = 4;
    local_d0 = *param_2;
    cVar4 = FUN_144828dba(param_6,local_d4,lVar1);
    if (cVar4 != '\0') {
      local_118 = DAT_14c8464a0;
      uStack_110 = DAT_14c8464a8;
      local_108 = DAT_14c8464b0;
      uStack_100 = DAT_14c8464b8;
      local_f8 = DAT_14c8464c0;
      uStack_f0 = DAT_14c8464c8;
      local_e8 = (undefined4)DAT_14c8464d0;
      uStack_e4 = DAT_14c8464d0._4_4_;
      uStack_e0 = uRam000000014c8464d8;
      uStack_dc = uRam000000014c8464dc;
      uVar8 = (undefined4)DAT_14c846490;
      uVar9 = DAT_14c846490._4_4_;
      uVar19 = (undefined4)DAT_14c846498;
      uVar20 = DAT_14c846498._4_4_;
      uVar21 = (undefined4)DAT_14c846480;
      uVar22 = DAT_14c846480._4_4_;
      uVar23 = (undefined4)DAT_14c846488;
      uVar24 = DAT_14c846488._4_4_;
      if (param_5 == '\x01') {
        uVar5 = 0xffffffff;
        if (*(ushort *)(param_6 + 0xc) != 0xffff) {
          uVar5 = (uint)*(ushort *)(param_6 + 0xc);
        }
        FUN_14486750c(lVar1,local_c8,uVar5,0);
        local_118 = CONCAT44(uStack_a4,local_a8);
        uStack_110 = CONCAT44(uStack_9c,uStack_a0);
        local_108 = CONCAT44(uStack_94,local_98);
        uStack_100 = CONCAT44(uStack_8c,uStack_90);
        local_f8 = local_88;
        uStack_f0 = uStack_80;
        local_e8 = (undefined4)local_78;
        uStack_e4 = local_78._4_4_;
        uStack_e0 = (undefined4)uStack_70;
        uStack_dc = uStack_70._4_4_;
        uVar8 = local_b8._0_4_;
        uVar9 = local_b8._4_4_;
        uVar19 = local_b8._8_4_;
        uVar20 = uStack_ac;
        uVar21 = local_c8._0_4_;
        uVar22 = local_c8._4_4_;
        uVar23 = local_c8._8_4_;
        uVar24 = uStack_bc;
      }
      FUN_144a7484c(param_4,&local_138);
      if (1e-08 < ABS(param_3 + -1.0)) {
        if (1.0 <= param_3) {
          param_3 = 1.0;
        }
        if (param_3 <= 0.0) {
          param_3 = 0.0;
        }
        local_158 = uVar21;
        uStack_154 = uVar22;
        uStack_150 = uVar23;
        uStack_14c = uVar24;
        local_148 = uVar8;
        uStack_144 = uVar9;
        uStack_140 = uVar19;
        uStack_13c = uVar20;
        FUN_144a44da6(local_c8,&local_158,&local_138,(double)param_3);
        dVar10 = (double)local_b8._0_8_ * (double)local_b8._0_8_ +
                 (double)local_c8._0_8_ * (double)local_c8._0_8_;
        dVar15 = stack0xffffffffffffff50 * stack0xffffffffffffff50 +
                 stack0xffffffffffffff40 * stack0xffffffffffffff40;
        auVar12._0_8_ = dVar10 + dVar15;
        auVar12._8_8_ = dVar10 + dVar15;
        uVar6 = -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_);
        auVar13 = sqrtpd(auVar12,auVar12);
        auVar13 = divpd(_DAT_149934d80,auVar13);
        auVar17._0_8_ = auVar13._0_8_ * (double)local_b8._0_8_;
        auVar17._8_8_ = auVar13._8_8_ * stack0xffffffffffffff50;
        uVar3 = (ulonglong)((double)local_c8._0_8_ * auVar13._0_8_) &
                -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
        local_138 = (undefined4)uVar3;
        uStack_134 = (undefined4)(uVar3 >> 0x20);
        uVar3 = (ulonglong)(stack0xffffffffffffff40 * auVar13._8_8_) & uVar6;
        uStack_130 = (undefined4)uVar3;
        uStack_12c = (undefined4)(uVar3 >> 0x20);
        auVar13._8_4_ = (int)uVar6;
        auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
        auVar13._12_4_ = (int)(uVar6 >> 0x20);
        local_128 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar17,auVar13);
      }
      dVar10 = local_128._0_8_;
      dVar15 = local_128._8_8_;
      dVar11 = dVar10 * dVar10 +
               (double)CONCAT44(uStack_134,local_138) * (double)CONCAT44(uStack_134,local_138);
      dVar16 = dVar15 * dVar15 +
               (double)CONCAT44(uStack_12c,uStack_130) * (double)CONCAT44(uStack_12c,uStack_130);
      auVar14._0_8_ = dVar11 + dVar16;
      auVar14._8_8_ = dVar11 + dVar16;
      uVar7 = -(ulonglong)(1e-08 <= auVar14._8_8_);
      auVar13 = sqrtpd(auVar14,auVar14);
      auVar13 = divpd(_DAT_149934d80,auVar13);
      auVar18._0_8_ = auVar13._0_8_ * dVar10;
      auVar18._8_8_ = auVar13._8_8_ * dVar15;
      uVar3 = (ulonglong)((double)CONCAT44(uStack_134,local_138) * auVar13._0_8_) &
              -(ulonglong)(1e-08 <= auVar14._0_8_);
      uVar6 = (ulonglong)((double)CONCAT44(uStack_12c,uStack_130) * auVar13._8_8_) & uVar7;
      uVar8 = (undefined4)uVar6;
      uVar9 = (undefined4)(uVar6 >> 0x20);
      auVar2._8_4_ = (int)uVar7;
      auVar2._0_8_ = -(ulonglong)(1e-08 <= auVar14._0_8_);
      auVar2._12_4_ = (int)(uVar7 >> 0x20);
      auVar13 = blendvpd(_DAT_149935300,auVar18,auVar2);
      if (param_5 == '\0') {
        uVar5 = 0xffffffff;
        if (*(ushort *)(param_6 + 0xc) != 0xffff) {
          uVar5 = (uint)*(ushort *)(param_6 + 0xc);
        }
        local_c8._8_4_ = uVar8;
        local_c8._0_8_ = uVar3;
        uStack_bc = uVar9;
        local_78 = CONCAT44(uStack_e4,local_e8);
        uStack_70 = CONCAT44(uStack_dc,uStack_e0);
        local_a8 = (undefined4)local_118;
        uStack_a4 = local_118._4_4_;
        uStack_a0 = (undefined4)uStack_110;
        uStack_9c = uStack_110._4_4_;
        local_98 = (undefined4)local_108;
        uStack_94 = local_108._4_4_;
        uStack_90 = (undefined4)uStack_100;
        uStack_8c = uStack_100._4_4_;
        local_88 = local_f8;
        uStack_80 = uStack_f0;
        local_168 = 0;
        local_170 = 0;
        local_178 = 1;
        _local_b8 = auVar13;
        FUN_140122cc6(lVar1,uVar5,local_c8,0);
      }
      else if (param_5 == '\x01') {
        uVar5 = 0xffffffff;
        if (*(ushort *)(param_6 + 0xc) != 0xffff) {
          uVar5 = (uint)*(ushort *)(param_6 + 0xc);
        }
        local_c8._8_4_ = uVar8;
        local_c8._0_8_ = uVar3;
        uStack_bc = uVar9;
        local_78 = CONCAT44(uStack_e4,local_e8);
        uStack_70 = CONCAT44(uStack_dc,uStack_e0);
        local_a8 = (undefined4)local_118;
        uStack_a4 = local_118._4_4_;
        uStack_a0 = (undefined4)uStack_110;
        uStack_9c = uStack_110._4_4_;
        local_98 = (undefined4)local_108;
        uStack_94 = local_108._4_4_;
        uStack_90 = (undefined4)uStack_100;
        uStack_8c = uStack_100._4_4_;
        local_88 = local_f8;
        uStack_80 = uStack_f0;
        local_168 = 0;
        local_170 = 0;
        local_178 = 1;
        _local_b8 = auVar13;
        FUN_144831e8e(lVar1,uVar5,local_c8,0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149257f38 FUN_149257f38 body=154 status=ok
// SIG undefined FUN_149257f38(void)

void FUN_149257f38(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = (longlong *)*param_2;
  puVar2 = (undefined8 *)*param_2;
  uVar1 = *(undefined4 *)param_2[4];
  lVar3 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar4 = FUN_144828ac0(param_2 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar3 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar3 * 0x14));
  local_40 = *puVar2;
  local_38 = *(undefined4 *)(puVar2 + 1);
  FUN_14925804a(*(undefined8 *)(param_1 + 0xc0),&local_40,uVar1,uVar4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149257fd4 FUN_149257fd4 body=117 status=ok
// SIG undefined FUN_149257fd4(void)

void FUN_149257fd4(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_14925804a(param_1 + 0x10,&local_28,*(undefined4 *)(param_1 + 0x200),param_1 + 0x208);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925804a FUN_14925804a body=218 status=ok
// SIG undefined FUN_14925804a(void)

void FUN_14925804a(longlong param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x1b0) != 0) &&
     (FUN_14924b442(param_4,(int)param_2[1]), 0 < (int)param_2[1])) {
    lVar5 = 0;
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar2 = *param_2;
      local_58 = *(undefined8 *)(lVar2 + 0x18 + lVar3);
      puVar1 = (undefined4 *)(lVar2 + 8 + lVar3);
      local_68 = *puVar1;
      uStack_64 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_5c = puVar1[3];
      local_70 = *param_4 + lVar5;
      local_78 = *(undefined1 *)(lVar2 + 0x20 + lVar3);
      FUN_149257b90(param_1,lVar2 + lVar3,param_3,&local_68);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x28;
      lVar5 = lVar5 + 0x20;
    } while (lVar4 < (int)param_2[1]);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149258126 FUN_149258126 body=128 status=ok
// SIG undefined FUN_149258126(void)

void FUN_149258126(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar1 = *(undefined4 *)puVar3[4];
  uVar5 = puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar3 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_1492581fc(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar1,uVar5,uVar2,uVar7);
  return;
}



// FUNCTION 1492581a6 FUN_1492581a6 body=86 status=ok
// SIG undefined FUN_1492581a6(void)

void FUN_1492581a6(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492581fc(param_1 + 0x10,param_1 + 0x1f0,*(undefined4 *)(param_1 + 0x1f8),param_1 + 0x200,
                *(undefined1 *)(param_1 + 0x260),param_1 + 0x268);
  return;
}



// FUNCTION 1492581fc FUN_1492581fc body=656 status=ok
// SIG undefined FUN_1492581fc(void)

void FUN_1492581fc(longlong param_1,undefined8 *param_2,float param_3,undefined8 *param_4,
                  char param_5,longlong param_6)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  undefined8 local_198 [12];
  undefined1 local_138 [100];
  undefined1 local_d4 [4];
  undefined8 local_d0;
  undefined8 local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_d4[0] = 4;
    local_d0 = *param_2;
    cVar2 = FUN_144828dba(param_6,local_d4,lVar1);
    if (cVar2 != '\0') {
      if (param_5 == '\0') {
        if (ABS(param_3 + -1.0) <= 1e-08) {
          uVar6 = 0xffffffff;
          if (*(ushort *)(param_6 + 0xc) != 0xffff) {
            uVar6 = (uint)*(ushort *)(param_6 + 0xc);
          }
          puVar4 = local_c8;
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar4 = *param_4;
            param_4 = param_4 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        else {
          uVar6 = (uint)*(ushort *)(param_6 + 0xc);
          if (uVar6 == 0xffff) {
            uVar6 = 0xffffffff;
          }
          FUN_144afced8(lVar1,local_138,uVar6,0);
          if (1.0 <= param_3) {
            param_3 = 1.0;
          }
          if (param_3 <= 0.0) {
            param_3 = 0.0;
          }
          FUN_14915b8da(local_198,local_138,param_4,param_3);
          uVar6 = (uint)*(ushort *)(param_6 + 0xc);
          if (*(ushort *)(param_6 + 0xc) == 0xffff) {
            uVar6 = 0xffffffff;
          }
          puVar4 = local_198;
          puVar5 = local_c8;
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
        }
        local_1a8 = 0;
        local_1b0 = 0;
        local_1b8 = 1;
        FUN_140122cc6(lVar1,uVar6,local_c8,0);
      }
      else if (param_5 == '\x01') {
        if (ABS(param_3 + -1.0) <= 1e-08) {
          uVar6 = 0xffffffff;
          if (*(ushort *)(param_6 + 0xc) != 0xffff) {
            uVar6 = (uint)*(ushort *)(param_6 + 0xc);
          }
          puVar4 = local_c8;
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar4 = *param_4;
            param_4 = param_4 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        else {
          uVar6 = (uint)*(ushort *)(param_6 + 0xc);
          if (uVar6 == 0xffff) {
            uVar6 = 0xffffffff;
          }
          FUN_14486750c(lVar1,local_138,uVar6,0);
          if (1.0 <= param_3) {
            param_3 = 1.0;
          }
          if (param_3 <= 0.0) {
            param_3 = 0.0;
          }
          FUN_14915b8da(local_198,local_138,param_4,param_3);
          uVar6 = (uint)*(ushort *)(param_6 + 0xc);
          if (*(ushort *)(param_6 + 0xc) == 0xffff) {
            uVar6 = 0xffffffff;
          }
          puVar4 = local_198;
          puVar5 = local_c8;
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
        }
        local_1a8 = 0;
        local_1b0 = 0;
        local_1b8 = 1;
        FUN_144831e8e(lVar1,uVar6,local_c8,0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14925848e FUN_14925848e body=454 status=ok
// SIG undefined FUN_14925848e(void)

undefined8 FUN_14925848e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_328 [32];
  undefined1 local_308;
  longlong local_2f8 [2];
  longlong local_2e8 [2];
  undefined **local_2d8;
  undefined1 local_2c8 [480];
  undefined1 local_e8;
  undefined8 local_e4;
  undefined1 local_dc;
  undefined1 local_db;
  undefined8 local_d8 [12];
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined4 local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_328;
  local_2d8 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(local_2c8);
  local_2d8 = &PTR_FUN_14bbf7590;
  local_db = 0;
  local_74 = 1;
  local_70 = 0;
  local_6c = 0;
  local_64 = 0xffff;
  local_60 = 0xffffffff;
  local_e4 = *(undefined8 *)(param_1 + 0x1f0);
  local_e8 = 4;
  local_dc = *(undefined1 *)(param_1 + 0x260);
  puVar2 = (undefined8 *)(param_1 + 0x200);
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_78 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_149258656(param_2);
  FUN_140056680(local_2e8,L"Item.Name");
  FUN_140056680(local_2f8,L"Control");
  local_308 = 1;
  FUN_1490fb142(param_2,local_2f8,local_2e8,1);
  if (local_2f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2e8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_2e8,L"Value");
  FUN_140056680(local_2f8,L"Transform");
  local_308 = 1;
  FUN_1490fb142(param_2,local_2f8,local_2e8,1);
  if (local_2f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2e8[0] != 0) {
    FUN_1400020a8();
  }
  local_2d8 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(local_2c8);
  if ((local_40 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149258656 FUN_149258656 body=211 status=ok
// SIG undefined FUN_149258656(void)

undefined8 * FUN_149258656(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_146700b86();
  param_1[2] = uVar1;
  uVar1 = FUN_146702aee();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14925872a FUN_14925872a body=90 status=ok
// SIG undefined FUN_14925872a(void)

void FUN_14925872a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[4];
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar5 = FUN_144828ac0(puVar1 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  FUN_149258800(*(undefined8 *)(param_1 + 0xc0),uVar2,uVar3,uVar5);
  return;
}



// FUNCTION 14925878a FUN_14925878a body=117 status=ok
// SIG undefined FUN_14925878a(void)

void FUN_14925878a(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149258800(local_1f8,param_1 + 8,param_1 + 0x14,param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149258800 FUN_149258800 body=103 status=ok
// SIG undefined FUN_149258800(void)

void FUN_149258800(longlong param_1,undefined8 param_2,undefined1 *param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  
  *param_3 = 0;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    cVar3 = FUN_144828dba(param_4,param_2,lVar2);
    if (cVar3 != '\0') {
      uVar1 = *(ushort *)(param_4 + 0xc);
      if ((((uVar1 != 0xffff) &&
           (*(uint *)(lVar2 + 0xc0) != (uint)uVar1 &&
            (int)(uint)uVar1 <= (int)*(uint *)(lVar2 + 0xc0))) &&
          (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
          lVar2 != 0)) && (*(char *)(lVar2 + 0x10) == '\x04')) {
        *param_3 = *(undefined1 *)(lVar2 + 0x33c);
      }
    }
  }
  return;
}



// FUNCTION 149258868 FUN_149258868 body=106 status=ok
// SIG undefined FUN_149258868(void)

void FUN_149258868(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBP;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar1 = *(undefined1 *)puVar2[8];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0xc,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_149258926(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff,uVar6);
  return;
}



// FUNCTION 1492588da FUN_1492588da body=75 status=ok
// SIG undefined FUN_1492588da(void)

void FUN_1492588da(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149258926(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200,*(undefined1 *)(param_1 + 0x210),
                param_1 + 0x218);
  return;
}



// FUNCTION 149258926 FUN_149258926 body=621 status=ok
// SIG undefined FUN_149258926(void)

void FUN_149258926(longlong param_1,char *param_2,undefined8 *param_3,undefined4 param_4,
                  longlong *param_5)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [40];
  undefined8 **local_70;
  void *local_68;
  uint local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x1b0);
  if (lVar3 != 0) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    if ((*param_2 == '\0' || *(longlong *)(param_2 + 4) == 0) ||
        DAT_14c87eb08 + 1U <= (uint)*(ushort *)(param_2 + 6)) {
      uVar2 = *(uint *)(param_3 + 1);
      if (1 < (int)uVar2) {
        local_70 = &local_58;
        local_68 = (void *)0x0;
        _Src = (void *)*param_3;
        local_60 = uVar2;
        FUN_1446dd670(&local_68,(ulonglong)uVar2,0);
        memcpy(local_68,_Src,(ulonglong)uVar2 * 2);
        iVar5 = *(int *)(lVar3 + 0xc0);
        if (0 < iVar5) {
          lVar6 = 0;
          do {
            lVar7 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + lVar6 * 8);
            if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) == '\x04')) {
              local_40 = lVar7;
              FUN_1444b5d22(&local_70,&local_40);
              iVar5 = *(int *)(lVar3 + 0xc0);
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < iVar5);
        }
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      if (*param_2 != '\x04') goto LAB_149258991;
      uStack_50 = 1;
      FUN_149192788(&local_58,0);
      *(undefined4 *)(local_58 + 1) = *(undefined4 *)(param_2 + 8);
      *local_58 = *(undefined8 *)param_2;
    }
    iVar5 = (int)param_5[1];
    if ((int)param_5[1] != (int)uStack_50) {
      *(undefined4 *)(param_5 + 1) = 0;
      if (*(int *)((longlong)param_5 + 0xc) < 0) {
        FUN_1492d06b4(param_5,0);
      }
      FUN_149250716(param_5,(int)uStack_50);
      iVar5 = (int)uStack_50;
    }
    if (0 < iVar5) {
      lVar7 = 0;
      lVar8 = 0;
      lVar6 = 0;
      do {
        FUN_144828dba(*param_5 + lVar7,(longlong)local_58 + lVar8,lVar3);
        lVar6 = lVar6 + 1;
        lVar8 = lVar8 + 0xc;
        lVar7 = lVar7 + 0x20;
      } while (lVar6 < (int)uStack_50);
    }
    lVar6 = param_5[1];
    if ((longlong)(int)lVar6 != 0) {
      lVar7 = *param_5;
      lVar8 = 0;
      do {
        uVar1 = *(ushort *)(lVar7 + 0xc + lVar8);
        if ((((uVar1 != 0xffff) && ((uint)*(ushort *)(lVar7 + 6 + lVar8) < DAT_14c87eb08 + 1U)) &&
            (*(longlong *)(lVar7 + 4 + lVar8) != 0)) &&
           (((*(char *)(lVar7 + lVar8) != '\0' &&
             (*(uint *)(lVar3 + 0xc0) != (uint)uVar1 &&
              (int)(uint)uVar1 <= (int)*(uint *)(lVar3 + 0xc0))) &&
            ((lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
             lVar4 != 0 && (*(char *)(lVar4 + 0x10) == '\x04')))))) {
          FUN_1491def88(lVar3,lVar4,param_4);
        }
        lVar8 = lVar8 + 0x20;
      } while ((longlong)(int)lVar6 * 0x20 != lVar8);
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_149258991:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149258b94 FUN_149258b94 body=102 status=ok
// SIG undefined FUN_149258b94(void)

void FUN_149258b94(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar1 = *(undefined4 *)puVar2[4];
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar5 = FUN_144828ac0(puVar2 + 8,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  FUN_149258c38(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar1,uVar5);
  return;
}



// FUNCTION 149258bfa FUN_149258bfa body=62 status=ok
// SIG undefined FUN_149258bfa(void)

void FUN_149258bfa(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149258c38(param_1 + 0x10,param_1 + 0x1f0,*(undefined4 *)(param_1 + 0x1f8),param_1 + 0x200);
  return;
}



// FUNCTION 149258c38 FUN_149258c38 body=142 status=ok
// SIG undefined FUN_149258c38(void)

void FUN_149258c38(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_3c[0] = 8;
    local_38 = *param_2;
    cVar2 = FUN_144828dba(param_4,local_3c,lVar1);
    if (cVar2 != '\0') {
      uVar3 = 0xffffffff;
      if (*(ushort *)(param_4 + 0xc) != 0xffff) {
        uVar3 = (uint)*(ushort *)(param_4 + 0xc);
      }
      FUN_14143b628(lVar1,uVar3,param_3,0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149258cc8 FUN_149258cc8 body=215 status=ok
// SIG undefined FUN_149258cc8(void)

void FUN_149258cc8(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar5 = puVar3[4];
  uVar6 = puVar3[8];
  uVar1 = *(undefined4 *)puVar3[0xc];
  uVar2 = *(undefined1 *)puVar3[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar3 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xc0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_149258e18(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar5,uVar6,uVar1,uVar2,uVar8,uVar9);
  return;
}



// FUNCTION 149258da8 FUN_149258da8 body=111 status=ok
// SIG undefined FUN_149258da8(void)

void FUN_149258da8(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149258e18(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1f8,param_1 + 0x200,
                *(undefined4 *)(param_1 + 0x260),*(undefined1 *)(param_1 + 0x264),param_1 + 0x268,
                param_1 + 0x288);
  return;
}



// FUNCTION 149258e18 FUN_149258e18 body=2263 status=ok
// SIG undefined FUN_149258e18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149258e18(longlong param_1,undefined8 *param_2,undefined8 *param_3,double *param_4,
                  float param_5,undefined1 param_6,longlong param_7,longlong param_8)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  double *pdVar14;
  double *pdVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar20 [16];
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_3a8 [32];
  undefined1 local_388;
  undefined1 local_380;
  undefined1 local_378;
  double local_368 [2];
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a0 [4];
  undefined8 local_29c;
  undefined1 local_294 [4];
  undefined8 local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8 [4];
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168 [4];
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    local_294[0] = 1;
    local_290 = *param_2;
    local_2a0[0] = 1;
    local_29c = *param_3;
    cVar9 = FUN_144828dba(param_7,local_294,lVar2);
    if ((cVar9 != '\0') && (cVar9 = FUN_144828dba(param_8,local_2a0,lVar2), cVar9 != '\0')) {
      uVar12 = 0xffffffff;
      if (*(ushort *)(param_8 + 0xc) != 0xffff) {
        uVar12 = (uint)*(ushort *)(param_8 + 0xc);
      }
      lVar13 = lVar2;
      uVar10 = FUN_14486750c(lVar2,&local_308,uVar12,0);
      auVar28 = _DAT_149934d80;
      local_338 = 0.0;
      dStack_330 = 0.0;
      local_348 = 0.0;
      dStack_340 = 0.0;
      dVar3 = local_2c8._0_8_;
      dVar7 = local_2c8._8_8_;
      dVar4 = local_2b8._0_8_;
      auVar18 = *(undefined1 (*) [16])(param_4 + 8);
      dVar5 = auVar18._0_8_;
      dVar8 = auVar18._8_8_;
      auVar1 = *(undefined1 (*) [16])(param_4 + 10);
      dVar6 = auVar1._0_8_;
      auVar18 = minpd(auVar18,local_2c8);
      auVar24 = minpd(auVar1,local_2b8);
      auVar19._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
      auVar19._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
      iVar11 = movmskpd(uVar10,auVar19);
      auVar18._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
      auVar18._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
      uVar12 = movmskpd((int)lVar13,auVar18);
      if ((uVar12 & 0x3fffffff) == 0 && iVar11 == 0) {
        dVar23 = *param_4;
        dVar22 = param_4[1];
        dVar26 = param_4[2];
        dVar27 = param_4[3];
        dVar31 = param_4[4] * dVar3;
        dVar21 = param_4[5] * dVar7;
        dVar29 = param_4[6] * dVar4;
        dVar30 = param_4[7] * local_2b8._8_8_;
        local_368[0] = dVar22 * local_2f8 * -1.0 +
                       dVar26 * dStack_300 + dVar27 * local_308 * 1.0 + dVar23 * dStack_2f0;
        local_368[1] = dVar23 * local_2f8 * 1.0 +
                       dVar27 * dStack_300 + dVar26 * local_308 * -1.0 + dVar22 * dStack_2f0;
        local_358._8_8_ =
             dVar26 * local_2f8 * -1.0 +
             ((local_308 * dVar23 * -1.0 + dVar27 * dStack_2f0) - dVar22 * dStack_300);
        local_358._0_8_ =
             dVar27 * local_2f8 * 1.0 +
             ((local_308 * dVar22 * 1.0 + dVar26 * dStack_2f0) - dVar23 * dStack_300);
        dVar26 = dVar21 * local_308 - dStack_300 * dVar31;
        dVar27 = dVar29 * dStack_300 - local_2f8 * dVar21;
        dVar23 = dVar31 * local_2f8 - local_308 * dVar29;
        dVar22 = dVar30 * dStack_2f0 - dStack_2f0 * dVar30;
        dVar27 = dVar27 + dVar27;
        dVar23 = dVar23 + dVar23;
        dVar26 = dVar26 + dVar26;
        dVar22 = dVar22 + dVar22;
        local_348 = (dVar26 * dStack_300 - local_2f8 * dVar23) + dStack_2f0 * dVar27 + dVar31 +
                    local_2e8;
        dStack_340 = (dVar27 * local_2f8 - dVar26 * local_308) + dStack_2f0 * dVar23 + dVar21 +
                     dStack_2e0;
        local_338 = (dVar23 * local_308 - dStack_300 * dVar27) + dStack_2f0 * dVar26 + dVar29 +
                    (double)CONCAT44(uStack_2d4,local_2d8);
        dStack_330 = (dVar22 * dStack_2f0 - dVar22 * dStack_2f0) + dStack_2f0 * dVar22 + dVar30 +
                     dStack_2d0;
      }
      else {
        dVar21 = dStack_300 + dStack_300;
        dVar23 = local_2f8 + local_2f8;
        dVar31 = local_308 * (local_308 + local_308);
        local_198 = (1.0 - (dVar31 + dStack_300 * dVar21)) * dVar4;
        dVar22 = (local_308 + local_308) * dStack_2f0;
        local_1a8 = (dVar21 * dStack_2f0 + local_308 * dVar23) * dVar4;
        dStack_1a0 = (dVar23 * dStack_300 - dVar22) * dVar4;
        local_1e8[0] = ((double)DAT_149934d80 - (local_2f8 * dVar23 + dStack_300 * dVar21)) * dVar3;
        dVar31 = (DAT_149934d80._8_8_ - (local_2f8 * dVar23 + dVar31)) * dVar7;
        local_1e8[1] = (dVar21 * local_308 + dVar23 * dStack_2f0) * dVar3;
        local_1b8 = (dVar23 * dStack_300 + dVar22) * dVar7;
        local_1e8[2] = (local_308 * dVar23 - dVar21 * dStack_2f0) * dVar3;
        local_1e8[3] = 0.0;
        local_1c8._8_4_ = SUB84(dVar31,0);
        local_1c8._0_8_ = (dVar21 * local_308 - dVar23 * dStack_2f0) * dVar7;
        local_1c8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = local_2e8;
        dStack_180 = dStack_2e0;
        local_178 = local_2d8;
        uStack_174 = uStack_2d4;
        uStack_170 = 0;
        uStack_16c = 0x3ff00000;
        dVar27 = *param_4;
        dVar29 = param_4[1];
        dVar30 = param_4[2];
        dVar25 = dVar29 + dVar29;
        dVar22 = dVar30 + dVar30;
        dVar26 = dVar27 * (dVar27 + dVar27);
        local_218 = (1.0 - (dVar26 + dVar29 * dVar25)) * dVar6;
        dVar23 = param_4[3];
        dVar31 = dVar22 * dVar23;
        dVar21 = (dVar27 + dVar27) * param_4[3];
        dVar23 = dVar25 * dVar23;
        local_228 = (dVar23 + *param_4 * dVar22) * dVar6;
        local_248 = (dVar25 * dVar27 - dVar31) * dVar8;
        dStack_220 = (dVar22 * dVar29 - dVar21) * dVar6;
        local_268 = ((double)DAT_149934d80 - (dVar30 * dVar22 + dVar29 * dVar25)) * dVar5;
        dStack_240 = (DAT_149934d80._8_8_ - (dVar30 * dVar22 + dVar26)) * dVar8;
        dStack_260 = (dVar25 * dVar27 + dVar31) * dVar5;
        local_238 = (dVar22 * dVar29 + dVar21) * dVar8;
        local_258 = (*param_4 * dVar22 - dVar23) * dVar5;
        uStack_250 = 0;
        uStack_230 = 0;
        uStack_210 = 0;
        local_208 = param_4[4];
        dStack_200 = param_4[5];
        local_1f8 = param_4[6];
        uStack_1f0 = 0x3ff0000000000000;
        FUN_1447fea8d(local_168);
        FUN_144a1c686(local_168,0x3e45798ee0000000);
        auVar24._8_8_ = -(ulonglong)(0.0 <= dVar7 * dVar8);
        auVar24._0_8_ = -(ulonglong)(0.0 <= dVar3 * dVar5);
        auVar18 = blendvpd(_DAT_149936790,auVar28,auVar24);
        uVar16 = -(ulonglong)(0.0 <= dVar4 * dVar6);
        dVar23 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
        dVar22 = auVar18._0_8_;
        local_168[2] = local_168[2] * dVar22;
        local_168[1] = local_168[1] * dVar22;
        local_168[0] = local_168[0] * dVar22;
        dVar22 = auVar18._8_8_;
        local_138 = local_138 * dVar22;
        local_140 = local_140 * dVar22;
        local_148 = dVar22 * local_148;
        local_118 = local_118 * dVar23;
        local_120 = local_120 * dVar23;
        local_128 = dVar23 * local_128;
        FUN_14481fd10(&local_288,local_168);
        dVar23 = local_278 * local_278 + local_288 * local_288;
        dVar22 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar20._0_8_ = dVar23 + dVar22;
        auVar20._8_8_ = dVar23 + dVar22;
        auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
        auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_);
        auVar18 = sqrtpd(auVar20,auVar20);
        auVar18 = divpd(auVar28,auVar18);
        auVar28._0_8_ = auVar18._0_8_ * local_278;
        auVar28._8_8_ = auVar18._8_8_ * dStack_270;
        local_358 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar28,auVar17);
        local_368[0] = (double)((ulonglong)(local_288 * auVar18._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_));
        local_368[1] = (double)((ulonglong)(dStack_280 * auVar18._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_));
        local_348 = local_108;
        dStack_340 = dStack_100;
        local_338 = local_f8;
        dStack_330 = 0.0;
      }
      dVar23 = local_2b8._8_8_ * auVar1._8_8_;
      local_328._8_4_ = SUB84(dVar7 * dVar8,0);
      local_328._0_8_ = dVar3 * dVar5;
      local_328._12_4_ = (int)((ulonglong)(dVar7 * dVar8) >> 0x20);
      local_318._8_4_ = SUB84(dVar23,0);
      local_318._0_8_ = dVar4 * dVar6;
      local_318._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      if (1e-08 < ABS(param_5 + -1.0)) {
        uVar12 = 0xffffffff;
        if (*(ushort *)(param_7 + 0xc) != 0xffff) {
          uVar12 = (uint)*(ushort *)(param_7 + 0xc);
        }
        FUN_14486750c(lVar2,local_168,uVar12,0);
        FUN_14915b8da(local_1e8,local_168,local_368);
        pdVar14 = local_1e8;
        pdVar15 = local_368;
        for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
          *pdVar15 = *pdVar14;
          pdVar14 = pdVar14 + 1;
          pdVar15 = pdVar15 + 1;
        }
      }
      uVar12 = 0xffffffff;
      if (*(ushort *)(param_7 + 0xc) != 0xffff) {
        uVar12 = (uint)*(ushort *)(param_7 + 0xc);
      }
      pdVar14 = local_368;
      pdVar15 = local_168;
      for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
        *pdVar15 = *pdVar14;
        pdVar14 = pdVar14 + 1;
        pdVar15 = pdVar15 + 1;
      }
      local_378 = 0;
      local_380 = 0;
      local_388 = param_6;
      FUN_144831e8e(lVar2,uVar12,local_168,0);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492596f0 FUN_1492596f0 body=556 status=ok
// SIG undefined FUN_1492596f0(void)

undefined8 FUN_1492596f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_358 [32];
  undefined1 local_338;
  longlong local_328 [2];
  longlong local_318 [2];
  undefined **local_308 [2];
  undefined1 local_2f8 [480];
  undefined1 local_118;
  undefined8 local_114;
  undefined1 local_10c;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8 [12];
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_90;
  undefined8 local_8c;
  undefined2 local_84;
  undefined4 local_80;
  undefined1 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined4 local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_308[0] = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  local_308[0] = &PTR_FUN_14bbfb080;
  local_100 = 0;
  local_94 = 1;
  local_90 = 0;
  local_8c = 0;
  local_84 = 0xffff;
  local_80 = 0xffffffff;
  local_70 = 0;
  local_6c = 0;
  local_64 = 0xffff;
  local_60 = 0xffffffff;
  local_108 = *(undefined8 *)(param_1 + 0x1f8);
  local_10c = 1;
  local_114 = *(undefined8 *)(param_1 + 0x1f0);
  local_118 = 1;
  puVar2 = (undefined8 *)(param_1 + 0x200);
  puVar3 = local_f8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_98 = *(undefined4 *)(param_1 + 0x260);
  FUN_14925991e(param_2,local_308);
  FUN_140056680(local_318,L"Parent.Name");
  FUN_140056680(local_328,L"Space");
  local_338 = 1;
  FUN_1490fb142(param_2,local_328,local_318,1);
  if (local_328[0] != 0) {
    FUN_1400020a8();
  }
  if (local_318[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_318,L"Child.Name");
  FUN_140056680(local_328,L"Bone");
  local_338 = 1;
  FUN_1490fb142(param_2,local_328,local_318,1);
  if (local_328[0] != 0) {
    FUN_1400020a8();
  }
  if (local_318[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_318,L"Transform");
  FUN_140056680(local_328,L"RelativeTransform");
  local_338 = 1;
  FUN_1490fb142(param_2,local_328,local_318,1);
  if (local_328[0] != 0) {
    FUN_1400020a8();
  }
  if (local_318[0] != 0) {
    FUN_1400020a8();
  }
  local_308[0] = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(local_2f8);
  if ((local_40 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925991e FUN_14925991e body=211 status=ok
// SIG undefined FUN_14925991e(void)

undefined8 * FUN_14925991e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1467015c2();
  param_1[2] = uVar1;
  uVar1 = FUN_146701958();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 1492599f2 FUN_1492599f2 body=233 status=ok
// SIG undefined FUN_1492599f2(void)

void FUN_1492599f2(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_RBX;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar6 = puVar4[4];
  uVar2 = *(undefined1 *)puVar4[8];
  uVar7 = puVar4[0xc];
  uVar1 = *(undefined4 *)puVar4[0x10];
  uVar3 = *(undefined1 *)puVar4[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(puVar4 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(*param_2 + 0xe0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  FUN_149259b68(*(undefined8 *)(param_1 + 0xc0),uVar5,uVar6,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff,uVar7,uVar1,uVar3,
                uVar9,uVar10);
  return;
}



// FUNCTION 149259aec FUN_149259aec body=123 status=ok
// SIG undefined FUN_149259aec(void)

void FUN_149259aec(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149259b68(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1fc,*(undefined1 *)(param_1 + 0x208),
                param_1 + 0x210,*(undefined4 *)(param_1 + 0x270),*(undefined1 *)(param_1 + 0x274),
                param_1 + 0x278,param_1 + 0x298);
  return;
}



// FUNCTION 149259b68 FUN_149259b68 body=289 status=ok
// SIG undefined FUN_149259b68(void)

void FUN_149259b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,float param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 local_128 [12];
  undefined8 local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (1e-08 <= param_6) {
    puVar2 = &DAT_14c846480;
    puVar3 = local_c8;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = &DAT_14c846480;
    puVar3 = local_128;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_140 = param_9;
    local_148 = local_c8;
    FUN_144828832(param_1,param_3,1);
    FUN_1459b4e90(param_1,param_5,local_c8,local_128);
    local_130 = param_8;
    local_138 = param_7;
    local_140 = CONCAT44(local_140._4_4_,param_6);
    local_148 = local_128;
    FUN_1401228d0(param_1,param_2,1,0);
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149259c8a FUN_149259c8a body=233 status=ok
// SIG undefined FUN_149259c8a(void)

void FUN_149259c8a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_RBX;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar6 = puVar4[4];
  uVar2 = *(undefined1 *)puVar4[8];
  uVar7 = puVar4[0xc];
  uVar1 = *(undefined4 *)puVar4[0x10];
  uVar3 = *(undefined1 *)puVar4[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(puVar4 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(*param_2 + 0xe0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  FUN_149259e00(*(undefined8 *)(param_1 + 0xc0),uVar5,uVar6,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff,uVar7,uVar1,uVar3,
                uVar9,uVar10);
  return;
}



// FUNCTION 149259d84 FUN_149259d84 body=123 status=ok
// SIG undefined FUN_149259d84(void)

void FUN_149259d84(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149259e00(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1fc,*(undefined1 *)(param_1 + 0x208),
                param_1 + 0x210,*(undefined4 *)(param_1 + 0x228),*(undefined1 *)(param_1 + 0x22c),
                param_1 + 0x230,param_1 + 0x250);
  return;
}



// FUNCTION 149259e00 FUN_149259e00 body=379 status=ok
// SIG undefined FUN_149259e00(void)

void FUN_149259e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 *param_5,float param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188 [12];
  undefined8 local_128 [4];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (1e-08 <= param_6) {
    puVar2 = &DAT_14c846480;
    puVar3 = local_c8;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = &DAT_14c846480;
    puVar3 = local_128;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = &DAT_14c846480;
    puVar3 = local_188;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    local_1a0 = (undefined8 *)param_9;
    local_1a8 = local_c8;
    FUN_144828832(param_1,param_3,1);
    local_190 = param_9;
    local_198 = param_8;
    local_1a8 = (undefined8 *)CONCAT71(local_1a8._1_7_,param_4);
    local_1a0 = local_128;
    FUN_14924a81e(param_1,param_2,0,param_3);
    local_108 = *param_5;
    uStack_104 = param_5[1];
    uStack_100 = param_5[2];
    uStack_fc = param_5[3];
    local_f8 = *(undefined8 *)(param_5 + 4);
    uStack_f0 = 0;
    FUN_1459b4e90(param_1,local_128,local_c8,local_188);
    local_190 = param_8;
    local_198 = CONCAT71(local_198._1_7_,param_7);
    local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,param_6);
    local_1a8 = local_188;
    FUN_1401228d0(param_1,param_2,1,0);
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149259f7c FUN_149259f7c body=233 status=ok
// SIG undefined FUN_149259f7c(void)

void FUN_149259f7c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_RBX;
  
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  uVar6 = puVar4[4];
  uVar2 = *(undefined1 *)puVar4[8];
  uVar7 = puVar4[0xc];
  uVar1 = *(undefined4 *)puVar4[0x10];
  uVar3 = *(undefined1 *)puVar4[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(puVar4 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(*param_2 + 0xe0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  FUN_14925a0f2(*(undefined8 *)(param_1 + 0xc0),uVar5,uVar6,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff,uVar7,uVar1,uVar3,
                uVar9,uVar10);
  return;
}



// FUNCTION 14925a076 FUN_14925a076 body=123 status=ok
// SIG undefined FUN_14925a076(void)

void FUN_14925a076(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14925a0f2(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1fc,*(undefined1 *)(param_1 + 0x208),
                param_1 + 0x210,*(undefined4 *)(param_1 + 0x230),*(undefined1 *)(param_1 + 0x234),
                param_1 + 0x238,param_1 + 600);
  return;
}



// FUNCTION 14925a0f2 FUN_14925a0f2 body=457 status=ok
// SIG undefined FUN_14925a0f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14925a0f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  double *param_5,float param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  ulonglong *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188 [12];
  ulonglong local_128 [2];
  undefined1 local_118 [16];
  undefined8 local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (1e-08 <= param_6) {
    puVar7 = &DAT_14c846480;
    puVar9 = local_c8;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar6 = &DAT_14c846480;
    puVar8 = local_128;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = &DAT_14c846480;
    puVar9 = local_188;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    local_1a0 = (ulonglong *)param_9;
    local_1a8 = local_c8;
    FUN_144828832(param_1,param_3,1);
    local_190 = param_9;
    local_198 = param_8;
    local_1a8 = (undefined8 *)CONCAT71(local_1a8._1_7_,param_4);
    local_1a0 = local_128;
    FUN_14924a81e(param_1,param_2,0,param_3);
    dVar1 = *param_5;
    dVar2 = param_5[1];
    dVar3 = param_5[2];
    dVar4 = param_5[3];
    dVar11 = dVar3 * dVar3 + dVar1 * dVar1;
    dVar14 = dVar4 * dVar4 + dVar2 * dVar2;
    auVar12._0_8_ = dVar11 + dVar14;
    auVar12._8_8_ = dVar11 + dVar14;
    uVar10 = -(ulonglong)(1e-08 <= auVar12._8_8_);
    auVar13 = sqrtpd(auVar12,auVar12);
    auVar13 = divpd(_DAT_149934d80,auVar13);
    auVar15._0_8_ = auVar13._0_8_ * dVar3;
    auVar15._8_8_ = auVar13._8_8_ * dVar4;
    local_128[0] = (ulonglong)(dVar1 * auVar13._0_8_) & -(ulonglong)(1e-08 <= auVar12._0_8_);
    local_128[1] = (ulonglong)(dVar2 * auVar13._8_8_) & uVar10;
    auVar13._8_4_ = (int)uVar10;
    auVar13._0_8_ = -(ulonglong)(1e-08 <= auVar12._0_8_);
    auVar13._12_4_ = (int)(uVar10 >> 0x20);
    local_118 = blendvpd(_DAT_149935300,auVar15,auVar13);
    FUN_1459b4e90(param_1,local_128,local_c8,local_188);
    local_190 = param_8;
    local_198 = CONCAT71(local_198._1_7_,param_7);
    local_1a0 = (ulonglong *)CONCAT44(local_1a0._4_4_,param_6);
    local_1a8 = local_188;
    FUN_1401228d0(param_1,param_2,1,0);
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925a2bc FUN_14925a2bc body=106 status=ok
// SIG undefined FUN_14925a2bc(void)

void FUN_14925a2bc(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBP;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar1 = *(undefined1 *)puVar2[0xc];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar6 = FUN_144828ac0(puVar2 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  FUN_14925a372(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff,uVar6);
  return;
}



// FUNCTION 14925a326 FUN_14925a326 body=75 status=ok
// SIG undefined FUN_14925a326(void)

void FUN_14925a326(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14925a372(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200,*(undefined1 *)(param_1 + 0x2c0),
                param_1 + 0x2c8);
  return;
}



// FUNCTION 14925a372 FUN_14925a372 body=353 status=ok
// SIG undefined FUN_14925a372(void)

void FUN_14925a372(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined1 local_180;
  undefined1 local_178;
  undefined8 local_168 [12];
  undefined8 local_108 [12];
  undefined1 local_a4 [4];
  undefined8 local_a0;
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    local_a4[0] = 2;
    local_a0 = *param_2;
    cVar3 = FUN_144828dba(param_5,local_a4,lVar2);
    if (cVar3 != '\0') {
      puVar6 = local_108;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *param_3;
        param_3 = param_3 + 1;
        puVar6 = puVar6 + 1;
      }
      if (param_4 == '\x01') {
        uVar1 = *(ushort *)(param_5 + 0xc);
        if ((uVar1 == 0xffff) ||
           (*(uint *)(lVar2 + 0xc0) == (uint)uVar1 ||
            (int)*(uint *)(lVar2 + 0xc0) < (int)(uint)uVar1)) {
          puVar6 = &DAT_14c846480;
          puVar7 = local_98;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          FUN_14449ec9a(lVar2,local_98,
                        *(undefined8 *)(*(longlong *)(lVar2 + 0xb8) + (ulonglong)(uint)uVar1 * 8),2)
          ;
        }
        FUN_1449437a2(local_108,local_168,local_98);
        puVar6 = local_168;
        puVar7 = local_108;
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      uVar5 = 0xffffffff;
      if (*(ushort *)(param_5 + 0xc) != 0xffff) {
        uVar5 = (uint)*(ushort *)(param_5 + 0xc);
      }
      puVar6 = local_108;
      puVar7 = local_98;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      local_178 = 0;
      local_180 = 0;
      local_188 = 1;
      FUN_140122cc6(lVar2,uVar5,local_98,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925a4d4 FUN_14925a4d4 body=441 status=ok
// SIG undefined FUN_14925a4d4(void)

undefined8 FUN_14925a4d4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_318 [32];
  undefined1 local_2f8;
  longlong local_2e8 [2];
  longlong local_2d8 [2];
  undefined **local_2c8;
  undefined1 local_2b8 [480];
  undefined1 local_d8;
  undefined8 local_d4;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined8 local_c8 [12];
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined8 local_5c;
  undefined2 local_54;
  undefined4 local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_2c8 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(local_2b8);
  local_2c8 = &PTR_FUN_14bbf7590;
  local_68 = 0x3f800000;
  local_64 = 1;
  local_60 = 0;
  local_5c = 0;
  local_54 = 0xffff;
  local_50 = 0xffffffff;
  local_d4 = *(undefined8 *)(param_1 + 0x1f0);
  local_d8 = 2;
  local_cc = *(undefined1 *)(param_1 + 0x2c0);
  puVar2 = (undefined8 *)(param_1 + 0x200);
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_cb = 1;
  FUN_14925a68e(param_2);
  FUN_140056680(local_2d8,L"Item.Name");
  FUN_140056680(local_2e8,L"SpaceName");
  local_2f8 = 1;
  FUN_1490fb142(param_2,local_2e8,local_2d8,1);
  if (local_2e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2d8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_2d8,L"Value");
  FUN_140056680(local_2e8,L"Transform");
  local_2f8 = 1;
  FUN_1490fb142(param_2,local_2e8,local_2d8,1);
  if (local_2e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2d8[0] != 0) {
    FUN_1400020a8();
  }
  local_2c8 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(local_2b8);
  if ((local_38 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925a68e FUN_14925a68e body=211 status=ok
// SIG undefined FUN_14925a68e(void)

undefined8 * FUN_14925a68e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_14670250a();
  param_1[2] = uVar1;
  uVar1 = FUN_146702aee();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14925a762 FUN_14925a762 body=128 status=ok
// SIG undefined FUN_14925a762(void)

void FUN_14925a762(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar1 = *(undefined4 *)puVar3[4];
  uVar5 = puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar3 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_14925a838(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar1,uVar5,uVar2,uVar7);
  return;
}



// FUNCTION 14925a7e2 FUN_14925a7e2 body=86 status=ok
// SIG undefined FUN_14925a7e2(void)

void FUN_14925a7e2(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14925a838(param_1 + 0x10,param_1 + 0x1f0,*(undefined4 *)(param_1 + 0x1f8),param_1 + 0x200,
                *(undefined1 *)(param_1 + 0x260),param_1 + 0x268);
  return;
}



// FUNCTION 14925a838 FUN_14925a838 body=656 status=ok
// SIG undefined FUN_14925a838(void)

void FUN_14925a838(longlong param_1,undefined8 *param_2,float param_3,undefined8 *param_4,
                  char param_5,longlong param_6)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  undefined8 local_198 [12];
  undefined1 local_138 [100];
  undefined1 local_d4 [4];
  undefined8 local_d0;
  undefined8 local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_d4[0] = 2;
    local_d0 = *param_2;
    cVar2 = FUN_144828dba(param_6,local_d4,lVar1);
    if (cVar2 != '\0') {
      if (param_5 == '\0') {
        if (ABS(param_3 + -1.0) <= 1e-08) {
          uVar6 = 0xffffffff;
          if (*(ushort *)(param_6 + 0xc) != 0xffff) {
            uVar6 = (uint)*(ushort *)(param_6 + 0xc);
          }
          puVar4 = local_c8;
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar4 = *param_4;
            param_4 = param_4 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        else {
          uVar6 = (uint)*(ushort *)(param_6 + 0xc);
          if (uVar6 == 0xffff) {
            uVar6 = 0xffffffff;
          }
          FUN_144afced8(lVar1,local_138,uVar6,0);
          if (1.0 <= param_3) {
            param_3 = 1.0;
          }
          if (param_3 <= 0.0) {
            param_3 = 0.0;
          }
          FUN_14915b8da(local_198,local_138,param_4,param_3);
          uVar6 = (uint)*(ushort *)(param_6 + 0xc);
          if (*(ushort *)(param_6 + 0xc) == 0xffff) {
            uVar6 = 0xffffffff;
          }
          puVar4 = local_198;
          puVar5 = local_c8;
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
        }
        local_1a8 = 0;
        local_1b0 = 0;
        local_1b8 = 1;
        FUN_140122cc6(lVar1,uVar6,local_c8,0);
      }
      else if (param_5 == '\x01') {
        if (ABS(param_3 + -1.0) <= 1e-08) {
          uVar6 = 0xffffffff;
          if (*(ushort *)(param_6 + 0xc) != 0xffff) {
            uVar6 = (uint)*(ushort *)(param_6 + 0xc);
          }
          puVar4 = local_c8;
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar4 = *param_4;
            param_4 = param_4 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        else {
          uVar6 = (uint)*(ushort *)(param_6 + 0xc);
          if (uVar6 == 0xffff) {
            uVar6 = 0xffffffff;
          }
          FUN_14486750c(lVar1,local_138,uVar6,0);
          if (1.0 <= param_3) {
            param_3 = 1.0;
          }
          if (param_3 <= 0.0) {
            param_3 = 0.0;
          }
          FUN_14915b8da(local_198,local_138,param_4,param_3);
          uVar6 = (uint)*(ushort *)(param_6 + 0xc);
          if (*(ushort *)(param_6 + 0xc) == 0xffff) {
            uVar6 = 0xffffffff;
          }
          puVar4 = local_198;
          puVar5 = local_c8;
          for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
        }
        local_1a8 = 0;
        local_1b0 = 0;
        local_1b8 = 1;
        FUN_144831e8e(lVar1,uVar6,local_c8,0);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14925aaca FUN_14925aaca body=544 status=ok
// SIG undefined FUN_14925aaca(void)

undefined8 FUN_14925aaca(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_328 [32];
  undefined1 local_308;
  longlong local_2f8 [2];
  longlong local_2e8 [2];
  undefined **local_2d8;
  undefined1 local_2c8 [480];
  undefined1 local_e8;
  undefined8 local_e4;
  undefined1 local_dc;
  undefined1 local_db;
  undefined8 local_d8 [12];
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined4 local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_328;
  local_2d8 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(local_2c8);
  local_2d8 = &PTR_FUN_14bbf7590;
  local_db = 0;
  local_74 = 1;
  local_70 = 0;
  local_6c = 0;
  local_64 = 0xffff;
  local_60 = 0xffffffff;
  local_e4 = *(undefined8 *)(param_1 + 0x1f0);
  local_e8 = 2;
  local_dc = *(undefined1 *)(param_1 + 0x260);
  puVar2 = (undefined8 *)(param_1 + 0x200);
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_78 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_14925acec(param_2);
  FUN_140056680(local_2e8,L"Item.Name");
  FUN_140056680(local_2f8,L"Space");
  local_308 = 1;
  FUN_1490fb142(param_2,local_2f8,local_2e8,1);
  if (local_2f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2e8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_2e8,L"Space");
  FUN_140056680(local_2f8,L"SpaceType");
  local_308 = 1;
  FUN_1490fb142(param_2,local_2f8,local_2e8,1);
  if (local_2f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2e8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_2e8,L"Value");
  FUN_140056680(local_2f8,L"Transform");
  local_308 = 1;
  FUN_1490fb142(param_2,local_2f8,local_2e8,1);
  if (local_2f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2e8[0] != 0) {
    FUN_1400020a8();
  }
  local_2d8 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(local_2c8);
  if ((local_40 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925acec FUN_14925acec body=211 status=ok
// SIG undefined FUN_14925acec(void)

undefined8 * FUN_14925acec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1467027f8();
  param_1[2] = uVar1;
  uVar1 = FUN_146702aee();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14925adc0 FUN_14925adc0 body=170 status=ok
// SIG undefined FUN_14925adc0(void)

void FUN_14925adc0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  
  puVar5 = (undefined8 *)*param_2;
  uVar6 = *puVar5;
  uVar2 = *(undefined1 *)puVar5[4];
  uVar3 = *(undefined1 *)puVar5[8];
  uVar7 = puVar5[0xc];
  uVar1 = *(undefined4 *)puVar5[0x10];
  uVar4 = *(undefined1 *)puVar5[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(puVar5 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  FUN_1401228d0(*(undefined8 *)(param_1 + 0xc0),uVar6,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff,
                CONCAT71((int7)((ulonglong)unaff_RDI >> 8),uVar3) & 0xffffffff,uVar7,uVar1,uVar4,
                uVar9);
  return;
}



// FUNCTION 14925ae7a FUN_14925ae7a body=111 status=ok
// SIG undefined FUN_14925ae7a(void)

void FUN_14925ae7a(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1401228d0(param_1 + 0x10,param_1 + 0x1f0,*(undefined1 *)(param_1 + 0x1fc),
                *(undefined1 *)(param_1 + 0x1fd),param_1 + 0x200,*(undefined4 *)(param_1 + 0x260),
                *(undefined1 *)(param_1 + 0x264),param_1 + 0x268);
  return;
}



// FUNCTION 14925aeea FUN_14925aeea body=323 status=ok
// SIG undefined FUN_14925aeea(void)

void FUN_14925aeea(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 unaff_R14;
  ulonglong uVar9;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d1;
  undefined8 local_d0;
  undefined8 local_c8 [4];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar7 = (undefined8 *)*param_2;
  local_d0 = *puVar7;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)puVar7[4]);
  uVar9 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),*(undefined1 *)puVar7[8]);
  puVar2 = (undefined4 *)puVar7[0xc];
  uVar1 = *(undefined4 *)puVar7[0x10];
  local_d1 = *(undefined1 *)puVar7[0x14];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_e0 = FUN_144828ac0(puVar7 + 0x18,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  uVar4 = local_d0;
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  puVar7 = &DAT_14c846480;
  puVar8 = local_c8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_f8 = local_c8;
  local_f0 = local_e0;
  FUN_144828832(uVar3,local_d0,uVar6 & 0xffffffff,uVar9 & 0xffffffff);
  local_a8 = *puVar2;
  uStack_a4 = puVar2[1];
  uStack_a0 = puVar2[2];
  uStack_9c = puVar2[3];
  local_98 = *(undefined8 *)(puVar2 + 4);
  uStack_90 = 0;
  local_e8 = local_d1;
  local_f0 = CONCAT44(local_f0._4_4_,uVar1);
  local_f8 = local_c8;
  FUN_1401228d0(uVar3,uVar4,uVar6 & 0xffffffff,uVar9 & 0xffffffff);
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925b03e FUN_14925b03e body=40 status=ok
// SIG undefined FUN_14925b03e(void)

void FUN_14925b03e(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14925b066(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 14925b066 FUN_14925b066 body=268 status=ok
// SIG undefined FUN_14925b066(void)

void FUN_14925b066(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_R14;
  ulonglong uVar6;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  longlong local_f0;
  undefined1 local_e8;
  longlong local_e0;
  undefined1 local_c9;
  undefined8 local_c8 [4];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c9 = *(undefined1 *)(param_1 + 0x21c);
  uVar1 = *(undefined4 *)(param_1 + 0x218);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)(param_1 + 0x1fc));
  uVar6 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),*(undefined1 *)(param_1 + 0x1fd));
  puVar4 = &DAT_14c846480;
  puVar5 = local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_f8 = local_c8;
  local_f0 = param_1 + 0x220;
  FUN_144828832(param_2,param_1 + 0x1f0,uVar3 & 0xffffffff,uVar6 & 0xffffffff);
  local_a8 = *(undefined4 *)(param_1 + 0x200);
  uStack_a4 = *(undefined4 *)(param_1 + 0x204);
  uStack_a0 = *(undefined4 *)(param_1 + 0x208);
  uStack_9c = *(undefined4 *)(param_1 + 0x20c);
  local_98 = *(undefined8 *)(param_1 + 0x210);
  uStack_90 = 0;
  local_e8 = local_c9;
  local_f0 = CONCAT44(local_f0._4_4_,uVar1);
  local_f8 = local_c8;
  local_e0 = param_1 + 0x220;
  FUN_1401228d0(param_2,param_1 + 0x1f0,uVar3 & 0xffffffff,uVar6 & 0xffffffff);
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925b184 FUN_14925b184 body=40 status=ok
// SIG undefined FUN_14925b184(void)

void FUN_14925b184(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14925b1ac(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 14925b1ac FUN_14925b1ac body=267 status=ok
// SIG undefined FUN_14925b1ac(void)

void FUN_14925b1ac(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_R14;
  ulonglong uVar6;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  longlong local_f0;
  undefined1 local_e8;
  longlong local_e0;
  undefined1 local_c9;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c9 = *(undefined1 *)(param_1 + 0x224);
  uVar1 = *(undefined4 *)(param_1 + 0x220);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(undefined1 *)(param_1 + 0x1fc));
  uVar6 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),*(undefined1 *)(param_1 + 0x1fd));
  puVar4 = &DAT_14c846480;
  puVar5 = &local_c8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_f8 = &local_c8;
  local_f0 = param_1 + 0x228;
  FUN_144828832(param_2,param_1 + 0x1f0,uVar3 & 0xffffffff,uVar6 & 0xffffffff);
  local_c8._0_4_ = *(undefined4 *)(param_1 + 0x200);
  local_c8._4_4_ = *(undefined4 *)(param_1 + 0x204);
  uStack_c0 = *(undefined4 *)(param_1 + 0x208);
  uStack_bc = *(undefined4 *)(param_1 + 0x20c);
  local_b8 = *(undefined4 *)(param_1 + 0x210);
  uStack_b4 = *(undefined4 *)(param_1 + 0x214);
  uStack_b0 = *(undefined4 *)(param_1 + 0x218);
  uStack_ac = *(undefined4 *)(param_1 + 0x21c);
  local_e8 = local_c9;
  local_f0 = CONCAT44(local_f0._4_4_,uVar1);
  local_f8 = &local_c8;
  local_e0 = param_1 + 0x228;
  FUN_1401228d0(param_2,param_1 + 0x1f0,uVar3 & 0xffffffff,uVar6 & 0xffffffff);
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925b2b8 FUN_14925b2b8 body=341 status=ok
// SIG undefined FUN_14925b2b8(void)

void FUN_14925b2b8(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  undefined8 unaff_RDI;
  ulonglong uVar10;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)puVar3[4]);
  uVar10 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),*(undefined1 *)puVar3[8]);
  puVar5 = (undefined4 *)puVar3[0xc];
  uVar1 = *(undefined4 *)puVar3[0x10];
  uVar2 = *(undefined1 *)puVar3[0x14];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar3 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  local_98 = DAT_14c8464b0;
  uStack_90 = DAT_14c8464b8;
  local_a8 = DAT_14c8464a0;
  uStack_a0 = DAT_14c8464a8;
  local_b8 = DAT_14c846490;
  uStack_b0 = DAT_14c846498;
  local_c8 = (undefined4)DAT_14c846480;
  uStack_c4 = DAT_14c846480._4_4_;
  uStack_c0 = (undefined4)DAT_14c846488;
  uStack_bc = DAT_14c846488._4_4_;
  local_e8 = &local_c8;
  local_e0 = uVar8;
  FUN_144828832(uVar6,uVar4,uVar9 & 0xffffffff,uVar10 & 0xffffffff);
  local_88 = *puVar5;
  uStack_84 = puVar5[1];
  uStack_80 = puVar5[2];
  uStack_7c = puVar5[3];
  local_78 = *(undefined8 *)(puVar5 + 4);
  uStack_70 = 0;
  local_e0 = CONCAT44(local_e0._4_4_,uVar1);
  local_e8 = &local_c8;
  local_d8 = uVar2;
  local_d0 = uVar8;
  FUN_1401228d0(uVar6,uVar4,uVar9 & 0xffffffff,uVar10 & 0xffffffff);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925b41e FUN_14925b41e body=40 status=ok
// SIG undefined FUN_14925b41e(void)

void FUN_14925b41e(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14925b446(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 14925b446 FUN_14925b446 body=291 status=ok
// SIG undefined FUN_14925b446(void)

void FUN_14925b446(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  longlong local_e0;
  undefined1 local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar2 = *(undefined1 *)(param_1 + 0x21c);
  uVar1 = *(undefined4 *)(param_1 + 0x218);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(param_1 + 0x1fc));
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),*(undefined1 *)(param_1 + 0x1fd));
  local_98 = DAT_14c8464b0;
  uStack_90 = DAT_14c8464b8;
  local_a8 = DAT_14c8464a0;
  uStack_a0 = DAT_14c8464a8;
  local_b8 = DAT_14c846490;
  uStack_b0 = DAT_14c846498;
  local_c8 = (undefined4)DAT_14c846480;
  uStack_c4 = DAT_14c846480._4_4_;
  uStack_c0 = (undefined4)DAT_14c846488;
  uStack_bc = DAT_14c846488._4_4_;
  local_e8 = &local_c8;
  local_e0 = param_1 + 0x220;
  FUN_144828832(param_2,param_1 + 0x1f0,uVar3 & 0xffffffff,uVar4 & 0xffffffff);
  local_88 = *(undefined4 *)(param_1 + 0x200);
  uStack_84 = *(undefined4 *)(param_1 + 0x204);
  uStack_80 = *(undefined4 *)(param_1 + 0x208);
  uStack_7c = *(undefined4 *)(param_1 + 0x20c);
  local_78 = *(undefined8 *)(param_1 + 0x210);
  uStack_70 = 0;
  local_e0 = CONCAT44(local_e0._4_4_,uVar1);
  local_e8 = &local_c8;
  local_d8 = uVar2;
  local_d0 = param_1 + 0x220;
  FUN_1401228d0(param_2,param_1 + 0x1f0,uVar3 & 0xffffffff,uVar4 & 0xffffffff);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925b56a FUN_14925b56a body=247 status=ok
// SIG undefined FUN_14925b56a(void)

void FUN_14925b56a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  uVar2 = *(undefined1 *)param_2[4];
  uVar3 = *(undefined1 *)param_2[8];
  puVar6 = (undefined8 *)param_2[0xc];
  uVar1 = *(undefined4 *)param_2[0x10];
  uVar4 = *(undefined1 *)param_2[0x14];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_80 = FUN_144828ac0(param_2 + 0x18,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  local_70 = *puVar6;
  local_98 = &local_70;
  local_68 = *(undefined4 *)(puVar6 + 1);
  local_60 = *puVar5;
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_90 = uVar1;
  local_88 = uVar4;
  FUN_14925b8e8(*(undefined8 *)(param_1 + 0xc0),&local_60,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff,
                CONCAT71((int7)((ulonglong)unaff_RSI >> 8),uVar3) & 0xffffffff);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925b672 FUN_14925b672 body=182 status=ok
// SIG undefined FUN_14925b672(void)

void FUN_14925b672(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  undefined1 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_38 = *(undefined8 *)(param_1 + 0x208);
  local_58 = &local_38;
  local_30 = *(undefined4 *)(param_1 + 0x210);
  local_40 = param_1 + 0x220;
  local_48 = *(undefined1 *)(param_1 + 0x21c);
  local_50 = *(undefined4 *)(param_1 + 0x218);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_14925b8e8(param_1 + 0x10,&local_28,*(undefined1 *)(param_1 + 0x200),
                *(undefined1 *)(param_1 + 0x201));
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925b72a FUN_14925b72a body=246 status=ok
// SIG undefined FUN_14925b72a(void)

void FUN_14925b72a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 unaff_RBX;
  undefined8 unaff_RDI;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  uVar2 = *(undefined1 *)param_2[4];
  uVar3 = *(undefined1 *)param_2[8];
  puVar6 = (undefined8 *)param_2[0xc];
  uVar1 = *(undefined4 *)param_2[0x10];
  uVar4 = *(undefined1 *)param_2[0x14];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_80 = FUN_144828ac0(param_2 + 0x18,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  local_60 = *puVar6;
  local_98 = &local_60;
  local_58 = *(undefined4 *)(puVar6 + 1);
  local_70 = *puVar5;
  local_68 = *(undefined4 *)(puVar5 + 1);
  local_90 = uVar1;
  local_88 = uVar4;
  FUN_14925b8e8(*(undefined8 *)(param_1 + 0xc0),&local_70,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff,
                CONCAT71((int7)((ulonglong)unaff_RDI >> 8),uVar3) & 0xffffffff);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925b832 FUN_14925b832 body=180 status=ok
// SIG undefined FUN_14925b832(void)

void FUN_14925b832(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  undefined1 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  local_38 = *(undefined8 *)(param_1 + 0x208);
  local_58 = &local_38;
  local_30 = *(undefined4 *)(param_1 + 0x210);
  local_40 = param_1 + 0x220;
  local_48 = *(undefined1 *)(param_1 + 0x21c);
  local_50 = *(undefined4 *)(param_1 + 0x218);
  FUN_14925b8e8(param_1 + 0x10,&local_28,*(undefined1 *)(param_1 + 0x200),
                *(undefined1 *)(param_1 + 0x201));
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925b8e8 FUN_14925b8e8 body=295 status=ok
// SIG undefined FUN_14925b8e8(void)

void FUN_14925b8e8(undefined8 param_1,longlong *param_2,undefined4 param_3,ulonglong param_4,
                  longlong *param_5,undefined4 param_6,undefined1 param_7,longlong *param_8)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_8[1];
  if (iVar1 != (int)param_2[1]) {
    *(undefined4 *)(param_8 + 1) = 0;
    if (*(int *)((longlong)param_8 + 0xc) < 0) {
      FUN_1492d06b4(param_8,0);
    }
    FUN_14924b442(param_8,(int)param_2[1]);
    iVar1 = (int)param_2[1];
    param_4 = param_4 & 0xffffffff;
  }
  if ((0 < iVar1) && ((int)param_5[1] == iVar1)) {
    lVar4 = 0;
    lVar5 = 0;
    lVar3 = 0;
    lVar2 = 0;
    do {
      FUN_1401228d0(param_1,*param_2 + lVar3,param_3,param_4,*param_5 + lVar5,param_6,param_7,
                    *param_8 + lVar4);
      param_4 = param_4 & 0xffffffff;
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0xc;
      lVar5 = lVar5 + 0x60;
      lVar4 = lVar4 + 0x20;
    } while (lVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14925ba10 FUN_14925ba10 body=310 status=ok
// SIG undefined FUN_14925ba10(void)

undefined8 FUN_14925ba10(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [32];
  longlong *local_58 [2];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x1fd) == '\x01') {
    FUN_140056680(&local_38,L" Initial");
  }
  else {
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
  }
  uVar1 = FUN_1491d6d19();
  FUN_1406f1d90(uVar1,local_58,*(undefined1 *)(param_1 + 0x1f0));
  puVar2 = (undefined8 *)FUN_1447a1f4a(local_58);
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_40;
  _Src = (void *)*puVar2;
  if (lVar3 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar3 * 2);
  }
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  puVar5 = &DAT_149dfb77a;
  if ((int)uStack_30 != 0) {
    puVar5 = local_38;
  }
  puVar4 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar4 = local_48;
  }
  FUN_140002266(param_2,L"Set Transform - %s%s",puVar4,puVar5);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925bb48 FUN_14925bb48 body=243 status=ok
// SIG undefined FUN_14925bb48(void)

undefined8 FUN_14925bb48(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1491d6d19();
  FUN_1406f1d90(uVar1,local_48,*(undefined1 *)(param_1 + 0x1f0));
  puVar2 = (undefined8 *)FUN_1447a1f4a(local_48);
  local_38 = (undefined2 *)0x0;
  local_30 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_30;
  _Src = (void *)*puVar2;
  if (lVar3 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar3 * 2);
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  puVar4 = local_38;
  if (local_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Set Translation - %s",puVar4);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14925bc3c FUN_14925bc3c body=243 status=ok
// SIG undefined FUN_14925bc3c(void)

undefined8 FUN_14925bc3c(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1491d6d19();
  FUN_1406f1d90(uVar1,local_48,*(undefined1 *)(param_1 + 0x1f0));
  puVar2 = (undefined8 *)FUN_1447a1f4a(local_48);
  local_38 = (undefined2 *)0x0;
  local_30 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_30;
  _Src = (void *)*puVar2;
  if (lVar3 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar3 * 2);
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  puVar4 = local_38;
  if (local_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Set Rotation - %s",puVar4);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14925bd30 FUN_14925bd30 body=243 status=ok
// SIG undefined FUN_14925bd30(void)

undefined8 FUN_14925bd30(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1491d6d19();
  FUN_1406f1d90(uVar1,local_48,*(undefined1 *)(param_1 + 0x1f0));
  puVar2 = (undefined8 *)FUN_1447a1f4a(local_48);
  local_38 = (undefined2 *)0x0;
  local_30 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_30;
  _Src = (void *)*puVar2;
  if (lVar3 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar3 * 2);
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  puVar4 = local_38;
  if (local_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Set Scale - %s",puVar4);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14925be24 FUN_14925be24 body=283 status=ok
// SIG undefined FUN_14925be24(void)

undefined8 FUN_14925be24(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_288 [32];
  undefined **local_268 [2];
  undefined1 local_258 [480];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_268[0] = &PTR_FUN_14bb775c0;
  FUN_1412ca278(local_258);
  local_268[0] = &PTR_FUN_14bbfc390;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x3f800000;
  local_4c = 1;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1444888de(&local_78,param_1 + 0x1f0);
  local_68 = *(undefined2 *)(param_1 + 0x200);
  FUN_144756208(&local_60,param_1 + 0x208);
  local_50 = *(undefined4 *)(param_1 + 0x218);
  local_4c = *(undefined1 *)(param_1 + 0x21c);
  FUN_14925bf40(param_2,local_268);
  FUN_14925c014(local_268);
  if ((local_30 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925bf40 FUN_14925bf40 body=211 status=ok
// SIG undefined FUN_14925bf40(void)

undefined8 * FUN_14925bf40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_146703966();
  param_1[2] = uVar1;
  uVar1 = FUN_146703d04();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14925c014 FUN_14925c014 body=96 status=ok
// SIG undefined FUN_14925c014(void)

void FUN_14925c014(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbfc390;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 14925c074 FUN_14925c074 body=81 status=ok
// SIG undefined FUN_14925c074(void)

void FUN_14925c074(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)*param_2;
  lVar2 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar3 = FUN_144828ac0((undefined8 *)*param_2 + 4,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar2 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar2 * 0x14));
  FUN_14925c0fc(*(undefined8 *)(param_1 + 0xc0),uVar1,uVar3);
  return;
}



// FUNCTION 14925c0c6 FUN_14925c0c6 body=54 status=ok
// SIG undefined FUN_14925c0c6(void)

void FUN_14925c0c6(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14925c0fc(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1f8);
  return;
}



// FUNCTION 14925c0fc FUN_14925c0fc body=128 status=ok
// SIG undefined FUN_14925c0fc(void)

void FUN_14925c0fc(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    local_24[0] = 8;
    local_20 = *param_2;
    cVar2 = FUN_144828dba(param_3,local_24,lVar1);
    if (cVar2 != '\0') {
      uVar3 = 0xffffffff;
      if (*(ushort *)(param_3 + 0xc) != 0xffff) {
        uVar3 = (uint)*(ushort *)(param_3 + 0xc);
      }
      FUN_149190aaa(lVar1,uVar3,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925c17e FUN_14925c17e body=100 status=ok
// SIG undefined FUN_14925c17e(void)

void FUN_14925c17e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = (undefined8 *)((undefined8 *)*param_2)[4];
  FUN_14925ce30(*(undefined8 *)(param_1 + 0xc0),local_78,*(undefined8 *)*param_2);
  puVar2 = local_78;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925c1e4 FUN_14925c1e4 body=141 status=ok
// SIG undefined FUN_14925c1e4(void)

void FUN_14925c1e4(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_288 [32];
  undefined1 local_268 [480];
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_1412ca278(local_268);
  FUN_1490d751a(local_268);
  FUN_14925ce30(local_268,local_88,param_1 + 0x10);
  puVar2 = local_88;
  puVar3 = (undefined8 *)(param_1 + 0x70);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_140f8ccfc(local_268);
  if ((local_28 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925c272 FUN_14925c272 body=107 status=ok
// SIG undefined FUN_14925c272(void)

void FUN_14925c272(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = (undefined8 *)((undefined8 *)*param_2)[4];
  FUN_1449437a2(*(undefined8 *)*param_2,local_78,*(longlong *)(param_1 + 0xc0) + 0x70);
  puVar2 = local_78;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925c2de FUN_14925c2de body=146 status=ok
// SIG undefined FUN_14925c2de(void)

void FUN_14925c2de(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_288 [32];
  undefined1 local_268 [112];
  undefined1 local_1f8 [368];
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_1412ca278(local_268);
  FUN_1490d751a(local_268);
  FUN_1449437a2(param_1 + 0x10,local_88,local_1f8);
  puVar2 = local_88;
  puVar3 = (undefined8 *)(param_1 + 0x70);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_140f8ccfc(local_268);
  if ((local_28 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925c372 FUN_14925c372 body=302 status=ok
// SIG undefined FUN_14925c372(void)

void FUN_14925c372(longlong param_1,longlong *param_2)

{
  double dVar1;
  double *pdVar2;
  undefined1 (*pauVar3) [16];
  longlong lVar4;
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
  
  pdVar2 = *(double **)*param_2;
  pauVar3 = (undefined1 (*) [16])((longlong *)*param_2)[4];
  lVar4 = *(longlong *)(param_1 + 0xc0);
  dVar11 = *pdVar2 * *(double *)(lVar4 + 0xb0);
  dVar12 = pdVar2[1] * *(double *)(lVar4 + 0xb8);
  dVar10 = pdVar2[2] * *(double *)(lVar4 + 0xc0);
  dVar7 = *(double *)(lVar4 + 0x70);
  dVar8 = *(double *)(lVar4 + 0x78);
  dVar9 = *(double *)(lVar4 + 0x80);
  dVar1 = *(double *)(lVar4 + 0x88);
  dVar13 = dVar12 * dVar7 - dVar11 * dVar8;
  dVar14 = dVar10 * dVar8 - dVar12 * dVar9;
  dVar15 = dVar11 * dVar9 - dVar7 * dVar10;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  dVar6 = (dVar9 * dVar14 - dVar7 * dVar13) + *(double *)(lVar4 + 0x88) * dVar15 + dVar12 +
          *(double *)(lVar4 + 0x98);
  dVar12 = *(double *)(lVar4 + 0xa0);
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = (dVar13 * dVar8 - dVar15 * dVar9) + dVar1 * dVar14 + dVar11 +
                 *(double *)(lVar4 + 0x90);
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *pauVar3 = auVar5;
  *(double *)pauVar3[1] = dVar13 * dVar1 + dVar10 + (dVar15 * dVar7 - dVar14 * dVar8) + dVar12;
  return;
}



// FUNCTION 14925c4a0 FUN_14925c4a0 body=398 status=ok
// SIG undefined FUN_14925c4a0(void)

void FUN_14925c4a0(longlong param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_268 [32];
  undefined1 local_248 [112];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_1412ca278(local_248);
  FUN_1490d751a(local_248);
  local_198 = *(double *)(param_1 + 8) * local_198;
  dStack_190 = *(double *)(param_1 + 0x10) * dStack_190;
  local_188 = *(double *)(param_1 + 0x18) * local_188;
  dVar2 = dStack_190 * local_1d8 - local_198 * dStack_1d0;
  dVar3 = local_188 * dStack_1d0 - dStack_190 * local_1c8;
  dVar4 = local_198 * local_1c8 - local_1d8 * local_188;
  dVar3 = dVar3 + dVar3;
  dVar4 = dVar4 + dVar4;
  dVar2 = dVar2 + dVar2;
  dStack_1b0 = (local_1c8 * dVar3 - local_1d8 * dVar2) + dStack_1c0 * dVar4 + dStack_190 +
               dStack_1b0;
  auVar1._8_4_ = SUB84(dStack_1b0,0);
  auVar1._0_8_ = (dVar2 * dStack_1d0 - dVar4 * local_1c8) + dStack_1c0 * dVar3 + local_198 +
                 local_1b8;
  auVar1._12_4_ = (int)((ulonglong)dStack_1b0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar1;
  *(double *)(param_1 + 0x30) =
       dVar2 * dStack_1c0 + local_188 + (dVar4 * local_1d8 - dVar3 * dStack_1d0) + local_1a8;
  FUN_140f8ccfc(local_248);
  if ((local_60 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925c646 FUN_14925c646 body=515 status=ok
// SIG undefined FUN_14925c646(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14925c646(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auStack_278 [32];
  undefined1 local_258 [112];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined1 local_1a8 [16];
  double local_198;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_1412ca278(local_258);
  FUN_1490d751a(local_258);
  local_1c8 = *(double *)(param_1 + 8) - local_1c8;
  dStack_1c0 = *(double *)(param_1 + 0x10) - dStack_1c0;
  local_1b8 = *(double *)(param_1 + 0x18) - local_1b8;
  dVar1 = -local_1e8;
  dStack_1e0 = -dStack_1e0;
  local_1d8 = local_1d8 * -1.0;
  dStack_1d0 = dStack_1d0 * 1.0;
  dVar5 = local_1c8 * local_1d8 - dVar1 * local_1b8;
  dVar2 = dStack_1c0 * dVar1 - local_1c8 * dStack_1e0;
  dVar3 = local_1b8 * dStack_1e0 - dStack_1c0 * local_1d8;
  dVar3 = dVar3 + dVar3;
  dVar5 = dVar5 + dVar5;
  dVar2 = dVar2 + dVar2;
  auVar4 = divpd(_DAT_149934d80,local_1a8);
  *(double *)(param_1 + 0x20) =
       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_1a8._0_8_)) & auVar4._0_8_) *
       ((dVar2 * dStack_1e0 - dVar5 * local_1d8) + dStack_1d0 * dVar3 + local_1c8);
  *(double *)(param_1 + 0x28) =
       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_1a8._8_8_)) & auVar4._8_8_) *
       (local_1e8 * dVar2 + local_1d8 * dVar3 + dStack_1d0 * dVar5 + dStack_1c0);
  *(double *)(param_1 + 0x30) =
       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_198)) & (ulonglong)(1.0 / local_198))
       * (dStack_1d0 * dVar2 + local_1b8 + (dVar5 * dVar1 - dVar3 * dStack_1e0));
  FUN_140f8ccfc(local_258);
  if ((local_70 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925c84a FUN_14925c84a body=398 status=ok
// SIG undefined FUN_14925c84a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14925c84a(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar12 = *param_2 - *(double *)(param_1 + 0x90);
  dVar13 = param_2[1] - *(double *)(param_1 + 0x98);
  dVar8 = param_2[2] - *(double *)(param_1 + 0xa0);
  dVar7 = *(double *)(param_1 + 0x70);
  auVar2 = *(undefined1 (*) [16])(param_1 + 0xb0);
  dVar3 = -dVar7;
  dVar4 = -*(double *)(param_1 + 0x78);
  dVar10 = *(double *)(param_1 + 0x80) * -1.0;
  dVar11 = *(double *)(param_1 + 0x88) * 1.0;
  dVar14 = dVar12 * dVar10 - dVar3 * dVar8;
  dVar5 = dVar13 * dVar3 - dVar12 * dVar4;
  dVar6 = dVar8 * dVar4 - dVar13 * dVar10;
  dVar6 = dVar6 + dVar6;
  dVar14 = dVar14 + dVar14;
  dVar5 = dVar5 + dVar5;
  auVar9 = divpd(_DAT_149934d80,auVar2);
  dVar1 = *(double *)(param_1 + 0xc0);
  *param_3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar9._0_8_) *
             ((dVar5 * dVar4 - dVar14 * dVar10) + dVar11 * dVar6 + dVar12);
  param_3[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar9._8_8_) *
               (dVar7 * dVar5 + dVar10 * dVar6 + dVar11 * dVar14 + dVar13);
  param_3[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) & (ulonglong)(1.0 / dVar1))
               * (dVar11 * dVar5 + dVar8 + (dVar14 * dVar3 - dVar6 * dVar4));
  return;
}



// FUNCTION 14925c9d8 FUN_14925c9d8 body=210 status=ok
// SIG undefined FUN_14925c9d8(void)

void FUN_14925c9d8(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double *pdVar9;
  double *pdVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  pdVar9 = *(double **)*param_2;
  pdVar10 = (double *)((longlong *)*param_2)[4];
  lVar11 = *(longlong *)(param_1 + 0xc0);
  dVar12 = *pdVar9;
  dVar13 = pdVar9[1];
  dVar14 = pdVar9[2];
  dVar15 = pdVar9[3];
  dVar1 = *(double *)(lVar11 + 0x88);
  dVar2 = *(double *)(lVar11 + 0x88);
  dVar3 = *(double *)(lVar11 + 0x78);
  dVar4 = *(double *)(lVar11 + 0x78);
  dVar5 = *(double *)(lVar11 + 0x70);
  dVar6 = *(double *)(lVar11 + 0x70);
  dVar7 = *(double *)(lVar11 + 0x80);
  dVar8 = *(double *)(lVar11 + 0x80);
  *pdVar10 = dVar13 * dVar7 * -1.0 + dVar14 * dVar3 + dVar5 * dVar15 * 1.0 + dVar1 * dVar12;
  pdVar10[1] = dVar12 * dVar8 * 1.0 + dVar15 * dVar4 + dVar6 * dVar14 * -1.0 + dVar2 * dVar13;
  pdVar10[2] = dVar15 * dVar7 * 1.0 + ((dVar5 * dVar13 * 1.0 + dVar1 * dVar14) - dVar3 * dVar12);
  pdVar10[3] = dVar14 * dVar8 * -1.0 + ((dVar6 * dVar12 * -1.0 + dVar2 * dVar15) - dVar4 * dVar13);
  return;
}



// FUNCTION 14925caaa FUN_14925caaa body=300 status=ok
// SIG undefined FUN_14925caaa(void)

void FUN_14925caaa(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_258 [32];
  undefined1 local_238 [112];
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1412ca278(local_238);
  FUN_1490d751a(local_238);
  dVar1 = *(double *)(param_1 + 0x10);
  dVar2 = *(double *)(param_1 + 0x18);
  dVar3 = *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(param_1 + 0x28);
  *(double *)(param_1 + 0x30) =
       dVar2 * local_1b8 * -1.0 + dVar3 * local_1c0 + local_1c8 * dVar4 * 1.0 + local_1b0 * dVar1;
  *(double *)(param_1 + 0x38) =
       dVar1 * local_1b8 * 1.0 + dVar4 * local_1c0 + local_1c8 * dVar3 * -1.0 + local_1b0 * dVar2;
  *(double *)(param_1 + 0x40) =
       dVar4 * local_1b8 * 1.0 + ((local_1c8 * dVar2 * 1.0 + local_1b0 * dVar3) - local_1c0 * dVar1)
  ;
  *(double *)(param_1 + 0x48) =
       dVar3 * local_1b8 * -1.0 +
       ((local_1c8 * dVar1 * -1.0 + local_1b0 * dVar4) - local_1c0 * dVar2);
  FUN_140f8ccfc(local_238);
  if ((local_50 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925cbd8 FUN_14925cbd8 body=248 status=ok
// SIG undefined FUN_14925cbd8(void)

void FUN_14925cbd8(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar3;
  double *pdVar5;
  double *pdVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar2;
  double dVar4;
  
  pdVar5 = *(double **)*param_2;
  pdVar6 = (double *)((longlong *)*param_2)[4];
  lVar7 = *(longlong *)(param_1 + 0xc0);
  dVar14 = *(double *)(lVar7 + 0x80) * -1.0;
  dVar15 = *(double *)(lVar7 + 0x88) * 1.0;
  dVar10 = *pdVar5;
  dVar11 = pdVar5[1];
  dVar12 = pdVar5[2];
  dVar13 = pdVar5[3];
  dVar1 = *(double *)(lVar7 + 0x78);
  dVar2 = *(double *)(lVar7 + 0x78);
  dVar3 = *(double *)(lVar7 + 0x70);
  dVar4 = *(double *)(lVar7 + 0x70);
  dVar9 = dVar12 * dVar14 * -1.0 + dVar2 * dVar11 + (dVar15 * dVar13 - dVar4 * dVar10 * -1.0);
  *pdVar6 = dVar11 * dVar14 * -1.0 + ((dVar10 * dVar15 - dVar3 * dVar13 * 1.0) - dVar12 * dVar1);
  pdVar6[1] = dVar10 * dVar14 * 1.0 + ((dVar11 * dVar15 - dVar4 * dVar12 * -1.0) - dVar13 * dVar2);
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = dVar13 * dVar14 * 1.0 + dVar1 * dVar10 + (dVar15 * dVar12 - dVar3 * dVar11 * 1.0);
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(pdVar6 + 2) = auVar8;
  return;
}



// FUNCTION 14925ccd0 FUN_14925ccd0 body=350 status=ok
// SIG undefined FUN_14925ccd0(void)

void FUN_14925ccd0(longlong param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_278 [32];
  undefined1 local_258 [112];
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_1412ca278(local_258);
  FUN_1490d751a(local_258);
  local_1d8 = local_1d8 * -1.0;
  dStack_1d0 = dStack_1d0 * 1.0;
  dVar3 = *(double *)(param_1 + 0x10);
  dVar4 = *(double *)(param_1 + 0x18);
  dVar5 = *(double *)(param_1 + 0x20);
  dVar6 = *(double *)(param_1 + 0x28);
  dVar2 = dVar5 * local_1d8 * -1.0 +
          local_1e0 * dVar4 + (dStack_1d0 * dVar6 - local_1e8 * dVar3 * -1.0);
  *(double *)(param_1 + 0x30) =
       dVar4 * local_1d8 * -1.0 +
       ((dVar3 * dStack_1d0 - local_1e8 * dVar6 * 1.0) - dVar5 * local_1e0);
  *(double *)(param_1 + 0x38) =
       dVar3 * local_1d8 * 1.0 +
       ((dVar4 * dStack_1d0 - local_1e8 * dVar5 * -1.0) - dVar6 * local_1e0);
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar6 * local_1d8 * 1.0 +
                 local_1e0 * dVar3 + (dStack_1d0 * dVar5 - local_1e8 * dVar4 * 1.0);
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar1;
  FUN_140f8ccfc(local_258);
  if ((local_70 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925ce30 FUN_14925ce30 body=1819 status=ok
// SIG undefined FUN_14925ce30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14925ce30(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  int iVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auStack_288 [32];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  auVar10 = _DAT_149934d80;
  auVar34 = *(undefined1 (*) [16])(param_1 + 0xb0);
  dVar4 = auVar34._0_8_;
  dVar8 = auVar34._8_8_;
  auVar2 = *(undefined1 (*) [16])(param_1 + 0xc0);
  dVar5 = auVar2._0_8_;
  auVar44 = *(undefined1 (*) [16])(param_3 + 8);
  dVar6 = auVar44._0_8_;
  dVar9 = auVar44._8_8_;
  auVar3 = *(undefined1 (*) [16])(param_3 + 10);
  dVar7 = auVar3._0_8_;
  auVar34 = minpd(auVar44,auVar34);
  auVar38 = minpd(auVar3,auVar2);
  auVar44._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar44._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  iVar29 = movmskpd((int)local_c0,auVar44);
  auVar34._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
  auVar34._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
  uVar30 = movmskpd((int)param_2,auVar34);
  if ((uVar30 & 0x3fffffff) == 0 && iVar29 == 0) {
    dVar21 = *param_3;
    dVar22 = param_3[1];
    dVar23 = param_3[2];
    dVar24 = param_3[3];
    dVar25 = *(double *)(param_1 + 0x70);
    dVar26 = *(double *)(param_1 + 0x78);
    dVar27 = *(double *)(param_1 + 0x80);
    dVar28 = *(double *)(param_1 + 0x88);
    dVar33 = *(double *)(param_1 + 0x88);
    dVar37 = *(double *)(param_1 + 0x88);
    dVar14 = *(double *)(param_1 + 0x70);
    dVar16 = *(double *)(param_1 + 0x70);
    dVar1 = *(double *)(param_1 + 0x78);
    dVar39 = *(double *)(param_1 + 0x78);
    dVar36 = *(double *)(param_1 + 0x80);
    dVar42 = *(double *)(param_1 + 0x80);
    dVar15 = param_3[4] * dVar4;
    dVar41 = param_3[5] * dVar8;
    dVar17 = param_3[6] * dVar5;
    dVar18 = param_3[7] * auVar2._8_8_;
    dVar11 = dVar41 * dVar25 - dVar26 * dVar15;
    dVar12 = dVar17 * dVar26 - dVar27 * dVar41;
    dVar19 = dVar15 * dVar27 - dVar25 * dVar17;
    dVar20 = dVar18 * dVar28 - dVar28 * dVar18;
    dVar12 = dVar12 + dVar12;
    dVar19 = dVar19 + dVar19;
    dVar11 = dVar11 + dVar11;
    dVar20 = dVar20 + dVar20;
    dVar40 = *(double *)(param_1 + 0x90);
    dVar13 = (dVar12 * dVar27 - dVar11 * dVar25) + dVar37 * dVar19 + dVar41 +
             *(double *)(param_1 + 0x98);
    dVar41 = *(double *)(param_1 + 0xa0);
    dVar43 = *(double *)(param_1 + 0xa8);
    *param_2 = dVar22 * dVar36 * -1.0 + dVar23 * dVar1 + dVar24 * dVar14 * 1.0 + dVar21 * dVar33;
    param_2[1] = dVar21 * dVar42 * 1.0 + dVar24 * dVar39 + dVar23 * dVar16 * -1.0 + dVar22 * dVar37;
    param_2[2] = dVar24 * dVar36 * 1.0 +
                 ((dVar14 * dVar22 * 1.0 + dVar23 * dVar33) - dVar21 * dVar1);
    param_2[3] = dVar23 * dVar42 * -1.0 +
                 ((dVar16 * dVar21 * -1.0 + dVar24 * dVar37) - dVar22 * dVar39);
    auVar10._8_4_ = SUB84(dVar13,0);
    auVar10._0_8_ = (dVar11 * dVar26 - dVar27 * dVar19) + dVar33 * dVar12 + dVar15 + dVar40;
    auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 4) = auVar10;
    param_2[6] = (dVar19 * dVar25 - dVar26 * dVar12) + dVar33 * dVar11 + dVar17 + dVar41;
    param_2[7] = (dVar20 * dVar28 - dVar20 * dVar28) + dVar37 * dVar20 + dVar18 + dVar43;
  }
  else {
    dVar1 = *(double *)(param_1 + 0x70);
    dVar39 = *(double *)(param_1 + 0x78);
    dVar42 = *(double *)(param_1 + 0x80);
    dVar36 = dVar39 + dVar39;
    dVar40 = dVar42 + dVar42;
    dVar37 = dVar1 * (dVar1 + dVar1);
    local_178 = (1.0 - (dVar37 + dVar39 * dVar36)) * dVar5;
    dVar16 = *(double *)(param_1 + 0x70) * dVar40;
    dVar33 = *(double *)(param_1 + 0x88);
    dVar41 = dVar40 * dVar33;
    dVar43 = (dVar1 + dVar1) * *(double *)(param_1 + 0x88);
    dVar33 = dVar36 * dVar33;
    local_188 = (dVar33 + dVar16) * dVar5;
    dVar37 = (DAT_149934d80._8_8_ - (dVar42 * dVar40 + dVar37)) * dVar8;
    dVar14 = (dVar36 * dVar1 + dVar41) * dVar4;
    local_198 = (dVar40 * dVar39 + dVar43) * dVar8;
    dStack_180 = (dVar40 * dVar39 - dVar43) * dVar5;
    local_1b8 = (dVar16 - dVar33) * dVar4;
    local_1c8._8_4_ = SUB84(dVar14,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar42 * dVar40 + dVar39 * dVar36)) * dVar4;
    local_1c8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar37,0);
    local_1a8._0_8_ = (dVar36 * dVar1 - dVar41) * dVar8;
    local_1a8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = *(undefined8 *)(param_1 + 0x90);
    uStack_160 = *(undefined8 *)(param_1 + 0x98);
    local_158 = *(undefined8 *)(param_1 + 0xa0);
    uStack_150 = 0x3ff0000000000000;
    dVar14 = *param_3;
    dVar16 = param_3[1];
    dVar1 = param_3[2];
    dVar39 = dVar16 + dVar16;
    dVar42 = dVar1 + dVar1;
    dVar37 = dVar14 * (dVar14 + dVar14);
    local_1f8 = (1.0 - (dVar37 + dVar16 * dVar39)) * dVar7;
    dVar33 = param_3[3];
    dVar36 = dVar42 * dVar33;
    dVar40 = (dVar14 + dVar14) * param_3[3];
    dVar33 = dVar39 * dVar33;
    local_208 = (dVar33 + *param_3 * dVar42) * dVar7;
    dStack_200 = (dVar42 * dVar16 - dVar40) * dVar7;
    local_248 = ((double)DAT_149934d80 - (dVar1 * dVar42 + dVar16 * dVar39)) * dVar6;
    dVar37 = (DAT_149934d80._8_8_ - (dVar1 * dVar42 + dVar37)) * dVar9;
    dStack_240 = (dVar39 * dVar14 + dVar36) * dVar6;
    local_218 = (dVar42 * dVar16 + dVar40) * dVar9;
    local_238 = (*param_3 * dVar42 - dVar33) * dVar6;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar37,0);
    local_228._0_8_ = (dVar39 * dVar14 - dVar36) * dVar9;
    local_228._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = param_3[4];
    dStack_1e0 = param_3[5];
    local_1d8 = param_3[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148,&local_248,local_1c8);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar38._8_8_ = -(ulonglong)(0.0 <= dVar8 * dVar9);
    auVar38._0_8_ = -(ulonglong)(0.0 <= dVar4 * dVar6);
    auVar34 = blendvpd(_DAT_149936790,auVar10,auVar38);
    uVar31 = -(ulonglong)(0.0 <= dVar5 * dVar7);
    dVar33 = (double)(~uVar31 & 0xbff0000000000000 | uVar31 & 0x3ff0000000000000);
    dVar37 = auVar34._0_8_;
    local_138 = local_138 * dVar37;
    local_140 = local_140 * dVar37;
    local_148 = local_148 * dVar37;
    dVar37 = auVar34._8_8_;
    local_118 = local_118 * dVar37;
    local_120 = local_120 * dVar37;
    local_128 = dVar37 * local_128;
    local_f8 = local_f8 * dVar33;
    local_100 = local_100 * dVar33;
    local_108 = dVar33 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar33 = local_258 * local_258 + local_268 * local_268;
    dVar37 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar35._0_8_ = dVar33 + dVar37;
    auVar35._8_8_ = dVar33 + dVar37;
    auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
    auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
    auVar34 = sqrtpd(auVar35,auVar35);
    auVar44 = divpd(auVar10,auVar34);
    auVar45._0_8_ = auVar44._0_8_ * local_258;
    auVar45._8_8_ = auVar44._8_8_ * dStack_250;
    auVar34 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar32);
    *param_2 = (double)((ulonglong)(local_268 * auVar44._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
    param_2[1] = (double)((ulonglong)(dStack_260 * auVar44._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
    *(undefined1 (*) [16])(param_2 + 2) = auVar34;
    param_2[4] = local_e8;
    param_2[5] = dStack_e0;
    param_2[6] = local_d8;
    param_2[7] = 0.0;
  }
  dVar33 = auVar2._8_8_ * auVar3._8_8_;
  auVar3._8_4_ = SUB84(dVar8 * dVar9,0);
  auVar3._0_8_ = dVar4 * dVar6;
  auVar3._12_4_ = (int)((ulonglong)(dVar8 * dVar9) >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar3;
  auVar2._8_4_ = SUB84(dVar33,0);
  auVar2._0_8_ = dVar5 * dVar7;
  auVar2._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 10) = auVar2;
  if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925d54c FUN_14925d54c body=316 status=ok
// SIG undefined FUN_14925d54c(void)

void FUN_14925d54c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  local_88 = param_2[4];
  lVar6 = param_2[8];
  lVar7 = param_2[0xc];
  lVar8 = param_2[0x10];
  lVar9 = param_2[0x14];
  uVar3 = *(undefined1 *)param_2[0x18];
  uVar1 = *(undefined4 *)param_2[0x1c];
  uVar2 = *(undefined4 *)param_2[0x20];
  uVar4 = *(undefined1 *)param_2[0x24];
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_90 = FUN_144828ac0(param_2 + 0x2c,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  local_80 = *puVar5;
  local_78 = *(undefined4 *)(puVar5 + 1);
  local_c8 = lVar7;
  local_c0 = lVar8;
  local_b8 = lVar9;
  local_b0 = uVar3;
  local_a8 = uVar1;
  local_a0 = uVar2;
  local_98 = uVar4;
  FUN_14925d772(*(undefined8 *)(param_1 + 0xc0),&local_80,local_88,lVar6);
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925d692 FUN_14925d692 body=222 status=ok
// SIG undefined FUN_14925d692(void)

void FUN_14925d692(longlong param_1)

{
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  longlong local_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_30 = *(undefined8 *)(param_1 + 0x1f0);
  local_28 = *(undefined4 *)(param_1 + 0x1f8);
  local_40 = param_1 + 0x288;
  local_48 = *(undefined1 *)(param_1 + 0x284);
  local_50 = *(undefined4 *)(param_1 + 0x280);
  local_58 = *(undefined4 *)(param_1 + 0x27c);
  local_60 = *(undefined1 *)(param_1 + 0x278);
  local_68 = param_1 + 0x260;
  local_70 = param_1 + 0x248;
  local_78 = param_1 + 0x230;
  FUN_14925d772(param_1 + 0x10,&local_30,param_1 + 0x200,param_1 + 0x218);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925d772 FUN_14925d772 body=504 status=ok
// SIG undefined FUN_14925d772(void)

void FUN_14925d772(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined8 param_12)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_98 = 0;
  uStack_90 = 0;
  if ((int)param_2[1] < 1) {
    uStack_90._0_4_ = 0;
  }
  else {
    lVar7 = 8;
    lVar5 = 0;
    local_b0 = param_4;
    do {
      uVar3 = uStack_90;
      uVar2 = *(undefined8 *)(*param_2 + -8 + lVar7);
      uVar1 = *(undefined4 *)(*param_2 + lVar7);
      lVar6 = (longlong)(int)uStack_90;
      uVar4 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
      if (uStack_90._4_4_ < uVar4) {
        FUN_1492d0dd8(&local_98,uVar3 & 0xffffffff);
      }
      lVar6 = lVar6 * 0x10;
      *(undefined1 *)(local_98 + lVar6) = 1;
      *(undefined8 *)(local_98 + 4 + lVar6) = uVar2;
      *(undefined4 *)(local_98 + 0xc + lVar6) = uVar1;
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0xc;
    } while (lVar5 < (int)param_2[1]);
    param_4 = local_b0;
  }
  local_c8 = param_11;
  local_c0 = param_12;
  local_d0 = param_10;
  local_d8 = param_9;
  local_e0 = param_8;
  local_e8 = param_7;
  local_f0 = param_6;
  local_f8 = param_5;
  local_a8 = local_98;
  local_a0 = (int)uStack_90;
  FUN_14925db8a(param_1,&local_a8,param_3,param_4);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925d96c FUN_14925d96c body=316 status=ok
// SIG undefined FUN_14925d96c(void)

void FUN_14925d96c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  local_88 = param_2[4];
  lVar6 = param_2[8];
  lVar7 = param_2[0xc];
  lVar8 = param_2[0x10];
  lVar9 = param_2[0x14];
  uVar3 = *(undefined1 *)param_2[0x18];
  uVar1 = *(undefined4 *)param_2[0x1c];
  uVar2 = *(undefined4 *)param_2[0x20];
  uVar4 = *(undefined1 *)param_2[0x24];
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_90 = FUN_144828ac0(param_2 + 0x28,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  local_80 = *puVar5;
  local_78 = *(undefined4 *)(puVar5 + 1);
  local_c8 = lVar7;
  local_c0 = lVar8;
  local_b8 = lVar9;
  local_b0 = uVar3;
  local_a8 = uVar1;
  local_a0 = uVar2;
  local_98 = uVar4;
  FUN_14925db8a(*(undefined8 *)(param_1 + 0xc0),&local_80,local_88,lVar6);
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925daaa FUN_14925daaa body=222 status=ok
// SIG undefined FUN_14925daaa(void)

void FUN_14925daaa(longlong param_1)

{
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  longlong local_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_30 = *(undefined8 *)(param_1 + 0x1f0);
  local_28 = *(undefined4 *)(param_1 + 0x1f8);
  local_40 = param_1 + 0x288;
  local_48 = *(undefined1 *)(param_1 + 0x284);
  local_50 = *(undefined4 *)(param_1 + 0x280);
  local_58 = *(undefined4 *)(param_1 + 0x27c);
  local_60 = *(undefined1 *)(param_1 + 0x278);
  local_68 = param_1 + 0x260;
  local_70 = param_1 + 0x248;
  local_78 = param_1 + 0x230;
  FUN_14925db8a(param_1 + 0x10,&local_30,param_1 + 0x200,param_1 + 0x218);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925db8a FUN_14925db8a body=1440 status=ok
// SIG undefined FUN_14925db8a(void)

void FUN_14925db8a(longlong param_1,longlong *param_2,double *param_3,double *param_4,
                  double *param_5,double *param_6,double *param_7,undefined1 param_8,float param_9,
                  float param_10,undefined1 param_11,longlong *param_12)

{
  uint *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  double *pdVar14;
  double *pdVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined1 local_220;
  undefined1 local_218;
  longlong local_210;
  double *local_208;
  double *local_200;
  double local_1f8 [12];
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_170;
  double local_168;
  double local_160;
  undefined1 local_158 [8];
  uint uStack_150;
  uint uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar4 = *(longlong *)(param_1 + 0x1b0);
  local_200 = param_4;
  if (lVar4 != 0) {
    iVar10 = (int)param_12[1];
    local_210 = param_1;
    local_208 = param_3;
    if (iVar10 != (int)param_2[1]) {
      FUN_14924b418(param_12);
      param_12[4] = DAT_14c8464f0;
      uVar9 = DAT_14c8464e8._4_4_;
      uVar8 = (undefined4)DAT_14c8464e8;
      uVar7 = DAT_14c8464e0._4_4_;
      *(undefined4 *)(param_12 + 2) = (undefined4)DAT_14c8464e0;
      *(undefined4 *)((longlong)param_12 + 0x14) = uVar7;
      *(undefined4 *)(param_12 + 3) = uVar8;
      *(undefined4 *)((longlong)param_12 + 0x1c) = uVar9;
      iVar10 = (int)param_12[1];
      if ((iVar10 == 0) && (0 < (int)param_2[1])) {
        lVar13 = 0;
        lVar16 = 0;
        do {
          local_158._0_4_ = local_158._0_4_ & 0xffffff00;
          stack0xfffffffffffffeac = 0;
          uStack_14c = CONCAT22(uStack_14c._2_2_,0xffff);
          local_148 = 0xffffffff;
          FUN_144828dba(local_158,*param_2 + lVar13,lVar4);
          iVar10 = (int)param_12[1];
          *(uint *)(param_12 + 1) = iVar10 + 1U;
          if (*(uint *)((longlong)param_12 + 0xc) < iVar10 + 1U) {
            FUN_1492d0738(param_12,iVar10);
          }
          lVar11 = *param_12;
          puVar2 = (undefined8 *)(lVar11 + 0x10 + (longlong)iVar10 * 0x20);
          *puVar2 = CONCAT44(uStack_144,local_148);
          puVar2[1] = uStack_140;
          puVar1 = (uint *)(lVar11 + (longlong)iVar10 * 0x20);
          *puVar1 = local_158._0_4_;
          puVar1[1] = local_158._4_4_;
          puVar1[2] = uStack_150;
          puVar1[3] = uStack_14c;
          lVar16 = lVar16 + 1;
          lVar13 = lVar13 + 0x10;
        } while (lVar16 < (int)param_2[1]);
        iVar10 = (int)param_12[1];
      }
    }
    if (0 < iVar10) {
      lVar13 = 0;
      lVar16 = 0;
      do {
        lVar11 = *param_12;
        if (*(short *)(lVar11 + 0xc + lVar13 * 2) != -1) {
          uVar3 = *(ushort *)(lVar11 + 6 + lVar13 * 2);
          if ((((uint)uVar3 < DAT_14c87eb08 + 1U) && (*(longlong *)(lVar11 + 4 + lVar13 * 2) != 0))
             && (*(char *)(lVar11 + lVar13 * 2) != '\0')) {
            fVar17 = *(float *)(*param_2 + 0xc + lVar13);
            if (1.0 <= fVar17) {
              fVar17 = 1.0;
            }
            if (fVar17 <= 0.0) {
              fVar17 = 0.0;
            }
            fVar17 = (float)FUN_14915b162(fVar17,CONCAT11((char)(uVar3 >> 8),param_8));
            dVar6 = (double)*(float *)(*param_2 + 0xc + lVar13);
            dVar5 = local_200[2] * dVar6 + (double)param_12[4];
            dVar21 = local_200[1] * dVar6 + (double)param_12[3];
            dVar23 = dVar6 * *local_200 + (double)param_12[2];
            fVar18 = (float)FUN_140073f12((float)(dVar23 + 132.39999389648438));
            fVar19 = (float)FUN_140073f12((float)(dVar21 + 9.199999809265137));
            fVar20 = (float)FUN_140073f12((float)(dVar5 + 217.89999389648438));
            dVar6 = param_7[2];
            dVar22 = param_7[1];
            local_170 = sin((double)fVar18 * *param_7 + (double)fVar18 * *param_7 + dVar23 +
                            *param_6);
            local_168 = sin((double)fVar19 * dVar22 + (double)fVar19 * dVar22 + dVar21 + param_6[1])
            ;
            dVar6 = sin((double)fVar20 * dVar6 + (double)fVar20 * dVar6 + dVar5 + param_6[2]);
            dVar22 = (double)(fVar17 * (param_10 - param_9) + param_9);
            local_160 = dVar6 * param_5[2] * dVar22;
            local_168 = local_168 * param_5[1] * dVar22;
            local_170 = local_170 * *param_5 * dVar22;
            FUN_14690c017(&local_198,&local_170,param_11,0);
            uVar12 = (uint)*(ushort *)(*param_12 + 0xc + lVar13 * 2);
            if (uVar12 == 0xffff) {
              uVar12 = 0xffffffff;
            }
            FUN_14486750c(lVar4,local_1f8,uVar12);
            dVar23 = local_1f8[1] * local_198;
            dVar24 = local_1f8[1] * dStack_190;
            dVar5 = local_1f8[0] * local_188;
            dVar6 = local_1f8[0] * dStack_190;
            dVar22 = local_1f8[0] * local_198;
            dVar21 = local_188 * local_1f8[2];
            local_1f8[0] = dStack_190 * local_1f8[2] * -1.0 +
                           local_188 * local_1f8[1] +
                           local_1f8[0] * dStack_180 * 1.0 + local_1f8[3] * local_198;
            local_1f8[1] = local_198 * local_1f8[2] * 1.0 +
                           dStack_180 * local_1f8[1] + dVar5 * -1.0 + local_1f8[3] * dStack_190;
            local_1f8[2] = dStack_180 * local_1f8[2] * 1.0 +
                           ((dVar6 * 1.0 + local_1f8[3] * local_188) - dVar23);
            local_1f8[3] = dVar21 * -1.0 + ((dVar22 * -1.0 + local_1f8[3] * dStack_180) - dVar24);
            uVar12 = (uint)*(ushort *)(*param_12 + 0xc + lVar13 * 2);
            if (uVar12 == 0xffff) {
              uVar12 = 0xffffffff;
            }
            pdVar14 = local_1f8;
            pdVar15 = (double *)local_158;
            for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
              *pdVar15 = *pdVar14;
              pdVar14 = pdVar14 + 1;
              pdVar15 = pdVar15 + 1;
            }
            local_218 = 0;
            local_220 = 0;
            local_228 = 1;
            FUN_144831e8e(lVar4,uVar12);
            iVar10 = (int)param_12[1];
          }
        }
        lVar16 = lVar16 + 1;
        lVar13 = lVar13 + 0x10;
      } while (lVar16 < iVar10);
    }
    dVar6 = *(double *)(local_210 + 0x20);
    dVar22 = local_208[2];
    dVar5 = local_208[1];
    param_12[2] = (longlong)(dVar6 * *local_208 + (double)param_12[2]);
    param_12[3] = (longlong)(dVar5 * dVar6 + (double)param_12[3]);
    param_12[4] = (longlong)(dVar22 * dVar6 + (double)param_12[4]);
  }
  if ((local_f0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925e12c FUN_14925e12c body=594 status=ok
// SIG undefined FUN_14925e12c(void)

undefined8 FUN_14925e12c(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_358 [32];
  undefined1 local_338;
  longlong local_328 [2];
  longlong local_318 [2];
  undefined1 local_308 [496];
  longlong local_118;
  uint local_110;
  uint local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_358;
  FUN_14925e380(local_308);
  if (0 < *(int *)(param_1 + 0x1f8)) {
    lVar7 = 8;
    lVar5 = 0;
    do {
      uVar3 = local_110;
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + -8 + lVar7);
      uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + lVar7);
      lVar6 = (longlong)(int)local_110;
      local_110 = local_110 + 1;
      if (local_10c < local_110) {
        FUN_1492d0dd8(&local_118,uVar3);
      }
      lVar6 = lVar6 * 0x10;
      *(undefined1 *)(local_118 + lVar6) = 1;
      *(undefined8 *)(local_118 + 4 + lVar6) = uVar2;
      *(undefined4 *)(local_118 + 0xc + lVar6) = uVar1;
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0xc;
    } while (lVar5 < *(int *)(param_1 + 0x1f8));
  }
  local_f8 = *(undefined8 *)(param_1 + 0x210);
  local_108 = *(undefined8 *)(param_1 + 0x200);
  uStack_100 = *(undefined8 *)(param_1 + 0x208);
  local_e0 = *(undefined8 *)(param_1 + 0x228);
  local_f0 = *(undefined8 *)(param_1 + 0x218);
  uStack_e8 = *(undefined8 *)(param_1 + 0x220);
  local_c8 = *(undefined8 *)(param_1 + 0x240);
  local_d8 = *(undefined8 *)(param_1 + 0x230);
  uStack_d0 = *(undefined8 *)(param_1 + 0x238);
  local_b0 = *(undefined8 *)(param_1 + 600);
  local_c0 = *(undefined8 *)(param_1 + 0x248);
  uStack_b8 = *(undefined8 *)(param_1 + 0x250);
  local_a8 = *(undefined8 *)(param_1 + 0x260);
  uStack_a0 = *(undefined8 *)(param_1 + 0x268);
  local_98 = *(undefined8 *)(param_1 + 0x270);
  local_90 = *(undefined1 *)(param_1 + 0x278);
  local_8c = *(undefined4 *)(param_1 + 0x27c);
  local_88 = *(undefined4 *)(param_1 + 0x280);
  local_84 = *(undefined1 *)(param_1 + 0x284);
  FUN_14925e4a0(param_2);
  if (0 < *(int *)(param_1 + 0x1f8)) {
    iVar4 = 0;
    do {
      FUN_140002266(local_318,L"Targets.%d.Item.Name",iVar4);
      FUN_140002266(local_328,L"Bones.%d.Bone",iVar4);
      local_338 = 1;
      FUN_1490fb142(param_2,local_328,local_318,1);
      if (local_328[0] != 0) {
        FUN_1400020a8();
      }
      if (local_318[0] != 0) {
        FUN_1400020a8();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x1f8));
  }
  FUN_14925e574(local_308);
  if ((local_50 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14925e380 FUN_14925e380 body=288 status=ok
// SIG undefined FUN_14925e380(void)

undefined8 * FUN_14925e380(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbfd920;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x53] = DAT_14c8464e0;
  param_1[0x54] = uVar1;
  param_1[0x55] = DAT_14c8464f0;
  uVar1 = DAT_14c846518;
  param_1[0x40] = DAT_14c846510;
  param_1[0x41] = uVar1;
  param_1[0x42] = DAT_14c846520;
  param_1[0x46] = 0;
  param_1[0x47] = 0x4051800000000000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x43] = 0x3ff0000000000000;
  param_1[0x44] = 0x3fe3333340000000;
  param_1[0x45] = 0x3fe99999a0000000;
  param_1[0x4a] = 0x3ff0000000000000;
  param_1[0x4b] = 0x4000000000000000;
  param_1[0x4e] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x4c] = DAT_14c8464e0;
  param_1[0x4d] = uVar1;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0x3f8000003f000000;
  *(undefined1 *)((longlong)param_1 + 0x284) = 3;
  return param_1;
}



// FUNCTION 14925e4a0 FUN_14925e4a0 body=211 status=ok
// SIG undefined FUN_14925e4a0(void)

undefined8 * FUN_14925e4a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_146704ffc();
  param_1[2] = uVar1;
  uVar1 = FUN_146705532();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14925e574 FUN_14925e574 body=79 status=ok
// SIG undefined FUN_14925e574(void)

void FUN_14925e574(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbfd920;
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 14925e5d0 FUN_14925e5d0 body=238 status=ok
// SIG undefined FUN_14925e5d0(void)

void FUN_14925e5d0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined1 local_54 [4];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined8 *)*puVar2;
  local_60 = puVar2[4];
  uVar4 = puVar2[8];
  uVar5 = puVar2[0xc];
  uVar6 = puVar2[0x10];
  uVar7 = puVar2[0x14];
  uVar1 = *(undefined1 *)puVar2[0x18];
  uVar8 = puVar2[0x1c];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_70 = FUN_144828ac0(puVar2 + 0x20,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  local_54[0] = 1;
  local_50 = *puVar3;
  local_98 = uVar5;
  local_90 = uVar6;
  local_88 = uVar7;
  local_80 = uVar1;
  local_78 = uVar8;
  FUN_14925e8d4(*(undefined8 *)(param_1 + 0xc0),local_54,local_60,uVar4);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925e6c8 FUN_14925e6c8 body=189 status=ok
// SIG undefined FUN_14925e6c8(void)

void FUN_14925e6c8(longlong param_1)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_34 [4];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_40 = param_1 + 0x420;
  local_48 = param_1 + 0x3c0;
  local_50 = *(undefined1 *)(param_1 + 0x3b0);
  local_58 = param_1 + 0x358;
  local_60 = param_1 + 0x2d0;
  local_68 = param_1 + 600;
  local_34[0] = 1;
  local_30 = *(undefined8 *)(param_1 + 0x1f0);
  FUN_14925e8d4(param_1 + 0x10,local_34,param_1 + 0x1f8,param_1 + 0x210);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14925e786 FUN_14925e786 body=190 status=ok
// SIG undefined FUN_14925e786(void)

void FUN_14925e786(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar5 = puVar2[8];
  uVar6 = puVar2[0xc];
  uVar7 = puVar2[0x10];
  uVar8 = puVar2[0x14];
  uVar1 = *(undefined1 *)puVar2[0x18];
  uVar9 = puVar2[0x1c];
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(puVar2 + 0x20,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  FUN_14925e8d4(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar1,uVar9,
                uVar11);
  return;
}



// FUNCTION 14925e84c FUN_14925e84c body=135 status=ok
// SIG undefined FUN_14925e84c(void)

void FUN_14925e84c(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14925e8d4(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200,param_1 + 0x218,param_1 + 0x260,
                param_1 + 0x2d8,param_1 + 0x360,*(undefined1 *)(param_1 + 0x3b8),param_1 + 0x3c0,
                param_1 + 0x420);
  return;
}



// FUNCTION 14925e8d4 FUN_14925e8d4 body=10032 status=ok
// SIG undefined FUN_14925e8d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14925e8d4(longlong param_1,char *param_2,double *param_3,char *param_4,char *param_5,
                  undefined8 param_6,char *param_7,byte param_8,undefined8 param_9,double *param_10)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar50;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar57;
  double dVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  double dVar69;
  double dVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined1 auStack_4b8 [32];
  undefined *local_498;
  undefined1 local_490;
  undefined1 local_488;
  double local_478;
  double dStack_470;
  double *local_460;
  double *local_458;
  double *local_450;
  undefined1 local_448 [16];
  double *local_438;
  double *local_430;
  longlong local_428;
  double *local_420;
  undefined1 local_418 [16];
  longlong local_408;
  double *local_400;
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  double *local_3d8;
  double *local_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  double dStack_3c0;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  char local_2c4 [4];
  undefined2 uStack_2c0;
  ushort uStack_2be;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
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
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
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
  undefined1 local_178 [12];
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [12];
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  auVar44 = _local_178;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  lVar17 = *(longlong *)(param_1 + 0x1b0);
  pdVar1 = local_458;
  pdVar6 = local_450;
  if (lVar17 == 0) goto LAB_14925e9ca;
  local_460 = param_10 + 3;
  local_438 = param_10 + 5;
  local_420 = param_10 + 7;
  local_400 = param_10 + 0x11;
  iVar10 = *(int *)(param_10 + 4);
  uVar9 = (undefined4)DAT_14c846480;
  uVar66 = DAT_14c846480._4_4_;
  uVar67 = (undefined4)DAT_14c846488;
  uVar68 = DAT_14c846488._4_4_;
  auVar34 = _DAT_14c846490;
  uVar79 = (undefined4)DAT_14c8464b0;
  uVar80 = DAT_14c8464b0._4_4_;
  uVar24 = (undefined4)DAT_14c8464b8;
  uVar81 = DAT_14c8464b8._4_4_;
  uVar75 = (undefined4)DAT_14c8464c0;
  uVar76 = DAT_14c8464c0._4_4_;
  uVar77 = (undefined4)DAT_14c8464c8;
  uVar78 = DAT_14c8464c8._4_4_;
  uVar71 = (undefined4)DAT_14c8464d0;
  uVar72 = DAT_14c8464d0._4_4_;
  uVar73 = uRam000000014c8464d8;
  uVar74 = uRam000000014c8464dc;
  pdVar7 = param_10 + 0xd;
  pdVar8 = param_10 + 0xb;
  local_428 = param_1;
  if (iVar10 == 0) {
    if (((DAT_14c87eb08 + 1U <= (uint)*(ushort *)(param_2 + 6)) || (*(longlong *)(param_2 + 4) == 0)
        ) || (*param_2 == '\0')) goto LAB_14925e9ca;
    local_178._0_4_ = local_178._1_4_ << 8;
    local_178._4_8_ = 0;
    uStack_16c._2_2_ = auVar44._14_2_;
    uStack_16c._0_2_ = 0xffff;
    local_168._0_4_ = 0xffffffff;
    local_458 = param_10 + 0xd;
    local_450 = param_10 + 0xb;
    FUN_144828dba(local_178,param_2,lVar17);
    iVar10 = *(int *)(param_10 + 4);
    *(uint *)(param_10 + 4) = iVar10 + 1U;
    if (*(uint *)((longlong)param_10 + 0x24) < iVar10 + 1U) {
      FUN_1492d0738(local_460,iVar10);
    }
    dVar36 = param_10[3];
    puVar2 = (undefined8 *)((longlong)dVar36 + 0x10 + (longlong)iVar10 * 0x20);
    *puVar2 = local_168._0_8_;
    puVar2[1] = local_168._8_8_;
    puVar2 = (undefined8 *)((longlong)dVar36 + (longlong)iVar10 * 0x20);
    *puVar2 = local_178._0_8_;
    puVar2[1] = stack0xfffffffffffffe90;
    lVar15 = (longlong)(*(int *)(param_10 + 4) + -1) * 0x20;
    local_2a0 = *(undefined4 *)((longlong)param_10[3] + 8 + lVar15);
    local_2a8 = *(undefined8 *)((longlong)param_10[3] + lVar15);
    FUN_14449fd62(lVar17,local_1f8,&local_2a8,0);
    if (0 < (int)local_1f8._8_4_) {
      uVar11 = local_1f8._0_8_;
      do {
        auVar44 = _local_178;
        local_178._0_4_ = local_178._1_4_ << 8;
        local_178._4_8_ = 0;
        uStack_16c._2_2_ = auVar44._14_2_;
        uStack_16c._0_2_ = 0xffff;
        local_168._0_4_ = 0xffffffff;
        FUN_144828dba(local_178,uVar11,lVar17);
        iVar10 = *(int *)(param_10 + 4);
        *(uint *)(param_10 + 4) = iVar10 + 1U;
        if (*(uint *)((longlong)param_10 + 0x24) < iVar10 + 1U) {
          FUN_1492d0738(local_460,iVar10);
        }
        dVar36 = *local_460;
        puVar2 = (undefined8 *)((longlong)dVar36 + 0x10 + (longlong)iVar10 * 0x20);
        *puVar2 = local_168._0_8_;
        puVar2[1] = local_168._8_8_;
        puVar2 = (undefined8 *)((longlong)dVar36 + (longlong)iVar10 * 0x20);
        *puVar2 = local_178._0_8_;
        puVar2[1] = stack0xfffffffffffffe90;
        local_2b8 = *(undefined8 *)local_1f8._0_8_;
        local_2b0 = *(undefined4 *)(local_1f8._0_8_ + 8);
        FUN_14449fd62(lVar17,local_178,&local_2b8,0);
        if (local_1f8._0_8_ != 0) {
          FUN_1400020a8();
        }
        local_1f8 = _local_178;
        uVar11 = local_178._0_8_;
      } while (0 < (int)local_178._8_4_);
    }
    iVar10 = *(int *)(param_10 + 4);
    local_430 = param_3;
    if (iVar10 < 2) {
      *(undefined4 *)(param_10 + 4) = 0;
      if (*(int *)((longlong)param_10 + 0x24) < 0) {
        FUN_1492d06b4(local_460,0);
      }
    }
    else {
      FUN_144aa29e6(local_438,iVar10,1);
      FUN_146ba0be8(local_420,*(undefined4 *)(param_10 + 4),1);
      FUN_146ba0be8(param_10 + 9,*(undefined4 *)(param_10 + 4),1);
      FUN_146ba0be8(local_450,*(undefined4 *)(param_10 + 4),1);
      FUN_146ba0be8(local_458,*(undefined4 *)(param_10 + 4),1);
      FUN_146ba0be8(local_400,*(int *)(param_10 + 4) * 2,1);
      uVar18 = (ulonglong)*(uint *)(param_10 + 4);
      if (0 < (int)*(uint *)(param_10 + 4)) {
        local_478 = (double)CONCAT44(local_478._4_4_,iVar10);
        lVar15 = 2;
        lVar16 = 3;
        lVar14 = 0;
        do {
          *(float *)((longlong)param_10[5] + lVar14 * 4) =
               (float)(int)lVar14 / (float)((int)uVar18 + -1);
          uVar12 = (uint)*(ushort *)((longlong)param_10[3] + lVar16 * 4);
          if (uVar12 == 0xffff) {
            uVar12 = 0xffffffff;
          }
          FUN_144afced8(lVar17,local_178,uVar12,0);
          dVar36 = param_10[7];
          pdVar1 = (double *)((longlong)dVar36 + -0x10 + lVar15 * 8);
          *pdVar1 = local_158;
          pdVar1[1] = dStack_150;
          *(undefined8 *)((longlong)dVar36 + lVar15 * 8) = local_148._0_8_;
          uVar12 = (uint)*(ushort *)((longlong)param_10[3] + lVar16 * 4);
          if (uVar12 == 0xffff) {
            uVar12 = 0xffffffff;
          }
          FUN_14486750c(lVar17,local_178,uVar12);
          dVar36 = param_10[0xb];
          pdVar1 = (double *)((longlong)dVar36 + -0x10 + lVar15 * 8);
          *pdVar1 = local_158;
          pdVar1[1] = dStack_150;
          *(undefined8 *)((longlong)dVar36 + lVar15 * 8) = local_148._0_8_;
          lVar14 = lVar14 + 1;
          uVar18 = (ulonglong)*(int *)(param_10 + 4);
          lVar15 = lVar15 + 3;
          lVar16 = lVar16 + 8;
        } while (lVar14 < (longlong)uVar18);
        iVar10 = local_478._0_4_;
        if (1 < *(int *)(param_10 + 4)) {
          lVar15 = 0;
          lVar14 = 0;
          do {
            lVar14 = lVar14 + 1;
            dVar36 = param_10[7];
            dVar62 = param_10[9];
            *(undefined8 *)((longlong)dVar62 + 0x10 + lVar15) =
                 *(undefined8 *)(lVar15 + 0x28 + (longlong)dVar36);
            puVar3 = (undefined8 *)(lVar15 + 0x18 + (longlong)dVar36);
            uVar11 = puVar3[1];
            puVar2 = (undefined8 *)((longlong)dVar62 + lVar15);
            *puVar2 = *puVar3;
            puVar2[1] = uVar11;
            lVar15 = lVar15 + 0x18;
          } while (lVar14 < (longlong)*(int *)(param_10 + 4) + -1);
        }
      }
      lVar15 = (longlong)*(int *)(param_10 + 10);
      dVar36 = param_10[9];
      *(undefined8 *)((longlong)dVar36 + -8 + lVar15 * 0x18) =
           *(undefined8 *)((longlong)dVar36 + -0x20 + lVar15 * 0x18);
      puVar2 = (undefined8 *)((longlong)dVar36 + -0x30 + lVar15 * 0x18);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)dVar36 + -0x18 + lVar15 * 0x18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      if (0 < *(int *)(param_10 + 4)) {
        lVar15 = 0x10;
        lVar14 = 0xc;
        lVar16 = 0;
        do {
          uVar12 = (uint)*(ushort *)((longlong)param_10[3] + lVar14);
          if (*(ushort *)((longlong)param_10[3] + lVar14) == 0xffff) {
            uVar12 = 0xffffffff;
          }
          FUN_14486750c(lVar17,local_178,uVar12,0);
          pdVar1 = (double *)((longlong)param_10[9] + -0x10 + lVar15);
          dVar64 = *pdVar1 * (double)local_138._0_8_;
          dVar36 = pdVar1[1] * stack0xfffffffffffffed0;
          dVar26 = *(double *)((longlong)param_10[9] + lVar15) * (double)local_128._0_8_;
          dVar27 = dVar36 * (double)local_178._0_8_ - dVar64 * (double)stack0xfffffffffffffe90;
          dVar50 = dVar26 * (double)stack0xfffffffffffffe90 - dVar36 * (double)local_168._0_8_;
          dVar62 = dVar64 * (double)local_168._0_8_ - (double)local_178._0_8_ * dVar26;
          dVar50 = dVar50 + dVar50;
          dVar62 = dVar62 + dVar62;
          dVar27 = dVar27 + dVar27;
          dVar25 = ((double)local_168._0_8_ * dVar50 - (double)local_178._0_8_ * dVar27) +
                   (double)local_168._8_8_ * dVar62 + dVar36 + dStack_150;
          dVar36 = param_10[0xb];
          auVar44._8_4_ = SUB84(dVar25,0);
          auVar44._0_8_ =
               (dVar27 * (double)stack0xfffffffffffffe90 - dVar62 * (double)local_168._0_8_) +
               (double)local_168._8_8_ * dVar50 + dVar64 + local_158;
          auVar44._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
          *(undefined1 (*) [16])((longlong)dVar36 + -0x10 + lVar15) = auVar44;
          *(double *)((longlong)dVar36 + lVar15) =
               dVar27 * (double)local_168._8_8_ + dVar26 +
               (dVar62 * (double)local_178._0_8_ - dVar50 * (double)stack0xfffffffffffffe90) +
               (double)local_148._0_8_;
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + 0x18;
          lVar14 = lVar14 + 0x20;
        } while (lVar16 < *(int *)(param_10 + 4));
      }
    }
    if (local_1f8._0_8_ != 0) {
      FUN_1400020a8();
    }
    pdVar1 = local_458;
    pdVar6 = local_450;
    if (iVar10 < 2) goto LAB_14925e9ca;
    iVar10 = *(int *)(param_10 + 4);
    uVar9 = (undefined4)DAT_14c846480;
    uVar66 = DAT_14c846480._4_4_;
    uVar67 = (undefined4)DAT_14c846488;
    uVar68 = DAT_14c846488._4_4_;
    auVar34 = _DAT_14c846490;
    uVar79 = (undefined4)DAT_14c8464b0;
    uVar80 = DAT_14c8464b0._4_4_;
    uVar24 = (undefined4)DAT_14c8464b8;
    uVar81 = DAT_14c8464b8._4_4_;
    uVar75 = (undefined4)DAT_14c8464c0;
    uVar76 = DAT_14c8464c0._4_4_;
    uVar77 = (undefined4)DAT_14c8464c8;
    uVar78 = DAT_14c8464c8._4_4_;
    uVar71 = (undefined4)DAT_14c8464d0;
    uVar72 = DAT_14c8464d0._4_4_;
    uVar73 = uRam000000014c8464d8;
    uVar74 = uRam000000014c8464dc;
    pdVar7 = local_458;
    pdVar8 = local_450;
    param_3 = local_430;
  }
  local_450 = pdVar8;
  local_458 = pdVar7;
  DAT_14c846480._0_4_ = uVar9;
  DAT_14c846480._4_4_ = uVar66;
  DAT_14c846488._0_4_ = uVar67;
  DAT_14c846488._4_4_ = uVar68;
  _DAT_14c846490 = auVar34;
  DAT_14c8464b0._0_4_ = uVar79;
  DAT_14c8464b0._4_4_ = uVar80;
  DAT_14c8464b8._0_4_ = uVar24;
  DAT_14c8464b8._4_4_ = uVar81;
  DAT_14c8464c0._0_4_ = uVar75;
  DAT_14c8464c0._4_4_ = uVar76;
  DAT_14c8464c8._0_4_ = uVar77;
  DAT_14c8464c8._4_4_ = uVar78;
  DAT_14c8464d0._0_4_ = uVar71;
  DAT_14c8464d0._4_4_ = uVar72;
  uRam000000014c8464d8 = uVar73;
  uRam000000014c8464dc = uVar74;
  if (1 < iVar10) {
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
                    /* WARNING: Read-only address (ram,0x000149936790) is written */
    local_2c8 = *(undefined4 *)((undefined8 *)*local_460 + 1);
    local_2d0 = *(undefined8 *)*local_460;
    local_478 = DAT_14c8464a0;
    dStack_470 = DAT_14c8464a8;
    FUN_1408130c0(lVar17,local_2c4);
    if ((((uint)uStack_2be < DAT_14c87eb08 + 1U) &&
        (CONCAT44(uStack_2bc,CONCAT22(uStack_2be,uStack_2c0)) != 0)) && (local_2c4[0] != '\0')) {
      local_2d8 = uStack_2bc;
      uVar9 = FUN_140813180(lVar17);
      FUN_14486750c(lVar17,local_178,uVar9,0);
      local_478 = local_158;
      dStack_470 = dStack_150;
      uVar9 = local_178._0_4_;
      uVar66 = local_178._4_4_;
      uVar67 = local_178._8_4_;
      uVar68 = uStack_16c;
      auVar34 = local_168;
      uVar71 = local_128._0_4_;
      uVar72 = local_128._4_4_;
      uVar73 = local_128._8_4_;
      uVar74 = local_128._12_4_;
      uVar75 = local_138._0_4_;
      uVar76 = local_138._4_4_;
      uVar77 = local_138._8_4_;
      uVar78 = uStack_12c;
      uVar79 = local_148._0_4_;
      uVar80 = local_148._4_4_;
      uVar24 = local_148._8_4_;
      uVar81 = local_148._12_4_;
    }
    dVar62 = (double)CONCAT44(uVar81,uVar24);
    dVar36 = (double)CONCAT44(uVar80,uVar79);
    dVar27 = (double)CONCAT44(uVar78,uVar77);
    dVar64 = (double)CONCAT44(uVar76,uVar75);
    dVar26 = (double)CONCAT44(uVar74,uVar73);
    dVar25 = (double)CONCAT44(uVar72,uVar71);
    if (0 < *(int *)(param_10 + 4)) {
      local_3d0 = (double *)(param_4 + 0x20);
      local_3d8 = (double *)(param_7 + 0x38);
      lVar14 = 6;
      lVar15 = 0;
      lVar16 = 0;
      dVar50 = (double)CONCAT44(uVar66,uVar9);
      dVar53 = (double)CONCAT44(uVar68,uVar67);
      local_430 = param_3;
      local_408 = lVar17;
      do {
        uVar12 = (uint)*(ushort *)((longlong)*local_460 + lVar14 * 2);
        if (uVar12 == 0xffff) {
          uVar12 = 0xffffffff;
        }
        lVar13 = lVar17;
        uVar9 = FUN_144afced8(lVar17,&local_348,uVar12,0);
        auVar44 = _DAT_149934d80;
        dVar59 = local_308._0_8_;
        dVar63 = local_308._8_8_;
        auVar4._8_4_ = SUB84(dVar27,0);
        auVar4._0_8_ = dVar64;
        auVar4._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        auVar37 = minpd(local_308,auVar4);
        local_418 = local_2f8;
        auVar4 = local_418;
        auVar43._8_4_ = SUB84(dVar26,0);
        auVar43._0_8_ = dVar25;
        auVar43._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
        auVar43 = minpd(local_2f8,auVar43);
        auVar38._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
        auVar38._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
        iVar10 = movmskpd(uVar9,auVar38);
        auVar37._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
        auVar37._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
        uVar12 = movmskpd((int)lVar13,auVar37);
        dStack_3c0 = auVar34._8_8_;
        dVar57 = auVar34._0_8_;
        local_3c8 = SUB84(dVar50,0);
        uStack_3c4 = (undefined4)((ulonglong)dVar50 >> 0x20);
        local_3f8._8_4_ = auVar34._0_4_;
        local_3f8._0_8_ = dVar53;
        local_3f8._12_4_ = auVar34._4_4_;
        local_3a8._8_4_ = auVar34._8_4_;
        local_3a8._0_8_ = dStack_3c0;
        local_3a8._12_4_ = auVar34._12_4_;
        local_3b8._8_4_ = SUB84(dVar53,0);
        local_3b8._0_8_ = dVar50;
        local_3b8._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
        local_418._0_8_ = local_2f8._0_8_;
        uVar11 = local_418._0_8_;
        local_418._8_8_ = local_2f8._8_8_;
        uVar5 = local_418._8_8_;
        local_418 = auVar4;
        local_398 = auVar34;
        if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
          local_448._8_4_ = SUB84(dVar62,0);
          local_448._0_8_ = dVar36;
          local_448._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
          dVar52 = dStack_340 * dVar57 * -1.0 +
                   local_338 * dVar53 + dVar50 * dStack_330 * 1.0 + dStack_3c0 * local_348;
          dVar61 = local_348 * dVar57 * 1.0 +
                   dStack_330 * dVar53 + dVar50 * local_338 * -1.0 + dStack_3c0 * dStack_340;
          local_1e8._0_8_ =
               dStack_330 * dVar57 * 1.0 +
               ((dVar50 * dStack_340 * 1.0 + dStack_3c0 * local_338) - dVar53 * local_348);
          local_1e8._8_8_ =
               local_338 * dVar57 * -1.0 +
               ((dVar50 * local_348 * -1.0 + dStack_3c0 * dStack_330) - dVar53 * dStack_340);
          dVar70 = local_328 * dVar64;
          dVar51 = dStack_320 * dVar27;
          dVar54 = local_318 * dVar25;
          dVar58 = dStack_310 * dVar26;
          dVar62 = dVar51 * dVar50 - dVar53 * dVar70;
          dVar65 = dVar54 * dVar53 - dVar57 * dVar51;
          dVar69 = dVar70 * dVar57 - dVar50 * dVar54;
          dVar60 = dVar58 * dStack_3c0 - dStack_3c0 * dVar58;
          dVar65 = dVar65 + dVar65;
          dVar69 = dVar69 + dVar69;
          dVar62 = dVar62 + dVar62;
          dVar60 = dVar60 + dVar60;
          local_478 = local_478 + (dVar62 * dVar53 - dVar57 * dVar69) + dStack_3c0 * dVar65 + dVar70
          ;
          dStack_470 = dStack_470 +
                       (dVar65 * dVar57 - dVar62 * dVar50) + dStack_3c0 * dVar69 + dVar51;
          dVar36 = dVar36 + (dVar69 * dVar50 - dVar53 * dVar65) + dStack_3c0 * dVar62 + dVar54;
          dVar62 = (double)local_448._8_8_ +
                   (dVar60 * dStack_3c0 - dVar60 * dStack_3c0) + dStack_3c0 * dVar60 + dVar58;
        }
        else {
          dVar62 = dVar53 + dVar53;
          dVar61 = dVar57 + dVar57;
          dVar52 = dVar50 * (dVar50 + dVar50);
          dStack_1d0 = (1.0 - (dVar57 * dVar61 + dVar52)) * dVar27;
          dVar65 = (dVar50 + dVar50) * dStack_3c0;
          local_1d8 = (dVar62 * dVar50 - dVar61 * dStack_3c0) * dVar27;
          dStack_1b0 = (dVar61 * dVar53 - dVar65) * dVar25;
          local_1b8 = (dVar62 * dStack_3c0 + dVar50 * dVar61) * dVar25;
          local_1a8 = (1.0 - (dVar52 + dVar53 * dVar62)) * dVar25;
          dVar52 = dVar25 * (double)local_418._0_8_;
          dVar69 = (dVar62 * dVar50 + dVar61 * dStack_3c0) * dVar64;
          local_1c8 = (dVar61 * dVar53 + dVar65) * dVar27;
          local_1f8._8_4_ = SUB84(dVar69,0);
          local_1f8._0_8_ = (1.0 - (dVar57 * dVar61 + dVar53 * dVar62)) * dVar64;
          local_1f8._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
          local_1e8._8_8_ = 0;
          local_1e8._0_8_ = (dVar50 * dVar61 - dVar62 * dStack_3c0) * dVar64;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = local_478;
          dStack_190 = dStack_470;
          uStack_180 = 0x3ff0000000000000;
          dVar50 = dStack_340 + dStack_340;
          dVar53 = local_338 + local_338;
          dVar62 = local_348 * (local_348 + local_348);
          local_228 = (1.0 - (dVar62 + dStack_340 * dVar50)) * (double)local_418._0_8_;
          dVar57 = (local_348 + local_348) * dStack_330;
          local_238 = (dVar50 * dStack_330 + local_348 * dVar53) * (double)local_418._0_8_;
          dStack_230 = (dVar53 * dStack_340 - dVar57) * (double)local_418._0_8_;
          local_278 = ((double)DAT_149934d80 - (local_338 * dVar53 + dStack_340 * dVar50)) * dVar59;
          dVar62 = (DAT_149934d80._8_8_ - (local_338 * dVar53 + dVar62)) * dVar63;
          dStack_270 = (dVar50 * local_348 + dVar53 * dStack_330) * dVar59;
          local_248 = (dVar53 * dStack_340 + dVar57) * dVar63;
          local_268 = (local_348 * dVar53 - dVar50 * dStack_330) * dVar59;
          uStack_260 = 0;
          local_258._8_4_ = SUB84(dVar62,0);
          local_258._0_8_ = (dVar50 * local_348 - dVar53 * dStack_330) * dVar63;
          local_258._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = local_328;
          dStack_210 = dStack_320;
          local_208 = local_318;
          uStack_200 = 0x3ff0000000000000;
          local_448._0_8_ = lVar15;
          local_188 = dVar36;
          FUN_1447fea8d(local_178,&local_278,local_1f8);
          FUN_144a1c686(local_178,0x3e45798ee0000000);
          auVar34._8_8_ = -(ulonglong)(0.0 <= dVar27 * dVar63);
          auVar34._0_8_ = -(ulonglong)(0.0 <= dVar64 * dVar59);
          auVar34 = blendvpd(_DAT_149936790,auVar44,auVar34);
          uVar18 = -(ulonglong)(0.0 <= dVar52);
          dVar36 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
          dVar62 = auVar34._0_8_;
          stack0xfffffffffffffe90 = (undefined1 *)((double)stack0xfffffffffffffe90 * dVar62);
          local_178._0_8_ = (double)local_178._0_8_ * dVar62;
          local_168._0_8_ = (double)local_168._0_8_ * dVar62;
          dVar62 = auVar34._8_8_;
          dStack_150 = dStack_150 * dVar62;
          local_158 = dVar62 * local_158;
          local_148._0_8_ = (double)local_148._0_8_ * dVar62;
          stack0xfffffffffffffed0 = stack0xfffffffffffffed0 * dVar36;
          local_138._0_8_ = dVar36 * (double)local_138._0_8_;
          local_128._0_8_ = (double)local_128._0_8_ * dVar36;
          lVar15 = local_448._0_8_;
          FUN_14481fd10(&local_298,local_178);
          dVar36 = local_288 * local_288 + local_298 * local_298;
          dVar62 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar39._0_8_ = dVar36 + dVar62;
          auVar39._8_8_ = dVar36 + dVar62;
          auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
          auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
          auVar34 = sqrtpd(auVar39,auVar39);
          auVar44 = divpd(auVar44,auVar34);
          auVar45._0_8_ = auVar44._0_8_ * local_288;
          auVar45._8_8_ = auVar44._8_8_ * dStack_280;
          local_1e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar28);
          local_478 = local_118;
          dStack_470 = dStack_110;
          dVar52 = (double)((ulonglong)(local_298 * auVar44._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
          dVar61 = (double)((ulonglong)(dStack_290 * auVar44._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
          dVar62 = 0.0;
          dVar36 = local_108;
        }
        uVar66 = uStack_3c4;
        uVar9 = local_3c8;
        dVar57 = dStack_470;
        dVar25 = dVar25 * (double)uVar11;
        dVar27 = dVar27 * dVar63;
        dVar64 = dVar64 * dVar59;
        dVar26 = dVar26 * (double)uVar5;
        local_1f8._8_4_ = SUB84(dVar61,0);
        local_1f8._0_8_ = dVar52;
        local_1f8._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
        dVar50 = local_3f8._0_8_;
        uVar67 = local_3f8._0_4_;
        uVar68 = local_3f8._4_4_;
        dVar53 = local_3f8._8_8_;
        uVar79 = local_3f8._8_4_;
        uVar80 = local_3f8._12_4_;
        if (*param_4 == '\x01') {
          fVar19 = (float)FUN_14915b162((*(float *)(param_4 + 0x3c) - *(float *)(param_4 + 0x38)) *
                                        *(float *)((longlong)*local_438 + lVar16 * 4) +
                                        *(float *)(param_4 + 0x38),param_4[0x40]);
          dVar63 = *local_3d0;
          dVar52 = local_3d0[1];
          dVar59 = local_3d0[2];
          dVar61 = dVar52 * (double)local_3b8._0_8_ - dVar50 * dVar63;
          dVar65 = dVar59 * (double)local_3b8._8_8_ - dVar53 * dVar52;
          dVar69 = dVar63 * (double)local_398._0_8_ - dVar59 * (double)CONCAT44(uVar66,uVar9);
          dVar65 = dVar65 + dVar65;
          dVar69 = dVar69 + dVar69;
          dVar61 = dVar61 + dVar61;
          local_268 = dVar61 * (double)local_3a8._0_8_ + dVar59 +
                      (dVar69 * (double)local_3b8._0_8_ - dVar65 * dVar50);
          local_278 = (dVar61 * (double)local_3b8._8_8_ - dVar69 * dVar53) +
                      (double)local_3a8._0_8_ * dVar65 + dVar63;
          dStack_270 = ((double)local_398._0_8_ * dVar65 - (double)local_3b8._0_8_ * dVar61) +
                       (double)local_3a8._8_8_ * dVar69 + dVar52;
          dVar50 = *(double *)(param_4 + 0x18) - dVar36;
          dVar59 = *(double *)(param_4 + 0x10) - dVar57;
          dVar53 = *(double *)(param_4 + 8) - local_478;
          dVar63 = dVar50 * dVar50 + dVar53 * dVar53 + dVar59 * dVar59;
          if (((dVar63 != 1.0) || (dVar52 = dVar59, dVar61 = dVar53, dVar65 = dVar50, NAN(dVar63)))
             && (dVar52 = DAT_14c8464e8, dVar61 = DAT_14c8464e0, dVar65 = DAT_14c8464f0,
                9.99999993922529e-09 <= dVar63)) {
            dVar63 = 1.0 / SQRT(dVar63);
            dVar52 = dVar59 * dVar63;
            dVar61 = dVar53 * dVar63;
            dVar65 = dVar50 * dVar63;
          }
          dVar50 = (double)fVar19;
          local_338 = (dVar65 - local_268) * dVar50 + local_268;
          dStack_340 = (dVar52 - dStack_270) * dVar50 + dStack_270;
          local_348 = (dVar61 - local_278) * dVar50 + local_278;
          FUN_14915c690(local_178,&local_278,&local_348);
          dVar50 = (double)local_1f8._8_8_ * (double)local_168._0_8_ * -1.0 +
                   (double)local_1e8._0_8_ * (double)stack0xfffffffffffffe90 +
                   (double)local_178._0_8_ * (double)local_1e8._8_8_ * 1.0 +
                   (double)local_168._8_8_ * (double)local_1f8._0_8_;
          dVar53 = (double)local_1f8._0_8_ * (double)local_168._0_8_ * 1.0 +
                   (double)local_1e8._8_8_ * (double)stack0xfffffffffffffe90 +
                   (double)local_178._0_8_ * (double)local_1e8._0_8_ * -1.0 +
                   (double)local_168._8_8_ * (double)local_1f8._8_8_;
          dVar59 = (double)local_1e8._8_8_ * (double)local_168._0_8_ * 1.0 +
                   (((double)local_178._0_8_ * (double)local_1f8._8_8_ * 1.0 +
                    (double)local_168._8_8_ * (double)local_1e8._0_8_) -
                   (double)stack0xfffffffffffffe90 * (double)local_1f8._0_8_);
          dVar63 = (double)local_1e8._0_8_ * (double)local_168._0_8_ * -1.0 +
                   (((double)local_178._0_8_ * (double)local_1f8._0_8_ * -1.0 +
                    (double)local_168._8_8_ * (double)local_1e8._8_8_) -
                   (double)stack0xfffffffffffffe90 * (double)local_1f8._8_8_);
          dVar52 = dVar59 * dVar59 + dVar50 * dVar50;
          dVar61 = dVar63 * dVar63 + dVar53 * dVar53;
          auVar40._0_8_ = dVar52 + dVar61;
          auVar40._8_8_ = dVar52 + dVar61;
          auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_);
          auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_);
          auVar44 = sqrtpd(auVar40,auVar40);
          auVar44 = divpd(_DAT_149934d80,auVar44);
          auVar46._0_8_ = auVar44._0_8_ * dVar59;
          auVar46._8_8_ = auVar44._8_8_ * dVar63;
          dVar52 = (double)((ulonglong)(dVar50 * auVar44._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_));
          dVar61 = (double)((ulonglong)(dVar53 * auVar44._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_));
          local_1e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar46,auVar29);
          local_1f8._8_4_ = SUB84(dVar61,0);
          local_1f8._0_8_ = dVar52;
          local_1f8._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
        }
        local_418._8_4_ = SUB84(dVar27,0);
        local_418._0_8_ = dVar64;
        local_418._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        local_3e8._8_4_ = SUB84(dVar26,0);
        local_3e8._0_8_ = dVar25;
        local_3e8._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
        if (*param_5 == '\x01') {
          fVar19 = (float)FUN_14915b162((*(float *)(param_5 + 0x6c) - *(float *)(param_5 + 0x68)) *
                                        *(float *)((longlong)param_10[5] + lVar16 * 4) +
                                        *(float *)(param_5 + 0x68),param_5[0x70]);
          uVar11 = FUN_1401e2d36(param_6);
          fVar20 = (float)FUN_1448c9f94(uVar11);
          local_448._8_4_ = SUB84(dVar62,0);
          local_448._0_8_ = dVar36;
          local_448._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
          dVar36 = (double)*(float *)((longlong)param_10[5] + lVar16 * 4);
          dVar64 = *(double *)(param_5 + 0x18) * dVar36 + param_10[2];
          dVar26 = *(double *)(param_5 + 0x10) * dVar36 + param_10[1];
          dVar25 = dVar36 * *(double *)(param_5 + 8) + *param_10;
          dVar36 = dVar25 + 132.39999389648438;
          fVar21 = (float)FUN_140073f12(CONCAT44((int)((ulonglong)dVar36 >> 0x20),(float)dVar36));
          dVar36 = dVar26 + 9.199999809265137;
          fVar22 = (float)FUN_140073f12(CONCAT44((int)((ulonglong)dVar36 >> 0x20),(float)dVar36));
          dVar36 = dVar64 + 217.89999389648438;
          fVar23 = (float)FUN_140073f12(CONCAT44((int)((ulonglong)dVar36 >> 0x20),(float)dVar36));
          dVar36 = *(double *)(param_5 + 0x60);
          dVar62 = *(double *)(param_5 + 0x58);
          dVar25 = sin((double)fVar21 * *(double *)(param_5 + 0x50) +
                       (double)fVar21 * *(double *)(param_5 + 0x50) + dVar25 +
                       *(double *)(param_5 + 0x38));
          dVar26 = sin((double)fVar22 * dVar62 + (double)fVar22 * dVar62 + dVar26 +
                       *(double *)(param_5 + 0x40));
          dVar64 = sin((double)fVar23 * dVar36 + (double)fVar23 * dVar36 + dVar64 +
                       *(double *)(param_5 + 0x48));
          dVar36 = *(double *)(param_5 + 0x30);
          dVar62 = *(double *)(param_5 + 0x28);
          dVar27 = (double)fVar19;
          dVar50 = (double)fVar20;
          dVar25 = dVar25 * *(double *)(param_5 + 0x20) * dVar27 * dVar50 * 0.5;
          dVar53 = sin(dVar25);
          dVar25 = cos(dVar25);
          dVar63 = dVar53 * 0.0;
          dVar65 = (double)local_1f8._0_8_ * dVar63;
          dVar52 = (double)local_1f8._0_8_ * dVar63;
          dVar61 = (double)local_1f8._0_8_ * dVar53;
          dVar69 = dVar53 * (double)local_1f8._8_8_;
          dVar70 = dVar63 * (double)local_1f8._8_8_;
          dVar59 = dVar63 * (double)local_1e8._0_8_;
          local_1f8._0_8_ =
               dVar63 * (double)local_1e8._0_8_ * -1.0 +
               dVar63 * (double)local_1f8._8_8_ +
               (double)local_1f8._0_8_ * dVar25 * 1.0 + dVar53 * (double)local_1e8._8_8_;
          local_1f8._8_8_ =
               dVar53 * (double)local_1e8._0_8_ * 1.0 +
               dVar25 * (double)local_1f8._8_8_ + dVar65 * -1.0 + dVar63 * (double)local_1e8._8_8_;
          local_1e8._0_8_ =
               dVar25 * (double)local_1e8._0_8_ * 1.0 +
               ((dVar52 * 1.0 + (double)local_1e8._8_8_ * dVar63) - dVar69);
          local_1e8._8_8_ =
               dVar59 * -1.0 + ((dVar61 * -1.0 + (double)local_1e8._8_8_ * dVar25) - dVar70);
          dVar62 = dVar26 * dVar62 * dVar27 * dVar50 * 0.5;
          dVar53 = sin(dVar62);
          dVar25 = (double)local_3e8._0_8_;
          dVar26 = (double)local_3e8._8_8_;
          dVar62 = cos(dVar62);
          dVar63 = dVar53 * 0.0;
          dVar70 = (double)local_1f8._0_8_ * dVar63;
          dVar52 = (double)local_1f8._0_8_ * dVar53;
          dVar61 = (double)local_1f8._0_8_ * dVar63;
          dVar65 = dVar63 * (double)local_1f8._8_8_;
          dVar69 = dVar53 * (double)local_1f8._8_8_;
          dVar59 = dVar63 * (double)local_1e8._0_8_;
          local_1f8._0_8_ =
               dVar53 * (double)local_1e8._0_8_ * -1.0 +
               dVar63 * (double)local_1f8._8_8_ +
               (double)local_1f8._0_8_ * dVar62 * 1.0 + dVar63 * (double)local_1e8._8_8_;
          local_1f8._8_8_ =
               dVar63 * (double)local_1e8._0_8_ * 1.0 +
               dVar62 * (double)local_1f8._8_8_ + dVar70 * -1.0 + dVar53 * (double)local_1e8._8_8_;
          local_1e8._0_8_ =
               dVar62 * (double)local_1e8._0_8_ * 1.0 +
               ((dVar52 * 1.0 + (double)local_1e8._8_8_ * dVar63) - dVar65);
          local_1e8._8_8_ =
               dVar59 * -1.0 + ((dVar61 * -1.0 + (double)local_1e8._8_8_ * dVar62) - dVar69);
          dVar36 = dVar64 * dVar36 * dVar27 * dVar50 * 0.5;
          dVar64 = (double)local_418._0_8_;
          dVar27 = (double)local_418._8_8_;
          dVar50 = sin(dVar36);
          dVar53 = cos(dVar36);
          dVar59 = dVar50 * 0.0;
          dVar36 = dVar59 * (double)local_1e8._0_8_ * -1.0 +
                   dVar50 * (double)local_1f8._8_8_ +
                   (double)local_1f8._0_8_ * dVar53 * 1.0 + dVar59 * (double)local_1e8._8_8_;
          dVar62 = dVar59 * (double)local_1e8._0_8_ * 1.0 +
                   dVar53 * (double)local_1f8._8_8_ +
                   (double)local_1f8._0_8_ * dVar50 * -1.0 + dVar59 * (double)local_1e8._8_8_;
          dVar63 = (double)local_1e8._0_8_ * dVar53 * 1.0 +
                   (((double)local_1f8._0_8_ * dVar59 * 1.0 + (double)local_1e8._8_8_ * dVar50) -
                   (double)local_1f8._8_8_ * dVar59);
          dVar59 = (double)local_1e8._0_8_ * dVar50 * -1.0 +
                   (((double)local_1f8._0_8_ * dVar59 * -1.0 + (double)local_1e8._8_8_ * dVar53) -
                   (double)local_1f8._8_8_ * dVar59);
          dVar50 = dVar63 * dVar63 + dVar36 * dVar36;
          dVar53 = dVar59 * dVar59 + dVar62 * dVar62;
          auVar35._0_8_ = dVar50 + dVar53;
          auVar35._8_8_ = dVar50 + dVar53;
          auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
          auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
          auVar44 = sqrtpd(auVar35,auVar35);
          auVar44 = divpd(_DAT_149934d80,auVar44);
          auVar41._0_8_ = auVar44._0_8_ * dVar63;
          auVar41._8_8_ = auVar44._8_8_ * dVar59;
          dVar52 = (double)((ulonglong)(dVar36 * auVar44._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
          dVar61 = (double)((ulonglong)(dVar62 * auVar44._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
          local_1e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar30);
          local_1f8._8_4_ = SUB84(dVar61,0);
          local_1f8._0_8_ = dVar52;
          local_1f8._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
          uVar67 = local_3f8._0_4_;
          uVar68 = local_3f8._4_4_;
          uVar79 = local_3f8._8_4_;
          uVar80 = local_3f8._12_4_;
          dVar36 = (double)local_448._0_8_;
          dVar62 = (double)local_448._8_8_;
        }
        if (*param_7 == '\x01') {
          local_268 = (double)local_1e8._0_8_;
          uStack_260 = local_1e8._8_8_;
          local_278 = (double)local_1f8._0_8_;
          dStack_270 = (double)local_1f8._8_8_;
          uVar24 = FUN_14915b162((*(float *)(param_7 + 0x2c) - *(float *)(param_7 + 0x28)) *
                                 *(float *)((longlong)*local_438 + lVar16 * 4) +
                                 *(float *)(param_7 + 0x28),param_7[0x30]);
          pdVar6 = local_420;
          local_3f8._0_4_ = uVar24;
          pdVar1 = (double *)((longlong)*local_420 + lVar15);
          dVar64 = *pdVar1;
          dVar27 = pdVar1[1];
          dVar25 = *(double *)((longlong)*local_420 + 0x10 + lVar15);
          dVar50 = *local_3d8;
          dVar53 = local_3d8[1];
          dVar26 = local_3d8[2];
          dVar59 = dVar53 * (double)local_3b8._0_8_ - (double)CONCAT44(uVar68,uVar67) * dVar50;
          dVar63 = dVar26 * (double)local_3b8._8_8_ - (double)CONCAT44(uVar80,uVar79) * dVar53;
          dVar52 = dVar50 * (double)local_398._0_8_ - dVar26 * (double)CONCAT44(uVar66,uVar9);
          dVar63 = dVar63 + dVar63;
          dVar52 = dVar52 + dVar52;
          dVar59 = dVar59 + dVar59;
          local_358 = dVar59 * (double)local_3a8._0_8_ + dVar26 +
                      (dVar52 * (double)local_3b8._0_8_ - dVar63 * (double)CONCAT44(uVar68,uVar67));
          local_368 = (dVar59 * (double)local_3b8._8_8_ - dVar52 * (double)CONCAT44(uVar80,uVar79))
                      + (double)local_3a8._0_8_ * dVar63 + dVar50;
          dStack_360 = ((double)local_398._0_8_ * dVar63 - (double)local_3b8._0_8_ * dVar59) +
                       (double)local_3a8._8_8_ * dVar52 + dVar53;
          if (0.0 < *(double *)(local_428 + 0x20)) {
            dVar53 = dVar27 * (double)local_3b8._0_8_ - (double)CONCAT44(uVar68,uVar67) * dVar64;
            dVar59 = dVar25 * (double)local_3b8._8_8_ - (double)CONCAT44(uVar80,uVar79) * dVar27;
            dVar63 = dVar64 * (double)local_398._0_8_ - dVar25 * (double)CONCAT44(uVar66,uVar9);
            dVar53 = dVar53 + dVar53;
            dVar59 = dVar59 + dVar59;
            dVar63 = dVar63 + dVar63;
            dVar52 = (double)*(float *)(param_7 + 4);
            dVar26 = *(double *)(param_7 + 0x18);
            dVar50 = *(double *)(param_7 + 0x10);
            fVar19 = *(float *)(param_7 + 0x20);
            if (0.999 <= fVar19) {
              fVar19 = 0.999;
            }
            if (fVar19 <= 0.0) {
              fVar19 = 0.0;
            }
            dVar69 = *local_458;
            dVar61 = *(double *)((longlong)dVar69 + 0x10 + lVar15);
            dVar65 = *(double *)((longlong)dVar69 + 8 + lVar15);
            dVar70 = (double)fVar19;
            *(double *)((longlong)dVar69 + lVar15) =
                 ((((dVar53 * (double)local_3b8._8_8_ - (double)CONCAT44(uVar80,uVar79) * dVar63) +
                   (double)local_3a8._0_8_ * dVar59 + dVar64) * dVar52 + *(double *)(param_7 + 8)) -
                 *(double *)((longlong)dVar69 + lVar15)) * dVar70 +
                 *(double *)((longlong)dVar69 + lVar15);
            *(double *)((longlong)dVar69 + 8 + lVar15) =
                 ((((dVar59 * (double)local_398._0_8_ - dVar53 * (double)CONCAT44(uVar66,uVar9)) +
                   (double)local_3a8._8_8_ * dVar63 + dVar27) * dVar52 + dVar50) - dVar65) * dVar70
                 + dVar65;
            *(double *)((longlong)dVar69 + 0x10 + lVar15) =
                 ((((double)local_3a8._0_8_ * dVar53 + dVar25 +
                   (dVar63 * (double)local_3b8._0_8_ - (double)CONCAT44(uVar68,uVar67) * dVar59)) *
                   dVar52 + dVar26) - dVar61) * dVar70 + dVar61;
            dVar50 = (double)*(float *)(param_7 + 0x24);
            dVar26 = *local_458;
            *(double *)((longlong)dVar26 + lVar15) = dVar50 * *(double *)((longlong)dVar26 + lVar15)
            ;
            *(double *)((longlong)dVar26 + 8 + lVar15) =
                 *(double *)((longlong)dVar26 + 8 + lVar15) * dVar50;
            *(double *)((longlong)dVar26 + 0x10 + lVar15) =
                 *(double *)((longlong)dVar26 + 0x10 + lVar15) * dVar50;
            dVar61 = *local_450;
            dVar26 = *(double *)((longlong)dVar61 + lVar15);
            dVar50 = *(double *)((longlong)dVar61 + 8 + lVar15);
            dVar53 = *(double *)((longlong)dVar61 + 0x10 + lVar15);
            dVar65 = *local_458;
            dVar59 = *(double *)(local_428 + 0x20);
            dVar63 = *(double *)((longlong)dVar65 + 0x10 + lVar15);
            dVar52 = *(double *)((longlong)dVar65 + 8 + lVar15);
            *(double *)((longlong)dVar61 + lVar15) =
                 dVar59 * *(double *)((longlong)dVar65 + lVar15) + dVar26;
            *(double *)((longlong)dVar61 + 8 + lVar15) = dVar52 * dVar59 + dVar50;
            *(double *)((longlong)dVar61 + 0x10 + lVar15) = dVar63 * dVar59 + dVar53;
            dVar59 = *local_450;
            dVar63 = *(double *)((longlong)dVar59 + 0x10 + lVar15) - dVar36;
            dVar61 = *(double *)((longlong)dVar59 + 8 + lVar15) - dVar57;
            dVar52 = *(double *)((longlong)dVar59 + lVar15) - local_478;
            dVar65 = dVar63 * dVar63 + dVar52 * dVar52 + dVar61 * dVar61;
            if (((dVar65 != 1.0) || (dVar69 = dVar63, dVar70 = dVar61, dVar51 = dVar52, NAN(dVar65))
                ) && (dVar69 = DAT_14c8464f0, dVar70 = DAT_14c8464e8, dVar51 = DAT_14c8464e0,
                     9.99999993922529e-09 <= dVar65)) {
              dVar65 = 1.0 / SQRT(dVar65);
              dVar69 = dVar63 * dVar65;
              dVar70 = dVar61 * dVar65;
              dVar51 = dVar52 * dVar65;
            }
            dVar25 = (double)(float)SQRT(dVar25 * dVar25 + dVar64 * dVar64 + dVar27 * dVar27);
            *(double *)((longlong)dVar59 + lVar15) = dVar51 * dVar25 + local_478;
            *(double *)((longlong)dVar59 + 8 + lVar15) = dVar70 * dVar25 + dVar57;
            *(double *)((longlong)dVar59 + 0x10 + lVar15) = dVar69 * dVar25 + dVar36;
            dVar27 = *local_450;
            dVar25 = *(double *)((longlong)dVar27 + 0x10 + lVar15);
            dVar64 = *(double *)((longlong)dVar27 + 8 + lVar15);
            dVar63 = 1.0 / *(double *)(local_428 + 0x20);
            dVar59 = *local_458;
            *(double *)((longlong)dVar59 + lVar15) =
                 dVar63 * (*(double *)((longlong)dVar27 + lVar15) - dVar26);
            *(double *)((longlong)dVar59 + 8 + lVar15) = (dVar64 - dVar50) * dVar63;
            *(double *)((longlong)dVar59 + 0x10 + lVar15) = (dVar25 - dVar53) * dVar63;
          }
          dVar25 = *local_450;
          dVar26 = *local_400;
          *(undefined8 *)((longlong)dVar26 + 0x10 + lVar15 * 2) =
               *(undefined8 *)((longlong)dVar25 + 0x10 + lVar15);
          puVar2 = (undefined8 *)((longlong)dVar25 + lVar15);
          uVar11 = puVar2[1];
          puVar3 = (undefined8 *)((longlong)dVar26 + lVar15 * 2);
          *puVar3 = *puVar2;
          puVar3[1] = uVar11;
          dVar50 = *local_450;
          dVar53 = *local_458;
          dVar25 = *(double *)((longlong)dVar53 + 0x10 + lVar15);
          dVar26 = *(double *)((longlong)dVar53 + 8 + lVar15);
          dVar64 = *(double *)((longlong)dVar50 + 0x10 + lVar15);
          dVar27 = *(double *)((longlong)dVar50 + 8 + lVar15);
          dVar59 = *local_400;
          *(double *)((longlong)dVar59 + 0x18 + lVar15 * 2) =
               *(double *)((longlong)dVar53 + lVar15) * 0.10000000149011612 +
               *(double *)((longlong)dVar50 + lVar15);
          *(double *)((longlong)dVar59 + 0x20 + lVar15 * 2) = dVar26 * 0.10000000149011612 + dVar27;
          *(double *)((longlong)dVar59 + 0x28 + lVar15 * 2) = dVar25 * 0.10000000149011612 + dVar64;
          dVar64 = *local_450;
          local_448._8_4_ = SUB84(dVar62,0);
          local_448._0_8_ = dVar36;
          local_448._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
          local_178._0_8_ = *(double *)((longlong)dVar64 + lVar15) - local_478;
          register0x00001280 = (undefined1 *)(*(double *)((longlong)dVar64 + 8 + lVar15) - dVar57);
          dVar26 = *local_420;
          dVar62 = *(double *)((longlong)dVar26 + lVar15);
          dVar25 = *(double *)((longlong)dVar26 + 8 + lVar15);
          dVar26 = *(double *)((longlong)dVar26 + 0x10 + lVar15);
          dVar53 = (double)local_1f8._8_8_ * dVar26 - dVar25 * (double)local_1e8._0_8_;
          dVar53 = dVar53 + dVar53;
          dVar27 = (double)local_1f8._0_8_ * dVar25 - dVar62 * (double)local_1f8._8_8_;
          dVar27 = dVar27 + dVar27;
          dVar50 = (double)local_1e8._0_8_ * dVar62 - dVar26 * (double)local_1f8._0_8_;
          dVar50 = dVar50 + dVar50;
          local_288 = ((double)local_1f8._0_8_ * dVar50 - dVar53 * (double)local_1f8._8_8_) +
                      (double)local_1e8._8_8_ * dVar27 + dVar26;
          dStack_290 = ((double)local_1e8._0_8_ * dVar53 - dVar27 * (double)local_1f8._0_8_) +
                       (double)local_1e8._8_8_ * dVar50 + dVar25;
          local_298 = ((double)local_1f8._8_8_ * dVar27 - dVar50 * (double)local_1e8._0_8_) +
                      dVar53 * (double)local_1e8._8_8_ + dVar62;
          local_168._0_8_ = *(double *)((longlong)dVar64 + 0x10 + lVar15) - dVar36;
          FUN_14915c690(&local_348,&local_298,local_178);
          lVar17 = local_408;
          dVar36 = (double)local_1f8._8_8_ * local_338 * -1.0 +
                   (double)local_1e8._0_8_ * dStack_340 +
                   local_348 * (double)local_1e8._8_8_ * 1.0 + dStack_330 * (double)local_1f8._0_8_;
          dVar62 = (double)local_1f8._0_8_ * local_338 * 1.0 +
                   (double)local_1e8._8_8_ * dStack_340 +
                   local_348 * (double)local_1e8._0_8_ * -1.0 + dStack_330 * (double)local_1f8._8_8_
          ;
          dVar25 = (double)local_1e8._8_8_ * local_338 * 1.0 +
                   ((local_348 * (double)local_1f8._8_8_ * 1.0 +
                    dStack_330 * (double)local_1e8._0_8_) - dStack_340 * (double)local_1f8._0_8_);
          dVar26 = (double)local_1e8._0_8_ * local_338 * -1.0 +
                   ((local_348 * (double)local_1f8._0_8_ * -1.0 +
                    dStack_330 * (double)local_1e8._8_8_) - dStack_340 * (double)local_1f8._8_8_);
          dVar64 = dVar25 * dVar25 + dVar36 * dVar36;
          dVar27 = dVar26 * dVar26 + dVar62 * dVar62;
          auVar47._0_8_ = dVar64 + dVar27;
          auVar47._8_8_ = dVar64 + dVar27;
          auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
          auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
          auVar44 = sqrtpd(auVar47,auVar47);
          auVar44 = divpd(_DAT_149934d80,auVar44);
          auVar55._0_8_ = auVar44._0_8_ * dVar25;
          auVar55._8_8_ = auVar44._8_8_ * dVar26;
          dVar26 = (double)((ulonglong)(dVar36 * auVar44._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_));
          dVar64 = (double)((ulonglong)(dVar62 * auVar44._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_));
          local_1e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar55,auVar31);
          local_1f8._8_4_ = SUB84(dVar64,0);
          local_1f8._0_8_ = dVar26;
          local_1f8._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
          dVar36 = *(double *)(param_7 + 0x38);
          dVar62 = *(double *)(param_7 + 0x40);
          dVar25 = *(double *)(param_7 + 0x48);
          dVar52 = local_1e8._0_8_;
          dVar61 = local_1e8._8_8_;
          dVar50 = dVar64 * dVar25 - dVar62 * dVar52;
          dVar50 = dVar50 + dVar50;
          dVar27 = dVar26 * dVar62 - dVar36 * dVar64;
          dVar27 = dVar27 + dVar27;
          dVar53 = dVar52 * dVar36 - dVar25 * dVar26;
          dVar53 = dVar53 + dVar53;
          dVar63 = (dVar26 * dVar53 - dVar50 * dVar64) + dVar61 * dVar27 + dVar25;
          dVar59 = (dVar52 * dVar50 - dVar27 * dVar26) + dVar61 * dVar53 + dVar62;
          dVar57 = (dVar64 * dVar27 - dVar53 * dVar52) + dVar61 * dVar50 + dVar36;
          dVar25 = *pdVar6;
          dVar36 = *(double *)((longlong)dVar25 + lVar15);
          dVar62 = *(double *)((longlong)dVar25 + 8 + lVar15);
          dVar25 = *(double *)((longlong)dVar25 + 0x10 + lVar15);
          dVar50 = dVar64 * dVar25 - dVar62 * dVar52;
          dVar50 = dVar50 + dVar50;
          dVar53 = dVar26 * dVar62 - dVar36 * dVar64;
          dVar53 = dVar53 + dVar53;
          dVar27 = dVar52 * dVar36 - dVar25 * dVar26;
          dVar27 = dVar27 + dVar27;
          dVar25 = (dVar26 * dVar27 - dVar50 * dVar64) + dVar61 * dVar53 + dVar25;
          dVar26 = (dVar52 * dVar50 - dVar53 * dVar26) + dVar61 * dVar27 + dVar62;
          dVar36 = (dVar64 * dVar53 - dVar27 * dVar52) + dVar61 * dVar50 + dVar36;
          dVar62 = dVar25 * dVar25 + dVar36 * dVar36 + dVar26 * dVar26;
          if (((dVar62 != 1.0) || (dVar53 = dVar26, dVar52 = dVar36, dVar50 = dVar25, NAN(dVar62)))
             && (dVar53 = DAT_14c8464e8, dVar52 = DAT_14c8464e0, dVar50 = DAT_14c8464f0,
                9.99999993922529e-09 <= dVar62)) {
            dVar62 = 1.0 / SQRT(dVar62);
            dVar53 = dVar26 * dVar62;
            dVar52 = dVar36 * dVar62;
            dVar50 = dVar25 * dVar62;
          }
          dVar62 = local_448._8_8_;
          dVar36 = local_448._0_8_;
          dVar27 = local_418._8_8_;
          dVar64 = local_418._0_8_;
          dVar26 = local_3e8._8_8_;
          dVar25 = local_3e8._0_8_;
          dVar50 = dVar50 * dVar63 + dVar52 * dVar57 + dVar53 * dVar59;
          dVar53 = (double)((*(float *)(param_7 + 0x54) - *(float *)(param_7 + 0x50)) *
                            *(float *)((longlong)*local_438 + lVar16 * 4) +
                           *(float *)(param_7 + 0x50));
          local_370 = ((dVar63 - dVar50) - local_358) * dVar53 + local_358;
          local_378 = ((dVar59 - dVar50) - dStack_360) * dVar53 + dStack_360;
          local_380 = ((dVar57 - dVar50) - local_368) * dVar53 + local_368;
          FUN_14915c690(&local_298,&local_380,&local_368);
          auVar44 = _DAT_149934d80;
          dVar59 = (double)local_1f8._8_8_ * local_288 * -1.0 +
                   (double)local_1e8._0_8_ * dStack_290 +
                   local_298 * (double)local_1e8._8_8_ * 1.0 + dStack_280 * (double)local_1f8._0_8_;
          dVar63 = (double)local_1f8._0_8_ * local_288 * 1.0 +
                   (double)local_1e8._8_8_ * dStack_290 +
                   local_298 * (double)local_1e8._0_8_ * -1.0 + dStack_280 * (double)local_1f8._8_8_
          ;
          dVar50 = (double)local_1e8._8_8_ * local_288 * 1.0 +
                   ((local_298 * (double)local_1f8._8_8_ * 1.0 +
                    dStack_280 * (double)local_1e8._0_8_) - dStack_290 * (double)local_1f8._0_8_);
          dVar53 = (double)local_1e8._0_8_ * local_288 * -1.0 +
                   ((local_298 * (double)local_1f8._0_8_ * -1.0 +
                    dStack_280 * (double)local_1e8._8_8_) - dStack_290 * (double)local_1f8._8_8_);
          dVar57 = dVar50 * dVar50 + dVar59 * dVar59;
          dVar52 = dVar53 * dVar53 + dVar63 * dVar63;
          auVar48._0_8_ = dVar57 + dVar52;
          auVar48._8_8_ = dVar57 + dVar52;
          auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
          auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
          auVar34 = sqrtpd(auVar48,auVar48);
          auVar34 = divpd(_DAT_149934d80,auVar34);
          auVar56._0_8_ = auVar34._0_8_ * dVar50;
          auVar56._8_8_ = auVar34._8_8_ * dVar53;
          local_1e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar56,auVar32);
          local_1f8._8_8_ =
               (ulonglong)(dVar63 * auVar34._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
          local_1f8._0_8_ =
               (ulonglong)(dVar59 * auVar34._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
          fVar19 = (float)local_3f8._0_4_;
          if (1.0 <= (float)local_3f8._0_4_) {
            fVar19 = 1.0;
          }
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          FUN_144a44da6(local_178,&local_278,local_1f8,(double)fVar19);
          dVar50 = (double)local_168._0_8_ * (double)local_168._0_8_ +
                   (double)local_178._0_8_ * (double)local_178._0_8_;
          dVar53 = (double)local_168._8_8_ * (double)local_168._8_8_ +
                   (double)stack0xfffffffffffffe90 * (double)stack0xfffffffffffffe90;
          auVar42._0_8_ = dVar50 + dVar53;
          auVar42._8_8_ = dVar50 + dVar53;
          auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
          auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
          auVar34 = sqrtpd(auVar42,auVar42);
          auVar44 = divpd(auVar44,auVar34);
          auVar49._0_8_ = auVar44._0_8_ * (double)local_168._0_8_;
          auVar49._8_8_ = auVar44._8_8_ * (double)local_168._8_8_;
          dVar52 = (double)((ulonglong)((double)local_178._0_8_ * auVar44._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
          dVar61 = (double)((ulonglong)((double)stack0xfffffffffffffe90 * auVar44._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
          local_1e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar49,auVar33);
          local_1f8._8_4_ = SUB84(dVar61,0);
          local_1f8._0_8_ = dVar52;
          local_1f8._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
        }
        auVar34 = local_1e8;
        uVar12 = (uint)*(ushort *)((longlong)param_10[3] + lVar14 * 2);
        if (uVar12 == 0xffff) {
          uVar12 = 0xffffffff;
        }
        local_178._8_4_ = SUB84(dVar61,0);
        local_178._0_8_ = dVar52;
        uStack_16c = (int)((ulonglong)dVar61 >> 0x20);
        local_158 = local_478;
        dStack_150 = dStack_470;
        local_148._8_4_ = SUB84(dVar62,0);
        local_148._0_8_ = dVar36;
        local_148._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
        local_138._8_4_ = SUB84(dVar27,0);
        local_138._0_8_ = dVar64;
        uStack_12c = (int)((ulonglong)dVar27 >> 0x20);
        local_128._8_4_ = SUB84(dVar26,0);
        local_128._0_8_ = dVar25;
        local_128._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
        local_488 = 0;
        local_490 = 0;
        local_498 = (undefined *)CONCAT71(local_498._1_7_,1);
        local_168 = local_1e8;
        FUN_144831e8e(lVar17,uVar12,local_178);
        lVar16 = lVar16 + 1;
        lVar14 = lVar14 + 0x10;
        lVar15 = lVar15 + 0x18;
        param_3 = local_430;
        dVar50 = dVar52;
        dVar53 = dVar61;
      } while (lVar16 < *(int *)(param_10 + 4));
    }
    dVar36 = *(double *)(local_428 + 0x20);
    dVar62 = param_3[1];
    dVar25 = param_3[2] * dVar36 + param_10[2];
    *param_10 = dVar36 * *param_3 + *param_10;
    param_10[1] = dVar62 * dVar36 + param_10[1];
    param_10[2] = dVar25;
    pdVar1 = local_458;
    pdVar6 = local_450;
    if ((*(longlong *)(local_428 + 0x58) != 0 & param_8) != 0) {
      FUN_14051b394(param_10 + 0xf,dVar25,1);
      if (0 < *(int *)(param_10 + 4)) {
        lVar16 = 0x10;
        lVar15 = 0xc;
        lVar14 = 0;
        do {
          uVar12 = (uint)*(ushort *)((longlong)param_10[3] + lVar15);
          if (*(ushort *)((longlong)param_10[3] + lVar15) == 0xffff) {
            uVar12 = 0xffffffff;
          }
          FUN_14486750c(lVar17,local_178,uVar12,0);
          dVar36 = param_10[0xf];
          pdVar1 = (double *)((longlong)dVar36 + -0x10 + lVar16);
          *pdVar1 = local_158;
          pdVar1[1] = dStack_150;
          *(undefined8 *)((longlong)dVar36 + lVar16) = local_148._0_8_;
          lVar14 = lVar14 + 1;
          lVar16 = lVar16 + 0x18;
          lVar15 = lVar15 + 0x20;
        } while (lVar14 < *(int *)(param_10 + 4));
      }
      lVar17 = local_428;
      local_178 = *(undefined1 (*) [12])(param_10 + 0xf);
      local_498 = (undefined *)((ulonglong)local_498 & 0xffffffff00000000);
      FUN_144467884(*(undefined8 *)(local_428 + 0x58),param_9,local_178,&DAT_149e1dd24);
      local_178._0_8_ = 0x3e99999a3e99999a;
      stack0xfffffffffffffe90 = &DAT_3f8000003f800000;
      local_1f8._0_12_ = *(undefined1 (*) [12])(param_10 + 0x11);
      local_498 = (undefined *)((ulonglong)local_498 & 0xffffffff00000000);
      FUN_144467784(*(undefined8 *)(lVar17 + 0x58),param_9,local_1f8,local_178);
      local_178 = *(undefined1 (*) [12])(param_10 + 0xb);
      local_498 = &DAT_149e1dd04;
      FUN_14446754c(*(undefined8 *)(lVar17 + 0x58),param_9,local_178);
      pdVar1 = local_458;
      pdVar6 = local_450;
    }
  }
LAB_14925e9ca:
  local_450 = pdVar6;
  local_458 = pdVar1;
  if ((local_f0 ^ (ulonglong)auStack_4b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149261006 FUN_149261006 body=385 status=ok
// SIG undefined FUN_149261006(void)

undefined8 FUN_149261006(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_548 [32];
  undefined1 local_528;
  longlong local_518 [2];
  longlong local_508 [2];
  undefined1 local_4f8 [496];
  undefined1 local_308;
  undefined8 local_304;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined8 local_2e0 [9];
  undefined8 local_298 [15];
  undefined1 local_220 [136];
  undefined8 local_198 [11];
  undefined1 local_140;
  undefined8 auStack_138 [32];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_548;
  FUN_149261188(local_4f8);
  local_304 = *(undefined8 *)(param_1 + 0x1f0);
  local_308 = 1;
  local_2e8 = *(undefined8 *)(param_1 + 0x208);
  local_2f8 = *(undefined4 *)(param_1 + 0x1f8);
  uStack_2f4 = *(undefined4 *)(param_1 + 0x1fc);
  uStack_2f0 = *(undefined4 *)(param_1 + 0x200);
  uStack_2ec = *(undefined4 *)(param_1 + 0x204);
  puVar2 = (undefined8 *)(param_1 + 0x210);
  puVar3 = local_2e0;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined8 *)(param_1 + 600);
  puVar3 = local_298;
  for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_14115e0ba(local_220,param_1 + 0x2d0);
  puVar2 = (undefined8 *)(param_1 + 0x358);
  puVar3 = local_198;
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_140 = *(undefined1 *)(param_1 + 0x3b0);
  puVar2 = (undefined8 *)(param_1 + 0x3c0);
  puVar3 = auStack_138;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1492615ac(param_2,local_4f8);
  FUN_140056680(local_508,L"ChainRoot.Name");
  FUN_140056680(local_518,L"ChainRoot");
  local_528 = 1;
  FUN_1490fb142(param_2,local_518,local_508,1);
  if (local_518[0] != 0) {
    FUN_1400020a8();
  }
  if (local_508[0] != 0) {
    FUN_1400020a8();
  }
  FUN_149261680(local_4f8);
  if ((local_38 ^ (ulonglong)auStack_548) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149261188 FUN_149261188 body=1059 status=ok
// SIG undefined FUN_149261188(void)

undefined8 * FUN_149261188(undefined8 *param_1)

{
  undefined ***pppuVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined **local_d8 [13];
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbfe280;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined1 *)(param_1 + 0x43) = 1;
  uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x44] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x45] = uVar5;
  param_1[0x46] = DAT_14c8464f0;
  param_1[0x47] = 0x3ff0000000000000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x249) = 0;
  *(undefined8 *)((longlong)param_1 + 0x251) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  param_1[0x50] = 0;
  param_1[0x51] = 0x3ff0000000000000;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x4d] = 0x3ff0000000000000;
  param_1[0x4e] = 0x3fe3333340000000;
  param_1[0x4f] = 0x3fe99999a0000000;
  param_1[0x54] = 0x3ff0000000000000;
  param_1[0x55] = 0x4000000000000000;
  param_1[0x58] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x56) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = uVar2;
  *(undefined4 *)(param_1 + 0x57) = uVar3;
  *(undefined4 *)((longlong)param_1 + 700) = uVar4;
  param_1[0x59] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  pppuVar1 = (undefined ***)(param_1 + 0x5b);
  FUN_14109baa4(pppuVar1);
  *(undefined4 *)((longlong)param_1 + 0x364) = 0x40000000;
  uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x6d] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x6e] = uVar5;
  param_1[0x6f] = DAT_14c8464f0;
  param_1[0x70] = 0x3f7ae1483f400000;
  param_1[0x71] = 0x3dcccccd00000000;
  *(undefined1 *)(param_1 + 0x72) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0x3ff0000000000000;
  param_1[0x75] = 0;
  param_1[0x76] = 0x3d4ccccd3e4ccccd;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0x3ff00000;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x81) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0x3ff00000;
  param_1[0x82] = 0x3ff0000000000000;
  param_1[0x83] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x86] = DAT_14c8464f0;
  uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x84] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x85] = uVar5;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  uVar4 = DAT_14c846518._4_4_;
  uVar3 = (undefined4)DAT_14c846518;
  uVar2 = DAT_14c846510._4_4_;
  *(undefined4 *)(param_1 + 0x40) = (undefined4)DAT_14c846510;
  *(undefined4 *)((longlong)param_1 + 0x204) = uVar2;
  *(undefined4 *)(param_1 + 0x41) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x20c) = uVar4;
  param_1[0x42] = DAT_14c846520;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  FUN_14109baa4(local_d8);
  *(undefined4 *)(param_1 + 0x68) = local_70;
  *(undefined1 *)((longlong)param_1 + 0x344) = local_6c;
  *(undefined1 *)((longlong)param_1 + 0x345) = local_6b;
  if (pppuVar1 != local_d8) {
    if (param_1[0x69] != 0) {
      FUN_1400020a8();
    }
    param_1[0x69] = local_68;
    local_68 = 0;
    *(undefined4 *)(param_1 + 0x6a) = (undefined4)local_60;
    *(undefined4 *)((longlong)param_1 + 0x354) = local_60._4_4_;
    local_60 = 0;
  }
  if (DAT_14c950c29 == '\x01') {
    if (local_58 == 0) {
      local_58 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  param_1[0x6b] = local_58;
  local_d8[0] = (undefined **)&DAT_14a176f00;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_d8[0] = &PTR_FUN_14a177080;
  FUN_144a78a1a();
  uVar5 = FUN_1414cd6fa(pppuVar1);
  FUN_14045d416(&local_dc);
  local_f0 = local_dc;
  local_f8 = 0;
  FUN_1406507bc(uVar5,local_d8,0,0);
  uVar5 = FUN_1414cd6fa(pppuVar1);
  FUN_14045d416(&local_e0);
  local_f0 = local_e0;
  local_f8 = 0;
  FUN_1406507bc(uVar5,local_d8,0x3f800000,0x3f800000);
  *(undefined1 *)(param_1 + 0x77) = 1;
  puVar7 = &DAT_14c846480;
  puVar8 = param_1 + 0x78;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492615ac FUN_1492615ac body=211 status=ok
// SIG undefined FUN_1492615ac(void)

undefined8 * FUN_1492615ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_146705c72();
  param_1[2] = uVar1;
  uVar1 = FUN_1467060c6();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149261680 FUN_149261680 body=114 status=ok
// SIG undefined FUN_149261680(void)

void FUN_149261680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbfe280;
  FUN_1492b99c0(param_1 + 0x84);
  param_1[0x5b] = &DAT_14a176f00;
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  param_1[0x5b] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x5c);
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492616f6 FUN_1492616f6 body=290 status=ok
// SIG undefined FUN_1492616f6(void)

void FUN_1492616f6(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar5 = puVar2[8];
  uVar1 = *(undefined4 *)puVar2[0xc];
  uVar6 = puVar2[0x10];
  uVar7 = puVar2[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(puVar2 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(*param_2 + 0xe0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(*param_2 + 0x100,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  FUN_1492618e4(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,uVar5,uVar1,uVar6,uVar7,uVar9,uVar10,
                uVar11);
  return;
}



// FUNCTION 149261820 FUN_149261820 body=194 status=ok
// SIG undefined FUN_149261820(void)

void FUN_149261820(longlong param_1)

{
  undefined1 auStack_248 [32];
  undefined4 local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_200 = param_1 + 0x220;
  local_208 = param_1 + 0x200;
  local_210 = param_1 + 0x1e0;
  local_218 = param_1 + 0x170;
  local_220 = param_1 + 0x110;
  local_228 = *(undefined4 *)(param_1 + 0x100);
  FUN_1492618e4(local_1f8,param_1 + 0x10,param_1 + 0x70,param_1 + 0xb8);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492618e4 FUN_1492618e4 body=5291 status=ok
// SIG undefined FUN_1492618e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492618e4(longlong param_1,undefined8 *param_2,float *param_3,float *param_4,float param_5,
                  undefined1 (*param_6) [16],char *param_7,undefined1 *param_8,undefined1 *param_9,
                  char *param_10)

{
  float fVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  undefined1 auVar9 [16];
  char *pcVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar18;
  undefined1 auVar16 [16];
  double dVar19;
  double dVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  char *pcVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined4 local_1b0;
  char *local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  char *local_188;
  undefined8 local_178;
  undefined1 *puStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  char *local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  double dStack_100;
  char *local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  pauVar7 = param_6;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined8 *)*pauVar7 = *param_2;
    param_2 = param_2 + 1;
    pauVar7 = (undefined1 (*) [16])(*pauVar7 + 8);
  }
  lVar6 = *(longlong *)(param_1 + 0x1b0);
  if (lVar6 != 0) {
    if (*param_10 == '\0') {
      *param_8 = 0;
      *(undefined8 *)(param_8 + 4) = 0;
      *(undefined2 *)(param_8 + 0xc) = 0xffff;
      *(undefined4 *)(param_8 + 0x10) = 0xffffffff;
      *(undefined8 *)(param_8 + 0x18) = 0;
      *param_9 = 0;
      *(undefined8 *)(param_9 + 4) = 0;
      *(undefined2 *)(param_9 + 0xc) = 0xffff;
      *(undefined4 *)(param_9 + 0x10) = 0xffffffff;
      *(undefined8 *)(param_9 + 0x18) = 0;
      *param_10 = '\x01';
    }
    if (1e-08 < param_5) {
      fVar1 = *param_4;
      if ((1e-08 < *param_3) || (1e-08 < fVar1)) {
        if (1e-08 < *param_3) {
          local_f8 = *(char **)(param_3 + 0xc);
          local_108 = *(double *)(param_3 + 8);
          dStack_100 = *(double *)(param_3 + 10);
          cVar5 = FUN_144828dba(param_8,param_3 + 0xf,lVar6);
          if (cVar5 != '\0') {
            uVar8 = 0xffffffff;
            if (*(ushort *)(param_8 + 0xc) != 0xffff) {
              uVar8 = (uint)*(ushort *)(param_8 + 0xc);
            }
            FUN_14486750c(lVar6,&local_168,uVar8,0);
            dVar19 = dStack_100 * local_168 - local_108 * dStack_160;
            dVar23 = (double)local_f8 * dStack_160 - dStack_100 * local_158;
            dVar28 = local_108 * local_158 - local_168 * (double)local_f8;
            dVar23 = dVar23 + dVar23;
            dVar28 = dVar28 + dVar28;
            dVar19 = dVar19 + dVar19;
            pcVar24 = (char *)(dVar28 * local_168 - dVar23 * dStack_160);
            local_108 = (dVar19 * dStack_160 - dVar28 * local_158) + dStack_150 * dVar23 + local_108
            ;
            dStack_100 = (local_158 * dVar23 - dVar19 * local_168) +
                         dStack_150 * dVar28 + dStack_100;
            pcVar10 = (char *)(dStack_150 * dVar19);
            if (*(char *)(param_3 + 0xe) != '\0') {
              local_108 = local_108 + (double)CONCAT44(uStack_144,local_148);
              dStack_100 = dStack_100 + (double)CONCAT44(uStack_13c,uStack_140);
              local_f8 = (char *)((double)local_f8 + dStack_150 * dVar19);
              pcVar10 = pcVar24;
              pcVar24 = local_138;
            }
            local_f8 = (char *)((double)pcVar10 + (double)local_f8 + (double)pcVar24);
          }
          lVar2 = *(longlong *)(param_1 + 0x58);
          if ((lVar2 != 0) && (*param_7 == '\x01')) {
            local_178 = 0x3f80000000000000;
            puStack_170 = &DAT_3f8000003f800000;
            if (*(char *)(param_3 + 0xe) == '\0') {
              local_198 = *(double *)param_6[2];
              dStack_190 = *(double *)(param_6[2] + 8);
              local_188 = *(char **)param_6[3];
              dVar19 = (double)*(float *)(param_7 + 4);
              local_158 = (double)local_f8 * dVar19 + (double)local_188;
              dStack_160 = dStack_100 * dVar19 + *(double *)(param_6[2] + 8);
              local_168 = dVar19 * local_108 + local_198;
              local_1b8 = &local_178;
              local_1b0 = 0;
              FUN_14446764a(lVar2,param_7 + 0x10);
            }
            else {
              local_168 = *(double *)param_6[2];
              dStack_160 = *(double *)(param_6[2] + 8);
              local_158 = *(double *)param_6[3];
              local_1a8 = param_7 + 0x10;
              local_1b0 = 0;
              local_1b8 = &local_178;
              FUN_14446764a(lVar2,local_1a8,&local_168,&local_108);
              local_118 = (double)*(float *)(param_7 + 4) * 0.10000000149011612;
              local_168 = DAT_14c8463d0;
              dStack_160 = DAT_14c8463d8;
              uStack_140 = SUB84(dStack_100,0);
              uStack_13c = (undefined4)((ulonglong)dStack_100 >> 0x20);
              local_158 = DAT_14c8463e0;
              dStack_150 = DAT_14c8463e8;
              local_148 = (undefined4)local_108;
              uStack_144 = local_108._4_4_;
              local_138 = local_f8;
              uStack_130 = 0;
              local_128._8_4_ = SUB84(local_118,0);
              local_128._0_8_ = local_118;
              local_128._12_4_ = (int)((ulonglong)local_118 >> 0x20);
              uStack_110 = 0;
              local_1b8 = (undefined8 *)((ulonglong)local_1b8 & 0xffffffff00000000);
              FUN_144467984(*(undefined8 *)(param_1 + 0x58),local_1a8,&local_168,&local_178);
            }
          }
          dVar19 = local_108;
          if (*(char *)(param_3 + 0xe) == '\x01') {
            local_f8 = (char *)((double)local_f8 - *(double *)param_6[3]);
            dStack_100 = dStack_100 - *(double *)(param_6[2] + 8);
            dVar19 = local_108 - *(double *)param_6[2];
          }
          if ((((9.999999747378752e-05 < ABS(dVar19)) || (9.999999747378752e-05 < ABS(dStack_100)))
              || (9.999999747378752e-05 < ABS((double)local_f8))) &&
             (((9.999999747378752e-05 < ABS(*(double *)(param_3 + 2)) ||
               (9.999999747378752e-05 < ABS(*(double *)(param_3 + 4)))) ||
              (9.999999747378752e-05 < ABS(*(double *)(param_3 + 6)))))) {
            dVar23 = (double)local_f8 * (double)local_f8 + dVar19 * dVar19 + dStack_100 * dStack_100
            ;
            if (((dVar23 != 1.0) ||
                (pcVar10 = local_f8, dVar28 = dStack_100, local_108 = dVar19, NAN(dVar23))) &&
               (pcVar10 = DAT_14c8464f0, dVar28 = DAT_14c8464e8, local_108 = DAT_14c8464e0,
               9.99999993922529e-09 <= dVar23)) {
              dVar23 = 1.0 / SQRT(dVar23);
              pcVar10 = (char *)((double)local_f8 * dVar23);
              dVar28 = dStack_100 * dVar23;
              local_108 = dVar19 * dVar23;
            }
            dVar23 = *(double *)(param_3 + 2);
            dVar13 = *(double *)(param_3 + 4);
            dVar17 = *(double *)*param_6;
            dVar26 = *(double *)(*param_6 + 8);
            dVar11 = *(double *)param_6[1];
            dVar19 = *(double *)(param_6[1] + 8);
            dVar25 = dVar13 * dVar17 - dVar23 * dVar26;
            dVar27 = *(double *)(param_3 + 6) * dVar26 - dVar13 * dVar11;
            dVar29 = dVar23 * dVar11 - dVar17 * *(double *)(param_3 + 6);
            dVar27 = dVar27 + dVar27;
            dVar29 = dVar29 + dVar29;
            dVar25 = dVar25 + dVar25;
            local_188 = (char *)(dVar25 * dVar19 + *(double *)(param_3 + 6) +
                                (dVar29 * dVar17 - dVar27 * dVar26));
            local_198 = (dVar25 * dVar26 - dVar29 * dVar11) + dVar19 * dVar27 + dVar23;
            dStack_190 = (dVar11 * dVar27 - dVar17 * dVar25) +
                         *(double *)(param_6[1] + 8) * dVar29 + dVar13;
            dVar19 = (double)local_188 * (double)local_188 +
                     local_198 * local_198 + dStack_190 * dStack_190;
            if ((dVar19 != 1.0) || (NAN(dVar19))) {
              if (9.99999993922529e-09 <= dVar19) {
                dVar19 = 1.0 / SQRT(dVar19);
                local_188 = (char *)((double)local_188 * dVar19);
                dStack_190 = dStack_190 * dVar19;
                local_198 = dVar19 * local_198;
              }
              else {
                local_188 = DAT_14c8464f0;
                local_198 = DAT_14c8464e0;
                dStack_190 = DAT_14c8464e8;
              }
            }
            dStack_100 = dVar28;
            local_f8 = pcVar10;
            if (*param_3 * param_5 < 1.0) {
              dVar23 = (double)(*param_3 * param_5);
              pcVar10 = (char *)(((double)pcVar10 - (double)local_188) * dVar23 + (double)local_188)
              ;
              dVar19 = (dVar28 - dStack_190) * dVar23 + dStack_190;
              dVar23 = (local_108 - local_198) * dVar23 + local_198;
              dVar28 = (double)pcVar10 * (double)pcVar10 + dVar23 * dVar23 + dVar19 * dVar19;
              if (((dVar28 != 1.0) ||
                  (local_108 = dVar23, dStack_100 = dVar19, local_f8 = pcVar10, NAN(dVar28))) &&
                 (local_108 = DAT_14c8464e0, dStack_100 = DAT_14c8464e8, local_f8 = DAT_14c8464f0,
                 9.99999993922529e-09 <= dVar28)) {
                local_108 = 1.0 / SQRT(dVar28);
                local_f8 = (char *)((double)pcVar10 * local_108);
                dStack_100 = dVar19 * local_108;
                local_108 = dVar23 * local_108;
              }
            }
            FUN_14915c690(&local_168,&local_198,&local_108);
            dVar28 = *(double *)*param_6;
            dVar13 = *(double *)(*param_6 + 8);
            dVar17 = *(double *)param_6[1];
            dVar26 = *(double *)(param_6[1] + 8);
            dVar19 = dVar13 * local_158 * -1.0 +
                     dVar17 * dStack_160 + dVar26 * local_168 * 1.0 + dVar28 * dStack_150;
            dVar23 = dVar28 * local_158 * 1.0 +
                     dVar26 * dStack_160 + dVar17 * local_168 * -1.0 + dVar13 * dStack_150;
            dVar11 = dVar26 * local_158 * 1.0 +
                     ((local_168 * dVar13 * 1.0 + dStack_150 * dVar17) - dVar28 * dStack_160);
            dVar28 = dVar17 * local_158 * -1.0 +
                     ((local_168 * dVar28 * -1.0 + dStack_150 * dVar26) - dVar13 * dStack_160);
            dVar13 = dVar11 * dVar11 + dVar19 * dVar19;
            dVar17 = dVar28 * dVar28 + dVar23 * dVar23;
            auVar14._0_8_ = dVar13 + dVar17;
            auVar14._8_8_ = dVar13 + dVar17;
            auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
            auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
            auVar15 = sqrtpd(auVar14,auVar14);
            auVar20 = divpd(_DAT_149934d80,auVar15);
            auVar21._0_8_ = auVar20._0_8_ * dVar11;
            auVar21._8_8_ = auVar20._8_8_ * dVar28;
            uVar4 = (ulonglong)(dVar23 * auVar20._8_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
            auVar12 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar21,auVar12);
            auVar15._8_4_ = (int)uVar4;
            auVar15._0_8_ =
                 (ulonglong)(dVar19 * auVar20._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
            auVar15._12_4_ = (int)(uVar4 >> 0x20);
            *param_6 = auVar15;
            param_6[1] = auVar12;
          }
          fVar1 = *param_4;
        }
        if (1e-08 < fVar1) {
          local_f8 = *(char **)(param_4 + 0xc);
          local_108 = *(double *)(param_4 + 8);
          dStack_100 = *(double *)(param_4 + 10);
          cVar5 = FUN_144828dba(param_9,param_4 + 0xf,lVar6);
          if (cVar5 != '\0') {
            uVar8 = 0xffffffff;
            if (*(ushort *)(param_9 + 0xc) != 0xffff) {
              uVar8 = (uint)*(ushort *)(param_9 + 0xc);
            }
            FUN_14486750c(lVar6,&local_168,uVar8,0);
            dVar19 = dStack_100 * local_168 - local_108 * dStack_160;
            dVar23 = (double)local_f8 * dStack_160 - dStack_100 * local_158;
            dVar28 = local_108 * local_158 - local_168 * (double)local_f8;
            dVar23 = dVar23 + dVar23;
            dVar28 = dVar28 + dVar28;
            dVar19 = dVar19 + dVar19;
            pcVar24 = (char *)(dVar28 * local_168 - dVar23 * dStack_160);
            local_108 = (dVar19 * dStack_160 - dVar28 * local_158) + dStack_150 * dVar23 + local_108
            ;
            dStack_100 = (local_158 * dVar23 - dVar19 * local_168) +
                         dStack_150 * dVar28 + dStack_100;
            pcVar10 = (char *)(dStack_150 * dVar19);
            if (*(char *)(param_4 + 0xe) != '\0') {
              local_108 = local_108 + (double)CONCAT44(uStack_144,local_148);
              dStack_100 = dStack_100 + (double)CONCAT44(uStack_13c,uStack_140);
              local_f8 = (char *)((double)local_f8 + dStack_150 * dVar19);
              pcVar10 = pcVar24;
              pcVar24 = local_138;
            }
            local_f8 = (char *)((double)pcVar10 + (double)local_f8 + (double)pcVar24);
          }
          lVar6 = *(longlong *)(param_1 + 0x58);
          if ((lVar6 != 0) && (*param_7 == '\x01')) {
            local_178 = 0x3e4ccccd00000000;
            puStack_170 = &DAT_3f8000003f800000;
            if (*(char *)(param_4 + 0xe) == '\0') {
              local_198 = *(double *)param_6[2];
              dStack_190 = *(double *)(param_6[2] + 8);
              local_188 = *(char **)param_6[3];
              dVar19 = (double)*(float *)(param_7 + 4);
              local_158 = (double)local_f8 * dVar19 + (double)local_188;
              dStack_160 = dStack_100 * dVar19 + *(double *)(param_6[2] + 8);
              local_168 = dVar19 * local_108 + local_198;
              local_1b8 = &local_178;
              local_1b0 = 0;
              FUN_14446764a(lVar6,param_7 + 0x10);
            }
            else {
              local_168 = *(double *)param_6[2];
              dStack_160 = *(double *)(param_6[2] + 8);
              local_158 = *(double *)param_6[3];
              local_1b0 = 0;
              local_1b8 = &local_178;
              FUN_14446764a(lVar6,param_7 + 0x10,&local_168,&local_108);
              local_118 = (double)*(float *)(param_7 + 4) * 0.10000000149011612;
              local_168 = DAT_14c8463d0;
              dStack_160 = DAT_14c8463d8;
              uStack_140 = SUB84(dStack_100,0);
              uStack_13c = (undefined4)((ulonglong)dStack_100 >> 0x20);
              local_158 = DAT_14c8463e0;
              dStack_150 = DAT_14c8463e8;
              local_148 = (undefined4)local_108;
              uStack_144 = local_108._4_4_;
              local_138 = local_f8;
              uStack_130 = 0;
              local_128._8_4_ = SUB84(local_118,0);
              local_128._0_8_ = local_118;
              local_128._12_4_ = (int)((ulonglong)local_118 >> 0x20);
              uStack_110 = 0;
              local_1b8 = (undefined8 *)((ulonglong)local_1b8 & 0xffffffff00000000);
              FUN_144467984(*(undefined8 *)(param_1 + 0x58),param_7 + 0x10,&local_168,&local_178);
            }
          }
          if (*(char *)(param_4 + 0xe) == '\x01') {
            local_f8 = (char *)((double)local_f8 - *(double *)param_6[3]);
            dStack_100 = dStack_100 - *(double *)(param_6[2] + 8);
            local_108 = local_108 - *(double *)param_6[2];
          }
          dVar19 = *(double *)(param_3 + 2);
          dVar23 = *(double *)(param_3 + 4);
          pcVar10 = *(char **)(param_3 + 6);
          dVar28 = 0.0;
          if (((9.999999747378752e-05 < ABS(dVar19)) ||
              (9.999999747378752e-05 < ABS(*(double *)(param_3 + 4)))) ||
             (dVar13 = local_108, 9.999999747378752e-05 < ABS((double)pcVar10))) {
            dVar17 = *(double *)*param_6;
            dVar26 = *(double *)(*param_6 + 8);
            dVar11 = *(double *)param_6[1];
            dVar13 = *(double *)(param_6[1] + 8);
            dVar29 = dVar19 * dVar11 - dVar17 * (double)pcVar10;
            dVar28 = *(double *)(param_6[1] + 8) * 0.0 - *(double *)(param_6[1] + 8) * 0.0;
            dVar25 = dVar23 * dVar17 - dVar19 * dVar26;
            dVar27 = (double)pcVar10 * dVar26 - dVar23 * dVar11;
            dVar27 = dVar27 + dVar27;
            dVar29 = dVar29 + dVar29;
            dVar25 = dVar25 + dVar25;
            dVar28 = dVar28 + dVar28;
            dVar19 = (dVar25 * dVar26 - dVar29 * dVar11) + dVar13 * dVar27 + dVar19;
            dVar23 = (dVar11 * dVar27 - dVar17 * dVar25) +
                     *(double *)(param_6[1] + 8) * dVar29 + dVar23;
            pcVar10 = (char *)(dVar25 * dVar13 + (double)pcVar10 +
                              (dVar29 * dVar17 - dVar27 * dVar26));
            dVar13 = (double)pcVar10 * (double)pcVar10 + dVar19 * dVar19 + dVar23 * dVar23;
            if ((dVar13 != 1.0) || (NAN(dVar13))) {
              if (9.99999993922529e-09 <= dVar13) {
                dVar13 = 1.0 / SQRT(dVar13);
                pcVar10 = (char *)((double)pcVar10 * dVar13);
                dVar23 = dVar23 * dVar13;
                dVar19 = dVar13 * dVar19;
              }
              else {
                dVar28 = 0.0;
                dVar19 = DAT_14c8464e0;
                dVar23 = DAT_14c8464e8;
                pcVar10 = DAT_14c8464f0;
              }
            }
            dVar13 = (double)local_f8 * (double)pcVar10 + local_108 * dVar19 + dVar23 * dStack_100;
            local_f8 = (char *)((double)local_f8 - (double)pcVar10 * dVar13);
            dStack_100 = dStack_100 - dVar23 * dVar13;
            dVar13 = local_108 - dVar13 * dVar19;
          }
          if ((((9.999999747378752e-05 < ABS(dVar13)) || (9.999999747378752e-05 < ABS(dStack_100)))
              || (9.999999747378752e-05 < ABS((double)local_f8))) &&
             (((9.999999747378752e-05 < ABS(*(double *)(param_4 + 2)) ||
               (9.999999747378752e-05 < ABS(*(double *)(param_4 + 4)))) ||
              (9.999999747378752e-05 < ABS(*(double *)(param_4 + 6)))))) {
            dVar17 = (double)local_f8 * (double)local_f8 + dVar13 * dVar13 + dStack_100 * dStack_100
            ;
            if (((dVar17 != 1.0) ||
                (pcVar24 = local_f8, dVar26 = dStack_100, local_108 = dVar13, NAN(dVar17))) &&
               (pcVar24 = DAT_14c8464f0, dVar26 = DAT_14c8464e8, local_108 = DAT_14c8464e0,
               9.99999993922529e-09 <= dVar17)) {
              dVar17 = 1.0 / SQRT(dVar17);
              pcVar24 = (char *)((double)local_f8 * dVar17);
              dVar26 = dStack_100 * dVar17;
              local_108 = dVar13 * dVar17;
            }
            dVar17 = *(double *)(param_4 + 2);
            dVar11 = *(double *)(param_4 + 4);
            dVar25 = *(double *)*param_6;
            dVar27 = *(double *)(*param_6 + 8);
            dVar29 = *(double *)param_6[1];
            dVar18 = *(double *)(param_6[1] + 8);
            dVar13 = *(double *)(param_6[1] + 8);
            dVar30 = dVar11 * dVar25 - dVar17 * dVar27;
            dVar31 = *(double *)(param_4 + 6) * dVar27 - dVar11 * dVar29;
            dVar33 = dVar17 * dVar29 - dVar25 * *(double *)(param_4 + 6);
            dVar31 = dVar31 + dVar31;
            dVar33 = dVar33 + dVar33;
            dVar30 = dVar30 + dVar30;
            local_188 = (char *)(dVar30 * dVar13 + *(double *)(param_4 + 6) +
                                (dVar33 * dVar25 - dVar31 * dVar27));
            local_198 = (dVar30 * dVar27 - dVar33 * dVar29) + dVar13 * dVar31 + dVar17;
            dStack_190 = (dVar29 * dVar31 - dVar25 * dVar30) +
                         *(double *)(param_6[1] + 8) * dVar33 + dVar11;
            dVar13 = (double)local_188 * (double)local_188 +
                     local_198 * local_198 + dStack_190 * dStack_190;
            if ((dVar13 != 1.0) || (NAN(dVar13))) {
              if (9.99999993922529e-09 <= dVar13) {
                dVar13 = 1.0 / SQRT(dVar13);
                local_188 = (char *)((double)local_188 * dVar13);
                dStack_190 = dStack_190 * dVar13;
                local_198 = local_198 * dVar13;
              }
              else {
                local_198 = DAT_14c8464e0;
                dStack_190 = DAT_14c8464e8;
                local_188 = DAT_14c8464f0;
              }
            }
            local_f8 = pcVar24;
            dStack_100 = dVar26;
            if (param_5 * *param_4 < 1.0) {
              dVar13 = (double)(param_5 * *param_4);
              pcVar24 = (char *)(((double)pcVar24 - (double)local_188) * dVar13 + (double)local_188)
              ;
              dVar26 = (dVar26 - dStack_190) * dVar13 + dStack_190;
              dVar17 = (local_108 - local_198) * dVar13 + local_198;
              dVar13 = (double)pcVar24 * (double)pcVar24 + dVar17 * dVar17 + dVar26 * dVar26;
              if (((dVar13 != 1.0) ||
                  (local_f8 = pcVar24, dStack_100 = dVar26, local_108 = dVar17, NAN(dVar13))) &&
                 (local_f8 = DAT_14c8464f0, dStack_100 = DAT_14c8464e8, local_108 = DAT_14c8464e0,
                 9.99999993922529e-09 <= dVar13)) {
                dVar13 = 1.0 / SQRT(dVar13);
                local_f8 = (char *)((double)pcVar24 * dVar13);
                dStack_100 = dVar26 * dVar13;
                local_108 = dVar17 * dVar13;
              }
            }
            local_1a8 = pcVar10;
            dStack_1a0 = dVar28;
            if ((9.99999993922529e-09 <=
                 local_198 * local_108 + dStack_100 * dStack_190 +
                 (double)local_f8 * (double)local_188 + 1.0) ||
               (((ABS(dVar19) <= 9.999999747378752e-05 && (ABS(dVar23) <= 9.999999747378752e-05)) &&
                (ABS((double)pcVar10) <= 9.999999747378752e-05)))) {
              FUN_14915c690(&local_168,&local_198,&local_108);
              auVar20._8_8_ = dStack_150;
              auVar20._0_8_ = local_158;
              dVar25 = *(double *)*param_6;
              dVar27 = *(double *)(*param_6 + 8);
              dVar29 = *(double *)param_6[1];
              dVar18 = *(double *)(param_6[1] + 8);
              dVar19 = local_168;
              dVar23 = dStack_160;
            }
            else {
              dVar19 = dVar19 * 0.999999999999999;
              dVar23 = dVar23 * 0.999999999999999;
              auVar32._0_8_ = (double)pcVar10 * 0.999999999999999;
              auVar32._8_8_ = dVar28;
              auVar20 = blendpd(auVar32,_DAT_14a4996a0,2);
            }
            dVar26 = auVar20._0_8_;
            dVar11 = auVar20._8_8_;
            dVar28 = dVar27 * dVar26 * -1.0 +
                     dVar29 * dVar23 + dVar18 * dVar19 * 1.0 + dVar25 * dVar11;
            dVar13 = dVar25 * dVar26 * 1.0 +
                     dVar18 * dVar23 + dVar29 * dVar19 * -1.0 + dVar27 * dVar11;
            dVar17 = dVar18 * dVar26 * 1.0 +
                     ((dVar19 * dVar27 * 1.0 + dVar11 * dVar29) - dVar23 * dVar25);
            dVar19 = dVar29 * dVar26 * -1.0 +
                     ((dVar19 * dVar25 * -1.0 + dVar11 * dVar18) - dVar23 * dVar27);
            dVar23 = dVar17 * dVar17 + dVar28 * dVar28;
            dVar26 = dVar19 * dVar19 + dVar13 * dVar13;
            auVar16._0_8_ = dVar23 + dVar26;
            auVar16._8_8_ = dVar23 + dVar26;
            auVar9._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
            auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
            auVar15 = sqrtpd(auVar16,auVar16);
            auVar12 = divpd(_DAT_149934d80,auVar15);
            auVar22._0_8_ = auVar12._0_8_ * dVar17;
            auVar22._8_8_ = auVar12._8_8_ * dVar19;
            uVar4 = (ulonglong)(dVar13 * auVar12._8_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
            auVar15 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar22,auVar9);
            auVar3._8_4_ = (int)uVar4;
            auVar3._0_8_ = (ulonglong)(dVar28 * auVar12._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
            auVar3._12_4_ = (int)(uVar4 >> 0x20);
            *param_6 = auVar3;
            param_6[1] = auVar15;
          }
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149262d90 FUN_149262d90 body=333 status=ok
// SIG undefined FUN_149262d90(void)

void FUN_149262d90(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar5 = puVar2[8];
  uVar1 = *(undefined4 *)puVar2[0xc];
  uVar6 = puVar2[0x14];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar2 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xe0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(*param_2 + 0x100,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(*param_2 + 0x120,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_149262f78(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,uVar5,uVar1,uVar6,uVar8,uVar9,uVar10,
                uVar11);
  return;
}



// FUNCTION 149262eee FUN_149262eee body=137 status=ok
// SIG undefined FUN_149262eee(void)

void FUN_149262eee(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149262f78(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1f8,param_1 + 0x240,
                *(undefined4 *)(param_1 + 0x288),param_1 + 0x290,param_1 + 0x300,param_1 + 800,
                param_1 + 0x340,param_1 + 0x360);
  return;
}



// FUNCTION 149262f78 FUN_149262f78 body=286 status=ok
// SIG undefined FUN_149262f78(void)

void FUN_149262f78(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined8 param_10)

{
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b4 [4];
  undefined8 local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_60[0] = *param_3;
  local_48 = *(undefined8 *)(param_3 + 6);
  local_58 = *(undefined8 *)(param_3 + 2);
  uStack_50 = *(undefined8 *)(param_3 + 4);
  local_40 = *(undefined8 *)(param_3 + 8);
  uStack_38 = *(undefined8 *)(param_3 + 10);
  local_30 = *(undefined8 *)(param_3 + 0xc);
  local_28 = *(undefined1 *)(param_3 + 0xe);
  local_20 = *(undefined8 *)(param_3 + 0xf);
  local_24 = 1;
  local_a8[0] = *param_4;
  local_90 = *(undefined8 *)(param_4 + 6);
  local_a0 = *(undefined8 *)(param_4 + 2);
  uStack_98 = *(undefined8 *)(param_4 + 4);
  local_88 = param_4[8];
  uStack_84 = param_4[9];
  uStack_80 = param_4[10];
  uStack_7c = param_4[0xb];
  local_78 = *(undefined8 *)(param_4 + 0xc);
  local_70 = *(undefined1 *)(param_4 + 0xe);
  local_68 = *(undefined8 *)(param_4 + 0xf);
  local_6c = 1;
  local_b4[0] = 1;
  local_b0 = *param_2;
  local_c0 = param_10;
  local_d0 = param_8;
  uStack_c8 = param_9;
  local_e0 = param_6;
  uStack_d8 = param_7;
  local_e8 = param_5;
  FUN_149263278(param_5,local_b4,local_60,local_a8);
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149263098 FUN_149263098 body=333 status=ok
// SIG undefined FUN_149263098(void)

void FUN_149263098(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar5 = puVar2[8];
  uVar1 = *(undefined4 *)puVar2[0xc];
  uVar6 = puVar2[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar2 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xc0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(*param_2 + 0xe0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(*param_2 + 0x100,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_149263278(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,uVar5,uVar1,uVar6,uVar8,uVar9,uVar10,
                uVar11);
  return;
}



// FUNCTION 1492631ee FUN_1492631ee body=137 status=ok
// SIG undefined FUN_1492631ee(void)

void FUN_1492631ee(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149263278(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200,param_1 + 0x248,
                *(undefined4 *)(param_1 + 0x290),param_1 + 0x2a0,param_1 + 0x310,param_1 + 0x330,
                param_1 + 0x350,param_1 + 0x370);
  return;
}



// FUNCTION 149263278 FUN_149263278 body=453 status=ok
// SIG undefined FUN_149263278(void)

void FUN_149263278(longlong param_1,undefined8 param_2,float *param_3,float *param_4,float param_5,
                  ulonglong param_6,undefined1 *param_7,undefined1 *param_8,undefined1 *param_9,
                  char *param_10)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_178 [32];
  float local_158;
  undefined8 *local_150;
  ulonglong local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  char *local_130;
  undefined8 local_128 [12];
  undefined8 local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    if (*param_10 == '\0') {
      *param_7 = 0;
      *(undefined8 *)(param_7 + 4) = 0;
      *(undefined2 *)(param_7 + 0xc) = 0xffff;
      *(undefined4 *)(param_7 + 0x10) = 0xffffffff;
      *(undefined8 *)(param_7 + 0x18) = 0;
      *param_8 = 0;
      *(undefined8 *)(param_8 + 4) = 0;
      *(undefined2 *)(param_8 + 0xc) = 0xffff;
      *(undefined4 *)(param_8 + 0x10) = 0xffffffff;
      *(undefined8 *)(param_8 + 0x18) = 0;
      *param_9 = 0;
      *(undefined8 *)(param_9 + 4) = 0;
      *(undefined2 *)(param_9 + 0xc) = 0xffff;
      *(undefined4 *)(param_9 + 0x10) = 0xffffffff;
      *(undefined8 *)(param_9 + 0x18) = 0;
      *param_10 = '\x01';
    }
    cVar3 = FUN_144828dba(param_7,param_2,lVar1);
    if (((1e-08 < param_5) && (cVar3 != '\0')) && ((1e-08 < *param_3 || (1e-08 < *param_4)))) {
      uVar2 = (uint)*(ushort *)(param_7 + 0xc);
      if (*(ushort *)(param_7 + 0xc) == 0xffff) {
        uVar2 = 0xffffffff;
      }
      FUN_14486750c(lVar1,local_128,uVar2,0);
      local_130 = param_10;
      local_138 = param_9;
      local_140 = param_8;
      local_148 = param_6;
      local_158 = param_5;
      local_150 = local_128;
      FUN_1492618e4(param_1,local_128,param_3,param_4);
      uVar2 = (uint)*(ushort *)(param_7 + 0xc);
      if (*(ushort *)(param_7 + 0xc) == 0xffff) {
        uVar2 = 0xffffffff;
      }
      puVar5 = local_128;
      puVar6 = local_c8;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      local_148 = local_148 & 0xffffffffffffff00;
      local_150 = (undefined8 *)((ulonglong)local_150 & 0xffffffffffffff00);
      local_158 = (float)CONCAT31(local_158._1_3_,1);
      FUN_144831e8e(lVar1,uVar2,local_c8,0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926343e FUN_14926343e body=509 status=ok
// SIG undefined FUN_14926343e(void)

void FUN_14926343e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_91;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar2 = (undefined8 *)*param_2;
  local_78 = *puVar2;
  local_91 = *(undefined1 *)puVar2[4];
  local_80 = puVar2[8];
  local_88 = puVar2[0xc];
  local_90 = puVar2[0x10];
  uVar3 = puVar2[0x14];
  puVar4 = (undefined8 *)puVar2[0x18];
  uVar5 = puVar2[0x1c];
  uVar1 = *(undefined4 *)puVar2[0x20];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar2 + 0x24,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(*param_2 + 0x140,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0x160,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_a0 = FUN_144828ac0(*param_2 + 0x180,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  local_70 = *puVar4;
  local_d0 = &local_70;
  local_68 = *(undefined4 *)(puVar4 + 1);
  local_e0 = local_90;
  local_e8 = local_88;
  local_d8 = uVar3;
  local_c8 = uVar5;
  local_c0 = uVar1;
  local_b8 = uVar7;
  local_b0 = uVar8;
  local_a8 = uVar9;
  FUN_149263756(*(undefined8 *)(param_1 + 0xc0),local_78,local_91,local_80);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926364c FUN_14926364c body=264 status=ok
// SIG undefined FUN_14926364c(void)

void FUN_14926364c(longlong param_1)

{
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_48 = *(undefined8 *)(param_1 + 600);
  local_80 = &local_48;
  local_40 = *(undefined4 *)(param_1 + 0x260);
  local_50 = param_1 + 0x348;
  local_58 = param_1 + 0x338;
  local_60 = param_1 + 0x318;
  local_68 = param_1 + 0x2f8;
  local_70 = *(undefined4 *)(param_1 + 0x2f0);
  local_78 = param_1 + 0x270;
  local_88 = param_1 + 0x230;
  local_90 = param_1 + 0x218;
  local_98 = param_1 + 0x200;
  FUN_149263756(param_1 + 0x10,param_1 + 0x1f0,*(undefined1 *)(param_1 + 0x1fc),param_1 + 0x1fd);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149263756 FUN_149263756 body=7165 status=ok
// SIG undefined FUN_149263756(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149263756(longlong param_1,char *param_2,undefined1 param_3,undefined8 param_4,
                  double *param_5,double *param_6,double *param_7,longlong *param_8,
                  ulonglong param_9,float param_10,uint *param_11,undefined1 *param_12,
                  longlong *param_13,char *param_14)

{
  float fVar1;
  ushort uVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  double *pdVar20;
  longlong lVar21;
  undefined8 *puVar22;
  double *pdVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  uint uVar26;
  double dVar27;
  undefined1 auVar28 [12];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar47;
  double dVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar56;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  float fVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined1 auStack_6f8 [32];
  float local_6d8;
  double *local_6d0;
  undefined8 *local_6c8;
  uint *local_6c0;
  uint *local_6b8;
  char *local_6b0;
  char local_699;
  undefined1 local_698 [16];
  char *local_680;
  undefined1 local_678 [16];
  undefined1 local_668 [16];
  undefined1 local_658 [16];
  undefined1 local_648 [16];
  undefined1 local_638 [16];
  undefined4 local_628;
  undefined4 uStack_624;
  double dStack_620;
  double local_618;
  double dStack_610;
  double local_608;
  double dStack_600;
  double local_5f8;
  undefined1 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  double dStack_5e0;
  undefined1 local_5d8 [16];
  undefined8 local_5c8;
  double local_5c0;
  double dStack_5b8;
  double dStack_5b0;
  double local_5a8;
  double local_5a0;
  double local_598;
  undefined1 local_590;
  undefined1 local_58c;
  undefined8 local_588;
  undefined8 local_568;
  undefined8 local_558 [12];
  double local_4f8 [2];
  undefined1 local_4e8 [16];
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  double local_498 [12];
  uint local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined2 uStack_42c;
  undefined2 uStack_42a;
  undefined8 local_428;
  double local_418 [4];
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  uint local_3b0 [3];
  undefined2 uStack_3a4;
  undefined2 uStack_3a2;
  double dStack_3a0;
  double local_398;
  double local_390;
  double dStack_388;
  double local_380;
  undefined1 local_378;
  undefined1 local_374;
  undefined8 local_370;
  uint local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined2 uStack_35c;
  undefined2 uStack_35a;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 local_348;
  undefined4 uStack_344;
  double dStack_340;
  double dStack_338;
  double dStack_330;
  double local_328;
  double local_320;
  double local_318;
  undefined1 local_310;
  undefined1 local_30c;
  undefined8 local_308;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
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
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178 [4];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_6f8;
  if (0.0001 <= param_10) {
    if (*param_14 == '\0') {
      *(undefined1 *)param_11 = 0;
      param_11[1] = 0;
      param_11[2] = 0;
      *(undefined2 *)(param_11 + 3) = 0xffff;
      param_11[4] = 0xffffffff;
      param_11[6] = 0;
      param_11[7] = 0;
      *param_12 = 0;
      *(undefined8 *)(param_12 + 4) = 0;
      *(undefined2 *)(param_12 + 0xc) = 0xffff;
      *(undefined4 *)(param_12 + 0x10) = 0xffffffff;
      *(undefined8 *)(param_12 + 0x18) = 0;
      *(undefined4 *)(param_13 + 1) = 0;
      if (*(int *)((longlong)param_13 + 0xc) < 0) {
        FUN_1492d06b4(param_13,0);
      }
      *param_14 = '\x01';
    }
    lVar4 = *(longlong *)(param_1 + 0x1b0);
    if (lVar4 != 0) {
      local_668._0_8_ = (longlong)param_7 + 0x1c;
      FUN_144828dba(param_11,(longlong)param_7 + 0x1c,lVar4);
      cVar12 = FUN_144828dba(param_12,param_2,lVar4);
      if (cVar12 != '\0') {
        iVar14 = (int)param_13[1];
        if (iVar14 != (int)param_8[1]) {
          FUN_149250716(param_13);
          iVar14 = (int)param_8[1];
        }
        if (0 < iVar14) {
          local_698[0] = param_3;
          local_678._0_8_ = param_4;
          lVar19 = 0;
          lVar21 = 0;
          lVar18 = 0;
          auVar29 = ZEXT816(0);
          local_680 = param_2;
          do {
            lVar5 = *param_8;
            cVar12 = FUN_144828dba(*param_13 + lVar21,lVar5 + lVar19);
            if (cVar12 != '\0') {
              fVar61 = *(float *)(lVar5 + 0xc + lVar19);
              auVar28._4_8_ = 0;
              auVar28._0_4_ = fVar61;
              if (fVar61 <= 0.0) {
                auVar28 = ZEXT812(0) << 0x20;
              }
              uVar26 = -(uint)(auVar28._0_4_ < 0.0001);
              auVar38._0_4_ = ~uVar26 & (uint)(auVar29._0_4_ + auVar28._0_4_);
              auVar38._4_4_ = 0;
              auVar38._8_4_ = ~auVar28._8_4_ & auVar29._8_4_;
              auVar38._12_4_ = auVar29._12_4_;
              auVar40._0_4_ = uVar26 & (uint)auVar29._0_4_;
              auVar40._4_4_ = 0;
              auVar40._8_4_ = auVar28._8_4_ & auVar29._8_4_;
              auVar40._12_4_ = 0;
              auVar29 = auVar40 | auVar38;
            }
            lVar18 = lVar18 + 1;
            uVar16 = (ulonglong)(int)param_8[1];
            lVar21 = lVar21 + 0x20;
            lVar19 = lVar19 + 0x10;
          } while (lVar18 < (longlong)uVar16);
          cVar12 = local_698[0];
          if (0.0001 < auVar29._0_4_) {
            local_2f8 = 0.0;
            dStack_2f0 = 0.0;
            local_2e8 = 0.0;
            dStack_2e0 = 1.0;
            local_2d8 = 0.0;
            dStack_2d0 = 0.0;
            local_2c8 = 0.0;
            dStack_2c0 = 0.0;
            local_2b8 = 1.0;
            dStack_2b0 = 1.0;
            local_2a8 = 1.0;
            dStack_2a0 = 0.0;
            local_699 = *local_680;
            if (local_699 == '\x04') {
              uVar2 = *(ushort *)(param_12 + 0xc);
              if ((((uVar2 != 0xffff) &&
                   (*(uint *)(lVar4 + 0xc0) != (uint)uVar2 &&
                    (int)(uint)uVar2 <= (int)*(uint *)(lVar4 + 0xc0))) &&
                  (lVar18 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)(uint)uVar2 * 8),
                  lVar18 != 0)) && (*(char *)(lVar18 + 0x10) == '\x04')) {
                FUN_1401261c4(lVar4,&local_2f8,lVar18,0);
                uVar16 = (ulonglong)*(uint *)(param_8 + 1);
              }
            }
            fVar61 = 1.0 / auVar29._0_4_;
            dVar59 = DAT_14c8463d0;
            dVar27 = DAT_14c8463d8;
            dVar63 = DAT_14c8463e0;
            dVar62 = DAT_14c8463e8;
            if (cVar12 != '\0') {
              dVar63 = DAT_14c8464e0;
              dVar62 = DAT_14c8464e8;
              dVar59 = DAT_14c8464f0;
              if (0 < (int)uVar16) {
                lVar19 = 0;
                lVar18 = 0;
                do {
                  lVar21 = *param_13;
                  sVar3 = *(short *)(lVar21 + 0xc + lVar19 * 2);
                  if (sVar3 != -1) {
                    if ((((uint)*(ushort *)(lVar21 + 6 + lVar19 * 2) < DAT_14c87eb08 + 1U) &&
                        (*(longlong *)(lVar21 + 4 + lVar19 * 2) != 0)) &&
                       (*(char *)(lVar21 + lVar19 * 2) != '\0')) {
                      fVar1 = *(float *)(*param_8 + 0xc + lVar19);
                      if (fVar1 <= 0.0) {
                        fVar1 = 0.0;
                      }
                      if (0.0001 <= fVar1) {
                        FUN_14486750c(lVar4,local_178,sVar3,
                                      CONCAT71((uint7)(uint3)(DAT_14c87eb08 + 1U >> 8),1));
                        dVar27 = (double)(fVar1 * fVar61);
                        dVar63 = dVar63 + dVar27 * local_158;
                        dVar62 = dVar62 + local_150 * dVar27;
                        dVar59 = dVar59 + local_148 * dVar27;
                        uVar16 = (ulonglong)*(uint *)(param_8 + 1);
                      }
                    }
                  }
                  lVar18 = lVar18 + 1;
                  lVar19 = lVar19 + 0x10;
                } while (lVar18 < (int)uVar16);
              }
              local_348 = 0x3f800000;
              dStack_340 = *param_5;
              dStack_338 = param_5[1];
              dStack_330 = param_5[2];
              local_310 = 1;
              local_30c = 0;
              local_308 = 0;
              local_368 = local_368 & 0xffffff00;
              uStack_364 = 0;
              uStack_360 = 0;
              uStack_35c = 0xffff;
              local_358 = 0xffffffff;
              local_3b0[0] = 0x3f800000;
              dVar27 = *param_6;
              dStack_3a0 = param_6[1];
              local_3b0[2] = SUB84(dVar27,0);
              uStack_3a4 = (undefined2)((ulonglong)dVar27 >> 0x20);
              uStack_3a2 = (undefined2)((ulonglong)dVar27 >> 0x30);
              local_398 = param_6[2];
              dVar58 = *param_7;
              dVar64 = param_7[1];
              dVar27 = param_7[2];
              dVar57 = param_7[2];
              uVar26 = (uint)(ushort)param_11[3];
              if ((ushort)param_11[3] == 0xffff) {
                uVar26 = 0xffffffff;
              }
              local_328 = dVar63;
              local_320 = dVar62;
              local_318 = dVar59;
              FUN_14486750c(lVar4,local_418,uVar26,1);
              dVar63 = dVar64 * local_418[0] - dVar58 * local_418[1];
              dVar62 = dVar57 * local_418[1] - dVar64 * local_418[2];
              dVar59 = dVar58 * local_418[2] - local_418[0] * dVar57;
              dVar62 = dVar62 + dVar62;
              dVar59 = dVar59 + dVar59;
              dVar63 = dVar63 + dVar63;
              local_390 = (dVar63 * local_418[1] - dVar59 * local_418[2]) +
                          local_418[3] * dVar62 + dVar58 + local_3f8;
              dStack_388 = (local_418[2] * dVar62 - local_418[0] * dVar63) +
                           local_418[3] * dVar59 + dVar64 + dStack_3f0;
              local_380 = dVar63 * local_418[3] + dVar27 +
                          (dVar59 * local_418[0] - dVar62 * local_418[1]) + local_3e8;
              local_378 = *(undefined1 *)(param_7 + 3);
              local_374 = 0;
              local_370 = 0;
              local_6b8 = &local_438;
              local_438 = local_438 & 0xffffff00;
              uStack_434 = 0;
              uStack_430 = 0;
              uStack_42c = 0xffff;
              local_428 = CONCAT44(local_428._4_4_,0xffffffff);
              uVar26 = (uint)*(ushort *)(param_12 + 0xc);
              if (*(ushort *)(param_12 + 0xc) == 0xffff) {
                uVar26 = 0xffffffff;
              }
              FUN_14486750c(lVar4,local_498,uVar26,1);
              local_6d0 = local_4f8;
              pdVar20 = local_498;
              pdVar23 = local_6d0;
              for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                *pdVar23 = *pdVar20;
                pdVar20 = pdVar20 + 1;
                pdVar23 = pdVar23 + 1;
              }
              local_568._0_1_ = 0;
              local_568._4_4_ = 0x41200000;
              puVar17 = &DAT_14c846480;
              puVar22 = local_558;
              for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                *puVar22 = *puVar17;
                puVar17 = puVar17 + 1;
                puVar22 = puVar22 + 1;
              }
              local_6b0 = param_14;
              local_6c0 = &local_368;
              local_6c8 = &local_568;
              local_6d8 = param_10;
              FUN_1492618e4(param_1,local_498,&local_348,local_3b0);
              uVar2 = *(ushort *)(param_12 + 0xc);
              uVar16 = (ulonglong)uVar2;
              if ((uVar2 == 0xffff) ||
                 (*(uint *)(lVar4 + 0xc0) == (uint)uVar2 ||
                  (int)*(uint *)(lVar4 + 0xc0) < (int)(uint)uVar2)) {
                puVar17 = &DAT_14c846480;
                puVar22 = &local_5c8;
                for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                  *puVar22 = *puVar17;
                  puVar17 = puVar17 + 1;
                  puVar22 = puVar22 + 1;
                }
              }
              else {
                FUN_14449ec9a(lVar4,&local_5c8,
                              *(undefined8 *)(*(longlong *)(lVar4 + 0xb8) + uVar16 * 8),2);
                uVar16 = (ulonglong)*(ushort *)(param_12 + 0xc);
              }
              dVar27 = local_4f8[1];
              dVar59 = local_4f8[0];
              dVar63 = DAT_149931160;
              uVar15 = (undefined4)DAT_149931160;
              uVar65 = DAT_149931160._4_4_;
              dVar62 = DAT_149931160._8_8_;
              uVar66 = DAT_149931160._8_4_;
              uVar67 = DAT_149931160._12_4_;
              dVar57 = dStack_5b8 * dVar63;
              dVar58 = dStack_5b0 * dVar62;
              uVar10 = local_4e8._0_8_;
              uVar37 = local_4e8._8_8_;
              uVar24 = 0xffffffff;
              if ((short)uVar16 != -1) {
                uVar24 = uVar16;
              }
              lVar18 = lVar4;
              uVar13 = FUN_144afced8(lVar4,&local_628,uVar24,1);
              dVar64 = dVar27 * dVar57 * dVar63 +
                       ((dVar59 * dVar58 -
                        (double)CONCAT44(local_5c8._4_4_,(undefined4)local_5c8) * (double)uVar37 *
                        1.0) - local_5c0 * (double)uVar10);
              dVar62 = dVar59 * dVar57 * dVar62 +
                       ((dVar27 * dVar58 -
                        (double)CONCAT44(local_5c8._4_4_,(undefined4)local_5c8) * (double)uVar10 *
                        -1.0) - local_5c0 * (double)uVar37);
              if (local_699 == '\x04') {
                auVar54._8_8_ = dStack_2b0;
                auVar54._0_8_ = local_2b8;
                auVar7._8_8_ = dStack_2a0;
                auVar7._0_8_ = local_2a8;
                dVar63 = (double)CONCAT44(uStack_5e4,uStack_5e8);
                auVar48._8_8_ = dStack_5e0;
                auVar48._0_8_ = dVar63;
                auVar29 = minpd(auVar48,auVar54);
                auVar40 = minpd(local_5d8,auVar7);
                auVar39._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
                auVar39._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
                iVar14 = movmskpd(uVar13,auVar39);
                auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
                auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
                uVar26 = movmskpd((int)lVar18,auVar41);
                if ((uVar26 & 0x3fffffff) == 0 && iVar14 == 0) {
                  dVar63 = (double)CONCAT44(uStack_624,local_628);
                  dVar36 = local_2f8 * dStack_620;
                  dVar45 = dStack_620 * dStack_2f0;
                  dVar35 = dStack_620 * local_2e8 * -1.0 +
                           local_618 * dStack_2f0 +
                           dStack_610 * local_2f8 * 1.0 + dVar63 * dStack_2e0;
                  dStack_620 = dVar63 * local_2e8 * 1.0 +
                               dStack_610 * dStack_2f0 +
                               local_618 * local_2f8 * -1.0 + dStack_620 * dStack_2e0;
                  auVar29._0_8_ =
                       dStack_610 * local_2e8 * 1.0 +
                       ((dVar36 * 1.0 + dStack_2e0 * local_618) - dVar63 * dStack_2f0);
                  auVar29._8_8_ =
                       local_618 * local_2e8 * -1.0 +
                       ((local_2f8 * dVar63 * -1.0 + dStack_2e0 * dStack_610) - dVar45);
                }
                else {
                  local_638 = local_5d8;
                  auVar29 = local_638;
                  dVar35 = dStack_2f0 + dStack_2f0;
                  dVar36 = local_2e8 + local_2e8;
                  dVar46 = local_2f8 * (local_2f8 + local_2f8);
                  dVar45 = (local_2f8 + local_2f8) * dStack_2e0;
                  dStack_1b0 = (dVar36 * dStack_2f0 - dVar45) * local_2a8;
                  local_1b8 = (dVar35 * dStack_2e0 + local_2f8 * dVar36) * local_2a8;
                  local_1c8 = (dVar36 * dStack_2f0 + dVar45) * dStack_2b0;
                  local_1f8._8_8_ = (dVar35 * local_2f8 + dVar36 * dStack_2e0) * local_2b8;
                  local_1f8._0_8_ = (1.0 - (local_2e8 * dVar36 + dStack_2f0 * dVar35)) * local_2b8;
                  local_1a8 = (1.0 - (dVar46 + dStack_2f0 * dVar35)) * local_2a8;
                  local_1e8._8_8_ = 0;
                  local_1e8._0_8_ = (local_2f8 * dVar36 - dVar35 * dStack_2e0) * local_2b8;
                  local_1d8._8_8_ = (1.0 - (local_2e8 * dVar36 + dVar46)) * dStack_2b0;
                  local_1d8._0_8_ = (dVar35 * local_2f8 - dVar36 * dStack_2e0) * dStack_2b0;
                  dStack_1c0 = 0.0;
                  uStack_1a0 = 0;
                  local_198 = local_2d8;
                  dStack_190 = dStack_2d0;
                  local_188 = local_2c8;
                  uStack_180 = 0x3ff0000000000000;
                  dVar46 = (double)CONCAT44(uStack_624,local_628);
                  dVar47 = dStack_620 + dStack_620;
                  dVar53 = local_618 + local_618;
                  dVar60 = dVar46 * (dVar46 + dVar46);
                  dVar35 = (double)CONCAT44(uStack_624,local_628) * dVar53;
                  dVar56 = (dVar46 + dVar46) * dStack_610;
                  local_638._0_8_ = local_5d8._0_8_;
                  uVar11 = local_638._0_8_;
                  local_258 = (dVar47 * dVar46 - dVar53 * dStack_610) * dStack_5e0;
                  dStack_230 = (dVar53 * dStack_620 - dVar56) * (double)local_638._0_8_;
                  dVar36 = local_2b8 * dVar63;
                  dVar45 = dStack_2b0 * dStack_5e0;
                  local_278 = (1.0 - (local_618 * dVar53 + dStack_620 * dVar47)) * dVar63;
                  dStack_250 = (1.0 - (local_618 * dVar53 + dVar60)) * dStack_5e0;
                  dStack_270 = (dVar47 * dVar46 + dVar53 * dStack_610) * dVar63;
                  local_248 = (dVar53 * dStack_620 + dVar56) * dStack_5e0;
                  local_238 = (dVar47 * dStack_610 + dVar35) * (double)local_638._0_8_;
                  local_268 = (dVar35 - dVar47 * dStack_610) * dVar63;
                  uVar15 = 0;
                  uVar65 = 0xbff00000;
                  uVar66 = 0;
                  uVar67 = 0x3ff00000;
                  uStack_260 = 0;
                  uStack_240 = 0;
                  local_228 = (1.0 - (dVar60 + dStack_620 * dVar47)) * (double)local_638._0_8_;
                  uStack_220 = 0;
                  local_218 = local_608;
                  dStack_210 = dStack_600;
                  local_208 = local_5f8;
                  uStack_200 = 0x3ff0000000000000;
                  local_658 = auVar7;
                  local_648 = auVar54;
                  local_638 = auVar29;
                  FUN_1447fea8d(local_178);
                  FUN_144a1c686(local_178,0x3e45798ee0000000);
                  auVar29 = _DAT_149934d80;
                  auVar33._8_8_ = -(ulonglong)(0.0 <= dVar45);
                  auVar33._0_8_ = -(ulonglong)(0.0 <= dVar36);
                  auVar40 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar33);
                  uVar16 = -(ulonglong)(0.0 <= (double)local_658._0_8_ * (double)uVar11);
                  dVar63 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
                  dVar35 = auVar40._0_8_;
                  local_178[2] = local_178[2] * dVar35;
                  local_178[1] = local_178[1] * dVar35;
                  local_178[0] = local_178[0] * dVar35;
                  dVar35 = auVar40._8_8_;
                  local_148 = local_148 * dVar35;
                  local_150 = local_150 * dVar35;
                  local_158 = dVar35 * local_158;
                  local_128 = local_128 * dVar63;
                  local_130 = local_130 * dVar63;
                  local_138 = dVar63 * local_138;
                  FUN_14481fd10(local_298,local_178);
                  dVar63 = (double)local_288._0_8_ * (double)local_288._0_8_ +
                           (double)local_298._0_8_ * (double)local_298._0_8_;
                  dVar35 = (double)local_288._8_8_ * (double)local_288._8_8_ +
                           (double)local_298._8_8_ * (double)local_298._8_8_;
                  auVar44._0_8_ = dVar63 + dVar35;
                  auVar44._8_8_ = dVar63 + dVar35;
                  auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
                  auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
                  auVar40 = sqrtpd(auVar44,auVar44);
                  auVar29 = divpd(auVar29,auVar40);
                  auVar52._0_8_ = auVar29._0_8_ * (double)local_288._0_8_;
                  auVar52._8_8_ = auVar29._8_8_ * (double)local_288._8_8_;
                  dVar35 = (double)((ulonglong)((double)local_298._0_8_ * auVar29._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
                  dStack_620 = (double)((ulonglong)((double)local_298._8_8_ * auVar29._8_8_) &
                                       -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
                  auVar29 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar52,auVar34);
                }
              }
              else {
                dVar35 = (double)CONCAT44(uStack_624,local_628);
                auVar29._8_8_ = dStack_610;
                auVar29._0_8_ = local_618;
              }
              dVar36 = ((double)uVar37 * dVar57 * 1.0 +
                       local_5c0 * dVar59 +
                       (dVar58 * (double)uVar10 -
                       (double)CONCAT44(local_5c8._4_4_,(undefined4)local_5c8) * dVar27 * 1.0)) *
                       (double)CONCAT44(uVar65,uVar15);
              dVar45 = ((double)uVar10 * dVar57 * -1.0 +
                       local_5c0 * dVar27 +
                       (dVar58 * (double)uVar37 -
                       (double)CONCAT44(local_5c8._4_4_,(undefined4)local_5c8) * dVar59 * -1.0)) *
                       (double)CONCAT44(uVar67,uVar66);
              dVar57 = auVar29._0_8_;
              dVar58 = auVar29._8_8_;
              uVar16 = (ulonglong)*(uint *)(param_8 + 1);
              dVar59 = dStack_620 * dVar36 * (double)CONCAT44(uVar65,uVar15) +
                       ((dVar45 * dVar35 - dVar64 * dVar58 * 1.0) - dVar57 * dVar62);
              dVar27 = dVar35 * dVar36 * (double)CONCAT44(uVar67,uVar66) +
                       ((dVar45 * dStack_620 - dVar64 * dVar57 * -1.0) - dVar58 * dVar62);
              dVar63 = dVar58 * dVar36 * 1.0 +
                       dVar62 * dVar35 + (dVar45 * dVar57 - dVar64 * dStack_620 * 1.0);
              dVar62 = dVar57 * dVar36 * -1.0 +
                       dVar62 * dStack_620 + (dVar45 * dVar58 - dVar64 * dVar35 * -1.0);
            }
            dVar57 = DAT_14c8464e0;
            dVar58 = DAT_14c8464e8;
            dVar64 = DAT_14c8464f0;
            if (0 < (int)uVar16) {
              lVar19 = 0;
              lVar18 = 0;
              do {
                lVar21 = *param_13;
                sVar3 = *(short *)(lVar21 + 0xc + lVar19 * 2);
                if ((((sVar3 != -1) &&
                     ((uint)*(ushort *)(lVar21 + 6 + lVar19 * 2) < DAT_14c87eb08 + 1U)) &&
                    (*(longlong *)(lVar21 + 4 + lVar19 * 2) != 0)) &&
                   (*(char *)(lVar21 + lVar19 * 2) != '\0')) {
                  fVar1 = *(float *)(*param_8 + 0xc + lVar19);
                  if (fVar1 <= 0.0) {
                    fVar1 = 0.0;
                  }
                  if (0.0001 <= fVar1) {
                    FUN_14486750c(lVar4,local_178,sVar3,0);
                    dVar35 = (double)(fVar1 * fVar61);
                    dVar57 = dVar57 + dVar35 * local_158;
                    dVar58 = dVar58 + local_150 * dVar35;
                    dVar64 = dVar64 + local_148 * dVar35;
                    uVar16 = (ulonglong)*(uint *)(param_8 + 1);
                  }
                }
                lVar18 = lVar18 + 1;
                lVar19 = lVar19 + 0x10;
              } while (lVar18 < (int)uVar16);
            }
            local_5c8._0_4_ = 0x3f800000;
            local_5c0 = *param_5;
            dStack_5b8 = param_5[1];
            dStack_5b0 = param_5[2];
            local_590 = 1;
            local_58c = 0;
            local_588 = 0;
            local_3b0[0] = local_3b0[0] & 0xffffff00;
            local_3b0[1] = 0;
            local_3b0[2] = 0;
            uStack_3a4 = 0xffff;
            dStack_3a0 = (double)CONCAT44(dStack_3a0._4_4_,0xffffffff);
            local_628 = 0x3f800000;
            dStack_610 = param_6[2];
            dStack_620 = *param_6;
            local_618 = param_6[1];
            local_608 = *param_7;
            dStack_600 = param_7[1];
            local_5f8 = param_7[2];
            uStack_5f0 = *(undefined1 *)(param_7 + 3);
            uStack_5ec = (undefined4)*(undefined8 *)local_668._0_8_;
            uStack_5e8 = (undefined4)((ulonglong)*(undefined8 *)local_668._0_8_ >> 0x20);
            uStack_5e4 = *(undefined4 *)(local_668._0_8_ + 8);
            uVar26 = (uint)*(ushort *)(param_12 + 0xc);
            if (*(ushort *)(param_12 + 0xc) == 0xffff) {
              uVar26 = 0xffffffff;
            }
            local_5a8 = dVar57;
            local_5a0 = dVar58;
            local_598 = dVar64;
            FUN_14486750c(lVar4,&local_568,uVar26,0);
            local_6d0 = local_418;
            pdVar20 = (double *)&local_568;
            pdVar23 = local_6d0;
            for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
              *pdVar23 = *pdVar20;
              pdVar20 = pdVar20 + 1;
              pdVar23 = pdVar23 + 1;
            }
            local_6b0 = param_14;
            local_6b8 = param_11;
            local_6c8 = (undefined8 *)param_9;
            local_6d8 = param_10;
            local_6c0 = local_3b0;
            FUN_1492618e4(param_1,&local_568,&local_5c8,&local_628);
            uVar2 = *(ushort *)(param_12 + 0xc);
            if ((uVar2 == 0xffff) ||
               (*(uint *)(lVar4 + 0xc0) == (uint)uVar2 ||
                (int)*(uint *)(lVar4 + 0xc0) < (int)(uint)uVar2)) {
              pdVar20 = (double *)&DAT_14c846480;
              pdVar23 = local_498;
              for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                *pdVar23 = *pdVar20;
                pdVar20 = pdVar20 + 1;
                pdVar23 = pdVar23 + 1;
              }
            }
            else {
              FUN_14449ec9a(lVar4,local_498,
                            *(undefined8 *)
                             (*(longlong *)(lVar4 + 0xb8) + (ulonglong)(uint)uVar2 * 8),3);
            }
            pcVar9 = local_680;
            uVar10 = local_678._0_8_;
            local_498[2] = local_498[2] * -1.0;
            local_498[3] = local_498[3] * 1.0;
            dVar57 = local_418[1] * local_498[2] * -1.0 +
                     ((local_418[0] * local_498[3] - local_498[0] * local_418[3] * 1.0) -
                     local_418[2] * local_498[1]);
            dVar58 = local_418[0] * local_498[2] * 1.0 +
                     ((local_418[1] * local_498[3] - local_498[0] * local_418[2] * -1.0) -
                     local_418[3] * local_498[1]);
            dVar64 = local_418[3] * local_498[2] * 1.0 +
                     local_498[1] * local_418[0] +
                     (local_498[3] * local_418[2] - local_498[0] * local_418[1] * 1.0);
            dVar35 = local_418[2] * local_498[2] * -1.0 +
                     local_498[1] * local_418[1] +
                     (local_498[3] * local_418[3] - local_498[0] * local_418[0] * -1.0);
            local_298._8_4_ = SUB84(dVar58,0);
            local_298._0_8_ = dVar57;
            local_298._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
            local_288._8_4_ = SUB84(dVar35,0);
            local_288._0_8_ = dVar64;
            local_288._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
            if (local_698[0] != '\0') {
              dVar56 = dVar63 * dVar57;
              dVar47 = dVar57 * dVar27;
              dVar53 = dVar57 * dVar59;
              dVar36 = dVar58 * dVar59;
              dVar45 = dVar58 * dVar27;
              dVar46 = dVar63 * dVar64;
              dVar57 = dVar27 * dVar64 * -1.0 +
                       dVar63 * dVar58 + dVar62 * dVar57 * 1.0 + dVar59 * dVar35;
              dVar58 = dVar59 * dVar64 * 1.0 + dVar62 * dVar58 + dVar56 * -1.0 + dVar27 * dVar35;
              dVar64 = dVar62 * dVar64 * 1.0 + ((dVar47 * 1.0 + dVar35 * dVar63) - dVar36);
              dVar35 = dVar46 * -1.0 + ((dVar53 * -1.0 + dVar35 * dVar62) - dVar45);
              local_298._8_8_ = dVar58;
              local_298._0_8_ = dVar57;
              local_288._8_8_ = dVar35;
              local_288._0_8_ = dVar64;
            }
            puVar25 = &DAT_ffffffff;
            if (*(ushort *)(param_12 + 0xc) != 0xffff) {
              puVar25 = (undefined1 *)(ulonglong)(uint)*(ushort *)(param_12 + 0xc);
            }
            lVar18 = lVar4;
            uVar15 = FUN_144afced8(lVar4,local_4f8,puVar25,0);
            auVar29 = _DAT_149934d80;
            if (local_699 == '\x04') {
              auVar6._8_8_ = dStack_2b0;
              auVar6._0_8_ = local_2b8;
              auVar8._8_8_ = dStack_2a0;
              auVar8._0_8_ = local_2a8;
              auVar40 = local_4b8;
              dVar63 = local_4b8._0_8_;
              dVar59 = local_4b8._8_8_;
              auVar38 = local_4a8;
              dVar62 = local_4a8._0_8_;
              auVar48 = minpd(local_4b8,auVar6);
              auVar54 = minpd(local_4a8,auVar8);
              auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
              auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
              iVar14 = movmskpd(uVar15,auVar49);
              auVar55._8_8_ = -(ulonglong)(auVar54._8_8_ < 0.0);
              auVar55._0_8_ = -(ulonglong)(auVar54._0_8_ < 0.0);
              uVar26 = movmskpd((int)lVar18,auVar55);
              if ((uVar26 & 0x3fffffff) == 0 && iVar14 == 0) {
                dVar27 = local_2f8 * local_4f8[1];
                dVar36 = local_2f8 * local_4f8[0];
                dVar45 = local_4f8[0] * dStack_2f0;
                dVar46 = local_4f8[1] * dStack_2f0;
                dVar53 = local_4f8[0] * local_2e8;
                dVar47 = (double)local_4e8._8_8_ * local_2e8;
                local_4f8[0] = local_4f8[1] * local_2e8 * -1.0 +
                               (double)local_4e8._0_8_ * dStack_2f0 +
                               (double)local_4e8._8_8_ * local_2f8 * 1.0 + local_4f8[0] * dStack_2e0
                ;
                local_4f8[1] = dVar53 * 1.0 +
                               (double)local_4e8._8_8_ * dStack_2f0 +
                               (double)local_4e8._0_8_ * local_2f8 * -1.0 +
                               local_4f8[1] * dStack_2e0;
                local_4e8._8_8_ =
                     (double)local_4e8._0_8_ * local_2e8 * -1.0 +
                     ((dVar36 * -1.0 + (double)local_4e8._8_8_ * dStack_2e0) - dVar46);
                local_4e8._0_8_ =
                     dVar47 * 1.0 + ((dVar27 * 1.0 + (double)local_4e8._0_8_ * dStack_2e0) - dVar45)
                ;
                local_4d8 = local_4d8 * local_2b8;
                dStack_4d0 = dStack_4d0 * dStack_2b0;
                local_4c8 = local_4c8 * local_2a8;
                dStack_4c0 = dStack_4c0 * dStack_2a0;
                dVar45 = dStack_4d0 * local_2f8 - dStack_2f0 * local_4d8;
                dVar46 = local_4c8 * dStack_2f0 - local_2e8 * dStack_4d0;
                dVar27 = local_4d8 * local_2e8 - local_2f8 * local_4c8;
                dVar36 = dStack_4c0 * dStack_2e0 - dStack_2e0 * dStack_4c0;
                dVar46 = dVar46 + dVar46;
                dVar27 = dVar27 + dVar27;
                dVar45 = dVar45 + dVar45;
                dVar36 = dVar36 + dVar36;
                local_4d8 = (dVar45 * dStack_2f0 - local_2e8 * dVar27) +
                            dStack_2e0 * dVar46 + local_4d8 + local_2d8;
                dStack_4d0 = (dVar46 * local_2e8 - dVar45 * local_2f8) +
                             dStack_2e0 * dVar27 + dStack_4d0 + dStack_2d0;
                local_4c8 = (dVar27 * local_2f8 - dStack_2f0 * dVar46) +
                            dStack_2e0 * dVar45 + local_4c8 + local_2c8;
                dStack_4c0 = (dVar36 * dStack_2e0 - dVar36 * dStack_2e0) +
                             dStack_2e0 * dVar36 + dStack_4c0 + dStack_2c0;
                local_4b8._8_8_ = dVar59 * dStack_2b0;
                local_4b8._0_8_ = dVar63 * local_2b8;
                local_4a8._8_8_ = local_4a8._8_8_ * dStack_2a0;
                local_4a8._0_8_ = dVar62 * local_2a8;
                local_698 = auVar40;
                local_678 = auVar6;
                local_668 = auVar38;
              }
              else {
                dVar36 = dStack_2f0 + dStack_2f0;
                dVar27 = local_2e8 + local_2e8;
                dVar35 = local_2f8 * (local_2f8 + local_2f8);
                local_1a8 = (1.0 - (dVar35 + dStack_2f0 * dVar36)) * local_2a8;
                dVar58 = (local_2f8 + local_2f8) * dStack_2e0;
                local_1b8 = (dVar36 * dStack_2e0 + local_2f8 * dVar27) * local_2a8;
                dVar57 = local_2a8 * dVar62;
                dVar64 = dStack_2a0 * local_4a8._8_8_;
                dStack_1b0 = (dVar27 * dStack_2f0 - dVar58) * local_2a8;
                dVar35 = (1.0 - (local_2e8 * dVar27 + dVar35)) * dStack_2b0;
                local_1c8 = (dVar27 * dStack_2f0 + dVar58) * dStack_2b0;
                local_1f8._8_8_ = (dVar36 * local_2f8 + dVar27 * dStack_2e0) * local_2b8;
                local_1f8._0_8_ = (1.0 - (local_2e8 * dVar27 + dStack_2f0 * dVar36)) * local_2b8;
                local_1e8._8_8_ = 0;
                local_1e8._0_8_ = (local_2f8 * dVar27 - dVar36 * dStack_2e0) * local_2b8;
                local_1d8._8_4_ = SUB84(dVar35,0);
                local_1d8._0_8_ = (dVar36 * local_2f8 - dVar27 * dStack_2e0) * dStack_2b0;
                local_1d8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
                dStack_1c0 = 0.0;
                uStack_1a0 = 0;
                local_198 = local_2d8;
                dStack_190 = dStack_2d0;
                local_188 = local_2c8;
                uStack_180 = 0x3ff0000000000000;
                dVar35 = local_4f8[1] + local_4f8[1];
                dVar36 = (double)local_4e8._0_8_ + (double)local_4e8._0_8_;
                dVar27 = local_4f8[0] * (local_4f8[0] + local_4f8[0]);
                local_228 = (1.0 - (dVar27 + local_4f8[1] * dVar35)) * dVar62;
                dVar45 = (local_4f8[0] + local_4f8[0]) * (double)local_4e8._8_8_;
                local_238 = (dVar35 * (double)local_4e8._8_8_ + local_4f8[0] * dVar36) * dVar62;
                local_258 = (dVar35 * local_4f8[0] - dVar36 * (double)local_4e8._8_8_) * dVar59;
                dStack_230 = (dVar36 * local_4f8[1] - dVar45) * dVar62;
                dVar62 = local_2b8 * dVar63;
                dVar58 = dStack_2b0 * dVar59;
                local_278 = ((double)DAT_149934d80 -
                            ((double)local_4e8._0_8_ * dVar36 + local_4f8[1] * dVar35)) * dVar63;
                dStack_250 = (DAT_149934d80._8_8_ - ((double)local_4e8._0_8_ * dVar36 + dVar27)) *
                             dVar59;
                dStack_270 = (dVar35 * local_4f8[0] + dVar36 * (double)local_4e8._8_8_) * dVar63;
                local_248 = (dVar36 * local_4f8[1] + dVar45) * dVar59;
                local_268 = (local_4f8[0] * dVar36 - dVar35 * (double)local_4e8._8_8_) * dVar63;
                uStack_260 = 0;
                uStack_240 = 0;
                uStack_220 = 0;
                local_218 = local_4d8;
                dStack_210 = dStack_4d0;
                local_208 = local_4c8;
                uStack_200 = 0x3ff0000000000000;
                FUN_1447fea8d(local_178);
                FUN_144a1c686(local_178,0x3e45798ee0000000);
                auVar30._8_8_ = -(ulonglong)(0.0 <= dVar58);
                auVar30._0_8_ = -(ulonglong)(0.0 <= dVar62);
                auVar40 = blendvpd(_DAT_149936790,auVar29,auVar30);
                uVar16 = -(ulonglong)(0.0 <= dVar57);
                dVar63 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
                dVar59 = auVar40._0_8_;
                local_178[2] = local_178[2] * dVar59;
                local_178[1] = local_178[1] * dVar59;
                local_178[0] = local_178[0] * dVar59;
                dVar59 = auVar40._8_8_;
                local_148 = local_148 * dVar59;
                local_150 = local_150 * dVar59;
                local_158 = dVar59 * local_158;
                local_128 = local_128 * dVar63;
                local_130 = local_130 * dVar63;
                local_138 = dVar63 * local_138;
                FUN_14481fd10(&local_348,local_178);
                dVar63 = (double)CONCAT44(uStack_344,local_348);
                dVar59 = dStack_338 * dStack_338 + dVar63 * dVar63;
                dVar27 = dStack_330 * dStack_330 + dStack_340 * dStack_340;
                auVar42._0_8_ = dVar59 + dVar27;
                auVar42._8_8_ = dVar59 + dVar27;
                auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
                auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
                auVar40 = sqrtpd(auVar42,auVar42);
                auVar29 = divpd(auVar29,auVar40);
                auVar50._0_8_ = auVar29._0_8_ * dStack_338;
                auVar50._8_8_ = auVar29._8_8_ * dStack_330;
                local_4e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar31);
                local_4b8._8_4_ = SUB84(dVar58,0);
                local_4b8._0_8_ = dVar62;
                local_4b8._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
                local_4a8._8_4_ = SUB84(dVar64,0);
                local_4a8._0_8_ = dVar57;
                local_4a8._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
                local_4f8[0] = (double)((ulonglong)(dVar63 * auVar29._0_8_) &
                                       -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
                local_4f8[1] = (double)((ulonglong)(dStack_340 * auVar29._8_8_) &
                                       -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
                local_4d8 = local_118;
                dStack_4d0 = dStack_110;
                local_4c8 = local_108;
                dStack_4c0 = 0.0;
                dVar57 = (double)local_298._0_8_;
                dVar58 = (double)local_298._8_8_;
                dVar64 = (double)local_288._0_8_;
                dVar35 = (double)local_288._8_8_;
              }
            }
            if (((*(char *)uVar10 != '\x01') || (*(char *)(uVar10 + 1) != '\x01')) ||
               (*(char *)(uVar10 + 2) == '\0')) {
              FUN_14690c377(&local_278,local_298,*(undefined1 *)(param_9 + 0x70),0);
              FUN_14915cb52(&local_348,&local_278,param_9 + 0x70);
              local_178[0] = local_4f8[0];
              local_178[1] = local_4f8[1];
              local_178[2] = (double)local_4e8._0_8_;
              local_178[3] = (double)local_4e8._8_8_;
              FUN_14690c377(&local_368,local_178,*(undefined1 *)(param_9 + 0x70),0);
              puVar17 = (undefined8 *)FUN_14915cc82(&local_368,&local_278,&local_348);
              if (*(char *)uVar10 == '\0') {
                uVar37 = CONCAT44(uStack_364,local_368);
              }
              else {
                uVar37 = *puVar17;
              }
              local_428 = puVar17[2];
              local_438 = (uint)uVar37;
              uStack_434 = (undefined4)((ulonglong)uVar37 >> 0x20);
              uVar37 = puVar17[1];
              if (*(char *)(uVar10 + 1) == '\0') {
                uVar37 = CONCAT26(uStack_35a,CONCAT24(uStack_35c,uStack_360));
              }
              uStack_430 = (undefined4)uVar37;
              uStack_42c = (undefined2)((ulonglong)uVar37 >> 0x20);
              uStack_42a = (undefined2)((ulonglong)uVar37 >> 0x30);
              if (*(char *)(uVar10 + 2) == '\0') {
                local_428 = CONCAT44(uStack_354,local_358);
              }
              FUN_14690c017(local_1f8,&local_438,*(undefined1 *)(param_9 + 0x70),0);
              dVar57 = (double)local_1f8._0_8_;
              dVar58 = (double)local_1f8._8_8_;
              dVar64 = (double)local_1e8._0_8_;
              dVar35 = (double)local_1e8._8_8_;
            }
            local_1a8 = (double)local_4a8._0_8_;
            uStack_1a0 = local_4a8._8_8_;
            local_1b8 = (double)local_4b8._0_8_;
            dStack_1b0 = (double)local_4b8._8_8_;
            local_1c8 = local_4c8;
            dStack_1c0 = dStack_4c0;
            local_1d8._8_8_ = dStack_4d0;
            local_1d8._0_8_ = local_4d8;
            local_1f8._8_4_ = SUB84(dVar58,0);
            local_1f8._0_8_ = dVar57;
            local_1f8._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
            local_1e8._8_4_ = SUB84(dVar35,0);
            local_1e8._0_8_ = dVar64;
            local_1e8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
            if (param_10 < 0.9999) {
              FUN_14915b8da(local_178,local_4f8,local_1f8);
              pdVar20 = local_178;
              pdVar23 = (double *)local_1f8;
              for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                *pdVar23 = *pdVar20;
                pdVar20 = pdVar20 + 1;
                pdVar23 = pdVar23 + 1;
              }
            }
            if (*pcVar9 == '\x04') {
              FUN_1449437a2(local_1f8,local_178,&local_2f8);
              pdVar20 = local_178;
              pdVar23 = (double *)local_1f8;
              for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                *pdVar23 = *pdVar20;
                pdVar20 = pdVar20 + 1;
                pdVar23 = pdVar23 + 1;
              }
              dVar63 = (double)local_1e8._0_8_ * (double)local_1e8._0_8_ +
                       (double)local_1f8._0_8_ * (double)local_1f8._0_8_;
              dVar62 = (double)local_1e8._8_8_ * (double)local_1e8._8_8_ +
                       (double)local_1f8._8_8_ * (double)local_1f8._8_8_;
              auVar43._0_8_ = dVar63 + dVar62;
              auVar43._8_8_ = dVar63 + dVar62;
              auVar32._8_8_ = -(ulonglong)(1e-08 <= auVar43._8_8_);
              auVar32._0_8_ = -(ulonglong)(1e-08 <= auVar43._0_8_);
              auVar29 = sqrtpd(auVar43,auVar43);
              auVar29 = divpd(_DAT_149934d80,auVar29);
              auVar51._0_8_ = auVar29._0_8_ * (double)local_1e8._0_8_;
              auVar51._8_8_ = auVar29._8_8_ * (double)local_1e8._8_8_;
              local_1e8 = blendvpd(_DAT_149935300,auVar51,auVar32);
              local_1f8._8_8_ =
                   (ulonglong)((double)local_1f8._8_8_ * auVar29._8_8_) &
                   -(ulonglong)(1e-08 <= auVar43._8_8_);
              local_1f8._0_8_ =
                   (ulonglong)((double)local_1f8._0_8_ * auVar29._0_8_) &
                   -(ulonglong)(1e-08 <= auVar43._0_8_);
            }
            uVar26 = 0xffffffff;
            if (*(ushort *)(param_12 + 0xc) != 0xffff) {
              uVar26 = (uint)*(ushort *)(param_12 + 0xc);
            }
            pdVar20 = (double *)local_1f8;
            pdVar23 = local_178;
            for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
              *pdVar23 = *pdVar20;
              pdVar20 = pdVar20 + 1;
              pdVar23 = pdVar23 + 1;
            }
            local_6c8 = (undefined8 *)((ulonglong)local_6c8 & 0xffffffffffffff00);
            local_6d0 = (double *)((ulonglong)local_6d0 & 0xffffffffffffff00);
            local_6d8 = (float)CONCAT31(local_6d8._1_3_,1);
            FUN_140122cc6(lVar4,uVar26,local_178,0);
          }
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_6f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149265354 FUN_149265354 body=676 status=ok
// SIG undefined FUN_149265354(void)

undefined8 FUN_149265354(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_408 [32];
  undefined1 local_3e8;
  longlong local_3d8 [2];
  longlong local_3c8 [2];
  undefined **local_3b8 [62];
  undefined1 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_118 [29];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_408;
  FUN_1492655fa(local_3b8);
  local_1c4 = *(undefined8 *)(param_1 + 0x1f0);
  local_1c8 = 1;
  local_1b8 = *(undefined4 *)(param_1 + 0x1f8);
  local_1a0 = *(undefined8 *)(param_1 + 0x210);
  local_1b0 = *(undefined8 *)(param_1 + 0x200);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x208);
  local_198 = *(undefined8 *)(param_1 + 0x218);
  uStack_190 = *(undefined8 *)(param_1 + 0x220);
  local_188 = *(undefined8 *)(param_1 + 0x228);
  local_180 = *(undefined1 *)(param_1 + 0x230);
  local_178 = *(undefined8 *)(param_1 + 0x234);
  local_17c = 1;
  local_170 = *(undefined4 *)(param_1 + 0x240);
  local_158 = *(undefined8 *)(param_1 + 600);
  local_168 = *(undefined8 *)(param_1 + 0x248);
  uStack_160 = *(undefined8 *)(param_1 + 0x250);
  local_150 = *(undefined8 *)(param_1 + 0x260);
  uStack_148 = *(undefined8 *)(param_1 + 0x268);
  local_140 = *(undefined8 *)(param_1 + 0x270);
  local_138 = *(undefined1 *)(param_1 + 0x278);
  local_130 = *(undefined8 *)(param_1 + 0x27c);
  local_134 = 1;
  local_128 = *(undefined4 *)(param_1 + 0x288);
  puVar2 = (undefined8 *)(param_1 + 0x290);
  puVar3 = local_118;
  for (lVar1 = 0xe; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_14926577c(param_2,local_3b8);
  FUN_140056680(local_3c8,L"Item.Name");
  FUN_140056680(local_3d8,L"Bone");
  local_3e8 = 1;
  FUN_1490fb142(param_2,local_3d8,local_3c8,1);
  if (local_3d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_3c8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_3c8,L"Primary.Space.Name");
  FUN_140056680(local_3d8,L"Primary.Space");
  local_3e8 = 1;
  FUN_1490fb142(param_2,local_3d8,local_3c8,1);
  if (local_3d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_3c8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_3c8,L"Secondary.Space.Name");
  FUN_140056680(local_3d8,L"Secondary.Space");
  local_3e8 = 1;
  FUN_1490fb142(param_2,local_3d8,local_3c8,1);
  if (local_3d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_3c8[0] != 0) {
    FUN_1400020a8();
  }
  local_3b8[0] = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc();
  if ((local_30 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492655fa FUN_1492655fa body=386 status=ok
// SIG undefined FUN_1492655fa(void)

undefined8 * FUN_1492655fa(undefined8 *param_1)

{
  undefined8 uVar1;
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
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbff120;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  param_1[0x44] = 0x3ff0000000000000;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  *(undefined1 *)((longlong)param_1 + 0x23c) = 1;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0x3f800000;
  param_1[0x4d] = 0x3ff0000000000000;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined1 *)((longlong)param_1 + 0x284) = 1;
  param_1[0x51] = 0;
  param_1[0x41] = 0x3ff0000000000000;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x52) = 0x3f800000;
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
  uVar1 = DAT_14c846480;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0x41200000;
  param_1[0x56] = uVar1;
  param_1[0x57] = uVar2;
  param_1[0x58] = uVar3;
  param_1[0x59] = uVar4;
  param_1[0x5a] = uVar5;
  param_1[0x5b] = uVar6;
  param_1[0x5c] = uVar7;
  param_1[0x5d] = uVar8;
  param_1[0x5e] = uVar9;
  param_1[0x5f] = uVar10;
  param_1[0x60] = uVar11;
  param_1[0x61] = uVar12;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined2 *)((longlong)param_1 + 0x31c) = 0xffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined2 *)((longlong)param_1 + 0x33c) = 0xffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35c) = 0xffff;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  return param_1;
}



// FUNCTION 14926577c FUN_14926577c body=211 status=ok
// SIG undefined FUN_14926577c(void)

undefined8 * FUN_14926577c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_146706b24();
  param_1[2] = uVar1;
  uVar1 = FUN_146706fb6();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149265850 FUN_149265850 body=340 status=ok
// SIG undefined FUN_149265850(void)

void FUN_149265850(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar7 = (undefined8 *)*param_2;
  uVar8 = *puVar7;
  uVar9 = puVar7[4];
  uVar10 = puVar7[8];
  uVar1 = *(undefined4 *)puVar7[0xc];
  uVar2 = *(undefined4 *)puVar7[0x10];
  uVar6 = *(undefined4 *)puVar7[0x14];
  uVar4 = *(undefined1 *)puVar7[0x18];
  uVar3 = *(undefined4 *)puVar7[0x1c];
  puVar11 = (undefined8 *)puVar7[0x20];
  uVar5 = *(undefined1 *)puVar7[0x24];
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_a0 = FUN_144828ac0(puVar7 + 0x28,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  local_90 = *puVar11;
  local_b0 = &local_90;
  local_88 = *(undefined4 *)(puVar11 + 1);
  local_d8 = uVar1;
  local_d0 = uVar2;
  local_c8 = uVar6;
  local_c0 = uVar4;
  local_b8 = uVar3;
  local_a8 = uVar5;
  FUN_149265a90(*(undefined8 *)(param_1 + 0xc0),uVar8,uVar9,uVar10);
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492659b6 FUN_1492659b6 body=216 status=ok
// SIG undefined FUN_1492659b6(void)

void FUN_1492659b6(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined1 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x278);
  local_40 = &local_28;
  local_20 = *(undefined4 *)(param_1 + 0x280);
  local_30 = param_1 + 0x290;
  local_38 = *(undefined1 *)(param_1 + 0x288);
  local_48 = *(undefined4 *)(param_1 + 0x270);
  local_50 = *(undefined1 *)(param_1 + 0x26c);
  local_58 = *(undefined4 *)(param_1 + 0x268);
  local_68 = *(undefined4 *)(param_1 + 0x260);
  local_60 = *(undefined4 *)(param_1 + 0x264);
  FUN_149265a90(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1f8,param_1 + 0x200);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149265a90 FUN_149265a90 body=633 status=ok
// SIG undefined FUN_149265a90(void)

void FUN_149265a90(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
                  undefined4 param_9,longlong *param_10,undefined1 param_11,longlong param_12)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_138 [32];
  uint local_118;
  undefined4 local_110;
  undefined1 local_108;
  undefined4 local_100;
  undefined4 *local_f8;
  undefined1 local_f0;
  longlong local_e8;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a0;
  undefined4 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_12 + 0x18) == 0) {
    local_b8 = CONCAT31(local_b8._1_3_,1);
    uStack_b4 = (undefined4)*param_3;
    uStack_b0 = (uint)((ulonglong)*param_3 >> 0x20);
    local_c8 = CONCAT31(local_c8._1_3_,1);
    uStack_c4 = (undefined4)*param_2;
    uStack_c0 = (uint)((ulonglong)*param_2 >> 0x20);
    local_118 = local_118 & 0xffffff00;
    FUN_1491f31fc(&local_a0,*(undefined8 *)(param_1 + 0x1b0));
    lVar5 = local_a0;
  }
  else {
    lVar5 = 0;
    local_98 = 0;
  }
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  if (0 < (int)param_10[1]) {
    lVar7 = 8;
    lVar6 = 0;
    local_d8 = param_1;
    local_d0 = param_4;
    do {
      uVar4 = uStack_b0;
      uVar2 = *(undefined8 *)(*param_10 + -8 + lVar7);
      uVar1 = *(undefined4 *)(*param_10 + lVar7);
      lVar8 = (longlong)(int)uStack_b0;
      uStack_b0 = uStack_b0 + 1;
      if (uStack_ac < uStack_b0) {
        FUN_1492d0e5e(&local_b8,uVar4);
      }
      lVar3 = CONCAT44(uStack_b4,local_b8);
      lVar8 = lVar8 * 0x10;
      *(undefined1 *)(lVar3 + lVar8) = 1;
      *(undefined8 *)(lVar3 + 4 + lVar8) = uVar2;
      *(undefined4 *)(lVar3 + 0xc + lVar8) = uVar1;
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0xc;
      param_4 = local_d0;
      param_1 = local_d8;
    } while (lVar6 < (int)param_10[1]);
  }
  local_108 = param_8;
  local_f8 = &local_c8;
  local_e8 = param_12;
  local_f0 = param_11;
  local_100 = param_9;
  local_110 = param_7;
  local_118 = param_6;
  local_c8 = local_b8;
  uStack_c4 = uStack_b4;
  uStack_c0 = uStack_b0;
  local_a0 = lVar5;
  FUN_1492661d0(param_1,&local_a0,param_4,param_5);
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  if (lVar5 != 0) {
    FUN_1400020a8(lVar5);
  }
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149265d0a FUN_149265d0a body=339 status=ok
// SIG undefined FUN_149265d0a(void)

void FUN_149265d0a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_2 = (longlong *)*param_2;
  puVar7 = (undefined8 *)*param_2;
  lVar8 = param_2[4];
  uVar1 = *(undefined4 *)param_2[8];
  uVar2 = *(undefined4 *)param_2[0xc];
  uVar6 = *(undefined4 *)param_2[0x10];
  uVar4 = *(undefined1 *)param_2[0x14];
  uVar3 = *(undefined4 *)param_2[0x18];
  puVar9 = (undefined8 *)param_2[0x1c];
  uVar5 = *(undefined1 *)param_2[0x20];
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_98 = FUN_144828ac0(param_2 + 0x24,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  local_90 = *puVar9;
  local_a8 = &local_90;
  local_88 = *(undefined4 *)(puVar9 + 1);
  local_80 = *puVar7;
  local_78 = *(undefined4 *)(puVar7 + 1);
  local_c8 = uVar2;
  local_c0 = uVar6;
  local_b8 = uVar4;
  local_b0 = uVar3;
  local_a0 = uVar5;
  FUN_1492661d0(*(undefined8 *)(param_1 + 0xc0),&local_80,lVar8,uVar1);
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149265e6e FUN_149265e6e body=40 status=ok
// SIG undefined FUN_149265e6e(void)

void FUN_149265e6e(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149265e96(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 149265e96 FUN_149265e96 body=210 status=ok
// SIG undefined FUN_149265e96(void)

void FUN_149265e96(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined1 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = *(undefined8 *)(param_1 + 0x278);
  local_58 = &local_40;
  local_38 = *(undefined4 *)(param_1 + 0x280);
  local_48 = param_1 + 0x290;
  local_50 = *(undefined1 *)(param_1 + 0x288);
  local_60 = *(undefined4 *)(param_1 + 0x270);
  local_68 = *(undefined1 *)(param_1 + 0x26c);
  local_70 = *(undefined4 *)(param_1 + 0x268);
  local_78 = *(undefined4 *)(param_1 + 0x264);
  local_30 = *(undefined8 *)(param_1 + 0x1f0);
  local_28 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_1492661d0(param_2,&local_30,param_1 + 0x200,*(undefined4 *)(param_1 + 0x260));
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149265f6a FUN_149265f6a body=338 status=ok
// SIG undefined FUN_149265f6a(void)

void FUN_149265f6a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_2 = (longlong *)*param_2;
  puVar7 = (undefined8 *)*param_2;
  lVar8 = param_2[4];
  uVar1 = *(undefined4 *)param_2[8];
  uVar2 = *(undefined4 *)param_2[0xc];
  uVar6 = *(undefined4 *)param_2[0x10];
  uVar4 = *(undefined1 *)param_2[0x14];
  uVar3 = *(undefined4 *)param_2[0x18];
  puVar9 = (undefined8 *)param_2[0x1c];
  uVar5 = *(undefined1 *)param_2[0x20];
  lVar10 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_98 = FUN_144828ac0(param_2 + 0x24,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar10 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar10 * 0x14));
  local_80 = *puVar9;
  local_a8 = &local_80;
  local_78 = *(undefined4 *)(puVar9 + 1);
  local_90 = *puVar7;
  local_88 = *(undefined4 *)(puVar7 + 1);
  local_c8 = uVar2;
  local_c0 = uVar6;
  local_b8 = uVar4;
  local_b0 = uVar3;
  local_a0 = uVar5;
  FUN_1492661d0(*(undefined8 *)(param_1 + 0xc0),&local_90,lVar8,uVar1);
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492660ce FUN_1492660ce body=40 status=ok
// SIG undefined FUN_1492660ce(void)

void FUN_1492660ce(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492660f6(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 1492660f6 FUN_1492660f6 body=217 status=ok
// SIG undefined FUN_1492660f6(void)

void FUN_1492660f6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined1 local_50;
  longlong local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  local_38 = *(undefined8 *)(param_1 + 0x278);
  local_58 = &local_38;
  local_30 = *(undefined4 *)(param_1 + 0x280);
  local_48 = param_1 + 0x290;
  local_50 = *(undefined1 *)(param_1 + 0x288);
  local_60 = *(undefined4 *)(param_1 + 0x270);
  local_68 = *(undefined1 *)(param_1 + 0x26c);
  local_70 = *(undefined4 *)(param_1 + 0x268);
  local_78 = *(undefined4 *)(param_1 + 0x264);
  FUN_1492661d0(param_2,&local_28,param_1 + 0x200,*(undefined4 *)(param_1 + 0x260));
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492661d0 FUN_1492661d0 body=2466 status=ok
// SIG undefined FUN_1492661d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492661d0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                  float param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8,
                  longlong *param_9,undefined1 param_10,longlong *param_11)

{
  undefined4 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  char cVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint *puVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_278 [32];
  undefined1 local_258;
  undefined1 local_250;
  longlong *local_248;
  longlong *local_240;
  undefined8 *local_238;
  longlong *local_230;
  longlong *local_228;
  longlong *local_220;
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  short sStack_20c;
  undefined2 uStack_20a;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1b8 [12];
  undefined8 local_158 [12];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_278;
  plVar2 = *(longlong **)(param_1 + 0x1b0);
  if (plVar2 != (longlong *)0x0) {
    local_240 = param_11 + 2;
    local_228 = param_11 + 4;
    plVar17 = param_11 + 6;
    if (0 < (int)param_11[5] && (int)param_9[1] != (int)param_11[5]) {
      *(undefined4 *)(param_11 + 3) = 0;
      if (*(int *)((longlong)param_11 + 0x1c) < 0) {
        FUN_1492d06b4(local_240,0);
      }
      *(undefined4 *)(param_11 + 5) = 0;
      if (*(int *)((longlong)param_11 + 0x2c) < 0) {
        FUN_14481578e(local_228,0);
      }
      *(undefined4 *)(param_11 + 7) = 0;
      if (*(int *)((longlong)param_11 + 0x3c) < 0) {
        FUN_14482f6fa(plVar17,0);
      }
      *(undefined1 *)(param_11 + 8) = 0;
      *(undefined8 *)((longlong)param_11 + 0x44) = 0;
      *(undefined2 *)((longlong)param_11 + 0x4c) = 0xffff;
      *(undefined4 *)(param_11 + 10) = 0xffffffff;
      param_11[0xb] = 0;
    }
    iVar11 = (int)param_11[3];
    if (iVar11 == 0) {
      local_230 = plVar17;
      if (0 < (int)param_2[1]) {
        local_88 = *(undefined4 *)((undefined8 *)*param_2 + 1);
        local_90 = *(undefined8 *)*param_2;
        local_238 = param_3;
        FUN_1408130c0(plVar2,&local_f8);
        local_218 = local_218 & 0xffffff00;
        uStack_214 = 0;
        uStack_210 = 0;
        sStack_20c = -1;
        local_208 = CONCAT44(local_208._4_4_,0xffffffff);
        FUN_144828dba(&local_218,&local_f8,plVar2);
        iVar11 = (int)param_11[3];
        *(uint *)(param_11 + 3) = iVar11 + 1U;
        if (*(uint *)((longlong)param_11 + 0x1c) < iVar11 + 1U) {
          FUN_1492d0738(local_240,iVar11);
        }
        local_220 = param_11 + 8;
        lVar23 = *local_240;
        puVar19 = (undefined8 *)(lVar23 + 0x10 + (longlong)iVar11 * 0x20);
        *puVar19 = local_208;
        puVar19[1] = uStack_200;
        puVar21 = (uint *)(lVar23 + (longlong)iVar11 * 0x20);
        *puVar21 = local_218;
        puVar21[1] = uStack_214;
        puVar21[2] = uStack_210;
        puVar21[3] = CONCAT22(uStack_20a,sStack_20c);
        lVar23 = param_2[1];
        if ((longlong)(int)lVar23 != 0) {
          lVar24 = *param_2;
          lVar12 = 0;
          do {
            local_f0 = *(undefined4 *)(lVar24 + 8 + lVar12);
            local_f8 = *(undefined8 *)(lVar24 + lVar12);
            local_218 = local_218 & 0xffffff00;
            uStack_214 = 0;
            uStack_210 = 0;
            sStack_20c = -1;
            local_208 = CONCAT44(local_208._4_4_,0xffffffff);
            FUN_144828dba(&local_218,&local_f8,plVar2);
            iVar11 = (int)param_11[3];
            *(uint *)(param_11 + 3) = iVar11 + 1U;
            if (*(uint *)((longlong)param_11 + 0x1c) < iVar11 + 1U) {
              FUN_1492d0738(local_240,iVar11);
            }
            lVar18 = *local_240;
            puVar19 = (undefined8 *)(lVar18 + 0x10 + (longlong)iVar11 * 0x20);
            *puVar19 = local_208;
            puVar19[1] = uStack_200;
            puVar21 = (uint *)(lVar18 + (longlong)iVar11 * 0x20);
            *puVar21 = local_218;
            puVar21[1] = uStack_214;
            puVar21[2] = uStack_210;
            puVar21[3] = CONCAT22(uStack_20a,sStack_20c);
            lVar12 = lVar12 + 0xc;
          } while ((longlong)(int)lVar23 * 0xc != lVar12);
        }
        param_3 = local_238;
        iVar11 = (int)param_11[3];
        lVar23 = (longlong)(iVar11 + -1) * 0x20;
        puVar1 = (undefined4 *)(param_11[2] + lVar23);
        uVar4 = *puVar1;
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        plVar17 = (longlong *)(param_11[2] + 0x10 + lVar23);
        lVar23 = plVar17[1];
        local_220[2] = *plVar17;
        local_220[3] = lVar23;
        *(undefined4 *)local_220 = uVar4;
        *(undefined4 *)((longlong)local_220 + 4) = uVar5;
        *(undefined4 *)(local_220 + 1) = uVar6;
        *(undefined4 *)((longlong)local_220 + 0xc) = uVar7;
        if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar11);
        }
        if (*(int *)((longlong)param_11 + 0xc) < iVar11) {
          FUN_1474ff2f2(param_11);
          iVar11 = (int)param_11[3];
        }
        FUN_144a12820(local_230,iVar11);
        if ((longlong)(int)param_9[1] != 0) {
          lVar23 = *param_9;
          lVar24 = (longlong)(int)param_9[1] * 0x10 + lVar23;
          do {
            local_218 = local_218 & 0xffffff00;
            uStack_214 = 0;
            uStack_210 = 0;
            sStack_20c = -1;
            local_208 = CONCAT44(local_208._4_4_,0xffffffff);
            FUN_144828dba(&local_218,lVar23);
            iVar11 = -1;
            if ((longlong)(int)param_11[3] != 0) {
              lVar12 = param_11[2];
              lVar18 = 0;
              iVar22 = 0;
              do {
                iVar11 = iVar22;
                if (((*(short *)(lVar12 + 0xc + lVar18) == sStack_20c) &&
                    (*(longlong *)(lVar12 + 4 + lVar18) == CONCAT44(uStack_210,uStack_214))) &&
                   (*(char *)(lVar12 + lVar18) == (char)local_218)) break;
                iVar22 = iVar11 + 1;
                lVar18 = lVar18 + 0x20;
                iVar11 = -1;
              } while ((longlong)(int)param_11[3] * 0x20 != lVar18);
            }
            iVar22 = (int)param_11[5];
            *(uint *)(param_11 + 5) = iVar22 + 1U;
            if (*(uint *)((longlong)param_11 + 0x2c) < iVar22 + 1U) {
              FUN_1446f48e2(local_228,iVar22);
            }
            *(int *)(*local_228 + (longlong)iVar22 * 4) = iVar11;
            lVar23 = lVar23 + 0x10;
          } while (lVar23 != lVar24);
        }
      }
      iVar11 = (int)param_11[3];
      plVar17 = local_230;
    }
    if (1 < iVar11) {
      iVar11 = *(int *)((longlong)param_11 + 0xc);
      local_240 = plVar2;
      local_238 = param_3;
      local_230 = plVar17;
      FUN_1474ff2bc(*param_11,(int)param_11[1]);
      *(undefined4 *)(param_11 + 1) = 0;
      if ((iVar11 < 0) && (*(int *)((longlong)param_11 + 0xc) != 0)) {
        FUN_1474ff2f2(param_11,0);
      }
      if (0 < (int)param_11[3]) {
        lVar24 = 0xc;
        lVar23 = 0;
        do {
          plVar2 = local_240;
          uVar14 = (uint)*(ushort *)(param_11[2] + lVar24);
          if (*(ushort *)(param_11[2] + lVar24) == 0xffff) {
            uVar14 = 0xffffffff;
          }
          FUN_14486750c(local_240,&local_f8,uVar14,0);
          uVar14 = (uint)*(ushort *)(param_11[2] + lVar24);
          if (*(ushort *)(param_11[2] + lVar24) == 0xffff) {
            uVar14 = 0xffffffff;
          }
          FUN_144afced8(plVar2,local_158,uVar14);
          puVar19 = &local_f8;
          puVar21 = &local_218;
          for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
            *(undefined8 *)puVar21 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar21 = puVar21 + 2;
          }
          puVar19 = local_158;
          puVar20 = local_1b8;
          for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
            *puVar20 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar20 = puVar20 + 1;
          }
          iVar11 = (int)param_11[1];
          *(uint *)(param_11 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)param_11 + 0xc) < iVar11 + 1U) {
            FUN_1474ff362(param_11,iVar11);
          }
          lVar12 = *param_11;
          lVar18 = (longlong)iVar11 * 0xe0;
          memcpy((void *)(lVar12 + lVar18),&local_218,0xc0);
          *(int *)(lVar12 + 0xc0 + lVar18) = (int)lVar23;
          *(undefined1 (*) [16])(lVar12 + 200 + lVar18) = (undefined1  [16])0x0;
          *(undefined8 *)(lVar12 + 0xd8 + lVar18) = 0;
          lVar23 = lVar23 + 1;
          lVar24 = lVar24 + 0x20;
        } while (lVar23 < (int)param_11[3]);
      }
      plVar2 = local_240;
      auVar9 = _DAT_149931e80;
      if ((longlong)(int)param_11[7] != 0) {
        lVar23 = param_11[6];
        uVar13 = (longlong)(int)param_11[7] + 0x3fffffffffffffff;
        uVar15 = uVar13 & 0x3fffffffffffffff;
        auVar25._8_4_ = (int)uVar15;
        auVar25._0_8_ = uVar15;
        auVar25._12_4_ = (int)(uVar15 >> 0x20);
        uVar16 = 0;
        auVar26 = pmovsxbq(in_XMM2,0x302);
        auVar27 = pmovsxbq(in_XMM3,0x100);
        auVar25 = auVar25 | _DAT_149931e80;
        do {
          uVar3 = auVar9._0_8_;
          lVar24 = auVar25._0_8_;
          if ((bool)(~(lVar24 < (longlong)(uVar16 ^ uVar3)) & 1)) {
            *(undefined4 *)(lVar23 + uVar16 * 4) = param_8;
          }
          auVar28._8_4_ = (int)uVar16;
          auVar28._0_8_ = uVar16;
          auVar28._12_4_ = (int)(uVar16 >> 0x20);
          if ((longlong)((auVar28._8_8_ | auVar27._8_8_) ^ auVar9._8_8_) <= auVar25._8_8_) {
            *(undefined4 *)(lVar23 + 4 + uVar16 * 4) = param_8;
          }
          if ((longlong)((uVar16 | auVar26._0_8_) ^ uVar3) <= lVar24) {
            *(undefined4 *)(lVar23 + 8 + uVar16 * 4) = param_8;
            *(undefined4 *)(lVar23 + 0xc + uVar16 * 4) = param_8;
          }
          uVar16 = uVar16 + 4;
        } while ((uVar15 - ((uint)uVar13 & 3)) + 4 != uVar16);
      }
      iVar11 = (int)param_11[5];
      if (0 < iVar11) {
        lVar23 = 0xc;
        lVar24 = 0;
        do {
          lVar12 = (longlong)*(int *)(*local_228 + lVar24 * 4);
          if (lVar12 != -1) {
            *(undefined4 *)(param_11[6] + lVar12 * 4) = *(undefined4 *)(*param_9 + lVar23);
            iVar11 = (int)param_11[5];
          }
          lVar24 = lVar24 + 1;
          lVar23 = lVar23 + 0x10;
        } while (lVar24 < iVar11);
      }
      uVar8 = local_238[5];
      local_218 = (uint)local_238[4];
      uStack_214 = (uint)((ulonglong)local_238[4] >> 0x20);
      uStack_210 = (uint)uVar8;
      sStack_20c = (short)((ulonglong)uVar8 >> 0x20);
      uStack_20a = (undefined2)((ulonglong)uVar8 >> 0x30);
      local_208 = local_238[6];
      local_248 = local_230;
      local_250 = 0 < (int)param_9[1];
      local_258 = param_7;
      cVar10 = FUN_14690ca3a(param_11);
      if (cVar10 != '\0') {
        if (ABS(param_5 + -1.0) <= 1e-08) {
          if (0 < (int)param_11[3]) {
            lVar23 = 0xc;
            lVar12 = 0;
            lVar24 = 0;
            do {
              uVar14 = (uint)*(ushort *)(param_11[2] + lVar23);
              if (*(ushort *)(param_11[2] + lVar23) == 0xffff) {
                uVar14 = 0xffffffff;
              }
              puVar19 = (undefined8 *)(*param_11 + lVar12);
              puVar21 = &local_218;
              for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                *(undefined8 *)puVar21 = *puVar19;
                puVar19 = puVar19 + 1;
                puVar21 = puVar21 + 2;
              }
              local_248 = (longlong *)((ulonglong)local_248 & 0xffffffffffffff00);
              local_250 = 0;
              local_258 = param_10;
              FUN_144831e8e(plVar2,uVar14,&local_218,0);
              lVar24 = lVar24 + 1;
              lVar23 = lVar23 + 0x20;
              lVar12 = lVar12 + 0xe0;
            } while (lVar24 < (int)param_11[3]);
          }
        }
        else if (0 < (int)param_11[3]) {
          lVar23 = 0xc;
          lVar12 = 0;
          lVar24 = 0;
          do {
            lVar18 = *param_11;
            uVar14 = (uint)*(ushort *)(param_11[2] + lVar23);
            if (*(ushort *)(param_11[2] + lVar23) == 0xffff) {
              uVar14 = 0xffffffff;
            }
            FUN_14486750c(plVar2,&local_f8,uVar14,0);
            FUN_14915b8da(local_158,&local_f8,lVar18 + lVar12);
            uVar14 = (uint)*(ushort *)(param_11[2] + lVar23);
            if (*(ushort *)(param_11[2] + lVar23) == 0xffff) {
              uVar14 = 0xffffffff;
            }
            puVar19 = local_158;
            puVar21 = &local_218;
            for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
              *(undefined8 *)puVar21 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar21 = puVar21 + 2;
            }
            local_248 = (longlong *)((ulonglong)local_248 & 0xffffffffffffff00);
            local_250 = 0;
            local_258 = param_10;
            FUN_144831e8e(plVar2,uVar14);
            lVar24 = lVar24 + 1;
            lVar23 = lVar23 + 0x20;
            lVar12 = lVar12 + 0xe0;
          } while (lVar24 < (int)param_11[3]);
        }
      }
      if (ABS(param_5 + -1.0) <= 1e-08) {
        uVar14 = 0xffffffff;
        if (*(ushort *)((longlong)param_11 + 0x4c) != 0xffff) {
          uVar14 = (uint)*(ushort *)((longlong)param_11 + 0x4c);
        }
        puVar19 = local_238;
        puVar21 = &local_218;
        for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
          *(undefined8 *)puVar21 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar21 = puVar21 + 2;
        }
      }
      else {
        uVar14 = (uint)*(ushort *)((longlong)param_11 + 0x4c);
        if (*(ushort *)((longlong)param_11 + 0x4c) == 0xffff) {
          uVar14 = 0xffffffff;
        }
        FUN_14486750c(plVar2,&local_f8,uVar14,0);
        FUN_14915b8da(local_158,&local_f8,local_238);
        uVar14 = (uint)*(ushort *)((longlong)param_11 + 0x4c);
        if (*(ushort *)((longlong)param_11 + 0x4c) == 0xffff) {
          uVar14 = 0xffffffff;
        }
        puVar19 = local_158;
        puVar21 = &local_218;
        for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
          *(undefined8 *)puVar21 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar21 = puVar21 + 2;
        }
      }
      local_248 = (longlong *)((ulonglong)local_248 & 0xffffffffffffff00);
      local_250 = 0;
      local_258 = param_10;
      FUN_144831e8e(plVar2,uVar14,&local_218,0);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149266b74 FUN_149266b74 body=25 status=ok
// SIG undefined FUN_149266b74(void)

undefined8 FUN_149266b74(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149266b8e FUN_149266b8e body=263 status=ok
// SIG undefined FUN_149266b8e(void)

undefined8 FUN_149266b8e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_348 [32];
  undefined1 local_328 [496];
  undefined1 auStack_138 [16];
  undefined8 auStack_128 [12];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined1 auStack_b0 [16];
  undefined1 local_a0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_348;
  FUN_149266c96(local_328);
  FUN_1444888de(auStack_138,param_1 + 0x1f0);
  puVar2 = (undefined8 *)(param_1 + 0x200);
  puVar3 = auStack_128;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_c8 = *(undefined4 *)(param_1 + 0x260);
  local_c4 = *(undefined4 *)(param_1 + 0x264);
  local_c0 = *(undefined4 *)(param_1 + 0x268);
  local_bc = *(undefined1 *)(param_1 + 0x26c);
  local_b8 = *(undefined4 *)(param_1 + 0x270);
  FUN_149266d64(auStack_b0,param_1 + 0x278);
  local_a0 = *(undefined1 *)(param_1 + 0x288);
  FUN_149266dbc(param_2,local_328);
  FUN_149266e90(local_328);
  if ((local_30 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149266c96 FUN_149266c96 body=205 status=ok
// SIG undefined FUN_149266c96(void)

undefined8 * FUN_149266c96(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbffb10;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2dc) = 0xffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x4c] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x4d) = 10;
  *(undefined1 *)((longlong)param_1 + 0x26c) = 1;
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined4 *)(param_1 + 0x4e) = 0x41f00000;
  return param_1;
}



// FUNCTION 149266d64 FUN_149266d64 body=88 status=ok
// SIG undefined FUN_149266d64(void)

undefined8 * FUN_149266d64(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1492d0ee4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 149266dbc FUN_149266dbc body=211 status=ok
// SIG undefined FUN_149266dbc(void)

undefined8 * FUN_149266dbc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_146708170();
  param_1[2] = uVar1;
  uVar1 = FUN_146708608();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149266e90 FUN_149266e90 body=91 status=ok
// SIG undefined FUN_149266e90(void)

void FUN_149266e90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbffb10;
  FUN_1492bb912(param_1 + 0x52);
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 149266eec FUN_149266eec body=201 status=ok
// SIG undefined FUN_149266eec(void)

void FUN_149266eec(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar5 = puVar3[4];
  puVar6 = (undefined8 *)puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  uVar1 = *(undefined4 *)puVar3[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_58 = FUN_144828ac0(puVar3 + 0x18,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  local_50 = *puVar6;
  local_48 = *(undefined4 *)(puVar6 + 1);
  local_68 = uVar2;
  local_60 = uVar1;
  FUN_149267058(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar5);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149266fbe FUN_149266fbe body=153 status=ok
// SIG undefined FUN_149266fbe(void)

void FUN_149266fbe(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x200);
  local_20 = *(undefined4 *)(param_1 + 0x208);
  local_38 = param_1 + 0x220;
  local_40 = *(undefined4 *)(param_1 + 0x214);
  local_48 = *(undefined1 *)(param_1 + 0x210);
  FUN_149267058(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1f8);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149267058 FUN_149267058 body=760 status=ok
// SIG undefined FUN_149267058(void)

void FUN_149267058(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,longlong *param_7)

{
  longlong lVar1;
  void *_Src;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong unaff_RBP;
  longlong lVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  longlong *local_b0;
  undefined8 local_a0;
  void *local_98;
  uint local_90;
  undefined4 local_8c;
  void *local_88;
  undefined8 uStack_80;
  undefined1 local_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  uint uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = (void *)0x0;
  uStack_80 = 0;
  lVar1 = param_7[1];
  local_a0 = param_4;
  if ((longlong)(int)lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x1b0);
    if (lVar1 == 0) goto LAB_1492670fa;
    local_70 = 1;
    uStack_6c = (undefined4)*param_3;
    uStack_68 = (uint)((ulonglong)*param_3 >> 0x20);
    uVar3 = FUN_140813180();
    if (uVar3 != 0xffffffff) {
      unaff_RBP = (ulonglong)uVar3;
      local_70 = 1;
      uStack_6c = (undefined4)*param_2;
      uStack_68 = (uint)((ulonglong)*param_2 >> 0x20);
      uVar4 = FUN_140813180(lVar1);
      if (uVar4 == uVar3) goto LAB_1492670fa;
      do {
        uVar2 = uStack_80;
        uVar3 = (uint)unaff_RBP;
        if (((int)uVar3 < 0) || (*(int *)(lVar1 + 0xc0) <= (int)uVar3)) {
          uVar9 = 0;
          uVar8 = 0;
        }
        else {
          lVar7 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + unaff_RBP * 8);
          uVar8 = *(undefined1 *)(lVar7 + 0x10);
          uStack_6e = *(undefined1 *)(lVar7 + 0x13);
          local_70 = (undefined1)*(undefined2 *)(lVar7 + 0x11);
          uStack_6f = (undefined1)((ushort)*(undefined2 *)(lVar7 + 0x11) >> 8);
          uVar9 = *(undefined8 *)(lVar7 + 0x14);
        }
        lVar7 = (longlong)(int)(uint)uStack_80;
        uVar5 = (uint)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
        if (uStack_80._4_4_ < uVar5) {
          FUN_149192788(&local_88,uVar2 & 0xffffffff);
        }
        *(undefined1 *)((longlong)local_88 + lVar7 * 0xc) = uVar8;
        *(ushort *)((longlong)local_88 + lVar7 * 0xc + 1) = CONCAT11(uStack_6f,local_70);
        *(undefined1 *)((longlong)local_88 + lVar7 * 0xc + 3) = uStack_6e;
        *(undefined8 *)((longlong)local_88 + lVar7 * 0xc + 4) = uVar9;
        if (uVar3 == uVar4) break;
        uVar3 = FUN_1491db798();
        unaff_RBP = (ulonglong)uVar3;
      } while (uVar3 != 0xffffffff);
    }
    uVar3 = (uint)uStack_80;
    if (1 < (int)(uint)uStack_80) {
      lVar7 = 0;
      lVar1 = (uStack_80 & 0xffffffff) * 0xc;
      do {
        lVar6 = lVar1 + -0xc;
        uStack_68 = *(uint *)((longlong)local_88 + lVar7 + 8);
        uVar9 = *(undefined8 *)((longlong)local_88 + lVar7);
        local_70 = (undefined1)uVar9;
        uStack_6f = (undefined1)((ulonglong)uVar9 >> 8);
        uStack_6e = (undefined1)((ulonglong)uVar9 >> 0x10);
        uStack_6d = (undefined1)((ulonglong)uVar9 >> 0x18);
        uStack_6c = (undefined4)((ulonglong)uVar9 >> 0x20);
        *(undefined4 *)((longlong)local_88 + lVar7 + 8) =
             *(undefined4 *)((longlong)local_88 + lVar1 + -4);
        *(undefined8 *)((longlong)local_88 + lVar7) = *(undefined8 *)((longlong)local_88 + lVar6);
        *(uint *)((longlong)local_88 + lVar1 + -4) = uStack_68;
        *(undefined8 *)((longlong)local_88 + lVar6) = uVar9;
        lVar7 = lVar7 + 0xc;
        lVar1 = lVar6;
      } while ((ulonglong)((uint)uStack_80 >> 1) * 0xc != lVar7);
      goto LAB_1492672a7;
    }
  }
  else {
    lVar7 = *param_7;
    unaff_RBP = 0;
    do {
      uVar2 = uStack_80;
      lVar6 = (longlong)(int)(uint)uStack_80;
      uVar3 = (uint)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar3);
      if (uStack_80._4_4_ < uVar3) {
        FUN_149192788(&local_88,uVar2 & 0xffffffff);
      }
      *(undefined4 *)((longlong)local_88 + lVar6 * 0xc + 8) =
           *(undefined4 *)((undefined8 *)(lVar7 + unaff_RBP) + 1);
      *(undefined8 *)((longlong)local_88 + lVar6 * 0xc) = *(undefined8 *)(lVar7 + unaff_RBP);
      unaff_RBP = unaff_RBP + 0x20;
    } while ((longlong)(int)lVar1 * 0x20 != unaff_RBP);
LAB_1492672a7:
    uVar3 = (uint)uStack_80;
  }
  _Src = local_88;
  local_98 = (void *)0x0;
  local_90 = uVar3;
  if (uVar3 == 0) {
    local_8c = 0;
    uStack_68 = 0;
  }
  else {
    FUN_149192186(&local_98,uVar3,0);
    memcpy(local_98,_Src,(longlong)(int)uVar3 * 0xc);
    uStack_68 = local_90;
  }
  local_70 = SUB81(local_98,0);
  uStack_6f = (undefined1)((ulonglong)local_98 >> 8);
  uStack_6e = (undefined1)((ulonglong)local_98 >> 0x10);
  uStack_6d = (undefined1)((ulonglong)local_98 >> 0x18);
  uStack_6c = (undefined4)((ulonglong)local_98 >> 0x20);
  local_b0 = param_7;
  local_b8 = param_6;
  FUN_14926761c(param_1,&local_70,local_a0,CONCAT71((int7)(unaff_RBP >> 8),param_5) & 0xffffffff);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1492670fa:
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149267352 FUN_149267352 body=199 status=ok
// SIG undefined FUN_149267352(void)

void FUN_149267352(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2 = (longlong *)*param_2;
  puVar3 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)param_2[4];
  uVar2 = *(undefined1 *)param_2[8];
  uVar1 = *(undefined4 *)param_2[0xc];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_70 = FUN_144828ac0(param_2 + 0x10,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  local_60 = *puVar4;
  local_58 = *(undefined4 *)(puVar4 + 1);
  local_50 = *puVar3;
  local_48 = *(undefined4 *)(puVar3 + 1);
  local_78 = uVar1;
  FUN_14926761c(*(undefined8 *)(param_1 + 0xc0),&local_50,&local_60,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926741a FUN_14926741a body=157 status=ok
// SIG undefined FUN_14926741a(void)

void FUN_14926741a(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_38 = *(undefined8 *)(param_1 + 0x200);
  local_30 = *(undefined4 *)(param_1 + 0x208);
  local_40 = param_1 + 0x218;
  local_48 = *(undefined4 *)(param_1 + 0x214);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_14926761c(param_1 + 0x10,&local_28,&local_38,*(undefined1 *)(param_1 + 0x210));
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492674b8 FUN_1492674b8 body=197 status=ok
// SIG undefined FUN_1492674b8(void)

void FUN_1492674b8(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2 = (longlong *)*param_2;
  puVar3 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)param_2[4];
  uVar2 = *(undefined1 *)param_2[8];
  uVar1 = *(undefined4 *)param_2[0xc];
  lVar5 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_70 = FUN_144828ac0(param_2 + 0x10,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar5 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar5 * 0x14));
  local_50 = *puVar4;
  local_48 = *(undefined4 *)(puVar4 + 1);
  local_60 = *puVar3;
  local_58 = *(undefined4 *)(puVar3 + 1);
  local_78 = uVar1;
  FUN_14926761c(*(undefined8 *)(param_1 + 0xc0),&local_60,&local_50,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926757e FUN_14926757e body=157 status=ok
// SIG undefined FUN_14926757e(void)

void FUN_14926757e(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  local_38 = *(undefined8 *)(param_1 + 0x200);
  local_30 = *(undefined4 *)(param_1 + 0x208);
  local_40 = param_1 + 0x218;
  local_48 = *(undefined4 *)(param_1 + 0x214);
  FUN_14926761c(param_1 + 0x10,&local_28,&local_38,*(undefined1 *)(param_1 + 0x210));
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926761c FUN_14926761c body=4645 status=ok
// SIG undefined FUN_14926761c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14926761c(longlong param_1,longlong *param_2,longlong *param_3,undefined1 param_4,
                  float param_5,longlong *param_6)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined1 (*pauVar3) [16];
  float *pfVar4;
  float fVar5;
  double dVar6;
  short sVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  ulonglong uVar23;
  int iVar24;
  longlong *plVar25;
  longlong lVar26;
  int *piVar27;
  int *piVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  longlong *plVar32;
  longlong lVar33;
  int *piVar34;
  longlong lVar35;
  longlong *plVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  ulonglong uVar39;
  longlong lVar40;
  int *piVar41;
  int *piVar42;
  int *piVar43;
  int *piVar44;
  longlong lVar45;
  int *piVar46;
  void *pvVar47;
  bool bVar48;
  ulonglong uVar49;
  float fVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  double dVar56;
  double dVar63;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar64;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  double dVar71;
  undefined1 auVar70 [16];
  double dVar72;
  undefined1 auVar73 [16];
  double dVar75;
  undefined1 auVar74 [16];
  undefined4 uVar76;
  undefined4 uVar77;
  undefined1 auVar78 [16];
  undefined1 auStack_558 [32];
  undefined1 local_538;
  undefined1 local_530;
  undefined1 local_528;
  undefined1 local_511;
  longlong *local_510;
  longlong *local_508;
  undefined8 *local_500;
  longlong *local_4f8;
  longlong *local_4f0;
  longlong local_4e8;
  int local_4dc;
  longlong *local_4d8;
  size_t local_4d0;
  void *local_4c8;
  int iStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined1 local_4a8 [16];
  double local_498;
  double dStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  void *local_448;
  undefined8 uStack_440;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  void *local_408;
  ulonglong uStack_400;
  undefined1 local_3f8 [12];
  undefined4 uStack_3ec;
  undefined1 local_3e8 [12];
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  ulonglong local_f0;
  double dVar7;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_558;
  local_4e8 = *(longlong *)(param_1 + 0x1b0);
  local_4f8 = param_3;
  if (local_4e8 == 0) goto LAB_149267756;
  local_508 = param_6 + 2;
  local_510 = param_6 + 4;
  local_4f0 = param_6 + 6;
  plVar36 = param_6 + 8;
  uVar20 = *(uint *)(param_6 + 1);
  uVar39 = (ulonglong)uVar20;
  uVar19 = *(uint *)(param_2 + 1);
  if ((int)uVar19 < 1 || uVar20 != uVar19) {
LAB_149267a5a:
    if ((0 < (int)uVar20) && (uVar20 != uVar19)) {
      *(undefined4 *)(param_6 + 1) = 0;
      if (*(int *)((longlong)param_6 + 0xc) < 0) {
        FUN_1492d06b4(param_6,0);
      }
      *(undefined4 *)(param_6 + 3) = 0;
      if (*(int *)((longlong)param_6 + 0x1c) < 0) {
        FUN_14481578e(local_508,0);
      }
      *(undefined4 *)(param_6 + 5) = 0;
      if (*(int *)((longlong)param_6 + 0x2c) < 0) {
        FUN_14481578e(local_510,0);
      }
      *(undefined4 *)(param_6 + 7) = 0;
      if (*(int *)((longlong)param_6 + 0x3c) < 0) {
        FUN_14482f6fa(local_4f0,0);
      }
      *(undefined4 *)(param_6 + 9) = 0;
      if (*(int *)((longlong)param_6 + 0x4c) < 0) {
        FUN_1401a2688(plVar36,0);
      }
      uVar20 = *(uint *)(param_6 + 1);
    }
  }
  else {
    plVar32 = (longlong *)(*param_2 + 4);
    plVar25 = (longlong *)(*param_6 + 4);
    do {
      if ((*plVar25 != *plVar32) ||
         (*(char *)((longlong)plVar25 + -4) != *(char *)((longlong)plVar32 + -4))) {
        *(undefined4 *)(param_6 + 1) = 0;
        if (-1 < *(int *)((longlong)param_6 + 0xc)) goto LAB_14926774b;
        FUN_1492d06b4(param_6,0);
        uVar20 = *(uint *)(param_6 + 1);
        uVar19 = *(uint *)(param_2 + 1);
        goto LAB_149267a5a;
      }
      plVar32 = (longlong *)((longlong)plVar32 + 0xc);
      plVar25 = plVar25 + 4;
      uVar39 = uVar39 - 1;
    } while (uVar39 != 0);
  }
  if (uVar20 == 0) {
LAB_14926774b:
    lVar33 = local_4e8;
    if ((int)param_2[1] < 2) goto LAB_149267756;
    lVar35 = 0;
    lVar45 = 0;
    local_511 = param_4;
    local_4d8 = plVar36;
    do {
      auVar16 = _local_3f8;
      local_3f8._0_4_ = local_3f8._1_4_ << 8;
      local_3f8._4_8_ = 0;
      uStack_3ec._2_2_ = auVar16._14_2_;
      uStack_3ec._0_2_ = 0xffff;
      local_3e8._0_4_ = 0xffffffff;
      FUN_144828dba(local_3f8,*param_2 + lVar35,lVar33);
      iVar29 = (int)param_6[1];
      *(uint *)(param_6 + 1) = iVar29 + 1U;
      if (*(uint *)((longlong)param_6 + 0xc) < iVar29 + 1U) {
        FUN_1492d0738(param_6,iVar29);
      }
      lVar26 = *param_6;
      puVar2 = (undefined4 *)(lVar26 + 0x10 + (longlong)iVar29 * 0x20);
      *puVar2 = local_3e8._0_4_;
      puVar2[1] = local_3e8._4_4_;
      puVar2[2] = local_3e8._8_4_;
      puVar2[3] = uStack_3dc;
      puVar2 = (undefined4 *)(lVar26 + (longlong)iVar29 * 0x20);
      *puVar2 = local_3f8._0_4_;
      puVar2[1] = local_3f8._4_4_;
      puVar2[2] = local_3f8._8_4_;
      puVar2[3] = uStack_3ec;
      lVar45 = lVar45 + 1;
      lVar35 = lVar35 + 0xc;
    } while (lVar45 < (int)param_2[1]);
    FUN_144a8c360(local_508,(int)param_6[1],1);
    FUN_144a8c360(local_510,(int)param_6[1],1);
    FUN_144aa29e6(local_4f0,(int)param_6[1],1);
    FUN_149268aee(local_4d8,(int)param_6[1],1);
    lVar33 = local_4f8[1];
    if ((longlong)(int)lVar33 < 2) goto LAB_149267756;
    local_448 = (void *)0x0;
    uStack_440 = 0;
    local_4a8 = ZEXT816(0);
    lVar35 = *local_4f8;
    lVar45 = 0;
    do {
      uVar51 = local_4a8._8_4_;
      uVar19 = local_4a8._8_4_ + 1;
      local_4a8._8_4_ = uVar19;
      if ((uint)local_4a8._12_4_ < uVar19) {
        FUN_1446f48e2(local_4a8);
      }
      *(undefined4 *)(local_4a8._0_8_ + (longlong)(int)uVar51 * 4) = uVar51;
      fVar50 = *(float *)(lVar35 + 0x20 + lVar45);
      if (1.0 <= fVar50) {
        fVar50 = 1.0;
      }
      lVar26 = (longlong)(int)uStack_440;
      uVar19 = (int)uStack_440 + 1;
      uStack_440 = CONCAT44(uStack_440._4_4_,uVar19);
      if (uStack_440._4_4_ < uVar19) {
        FUN_14475e4ac(&local_448);
      }
      pvVar47 = local_448;
      if (fVar50 <= 0.0) {
        fVar50 = 0.0;
      }
      *(float *)((longlong)local_448 + lVar26 * 4) = fVar50;
      lVar45 = lVar45 + 0x30;
    } while ((longlong)(int)lVar33 * 0x30 != lVar45);
    lVar33 = (longlong)(int)uStack_440;
    local_4c8 = (void *)0x0;
    iStack_4c0 = (int)uStack_440;
    if (lVar33 == 0) {
      uStack_4bc = 0;
      uStack_400 = 0;
LAB_149268159:
      uStack_400 = uStack_400 & 0xffffffff;
      pvVar47 = (void *)0x0;
    }
    else {
      FUN_1447c510a(&local_4c8,uStack_440 & 0xffffffff,0);
      memcpy(local_4c8,pvVar47,lVar33 << 2);
      pvVar47 = local_4c8;
      lVar33 = (longlong)iStack_4c0;
      local_408 = (void *)0x0;
      uStack_400 = CONCAT44(uStack_400._4_4_,iStack_4c0);
      if (lVar33 == 0) goto LAB_149268159;
      FUN_1447c510a(&local_408,iStack_4c0,0);
      memcpy(local_408,pvVar47,lVar33 << 2);
      pvVar47 = local_408;
    }
    iVar29 = (int)uStack_400;
    local_408 = (void *)0x0;
    uStack_400 = 0;
    uVar51 = local_4a8._8_4_;
    lVar33 = (longlong)(int)local_4a8._8_4_;
    if (1 < lVar33) {
      local_4dc = iVar29;
      uVar17 = local_4a8._0_8_;
      memset(local_3e8,0,0x2f0);
      stack0xfffffffffffffc10 = (double)(uVar17 + lVar33 * 4 + -4);
      local_3f8._0_8_ = uVar17;
      fVar50 = logf((float)(int)uVar51);
      local_3e8._0_4_ = (int)(longlong)(fVar50 + fVar50);
      local_4d0 = (longlong)iVar29 << 2;
      puVar37 = (undefined8 *)local_3f8;
      do {
        piVar22 = (int *)*puVar37;
        piVar27 = (int *)puVar37[1];
        iVar29 = *(int *)(puVar37 + 2);
        iVar21 = (int)((ulonglong)((longlong)piVar27 - (longlong)piVar22) >> 2);
        uVar39 = (ulonglong)(iVar21 + 1);
        piVar43 = piVar27;
        piVar42 = piVar22;
        local_500 = puVar37;
        if (iVar29 != 0) {
LAB_149268463:
          if (8 < (int)(uint)uVar39) {
            uVar19 = (uint)uVar39 >> 1;
            iVar21 = piVar22[uVar19];
            piVar22[uVar19] = *piVar22;
            *piVar22 = iVar21;
            piVar44 = piVar27 + 1;
            piVar34 = piVar22;
            do {
              piVar18 = piVar34 + 1;
              piVar28 = piVar34 + 1;
              do {
                piVar34 = piVar28;
                piVar41 = piVar18;
                if (piVar27 < piVar34) break;
                fVar50 = *(float *)((longlong)pvVar47 + (longlong)*piVar34 * 4);
                pfVar4 = (float *)((longlong)pvVar47 + (longlong)*piVar22 * 4);
                piVar18 = piVar41 + 1;
                piVar28 = piVar34 + 1;
              } while (fVar50 < *pfVar4 || fVar50 == *pfVar4);
              piVar18 = piVar44 + -2;
              do {
                piVar28 = piVar44;
                piVar46 = piVar18;
                piVar44 = piVar28 + -1;
                if (piVar44 <= piVar22) break;
                fVar50 = *(float *)((longlong)pvVar47 + (longlong)*piVar22 * 4);
                pfVar4 = (float *)((longlong)pvVar47 + (longlong)*piVar44 * 4);
                piVar18 = piVar46 + -1;
              } while (fVar50 < *pfVar4 || fVar50 == *pfVar4);
              if (piVar44 < piVar34) goto LAB_1492684fe;
              iVar21 = *piVar34;
              *piVar34 = *piVar44;
              *piVar44 = iVar21;
            } while( true );
          }
          if (piVar22 < piVar27) {
            do {
              piVar43 = piVar22;
              if (piVar22 + 1 <= piVar27) {
                iVar29 = *piVar22;
                piVar42 = piVar22 + 1;
                piVar44 = piVar22;
                do {
                  fVar50 = *(float *)((longlong)pvVar47 + (longlong)*piVar42 * 4);
                  pfVar4 = (float *)((longlong)pvVar47 + (longlong)iVar29 * 4);
                  piVar43 = piVar42;
                  iVar21 = *piVar42;
                  if (fVar50 < *pfVar4 || fVar50 == *pfVar4) {
                    piVar43 = piVar44;
                    iVar21 = iVar29;
                  }
                  iVar29 = iVar21;
                  piVar42 = piVar42 + 1;
                  piVar44 = piVar43;
                } while (piVar42 <= piVar27);
              }
              iVar29 = *piVar43;
              *piVar43 = *piVar27;
              *piVar27 = iVar29;
              piVar27 = piVar27 + -1;
            } while (piVar22 < piVar27);
          }
          goto LAB_1492687a7;
        }
LAB_1492685a6:
        auVar16._4_4_ = local_428._12_4_;
        auVar16._0_4_ = local_4dc;
        auVar16._8_8_ = 0;
        local_428 = auVar16 << 0x40;
        if (local_4dc == 0) {
          local_428 = ZEXT416(0) << 0x40;
        }
        else {
          FUN_1447c510a(local_428,local_4dc,0);
          memcpy((void *)local_428._0_8_,pvVar47,local_4d0);
        }
        iVar29 = (int)uVar39;
        if (iVar29 != 0) {
          local_488 = (void *)0x0;
          lVar33 = (longlong)(int)local_428._8_4_;
          uVar17 = local_428._0_8_;
          uStack_480 = CONCAT44(uStack_480._4_4_,local_428._8_4_);
          if (lVar33 == 0) {
            uStack_480 = (ulonglong)(uint)local_428._8_4_;
          }
          else {
            FUN_1447c510a(&local_488,local_428._8_4_,0);
            memcpy(local_488,(void *)uVar17,lVar33 << 2);
          }
          iVar21 = (iVar21 - (iVar21 + -1 >> 0x1f)) + -1 >> 1;
          iVar31 = iVar21;
joined_r0x000149268662:
          do {
            iVar24 = iVar21 * 2 + 1;
            if (iVar24 < iVar29) {
              iVar30 = iVar21 * 2 + 2;
              if ((iVar30 < iVar29) &&
                 (fVar50 = *(float *)((longlong)local_488 + (longlong)piVar22[iVar24] * 4),
                 pfVar4 = (float *)((longlong)local_488 + (longlong)piVar22[iVar30] * 4),
                 fVar50 < *pfVar4 || fVar50 == *pfVar4)) {
                iVar24 = iVar30;
              }
              iVar30 = piVar22[iVar21];
              fVar50 = *(float *)((longlong)local_488 + (longlong)piVar22[iVar24] * 4);
              pfVar4 = (float *)((longlong)local_488 + (longlong)iVar30 * 4);
              if (*pfVar4 <= fVar50 && fVar50 != *pfVar4) {
                piVar22[iVar21] = piVar22[iVar24];
                piVar22[iVar24] = iVar30;
                iVar21 = iVar24;
                goto joined_r0x000149268662;
              }
            }
            bVar48 = iVar31 != 0;
            iVar21 = iVar31 + -1;
            iVar31 = iVar21;
          } while (bVar48);
          if (local_488 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (1 < iVar29) {
            iVar21 = *piVar22;
            *piVar22 = piVar22[uVar39 - 1];
            piVar22[uVar39 - 1] = iVar21;
            if (iVar29 != 2) {
              do {
                uVar23 = uVar39 - 1;
                iVar29 = 0;
                iVar31 = 1;
                iVar21 = 0;
                do {
                  iVar29 = iVar29 + 2;
                  iVar24 = iVar31;
                  if (((longlong)iVar29 < (longlong)uVar23) &&
                     (fVar50 = *(float *)(local_428._0_8_ + (longlong)piVar22[iVar31] * 4),
                     pfVar4 = (float *)(local_428._0_8_ + (longlong)piVar22[iVar29] * 4),
                     fVar50 < *pfVar4 || fVar50 == *pfVar4)) {
                    iVar24 = iVar29;
                  }
                  iVar29 = piVar22[iVar21];
                  fVar50 = *(float *)(local_428._0_8_ + (longlong)piVar22[iVar24] * 4);
                  pfVar4 = (float *)(local_428._0_8_ + (longlong)iVar29 * 4);
                  if (fVar50 < *pfVar4 || fVar50 == *pfVar4) break;
                  piVar22[iVar21] = piVar22[iVar24];
                  piVar22[iVar24] = iVar29;
                  iVar29 = iVar24 * 2;
                  iVar31 = iVar24 * 2 + 1;
                  iVar21 = iVar24;
                } while ((longlong)iVar31 < (longlong)uVar23);
                iVar29 = *piVar22;
                *piVar22 = piVar22[uVar39 - 2];
                piVar22[uVar39 - 2] = iVar29;
                uVar39 = uVar23;
              } while (2 < uVar23);
            }
          }
        }
        if (local_428._0_8_ != 0) {
          FUN_1400020a8();
        }
LAB_1492687a7:
        puVar37 = local_500 + -3;
      } while (local_3f8 <= puVar37);
    }
    if (pvVar47 != (void *)0x0) {
      FUN_1400020a8(pvVar47);
    }
    if (local_408 != (void *)0x0) {
      FUN_1400020a8();
    }
    iVar29 = (int)param_6[1];
    if (0 < iVar29) {
      lVar33 = 0;
      do {
        if (iVar29 < 2) {
          fVar50 = 0.0;
        }
        else {
          fVar50 = (float)(int)lVar33 / (float)(iVar29 + -1);
        }
        iVar21 = *(int *)local_4a8._0_8_;
        if (fVar50 <= *(float *)((longlong)local_448 + (longlong)iVar21 * 4)) {
          *(int *)(*local_510 + lVar33 * 4) = iVar21;
          *(int *)(*local_508 + lVar33 * 4) = iVar21;
LAB_1492682af:
          uVar51 = 0;
LAB_1492682b2:
          *(undefined4 *)(param_6[6] + lVar33 * 4) = uVar51;
          iVar29 = (int)param_6[1];
        }
        else {
          iVar21 = *(int *)(local_4a8._0_8_ + (longlong)(int)(local_4a8._8_4_ - 1) * 4);
          if (*(float *)((longlong)local_448 + (longlong)iVar21 * 4) <= fVar50) {
            *(int *)(*local_510 + lVar33 * 4) = iVar21;
            *(int *)(*local_508 + lVar33 * 4) = iVar21;
            goto LAB_1492682af;
          }
          if (1 < (int)local_4a8._8_4_) {
            uVar39 = 1;
            do {
              iVar21 = *(int *)(local_4a8._0_8_ + (uVar39 - 1) * 4);
              lVar35 = (longlong)iVar21;
              if (ABS(*(float *)(*local_4f8 + 0x20 + lVar35 * 0x30) - fVar50) <= 1e-08) {
LAB_149268373:
                *(int *)(*local_510 + lVar33 * 4) = iVar21;
                *(int *)(*local_508 + lVar33 * 4) = iVar21;
                goto LAB_1492682af;
              }
              iVar31 = *(int *)(local_4a8._0_8_ + uVar39 * 4);
              lVar45 = (longlong)iVar31;
              fVar5 = *(float *)(*local_4f8 + 0x20 + lVar45 * 0x30);
              if (ABS(fVar5 - fVar50) <= 1e-08) {
                *(int *)(*local_510 + lVar33 * 4) = iVar31;
                *(int *)(*local_508 + lVar33 * 4) = iVar31;
                goto LAB_1492682af;
              }
              if (fVar50 < fVar5) {
                if (ABS(*(float *)((longlong)local_448 + lVar35 * 4) -
                        *(float *)((longlong)local_448 + lVar45 * 4)) <= 1e-08) goto LAB_149268373;
                *(int *)(*local_508 + lVar33 * 4) = iVar21;
                *(int *)(*local_510 + lVar33 * 4) = iVar31;
                fVar5 = *(float *)((longlong)local_448 + lVar35 * 4);
                *(float *)(*local_4f0 + lVar33 * 4) =
                     (fVar50 - fVar5) / (*(float *)((longlong)local_448 + lVar45 * 4) - fVar5);
                uVar51 = FUN_14915b162(*(undefined4 *)(*local_4f0 + lVar33 * 4),local_511);
                goto LAB_1492682b2;
              }
              uVar39 = uVar39 + 1;
            } while ((uint)local_4a8._8_4_ != uVar39);
          }
        }
        lVar33 = lVar33 + 1;
      } while (lVar33 < iVar29);
    }
    if (local_4c8 != (void *)0x0) {
      FUN_1400020a8();
    }
    plVar36 = local_4d8;
    if (local_4a8._0_8_ != 0) {
      FUN_1400020a8();
    }
    if (local_448 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar20 = *(uint *)(param_6 + 1);
  }
  if ((((1 < (int)uVar20) && ((int)local_4f8[1] != 0)) &&
      (pcVar9 = (char *)*param_6, *(short *)(pcVar9 + 0xc) != -1)) &&
     ((((uint)*(ushort *)(pcVar9 + 6) < DAT_14c87eb08 + 1U && (*(longlong *)(pcVar9 + 4) != 0)) &&
      (*pcVar9 != '\0')))) {
    lVar33 = 0;
    lVar45 = 0;
    lVar35 = 0;
    do {
      lVar26 = *param_6;
      sVar8 = *(short *)(lVar26 + 0xc + lVar33);
      if (((sVar8 == -1) || (DAT_14c87eb08 + 1U <= (uint)*(ushort *)(lVar26 + 6 + lVar33))) ||
         ((*(longlong *)(lVar26 + 4 + lVar33) == 0 || (*(char *)(lVar26 + lVar33) == '\0')))) {
        puVar38 = (undefined8 *)(*plVar36 + lVar45);
        lVar26 = 0xc;
        puVar37 = &DAT_14c846480;
      }
      else {
        FUN_144afced8(local_4e8,local_3f8,sVar8,0);
        lVar26 = 0xc;
        puVar37 = (undefined8 *)local_3f8;
        puVar38 = (undefined8 *)(*plVar36 + lVar45);
      }
      for (; auVar16 = _DAT_149934d80, lVar26 != 0; lVar26 = lVar26 + -1) {
        *puVar38 = *puVar37;
        puVar37 = puVar37 + 1;
        puVar38 = puVar38 + 1;
      }
      lVar35 = lVar35 + 1;
      uVar39 = (ulonglong)(int)param_6[1];
      lVar45 = lVar45 + 0x60;
      lVar33 = lVar33 + 0x20;
    } while (lVar35 < (longlong)uVar39);
    if (0 < (int)param_6[1]) {
      if (1.0 <= param_5) {
        param_5 = 1.0;
      }
      if (param_5 <= 0.0) {
        param_5 = 0.0;
      }
      local_500 = (undefined8 *)(double)param_5;
      lVar33 = 4;
      lVar35 = 0;
      lVar45 = 0;
      do {
        iVar29 = *(int *)(*local_508 + lVar45 * 4);
        if ((iVar29 < (int)local_4f8[1]) &&
           (lVar26 = *local_510, *(int *)(lVar26 + lVar45 * 4) < (int)local_4f8[1])) {
          lVar10 = *local_4f8;
          lVar40 = (longlong)iVar29 * 0x30;
          pdVar1 = (double *)(lVar10 + lVar40);
          dVar56 = *pdVar1;
          dVar64 = pdVar1[1];
          pauVar3 = (undefined1 (*) [16])(lVar10 + 0x10 + lVar40);
          local_418._0_8_ = SUB128(*(undefined1 (*) [12])*pauVar3,0);
          local_418._8_8_ = SUB168(*pauVar3,8);
          dVar55 = (double)local_418._0_8_ * (double)local_418._0_8_ + dVar56 * dVar56;
          dVar63 = (double)local_418._8_8_ * (double)local_418._8_8_ + dVar64 * dVar64;
          auVar57._0_8_ = dVar55 + dVar63;
          auVar57._8_8_ = dVar55 + dVar63;
          uVar49 = -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_);
          auVar58 = sqrtpd(auVar57,auVar57);
          auVar58 = divpd(auVar16,auVar58);
          auVar65._0_8_ = auVar58._0_8_ * (double)local_418._0_8_;
          auVar65._8_8_ = auVar58._8_8_ * (double)local_418._8_8_;
          uVar39 = (ulonglong)(dVar56 * auVar58._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_);
          uVar51 = (undefined4)uVar39;
          uVar52 = (undefined4)(uVar39 >> 0x20);
          uVar23 = (ulonglong)(dVar64 * auVar58._8_8_) & uVar49;
          uVar76 = (undefined4)uVar23;
          uVar77 = (undefined4)(uVar23 >> 0x20);
          auVar73._0_12_ = ZEXT812(0);
          auVar73._12_4_ = 0x3ff00000;
          auVar58._8_4_ = (int)uVar49;
          auVar58._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_);
          auVar58._12_4_ = (int)(uVar49 >> 0x20);
          local_418 = blendvpd(auVar73,auVar65,auVar58);
          local_428._8_4_ = uVar76;
          local_428._0_8_ = uVar39;
          local_428._12_4_ = uVar77;
          lVar40 = (longlong)*(int *)(lVar26 + lVar45 * 4) * 0x30;
          pdVar1 = (double *)(lVar10 + lVar40);
          dVar56 = *pdVar1;
          dVar64 = pdVar1[1];
          pdVar1 = (double *)(lVar10 + 0x10 + lVar40);
          dVar55 = *pdVar1;
          dVar63 = pdVar1[1];
          dVar69 = dVar55 * dVar55 + dVar56 * dVar56;
          dVar71 = dVar63 * dVar63 + dVar64 * dVar64;
          auVar70._0_8_ = dVar69 + dVar71;
          auVar70._8_8_ = dVar69 + dVar71;
          uVar39 = -(ulonglong)(9.99999993922529e-09 <= auVar70._8_8_);
          auVar58 = sqrtpd(auVar70,auVar70);
          auVar58 = divpd(auVar16,auVar58);
          auVar78._0_8_ = auVar58._0_8_ * dVar55;
          auVar78._8_8_ = auVar58._8_8_ * dVar63;
          local_448 = (void *)((ulonglong)(dVar56 * auVar58._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar70._0_8_));
          uStack_440 = (ulonglong)(dVar64 * auVar58._8_8_) & uVar39;
          auVar59._0_12_ = ZEXT812(0);
          auVar59._12_4_ = 0x3ff00000;
          auVar11._8_4_ = (int)uVar39;
          auVar11._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar70._0_8_);
          auVar11._12_4_ = (int)(uVar39 >> 0x20);
          local_438 = blendvpd(auVar59,auVar78,auVar11);
          if (*(int *)(*local_508 + lVar45 * 4) != *(int *)(lVar26 + lVar45 * 4)) {
            fVar50 = *(float *)(*local_4f0 + lVar45 * 4);
            if (fVar50 <= 1.0) {
              if (1e-08 < fVar50) {
                FUN_144a44da6(local_3f8,local_428,&local_448,(double)fVar50);
                dVar56 = (double)local_3e8._0_8_ * (double)local_3e8._0_8_ +
                         (double)local_3f8._0_8_ * (double)local_3f8._0_8_;
                dVar64 = stack0xfffffffffffffc20 * stack0xfffffffffffffc20 +
                         stack0xfffffffffffffc10 * stack0xfffffffffffffc10;
                auVar61._0_8_ = dVar56 + dVar64;
                auVar61._8_8_ = dVar56 + dVar64;
                uVar39 = -(ulonglong)(9.99999993922529e-09 <= auVar61._8_8_);
                auVar58 = sqrtpd(auVar61,auVar61);
                auVar58 = divpd(auVar16,auVar58);
                auVar67._0_8_ = auVar58._0_8_ * (double)local_3e8._0_8_;
                auVar67._8_8_ = auVar58._8_8_ * stack0xfffffffffffffc20;
                dVar56 = (double)((ulonglong)((double)local_3f8._0_8_ * auVar58._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_));
                dVar64 = (double)((ulonglong)(stack0xfffffffffffffc10 * auVar58._8_8_) & uVar39);
                auVar54._0_12_ = ZEXT812(0);
                auVar54._12_4_ = 0x3ff00000;
                auVar13._8_4_ = (int)uVar39;
                auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_);
                auVar13._12_4_ = (int)(uVar39 >> 0x20);
                auVar58 = blendvpd(auVar54,auVar67,auVar13);
                dVar55 = auVar58._0_8_;
                dVar63 = auVar58._8_8_;
                dVar69 = dVar55 * dVar55 + dVar56 * dVar56;
                dVar71 = dVar63 * dVar63 + dVar64 * dVar64;
                auVar62._0_8_ = dVar69 + dVar71;
                auVar62._8_8_ = dVar69 + dVar71;
                uVar49 = -(ulonglong)(9.99999993922529e-09 <= auVar62._8_8_);
                auVar58 = sqrtpd(auVar62,auVar62);
                auVar58 = divpd(auVar16,auVar58);
                auVar68._0_8_ = auVar58._0_8_ * dVar55;
                auVar68._8_8_ = auVar58._8_8_ * dVar63;
                uVar39 = (ulonglong)(dVar56 * auVar58._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_);
                uVar51 = (undefined4)uVar39;
                uVar52 = (undefined4)(uVar39 >> 0x20);
                uVar23 = (ulonglong)(dVar64 * auVar58._8_8_) & uVar49;
                uVar76 = (undefined4)uVar23;
                uVar77 = (undefined4)(uVar23 >> 0x20);
                auVar74._0_12_ = ZEXT812(0);
                auVar74._12_4_ = 0x3ff00000;
                auVar14._8_4_ = (int)uVar49;
                auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_);
                auVar14._12_4_ = (int)(uVar49 >> 0x20);
                local_418 = blendvpd(auVar74,auVar68,auVar14);
                local_428._8_4_ = uVar76;
                local_428._0_8_ = uVar39;
                local_428._12_4_ = uVar77;
              }
            }
            else {
              local_428._8_8_ = uStack_440;
              local_428._0_8_ = local_448;
              auVar58 = local_428;
              local_428._0_4_ = SUB84(local_448,0);
              local_428._4_4_ = (undefined4)((ulonglong)local_448 >> 0x20);
              local_428._8_4_ = (undefined4)uStack_440;
              local_428._12_4_ = (undefined4)(uStack_440 >> 0x20);
              uVar51 = local_428._0_4_;
              uVar52 = local_428._4_4_;
              uVar76 = local_428._8_4_;
              uVar77 = local_428._12_4_;
              local_428 = auVar58;
              local_418 = local_438;
            }
          }
          lVar26 = param_6[8];
          puVar37 = (undefined8 *)(lVar26 + -0x20 + lVar33 * 8);
          local_4c8 = (void *)*puVar37;
          iStack_4c0 = *(int *)(puVar37 + 1);
          uStack_4bc = *(undefined4 *)((longlong)puVar37 + 0xc);
          puVar37 = (undefined8 *)(lVar26 + -0x10 + lVar33 * 8);
          local_4b8 = *puVar37;
          uStack_4b0 = puVar37[1];
          puVar37 = (undefined8 *)(lVar26 + 0x20 + lVar33 * 8);
          local_468 = *puVar37;
          uStack_460 = puVar37[1];
          pdVar1 = (double *)(lVar26 + -8 + lVar33 * 8);
          dVar64 = *pdVar1;
          dVar56 = *pdVar1;
          pdVar1 = (double *)(lVar26 + -0x20 + lVar33 * 8);
          dVar55 = *pdVar1;
          dVar63 = *pdVar1;
          pdVar1 = (double *)(lVar26 + -0x18 + lVar33 * 8);
          dVar69 = *pdVar1;
          dVar71 = *pdVar1;
          pdVar1 = (double *)(lVar26 + -0x10 + lVar33 * 8);
          dVar6 = *pdVar1;
          dVar7 = *pdVar1;
          puVar37 = (undefined8 *)(lVar26 + 0x10 + lVar33 * 8);
          local_478 = *puVar37;
          uStack_470 = puVar37[1];
          puVar37 = (undefined8 *)(lVar26 + lVar33 * 8);
          local_488 = (void *)*puVar37;
          uStack_480 = puVar37[1];
          puVar37 = (undefined8 *)(lVar26 + 0x30 + lVar33 * 8);
          local_458 = *puVar37;
          uStack_450 = puVar37[1];
          dVar72 = local_418._0_8_;
          dVar75 = local_418._8_8_;
          dVar15 = (double)CONCAT44(uVar52,uVar51) * dVar7 * 1.0 +
                   dVar75 * dVar71 +
                   dVar72 * dVar63 * -1.0 + (double)CONCAT44(uVar77,uVar76) * dVar56;
          local_498 = dVar75 * dVar6 * 1.0 +
                      ((dVar55 * (double)CONCAT44(uVar77,uVar76) * 1.0 + dVar64 * dVar72) -
                      (double)CONCAT44(uVar52,uVar51) * dVar69);
          dStack_490 = dVar72 * dVar7 * -1.0 +
                       ((dVar63 * (double)CONCAT44(uVar52,uVar51) * -1.0 + dVar56 * dVar75) -
                       (double)CONCAT44(uVar77,uVar76) * dVar71);
          local_4a8._8_4_ = SUB84(dVar15,0);
          local_4a8._0_8_ =
               (double)CONCAT44(uVar77,uVar76) * dVar6 * -1.0 +
               dVar72 * dVar69 + dVar75 * dVar55 * 1.0 + (double)CONCAT44(uVar52,uVar51) * dVar64;
          local_4a8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
          FUN_144a44da6(local_3f8,&local_4c8,local_4a8,local_500);
          dVar56 = (double)local_3e8._0_8_ * (double)local_3e8._0_8_ +
                   (double)local_3f8._0_8_ * (double)local_3f8._0_8_;
          dVar64 = stack0xfffffffffffffc20 * stack0xfffffffffffffc20 +
                   stack0xfffffffffffffc10 * stack0xfffffffffffffc10;
          auVar60._0_8_ = dVar56 + dVar64;
          auVar60._8_8_ = dVar56 + dVar64;
          uVar49 = -(ulonglong)(9.99999993922529e-09 <= auVar60._8_8_);
          auVar58 = sqrtpd(auVar60,auVar60);
          auVar58 = divpd(auVar16,auVar58);
          auVar66._0_8_ = auVar58._0_8_ * (double)local_3e8._0_8_;
          auVar66._8_8_ = auVar58._8_8_ * stack0xfffffffffffffc20;
          uVar39 = (ulonglong)((double)local_3f8._0_8_ * auVar58._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_);
          uVar23 = (ulonglong)(stack0xfffffffffffffc10 * auVar58._8_8_) & uVar49;
          uVar51 = (undefined4)uVar23;
          uVar52 = (undefined4)(uVar23 >> 0x20);
          auVar53._0_12_ = ZEXT812(0);
          auVar53._12_4_ = 0x3ff00000;
          auVar12._8_4_ = (int)uVar49;
          auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_);
          auVar12._12_4_ = (int)(uVar49 >> 0x20);
          local_418 = blendvpd(auVar53,auVar66,auVar12);
          local_428._8_4_ = uVar51;
          local_428._0_8_ = uVar39;
          local_428._12_4_ = uVar52;
          lVar26 = *param_6;
          sVar8 = *(short *)(lVar26 + 0xc + lVar35);
          if ((((sVar8 != -1) && ((uint)*(ushort *)(lVar26 + 6 + lVar35) < DAT_14c87eb08 + 1U)) &&
              (*(longlong *)(lVar26 + 4 + lVar35) != 0)) && (*(char *)(lVar26 + lVar35) != '\0')) {
            local_3f8._8_4_ = uVar51;
            local_3f8._0_8_ = uVar39;
            uStack_3ec = uVar52;
            local_3b8._8_8_ = uStack_460;
            local_3b8._0_8_ = local_468;
            local_3a8._8_8_ = uStack_450;
            local_3a8._0_8_ = local_458;
            local_3d8 = (undefined4)local_488;
            uStack_3d4 = local_488._4_4_;
            uStack_3d0 = (undefined4)uStack_480;
            uStack_3cc = uStack_480._4_4_;
            local_3c8 = (undefined4)local_478;
            uStack_3c4 = local_478._4_4_;
            uStack_3c0 = (undefined4)uStack_470;
            uStack_3bc = uStack_470._4_4_;
            local_528 = 0;
            local_530 = 0;
            local_538 = 1;
            _local_3e8 = local_418;
            FUN_140122cc6(local_4e8,sVar8,local_3f8,0);
          }
          uVar39 = (ulonglong)*(uint *)(param_6 + 1);
        }
        lVar45 = lVar45 + 1;
        lVar35 = lVar35 + 0x20;
        lVar33 = lVar33 + 0xc;
      } while (lVar45 < (int)uVar39);
    }
  }
LAB_149267756:
  if ((local_f0 ^ (ulonglong)auStack_558) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1492684fe:
  iVar21 = *piVar22;
  *piVar22 = *piVar44;
  *piVar44 = iVar21;
  iVar29 = iVar29 + -1;
  piVar28 = piVar28 + -2;
  if ((longlong)piVar46 - (longlong)piVar42 < (longlong)piVar43 - (longlong)piVar41) {
    if (piVar34 < piVar27) {
      *local_500 = piVar34;
      local_500[1] = piVar27;
      *(int *)(local_500 + 2) = iVar29;
      local_500 = local_500 + 3;
    }
    piVar41 = piVar22;
    if (piVar44 <= piVar22 + 1) goto LAB_1492687a7;
  }
  else {
    if (piVar22 + 1 < piVar44) {
      *local_500 = piVar22;
      local_500[1] = piVar28;
      *(int *)(local_500 + 2) = iVar29;
      local_500 = local_500 + 3;
    }
    piVar22 = piVar34;
    piVar28 = piVar27;
    piVar46 = piVar27;
    if (piVar27 <= piVar34) goto LAB_1492687a7;
  }
  iVar21 = (int)((ulonglong)((longlong)piVar46 - (longlong)piVar41) >> 2);
  uVar39 = (ulonglong)(iVar21 + 1);
  piVar27 = piVar28;
  piVar43 = piVar46;
  piVar42 = piVar41;
  if (iVar29 == 0) goto LAB_1492685a6;
  goto LAB_149268463;
}



// FUNCTION 149268842 FUN_149268842 body=25 status=ok
// SIG undefined FUN_149268842(void)

undefined8 FUN_149268842(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14926885c FUN_14926885c body=263 status=ok
// SIG undefined FUN_14926885c(void)

undefined8 FUN_14926885c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_2b8 [32];
  undefined **local_298 [2];
  undefined1 local_288 [480];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_298[0] = &PTR_FUN_14bb775c0;
  FUN_1412ca278(local_288);
  local_298[0] = &PTR_FUN_14bc003a0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_84 = 0x3f800000;
  FUN_1444888de(&local_a8,param_1 + 0x1f0);
  FUN_149268964(&local_98,param_1 + 0x200);
  local_88 = *(undefined1 *)(param_1 + 0x210);
  local_84 = *(undefined4 *)(param_1 + 0x214);
  FUN_1492689be(param_2,local_298);
  FUN_149268a92(local_298);
  if ((local_20 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149268964 FUN_149268964 body=89 status=ok
// SIG undefined FUN_149268964(void)

undefined8 * FUN_149268964(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1492d0f46(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492689be FUN_1492689be body=211 status=ok
// SIG undefined FUN_1492689be(void)

undefined8 * FUN_1492689be(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_146708f6e();
  param_1[2] = uVar1;
  uVar1 = FUN_146709264();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149268a92 FUN_149268a92 body=91 status=ok
// SIG undefined FUN_149268a92(void)

void FUN_149268a92(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc003a0;
  FUN_145dce7c0(param_1 + 0x43);
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 149268aee FUN_149268aee body=127 status=ok
// SIG undefined FUN_149268aee(void)

void FUN_149268aee(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_144a2c682(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x60 + *param_1),0,(longlong)(param_2 - iVar1) * 0x60);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1469124fc(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149268b6e FUN_149268b6e body=218 status=ok
// SIG undefined FUN_149268b6e(void)

void FUN_149268b6e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  puVar5 = (undefined8 *)*param_2;
  uVar6 = *puVar5;
  uVar7 = puVar5[4];
  uVar8 = puVar5[8];
  uVar1 = *(undefined4 *)puVar5[0xc];
  uVar2 = *(undefined4 *)puVar5[0x10];
  uVar3 = *(undefined1 *)puVar5[0x14];
  uVar4 = *(undefined4 *)puVar5[0x18];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(puVar5 + 0x1c,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  FUN_149268ce0(*(undefined8 *)(param_1 + 0xc0),uVar6,uVar7,uVar8,uVar1,uVar2,uVar3,uVar4,uVar10,
                **(undefined1 **)(*param_2 + 0x100));
  return;
}



// FUNCTION 149268c58 FUN_149268c58 body=135 status=ok
// SIG undefined FUN_149268c58(void)

void FUN_149268c58(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149268ce0(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1f8,param_1 + 0x200,
                *(undefined4 *)(param_1 + 0x260),*(undefined4 *)(param_1 + 0x264),
                *(undefined1 *)(param_1 + 0x268),*(undefined4 *)(param_1 + 0x26c),param_1 + 0x270,
                *(undefined1 *)(param_1 + 0x2b0));
  return;
}



// FUNCTION 149268ce0 FUN_149268ce0 body=306 status=ok
// SIG undefined FUN_149268ce0(void)

void FUN_149268ce0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
                  longlong param_9,undefined1 param_10)

{
  longlong lVar1;
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined1 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined1 local_98;
  undefined8 local_94;
  undefined1 local_8c;
  undefined8 local_88;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_9 + 0x18) == 0) {
    local_8c = 1;
    local_88 = *param_3;
    local_98 = 1;
    local_94 = *param_2;
    local_c8 = local_c8 & 0xffffff00;
    FUN_1491f31fc(&local_80,*(undefined8 *)(param_1 + 0x1b0));
    lVar1 = local_80;
  }
  else {
    local_78 = 0;
    lVar1 = 0;
  }
  local_a8 = param_10;
  local_b0 = param_9;
  local_b8 = param_8;
  local_c0 = param_7;
  local_c8 = param_6;
  local_80 = lVar1;
  FUN_1492691a4(param_1,&local_80,param_4,param_5);
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149268e14 FUN_149268e14 body=261 status=ok
// SIG undefined FUN_149268e14(void)

void FUN_149268e14(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar5 = (longlong *)*param_2;
  puVar6 = (undefined8 *)*plVar5;
  lVar7 = plVar5[4];
  uVar1 = *(undefined4 *)plVar5[8];
  uVar2 = *(undefined4 *)plVar5[0xc];
  uVar3 = *(undefined1 *)plVar5[0x10];
  uVar4 = *(undefined4 *)plVar5[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_80 = FUN_144828ac0(plVar5 + 0x18,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  local_78 = **(undefined1 **)(*param_2 + 0xe0);
  local_70 = *puVar6;
  local_68 = *(undefined4 *)(puVar6 + 1);
  local_98 = uVar2;
  local_90 = uVar3;
  local_88 = uVar4;
  FUN_1492691a4(*(undefined8 *)(param_1 + 0xc0),&local_70,lVar7,uVar1);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149268f2a FUN_149268f2a body=176 status=ok
// SIG undefined FUN_149268f2a(void)

void FUN_149268f2a(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  undefined4 local_48;
  longlong local_40;
  undefined1 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_38 = *(undefined1 *)(param_1 + 0x2b0);
  local_40 = param_1 + 0x270;
  local_48 = *(undefined4 *)(param_1 + 0x26c);
  local_50 = *(undefined1 *)(param_1 + 0x268);
  local_58 = *(undefined4 *)(param_1 + 0x264);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_1492691a4(param_1 + 0x10,&local_28,param_1 + 0x200,*(undefined4 *)(param_1 + 0x260));
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149268fdc FUN_149268fdc body=260 status=ok
// SIG undefined FUN_149268fdc(void)

void FUN_149268fdc(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar5 = (longlong *)*param_2;
  puVar6 = (undefined8 *)*plVar5;
  lVar7 = plVar5[4];
  uVar1 = *(undefined4 *)plVar5[8];
  uVar2 = *(undefined4 *)plVar5[0xc];
  uVar3 = *(undefined1 *)plVar5[0x10];
  uVar4 = *(undefined4 *)plVar5[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_80 = FUN_144828ac0(plVar5 + 0x18,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  local_78 = **(undefined1 **)(*param_2 + 0xe0);
  local_70 = *puVar6;
  local_68 = *(undefined4 *)(puVar6 + 1);
  local_98 = uVar2;
  local_90 = uVar3;
  local_88 = uVar4;
  FUN_1492691a4(*(undefined8 *)(param_1 + 0xc0),&local_70,lVar7,uVar1);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492690f2 FUN_1492690f2 body=177 status=ok
// SIG undefined FUN_1492690f2(void)

void FUN_1492690f2(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  undefined4 local_48;
  longlong local_40;
  undefined1 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  local_38 = *(undefined1 *)(param_1 + 0x2b0);
  local_40 = param_1 + 0x270;
  local_48 = *(undefined4 *)(param_1 + 0x26c);
  local_50 = *(undefined1 *)(param_1 + 0x268);
  local_58 = *(undefined4 *)(param_1 + 0x264);
  FUN_1492691a4(param_1 + 0x10,&local_28,param_1 + 0x200,*(undefined4 *)(param_1 + 0x260));
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492691a4 FUN_1492691a4 body=3323 status=ok
// SIG undefined FUN_1492691a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492691a4(longlong param_1,longlong *param_2,undefined8 *param_3,float param_4,
                  float param_5,undefined1 param_6,undefined4 param_7,longlong *param_8,char param_9
                  )

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  uint *puVar25;
  undefined8 *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  float fVar41;
  double dVar42;
  double dVar43;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined1 local_260;
  undefined1 local_258;
  longlong *local_248;
  ulonglong local_240;
  undefined8 *local_238;
  uint local_22c;
  undefined8 local_228 [12];
  undefined8 local_1c8;
  undefined4 local_1c0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 *local_168;
  undefined8 uStack_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  undefined2 uStack_14c;
  undefined2 uStack_14a;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  plVar5 = *(longlong **)(param_1 + 0x1b0);
  if (plVar5 != (longlong *)0x0) {
    iVar19 = (int)param_8[3];
    if (iVar19 == 0) {
      lVar22 = param_2[1];
      if ((longlong)(int)lVar22 < 1) goto LAB_149269257;
      local_248 = param_8 + 4;
      lVar27 = *param_2;
      lVar21 = 0;
      local_238 = param_3;
      do {
        local_1c0 = *(undefined4 *)(lVar27 + 8 + lVar21);
        local_1c8 = *(undefined8 *)(lVar27 + lVar21);
        local_158 = local_158 & 0xffffff00;
        uStack_154 = 0;
        uStack_150 = 0;
        uStack_14c = 0xffff;
        local_148 = CONCAT44(local_148._4_4_,0xffffffff);
        FUN_144828dba(&local_158,&local_1c8,plVar5);
        iVar19 = (int)param_8[3];
        *(uint *)(param_8 + 3) = iVar19 + 1U;
        if (*(uint *)((longlong)param_8 + 0x1c) < iVar19 + 1U) {
          FUN_1492d0738(param_8 + 2,iVar19);
        }
        lVar24 = param_8[2];
        puVar26 = (undefined8 *)(lVar24 + 0x10 + (longlong)iVar19 * 0x20);
        *puVar26 = local_148;
        puVar26[1] = uStack_140;
        puVar25 = (uint *)(lVar24 + (longlong)iVar19 * 0x20);
        *puVar25 = local_158;
        puVar25[1] = uStack_154;
        puVar25[2] = uStack_150;
        puVar25[3] = CONCAT22(uStack_14a,uStack_14c);
        lVar21 = lVar21 + 0xc;
      } while ((longlong)(int)lVar22 * 0xc != lVar21);
      iVar19 = (int)param_8[3];
      lVar22 = (longlong)(iVar19 + -1) * 0x20;
      puVar1 = (undefined4 *)(param_8[2] + lVar22);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      plVar2 = (longlong *)(param_8[2] + 0x10 + lVar22);
      lVar22 = plVar2[1];
      local_248[2] = *plVar2;
      local_248[3] = lVar22;
      *(undefined4 *)local_248 = uVar12;
      *(undefined4 *)((longlong)local_248 + 4) = uVar13;
      *(undefined4 *)(local_248 + 1) = uVar14;
      *(undefined4 *)((longlong)local_248 + 0xc) = uVar15;
      param_3 = local_238;
    }
    if (0 < iVar19) {
      iVar19 = *(int *)((longlong)param_8 + 0xc);
      local_248 = plVar5;
      FUN_145af3853(*param_8,(int)param_8[1]);
      *(undefined4 *)(param_8 + 1) = 0;
      if ((iVar19 < 0) && (*(int *)((longlong)param_8 + 0xc) != 0)) {
        FUN_1474ff534(param_8,0);
      }
      local_168 = (undefined8 *)0x0;
      uStack_160 = 0;
      FUN_146ed49ae(&local_168,(int)param_8[3]);
      plVar5 = local_248;
      local_240 = (ulonglong)*(uint *)(param_8 + 3);
      lVar22 = param_8[2];
      uVar23 = (uint)*(ushort *)(lVar22 + 0xc);
      if (uVar23 == 0xffff) {
        uVar23 = 0xffffffff;
      }
      FUN_14486750c(local_248,&local_158,uVar23,0);
      dVar42 = local_128;
      dVar43 = dStack_130;
      dVar31 = local_138;
      iVar19 = (int)param_8[1];
      *(uint *)(param_8 + 1) = iVar19 + 1U;
      if (*(uint *)((longlong)param_8 + 0xc) < iVar19 + 1U) {
        FUN_1474ff5a6(param_8,iVar19);
      }
      lVar27 = *param_8;
      lVar21 = (longlong)iVar19 * 0x50;
      *(double *)(lVar27 + lVar21) = dVar31;
      ((double *)(lVar27 + lVar21))[1] = dVar43;
      *(double *)(lVar27 + 0x10 + lVar21) = dVar42;
      puVar26 = (undefined8 *)(lVar27 + 0x18 + lVar21);
      *puVar26 = 0;
      puVar26[1] = 0;
      *(undefined8 *)(lVar27 + 0x28 + lVar21) = 0xbff0000000000000;
      puVar26 = (undefined8 *)(lVar27 + 0x30 + lVar21);
      *puVar26 = 0;
      puVar26[1] = 0;
      puVar26 = (undefined8 *)(lVar27 + 0x40 + lVar21);
      *puVar26 = 0;
      puVar26[1] = 0;
      uVar20 = (uint)*(ushort *)(lVar22 + 0xc);
      uVar23 = 0xffffffff;
      if (uVar20 != 0xffff) {
        uVar23 = uVar20;
      }
      FUN_14486750c(plVar5,&local_158,uVar23,0);
      puVar25 = &local_158;
      puVar26 = local_168;
      for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
        *puVar26 = *(undefined8 *)puVar25;
        puVar25 = puVar25 + 2;
        puVar26 = puVar26 + 1;
      }
      local_238 = param_3;
      if (1 < (int)param_8[3]) {
        lVar27 = 1;
        lVar22 = 0;
        do {
          uVar23 = (uint)*(ushort *)(param_8[2] + 0x2c + lVar22);
          if (uVar23 == 0xffff) {
            uVar23 = 0xffffffff;
          }
          FUN_14486750c(plVar5,&local_158,uVar23,0);
          uVar23 = (uint)*(ushort *)(param_8[2] + 0xc + lVar22);
          if (uVar23 == 0xffff) {
            uVar23 = 0xffffffff;
          }
          FUN_14486750c(plVar5,&local_1c8,uVar23,0);
          dVar10 = local_128;
          dVar39 = dStack_130;
          dVar33 = local_138;
          dVar42 = local_198;
          dVar43 = dStack_1a0;
          dVar31 = local_1a8;
          iVar19 = (int)param_8[1];
          *(uint *)(param_8 + 1) = iVar19 + 1U;
          if (*(uint *)((longlong)param_8 + 0xc) < iVar19 + 1U) {
            FUN_1474ff5a6(param_8,iVar19);
          }
          dVar31 = dVar31 - dVar33;
          dVar43 = dVar43 - dVar39;
          dVar42 = dVar42 - dVar10;
          lVar21 = *param_8;
          lVar24 = (longlong)iVar19 * 0x50;
          *(double *)(lVar21 + lVar24) = dVar33;
          ((double *)(lVar21 + lVar24))[1] = dVar39;
          *(double *)(lVar21 + 0x10 + lVar24) = dVar10;
          *(double *)(lVar21 + 0x18 + lVar24) =
               (double)(float)SQRT(dVar31 * dVar31 + dVar43 * dVar43 + dVar42 * dVar42);
          *(int *)(lVar21 + 0x20 + lVar24) = (int)lVar27;
          *(int *)(lVar21 + 0x24 + lVar24) = iVar19;
          *(undefined8 *)(lVar21 + 0x28 + lVar24) = 0xbff0000000000000;
          puVar26 = (undefined8 *)(lVar21 + 0x30 + lVar24);
          *puVar26 = 0;
          puVar26[1] = 0;
          puVar26 = (undefined8 *)(lVar21 + 0x40 + lVar24);
          *puVar26 = 0;
          puVar26[1] = 0;
          puVar25 = &local_158;
          puVar26 = local_168 + (longlong)iVar19 * 0xc;
          for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
            *puVar26 = *(undefined8 *)puVar25;
            puVar25 = puVar25 + 2;
            puVar26 = puVar26 + 1;
          }
          lVar27 = lVar27 + 1;
          lVar22 = lVar22 + 0x20;
        } while (lVar27 < (int)param_8[3]);
      }
      uVar4 = local_238[5];
      local_158 = (uint)local_238[4];
      uStack_154 = (uint)((ulonglong)local_238[4] >> 0x20);
      uStack_150 = (uint)uVar4;
      uStack_14c = (undefined2)((ulonglong)uVar4 >> 0x20);
      uStack_14a = (undefined2)((ulonglong)uVar4 >> 0x30);
      local_148 = local_238[6];
      local_268 = param_7;
      cVar18 = FUN_14690ead1(param_8,&local_158,param_8,SUB84((double)param_4,0));
      plVar5 = local_248;
      auVar17 = _DAT_149935300;
      auVar16 = _DAT_149934d80;
      if (cVar18 != '\0') {
        local_22c = (int)local_240 - 1;
        if (1 < (int)local_240) {
          uVar28 = (ulonglong)local_22c;
          lVar22 = 0;
          do {
            lVar27 = *param_8;
            lVar21 = param_8[2];
            iVar19 = *(int *)(lVar27 + 0x20 + lVar22);
            uVar23 = (uint)*(ushort *)
                            (lVar21 + 0xc + (longlong)*(int *)(lVar27 + 0x70 + lVar22) * 0x20);
            if (uVar23 == 0xffff) {
              uVar23 = 0xffffffff;
            }
            FUN_14486750c(plVar5,&local_158,uVar23,0);
            dVar42 = local_128;
            dVar31 = dStack_130;
            dVar43 = local_138;
            uVar23 = (uint)*(ushort *)(lVar21 + 0xc + (longlong)iVar19 * 0x20);
            if (uVar23 == 0xffff) {
              uVar23 = 0xffffffff;
            }
            FUN_14486750c(plVar5,&local_1c8,uVar23,0);
            dVar42 = dVar42 - local_198;
            dVar43 = dVar43 - local_1a8;
            dVar31 = dVar31 - dStack_1a0;
            dVar30 = 1.0 / SQRT(dVar42 * dVar42 + dVar43 * dVar43 + dVar31 * dVar31);
            dVar42 = dVar42 * dVar30;
            dVar31 = dVar31 * dVar30;
            dVar32 = *(double *)(lVar27 + 0x60 + lVar22) - *(double *)(lVar27 + 0x10 + lVar22);
            dVar33 = *(double *)(lVar27 + 0x58 + lVar22) - *(double *)(lVar27 + 8 + lVar22);
            dVar39 = *(double *)(lVar27 + 0x50 + lVar22) - *(double *)(lVar27 + lVar22);
            dVar30 = dVar30 * dVar43;
            dVar36 = 1.0 / SQRT(dVar32 * dVar32 + dVar39 * dVar39 + dVar33 * dVar33);
            dVar32 = dVar32 * dVar36;
            dVar33 = dVar33 * dVar36;
            dVar36 = dVar36 * dVar39;
            dVar43 = dVar30 * dVar33 - dVar36 * dVar31;
            dVar10 = dVar42 * dVar36 - dVar32 * dVar30;
            dVar39 = dVar31 * dVar32 - dVar33 * dVar42;
            dVar40 = dVar43 * dVar43 + dVar39 * dVar39 + dVar10 * dVar10;
            if (((dVar40 != 1.0) || (dVar8 = dVar43, dVar11 = dVar10, dVar9 = dVar39, NAN(dVar40)))
               && (dVar8 = DAT_14c8464f0, dVar11 = DAT_14c8464e8, dVar9 = DAT_14c8464e0,
                  9.99999993922529e-09 <= dVar40)) {
              dVar40 = 1.0 / SQRT(dVar40);
              dVar8 = dVar43 * dVar40;
              dVar11 = dVar10 * dVar40;
              dVar9 = dVar39 * dVar40;
            }
            dVar43 = dVar42 * dVar32 + dVar30 * dVar36 + dVar31 * dVar33;
            dVar31 = dVar43;
            if (1.0 <= dVar43) {
              dVar31 = 1.0;
            }
            dVar31 = acos((double)(-(ulonglong)(dVar43 < -1.0) & 0xbff0000000000000 |
                                  ~-(ulonglong)(dVar43 < -1.0) & (ulonglong)dVar31));
            dVar43 = sin((double)(float)dVar31 * 0.5);
            dVar31 = cos((double)(float)dVar31 * 0.5);
            dVar9 = dVar9 * dVar43;
            dVar11 = dVar11 * dVar43;
            dVar8 = dVar8 * dVar43;
            lVar21 = (longlong)*(int *)(lVar27 + 0x24 + lVar22);
            dVar33 = (double)local_168[lVar21 * 0xc];
            dVar39 = (double)(local_168 + lVar21 * 0xc)[1];
            dVar10 = (double)local_168[lVar21 * 0xc + 2];
            dVar30 = (double)(local_168 + lVar21 * 0xc + 2)[1];
            dVar43 = dVar39 * dVar8 * -1.0 +
                     dVar10 * dVar11 + dVar9 * dVar30 * 1.0 + dVar31 * dVar33;
            dVar42 = dVar33 * dVar8 * 1.0 +
                     dVar30 * dVar11 + dVar9 * dVar10 * -1.0 + dVar31 * dVar39;
            dVar32 = dVar30 * dVar8 * 1.0 +
                     ((dVar9 * dVar39 * 1.0 + dVar31 * dVar10) - dVar11 * dVar33);
            dVar31 = dVar10 * dVar8 * -1.0 +
                     ((dVar9 * dVar33 * -1.0 + dVar31 * dVar30) - dVar11 * dVar39);
            dVar33 = dVar32 * dVar32 + dVar43 * dVar43;
            dVar39 = dVar31 * dVar31 + dVar42 * dVar42;
            auVar34._0_8_ = dVar33 + dVar39;
            auVar34._8_8_ = dVar33 + dVar39;
            uVar29 = -(ulonglong)(1e-08 <= auVar34._8_8_);
            auVar35 = sqrtpd(auVar34,auVar34);
            auVar37 = divpd(auVar16,auVar35);
            auVar38._0_8_ = auVar37._0_8_ * dVar32;
            auVar38._8_8_ = auVar37._8_8_ * dVar31;
            uVar7 = (ulonglong)(dVar42 * auVar37._8_8_) & uVar29;
            auVar35._8_4_ = (int)uVar29;
            auVar35._0_8_ = -(ulonglong)(1e-08 <= auVar34._0_8_);
            auVar35._12_4_ = (int)(uVar29 >> 0x20);
            auVar35 = blendvpd(auVar17,auVar38,auVar35);
            auVar6._8_4_ = (int)uVar7;
            auVar6._0_8_ = (ulonglong)(dVar43 * auVar37._0_8_) &
                           -(ulonglong)(1e-08 <= auVar34._0_8_);
            auVar6._12_4_ = (int)(uVar7 >> 0x20);
            *(undefined1 (*) [16])(local_168 + lVar21 * 0xc) = auVar6;
            *(undefined1 (*) [16])(local_168 + lVar21 * 0xc + 2) = auVar35;
            puVar1 = (undefined4 *)(lVar27 + lVar22);
            uVar12 = puVar1[1];
            uVar13 = puVar1[2];
            uVar14 = puVar1[3];
            uVar4 = *(undefined8 *)(lVar27 + 0x10 + lVar22);
            puVar26 = local_168 + lVar21 * 0xc + 4;
            *(undefined4 *)puVar26 = *puVar1;
            *(undefined4 *)((longlong)puVar26 + 4) = uVar12;
            *(undefined4 *)(puVar26 + 1) = uVar13;
            *(undefined4 *)((longlong)puVar26 + 0xc) = uVar14;
            local_168[lVar21 * 0xc + 6] = uVar4;
            (local_168 + lVar21 * 0xc + 6)[1] = 0;
            lVar22 = lVar22 + 0x50;
          } while (uVar28 * 0x50 != lVar22);
        }
        puVar3 = local_168;
        lVar21 = (longlong)(int)local_22c * 0x50;
        lVar22 = *param_8;
        lVar27 = param_8[2];
        iVar19 = *(int *)(lVar22 + 0x20 + lVar21);
        lVar24 = (longlong)*(int *)(lVar22 + 0x24 + lVar21);
        puVar1 = (undefined4 *)(lVar22 + lVar21);
        uVar12 = puVar1[1];
        uVar13 = puVar1[2];
        uVar14 = puVar1[3];
        uVar4 = *(undefined8 *)(lVar22 + 0x10 + lVar21);
        puVar26 = local_168 + lVar24 * 0xc + 4;
        *(undefined4 *)puVar26 = *puVar1;
        *(undefined4 *)((longlong)puVar26 + 4) = uVar12;
        *(undefined4 *)(puVar26 + 1) = uVar13;
        *(undefined4 *)((longlong)puVar26 + 0xc) = uVar14;
        local_168[lVar24 * 0xc + 6] = uVar4;
        (local_168 + lVar24 * 0xc + 6)[1] = 0;
        uVar20 = (uint)*(ushort *)(lVar27 + 0xc + (longlong)iVar19 * 0x20);
        uVar23 = 0xffffffff;
        if (uVar20 != 0xffff) {
          uVar23 = uVar20;
        }
        FUN_14486750c(local_248,&local_158,uVar23,0);
        plVar5 = local_248;
        puVar26 = puVar3 + lVar24 * 0xc;
        *puVar26 = CONCAT44(uStack_154,local_158);
        puVar26[1] = CONCAT26(uStack_14a,CONCAT24(uStack_14c,uStack_150));
        puVar3 = puVar3 + lVar24 * 0xc + 2;
        *puVar3 = local_148;
        puVar3[1] = uStack_140;
        if (ABS(param_5 + -1.0) <= 1e-08) {
          if (0 < (int)local_240) {
            lVar22 = local_240 * 0x50;
            lVar27 = 0;
            do {
              uVar23 = (uint)*(ushort *)
                              (param_8[2] + 0xc +
                              (longlong)*(int *)(*param_8 + 0x20 + lVar27) * 0x20);
              if (uVar23 == 0xffff) {
                uVar23 = 0xffffffff;
              }
              puVar26 = local_168 + (longlong)*(int *)(*param_8 + 0x24 + lVar27) * 0xc;
              puVar25 = &local_158;
              for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
                *(undefined8 *)puVar25 = *puVar26;
                puVar26 = puVar26 + 1;
                puVar25 = puVar25 + 2;
              }
              local_258 = 0;
              local_260 = 0;
              local_268 = CONCAT31(local_268._1_3_,param_6);
              FUN_144831e8e(plVar5,uVar23,&local_158,0);
              lVar27 = lVar27 + 0x50;
            } while (lVar22 != lVar27);
          }
        }
        else if (0 < (int)local_240) {
          fVar41 = param_5;
          if (1.0 <= param_5) {
            fVar41 = 1.0;
          }
          if (fVar41 <= 0.0) {
            fVar41 = 0.0;
          }
          local_240 = local_240 * 0x50;
          uVar28 = 0;
          do {
            lVar22 = *param_8;
            lVar27 = param_8[2];
            lVar21 = (longlong)*(int *)(lVar22 + 0x20 + uVar28) * 0x20;
            uVar23 = (uint)*(ushort *)(lVar27 + 0xc + lVar21);
            if (uVar23 == 0xffff) {
              uVar23 = 0xffffffff;
            }
            FUN_14486750c(plVar5,&local_1c8,uVar23,0);
            FUN_14915b8da(local_228,&local_1c8,
                          local_168 + (longlong)*(int *)(lVar22 + 0x24 + uVar28) * 0xc,fVar41);
            uVar23 = (uint)*(ushort *)(lVar27 + 0xc + lVar21);
            if (uVar23 == 0xffff) {
              uVar23 = 0xffffffff;
            }
            puVar26 = local_228;
            puVar25 = &local_158;
            for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
              *(undefined8 *)puVar25 = *puVar26;
              puVar26 = puVar26 + 1;
              puVar25 = puVar25 + 2;
            }
            local_258 = 0;
            local_260 = 0;
            local_268 = CONCAT31(local_268._1_3_,param_6);
            FUN_144831e8e(plVar5,uVar23);
            uVar28 = uVar28 + 0x50;
          } while (local_240 != uVar28);
        }
      }
      plVar5 = local_248;
      if (param_9 != '\0') {
        if (ABS(param_5 + -1.0) <= 1e-08) {
          uVar23 = 0xffffffff;
          if (*(ushort *)((longlong)param_8 + 0x2c) != 0xffff) {
            uVar23 = (uint)*(ushort *)((longlong)param_8 + 0x2c);
          }
          puVar26 = local_238;
          puVar25 = &local_158;
          for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
            *(undefined8 *)puVar25 = *puVar26;
            puVar26 = puVar26 + 1;
            puVar25 = puVar25 + 2;
          }
        }
        else {
          if (1.0 <= param_5) {
            param_5 = 1.0;
          }
          if (param_5 <= 0.0) {
            param_5 = 0.0;
          }
          uVar23 = (uint)*(ushort *)((longlong)param_8 + 0x2c);
          if (*(ushort *)((longlong)param_8 + 0x2c) == 0xffff) {
            uVar23 = 0xffffffff;
          }
          FUN_14486750c(local_248,&local_1c8,uVar23,0);
          FUN_14915b8da(local_228,&local_1c8,local_238,param_5);
          uVar23 = (uint)*(ushort *)((longlong)param_8 + 0x2c);
          if (*(ushort *)((longlong)param_8 + 0x2c) == 0xffff) {
            uVar23 = 0xffffffff;
          }
          puVar26 = local_228;
          puVar25 = &local_158;
          for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
            *(undefined8 *)puVar25 = *puVar26;
            puVar26 = puVar26 + 1;
            puVar25 = puVar25 + 2;
          }
        }
        local_258 = 0;
        local_260 = 0;
        local_268 = CONCAT31(local_268._1_3_,param_6);
        FUN_144831e8e(plVar5,uVar23,&local_158,0);
      }
      if (local_168 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_149269257:
  if ((local_f0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149269ea0 FUN_149269ea0 body=25 status=ok
// SIG undefined FUN_149269ea0(void)

undefined8 FUN_149269ea0(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149269eba FUN_149269eba body=214 status=ok
// SIG undefined FUN_149269eba(void)

undefined8 FUN_149269eba(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [496];
  undefined1 auStack_108 [16];
  undefined8 auStack_f8 [12];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_318;
  FUN_149269f92(local_2f8);
  FUN_1444888de(auStack_108,param_1 + 0x1f0);
  puVar2 = (undefined8 *)(param_1 + 0x200);
  puVar3 = auStack_f8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_98 = *(undefined4 *)(param_1 + 0x260);
  local_94 = *(undefined4 *)(param_1 + 0x264);
  local_90 = *(undefined1 *)(param_1 + 0x268);
  local_8c = *(undefined4 *)(param_1 + 0x26c);
  FUN_14926a040(param_2,local_2f8);
  FUN_14926a114(local_2f8);
  if ((local_30 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149269f92 FUN_149269f92 body=174 status=ok
// SIG undefined FUN_149269f92(void)

undefined8 * FUN_149269f92(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bc00ad0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined2 *)((longlong)param_1 + 0x29c) = 0xffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  param_1[0x4c] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x4d) = 1;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 10;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x56) = 1;
  return param_1;
}



// FUNCTION 14926a040 FUN_14926a040 body=211 status=ok
// SIG undefined FUN_14926a040(void)

undefined8 * FUN_14926a040(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_146709a30();
  param_1[2] = uVar1;
  uVar1 = FUN_146709e1c();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14926a114 FUN_14926a114 body=74 status=ok
// SIG undefined FUN_14926a114(void)

void FUN_14926a114(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc00ad0;
  FUN_1492bd1c6(param_1 + 0x4e);
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 14926a162 FUN_14926a162 body=475 status=ok
// SIG undefined FUN_14926a162(void)

void FUN_14926a162(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined1 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar6 = (undefined8 *)*param_2;
  local_98 = *puVar6;
  local_a0 = puVar6[4];
  local_a8 = puVar6[8];
  local_ad = *(undefined1 *)puVar6[0xc];
  uVar1 = *(undefined4 *)puVar6[0x10];
  uVar2 = *(undefined4 *)puVar6[0x14];
  local_ac = *(undefined4 *)puVar6[0x18];
  uVar7 = puVar6[0x1c];
  uVar8 = puVar6[0x20];
  uVar9 = puVar6[0x24];
  puVar10 = (undefined8 *)puVar6[0x28];
  lVar12 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar4 = *(undefined1 *)puVar6[0x2c];
  uVar3 = *(undefined4 *)puVar6[0x30];
  uVar5 = *(undefined1 *)puVar6[0x34];
  uVar11 = puVar6[0x38];
  local_b8 = FUN_144828ac0(puVar6 + 0x3c,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar12 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar12 * 0x14));
  local_90 = *puVar10;
  local_e0 = &local_90;
  local_88 = *(undefined4 *)(puVar10 + 1);
  local_100 = local_ac;
  local_118 = local_ad;
  local_110 = uVar1;
  local_108 = uVar2;
  local_f8 = uVar7;
  local_f0 = uVar8;
  local_e8 = uVar9;
  local_d8 = uVar4;
  local_d0 = uVar3;
  local_c8 = uVar5;
  local_c0 = uVar11;
  FUN_14926a498(*(undefined8 *)(param_1 + 0xc0),local_98,local_a0,local_a8);
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926a346 FUN_14926a346 body=40 status=ok
// SIG undefined FUN_14926a346(void)

void FUN_14926a346(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14926a36e(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 14926a36e FUN_14926a36e body=296 status=ok
// SIG undefined FUN_14926a36e(void)

void FUN_14926a36e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined1 local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = *(undefined8 *)(param_1 + 0x2b8);
  local_90 = &local_58;
  local_50 = *(undefined4 *)(param_1 + 0x2c0);
  local_68 = param_1 + 0x370;
  local_70 = param_1 + 0x2e0;
  local_78 = *(undefined1 *)(param_1 + 0x2d0);
  local_80 = *(undefined4 *)(param_1 + 0x2cc);
  local_88 = *(undefined1 *)(param_1 + 0x2c8);
  local_98 = param_1 + 0x2a0;
  local_a0 = param_1 + 0x288;
  local_a8 = param_1 + 0x270;
  local_b0 = *(undefined4 *)(param_1 + 0x26c);
  local_b8 = *(undefined4 *)(param_1 + 0x268);
  local_c0 = *(undefined4 *)(param_1 + 0x264);
  local_c8 = *(undefined1 *)(param_1 + 0x260);
  FUN_14926a498(param_2,param_1 + 0x1f0,param_1 + 0x1f8,param_1 + 0x200);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926a498 FUN_14926a498 body=502 status=ok
// SIG undefined FUN_14926a498(void)

void FUN_14926a498(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined1 param_15,undefined8 param_16,
                  longlong param_17)

{
  longlong lVar1;
  undefined1 auStack_128 [32];
  uint local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined1 local_9c;
  undefined8 local_98;
  longlong local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_17 + 0x50) == 0) {
    local_9c = 1;
    local_98 = *param_3;
    local_a8 = 1;
    local_a4 = *param_2;
    local_108 = local_108 & 0xffffff00;
    FUN_1491f31fc(&local_90,*(undefined8 *)(param_1 + 0x1b0));
    lVar1 = local_90;
  }
  else {
    local_88 = 0;
    lVar1 = 0;
  }
  local_b0 = param_17;
  local_b8 = param_16;
  local_c0 = param_15;
  local_c8 = param_14;
  local_d0 = param_13;
  local_d8 = param_12;
  local_e0 = param_11;
  local_e8 = param_10;
  local_f0 = param_9;
  local_f8 = param_8;
  local_100 = param_7;
  local_108 = param_6;
  local_90 = lVar1;
  FUN_14926acfa(param_1,&local_90,param_4,param_5);
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926a690 FUN_14926a690 body=469 status=ok
// SIG undefined FUN_14926a690(void)

void FUN_14926a690(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b5;
  undefined4 local_b4;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  param_2 = (longlong *)*param_2;
  puVar6 = (undefined8 *)*param_2;
  local_a8 = param_2[4];
  local_b5 = *(undefined1 *)param_2[8];
  uVar1 = *(undefined4 *)param_2[0xc];
  uVar2 = *(undefined4 *)param_2[0x10];
  local_b4 = *(undefined4 *)param_2[0x14];
  local_b0 = param_2[0x18];
  lVar7 = param_2[0x1c];
  lVar8 = param_2[0x20];
  puVar9 = (undefined8 *)param_2[0x24];
  uVar4 = *(undefined1 *)param_2[0x28];
  uVar3 = *(undefined4 *)param_2[0x2c];
  uVar5 = *(undefined1 *)param_2[0x30];
  lVar10 = param_2[0x34];
  lVar11 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_c0 = FUN_144828ac0(param_2 + 0x38,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar11 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar11 * 0x14));
  local_a0 = *puVar9;
  local_e8 = &local_a0;
  local_98 = *(undefined4 *)(puVar9 + 1);
  local_90 = *puVar6;
  local_88 = *(undefined4 *)(puVar6 + 1);
  local_100 = local_b0;
  local_108 = local_b4;
  local_118 = uVar1;
  local_110 = uVar2;
  local_f8 = lVar7;
  local_f0 = lVar8;
  local_e0 = uVar4;
  local_d8 = uVar3;
  local_d0 = uVar5;
  local_c8 = lVar10;
  FUN_14926acfa(*(undefined8 *)(param_1 + 0xc0),&local_90,local_a8,
                CONCAT31((int3)((uint)local_88 >> 8),local_b5));
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926a86e FUN_14926a86e body=40 status=ok
// SIG undefined FUN_14926a86e(void)

void FUN_14926a86e(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14926a896(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 14926a896 FUN_14926a896 body=301 status=ok
// SIG undefined FUN_14926a896(void)

void FUN_14926a896(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = *(undefined8 *)(param_1 + 0x2b8);
  local_98 = &local_68;
  local_60 = *(undefined4 *)(param_1 + 0x2c0);
  local_70 = param_1 + 0x370;
  local_78 = param_1 + 0x2e0;
  local_80 = *(undefined1 *)(param_1 + 0x2d0);
  local_88 = *(undefined4 *)(param_1 + 0x2cc);
  local_90 = *(undefined1 *)(param_1 + 0x2c8);
  local_a0 = param_1 + 0x2a0;
  local_a8 = param_1 + 0x288;
  local_b0 = param_1 + 0x270;
  local_b8 = *(undefined4 *)(param_1 + 0x26c);
  local_c0 = *(undefined4 *)(param_1 + 0x268);
  local_c8 = *(undefined4 *)(param_1 + 0x264);
  local_58 = *(undefined8 *)(param_1 + 0x1f0);
  local_50 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_14926acfa(param_2,&local_58,param_1 + 0x200,*(undefined1 *)(param_1 + 0x260));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926a9c4 FUN_14926a9c4 body=470 status=ok
// SIG undefined FUN_14926a9c4(void)

void FUN_14926a9c4(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 *local_e8;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b5;
  undefined4 local_b4;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  param_2 = (longlong *)*param_2;
  puVar6 = (undefined8 *)*param_2;
  local_a8 = param_2[4];
  local_b5 = *(undefined1 *)param_2[8];
  uVar1 = *(undefined4 *)param_2[0xc];
  uVar2 = *(undefined4 *)param_2[0x10];
  local_b4 = *(undefined4 *)param_2[0x14];
  local_b0 = param_2[0x18];
  lVar7 = param_2[0x1c];
  lVar8 = param_2[0x20];
  puVar9 = (undefined8 *)param_2[0x24];
  uVar4 = *(undefined1 *)param_2[0x28];
  uVar3 = *(undefined4 *)param_2[0x2c];
  uVar5 = *(undefined1 *)param_2[0x30];
  lVar10 = param_2[0x34];
  lVar11 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_c0 = FUN_144828ac0(param_2 + 0x38,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar11 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar11 * 0x14));
  local_90 = *puVar9;
  local_e8 = &local_90;
  local_88 = *(undefined4 *)(puVar9 + 1);
  local_a0 = *puVar6;
  local_98 = *(undefined4 *)(puVar6 + 1);
  local_100 = local_b0;
  local_108 = local_b4;
  local_118 = uVar1;
  local_110 = uVar2;
  local_f8 = lVar7;
  local_f0 = lVar8;
  local_e0 = uVar4;
  local_d8 = uVar3;
  local_d0 = uVar5;
  local_c8 = lVar10;
  FUN_14926acfa(*(undefined8 *)(param_1 + 0xc0),&local_a0,local_a8,local_b5);
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926aba4 FUN_14926aba4 body=40 status=ok
// SIG undefined FUN_14926aba4(void)

void FUN_14926aba4(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14926abcc(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 14926abcc FUN_14926abcc body=300 status=ok
// SIG undefined FUN_14926abcc(void)

void FUN_14926abcc(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = *(undefined8 *)(param_1 + 0x1f0);
  local_48 = *(undefined4 *)(param_1 + 0x1f8);
  local_60 = *(undefined8 *)(param_1 + 0x2b8);
  local_98 = &local_60;
  local_58 = *(undefined4 *)(param_1 + 0x2c0);
  local_70 = param_1 + 0x370;
  local_78 = param_1 + 0x2e0;
  local_80 = *(undefined1 *)(param_1 + 0x2d0);
  local_88 = *(undefined4 *)(param_1 + 0x2cc);
  local_90 = *(undefined1 *)(param_1 + 0x2c8);
  local_a0 = param_1 + 0x2a0;
  local_a8 = param_1 + 0x288;
  local_b0 = param_1 + 0x270;
  local_b8 = *(undefined4 *)(param_1 + 0x26c);
  local_c0 = *(undefined4 *)(param_1 + 0x268);
  local_c8 = *(undefined4 *)(param_1 + 0x264);
  FUN_14926acfa(param_2,&local_50,param_1 + 0x200,*(undefined1 *)(param_1 + 0x260));
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926acfa FUN_14926acfa body=11781 status=ok
// SIG undefined FUN_14926acfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14926acfa(longlong param_1,longlong *param_2,longlong param_3,undefined1 param_4,
                  float param_5,float param_6,float param_7,double *param_8,double *param_9,
                  double *param_10,longlong *param_11,undefined1 param_12,float param_13,
                  byte param_14,char *param_15,float *param_16)

{
  float *pfVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  byte bVar12;
  uint uVar13;
  undefined4 uVar14;
  double *pdVar15;
  int *piVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  double *pdVar24;
  int **ppiVar25;
  undefined1 *puVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined8 *puVar30;
  int *piVar31;
  undefined8 *puVar32;
  double *pdVar33;
  int *piVar34;
  int *piVar35;
  longlong lVar36;
  double *pdVar37;
  int *piVar38;
  int *piVar39;
  longlong lVar40;
  longlong lVar41;
  int *piVar42;
  bool bVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar58;
  undefined1 auVar57 [16];
  double dVar59;
  double dVar60;
  void *pvVar61;
  double dVar62;
  double dVar63;
  undefined1 auVar64 [16];
  double dVar65;
  undefined1 auVar67 [16];
  double dVar66;
  double dVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar73;
  double dVar74;
  double dVar75;
  undefined1 auVar76 [16];
  double dVar80;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar81 [16];
  int *piVar82;
  undefined1 auVar83 [16];
  double dVar84;
  double dVar85;
  undefined1 auVar86 [12];
  void *pvVar87;
  void *pvVar88;
  undefined1 auVar89 [16];
  float fVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  float fVar94;
  float fVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  double dVar100;
  double dVar101;
  undefined1 auStack_688 [32];
  char *local_668;
  char *local_660;
  uint local_658;
  undefined4 local_650;
  longlong local_640;
  longlong local_638;
  longlong local_630;
  float *local_628;
  float *local_620;
  undefined1 local_618 [16];
  float *local_608;
  double dStack_600;
  float *local_5f8;
  float *local_5f0;
  undefined1 local_5e8 [24];
  float *local_5d0;
  undefined1 local_5c8 [16];
  size_t local_5b0;
  void *local_5a8;
  ulonglong uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  int *local_588;
  undefined8 uStack_580;
  undefined1 local_578 [32];
  undefined4 local_558;
  undefined8 local_550;
  undefined4 local_548;
  char local_544 [4];
  undefined2 uStack_540;
  ushort uStack_53e;
  undefined4 uStack_53c;
  longlong local_538;
  undefined8 uStack_530;
  void *local_528;
  ulonglong uStack_520;
  void *local_518;
  undefined8 uStack_510;
  double local_508;
  double dStack_500;
  undefined8 local_4f8;
  float fStack_4f0;
  undefined2 uStack_4ec;
  undefined2 uStack_4ea;
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  double local_498;
  double dStack_490;
  double local_488;
  void *local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
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
  undefined1 local_178 [12];
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_688;
  lVar40 = *(longlong *)(param_1 + 0x1b0);
  if (lVar40 == 0) goto LAB_14926ae03;
  local_5f8 = param_16 + 2;
  local_5e8._0_8_ = param_16 + 10;
  pfVar1 = param_16 + 0xe;
  local_608 = param_16 + 0x12;
  local_620 = param_16 + 0x16;
  local_628 = param_16 + 0x1a;
  local_5f0 = param_16 + 0x1e;
  local_5d0 = param_16 + 0x22;
  fVar73 = param_16[0x14];
  if (fVar73 == 0.0) {
    if (1 < (int)param_2[1]) {
      param_16[0xc] = 0.0;
      if ((int)param_16[0xd] < 0) {
        FUN_1447a8aa0(param_16 + 10,0);
      }
      param_16[4] = 0.0;
      if ((int)param_16[5] < 0) {
        FUN_1447a8aa0(local_5f8,0);
      }
      param_16[8] = 0.0;
      if ((int)param_16[9] < 0) {
        FUN_14482f6fa(param_16 + 6,0);
      }
      param_16[0x10] = 0.0;
      if ((int)param_16[0x11] < 0) {
        FUN_14482f6fa(pfVar1,0);
      }
      param_16[0x18] = 0.0;
      if ((int)param_16[0x19] < 0) {
        FUN_14481578e(local_620,0);
      }
      param_16[0x1c] = 0.0;
      if ((int)param_16[0x1d] < 0) {
        FUN_14481578e(local_628,0);
      }
      local_5c8._0_8_ = param_16 + 6;
      param_16[0x20] = 0.0;
      local_638 = param_3;
      if ((int)param_16[0x21] < 0) {
        FUN_14482f6fa(local_5f0,0);
      }
      local_618[0] = param_4;
      param_16[0x24] = 0.0;
      local_640 = lVar40;
      local_630 = param_1;
      if ((int)param_16[0x25] < 0) {
        FUN_1401a2688(local_5d0,0);
      }
      *param_16 = 0.0;
      lVar40 = param_2[1];
      if ((longlong)(int)lVar40 != 0) {
        lVar41 = *param_2;
        lVar29 = 0;
        do {
          local_178._8_4_ = *(undefined4 *)(lVar41 + 8 + lVar29);
          local_178._0_8_ = *(undefined8 *)(lVar41 + lVar29);
          local_4f8._0_4_ = (uint)local_4f8 & 0xffffff00;
          local_4f8._4_4_ = 0;
          fStack_4f0 = 0.0;
          uStack_4ec = 0xffff;
          local_4e8._0_4_ = 0xffffffff;
          FUN_144828dba(&local_4f8,local_178,local_640);
          fVar73 = param_16[0x14];
          param_16[0x14] = (float)((int)fVar73 + 1);
          if ((uint)param_16[0x15] < (uint)((int)fVar73 + 1)) {
            FUN_1492d0738(local_608,fVar73);
          }
          lVar36 = *(longlong *)local_608;
          puVar20 = (undefined8 *)(lVar36 + 0x10 + (longlong)(int)fVar73 * 0x20);
          *puVar20 = local_4e8._0_8_;
          puVar20[1] = local_4e8._8_8_;
          puVar20 = (undefined8 *)(lVar36 + (longlong)(int)fVar73 * 0x20);
          *puVar20 = CONCAT44(local_4f8._4_4_,(uint)local_4f8);
          puVar20[1] = CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,fStack_4f0));
          lVar29 = lVar29 + 0xc;
        } while ((longlong)(int)lVar40 * 0xc != lVar29);
      }
      param_1 = local_630;
      param_3 = local_638;
      lVar40 = local_640;
      param_4 = local_618[0];
      if ((int)param_16[0x14] < 2) goto LAB_14926ae03;
      FUN_146ba0be8(local_5f8,param_16[0x14],1);
      FUN_144aa29e6(local_5c8._0_8_,param_16[0x14],1);
      **(undefined4 **)(param_16 + 6) = 0;
      uVar28 = (ulonglong)(uint)param_16[0x14];
      if (1 < (int)param_16[0x14]) {
        lVar41 = 1;
        lVar29 = 0;
        do {
          uVar13 = (uint)*(ushort *)(*(longlong *)(param_16 + 0x12) + 0xc + lVar29);
          if (uVar13 == 0xffff) {
            uVar13 = 0xffffffff;
          }
          FUN_14486750c(lVar40,&local_4f8,uVar13,0);
          uVar8 = local_4d8._0_8_;
          uVar9 = local_4d8._8_8_;
          uVar10 = local_4c8._0_8_;
          uVar13 = (uint)*(ushort *)(*(longlong *)(param_16 + 0x12) + 0x2c + lVar29);
          if (uVar13 == 0xffff) {
            uVar13 = 0xffffffff;
          }
          FUN_14486750c(lVar40,&local_4f8,uVar13,0);
          *(float *)(*(longlong *)(param_16 + 6) + lVar41 * 4) =
               (float)SQRT(((double)uVar10 - (double)local_4c8._0_8_) *
                           ((double)uVar10 - (double)local_4c8._0_8_) +
                           ((double)uVar8 - (double)local_4d8._0_8_) *
                           ((double)uVar8 - (double)local_4d8._0_8_) +
                           ((double)uVar9 - (double)local_4d8._8_8_) *
                           ((double)uVar9 - (double)local_4d8._8_8_));
          *param_16 = *(float *)(*(longlong *)(param_16 + 6) + lVar41 * 4) + *param_16;
          lVar41 = lVar41 + 1;
          uVar28 = (ulonglong)(int)param_16[0x14];
          lVar29 = lVar29 + 0x20;
        } while (lVar41 < (longlong)uVar28);
        param_3 = local_638;
        param_1 = local_630;
        param_4 = local_618[0];
      }
      FUN_144a8c360(local_620,uVar28,1);
      FUN_144a8c360(local_628,param_16[0x14],1);
      FUN_144aa29e6(local_5f0,param_16[0x14],1);
      FUN_149268aee(local_5d0,param_16[0x14],1);
      lVar41 = param_11[1];
      if ((longlong)(int)lVar41 < 2) goto LAB_14926daf0;
      local_518 = (void *)0x0;
      uStack_510 = 0.0;
      local_588 = (int *)0x0;
      uStack_580 = 0.0;
      lVar40 = *param_11;
      lVar29 = 0;
      do {
        iVar18 = (int)uStack_580;
        uVar13 = (int)uStack_580 + 1;
        uStack_580 = (double)CONCAT44(uStack_580._4_4_,uVar13);
        if (uStack_580._4_4_ < uVar13) {
          FUN_1446f48e2(&local_588);
        }
        local_588[iVar18] = iVar18;
        fVar73 = *(float *)(lVar40 + 0x20 + lVar29);
        auVar86._4_8_ = 0;
        auVar86._0_4_ = fVar73;
        if (1.0 <= fVar73) {
          auVar86 = ZEXT412(0x3f800000);
        }
        lVar36 = (longlong)(int)uStack_510;
        uVar13 = (int)uStack_510 + 1;
        uStack_510 = (double)CONCAT44(uStack_510._4_4_,uVar13);
        if (uStack_510._4_4_ < uVar13) {
          FUN_14475e4ac(&local_518);
        }
        pvVar61 = local_518;
        if (auVar86._0_4_ <= 0.0) {
          auVar7._8_4_ = 0;
          auVar7._0_8_ = auVar86._4_8_;
          auVar86 = auVar7 << 0x20;
        }
        *(int *)((longlong)local_518 + lVar36 * 4) = auVar86._0_4_;
        lVar29 = lVar29 + 0x30;
      } while ((longlong)(int)lVar41 * 0x30 != lVar29);
      lVar40 = (longlong)(int)uStack_510;
      local_5a8 = (void *)0x0;
      uStack_5a0 = CONCAT44(uStack_5a0._4_4_,(int)uStack_510);
      if (lVar40 == 0) {
        uStack_5a0 = (ulonglong)uStack_510 & 0xffffffff;
        uStack_520 = 0;
LAB_14926d3cb:
        uStack_520 = uStack_520 & 0xffffffff;
        pvVar61 = (void *)0x0;
        param_1 = local_630;
      }
      else {
        FUN_1447c510a(&local_5a8,(ulonglong)uStack_510 & 0xffffffff,0);
        memcpy(local_5a8,pvVar61,lVar40 << 2);
        pvVar61 = local_5a8;
        param_1 = local_630;
        lVar40 = (longlong)(int)uStack_5a0;
        local_528 = (void *)0x0;
        uStack_520 = CONCAT44(uStack_520._4_4_,(int)uStack_5a0);
        if (lVar40 == 0) goto LAB_14926d3cb;
        FUN_1447c510a(&local_528,uStack_5a0 & 0xffffffff,0);
        memcpy(local_528,pvVar61,lVar40 << 2);
        pvVar61 = local_528;
      }
      piVar82 = local_588;
      iVar27 = (int)uStack_520;
      local_528 = (void *)0x0;
      uStack_520 = 0;
      iVar18 = (int)uStack_580;
      lVar40 = (longlong)(int)uStack_580;
      if (1 < lVar40) {
        local_5c8._0_4_ = iVar27;
        memset(local_4e8,0,0x2f0);
        local_4f8._0_4_ = (uint)piVar82;
        local_4f8._4_4_ = (undefined4)((ulonglong)piVar82 >> 0x20);
        piVar82 = piVar82 + lVar40 + -1;
        fStack_4f0 = SUB84(piVar82,0);
        uStack_4ec = (undefined2)((ulonglong)piVar82 >> 0x20);
        uStack_4ea = (undefined2)((ulonglong)piVar82 >> 0x30);
        fVar73 = logf((float)iVar18);
        local_4e8._0_4_ = (int)(longlong)(fVar73 + fVar73);
        local_5b0 = (longlong)iVar27 << 2;
        puVar20 = &local_4f8;
        do {
          piVar16 = (int *)*puVar20;
          piVar82 = (int *)puVar20[1];
          iVar18 = *(int *)(puVar20 + 2);
          iVar27 = (int)((ulonglong)((longlong)piVar82 - (longlong)piVar16) >> 2);
          uVar13 = iVar27 + 1;
          piVar38 = piVar82;
          piVar35 = piVar16;
          if (iVar18 != 0) {
LAB_14926d48b:
            if (8 < (int)uVar13) {
              iVar27 = piVar16[uVar13 >> 1];
              piVar16[uVar13 >> 1] = *piVar16;
              *piVar16 = iVar27;
              piVar39 = piVar82 + 1;
              piVar42 = piVar16;
              do {
                piVar11 = piVar42 + 1;
                piVar21 = piVar42 + 1;
                do {
                  piVar34 = piVar21;
                  piVar42 = piVar11;
                  if (piVar82 < piVar42) break;
                  fVar73 = *(float *)((longlong)pvVar61 + (longlong)*piVar42 * 4);
                  pfVar5 = (float *)((longlong)pvVar61 + (longlong)*piVar16 * 4);
                  piVar11 = piVar42 + 1;
                  piVar21 = piVar34 + 1;
                } while (fVar73 < *pfVar5 || fVar73 == *pfVar5);
                piVar11 = piVar39 + -2;
                do {
                  piVar21 = piVar39;
                  piVar31 = piVar11;
                  piVar39 = piVar21 + -1;
                  if (piVar39 <= piVar16) break;
                  fVar73 = *(float *)((longlong)pvVar61 + (longlong)*piVar16 * 4);
                  pfVar5 = (float *)((longlong)pvVar61 + (longlong)*piVar39 * 4);
                  piVar11 = piVar31 + -1;
                } while (fVar73 < *pfVar5 || fVar73 == *pfVar5);
                if (piVar39 < piVar42) goto LAB_14926d523;
                iVar27 = *piVar42;
                *piVar42 = *piVar39;
                *piVar39 = iVar27;
              } while( true );
            }
            if (piVar16 < piVar82) {
              do {
                piVar38 = piVar16;
                if (piVar16 + 1 <= piVar82) {
                  iVar18 = *piVar16;
                  piVar35 = piVar16 + 1;
                  piVar39 = piVar16;
                  do {
                    fVar73 = *(float *)((longlong)pvVar61 + (longlong)*piVar35 * 4);
                    pfVar5 = (float *)((longlong)pvVar61 + (longlong)iVar18 * 4);
                    piVar38 = piVar35;
                    iVar27 = *piVar35;
                    if (fVar73 < *pfVar5 || fVar73 == *pfVar5) {
                      piVar38 = piVar39;
                      iVar27 = iVar18;
                    }
                    iVar18 = iVar27;
                    piVar35 = piVar35 + 1;
                    piVar39 = piVar38;
                  } while (piVar35 <= piVar82);
                }
                iVar18 = *piVar38;
                *piVar38 = *piVar82;
                *piVar82 = iVar18;
                piVar82 = piVar82 + -1;
              } while (piVar16 < piVar82);
            }
            goto LAB_14926d7b9;
          }
LAB_14926d5af:
          local_1f8 = (void *)0x0;
          dStack_1f0 = (double)CONCAT44(dStack_1f0._4_4_,local_5c8._0_4_);
          if (local_5c8._0_4_ == 0) {
            dStack_1f0 = 0.0;
          }
          else {
            FUN_1447c510a(&local_1f8,local_5c8._0_4_,0);
            memcpy(local_1f8,pvVar61,local_5b0);
          }
          pvVar87 = local_1f8;
          if (uVar13 != 0) {
            lVar40 = (longlong)(int)dStack_1f0._0_4_;
            auVar57._4_4_ = uStack_16c;
            auVar57._0_4_ = dStack_1f0._0_4_;
            auVar57._8_8_ = 0;
            _local_178 = auVar57 << 0x40;
            if (lVar40 == 0) {
              _local_178 = ZEXT416(dStack_1f0._0_4_) << 0x40;
            }
            else {
              FUN_1447c510a(local_178,(ulonglong)dStack_1f0 & 0xffffffff,0);
              memcpy((void *)local_178._0_8_,pvVar87,lVar40 << 2);
            }
            iVar18 = (iVar27 - (iVar27 + -1 >> 0x1f)) + -1 >> 1;
            do {
              iVar27 = iVar18;
              while (iVar23 = iVar27 * 2 + 1, iVar23 < (int)uVar13) {
                iVar22 = iVar27 * 2 + 2;
                if ((iVar22 < (int)uVar13) &&
                   (fVar73 = *(float *)(local_178._0_8_ + (longlong)piVar16[iVar23] * 4),
                   pfVar5 = (float *)(local_178._0_8_ + (longlong)piVar16[iVar22] * 4),
                   fVar73 < *pfVar5 || fVar73 == *pfVar5)) {
                  iVar23 = iVar22;
                }
                iVar22 = piVar16[iVar27];
                fVar73 = *(float *)(local_178._0_8_ + (longlong)piVar16[iVar23] * 4);
                pfVar5 = (float *)(local_178._0_8_ + (longlong)iVar22 * 4);
                if (fVar73 < *pfVar5 || fVar73 == *pfVar5) break;
                piVar16[iVar27] = piVar16[iVar23];
                piVar16[iVar23] = iVar22;
                iVar27 = iVar23;
              }
              bVar43 = iVar18 != 0;
              iVar18 = iVar18 + -1;
            } while (bVar43);
            if (local_178._0_8_ != 0) {
              FUN_1400020a8();
            }
            if (1 < (int)uVar13) {
              uVar28 = (ulonglong)uVar13;
              iVar18 = *piVar16;
              *piVar16 = piVar16[uVar28 - 1];
              piVar16[uVar28 - 1] = iVar18;
              if (uVar13 != 2) {
                do {
                  uVar17 = uVar28 - 1;
                  iVar18 = 0;
                  iVar23 = 1;
                  iVar27 = 0;
                  do {
                    iVar18 = iVar18 + 2;
                    iVar22 = iVar23;
                    if (((longlong)iVar18 < (longlong)uVar17) &&
                       (fVar73 = *(float *)((longlong)local_1f8 + (longlong)piVar16[iVar23] * 4),
                       pfVar5 = (float *)((longlong)local_1f8 + (longlong)piVar16[iVar18] * 4),
                       fVar73 < *pfVar5 || fVar73 == *pfVar5)) {
                      iVar22 = iVar18;
                    }
                    iVar18 = piVar16[iVar27];
                    fVar73 = *(float *)((longlong)local_1f8 + (longlong)piVar16[iVar22] * 4);
                    pfVar5 = (float *)((longlong)local_1f8 + (longlong)iVar18 * 4);
                    if (fVar73 < *pfVar5 || fVar73 == *pfVar5) break;
                    piVar16[iVar27] = piVar16[iVar22];
                    piVar16[iVar22] = iVar18;
                    iVar18 = iVar22 * 2;
                    iVar23 = iVar22 * 2 + 1;
                    iVar27 = iVar22;
                  } while ((longlong)iVar23 < (longlong)uVar17);
                  iVar18 = *piVar16;
                  *piVar16 = piVar16[uVar28 - 2];
                  piVar16[uVar28 - 2] = iVar18;
                  uVar28 = uVar17;
                } while (2 < uVar17);
              }
            }
          }
          if (local_1f8 != (void *)0x0) {
            FUN_1400020a8();
          }
LAB_14926d7b9:
          puVar20 = puVar20 + -3;
          param_3 = local_638;
          param_1 = local_630;
        } while (&local_4f8 <= puVar20);
      }
      if (pvVar61 != (void *)0x0) {
        FUN_1400020a8(pvVar61);
      }
      lVar40 = local_640;
      param_4 = local_618[0];
      if (local_528 != (void *)0x0) {
        FUN_1400020a8();
      }
      fVar73 = param_16[0x14];
      if (0 < (int)fVar73) {
        lVar41 = 0;
        do {
          if ((int)fVar73 < 2) {
            fVar90 = 0.0;
          }
          else {
            fVar90 = (float)(int)lVar41 / (float)((int)fVar73 + -1);
          }
          iVar18 = *local_588;
          if (fVar90 <= *(float *)((longlong)local_518 + (longlong)iVar18 * 4)) {
            *(int *)(*(longlong *)local_628 + lVar41 * 4) = iVar18;
            *(int *)(*(longlong *)local_620 + lVar41 * 4) = iVar18;
LAB_14926d9b6:
            uVar14 = 0;
LAB_14926d9b9:
            *(undefined4 *)(*(longlong *)(param_16 + 0x1e) + lVar41 * 4) = uVar14;
            fVar73 = param_16[0x14];
          }
          else {
            iVar18 = local_588[(int)uStack_580 + -1];
            if (*(float *)((longlong)local_518 + (longlong)iVar18 * 4) <= fVar90) {
              *(int *)(*(longlong *)local_628 + lVar41 * 4) = iVar18;
              *(int *)(*(longlong *)local_620 + lVar41 * 4) = iVar18;
              goto LAB_14926d9b6;
            }
            if (1 < (int)uStack_580) {
              puVar26 = &DAT_00000001;
              do {
                iVar18 = local_588[(longlong)(puVar26 + -1)];
                lVar40 = (longlong)iVar18;
                if (ABS(*(float *)(*param_11 + 0x20 + lVar40 * 0x30) - fVar90) <= 1e-08) {
LAB_14926da87:
                  *(int *)(*(longlong *)local_628 + lVar41 * 4) = iVar18;
                  *(int *)(*(longlong *)local_620 + lVar41 * 4) = iVar18;
LAB_14926da9f:
                  uVar14 = 0;
LAB_14926daa2:
                  lVar40 = local_640;
                  param_3 = local_638;
                  param_1 = local_630;
                  param_4 = local_618[0];
                  goto LAB_14926d9b9;
                }
                iVar27 = local_588[(longlong)puVar26];
                lVar29 = (longlong)iVar27;
                fVar94 = *(float *)(*param_11 + 0x20 + lVar29 * 0x30);
                if (ABS(fVar94 - fVar90) <= 1e-08) {
                  *(int *)(*(longlong *)local_628 + lVar41 * 4) = iVar27;
                  *(int *)(*(longlong *)local_620 + lVar41 * 4) = iVar27;
                  goto LAB_14926da9f;
                }
                if (fVar90 < fVar94) {
                  if (ABS(*(float *)((longlong)local_518 + lVar40 * 4) -
                          *(float *)((longlong)local_518 + lVar29 * 4)) <= 1e-08)
                  goto LAB_14926da87;
                  *(int *)(*(longlong *)local_620 + lVar41 * 4) = iVar18;
                  *(int *)(*(longlong *)local_628 + lVar41 * 4) = iVar27;
                  fVar73 = *(float *)((longlong)local_518 + lVar40 * 4);
                  *(float *)(*(longlong *)local_5f0 + lVar41 * 4) =
                       (fVar90 - fVar73) / (*(float *)((longlong)local_518 + lVar29 * 4) - fVar73);
                  uVar14 = FUN_14915b162(local_5f0,param_12);
                  goto LAB_14926daa2;
                }
                puVar26 = puVar26 + 1;
              } while ((undefined1 *)((ulonglong)uStack_580 & 0xffffffff) != puVar26);
              lVar40 = local_640;
              param_3 = local_638;
              param_1 = local_630;
              param_4 = local_618[0];
            }
          }
          lVar41 = lVar41 + 1;
        } while (lVar41 < (int)fVar73);
      }
      if (local_5a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_588 != (int *)0x0) {
        FUN_1400020a8();
      }
      if (local_518 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_14926daf0:
    fVar73 = param_16[0x14];
  }
  if (1 < (int)fVar73) {
    local_618[0] = param_4;
    fVar73 = 8.96831e-44;
    if ((int)param_7 < 0x40) {
      fVar73 = param_7;
    }
    fVar90 = 5.60519e-45;
    if (4 < (int)fVar73) {
      fVar90 = fVar73;
    }
    uVar8 = local_5e8._0_8_;
    local_640 = lVar40;
    local_630 = param_1;
    if (param_16[0xc] != fVar90) {
      FUN_14051b394(local_5e8._0_8_,(int)fVar90 + 1,1);
      FUN_144a84024(pfVar1,(int)fVar90 + 1,1);
    }
    uVar13 = (uint)DAT_14c8464e0;
    uVar14 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
    fVar73 = SUB84(DAT_14c8464e8,0);
    uVar91 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
    uVar17 = (ulonglong)(uint)fVar90;
    auVar83 = ZEXT816(0);
    lVar40 = 0;
    uVar28 = 0;
    dVar45 = DAT_14c8464f0;
    do {
      FUN_14915cd76(param_3,((float)(int)uVar28 / (float)(int)((int)fVar90 - 1U)) *
                            (param_6 - param_5) + param_5,*(longlong *)uVar8 + lVar40,&local_4f8);
      if (uVar28 != 0 && (int)fVar90 - 1U == uVar28) {
        uVar91 = (undefined4)(CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,fStack_4f0)) >> 0x20);
        uVar13 = (uint)local_4f8;
        uVar14 = local_4f8._4_4_;
        fVar73 = fStack_4f0;
        dVar45 = (double)local_4e8._0_8_;
      }
      if (uVar28 == 0) {
        **(undefined4 **)pfVar1 = 0;
      }
      else {
        lVar41 = *(longlong *)uVar8;
        dVar44 = *(double *)(lVar41 + 0x10 + lVar40) - *(double *)(lVar41 + -8 + lVar40);
        dVar54 = *(double *)(lVar41 + 8 + lVar40) - *(double *)(lVar41 + -0x10 + lVar40);
        dVar59 = *(double *)(lVar41 + lVar40) - *(double *)(lVar41 + -0x18 + lVar40);
        *(float *)(*(longlong *)pfVar1 + uVar28 * 4) =
             (float)SQRT(dVar44 * dVar44 + dVar59 * dVar59 + dVar54 * dVar54);
        auVar83._0_4_ = auVar83._0_4_ + *(float *)(*(longlong *)pfVar1 + uVar28 * 4);
      }
      uVar28 = uVar28 + 1;
      lVar40 = lVar40 + 0x18;
    } while (uVar17 != uVar28);
    lVar40 = *(longlong *)(param_16 + 10);
    dVar44 = (double)*param_16;
    *(double *)(lVar40 + uVar17 * 0x18) =
         (double)CONCAT44(uVar14,uVar13) * dVar44 + *(double *)(lVar40 + -0x18 + uVar17 * 0x18);
    *(double *)(lVar40 + 8 + uVar17 * 0x18) =
         (double)CONCAT44(uVar91,fVar73) * dVar44 + *(double *)(lVar40 + -0x10 + uVar17 * 0x18);
    *(double *)(lVar40 + 0x10 + uVar17 * 0x18) =
         dVar45 * dVar44 + *(double *)(lVar40 + -8 + uVar17 * 0x18);
    fVar73 = *param_16;
    *(float *)(*(longlong *)(param_16 + 0xe) + uVar17 * 4) = fVar73;
    if ((1e-08 <= fVar73) && (1e-08 <= auVar83._0_4_)) {
      puVar20 = *(undefined8 **)(param_16 + 2);
      puVar30 = *(undefined8 **)(param_16 + 10);
      puVar20[2] = puVar30[2];
      uVar8 = puVar30[1];
      *puVar20 = *puVar30;
      puVar20[1] = uVar8;
      fVar73 = param_16[0x14];
      if (1 < (int)fVar73) {
        iVar18 = 1;
        lVar40 = 1;
        do {
          fVar73 = *(float *)(*(longlong *)(param_16 + 6) + lVar40 * 4);
          if (local_618[0] == '\x01') {
            fVar73 = (fVar73 * auVar83._0_4_) / *param_16;
          }
          lVar29 = *(longlong *)(param_16 + 2);
          lVar41 = *(longlong *)(param_16 + 10);
          lVar36 = (longlong)iVar18;
          dVar59 = *(double *)(lVar41 + lVar36 * 0x18);
          dVar75 = *(double *)(lVar41 + 8 + lVar36 * 0x18);
          dVar84 = *(double *)(lVar41 + 0x10 + lVar36 * 0x18);
          dVar45 = *(double *)(lVar29 + -8 + lVar40 * 0x18);
          dVar44 = *(double *)(lVar29 + -0x18 + lVar40 * 0x18);
          dVar54 = *(double *)(lVar29 + -0x10 + lVar40 * 0x18);
          fVar90 = (float)SQRT((dVar45 - dVar84) * (dVar45 - dVar84) +
                               (dVar44 - dVar59) * (dVar44 - dVar59) +
                               (dVar54 - dVar75) * (dVar54 - dVar75));
          if (fVar90 <= fVar73) {
            if (iVar18 < (int)((longlong)(int)param_16[0xc] + -1)) {
              pdVar15 = (double *)(lVar41 + lVar36 * 0x18 + 0x28);
              do {
                dVar65 = dVar84;
                dVar60 = dVar75;
                fVar94 = fVar90;
                lVar36 = lVar36 + 1;
                uVar14 = SUB84(dVar59,0);
                uVar91 = (undefined4)((ulonglong)dVar59 >> 0x20);
                dVar59 = pdVar15[-2];
                dVar75 = pdVar15[-1];
                dVar84 = *pdVar15;
                fVar90 = (float)SQRT((dVar84 - dVar45) * (dVar84 - dVar45) +
                                     (dVar59 - dVar44) * (dVar59 - dVar44) +
                                     (dVar75 - dVar54) * (dVar75 - dVar54));
                iVar18 = iVar18 + 1;
                if ((longlong)(int)param_16[0xc] + -1 <= lVar36) break;
                pdVar15 = pdVar15 + 3;
              } while (fVar94 < fVar73 != fVar73 <= fVar90);
            }
            else {
              lVar41 = lVar41 + lVar36 * 0x18;
              dVar65 = *(double *)(lVar41 + -8);
              dVar74 = *(double *)(lVar41 + -0x18);
              uVar14 = SUB84(dVar74,0);
              uVar91 = (undefined4)((ulonglong)dVar74 >> 0x20);
              dVar60 = *(double *)(lVar41 + -0x10);
              fVar94 = (float)SQRT((dVar45 - dVar65) * (dVar45 - dVar65) +
                                   (dVar44 - dVar74) * (dVar44 - dVar74) +
                                   (dVar54 - dVar60) * (dVar54 - dVar60));
            }
            if (fVar94 <= fVar90) {
              dVar44 = (double)CONCAT44(uVar91,uVar14);
              fVar95 = fVar90;
              dVar45 = dVar84;
              dVar54 = dVar75;
              dVar74 = dVar59;
            }
            else {
              fVar95 = fVar94;
              fVar94 = fVar90;
              dVar45 = dVar65;
              dVar54 = dVar60;
              dVar74 = (double)CONCAT44(uVar91,uVar14);
              dVar44 = dVar59;
              dVar60 = dVar75;
              dVar65 = dVar84;
            }
            if (1e-08 < ABS(fVar94 - fVar95)) {
              dVar59 = (double)((fVar73 - fVar94) / (fVar95 - fVar94));
              dVar65 = dVar65 + (dVar45 - dVar65) * dVar59;
              dVar60 = dVar60 + (dVar54 - dVar60) * dVar59;
              dVar44 = dVar44 + (dVar74 - dVar44) * dVar59;
            }
          }
          else {
            dVar74 = (double)(fVar73 / fVar90);
            dVar65 = (dVar84 - dVar45) * dVar74 + dVar45;
            dVar60 = (dVar75 - dVar54) * dVar74 + dVar54;
            dVar44 = (dVar59 - dVar44) * dVar74 + dVar44;
          }
          pdVar15 = (double *)(lVar29 + lVar40 * 0x18);
          *pdVar15 = dVar44;
          pdVar15[1] = dVar60;
          pdVar15[2] = dVar65;
          lVar40 = lVar40 + 1;
          fVar73 = param_16[0x14];
        } while (lVar40 < (int)fVar73);
      }
      local_538 = 0;
      uStack_530 = 0;
      if (0 < (int)fVar73 && param_13 < 1.0) {
        lVar41 = 0xc;
        lVar40 = 0;
        local_638 = param_3;
        do {
          uVar13 = (uint)*(ushort *)(*(longlong *)local_608 + lVar41);
          if (*(ushort *)(*(longlong *)local_608 + lVar41) == 0xffff) {
            uVar13 = 0xffffffff;
          }
          FUN_14486750c(local_640,&local_4f8,uVar13,0);
          uVar28 = uStack_530;
          lVar29 = (longlong)(int)uStack_530;
          uVar13 = (int)uStack_530 + 1;
          uStack_530 = CONCAT44(uStack_530._4_4_,uVar13);
          if (uStack_530._4_4_ < uVar13) {
            FUN_144a2c682(&local_538,uVar28 & 0xffffffff);
          }
          puVar20 = &local_4f8;
          puVar30 = (undefined8 *)(lVar29 * 0x60 + local_538);
          for (lVar36 = 0xc; lVar36 != 0; lVar36 = lVar36 + -1) {
            *puVar30 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar30 = puVar30 + 1;
          }
          lVar40 = lVar40 + 1;
          fVar73 = param_16[0x14];
          lVar41 = lVar41 + 0x20;
          param_3 = local_638;
        } while (lVar40 < (int)fVar73);
      }
      if (0 < (int)fVar73) {
        fVar73 = param_13;
        if (1.0 <= param_13) {
          fVar73 = 1.0;
        }
        if (fVar73 <= 0.0) {
          fVar73 = 0.0;
        }
        local_638 = CONCAT44(local_638._4_4_,fVar73);
        lVar29 = 3;
        local_618 = ZEXT816(0x3ff0000000000000) << 0x40;
        lVar40 = 0;
        lVar36 = 0;
        lVar41 = 0;
        do {
          uVar13 = (uint)*(ushort *)(*(longlong *)(param_16 + 0x12) + lVar29 * 4);
          if (uVar13 == 0xffff) {
            uVar13 = 0xffffffff;
          }
          FUN_14486750c(local_640,local_178,uVar13,0);
          lVar19 = *(longlong *)(param_16 + 2);
          local_158 = *(double *)(lVar19 + lVar40);
          dStack_150 = ((double *)(lVar19 + lVar40))[1];
          local_148 = *(double *)(lVar19 + 0x10 + lVar40);
          uStack_140 = 0;
          if (lVar41 < (longlong)(int)param_16[0x14] + -1) {
            pdVar15 = (double *)(lVar19 + lVar40);
            lVar4 = lVar19 + lVar40;
            pdVar24 = (double *)(lVar4 + 0x18);
            dVar45 = *(double *)(lVar4 + 0x28) - *(double *)(lVar4 + 0x10);
            pdVar37 = (double *)(lVar19 + lVar40 + 0x20);
            pdVar33 = (double *)(lVar19 + lVar40 + 8);
          }
          else {
            fVar73 = param_16[4];
            pdVar24 = (double *)(lVar19 + (longlong)((int)fVar73 + -1) * 0x18);
            pdVar15 = (double *)(lVar19 + -0x30 + (longlong)(int)fVar73 * 0x18);
            dVar45 = pdVar24[2] - pdVar15[2];
            pdVar37 = (double *)(lVar19 + (longlong)((int)fVar73 + -1) * 0x18 + 8);
            pdVar33 = (double *)(lVar19 + (longlong)(int)fVar73 * 0x18 + -0x28);
          }
          dVar44 = *pdVar37 - *pdVar33;
          pvVar61 = (void *)(*pdVar24 - *pdVar15);
          if ((((9.999999747378752e-05 < ABS((double)pvVar61)) ||
               (9.999999747378752e-05 < ABS(dVar44))) || (9.999999747378752e-05 < ABS(dVar45))) &&
             (((9.999999747378752e-05 < ABS(*param_8) || (9.999999747378752e-05 < ABS(param_8[1])))
              || (9.999999747378752e-05 < ABS(param_8[2]))))) {
            dVar54 = dVar45 * dVar45 + (double)pvVar61 * (double)pvVar61 + dVar44 * dVar44;
            if (((dVar54 != 1.0) ||
                (local_1f8 = pvVar61, dStack_1f0 = dVar44, local_1e8._0_8_ = dVar45, NAN(dVar54)))
               && (local_1f8 = DAT_14c8464e0, dStack_1f0 = DAT_14c8464e8,
                  local_1e8._0_8_ = DAT_14c8464f0, 9.99999993922529e-09 <= dVar54)) {
              dVar54 = 1.0 / SQRT(dVar54);
              local_1f8 = (void *)((double)pvVar61 * dVar54);
              dStack_1f0 = dVar44 * dVar54;
              local_1e8._0_8_ = dVar45 * dVar54;
            }
            dVar45 = *param_8;
            dVar44 = param_8[1];
            dVar54 = dVar44 * (double)local_178._0_8_ - dVar45 * stack0xfffffffffffffe90;
            dVar59 = param_8[2] * stack0xfffffffffffffe90 - dVar44 * (double)local_168._0_8_;
            dVar75 = dVar45 * (double)local_168._0_8_ - (double)local_178._0_8_ * param_8[2];
            dVar59 = dVar59 + dVar59;
            dVar75 = dVar75 + dVar75;
            dVar54 = dVar54 + dVar54;
            local_508 = dVar54 * (double)local_168._8_8_ + param_8[2] +
                        (dVar75 * (double)local_178._0_8_ - dVar59 * stack0xfffffffffffffe90);
            local_518 = (void *)((dVar54 * stack0xfffffffffffffe90 -
                                 dVar75 * (double)local_168._0_8_) +
                                (double)local_168._8_8_ * dVar59 + dVar45);
            uStack_510 = ((double)local_168._0_8_ * dVar59 - (double)local_178._0_8_ * dVar54) +
                         (double)local_168._8_8_ * dVar75 + dVar44;
            dVar45 = local_508 * local_508 +
                     (double)local_518 * (double)local_518 + uStack_510 * uStack_510;
            if ((dVar45 != 1.0) || (NAN(dVar45))) {
              if (9.99999993922529e-09 <= dVar45) {
                dVar45 = 1.0 / SQRT(dVar45);
                local_508 = local_508 * dVar45;
                uStack_510 = uStack_510 * dVar45;
                local_518 = (void *)(dVar45 * (double)local_518);
              }
              else {
                local_508 = DAT_14c8464f0;
                local_518 = DAT_14c8464e0;
                uStack_510 = DAT_14c8464e8;
              }
            }
            FUN_144a9d448(&local_4f8,&local_518,&local_1f8);
            dVar45 = (double)DAT_149931170;
            dVar44 = DAT_149931170._8_8_;
            dVar54 = (double)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,fStack_4f0));
            dVar59 = (double)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,fStack_4f0));
            dVar75 = stack0xfffffffffffffe90 * (double)local_4e8._0_8_ * -1.0 +
                     (double)local_168._0_8_ * dVar54 +
                     (double)local_168._8_8_ * (double)CONCAT44(local_4f8._4_4_,(uint)local_4f8) *
                     dVar45 + (double)local_178._0_8_ * (double)local_4e8._8_8_;
            dVar84 = (double)local_178._0_8_ * (double)local_4e8._0_8_ * 1.0 +
                     (double)local_168._8_8_ * dVar59 +
                     (double)local_168._0_8_ * (double)CONCAT44(local_4f8._4_4_,(uint)local_4f8) *
                     dVar44 + stack0xfffffffffffffe90 * (double)local_4e8._8_8_;
            dVar45 = (double)local_168._8_8_ * (double)local_4e8._0_8_ * dVar45 +
                     (((double)CONCAT44(local_4f8._4_4_,(uint)local_4f8) * stack0xfffffffffffffe90 *
                       dVar45 + (double)local_4e8._8_8_ * (double)local_168._0_8_) -
                     (double)local_178._0_8_ * dVar54);
            dVar44 = (double)local_168._0_8_ * (double)local_4e8._0_8_ * dVar44 +
                     (((double)CONCAT44(local_4f8._4_4_,(uint)local_4f8) * (double)local_178._0_8_ *
                       dVar44 + (double)local_4e8._8_8_ * (double)local_168._8_8_) -
                     stack0xfffffffffffffe90 * dVar59);
            dVar54 = dVar45 * dVar45 + dVar75 * dVar75;
            dVar59 = dVar44 * dVar44 + dVar84 * dVar84;
            auVar47._0_8_ = dVar54 + dVar59;
            auVar47._8_8_ = dVar54 + dVar59;
            auVar71._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
            auVar71._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
            auVar57 = sqrtpd(auVar47,auVar47);
            auVar57 = divpd(_DAT_149934d80,auVar57);
            auVar55._0_8_ = auVar57._0_8_ * dVar45;
            auVar55._8_8_ = auVar57._8_8_ * dVar44;
            local_168 = blendvpd(local_618,auVar55,auVar71);
            stack0xfffffffffffffe90 =
                 (double)((ulonglong)(dVar84 * auVar57._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_));
            local_178._0_8_ =
                 (ulonglong)(dVar75 * auVar57._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
            lVar19 = *(longlong *)local_5f8;
          }
          dVar45 = param_10[2] - *(double *)(lVar19 + 0x10 + lVar40);
          dVar44 = param_10[1] - *(double *)(lVar19 + 8 + lVar40);
          pvVar61 = (void *)(*param_10 - *(double *)(lVar19 + lVar40));
          local_1f8 = pvVar61;
          dStack_1f0 = dVar44;
          local_1e8._0_8_ = dVar45;
          if (((9.999999747378752e-05 < ABS(*param_9)) || (9.999999747378752e-05 < ABS(param_9[1])))
             || (9.999999747378752e-05 < ABS(param_9[2]))) {
            if (((9.999999747378752e-05 < ABS(*param_8)) ||
                (9.999999747378752e-05 < ABS(param_8[1]))) ||
               (9.999999747378752e-05 < ABS(param_8[2]))) {
              dVar54 = *param_8;
              dVar59 = param_8[1];
              dVar84 = dVar59 * (double)local_178._0_8_ - dVar54 * stack0xfffffffffffffe90;
              dVar60 = param_8[2] * stack0xfffffffffffffe90 - dVar59 * (double)local_168._0_8_;
              dVar75 = dVar54 * (double)local_168._0_8_ - (double)local_178._0_8_ * param_8[2];
              dVar60 = dVar60 + dVar60;
              dVar75 = dVar75 + dVar75;
              dVar84 = dVar84 + dVar84;
              dVar65 = dVar84 * (double)local_168._8_8_ + param_8[2] +
                       (dVar75 * (double)local_178._0_8_ - dVar60 * stack0xfffffffffffffe90);
              pvVar87 = (void *)((dVar84 * stack0xfffffffffffffe90 -
                                 dVar75 * (double)local_168._0_8_) +
                                (double)local_168._8_8_ * dVar60 + dVar54);
              dVar59 = ((double)local_168._0_8_ * dVar60 - (double)local_178._0_8_ * dVar84) +
                       (double)local_168._8_8_ * dVar75 + dVar59;
              dVar54 = dVar65 * dVar65 + (double)pvVar87 * (double)pvVar87 + dVar59 * dVar59;
              if (((dVar54 != 1.0) ||
                  (dVar75 = dVar65, pvVar88 = pvVar87, dVar84 = dVar59, NAN(dVar54))) &&
                 (dVar75 = DAT_14c8464f0, pvVar88 = DAT_14c8464e0, dVar84 = DAT_14c8464e8,
                 9.99999993922529e-09 <= dVar54)) {
                dVar54 = 1.0 / SQRT(dVar54);
                dVar75 = dVar65 * dVar54;
                pvVar88 = (void *)(dVar54 * (double)pvVar87);
                dVar84 = dVar59 * dVar54;
              }
              dVar54 = dVar45 * dVar75 + (double)pvVar61 * (double)pvVar88 + dVar44 * dVar84;
              dVar45 = dVar45 - dVar75 * dVar54;
              dVar44 = dVar44 - dVar84 * dVar54;
              pvVar61 = (void *)((double)pvVar61 - dVar54 * (double)pvVar88);
              local_1f8 = pvVar61;
              dStack_1f0 = dVar44;
              local_1e8._0_8_ = dVar45;
            }
            local_1f8 = pvVar61;
            dStack_1f0 = dVar44;
            if ((((9.999999747378752e-05 < ABS((double)pvVar61)) ||
                 (9.999999747378752e-05 < ABS(dVar44))) || (9.999999747378752e-05 < ABS(dVar45))) &&
               (((9.999999747378752e-05 < ABS(*param_9) || (9.999999747378752e-05 < ABS(param_9[1]))
                 ) || (9.999999747378752e-05 < ABS(param_9[2]))))) {
              dVar54 = dVar45 * dVar45 + (double)pvVar61 * (double)pvVar61 + dVar44 * dVar44;
              if (((dVar54 != 1.0) || (dVar59 = dVar45, NAN(dVar54))) &&
                 (local_1f8 = DAT_14c8464e0, dStack_1f0 = DAT_14c8464e8, dVar59 = DAT_14c8464f0,
                 9.99999993922529e-09 <= dVar54)) {
                dVar54 = 1.0 / SQRT(dVar54);
                local_1f8 = (void *)((double)pvVar61 * dVar54);
                dStack_1f0 = dVar44 * dVar54;
                dVar59 = dVar45 * dVar54;
              }
              local_1e8._0_8_ = dVar59;
              dVar45 = *param_9;
              dVar44 = param_9[1];
              dVar54 = dVar44 * (double)local_178._0_8_ - dVar45 * stack0xfffffffffffffe90;
              dVar59 = param_9[2] * stack0xfffffffffffffe90 - dVar44 * (double)local_168._0_8_;
              dVar75 = dVar45 * (double)local_168._0_8_ - (double)local_178._0_8_ * param_9[2];
              dVar59 = dVar59 + dVar59;
              dVar75 = dVar75 + dVar75;
              dVar54 = dVar54 + dVar54;
              local_508 = dVar54 * (double)local_168._8_8_ + param_9[2] +
                          (dVar75 * (double)local_178._0_8_ - dVar59 * stack0xfffffffffffffe90);
              local_518 = (void *)((dVar54 * stack0xfffffffffffffe90 -
                                   dVar75 * (double)local_168._0_8_) +
                                  (double)local_168._8_8_ * dVar59 + dVar45);
              uStack_510 = ((double)local_168._0_8_ * dVar59 - (double)local_178._0_8_ * dVar54) +
                           (double)local_168._8_8_ * dVar75 + dVar44;
              dVar45 = local_508 * local_508 +
                       (double)local_518 * (double)local_518 + uStack_510 * uStack_510;
              if ((dVar45 != 1.0) || (NAN(dVar45))) {
                if (9.99999993922529e-09 <= dVar45) {
                  dVar45 = 1.0 / SQRT(dVar45);
                  local_508 = local_508 * dVar45;
                  uStack_510 = uStack_510 * dVar45;
                  local_518 = (void *)(dVar45 * (double)local_518);
                }
                else {
                  local_508 = DAT_14c8464f0;
                  local_518 = DAT_14c8464e0;
                  uStack_510 = DAT_14c8464e8;
                }
              }
              FUN_144a9d448(&local_4f8,&local_518,&local_1f8);
              dVar45 = (double)DAT_149931170;
              dVar44 = DAT_149931170._8_8_;
              dVar54 = (double)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,fStack_4f0));
              dVar59 = (double)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,fStack_4f0));
              dVar75 = stack0xfffffffffffffe90 * (double)local_4e8._0_8_ * -1.0 +
                       (double)local_168._0_8_ * dVar54 +
                       (double)local_168._8_8_ * (double)CONCAT44(local_4f8._4_4_,(uint)local_4f8) *
                       dVar45 + (double)local_178._0_8_ * (double)local_4e8._8_8_;
              dVar84 = (double)local_178._0_8_ * (double)local_4e8._0_8_ * 1.0 +
                       (double)local_168._8_8_ * dVar59 +
                       (double)local_168._0_8_ * (double)CONCAT44(local_4f8._4_4_,(uint)local_4f8) *
                       dVar44 + stack0xfffffffffffffe90 * (double)local_4e8._8_8_;
              dVar45 = (double)local_168._8_8_ * (double)local_4e8._0_8_ * dVar45 +
                       (((double)CONCAT44(local_4f8._4_4_,(uint)local_4f8) * stack0xfffffffffffffe90
                         * dVar45 + (double)local_4e8._8_8_ * (double)local_168._0_8_) -
                       (double)local_178._0_8_ * dVar54);
              dVar44 = (double)local_168._0_8_ * (double)local_4e8._0_8_ * dVar44 +
                       (((double)CONCAT44(local_4f8._4_4_,(uint)local_4f8) * (double)local_178._0_8_
                         * dVar44 + (double)local_4e8._8_8_ * (double)local_168._8_8_) -
                       stack0xfffffffffffffe90 * dVar59);
              dVar54 = dVar45 * dVar45 + dVar75 * dVar75;
              dVar59 = dVar44 * dVar44 + dVar84 * dVar84;
              auVar67._0_8_ = dVar54 + dVar59;
              auVar67._8_8_ = dVar54 + dVar59;
              auVar46._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar67._8_8_);
              auVar46._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar67._0_8_);
              auVar57 = sqrtpd(auVar67,auVar67);
              auVar57 = divpd(_DAT_149934d80,auVar57);
              auVar76._0_8_ = auVar57._0_8_ * dVar45;
              auVar76._8_8_ = auVar57._8_8_ * dVar44;
              local_178._0_8_ =
                   (ulonglong)(dVar75 * auVar57._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar67._0_8_);
              register0x00001248 =
                   (double)((ulonglong)(dVar84 * auVar57._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar67._8_8_));
              local_168 = blendvpd(local_618,auVar76,auVar46);
            }
          }
          puVar20 = &local_4f8;
          if (1.0 <= param_13) {
            bVar12 = (int)param_11[1] == 0 & param_14;
            uVar13 = (uint)*(ushort *)(*(longlong *)local_608 + lVar29 * 4);
            if (uVar13 == 0xffff) {
              uVar13 = 0xffffffff;
            }
            lVar19 = 0xc;
            puVar30 = (undefined8 *)local_178;
          }
          else {
            local_5e8._0_8_ = lVar40;
            FUN_14915b8da(&local_4f8,local_538 + lVar36,local_178);
            puVar30 = &local_4f8;
            puVar32 = (undefined8 *)local_178;
            for (lVar40 = 0xc; lVar40 != 0; lVar40 = lVar40 + -1) {
              *puVar32 = *puVar30;
              puVar30 = puVar30 + 1;
              puVar32 = puVar32 + 1;
            }
            bVar12 = (int)param_11[1] == 0 & param_14;
            uVar13 = (uint)*(ushort *)(*(longlong *)local_608 + lVar29 * 4);
            if (uVar13 == 0xffff) {
              uVar13 = 0xffffffff;
            }
            lVar19 = 0xc;
            puVar30 = (undefined8 *)local_178;
            lVar40 = local_5e8._0_8_;
          }
          for (; lVar19 != 0; lVar19 = lVar19 + -1) {
            *puVar20 = *puVar30;
            puVar30 = puVar30 + 1;
            puVar20 = puVar20 + 1;
          }
          local_658 = local_658 & 0xffffff00;
          local_660 = (char *)((ulonglong)local_660 & 0xffffffffffffff00);
          local_668 = (char *)CONCAT71(local_668._1_7_,bVar12);
          FUN_144831e8e(local_640,uVar13,&local_4f8);
          lVar41 = lVar41 + 1;
          lVar29 = lVar29 + 8;
          lVar36 = lVar36 + 0x60;
          lVar40 = lVar40 + 0x18;
        } while (lVar41 < (int)param_16[0x14]);
      }
      lVar40 = local_640;
      uVar99 = uRam000000014c8464dc;
      uVar98 = uRam000000014c8464d8;
      uVar97 = DAT_14c8464d0._4_4_;
      uVar96 = (undefined4)DAT_14c8464d0;
      auVar89 = _DAT_14c8464c0;
      uVar93 = DAT_14c8464b8._4_4_;
      uVar92 = (undefined4)DAT_14c8464b8;
      uVar91 = DAT_14c8464b0._4_4_;
      uVar14 = (undefined4)DAT_14c8464b0;
      dVar44 = DAT_14c8464a8;
      dVar45 = DAT_14c8464a0;
      auVar57 = _DAT_14c846490;
      dVar54 = DAT_14c846488;
      piVar82 = DAT_14c846480;
      if (0 < (int)param_11[1]) {
        local_548 = *(undefined4 *)(*(undefined8 **)local_608 + 1);
        local_550 = **(undefined8 **)local_608;
        FUN_1408130c0(local_640,local_544);
        if ((((uint)uStack_53e < DAT_14c87eb08 + 1U) &&
            (CONCAT44(uStack_53c,CONCAT22(uStack_53e,uStack_540)) != 0)) && (local_544[0] != '\0'))
        {
          local_558 = uStack_53c;
          uVar14 = FUN_140813180(lVar40);
          FUN_14486750c(lVar40,&local_4f8,uVar14,0);
          piVar82 = (int *)CONCAT44(local_4f8._4_4_,(uint)local_4f8);
          dVar54 = (double)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,fStack_4f0));
          auVar89 = local_4b8;
          uVar14 = local_4c8._0_4_;
          uVar91 = local_4c8._4_4_;
          uVar92 = local_4c8._8_4_;
          uVar93 = local_4c8._12_4_;
          uVar96 = local_4a8._0_4_;
          uVar97 = local_4a8._4_4_;
          uVar98 = local_4a8._8_4_;
          uVar99 = local_4a8._12_4_;
          auVar57 = local_4e8;
          dVar45 = (double)local_4d8._0_8_;
          dVar44 = (double)local_4d8._8_8_;
        }
        lVar40 = local_640;
        dVar60 = (double)CONCAT44(uVar99,uVar98);
        dVar75 = (double)CONCAT44(uVar93,uVar92);
        dVar59 = (double)CONCAT44(uVar91,uVar14);
        dVar84 = (double)CONCAT44(uVar97,uVar96);
        if (0 < (int)param_16[0x14]) {
          lVar29 = 0xc;
          lVar36 = 0;
          lVar41 = 0;
          local_638 = param_3;
          do {
            uVar13 = (uint)*(ushort *)(*(longlong *)(param_16 + 0x12) + lVar29);
            if (*(ushort *)(*(longlong *)(param_16 + 0x12) + lVar29) == 0xffff) {
              uVar13 = 0xffffffff;
            }
            FUN_144afced8(lVar40,&local_4f8,uVar13,0);
            puVar20 = &local_4f8;
            puVar30 = (undefined8 *)(*(longlong *)(param_16 + 0x22) + lVar36);
            for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
              *puVar30 = *puVar20;
              puVar20 = puVar20 + 1;
              puVar30 = puVar30 + 1;
            }
            lVar41 = lVar41 + 1;
            uVar28 = (ulonglong)(int)param_16[0x14];
            lVar36 = lVar36 + 0x60;
            lVar29 = lVar29 + 0x20;
          } while (lVar41 < (longlong)uVar28);
          param_3 = local_638;
          if (0 < (int)param_16[0x14]) {
            if (1.0 <= param_13) {
              param_13 = 1.0;
            }
            if (param_13 <= 0.0) {
              param_13 = 0.0;
            }
            local_5f8 = (float *)(double)param_13;
            lVar29 = 3;
            lVar41 = 10;
            lVar40 = 0;
            auVar83 = _DAT_149934d80;
            do {
              iVar18 = *(int *)(*(longlong *)local_620 + lVar40 * 4);
              if ((iVar18 < (int)param_11[1]) &&
                 (ppiVar25 = *(int ***)local_628,
                 *(int *)((longlong)ppiVar25 + lVar40 * 4) < (int)param_11[1])) {
                lVar36 = *param_11;
                lVar19 = (longlong)iVar18 * 0x30;
                pdVar15 = (double *)(lVar36 + lVar19);
                local_588 = (int *)*pdVar15;
                uStack_580 = pdVar15[1];
                local_578._0_16_ = *(undefined1 (*) [16])(lVar36 + 0x10 + lVar19);
                lVar19 = (longlong)*(int *)((longlong)ppiVar25 + lVar40 * 4) * 0x30;
                local_5a8 = *(void **)(lVar36 + lVar19);
                uStack_5a0 = ((undefined8 *)(lVar36 + lVar19))[1];
                puVar20 = (undefined8 *)(lVar36 + 0x10 + lVar19);
                local_598 = *puVar20;
                uStack_590 = puVar20[1];
                uVar13 = *(uint *)(*(longlong *)local_620 + lVar40 * 4);
                puVar20 = (undefined8 *)(ulonglong)uVar13;
                dVar65 = auVar89._0_8_;
                dVar74 = auVar89._8_8_;
                if (uVar13 != *(uint *)((longlong)ppiVar25 + lVar40 * 4)) {
                  puVar20 = *(undefined8 **)local_5f0;
                  fVar73 = *(float *)((longlong)puVar20 + lVar40 * 4);
                  if (fVar73 <= 1.0) {
                    if (1e-08 < fVar73) {
                      ppiVar25 = &local_588;
                      puVar20 = &local_4f8;
                      FUN_144a44da6(&local_4f8,ppiVar25,&local_5a8,(double)fVar73);
                      dVar63 = (double)CONCAT44(local_4f8._4_4_,(uint)local_4f8);
                      dVar58 = (double)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,fStack_4f0));
                      dVar62 = (double)local_4e8._0_8_ * (double)local_4e8._0_8_ + dVar63 * dVar63;
                      dVar66 = (double)local_4e8._8_8_ * (double)local_4e8._8_8_ + dVar58 * dVar58;
                      auVar70._0_8_ = dVar62 + dVar66;
                      auVar70._8_8_ = dVar62 + dVar66;
                      auVar52._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar70._8_8_);
                      auVar52._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar70._0_8_);
                      auVar71 = sqrtpd(auVar70,auVar70);
                      auVar71 = divpd(auVar83,auVar71);
                      auVar78._0_8_ = auVar71._0_8_ * (double)local_4e8._0_8_;
                      auVar78._8_8_ = auVar71._8_8_ * (double)local_4e8._8_8_;
                      dVar63 = (double)((ulonglong)(dVar63 * auVar71._0_8_) &
                                       -(ulonglong)(9.99999993922529e-09 <= auVar70._0_8_));
                      dVar58 = (double)((ulonglong)(dVar58 * auVar71._8_8_) &
                                       -(ulonglong)(9.99999993922529e-09 <= auVar70._8_8_));
                      auVar71 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar78,auVar52);
                      dVar62 = auVar71._0_8_;
                      dVar66 = auVar71._8_8_;
                      dVar72 = dVar62 * dVar62 + dVar63 * dVar63;
                      dVar80 = dVar66 * dVar66 + dVar58 * dVar58;
                      auVar79._0_8_ = dVar72 + dVar80;
                      auVar79._8_8_ = dVar72 + dVar80;
                      auVar53._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar79._8_8_);
                      auVar53._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar79._0_8_);
                      auVar71 = sqrtpd(auVar79,auVar79);
                      auVar71 = divpd(auVar83,auVar71);
                      auVar81._0_8_ = auVar71._0_8_ * dVar62;
                      auVar81._8_8_ = auVar71._8_8_ * dVar66;
                      local_588 = (int *)((ulonglong)(dVar63 * auVar71._0_8_) &
                                         -(ulonglong)(9.99999993922529e-09 <= auVar79._0_8_));
                      uStack_580 = (double)((ulonglong)(dVar58 * auVar71._8_8_) &
                                           -(ulonglong)(9.99999993922529e-09 <= auVar79._8_8_));
                      local_578._0_16_ =
                           blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar81,auVar53);
                    }
                  }
                  else {
                    pdVar15 = (double *)(lVar36 + lVar19);
                    local_588 = (int *)*pdVar15;
                    uStack_580 = pdVar15[1];
                    local_578._0_16_ = *(undefined1 (*) [16])(pdVar15 + 2);
                  }
                }
                local_5e8._8_4_ = SUB84(dVar75,0);
                local_5e8._0_8_ = dVar59;
                local_5e8._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
                lVar36 = *(longlong *)local_5d0;
                local_618 = *(undefined1 (*) [16])(lVar36 + -0x10 + lVar41 * 8);
                auVar71 = *(undefined1 (*) [16])(lVar36 + lVar41 * 8);
                auVar47 = minpd(local_618,auVar89);
                auVar6._8_4_ = SUB84(dVar60,0);
                auVar6._0_8_ = dVar84;
                auVar6._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
                auVar55 = minpd(auVar71,auVar6);
                auVar48._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
                auVar48._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
                iVar18 = movmskpd((int)puVar20,auVar48);
                auVar56._8_8_ = -(ulonglong)(auVar55._8_8_ < 0.0);
                auVar56._0_8_ = -(ulonglong)(auVar55._0_8_ < 0.0);
                uVar13 = movmskpd((int)ppiVar25,auVar56);
                dVar75 = auVar57._0_8_;
                dVar63 = auVar57._8_8_;
                uVar8 = local_618._0_8_;
                uVar9 = local_618._8_8_;
                if ((uVar13 & 0x3fffffff) == 0 && iVar18 == 0) {
                  pdVar15 = (double *)(lVar36 + -0x50 + lVar41 * 8);
                  dVar58 = *pdVar15;
                  dVar62 = pdVar15[1];
                  pdVar15 = (double *)(lVar36 + -0x40 + lVar41 * 8);
                  dVar66 = *pdVar15;
                  dVar72 = pdVar15[1];
                  local_1f8 = (void *)(dVar62 * dVar75 * -1.0 +
                                      dVar66 * dVar54 +
                                      (double)piVar82 * dVar72 * 1.0 + dVar63 * dVar58);
                  dStack_1f0 = dVar58 * dVar75 * 1.0 +
                               dVar72 * dVar54 + (double)piVar82 * dVar66 * -1.0 + dVar63 * dVar62;
                  local_1e8._0_8_ =
                       dVar72 * dVar75 * 1.0 +
                       (((double)piVar82 * dVar62 * 1.0 + dVar63 * dVar66) - dVar54 * dVar58);
                  local_1e8._8_8_ =
                       dVar66 * dVar75 * -1.0 +
                       (((double)piVar82 * dVar58 * -1.0 + dVar63 * dVar72) - dVar54 * dVar62);
                  pdVar15 = (double *)(lVar36 + -0x30 + lVar41 * 8);
                  dVar100 = *pdVar15 * dVar65;
                  dVar101 = pdVar15[1] * dVar74;
                  pdVar15 = (double *)(lVar36 + -0x20 + lVar41 * 8);
                  dVar80 = *pdVar15 * dVar84;
                  dVar85 = pdVar15[1] * dVar60;
                  dVar58 = dVar101 * (double)piVar82 - dVar54 * dVar100;
                  dVar72 = dVar80 * dVar54 - dVar75 * dVar101;
                  dVar66 = dVar100 * dVar75 - (double)piVar82 * dVar80;
                  dVar62 = dVar85 * dVar63 - dVar63 * dVar85;
                  dVar72 = dVar72 + dVar72;
                  dVar66 = dVar66 + dVar66;
                  dVar58 = dVar58 + dVar58;
                  dVar62 = dVar62 + dVar62;
                  dVar45 = dVar45 + (dVar58 * dVar54 - dVar75 * dVar66) + dVar63 * dVar72 + dVar100;
                  dVar44 = dVar44 + (dVar72 * dVar75 - dVar58 * (double)piVar82) +
                                    dVar63 * dVar66 + dVar101;
                  dVar59 = dVar59 + (dVar66 * (double)piVar82 - dVar54 * dVar72) +
                                    dVar63 * dVar58 + dVar80;
                  dVar75 = (double)local_5e8._8_8_ +
                           (dVar62 * dVar63 - dVar62 * dVar63) + dVar63 * dVar62 + dVar85;
                  local_5c8 = auVar71;
                }
                else {
                  dVar58 = dVar54 + dVar54;
                  dVar66 = dVar75 + dVar75;
                  dVar62 = (double)piVar82 * ((double)piVar82 + (double)piVar82);
                  local_128 = (1.0 - (dVar62 + dVar54 * dVar58)) * dVar84;
                  dVar72 = ((double)piVar82 + (double)piVar82) * dVar63;
                  local_138 = (dVar58 * dVar63 + (double)piVar82 * dVar66) * dVar84;
                  local_158 = (dVar58 * (double)piVar82 - dVar66 * dVar63) * dVar74;
                  dStack_130 = (dVar66 * dVar54 - dVar72) * dVar84;
                  dVar100 = (double)local_618._0_8_ * dVar65;
                  dVar101 = (double)local_618._8_8_ * dVar74;
                  dStack_150 = (auVar83._8_8_ - (dVar75 * dVar66 + dVar62)) * dVar74;
                  local_148 = (dVar66 * dVar54 + dVar72) * dVar74;
                  stack0xfffffffffffffe90 = (dVar58 * (double)piVar82 + dVar66 * dVar63) * dVar65;
                  local_178._0_8_ = (auVar83._0_8_ - (dVar75 * dVar66 + dVar54 * dVar58)) * dVar65;
                  local_168._8_8_ = 0;
                  local_168._0_8_ = ((double)piVar82 * dVar66 - dVar58 * dVar63) * dVar65;
                  uStack_140 = 0;
                  uStack_120 = 0;
                  uStack_100 = 0x3ff0000000000000;
                  pdVar15 = (double *)(lVar36 + -0x50 + lVar41 * 8);
                  dVar75 = *pdVar15;
                  dVar63 = pdVar15[1];
                  dVar54 = *(double *)(lVar36 + -0x40 + lVar41 * 8);
                  pdVar15 = (double *)(lVar36 + -0x10 + lVar41 * 8);
                  dVar58 = *pdVar15;
                  local_1d8 = pdVar15[1];
                  dStack_1b0 = *(double *)(lVar36 + lVar41 * 8);
                  dVar80 = dVar63 + dVar63;
                  dVar62 = dVar54 + dVar54;
                  dVar66 = dVar75 * (dVar75 + dVar75);
                  local_1f8 = (void *)((auVar83._0_8_ - (dVar54 * dVar62 + dVar63 * dVar80)) *
                                      dVar58);
                  dStack_1d0 = (auVar83._8_8_ - (dVar54 * dVar62 + dVar66)) * local_1d8;
                  local_1a8 = (1.0 - (dVar66 + dVar63 * dVar80)) * dStack_1b0;
                  dVar85 = *(double *)(lVar36 + -0x50 + lVar41 * 8) * dVar62;
                  pdVar15 = (double *)(lVar36 + -0x38 + lVar41 * 8);
                  dVar54 = *pdVar15;
                  dVar66 = dVar62 * dVar54;
                  dVar72 = (dVar75 + dVar75) * *pdVar15;
                  dVar54 = dVar80 * dVar54;
                  dStack_1f0 = (dVar80 * dVar75 + dVar66) * dVar58;
                  local_1c8 = (dVar62 * dVar63 + dVar72) * local_1d8;
                  local_1b8 = (dVar54 + dVar85) * dStack_1b0;
                  local_1d8 = (dVar80 * dVar75 - dVar66) * local_1d8;
                  dStack_1b0 = (dVar62 * dVar63 - dVar72) * dStack_1b0;
                  local_1e8._8_8_ = 0;
                  local_1e8._0_8_ = (dVar85 - dVar54) * dVar58;
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  puVar20 = (undefined8 *)(lVar36 + -0x30 + lVar41 * 8);
                  local_198 = *puVar20;
                  uStack_190 = puVar20[1];
                  local_188 = *(undefined8 *)(lVar36 + -0x20 + lVar41 * 8);
                  uStack_180 = 0x3ff0000000000000;
                  local_608 = (float *)dVar45;
                  dStack_600 = dVar44;
                  local_118 = dVar45;
                  dStack_110 = dVar44;
                  local_108 = dVar59;
                  FUN_1447fea8d(&local_4f8,&local_1f8,local_178);
                  FUN_144a1c686(&local_4f8,0x3e45798ee0000000);
                  auVar49._8_8_ = -(ulonglong)(0.0 <= dVar101);
                  auVar49._0_8_ = -(ulonglong)(0.0 <= dVar100);
                  auVar57 = blendvpd(_DAT_149936790,auVar83,auVar49);
                  uVar28 = -(ulonglong)(0.0 <= auVar71._0_8_ * dVar84);
                  dVar45 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
                  dVar44 = auVar57._0_8_;
                  dVar54 = (double)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,fStack_4f0)) * dVar44;
                  local_4f8 = (double)CONCAT44(local_4f8._4_4_,(uint)local_4f8) * dVar44;
                  fStack_4f0 = SUB84(dVar54,0);
                  uStack_4ec = (undefined2)((ulonglong)dVar54 >> 0x20);
                  uStack_4ea = (undefined2)((ulonglong)dVar54 >> 0x30);
                  local_4e8._0_8_ = (double)local_4e8._0_8_ * dVar44;
                  dVar44 = auVar57._8_8_;
                  local_4d8._8_8_ = (double)local_4d8._8_8_ * dVar44;
                  local_4d8._0_8_ = dVar44 * (double)local_4d8._0_8_;
                  local_4c8._0_8_ = (double)local_4c8._0_8_ * dVar44;
                  local_4b8._8_8_ = (double)local_4b8._8_8_ * dVar45;
                  local_4b8._0_8_ = dVar45 * (double)local_4b8._0_8_;
                  local_4a8._0_8_ = (double)local_4a8._0_8_ * dVar45;
                  FUN_14481fd10(&local_518,&local_4f8);
                  dVar45 = local_508 * local_508 + (double)local_518 * (double)local_518;
                  dVar44 = dStack_500 * dStack_500 + uStack_510 * uStack_510;
                  auVar68._0_8_ = dVar45 + dVar44;
                  auVar68._8_8_ = dVar45 + dVar44;
                  auVar50._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar68._8_8_);
                  auVar50._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar68._0_8_);
                  auVar57 = sqrtpd(auVar68,auVar68);
                  auVar57 = divpd(auVar83,auVar57);
                  auVar77._0_8_ = auVar57._0_8_ * local_508;
                  auVar77._8_8_ = auVar57._8_8_ * dStack_500;
                  local_1e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar77,auVar50);
                  local_1f8 = (void *)((ulonglong)((double)local_518 * auVar57._0_8_) &
                                      -(ulonglong)(9.99999993922529e-09 <= auVar68._0_8_));
                  dStack_1f0 = (double)((ulonglong)(uStack_510 * auVar57._8_8_) &
                                       -(ulonglong)(9.99999993922529e-09 <= auVar68._8_8_));
                  dVar75 = 0.0;
                  dVar45 = local_498;
                  dVar44 = dStack_490;
                  dVar59 = local_488;
                }
                dStack_600 = (double)uVar9 * dVar74;
                local_608 = (float *)((double)uVar8 * dVar65);
                dVar84 = auVar71._0_8_ * dVar84;
                dVar60 = auVar71._8_8_ * dVar60;
                dVar54 = local_1e8._0_8_;
                dVar65 = local_1e8._8_8_;
                stack0xfffffffffffffe90 =
                     (double)local_588 * dVar54 * 1.0 +
                     (double)local_578._8_8_ * dStack_1f0 +
                     (double)local_1f8 * (double)local_578._0_8_ * -1.0 + dVar65 * uStack_580;
                local_178._0_8_ =
                     uStack_580 * dVar54 * -1.0 +
                     (double)local_578._0_8_ * dStack_1f0 +
                     (double)local_1f8 * (double)local_578._8_8_ * 1.0 + dVar65 * (double)local_588;
                local_168._8_8_ =
                     (double)local_578._0_8_ * dVar54 * -1.0 +
                     (((double)local_1f8 * (double)local_588 * -1.0 +
                      dVar65 * (double)local_578._8_8_) - dStack_1f0 * uStack_580);
                local_168._0_8_ =
                     (double)local_578._8_8_ * dVar54 * 1.0 +
                     (((double)local_1f8 * uStack_580 * 1.0 + dVar65 * (double)local_578._0_8_) -
                     dStack_1f0 * (double)local_588);
                FUN_144a44da6(&local_4f8,&local_1f8,local_178,local_5f8);
                auVar83 = _DAT_149934d80;
                dVar74 = (double)CONCAT26(uStack_4ea,CONCAT24(uStack_4ec,fStack_4f0));
                dVar54 = local_4e8._0_8_;
                dVar65 = local_4e8._8_8_;
                dVar63 = dVar54 * dVar54 + local_4f8 * local_4f8;
                dVar58 = dVar65 * dVar65 + dVar74 * dVar74;
                auVar64._0_8_ = dVar63 + dVar58;
                auVar64._8_8_ = dVar63 + dVar58;
                auVar51._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar64._8_8_);
                auVar51._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar64._0_8_);
                auVar57 = sqrtpd(auVar64,auVar64);
                auVar57 = divpd(_DAT_149934d80,auVar57);
                auVar69._0_8_ = auVar57._0_8_ * dVar54;
                auVar69._8_8_ = auVar57._8_8_ * dVar65;
                piVar82 = (int *)((ulonglong)(local_4f8 * auVar57._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar64._0_8_));
                dVar54 = (double)((ulonglong)(dVar74 * auVar57._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar64._8_8_));
                auVar57 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar69,auVar51);
                uVar13 = (uint)*(ushort *)(*(longlong *)(param_16 + 0x12) + lVar29 * 4);
                if (uVar13 == 0xffff) {
                  uVar13 = 0xffffffff;
                }
                local_4f8._0_4_ = (uint)piVar82;
                local_4f8._4_4_ = (undefined4)((ulonglong)piVar82 >> 0x20);
                fStack_4f0 = SUB84(dVar54,0);
                uStack_4ec = (undefined2)((ulonglong)dVar54 >> 0x20);
                uStack_4ea = (undefined2)((ulonglong)dVar54 >> 0x30);
                local_4d8._8_4_ = SUB84(dVar44,0);
                local_4d8._0_8_ = dVar45;
                local_4d8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
                local_4c8._8_4_ = SUB84(dVar75,0);
                local_4c8._0_8_ = dVar59;
                local_4c8._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
                auVar89._8_8_ = dStack_600;
                auVar89._0_8_ = local_608;
                local_4a8._8_4_ = SUB84(dVar60,0);
                local_4a8._0_8_ = dVar84;
                local_4a8._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
                local_658 = local_658 & 0xffffff00;
                local_660 = (char *)((ulonglong)local_660 & 0xffffffffffffff00);
                local_668 = (char *)CONCAT71(local_668._1_7_,param_14);
                local_588 = piVar82;
                uStack_580 = dVar54;
                local_578._0_16_ = auVar57;
                local_4e8 = auVar57;
                local_4b8 = auVar89;
                FUN_144831e8e(local_640,uVar13,&local_4f8,0);
                uVar28 = (ulonglong)(uint)param_16[0x14];
                param_3 = local_638;
              }
              lVar40 = lVar40 + 1;
              lVar29 = lVar29 + 8;
              lVar41 = lVar41 + 0xc;
            } while (lVar40 < (int)uVar28);
          }
        }
      }
      lVar40 = local_630;
      if ((*(longlong *)(local_630 + 0x58) != 0) && (*param_15 == '\x01')) {
        local_658 = *(uint *)(param_15 + 4);
        pcVar2 = param_15 + 8;
        pcVar3 = param_15 + 0x30;
        local_650 = 0x40;
        local_668 = (char *)CONCAT44(local_668._4_4_,0x3f800000);
        local_660 = pcVar2;
        FUN_14922135c(local_630,pcVar3,param_3,0);
        local_668 = pcVar2;
        FUN_144467456(*(undefined8 *)(lVar40 + 0x58),pcVar3,param_3,*(float *)(param_15 + 4) * 6.0);
        local_668 = pcVar2;
        FUN_144467456(*(undefined8 *)(lVar40 + 0x58),pcVar3,param_3 + 0x18,
                      *(float *)(param_15 + 4) * 6.0);
        local_668 = pcVar2;
        FUN_144467456(*(undefined8 *)(lVar40 + 0x58),pcVar3,param_3 + 0x30,
                      *(float *)(param_15 + 4) * 6.0);
        local_668 = pcVar2;
        FUN_144467456(*(undefined8 *)(lVar40 + 0x58),pcVar3,param_3 + 0x48);
        local_4f8._0_4_ = (uint)*(undefined8 *)(param_16 + 10);
        local_4f8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(param_16 + 10) >> 0x20);
        fStack_4f0 = param_16[0xc];
        local_668 = (char *)CONCAT44(local_668._4_4_,*(undefined4 *)(param_15 + 4));
        FUN_144467884(*(undefined8 *)(lVar40 + 0x58),pcVar3,&local_4f8,param_15 + 0x18);
        local_4f8._0_4_ = (uint)*(undefined8 *)(param_16 + 10);
        local_4f8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(param_16 + 10) >> 0x20);
        fStack_4f0 = param_16[0xc];
        local_668 = param_15 + 0x18;
        FUN_14446754c(*(undefined8 *)(lVar40 + 0x58),pcVar3,&local_4f8,
                      *(float *)(param_15 + 4) * 4.0);
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14926ae03:
  if ((local_f0 ^ (ulonglong)auStack_688) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14926d523:
  iVar27 = *piVar16;
  *piVar16 = *piVar39;
  *piVar39 = iVar27;
  iVar18 = iVar18 + -1;
  piVar21 = piVar21 + -2;
  if ((longlong)piVar31 - (longlong)piVar35 < (longlong)piVar38 - (longlong)piVar34) {
    if (piVar42 < piVar82) {
      *puVar20 = piVar42;
      puVar20[1] = piVar82;
      *(int *)(puVar20 + 2) = iVar18;
      puVar20 = puVar20 + 3;
    }
    piVar34 = piVar16;
    if (piVar39 <= piVar16 + 1) goto LAB_14926d7b9;
  }
  else {
    if (piVar16 + 1 < piVar39) {
      *puVar20 = piVar16;
      puVar20[1] = piVar21;
      *(int *)(puVar20 + 2) = iVar18;
      puVar20 = puVar20 + 3;
    }
    piVar16 = piVar42;
    piVar21 = piVar82;
    piVar31 = piVar82;
    if (piVar82 <= piVar42) goto LAB_14926d7b9;
  }
  iVar27 = (int)((ulonglong)((longlong)piVar31 - (longlong)piVar34) >> 2);
  uVar13 = iVar27 + 1;
  piVar82 = piVar21;
  piVar38 = piVar31;
  piVar35 = piVar34;
  if (iVar18 == 0) goto LAB_14926d5af;
  goto LAB_14926d48b;
}



// FUNCTION 14926db00 FUN_14926db00 body=25 status=ok
// SIG undefined FUN_14926db00(void)

undefined8 FUN_14926db00(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14926db1a FUN_14926db1a body=25 status=ok
// SIG undefined FUN_14926db1a(void)

undefined8 FUN_14926db1a(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14926db34 FUN_14926db34 body=25 status=ok
// SIG undefined FUN_14926db34(void)

undefined8 FUN_14926db34(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14926db4e FUN_14926db4e body=229 status=ok
// SIG undefined FUN_14926db4e(void)

void FUN_14926db4e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  uVar1 = *(undefined4 *)param_2[4];
  uVar2 = *(undefined4 *)param_2[8];
  uVar3 = *(undefined4 *)param_2[0xc];
  uVar4 = *(undefined1 *)param_2[0x10];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_68 = FUN_144828ac0(param_2 + 0x14,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  local_60 = *puVar5;
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_78 = uVar3;
  local_70 = uVar4;
  FUN_14926dccc(*(undefined8 *)(param_1 + 0xc0),&local_60,uVar1,uVar2);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926dc34 FUN_14926dc34 body=151 status=ok
// SIG undefined FUN_14926dc34(void)

void FUN_14926dc34(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  longlong local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  local_38 = param_1 + 0x210;
  local_40 = *(undefined1 *)(param_1 + 0x20c);
  local_48 = *(undefined4 *)(param_1 + 0x208);
  FUN_14926dccc(param_1 + 0x10,&local_28,*(undefined4 *)(param_1 + 0x200),
                *(undefined4 *)(param_1 + 0x204));
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926dccc FUN_14926dccc body=529 status=ok
// SIG undefined FUN_14926dccc(void)

void FUN_14926dccc(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined8 param_7)

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
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined1 local_120;
  undefined8 local_118;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_f8 = 0;
  uStack_f0 = 0;
  if ((int)param_2[1] < 1) {
    uStack_f0._0_4_ = 0;
  }
  else {
    lVar17 = 0x60;
    lVar18 = 0;
    do {
      uVar15 = uStack_f0;
      lVar19 = *param_2;
      uVar2 = *(undefined8 *)(lVar19 + -0x60 + lVar17);
      puVar1 = (undefined8 *)(lVar19 + -0x50 + lVar17);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar19 + -0x40 + lVar17);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar19 + -0x30 + lVar17);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar19 + -0x20 + lVar17);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar19 + -0x10 + lVar17);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      uVar13 = *(undefined8 *)(lVar19 + lVar17);
      uVar14 = ((undefined8 *)(lVar19 + lVar17))[1];
      lVar19 = (longlong)(int)uStack_f0;
      uVar16 = (int)uStack_f0 + 1;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar16);
      if (uStack_f0._4_4_ < uVar16) {
        FUN_1492bfa1c(&local_f8,uVar15 & 0xffffffff);
      }
      lVar19 = lVar19 * 0x70;
      *(undefined1 *)(local_f8 + lVar19) = 1;
      *(undefined8 *)(local_f8 + 4 + lVar19) = uVar2;
      puVar1 = (undefined8 *)(local_f8 + 0x10 + lVar19);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1 = (undefined8 *)(local_f8 + 0x20 + lVar19);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1 = (undefined8 *)(local_f8 + 0x30 + lVar19);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1 = (undefined8 *)(local_f8 + 0x40 + lVar19);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1 = (undefined8 *)(local_f8 + 0x50 + lVar19);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      puVar1 = (undefined8 *)(local_f8 + 0x60 + lVar19);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      lVar18 = lVar18 + 1;
      lVar17 = lVar17 + 0x70;
    } while (lVar18 < (int)param_2[1]);
  }
  local_118 = param_7;
  local_120 = param_6;
  local_128 = param_5;
  local_108 = local_f8;
  local_100 = (int)uStack_f0;
  FUN_14926dede(param_1,&local_108,param_3,param_4);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926dede FUN_14926dede body=591 status=ok
// SIG undefined FUN_14926dede(void)

void FUN_14926dede(longlong param_1,longlong *param_2,float param_3,float param_4,float param_5,
                  byte param_6,longlong *param_7)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_3a8 [68];
  float local_364;
  ulonglong local_360;
  undefined8 local_2f8 [65];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    if ((int)param_7[1] == 0) {
      FUN_14924b442(param_7,(int)param_2[1]);
    }
    fVar9 = param_4;
    if (param_5 <= param_4) {
      fVar9 = param_5;
    }
    if (fVar9 + 1e-08 < param_3) {
      if (param_4 <= param_5) {
        param_4 = param_5;
      }
      if (1e-08 < ABS(fVar9 - param_4)) {
        iVar4 = (int)param_7[1];
        if ((iVar4 == (int)param_2[1]) && (iVar4 != 0)) {
          local_364 = (param_3 - fVar9) / (param_4 - fVar9);
          if (1.0 <= local_364) {
            local_364 = 1.0;
          }
          if (local_364 <= 0.0) {
            local_364 = 0.0;
          }
          lVar8 = *param_2;
          lVar7 = (longlong)iVar4 * 0x70;
          local_360 = (ulonglong)param_6;
          iVar4 = 0;
          do {
            cVar2 = FUN_144828dba((longlong)iVar4 * 0x20 + *param_7,lVar8,lVar1);
            if (cVar2 != '\0') {
              puVar5 = (undefined8 *)(lVar8 + 0x10);
              puVar6 = local_2f8;
              for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              }
              if (param_6 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00014926e081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_14bc05c60 + *(int *)(&DAT_14bc05c60 + local_360 * 4)))();
                return;
              }
              iVar4 = iVar4 + 1;
            }
            lVar8 = lVar8 + 0x70;
            lVar7 = lVar7 + -0x70;
          } while (lVar7 != 0);
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14926f1a2 FUN_14926f1a2 body=25 status=ok
// SIG undefined FUN_14926f1a2(void)

undefined8 FUN_14926f1a2(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14926f1bc FUN_14926f1bc body=229 status=ok
// SIG undefined FUN_14926f1bc(void)

void FUN_14926f1bc(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2 = (longlong *)*param_2;
  puVar5 = (undefined8 *)*param_2;
  uVar1 = *(undefined4 *)param_2[4];
  uVar2 = *(undefined4 *)param_2[8];
  uVar3 = *(undefined4 *)param_2[0xc];
  uVar4 = *(undefined1 *)param_2[0x10];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_68 = FUN_144828ac0(param_2 + 0x14,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  local_60 = *puVar5;
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_78 = uVar3;
  local_70 = uVar4;
  FUN_14926dede(*(undefined8 *)(param_1 + 0xc0),&local_60,uVar1,uVar2);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926f2a2 FUN_14926f2a2 body=151 status=ok
// SIG undefined FUN_14926f2a2(void)

void FUN_14926f2a2(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  longlong local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  local_38 = param_1 + 0x210;
  local_40 = *(undefined1 *)(param_1 + 0x20c);
  local_48 = *(undefined4 *)(param_1 + 0x208);
  FUN_14926dede(param_1 + 0x10,&local_28,*(undefined4 *)(param_1 + 0x200),
                *(undefined4 *)(param_1 + 0x204));
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926f33a FUN_14926f33a body=270 status=ok
// SIG undefined FUN_14926f33a(void)

void FUN_14926f33a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar4 = (undefined8 *)*param_2;
  uVar5 = *puVar4;
  puVar6 = (undefined8 *)puVar4[4];
  uVar1 = *(undefined4 *)puVar4[8];
  uVar2 = *(undefined1 *)puVar4[0xc];
  uVar3 = *(undefined4 *)puVar4[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar4 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_70 = FUN_144828ac0(*param_2 + 0xc0,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  local_60 = *puVar6;
  local_58 = *(undefined4 *)(puVar6 + 1);
  local_88 = uVar2;
  local_80 = uVar3;
  local_78 = uVar8;
  FUN_14926f500(*(undefined8 *)(param_1 + 0xc0),uVar5,&local_60,uVar1);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926f45a FUN_14926f45a body=164 status=ok
// SIG undefined FUN_14926f45a(void)

void FUN_14926f45a(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f8);
  local_20 = *(undefined4 *)(param_1 + 0x200);
  local_30 = param_1 + 0x280;
  local_38 = param_1 + 0x218;
  local_40 = *(undefined4 *)(param_1 + 0x210);
  local_48 = *(undefined1 *)(param_1 + 0x20c);
  FUN_14926f500(param_1 + 0x10,param_1 + 0x1f0,&local_28,*(undefined4 *)(param_1 + 0x208));
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14926f500 FUN_14926f500 body=4127 status=ok
// SIG undefined FUN_14926f500(void)

void FUN_14926f500(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                  undefined1 param_5,int param_6,longlong *param_7,char *param_8)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ushort uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  void *_Dst;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined8 uVar23;
  longlong lVar24;
  longlong *plVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  undefined1 local_1f0;
  undefined1 local_1e8;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  ulonglong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  double local_190;
  longlong *local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 *local_168;
  ulonglong uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  uint local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined8 local_138;
  uint uStack_130;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  int local_a4;
  undefined1 local_a0 [8];
  undefined1 *local_98;
  int local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar8 = *(longlong *)(param_1 + 0x1b0);
  local_1b0 = param_3;
  if (lVar8 != 0) {
    plVar22 = param_7 + 2;
    plVar25 = param_7 + 0xb;
    if (*param_8 == '\0') {
      *(undefined4 *)(param_7 + 1) = 0;
      if (*(int *)((longlong)param_7 + 0xc) < 0) {
        FUN_1492d06b4(param_7,0);
      }
      iVar10 = *(int *)((longlong)param_7 + 100);
      FUN_145af37b3(param_7[0xb],(int)param_7[0xc]);
      *(undefined4 *)(param_7 + 0xc) = 0;
      if ((iVar10 < 0) && (*(int *)((longlong)param_7 + 100) != 0)) {
        FUN_1492d0fba(plVar25);
      }
      FUN_149270d08(plVar22);
      *param_8 = '\x01';
    }
    iVar10 = (int)param_7[0xc];
    local_1d8 = plVar25;
    if (iVar10 == 0) {
      local_1a0._0_4_ = CONCAT31(local_1a0._1_3_,1);
      local_1a0._4_4_ = (undefined4)*param_2;
      local_198._0_4_ = (undefined4)((ulonglong)*param_2 >> 0x20);
      iVar10 = FUN_140813180(lVar8);
      plVar25 = local_1b0;
      if (iVar10 != -1) {
        local_1d0 = (longlong *)CONCAT44(local_1d0._4_4_,iVar10);
        local_1c8 = plVar22;
        if (0 < (int)local_1b0[1]) {
          lVar21 = 0;
          lVar24 = 0;
          do {
            local_d8 = CONCAT31(local_d8._1_3_,1);
            uVar23 = *(undefined8 *)(*plVar25 + lVar21);
            uStack_d4 = (undefined4)uVar23;
            iStack_d0 = (int)((ulonglong)uVar23 >> 0x20);
            local_138._0_4_ = (uint)local_138 & 0xffffff00;
            local_138._4_4_ = 0;
            uStack_130 = 0;
            uStack_12c = 0xffff;
            local_128 = 0xffffffff;
            FUN_144828dba(&local_138,&local_d8,lVar8);
            lVar13 = param_7[1];
            uVar11 = (int)lVar13 + 1;
            *(uint *)(param_7 + 1) = uVar11;
            if (*(uint *)((longlong)param_7 + 0xc) < uVar11) {
              FUN_1492d0738(param_7);
            }
            lVar16 = *param_7;
            lVar13 = (longlong)(int)lVar13 * 0x20;
            puVar18 = (undefined8 *)(lVar16 + 0x10 + lVar13);
            *puVar18 = CONCAT44(uStack_124,local_128);
            puVar18[1] = CONCAT44(uStack_11c,uStack_120);
            puVar1 = (uint *)(lVar16 + lVar13);
            *puVar1 = (uint)local_138;
            puVar1[1] = local_138._4_4_;
            puVar1[2] = uStack_130;
            puVar1[3] = CONCAT22(uStack_12a,uStack_12c);
            lVar24 = lVar24 + 1;
            lVar21 = lVar21 + 0x20;
          } while (lVar24 < (int)plVar25[1]);
        }
        local_b8 = 0;
        local_b0 = 0;
        local_d8 = 0;
        uStack_d4 = 0;
        iStack_d0 = 0;
        uStack_cc = 0;
        local_ac = 0xffffffff00000080;
        local_a4 = 0;
        local_98 = (undefined1 *)0x0;
        local_90 = 0;
        iVar10 = (int)param_7[1];
        if (0 < iVar10) {
          local_1a8 = (ulonglong)local_1d0 & 0xffffffff;
          uVar19 = 0;
          do {
            uVar6 = *(ushort *)(*param_7 + 0xc + uVar19 * 0x20);
            uVar11 = (uint)uVar6;
            if (uVar6 != 0xffff) {
              local_188 = (longlong *)0x0;
              uStack_180 = 0.0;
              local_1c0 = uVar19;
              do {
                if (((int)uVar11 < 0) || (*(int *)(lVar8 + 0xc0) <= (int)uVar11)) {
                  lVar21 = 0;
                }
                else {
                  lVar21 = *(longlong *)(*(longlong *)(lVar8 + 0xb8) + (ulonglong)uVar11 * 8);
                }
                lVar24 = *(longlong *)(lVar21 + 0x14);
                uVar7 = *(undefined4 *)(lVar21 + 0x1c);
                lVar21 = FUN_140813120(lVar8);
                if (lVar21 == 0) {
                  uVar17 = 0xffffffff;
                  uVar23 = 0;
                }
                else {
                  uVar23 = *(undefined8 *)(lVar21 + 0x14);
                  uVar17 = *(undefined4 *)(lVar21 + 0x1c);
                }
                uVar19 = (ulonglong)uStack_180 & 0xffffffff;
                uVar12 = (int)uStack_180 + 1;
                uStack_180 = (double)CONCAT44(uStack_180._4_4_,uVar12);
                if (uStack_180._4_4_ < uVar12) {
                  FUN_1444b5e06(&local_188,uVar19);
                }
                plVar22 = local_188;
                memmove(local_188 + 3,local_188,uVar19 * 0x18);
                *plVar22 = lVar24;
                *(undefined4 *)(plVar22 + 1) = uVar7;
                *(undefined8 *)((longlong)plVar22 + 0xc) = uVar23;
                *(undefined4 *)((longlong)plVar22 + 0x14) = uVar17;
                if (((int)uVar11 < 0) || (*(int *)(lVar8 + 0xc0) <= (int)uVar11)) {
                  local_148 = local_148 & 0xffffff00;
                  uStack_144 = 0;
                  local_140 = 0;
                }
                else {
                  lVar21 = *(longlong *)(*(longlong *)(lVar8 + 0xb8) + (ulonglong)uVar11 * 8);
                  local_140 = *(undefined4 *)(lVar21 + 0x18);
                  uVar23 = *(undefined8 *)(lVar21 + 0x10);
                  local_148 = (uint)uVar23;
                  uStack_144 = (undefined4)((ulonglong)uVar23 >> 0x20);
                }
                uVar12 = (uint)local_1d0;
                FUN_1408130c0(lVar8,&local_138,&local_148);
                uVar11 = FUN_140813180(lVar8);
              } while ((uVar11 != uVar12) && (uVar11 != 0xffffffff));
              if (uVar11 == uVar12) {
                if (((int)uVar12 < 0) || (*(int *)(lVar8 + 0xc0) <= (int)uVar12)) {
                  lVar21 = 0;
                }
                else {
                  lVar21 = *(longlong *)(*(longlong *)(lVar8 + 0xb8) + local_1a8 * 8);
                }
                lVar24 = *(longlong *)(lVar21 + 0x14);
                uVar7 = *(undefined4 *)(lVar21 + 0x1c);
                lVar21 = FUN_140813120(lVar8);
                if (lVar21 == 0) {
                  uVar17 = 0xffffffff;
                  uVar23 = 0;
                }
                else {
                  uVar23 = *(undefined8 *)(lVar21 + 0x14);
                  uVar17 = *(undefined4 *)(lVar21 + 0x1c);
                }
                uVar19 = (ulonglong)uStack_180 & 0xffffffff;
                uVar11 = (int)uStack_180 + 1;
                uStack_180 = (double)CONCAT44(uStack_180._4_4_,uVar11);
                if (uStack_180._4_4_ < uVar11) {
                  FUN_1444b5e06(&local_188,uVar19);
                }
                plVar22 = local_188;
                memmove(local_188 + 3,local_188,uVar19 * 0x18);
                *plVar22 = lVar24;
                *(undefined4 *)(plVar22 + 1) = uVar7;
                *(undefined8 *)((longlong)plVar22 + 0xc) = uVar23;
                *(undefined4 *)((longlong)plVar22 + 0x14) = uVar17;
                if ((longlong)(int)uStack_180 != 0) {
                  plVar22 = local_188 + (longlong)(int)uStack_180 * 3;
                  plVar25 = local_188;
                  local_1b8 = plVar22;
                  do {
                    plVar3 = local_1d8;
                    if (iStack_d0 != local_a4) {
                      lVar21 = *plVar25;
                      uVar11 = (uint)((ulonglong)lVar21 >> 0x10);
                      uVar12 = (uint)lVar21 & 0xffff;
                      puVar14 = local_98;
                      if (local_98 == (undefined1 *)0x0) {
                        puVar14 = local_a0;
                      }
                      iVar10 = *(int *)(puVar14 +
                                       (ulonglong)
                                       (local_90 - 1U &
                                       (int)((ulonglong)lVar21 >> 0x20) +
                                       ((uint)lVar21 << 0x10 | uVar12) +
                                       (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar12 >> 4)) * 4);
                      if (iVar10 != -1) {
                        do {
                          plVar2 = (longlong *)
                                   (CONCAT44(uStack_d4,local_d8) + (longlong)iVar10 * 0x14);
                          if (*plVar2 == lVar21) {
                            if ((plVar2 != (longlong *)0x0) && (plVar2 + 1 != (longlong *)0x0)) {
                              iVar10 = (int)plVar2[1];
                              local_168 = (undefined8 *)CONCAT44(local_168._4_4_,iVar10);
                              lVar21 = (longlong)iVar10 * 0x80 + *local_1d8;
                              goto LAB_14927009d;
                            }
                            break;
                          }
                          iVar10 = *(int *)((longlong)plVar2 + 0xc);
                        } while (iVar10 != -1);
                      }
                    }
                    local_168._0_4_ = 0xffffffff;
                    iVar10 = FUN_149270d50(local_1d8);
                    local_168 = (undefined8 *)CONCAT44(local_168._4_4_,iVar10);
                    lVar24 = *plVar3;
                    lVar13 = (longlong)iVar10 * 0x80;
                    lVar21 = lVar24 + lVar13;
                    *(longlong *)(lVar24 + lVar13) = *plVar25;
                    local_158._0_1_ = 1;
                    uStack_154 = (undefined4)*plVar25;
                    local_150 = (undefined4)((ulonglong)*plVar25 >> 0x20);
                    local_138._0_4_ = (uint)local_138 & 0xffffff00;
                    local_138._4_4_ = 0;
                    uStack_130 = 0;
                    uStack_12c = 0xffff;
                    local_128 = 0xffffffff;
                    FUN_144828dba(&local_138,&local_158,lVar8);
                    puVar1 = (uint *)(lVar24 + 8 + lVar13);
                    *puVar1 = (uint)local_138;
                    puVar1[1] = local_138._4_4_;
                    puVar1[2] = uStack_130;
                    puVar1[3] = CONCAT22(uStack_12a,uStack_12c);
                    puVar4 = (undefined4 *)(lVar24 + 0x18 + lVar13);
                    *puVar4 = local_128;
                    puVar4[1] = uStack_124;
                    puVar4[2] = uStack_120;
                    puVar4[3] = uStack_11c;
                    local_158 = CONCAT31(local_158._1_3_,1);
                    uStack_154 = (undefined4)*(undefined8 *)((longlong)plVar25 + 0xc);
                    local_150 = (undefined4)
                                ((ulonglong)*(undefined8 *)((longlong)plVar25 + 0xc) >> 0x20);
                    local_138._0_4_ = (uint)local_138 & 0xffffff00;
                    local_138._4_4_ = 0;
                    uStack_130 = 0;
                    uStack_12c = 0xffff;
                    local_128 = 0xffffffff;
                    FUN_144828dba(&local_138,&local_158,lVar8);
                    puVar1 = (uint *)(lVar24 + 0x28 + lVar13);
                    *puVar1 = (uint)local_138;
                    puVar1[1] = local_138._4_4_;
                    puVar1[2] = uStack_130;
                    puVar1[3] = CONCAT22(uStack_12a,uStack_12c);
                    puVar4 = (undefined4 *)(lVar24 + 0x38 + lVar13);
                    *puVar4 = local_128;
                    puVar4[1] = uStack_124;
                    puVar4[2] = uStack_120;
                    puVar4[3] = uStack_11c;
                    if ((((*(short *)(lVar24 + 0x34 + lVar13) == -1) ||
                         (DAT_14c87eb08 + 1U <= (uint)*(ushort *)(lVar21 + 0x2e))) ||
                        (*(longlong *)(lVar21 + 0x2c) == 0)) ||
                       (*(char *)(lVar24 + lVar13 + 0x28) == '\0')) {
                      *(undefined4 *)(lVar21 + 0x60) = 0;
                    }
                    else {
                      uVar11 = (uint)*(ushort *)(lVar21 + 0x14);
                      if (uVar11 == 0xffff) {
                        uVar11 = 0xffffffff;
                      }
                      FUN_144afced8(lVar8,&local_138,uVar11,0);
                      *(float *)(lVar21 + 0x60) =
                           (float)SQRT(local_108 * local_108 +
                                       (double)CONCAT44(uStack_114,local_118) *
                                       (double)CONCAT44(uStack_114,local_118) +
                                       (double)CONCAT44(uStack_10c,uStack_110) *
                                       (double)CONCAT44(uStack_10c,uStack_110));
                    }
                    plVar22 = local_1b8;
                    if (iStack_d0 != local_a4) {
                      lVar24 = *(longlong *)((longlong)plVar25 + 0xc);
                      uVar11 = (uint)((ulonglong)lVar24 >> 0x10);
                      uVar12 = (uint)lVar24 & 0xffff;
                      puVar14 = local_98;
                      if (local_98 == (undefined1 *)0x0) {
                        puVar14 = local_a0;
                      }
                      iVar10 = *(int *)(puVar14 +
                                       (ulonglong)
                                       (local_90 - 1U &
                                       (int)((ulonglong)lVar24 >> 0x20) +
                                       ((uint)lVar24 << 0x10 | uVar12) +
                                       (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar12 >> 4)) * 4);
                      if (iVar10 != -1) {
                        do {
                          plVar3 = (longlong *)
                                   (CONCAT44(uStack_d4,local_d8) + (longlong)iVar10 * 0x14);
                          if (*plVar3 == lVar24) {
                            if (plVar3 + 1 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
                              *(int *)(lVar21 + 0x48) = (int)plVar3[1];
                            }
                            break;
                          }
                          iVar10 = *(int *)((longlong)plVar3 + 0xc);
                        } while (iVar10 != -1);
                      }
                    }
                    uStack_130 = (uint)&local_168;
                    uStack_12c = (undefined2)((ulonglong)&local_168 >> 0x20);
                    uStack_12a = (undefined2)((ulonglong)&local_168 >> 0x30);
                    local_138 = lVar21;
                    FUN_140171856(&local_d8,&local_158,&local_138);
LAB_14927009d:
                    if ((longlong)*(int *)(lVar21 + 0x48) != -1) {
                      FUN_1449e3bb0(*local_1d8 + (longlong)*(int *)(lVar21 + 0x48) * 0x80 + 0x50);
                    }
                    plVar25 = plVar25 + 3;
                  } while (plVar25 != plVar22);
                }
              }
              uVar19 = local_1c0;
              if (local_188 != (longlong *)0x0) {
                FUN_1400020a8(local_188);
              }
              iVar10 = (int)param_7[1];
            }
            uVar19 = uVar19 + 1;
          } while ((longlong)uVar19 < (longlong)iVar10);
        }
        local_138._0_4_ = 0;
        local_138._4_4_ = 0;
        uStack_12c = 0;
        uStack_12a = 0;
        uStack_130 = *(uint *)(param_7 + 0xc);
        lVar21 = (longlong)(int)uStack_130;
        if (lVar21 == 0) {
          _Dst = (void *)0x0;
        }
        else {
          FUN_1492d10de(&local_138);
          _Dst = (void *)CONCAT44(local_138._4_4_,(uint)local_138);
        }
        plVar22 = local_1d8;
        memset(_Dst,0,lVar21 << 5);
        if (0 < (int)param_7[0xc]) {
          lVar21 = 0;
          lVar24 = 0;
          do {
            lVar16 = (longlong)*(int *)(param_7[0xb] + 0x48 + lVar21 * 4);
            lVar13 = 0;
            if (lVar16 != -1) {
              lVar13 = lVar16 * 0x20 + CONCAT44(local_138._4_4_,(uint)local_138);
            }
            *(longlong *)(CONCAT44(local_138._4_4_,(uint)local_138) + lVar21) = lVar13;
            *(int *)(CONCAT44(local_138._4_4_,(uint)local_138) + 8 + lVar21) = (int)lVar24;
            lVar24 = lVar24 + 1;
            lVar21 = lVar21 + 0x20;
          } while (lVar24 < (int)param_7[0xc]);
          if (0 < (int)param_7[0xc]) {
            lVar21 = *plVar22;
            lVar24 = 0;
            do {
              lVar13 = lVar24 * 0x80;
              uVar11 = *(uint *)(lVar21 + 0x58 + lVar13);
              if (0 < (longlong)(int)uVar11) {
                lVar21 = CONCAT44(local_138._4_4_,(uint)local_138) + lVar24 * 0x20;
                iVar10 = *(int *)(lVar21 + 0x18);
                *(uint *)(lVar21 + 0x18) = iVar10 + uVar11;
                if ((uint)(*(int *)(lVar21 + 0x1c) - iVar10) < uVar11) {
                  FUN_1492d115c((longlong *)(lVar21 + 0x10));
                }
                memset((void *)((longlong)iVar10 * 8 + *(longlong *)(lVar21 + 0x10)),0,
                       (longlong)(int)uVar11 << 3);
                lVar21 = *local_1d8;
                if (0 < *(int *)(lVar21 + 0x58 + lVar13)) {
                  lVar16 = lVar21 + lVar13;
                  lVar15 = 0;
                  do {
                    lVar16 = (longlong)*(int *)(*(longlong *)(lVar16 + 0x50) + lVar15 * 4);
                    lVar21 = 0;
                    if (lVar16 != -1) {
                      lVar21 = lVar16 * 0x20 + CONCAT44(local_138._4_4_,(uint)local_138);
                    }
                    *(longlong *)
                     (*(longlong *)
                       (CONCAT44(local_138._4_4_,(uint)local_138) + 0x10 + lVar24 * 0x20) +
                     lVar15 * 8) = lVar21;
                    lVar15 = lVar15 + 1;
                    lVar21 = *local_1d8;
                    lVar16 = lVar21 + lVar13;
                  } while (lVar15 < *(int *)(lVar16 + 0x58));
                }
              }
              lVar24 = lVar24 + 1;
            } while (lVar24 < (int)param_7[0xc]);
          }
        }
        plVar22 = local_1c8;
        if (0 < (int)uStack_130) {
          *(undefined4 *)(param_7 + 8) = 0;
          local_188 = (longlong *)0x0;
          uStack_180 = 0.0;
          iVar10 = (int)param_7[1];
          if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar10);
          }
          if (iVar10 != 0) {
            FUN_14481578e(&local_188);
            lVar21 = param_7[1];
            if ((longlong)(int)lVar21 != 0) {
              lVar24 = *param_7;
              lVar13 = 0;
              do {
                dVar26 = uStack_180;
                uVar11 = (uint)*(ushort *)(lVar24 + 0xc + lVar13);
                if (uVar11 == 0xffff) {
                  uVar11 = 0xffffffff;
                }
                lVar16 = (longlong)(int)uStack_180;
                uVar12 = (int)uStack_180 + 1;
                uStack_180 = (double)CONCAT44(uStack_180._4_4_,uVar12);
                if (uStack_180._4_4_ < uVar12) {
                  FUN_1446f48e2(&local_188,(ulonglong)dVar26 & 0xffffffff);
                }
                *(uint *)((longlong)local_188 + lVar16 * 4) = uVar11;
                lVar13 = lVar13 + 0x20;
              } while ((longlong)(int)lVar21 * 0x20 != lVar13);
            }
          }
          plVar22 = local_1c8;
          FUN_1444b156f(CONCAT44(local_138._4_4_,(uint)local_138),local_1c8,local_1d8,&local_188);
          if (local_188 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        FUN_1492d10af(CONCAT44(local_138._4_4_,(uint)local_138),uStack_130);
        if (CONCAT44(local_138._4_4_,(uint)local_138) != 0) {
          FUN_1400020a8();
        }
        local_90 = 0;
        if (local_98 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1401ad17c(&local_d8);
      }
      iVar10 = (int)param_7[0xc];
    }
    if (0 < iVar10) {
      lVar24 = 0;
      lVar21 = 0;
      local_1c8 = plVar22;
      do {
        uVar11 = (uint)*(ushort *)(param_7[0xb] + 0x14 + lVar24);
        if (uVar11 == 0xffff) {
          uVar11 = 0xffffffff;
        }
        FUN_14486750c(lVar8,&local_138,uVar11,0);
        plVar25 = local_1c8;
        plVar22 = local_1d8;
        lVar13 = param_7[0xb];
        puVar4 = (undefined4 *)(lVar13 + 0x68 + lVar24);
        *puVar4 = local_118;
        puVar4[1] = uStack_114;
        puVar4[2] = uStack_110;
        puVar4[3] = uStack_10c;
        *(double *)(lVar13 + 0x78 + lVar24) = local_108;
        lVar21 = lVar21 + 1;
        uVar11 = *(uint *)(param_7 + 0xc);
        lVar24 = lVar24 + 0x80;
      } while (lVar21 < (int)uVar11);
      lVar21 = *local_1d8;
      local_c8 = *(undefined8 *)(lVar21 + 0x78);
      local_d8 = *(undefined4 *)(lVar21 + 0x68);
      uStack_d4 = *(undefined4 *)(lVar21 + 0x6c);
      iStack_d0 = *(int *)(lVar21 + 0x70);
      uStack_cc = *(undefined4 *)(lVar21 + 0x74);
      local_150 = (undefined4)local_1b0[1];
      local_158 = (undefined4)*local_1b0;
      uStack_154 = (undefined4)((ulonglong)*local_1b0 >> 0x20);
      if (0 < param_6) {
        do {
          FUN_14927078f(plVar25,plVar22);
          FUN_14927083a(plVar25,plVar22,&local_158,param_4);
          lVar21 = *plVar22;
          *(undefined8 *)(lVar21 + 0x78) = local_c8;
          *(undefined4 *)(lVar21 + 0x68) = local_d8;
          *(undefined4 *)(lVar21 + 0x6c) = uStack_d4;
          *(int *)(lVar21 + 0x70) = iStack_d0;
          *(undefined4 *)(lVar21 + 0x74) = uStack_cc;
          FUN_1492709a9(plVar25,plVar22);
          param_6 = param_6 + -1;
        } while (param_6 != 0);
        uVar11 = *(uint *)(param_7 + 0xc);
      }
      local_168 = (undefined8 *)0x0;
      uStack_160 = (ulonglong)uVar11;
      if (uVar11 != 0) {
        FUN_144a2c682(&local_168,0);
      }
      uVar12 = (uint)*(ushort *)(*local_1d8 + 0x14);
      if (*(ushort *)(*local_1d8 + 0x14) == 0xffff) {
        uVar12 = 0xffffffff;
      }
      FUN_14486750c(lVar8,&local_138,uVar12,0);
      plVar22 = local_1d8;
      puVar18 = &local_138;
      puVar20 = local_168;
      for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
        *puVar20 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar20 = puVar20 + 1;
      }
      if (1 < (int)uVar11) {
        local_1c0 = (ulonglong)uVar11;
        local_1b8 = (longlong *)(local_1c0 * 0x60 + -0x60);
        lVar21 = 0;
        plVar25 = (longlong *)0x0;
        do {
          uVar11 = (uint)*(ushort *)(*plVar22 + 0x94 + lVar21);
          if (uVar11 == 0xffff) {
            uVar11 = 0xffffffff;
          }
          FUN_14486750c(lVar8,&local_138,uVar11,0);
          local_1d0 = plVar25 + 0xc;
          puVar18 = &local_138;
          puVar20 = (undefined8 *)((longlong)local_168 + (longlong)local_1d0);
          for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
            *puVar20 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar20 = puVar20 + 1;
          }
          uVar11 = (uint)*(ushort *)(*plVar22 + 0xb4 + lVar21);
          if (uVar11 == 0xffff) {
            uVar11 = 0xffffffff;
          }
          FUN_14486750c(lVar8,&local_138,uVar11,0);
          lVar24 = *plVar22;
          lVar13 = (longlong)*(int *)(lVar24 + 200 + lVar21) * 0x80;
          local_178 = *(double *)((longlong)(local_168 + 0x12) + (longlong)plVar25) - local_108;
          dVar27 = *(double *)((longlong)(local_168 + 0x10) + (longlong)plVar25) -
                   (double)CONCAT44(uStack_114,local_118);
          uStack_180 = ((double *)((longlong)(local_168 + 0x10) + (longlong)plVar25))[1] -
                       (double)CONCAT44(uStack_10c,uStack_110);
          dVar26 = 1.0 / SQRT(local_178 * local_178 + dVar27 * dVar27 + uStack_180 * uStack_180);
          local_178 = local_178 * dVar26;
          uStack_180 = uStack_180 * dVar26;
          local_188 = (longlong *)(dVar26 * dVar27);
          local_190 = *(double *)(lVar24 + 0xf8 + lVar21) - *(double *)(lVar24 + 0x78 + lVar13);
          dVar26 = *(double *)(lVar24 + 0xe8 + lVar21) - *(double *)(lVar24 + 0x68 + lVar13);
          local_198 = *(double *)(lVar24 + 0xf0 + lVar21) - *(double *)(lVar24 + 0x70 + lVar13);
          local_1a0 = 1.0 / SQRT(local_190 * local_190 + dVar26 * dVar26 + local_198 * local_198);
          local_190 = local_190 * local_1a0;
          local_198 = local_198 * local_1a0;
          local_1a0 = local_1a0 * dVar26;
          uVar23 = *(undefined8 *)(lVar24 + 0xf8 + lVar21);
          puVar4 = (undefined4 *)(lVar24 + 0xe8 + lVar21);
          uVar7 = puVar4[1];
          uVar17 = puVar4[2];
          uVar9 = puVar4[3];
          puVar5 = (undefined4 *)((longlong)(local_168 + 0x10) + (longlong)plVar25);
          *puVar5 = *puVar4;
          puVar5[1] = uVar7;
          puVar5[2] = uVar17;
          puVar5[3] = uVar9;
          *(undefined8 *)((longlong)(local_168 + 0x12) + (longlong)plVar25) = uVar23;
          ((undefined8 *)((longlong)(local_168 + 0x12) + (longlong)plVar25))[1] = 0;
          FUN_149270a76(&local_188,&local_1a0,
                        local_168 + (longlong)*(int *)(*plVar22 + 200 + lVar21) * 0xc);
          plVar3 = local_1d8;
          lVar21 = lVar21 + 0x80;
          plVar25 = local_1d0;
        } while (local_1b8 != local_1d0);
        local_1d0 = (longlong *)(local_1c0 * 0x60);
        plVar22 = (longlong *)&DAT_00000060;
        lVar21 = 0x94;
        do {
          uVar11 = (uint)*(ushort *)(*plVar3 + lVar21);
          if (*(ushort *)(*plVar3 + lVar21) == 0xffff) {
            uVar11 = 0xffffffff;
          }
          puVar18 = (undefined8 *)((longlong)local_168 + (longlong)plVar22);
          puVar20 = &local_138;
          for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
            *puVar20 = *puVar18;
            puVar18 = puVar18 + 1;
            puVar20 = puVar20 + 1;
          }
          local_1e8 = 0;
          local_1f0 = 0;
          local_1f8 = param_5;
          FUN_144831e8e(lVar8,uVar11,&local_138,0);
          plVar22 = plVar22 + 0xc;
          lVar21 = lVar21 + 0x80;
        } while (local_1d0 != plVar22);
      }
      if (local_168 != (undefined8 *)0x0) {
        FUN_1400020a8(local_168);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149270521 FUN_149270521 body=358 status=ok
// SIG undefined FUN_149270521(void)

void FUN_149270521(longlong *param_1,double *param_2,float param_3)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  iVar2 = (int)param_1[1];
  lVar7 = *param_1;
  lVar8 = (longlong)iVar2 * 0x50;
  dVar3 = *param_2 - *(double *)(lVar7 + -0x50 + lVar8);
  dVar9 = param_2[1] - *(double *)(lVar7 + -0x48 + lVar8);
  dVar4 = param_2[2] - *(double *)(lVar7 + -0x40 + lVar8);
  if (param_3 * param_3 < (float)(dVar4 * dVar4 + dVar9 * dVar9 + dVar3 * dVar3)) {
    lVar7 = lVar7 + lVar8;
    *(double *)(lVar7 + -0x40) = param_2[2];
    dVar3 = param_2[1];
    *(double *)(lVar7 + -0x50) = *param_2;
    *(double *)(lVar7 + -0x48) = dVar3;
    if (1 < iVar2) {
      lVar7 = (ulonglong)(iVar2 - 2) * 0x50;
      do {
        lVar8 = *param_1;
        dVar3 = *(double *)(lVar8 + 0x60 + lVar7);
        dVar10 = *(double *)(lVar8 + 0x10 + lVar7) - dVar3;
        dVar4 = *(double *)(lVar8 + 0x58 + lVar7);
        dVar11 = *(double *)(lVar8 + 8 + lVar7) - dVar4;
        dVar9 = *(double *)(lVar8 + 0x50 + lVar7);
        dVar5 = *(double *)(lVar8 + lVar7) - dVar9;
        dVar6 = 1.0 / SQRT(dVar10 * dVar10 + dVar5 * dVar5 + dVar11 * dVar11);
        dVar1 = *(double *)(lVar8 + 0x68 + lVar7);
        *(double *)(lVar8 + lVar7) = dVar6 * dVar5 * dVar1 + dVar9;
        *(double *)(lVar8 + 8 + lVar7) = dVar11 * dVar6 * dVar1 + dVar4;
        *(double *)(lVar8 + 0x10 + lVar7) = dVar10 * dVar6 * dVar1 + dVar3;
        lVar7 = lVar7 + -0x50;
      } while (lVar7 != -0x50);
    }
  }
  return;
}



// FUNCTION 149270687 FUN_149270687 body=264 status=ok
// SIG undefined FUN_149270687(void)

void FUN_149270687(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  
  lVar8 = param_1[1];
  if (1 < (longlong)(int)lVar8) {
    lVar9 = 0x50;
    do {
      lVar5 = *param_1;
      dVar1 = *(double *)(lVar5 + -0x40 + lVar9);
      dVar10 = *(double *)(lVar5 + 0x10 + lVar9) - dVar1;
      dVar2 = *(double *)(lVar5 + -0x50 + lVar9);
      dVar3 = *(double *)(lVar5 + -0x48 + lVar9);
      dVar11 = *(double *)(lVar5 + 8 + lVar9) - dVar3;
      dVar6 = *(double *)(lVar5 + lVar9) - dVar2;
      dVar7 = 1.0 / SQRT(dVar10 * dVar10 + dVar6 * dVar6 + dVar11 * dVar11);
      dVar4 = *(double *)(lVar5 + 0x18 + lVar9);
      *(double *)(lVar5 + lVar9) = dVar7 * dVar6 * dVar4 + dVar2;
      *(double *)(lVar5 + 8 + lVar9) = dVar11 * dVar7 * dVar4 + dVar3;
      *(double *)(lVar5 + 0x10 + lVar9) = dVar10 * dVar7 * dVar4 + dVar1;
      lVar9 = lVar9 + 0x50;
    } while ((longlong)(int)lVar8 * 0x50 != lVar9);
  }
  return;
}



// FUNCTION 14927078f FUN_14927078f body=171 status=ok
// SIG undefined FUN_14927078f(void)

void FUN_14927078f(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  
  if ((int)param_1[1] < 1) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = 0.0;
    lVar7 = 0x24;
    lVar8 = 0;
    do {
      lVar4 = *param_1;
      lVar5 = *param_2;
      lVar9 = (longlong)*(int *)(lVar4 + lVar7) * 0x80;
      puVar1 = (undefined8 *)(lVar5 + 0x68 + lVar9);
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + -0x24 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      *(undefined8 *)(lVar4 + -0x14 + lVar7) = *(undefined8 *)(lVar5 + 0x78 + lVar9);
      fVar3 = *(float *)(*param_2 + 0x60 + lVar9);
      *(double *)(lVar4 + -0xc + lVar7) = (double)fVar3;
      fVar10 = fVar10 + fVar3;
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x50;
    } while (lVar8 < (int)param_1[1]);
  }
  *(float *)((longlong)param_1 + 0x2c) = fVar10;
  if (0 < (int)param_1[8]) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      FUN_14927078f(param_1[7] + lVar7,param_2);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x48;
    } while (lVar8 < (int)param_1[8]);
  }
  return;
}



// FUNCTION 14927083a FUN_14927083a body=367 status=ok
// SIG undefined FUN_14927083a(void)

void FUN_14927083a(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  double *pdVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  iVar4 = (int)param_1[8];
  if (0 < (longlong)iVar4) {
    lVar11 = 0;
    do {
      FUN_14927083a(param_1[7] + lVar11,param_2,param_3,param_4);
      lVar11 = lVar11 + 0x48;
    } while ((longlong)iVar4 * 0x48 != lVar11);
  }
  if ((longlong)(int)param_1[5] == -1) {
    if (1 < iVar4) {
      dVar12 = DAT_14c8464e8;
      dVar13 = DAT_14c8464f0;
      dVar14 = DAT_14c8464e0;
      if (0 < (longlong)(int)param_1[8]) {
        lVar11 = 0;
        do {
          pdVar5 = *(double **)(param_1[7] + lVar11);
          dVar14 = dVar14 + *pdVar5;
          dVar12 = dVar12 + pdVar5[1];
          dVar13 = dVar13 + pdVar5[2];
          lVar11 = lVar11 + 0x48;
        } while ((longlong)(int)param_1[8] * 0x48 != lVar11);
      }
      dVar15 = 1.0 / (double)iVar4;
      param_1[2] = (longlong)(dVar15 * dVar14);
      param_1[3] = (longlong)(dVar12 * dVar15);
      param_1[4] = (longlong)(dVar13 * dVar15);
    }
  }
  else {
    lVar11 = *param_3;
    lVar9 = (longlong)(int)param_1[5] * 0x20;
    param_1[4] = *(longlong *)(lVar11 + 0x18 + lVar9);
    plVar1 = (longlong *)(lVar11 + 8 + lVar9);
    lVar11 = plVar1[1];
    param_1[2] = *plVar1;
    param_1[3] = lVar11;
  }
  FUN_149270521(param_1,param_1 + 2,param_4);
  if (1 < (int)param_1[1]) {
    lVar11 = 1;
    lVar9 = 0x74;
    do {
      lVar6 = *param_1;
      lVar7 = *param_2;
      lVar10 = (longlong)*(int *)(lVar6 + lVar9) * 0x80;
      *(undefined8 *)(lVar7 + 0x78 + lVar10) = *(undefined8 *)(lVar6 + -0x14 + lVar9);
      puVar2 = (undefined8 *)(lVar6 + -0x24 + lVar9);
      uVar8 = puVar2[1];
      puVar3 = (undefined8 *)(lVar7 + 0x68 + lVar10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar8;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 0x50;
    } while (lVar11 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1492709a9 FUN_1492709a9 body=205 status=ok
// SIG undefined FUN_1492709a9(void)

void FUN_1492709a9(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (0 < (int)param_1[1]) {
    lVar8 = 0;
    lVar9 = 0;
    do {
      lVar3 = *param_1;
      lVar4 = *param_2;
      lVar10 = (longlong)*(int *)(lVar3 + 0x24 + lVar8) * 0x80;
      *(undefined8 *)(lVar3 + 0x10 + lVar8) = *(undefined8 *)(lVar4 + 0x78 + lVar10);
      puVar2 = (undefined4 *)(lVar4 + 0x68 + lVar10);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      puVar1 = (undefined4 *)(lVar3 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x50;
    } while (lVar9 < (int)param_1[1]);
  }
  FUN_149270687(param_1);
  if (1 < (int)param_1[1]) {
    lVar8 = 1;
    lVar9 = 0x74;
    do {
      lVar3 = *param_1;
      lVar4 = *param_2;
      lVar10 = (longlong)*(int *)(lVar3 + lVar9) * 0x80;
      *(undefined8 *)(lVar4 + 0x78 + lVar10) = *(undefined8 *)(lVar3 + -0x14 + lVar9);
      puVar1 = (undefined4 *)(lVar3 + -0x24 + lVar9);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(lVar4 + 0x68 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x50;
    } while (lVar8 < (int)param_1[1]);
  }
  lVar8 = param_1[8];
  if (0 < (longlong)(int)lVar8) {
    lVar9 = 0;
    do {
      FUN_1492709a9(param_1[7] + lVar9,param_2);
      lVar9 = lVar9 + 0x48;
    } while ((longlong)(int)lVar8 * 0x48 != lVar9);
  }
  return;
}



// FUNCTION 149270a76 FUN_149270a76 body=658 status=ok
// SIG undefined FUN_149270a76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149270a76(double *param_1,double *param_2,double *param_3)

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
  double dVar12;
  undefined1 auVar13 [16];
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  
  dVar9 = *param_1;
  dVar7 = param_1[1];
  dVar16 = *param_2;
  dVar1 = param_2[1];
  dVar12 = dVar9 * dVar1 - dVar16 * dVar7;
  dVar8 = param_1[2];
  dVar10 = param_2[2];
  dVar3 = dVar8 * dVar16 - dVar10 * dVar9;
  dVar5 = dVar7 * dVar10 - dVar1 * dVar8;
  dVar11 = dVar12 * dVar12 + dVar5 * dVar5 + dVar3 * dVar3;
  if (((dVar11 != 1.0) || (dVar2 = dVar12, dVar4 = dVar3, dVar6 = dVar5, NAN(dVar11))) &&
     (dVar2 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar6 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar11)) {
    dVar11 = 1.0 / SQRT(dVar11);
    dVar2 = dVar12 * dVar11;
    dVar4 = dVar3 * dVar11;
    dVar6 = dVar5 * dVar11;
  }
  dVar7 = dVar8 * dVar10 + dVar9 * dVar16 + dVar1 * dVar7;
  dVar9 = dVar7;
  if (1.0 <= dVar7) {
    dVar9 = 1.0;
  }
  dVar9 = acos((double)(-(ulonglong)(dVar7 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar7 < -1.0) & (ulonglong)dVar9));
  dVar7 = sin((double)(float)dVar9 * 0.5);
  dVar8 = cos((double)(float)dVar9 * 0.5);
  dVar6 = dVar6 * dVar7;
  dVar4 = dVar4 * dVar7;
  dVar2 = dVar2 * dVar7;
  dVar9 = *param_3;
  dVar7 = param_3[1];
  dVar16 = param_3[2];
  dVar1 = param_3[3];
  dVar10 = dVar7 * dVar2 * -1.0 + dVar16 * dVar4 + dVar6 * dVar1 * 1.0 + dVar9 * dVar8;
  dVar11 = dVar9 * dVar2 * 1.0 + dVar1 * dVar4 + dVar6 * dVar16 * -1.0 + dVar7 * dVar8;
  dVar12 = dVar1 * dVar2 * 1.0 + ((dVar6 * dVar7 * 1.0 + dVar8 * dVar16) - dVar9 * dVar4);
  dVar9 = dVar16 * dVar2 * -1.0 + ((dVar6 * dVar9 * -1.0 + dVar8 * dVar1) - dVar7 * dVar4);
  dVar7 = dVar12 * dVar12 + dVar10 * dVar10;
  dVar16 = dVar9 * dVar9 + dVar11 * dVar11;
  auVar14._0_8_ = dVar7 + dVar16;
  auVar14._8_8_ = dVar7 + dVar16;
  auVar13._8_8_ = -(ulonglong)(1e-08 <= auVar14._8_8_);
  auVar13._0_8_ = -(ulonglong)(1e-08 <= auVar14._0_8_);
  auVar15 = sqrtpd(auVar14,auVar14);
  auVar15 = divpd(_DAT_149934d80,auVar15);
  auVar17._0_8_ = auVar15._0_8_ * dVar12;
  auVar17._8_8_ = auVar15._8_8_ * dVar9;
  auVar13 = blendvpd(_DAT_149935300,auVar17,auVar13);
  *param_3 = (double)((ulonglong)(dVar10 * auVar15._0_8_) & -(ulonglong)(1e-08 <= auVar14._0_8_));
  param_3[1] = (double)((ulonglong)(dVar11 * auVar15._8_8_) & -(ulonglong)(1e-08 <= auVar14._8_8_));
  *(undefined1 (*) [16])(param_3 + 2) = auVar13;
  return;
}



// FUNCTION 149270d08 FUN_149270d08 body=71 status=ok
// SIG undefined FUN_149270d08(void)

void FUN_149270d08(longlong param_1)

{
  int iVar1;
  
  FUN_1492c04d0();
  iVar1 = *(int *)(param_1 + 0x44);
  FUN_145af382b(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_1492c052a(param_1 + 0x38);
    return;
  }
  return;
}



// FUNCTION 149270d50 FUN_149270d50 body=58 status=ok
// SIG undefined FUN_149270d50(void)

int FUN_149270d50(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1492d102a(param_1,iVar1);
  }
  FUN_1492d0fea((longlong)iVar1 * 0x80 + *param_1);
  return iVar1;
}



// FUNCTION 149270d8a FUN_149270d8a body=128 status=ok
// SIG undefined FUN_149270d8a(void)

void FUN_149270d8a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar5 = puVar3[4];
  uVar1 = *(undefined4 *)puVar3[8];
  uVar2 = *(undefined1 *)puVar3[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar7 = FUN_144828ac0(puVar3 + 0x10,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  FUN_149270e68(*(undefined8 *)(param_1 + 0xc0),uVar4,uVar5,uVar1,uVar2,uVar7);
  return;
}



// FUNCTION 149270e12 FUN_149270e12 body=86 status=ok
// SIG undefined FUN_149270e12(void)

void FUN_149270e12(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149270e68(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1f8,*(undefined4 *)(param_1 + 0x200),
                *(undefined1 *)(param_1 + 0x204),param_1 + 0x208);
  return;
}



// FUNCTION 149270e68 FUN_149270e68 body=211 status=ok
// SIG undefined FUN_149270e68(void)

void FUN_149270e68(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined1 param_5,longlong param_6)

{
  undefined8 unaff_RBX;
  longlong lVar1;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined1 local_68;
  undefined8 local_64;
  undefined1 local_5c;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_6 + 0x20) == 0) {
    local_5c = 1;
    local_58 = *param_3;
    local_68 = 1;
    local_64 = *param_2;
    local_78 = local_78 & 0xffffffffffffff00;
    FUN_1491f31fc(&local_50,*(undefined8 *)(param_1 + 0x1b0));
    lVar1 = local_50;
  }
  else {
    local_48 = 0;
    lVar1 = 0;
  }
  local_78 = param_6;
  local_50 = lVar1;
  FUN_14927119e(param_1,&local_50,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149270f3c FUN_149270f3c body=169 status=ok
// SIG undefined FUN_149270f3c(void)

void FUN_149270f3c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = (longlong *)*param_2;
  puVar3 = (undefined8 *)*param_2;
  uVar1 = *(undefined4 *)param_2[4];
  uVar2 = *(undefined1 *)param_2[8];
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_48 = FUN_144828ac0(param_2 + 0xc,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  local_40 = *puVar3;
  local_38 = *(undefined4 *)(puVar3 + 1);
  FUN_14927119e(*(undefined8 *)(param_1 + 0xc0),&local_40,uVar1,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149270fee FUN_149270fee body=126 status=ok
// SIG undefined FUN_149270fee(void)

void FUN_149270fee(longlong param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_38 = param_1 + 0x208;
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  FUN_14927119e(param_1 + 0x10,&local_28,*(undefined4 *)(param_1 + 0x200),
                *(undefined1 *)(param_1 + 0x204));
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14927106e FUN_14927106e body=167 status=ok
// SIG undefined FUN_14927106e(void)

void FUN_14927106e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = (longlong *)*param_2;
  puVar3 = (undefined8 *)*param_2;
  uVar1 = *(undefined4 *)param_2[4];
  uVar2 = *(undefined1 *)param_2[8];
  lVar4 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_48 = FUN_144828ac0(param_2 + 0xc,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar4 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar4 * 0x14));
  local_40 = *puVar3;
  local_38 = *(undefined4 *)(puVar3 + 1);
  FUN_14927119e(*(undefined8 *)(param_1 + 0xc0),&local_40,uVar1,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14927111e FUN_14927111e body=126 status=ok
// SIG undefined FUN_14927111e(void)

void FUN_14927111e(longlong param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x1f0);
  local_20 = *(undefined4 *)(param_1 + 0x1f8);
  local_38 = param_1 + 0x208;
  FUN_14927119e(param_1 + 0x10,&local_28,*(undefined4 *)(param_1 + 0x200),
                *(undefined1 *)(param_1 + 0x204));
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14927119e FUN_14927119e body=2111 status=ok
// SIG undefined FUN_14927119e(void)

void FUN_14927119e(longlong param_1,longlong *param_2,float param_3,undefined1 param_4,
                  float *param_5)

{
  float *pfVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 uVar11;
  float fVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  undefined8 *puVar19;
  float *pfVar20;
  undefined8 *puVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  float *local_198;
  float *local_190;
  longlong local_188;
  float *local_180;
  undefined1 local_178 [16];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  undefined4 local_138;
  undefined4 uStack_134;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_188 = *(longlong *)(param_1 + 0x1b0);
  if (local_188 == 0) goto LAB_14927181a;
  pfVar20 = param_5 + 2;
  local_180 = param_5 + 0xe;
  fVar12 = param_5[8];
  if (fVar12 == 0.0) {
    if ((int)param_2[1] < 2) goto LAB_14927181a;
    param_5[4] = 0.0;
    if ((int)param_5[5] < 0) {
      FUN_14482f6fa(pfVar20,0);
    }
    pfVar1 = param_5 + 10;
    param_5[0xc] = 0.0;
    if ((int)param_5[0xd] < 0) {
      FUN_1401a2688(pfVar1,0);
    }
    param_5[0x10] = 0.0;
    local_198 = pfVar1;
    local_190 = pfVar20;
    if ((int)param_5[0x11] < 0) {
      FUN_1401a2688(local_180,0);
    }
    *param_5 = 0.0;
    lVar17 = param_2[1];
    if ((longlong)(int)lVar17 != 0) {
      lVar16 = *param_2;
      lVar23 = 0;
      do {
        local_158 = (double)CONCAT44(local_158._4_4_,*(undefined4 *)(lVar16 + 8 + lVar23));
        local_160 = *(double *)(lVar16 + lVar23);
        local_148 = local_148 & 0xffffff00;
        uStack_144 = 0;
        uStack_140 = 0;
        uStack_13c = 0xffff;
        local_138 = 0xffffffff;
        FUN_144828dba(&local_148,&local_160,local_188);
        fVar12 = param_5[8];
        param_5[8] = (float)((int)fVar12 + 1);
        if ((uint)param_5[9] < (uint)((int)fVar12 + 1)) {
          FUN_1492d0738(param_5 + 6,fVar12);
        }
        lVar24 = *(longlong *)(param_5 + 6);
        puVar19 = (undefined8 *)(lVar24 + 0x10 + (longlong)(int)fVar12 * 0x20);
        *puVar19 = CONCAT44(uStack_134,local_138);
        puVar19[1] = dStack_130;
        puVar18 = (uint *)(lVar24 + (longlong)(int)fVar12 * 0x20);
        *puVar18 = local_148;
        puVar18[1] = uStack_144;
        puVar18[2] = uStack_140;
        puVar18[3] = CONCAT22(uStack_13a,uStack_13c);
        lVar23 = lVar23 + 0xc;
      } while ((longlong)(int)lVar17 * 0xc != lVar23);
    }
    pfVar20 = local_190;
    if ((int)param_5[8] < 2) goto LAB_14927181a;
    FUN_144aa29e6(local_190,param_5[8],1);
    lVar17 = local_188;
    **(undefined4 **)(param_5 + 2) = 0;
    uVar14 = (ulonglong)(uint)param_5[8];
    if (1 < (int)param_5[8]) {
      lVar16 = 1;
      lVar23 = 0;
      do {
        uVar22 = (uint)*(ushort *)(*(longlong *)(param_5 + 6) + 0xc + lVar23);
        if (uVar22 == 0xffff) {
          uVar22 = 0xffffffff;
        }
        FUN_14486750c(lVar17,&local_148,uVar22,0);
        dVar6 = local_118;
        dVar5 = dStack_120;
        dVar4 = local_128;
        uVar22 = (uint)*(ushort *)(*(longlong *)(param_5 + 6) + 0x2c + lVar23);
        if (uVar22 == 0xffff) {
          uVar22 = 0xffffffff;
        }
        FUN_14486750c(lVar17,&local_148,uVar22,0);
        *(float *)(*(longlong *)(param_5 + 2) + lVar16 * 4) =
             (float)SQRT((dVar6 - local_118) * (dVar6 - local_118) +
                         (dVar4 - local_128) * (dVar4 - local_128) +
                         (dVar5 - dStack_120) * (dVar5 - dStack_120));
        *param_5 = *(float *)(*(longlong *)(param_5 + 2) + lVar16 * 4) + *param_5;
        lVar16 = lVar16 + 1;
        uVar14 = (ulonglong)(int)param_5[8];
        lVar23 = lVar23 + 0x20;
        pfVar20 = local_190;
      } while (lVar16 < (longlong)uVar14);
    }
    FUN_140ee84a4(local_198,uVar14,1);
    FUN_140ee84a4(local_180,param_5[8],1);
    fVar12 = param_5[8];
  }
  lVar17 = local_188;
  if ((1 < (int)fVar12) && (1e-08 < *param_5 || *param_5 == 1e-08)) {
    local_198 = (float *)CONCAT71(local_198._1_7_,param_4);
    lVar16 = 0xc;
    lVar23 = 0;
    lVar24 = 0;
    local_190 = pfVar20;
    do {
      uVar22 = (uint)*(ushort *)(*(longlong *)(param_5 + 6) + lVar16);
      if (*(ushort *)(*(longlong *)(param_5 + 6) + lVar16) == 0xffff) {
        uVar22 = 0xffffffff;
      }
      FUN_14486750c(lVar17,&local_148,uVar22,0);
      pfVar20 = local_190;
      puVar18 = &local_148;
      puVar19 = (undefined8 *)(*(longlong *)(param_5 + 10) + lVar23);
      for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar19 = *(undefined8 *)puVar18;
        puVar18 = puVar18 + 2;
        puVar19 = puVar19 + 1;
      }
      lVar24 = lVar24 + 1;
      uVar14 = (ulonglong)(int)param_5[8];
      lVar23 = lVar23 + 0x60;
      lVar16 = lVar16 + 0x20;
    } while (lVar24 < (longlong)uVar14);
    fVar12 = param_5[0xc];
    uVar11 = local_198._0_1_;
    if (0 < (int)fVar12) {
      lVar16 = 1;
      lVar17 = 0;
      do {
        fVar25 = *param_5 * -param_3;
        lVar23 = lVar17;
        if (fVar25 <= 0.0) {
          if ((lVar17 != 0) && (fVar25 < -1e-08)) {
            lVar24 = lVar17;
            do {
              fVar25 = fVar25 + *(float *)(*(longlong *)pfVar20 + lVar24 * 4);
              lVar23 = lVar24 + -1;
              if (lVar24 < 2) break;
              lVar24 = lVar23;
            } while (fVar25 < -1e-08);
          }
        }
        else if ((1e-08 < fVar25) && (lVar17 < (int)fVar12 + -1)) {
          lVar24 = lVar16;
          do {
            lVar23 = lVar24;
            fVar25 = fVar25 - *(float *)(*(longlong *)pfVar20 + lVar23 * 4);
            if (fVar25 <= 1e-08) break;
            lVar24 = lVar23 + 1;
          } while (lVar23 < (int)fVar12 + -1);
        }
        iVar15 = (int)lVar23;
        if (iVar15 < (int)fVar12 + -1) {
          fVar12 = *(float *)(*(longlong *)pfVar20 + 4 + (longlong)iVar15 * 4);
          fVar26 = 0.0;
          if (1e-08 < fVar12) {
            fVar26 = fVar25 / fVar12;
            if (-1e-08 <= param_3) {
              if (1.0 <= fVar26) {
                fVar26 = 1.0;
              }
              if (fVar26 <= 0.0) {
                fVar26 = 0.0;
              }
            }
            else {
              fVar26 = 1.0 - ABS(fVar26);
              if (1.0 <= fVar26) {
                fVar26 = 1.0;
              }
              if (fVar26 <= 0.0) {
                fVar26 = 0.0;
              }
            }
          }
        }
        else {
          fVar26 = 0.0;
        }
        puVar19 = (undefined8 *)(*(longlong *)(param_5 + 10) + (longlong)iVar15 * 0x60);
        puVar21 = (undefined8 *)(lVar17 * 0x60 + *(longlong *)(param_5 + 0xe));
        for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
          *puVar21 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar21 = puVar21 + 1;
        }
        fVar12 = param_5[0xc];
        if (((fVar26 < 1.0) && (1e-08 < fVar26)) && (iVar15 < (int)fVar12 + -1)) {
          FUN_14915b8da(&local_148,*(longlong *)(param_5 + 0xe) + lVar17 * 0x60,
                        (longlong)iVar15 * 0x60 + *(longlong *)(param_5 + 10) + 0x60);
          puVar18 = &local_148;
          puVar19 = (undefined8 *)(lVar17 * 0x60 + *(longlong *)(param_5 + 0xe));
          for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
            *puVar19 = *(undefined8 *)puVar18;
            puVar18 = puVar18 + 2;
            puVar19 = puVar19 + 1;
          }
          fVar12 = param_5[0xc];
        }
        lVar17 = lVar17 + 1;
        lVar16 = lVar16 + 1;
      } while (lVar17 < (int)fVar12);
      uVar14 = (ulonglong)(uint)param_5[8];
    }
    if (0 < (int)uVar14) {
      lVar17 = 0xc;
      lVar16 = 0;
      lVar23 = 0;
      do {
        pfVar20 = local_180;
        if (lVar23 < (int)uVar14 + -1) {
          lVar24 = *(longlong *)local_180;
          dVar4 = *(double *)(lVar24 + 0x10 + lVar16);
          dVar5 = *(double *)(lVar24 + lVar16);
          dVar6 = *(double *)(lVar24 + 8 + lVar16);
          dVar27 = dVar4 - dVar5 * 0.0;
          dVar28 = dVar5 * 0.0 - dVar6;
          dVar10 = dVar6 * 0.0 + dVar4 * -0.0;
          dVar28 = dVar28 + dVar28;
          dVar27 = dVar27 + dVar27;
          dVar10 = dVar10 + dVar10;
          dVar7 = *(double *)(lVar24 + 0x18 + lVar16);
          local_150 = (dVar5 * dVar27 - dVar10 * dVar6) + dVar7 * dVar28 + 0.0;
          local_158 = (dVar4 * dVar10 - dVar28 * dVar5) + dVar7 * dVar27 + 0.0;
          local_160 = (dVar6 * dVar28 - dVar27 * dVar4) + dVar7 * dVar10 + 1.0;
          pdVar3 = (double *)(lVar24 + 0x80 + lVar16);
          local_168 = *(double *)(lVar24 + 0x90 + lVar16) - *(double *)(lVar24 + 0x30 + lVar16);
          pdVar2 = (double *)(lVar24 + 0x20 + lVar16);
          dVar4 = pdVar3[1] - pdVar2[1];
          local_178._8_4_ = SUB84(dVar4,0);
          local_178._0_8_ = *pdVar3 - *pdVar2;
          local_178._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          FUN_14022d702(&local_148,&local_160,local_178);
          lVar24 = *(longlong *)pfVar20;
          dVar6 = *(double *)(lVar24 + lVar16);
          dVar7 = ((double *)(lVar24 + lVar16))[1];
          pdVar2 = (double *)(lVar24 + 0x10 + lVar16);
          dVar10 = *pdVar2;
          dVar27 = pdVar2[1];
          dVar28 = (double)CONCAT26(uStack_13a,CONCAT24(uStack_13c,uStack_140));
          dVar5 = (double)CONCAT26(uStack_13a,CONCAT24(uStack_13c,uStack_140));
          dVar4 = dVar6 * (double)CONCAT44(uStack_134,local_138) * 1.0 +
                  dVar27 * dVar5 +
                  dVar10 * (double)CONCAT44(uStack_144,local_148) * -1.0 + dVar7 * dStack_130;
          dVar5 = dVar10 * (double)CONCAT44(uStack_134,local_138) * -1.0 +
                  (((double)CONCAT44(uStack_144,local_148) * dVar6 * -1.0 + dStack_130 * dVar27) -
                  dVar7 * dVar5);
          auVar8._8_4_ = SUB84(dVar4,0);
          auVar8._0_8_ = dVar7 * (double)CONCAT44(uStack_134,local_138) * -1.0 +
                         dVar10 * dVar28 +
                         dVar27 * (double)CONCAT44(uStack_144,local_148) * 1.0 + dVar6 * dStack_130;
          auVar8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          *(undefined1 (*) [16])(lVar24 + lVar16) = auVar8;
          auVar9._8_4_ = SUB84(dVar5,0);
          auVar9._0_8_ = dVar27 * (double)CONCAT44(uStack_134,local_138) * 1.0 +
                         (((double)CONCAT44(uStack_144,local_148) * dVar7 * 1.0 +
                          dStack_130 * dVar10) - dVar6 * dVar28);
          auVar9._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          *(undefined1 (*) [16])(lVar24 + 0x10 + lVar16) = auVar9;
        }
        uVar22 = (uint)*(ushort *)(*(longlong *)(param_5 + 6) + lVar17);
        if (*(ushort *)(*(longlong *)(param_5 + 6) + lVar17) == 0xffff) {
          uVar22 = 0xffffffff;
        }
        puVar19 = (undefined8 *)(*(longlong *)(param_5 + 0xe) + lVar16);
        puVar18 = &local_148;
        for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
          *(undefined8 *)puVar18 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 2;
        }
        local_1a8 = 0;
        local_1b0 = 0;
        local_1b8 = uVar11;
        FUN_144831e8e(local_188,uVar22,&local_148,0);
        lVar23 = lVar23 + 1;
        uVar14 = (ulonglong)(int)param_5[8];
        lVar16 = lVar16 + 0x60;
        lVar17 = lVar17 + 0x20;
      } while (lVar23 < (longlong)uVar14);
    }
  }
LAB_14927181a:
  if ((local_e0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492719de FUN_1492719de body=25 status=ok
// SIG undefined FUN_1492719de(void)

undefined8 FUN_1492719de(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 1492719f8 FUN_1492719f8 body=236 status=ok
// SIG undefined FUN_1492719f8(void)

undefined8 FUN_1492719f8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_298 [32];
  undefined **local_278 [2];
  undefined1 local_268 [480];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_278[0] = &PTR_FUN_14bb775c0;
  FUN_1412ca278(local_268);
  local_278[0] = &PTR_FUN_14bc02b00;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_74 = 1;
  FUN_1444888de(&local_88,param_1 + 0x1f0);
  local_78 = *(undefined4 *)(param_1 + 0x200);
  local_74 = *(undefined1 *)(param_1 + 0x204);
  FUN_149271ae6(param_2,local_278);
  FUN_149271bba(local_278);
  if ((local_20 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149271ae6 FUN_149271ae6 body=211 status=ok
// SIG undefined FUN_149271ae6(void)

undefined8 * FUN_149271ae6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_14670c880();
  param_1[2] = uVar1;
  uVar1 = FUN_14670cb26();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149271bba FUN_149271bba body=74 status=ok
// SIG undefined FUN_149271bba(void)

void FUN_149271bba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc02b00;
  FUN_1492c07ba(param_1 + 0x41);
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 149271c14 FUN_149271c14 body=911 status=ok
// SIG undefined FUN_149271c14(void)

void FUN_149271c14(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  puVar5 = (undefined8 *)*param_2;
  uVar6 = *puVar5;
  uVar7 = puVar5[4];
  uVar8 = puVar5[8];
  uVar9 = puVar5[0xc];
  uVar1 = *(undefined4 *)puVar5[0x10];
  uVar10 = puVar5[0x14];
  uVar2 = *(undefined4 *)puVar5[0x18];
  uVar11 = puVar5[0x1c];
  uVar3 = *(undefined1 *)puVar5[0x20];
  uVar4 = *(undefined1 *)puVar5[0x24];
  uVar12 = puVar5[0x28];
  uVar13 = puVar5[0x2c];
  lVar14 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar15 = FUN_144828ac0(puVar5 + 0x30,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar14 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar14 * 0x14));
  lVar14 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar16 = FUN_144828ac0(*param_2 + 0x1a0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar14 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar14 * 0x14));
  lVar14 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar17 = FUN_144828ac0(*param_2 + 0x1c0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar14 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar14 * 0x14));
  lVar14 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar18 = FUN_144828ac0(*param_2 + 0x1e0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar14 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar14 * 0x14));
  lVar14 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar19 = FUN_144828ac0(*param_2 + 0x200,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar14 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar14 * 0x14));
  lVar14 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar20 = FUN_144828ac0(*param_2 + 0x220,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar14 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar14 * 0x14));
  lVar14 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar21 = FUN_144828ac0(*param_2 + 0x240,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar14 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar14 * 0x14));
  lVar14 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar22 = FUN_144828ac0(*param_2 + 0x260,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar14 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar14 * 0x14));
  lVar14 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar23 = FUN_144828ac0(*param_2 + 0x280,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar14 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar14 * 0x14));
  FUN_14927216c(*(undefined8 *)(param_1 + 0xc0),uVar6,uVar7,uVar8,uVar9,uVar1,uVar10,uVar2,uVar11,
                uVar3,uVar4,uVar12,uVar13,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,
                uVar23);
  return;
}



// FUNCTION 149271fbc FUN_149271fbc body=40 status=ok
// SIG undefined FUN_149271fbc(void)

void FUN_149271fbc(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149271fe4(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 149271fe4 FUN_149271fe4 body=392 status=ok
// SIG undefined FUN_149271fe4(void)

void FUN_149271fe4(longlong param_1,undefined8 param_2)

{
  FUN_14927216c(param_2,param_1 + 0x1f0,param_1 + 500,param_1 + 0x200,param_1 + 0x218,
                *(undefined4 *)(param_1 + 0x230),param_1 + 0x234,*(undefined4 *)(param_1 + 0x244),
                param_1 + 0x248,*(undefined1 *)(param_1 + 600),*(undefined1 *)(param_1 + 0x259),
                param_1 + 0x25c,param_1 + 0x268,param_1 + 0x278,param_1 + 0x28c,param_1 + 0x2a0,
                param_1 + 0x2b8,param_1 + 0x2d0,param_1 + 0x2f0,param_1 + 0x310,param_1 + 0x370,
                param_1 + 0x388);
  return;
}



// FUNCTION 14927216c FUN_14927216c body=6648 status=ok
// SIG undefined FUN_14927216c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14927216c(longlong param_1,uint *param_2,undefined8 param_3,double *param_4,double *param_5
                  ,undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined8 param_9,
                  undefined1 param_10,undefined1 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,double *param_16,double *param_17,
                  longlong param_18,char *param_19,double *param_20,double *param_21,char *param_22)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong lVar18;
  longlong lVar19;
  double *pdVar20;
  double *pdVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  float fVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar71;
  undefined1 auVar72 [16];
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined1 auStack_598 [32];
  undefined8 *local_578;
  double *local_570;
  double *local_568;
  uint local_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  double local_538;
  undefined8 uStack_530;
  double local_528;
  double dStack_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  double local_4d8;
  double dStack_4d0;
  undefined1 local_4c8 [16];
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  undefined8 uStack_4a0;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  double local_478;
  double dStack_470;
  double local_468;
  double local_458;
  double dStack_450;
  double local_448;
  double local_438 [12];
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double local_398 [12];
  double local_338;
  double dStack_330;
  double local_328;
  double local_318;
  double dStack_310;
  double local_308;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
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
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined5 local_1f8;
  undefined3 uStack_1f3;
  undefined8 uStack_1f0;
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
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_598;
  lVar19 = *(longlong *)(param_1 + 0x1b0);
  if (lVar19 == 0) goto LAB_149272224;
  cVar12 = FUN_144828dba(param_18,param_3,lVar19);
  if (cVar12 == '\0') goto LAB_149272224;
  local_560 = CONCAT31(local_560._1_3_,param_11);
  local_568 = (double *)CONCAT71(local_568._1_7_,param_10);
  local_570 = (double *)param_9;
  local_578 = (undefined8 *)CONCAT44(local_578._4_4_,param_8);
  FUN_149273b66(param_14,param_15,param_10,param_7);
  FUN_144828dba(param_19,param_12,lVar19);
  if ((((*(short *)(param_19 + 0xc) == -1) ||
       (DAT_14c87eb08 + 1U <= (uint)*(ushort *)(param_19 + 6))) ||
      (*(longlong *)(param_19 + 4) == 0)) || (*param_19 == '\0')) {
    uVar1 = *(ushort *)(param_18 + 0xc);
    if ((uVar1 == 0xffff) ||
       (*(uint *)(lVar19 + 0xc0) == (uint)uVar1 || (int)*(uint *)(lVar19 + 0xc0) < (int)(uint)uVar1)
       ) {
      pdVar20 = &DAT_14c846480;
      pdVar21 = (double *)&local_178;
      for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
        *pdVar21 = *pdVar20;
        pdVar20 = pdVar20 + 1;
        pdVar21 = pdVar21 + 1;
      }
    }
    else {
      FUN_14449ec9a(lVar19,&local_178,
                    *(undefined8 *)(*(longlong *)(lVar19 + 0xb8) + (ulonglong)(uint)uVar1 * 8),3);
    }
    uStack_530 = uStack_140;
    uVar16 = (undefined4)local_168;
    uVar63 = local_168._4_4_;
  }
  else {
    FUN_14486750c(lVar19,&local_178,*(short *)(param_19 + 0xc),0);
    uStack_530 = uStack_140;
    uVar16 = (undefined4)local_168;
    uVar63 = local_168._4_4_;
  }
  local_538 = local_148;
  dStack_520 = dStack_150;
  local_528 = local_158;
  uVar11 = uStack_15c;
  uVar17 = uStack_160;
  if (((*param_22 != '\x01') || (9.999999747378752e-05 < ABS(*param_21 - *param_5))) ||
     ((9.999999747378752e-05 < ABS(param_21[1] - param_5[1]) ||
      (uVar15 = (undefined4)local_128, uVar60 = local_128._4_4_, uVar61 = uStack_120,
      uVar62 = uStack_11c, uVar64 = (undefined4)local_178, uVar65 = local_178._4_4_,
      uVar66 = (float)uStack_170, uVar67 = uStack_170._4_4_, uVar73 = (undefined4)local_138,
      uVar74 = local_138._4_4_, uVar75 = (undefined4)uStack_130, uVar76 = uStack_130._4_4_,
      9.999999747378752e-05 < ABS(param_21[2] - param_5[2]))))) {
    *param_22 = '\x01';
    param_21[2] = param_5[2];
    dVar53 = param_5[1];
    *param_21 = *param_5;
    param_21[1] = dVar53;
    local_4e8 = (undefined4)local_138;
    uStack_4e4 = local_138._4_4_;
    uStack_4e0 = (undefined4)uStack_130;
    uStack_4dc = uStack_130._4_4_;
    local_4f8 = (undefined4)local_128;
    uStack_4f4 = local_128._4_4_;
    uStack_4f0 = uStack_120;
    uStack_4ec = uStack_11c;
    local_518 = (undefined4)local_178;
    uStack_514 = local_178._4_4_;
    uStack_510 = (float)uStack_170;
    uStack_50c = uStack_170._4_4_;
    if ((((*(short *)(param_19 + 0xc) == -1) ||
         (DAT_14c87eb08 + 1U <= (uint)*(ushort *)(param_19 + 6))) ||
        (*(longlong *)(param_19 + 4) == 0)) || (*param_19 == '\0')) {
      uVar1 = *(ushort *)(param_18 + 0xc);
      uVar13 = (uint)uVar1;
      if ((uVar1 == 0xffff) ||
         (*(uint *)(lVar19 + 0xc0) == (uint)uVar1 ||
          (int)*(uint *)(lVar19 + 0xc0) < (int)(uint)uVar1)) {
        pdVar20 = &DAT_14c846480;
        pdVar21 = (double *)&local_178;
        for (lVar18 = 0xc; uVar15 = 0, lVar18 != 0; lVar18 = lVar18 + -1) {
          *pdVar21 = *pdVar20;
          pdVar20 = pdVar20 + 1;
          pdVar21 = pdVar21 + 1;
        }
      }
      else {
        lVar18 = lVar19;
        uVar13 = FUN_14449ec9a(lVar19,&local_178,
                               *(undefined8 *)
                                (*(longlong *)(lVar19 + 0xb8) + (ulonglong)(uint)uVar1 * 8),2);
        uVar15 = (undefined4)lVar18;
      }
      auVar34._8_4_ = (undefined4)uStack_130;
      auVar34._0_8_ = CONCAT44(local_138._4_4_,(undefined4)local_138);
      auVar34._12_4_ = uStack_130._4_4_;
      dVar25 = (double)CONCAT44(local_128._4_4_,(undefined4)local_128);
      auVar32._8_4_ = uStack_120;
      auVar32._0_8_ = dVar25;
      auVar32._12_4_ = uStack_11c;
      dVar68 = ABS((double)CONCAT44(local_138._4_4_,(undefined4)local_138));
      auVar42._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar34._8_8_));
      auVar42._0_8_ = -(ulonglong)(9.99999993922529e-09 < dVar68);
      iVar14 = movmskpd(uVar13,auVar42);
      auVar54._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar32._8_8_));
      auVar54._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar25));
      uVar13 = movmskpd(uVar15,auVar54);
      auVar69 = _DAT_14c8464c0;
      auVar45 = _DAT_14c8464d0;
      dVar71 = DAT_14c846480;
      dVar50 = DAT_14c846488;
      dVar53 = DAT_14c846490;
      dVar40 = DAT_14c846498;
      local_558 = DAT_14c8464b0;
      dStack_550 = DAT_14c8464b8;
      local_548 = DAT_14c8464a0;
      dStack_540 = DAT_14c8464a8;
      if ((uVar13 & 0x3fffffff) != 0 || iVar14 != 0) {
        auVar45 = divpd(_DAT_149934d80,auVar34);
        auVar32 = divpd(ZEXT816(0x3ff0000000000000),auVar32);
        auVar69._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < dVar68) & auVar45._0_8_);
        auVar69._8_8_ =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar34._8_8_)) & auVar45._8_8_);
        dVar51 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar25)) & auVar32._0_8_);
        auVar45._8_8_ = 0;
        auVar45._0_8_ = dVar51;
        dVar53 = local_168 * -1.0;
        dVar40 = (double)CONCAT44(uStack_15c,uStack_160) * 1.0;
        dVar71 = -(double)CONCAT44(local_178._4_4_,(undefined4)local_178);
        dVar50 = -(double)CONCAT44(uStack_170._4_4_,(float)uStack_170);
        dVar48 = local_158 * auVar69._0_8_;
        dVar41 = dStack_150 * auVar69._8_8_;
        dVar51 = local_148 * dVar51;
        dVar25 = dVar41 * dVar71 - dVar50 * dVar48;
        dVar68 = dVar51 * dVar50 - dVar53 * dVar41;
        dVar39 = dVar48 * dVar53 - dVar71 * dVar51;
        dVar68 = dVar68 + dVar68;
        dVar39 = dVar39 + dVar39;
        dVar25 = dVar25 + dVar25;
        local_548 = 0.0 - ((dVar25 * dVar50 - dVar39 * dVar53) + dVar40 * dVar68 + dVar48);
        dStack_540 = 0.0 - (dVar25 * (double)CONCAT44(local_178._4_4_,(undefined4)local_178) +
                            dVar53 * dVar68 + dVar40 * dVar39 + dVar41);
        local_558 = 0.0 - (dVar40 * dVar25 + dVar51 + (dVar39 * dVar71 - dVar68 * dVar50));
        dStack_550 = 0.0;
      }
    }
    else {
      lVar18 = lVar19;
      uVar15 = FUN_14486750c(lVar19,&local_178,*(short *)(param_19 + 0xc),1);
      auVar9._8_4_ = (undefined4)uStack_130;
      auVar9._0_8_ = CONCAT44(local_138._4_4_,(undefined4)local_138);
      auVar9._12_4_ = uStack_130._4_4_;
      dVar53 = (double)CONCAT44(local_128._4_4_,(undefined4)local_128);
      auVar10._8_4_ = uStack_120;
      auVar10._0_8_ = dVar53;
      auVar10._12_4_ = uStack_11c;
      dVar40 = ABS((double)CONCAT44(local_138._4_4_,(undefined4)local_138));
      auVar55._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar9._8_8_));
      auVar55._0_8_ = -(ulonglong)(9.99999993922529e-09 < dVar40);
      iVar14 = movmskpd(uVar15,auVar55);
      auVar56._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar10._8_8_));
      auVar56._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar53));
      uVar13 = movmskpd((int)lVar18,auVar56);
      if ((uVar13 & 0x3fffffff) == 0 && iVar14 == 0) {
        local_548 = DAT_14c8464a0;
        dStack_540 = DAT_14c8464a8;
        local_558 = DAT_14c8464b0;
        dStack_550 = DAT_14c8464b8;
        auVar69 = _DAT_14c8464c0;
        auVar45 = _DAT_14c8464d0;
        dVar71 = DAT_14c846480;
        dVar50 = DAT_14c846488;
        dVar53 = DAT_14c846490;
        dVar40 = DAT_14c846498;
      }
      else {
        auVar32 = divpd(_DAT_149934d80,auVar9);
        auVar34 = divpd(ZEXT816(0x3ff0000000000000),auVar10);
        auVar69._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < dVar40) & auVar32._0_8_);
        auVar69._8_8_ =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar9._8_8_)) & auVar32._8_8_);
        dVar51 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar53)) & auVar34._0_8_);
        auVar45._8_8_ = 0;
        auVar45._0_8_ = dVar51;
        dVar53 = local_168 * -1.0;
        dVar40 = (double)CONCAT44(uStack_15c,uStack_160) * 1.0;
        dVar71 = -(double)CONCAT44(local_178._4_4_,(undefined4)local_178);
        dVar50 = -(double)CONCAT44(uStack_170._4_4_,(float)uStack_170);
        dVar48 = local_158 * auVar69._0_8_;
        dVar41 = dStack_150 * auVar69._8_8_;
        dVar51 = local_148 * dVar51;
        dVar25 = dVar41 * dVar71 - dVar50 * dVar48;
        dVar68 = dVar51 * dVar50 - dVar53 * dVar41;
        dVar39 = dVar48 * dVar53 - dVar71 * dVar51;
        dVar68 = dVar68 + dVar68;
        dVar39 = dVar39 + dVar39;
        dVar25 = dVar25 + dVar25;
        local_548 = 0.0 - ((dVar25 * dVar50 - dVar39 * dVar53) + dVar40 * dVar68 + dVar48);
        dStack_540 = 0.0 - (dVar25 * (double)CONCAT44(local_178._4_4_,(undefined4)local_178) +
                            dVar53 * dVar68 + dVar40 * dVar39 + dVar41);
        local_558 = 0.0 - (dVar40 * dVar25 + dVar51 + (dVar39 * dVar71 - dVar68 * dVar50));
        dStack_550 = 0.0;
      }
    }
    uStack_500 = uVar17;
    uStack_4fc = uVar11;
    uVar13 = 0xffffffff;
    if (*(ushort *)(param_18 + 0xc) != 0xffff) {
      uVar13 = (uint)*(ushort *)(param_18 + 0xc);
    }
    lVar18 = lVar19;
    local_508 = uVar16;
    uStack_504 = uVar63;
    uVar16 = FUN_14486750c(lVar19,&local_2f8,uVar13,1);
    auVar34 = _DAT_149934d80;
    dVar25 = local_2b8._0_8_;
    dVar39 = local_2b8._8_8_;
    dVar68 = local_2a8._0_8_;
    auVar32 = minpd(local_2b8,auVar69);
    auVar42 = minpd(local_2a8,auVar45);
    dVar51 = auVar45._0_8_;
    auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
    auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
    iVar14 = movmskpd(uVar16,auVar33);
    auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
    auVar43._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
    uVar13 = movmskpd((int)lVar18,auVar43);
    dVar48 = auVar69._0_8_;
    dVar41 = auVar69._8_8_;
    if ((uVar13 & 0x3fffffff) == 0 && iVar14 == 0) {
      dVar31 = dStack_2f0 * dVar53 * -1.0 +
               local_2e8 * dVar50 + dVar71 * dStack_2e0 * 1.0 + dVar40 * local_2f8;
      dVar37 = local_2f8 * dVar53 * 1.0 +
               dStack_2e0 * dVar50 + dVar71 * local_2e8 * -1.0 + dVar40 * dStack_2f0;
      auVar72._0_8_ =
           dStack_2e0 * dVar53 * 1.0 +
           ((dVar71 * dStack_2f0 * 1.0 + dVar40 * local_2e8) - dVar50 * local_2f8);
      auVar72._8_8_ =
           local_2e8 * dVar53 * -1.0 +
           ((dVar71 * local_2f8 * -1.0 + dVar40 * dStack_2e0) - dVar50 * dStack_2f0);
      dVar57 = local_2d8 * dVar48;
      dVar6 = dStack_2d0 * dVar41;
      dVar8 = local_2c8 * dVar51;
      dStack_2c0 = dStack_2c0 * auVar45._8_8_;
      dVar49 = dVar6 * dVar71 - dVar50 * dVar57;
      dVar52 = dVar8 * dVar50 - dVar53 * dVar6;
      dVar38 = dVar57 * dVar53 - dVar71 * dVar8;
      dVar47 = dStack_2c0 * dVar40 - dVar40 * dStack_2c0;
      dVar52 = dVar52 + dVar52;
      dVar38 = dVar38 + dVar38;
      dVar49 = dVar49 + dVar49;
      dVar47 = dVar47 + dVar47;
      local_118 = local_548 + (dVar49 * dVar50 - dVar53 * dVar38) + dVar40 * dVar52 + dVar57;
      dStack_110 = dStack_540 + (dVar52 * dVar53 - dVar49 * dVar71) + dVar40 * dVar38 + dVar6;
      local_108 = local_558 + (dVar38 * dVar71 - dVar50 * dVar52) + dVar40 * dVar49 + dVar8;
      dVar53 = dStack_550 + (dVar47 * dVar40 - dVar47 * dVar40) + dVar40 * dVar47 + dStack_2c0;
    }
    else {
      dVar49 = dVar50 + dVar50;
      dVar31 = dVar53 + dVar53;
      dVar47 = dVar71 * (dVar71 + dVar71);
      dVar37 = ((double)DAT_149934d80 - (dVar53 * dVar31 + dVar50 * dVar49)) * dVar48;
      dStack_1d0 = (DAT_149934d80._8_8_ - (dVar53 * dVar31 + dVar47)) * dVar41;
      dVar53 = (dVar71 + dVar71) * dVar40;
      local_1d8 = (dVar49 * dVar71 - dVar31 * dVar40) * dVar41;
      dStack_1b0 = (dVar31 * dVar50 - dVar53) * dVar51;
      local_1b8 = (dVar49 * dVar40 + dVar71 * dVar31) * dVar51;
      local_1a8 = (1.0 - (dVar47 + dVar50 * dVar49)) * dVar51;
      uStack_1f0 = (dVar49 * dVar71 + dVar31 * dVar40) * dVar48;
      local_1c8 = (dVar31 * dVar50 + dVar53) * dVar41;
      local_1e8 = (dVar71 * dVar31 - dVar49 * dVar40) * dVar48;
      local_1f8 = SUB85(dVar37,0);
      uStack_1f3 = (undefined3)((ulonglong)dVar37 >> 0x28);
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = local_548;
      dStack_190 = dStack_540;
      local_188 = local_558;
      uStack_180 = 0x3ff0000000000000;
      dVar53 = dStack_2f0 + dStack_2f0;
      dVar40 = local_2e8 + local_2e8;
      dVar50 = local_2f8 * (local_2f8 + local_2f8);
      local_228 = (1.0 - (dVar50 + dStack_2f0 * dVar53)) * dVar68;
      dVar71 = (local_2f8 + local_2f8) * dStack_2e0;
      local_238 = (dVar53 * dStack_2e0 + local_2f8 * dVar40) * dVar68;
      local_258 = (dVar53 * local_2f8 - dVar40 * dStack_2e0) * dVar39;
      dStack_230 = (dVar40 * dStack_2f0 - dVar71) * dVar68;
      local_278 = ((double)DAT_149934d80 - (local_2e8 * dVar40 + dStack_2f0 * dVar53)) * dVar25;
      dStack_250 = (DAT_149934d80._8_8_ - (local_2e8 * dVar40 + dVar50)) * dVar39;
      dStack_270 = (dVar53 * local_2f8 + dVar40 * dStack_2e0) * dVar25;
      local_248 = (dVar40 * dStack_2f0 + dVar71) * dVar39;
      local_268 = (local_2f8 * dVar40 - dVar53 * dStack_2e0) * dVar25;
      uStack_260 = 0;
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = local_2d8;
      dStack_210 = dStack_2d0;
      local_208 = local_2c8;
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_178);
      FUN_144a1c686(&local_178,0x3e45798ee0000000);
      auVar26._8_8_ = -(ulonglong)(0.0 <= dVar41 * dVar39);
      auVar26._0_8_ = -(ulonglong)(0.0 <= dVar48 * dVar25);
      auVar32 = blendvpd(_DAT_149936790,auVar34,auVar26);
      uVar23 = -(ulonglong)(0.0 <= dVar51 * dVar68);
      dVar53 = (double)(~uVar23 & 0xbff0000000000000 | uVar23 & 0x3ff0000000000000);
      dVar40 = auVar32._0_8_;
      local_168 = local_168 * dVar40;
      uStack_170 = (double)CONCAT44(uStack_170._4_4_,(float)uStack_170) * dVar40;
      local_178 = (double)CONCAT44(local_178._4_4_,(undefined4)local_178) * dVar40;
      dVar40 = auVar32._8_8_;
      local_148 = local_148 * dVar40;
      dStack_150 = dStack_150 * dVar40;
      local_158 = dVar40 * local_158;
      local_128 = (double)CONCAT44(local_128._4_4_,(undefined4)local_128) * dVar53;
      uStack_130 = (double)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130) * dVar53;
      local_138 = dVar53 * (double)CONCAT44(local_138._4_4_,(undefined4)local_138);
      FUN_14481fd10(&local_298,&local_178);
      dVar53 = local_288 * local_288 + local_298 * local_298;
      dVar40 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar44._0_8_ = dVar53 + dVar40;
      auVar44._8_8_ = dVar53 + dVar40;
      auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
      auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
      auVar32 = sqrtpd(auVar44,auVar44);
      auVar34 = divpd(auVar34,auVar32);
      auVar58._0_8_ = auVar34._0_8_ * local_288;
      auVar58._8_8_ = auVar34._8_8_ * dStack_280;
      dVar31 = (double)((ulonglong)(local_298 * auVar34._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
      dVar37 = (double)((ulonglong)(dStack_290 * auVar34._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
      auVar72 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar58,auVar27);
      dVar53 = 0.0;
    }
    dVar40 = local_2a8._8_8_ * auVar45._8_8_;
    *param_20 = dVar31;
    param_20[1] = dVar37;
    *(undefined1 (*) [16])(param_20 + 2) = auVar72;
    param_20[4] = local_118;
    param_20[5] = dStack_110;
    param_20[6] = local_108;
    param_20[7] = dVar53;
    param_20[8] = dVar25 * dVar48;
    param_20[9] = dVar39 * dVar41;
    auVar2._8_4_ = SUB84(dVar40,0);
    auVar2._0_8_ = dVar68 * dVar51;
    auVar2._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    *(undefined1 (*) [16])(param_20 + 10) = auVar2;
    FUN_144afe3ce(&local_178,param_5);
    dVar41 = (double)CONCAT44(uStack_15c,uStack_160);
    dVar53 = param_20[3];
    dVar40 = param_20[3];
    dVar25 = param_20[1];
    dVar71 = param_20[1];
    dVar68 = *param_20;
    dVar50 = *param_20;
    dVar39 = param_20[2];
    dVar48 = param_20[2];
    *param_20 = uStack_170 * dVar39 * -1.0 +
                local_168 * dVar25 + dVar68 * dVar41 * 1.0 + dVar53 * local_178;
    param_20[1] = local_178 * dVar48 * 1.0 +
                  dVar41 * dVar71 + dVar50 * local_168 * -1.0 + dVar40 * uStack_170;
    param_20[2] = dVar41 * dVar39 * 1.0 +
                  ((dVar68 * uStack_170 * 1.0 + dVar53 * local_168) - dVar25 * local_178);
    param_20[3] = local_168 * dVar48 * -1.0 +
                  ((dVar50 * local_178 * -1.0 + dVar40 * dVar41) - dVar71 * uStack_170);
    uVar15 = local_4f8;
    uVar60 = uStack_4f4;
    uVar61 = uStack_4f0;
    uVar62 = uStack_4ec;
    uVar64 = local_518;
    uVar65 = uStack_514;
    uVar66 = uStack_510;
    uVar67 = uStack_50c;
    uVar16 = local_508;
    uVar63 = uStack_504;
    uStack_160 = uStack_500;
    uStack_15c = uStack_4fc;
    uVar73 = local_4e8;
    uVar74 = uStack_4e4;
    uVar75 = uStack_4e0;
    uVar76 = uStack_4dc;
  }
  uVar13 = 0xffffffff;
  if (*(ushort *)(param_18 + 0xc) != 0xffff) {
    uVar13 = (uint)*(ushort *)(param_18 + 0xc);
  }
  uVar17 = FUN_14486750c(lVar19,&local_2f8,uVar13,0);
  auVar69 = _DAT_149934d80;
  auVar34 = *(undefined1 (*) [16])(param_20 + 8);
  dVar53 = auVar34._0_8_;
  dVar25 = auVar34._8_8_;
  auVar32 = *(undefined1 (*) [16])(param_20 + 10);
  dVar40 = auVar32._0_8_;
  auVar7._4_4_ = uVar74;
  auVar7._0_4_ = uVar73;
  auVar7._8_4_ = uVar75;
  auVar7._12_4_ = uVar76;
  auVar34 = minpd(auVar34,auVar7);
  auVar3._4_4_ = uVar60;
  auVar3._0_4_ = uVar15;
  auVar3._8_4_ = uVar61;
  auVar3._12_4_ = uVar62;
  auVar45 = minpd(auVar32,auVar3);
  auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  iVar14 = movmskpd(uVar17,auVar35);
  auVar46._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
  auVar46._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
  uVar13 = movmskpd((int)lVar19,auVar46);
  if ((uVar13 & 0x3fffffff) == 0 && iVar14 == 0) {
    dVar50 = *param_20;
    dVar39 = param_20[1];
    dVar48 = param_20[2];
    dVar41 = param_20[3];
    dVar71 = dVar39 * (double)CONCAT44(uVar63,uVar16) * -1.0 +
             dVar48 * (double)CONCAT44(uVar67,uVar66) +
             (double)CONCAT44(uVar65,uVar64) * dVar41 * 1.0 +
             (double)CONCAT44(uStack_15c,uStack_160) * dVar50;
    dVar68 = dVar50 * (double)CONCAT44(uVar63,uVar16) * 1.0 +
             dVar41 * (double)CONCAT44(uVar67,uVar66) +
             (double)CONCAT44(uVar65,uVar64) * dVar48 * -1.0 +
             (double)CONCAT44(uStack_15c,uStack_160) * dVar39;
    auVar70._0_8_ =
         dVar41 * (double)CONCAT44(uVar63,uVar16) * 1.0 +
         (((double)CONCAT44(uVar65,uVar64) * dVar39 * 1.0 +
          (double)CONCAT44(uStack_15c,uStack_160) * dVar48) -
         (double)CONCAT44(uVar67,uVar66) * dVar50);
    auVar70._8_8_ =
         dVar48 * (double)CONCAT44(uVar63,uVar16) * -1.0 +
         (((double)CONCAT44(uVar65,uVar64) * dVar50 * -1.0 +
          (double)CONCAT44(uStack_15c,uStack_160) * dVar41) -
         (double)CONCAT44(uVar67,uVar66) * dVar39);
    dVar39 = (double)CONCAT44(uVar74,uVar73) * dVar53;
    dVar48 = (double)CONCAT44(uVar76,uVar75) * dVar25;
    dVar50 = (double)CONCAT44(uVar60,uVar15) * dVar40;
  }
  else {
    dVar39 = (double)CONCAT44(uVar65,uVar64) + (double)CONCAT44(uVar65,uVar64);
    dVar48 = (double)CONCAT44(uVar67,uVar66) + (double)CONCAT44(uVar67,uVar66);
    dVar37 = (double)CONCAT44(uVar63,uVar16) + (double)CONCAT44(uVar63,uVar16);
    dVar50 = (double)CONCAT44(uVar65,uVar64) * dVar39;
    dVar51 = (double)CONCAT44(uVar67,uVar66) * dVar48;
    dVar71 = (double)CONCAT44(uVar63,uVar16) * dVar37;
    dVar68 = ((double)DAT_149934d80 - (dVar71 + dVar51)) * (double)CONCAT44(uVar74,uVar73);
    dStack_1d0 = (DAT_149934d80._8_8_ - (dVar71 + dVar50)) * (double)CONCAT44(uVar76,uVar75);
    dVar41 = dVar48 * (double)CONCAT44(uVar65,uVar64);
    dVar31 = dVar37 * (double)CONCAT44(uVar67,uVar66);
    dVar71 = (double)CONCAT44(uVar65,uVar64) * dVar37;
    dVar37 = dVar37 * (double)CONCAT44(uStack_15c,uStack_160);
    dVar39 = dVar39 * (double)CONCAT44(uStack_15c,uStack_160);
    dVar48 = dVar48 * (double)CONCAT44(uStack_15c,uStack_160);
    local_1d8 = (dVar41 - dVar37) * (double)CONCAT44(uVar76,uVar75);
    dStack_1b0 = (dVar31 - dVar39) * (double)CONCAT44(uVar60,uVar15);
    local_1b8 = (dVar48 + dVar71) * (double)CONCAT44(uVar60,uVar15);
    local_1a8 = (1.0 - (dVar50 + dVar51)) * (double)CONCAT44(uVar60,uVar15);
    dVar50 = (double)CONCAT44(uVar60,uVar15) * dVar40;
    uStack_1f0 = (dVar41 + dVar37) * (double)CONCAT44(uVar74,uVar73);
    local_1c8 = (dVar31 + dVar39) * (double)CONCAT44(uVar76,uVar75);
    local_1e8 = (dVar71 - dVar48) * (double)CONCAT44(uVar74,uVar73);
    local_1f8 = SUB85(dVar68,0);
    uStack_1f3 = (undefined3)((ulonglong)dVar68 >> 0x28);
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = local_528;
    dStack_190 = dStack_520;
    local_188 = local_538;
    uStack_180 = 0x3ff0000000000000;
    dVar41 = *param_20;
    dVar51 = param_20[1];
    dVar31 = param_20[2];
    dVar37 = dVar51 + dVar51;
    dVar49 = dVar31 + dVar31;
    dVar68 = dVar41 * (dVar41 + dVar41);
    local_228 = (1.0 - (dVar68 + dVar51 * dVar37)) * dVar40;
    dVar71 = param_20[3];
    dVar47 = dVar49 * dVar71;
    dVar57 = (dVar41 + dVar41) * param_20[3];
    dVar71 = dVar37 * dVar71;
    local_238 = (dVar71 + *param_20 * dVar49) * dVar40;
    local_258 = (dVar37 * dVar41 - dVar47) * dVar25;
    dStack_230 = (dVar49 * dVar51 - dVar57) * dVar40;
    dVar39 = (double)CONCAT44(uVar74,uVar73) * dVar53;
    dVar48 = (double)CONCAT44(uVar76,uVar75) * dVar25;
    local_278 = ((double)DAT_149934d80 - (dVar31 * dVar49 + dVar51 * dVar37)) * dVar53;
    dStack_250 = (DAT_149934d80._8_8_ - (dVar31 * dVar49 + dVar68)) * dVar25;
    dStack_270 = (dVar37 * dVar41 + dVar47) * dVar53;
    local_248 = (dVar49 * dVar51 + dVar57) * dVar25;
    local_268 = (*param_20 * dVar49 - dVar71) * dVar53;
    uStack_260 = 0;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218 = param_20[4];
    dStack_210 = param_20[5];
    local_208 = param_20[6];
    uStack_200 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_178);
    FUN_144a1c686(&local_178,0x3e45798ee0000000);
    auVar28._8_8_ = -(ulonglong)(0.0 <= dVar48);
    auVar28._0_8_ = -(ulonglong)(0.0 <= dVar39);
    auVar34 = blendvpd(_DAT_149936790,auVar69,auVar28);
    dVar53 = (double)(~-(ulonglong)(0.0 <= dVar50) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= dVar50) & 0x3ff0000000000000);
    dVar40 = auVar34._0_8_;
    local_168 = local_168 * dVar40;
    uStack_170 = uStack_170 * dVar40;
    local_178 = local_178 * dVar40;
    dVar40 = auVar34._8_8_;
    local_148 = local_148 * dVar40;
    dStack_150 = dStack_150 * dVar40;
    local_158 = dVar40 * local_158;
    local_128 = local_128 * dVar53;
    uStack_130 = uStack_130 * dVar53;
    local_138 = dVar53 * local_138;
    FUN_14481fd10(&local_298,&local_178);
    dVar53 = local_288 * local_288 + local_298 * local_298;
    dVar40 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
    auVar36._0_8_ = dVar53 + dVar40;
    auVar36._8_8_ = dVar53 + dVar40;
    auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
    auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
    auVar34 = sqrtpd(auVar36,auVar36);
    auVar34 = divpd(auVar69,auVar34);
    auVar59._0_8_ = auVar34._0_8_ * local_288;
    auVar59._8_8_ = auVar34._8_8_ * dStack_280;
    dVar71 = (double)((ulonglong)(local_298 * auVar34._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
    dVar68 = (double)((ulonglong)(dStack_290 * auVar34._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
    auVar70 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar59,auVar29);
  }
  dVar53 = (double)CONCAT44(uVar62,uVar61) * auVar32._8_8_;
  uVar63 = (undefined4)((ulonglong)dVar53 >> 0x20);
  uVar16 = SUB84(dVar53,0);
  uVar17 = (undefined4)((ulonglong)dVar48 >> 0x20);
  dVar53 = *param_4;
  dVar40 = param_4[1];
  dVar25 = param_4[2];
  dVar31 = dStack_2f0 * dVar25 - dVar40 * local_2e8;
  dVar31 = dVar31 + dVar31;
  dVar41 = local_2f8 * dVar40 - dVar53 * dStack_2f0;
  dVar41 = dVar41 + dVar41;
  dVar51 = local_2e8 * dVar53 - dVar25 * local_2f8;
  dVar51 = dVar51 + dVar51;
  dVar25 = (local_2f8 * dVar51 - dVar31 * dStack_2f0) + dStack_2e0 * dVar41 + dVar25;
  dVar40 = (local_2e8 * dVar31 - dVar41 * local_2f8) + dStack_2e0 * dVar51 + dVar40;
  dVar53 = (dStack_2f0 * dVar41 - dVar51 * local_2e8) + dStack_2e0 * dVar31 + dVar53;
  dVar47 = -dVar71;
  dVar57 = -dVar68;
  dVar37 = auVar70._0_8_ * -1.0;
  dVar49 = auVar70._8_8_ * 1.0;
  dVar31 = dVar53 * dVar37 - dVar47 * dVar25;
  dVar41 = dVar40 * dVar47 - dVar57 * dVar53;
  dVar51 = dVar25 * dVar57 - dVar37 * dVar40;
  dVar51 = dVar51 + dVar51;
  dVar31 = dVar31 + dVar31;
  dVar41 = dVar41 + dVar41;
  dVar25 = dVar49 * dVar41 + dVar25 + (dVar31 * dVar47 - dVar51 * dVar57);
  dVar53 = (dVar41 * dVar57 - dVar31 * dVar37) + dVar49 * dVar51 + dVar53;
  dVar40 = dVar71 * dVar41 + dVar37 * dVar51 + dVar49 * dVar31 + dVar40;
  dVar41 = dVar25 * dVar25 + dVar53 * dVar53 + dVar40 * dVar40;
  if (((dVar41 != 1.0) || (dVar51 = dVar25, dVar31 = dVar53, dVar37 = dVar40, NAN(dVar41))) &&
     (dVar51 = DAT_14c8464f0, dVar31 = DAT_14c8464e0, dVar37 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar41)) {
    dVar41 = 1.0 / SQRT(dVar41);
    dVar51 = dVar25 * dVar41;
    dVar31 = dVar41 * dVar53;
    dVar37 = dVar40 * dVar41;
  }
  *param_16 = dVar31;
  param_16[1] = dVar37;
  param_16[2] = dVar51;
  fVar24 = (float)(dVar51 * DAT_14c8463c8 + DAT_14c8463b8 * dVar31 + dVar37 * DAT_14c8463c0);
  if (ABS(fVar24 + 1.0) <= 0.0001) {
    local_560 = 0;
    *param_2 = 0;
    local_308 = param_17[2];
    local_568 = &local_318;
    local_318 = *param_17;
    dStack_310 = param_17[1];
    local_338 = *param_16;
    dStack_330 = param_16[1];
    local_570 = &local_338;
    local_328 = param_16[2];
    uVar22 = *(undefined8 *)(param_1 + 0x58);
    pdVar20 = local_398;
LAB_1492738c5:
    *pdVar20 = dVar71;
    pdVar20[1] = dVar68;
    *(undefined1 (*) [16])(pdVar20 + 2) = auVar70;
    pdVar20[4] = local_2d8;
    pdVar20[5] = dStack_2d0;
    pdVar20[6] = local_2c8;
    pdVar20[7] = 0.0;
    auVar5._8_4_ = SUB84(dVar48,0);
    auVar5._0_8_ = dVar39;
    auVar5._12_4_ = uVar17;
    *(undefined1 (*) [16])(pdVar20 + 8) = auVar5;
    auVar4._8_4_ = uVar16;
    auVar4._0_8_ = dVar50;
    auVar4._12_4_ = uVar63;
    *(undefined1 (*) [16])(pdVar20 + 10) = auVar4;
  }
  else {
    fVar30 = fVar24;
    if (1.0 <= fVar24) {
      fVar30 = 1.0;
    }
    fVar24 = acosf((float)(~-(uint)(fVar24 < -1.0) & (uint)fVar30 |
                          -(uint)(fVar24 < -1.0) & 0xbf800000));
    fVar30 = fVar24 / 3.1415927 + 0.0;
    if (ABS(fVar30) <= 1e-08) {
      local_560 = 0x3f800000;
      *param_2 = 0x3f800000;
      local_3a8 = param_17[2];
      local_568 = &local_3b8;
      local_3b8 = *param_17;
      dStack_3b0 = param_17[1];
      local_3d8 = *param_16;
      dStack_3d0 = param_16[1];
      local_570 = &local_3d8;
      local_3c8 = param_16[2];
      uVar22 = *(undefined8 *)(param_1 + 0x58);
      pdVar20 = local_438;
      goto LAB_1492738c5;
    }
    dVar53 = param_16[1];
    *param_17 = *param_16;
    param_17[1] = dVar53;
    param_17[2] = param_16[2];
    dVar53 = *param_17;
    dVar40 = param_17[1];
    if (1e-08 < fVar24 / 3.1415927) {
      dVar25 = dVar53 * dVar53 + dVar40 * dVar40;
      if (9.99999993922529e-09 < dVar25) {
        dVar53 = dVar53 * (1.0 / SQRT(dVar25));
      }
      dVar41 = (double)fVar30;
      *param_17 = dVar53 * dVar41;
      param_17[1] = (double)(~-(ulonglong)(9.99999993922529e-09 < dVar25) & (ulonglong)dVar40 |
                            (ulonglong)(dVar40 * (1.0 / SQRT(dVar25))) &
                            -(ulonglong)(9.99999993922529e-09 < dVar25)) * dVar41;
    }
    uVar13 = 0;
    param_17[2] = -1.0;
    local_578 = &local_178;
    uStack_170._0_4_ = 0.0;
    uStack_170._4_4_ = uStack_170._4_4_ & 0xffffff00;
    local_178._0_4_ = 0;
    local_178._4_4_ = 0;
    FUN_149274750();
    local_578 = (undefined8 *)&local_1f8;
    uStack_1f0._0_4_ = 0.0;
    uStack_1f0._4_4_ = uStack_1f0._4_4_ & 0xffffff00;
    local_1f8 = 0;
    uStack_1f3 = 0;
    FUN_149274750();
    if (uStack_170._4_1_ == '\0') {
      if (uStack_1f0._4_1_ == '\x01') {
        if ((float)uStack_1f0 < 0.0) {
          fVar24 = sqrtf((float)uStack_1f0);
        }
        else {
          fVar24 = SQRT((float)uStack_1f0);
        }
        if ((float)uStack_170 < 0.0) {
          fVar30 = sqrtf((float)uStack_170);
        }
        else {
          fVar30 = SQRT((float)uStack_170);
        }
        uVar13 = ~-(uint)(fVar24 + fVar30 < 0.0001) & (uint)(1.0 - fVar30 / (fVar24 + fVar30));
      }
    }
    else {
      uVar13 = 0x3f800000;
    }
    *param_2 = uVar13;
    local_448 = param_17[2];
    local_568 = &local_458;
    local_458 = *param_17;
    dStack_450 = param_17[1];
    local_478 = *param_16;
    dStack_470 = param_16[1];
    local_570 = &local_478;
    local_468 = param_16[2];
    uVar22 = *(undefined8 *)(param_1 + 0x58);
    pdVar20 = &local_4d8;
    local_4b8 = local_2d8;
    dStack_4b0 = dStack_2d0;
    local_4a8 = local_2c8;
    uStack_4a0 = 0;
    local_498._8_4_ = SUB84(dVar48,0);
    local_498._0_8_ = dVar39;
    local_498._12_4_ = uVar17;
    local_488._8_4_ = uVar16;
    local_488._0_8_ = dVar50;
    local_488._12_4_ = uVar63;
    local_560 = uVar13;
    local_4d8 = dVar71;
    dStack_4d0 = dVar68;
    local_4c8 = auVar70;
  }
  local_578 = (undefined8 *)param_15;
  FUN_149273c82(param_13,pdVar20,uVar22,param_14);
LAB_149272224:
  if ((local_f0 ^ (ulonglong)auStack_598) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149273b66 FUN_149273b66 body=283 status=ok
// SIG undefined FUN_149273b66(void)

void FUN_149273b66(float *param_1,float *param_2,float param_3,float *param_4,float param_5,
                  float *param_6,char param_7,char param_8)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 0.5;
  if (0.5 <= param_3 * 180.0) {
    fVar3 = param_3 * 180.0;
  }
  if (178.0 <= fVar3) {
    fVar3 = 178.0;
  }
  *param_1 = fVar3 * 0.017453292;
  uVar2 = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)param_4;
  *(undefined8 *)(param_1 + 3) = uVar2;
  fVar4 = fVar3 + 1.0;
  if (fVar3 + 1.0 <= param_5 * 180.0) {
    fVar4 = param_5 * 180.0;
  }
  if (179.0 <= fVar4) {
    fVar4 = 179.0;
  }
  *param_2 = fVar4 * 0.017453292;
  fVar3 = 1.0 / (fVar4 * 0.017453292);
  fVar4 = *param_1 * *param_4 * fVar3;
  param_2[1] = (1.0 - fVar4) * *param_6 + fVar4;
  fVar4 = *param_1 * param_4[1] * fVar3;
  param_2[2] = (1.0 - fVar4) * param_6[1] + fVar4;
  fVar4 = *param_1 * param_4[2] * fVar3;
  param_2[3] = (1.0 - fVar4) * param_6[2] + fVar4;
  fVar3 = *param_1 * param_4[3] * fVar3;
  param_2[4] = (1.0 - fVar3) * param_6[3] + fVar3;
  if (param_7 != '\0') {
    pfVar1 = param_1 + 1;
    *(ulonglong *)pfVar1 = *(longlong *)pfVar1 << 0x20 | *(ulonglong *)pfVar1 >> 0x20;
    pfVar1 = param_2 + 1;
    *(ulonglong *)pfVar1 = *(ulonglong *)pfVar1 << 0x20 | *(ulonglong *)pfVar1 >> 0x20;
  }
  if (param_8 != '\0') {
    param_1 = param_1 + 3;
    *(ulonglong *)param_1 = *(longlong *)param_1 << 0x20 | *(ulonglong *)param_1 >> 0x20;
    param_2 = param_2 + 3;
    *(ulonglong *)param_2 = *(ulonglong *)param_2 << 0x20 | *(ulonglong *)param_2 >> 0x20;
  }
  return;
}



// FUNCTION 149273c82 FUN_149273c82 body=2765 status=ok
// SIG undefined FUN_149273c82(void)

void FUN_149273c82(char *param_1,double *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,double *param_6,double *param_7,float param_8)

{
  longlong lVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  double *pdVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_208 [32];
  undefined1 **local_1e8;
  float local_1e0;
  longlong local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 *local_178;
  undefined8 uStack_170;
  undefined1 *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 *puStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((param_3 == 0) || (*param_1 != '\x01')) goto LAB_149273d0b;
  if (param_1[2] == '\x01') {
    pdVar9 = param_2;
    pdVar10 = &local_148;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *pdVar10 = *pdVar9;
      pdVar9 = pdVar9 + 1;
      pdVar10 = pdVar10 + 1;
    }
    dVar14 = local_148 * 0.0 - dStack_140 * 0.0;
    dVar20 = dStack_140 * 1.0 - local_138 * 0.0;
    dVar21 = local_148 * -1.0 + local_138 * 0.0;
    dVar20 = dVar20 + dVar20;
    dVar21 = dVar21 + dVar21;
    dVar14 = dVar14 + dVar14;
    dVar11 = (double)*(float *)(param_1 + 4);
    dVar19 = ((local_138 * dVar20 - local_148 * dVar14) + dStack_130 * dVar21 + 0.0) * dVar11 +
             (double)local_128._8_8_;
    local_118 = (dVar14 * dStack_130 + 1.0 + (dVar21 * local_148 - dVar20 * dStack_140)) * dVar11 +
                local_118;
    dStack_110 = dStack_110 + 0.0;
    local_128._8_4_ = SUB84(dVar19,0);
    local_128._0_8_ =
         ((dVar14 * dStack_140 - dVar21 * local_138) + dStack_130 * dVar20 + 0.0) * dVar11 +
         (double)local_128._0_8_;
    local_128._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    local_1e8 = (undefined1 **)CONCAT44(local_1e8._4_4_,*(undefined4 *)(param_1 + 0xc));
    FUN_14446882c(param_3,&local_148,&DAT_14c846480,*(float *)(param_1 + 4) * 0.5);
  }
  ppuVar2 = &local_178;
  puVar7 = &uStack_170;
  puVar3 = &uStack_170;
  local_168 = &DAT_3f8000003f800000;
  uStack_160 = 0x3f80000000000000;
  uStack_170 = 0x3f80000000000000;
  if (1e-08 <= param_8) {
    local_158 = 0;
    puStack_150 = &DAT_3f8000003f800000;
    if (param_8 < 0.99) goto LAB_149273f3f;
    ppuVar2 = &local_168;
    puVar7 = &uStack_160;
    puVar3 = &uStack_160;
    local_168 = (undefined1 *)0x3f8000003ecccccd;
    uVar4 = 0x3ecccccd;
  }
  else {
    local_158 = 0x3f800000;
    puStack_150 = (undefined1 *)0x3f80000000000000;
    local_168 = (undefined1 *)0x3ecccccd3ecccccd;
    uStack_160 = 0x3ecccccd00000000;
LAB_149273f3f:
    uVar4 = 0x3e4ccccd;
  }
  local_178 = (undefined1 *)0x3f80000000000000;
  *(undefined4 *)((longlong)ppuVar2 + 4) = uVar4;
  *(undefined4 *)puVar7 = 0;
  *(undefined4 *)((longlong)puVar3 + 4) = uVar4;
  local_188 = 0.0;
  uStack_180 = 0;
  local_198 = 0.0;
  uStack_190 = 0;
  FUN_1492c17ba(param_1,&local_188,&local_198,param_4);
  if (param_1[1] == '\x01') {
    local_148 = local_198;
    dStack_140._0_4_ = (undefined4)uStack_190;
  }
  else {
    local_148 = local_188;
    dStack_140._0_4_ = (int)uStack_180;
  }
  local_1e8._0_4_ = *(undefined4 *)(param_1 + 0xc);
  FUN_144467884(param_3,param_2,&local_148,&local_178);
  local_1a8 = 0.0;
  uStack_1a0 = 0;
  local_1b8 = 0.0;
  uStack_1b0 = 0;
  FUN_1492c17ba(param_1,&local_1a8,&local_1b8,param_5);
  if (param_1[1] == '\x01') {
    local_148 = local_1b8;
    uVar4 = (undefined4)uStack_1b0;
  }
  else {
    local_148 = local_1a8;
    uVar4 = (undefined4)uStack_1a0;
  }
  dStack_140 = (double)CONCAT44(dStack_140._4_4_,uVar4);
  local_1e8 = (undefined1 **)CONCAT44(local_1e8._4_4_,*(undefined4 *)(param_1 + 0xc));
  FUN_144467884(param_3,param_2,&local_148,&local_168);
  if ((param_1[1] == '\0') && (0 < (int)uStack_180)) {
    iVar5 = *(int *)(param_1 + 8);
    lVar6 = 0;
    iVar8 = (int)uStack_180;
    do {
      if (0 < iVar5) {
        iVar8 = 0;
        lVar1 = lVar6 * 0x18;
        local_1d8 = lVar6;
        do {
          fVar13 = (float)iVar8;
          iVar8 = iVar8 + 1;
          dVar14 = *(double *)((longlong)local_188 + 0x10 + lVar1);
          dVar19 = *(double *)((longlong)local_1a8 + 0x10 + lVar1) - dVar14;
          dVar20 = *(double *)((longlong)local_188 + lVar1);
          dVar21 = *(double *)((longlong)local_188 + 8 + lVar1);
          dVar12 = *(double *)((longlong)local_1a8 + 8 + lVar1) - dVar21;
          dVar11 = *(double *)((longlong)local_1a8 + lVar1) - dVar20;
          dVar15 = (double)(fVar13 / (float)iVar5);
          dVar17 = dVar19 * dVar15 + dVar14;
          dVar18 = dVar12 * dVar15 + dVar21;
          dVar16 = dVar15 * dVar11 + dVar20;
          dVar15 = dVar17 * dVar17 + dVar16 * dVar16 + dVar18 * dVar18;
          if (((dVar15 != 1.0) ||
              (local_1d0 = dVar16, local_1c0 = dVar17, local_1c8 = dVar18, NAN(dVar15))) &&
             (local_1d0 = DAT_14c8464e0, local_1c0 = DAT_14c8464f0, local_1c8 = DAT_14c8464e8,
             9.99999993922529e-09 <= dVar15)) {
            dVar15 = 1.0 / SQRT(dVar15);
            local_1d0 = dVar16 * dVar15;
            local_1c0 = dVar17 * dVar15;
            local_1c8 = dVar18 * dVar15;
          }
          dVar15 = (double)((float)iVar8 / (float)iVar5);
          dVar14 = dVar14 + dVar19 * dVar15;
          dVar21 = dVar21 + dVar12 * dVar15;
          dVar20 = dVar20 + dVar11 * dVar15;
          dVar19 = dVar14 * dVar14 + dVar20 * dVar20 + dVar21 * dVar21;
          if (((dVar19 != 1.0) || (dVar11 = dVar20, dVar12 = dVar21, dVar15 = dVar14, NAN(dVar19)))
             && (dVar11 = DAT_14c8464e0, dVar12 = DAT_14c8464e8, dVar15 = DAT_14c8464f0,
                9.99999993922529e-09 <= dVar19)) {
            dVar19 = 1.0 / SQRT(dVar19);
            dVar11 = dVar20 * dVar19;
            dVar12 = dVar21 * dVar19;
            dVar15 = dVar14 * dVar19;
          }
          local_1e0 = *(float *)(param_1 + 0xc);
          dVar14 = (double)*(float *)(param_1 + 4);
          local_138 = dVar15 * dVar14;
          dStack_140 = dVar12 * dVar14;
          local_148 = dVar11 * dVar14;
          local_1c0 = local_1c0 * dVar14;
          local_1c8 = local_1c8 * dVar14;
          local_1d0 = local_1d0 * dVar14;
          local_1e8 = &local_168;
          FUN_14446764a(param_3,param_2,&local_1d0,&local_148);
          iVar5 = *(int *)(param_1 + 8);
        } while (iVar8 < iVar5);
        lVar6 = local_1d8;
        iVar8 = (int)uStack_180;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
    if (0 < iVar8) {
      lVar6 = 0;
      do {
        if (0 < iVar5) {
          iVar8 = 0;
          local_1d8 = lVar6;
          do {
            fVar13 = (float)iVar8;
            iVar8 = iVar8 + 1;
            dVar12 = (double)*(float *)(param_1 + 4);
            dVar15 = DAT_14c8462d0 * dVar12;
            dVar16 = DAT_14c8462c8 * dVar12;
            dVar17 = DAT_14c8462c0 * dVar12;
            dVar21 = *(double *)((longlong)local_188 + 0x10 + lVar6 * 0x18) - dVar15;
            dVar19 = *(double *)((longlong)local_188 + 8 + lVar6 * 0x18) - dVar16;
            dVar20 = *(double *)((longlong)local_188 + lVar6 * 0x18) - dVar17;
            dVar11 = (double)(fVar13 / (float)iVar5);
            dVar22 = dVar21 * dVar11 + dVar15;
            dVar14 = dVar19 * dVar11 + dVar16;
            dVar18 = dVar11 * dVar20 + dVar17;
            dVar11 = dVar22 * dVar22 + dVar18 * dVar18 + dVar14 * dVar14;
            if (((dVar11 != 1.0) ||
                (local_1d0 = dVar18, local_1c0 = dVar22, local_1c8 = dVar14, NAN(dVar11))) &&
               (local_1d0 = DAT_14c8464e0, local_1c0 = DAT_14c8464f0, local_1c8 = DAT_14c8464e8,
               9.99999993922529e-09 <= dVar11)) {
              dVar11 = 1.0 / SQRT(dVar11);
              local_1d0 = dVar18 * dVar11;
              local_1c0 = dVar22 * dVar11;
              local_1c8 = dVar14 * dVar11;
            }
            dVar14 = (double)((float)iVar8 / (float)iVar5);
            dVar15 = dVar15 + dVar21 * dVar14;
            dVar16 = dVar16 + dVar19 * dVar14;
            dVar17 = dVar17 + dVar20 * dVar14;
            dVar14 = dVar15 * dVar15 + dVar17 * dVar17 + dVar16 * dVar16;
            if (((dVar14 != 1.0) || (dVar20 = dVar15, dVar21 = dVar16, dVar19 = dVar17, NAN(dVar14))
                ) && (dVar20 = DAT_14c8464f0, dVar21 = DAT_14c8464e8, dVar19 = DAT_14c8464e0,
                     9.99999993922529e-09 <= dVar14)) {
              dVar14 = 1.0 / SQRT(dVar14);
              dVar20 = dVar15 * dVar14;
              dVar21 = dVar16 * dVar14;
              dVar19 = dVar17 * dVar14;
            }
            local_1e0 = *(float *)(param_1 + 0xc);
            local_138 = dVar20 * dVar12;
            dStack_140 = dVar21 * dVar12;
            local_148 = dVar19 * dVar12;
            local_1c0 = local_1c0 * dVar12;
            local_1c8 = local_1c8 * dVar12;
            local_1d0 = local_1d0 * dVar12;
            local_1e8 = &local_178;
            FUN_14446764a(param_3,param_2,&local_1d0,&local_148);
            iVar5 = *(int *)(param_1 + 8);
          } while (iVar8 < iVar5);
          lVar6 = local_1d8;
          iVar8 = (int)uStack_180;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar8);
    }
  }
  fVar13 = *(float *)(param_1 + 0xc);
  if (param_1[1] == '\x01') {
    dVar14 = (double)*(float *)(param_1 + 4);
    local_138 = param_7[2] * dVar14;
    dStack_140 = param_7[1] * dVar14;
    local_148 = dVar14 * *param_7;
  }
  else {
    local_1e0 = fVar13 + fVar13;
    dVar14 = (double)*(float *)(param_1 + 4);
    local_138 = param_6[2] * dVar14;
    dStack_140 = param_6[1] * dVar14;
    local_148 = dVar14 * *param_6;
    local_1e8 = (undefined1 **)&local_158;
    FUN_14446764a(param_3,param_2,&DAT_14c8464e0,&local_148);
    fVar13 = *(float *)(param_1 + 0xc);
    dVar14 = (double)*(float *)(param_1 + 4);
    local_138 = param_6[2] * dVar14;
    dStack_140 = param_6[1] * dVar14;
    local_148 = dVar14 * *param_6;
  }
  local_1e8 = (undefined1 **)&local_158;
  FUN_144467456(param_3,param_2,&local_148,fVar13 * 5.0);
  if (local_1b8 != 0.0) {
    FUN_1400020a8();
  }
  if (local_1a8 != 0.0) {
    FUN_1400020a8();
  }
  if (local_198 != 0.0) {
    FUN_1400020a8();
  }
  if (local_188 != 0.0) {
    FUN_1400020a8();
  }
LAB_149273d0b:
  if ((local_e0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149274750 FUN_149274750 body=750 status=ok
// SIG undefined FUN_149274750(void)

void FUN_149274750(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((param_3 <= 0.0001) || (param_4 <= 0.0001)) {
    param_5[0] = 0.0;
    param_5[1] = 0.0;
    fVar4 = param_2 * param_2 + param_1 * param_1;
    param_5[2] = fVar4;
    bVar2 = fVar4 <= 0.0001;
  }
  else {
    fVar4 = 0.70710677;
    fVar6 = 0.70710677;
    bVar2 = true;
    do {
      bVar1 = bVar2;
      fVar8 = fVar4 * fVar4 * fVar4 * (param_3 * param_3 - param_4 * param_4) * (1.0 / param_3);
      fVar7 = fVar6 * fVar6 * fVar6 * (param_4 * param_4 - param_3 * param_3) * (1.0 / param_4);
      fVar5 = fVar4 * param_3 - fVar8;
      fVar6 = fVar6 * param_4 - fVar7;
      fVar4 = ABS(param_1) - fVar8;
      fVar3 = ABS(param_2) - fVar7;
      fVar9 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
      fVar5 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
      fVar4 = ((fVar4 * fVar9) / fVar5 + fVar8) * (1.0 / param_3);
      fVar6 = 0.0;
      if (0.0 <= fVar4) {
        fVar6 = fVar4;
      }
      fVar4 = 1.0;
      if (fVar6 <= 1.0) {
        fVar4 = fVar6;
      }
      fVar3 = ((fVar3 * fVar9) / fVar5 + fVar7) * (1.0 / param_4);
      fVar6 = 0.0;
      if (0.0 <= fVar3) {
        fVar6 = fVar3;
      }
      fVar3 = 1.0;
      if (fVar6 <= 1.0) {
        fVar3 = fVar6;
      }
      fVar6 = 1.0 / SQRT(fVar4 * fVar4 + fVar3 * fVar3);
      fVar4 = fVar4 * fVar6;
      fVar6 = fVar6 * fVar3;
      bVar2 = false;
    } while (bVar1);
    param_3 = (float)(~-(uint)(param_1 < 0.0) & (uint)fVar4 | (uint)-fVar4 & -(uint)(param_1 < 0.0))
              * param_3;
    *param_5 = param_3;
    param_4 = (float)(~-(uint)(param_2 < 0.0) & (uint)fVar6 | (uint)-fVar6 & -(uint)(param_2 < 0.0))
              * param_4;
    param_5[1] = param_4;
    param_5[2] = (param_4 - param_2) * (param_4 - param_2) +
                 (param_3 - param_1) * (param_3 - param_1);
    bVar2 = param_2 * param_2 + param_1 * param_1 < param_4 * param_4 + param_3 * param_3;
  }
  *(bool *)(param_5 + 3) = bVar2;
  return;
}



// FUNCTION 149274a42 FUN_149274a42 body=572 status=ok
// SIG undefined FUN_149274a42(void)

void FUN_149274a42(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  longlong lVar21;
  undefined8 uVar22;
  
  puVar13 = (undefined8 *)*param_2;
  uVar14 = *puVar13;
  uVar15 = puVar13[4];
  uVar1 = *(undefined4 *)puVar13[8];
  uVar2 = *(undefined4 *)puVar13[0xc];
  uVar3 = *(undefined4 *)puVar13[0x10];
  uVar4 = *(undefined4 *)puVar13[0x14];
  uVar5 = *(undefined4 *)puVar13[0x18];
  uVar6 = *(undefined4 *)puVar13[0x1c];
  uVar16 = puVar13[0x20];
  uVar7 = *(undefined1 *)puVar13[0x24];
  uVar8 = *(undefined1 *)puVar13[0x28];
  uVar17 = puVar13[0x2c];
  uVar18 = puVar13[0x30];
  uVar19 = puVar13[0x34];
  uVar9 = *(undefined1 *)puVar13[0x38];
  uVar12 = *(undefined4 *)puVar13[0x3c];
  lVar21 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = *(undefined1 *)puVar13[0x40];
  uVar11 = *(undefined1 *)puVar13[0x44];
  uVar20 = puVar13[0x48];
  uVar22 = FUN_144828ac0(puVar13 + 0x4c,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar21 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar21 * 0x14));
  FUN_149274dfa(*(undefined8 *)(param_1 + 0xc0),uVar14,uVar15,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,
                uVar16,uVar7,uVar8,uVar17,uVar18,uVar19,uVar9,uVar12,uVar10,uVar11,uVar20,uVar22);
  return;
}



// FUNCTION 149274c9e FUN_149274c9e body=40 status=ok
// SIG undefined FUN_149274c9e(void)

void FUN_149274c9e(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149274cc6(param_1,param_1 + 0x10);
  return;
}



// FUNCTION 149274cc6 FUN_149274cc6 body=308 status=ok
// SIG undefined FUN_149274cc6(void)

void FUN_149274cc6(longlong param_1,undefined8 param_2)

{
  FUN_149274dfa(param_2,param_1 + 0x1f0,param_1 + 0x1f8,*(undefined4 *)(param_1 + 0x200),
                *(undefined4 *)(param_1 + 0x204),*(undefined4 *)(param_1 + 0x208),
                *(undefined4 *)(param_1 + 0x20c),*(undefined4 *)(param_1 + 0x210),
                *(undefined4 *)(param_1 + 0x214),param_1 + 0x218,*(undefined1 *)(param_1 + 0x230),
                *(undefined1 *)(param_1 + 0x231),param_1 + 0x234,param_1 + 0x240,param_1 + 600,
                *(undefined1 *)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x274),
                *(undefined1 *)(param_1 + 0x278),*(undefined1 *)(param_1 + 0x279),param_1 + 0x280,
                param_1 + 0x300);
  return;
}



// FUNCTION 149274dfa FUN_149274dfa body=10452 status=ok
// SIG undefined FUN_149274dfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149274dfa(longlong param_1,undefined8 *param_2,undefined8 *param_3,float param_4,
                  float param_5,float param_6,float param_7,float param_8,undefined4 param_9,
                  double *param_10,char param_11,char param_12,undefined8 *param_13,double *param_14
                  ,double *param_15,byte param_16,int param_17,char param_18,undefined1 param_19,
                  char *param_20,longlong *param_21)

{
  char *pcVar1;
  char *pcVar2;
  float *pfVar3;
  undefined4 *puVar4;
  double *pdVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  ulonglong uVar34;
  uint *puVar35;
  undefined8 *puVar36;
  longlong lVar37;
  longlong lVar38;
  longlong *plVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  double dVar58;
  double dVar59;
  float fVar60;
  double dVar61;
  double dVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  double dVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  double dVar69;
  uint uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  uint uVar76;
  undefined1 auStack_458 [32];
  char *local_438;
  uint local_430;
  undefined1 local_428;
  longlong local_418;
  longlong *local_410;
  undefined1 local_408 [16];
  undefined8 local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  longlong local_3e0;
  undefined1 local_3d8 [16];
  undefined8 local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  undefined1 local_398 [16];
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  double local_348;
  double local_340;
  double local_338;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  undefined8 local_2d8;
  undefined4 local_2d0;
  uint local_2c8;
  uint uStack_2c4;
  uint uStack_2c0;
  uint uStack_2bc;
  double local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double local_288;
  double dStack_280;
  double local_278;
  double local_268;
  double dStack_260;
  double local_258;
  double local_248;
  double dStack_240;
  double local_238;
  undefined1 local_228 [12];
  uint uStack_21c;
  double local_218;
  double local_208;
  double dStack_200;
  double local_1f8;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 local_168;
  undefined4 local_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  undefined2 uStack_14c;
  undefined2 uStack_14a;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_418 = *(longlong *)(param_1 + 0x1b0);
  if (local_418 != 0) {
    local_410 = param_21 + 8;
    iVar29 = (int)param_21[1];
    if (iVar29 == 0) {
      (**(code **)(param_21[8] + 8))(local_410);
      *(undefined4 *)(param_21 + 9) = 0x3c888889;
      local_158 = CONCAT31(local_158._1_3_,1);
      uStack_154 = (uint)*param_3;
      uStack_150 = (uint)((ulonglong)*param_3 >> 0x20);
      uVar26 = FUN_140813180(local_418);
      if (uVar26 != 0xffffffff) {
        local_158 = CONCAT31(local_158._1_3_,1);
        uStack_154 = (uint)*param_2;
        uStack_150 = (uint)((ulonglong)*param_2 >> 0x20);
        uVar27 = FUN_140813180(local_418);
        if (uVar27 == uVar26) goto LAB_149274ebf;
        do {
          if (((int)uVar26 < 0) || (*(int *)(local_418 + 0xc0) <= (int)uVar26)) {
            local_1c8 = local_1c8 & 0xffffff00;
            uStack_1c4 = 0;
            uStack_1c0 = 0;
          }
          else {
            lVar37 = *(longlong *)(*(longlong *)(local_418 + 0xb8) + (ulonglong)uVar26 * 8);
            uStack_1c0 = *(undefined4 *)(lVar37 + 0x18);
            uVar7 = *(undefined8 *)(lVar37 + 0x10);
            local_1c8 = (uint)uVar7;
            uStack_1c4 = (uint)((ulonglong)uVar7 >> 0x20);
          }
          local_158 = local_158 & 0xffffff00;
          uStack_154 = 0;
          uStack_150 = 0;
          uStack_14c = 0xffff;
          local_148 = 0xffffffff;
          FUN_144828dba(&local_158,&local_1c8);
          iVar29 = (int)param_21[1];
          *(uint *)(param_21 + 1) = iVar29 + 1U;
          if (*(uint *)((longlong)param_21 + 0xc) < iVar29 + 1U) {
            FUN_1492d0738(param_21,iVar29);
          }
          lVar38 = local_418;
          lVar37 = *param_21;
          puVar36 = (undefined8 *)(lVar37 + 0x10 + (longlong)iVar29 * 0x20);
          *puVar36 = CONCAT44(uStack_144,local_148);
          puVar36[1] = CONCAT44(uStack_13c,uStack_140);
          puVar35 = (uint *)(lVar37 + (longlong)iVar29 * 0x20);
          *puVar35 = local_158;
          puVar35[1] = uStack_154;
          puVar35[2] = uStack_150;
          puVar35[3] = CONCAT22(uStack_14a,uStack_14c);
          if (uVar26 == uVar27) break;
          local_168 = CONCAT44(uStack_1c4,local_1c8);
          local_160 = uStack_1c0;
          FUN_1408130c0(local_418,&local_158);
          uVar26 = FUN_140813180(lVar38,&local_158);
        } while (uVar26 != 0xffffffff);
      }
      uVar26 = *(uint *)(param_21 + 1);
      if ((longlong)(int)uVar26 < 3) goto LAB_149274ebf;
      auVar50 = ZEXT416((uint)param_8);
      local_3f8 = (uint *)(param_21 + 2);
      lVar37 = *param_21;
      lVar38 = (longlong)(int)uVar26 << 5;
      lVar31 = 0;
      do {
        lVar38 = lVar38 + -0x20;
        uVar7 = *(undefined8 *)(*(undefined1 (*) [12])(lVar37 + lVar31) + 8);
        auVar17 = *(undefined1 (*) [12])(lVar37 + lVar31);
        puVar36 = (undefined8 *)(lVar37 + 0x10 + lVar31);
        uVar19 = *puVar36;
        uVar20 = puVar36[1];
        local_148 = (undefined4)uVar19;
        uStack_144 = (undefined4)((ulonglong)uVar19 >> 0x20);
        uStack_140 = (undefined4)uVar20;
        uStack_13c = (uint)((ulonglong)uVar20 >> 0x20);
        uStack_14c = (undefined2)((ulonglong)uVar7 >> 0x20);
        uStack_14a = (undefined2)((ulonglong)uVar7 >> 0x30);
        uVar7 = *(undefined8 *)(lVar37 + lVar38);
        uVar19 = ((undefined8 *)(lVar37 + lVar38))[1];
        puVar36 = (undefined8 *)(lVar37 + 0x10 + lVar38);
        uVar20 = puVar36[1];
        puVar6 = (undefined8 *)(lVar37 + 0x10 + lVar31);
        *puVar6 = *puVar36;
        puVar6[1] = uVar20;
        *(undefined8 *)(lVar37 + lVar31) = uVar7;
        ((undefined8 *)(lVar37 + lVar31))[1] = uVar19;
        auVar53._12_2_ = uStack_14c;
        auVar53._0_12_ = auVar17;
        auVar53._14_2_ = uStack_14a;
        puVar4 = (undefined4 *)(lVar37 + 0x10 + lVar38);
        *puVar4 = local_148;
        puVar4[1] = uStack_144;
        puVar4[2] = uStack_140;
        puVar4[3] = uStack_13c;
        *(undefined1 (*) [16])(lVar37 + lVar38) = auVar53;
        lVar31 = lVar31 + 0x20;
      } while ((ulonglong)(uVar26 >> 1) << 5 != lVar31);
      if (1 < (int)param_21[1]) {
        local_408._0_8_ = param_21 + 0xb;
        plVar39 = param_21 + 0xd;
        if (1.0 <= param_8) {
          auVar50._12_4_ = 0;
          auVar50._0_12_ = ZEXT412(0x3f800000);
        }
        if (auVar50._0_4_ <= 0.0) {
          auVar18._12_4_ = 0;
          auVar18._0_12_ = auVar50._4_12_;
          auVar50 = auVar18 << 0x20;
        }
        if (1.0 <= param_6) {
          param_6 = 1.0;
        }
        if (param_6 <= 0.0) {
          param_6 = 0.0;
        }
        local_3c8 = (double)param_6;
        lVar37 = 0;
        uVar30 = 0;
        do {
          local_1b8 = DAT_14c8464f0;
          local_1c8 = (uint)DAT_14c8464e0;
          uStack_1c4 = DAT_14c8464e0._4_4_;
          uStack_1c0 = (uint)DAT_14c8464e8;
          uStack_1bc = DAT_14c8464e8._4_4_;
          local_158 = (uint)DAT_14c8464e0;
          uStack_154 = DAT_14c8464e0._4_4_;
          uStack_150 = (uint)DAT_14c8464e8;
          uStack_14c = (undefined2)DAT_14c8464e8._4_4_;
          uStack_14a = (undefined2)(DAT_14c8464e8._4_4_ >> 0x10);
          local_148 = SUB84(DAT_14c8464f0,0);
          uStack_144 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          iVar29 = (int)param_21[0xc];
          *(uint *)(param_21 + 0xc) = iVar29 + 1U;
          if (*(uint *)((longlong)param_21 + 100) < iVar29 + 1U) {
            FUN_1492d11e2(local_408._0_8_,iVar29);
          }
          lVar31 = local_418;
          lVar38 = param_21[0xb];
          lVar32 = (longlong)iVar29 * 0x40;
          *(undefined8 *)(lVar38 + lVar32) = 0x3f800000;
          ((undefined8 *)(lVar38 + lVar32))[1] = 0x3c23d70a;
          puVar36 = (undefined8 *)(lVar38 + 0x10 + lVar32);
          *puVar36 = CONCAT44(uStack_154,local_158);
          puVar36[1] = CONCAT26(uStack_14a,CONCAT24(uStack_14c,uStack_150));
          *(ulonglong *)(lVar38 + 0x20 + lVar32) = CONCAT44(uStack_144,local_148);
          puVar35 = (uint *)(lVar38 + 0x28 + lVar32);
          *puVar35 = local_1c8;
          puVar35[1] = uStack_1c4;
          puVar35[2] = uStack_1c0;
          puVar35[3] = uStack_1bc;
          *(double *)(lVar38 + 0x38 + lVar32) = local_1b8;
          uVar26 = (uint)*(ushort *)(*param_21 + 0xc + lVar37);
          if (uVar26 == 0xffff) {
            uVar26 = 0xffffffff;
          }
          FUN_14486750c(local_418,&local_158,uVar26,1);
          uVar26 = (uint)*(ushort *)(*param_21 + 0x2c + lVar37);
          if (uVar26 == 0xffff) {
            uVar26 = 0xffffffff;
          }
          FUN_14486750c(lVar31,&local_1c8,uVar26,1);
          dVar57 = local_128 - local_198;
          dVar62 = local_138 - local_1a8;
          dVar52 = uStack_130 - dStack_1a0;
          iVar29 = (int)param_21[0xe];
          *(uint *)(param_21 + 0xe) = iVar29 + 1U;
          if (*(uint *)((longlong)param_21 + 0x74) < iVar29 + 1U) {
            FUN_1492d1268(plVar39,iVar29);
          }
          lVar31 = (longlong)iVar29 * 0x10;
          iVar29 = (int)uVar30;
          lVar38 = *plVar39;
          *(int *)(lVar38 + lVar31) = iVar29;
          *(int *)(lVar38 + 4 + lVar31) = iVar29 + 1;
          *(float *)(lVar38 + 8 + lVar31) = param_4;
          *(float *)(lVar38 + 0xc + lVar31) =
               (float)SQRT(dVar57 * dVar57 + dVar62 * dVar62 + dVar52 * dVar52);
          if (((1e-08 < param_4) && (1e-08 < param_7)) && (1 < uVar30)) {
            uVar26 = (uint)*(ushort *)(*param_21 + 0xc);
            if (*(ushort *)(*param_21 + 0xc) == 0xffff) {
              uVar26 = 0xffffffff;
            }
            FUN_14486750c(local_418,local_228,uVar26,1);
            puVar36 = (undefined8 *)local_228;
            puVar35 = &local_1c8;
            for (lVar38 = 0xc; lVar38 != 0; lVar38 = lVar38 + -1) {
              *(undefined8 *)puVar35 = *puVar36;
              puVar36 = puVar36 + 1;
              puVar35 = puVar35 + 2;
            }
            dVar57 = local_128 - local_198;
            dVar62 = local_138 - local_1a8;
            dVar52 = uStack_130 - dStack_1a0;
            iVar28 = (int)param_21[0xe];
            *(uint *)(param_21 + 0xe) = iVar28 + 1U;
            if (*(uint *)((longlong)param_21 + 0x74) < iVar28 + 1U) {
              FUN_1492d1268(plVar39,iVar28);
            }
            lVar38 = *plVar39;
            lVar31 = (longlong)iVar28 * 0x10;
            *(int *)(lVar38 + lVar31) = iVar29;
            *(undefined4 *)(lVar38 + 4 + lVar31) = 0;
            *(float *)(lVar38 + 8 + lVar31) = param_7;
            *(float *)(lVar38 + 0xc + lVar31) =
                 (float)(SQRT(dVar57 * dVar57 + dVar62 * dVar62 + dVar52 * dVar52) *
                         (double)auVar50._0_4_ + 0.0);
          }
          iVar28 = (int)param_21[1];
          if (((uVar30 != 0) && (1e-08 < param_4)) &&
             ((1e-08 < param_5 && ((longlong)uVar30 < (longlong)iVar28 + -2)))) {
            uVar26 = (uint)*(ushort *)(*param_21 + -0x14 + (longlong)iVar28 * 0x20);
            if (uVar26 == 0xffff) {
              uVar26 = 0xffffffff;
            }
            FUN_14486750c(local_418,local_228,uVar26,1);
            puVar36 = (undefined8 *)local_228;
            puVar35 = &local_1c8;
            for (lVar38 = 0xc; lVar38 != 0; lVar38 = lVar38 + -1) {
              *(undefined8 *)puVar35 = *puVar36;
              puVar36 = puVar36 + 1;
              puVar35 = puVar35 + 2;
            }
            lVar38 = param_21[1];
            dVar57 = local_128 - local_198;
            dVar62 = local_138 - local_1a8;
            dVar52 = uStack_130 - dStack_1a0;
            iVar28 = (int)param_21[0xe];
            *(uint *)(param_21 + 0xe) = iVar28 + 1U;
            if (*(uint *)((longlong)param_21 + 0x74) < iVar28 + 1U) {
              FUN_1492d1268(plVar39,iVar28);
            }
            lVar31 = param_21[0xd];
            lVar32 = (longlong)iVar28 * 0x10;
            *(int *)(lVar31 + lVar32) = iVar29;
            *(int *)(lVar31 + 4 + lVar32) = (int)lVar38 + -1;
            *(float *)(lVar31 + 8 + lVar32) = param_5;
            *(float *)(lVar31 + 0xc + lVar32) =
                 (float)(SQRT(dVar57 * dVar57 + dVar62 * dVar62 + dVar52 * dVar52) * local_3c8 + 0.0
                        );
            iVar28 = (int)param_21[1];
          }
          uVar30 = uVar30 + 1;
          lVar37 = lVar37 + 0x20;
        } while ((longlong)uVar30 < (longlong)(iVar28 + -1));
      }
      local_1b8 = DAT_14c8464f0;
      local_1c8 = (uint)DAT_14c8464e0;
      uStack_1c4 = DAT_14c8464e0._4_4_;
      uStack_1c0 = (uint)DAT_14c8464e8;
      uStack_1bc = DAT_14c8464e8._4_4_;
      local_158 = (uint)DAT_14c8464e0;
      uStack_154 = DAT_14c8464e0._4_4_;
      uStack_150 = (uint)DAT_14c8464e8;
      uStack_14c = (undefined2)DAT_14c8464e8._4_4_;
      uStack_14a = (undefined2)(DAT_14c8464e8._4_4_ >> 0x10);
      local_148 = SUB84(DAT_14c8464f0,0);
      uStack_144 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      iVar29 = (int)param_21[0xc];
      *(uint *)(param_21 + 0xc) = iVar29 + 1U;
      if (*(uint *)((longlong)param_21 + 100) < iVar29 + 1U) {
        FUN_1492d11e2(param_21 + 0xb,iVar29);
      }
      lVar37 = param_21[0xb];
      lVar38 = (longlong)iVar29 * 0x40;
      *(undefined8 *)(lVar37 + lVar38) = 0x3f800000;
      ((undefined8 *)(lVar37 + lVar38))[1] = 0x3c23d70a;
      puVar36 = (undefined8 *)(lVar37 + 0x10 + lVar38);
      *puVar36 = CONCAT44(uStack_154,local_158);
      puVar36[1] = CONCAT26(uStack_14a,CONCAT24(uStack_14c,uStack_150));
      *(ulonglong *)(lVar37 + 0x20 + lVar38) = CONCAT44(uStack_144,local_148);
      puVar35 = (uint *)(lVar37 + 0x28 + lVar38);
      *puVar35 = local_1c8;
      puVar35[1] = uStack_1c4;
      puVar35[2] = uStack_1c0;
      puVar35[3] = uStack_1bc;
      *(double *)(lVar37 + 0x38 + lVar38) = local_1b8;
      *(undefined4 *)param_21[0xb] = 0;
      *(undefined4 *)(param_21[0xb] + (longlong)((int)param_21[0xc] + -1) * 0x40) = 0;
      if (0 < (int)param_21[1]) {
        lVar37 = 0;
        lVar38 = 0;
        do {
          uVar26 = (uint)*(ushort *)(*param_21 + 0xc + lVar37);
          if (uVar26 == 0xffff) {
            uVar26 = 0xffffffff;
          }
          FUN_14486750c(local_418,&local_158,uVar26,0);
          *(undefined4 *)(param_21[0xb] + 8 + lVar37 * 2) = param_9;
          lVar31 = param_21[0xb];
          pdVar5 = (double *)(lVar31 + 0x10 + lVar37 * 2);
          *pdVar5 = local_138;
          pdVar5[1] = uStack_130;
          *(double *)(lVar31 + 0x20 + lVar37 * 2) = local_128;
          if (1e-08 < *(float *)(param_21[0xb] + lVar37 * 2)) {
            local_218 = DAT_14c8464f0;
            local_228._4_4_ = DAT_14c8464e0._4_4_;
            local_228._0_4_ = (uint)DAT_14c8464e0;
            local_228._8_4_ = (uint)DAT_14c8464e8;
            uStack_21c = DAT_14c8464e8._4_4_;
            local_1c8 = (uint)DAT_14c8464e0;
            uStack_1c4 = DAT_14c8464e0._4_4_;
            uStack_1c0 = (uint)DAT_14c8464e8;
            uStack_1bc = DAT_14c8464e8._4_4_;
            local_1b8 = DAT_14c8464f0;
            iVar29 = (int)param_21[0x14];
            *(uint *)(param_21 + 0x14) = iVar29 + 1U;
            if (*(uint *)((longlong)param_21 + 0xa4) < iVar29 + 1U) {
              FUN_1492d12ee(param_21 + 0x13,iVar29);
            }
            lVar31 = param_21[0x13];
            lVar32 = (longlong)iVar29 * 0x40;
            *(undefined1 *)(lVar31 + lVar32) = 3;
            *(int *)(lVar31 + 4 + lVar32) = (int)lVar38;
            *(int *)(lVar31 + 8 + lVar32) = (int)lVar38;
            puVar36 = (undefined8 *)(lVar31 + 0x10 + lVar32);
            *puVar36 = CONCAT44(uStack_1c4,local_1c8);
            puVar36[1] = CONCAT44(uStack_1bc,uStack_1c0);
            *(double *)(lVar31 + 0x20 + lVar32) = local_1b8;
            puVar4 = (undefined4 *)(lVar31 + 0x28 + lVar32);
            *puVar4 = local_228._0_4_;
            puVar4[1] = local_228._4_4_;
            puVar4[2] = local_228._8_4_;
            puVar4[3] = uStack_21c;
            *(double *)(lVar31 + 0x38 + lVar32) = local_218;
          }
          lVar38 = lVar38 + 1;
          lVar37 = lVar37 + 0x20;
        } while (lVar38 < (int)param_21[1]);
      }
      local_1c8 = CONCAT31(local_1c8._1_3_,1);
      uStack_1c4 = (uint)*param_13;
      uStack_1c0 = (uint)((ulonglong)*param_13 >> 0x20);
      local_158 = local_158 & 0xffffff00;
      uStack_154 = 0;
      uStack_150 = 0;
      uStack_14c = 0xffff;
      local_148 = 0xffffffff;
      FUN_144828dba(&local_158,&local_1c8,local_418);
      *local_3f8 = local_158;
      local_3f8[1] = uStack_154;
      local_3f8[2] = uStack_150;
      local_3f8[3] = CONCAT22(uStack_14a,uStack_14c);
      *(longlong *)(local_3f8 + 4) = CONCAT44(uStack_144,local_148);
      *(longlong *)(local_3f8 + 6) = CONCAT44(uStack_13c,uStack_140);
      iVar29 = (int)param_21[1];
    }
    if (2 < iVar29) {
      if (param_16 == 0) {
        (**(code **)(*local_410 + 0x10))();
      }
      *(undefined4 *)(param_21 + 7) = 0;
      local_3e0 = param_1;
      if (*(int *)((longlong)param_21 + 0x3c) < 0) {
        FUN_1401a2688(param_21 + 6,0);
      }
      if (0 < (int)param_21[1]) {
        lVar37 = 0;
        lVar38 = 0;
        do {
          uVar26 = (uint)*(ushort *)(*param_21 + 0xc + lVar37);
          if (uVar26 == 0xffff) {
            uVar26 = 0xffffffff;
          }
          FUN_14486750c(local_418,&local_158,uVar26,0);
          iVar29 = (int)param_21[7];
          *(uint *)(param_21 + 7) = iVar29 + 1U;
          if (*(uint *)((longlong)param_21 + 0x3c) < iVar29 + 1U) {
            FUN_144a2c682(param_21 + 6,iVar29);
          }
          puVar35 = &local_158;
          puVar36 = (undefined8 *)((longlong)iVar29 * 0x60 + param_21[6]);
          for (lVar31 = 0xc; lVar31 != 0; lVar31 = lVar31 + -1) {
            *puVar36 = *(undefined8 *)puVar35;
            puVar35 = puVar35 + 2;
            puVar36 = puVar36 + 1;
          }
          pfVar3 = (float *)(param_21[0xb] + lVar37 * 2);
          if ((param_16 & (1e-08 < *pfVar3 || *pfVar3 == 1e-08)) == 0) {
            *(undefined4 *)(param_21[0xb] + 8 + lVar37 * 2) = param_9;
            lVar31 = param_21[0xb];
            puVar4 = (undefined4 *)(lVar31 + 0x10 + lVar37 * 2);
            *puVar4 = (undefined4)local_138;
            puVar4[1] = local_138._4_4_;
            puVar4[2] = (undefined4)uStack_130;
            puVar4[3] = uStack_130._4_4_;
            *(double *)(lVar31 + 0x20 + lVar37 * 2) = local_128;
          }
          lVar38 = lVar38 + 1;
          lVar37 = lVar37 + 0x20;
        } while (lVar38 < (int)param_21[1]);
      }
      plVar39 = local_410;
      local_238 = param_10[2];
      local_248 = *param_10;
      dStack_240 = param_10[1];
      if (((*(short *)((longlong)param_21 + 0x1c) != -1) &&
          ((uint)*(ushort *)((longlong)param_21 + 0x16) < DAT_14c87eb08 + 1U)) &&
         ((*(longlong *)((longlong)param_21 + 0x14) != 0 && ((char)param_21[2] != '\0')))) {
        FUN_14486750c(local_418,&local_158,*(short *)((longlong)param_21 + 0x1c),0);
        dVar62 = (double)CONCAT44(uStack_154,local_158);
        dVar52 = (double)CONCAT26(uStack_14a,CONCAT24(uStack_14c,uStack_150));
        dVar41 = (double)CONCAT44(uStack_144,local_148);
        dVar57 = dStack_240 * dVar62 - local_248 * dVar52;
        dVar59 = local_238 * dVar52 - dStack_240 * dVar41;
        dVar61 = local_248 * dVar41 - dVar62 * local_238;
        dVar59 = dVar59 + dVar59;
        dVar61 = dVar61 + dVar61;
        dVar57 = dVar57 + dVar57;
        dVar40 = (double)CONCAT44(uStack_13c,uStack_140) * dVar57;
        dVar51 = dVar61 * dVar62 - dVar59 * dVar52;
        local_248 = (dVar57 * dVar52 - dVar61 * dVar41) +
                    (double)CONCAT44(uStack_13c,uStack_140) * dVar59 + local_248;
        dStack_240 = (dVar41 * dVar59 - dVar57 * dVar62) +
                     (double)CONCAT44(uStack_13c,uStack_140) * dVar61 + dStack_240;
        if (param_12 != '\0') {
          local_248 = local_248 + local_138;
          dStack_240 = dStack_240 + uStack_130;
          local_238 = local_238 + dVar40;
          dVar40 = dVar51;
          dVar51 = local_128;
        }
        local_238 = dVar40 + local_238 + dVar51;
      }
      lVar38 = local_3e0;
      lVar37 = param_21[0xb];
      local_258 = *(double *)(lVar37 + 0x20);
      local_268 = *(double *)(lVar37 + 0x10);
      dStack_260 = *(double *)(lVar37 + 0x18);
      local_388 = *(double *)(lVar37 + 0x50);
      dStack_380 = 0.0;
      local_398._0_8_ = *(double *)(lVar37 + 0x58);
      local_398._8_8_ = 0;
      local_378 = *(double *)(lVar37 + 0x60);
      dStack_370 = 0.0;
      local_360 = *(double *)(lVar37 + 0x90);
      local_368 = *(double *)(lVar37 + 0x98);
      dVar57 = *(double *)(lVar37 + 0xa0);
      lVar31 = (longlong)((int)param_21[0xc] + -1) * 0x40;
      local_278 = *(double *)(lVar37 + 0x20 + lVar31);
      pdVar5 = (double *)(lVar37 + 0x10 + lVar31);
      local_288 = *pdVar5;
      dStack_280 = pdVar5[1];
      local_3c8 = (local_258 + local_278) * 0.5;
      local_3f8 = (uint *)((dStack_260 + dStack_280) * 0.5);
      dVar62 = (local_268 + local_288) * 0.5;
      if (param_12 == '\0') {
        local_238 = local_238 + local_3c8;
        dStack_240 = dStack_240 + (double)local_3f8;
        local_248 = local_248 + dVar62;
      }
      local_3b0 = local_248;
      dVar40 = (local_248 - local_288) * (dStack_240 - dStack_260) -
               (local_248 - local_268) * (dStack_240 - dStack_280);
      local_408._8_8_ = DAT_14c8463d8;
      local_408._0_8_ = DAT_14c8463d0;
      auVar15 = local_408;
      dVar41 = (local_238 - local_278) * (local_248 - local_268) -
               (local_238 - local_258) * (local_248 - local_288);
      dVar52 = (dStack_240 - dStack_280) * (local_238 - local_258) -
               (local_238 - local_278) * (dStack_240 - dStack_260);
      uVar30 = DAT_149931180;
      uVar67 = (undefined4)DAT_149931180;
      uVar68 = DAT_149931180._4_4_;
      local_3d8._8_8_ = DAT_14c8463e8;
      local_3d8._0_8_ = DAT_14c8463e0;
      auVar14 = local_3d8;
      local_408._0_4_ = (undefined4)DAT_14c8463d0;
      local_408._4_4_ = (undefined4)((ulonglong)DAT_14c8463d0 >> 0x20);
      local_408._8_4_ = (undefined4)DAT_14c8463d8;
      local_408._12_4_ = (undefined4)((ulonglong)DAT_14c8463d8 >> 0x20);
      local_3d8._0_4_ = (undefined4)DAT_14c8463e0;
      local_3d8._4_4_ = (undefined4)((ulonglong)DAT_14c8463e0 >> 0x20);
      local_3d8._8_4_ = (undefined4)DAT_14c8463e8;
      local_3d8._12_4_ = (undefined4)((ulonglong)DAT_14c8463e8 >> 0x20);
      uVar26 = local_408._8_4_;
      uVar71 = local_408._12_4_;
      uVar27 = local_408._0_4_;
      uVar63 = local_408._4_4_;
      uVar73 = local_3d8._0_4_;
      uVar74 = local_3d8._4_4_;
      uVar75 = local_3d8._8_4_;
      uVar76 = local_3d8._12_4_;
      local_3a8 = dStack_240;
      local_3a0 = local_238;
      if (((9.999999747378752e-05 < (double)((ulonglong)dVar52 & uVar30)) ||
          (9.999999747378752e-05 < (double)((ulonglong)dVar41 & uVar30))) ||
         (9.999999747378752e-05 < (double)((ulonglong)dVar40 & uVar30))) {
        dVar51 = dVar40 * dVar40 + dVar52 * dVar52 + dVar41 * dVar41;
        if ((dVar51 != 1.0) || (NAN(dVar51))) {
          if (9.99999993922529e-09 <= dVar51) {
            dVar51 = 1.0 / SQRT(dVar51);
            dVar40 = dVar40 * dVar51;
            dVar41 = dVar41 * dVar51;
            dVar52 = dVar52 * dVar51;
          }
          else {
            dVar52 = (double)CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
            dVar41 = (double)CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
            dVar40 = DAT_14c8464f0;
          }
        }
        lVar37 = param_21[0x14];
        if ((longlong)(int)lVar37 != 0) {
          lVar31 = param_21[0x13];
          lVar32 = 0;
          do {
            if (*(char *)(lVar31 + lVar32) == '\x03') {
              *(double *)(lVar31 + 0x20 + lVar32) = local_238;
              pdVar5 = (double *)(lVar31 + 0x10 + lVar32);
              *pdVar5 = local_248;
              pdVar5[1] = dStack_240;
              *(double *)(lVar31 + 0x28 + lVar32) = dVar52;
              *(double *)(lVar31 + 0x30 + lVar32) = dVar41;
              *(double *)(lVar31 + 0x38 + lVar32) = dVar40;
            }
            lVar32 = lVar32 + 0x40;
          } while ((longlong)(int)lVar37 * 0x40 != lVar32);
        }
        dVar40 = local_258 - local_278;
        dVar41 = dStack_260 - dStack_280;
        dVar52 = local_268 - local_288;
        if (((9.999999747378752e-05 < (double)((ulonglong)dVar52 & uVar30)) ||
            (9.999999747378752e-05 < (double)((ulonglong)dVar41 & uVar30))) ||
           (9.999999747378752e-05 < (double)((ulonglong)dVar40 & uVar30))) {
          dVar51 = dVar40 * dVar40 + dVar52 * dVar52 + dVar41 * dVar41;
          if ((dVar51 != 1.0) || (NAN(dVar51))) {
            if (9.99999993922529e-09 <= dVar51) {
              dVar51 = 1.0 / SQRT(dVar51);
              dVar40 = dVar40 * dVar51;
              dVar41 = dVar41 * dVar51;
              dVar52 = dVar52 * dVar51;
            }
            else {
              dVar52 = (double)CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
              dVar41 = (double)CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
              dVar40 = DAT_14c8464f0;
            }
          }
          local_1b8 = local_378 - (dVar57 + local_258) * 0.5;
          dVar51 = (double)local_398._0_8_ - (local_368 + dStack_260) * 0.5;
          dVar57 = local_388 - (local_360 + local_268) * 0.5;
          if (param_11 != '\0') {
            local_1b8 = -local_1b8;
            dVar51 = -dVar51;
            dVar57 = -dVar57;
          }
          dVar59 = local_1b8 * dVar40 + dVar57 * dVar52 + dVar51 * dVar41;
          dVar57 = dVar57 - dVar59 * dVar52;
          dVar51 = dVar51 - dVar41 * dVar59;
          local_1b8 = local_1b8 - dVar40 * dVar59;
          dVar59 = (local_238 - local_3c8) * dVar40 +
                   (local_248 - dVar62) * dVar52 + (dStack_240 - (double)local_3f8) * dVar41;
          local_228._0_8_ = (local_248 - dVar62) - dVar59 * dVar52;
          register0x00001300 = (dStack_240 - (double)local_3f8) - dVar41 * dVar59;
          local_218 = (local_238 - local_3c8) - dVar40 * dVar59;
          dVar52 = local_1b8 * local_1b8 + dVar57 * dVar57 + dVar51 * dVar51;
          if ((dVar52 != 1.0) || (NAN(dVar52))) {
            if (9.99999993922529e-09 <= dVar52) {
              dVar52 = 1.0 / SQRT(dVar52);
              local_1b8 = local_1b8 * dVar52;
              dVar51 = dVar51 * dVar52;
              dVar57 = dVar57 * dVar52;
            }
            else {
              dVar57 = (double)CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
              dVar51 = (double)CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
              local_1b8 = DAT_14c8464f0;
            }
          }
          uVar68 = 0x7fffffff;
          uVar67 = 0xffffffff;
          local_1c8 = SUB84(dVar57,0);
          uStack_1c4 = (uint)((ulonglong)dVar57 >> 0x20);
          uStack_1c0 = SUB84(dVar51,0);
          uStack_1bc = (uint)((ulonglong)dVar51 >> 0x20);
          dVar52 = local_218 * local_218 +
                   (double)local_228._0_8_ * (double)local_228._0_8_ +
                   register0x00001300 * register0x00001300;
          if ((dVar52 != 1.0) || (NAN(dVar52))) {
            if (9.99999993922529e-09 <= dVar52) {
              dVar52 = 1.0 / SQRT(dVar52);
              local_218 = local_218 * dVar52;
              register0x00001300 = register0x00001300 * dVar52;
              local_228._0_8_ = (double)local_228._0_8_ * dVar52;
            }
            else {
              local_228._0_8_ = CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
              unique0x10003ed0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
              local_218 = DAT_14c8464f0;
            }
          }
          if ((((9.999999747378752e-05 < ABS(dVar57)) || (9.999999747378752e-05 < ABS(dVar51))) ||
              (9.999999747378752e-05 < ABS(local_1b8))) &&
             (((9.999999747378752e-05 < ABS((double)local_228._0_8_) ||
               (9.999999747378752e-05 < ABS(register0x00001300))) ||
              (9.999999747378752e-05 < ABS(local_218))))) {
            local_408 = auVar15;
            local_3d8 = auVar14;
            FUN_144a9d448(&local_158,&local_1c8,local_228);
            dVar41 = (double)CONCAT44(uStack_154,local_158);
            auVar24._8_4_ = uStack_150;
            auVar24._0_8_ = dVar41;
            auVar24._12_2_ = uStack_14c;
            auVar24._14_2_ = uStack_14a;
            dVar57 = auVar24._8_8_;
            uVar71 = auVar24._12_4_;
            dVar40 = (double)CONCAT44(uStack_144,local_148);
            auVar25._8_4_ = uStack_140;
            auVar25._0_8_ = dVar40;
            auVar25._12_4_ = uStack_13c;
            dVar52 = auVar25._8_8_;
            iVar29 = (int)param_21[1];
            uVar27 = local_158;
            uVar63 = uStack_154;
            uVar26 = uStack_150;
            uVar73 = local_148;
            uVar74 = uStack_144;
            uVar75 = uStack_140;
            uVar76 = uStack_13c;
            auVar15 = local_408;
            auVar14 = local_3d8;
            if (2 < iVar29) {
              auVar14._8_4_ = uStack_150;
              auVar14._0_8_ = dVar57;
              auVar14._12_4_ = uVar71;
              local_378 = -dVar57;
              dStack_370 = -dVar57;
              local_388 = -dVar41;
              dStack_380 = -dVar57;
              dVar51 = -dVar40;
              auVar15._8_4_ = uStack_140;
              auVar15._0_8_ = dVar51;
              auVar15._12_4_ = uStack_13c ^ 0x80000000;
              local_398._8_4_ = uStack_140;
              local_398._0_8_ = dVar52;
              local_398._12_4_ = uStack_13c;
              lVar37 = 1;
              lVar31 = 0x60;
              do {
                lVar32 = param_21[0xb];
                if (1e-08 < *(float *)(lVar32 + -0x20 + lVar31)) {
                  dVar69 = *(double *)(lVar32 + lVar31) - local_3c8;
                  dVar59 = *(double *)(lVar32 + -8 + lVar31) - (double)local_3f8;
                  dVar61 = *(double *)(lVar32 + -0x10 + lVar31) - dVar62;
                  dVar16 = dVar57 * dVar69 + dVar59 * dVar51;
                  dVar16 = dVar16 + dVar16;
                  dVar66 = dVar41 * dVar59 + dVar61 * local_378;
                  dVar66 = dVar66 + dVar66;
                  dVar58 = dVar40 * dVar61 + dVar69 * local_388;
                  dVar58 = dVar58 + dVar58;
                  *(double *)(lVar32 + -0x10 + lVar31) =
                       dVar58 * dVar51 + dVar57 * dVar66 + dVar52 * dVar16 + dVar61 + dVar62;
                  *(double *)(lVar32 + -8 + lVar31) =
                       dVar66 * local_388 + dVar40 * dVar16 + dVar52 * dVar58 + dVar59 +
                       (double)local_3f8;
                  *(double *)(lVar32 + lVar31) =
                       dVar41 * dVar58 + dVar16 * local_378 + dVar52 * dVar66 + dVar69 + local_3c8;
                  iVar29 = (int)param_21[1];
                }
                uVar68 = 0x7fffffff;
                uVar67 = 0xffffffff;
                lVar37 = lVar37 + 1;
                lVar31 = lVar31 + 0x40;
                uVar27 = local_158;
                uVar63 = uStack_154;
                uVar26 = uStack_150;
                uVar73 = local_148;
                uVar74 = uStack_144;
                uVar75 = uStack_140;
                uVar76 = uStack_13c;
              } while (lVar37 < iVar29 + -1);
            }
          }
        }
      }
      local_3d8 = auVar14;
      local_408 = auVar15;
      if (param_16 == 0) {
        dVar57 = (double)*(float *)(param_21 + 9);
      }
      else {
        dVar57 = *(double *)(lVar38 + 0x20);
      }
      iVar29 = 0x20;
      if (param_17 < 0x20) {
        iVar29 = param_17;
      }
      iVar28 = 1;
      if (1 < iVar29) {
        iVar28 = iVar29;
      }
      auVar17._4_8_ = (ulonglong)((double)iVar28 * dVar57) >> 0x20;
      auVar17._0_4_ = (float)((double)iVar28 * dVar57);
      (**(code **)(param_21[8] + 0x20))(plVar39,auVar17._0_8_);
      local_298 = DAT_14c8464f0;
      local_2a8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
      uStack_2a0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
      local_2b8 = DAT_14c8464f0;
      local_2c8 = (uint)DAT_14c8464e0;
      uStack_2c4 = DAT_14c8464e0._4_4_;
      uStack_2c0 = (uint)DAT_14c8464e8;
      uStack_2bc = DAT_14c8464e8._4_4_;
      uVar30 = (ulonglong)*(uint *)(param_21 + 1);
      if (0 < (int)*(uint *)(param_21 + 1)) {
        local_3c8 = (double)CONCAT44(uVar74,uVar73);
        local_3f8._0_4_ = 0;
        local_3f8._4_4_ = 0;
        uStack_3f0 = 0;
        uStack_3ec = 0x3ff00000;
        lVar38 = 0;
        lVar37 = 0;
        uVar34 = 0;
        local_408._4_4_ = uVar71;
        local_408._0_4_ = uVar26;
        local_408._8_4_ = uVar26;
        local_408._12_4_ = uVar71;
        local_3d8._4_4_ = uVar63;
        local_3d8._0_4_ = uVar27;
        local_3d8._8_4_ = uVar27;
        local_3d8._12_4_ = uVar63;
        uVar64 = uVar27;
        uVar65 = uVar63;
        uVar70 = uVar26;
        uVar72 = uVar71;
        uStack_3c0 = uVar73;
        uStack_3bc = uVar74;
        do {
          iVar29 = (int)uVar30;
          lVar31 = param_21[6];
          if (1e-08 < *(float *)(param_21[0xb] + lVar37 * 2)) {
            FUN_1491b16d0(plVar39,&local_158,uVar34 & 0xffffffff);
            auVar42._8_8_ = 0;
            auVar42._0_8_ = local_138;
            puVar4 = (undefined4 *)(lVar31 + 0x20 + lVar38);
            *puVar4 = local_148;
            puVar4[1] = uStack_144;
            puVar4[2] = uStack_140;
            puVar4[3] = uStack_13c;
            *(undefined1 (*) [16])(lVar31 + 0x30 + lVar38) = auVar42;
            iVar29 = (int)param_21[1];
          }
          if (uVar34 != iVar29 - 1) {
            dVar62 = *(double *)(lVar31 + lVar38);
            dVar52 = ((double *)(lVar31 + lVar38))[1];
            pdVar5 = (double *)(lVar31 + 0x10 + lVar38);
            dVar41 = *pdVar5;
            dVar40 = pdVar5[1];
            dVar51 = dVar52 * local_3c8 * -1.0 +
                     (double)CONCAT44(uVar63,uVar27) * dVar40 * 1.0 +
                     (double)CONCAT44(uVar76,uVar75) * dVar62 +
                     (double)CONCAT44(uVar71,uVar26) * dVar41;
            dVar59 = dVar62 * (double)CONCAT44(uStack_3bc,uStack_3c0) * 1.0 +
                     (double)CONCAT44(uVar65,uVar64) * dVar41 * -1.0 +
                     (double)CONCAT44(uVar76,uVar75) * dVar52 +
                     (double)CONCAT44(uVar72,uVar70) * dVar40;
            dVar57 = dVar40 * local_3c8 * 1.0 +
                     (((double)CONCAT44(uVar63,uVar27) * dVar52 * 1.0 +
                      (double)CONCAT44(uVar76,uVar75) * dVar41) -
                     (double)CONCAT44(uVar71,uVar26) * dVar62);
            dVar62 = dVar41 * (double)CONCAT44(uStack_3bc,uStack_3c0) * -1.0 +
                     (((double)CONCAT44(uVar65,uVar64) * dVar62 * -1.0 +
                      (double)CONCAT44(uVar76,uVar75) * dVar40) -
                     (double)CONCAT44(uVar72,uVar70) * dVar52);
            *(double *)(lVar31 + lVar38) = dVar51;
            ((double *)(lVar31 + lVar38))[1] = dVar59;
            auVar11._8_4_ = SUB84(dVar62,0);
            auVar11._0_8_ = dVar57;
            auVar11._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
            *(undefined1 (*) [16])(lVar31 + 0x10 + lVar38) = auVar11;
            dVar52 = *param_14;
            dVar41 = param_14[1];
            dVar40 = dVar41 * dVar51 - dVar52 * dVar59;
            dVar61 = param_14[2] * dVar59 - dVar41 * dVar57;
            dVar66 = dVar52 * dVar57 - dVar51 * param_14[2];
            dVar61 = dVar61 + dVar61;
            dVar66 = dVar66 + dVar66;
            dVar40 = dVar40 + dVar40;
            local_218 = dVar62 * dVar40 + param_14[2] + (dVar66 * dVar51 - dVar61 * dVar59);
            local_228._0_8_ = (dVar40 * dVar59 - dVar66 * dVar57) + dVar62 * dVar61 + dVar52;
            register0x00001348 = (dVar57 * dVar61 - dVar51 * dVar40) + dVar62 * dVar66 + dVar41;
            FUN_1491b16d0(plVar39,&local_158,(int)uVar34 + 1);
            dVar57 = local_138 - *(double *)(lVar31 + 0x30 + lVar38);
            dVar52 = (double)CONCAT44(uStack_13c,uStack_140) - *(double *)(lVar31 + 0x28 + lVar38);
            dVar62 = (double)CONCAT44(uStack_144,local_148) - *(double *)(lVar31 + 0x20 + lVar38);
            if ((((9.999999747378752e-05 < (double)((ulonglong)dVar62 & CONCAT44(uVar68,uVar67))) ||
                 (9.999999747378752e-05 < (double)((ulonglong)dVar52 & CONCAT44(uVar68,uVar67)))) ||
                (9.999999747378752e-05 < (double)((ulonglong)dVar57 & CONCAT44(uVar68,uVar67)))) &&
               (((9.999999747378752e-05 < ABS((double)local_228._0_8_) ||
                 (9.999999747378752e-05 < ABS(stack0xfffffffffffffde0))) ||
                (9.999999747378752e-05 < ABS(local_218))))) {
              dVar41 = dVar57 * dVar57 + dVar62 * dVar62 + dVar52 * dVar52;
              if ((dVar41 != 1.0) || (local_348 = dVar57, NAN(dVar41))) {
                if (9.99999993922529e-09 <= dVar41) {
                  dVar41 = 1.0 / SQRT(dVar41);
                  local_348 = dVar57 * dVar41;
                  dVar52 = dVar52 * dVar41;
                  dVar62 = dVar62 * dVar41;
                }
                else {
                  dVar62 = (double)CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
                  dVar52 = (double)CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
                  local_348 = DAT_14c8464f0;
                }
              }
              local_358 = dVar62;
              uStack_350 = dVar52;
              FUN_144a9d448(&local_158,local_228,&local_358);
              dVar57 = *(double *)(lVar31 + lVar38);
              dVar62 = ((double *)(lVar31 + lVar38))[1];
              pdVar5 = (double *)(lVar31 + 0x10 + lVar38);
              dVar52 = *pdVar5;
              dVar41 = pdVar5[1];
              dVar40 = (double)CONCAT26(uStack_14a,CONCAT24(uStack_14c,uStack_150));
              dVar51 = (double)CONCAT26(uStack_14a,CONCAT24(uStack_14c,uStack_150));
              dVar59 = dVar62 * (double)CONCAT44(uStack_144,local_148) * -1.0 +
                       dVar52 * dVar40 +
                       dVar41 * (double)CONCAT44(uStack_154,local_158) * 1.0 +
                       dVar57 * (double)CONCAT44(uStack_13c,uStack_140);
              dVar61 = dVar57 * (double)CONCAT44(uStack_144,local_148) * 1.0 +
                       dVar41 * dVar51 +
                       dVar52 * (double)CONCAT44(uStack_154,local_158) * -1.0 +
                       dVar62 * (double)CONCAT44(uStack_13c,uStack_140);
              dVar40 = dVar41 * (double)CONCAT44(uStack_144,local_148) * 1.0 +
                       (((double)CONCAT44(uStack_154,local_158) * dVar62 * 1.0 +
                        (double)CONCAT44(uStack_13c,uStack_140) * dVar52) - dVar57 * dVar40);
              dVar57 = dVar52 * (double)CONCAT44(uStack_144,local_148) * -1.0 +
                       (((double)CONCAT44(uStack_154,local_158) * dVar57 * -1.0 +
                        (double)CONCAT44(uStack_13c,uStack_140) * dVar41) - dVar62 * dVar51);
              dVar62 = dVar40 * dVar40 + dVar59 * dVar59;
              dVar52 = dVar57 * dVar57 + dVar61 * dVar61;
              auVar47._0_8_ = dVar62 + dVar52;
              auVar47._8_8_ = dVar62 + dVar52;
              uVar30 = -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
              auVar50 = sqrtpd(auVar47,auVar47);
              auVar53 = divpd(_DAT_149934d80,auVar50);
              auVar54._0_8_ = auVar53._0_8_ * dVar40;
              auVar54._8_8_ = auVar53._8_8_ * dVar57;
              auVar21._4_4_ = local_3f8._4_4_;
              auVar21._0_4_ = (undefined4)local_3f8;
              auVar21._8_4_ = uStack_3f0;
              auVar21._12_4_ = uStack_3ec;
              auVar12._8_4_ = (int)uVar30;
              auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
              auVar12._12_4_ = (int)(uVar30 >> 0x20);
              auVar50 = blendvpd(auVar21,auVar54,auVar12);
              *(ulonglong *)(lVar31 + lVar38) =
                   (ulonglong)(dVar59 * auVar53._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
              ((ulonglong *)(lVar31 + lVar38))[1] = (ulonglong)(dVar61 * auVar53._8_8_) & uVar30;
              *(undefined1 (*) [16])(lVar31 + 0x10 + lVar38) = auVar50;
              if (uVar34 == 0) {
                local_298 = local_3a0 - *(double *)(lVar31 + 0x30 + lVar38);
                uStack_2a0 = local_3a8 - *(double *)(lVar31 + 0x28 + lVar38);
                local_2a8 = local_3b0 - *(double *)(lVar31 + 0x20 + lVar38);
              }
              else {
                FUN_144a9d448(&local_1c8,&local_2c8,&local_358);
                dVar62 = (double)CONCAT44(uStack_1c4,local_1c8);
                dVar52 = (double)CONCAT44(uStack_1bc,uStack_1c0);
                dVar40 = dVar52 * local_298 - uStack_2a0 * local_1b8;
                dVar40 = dVar40 + dVar40;
                dVar57 = dVar62 * uStack_2a0 - local_2a8 * dVar52;
                dVar57 = dVar57 + dVar57;
                dVar41 = local_1b8 * local_2a8 - local_298 * dVar62;
                dVar41 = dVar41 + dVar41;
                local_298 = (dVar62 * dVar41 - dVar40 * dVar52) + local_1b0 * dVar57 + local_298;
                uStack_2a0 = (local_1b8 * dVar40 - dVar57 * dVar62) +
                             local_1b0 * dVar41 + uStack_2a0;
                local_2a8 = (dVar52 * dVar57 - dVar41 * local_1b8) + dVar40 * local_1b0 + local_2a8;
              }
              dVar52 = *param_15;
              dVar41 = param_15[1];
              dVar40 = *(double *)(lVar31 + lVar38);
              dVar51 = ((double *)(lVar31 + lVar38))[1];
              dVar59 = *(double *)(lVar31 + 0x10 + lVar38);
              pdVar5 = (double *)(lVar31 + 0x18 + lVar38);
              dVar57 = *pdVar5;
              dVar62 = dVar41 * dVar40 - dVar52 * dVar51;
              dVar66 = param_15[2] * dVar51 - dVar41 * dVar59;
              dVar61 = dVar52 * dVar59 - dVar40 * param_15[2];
              dVar66 = dVar66 + dVar66;
              dVar61 = dVar61 + dVar61;
              dVar62 = dVar62 + dVar62;
              local_218 = dVar62 * dVar57 + param_15[2] + (dVar61 * dVar40 - dVar66 * dVar51);
              local_228._0_8_ = (dVar62 * dVar51 - dVar61 * dVar59) + dVar57 * dVar66 + dVar52;
              register0x00001348 = (dVar59 * dVar66 - dVar40 * dVar62) + *pdVar5 * dVar61 + dVar41;
              uVar30 = DAT_149931180;
              uVar67 = (undefined4)DAT_149931180;
              uVar68 = DAT_149931180._4_4_;
              uVar26 = local_408._0_4_;
              uVar71 = local_408._4_4_;
              uVar70 = local_408._8_4_;
              uVar72 = local_408._12_4_;
              if ((((9.999999747378752e-05 < (double)((ulonglong)local_2a8 & uVar30)) ||
                   (9.999999747378752e-05 < (double)((ulonglong)uStack_2a0 & uVar30))) ||
                  (9.999999747378752e-05 < (double)((ulonglong)local_298 & uVar30))) &&
                 (((9.999999747378752e-05 < ABS((double)local_228._0_8_) ||
                   (9.999999747378752e-05 < (double)((ulonglong)register0x00001348 & uVar30))) ||
                  (9.999999747378752e-05 < (double)((ulonglong)local_218 & uVar30))))) {
                dVar57 = local_298 * local_348 + local_2a8 * local_358 + uStack_2a0 * uStack_350;
                local_298 = local_298 - local_348 * dVar57;
                uStack_2a0 = uStack_2a0 - uStack_350 * dVar57;
                local_2a8 = local_2a8 - dVar57 * local_358;
                dVar57 = local_298 * local_298 + local_2a8 * local_2a8 + uStack_2a0 * uStack_2a0;
                if ((dVar57 != 1.0) || (NAN(dVar57))) {
                  if (9.99999993922529e-09 <= dVar57) {
                    dVar57 = 1.0 / SQRT(dVar57);
                    local_298 = local_298 * dVar57;
                    uStack_2a0 = uStack_2a0 * dVar57;
                    local_2a8 = local_2a8 * dVar57;
                  }
                  else {
                    local_2a8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
                    uStack_2a0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
                    local_298 = DAT_14c8464f0;
                  }
                }
                FUN_144a9d448(&local_1c8,local_228,&local_2a8);
                dVar57 = *(double *)(lVar31 + lVar38);
                dVar62 = ((double *)(lVar31 + lVar38))[1];
                pdVar5 = (double *)(lVar31 + 0x10 + lVar38);
                dVar52 = *pdVar5;
                dVar41 = pdVar5[1];
                dVar40 = dVar62 * local_1b8 * -1.0 +
                         dVar52 * (double)CONCAT44(uStack_1bc,uStack_1c0) +
                         dVar41 * (double)CONCAT44(uStack_1c4,local_1c8) * 1.0 + dVar57 * local_1b0;
                dVar51 = dVar57 * local_1b8 * 1.0 +
                         dVar41 * (double)CONCAT44(uStack_1bc,uStack_1c0) +
                         dVar52 * (double)CONCAT44(uStack_1c4,local_1c8) * -1.0 + dVar62 * local_1b0
                ;
                dVar59 = dVar41 * local_1b8 * 1.0 +
                         (((double)CONCAT44(uStack_1c4,local_1c8) * dVar62 * 1.0 +
                          local_1b0 * dVar52) - dVar57 * (double)CONCAT44(uStack_1bc,uStack_1c0));
                dVar57 = dVar52 * local_1b8 * -1.0 +
                         (((double)CONCAT44(uStack_1c4,local_1c8) * dVar57 * -1.0 +
                          local_1b0 * dVar41) - dVar62 * (double)CONCAT44(uStack_1bc,uStack_1c0));
                dVar62 = dVar59 * dVar59 + dVar40 * dVar40;
                dVar52 = dVar57 * dVar57 + dVar51 * dVar51;
                auVar48._0_8_ = dVar62 + dVar52;
                auVar48._8_8_ = dVar62 + dVar52;
                uVar30 = -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
                auVar50 = sqrtpd(auVar48,auVar48);
                auVar50 = divpd(_DAT_149934d80,auVar50);
                auVar55._0_8_ = auVar50._0_8_ * dVar59;
                auVar55._8_8_ = auVar50._8_8_ * dVar57;
                auVar45._0_8_ =
                     (ulonglong)(dVar40 * auVar50._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
                auVar45._8_8_ = (ulonglong)(dVar51 * auVar50._8_8_) & uVar30;
                auVar22._4_4_ = local_3f8._4_4_;
                auVar22._0_4_ = (undefined4)local_3f8;
                auVar22._8_4_ = uStack_3f0;
                auVar22._12_4_ = uStack_3ec;
                auVar13._8_4_ = (int)uVar30;
                auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
                auVar13._12_4_ = (int)(uVar30 >> 0x20);
                auVar50 = blendvpd(auVar22,auVar55,auVar13);
                *(undefined1 (*) [16])(lVar31 + lVar38) = auVar45;
                *(undefined1 (*) [16])(lVar31 + 0x10 + lVar38) = auVar50;
              }
              local_2b8 = local_348;
              local_2c8 = (uint)local_358;
              uStack_2c4 = local_358._4_4_;
              uStack_2c0 = (uint)uStack_350;
              uStack_2bc = uStack_350._4_4_;
              uVar27 = local_3d8._0_4_;
              uVar63 = local_3d8._4_4_;
              uVar64 = local_3d8._8_4_;
              uVar65 = local_3d8._12_4_;
            }
          }
          lVar32 = local_418;
          if (param_18 != '\0') {
            local_2d0 = *(undefined4 *)(*param_21 + 8 + lVar37);
            local_2d8 = *(undefined8 *)(*param_21 + lVar37);
            FUN_1408130c0(local_418,&local_158,&local_2d8);
            iVar29 = FUN_140813180(lVar32,&local_158);
            lVar32 = local_418;
            if (iVar29 != -1) {
              uVar33 = (uint)*(ushort *)(*param_21 + 0xc + lVar37);
              if (uVar33 == 0xffff) {
                uVar33 = 0xffffffff;
              }
              FUN_14486750c(local_418,&local_158,uVar33,1);
              FUN_14486750c(lVar32,&local_1c8,iVar29,1);
              FUN_14486750c(lVar32,local_228,iVar29,0);
              plVar39 = local_410;
              fVar60 = (float)SQRT((local_128 - local_198) * (local_128 - local_198) +
                                   (local_138 - local_1a8) * (local_138 - local_1a8) +
                                   (uStack_130 - dStack_1a0) * (uStack_130 - dStack_1a0));
              iVar29 = (int)param_21[1];
              if ((1e-08 < fVar60) && ((longlong)uVar34 < (longlong)iVar29 + -1)) {
                pdVar5 = (double *)(lVar31 + 0x20 + lVar38);
                dVar52 = *(double *)(lVar31 + 0x30 + lVar38) - local_1f8;
                dVar57 = *pdVar5 - local_208;
                dVar62 = pdVar5[1] - dStack_200;
                if ((9.999999747378752e-05 < (double)((ulonglong)dVar57 & CONCAT44(uVar68,uVar67)))
                   || ((9.999999747378752e-05 <
                        (double)((ulonglong)dVar62 & CONCAT44(uVar68,uVar67)) ||
                       (9.999999747378752e-05 <
                        (double)((ulonglong)dVar52 & CONCAT44(uVar68,uVar67)))))) {
                  dVar41 = dVar52 * dVar52 + dVar57 * dVar57 + dVar62 * dVar62;
                  if ((dVar41 != 1.0) || (NAN(dVar41))) {
                    if (9.99999993922529e-09 <= dVar41) {
                      dVar41 = 1.0 / SQRT(dVar41);
                      dVar52 = dVar52 * dVar41;
                      dVar62 = dVar62 * dVar41;
                      dVar57 = dVar57 * dVar41;
                    }
                    else {
                      dVar57 = (double)CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
                      dVar62 = (double)CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
                      dVar52 = DAT_14c8464f0;
                    }
                  }
                  dVar41 = (double)fVar60;
                  auVar43._0_8_ = local_1f8 + dVar52 * dVar41;
                  dVar62 = dStack_200 + dVar62 * dVar41;
                  auVar43._8_8_ = 0;
                  auVar8._8_4_ = SUB84(dVar62,0);
                  auVar8._0_8_ = dVar57 * dVar41 + local_208;
                  auVar8._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
                  *(undefined1 (*) [16])(lVar31 + 0x20 + lVar38) = auVar8;
                  *(undefined1 (*) [16])(lVar31 + 0x30 + lVar38) = auVar43;
                  iVar29 = (int)param_21[1];
                }
              }
              if (uVar34 == iVar29 - 2) {
                dVar62 = *param_14;
                dVar52 = param_14[1];
                dVar41 = *(double *)(lVar31 + lVar38);
                dVar40 = ((double *)(lVar31 + lVar38))[1];
                dVar51 = *(double *)(lVar31 + 0x10 + lVar38);
                pdVar5 = (double *)(lVar31 + 0x18 + lVar38);
                dVar57 = *pdVar5;
                dVar59 = dVar52 * dVar41 - dVar62 * dVar40;
                dVar61 = param_14[2] * dVar40 - dVar52 * dVar51;
                dVar66 = dVar62 * dVar51 - dVar41 * param_14[2];
                uVar30 = DAT_149931180;
                uVar67 = (undefined4)DAT_149931180;
                uVar68 = DAT_149931180._4_4_;
                dVar61 = dVar61 + dVar61;
                dVar66 = dVar66 + dVar66;
                dVar59 = dVar59 + dVar59;
                local_2e8 = dVar59 * dVar57 + param_14[2] + (dVar66 * dVar41 - dVar61 * dVar40);
                local_2f8 = (dVar59 * dVar40 - dVar66 * dVar51) + dVar57 * dVar61 + dVar62;
                dStack_2f0 = (dVar51 * dVar61 - dVar41 * dVar59) + *pdVar5 * dVar66 + dVar52;
                FUN_1491b16d0(local_410,&local_358,(int)uVar34 + 1);
                dVar57 = local_338 - *(double *)(lVar31 + 0x30 + lVar38);
                dVar52 = local_340 - *(double *)(lVar31 + 0x28 + lVar38);
                dVar62 = local_348 - *(double *)(lVar31 + 0x20 + lVar38);
                if ((((9.999999747378752e-05 < (double)((ulonglong)dVar62 & uVar30)) ||
                     (9.999999747378752e-05 < (double)((ulonglong)dVar52 & uVar30))) ||
                    (9.999999747378752e-05 < (double)((ulonglong)dVar57 & uVar30))) &&
                   (((9.999999747378752e-05 < ABS(local_2f8) ||
                     (9.999999747378752e-05 < ABS(dStack_2f0))) ||
                    (9.999999747378752e-05 < ABS(local_2e8))))) {
                  dVar41 = dVar57 * dVar57 + dVar62 * dVar62 + dVar52 * dVar52;
                  if ((dVar41 != 1.0) || (NAN(dVar41))) {
                    if (9.99999993922529e-09 <= dVar41) {
                      dVar41 = 1.0 / SQRT(dVar41);
                      dVar57 = dVar57 * dVar41;
                      dVar52 = dVar52 * dVar41;
                      dVar62 = dVar62 * dVar41;
                    }
                    else {
                      dVar62 = (double)CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
                      dVar52 = (double)CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
                      dVar57 = DAT_14c8464f0;
                    }
                  }
                  local_310 = dVar62;
                  local_308 = dVar52;
                  local_300 = dVar57;
                  FUN_144a9d448(&local_358,&local_2f8,&local_310);
                  dVar57 = *(double *)(lVar31 + lVar38);
                  dVar62 = ((double *)(lVar31 + lVar38))[1];
                  pdVar5 = (double *)(lVar31 + 0x10 + lVar38);
                  dVar52 = *pdVar5;
                  dVar41 = pdVar5[1];
                  dVar40 = dVar62 * local_348 * -1.0 +
                           dVar52 * uStack_350 + dVar41 * local_358 * 1.0 + dVar57 * local_340;
                  dVar51 = dVar57 * local_348 * 1.0 +
                           dVar41 * uStack_350 + dVar52 * local_358 * -1.0 + dVar62 * local_340;
                  dVar59 = dVar41 * local_348 * 1.0 +
                           ((local_358 * dVar62 * 1.0 + local_340 * dVar52) - dVar57 * uStack_350);
                  dVar57 = dVar52 * local_348 * -1.0 +
                           ((local_358 * dVar57 * -1.0 + local_340 * dVar41) - dVar62 * uStack_350);
                  dVar62 = dVar59 * dVar59 + dVar40 * dVar40;
                  dVar52 = dVar57 * dVar57 + dVar51 * dVar51;
                  auVar49._0_8_ = dVar62 + dVar52;
                  auVar49._8_8_ = dVar62 + dVar52;
                  uVar30 = -(ulonglong)(9.99999993922529e-09 <= auVar49._8_8_);
                  auVar50 = sqrtpd(auVar49,auVar49);
                  auVar50 = divpd(_DAT_149934d80,auVar50);
                  auVar56._0_8_ = auVar50._0_8_ * dVar59;
                  auVar56._8_8_ = auVar50._8_8_ * dVar57;
                  auVar46._0_8_ =
                       (ulonglong)(dVar40 * auVar50._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar49._0_8_);
                  auVar46._8_8_ = (ulonglong)(dVar51 * auVar50._8_8_) & uVar30;
                  auVar23._4_4_ = local_3f8._4_4_;
                  auVar23._0_4_ = (undefined4)local_3f8;
                  auVar23._8_4_ = uStack_3f0;
                  auVar23._12_4_ = uStack_3ec;
                  auVar10._8_4_ = (int)uVar30;
                  auVar10._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar49._0_8_);
                  auVar10._12_4_ = (int)(uVar30 >> 0x20);
                  auVar50 = blendvpd(auVar23,auVar56,auVar10);
                  *(undefined1 (*) [16])(lVar31 + lVar38) = auVar46;
                  *(undefined1 (*) [16])(lVar31 + 0x10 + lVar38) = auVar50;
                }
              }
              if ((1e-08 < fVar60) && (uVar34 == (int)param_21[1] - 1)) {
                pdVar5 = (double *)(lVar31 + 0x20 + lVar38);
                dVar52 = *(double *)(lVar31 + 0x30 + lVar38) - local_1f8;
                dVar57 = *pdVar5 - local_208;
                dVar62 = pdVar5[1] - dStack_200;
                if ((9.999999747378752e-05 < (double)((ulonglong)dVar57 & CONCAT44(uVar68,uVar67)))
                   || ((9.999999747378752e-05 <
                        (double)((ulonglong)dVar62 & CONCAT44(uVar68,uVar67)) ||
                       (9.999999747378752e-05 <
                        (double)((ulonglong)dVar52 & CONCAT44(uVar68,uVar67)))))) {
                  dVar41 = dVar52 * dVar52 + dVar57 * dVar57 + dVar62 * dVar62;
                  if ((dVar41 != 1.0) || (NAN(dVar41))) {
                    if (9.99999993922529e-09 <= dVar41) {
                      dVar41 = 1.0 / SQRT(dVar41);
                      dVar52 = dVar52 * dVar41;
                      dVar62 = dVar62 * dVar41;
                      dVar57 = dVar57 * dVar41;
                    }
                    else {
                      dVar57 = (double)CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
                      dVar62 = (double)CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
                      dVar52 = DAT_14c8464f0;
                    }
                  }
                  dVar41 = (double)fVar60;
                  auVar44._0_8_ = local_1f8 + dVar52 * dVar41;
                  dVar62 = dStack_200 + dVar62 * dVar41;
                  auVar44._8_8_ = 0;
                  auVar9._8_4_ = SUB84(dVar62,0);
                  auVar9._0_8_ = dVar57 * dVar41 + local_208;
                  auVar9._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
                  *(undefined1 (*) [16])(lVar31 + 0x20 + lVar38) = auVar9;
                  *(undefined1 (*) [16])(lVar31 + 0x30 + lVar38) = auVar44;
                }
              }
            }
          }
          uVar33 = (uint)*(ushort *)(*param_21 + 0xc + lVar37);
          if (uVar33 == 0xffff) {
            uVar33 = 0xffffffff;
          }
          puVar36 = (undefined8 *)(lVar31 + lVar38);
          puVar35 = &local_158;
          for (lVar32 = 0xc; lVar32 != 0; lVar32 = lVar32 + -1) {
            *(undefined8 *)puVar35 = *puVar36;
            puVar36 = puVar36 + 1;
            puVar35 = puVar35 + 2;
          }
          local_428 = 0;
          local_430 = local_430 & 0xffffff00;
          local_438 = (char *)CONCAT71(local_438._1_7_,param_19);
          FUN_144831e8e(local_418,uVar33,&local_158,0);
          uVar34 = uVar34 + 1;
          uVar30 = (ulonglong)(int)param_21[1];
          lVar37 = lVar37 + 0x20;
          lVar38 = lVar38 + 0x60;
        } while ((longlong)uVar34 < (longlong)uVar30);
      }
      if ((*(longlong *)(local_3e0 + 0x58) != 0) && (*param_20 == '\x01')) {
        pcVar1 = param_20 + 8;
        pcVar2 = param_20 + 0x20;
        local_430 = 0;
        local_438 = pcVar1;
        FUN_14446764a(*(longlong *)(local_3e0 + 0x58),pcVar2,&local_248,&local_268);
        lVar37 = local_3e0;
        local_430 = 0;
        local_438 = pcVar1;
        FUN_14446764a(*(undefined8 *)(local_3e0 + 0x58),pcVar2,&local_248,&local_288);
        dVar57 = (double)*(float *)(param_20 + 4);
        local_108 = DAT_14c846520 * dVar57 * 10.0;
        dVar62 = DAT_14c846518 * dVar57 * 10.0;
        local_158 = (uint)DAT_14c8463d0;
        uStack_154 = (uint)((ulonglong)DAT_14c8463d0 >> 0x20);
        uStack_150 = (uint)DAT_14c8463d8;
        uStack_14c = (undefined2)((ulonglong)DAT_14c8463d8 >> 0x20);
        uStack_14a = (undefined2)((ulonglong)DAT_14c8463d8 >> 0x30);
        local_148 = (undefined4)DAT_14c8463e0;
        uStack_144 = (undefined4)((ulonglong)DAT_14c8463e0 >> 0x20);
        uStack_140 = (undefined4)DAT_14c8463e8;
        uStack_13c = (uint)((ulonglong)DAT_14c8463e8 >> 0x20);
        local_138 = local_248;
        uStack_130 = dStack_240;
        local_128 = local_238;
        uStack_120 = 0;
        local_118._8_4_ = SUB84(dVar62,0);
        local_118._0_8_ = dVar57 * DAT_14c846510 * 10.0;
        local_118._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
        uStack_100 = 0;
        local_438 = (char *)((ulonglong)local_438 & 0xffffffff00000000);
        FUN_144467984(*(undefined8 *)(lVar37 + 0x58),pcVar2,&local_158,pcVar1);
      }
    }
  }
LAB_149274ebf:
  if ((local_f0 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492776d6 FUN_1492776d6 body=243 status=ok
// SIG undefined FUN_1492776d6(void)

void FUN_1492776d6(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [4];
  undefined8 local_54;
  undefined1 local_4c [4];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)*puVar3;
  uVar1 = *(undefined1 *)puVar3[4];
  uVar5 = puVar3[8];
  puVar6 = (undefined8 *)puVar3[0xc];
  puVar7 = (undefined8 *)puVar3[0x10];
  uVar2 = *(undefined1 *)puVar3[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_70 = FUN_144828ac0(puVar3 + 0x18,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  local_68 = *puVar7;
  local_80 = &local_68;
  local_60 = *(undefined4 *)(puVar7 + 1);
  local_88 = local_4c;
  local_4c[0] = 1;
  local_48 = *puVar6;
  local_58[0] = 1;
  local_54 = *puVar4;
  local_78 = uVar2;
  FUN_149277a14(*(undefined8 *)(param_1 + 0xc0),local_58,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar5);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492777d2 FUN_1492777d2 body=190 status=ok
// SIG undefined FUN_1492777d2(void)

void FUN_1492777d2(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [4];
  undefined8 local_34;
  undefined1 local_2c [4];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_48 = *(undefined8 *)(param_1 + 0x268);
  local_60 = &local_48;
  local_40 = *(undefined4 *)(param_1 + 0x270);
  local_50 = param_1 + 0x280;
  local_58 = *(undefined1 *)(param_1 + 0x278);
  local_68 = local_2c;
  local_2c[0] = 1;
  local_28 = *(undefined8 *)(param_1 + 0x260);
  local_38[0] = 1;
  local_34 = *(undefined8 *)(param_1 + 0x1f0);
  FUN_149277a14(param_1 + 0x10,local_38,*(undefined1 *)(param_1 + 0x1f8),param_1 + 0x200);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149277892 FUN_149277892 body=213 status=ok
// SIG undefined FUN_149277892(void)

void FUN_149277892(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 unaff_RBX;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar1 = *(undefined1 *)puVar3[4];
  uVar5 = puVar3[8];
  uVar6 = puVar3[0xc];
  puVar7 = (undefined8 *)puVar3[0x10];
  uVar2 = *(undefined1 *)puVar3[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_60 = FUN_144828ac0(puVar3 + 0x18,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  local_50 = *puVar7;
  local_70 = &local_50;
  local_48 = *(undefined4 *)(puVar7 + 1);
  local_78 = uVar6;
  local_68 = uVar2;
  FUN_149277a14(*(undefined8 *)(param_1 + 0xc0),uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,uVar5);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149277970 FUN_149277970 body=162 status=ok
// SIG undefined FUN_149277970(void)

void FUN_149277970(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 *local_40;
  undefined1 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x270);
  local_40 = &local_28;
  local_20 = *(undefined4 *)(param_1 + 0x278);
  local_30 = param_1 + 0x288;
  local_38 = *(undefined1 *)(param_1 + 0x280);
  local_48 = param_1 + 0x260;
  FUN_149277a14(param_1 + 0x10,param_1 + 0x1f0,*(undefined1 *)(param_1 + 0x1fc),param_1 + 0x200);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149277a14 FUN_149277a14 body=1911 status=ok
// SIG undefined FUN_149277a14(void)

void FUN_149277a14(longlong param_1,longlong *param_2,char param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,char param_7,longlong *param_8)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  byte bVar17;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  longlong *local_240;
  longlong *local_238;
  char local_229;
  undefined8 *local_228;
  ulonglong local_220;
  longlong local_218;
  undefined4 local_210;
  longlong local_208;
  undefined4 local_200;
  longlong local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  undefined4 local_190;
  longlong local_138;
  undefined4 local_130;
  longlong local_12c;
  undefined4 local_124;
  longlong local_120;
  undefined4 local_118;
  longlong local_114;
  undefined4 local_10c;
  undefined8 local_108 [12];
  longlong local_a8;
  undefined4 local_a0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if (lVar2 == 0) goto LAB_149277cee;
  plVar12 = param_8 + 2;
  if ((int)param_8[1] != (int)param_6[1]) {
    iVar5 = *(int *)((longlong)param_8 + 0xc);
    local_228 = param_4;
    FUN_1474f9a9f(*param_8);
    *(undefined4 *)(param_8 + 1) = 0;
    if ((iVar5 < 0) && (*(int *)((longlong)param_8 + 0xc) != 0)) {
      FUN_1474ff430(param_8,0);
    }
    FUN_1407058ce(plVar12);
    lVar6 = *(longlong *)(param_1 + 0x1b0);
    param_4 = local_228;
    if ((((lVar6 != 0) && ((uint)*(ushort *)((longlong)param_2 + 6) < DAT_14c87eb08 + 1U)) &&
        (*(longlong *)((longlong)param_2 + 4) != 0)) &&
       (((char)*param_2 != '\0' && (uVar1 = *(uint *)(param_6 + 1), 0 < (int)uVar1)))) {
      local_220 = (ulonglong)uVar1;
      if (param_7 == '\0') {
        local_200 = (undefined4)param_2[1];
        local_208 = *param_2;
        uVar4 = FUN_140813180(lVar6);
        FUN_14486750c(lVar6,&local_a8,uVar4,0);
        local_120 = *param_2;
        local_118 = (undefined4)param_2[1];
        FUN_1408130c0(lVar6,&local_12c);
        if (param_3 == '\x03') {
          local_190 = (undefined4)param_5[1];
          local_198 = *param_5;
          uVar4 = FUN_140813180(lVar6);
          uVar8 = 0;
          goto LAB_149277fde;
        }
        if (param_3 == '\x02') goto LAB_149277f3c;
        if (param_3 == '\0') {
          local_190 = local_124;
          local_198 = local_12c;
          uVar4 = FUN_140813180(lVar6);
          uVar8 = 0;
          goto LAB_149277f1b;
        }
LAB_149277f59:
        puVar10 = &DAT_14c846480;
        puVar11 = local_108;
        for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
      }
      else {
        local_200 = (undefined4)param_2[1];
        local_208 = *param_2;
        uVar4 = FUN_140813180(lVar6);
        FUN_14486750c(lVar6,&local_a8,uVar4,1);
        local_120 = *param_2;
        local_118 = (undefined4)param_2[1];
        FUN_1408130c0(lVar6,&local_114);
        if (param_3 == '\x03') {
          local_190 = (undefined4)param_5[1];
          local_198 = *param_5;
          uVar4 = FUN_140813180(lVar6);
          uVar8 = 1;
LAB_149277fde:
          FUN_14486750c(lVar6,local_108,uVar4,uVar8);
        }
        else if (param_3 == '\x02') {
LAB_149277f3c:
          puVar10 = local_228;
          puVar11 = local_108;
          for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
        }
        else {
          if (param_3 != '\0') goto LAB_149277f59;
          local_190 = local_10c;
          local_198 = local_114;
          uVar4 = FUN_140813180(lVar6);
          uVar8 = 1;
LAB_149277f1b:
          FUN_14486750c(lVar6,local_108,uVar4,uVar8);
        }
      }
      local_190 = (undefined4)param_6[1];
      local_198 = *param_6;
      lVar6 = 0x6d;
      uVar14 = 0;
      uVar7 = local_220;
      param_4 = local_228;
      local_229 = param_3;
      do {
        lVar16 = *param_6;
        bVar3 = 1;
        if ((*(char *)(lVar16 + -8 + lVar6) == '\0') && (*(char *)(lVar16 + -7 + lVar6) == '\0')) {
          bVar3 = *(byte *)(lVar16 + -6 + lVar6);
        }
        cVar9 = '\x01';
        bVar17 = 1;
        if ((*(char *)(lVar16 + -5 + lVar6) == '\0') && (*(char *)(lVar16 + -4 + lVar6) == '\0')) {
          bVar17 = *(byte *)(lVar16 + -3 + lVar6);
        }
        if ((*(char *)(lVar16 + -2 + lVar6) == '\0') && (*(char *)(lVar16 + -1 + lVar6) == '\0')) {
          cVar9 = *(char *)(lVar16 + lVar6);
        }
        if (((bVar3 & bVar17) == 1) && (cVar9 != '\0')) {
          uVar8 = 3;
LAB_1492780a5:
          param_3 = local_229;
          local_240 = param_8;
          local_248 = local_108;
          local_238 = plVar12;
          FUN_14928385c(&local_198,uVar8,uVar14 & 0xffffffff,&local_a8);
          uVar7 = local_220;
          param_4 = local_228;
        }
        else {
          if (bVar3 != 0) {
            local_240 = param_8;
            local_248 = local_108;
            local_238 = plVar12;
            FUN_14928385c(&local_198,0,uVar14 & 0xffffffff,&local_a8);
            uVar7 = local_220;
            param_4 = local_228;
          }
          if (bVar17 != 0) {
            local_240 = param_8;
            local_248 = local_108;
            local_238 = plVar12;
            FUN_14928385c(&local_198,1,uVar14 & 0xffffffff,&local_a8);
            uVar7 = local_220;
            param_4 = local_228;
          }
          param_3 = local_229;
          if (cVar9 != '\0') {
            uVar8 = 2;
            goto LAB_1492780a5;
          }
        }
        uVar14 = uVar14 + 1;
        lVar6 = lVar6 + 0x70;
      } while (uVar7 != uVar14);
    }
  }
  if (((DAT_14c87eb08 + 1U <= (uint)*(ushort *)((longlong)param_2 + 6)) ||
      (*(longlong *)((longlong)param_2 + 4) == 0)) ||
     (iVar5 = (int)param_8[1], (iVar5 < 1 || (int)param_6[1] < 1) || (char)*param_2 == '\0'))
  goto LAB_149277cee;
  uVar7 = 0;
  do {
    if ((int)param_8[3] != *(int *)((longlong)param_8 + 0x44)) {
      plVar13 = (longlong *)param_8[10];
      if ((longlong *)param_8[10] == (longlong *)0x0) {
        plVar13 = param_8 + 9;
      }
      iVar15 = *(int *)((longlong)plVar13 +
                       (ulonglong)((uint)uVar7 & (int)param_8[0xb] + 0x7fffffffU) * 4);
      if (iVar15 != -1) {
        do {
          lVar6 = *plVar12 + (longlong)iVar15 * 0x10;
          if (uVar7 == *(uint *)(*plVar12 + (longlong)iVar15 * 0x10)) {
            if ((int *)(lVar6 + 4) != (int *)0x0 && lVar6 != 0) {
              lVar16 = (longlong)*(int *)(lVar6 + 4) * 0x70;
              puVar10 = (undefined8 *)(*param_6 + lVar16);
              puVar11 = (undefined8 *)(*param_8 + uVar7 * 0xe0 + 0x80);
              for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
                *puVar11 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar11 = puVar11 + 1;
              }
              *(undefined4 *)(*param_8 + 0x10 + uVar7 * 0xe0) =
                   *(undefined4 *)(*param_6 + 0x60 + lVar16);
              iVar5 = (int)param_8[1];
            }
            break;
          }
          iVar15 = *(int *)(lVar6 + 8);
        } while (iVar15 != -1);
      }
    }
    uVar7 = uVar7 + 1;
  } while ((longlong)uVar7 < (longlong)iVar5);
  local_138 = *param_2;
  local_130 = (undefined4)param_2[1];
  local_228 = param_4;
  FUN_1408130c0(lVar2,&local_198);
  if (param_3 == '\x03') {
    local_a0 = (undefined4)param_5[1];
    local_a8 = *param_5;
LAB_149277c12:
    uVar4 = FUN_140813180(lVar2);
    FUN_14486750c(lVar2,local_108,uVar4,0);
  }
  else {
    if (param_3 == '\x02') {
      puVar10 = local_108;
      lVar6 = 0xc;
      puVar11 = local_228;
    }
    else {
      if (param_3 == '\0') {
        local_a0 = local_190;
        local_a8 = local_198;
        goto LAB_149277c12;
      }
      lVar6 = 0xc;
      puVar11 = &DAT_14c846480;
      puVar10 = local_108;
    }
    for (; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar10 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  local_1a8 = *param_2;
  local_1a0 = (undefined4)param_2[1];
  uVar4 = FUN_140813180(lVar2);
  FUN_14486750c(lVar2,&local_198,uVar4,0);
  FUN_14690aedf(&local_208,&local_198,local_108,param_8);
  plVar12 = &local_208;
  plVar13 = &local_a8;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar13 = *plVar12;
    plVar12 = plVar12 + 1;
    plVar13 = plVar13 + 1;
  }
  local_210 = (undefined4)param_2[1];
  local_218 = *param_2;
  uVar4 = FUN_140813180(lVar2);
  local_238 = (longlong *)((ulonglong)local_238 & 0xffffffffffffff00);
  local_240 = (longlong *)((ulonglong)local_240 & 0xffffffffffffff00);
  local_248 = (undefined8 *)CONCAT71(local_248._1_7_,1);
  FUN_144831e8e(lVar2,uVar4,&local_a8,0);
LAB_149277cee:
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14927818c FUN_14927818c body=285 status=ok
// SIG undefined FUN_14927818c(void)

void FUN_14927818c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar2 = *(undefined1 *)puVar3[4];
  uVar5 = puVar3[8];
  puVar6 = (undefined8 *)puVar3[0xc];
  uVar7 = puVar3[0x10];
  uVar1 = *(undefined4 *)puVar3[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(puVar3 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_78 = FUN_144828ac0(*param_2 + 0xe0,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  local_70 = *puVar6;
  local_98 = &local_70;
  local_68 = *(undefined4 *)(puVar6 + 1);
  local_90 = uVar7;
  local_88 = uVar1;
  local_80 = uVar9;
  FUN_149278366(*(undefined8 *)(param_1 + 0xc0),uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff,uVar5);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492782b2 FUN_1492782b2 body=178 status=ok
// SIG undefined FUN_1492782b2(void)

void FUN_1492782b2(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_50;
  undefined4 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x208);
  local_58 = &local_28;
  local_20 = *(undefined4 *)(param_1 + 0x210);
  local_38 = param_1 + 0x240;
  local_40 = param_1 + 0x220;
  local_48 = *(undefined4 *)(param_1 + 0x21c);
  local_50 = param_1 + 0x218;
  FUN_149278366(param_1 + 0x10,param_1 + 0x1f0,*(undefined1 *)(param_1 + 0x1fc),param_1 + 0x1fd);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149278366 FUN_149278366 body=6908 status=ok
// SIG undefined FUN_149278366(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149278366(longlong param_1,undefined1 *param_2,char param_3,undefined8 param_4,
                  longlong *param_5,char *param_6,float param_7,longlong param_8,longlong *param_9)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  byte bVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  byte bVar17;
  int iVar18;
  double *pdVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined8 *puVar23;
  double *pdVar24;
  undefined1 *puVar25;
  longlong lVar26;
  uint uVar27;
  undefined1 auVar28 [12];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar55;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar56;
  double dVar66;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar73;
  double dVar74;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar75;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  undefined1 auVar80 [16];
  double dVar82;
  undefined1 auVar81 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar87;
  float fVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  float fVar92;
  undefined1 auVar93 [16];
  double dVar94;
  double dVar95;
  undefined1 auStack_5b8 [32];
  undefined1 local_598;
  undefined1 local_590;
  undefined1 local_588;
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  undefined1 local_558 [16];
  double local_548;
  double dStack_540;
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  double local_508;
  double dStack_500;
  double local_4f8 [13];
  double local_490;
  double local_488;
  double local_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  undefined1 local_438 [16];
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  undefined1 local_408 [16];
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  double local_3c8;
  double dStack_3c0;
  double local_3b8 [2];
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  double local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_368;
  undefined8 uStack_360;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
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
  double local_178 [4];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  if (((param_7 < 0.0001) || (lVar4 = *(longlong *)(param_1 + 0x1b0), lVar4 == 0)) ||
     (cVar11 = FUN_144828dba(param_8,param_2,lVar4), cVar11 == '\0')) goto LAB_149278401;
  iVar14 = (int)param_9[1];
  if (iVar14 != (int)param_5[1]) {
    FUN_149250716(param_9);
    iVar14 = (int)param_5[1];
  }
  if (iVar14 < 1) goto LAB_149278401;
  local_568._0_8_ = param_4;
  local_558[0] = *param_2;
  lVar20 = 0;
  lVar22 = 0;
  lVar26 = 0;
  auVar29 = ZEXT816(0);
  do {
    lVar5 = *param_5;
    cVar11 = FUN_144828dba(*param_9 + lVar22,lVar5 + lVar20,lVar4);
    if (cVar11 != '\0') {
      fVar87 = *(float *)(lVar5 + 0xc + lVar20);
      auVar28._4_8_ = 0;
      auVar28._0_4_ = fVar87;
      if (fVar87 <= 0.0) {
        auVar28 = ZEXT812(0) << 0x20;
      }
      uVar27 = -(uint)(auVar28._0_4_ < 0.0001);
      auVar44._0_4_ = ~uVar27 & (uint)(auVar29._0_4_ + auVar28._0_4_);
      auVar44._4_4_ = 0;
      auVar44._8_4_ = ~auVar28._8_4_ & auVar29._8_4_;
      auVar44._12_4_ = auVar29._12_4_;
      auVar86._0_4_ = uVar27 & (uint)auVar29._0_4_;
      auVar86._4_4_ = 0;
      auVar86._8_4_ = auVar28._8_4_ & auVar29._8_4_;
      auVar86._12_4_ = 0;
      auVar29 = auVar86 | auVar44;
    }
    lVar26 = lVar26 + 1;
    uVar16 = (ulonglong)(int)param_5[1];
    lVar22 = lVar22 + 0x20;
    lVar20 = lVar20 + 0x10;
  } while (lVar26 < (longlong)uVar16);
  if (auVar29._0_4_ <= 0.0001) goto LAB_149278401;
  local_2c8._8_8_ = 0;
  local_2c8._0_8_ = DAT_14c8464f0;
  local_2d8 = _DAT_14c8464e0;
  local_2f8 = ZEXT816(0);
  local_2b8 = _DAT_14c8464e0;
  local_2e8 = local_2f8;
  local_2a8 = local_2c8;
  if (0 < (int)param_5[1]) {
    fVar87 = 1.0 / auVar29._0_4_;
    uVar15 = 0;
    uVar89 = 0x3ff00000;
    uVar90 = 0;
    uVar91 = 0x3ff00000;
    lVar20 = 0;
    lVar22 = 0;
    fVar92 = 0.0;
    do {
      lVar26 = *param_9;
      sVar2 = *(short *)(lVar26 + 0xc + lVar20 * 2);
      if (((sVar2 != -1) && ((uint)*(ushort *)(lVar26 + 6 + lVar20 * 2) < DAT_14c87eb08 + 1U)) &&
         ((*(longlong *)(lVar26 + 4 + lVar20 * 2) != 0 && (*(char *)(lVar26 + lVar20 * 2) != '\0')))
         ) {
        fVar88 = *(float *)(*param_5 + 0xc + lVar20);
        if (fVar88 <= 0.0) {
          fVar88 = 0.0;
        }
        if (0.0001 <= fVar88) {
          lVar26 = lVar4;
          FUN_14486750c(lVar4,local_358,sVar2,0);
          uVar13 = (undefined4)lVar26;
          if (param_3 != '\0') {
            local_578._0_4_ = fVar92;
            local_538._0_4_ = fVar87;
            uVar27 = (uint)*(ushort *)(param_8 + 0xc);
            if (*(ushort *)(param_8 + 0xc) == 0xffff) {
              uVar27 = 0xffffffff;
            }
            FUN_14486750c(lVar4,local_3b8,uVar27,1);
            uVar27 = (uint)*(ushort *)(*param_9 + 0xc + lVar20 * 2);
            if (uVar27 == 0xffff) {
              uVar27 = 0xffffffff;
            }
            FUN_14486750c(lVar4,&local_418,uVar27,1);
            pdVar19 = local_3b8;
            uVar13 = FUN_1449437a2(pdVar19,&local_478,&local_418);
            auVar86 = _DAT_149934d80;
            dVar47 = local_318._0_8_;
            dVar82 = local_318._8_8_;
            dVar43 = local_308._0_8_;
            dVar74 = local_308._8_8_;
            dVar55 = local_438._0_8_;
            dVar75 = local_438._8_8_;
            auVar29._8_8_ = dStack_420;
            auVar29._0_8_ = local_428;
            auVar44 = minpd(local_438,local_318);
            auVar29 = minpd(auVar29,local_308);
            auVar51._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
            auVar51._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
            iVar14 = movmskpd(uVar13,auVar51);
            auVar60._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
            auVar60._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
            uVar27 = movmskpd((int)pdVar19,auVar60);
            local_528 = local_318;
            if ((uVar27 & 0x3fffffff) == 0 && iVar14 == 0) {
              local_548 = (double)local_358._0_8_;
              dStack_540 = (double)local_358._8_8_;
              local_508 = (double)local_348._0_8_;
              dStack_500 = (double)local_348._8_8_;
              dVar56 = dStack_470 * (double)local_348._0_8_ * -1.0 +
                       local_468 * (double)local_358._8_8_ +
                       dStack_460 * (double)local_358._0_8_ * 1.0 +
                       local_478 * (double)local_348._8_8_;
              dVar66 = local_478 * (double)local_348._0_8_ * 1.0 +
                       dStack_460 * (double)local_358._8_8_ +
                       local_468 * (double)local_358._0_8_ * -1.0 +
                       dStack_470 * (double)local_348._8_8_;
              auVar67._0_8_ =
                   dStack_460 * (double)local_348._0_8_ * 1.0 +
                   (((double)local_358._0_8_ * dStack_470 * 1.0 +
                    local_468 * (double)local_348._8_8_) - local_478 * (double)local_358._8_8_);
              auVar67._8_8_ =
                   local_468 * (double)local_348._0_8_ * -1.0 +
                   (((double)local_358._0_8_ * local_478 * -1.0 +
                    dStack_460 * (double)local_348._8_8_) - dStack_470 * (double)local_358._8_8_);
              dVar76 = local_458 * dVar47;
              dVar78 = dStack_450 * dVar82;
              dVar42 = local_448 * dVar43;
              dVar73 = dStack_440 * dVar74;
              dVar94 = dVar78 * (double)local_358._0_8_ - (double)local_358._8_8_ * dVar76;
              dVar95 = dVar42 * (double)local_358._8_8_ - (double)local_348._0_8_ * dVar78;
              dVar77 = dVar76 * (double)local_348._0_8_ - (double)local_358._0_8_ * dVar42;
              dVar79 = dVar73 * (double)local_348._8_8_ - (double)local_348._8_8_ * dVar73;
              dVar95 = dVar95 + dVar95;
              dVar77 = dVar77 + dVar77;
              dVar94 = dVar94 + dVar94;
              dVar79 = dVar79 + dVar79;
              dVar43 = local_428 * dVar43;
              dVar74 = dStack_420 * dVar74;
              local_338 = (dVar94 * (double)local_358._8_8_ - (double)local_348._0_8_ * dVar77) +
                          (double)local_348._8_8_ * dVar95 + dVar76 + local_338;
              dStack_330 = (dVar95 * (double)local_348._0_8_ - dVar94 * (double)local_358._0_8_) +
                           (double)local_348._8_8_ * dVar77 + dVar78 + dStack_330;
              local_328 = (dVar77 * (double)local_358._0_8_ - (double)local_358._8_8_ * dVar95) +
                          (double)local_348._8_8_ * dVar94 + dVar42 + local_328;
              dStack_320 = (dVar79 * (double)local_348._8_8_ - dVar79 * (double)local_348._8_8_) +
                           (double)local_348._8_8_ * dVar79 + dVar73 + dStack_320;
              auVar80._8_8_ = dVar75 * dVar82;
              auVar80._0_8_ = dVar55 * dVar47;
              uVar13 = 0;
            }
            else {
              dVar73 = (double)local_358._8_8_ + (double)local_358._8_8_;
              dVar76 = (double)local_348._0_8_ + (double)local_348._0_8_;
              dVar42 = (double)local_358._0_8_ * ((double)local_358._0_8_ + (double)local_358._0_8_)
              ;
              local_1a8 = (1.0 - (dVar42 + (double)local_358._8_8_ * dVar73)) * dVar43;
              dVar78 = ((double)local_358._0_8_ + (double)local_358._0_8_) * (double)local_348._8_8_
              ;
              local_1b8 = (dVar73 * (double)local_348._8_8_ + (double)local_358._0_8_ * dVar76) *
                          dVar43;
              local_548 = dVar43 * local_428;
              dStack_540 = dVar74 * dStack_420;
              dStack_1b0 = (dVar76 * (double)local_358._8_8_ - dVar78) * dVar43;
              local_1f8 = ((double)CONCAT44(uVar89,uVar15) -
                          ((double)local_348._0_8_ * dVar76 + (double)local_358._8_8_ * dVar73)) *
                          dVar47;
              dStack_1f0 = (dVar73 * (double)local_358._0_8_ + dVar76 * (double)local_348._8_8_) *
                           dVar47;
              local_1c8 = (dVar76 * (double)local_358._8_8_ + dVar78) * dVar82;
              local_1e8 = ((double)local_358._0_8_ * dVar76 - dVar73 * (double)local_348._8_8_) *
                          dVar47;
              dStack_1e0 = 0.0;
              local_1d8._8_8_ =
                   ((double)CONCAT44(uVar91,uVar90) - ((double)local_348._0_8_ * dVar76 + dVar42)) *
                   dVar82;
              local_1d8._0_8_ =
                   (dVar73 * (double)local_358._0_8_ - dVar76 * (double)local_348._8_8_) * dVar82;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = local_338;
              dStack_190 = dStack_330;
              local_188 = local_328;
              uStack_180 = 0x3ff0000000000000;
              dVar74 = dStack_470 + dStack_470;
              dVar42 = local_468 + local_468;
              dVar43 = local_478 * (local_478 + local_478);
              local_228 = (1.0 - (dVar43 + dStack_470 * dVar74)) * local_428;
              dVar73 = (local_478 + local_478) * dStack_460;
              local_238 = (dVar74 * dStack_460 + local_478 * dVar42) * local_428;
              local_258 = (dVar74 * local_478 - dVar42 * dStack_460) * dVar75;
              dStack_230 = (dVar42 * dStack_470 - dVar73) * local_428;
              auVar80._0_8_ = dVar47 * dVar55;
              auVar80._8_8_ = dVar82 * dVar75;
              local_278 = ((double)DAT_149934d80 - (local_468 * dVar42 + dStack_470 * dVar74)) *
                          dVar55;
              dStack_250 = (DAT_149934d80._8_8_ - (local_468 * dVar42 + dVar43)) * dVar75;
              dStack_270 = (dVar74 * local_478 + dVar42 * dStack_460) * dVar55;
              local_248 = (dVar42 * dStack_470 + dVar73) * dVar75;
              local_268 = (local_478 * dVar42 - dVar74 * dStack_460) * dVar55;
              dStack_260 = 0.0;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = local_458;
              dStack_210 = dStack_450;
              local_208 = local_448;
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(local_178,&local_278,&local_1f8);
              FUN_144a1c686(local_178,0x3e45798ee0000000);
              dVar74 = dStack_540;
              dVar43 = local_548;
              auVar30._8_8_ = -(ulonglong)(0.0 <= auVar80._8_8_);
              auVar30._0_8_ = -(ulonglong)(0.0 <= auVar80._0_8_);
              auVar29 = blendvpd(_DAT_149936790,auVar86,auVar30);
              dVar47 = (double)(~-(ulonglong)(0.0 <= local_548) & 0xbff0000000000000 |
                               -(ulonglong)(0.0 <= local_548) & 0x3ff0000000000000);
              dVar55 = auVar29._0_8_;
              local_178[2] = local_178[2] * dVar55;
              local_178[1] = local_178[1] * dVar55;
              local_178[0] = local_178[0] * dVar55;
              dVar55 = auVar29._8_8_;
              local_148 = local_148 * dVar55;
              local_150 = local_150 * dVar55;
              local_158 = dVar55 * local_158;
              local_128 = local_128 * dVar47;
              local_130 = local_130 * dVar47;
              local_138 = dVar47 * local_138;
              pdVar19 = &local_298;
              FUN_14481fd10(pdVar19,local_178);
              uVar13 = SUB84(pdVar19,0);
              dVar47 = local_288 * local_288 + local_298 * local_298;
              dVar55 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar48._0_8_ = dVar47 + dVar55;
              auVar48._8_8_ = dVar47 + dVar55;
              auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
              auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
              auVar29 = sqrtpd(auVar48,auVar48);
              auVar29 = divpd(auVar86,auVar29);
              auVar93._0_8_ = auVar29._0_8_ * local_288;
              auVar93._8_8_ = auVar29._8_8_ * dStack_280;
              dVar56 = (double)((ulonglong)(local_298 * auVar29._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_));
              dVar66 = (double)((ulonglong)(dStack_290 * auVar29._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_));
              auVar67 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar93,auVar31);
              dStack_320 = 0.0;
              local_328 = local_108;
              local_338 = local_118;
              dStack_330 = dStack_110;
            }
            dVar82 = auVar67._0_8_;
            dVar75 = auVar67._8_8_;
            dVar47 = dVar82 * dVar82 + dVar56 * dVar56;
            dVar55 = dVar75 * dVar75 + dVar66 * dVar66;
            auVar45._0_8_ = dVar47 + dVar55;
            auVar45._8_8_ = dVar47 + dVar55;
            local_318 = auVar80;
            local_308._8_4_ = SUB84(dVar74,0);
            local_308._0_8_ = dVar43;
            local_308._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
            auVar32._8_8_ = -(ulonglong)(1e-08 <= auVar45._8_8_);
            auVar32._0_8_ = -(ulonglong)(1e-08 <= auVar45._0_8_);
            auVar29 = sqrtpd(auVar45,auVar45);
            auVar29 = divpd(_DAT_149934d80,auVar29);
            auVar49._0_8_ = auVar29._0_8_ * dVar82;
            auVar49._8_8_ = auVar29._8_8_ * dVar75;
            local_358._0_8_ =
                 (ulonglong)(dVar56 * auVar29._0_8_) & -(ulonglong)(1e-08 <= auVar45._0_8_);
            local_358._8_8_ =
                 (ulonglong)(dVar66 * auVar29._8_8_) & -(ulonglong)(1e-08 <= auVar45._8_8_);
            local_348 = blendvpd(_DAT_149935300,auVar49,auVar32);
            uVar15 = (undefined4)DAT_149934d80;
            uVar89 = DAT_149934d80._4_4_;
            uVar90 = DAT_149934d80._8_4_;
            uVar91 = DAT_149934d80._12_4_;
            fVar87 = (float)local_538._0_4_;
            fVar92 = (float)local_578._0_4_;
          }
          fVar88 = fVar88 * fVar87;
          fVar92 = fVar92 + fVar88;
          if (*param_6 == '\x01') {
            local_1f8 = (double)local_2f8._0_8_;
            dStack_1f0 = (double)local_2f8._8_8_;
            local_1e8 = (double)local_2e8._0_8_;
            dStack_1e0 = (double)local_2e8._8_8_;
            auVar34._8_8_ = -(ulonglong)((double)local_2f8._8_8_ == 0.0);
            auVar34._0_8_ = -(ulonglong)((double)local_2f8._0_8_ == 0.0);
            iVar14 = movmskpd(1,auVar34);
            auVar46._8_8_ = -(ulonglong)((double)local_2e8._8_8_ == 0.0);
            auVar46._0_8_ = -(ulonglong)((double)local_2e8._0_8_ == 0.0);
            iVar18 = movmskpd(uVar13,auVar46);
            if (iVar14 + iVar18 * 4 == 0xf) {
              puVar21 = (undefined8 *)local_358;
              puVar23 = (undefined8 *)local_2f8;
              for (lVar26 = 0xc; lVar26 != 0; lVar26 = lVar26 + -1) {
                *puVar23 = *puVar21;
                puVar21 = puVar21 + 1;
                puVar23 = puVar23 + 1;
              }
            }
            else {
              local_278 = (double)local_358._0_8_;
              dStack_270 = (double)local_358._8_8_;
              dVar47 = (double)(fVar88 / fVar92);
              dVar43 = (double)(fVar88 / fVar92);
              local_268 = (double)local_348._0_8_;
              dStack_260 = (double)local_348._8_8_;
              dVar55 = (double)CONCAT44(uVar89,uVar15) - dVar47;
              dVar82 = (double)CONCAT44(uVar91,uVar90) - dVar43;
              local_2d8._8_8_ = dStack_330 * dVar43 + (double)local_2d8._8_8_ * dVar82;
              local_2d8._0_8_ = local_338 * dVar47 + (double)local_2d8._0_8_ * dVar55;
              local_2c8._8_8_ = dStack_320 * dVar43 + (double)local_2c8._8_8_ * dVar82;
              local_2c8._0_8_ = local_328 * dVar47 + (double)local_2c8._0_8_ * dVar55;
              local_2b8._8_8_ = (double)local_318._8_8_ * dVar43 + (double)local_2b8._8_8_ * dVar82;
              local_2b8._0_8_ = (double)local_318._0_8_ * dVar47 + (double)local_2b8._0_8_ * dVar55;
              local_2a8._8_8_ = dVar43 * (double)local_308._8_8_ + dVar82 * (double)local_2a8._8_8_;
              local_2a8._0_8_ = dVar47 * (double)local_308._0_8_ + dVar55 * (double)local_2a8._0_8_;
              FUN_144a44da6(local_178,&local_1f8,&local_278,(double)fVar88);
              dVar47 = local_178[2] * local_178[2] + local_178[0] * local_178[0];
              dVar43 = local_178[3] * local_178[3] + local_178[1] * local_178[1];
              auVar58._0_8_ = dVar47 + dVar43;
              auVar58._8_8_ = dVar47 + dVar43;
              auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar58._8_8_);
              auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar58._0_8_);
              auVar29 = sqrtpd(auVar58,auVar58);
              auVar68._4_4_ = uVar89;
              auVar68._0_4_ = uVar15;
              auVar68._12_4_ = uVar91;
              auVar68._8_4_ = uVar90;
              auVar29 = divpd(auVar68,auVar29);
              auVar69._0_8_ = auVar29._0_8_ * local_178[2];
              auVar69._8_8_ = auVar29._8_8_ * local_178[3];
              local_2f8._0_8_ =
                   (ulonglong)(local_178[0] * auVar29._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar58._0_8_);
              local_2f8._8_8_ =
                   (ulonglong)(local_178[1] * auVar29._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar58._8_8_);
              local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar69,auVar35);
            }
          }
          else {
            if (*param_6 != '\0') {
              uVar27 = 0xffffffff;
              if (*(ushort *)(param_8 + 0xc) != 0xffff) {
                uVar27 = (uint)*(ushort *)(param_8 + 0xc);
              }
              FUN_14486750c(lVar4,local_2f8,uVar27,0);
              break;
            }
            dVar47 = (double)fVar88;
            dVar43 = (double)fVar88;
            auVar50._0_8_ = (double)local_358._0_8_ * dVar47;
            auVar50._8_8_ = (double)local_358._8_8_ * dVar43;
            auVar57._0_8_ = (double)local_348._0_8_ * dVar47;
            auVar57._8_8_ = (double)local_348._8_8_ * dVar43;
            dVar55 = auVar57._0_8_ * (double)local_2e8._0_8_ +
                     auVar50._0_8_ * (double)local_2f8._0_8_;
            dVar82 = auVar57._8_8_ * (double)local_2e8._8_8_ +
                     auVar50._8_8_ * (double)local_2f8._8_8_;
            auVar33._8_8_ = -(ulonglong)(0.0 <= dVar55 + dVar82);
            auVar33._0_8_ = -(ulonglong)(0.0 <= dVar55 + dVar82);
            auVar81._0_8_ = 0.0 - auVar50._0_8_;
            auVar81._8_8_ = 0.0 - auVar50._8_8_;
            auVar29 = blendvpd(auVar81,auVar50,auVar33);
            auVar85._0_8_ = 0.0 - auVar57._0_8_;
            auVar85._8_8_ = 0.0 - auVar57._8_8_;
            auVar86 = blendvpd(auVar85,auVar57,auVar33);
            local_2f8._0_8_ = auVar29._0_8_ + (double)local_2f8._0_8_;
            local_2f8._8_8_ = auVar29._8_8_ + (double)local_2f8._8_8_;
            local_2e8._8_8_ = auVar86._8_8_ + (double)local_2e8._8_8_;
            local_2e8._0_8_ = auVar86._0_8_ + (double)local_2e8._0_8_;
            local_2c8._0_8_ = local_328 * dVar47 + (double)local_2c8._0_8_;
            local_2c8._8_8_ = dStack_320 * dVar43 + (double)local_2c8._8_8_;
            local_2d8._8_8_ = dStack_330 * dVar43 + (double)local_2d8._8_8_;
            local_2d8._0_8_ = local_338 * dVar47 + (double)local_2d8._0_8_;
            local_2b8._0_8_ = (double)local_318._0_8_ * dVar47 + (double)local_2b8._0_8_;
            local_2b8._8_8_ = (double)local_318._8_8_ * dVar43 + (double)local_2b8._8_8_;
            local_2a8._0_8_ = dVar47 * (double)local_308._0_8_ + (double)local_2a8._0_8_;
            local_2a8._8_8_ = dVar43 * (double)local_308._8_8_ + (double)local_2a8._8_8_;
          }
          uVar16 = (ulonglong)*(uint *)(param_5 + 1);
        }
      }
      lVar22 = lVar22 + 1;
      lVar20 = lVar20 + 0x10;
    } while (lVar22 < (int)uVar16);
  }
  auVar86 = _DAT_149935300;
  auVar29 = _DAT_149934d80;
  dVar47 = (double)local_2e8._0_8_ * (double)local_2e8._0_8_ +
           (double)local_2f8._0_8_ * (double)local_2f8._0_8_;
  dVar43 = (double)local_2e8._8_8_ * (double)local_2e8._8_8_ +
           (double)local_2f8._8_8_ * (double)local_2f8._8_8_;
  auVar59._0_8_ = dVar47 + dVar43;
  auVar59._8_8_ = dVar47 + dVar43;
  auVar36._8_8_ = -(ulonglong)(1e-08 <= auVar59._8_8_);
  auVar36._0_8_ = -(ulonglong)(1e-08 <= auVar59._0_8_);
  auVar44 = sqrtpd(auVar59,auVar59);
  dVar47 = (double)DAT_149934d80;
  dVar43 = DAT_149934d80._8_8_;
  auVar44 = divpd(_DAT_149934d80,auVar44);
  auVar70._0_8_ = auVar44._0_8_ * (double)local_2e8._0_8_;
  auVar70._8_8_ = auVar44._8_8_ * (double)local_2e8._8_8_;
  local_2e8 = blendvpd(_DAT_149935300,auVar70,auVar36);
  local_2f8._8_8_ =
       (ulonglong)((double)local_2f8._8_8_ * auVar44._8_8_) & -(ulonglong)(1e-08 <= auVar59._8_8_);
  local_2f8._0_8_ =
       (ulonglong)((double)local_2f8._0_8_ * auVar44._0_8_) & -(ulonglong)(1e-08 <= auVar59._0_8_);
  uVar3 = *(ushort *)(param_8 + 0xc);
  if ((uVar3 == 0xffff) ||
     (*(uint *)(lVar4 + 0xc0) == (uint)uVar3 || (int)*(uint *)(lVar4 + 0xc0) < (int)(uint)uVar3)) {
    puVar21 = &DAT_14c846480;
    puVar23 = (undefined8 *)local_358;
    for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar23 = *puVar21;
      puVar21 = puVar21 + 1;
      puVar23 = puVar23 + 1;
    }
  }
  else {
    FUN_14449ec9a(lVar4,local_358,
                  *(undefined8 *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)(uint)uVar3 * 8),3);
  }
  cVar11 = local_558[0];
  uVar10 = local_568._0_8_;
  FUN_1449437a2(local_2f8,local_3b8,local_358);
  puVar25 = &DAT_ffffffff;
  if (*(ushort *)(param_8 + 0xc) != 0xffff) {
    puVar25 = (undefined1 *)(ulonglong)(uint)*(ushort *)(param_8 + 0xc);
  }
  FUN_144afced8(lVar4,&local_418,puVar25,0);
  local_478 = 0.0;
  dStack_470 = 0.0;
  local_468 = 0.0;
  dStack_460 = 1.0;
  local_458 = 0.0;
  dStack_450 = 0.0;
  local_448 = 0.0;
  dStack_440 = 0.0;
  local_438 = auVar29;
  local_428 = 1.0;
  dStack_420 = 0.0;
  if (cVar11 == '\x04') {
    uVar3 = *(ushort *)(param_8 + 0xc);
    if ((((uVar3 != 0xffff) &&
         (*(uint *)(lVar4 + 0xc0) != (uint)uVar3 && (int)(uint)uVar3 <= (int)*(uint *)(lVar4 + 0xc0)
         )) && (lVar20 = *(longlong *)(*(longlong *)(lVar4 + 0xb8) + (ulonglong)(uint)uVar3 * 8),
               lVar20 != 0)) && (*(char *)(lVar20 + 0x10) == '\x04')) {
      lVar22 = lVar4;
      uVar15 = FUN_1401261c4(lVar4,&local_478,lVar20,1);
      dVar55 = local_438._0_8_;
      dVar82 = local_438._8_8_;
      auVar7._8_8_ = dStack_420;
      auVar7._0_8_ = local_428;
      local_568._8_8_ = dStack_3c0;
      local_568._0_8_ = local_3c8;
      local_558 = local_3d8;
      auVar44 = local_558;
      auVar51 = minpd(local_3d8,local_438);
      auVar60 = minpd(local_568,auVar7);
      auVar52._8_8_ = -(ulonglong)(auVar51._8_8_ < 0.0);
      auVar52._0_8_ = -(ulonglong)(auVar51._0_8_ < 0.0);
      iVar14 = movmskpd(uVar15,auVar52);
      auVar61._8_8_ = -(ulonglong)(auVar60._8_8_ < 0.0);
      auVar61._0_8_ = -(ulonglong)(auVar60._0_8_ < 0.0);
      uVar27 = movmskpd((int)lVar22,auVar61);
      local_538 = local_438;
      local_558._0_8_ = local_3d8._0_8_;
      local_558._8_8_ = local_3d8._8_8_;
      local_558 = auVar44;
      if ((uVar27 & 0x3fffffff) == 0 && iVar14 == 0) {
        local_578._8_8_ = dStack_460;
        local_578._0_8_ = local_468;
        dVar43 = local_478 * dStack_410;
        dVar75 = local_418 * dStack_470;
        dVar74 = local_418 * local_468;
        dVar47 = (double)local_408._0_8_ * local_468 * -1.0 +
                 ((local_478 * local_418 * -1.0 + (double)local_408._8_8_ * dStack_460) -
                 dStack_410 * dStack_470);
        local_418 = dStack_410 * local_468 * -1.0 +
                    (double)local_408._0_8_ * dStack_470 +
                    (double)local_408._8_8_ * local_478 * 1.0 + local_418 * dStack_460;
        dStack_410 = dVar74 * 1.0 +
                     (double)local_408._8_8_ * dStack_470 +
                     (double)local_408._0_8_ * local_478 * -1.0 + dStack_410 * dStack_460;
        auVar6._8_4_ = SUB84(dVar47,0);
        auVar6._0_8_ = (double)local_408._8_8_ * local_468 * 1.0 +
                       ((dVar43 * 1.0 + (double)local_408._0_8_ * dStack_460) - dVar75);
        auVar6._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
        local_408 = auVar6;
        local_3f8 = local_3f8 * dVar55;
        dStack_3f0 = dStack_3f0 * dVar82;
        local_3e8 = local_3e8 * local_428;
        dStack_3e0 = dStack_3e0 * dStack_420;
        dVar74 = dStack_3f0 * local_478 - dStack_470 * local_3f8;
        dVar75 = local_3e8 * dStack_470 - local_468 * dStack_3f0;
        dVar47 = local_3f8 * local_468 - local_478 * local_3e8;
        dVar43 = dStack_3e0 * dStack_460 - dStack_460 * dStack_3e0;
        dVar75 = dVar75 + dVar75;
        dVar47 = dVar47 + dVar47;
        dVar74 = dVar74 + dVar74;
        dVar43 = dVar43 + dVar43;
        local_3f8 = (dVar74 * dStack_470 - local_468 * dVar47) + dStack_460 * dVar75 + local_3f8 +
                    local_458;
        dStack_3f0 = (dVar75 * local_468 - dVar74 * local_478) + dStack_460 * dVar47 + dStack_3f0 +
                     dStack_450;
        local_3e8 = (dVar47 * local_478 - dStack_470 * dVar75) + dStack_460 * dVar74 + local_3e8 +
                    local_448;
        dStack_3e0 = (dVar43 * dStack_460 - dVar43 * dStack_460) + dStack_460 * dVar43 + dStack_3e0
                     + dStack_440;
        local_3d8._8_8_ = (double)local_558._8_8_ * dVar82;
        local_3d8._0_8_ = (double)local_558._0_8_ * dVar55;
        local_3c8 = local_3c8 * local_428;
        dStack_3c0 = dStack_3c0 * dStack_420;
      }
      else {
        dVar75 = dStack_470 + dStack_470;
        dVar42 = local_468 + local_468;
        dVar74 = local_478 * (local_478 + local_478);
        local_1a8 = (1.0 - (dVar74 + dStack_470 * dVar75)) * local_428;
        dVar73 = (local_478 + local_478) * dStack_460;
        local_1b8 = (dVar75 * dStack_460 + local_478 * dVar42) * local_428;
        local_578._8_4_ = SUB84(dStack_420 * dStack_3c0,0);
        local_578._0_8_ = local_428 * local_3c8;
        local_578._12_4_ = (int)((ulonglong)(dStack_420 * dStack_3c0) >> 0x20);
        dStack_1b0 = (dVar42 * dStack_470 - dVar73) * local_428;
        local_1f8 = (dVar47 - (local_468 * dVar42 + dStack_470 * dVar75)) * dVar55;
        dVar74 = (dVar43 - (local_468 * dVar42 + dVar74)) * dVar82;
        dStack_1f0 = (dVar75 * local_478 + dVar42 * dStack_460) * dVar55;
        local_1c8 = (dVar42 * dStack_470 + dVar73) * dVar82;
        local_1e8 = (local_478 * dVar42 - dVar75 * dStack_460) * dVar55;
        dStack_1e0 = 0.0;
        local_1d8._8_4_ = SUB84(dVar74,0);
        local_1d8._0_8_ = (dVar75 * local_478 - dVar42 * dStack_460) * dVar82;
        local_1d8._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = local_458;
        dStack_190 = dStack_450;
        local_188 = local_448;
        uStack_180 = 0x3ff0000000000000;
        dVar74 = dStack_410 + dStack_410;
        dVar42 = (double)local_408._0_8_ + (double)local_408._0_8_;
        dVar75 = local_418 * (local_418 + local_418);
        local_228 = (1.0 - (dVar75 + dStack_410 * dVar74)) * local_3c8;
        dVar73 = (local_418 + local_418) * (double)local_408._8_8_;
        local_238 = (dVar74 * (double)local_408._8_8_ + local_418 * dVar42) * local_3c8;
        local_258 = (dVar74 * local_418 - dVar42 * (double)local_408._8_8_) *
                    (double)local_558._8_8_;
        dStack_230 = (dVar42 * dStack_410 - dVar73) * local_3c8;
        dVar55 = dVar55 * (double)local_558._0_8_;
        dVar82 = dVar82 * (double)local_558._8_8_;
        local_278 = (dVar47 - ((double)local_408._0_8_ * dVar42 + dStack_410 * dVar74)) *
                    (double)local_558._0_8_;
        dStack_250 = (dVar43 - ((double)local_408._0_8_ * dVar42 + dVar75)) *
                     (double)local_558._8_8_;
        dStack_270 = (dVar74 * local_418 + dVar42 * (double)local_408._8_8_) *
                     (double)local_558._0_8_;
        local_248 = (dVar42 * dStack_410 + dVar73) * (double)local_558._8_8_;
        local_268 = (local_418 * dVar42 - dVar74 * (double)local_408._8_8_) *
                    (double)local_558._0_8_;
        dStack_260 = 0.0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = local_3f8;
        dStack_210 = dStack_3f0;
        local_208 = local_3e8;
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(local_178);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        auVar37._8_8_ = -(ulonglong)(0.0 <= dVar82);
        auVar37._0_8_ = -(ulonglong)(0.0 <= dVar55);
        auVar44 = blendvpd(_DAT_149936790,auVar29,auVar37);
        uVar8 = local_578._0_8_;
        uVar9 = local_578._8_8_;
        dVar47 = (double)(~-(ulonglong)(0.0 <= (double)local_578._0_8_) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= (double)local_578._0_8_) & 0x3ff0000000000000);
        dVar43 = auVar44._0_8_;
        local_178[2] = local_178[2] * dVar43;
        local_178[1] = local_178[1] * dVar43;
        local_178[0] = local_178[0] * dVar43;
        dVar43 = auVar44._8_8_;
        local_148 = local_148 * dVar43;
        local_150 = local_150 * dVar43;
        local_158 = dVar43 * local_158;
        local_128 = local_128 * dVar47;
        local_130 = local_130 * dVar47;
        local_138 = dVar47 * local_138;
        FUN_14481fd10(&local_298,local_178);
        dVar47 = local_288 * local_288 + local_298 * local_298;
        dVar43 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar62._0_8_ = dVar47 + dVar43;
        auVar62._8_8_ = dVar47 + dVar43;
        auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar62._8_8_);
        auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_);
        auVar44 = sqrtpd(auVar62,auVar62);
        auVar44 = divpd(auVar29,auVar44);
        auVar71._0_8_ = auVar44._0_8_ * local_288;
        auVar71._8_8_ = auVar44._8_8_ * dStack_280;
        local_408 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar71,auVar38);
        local_3d8._8_4_ = SUB84(dVar82,0);
        local_3d8._0_8_ = dVar55;
        local_3d8._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
        local_3c8 = (double)uVar8;
        dStack_3c0 = (double)uVar9;
        local_418 = (double)((ulonglong)(local_298 * auVar44._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_));
        dStack_410 = (double)((ulonglong)(dStack_290 * auVar44._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar62._8_8_));
        local_3f8 = local_118;
        dStack_3f0 = dStack_110;
        local_3e8 = local_108;
        dStack_3e0 = 0.0;
      }
    }
  }
  bVar1 = *(byte *)uVar10;
  if ((bVar1 & *(byte *)(uVar10 + 1)) == 0) {
    bVar17 = (bVar1 ^ 1) & *(byte *)(uVar10 + 1);
    bVar12 = *(byte *)(uVar10 + 2);
LAB_149279868:
    if (bVar1 == 0) {
      local_398 = local_3f8;
    }
    if ((bVar17 & 1) == 0) {
      dStack_390 = dStack_3f0;
    }
    if ((bVar12 & 1) == 0) {
      local_388 = local_3e8;
    }
    uStack_380 = 0;
  }
  else if (*(byte *)(uVar10 + 2) == 0) {
    bVar17 = 1;
    bVar12 = 0;
    goto LAB_149279868;
  }
  if (((*(byte *)(uVar10 + 3) != 1) || (*(byte *)(uVar10 + 4) != 1)) || (*(byte *)(uVar10 + 5) == 0)
     ) {
    local_178[0] = local_418;
    local_178[1] = dStack_410;
    local_178[2] = (double)local_408._0_8_;
    local_178[3] = (double)local_408._8_8_;
    FUN_14690c377(&local_298,local_178,param_6[1],0);
    local_1f8 = local_3b8[0];
    dStack_1f0 = local_3b8[1];
    local_1e8 = (double)local_3a8._0_8_;
    dStack_1e0 = (double)local_3a8._8_8_;
    FUN_14690c377(&local_490,&local_1f8,param_6[1],0);
    pdVar19 = &local_298;
    if (*(byte *)(uVar10 + 3) != 0) {
      pdVar19 = &local_490;
    }
    local_490 = *pdVar19;
    pdVar19 = &dStack_290;
    if (*(byte *)(uVar10 + 4) != 0) {
      pdVar19 = &local_488;
    }
    local_488 = *pdVar19;
    pdVar19 = &local_288;
    if (*(byte *)(uVar10 + 5) != 0) {
      pdVar19 = &local_480;
    }
    local_480 = *pdVar19;
    FUN_14690c017(&local_278,&local_490,param_6[1],0);
    dVar47 = local_268 * local_268 + local_278 * local_278;
    dVar43 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar63._0_8_ = dVar47 + dVar43;
    auVar63._8_8_ = dVar47 + dVar43;
    auVar39._8_8_ = -(ulonglong)(1e-08 <= auVar63._8_8_);
    auVar39._0_8_ = -(ulonglong)(1e-08 <= auVar63._0_8_);
    auVar44 = sqrtpd(auVar63,auVar63);
    auVar44 = divpd(auVar29,auVar44);
    auVar72._0_8_ = auVar44._0_8_ * local_268;
    auVar72._8_8_ = auVar44._8_8_ * dStack_260;
    local_3a8 = blendvpd(auVar86,auVar72,auVar39);
    local_3b8[0] = (double)((ulonglong)(local_278 * auVar44._0_8_) &
                           -(ulonglong)(1e-08 <= auVar63._0_8_));
    local_3b8[1] = (double)((ulonglong)(dStack_270 * auVar44._8_8_) &
                           -(ulonglong)(1e-08 <= auVar63._8_8_));
  }
  bVar1 = *(byte *)(uVar10 + 6);
  if ((bVar1 & *(byte *)(uVar10 + 7)) == 0) {
    bVar17 = (bVar1 ^ 1) & *(byte *)(uVar10 + 7);
    bVar12 = *(byte *)(uVar10 + 8);
LAB_149279a4b:
    if (bVar1 == 0) {
      local_378 = local_3d8._0_8_;
    }
    if ((bVar17 & 1) == 0) {
      uStack_370 = local_3d8._8_8_;
    }
    if ((bVar12 & 1) == 0) {
      local_368 = local_3c8;
    }
    uStack_360 = 0;
  }
  else if (*(byte *)(uVar10 + 8) == 0) {
    bVar17 = 1;
    bVar12 = 0;
    goto LAB_149279a4b;
  }
  if (0.9999 <= param_7) {
    if (cVar11 == '\x04') goto LAB_149279b65;
  }
  else {
    FUN_14915b8da(local_178,&local_418,local_3b8);
    pdVar19 = local_178;
    pdVar24 = local_3b8;
    for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
      *pdVar24 = *pdVar19;
      pdVar19 = pdVar19 + 1;
      pdVar24 = pdVar24 + 1;
    }
    if (cVar11 == '\x04') {
LAB_149279b65:
      FUN_1449437a2(local_3b8,local_178,&local_478);
      pdVar19 = local_178;
      pdVar24 = local_3b8;
      for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
        *pdVar24 = *pdVar19;
        pdVar19 = pdVar19 + 1;
        pdVar24 = pdVar24 + 1;
      }
      auVar54._0_8_ = local_3b8[0] * local_3b8[0];
      auVar54._8_8_ = local_3b8[1] * local_3b8[1];
      dVar47 = (double)local_3a8._0_8_ * (double)local_3a8._0_8_ + auVar54._0_8_;
      dVar43 = (double)local_3a8._8_8_ * (double)local_3a8._8_8_ + auVar54._8_8_;
      auVar65._0_8_ = dVar47 + dVar43;
      auVar65._8_8_ = dVar47 + dVar43;
      auVar44 = sqrtpd(auVar54,auVar65);
      auVar29 = divpd(auVar29,auVar44);
      auVar84._0_8_ = auVar29._0_8_ * (double)local_3a8._0_8_;
      auVar84._8_8_ = auVar29._8_8_ * (double)local_3a8._8_8_;
      auVar41._8_8_ = -(ulonglong)(1e-08 <= auVar65._8_8_);
      auVar41._0_8_ = -(ulonglong)(1e-08 <= auVar65._0_8_);
      local_3a8 = blendvpd(auVar86,auVar84,auVar41);
      local_3b8[0] = (double)((ulonglong)(local_3b8[0] * auVar29._0_8_) &
                             -(ulonglong)(1e-08 <= auVar65._0_8_));
      local_3b8[1] = (double)((ulonglong)(local_3b8[1] * auVar29._8_8_) &
                             -(ulonglong)(1e-08 <= auVar65._8_8_));
    }
    else {
      auVar53._0_8_ = local_3b8[0] * local_3b8[0];
      auVar53._8_8_ = local_3b8[1] * local_3b8[1];
      dVar47 = (double)local_3a8._0_8_ * (double)local_3a8._0_8_ + auVar53._0_8_;
      dVar43 = (double)local_3a8._8_8_ * (double)local_3a8._8_8_ + auVar53._8_8_;
      auVar64._0_8_ = dVar47 + dVar43;
      auVar64._8_8_ = dVar47 + dVar43;
      auVar44 = sqrtpd(auVar53,auVar64);
      auVar29 = divpd(auVar29,auVar44);
      auVar83._0_8_ = auVar29._0_8_ * (double)local_3a8._0_8_;
      auVar83._8_8_ = auVar29._8_8_ * (double)local_3a8._8_8_;
      auVar40._8_8_ = -(ulonglong)(1e-08 <= auVar64._8_8_);
      auVar40._0_8_ = -(ulonglong)(1e-08 <= auVar64._0_8_);
      local_3a8 = blendvpd(auVar86,auVar83,auVar40);
      local_3b8[0] = (double)((ulonglong)(local_3b8[0] * auVar29._0_8_) &
                             -(ulonglong)(1e-08 <= auVar64._0_8_));
      local_3b8[1] = (double)((ulonglong)(local_3b8[1] * auVar29._8_8_) &
                             -(ulonglong)(1e-08 <= auVar64._8_8_));
    }
  }
  pdVar19 = local_3b8;
  pdVar24 = local_4f8;
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *pdVar24 = *pdVar19;
    pdVar19 = pdVar19 + 1;
    pdVar24 = pdVar24 + 1;
  }
  uVar27 = 0xffffffff;
  if (*(ushort *)(param_8 + 0xc) != 0xffff) {
    uVar27 = (uint)*(ushort *)(param_8 + 0xc);
  }
  local_588 = 0;
  local_590 = 0;
  local_598 = 1;
  FUN_140122cc6(lVar4,uVar27,local_4f8,0);
LAB_149278401:
  if ((local_f0 ^ (ulonglong)auStack_5b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149279e64 FUN_149279e64 body=170 status=ok
// SIG undefined FUN_149279e64(void)

void FUN_149279e64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  puVar3 = (undefined8 *)puVar1[4];
  uVar4 = puVar1[8];
  uVar5 = puVar1[0xc];
  lVar6 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_50 = FUN_144828ac0(puVar1 + 0x10,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar6 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar6 * 0x14));
  local_40 = *puVar3;
  local_38 = *(undefined4 *)(puVar3 + 1);
  local_58 = uVar5;
  FUN_149279fb4(*(undefined8 *)(param_1 + 0xc0),uVar2,&local_40,uVar4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149279f10 FUN_149279f10 body=162 status=ok
// SIG undefined FUN_149279f10(void)

void FUN_149279f10(longlong param_1)

{
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  undefined1 local_208 [480];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_28 = *(undefined8 *)(param_1 + 0x70);
  local_20 = *(undefined4 *)(param_1 + 0x78);
  local_210 = param_1 + 0xf0;
  local_218 = param_1 + 0x90;
  FUN_149279fb4(local_208,param_1 + 0x10,&local_28,param_1 + 0x80);
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149279fb4 FUN_149279fb4 body=3454 status=ok
// SIG undefined FUN_149279fb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149279fb4(longlong param_1,undefined1 (*param_2) [16],longlong *param_3,char *param_4,
                  ulonglong *param_5,longlong *param_6)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  char cVar13;
  undefined4 uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  double *pdVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  double dVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar43;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar61;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar62;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar66;
  float fVar67;
  float fVar68;
  undefined1 auStack_4c8 [40];
  float local_4a0;
  float local_49c;
  undefined1 local_498 [16];
  undefined1 (*local_488) [16];
  char *local_480;
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [96];
  undefined8 local_358 [12];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
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
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  local_480 = param_4;
  if (lVar2 != 0) {
    iVar15 = (int)param_6[1];
    if (iVar15 != (int)param_3[1]) {
      FUN_149250716(param_6);
      iVar15 = (int)param_3[1];
    }
    if (0 < iVar15) {
      lVar21 = 0;
      lVar22 = 0;
      lVar24 = 0;
      auVar25 = ZEXT816(0);
      do {
        lVar3 = *param_3;
        cVar13 = FUN_144828dba(*param_6 + lVar22,lVar21 + lVar3,lVar2);
        if (cVar13 != '\0') {
          fVar67 = *(float *)(lVar3 + 0xc + lVar21);
          if (fVar67 <= 0.0) {
            fVar67 = 0.0;
          }
          auVar33._0_4_ = ~-(uint)(fVar67 < 0.0001) & (uint)(auVar25._0_4_ + fVar67);
          auVar33._4_4_ = 0;
          auVar33._8_4_ = auVar25._8_4_;
          auVar33._12_4_ = auVar25._12_4_;
          auVar25 = ZEXT416(-(uint)(fVar67 < 0.0001) & (uint)auVar25._0_4_) | auVar33;
        }
        lVar24 = lVar24 + 1;
        uVar16 = (ulonglong)(int)param_3[1];
        lVar22 = lVar22 + 0x20;
        lVar21 = lVar21 + 0x10;
      } while (lVar24 < (longlong)uVar16);
      if (0.0001 < auVar25._0_4_) {
        dVar49 = 0.0;
        dVar12 = 0.0;
        dVar6 = DAT_14c8464e0;
        dVar7 = DAT_14c8464e8;
        dVar9 = DAT_14c8464f0;
        dVar48 = DAT_14c8464f0;
        dVar61 = DAT_14c8464e0;
        dVar66 = DAT_14c8464e8;
        if ((int)param_3[1] < 1) {
          auVar25 = ZEXT816(0);
          auVar39 = ZEXT816(0);
          dVar12 = 0.0;
        }
        else {
          local_4a0 = 1.0 / auVar25._0_4_;
          lVar21 = 0;
          lVar22 = 0;
          fVar67 = 0.0;
          auVar39 = ZEXT816(0);
          auVar25 = ZEXT816(0);
          dVar49 = dVar12;
          local_488 = param_2;
          do {
            lVar24 = *param_6;
            sVar1 = *(short *)(lVar24 + 0xc + lVar21 * 2);
            if ((((sVar1 != -1) && ((uint)*(ushort *)(lVar24 + 6 + lVar21 * 2) < DAT_14c87eb08 + 1U)
                 ) && (*(longlong *)(lVar24 + 4 + lVar21 * 2) != 0)) &&
               (*(char *)(lVar24 + lVar21 * 2) != '\0')) {
              fVar68 = *(float *)(*param_3 + 0xc + lVar21);
              if (fVar68 <= 0.0) {
                fVar68 = 0.0;
              }
              if (0.0001 <= fVar68) {
                local_478._8_4_ = SUB84(dVar7,0);
                local_478._0_8_ = dVar6;
                local_478._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
                local_468._8_4_ = SUB84(dVar12,0);
                local_468._0_8_ = dVar9;
                local_468._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
                local_458._8_4_ = SUB84(dVar66,0);
                local_458._0_8_ = dVar61;
                local_458._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
                local_448._8_4_ = SUB84(dVar49,0);
                local_448._0_8_ = dVar48;
                local_448._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
                fVar68 = fVar68 * local_4a0;
                local_49c = fVar67;
                local_438 = auVar39;
                local_428 = auVar25;
                FUN_14486750c(lVar2,local_2f8,sVar1,0);
                puVar19 = local_358;
                puVar23 = puVar19;
                for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
                  *puVar23 = *(undefined8 *)*param_2;
                  param_2 = (undefined1 (*) [16])(*param_2 + 8);
                  puVar23 = puVar23 + 1;
                }
                uVar17 = (uint)*(ushort *)(*param_6 + 0xc + lVar21 * 2);
                if (uVar17 == 0xffff) {
                  uVar17 = 0xffffffff;
                }
                FUN_14486750c(lVar2,local_3b8,uVar17,1);
                uVar14 = FUN_1449437a2(puVar19,&local_418,local_3b8);
                auVar25 = local_3c8;
                dVar6 = local_2b8._0_8_;
                dVar7 = local_2b8._8_8_;
                dVar9 = local_2a8._0_8_;
                dVar12 = local_2a8._8_8_;
                dVar32 = local_3d8._0_8_;
                dVar50 = local_3d8._8_8_;
                dVar37 = local_3c8._0_8_;
                auVar33 = minpd(local_3d8,local_2b8);
                auVar39 = minpd(local_3c8,local_2a8);
                auVar65._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
                auVar65._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
                iVar15 = movmskpd(uVar14,auVar65);
                auVar40._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
                auVar40._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
                uVar17 = movmskpd((int)puVar19,auVar40);
                if ((uVar17 & 0x3fffffff) == 0 && iVar15 == 0) {
                  local_498 = local_2e8;
                  dVar38 = dStack_410 * (double)local_2e8._0_8_ * -1.0 +
                           local_408 * (double)local_2f8._8_8_ +
                           dStack_400 * (double)local_2f8._0_8_ * 1.0 +
                           local_418 * (double)local_2e8._8_8_;
                  dVar43 = local_418 * (double)local_2e8._0_8_ * 1.0 +
                           dStack_400 * (double)local_2f8._8_8_ +
                           local_408 * (double)local_2f8._0_8_ * -1.0 +
                           dStack_410 * (double)local_2e8._8_8_;
                  auVar45._0_8_ =
                       dStack_400 * (double)local_2e8._0_8_ * 1.0 +
                       (((double)local_2f8._0_8_ * dStack_410 * 1.0 +
                        local_408 * (double)local_2e8._8_8_) - local_418 * (double)local_2f8._8_8_);
                  auVar45._8_8_ =
                       local_408 * (double)local_2e8._0_8_ * -1.0 +
                       (((double)local_2f8._0_8_ * local_418 * -1.0 +
                        dStack_400 * (double)local_2e8._8_8_) - dStack_410 * (double)local_2f8._8_8_
                       );
                  dVar61 = local_3f8 * dVar6;
                  dVar66 = dStack_3f0 * dVar7;
                  dVar48 = local_3e8 * dVar9;
                  dVar49 = dStack_3e0 * dVar12;
                  dVar62 = dVar66 * (double)local_2f8._0_8_ - (double)local_2f8._8_8_ * dVar61;
                  dVar52 = dVar48 * (double)local_2f8._8_8_ - (double)local_2e8._0_8_ * dVar66;
                  dVar51 = dVar61 * (double)local_2e8._0_8_ - (double)local_2f8._0_8_ * dVar48;
                  dVar63 = dVar49 * (double)local_2e8._8_8_ - (double)local_2e8._8_8_ * dVar49;
                  dVar52 = dVar52 + dVar52;
                  dVar51 = dVar51 + dVar51;
                  dVar62 = dVar62 + dVar62;
                  dVar63 = dVar63 + dVar63;
                  dVar61 = (dVar62 * (double)local_2f8._8_8_ - (double)local_2e8._0_8_ * dVar51) +
                           (double)local_2e8._8_8_ * dVar52 + dVar61 + (double)local_2d8._0_8_;
                  dVar66 = (dVar52 * (double)local_2e8._0_8_ - dVar62 * (double)local_2f8._0_8_) +
                           (double)local_2e8._8_8_ * dVar51 + dVar66 + (double)local_2d8._8_8_;
                  dVar48 = (dVar51 * (double)local_2f8._0_8_ - (double)local_2f8._8_8_ * dVar52) +
                           (double)local_2e8._8_8_ * dVar62 + dVar48 + (double)local_2c8._0_8_;
                  dVar49 = (dVar63 * (double)local_2e8._8_8_ - dVar63 * (double)local_2e8._8_8_) +
                           (double)local_2e8._8_8_ * dVar63 + dVar49 + (double)local_2c8._8_8_;
                  uVar14 = 0;
                }
                else {
                  dVar48 = (double)local_2f8._8_8_ + (double)local_2f8._8_8_;
                  dVar49 = (double)local_2e8._0_8_ + (double)local_2e8._0_8_;
                  dVar66 = (double)local_2f8._0_8_ *
                           ((double)local_2f8._0_8_ + (double)local_2f8._0_8_);
                  local_498 = ZEXT416((uint)fVar68);
                  local_1a8 = (1.0 - (dVar66 + (double)local_2f8._8_8_ * dVar48)) * dVar9;
                  dVar61 = ((double)local_2f8._0_8_ + (double)local_2f8._0_8_) *
                           (double)local_2e8._8_8_;
                  local_1b8 = (dVar48 * (double)local_2e8._8_8_ + (double)local_2f8._0_8_ * dVar49)
                              * dVar9;
                  local_1d8 = (dVar48 * (double)local_2f8._0_8_ - dVar49 * (double)local_2e8._8_8_)
                              * dVar7;
                  dStack_1b0 = (dVar49 * (double)local_2f8._8_8_ - dVar61) * dVar9;
                  local_1f8 = (1.0 - ((double)local_2e8._0_8_ * dVar49 +
                                     (double)local_2f8._8_8_ * dVar48)) * dVar6;
                  dStack_1d0 = (1.0 - ((double)local_2e8._0_8_ * dVar49 + dVar66)) * dVar7;
                  dStack_1f0 = (dVar48 * (double)local_2f8._0_8_ + dVar49 * (double)local_2e8._8_8_)
                               * dVar6;
                  local_1c8 = (dVar49 * (double)local_2f8._8_8_ + dVar61) * dVar7;
                  local_1e8 = ((double)local_2f8._0_8_ * dVar49 - dVar48 * (double)local_2e8._8_8_)
                              * dVar6;
                  dStack_1e0 = 0.0;
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  local_198 = (double)local_2d8._0_8_;
                  dStack_190 = (double)local_2d8._8_8_;
                  local_188 = (double)local_2c8._0_8_;
                  uStack_180 = 0x3ff0000000000000;
                  dVar49 = dStack_410 + dStack_410;
                  dVar61 = local_408 + local_408;
                  dVar48 = local_418 * (local_418 + local_418);
                  local_228 = (1.0 - (dVar48 + dStack_410 * dVar49)) * dVar37;
                  dVar66 = (local_418 + local_418) * dStack_400;
                  local_238 = (dVar49 * dStack_400 + local_418 * dVar61) * dVar37;
                  dStack_230 = (dVar61 * dStack_410 - dVar66) * dVar37;
                  dVar48 = (1.0 - (local_408 * dVar61 + dVar48)) * dVar50;
                  local_248 = (dVar61 * dStack_410 + dVar66) * dVar50;
                  local_278._8_8_ = (dVar49 * local_418 + dVar61 * dStack_400) * dVar32;
                  local_278._0_8_ = (1.0 - (local_408 * dVar61 + dStack_410 * dVar49)) * dVar32;
                  local_268._8_8_ = 0;
                  local_268._0_8_ = (local_418 * dVar61 - dVar49 * dStack_400) * dVar32;
                  local_258._8_4_ = SUB84(dVar48,0);
                  local_258._0_8_ = (dVar49 * local_418 - dVar61 * dStack_400) * dVar50;
                  local_258._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
                  uStack_240 = 0;
                  uStack_220 = 0;
                  local_218 = local_3f8;
                  dStack_210 = dStack_3f0;
                  local_208 = local_3e8;
                  uStack_200 = 0x3ff0000000000000;
                  FUN_1447fea8d(&local_178,local_278,&local_1f8);
                  FUN_144a1c686(&local_178,0x3e45798ee0000000);
                  auVar26._8_8_ = -(ulonglong)(0.0 <= dVar7 * dVar50);
                  auVar26._0_8_ = -(ulonglong)(0.0 <= dVar6 * dVar32);
                  auVar4._12_4_ = 0x3ff00000;
                  auVar4._0_12_ = ZEXT812(0x3ff0000000000000);
                  auVar33 = blendvpd(_DAT_149936790,auVar4,auVar26);
                  uVar16 = -(ulonglong)(0.0 <= dVar9 * dVar37);
                  dVar48 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
                  dVar49 = auVar33._0_8_;
                  local_168 = local_168 * dVar49;
                  dStack_170 = dStack_170 * dVar49;
                  local_178 = local_178 * dVar49;
                  dVar49 = auVar33._8_8_;
                  local_148 = local_148 * dVar49;
                  local_150 = local_150 * dVar49;
                  local_158 = dVar49 * local_158;
                  local_128 = local_128 * dVar48;
                  local_130 = local_130 * dVar48;
                  local_138 = dVar48 * local_138;
                  pdVar20 = &local_298;
                  FUN_14481fd10(pdVar20,&local_178);
                  uVar14 = SUB84(pdVar20,0);
                  dVar48 = local_288 * local_288 + local_298 * local_298;
                  dVar49 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                  auVar44._0_8_ = dVar48 + dVar49;
                  auVar44._8_8_ = dVar48 + dVar49;
                  auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
                  auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
                  auVar33 = sqrtpd(auVar44,auVar44);
                  auVar53._8_8_ = 0x3ff0000000000000;
                  auVar53._0_8_ = 0x3ff0000000000000;
                  auVar33 = divpd(auVar53,auVar33);
                  auVar54._0_8_ = auVar33._0_8_ * local_288;
                  auVar54._8_8_ = auVar33._8_8_ * dStack_280;
                  dVar38 = (double)((ulonglong)(local_298 * auVar33._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
                  dVar43 = (double)((ulonglong)(dStack_290 * auVar33._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
                  auVar45 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar54,auVar27);
                  dVar49 = 0.0;
                  dVar61 = local_118;
                  dVar66 = dStack_110;
                  dVar48 = local_108;
                }
                param_2 = local_488;
                dVar9 = dVar9 * dVar37;
                dVar7 = dVar7 * dVar50;
                dVar12 = dVar12 * auVar25._8_8_;
                dVar6 = dVar6 * dVar32;
                fVar67 = local_49c + fVar68;
                local_2d8._8_4_ = SUB84(dVar66,0);
                local_2d8._0_8_ = dVar61;
                local_2d8._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
                local_2c8._8_4_ = SUB84(dVar49,0);
                local_2c8._0_8_ = dVar48;
                local_2c8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
                local_2b8._8_4_ = SUB84(dVar7,0);
                local_2b8._0_8_ = dVar6;
                local_2b8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
                local_2a8._8_4_ = SUB84(dVar12,0);
                local_2a8._0_8_ = dVar9;
                local_2a8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
                dVar50 = auVar45._0_8_;
                dVar62 = auVar45._8_8_;
                dVar32 = dVar50 * dVar50 + dVar38 * dVar38;
                dVar37 = dVar62 * dVar62 + dVar43 * dVar43;
                auVar34._0_8_ = dVar32 + dVar37;
                auVar34._8_8_ = dVar32 + dVar37;
                auVar28._8_8_ = -(ulonglong)(1e-08 <= auVar34._8_8_);
                auVar28._0_8_ = -(ulonglong)(1e-08 <= auVar34._0_8_);
                auVar25 = sqrtpd(auVar34,auVar34);
                auVar55._8_8_ = 0x3ff0000000000000;
                auVar55._0_8_ = 0x3ff0000000000000;
                auVar25 = divpd(auVar55,auVar25);
                auVar56._0_8_ = auVar25._0_8_ * dVar50;
                auVar56._8_8_ = auVar25._8_8_ * dVar62;
                local_2f8._0_8_ =
                     (ulonglong)(dVar38 * auVar25._0_8_) & -(ulonglong)(1e-08 <= auVar34._0_8_);
                local_2f8._8_8_ =
                     (ulonglong)(dVar43 * auVar25._8_8_) & -(ulonglong)(1e-08 <= auVar34._8_8_);
                local_2e8 = blendvpd(_DAT_149935300,auVar56,auVar28);
                if (*local_480 == '\x01') {
                  local_1f8 = (double)local_428._0_8_;
                  dStack_1f0 = (double)local_428._8_8_;
                  local_1e8 = (double)local_438._0_8_;
                  dStack_1e0 = (double)local_438._8_8_;
                  auVar46._0_8_ = -(ulonglong)(ABS((double)local_428._0_8_) == 0.0);
                  auVar46._8_8_ = -(ulonglong)(ABS((double)local_428._8_8_) == 0.0);
                  iVar15 = movmskpd(1,auVar46);
                  auVar58._0_8_ = -(ulonglong)(ABS((double)local_438._0_8_) == 0.0);
                  auVar58._8_8_ = -(ulonglong)(ABS((double)local_438._8_8_) == 0.0);
                  iVar18 = movmskpd(uVar14,auVar58);
                  auVar39 = local_2e8;
                  auVar25 = local_2f8;
                  if (iVar15 + iVar18 * 4 != 0xf) {
                    dVar32 = (double)(fVar68 / fVar67);
                    dVar37 = (double)(fVar68 / fVar67);
                    dVar50 = 1.0 - dVar32;
                    dVar62 = 1.0 - dVar37;
                    dVar61 = dVar61 * dVar32 + (double)local_458._0_8_ * dVar50;
                    dVar66 = dVar66 * dVar37 + (double)local_458._8_8_ * dVar62;
                    dVar48 = dVar48 * dVar32 + (double)local_448._0_8_ * dVar50;
                    dVar49 = dVar49 * dVar37 + (double)local_448._8_8_ * dVar62;
                    dVar6 = dVar6 * dVar32 + (double)local_478._0_8_ * dVar50;
                    dVar7 = dVar7 * dVar37 + (double)local_478._8_8_ * dVar62;
                    dVar9 = dVar9 * dVar32 + (double)local_468._0_8_ * dVar50;
                    dVar12 = dVar12 * dVar37 + (double)local_468._8_8_ * dVar62;
                    local_278 = local_2f8;
                    local_268 = local_2e8;
                    FUN_144a44da6(&local_178,&local_1f8,local_278,(double)fVar68);
                    dVar32 = local_168 * local_168 + local_178 * local_178;
                    dVar37 = dStack_160 * dStack_160 + dStack_170 * dStack_170;
                    auVar47._0_8_ = dVar32 + dVar37;
                    auVar47._8_8_ = dVar32 + dVar37;
                    auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
                    auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
                    auVar25 = sqrtpd(auVar47,auVar47);
                    auVar59._8_8_ = 0x3ff0000000000000;
                    auVar59._0_8_ = 0x3ff0000000000000;
                    auVar33 = divpd(auVar59,auVar25);
                    auVar60._0_8_ = auVar33._0_8_ * local_168;
                    auVar60._8_8_ = auVar33._8_8_ * dStack_160;
                    auVar25._0_8_ =
                         (ulonglong)(local_178 * auVar33._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
                    auVar25._8_8_ =
                         (ulonglong)(dStack_170 * auVar33._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
                    auVar39 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar60,auVar30);
                  }
                }
                else {
                  if (*local_480 != '\0') {
                    auVar25 = *local_488;
                    auVar39 = local_488[1];
                    dVar49 = *(double *)(local_488[3] + 8);
                    dVar12 = *(double *)(local_488[5] + 8);
                    dVar48 = *(double *)local_488[3];
                    dVar6 = *(double *)local_488[4];
                    dVar7 = *(double *)(local_488[4] + 8);
                    dVar9 = *(double *)local_488[5];
                    dVar61 = *(double *)local_488[2];
                    dVar66 = *(double *)(local_488[2] + 8);
                    break;
                  }
                  dVar32 = (double)fVar68;
                  dVar37 = (double)fVar68;
                  auVar41._0_8_ = (double)local_2f8._0_8_ * dVar32;
                  auVar41._8_8_ = (double)local_2f8._8_8_ * dVar37;
                  auVar35._0_8_ = local_2e8._0_8_ * dVar32;
                  auVar35._8_8_ = local_2e8._8_8_ * dVar37;
                  dVar50 = auVar35._0_8_ * (double)local_438._0_8_ +
                           auVar41._0_8_ * (double)local_428._0_8_;
                  dVar62 = auVar35._8_8_ * (double)local_438._8_8_ +
                           auVar41._8_8_ * (double)local_428._8_8_;
                  auVar29._8_8_ = -(ulonglong)(0.0 <= dVar50 + dVar62);
                  auVar29._0_8_ = -(ulonglong)(0.0 <= dVar50 + dVar62);
                  auVar57._0_8_ = 0.0 - auVar41._0_8_;
                  auVar57._8_8_ = 0.0 - auVar41._8_8_;
                  auVar33 = blendvpd(auVar57,auVar41,auVar29);
                  auVar64._0_8_ = 0.0 - auVar35._0_8_;
                  auVar64._8_8_ = 0.0 - auVar35._8_8_;
                  auVar65 = blendvpd(auVar64,auVar35,auVar29);
                  dVar61 = dVar61 * dVar32 + (double)local_458._0_8_;
                  dVar66 = dVar66 * dVar37 + (double)local_458._8_8_;
                  dVar48 = dVar48 * dVar32 + (double)local_448._0_8_;
                  dVar49 = dVar49 * dVar37 + (double)local_448._8_8_;
                  dVar6 = dVar6 * dVar32 + (double)local_478._0_8_;
                  dVar7 = dVar7 * dVar37 + (double)local_478._8_8_;
                  dVar9 = dVar9 * dVar32 + (double)local_468._0_8_;
                  dVar12 = dVar12 * dVar37 + (double)local_468._8_8_;
                  auVar25._8_8_ = (ulonglong)(auVar33._8_8_ + (double)local_428._8_8_);
                  auVar25._0_8_ = (ulonglong)(auVar33._0_8_ + (double)local_428._0_8_);
                  auVar39._8_8_ = auVar65._8_8_ + (double)local_438._8_8_;
                  auVar39._0_8_ = auVar65._0_8_ + (double)local_438._0_8_;
                }
                uVar16 = (ulonglong)*(uint *)(param_3 + 1);
              }
            }
            lVar22 = lVar22 + 1;
            lVar21 = lVar21 + 0x10;
          } while (lVar22 < (int)uVar16);
        }
        dVar50 = auVar25._0_8_;
        dVar62 = auVar25._8_8_;
        dVar52 = auVar39._0_8_;
        dVar51 = auVar39._8_8_;
        dVar32 = dVar52 * dVar52 + dVar50 * dVar50;
        dVar37 = dVar51 * dVar51 + dVar62 * dVar62;
        auVar36._0_8_ = dVar32 + dVar37;
        auVar36._8_8_ = dVar32 + dVar37;
        auVar31._8_8_ = -(ulonglong)(1e-08 <= auVar36._8_8_);
        auVar31._0_8_ = -(ulonglong)(1e-08 <= auVar36._0_8_);
        auVar25 = sqrtpd(auVar36,auVar36);
        auVar33 = divpd(_DAT_149934d80,auVar25);
        auVar42._0_8_ = auVar33._0_8_ * dVar52;
        auVar42._8_8_ = auVar33._8_8_ * dVar51;
        auVar25 = blendvpd(_DAT_149935300,auVar42,auVar31);
        *param_5 = (ulonglong)(dVar50 * auVar33._0_8_) & -(ulonglong)(1e-08 <= auVar36._0_8_);
        param_5[1] = (ulonglong)(dVar62 * auVar33._8_8_) & -(ulonglong)(1e-08 <= auVar36._8_8_);
        *(undefined1 (*) [16])(param_5 + 2) = auVar25;
        auVar11._8_4_ = SUB84(dVar66,0);
        auVar11._0_8_ = dVar61;
        auVar11._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
        *(undefined1 (*) [16])(param_5 + 4) = auVar11;
        auVar10._8_4_ = SUB84(dVar49,0);
        auVar10._0_8_ = dVar48;
        auVar10._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
        *(undefined1 (*) [16])(param_5 + 6) = auVar10;
        auVar5._8_4_ = SUB84(dVar7,0);
        auVar5._0_8_ = dVar6;
        auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        *(undefined1 (*) [16])(param_5 + 8) = auVar5;
        auVar8._8_4_ = SUB84(dVar12,0);
        auVar8._0_8_ = dVar9;
        auVar8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        *(undefined1 (*) [16])(param_5 + 10) = auVar8;
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14927ad34 FUN_14927ad34 body=120 status=ok
// SIG undefined FUN_14927ad34(void)

void FUN_14927ad34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_2;
  local_20 = *(undefined4 *)puVar1[0x10];
  local_18 = *(undefined8 *)puVar1[0xc];
  local_28 = &local_18;
  local_10 = *(undefined4 *)((undefined8 *)puVar1[0xc] + 1);
  FUN_14927ae46(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),puVar1[8]);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14927adb6 FUN_14927adb6 body=142 status=ok
// SIG undefined FUN_14927adb6(void)

void FUN_14927adb6(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x200);
  local_38 = &local_28;
  local_20 = *(undefined4 *)(param_1 + 0x208);
  local_30 = *(undefined4 *)(param_1 + 0x210);
  FUN_14927ae46(param_1 + 0x10,param_1 + 0x1f0,*(undefined1 *)(param_1 + 0x1fc),param_1 + 0x1fd);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14927ae46 FUN_14927ae46 body=4136 status=ok
// SIG undefined FUN_14927ae46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14927ae46(longlong param_1,double *param_2,char param_3,char *param_4,longlong *param_5,
                  float param_6)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  double *pdVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar26;
  undefined1 auVar25 [16];
  double dVar27;
  double dVar28;
  double dVar30;
  double dVar31;
  undefined1 auVar29 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar36;
  undefined1 auVar35 [16];
  double dVar37;
  undefined1 auVar38 [16];
  double dVar40;
  double dVar41;
  undefined1 auVar39 [16];
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  float fVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auStack_508 [32];
  undefined1 local_4e8;
  undefined1 local_4e0;
  undefined1 local_4d8;
  undefined1 local_4c8 [32];
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  double local_458;
  undefined4 local_450;
  double local_448 [4];
  double local_428;
  double dStack_420;
  undefined4 local_418;
  undefined4 uStack_414;
  double dStack_410;
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  double local_3e8;
  undefined4 local_3e0;
  double local_3d8;
  double dStack_3d0;
  undefined1 local_3c8 [16];
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  double local_388;
  double dStack_380;
  double local_378;
  undefined4 local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  undefined4 local_300;
  undefined1 local_2f8 [32];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
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
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8 [2];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_508;
  if ((((0.0001 <= param_6) && (lVar1 = *(longlong *)(param_1 + 0x1b0), lVar1 != 0)) &&
      ((uint)*(ushort *)((longlong)param_2 + 6) < DAT_14c87eb08 + 1U)) &&
     ((*(longlong *)((longlong)param_2 + 4) != 0 && (*(char *)param_2 != '\0')))) {
    local_170 = (double)CONCAT44(local_170._4_4_,*(undefined4 *)(param_2 + 1));
    local_178 = *param_2;
    uVar6 = FUN_140813180(lVar1);
    FUN_14486750c(lVar1,local_2f8,uVar6,1);
    if ((longlong)(int)param_5[1] != 0) {
      lVar11 = *param_5;
      lVar14 = (longlong)(int)param_5[1] * 0x10;
      lVar10 = 0;
      fVar15 = 0.0;
      do {
        fVar45 = *(float *)(lVar11 + 0xc + lVar10);
        if (fVar45 <= 0.0) {
          fVar45 = 0.0;
        }
        if (((0.0001 <= fVar45) && ((uint)*(ushort *)(lVar11 + 6 + lVar10) < DAT_14c87eb08 + 1U)) &&
           ((*(longlong *)(lVar11 + 4 + lVar10) != 0 && (*(char *)(lVar11 + lVar10) != '\0')))) {
          fVar15 = fVar15 + fVar45;
        }
        lVar10 = lVar10 + 0x10;
      } while (lVar14 != lVar10);
      if (0.0001 < fVar15) {
        lVar10 = 0;
        dVar36 = DAT_14c8464e0;
        dVar24 = DAT_14c8464e8;
        dVar44 = DAT_14c8464f0;
        do {
          dVar23 = DAT_14c8464f0;
          dVar3 = DAT_14c8464e8;
          dVar2 = DAT_14c8464e0;
          fVar45 = *(float *)(lVar11 + 0xc + lVar10);
          if (fVar45 <= 0.0) {
            fVar45 = 0.0;
          }
          if ((((0.0001 <= fVar45) && ((uint)*(ushort *)(lVar11 + 6 + lVar10) < DAT_14c87eb08 + 1U))
              && (*(longlong *)(lVar11 + 4 + lVar10) != 0)) &&
             (pdVar12 = (double *)(lVar10 + lVar11), *(char *)pdVar12 != '\0')) {
            local_308 = *pdVar12;
            local_300 = *(undefined4 *)(pdVar12 + 1);
            uVar6 = FUN_140813180(lVar1,&local_308);
            FUN_14486750c(lVar1,&local_178,uVar6,0);
            if (param_3 != '\0') {
              dStack_270 = (double)CONCAT44(dStack_270._4_4_,*(undefined4 *)(pdVar12 + 1));
              local_278 = *pdVar12;
              uVar6 = FUN_140813180(lVar1,&local_278);
              FUN_14486750c(lVar1,local_1f8,uVar6,1);
              dVar23 = local_2c8 - local_1c8;
              dVar2 = local_2d8 - (double)local_1d8._0_8_;
              dVar3 = dStack_2d0 - (double)local_1d8._8_8_;
            }
            dVar16 = (double)(fVar45 * (1.0 / fVar15));
            dVar36 = (dVar2 + local_158) * dVar16 + dVar36;
            dVar24 = dVar24 + (dVar3 + local_150) * dVar16;
            dVar44 = dVar44 + (dVar23 + local_148) * dVar16;
          }
          lVar10 = lVar10 + 0x10;
        } while (lVar14 != lVar10);
        local_378 = *param_2;
        local_370 = *(undefined4 *)(param_2 + 1);
        lVar11 = lVar1;
        uVar6 = FUN_149185020(lVar1,&local_368,&local_378,0);
        auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_328._8_8_));
        auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_328._0_8_));
        iVar7 = movmskpd(uVar6,auVar38);
        auVar43._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_318._8_8_));
        auVar43._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_318._0_8_));
        uVar9 = movmskpd((int)lVar11,auVar43);
        if ((uVar9 & 0x3fffffff) == 0 && iVar7 == 0) {
          uVar6 = (undefined4)DAT_14c846498;
          uVar46 = (undefined4)((ulonglong)DAT_14c846498 >> 0x20);
          dVar23 = DAT_14c8464d0;
          dVar16 = DAT_14c8464c0;
          dVar26 = DAT_14c8464c8;
          dVar17 = DAT_14c846490;
          dVar3 = DAT_14c8464a0;
          dVar2 = DAT_14c8464a8;
          dVar42 = DAT_14c8464b0;
          dVar27 = DAT_14c846480;
          dVar30 = DAT_14c846488;
        }
        else {
          auVar43 = divpd(_DAT_149934d80,local_328);
          auVar38 = divpd(ZEXT816(0x3ff0000000000000),local_318);
          dVar16 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_328._0_8_)) &
                           auVar43._0_8_);
          dVar26 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_328._8_8_)) &
                           auVar43._8_8_);
          local_4c8._0_8_ =
               -(ulonglong)(9.99999993922529e-09 < ABS(local_318._0_8_)) & auVar38._0_8_;
          local_4c8._8_8_ = 0;
          dVar27 = -local_368;
          dVar30 = -dStack_360;
          dVar17 = local_358 * -1.0;
          dStack_350 = dStack_350 * 1.0;
          local_348 = local_348 * dVar16;
          dStack_340 = dStack_340 * dVar26;
          local_338 = local_338 * (double)local_4c8._0_8_;
          dVar42 = dStack_340 * dVar27 - dVar30 * local_348;
          dVar28 = local_338 * dVar30 - dVar17 * dStack_340;
          dVar31 = local_348 * dVar17 - dVar27 * local_338;
          dVar28 = dVar28 + dVar28;
          dVar31 = dVar31 + dVar31;
          dVar42 = dVar42 + dVar42;
          uVar6 = SUB84(dStack_350,0);
          uVar46 = (undefined4)((ulonglong)dStack_350 >> 0x20);
          dVar23 = (double)local_4c8._0_8_;
          dVar3 = 0.0 - ((dVar42 * dVar30 - dVar31 * dVar17) + dStack_350 * dVar28 + local_348);
          dVar2 = 0.0 - (dVar42 * local_368 + dVar17 * dVar28 + dStack_350 * dVar31 + dStack_340);
          dVar42 = 0.0 - (dStack_350 * dVar42 + local_338 + (dVar31 * dVar27 - dVar28 * dVar30));
        }
        dVar44 = dVar44 * dVar23;
        dVar36 = dVar36 * dVar16;
        dVar24 = dVar24 * dVar26;
        dVar23 = dVar24 * dVar27 - dVar30 * dVar36;
        dVar16 = dVar44 * dVar30 - dVar17 * dVar24;
        dVar26 = dVar36 * dVar17 - dVar27 * dVar44;
        dVar16 = dVar16 + dVar16;
        dVar26 = dVar26 + dVar26;
        dVar23 = dVar23 + dVar23;
        dVar2 = (dVar17 * dVar16 - dVar27 * dVar23) +
                (double)CONCAT44(uVar46,uVar6) * dVar26 + dVar24 + dVar2;
        local_3e8 = *param_2;
        local_3e0 = *(undefined4 *)(param_2 + 1);
        uVar8 = FUN_140813180(lVar1);
        FUN_144afced8(lVar1,&local_3d8,uVar8,0);
        pdVar12 = &DAT_14c846480;
        pdVar13 = local_448;
        for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
          *pdVar13 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          pdVar13 = pdVar13 + 1;
        }
        uVar8 = uVar6;
        uVar47 = uVar46;
        if (((*(char *)param_2 == '\x04') && (uVar9 = FUN_140813180(lVar1,param_2), -1 < (int)uVar9)
            ) && (((int)uVar9 < *(int *)(lVar1 + 0xc0) &&
                  ((lVar11 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar9 * 8),
                   lVar11 != 0 && (*(char *)(lVar11 + 0x10) == '\x04')))))) {
          lVar10 = lVar1;
          local_488 = uVar6;
          uStack_484 = uVar46;
          uStack_480 = uVar6;
          uStack_47c = uVar46;
          uVar8 = FUN_1401261c4(lVar1,local_448,lVar11,1);
          local_4a8 = local_3f8;
          dStack_1b0 = local_3f8._0_8_;
          dVar24 = local_3f8._8_8_;
          auVar25._8_8_ = dStack_380;
          auVar25._0_8_ = local_388;
          local_498 = local_398;
          auVar43 = local_498;
          local_4c8._0_16_ = local_408;
          auVar38 = local_4c8._0_16_;
          auVar18 = minpd(local_398,local_408);
          auVar25 = minpd(auVar25,local_3f8);
          auVar19._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
          auVar19._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
          iVar7 = movmskpd(uVar8,auVar19);
          auVar18._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
          auVar18._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
          uVar9 = movmskpd((int)lVar10,auVar18);
          local_4c8._8_8_ = local_408._8_8_;
          local_498._0_8_ = local_398._0_8_;
          local_498._8_8_ = local_398._8_8_;
          local_4c8._0_8_ = local_408._0_8_;
          local_4c8._0_16_ = auVar38;
          local_498 = auVar43;
          if ((uVar9 & 0x3fffffff) == 0 && iVar7 == 0) {
            dVar41 = local_448[0] * dStack_3d0;
            dVar37 = local_448[0] * local_3d8;
            dVar28 = local_3d8 * local_448[1];
            dVar31 = dStack_3d0 * local_448[1];
            dVar40 = local_3d8 * local_448[2];
            dVar32 = (double)local_3c8._8_8_ * local_448[2];
            local_3d8 = dStack_3d0 * local_448[2] * -1.0 +
                        (double)local_3c8._0_8_ * local_448[1] +
                        (double)local_3c8._8_8_ * local_448[0] * 1.0 + local_3d8 * local_448[3];
            dStack_3d0 = dVar40 * 1.0 +
                         (double)local_3c8._8_8_ * local_448[1] +
                         (double)local_3c8._0_8_ * local_448[0] * -1.0 + dStack_3d0 * local_448[3];
            local_3c8._8_8_ =
                 (double)local_3c8._0_8_ * local_448[2] * -1.0 +
                 ((dVar37 * -1.0 + (double)local_3c8._8_8_ * local_448[3]) - dVar31);
            local_3c8._0_8_ =
                 dVar32 * 1.0 + ((dVar41 * 1.0 + (double)local_3c8._0_8_ * local_448[3]) - dVar28);
            local_3b8 = local_3b8 * (double)local_4c8._0_8_;
            dStack_3b0 = dStack_3b0 * (double)local_4c8._8_8_;
            local_3a8 = local_3a8 * dStack_1b0;
            dStack_3a0 = dStack_3a0 * dVar24;
            dVar28 = dStack_3b0 * local_448[0] - local_448[1] * local_3b8;
            dVar32 = local_3a8 * local_448[1] - local_448[2] * dStack_3b0;
            dVar40 = local_3b8 * local_448[2] - local_448[0] * local_3a8;
            dVar31 = dStack_3a0 * local_448[3] - local_448[3] * dStack_3a0;
            dVar32 = dVar32 + dVar32;
            dVar40 = dVar40 + dVar40;
            dVar28 = dVar28 + dVar28;
            dVar31 = dVar31 + dVar31;
            local_3b8 = (dVar28 * local_448[1] - local_448[2] * dVar40) +
                        local_448[3] * dVar32 + local_3b8 + local_428;
            dStack_3b0 = (dVar32 * local_448[2] - dVar28 * local_448[0]) +
                         local_448[3] * dVar40 + dStack_3b0 + dStack_420;
            local_3a8 = (dVar40 * local_448[0] - local_448[1] * dVar32) +
                        local_448[3] * dVar28 + local_3a8 + (double)CONCAT44(uStack_414,local_418);
            dStack_3a0 = (dVar31 * local_448[3] - dVar31 * local_448[3]) +
                         local_448[3] * dVar31 + dStack_3a0 + dStack_410;
            local_388 = local_388 * dStack_1b0;
            dStack_380 = dStack_380 * dVar24;
            local_398._8_8_ = (double)local_498._8_8_ * (double)local_4c8._8_8_;
            local_398._0_8_ = (double)local_498._0_8_ * (double)local_4c8._0_8_;
            uVar8 = local_488;
            uVar47 = uStack_484;
          }
          else {
            dVar40 = local_448[1] + local_448[1];
            dVar28 = local_448[2] + local_448[2];
            dVar32 = local_448[0] * (local_448[0] + local_448[0]);
            local_1a8 = (1.0 - (dVar32 + local_448[1] * dVar40)) * dStack_1b0;
            dVar31 = (local_448[0] + local_448[0]) * local_448[3];
            local_1b8 = (dVar40 * local_448[3] + local_448[0] * dVar28) * dStack_1b0;
            local_4a8._8_4_ = SUB84(dVar24 * dStack_380,0);
            local_4a8._0_8_ = dStack_1b0 * local_388;
            local_4a8._12_4_ = (int)((ulonglong)(dVar24 * dStack_380) >> 0x20);
            dStack_1b0 = (dVar28 * local_448[1] - dVar31) * dStack_1b0;
            local_1f8[0] = (1.0 - (local_448[2] * dVar28 + local_448[1] * dVar40)) *
                           (double)local_4c8._0_8_;
            dVar24 = (1.0 - (local_448[2] * dVar28 + dVar32)) * (double)local_4c8._8_8_;
            local_1f8[1] = (dVar40 * local_448[0] + dVar28 * local_448[3]) * (double)local_4c8._0_8_
            ;
            local_1c8 = (dVar28 * local_448[1] + dVar31) * (double)local_4c8._8_8_;
            local_1e8._8_8_ = 0;
            local_1e8._0_8_ =
                 (local_448[0] * dVar28 - dVar40 * local_448[3]) * (double)local_4c8._0_8_;
            local_1d8._8_4_ = SUB84(dVar24,0);
            local_1d8._0_8_ =
                 (dVar40 * local_448[0] - dVar28 * local_448[3]) * (double)local_4c8._8_8_;
            local_1d8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
            uStack_1c0 = 0;
            dStack_1a0 = 0.0;
            local_198 = local_428;
            dStack_190 = dStack_420;
            local_188 = local_418;
            uStack_184 = uStack_414;
            uStack_180 = 0;
            uStack_17c = 0x3ff00000;
            dVar41 = dStack_3d0 + dStack_3d0;
            dVar28 = (double)local_3c8._0_8_ + (double)local_3c8._0_8_;
            dVar24 = local_3d8 * (local_3d8 + local_3d8);
            local_228 = (1.0 - (dVar24 + dStack_3d0 * dVar41)) * local_388;
            dVar32 = (local_3d8 + local_3d8) * (double)local_3c8._8_8_;
            local_238 = (dVar41 * (double)local_3c8._8_8_ + local_3d8 * dVar28) * local_388;
            dStack_230 = (dVar28 * dStack_3d0 - dVar32) * local_388;
            dVar31 = (double)local_4c8._0_8_ * (double)local_498._0_8_;
            dVar40 = (double)local_4c8._8_8_ * (double)local_498._8_8_;
            local_278 = (1.0 - ((double)local_3c8._0_8_ * dVar28 + dStack_3d0 * dVar41)) *
                        (double)local_498._0_8_;
            dVar24 = (1.0 - ((double)local_3c8._0_8_ * dVar28 + dVar24)) * (double)local_498._8_8_;
            dStack_270 = (dVar41 * local_3d8 + dVar28 * (double)local_3c8._8_8_) *
                         (double)local_498._0_8_;
            local_248 = (dVar28 * dStack_3d0 + dVar32) * (double)local_498._8_8_;
            local_268 = (local_3d8 * dVar28 - dVar41 * (double)local_3c8._8_8_) *
                        (double)local_498._0_8_;
            uStack_260 = 0;
            local_258._8_4_ = SUB84(dVar24,0);
            local_258._0_8_ =
                 (dVar41 * local_3d8 - dVar28 * (double)local_3c8._8_8_) * (double)local_498._8_8_;
            local_258._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = local_3b8;
            dStack_210 = dStack_3b0;
            local_208 = local_3a8;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_178);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar38 = _DAT_149934d80;
            auVar20._8_8_ = -(ulonglong)(0.0 <= dVar40);
            auVar20._0_8_ = -(ulonglong)(0.0 <= dVar31);
            auVar43 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar20);
            uVar4 = local_4a8._0_8_;
            uVar5 = local_4a8._8_8_;
            dVar24 = (double)(~-(ulonglong)(0.0 <= (double)local_4a8._0_8_) & 0xbff0000000000000 |
                             -(ulonglong)(0.0 <= (double)local_4a8._0_8_) & 0x3ff0000000000000);
            dVar28 = auVar43._0_8_;
            local_168 = local_168 * dVar28;
            local_170 = local_170 * dVar28;
            local_178 = local_178 * dVar28;
            dVar28 = auVar43._8_8_;
            local_148 = local_148 * dVar28;
            local_150 = local_150 * dVar28;
            local_158 = dVar28 * local_158;
            local_128 = local_128 * dVar24;
            local_130 = local_130 * dVar24;
            local_138 = dVar24 * local_138;
            FUN_14481fd10(&local_298,&local_178);
            auVar29._0_8_ = local_298 * local_298;
            auVar29._8_8_ = dStack_290 * dStack_290;
            dVar24 = local_288 * local_288 + auVar29._0_8_;
            dVar28 = dStack_280 * dStack_280 + auVar29._8_8_;
            auVar33._0_8_ = dVar24 + dVar28;
            auVar33._8_8_ = dVar24 + dVar28;
            auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
            auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
            auVar43 = sqrtpd(auVar29,auVar33);
            auVar38 = divpd(auVar38,auVar43);
            auVar34._0_8_ = auVar38._0_8_ * local_288;
            auVar34._8_8_ = auVar38._8_8_ * dStack_280;
            local_3d8 = (double)((ulonglong)(local_298 * auVar38._0_8_) &
                                -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
            dStack_3d0 = (double)((ulonglong)(dStack_290 * auVar38._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
            local_3c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar34,auVar21);
            local_398._8_4_ = SUB84(dVar40,0);
            local_398._0_8_ = dVar31;
            local_398._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
            local_388 = (double)uVar4;
            dStack_380 = (double)uVar5;
            local_3b8 = local_118;
            dStack_3b0 = dStack_110;
            local_3a8 = local_108;
            dStack_3a0 = 0.0;
            uVar8 = local_488;
            uVar47 = uStack_484;
          }
        }
        local_1d8._0_8_ =
             (dVar23 * dVar30 - dVar26 * dVar17) + (double)CONCAT44(uVar46,uVar6) * dVar16 + dVar36
             + dVar3;
        if (*param_4 == '\0') {
          local_1d8._0_8_ = local_3b8;
        }
        if (param_4[1] == '\0') {
          dVar2 = dStack_3b0;
        }
        local_1c8 = local_3a8;
        if (param_4[2] != '\0') {
          local_1c8 = dVar42 + dVar44 + (double)CONCAT44(uVar47,uVar8) * dVar23 +
                               (dVar26 * dVar27 - dVar16 * dVar30);
        }
        local_1e8 = local_3c8;
        local_1f8[0] = local_3d8;
        local_1f8[1] = dStack_3d0;
        local_1b8 = (double)local_398._0_8_;
        dStack_1b0 = (double)local_398._8_8_;
        local_1a8 = local_388;
        dStack_1a0 = dStack_380;
        local_1d8._8_8_ = dVar2;
        uStack_1c0 = 0;
        if (param_6 < 0.9999) {
          FUN_14915b8da(&local_178,&local_3d8,local_1f8);
          pdVar12 = &local_178;
          pdVar13 = local_1f8;
          for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
            *pdVar13 = *pdVar12;
            pdVar12 = pdVar12 + 1;
            pdVar13 = pdVar13 + 1;
          }
        }
        if (*(char *)param_2 == '\x04') {
          FUN_1449437a2(local_1f8,&local_178,local_448);
          pdVar12 = &local_178;
          pdVar13 = local_1f8;
          for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
            *pdVar13 = *pdVar12;
            pdVar12 = pdVar12 + 1;
            pdVar13 = pdVar13 + 1;
          }
          dVar24 = (double)local_1e8._0_8_ * (double)local_1e8._0_8_ + local_1f8[0] * local_1f8[0];
          dVar36 = (double)local_1e8._8_8_ * (double)local_1e8._8_8_ + local_1f8[1] * local_1f8[1];
          auVar35._0_8_ = dVar24 + dVar36;
          auVar35._8_8_ = dVar24 + dVar36;
          auVar22._8_8_ = -(ulonglong)(1e-08 <= auVar35._8_8_);
          auVar22._0_8_ = -(ulonglong)(1e-08 <= auVar35._0_8_);
          auVar38 = sqrtpd(auVar35,auVar35);
          auVar38 = divpd(_DAT_149934d80,auVar38);
          auVar39._0_8_ = auVar38._0_8_ * (double)local_1e8._0_8_;
          auVar39._8_8_ = auVar38._8_8_ * (double)local_1e8._8_8_;
          local_1e8 = blendvpd(_DAT_149935300,auVar39,auVar22);
          local_1f8[0] = (double)((ulonglong)(local_1f8[0] * auVar38._0_8_) &
                                 -(ulonglong)(1e-08 <= auVar35._0_8_));
          local_1f8[1] = (double)((ulonglong)(local_1f8[1] * auVar38._8_8_) &
                                 -(ulonglong)(1e-08 <= auVar35._8_8_));
        }
        pdVar12 = local_1f8;
        pdVar13 = &local_178;
        for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
          *pdVar13 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          pdVar13 = pdVar13 + 1;
        }
        local_450 = *(undefined4 *)(param_2 + 1);
        local_458 = *param_2;
        uVar6 = FUN_140813180();
        local_4d8 = 0;
        local_4e0 = 0;
        local_4e8 = 1;
        FUN_140122cc6(lVar1,uVar6,&local_178,0);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14927be70 FUN_14927be70 body=272 status=ok
// SIG undefined FUN_14927be70(void)

void FUN_14927be70(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar2 = *(undefined1 *)puVar3[4];
  uVar5 = puVar3[8];
  puVar6 = (undefined8 *)puVar3[0xc];
  uVar1 = *(undefined4 *)puVar3[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar3 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_70 = FUN_144828ac0(*param_2 + 0xc0,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  local_60 = *puVar6;
  local_88 = &local_60;
  local_58 = *(undefined4 *)(puVar6 + 1);
  local_80 = uVar1;
  local_78 = uVar8;
  FUN_14927c032(*(undefined8 *)(param_1 + 0xc0),uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff,uVar5);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14927bf8a FUN_14927bf8a body=166 status=ok
// SIG undefined FUN_14927bf8a(void)

void FUN_14927bf8a(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x200);
  local_48 = &local_28;
  local_20 = *(undefined4 *)(param_1 + 0x208);
  local_30 = param_1 + 0x238;
  local_38 = param_1 + 0x218;
  local_40 = *(undefined4 *)(param_1 + 0x210);
  FUN_14927c032(param_1 + 0x10,param_1 + 0x1f0,*(undefined1 *)(param_1 + 0x1fc),param_1 + 0x1fd);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14927c032 FUN_14927c032 body=6198 status=ok
// SIG undefined FUN_14927c032(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14927c032(longlong param_1,char *param_2,char param_3,char *param_4,longlong *param_5,
                  float param_6,longlong param_7,longlong *param_8)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  char cVar13;
  char cVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  double *pdVar21;
  longlong lVar22;
  double *pdVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [12];
  undefined1 auVar29 [16];
  double dVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar38;
  double dVar39;
  undefined1 auVar37 [16];
  double dVar40;
  double dVar41;
  double dVar47;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  undefined1 auVar50 [16];
  double dVar49;
  double dVar54;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  float fVar56;
  uint uVar57;
  undefined4 uVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  undefined1 auStack_4d8 [32];
  undefined1 local_4b8;
  undefined1 local_4b0;
  undefined1 local_4a8;
  char local_499;
  undefined1 local_498 [16];
  double local_488;
  double dStack_480;
  undefined1 local_478 [16];
  double local_468;
  double dStack_460;
  undefined1 local_448 [16];
  double local_428 [12];
  undefined8 local_3c8;
  undefined4 local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  double local_358 [2];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [32];
  double local_278 [5];
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8 [4];
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
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  if (((param_6 < 0.0001) || (lVar3 = *(longlong *)(param_1 + 0x1b0), lVar3 == 0)) ||
     (cVar13 = FUN_144828dba(param_7,param_2,lVar3), cVar13 == '\0')) goto LAB_14927c0d0;
  iVar15 = (int)param_8[1];
  if (iVar15 != (int)param_5[1]) {
    FUN_149250716(param_8);
    iVar15 = (int)param_5[1];
  }
  if (iVar15 < 1) goto LAB_14927c0d0;
  lVar20 = 0;
  lVar22 = 0;
  lVar19 = 0;
  fVar55 = 0.0;
  uVar57 = 0;
  uVar58 = 0;
  local_499 = param_3;
  do {
    lVar4 = *param_5;
    cVar14 = FUN_144828dba(*param_8 + lVar22,lVar4 + lVar20,lVar3);
    cVar13 = local_499;
    auVar50 = _DAT_149934d80;
    if (cVar14 != '\0') {
      fVar56 = *(float *)(lVar4 + 0xc + lVar20);
      auVar28._4_8_ = 0;
      auVar28._0_4_ = fVar56;
      if (fVar56 <= 0.0) {
        auVar28 = ZEXT812(0) << 0x20;
      }
      uVar24 = -(uint)(auVar28._0_4_ < 0.0001);
      auVar42._0_4_ = ~uVar24 & (uint)(fVar55 + auVar28._0_4_);
      auVar42._4_4_ = 0;
      auVar42._8_4_ = ~auVar28._8_4_ & uVar57;
      auVar42._12_4_ = uVar58;
      auVar29._0_4_ = uVar24 & (uint)fVar55;
      auVar29._4_4_ = 0;
      auVar29._8_4_ = auVar28._8_4_ & uVar57;
      auVar29._12_4_ = 0;
      auVar29 = auVar29 | auVar42;
      fVar55 = auVar29._0_4_;
      uVar57 = auVar29._8_4_;
      uVar58 = auVar29._12_4_;
    }
    lVar19 = lVar19 + 1;
    uVar18 = (ulonglong)(int)param_5[1];
    lVar22 = lVar22 + 0x20;
    lVar20 = lVar20 + 0x10;
  } while (lVar19 < (longlong)uVar18);
  if (fVar55 <= 0.0001) goto LAB_14927c0d0;
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_2e8 = 0.0;
  dStack_2e0 = 1.0;
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2c8 = 0.0;
  dStack_2c0 = 0.0;
  local_2b8 = _DAT_149934d80;
  local_2a8 = 1.0;
  dStack_2a0 = 0.0;
  cVar14 = *param_2;
  if (cVar14 == '\x04') {
    uVar1 = *(ushort *)(param_7 + 0xc);
    if (((uVar1 != 0xffff) &&
        (*(uint *)(lVar3 + 0xc0) != (uint)uVar1 && (int)(uint)uVar1 <= (int)*(uint *)(lVar3 + 0xc0))
        ) && ((lVar19 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
              lVar19 != 0 && (*(char *)(lVar19 + 0x10) == '\x04')))) {
      FUN_1401261c4(lVar3,&local_2f8,lVar19,0);
      uVar18 = (ulonglong)*(uint *)(param_5 + 1);
    }
  }
  fVar55 = 1.0 / fVar55;
  if (cVar13 == '\0') {
    local_468 = DAT_14c8464e8;
    dStack_460 = 0.0;
    dStack_380 = 0.0;
    auVar62._8_8_ = DAT_14c8464e0;
    local_488 = DAT_14c8464f0;
  }
  else {
    auVar62._8_8_ = DAT_14c8464f0;
    dVar26 = DAT_14c8464e0;
    dVar41 = DAT_14c8464e8;
    if (0 < (int)uVar18) {
      lVar20 = 0;
      lVar19 = 0;
      do {
        lVar22 = *param_8;
        sVar2 = *(short *)(lVar22 + 0xc + lVar20 * 2);
        if (sVar2 != -1) {
          if ((((uint)*(ushort *)(lVar22 + 6 + lVar20 * 2) < DAT_14c87eb08 + 1U) &&
              (*(longlong *)(lVar22 + 4 + lVar20 * 2) != 0)) &&
             (*(char *)(lVar22 + lVar20 * 2) != '\0')) {
            fVar56 = *(float *)(*param_5 + 0xc + lVar20);
            if (fVar56 <= 0.0) {
              fVar56 = 0.0;
            }
            if (0.0001 <= fVar56) {
              FUN_14486750c(lVar3,local_178,sVar2,
                            CONCAT71((uint7)(uint3)(DAT_14c87eb08 + 1U >> 8),1));
              dVar25 = (double)(fVar56 * fVar55);
              dVar26 = dVar25 * local_158 + dVar26;
              dVar41 = dVar41 + dStack_150 * dVar25;
              auVar62._8_8_ = auVar62._8_8_ + local_148 * dVar25;
              uVar18 = (ulonglong)*(uint *)(param_5 + 1);
            }
          }
        }
        lVar19 = lVar19 + 1;
        lVar20 = lVar20 + 0x10;
      } while (lVar19 < (int)uVar18);
    }
    uVar1 = *(ushort *)(param_7 + 0xc);
    uVar57 = (uint)uVar1;
    if ((uVar1 == 0xffff) ||
       (*(uint *)(lVar3 + 0xc0) == (uint)uVar1 || (int)*(uint *)(lVar3 + 0xc0) < (int)(uint)uVar1))
    {
      pdVar21 = (double *)&DAT_14c846480;
      pdVar23 = local_358;
      for (lVar19 = 0xc; uVar58 = 0, lVar19 != 0; lVar19 = lVar19 + -1) {
        *pdVar23 = *pdVar21;
        pdVar21 = pdVar21 + 1;
        pdVar23 = pdVar23 + 1;
      }
    }
    else {
      lVar19 = lVar3;
      uVar57 = FUN_14449ec9a(lVar3,local_358,
                             *(undefined8 *)
                              (*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uint)uVar1 * 8),2);
      uVar58 = (undefined4)lVar19;
    }
    local_488 = (double)CONCAT44(local_488._4_4_,fVar55);
    local_498._8_8_ = 0;
    local_498._0_8_ = auVar62._8_8_;
    auVar7._8_8_ = dStack_310;
    auVar7._0_8_ = local_318;
    lVar19 = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_310));
    auVar51._8_4_ = (int)lVar19;
    auVar51._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_318));
    auVar51._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    iVar15 = movmskpd(uVar57,auVar51);
    lVar19 = -(ulonglong)(9.99999993922529e-09 < ABS(local_308._8_8_));
    auVar5._8_4_ = (int)lVar19;
    auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_308._0_8_));
    auVar5._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    uVar57 = movmskpd(uVar58,auVar5);
    if ((uVar57 & 0x3fffffff) == 0 && iVar15 == 0) {
      auVar62._8_8_ = DAT_14c846480._8_8_;
      uVar58 = (undefined4)DAT_14c846480;
      uVar17 = DAT_14c846480._4_4_;
      auVar29 = _DAT_14c846480;
      dVar27 = DAT_14c8464c0;
      dVar33 = DAT_14c8464c8;
      dVar34 = DAT_14c8464d0;
      dVar35 = dRam000000014c8464d8;
      dVar59 = DAT_14c846490;
      dVar60 = DAT_14c846498;
      dVar40 = DAT_14c8464a0;
      dVar47 = DAT_14c8464a8;
      dVar25 = DAT_14c8464b0;
      dVar36 = DAT_14c8464b8;
    }
    else {
      auVar29 = divpd(auVar50,auVar7);
      auVar50 = divpd(ZEXT816(0x3ff0000000000000),local_308);
      dVar27 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_318)) & auVar29._0_8_);
      dVar33 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_310)) & auVar29._8_8_);
      dVar34 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_308._0_8_)) & auVar50._0_8_);
      auVar62._0_8_ = -local_358[0];
      auVar62._8_8_ = -local_358[1];
      dVar59 = (double)local_348._0_8_ * -1.0;
      dVar60 = (double)local_348._8_8_ * 1.0;
      dVar40 = (double)local_338._0_8_ * dVar27;
      dVar47 = (double)local_338._8_8_ * dVar33;
      dVar48 = local_328 * dVar34;
      uVar58 = SUB84(local_358[0],0);
      uVar17 = (undefined4)((ulonglong)auVar62._0_8_ >> 0x20);
      dVar36 = dVar47 * auVar62._0_8_ - auVar62._8_8_ * dVar40;
      dVar38 = dVar48 * auVar62._8_8_ - dVar59 * dVar47;
      dVar25 = dVar40 * dVar59 - auVar62._0_8_ * dVar48;
      dVar38 = dVar38 + dVar38;
      dVar25 = dVar25 + dVar25;
      dVar36 = dVar36 + dVar36;
      auVar29 = auVar62;
      dVar35 = 0.0;
      dVar40 = 0.0 - ((dVar36 * auVar62._8_8_ - dVar25 * dVar59) + dVar60 * dVar38 + dVar40);
      dVar47 = 0.0 - (dVar36 * local_358[0] + dVar59 * dVar38 + dVar60 * dVar25 + dVar47);
      dVar25 = 0.0 - (dVar60 * dVar36 + dVar48 + (dVar25 * auVar62._0_8_ - dVar38 * auVar62._8_8_));
      dVar36 = 0.0;
    }
    dVar26 = dVar26 * dVar27;
    dVar41 = dVar41 * dVar33;
    uVar57 = 0xffffffff;
    if (*(ushort *)(param_7 + 0xc) != 0xffff) {
      uVar57 = (uint)*(ushort *)(param_7 + 0xc);
    }
    lVar19 = lVar3;
    uVar16 = FUN_144afced8(lVar3,&local_3b8,uVar57,1);
    dVar27 = local_2a8;
    auVar50 = _DAT_149934d80;
    dVar34 = (double)local_498._0_8_ * dVar34;
    dVar35 = dVar35 * 0.0;
    dVar33 = dVar41 * auVar29._0_8_ - auVar62._8_8_ * dVar26;
    dVar38 = dVar34 * auVar29._8_8_ - dVar59 * dVar41;
    dVar48 = dVar26 * dVar59 - (double)CONCAT44(uVar17,uVar58) * dVar34;
    dVar39 = dVar35 * dVar60 - dVar60 * dVar35;
    dVar38 = dVar38 + dVar38;
    dVar48 = dVar48 + dVar48;
    dVar33 = dVar33 + dVar33;
    dVar64 = dVar33 * auVar29._8_8_ - dVar48 * dVar59;
    dVar25 = dVar60 * dVar33 + dVar34 + (dVar48 * auVar29._0_8_ - dVar38 * auVar62._8_8_) + dVar25;
    dVar36 = dVar60 * (dVar39 + dVar39) + dVar35 + dVar64 + dVar36;
    if (cVar14 == '\x04') {
      local_498._8_4_ = SUB84(dVar36,0);
      local_498._0_8_ = dVar25;
      local_498._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      auVar62._8_8_ = local_2b8._0_8_;
      dVar34 = local_2b8._8_8_;
      auVar9._8_8_ = dStack_2a0;
      auVar9._0_8_ = local_2a8;
      dVar25 = local_378._0_8_;
      dVar35 = local_378._8_8_;
      dVar36 = local_368._0_8_;
      auVar29 = minpd(local_378,local_2b8);
      auVar42 = minpd(local_368,auVar9);
      auVar37._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
      auVar37._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
      iVar15 = movmskpd(uVar16,auVar37);
      auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
      auVar43._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
      uVar57 = movmskpd((int)lVar19,auVar43);
      if ((uVar57 & 0x3fffffff) == 0 && iVar15 == 0) {
        auVar62._8_8_ = auVar62._8_8_ * local_398;
        dVar34 = dVar34 * dStack_390;
        local_388 = local_2a8 * local_388;
        dStack_380 = dStack_2a0 * dStack_380;
        dVar27 = dVar34 * local_2f8 - dStack_2f0 * auVar62._8_8_;
        dVar35 = local_388 * dStack_2f0 - local_2e8 * dVar34;
        dVar25 = auVar62._8_8_ * local_2e8 - local_2f8 * local_388;
        dVar36 = dStack_380 * dStack_2e0 - dStack_2e0 * dStack_380;
        dVar35 = dVar35 + dVar35;
        dVar25 = dVar25 + dVar25;
        dVar27 = dVar27 + dVar27;
        dVar36 = dVar36 + dVar36;
        local_398 = (dVar27 * dStack_2f0 - local_2e8 * dVar25) + dStack_2e0 * dVar35 + auVar62._8_8_
                    + local_2d8;
        dStack_390 = (dVar35 * local_2e8 - dVar27 * local_2f8) + dStack_2e0 * dVar25 + dVar34 +
                     dStack_2d0;
        local_388 = (dVar25 * local_2f8 - dStack_2f0 * dVar35) + dStack_2e0 * dVar27 + local_388 +
                    local_2c8;
        dStack_380 = (dVar36 * dStack_2e0 - dVar36 * dStack_2e0) + dStack_2e0 * dVar36 + dStack_380
                     + dStack_2c0;
      }
      else {
        dVar39 = dStack_2f0 + dStack_2f0;
        dVar49 = local_2e8 + local_2e8;
        dVar61 = local_2f8 * (local_2f8 + local_2f8);
        local_1f8[0] = ((double)DAT_149934d80 - (local_2e8 * dVar49 + dStack_2f0 * dVar39)) *
                       auVar62._8_8_;
        dVar54 = (local_2f8 + local_2f8) * dStack_2e0;
        dStack_1b0 = (dVar49 * dStack_2f0 - dVar54) * local_2a8;
        local_1b8 = (dVar39 * dStack_2e0 + local_2f8 * dVar49) * local_2a8;
        local_1f8[1] = (dVar39 * local_2f8 + dVar49 * dStack_2e0) * auVar62._8_8_;
        local_1c8 = (dVar49 * dStack_2f0 + dVar54) * dVar34;
        local_1a8 = (1.0 - (dVar61 + dStack_2f0 * dVar39)) * local_2a8;
        local_1f8[2] = (local_2f8 * dVar49 - dVar39 * dStack_2e0) * auVar62._8_8_;
        local_1f8[3] = 0.0;
        local_1d8._8_8_ = (DAT_149934d80._8_8_ - (local_2e8 * dVar49 + dVar61)) * dVar34;
        local_1d8._0_8_ = (dVar39 * local_2f8 - dVar49 * dStack_2e0) * dVar34;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = local_2d8;
        dStack_190 = dStack_2d0;
        local_188 = local_2c8;
        uStack_180 = 0x3ff0000000000000;
        dVar39 = dStack_3b0 + dStack_3b0;
        dVar49 = local_3a8 + local_3a8;
        dVar61 = local_3b8 * (local_3b8 + local_3b8);
        dVar54 = (local_3b8 + local_3b8) * dStack_3a0;
        local_278[4] = (dVar39 * local_3b8 - dVar49 * dStack_3a0) * dVar35;
        dStack_230 = (dVar49 * dStack_3b0 - dVar54) * dVar36;
        local_278[0] = ((double)DAT_149934d80 - (local_3a8 * dVar49 + dStack_3b0 * dVar39)) * dVar25
        ;
        dStack_250 = (DAT_149934d80._8_8_ - (local_3a8 * dVar49 + dVar61)) * dVar35;
        local_278[1] = (dVar39 * local_3b8 + dVar49 * dStack_3a0) * dVar25;
        local_248 = (dVar49 * dStack_3b0 + dVar54) * dVar35;
        local_238 = (dVar39 * dStack_3a0 + local_3b8 * dVar49) * dVar36;
        local_278[2] = (local_3b8 * dVar49 - dVar39 * dStack_3a0) * dVar25;
        local_278[3] = 0.0;
        uStack_240 = 0;
        local_228 = (1.0 - (dVar61 + dStack_3b0 * dVar39)) * dVar36;
        uStack_220 = 0;
        local_218 = local_398;
        dStack_210 = dStack_390;
        local_208 = local_388;
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(local_178);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        auVar30._8_8_ = -(ulonglong)(0.0 <= dVar34 * dVar35);
        auVar30._0_8_ = -(ulonglong)(0.0 <= auVar62._8_8_ * dVar25);
        auVar29 = blendvpd(_DAT_149936790,auVar50,auVar30);
        uVar18 = -(ulonglong)(0.0 <= dVar27 * dVar36);
        auVar62._8_8_ = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
        dVar25 = auVar29._0_8_;
        local_178[1] = local_178[1] * dVar25;
        local_178[0] = local_178[0] * dVar25;
        local_168._0_8_ = (double)local_168._0_8_ * dVar25;
        dVar25 = auVar29._8_8_;
        local_148 = local_148 * dVar25;
        dStack_150 = dStack_150 * dVar25;
        local_158 = dVar25 * local_158;
        local_128 = local_128 * auVar62._8_8_;
        local_130 = local_130 * auVar62._8_8_;
        local_138 = auVar62._8_8_ * local_138;
        FUN_14481fd10(local_298,local_178);
        dStack_380 = 0.0;
        local_388 = local_108;
        local_398 = local_118;
        dStack_390 = dStack_110;
      }
      dVar25 = (double)local_498._0_8_;
    }
    local_468 = dStack_390 -
                ((dVar59 * dVar38 - dVar33 * (double)CONCAT44(uVar17,uVar58)) +
                 dVar60 * dVar48 + dVar41 + dVar47);
    uVar18 = (ulonglong)*(uint *)(param_5 + 1);
    fVar55 = local_488._0_4_;
    auVar62._8_8_ = local_398 - (dVar64 + dVar60 * dVar38 + dVar26 + dVar40);
    local_488 = local_388 - dVar25;
    dStack_460 = local_468;
  }
  uVar12 = (ulonglong)dStack_460 >> 0x20;
  uVar58 = SUB84(dStack_460,0);
  dVar26 = DAT_14c8464e0;
  dVar25 = DAT_14c8464e8;
  dVar41 = DAT_14c8464f0;
  dStack_480 = dStack_380;
  if (0 < (int)uVar18) {
    lVar20 = 0;
    lVar19 = 0;
    do {
      lVar22 = *param_8;
      sVar2 = *(short *)(lVar22 + 0xc + lVar20 * 2);
      if ((((sVar2 != -1) && ((uint)*(ushort *)(lVar22 + 6 + lVar20 * 2) < DAT_14c87eb08 + 1U)) &&
          (*(longlong *)(lVar22 + 4 + lVar20 * 2) != 0)) && (*(char *)(lVar22 + lVar20 * 2) != '\0')
         ) {
        fVar56 = *(float *)(*param_5 + 0xc + lVar20);
        if (fVar56 <= 0.0) {
          fVar56 = 0.0;
        }
        if (0.0001 <= fVar56) {
          FUN_14486750c(lVar3,local_178,sVar2,0);
          dVar36 = (double)(fVar56 * fVar55);
          dVar26 = dVar36 * local_158 + dVar26;
          dVar25 = dVar25 + dStack_150 * dVar36;
          dVar41 = dVar41 + local_148 * dVar36;
          uVar18 = (ulonglong)*(uint *)(param_5 + 1);
        }
      }
      lVar19 = lVar19 + 1;
      lVar20 = lVar20 + 0x10;
    } while (lVar19 < (int)uVar18);
  }
  local_3c8 = *(undefined8 *)param_2;
  local_3c0 = *(undefined4 *)(param_2 + 8);
  uVar17 = FUN_140813180(lVar3);
  lVar19 = lVar3;
  uVar17 = FUN_144afced8(lVar3,local_358,uVar17,0);
  auVar29 = _DAT_149934d80;
  if (cVar14 == '\x04') {
    local_478._8_4_ = uVar58;
    local_478._0_8_ = auVar62._8_8_;
    local_478._12_4_ = (int)uVar12;
    local_498._8_8_ = 0;
    local_498._0_8_ = dVar41;
    auVar62._8_8_ = local_2b8._0_8_;
    dVar36 = local_2b8._8_8_;
    auVar10._8_8_ = dStack_2a0;
    auVar10._0_8_ = local_2a8;
    auVar8._8_8_ = dStack_310;
    auVar8._0_8_ = local_318;
    dVar41 = local_308._0_8_;
    auVar42 = minpd(auVar8,local_2b8);
    auVar51 = minpd(local_308,auVar10);
    auVar44._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
    auVar44._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
    iVar15 = movmskpd(uVar17,auVar44);
    auVar52._8_8_ = -(ulonglong)(auVar51._8_8_ < 0.0);
    auVar52._0_8_ = -(ulonglong)(auVar51._0_8_ < 0.0);
    uVar57 = movmskpd((int)lVar19,auVar52);
    if ((uVar57 & 0x3fffffff) == 0 && iVar15 == 0) {
      dVar33 = local_2f8 * local_358[1];
      dVar47 = local_358[0] * dStack_2f0;
      dVar27 = local_358[0] * local_2e8;
      dVar40 = (double)local_348._0_8_ * local_2e8 * -1.0 +
               ((local_2f8 * local_358[0] * -1.0 + (double)local_348._8_8_ * dStack_2e0) -
               local_358[1] * dStack_2f0);
      local_358[0] = local_358[1] * local_2e8 * -1.0 +
                     (double)local_348._0_8_ * dStack_2f0 +
                     (double)local_348._8_8_ * local_2f8 * 1.0 + local_358[0] * dStack_2e0;
      local_358[1] = dVar27 * 1.0 +
                     (double)local_348._8_8_ * dStack_2f0 +
                     (double)local_348._0_8_ * local_2f8 * -1.0 + local_358[1] * dStack_2e0;
      auVar6._8_4_ = SUB84(dVar40,0);
      auVar6._0_8_ = (double)local_348._8_8_ * local_2e8 * 1.0 +
                     ((dVar33 * 1.0 + (double)local_348._0_8_ * dStack_2e0) - dVar47);
      auVar6._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      local_348 = auVar6;
      dVar35 = (double)local_338._0_8_ * auVar62._8_8_;
      dVar33 = (double)local_338._8_8_ * dVar36;
      local_328 = local_328 * local_2a8;
      dStack_320 = dStack_320 * dStack_2a0;
      dVar40 = dVar33 * local_2f8 - dStack_2f0 * dVar35;
      dVar47 = local_328 * dStack_2f0 - local_2e8 * dVar33;
      dVar27 = dVar35 * local_2e8 - local_2f8 * local_328;
      dVar34 = dStack_320 * dStack_2e0 - dStack_2e0 * dStack_320;
      dVar47 = dVar47 + dVar47;
      dVar27 = dVar27 + dVar27;
      dVar40 = dVar40 + dVar40;
      dVar34 = dVar34 + dVar34;
      dVar33 = (dVar47 * local_2e8 - dVar40 * local_2f8) + dStack_2e0 * dVar27 + dVar33 + dStack_2d0
      ;
      local_338._8_4_ = SUB84(dVar33,0);
      local_338._0_8_ =
           (dVar40 * dStack_2f0 - local_2e8 * dVar27) + dStack_2e0 * dVar47 + dVar35 + local_2d8;
      local_338._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      local_328 = (dVar27 * local_2f8 - dStack_2f0 * dVar47) + dStack_2e0 * dVar40 + local_328 +
                  local_2c8;
      dStack_320 = (dVar34 * dStack_2e0 - dVar34 * dStack_2e0) + dStack_2e0 * dVar34 + dStack_320 +
                   dStack_2c0;
      local_318 = local_318 * auVar62._8_8_;
      dStack_310 = dStack_310 * dVar36;
      local_308._8_8_ = local_308._8_8_ * dStack_2a0;
      local_308._0_8_ = dVar41 * local_2a8;
      local_448 = local_2b8;
    }
    else {
      dVar33 = dStack_2f0 + dStack_2f0;
      dVar34 = local_2e8 + local_2e8;
      dVar40 = local_2f8 * (local_2f8 + local_2f8);
      local_1a8 = (1.0 - (dVar40 + dStack_2f0 * dVar33)) * local_2a8;
      dVar35 = (local_2f8 + local_2f8) * dStack_2e0;
      local_1b8 = (dVar33 * dStack_2e0 + local_2f8 * dVar34) * local_2a8;
      dVar47 = local_2a8 * dVar41;
      dVar27 = dStack_2a0 * local_308._8_8_;
      dStack_1b0 = (dVar34 * dStack_2f0 - dVar35) * local_2a8;
      local_1f8[0] = (auVar50._0_8_ - (local_2e8 * dVar34 + dStack_2f0 * dVar33)) * auVar62._8_8_;
      dVar40 = (auVar50._8_8_ - (local_2e8 * dVar34 + dVar40)) * dVar36;
      local_1f8[1] = (dVar33 * local_2f8 + dVar34 * dStack_2e0) * auVar62._8_8_;
      local_1c8 = (dVar34 * dStack_2f0 + dVar35) * dVar36;
      local_1f8[2] = (local_2f8 * dVar34 - dVar33 * dStack_2e0) * auVar62._8_8_;
      local_1f8[3] = 0.0;
      local_1d8._8_4_ = SUB84(dVar40,0);
      local_1d8._0_8_ = (dVar33 * local_2f8 - dVar34 * dStack_2e0) * dVar36;
      local_1d8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = local_2d8;
      dStack_190 = dStack_2d0;
      local_188 = local_2c8;
      uStack_180 = 0x3ff0000000000000;
      dVar40 = local_358[1] + local_358[1];
      dVar33 = (double)local_348._0_8_ + (double)local_348._0_8_;
      dVar35 = local_358[0] * (local_358[0] + local_358[0]);
      local_228 = (1.0 - (dVar35 + local_358[1] * dVar40)) * dVar41;
      dVar34 = (local_358[0] + local_358[0]) * (double)local_348._8_8_;
      local_238 = (dVar40 * (double)local_348._8_8_ + local_358[0] * dVar33) * dVar41;
      local_278[4] = (dVar40 * local_358[0] - dVar33 * (double)local_348._8_8_) * dStack_310;
      dStack_230 = (dVar33 * local_358[1] - dVar34) * dVar41;
      local_278[0] = (1.0 - ((double)local_348._0_8_ * dVar33 + local_358[1] * dVar40)) * local_318;
      dStack_250 = (1.0 - ((double)local_348._0_8_ * dVar33 + dVar35)) * dStack_310;
      local_278[1] = (dVar40 * local_358[0] + dVar33 * (double)local_348._8_8_) * local_318;
      local_248 = (dVar33 * local_358[1] + dVar34) * dStack_310;
      local_278[2] = (local_358[0] * dVar33 - dVar40 * (double)local_348._8_8_) * local_318;
      local_278[3] = 0.0;
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = (double)local_338._0_8_;
      dStack_210 = (double)local_338._8_8_;
      local_208 = local_328;
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(local_178);
      FUN_144a1c686(local_178,0x3e45798ee0000000);
      auVar50._8_8_ = -(ulonglong)(0.0 <= dVar36 * dStack_310);
      auVar50._0_8_ = -(ulonglong)(0.0 <= auVar62._8_8_ * local_318);
      auVar50 = blendvpd(_DAT_149936790,auVar29,auVar50);
      uVar18 = -(ulonglong)(0.0 <= dVar47);
      dVar41 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
      dVar40 = auVar50._0_8_;
      local_178[1] = local_178[1] * dVar40;
      local_178[0] = local_178[0] * dVar40;
      local_168._0_8_ = (double)local_168._0_8_ * dVar40;
      dVar40 = auVar50._8_8_;
      local_148 = local_148 * dVar40;
      dStack_150 = dStack_150 * dVar40;
      local_158 = dVar40 * local_158;
      local_128 = local_128 * dVar41;
      local_130 = local_130 * dVar41;
      local_138 = dVar41 * local_138;
      FUN_14481fd10(&local_3b8,local_178);
      dVar41 = local_3a8 * local_3a8 + local_3b8 * local_3b8;
      dVar40 = dStack_3a0 * dStack_3a0 + dStack_3b0 * dStack_3b0;
      auVar45._0_8_ = dVar41 + dVar40;
      auVar45._8_8_ = dVar41 + dVar40;
      auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
      auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
      auVar50 = sqrtpd(auVar45,auVar45);
      auVar50 = divpd(auVar29,auVar50);
      auVar53._0_8_ = auVar50._0_8_ * local_3a8;
      auVar53._8_8_ = auVar50._8_8_ * dStack_3a0;
      local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar53,auVar31);
      local_318 = auVar62._8_8_ * local_318;
      dStack_310 = dVar36 * dStack_310;
      local_308._8_4_ = SUB84(dVar27,0);
      local_308._0_8_ = dVar47;
      local_308._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      local_358[0] = (double)((ulonglong)(local_3b8 * auVar50._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_));
      local_358[1] = (double)((ulonglong)(dStack_3b0 * auVar50._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_));
      local_338._8_8_ = dStack_110;
      local_338._0_8_ = local_118;
      local_328 = local_108;
      dStack_320 = 0.0;
      auVar50 = auVar29;
    }
    auVar62._8_8_ = (double)local_478._0_8_;
    dVar41 = (double)local_498._0_8_;
  }
  pdVar21 = local_358;
  pdVar23 = local_178;
  for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
    *pdVar23 = *pdVar21;
    pdVar21 = pdVar21 + 1;
    pdVar23 = pdVar23 + 1;
  }
  uVar1 = *(ushort *)(param_7 + 0xc);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar3 + 0xc0) == (uint)uVar1 || (int)*(uint *)(lVar3 + 0xc0) < (int)(uint)uVar1)) {
    pdVar21 = (double *)&DAT_14c846480;
    pdVar23 = local_1f8;
    for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
      *pdVar23 = *pdVar21;
      pdVar21 = pdVar21 + 1;
      pdVar23 = pdVar23 + 1;
    }
  }
  else {
    FUN_14449ec9a(lVar3,local_1f8,
                  *(undefined8 *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uint)uVar1 * 8),3);
  }
  dVar26 = dVar26 - (double)local_1d8._0_8_;
  dVar25 = dVar25 - (double)local_1d8._8_8_;
  dVar41 = dVar41 - local_1c8;
  auVar11._8_8_ = dStack_1b0;
  auVar11._0_8_ = local_1b8;
  dVar47 = local_1f8[2] * -1.0;
  dVar27 = local_1f8[3] * 1.0;
  dVar36 = -local_1f8[0];
  dVar40 = -local_1f8[1];
  dVar33 = dVar26 * dVar47 - dVar36 * dVar41;
  dVar34 = dVar25 * dVar36 - dVar26 * dVar40;
  dVar35 = dVar41 * dVar40 - dVar25 * dVar47;
  dVar35 = dVar35 + dVar35;
  dVar33 = dVar33 + dVar33;
  dVar34 = dVar34 + dVar34;
  auVar29 = divpd(auVar50,auVar11);
  local_158 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_1b8)) & auVar29._0_8_) *
              ((dVar34 * dVar40 - dVar33 * dVar47) + dVar27 * dVar35 + dVar26);
  dVar26 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_1b0)) & auVar29._8_8_) *
           (local_1f8[0] * dVar34 + dVar47 * dVar35 + dVar27 * dVar33 + dVar25);
  local_148 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_1a8)) &
                      (ulonglong)(1.0 / local_1a8)) *
              (dVar27 * dVar34 + dVar41 + (dVar33 * dVar36 - dVar35 * dVar40));
  if (cVar13 != '\0') {
    local_148 = local_148 + local_488;
    local_158 = auVar62._8_8_ + local_158;
    dVar26 = local_468 + dVar26;
  }
  if (*param_4 == '\x01') {
    dStack_150 = (double)local_338._8_8_;
    if (((param_4[1] & 1U) == 0) || (dStack_150 = dVar26, param_4[2] == '\0')) goto LAB_14927d370;
  }
  else {
    if ((param_4[1] & 1U) == 0) {
      dVar26 = (double)local_338._8_8_;
    }
    local_158 = (double)local_338._0_8_;
    dStack_150 = dVar26;
LAB_14927d370:
    if (param_4[2] == '\0') {
      local_148 = local_328;
    }
  }
  uStack_140 = 0;
  if (param_6 < 0.9999) {
    FUN_14915b8da(local_278,local_358,local_178);
    pdVar21 = local_278;
    pdVar23 = local_178;
    for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
      *pdVar23 = *pdVar21;
      pdVar21 = pdVar21 + 1;
      pdVar23 = pdVar23 + 1;
    }
  }
  if (*param_2 == '\x04') {
    FUN_1449437a2(local_178,local_278,&local_2f8);
    pdVar21 = local_278;
    pdVar23 = local_178;
    for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
      *pdVar23 = *pdVar21;
      pdVar21 = pdVar21 + 1;
      pdVar23 = pdVar23 + 1;
    }
    auVar62._8_8_ = (double)local_168._0_8_ * (double)local_168._0_8_ + local_178[0] * local_178[0];
    dVar41 = (double)local_168._8_8_ * (double)local_168._8_8_ + local_178[1] * local_178[1];
    auVar46._0_8_ = auVar62._8_8_ + dVar41;
    auVar46._8_8_ = auVar62._8_8_ + dVar41;
    auVar32._8_8_ = -(ulonglong)(1e-08 <= auVar46._8_8_);
    auVar32._0_8_ = -(ulonglong)(1e-08 <= auVar46._0_8_);
    auVar29 = sqrtpd(auVar46,auVar46);
    auVar50 = divpd(auVar50,auVar29);
    auVar63._0_8_ = auVar50._0_8_ * (double)local_168._0_8_;
    auVar63._8_8_ = auVar50._8_8_ * (double)local_168._8_8_;
    local_168 = blendvpd(_DAT_149935300,auVar63,auVar32);
    local_178[0] = (double)((ulonglong)(local_178[0] * auVar50._0_8_) &
                           -(ulonglong)(1e-08 <= auVar46._0_8_));
    local_178[1] = (double)((ulonglong)(local_178[1] * auVar50._8_8_) &
                           -(ulonglong)(1e-08 <= auVar46._8_8_));
  }
  pdVar21 = local_178;
  pdVar23 = local_428;
  for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
    *pdVar23 = *pdVar21;
    pdVar21 = pdVar21 + 1;
    pdVar23 = pdVar23 + 1;
  }
  uVar57 = 0xffffffff;
  if (*(ushort *)(param_7 + 0xc) != 0xffff) {
    uVar57 = (uint)*(ushort *)(param_7 + 0xc);
  }
  local_4a8 = 0;
  local_4b0 = 0;
  local_4b8 = 1;
  FUN_140122cc6(lVar3,uVar57,local_428,0);
LAB_14927c0d0:
  if ((local_f0 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


