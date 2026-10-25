// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143ba3139 FUN_143ba3139 body=99 status=ok
// SIG undefined FUN_143ba3139(void)

void FUN_143ba3139(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x18);
    do {
      FUN_148544d7f(*(undefined8 *)(puVar4 + -2),*puVar4);
      if (*(longlong *)(puVar4 + -2) != 0) {
        FUN_1400020a8();
      }
      plVar3 = *(longlong **)(puVar4 + -4);
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
      puVar4 = puVar4 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143ba319c FUN_143ba319c body=96 status=ok
// SIG undefined FUN_143ba319c(void)

void FUN_143ba319c(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
  plVar1 = (longlong *)param_1[1];
  plVar2 = *(longlong **)(*plVar1 + -8 + (longlong)(int)plVar1[1] * 0x10);
  *(int *)(plVar1 + 1) = (int)plVar1[1] + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  (**(code **)(*plVar2 + 8))(plVar2,param_1[2]);
  iVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
  if (iVar3 == 1) {
    LOCK();
    *(int *)param_1[3] = *(int *)param_1[3] + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143ba31fc FUN_143ba31fc body=241 status=ok
// SIG undefined FUN_143ba31fc(void)

double * FUN_143ba31fc(double *param_1,undefined8 *param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)*param_2;
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar3 = param_3[2];
  lVar1 = lVar2 + 0x20;
  if (*(longlong *)(lVar2 + 0xc0) != 0) {
    lVar1 = *(longlong *)(lVar2 + 0xc0);
  }
  if ((longlong)*(int *)(lVar2 + 200) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 200) * 0x50;
    do {
      local_50 = dVar3 * *(double *)(lVar1 + 0x48);
      local_58 = dVar5 * *(double *)(lVar1 + 0x40);
      local_60 = dVar4 * *(double *)(lVar1 + 0x38);
      FUN_146bed047(&local_48,lVar1,&local_60);
      dVar3 = local_38 + *(double *)(lVar1 + 0x30);
      dVar5 = local_40 + *(double *)(lVar1 + 0x28);
      dVar4 = local_48 + *(double *)(lVar1 + 0x20);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *param_1 = dVar4;
  param_1[1] = dVar5;
  param_1[2] = dVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba32ee FUN_143ba32ee body=241 status=ok
// SIG undefined FUN_143ba32ee(void)

double * FUN_143ba32ee(double *param_1,undefined8 *param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)*param_2;
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar3 = param_3[2];
  lVar1 = lVar2 + 0x20;
  if (*(longlong *)(lVar2 + 0xc0) != 0) {
    lVar1 = *(longlong *)(lVar2 + 0xc0);
  }
  if ((longlong)*(int *)(lVar2 + 200) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 200) * 0x50;
    do {
      local_50 = dVar3 * *(double *)(lVar1 + 0x48);
      local_58 = dVar5 * *(double *)(lVar1 + 0x40);
      local_60 = dVar4 * *(double *)(lVar1 + 0x38);
      FUN_146bed047(&local_48,lVar1,&local_60);
      dVar3 = local_38 + *(double *)(lVar1 + 0x30);
      dVar5 = local_40 + *(double *)(lVar1 + 0x28);
      dVar4 = local_48 + *(double *)(lVar1 + 0x20);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *param_1 = dVar4;
  param_1[1] = dVar5;
  param_1[2] = dVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba33e0 FUN_143ba33e0 body=91 status=ok
// SIG undefined FUN_143ba33e0(void)

undefined8 FUN_143ba33e0(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  double *pdVar2;
  double dVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(*param_1 + 0x70) + 0x10 + (longlong)*param_2 * 0x48);
  dVar3 = (double)(**(code **)(*plVar1 + 0x20))
                            (plVar1,param_1[1],
                             *(longlong *)
                              (*(longlong *)(*param_1 + 0x70) + 8 + (longlong)*param_2 * 0x48) +
                             0x20);
  pdVar2 = (double *)param_1[2];
  *pdVar2 = *pdVar2 + dVar3;
  return CONCAT71((int7)((ulonglong)pdVar2 >> 8),ABS(dVar3) < 0.99);
}



// FUNCTION 143ba343c FUN_143ba343c body=64 status=ok
// SIG undefined FUN_143ba343c(void)

void FUN_143ba343c(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  double dVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(*param_1 + 0x70) + 0x10 + (longlong)*param_2 * 0x48);
  dVar2 = (double)(**(code **)(*plVar1 + 0x20))
                            (plVar1,param_1[1],
                             *(longlong *)
                              (*(longlong *)(*param_1 + 0x70) + 8 + (longlong)*param_2 * 0x48) +
                             0x20);
  *(double *)param_1[2] = dVar2 + *(double *)param_1[2];
  return;
}



// FUNCTION 143ba347c FUN_143ba347c body=166 status=ok
// SIG undefined FUN_143ba347c(void)

void FUN_143ba347c(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  int *local_70;
  code *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_24 = *param_2;
  local_70 = &local_24;
  lVar2 = *param_1;
  plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x70) + 0x10 + (longlong)local_24 * 0x48);
  local_60 = &local_78;
  local_68 = FUN_143ba3524;
  local_78 = lVar2;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  lVar4 = (longlong)local_24;
  lVar2 = *(longlong *)(lVar2 + 0x70);
  puVar1 = (undefined4 *)(lVar2 + 0x38 + lVar4 * 0x48);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  puVar1 = (undefined4 *)(lVar2 + 0x28 + lVar4 * 0x48);
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  puVar1 = (undefined4 *)(lVar2 + 0x18 + lVar4 * 0x48);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba3524 FUN_143ba3524 body=258 status=ok
// SIG undefined FUN_143ba3524(void)

double * FUN_143ba3524(double *param_1,longlong *param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x70) + 8 + (longlong)*(int *)param_2[1] * 0x48);
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar3 = param_3[2];
  lVar1 = lVar2 + 0x20;
  if (*(longlong *)(lVar2 + 0xc0) != 0) {
    lVar1 = *(longlong *)(lVar2 + 0xc0);
  }
  if ((longlong)*(int *)(lVar2 + 200) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 200) * 0x50;
    do {
      local_50 = dVar3 * *(double *)(lVar1 + 0x48);
      local_58 = dVar5 * *(double *)(lVar1 + 0x40);
      local_60 = dVar4 * *(double *)(lVar1 + 0x38);
      FUN_146bed047(&local_48,lVar1,&local_60);
      dVar3 = local_38 + *(double *)(lVar1 + 0x30);
      dVar5 = local_40 + *(double *)(lVar1 + 0x28);
      dVar4 = local_48 + *(double *)(lVar1 + 0x20);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *param_1 = dVar4;
  param_1[1] = dVar5;
  param_1[2] = dVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba3654 FUN_143ba3654 body=273 status=ok
// SIG undefined FUN_143ba3654(void)

undefined8 FUN_143ba3654(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_148 = DAT_14c8464f0;
  local_158 = (undefined4)DAT_14c8464e0;
  uStack_154 = DAT_14c8464e0._4_4_;
  uStack_150 = (undefined4)DAT_14c8464e8;
  uStack_14c = DAT_14c8464e8._4_4_;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0x3ff0000000000000;
  local_128 = 0xbff0000000000000;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0xffffffffffffffff;
  local_108 = (undefined4)DAT_14c8464e0;
  uStack_104 = DAT_14c8464e0._4_4_;
  uStack_100 = (undefined4)DAT_14c8464e8;
  uStack_fc = DAT_14c8464e8._4_4_;
  local_f8 = DAT_14c8464f0;
  local_f0 = 0;
  local_48 = 0;
  local_40 = 0x200000000;
  plVar1 = *(longlong **)(*(longlong *)(*param_1 + 0x70) + 0x10 + (longlong)*param_2 * 0x48);
  cVar2 = (**(code **)(*plVar1 + 0x28))
                    (plVar1,param_3,
                     *(longlong *)(*(longlong *)(*param_1 + 0x70) + 8 + (longlong)*param_2 * 0x48) +
                     0x20,&local_158);
  uVar3 = (undefined4)local_128;
  uVar4 = (undefined4)((ulonglong)local_128 >> 0x20);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (cVar2 == '\0') {
    uVar3 = 0xffffffff;
    uVar4 = 0x7fefffff;
  }
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return CONCAT44(uVar4,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba3766 FUN_143ba3766 body=241 status=ok
// SIG undefined FUN_143ba3766(void)

double * FUN_143ba3766(double *param_1,undefined8 *param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)*param_2;
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar3 = param_3[2];
  lVar1 = lVar2 + 0x20;
  if (*(longlong *)(lVar2 + 0xc0) != 0) {
    lVar1 = *(longlong *)(lVar2 + 0xc0);
  }
  if ((longlong)*(int *)(lVar2 + 200) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 200) * 0x50;
    do {
      local_50 = dVar3 * *(double *)(lVar1 + 0x48);
      local_58 = dVar5 * *(double *)(lVar1 + 0x40);
      local_60 = dVar4 * *(double *)(lVar1 + 0x38);
      FUN_146bed047(&local_48,lVar1,&local_60);
      dVar3 = local_38 + *(double *)(lVar1 + 0x30);
      dVar5 = local_40 + *(double *)(lVar1 + 0x28);
      dVar4 = local_48 + *(double *)(lVar1 + 0x20);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *param_1 = dVar4;
  param_1[1] = dVar5;
  param_1[2] = dVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba3858 FUN_143ba3858 body=272 status=ok
// SIG undefined FUN_143ba3858(void)

void FUN_143ba3858(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_138 [32];
  longlong local_118;
  char *local_110;
  longlong local_108;
  int *local_100;
  longlong local_f8;
  code *local_f0;
  undefined1 **local_e8;
  char local_dd;
  int local_dc;
  undefined8 local_d8 [20];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_dc = *param_2;
  lVar2 = (longlong)local_dc;
  lVar1 = *(longlong *)(*param_1 + 0x70);
  local_118 = lVar1 + 0x18 + lVar2 * 0x48;
  local_d8[0] = *(undefined8 *)(local_118 + -0x10);
  local_110 = (char *)**(longlong **)(local_118 + -0x18);
  local_f0 = (code *)CONCAT44(local_f0._4_4_,local_dc);
  local_dd = (**(code **)param_1[1])(((undefined8 *)param_1[1])[1],&local_f0,&local_110);
  if (local_dd != '\0') {
    lVar1 = lVar1 + lVar2 * 0x48;
    FUN_1482fde4a(local_d8,*(longlong *)(lVar1 + 8) + 0x20);
    local_110 = &local_dd;
    local_108 = param_1[2];
    local_100 = &local_dc;
    local_f0 = FUN_143ba396a;
    local_f8 = lVar1;
    local_e8 = &local_110;
    (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x38))
              (*(longlong **)(lVar1 + 0x10),&local_f0,local_d8);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba396a FUN_143ba396a body=125 status=ok
// SIG undefined FUN_143ba396a(void)

undefined8 FUN_143ba396a(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = ((undefined8 *)param_1[3])[1];
  local_20 = **(undefined8 **)param_1[3];
  local_24 = *(undefined4 *)param_1[2];
  local_38 = param_2;
  uVar1 = (**(code **)param_1[1])(((undefined8 *)param_1[1])[1],&local_24);
  *(undefined1 *)*param_1 = uVar1;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba39e8 FUN_143ba39e8 body=383 status=ok
// SIG undefined FUN_143ba39e8(void)

void FUN_143ba39e8(longlong *param_1,int *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 *local_120;
  undefined1 *local_118;
  undefined1 local_109;
  undefined4 local_108 [2];
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar2 = *param_2;
  lVar3 = *param_1;
  local_100 = &local_98;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  lStack_90 = 0;
  local_e8 = *param_3;
  uStack_e4 = param_3[1];
  uStack_e0 = param_3[2];
  uStack_dc = param_3[3];
  local_d8 = param_3[4];
  uStack_d4 = param_3[5];
  uStack_d0 = param_3[6];
  uStack_cc = param_3[7];
  local_c8 = param_3[8];
  uStack_c4 = param_3[9];
  uStack_c0 = param_3[10];
  uStack_bc = param_3[0xb];
  local_b8 = *(undefined8 *)(param_3 + 0xc);
  uVar1 = *(undefined8 *)(param_3 + 0xe);
  local_a8 = *(undefined8 *)(param_3 + 0x10);
  uVar6 = (undefined4)local_a8;
  uVar4 = *(undefined8 *)(param_3 + 0x12);
  local_108[0] = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_b0 = uVar1;
  local_a0 = uVar4;
  FUN_14851faee(lVar3,&local_109,iVar2);
  *(undefined8 *)(param_1[1] + 0x90) = uVar4;
  local_128 = uVar1;
  local_120 = local_108;
  local_118 = &local_109;
  FUN_148523cdc(param_1[1],iVar2,&local_e8,uVar6);
  lVar5 = 0x68;
  if (iVar2 < 0x40) {
    if (iVar2 == 4) {
      lVar5 = 0x88;
    }
    else if (iVar2 == 8) {
      lVar5 = 0x78;
    }
  }
  else if (iVar2 == 0x40) {
    lVar5 = 0xe8;
  }
  else if (iVar2 == 0x100) {
    lVar5 = 200;
  }
  FUN_148549856(lVar3 + lVar5,&local_e8);
  if (lStack_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba3b68 FUN_143ba3b68 body=395 status=ok
// SIG undefined FUN_143ba3b68(void)

void FUN_143ba3b68(longlong *param_1,int *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 *local_120;
  undefined1 *local_118;
  undefined1 local_109;
  undefined4 local_108 [2];
  undefined8 local_100;
  undefined8 *puStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar2 = *param_2;
  lVar3 = *param_1;
  puStack_f8 = &local_98;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  lStack_90 = 0;
  local_e8 = *param_3;
  uStack_e4 = param_3[1];
  uStack_e0 = param_3[2];
  uStack_dc = param_3[3];
  local_d8 = param_3[4];
  uStack_d4 = param_3[5];
  uStack_d0 = param_3[6];
  uStack_cc = param_3[7];
  local_c8 = param_3[8];
  uStack_c4 = param_3[9];
  uStack_c0 = param_3[10];
  uStack_bc = param_3[0xb];
  local_b8 = *(undefined8 *)(param_3 + 0xc);
  uVar1 = *(undefined8 *)(param_3 + 0xe);
  local_a8 = *(undefined8 *)(param_3 + 0x10);
  uVar6 = (undefined4)local_a8;
  uVar4 = *(undefined8 *)(param_3 + 0x12);
  local_100 = 0;
  local_f0 = 0;
  local_108[0] = 1;
  local_b0 = uVar1;
  local_a0 = uVar4;
  FUN_14851faee(lVar3,&local_109,iVar2);
  *(undefined8 *)(param_1[1] + 0x90) = uVar4;
  local_128 = uVar1;
  local_120 = local_108;
  local_118 = &local_109;
  FUN_148523cdc(param_1[1],iVar2,&local_e8,uVar6);
  lVar5 = 0x58;
  if (iVar2 < 0x80) {
    if (iVar2 == 0x10) {
      lVar5 = 0xb8;
    }
    else if (iVar2 == 0x20) {
      lVar5 = 0xa8;
    }
  }
  else if (iVar2 == 0x200) {
    lVar5 = 0xd8;
  }
  else if (iVar2 == 0x80) {
    lVar5 = 0x98;
  }
  FUN_148549a30(lVar3 + lVar5,&local_e8);
  if (lStack_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba3cf4 FUN_143ba3cf4 body=445 status=ok
// SIG undefined FUN_143ba3cf4(void)

void FUN_143ba3cf4(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(uint *)*param_1;
  if ((-1 < (int)uVar3) &&
     ((int)uVar3 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) {
    uVar14 = (ulonglong)(uVar3 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(param_2 + 0x148) + (ulonglong)(uVar3 >> 9) * 8) +
                           uVar14 * 2) - 1U) < 0xfffe) {
      lVar13 = param_1[5];
      puVar4 = (undefined4 *)param_1[3];
      puVar5 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)param_1[2];
      lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
      uVar3 = *(uint *)(lVar7 + uVar14 * 0xc);
      lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
      uVar15 = (ulonglong)uVar3 & 0x1ff;
      puVar5[2] = *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18);
      puVar1 = (undefined8 *)(lVar8 + uVar15 * 0x18);
      uVar12 = puVar1[1];
      *puVar5 = *puVar1;
      puVar5[1] = uVar12;
      uVar3 = *(uint *)(lVar7 + 4 + uVar14 * 0xc);
      lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
      uVar15 = (ulonglong)uVar3 & 0x1ff;
      puVar6[2] = *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18);
      puVar1 = (undefined8 *)(lVar8 + uVar15 * 0x18);
      uVar12 = puVar1[1];
      *puVar6 = *puVar1;
      puVar6[1] = uVar12;
      uVar3 = *(uint *)(lVar7 + 8 + uVar14 * 0xc);
      lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
      uVar14 = (ulonglong)uVar3 & 0x1ff;
      *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(lVar7 + 0x10 + uVar14 * 0x18);
      puVar2 = (undefined4 *)(lVar7 + uVar14 * 0x18);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      *puVar4 = *puVar2;
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      if (*(char *)param_1[4] == '\x01') {
        lVar13 = lVar13 + 0x48;
        FUN_146bcb256(lVar13,&local_48,param_1[1]);
        puVar2 = (undefined4 *)param_1[1];
        *(undefined8 *)(puVar2 + 4) = local_38;
        *puVar2 = local_48;
        puVar2[1] = uStack_44;
        puVar2[2] = uStack_40;
        puVar2[3] = uStack_3c;
        FUN_146bcb256(lVar13,&local_48,param_1[2]);
        puVar2 = (undefined4 *)param_1[2];
        *(undefined8 *)(puVar2 + 4) = local_38;
        *puVar2 = local_48;
        puVar2[1] = uStack_44;
        puVar2[2] = uStack_40;
        puVar2[3] = uStack_3c;
        FUN_146bcb256(lVar13,&local_48,param_1[3]);
        puVar2 = (undefined4 *)param_1[3];
        *(undefined8 *)(puVar2 + 4) = local_38;
        *puVar2 = local_48;
        puVar2[1] = uStack_44;
        puVar2[2] = uStack_40;
        puVar2[3] = uStack_3c;
      }
      *(undefined1 *)param_1[6] = 1;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba3eb2 FUN_143ba3eb2 body=95 status=ok
// SIG undefined FUN_143ba3eb2(void)

void FUN_143ba3eb2(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  FUN_145c688c4(param_2,&local_48,1);
  *(undefined4 *)(lVar1 + 0x38) = local_28;
  *(undefined4 *)(lVar1 + 0x3c) = uStack_24;
  *(undefined4 *)(lVar1 + 0x40) = uStack_20;
  *(undefined4 *)(lVar1 + 0x44) = uStack_1c;
  *(undefined4 *)(lVar1 + 0x28) = local_38;
  *(undefined4 *)(lVar1 + 0x2c) = uStack_34;
  *(undefined4 *)(lVar1 + 0x30) = uStack_30;
  *(undefined4 *)(lVar1 + 0x34) = uStack_2c;
  *(undefined4 *)(lVar1 + 0x18) = local_48;
  *(undefined4 *)(lVar1 + 0x1c) = uStack_44;
  *(undefined4 *)(lVar1 + 0x20) = uStack_40;
  *(undefined4 *)(lVar1 + 0x24) = uStack_3c;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba3f12 FUN_143ba3f12 body=72 status=ok
// SIG undefined FUN_143ba3f12(void)

void FUN_143ba3f12(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0xa8) = param_2;
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  FUN_146bee918(lVar1 + 0xa0,0);
  *(ulonglong *)(lVar1 + 0xb0) =
       (ulonglong)
       (uint)(*(int *)(*(longlong *)(lVar1 + 0xa8) + 0x214) +
             *(int *)(*(longlong *)(lVar1 + 0xa8) + 0x218));
  return;
}



// FUNCTION 143ba3f5a FUN_143ba3f5a body=124 status=ok
// SIG undefined FUN_143ba3f5a(void)

undefined8 FUN_143ba3f5a(undefined8 param_1,longlong *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 0x68) != *(int *)(lVar1 + 0x94)) {
    lVar2 = lVar1 + 0x98;
    if (*(longlong *)(lVar1 + 0xa0) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0xa0);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar1 + 0xa8) - 1U & *param_3) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(lVar1 + 0x60) + (longlong)iVar3 * 0x20;
        if (*(uint *)(*(longlong *)(lVar1 + 0x60) + (longlong)iVar3 * 0x20) == *param_3)
        goto LAB_143ba3fc0;
        iVar3 = *(int *)(lVar2 + 0x18);
      } while (iVar3 != -1);
    }
  }
  lVar2 = 0;
LAB_143ba3fc0:
  (**(code **)(**(longlong **)(lVar2 + 8) + 0x20))(*(longlong **)(lVar2 + 8),param_1);
  return param_1;
}



// FUNCTION 143ba3fd6 FUN_143ba3fd6 body=444 status=ok
// SIG undefined FUN_143ba3fd6(void)

undefined8 FUN_143ba3fd6(longlong *param_1,uint *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x68) != *(int *)(lVar2 + 0x94)) {
    lVar7 = lVar2 + 0x98;
    if (*(longlong *)(lVar2 + 0xa0) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0xa0);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar2 + 0xa8) - 1U & *param_2) * 4);
    if (iVar8 != -1) {
      do {
        lVar7 = *(longlong *)(lVar2 + 0x60) + (longlong)iVar8 * 0x20;
        if (*(uint *)(*(longlong *)(lVar2 + 0x60) + (longlong)iVar8 * 0x20) == *param_2)
        goto LAB_143ba405c;
        iVar8 = *(int *)(lVar7 + 0x18);
      } while (iVar8 != -1);
    }
  }
  lVar7 = 0;
LAB_143ba405c:
  plVar3 = *(longlong **)(lVar7 + 8);
  plVar4 = *(longlong **)(lVar7 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)param_1[1];
  if (lVar2 == 0) {
LAB_143ba407d:
    local_d8 = DAT_14c8464f0;
    local_e8 = (undefined4)DAT_14c8464e0;
    uStack_e4 = DAT_14c8464e0._4_4_;
    uStack_e0 = (undefined4)DAT_14c8464e8;
    uStack_dc = DAT_14c8464e8._4_4_;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0x3ff0000000000000;
    local_b8 = 0x47efffffe0000000;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0xffffffffffffffff;
    local_98 = 0;
    local_90 = (undefined4)DAT_14c8464e0;
    uStack_8c = DAT_14c8464e0._4_4_;
    uStack_88 = (undefined4)DAT_14c8464e8;
    uStack_84 = DAT_14c8464e8._4_4_;
    local_80 = DAT_14c8464f0;
    local_78 = (undefined4)DAT_14c8464e0;
    uStack_74 = DAT_14c8464e0._4_4_;
    uStack_70 = (undefined4)DAT_14c8464e8;
    uStack_6c = DAT_14c8464e8._4_4_;
    local_68 = DAT_14c8464f0;
    local_60 = (undefined4)DAT_14c8464e0;
    uStack_5c = DAT_14c8464e0._4_4_;
    uStack_58 = (undefined4)DAT_14c8464e8;
    uStack_54 = DAT_14c8464e8._4_4_;
    local_50 = DAT_14c8464f0;
    cVar5 = (**(code **)(*plVar3 + 0x28))(plVar3,param_1[2],&local_e8,*(undefined8 *)param_1[3]);
    if (cVar5 != '\0') {
      uVar9 = (undefined4)local_b8;
      uVar10 = (undefined4)((ulonglong)local_b8 >> 0x20);
      goto LAB_143ba411e;
    }
  }
  else {
    uVar6 = (**(code **)(*plVar3 + 0x18))(plVar3);
    cVar5 = FUN_148451fcc(lVar2,uVar6);
    if (cVar5 != '\0') goto LAB_143ba407d;
  }
  uVar9 = 0xffffffff;
  uVar10 = 0x7fefffff;
LAB_143ba411e:
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
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar10,uVar9);
}



// FUNCTION 143ba4194 FUN_143ba4194 body=65 status=ok
// SIG undefined FUN_143ba4194(void)

void FUN_143ba4194(undefined8 *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar2 = (char *)param_1[2];
  if (*pcVar2 == '\x01') {
    pcVar3 = (char *)FUN_148523032(*param_1);
    cVar1 = *pcVar3;
    pcVar3 = (char *)FUN_148523032(param_1[1],param_2);
    bVar4 = cVar1 == *pcVar3;
  }
  else {
    bVar4 = false;
  }
  *pcVar2 = bVar4;
  return;
}



// FUNCTION 143ba41d6 FUN_143ba41d6 body=83 status=ok
// SIG undefined FUN_143ba41d6(void)

void FUN_143ba41d6(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  local_10 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_18,5);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba422a FUN_143ba422a body=282 status=ok
// SIG undefined FUN_143ba422a(void)

undefined8 * FUN_143ba422a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143ba03a5);
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



// FUNCTION 143ba4344 FUN_143ba4344 body=173 status=ok
// SIG undefined FUN_143ba4344(void)

void FUN_143ba4344(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    local_28 = 0;
    local_20 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_28,5);
  }
  else {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
    local_28 = 0;
    local_20 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_28,5);
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba4450 FUN_143ba4450 body=12 status=ok
// SIG undefined FUN_143ba4450(void)

void FUN_143ba4450(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ba4459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ba445c FUN_143ba445c body=29 status=ok
// SIG undefined FUN_143ba445c(void)

undefined8 FUN_143ba445c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba44d2 FUN_143ba44d2 body=381 status=ok
// SIG undefined FUN_143ba44d2(void)

void FUN_143ba44d2(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar12 = param_1[1];
  lVar14 = *(longlong *)(*param_1 + 0x10);
  lVar13 = (longlong)*param_2 * 0x38;
  dVar3 = *(double *)(lVar14 + lVar13);
  dVar4 = *(double *)(lVar14 + 8 + lVar13);
  dVar5 = *(double *)(lVar14 + 0x10 + lVar13);
  dVar6 = *(double *)(lVar14 + 0x18 + lVar13);
  dVar7 = *(double *)(lVar14 + 0x20 + lVar13);
  dVar8 = *(double *)(lVar14 + 0x28 + lVar13);
  dVar9 = *(double *)(lVar14 + 0x30 + lVar13);
  uVar1 = *(undefined4 *)(lVar12 + 0x30);
  uVar2 = *(undefined4 *)(lVar12 + 0x34);
  uVar10 = *(undefined4 *)(lVar12 + 0x3c);
  iVar11 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar11 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar11 + 1U) {
    FUN_1485156d2(param_3,iVar11);
  }
  dVar6 = dVar6 * dVar9;
  dVar7 = dVar7 * dVar9;
  dVar8 = dVar8 * dVar9;
  lVar12 = *param_3;
  lVar14 = (longlong)iVar11 * 0x40;
  *(double *)(lVar12 + lVar14) = dVar3 - dVar6;
  *(double *)(lVar12 + 8 + lVar14) = dVar4 - dVar7;
  *(double *)(lVar12 + 0x10 + lVar14) = dVar5 - dVar8;
  *(double *)(lVar12 + 0x18 + lVar14) = dVar6 + dVar3;
  *(double *)(lVar12 + 0x20 + lVar14) = dVar7 + dVar4;
  *(double *)(lVar12 + 0x28 + lVar14) = dVar8 + dVar5;
  *(undefined4 *)(lVar12 + 0x30 + lVar14) = uVar10;
  *(undefined4 *)(lVar12 + 0x34 + lVar14) = uVar2;
  *(undefined4 *)(lVar12 + 0x38 + lVar14) = uVar1;
  return;
}



// FUNCTION 143ba4650 FUN_143ba4650 body=586 status=ok
// SIG undefined FUN_143ba4650(void)

void FUN_143ba4650(undefined8 *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78 [3];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar5 = (undefined8 *)((longlong)*param_2 * 0x48 + *(longlong *)*param_1);
  puVar6 = local_78;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_146baf581(&local_90,local_78,&local_60,&local_48);
  local_98 = local_78[2];
  local_a8 = local_78[0];
  uStack_a0 = local_78[1];
  local_108 = CONCAT44(uStack_8c,local_90);
  uStack_100 = CONCAT44(uStack_84,uStack_88);
  local_b8 = local_80;
  uVar2 = *(undefined4 *)(param_1[1] + 0x3c);
  local_d8 = local_50;
  local_e8 = local_60;
  uStack_e4 = uStack_5c;
  uStack_e0 = uStack_58;
  uStack_dc = uStack_54;
  local_f8 = local_80;
  local_118 = local_38;
  local_128 = local_48;
  uStack_120 = uStack_40;
  local_148 = local_90;
  uStack_144 = uStack_8c;
  uStack_140 = uStack_88;
  uStack_13c = uStack_84;
  local_138 = local_80;
  lVar4 = *(longlong *)(param_1[1] + 0x40);
  local_c8 = local_108;
  uStack_c0 = uStack_100;
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  iVar3 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
    FUN_14854c7dc(param_3,iVar3);
  }
  lVar1 = *param_3 + (longlong)iVar3 * 0xe0;
  *(longlong *)(*param_3 + (longlong)iVar3 * 0xe0) = lVar4;
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  *(undefined8 *)(lVar1 + 0x18) = local_98;
  *(undefined8 *)(lVar1 + 8) = local_a8;
  *(undefined8 *)(lVar1 + 0x10) = uStack_a0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = local_c8;
  *(undefined8 *)(lVar1 + 0x38) = uStack_c0;
  *(undefined8 *)(lVar1 + 0x40) = local_b8;
  *(undefined4 *)(lVar1 + 0x48) = uVar2;
  *(ulonglong *)(lVar1 + 0x50) = CONCAT44(uStack_e4,local_e8);
  *(ulonglong *)(lVar1 + 0x58) = CONCAT44(uStack_dc,uStack_e0);
  *(undefined8 *)(lVar1 + 0x60) = local_d8;
  *(undefined8 *)(lVar1 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x78) = local_108;
  *(undefined8 *)(lVar1 + 0x80) = uStack_100;
  *(undefined8 *)(lVar1 + 0x88) = local_f8;
  *(undefined4 *)(lVar1 + 0x90) = uVar2;
  *(undefined8 *)(lVar1 + 0x98) = local_128;
  *(undefined8 *)(lVar1 + 0xa0) = uStack_120;
  *(undefined8 *)(lVar1 + 0xa8) = local_118;
  *(undefined8 *)(lVar1 + 0xb0) = 0x3ff0000000000000;
  *(undefined8 *)(lVar1 + 0xb8) = 0x3ff0000000000000;
  *(undefined8 *)(lVar1 + 0xd0) = local_138;
  *(undefined4 *)(lVar1 + 0xc0) = local_148;
  *(undefined4 *)(lVar1 + 0xc4) = uStack_144;
  *(undefined4 *)(lVar1 + 200) = uStack_140;
  *(undefined4 *)(lVar1 + 0xcc) = uStack_13c;
  *(undefined4 *)(lVar1 + 0xd8) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba489c FUN_143ba489c body=194 status=ok
// SIG undefined FUN_143ba489c(void)

void FUN_143ba489c(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(undefined8 *)(*(longlong *)(*param_1 + 0x20) + 0x10 + (longlong)*param_2 * 0x18);
  puVar1 = (undefined4 *)(*(longlong *)(*param_1 + 0x20) + (longlong)*param_2 * 0x18);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  lVar7 = param_1[1];
  uVar2 = *(undefined4 *)(lVar7 + 0x30);
  uVar3 = *(undefined4 *)(lVar7 + 0x38);
  uVar4 = *(undefined4 *)(lVar7 + 0x3c);
  iVar5 = (int)param_3[1];
  lVar7 = (longlong)iVar5;
  *(uint *)(param_3 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
    FUN_14854c870(param_3,iVar5);
  }
  lVar6 = *param_3;
  *(undefined8 *)(lVar6 + 0x10 + lVar7 * 0x28) = local_48;
  puVar1 = (undefined4 *)(lVar6 + lVar7 * 0x28);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  *(undefined4 *)(lVar6 + 0x18 + lVar7 * 0x28) = uVar4;
  *(undefined4 *)(lVar6 + 0x1c + lVar7 * 0x28) = uVar3;
  *(undefined4 *)(lVar6 + 0x20 + lVar7 * 0x28) = uVar2;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba4968 FUN_143ba4968 body=190 status=ok
// SIG undefined FUN_143ba4968(void)

void FUN_143ba4968(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined1 local_60;
  code *local_50;
  undefined8 *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = &local_20;
  local_18 = *param_1;
  local_28 = param_1[5];
  local_68 = *(undefined8 *)param_1[6];
  local_70 = &local_30;
  local_30 = &DAT_143ba4a28;
  local_38 = param_1[4];
  local_78 = &local_40;
  local_40 = &DAT_143ba4a2a;
  local_50 = FUN_143ba4a2c;
  local_60 = 0;
  local_20 = param_3;
  FUN_14838864f(param_1[1],param_1[2],*(undefined8 *)param_1[3]);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba4a2c FUN_143ba4a2c body=191 status=ok
// SIG undefined FUN_143ba4a2c(void)

void FUN_143ba4a2c(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar6 = (longlong *)*param_1;
  lVar8 = *(longlong *)param_1[1];
  uVar2 = *(undefined4 *)(lVar8 + 0xb4);
  uVar3 = *(undefined4 *)(lVar8 + 0xb8);
  local_48 = *(undefined8 *)(param_3 + 4);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  uVar4 = *(undefined4 *)(lVar8 + 0xc4);
  iVar5 = (int)plVar6[1];
  lVar8 = (longlong)iVar5;
  *(uint *)(plVar6 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
    FUN_14854c870(plVar6,iVar5);
  }
  lVar7 = *plVar6;
  *(undefined8 *)(lVar7 + 0x10 + lVar8 * 0x28) = local_48;
  puVar1 = (undefined4 *)(lVar7 + lVar8 * 0x28);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  *(undefined4 *)(lVar7 + 0x18 + lVar8 * 0x28) = uVar4;
  *(undefined4 *)(lVar7 + 0x1c + lVar8 * 0x28) = uVar2;
  *(undefined4 *)(lVar7 + 0x20 + lVar8 * 0x28) = uVar3;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba4aec FUN_143ba4aec body=190 status=ok
// SIG undefined FUN_143ba4aec(void)

void FUN_143ba4aec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  code **local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = &local_20;
  local_18 = *param_1;
  local_28 = param_1[5];
  local_68 = *(undefined8 *)param_1[6];
  local_70 = &local_30;
  local_30 = &DAT_143ba4a28;
  local_78 = &local_40;
  local_40 = FUN_143ba4bac;
  local_48 = param_1[4];
  local_50 = &DAT_143ba4d20;
  local_60 = 0;
  local_20 = param_3;
  FUN_14838864f(param_1[1],param_1[2],*(undefined8 *)param_1[3]);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba4bac FUN_143ba4bac body=371 status=ok
// SIG undefined FUN_143ba4bac(void)

void FUN_143ba4bac(longlong *param_1,undefined8 param_2,double *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  
  plVar12 = (longlong *)*param_1;
  lVar13 = *(longlong *)param_1[1];
  uVar1 = *(undefined4 *)(lVar13 + 0xb0);
  uVar2 = *(undefined4 *)(lVar13 + 0xb8);
  dVar3 = param_3[6];
  dVar4 = param_3[5];
  dVar5 = param_3[4];
  dVar6 = param_3[3];
  dVar7 = param_3[2];
  dVar8 = *param_3;
  dVar9 = param_3[1];
  uVar10 = *(undefined4 *)(lVar13 + 0xc0);
  iVar11 = (int)plVar12[1];
  *(uint *)(plVar12 + 1) = iVar11 + 1U;
  if (*(uint *)((longlong)plVar12 + 0xc) < iVar11 + 1U) {
    FUN_1485156d2(plVar12,iVar11);
  }
  lVar13 = *plVar12;
  lVar14 = (longlong)iVar11 * 0x40;
  *(double *)(lVar13 + lVar14) = dVar8 - dVar6 * dVar3;
  *(double *)(lVar13 + 8 + lVar14) = dVar9 - dVar5 * dVar3;
  *(double *)(lVar13 + 0x10 + lVar14) = dVar7 - dVar4 * dVar3;
  *(double *)(lVar13 + 0x18 + lVar14) = dVar6 * dVar3 + dVar8;
  *(double *)(lVar13 + 0x20 + lVar14) = dVar5 * dVar3 + dVar9;
  *(double *)(lVar13 + 0x28 + lVar14) = dVar4 * dVar3 + dVar7;
  *(undefined4 *)(lVar13 + 0x30 + lVar14) = uVar10;
  *(undefined4 *)(lVar13 + 0x34 + lVar14) = uVar1;
  *(undefined4 *)(lVar13 + 0x38 + lVar14) = uVar2;
  return;
}



// FUNCTION 143ba4d22 FUN_143ba4d22 body=190 status=ok
// SIG undefined FUN_143ba4d22(void)

void FUN_143ba4d22(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined **local_78;
  code **local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = *param_1;
  local_28 = &local_20;
  local_68 = *(undefined8 *)param_1[6];
  local_70 = &local_30;
  local_30 = FUN_143ba4de2;
  local_38 = param_1[5];
  local_78 = &local_40;
  local_40 = &DAT_143ba4a2a;
  local_48 = param_1[4];
  local_50 = &DAT_143ba4d20;
  local_60 = 0;
  local_18 = param_3;
  FUN_14838864f(param_1[1],param_1[2],*(undefined8 *)param_1[3]);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba4de2 FUN_143ba4de2 body=571 status=ok
// SIG undefined FUN_143ba4de2(void)

void FUN_143ba4de2(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_146baf581(&local_40,param_3,param_3 + 3,param_3 + 6);
  lVar4 = *(longlong *)*param_1;
  local_48 = param_3[2];
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = local_30;
  local_b8 = CONCAT44(uStack_3c,local_40);
  uStack_b0 = CONCAT44(uStack_34,uStack_38);
  uVar2 = *(undefined4 *)(lVar4 + 0xbc);
  local_88 = param_3[5];
  local_98 = *(undefined4 *)(param_3 + 3);
  uStack_94 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_90 = *(undefined4 *)(param_3 + 4);
  uStack_8c = *(undefined4 *)((longlong)param_3 + 0x24);
  local_a8 = local_30;
  local_c8 = param_3[8];
  local_d8 = param_3[6];
  uStack_d0 = param_3[7];
  local_f8 = local_40;
  uStack_f4 = uStack_3c;
  uStack_f0 = uStack_38;
  uStack_ec = uStack_34;
  local_e8 = local_30;
  plVar5 = (longlong *)param_1[1];
  plVar6 = (longlong *)(lVar4 + 0xe8);
  if (*(char *)(lVar4 + 0xae) == '\0') {
    plVar6 = (longlong *)(lVar4 + 0xd0);
  }
  lVar4 = *plVar6;
  local_78 = local_b8;
  uStack_70 = uStack_b0;
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  iVar3 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
    FUN_14854c7dc(plVar5,iVar3);
  }
  lVar1 = *plVar5 + (longlong)iVar3 * 0xe0;
  *(longlong *)(*plVar5 + (longlong)iVar3 * 0xe0) = lVar4;
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  *(undefined8 *)(lVar1 + 0x18) = local_48;
  *(undefined8 *)(lVar1 + 8) = local_58;
  *(undefined8 *)(lVar1 + 0x10) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = local_78;
  *(undefined8 *)(lVar1 + 0x38) = uStack_70;
  *(undefined8 *)(lVar1 + 0x40) = local_68;
  *(undefined4 *)(lVar1 + 0x48) = uVar2;
  *(ulonglong *)(lVar1 + 0x50) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar1 + 0x58) = CONCAT44(uStack_8c,uStack_90);
  *(undefined8 *)(lVar1 + 0x60) = local_88;
  *(undefined8 *)(lVar1 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x78) = local_b8;
  *(undefined8 *)(lVar1 + 0x80) = uStack_b0;
  *(undefined8 *)(lVar1 + 0x88) = local_a8;
  *(undefined4 *)(lVar1 + 0x90) = uVar2;
  *(undefined8 *)(lVar1 + 0x98) = local_d8;
  *(undefined8 *)(lVar1 + 0xa0) = uStack_d0;
  *(undefined8 *)(lVar1 + 0xa8) = local_c8;
  *(undefined8 *)(lVar1 + 0xb0) = 0x3ff0000000000000;
  *(undefined8 *)(lVar1 + 0xb8) = 0x3ff0000000000000;
  *(undefined8 *)(lVar1 + 0xd0) = local_e8;
  *(undefined4 *)(lVar1 + 0xc0) = local_f8;
  *(undefined4 *)(lVar1 + 0xc4) = uStack_f4;
  *(undefined4 *)(lVar1 + 200) = uStack_f0;
  *(undefined4 *)(lVar1 + 0xcc) = uStack_ec;
  *(undefined4 *)(lVar1 + 0xd8) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba501e FUN_143ba501e body=176 status=ok
// SIG undefined FUN_143ba501e(void)

void FUN_143ba501e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined8 local_60;
  undefined1 local_58;
  code *local_48;
  undefined8 *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = &local_18;
  local_10 = *param_1;
  local_20 = param_1[4];
  local_60 = *(undefined8 *)param_1[5];
  local_68 = &local_28;
  local_28 = &DAT_143ba4a28;
  local_30 = param_1[3];
  local_38 = &DAT_143ba4a2a;
  local_48 = FUN_143ba50d0;
  local_58 = 0;
  local_18 = param_3;
  FUN_148388444(param_1[1],param_1[2]);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba50d0 FUN_143ba50d0 body=191 status=ok
// SIG undefined FUN_143ba50d0(void)

void FUN_143ba50d0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar6 = (longlong *)*param_1;
  lVar8 = *(longlong *)param_1[1];
  uVar2 = *(undefined4 *)(lVar8 + 0xb4);
  uVar3 = *(undefined4 *)(lVar8 + 0xb8);
  local_48 = *(undefined8 *)(param_3 + 4);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  uVar4 = *(undefined4 *)(lVar8 + 0xc4);
  iVar5 = (int)plVar6[1];
  lVar8 = (longlong)iVar5;
  *(uint *)(plVar6 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
    FUN_14854c870(plVar6,iVar5);
  }
  lVar7 = *plVar6;
  *(undefined8 *)(lVar7 + 0x10 + lVar8 * 0x28) = local_48;
  puVar1 = (undefined4 *)(lVar7 + lVar8 * 0x28);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  *(undefined4 *)(lVar7 + 0x18 + lVar8 * 0x28) = uVar4;
  *(undefined4 *)(lVar7 + 0x1c + lVar8 * 0x28) = uVar2;
  *(undefined4 *)(lVar7 + 0x20 + lVar8 * 0x28) = uVar3;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba5190 FUN_143ba5190 body=176 status=ok
// SIG undefined FUN_143ba5190(void)

void FUN_143ba5190(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 *local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = &local_18;
  local_10 = *param_1;
  local_20 = param_1[4];
  local_60 = *(undefined8 *)param_1[5];
  local_68 = &local_28;
  local_28 = &DAT_143ba4a28;
  local_38 = FUN_143ba5242;
  local_40 = param_1[3];
  local_48 = &DAT_143ba4d20;
  local_58 = 0;
  local_18 = param_3;
  FUN_148388444(param_1[1],param_1[2]);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba5242 FUN_143ba5242 body=371 status=ok
// SIG undefined FUN_143ba5242(void)

void FUN_143ba5242(longlong *param_1,undefined8 param_2,double *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  
  plVar12 = (longlong *)*param_1;
  lVar13 = *(longlong *)param_1[1];
  uVar1 = *(undefined4 *)(lVar13 + 0xb0);
  uVar2 = *(undefined4 *)(lVar13 + 0xb8);
  dVar3 = param_3[6];
  dVar4 = param_3[5];
  dVar5 = param_3[4];
  dVar6 = param_3[3];
  dVar7 = param_3[2];
  dVar8 = *param_3;
  dVar9 = param_3[1];
  uVar10 = *(undefined4 *)(lVar13 + 0xc0);
  iVar11 = (int)plVar12[1];
  *(uint *)(plVar12 + 1) = iVar11 + 1U;
  if (*(uint *)((longlong)plVar12 + 0xc) < iVar11 + 1U) {
    FUN_1485156d2(plVar12,iVar11);
  }
  lVar13 = *plVar12;
  lVar14 = (longlong)iVar11 * 0x40;
  *(double *)(lVar13 + lVar14) = dVar8 - dVar6 * dVar3;
  *(double *)(lVar13 + 8 + lVar14) = dVar9 - dVar5 * dVar3;
  *(double *)(lVar13 + 0x10 + lVar14) = dVar7 - dVar4 * dVar3;
  *(double *)(lVar13 + 0x18 + lVar14) = dVar6 * dVar3 + dVar8;
  *(double *)(lVar13 + 0x20 + lVar14) = dVar5 * dVar3 + dVar9;
  *(double *)(lVar13 + 0x28 + lVar14) = dVar4 * dVar3 + dVar7;
  *(undefined4 *)(lVar13 + 0x30 + lVar14) = uVar10;
  *(undefined4 *)(lVar13 + 0x34 + lVar14) = uVar1;
  *(undefined4 *)(lVar13 + 0x38 + lVar14) = uVar2;
  return;
}



// FUNCTION 143ba53b6 FUN_143ba53b6 body=176 status=ok
// SIG undefined FUN_143ba53b6(void)

void FUN_143ba53b6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  code **local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined *local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_18 = *param_1;
  local_20 = &local_18;
  local_60 = *(undefined8 *)param_1[5];
  local_68 = &local_28;
  local_28 = FUN_143ba5468;
  local_30 = param_1[4];
  local_38 = &DAT_143ba4a2a;
  local_40 = param_1[3];
  local_48 = &DAT_143ba4d20;
  local_58 = 0;
  local_10 = param_3;
  FUN_148388444(param_1[1],param_1[2]);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba5468 FUN_143ba5468 body=571 status=ok
// SIG undefined FUN_143ba5468(void)

void FUN_143ba5468(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_146baf581(&local_40,param_3,param_3 + 3,param_3 + 6);
  lVar4 = *(longlong *)*param_1;
  local_48 = param_3[2];
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_68 = local_30;
  local_b8 = CONCAT44(uStack_3c,local_40);
  uStack_b0 = CONCAT44(uStack_34,uStack_38);
  uVar2 = *(undefined4 *)(lVar4 + 0xbc);
  local_88 = param_3[5];
  local_98 = *(undefined4 *)(param_3 + 3);
  uStack_94 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_90 = *(undefined4 *)(param_3 + 4);
  uStack_8c = *(undefined4 *)((longlong)param_3 + 0x24);
  local_a8 = local_30;
  local_c8 = param_3[8];
  local_d8 = param_3[6];
  uStack_d0 = param_3[7];
  local_f8 = local_40;
  uStack_f4 = uStack_3c;
  uStack_f0 = uStack_38;
  uStack_ec = uStack_34;
  local_e8 = local_30;
  plVar5 = (longlong *)param_1[1];
  plVar6 = (longlong *)(lVar4 + 0xe8);
  if (*(char *)(lVar4 + 0xae) == '\0') {
    plVar6 = (longlong *)(lVar4 + 0xd0);
  }
  lVar4 = *plVar6;
  local_78 = local_b8;
  uStack_70 = uStack_b0;
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  iVar3 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
    FUN_14854c7dc(plVar5,iVar3);
  }
  lVar1 = *plVar5 + (longlong)iVar3 * 0xe0;
  *(longlong *)(*plVar5 + (longlong)iVar3 * 0xe0) = lVar4;
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  *(undefined8 *)(lVar1 + 0x18) = local_48;
  *(undefined8 *)(lVar1 + 8) = local_58;
  *(undefined8 *)(lVar1 + 0x10) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = local_78;
  *(undefined8 *)(lVar1 + 0x38) = uStack_70;
  *(undefined8 *)(lVar1 + 0x40) = local_68;
  *(undefined4 *)(lVar1 + 0x48) = uVar2;
  *(ulonglong *)(lVar1 + 0x50) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar1 + 0x58) = CONCAT44(uStack_8c,uStack_90);
  *(undefined8 *)(lVar1 + 0x60) = local_88;
  *(undefined8 *)(lVar1 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x78) = local_b8;
  *(undefined8 *)(lVar1 + 0x80) = uStack_b0;
  *(undefined8 *)(lVar1 + 0x88) = local_a8;
  *(undefined4 *)(lVar1 + 0x90) = uVar2;
  *(undefined8 *)(lVar1 + 0x98) = local_d8;
  *(undefined8 *)(lVar1 + 0xa0) = uStack_d0;
  *(undefined8 *)(lVar1 + 0xa8) = local_c8;
  *(undefined8 *)(lVar1 + 0xb0) = 0x3ff0000000000000;
  *(undefined8 *)(lVar1 + 0xb8) = 0x3ff0000000000000;
  *(undefined8 *)(lVar1 + 0xd0) = local_e8;
  *(undefined4 *)(lVar1 + 0xc0) = local_f8;
  *(undefined4 *)(lVar1 + 0xc4) = uStack_f4;
  *(undefined4 *)(lVar1 + 200) = uStack_f0;
  *(undefined4 *)(lVar1 + 0xcc) = uStack_ec;
  *(undefined4 *)(lVar1 + 0xd8) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba56a4 FUN_143ba56a4 body=176 status=ok
// SIG undefined FUN_143ba56a4(void)

void FUN_143ba56a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined8 local_60;
  undefined1 local_58;
  code *local_48;
  undefined8 *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = &local_18;
  local_10 = *param_1;
  local_20 = param_1[4];
  local_60 = *(undefined8 *)param_1[5];
  local_68 = &local_28;
  local_28 = &DAT_143ba4a28;
  local_30 = param_1[3];
  local_38 = &DAT_143ba4a2a;
  local_48 = FUN_143ba5756;
  local_58 = 0;
  local_18 = param_3;
  FUN_148388444(*(undefined8 *)param_1[1],param_1[2]);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba5756 FUN_143ba5756 body=191 status=ok
// SIG undefined FUN_143ba5756(void)

void FUN_143ba5756(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar6 = (longlong *)*param_1;
  lVar8 = *(longlong *)param_1[1];
  uVar2 = *(undefined4 *)(lVar8 + 0xb4);
  uVar3 = *(undefined4 *)(lVar8 + 0xb8);
  local_48 = *(undefined8 *)(param_3 + 4);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  uVar4 = *(undefined4 *)(lVar8 + 0xc0);
  iVar5 = (int)plVar6[1];
  lVar8 = (longlong)iVar5;
  *(uint *)(plVar6 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar6 + 0xc) < iVar5 + 1U) {
    FUN_14854c870(plVar6,iVar5);
  }
  lVar7 = *plVar6;
  *(undefined8 *)(lVar7 + 0x10 + lVar8 * 0x28) = local_48;
  puVar1 = (undefined4 *)(lVar7 + lVar8 * 0x28);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  *(undefined4 *)(lVar7 + 0x18 + lVar8 * 0x28) = uVar4;
  *(undefined4 *)(lVar7 + 0x1c + lVar8 * 0x28) = uVar2;
  *(undefined4 *)(lVar7 + 0x20 + lVar8 * 0x28) = uVar3;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba5816 FUN_143ba5816 body=408 status=ok
// SIG undefined FUN_143ba5816(void)

void FUN_143ba5816(longlong *param_1,uint *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar7 = (longlong *)*param_1;
  if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
    uVar5 = *param_2;
    plVar9 = plVar7 + 7;
    if ((longlong *)plVar7[8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar7[8];
    }
    iVar12 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar7[9] - 1U & uVar5) * 4);
    if (iVar12 != -1) {
      do {
        if (*(uint *)(*plVar7 + (longlong)iVar12 * 0xc) == uVar5) {
          lVar8 = *(longlong *)(param_1[1] + 0x10);
          uVar10 = *(ulonglong *)
                    (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(uVar5 >> 9) * 8)
                    + (ulonglong)((uVar5 & 0x1ff) << 4));
          lVar11 = *(longlong *)(lVar8 + (uVar10 >> 9 & 0x7fffff) * 8);
          local_68 = *(undefined8 *)(lVar11 + 0x10 + (uVar10 & 0x1ff) * 0x18);
          puVar1 = (undefined8 *)(lVar11 + (uVar10 & 0x1ff) * 0x18);
          local_78 = *puVar1;
          uStack_70 = puVar1[1];
          lVar8 = *(longlong *)(lVar8 + (uVar10 >> 0x29) * 8);
          uVar10 = uVar10 >> 0x20 & 0x1ff;
          uStack_50 = *(undefined8 *)(lVar8 + 0x10 + uVar10 * 0x18);
          puVar2 = (undefined4 *)(lVar8 + uVar10 * 0x18);
          uStack_60 = *puVar2;
          uStack_5c = puVar2[1];
          uStack_58 = puVar2[2];
          uStack_54 = puVar2[3];
          lVar8 = *(longlong *)param_1[2];
          uVar3 = *(undefined4 *)(lVar8 + 0xb0);
          uVar4 = *(undefined4 *)(lVar8 + 0xb8);
          uVar6 = *(undefined4 *)(lVar8 + 200);
          iVar12 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar12 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar12 + 1U) {
            FUN_1485156d2(param_3,iVar12);
          }
          lVar8 = *param_3;
          lVar11 = (longlong)iVar12 * 0x40;
          puVar2 = (undefined4 *)(lVar8 + 0x20 + lVar11);
          *puVar2 = uStack_58;
          puVar2[1] = uStack_54;
          puVar2[2] = (undefined4)uStack_50;
          puVar2[3] = uStack_50._4_4_;
          puVar2 = (undefined4 *)(lVar8 + 0x10 + lVar11);
          *puVar2 = (undefined4)local_68;
          puVar2[1] = local_68._4_4_;
          puVar2[2] = uStack_60;
          puVar2[3] = uStack_5c;
          puVar2 = (undefined4 *)(lVar8 + lVar11);
          *puVar2 = (undefined4)local_78;
          puVar2[1] = local_78._4_4_;
          puVar2[2] = (undefined4)uStack_70;
          puVar2[3] = uStack_70._4_4_;
          *(undefined4 *)(lVar8 + 0x30 + lVar11) = uVar6;
          *(undefined4 *)(lVar8 + 0x34 + lVar11) = uVar3;
          *(undefined4 *)(lVar8 + 0x38 + lVar11) = uVar4;
          break;
        }
        iVar12 = *(int *)(*plVar7 + (longlong)iVar12 * 0xc + 4);
      } while (iVar12 != -1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ba59b0 FUN_143ba59b0 body=287 status=ok
// SIG undefined FUN_143ba59b0(void)

void FUN_143ba59b0(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = param_1[3];
  plVar7 = (longlong *)
           (**(code **)(**(longlong **)(lVar4 + 0x60) + 0x38))
                     (*(longlong **)(lVar4 + 0x60),*param_2);
  lVar6 = plVar7[1];
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x58) + 0x10) +
           (ulonglong)(*(uint *)*plVar7 >> 9) * 8);
  uVar9 = (ulonglong)(*(uint *)*plVar7 & 0x1ff);
  local_48 = *(undefined8 *)(lVar5 + 0x10 + uVar9 * 0x18);
  puVar1 = (undefined4 *)(lVar5 + uVar9 * 0x18);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  if (1 < (int)lVar6) {
    uVar9 = 0;
    do {
      uVar3 = *(uint *)(*plVar7 + 4 + uVar9 * 4);
      uVar9 = uVar9 + 1;
      lVar5 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x58) + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
      uVar8 = (ulonglong)(uVar3 & 0x1ff);
      local_68 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
      puVar2 = (undefined8 *)(lVar5 + uVar8 * 0x18);
      local_78 = *puVar2;
      uStack_70 = puVar2[1];
      local_88 = *(undefined4 *)(param_1 + 1);
      local_80 = 0;
      FUN_1484122ca(param_1[2],&local_58,&local_78,*param_1);
      local_48 = local_68;
      local_58 = (undefined4)local_78;
      uStack_54 = local_78._4_4_;
      uStack_50 = (undefined4)uStack_70;
      uStack_4c = uStack_70._4_4_;
    } while ((int)lVar6 - 1 != uVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba5ad0 FUN_143ba5ad0 body=70 status=ok
// SIG undefined FUN_143ba5ad0(void)

undefined8 * FUN_143ba5ad0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14af17f40;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143ba5b1c FUN_143ba5b1c body=29 status=ok
// SIG undefined FUN_143ba5b1c(void)

void FUN_143ba5b1c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ba5b3a FUN_143ba5b3a body=29 status=ok
// SIG undefined FUN_143ba5b3a(void)

undefined8 FUN_143ba5b3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba5b90 FUN_143ba5b90 body=29 status=ok
// SIG undefined FUN_143ba5b90(void)

undefined8 FUN_143ba5b90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba5be6 FUN_143ba5be6 body=29 status=ok
// SIG undefined FUN_143ba5be6(void)

undefined8 FUN_143ba5be6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba5c3c FUN_143ba5c3c body=29 status=ok
// SIG undefined FUN_143ba5c3c(void)

undefined8 FUN_143ba5c3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba5c92 FUN_143ba5c92 body=29 status=ok
// SIG undefined FUN_143ba5c92(void)

undefined8 FUN_143ba5c92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba5ce8 FUN_143ba5ce8 body=29 status=ok
// SIG undefined FUN_143ba5ce8(void)

undefined8 FUN_143ba5ce8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba5d3e FUN_143ba5d3e body=29 status=ok
// SIG undefined FUN_143ba5d3e(void)

undefined8 FUN_143ba5d3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba5d6c FUN_143ba5d6c body=68 status=ok
// SIG undefined FUN_143ba5d6c(void)

void FUN_143ba5d6c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x150,0x10);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14af18170;
  memcpy(puVar1 + 2,(void *)(param_1 + 0x10),0x140);
  return;
}



// FUNCTION 143ba5db6 FUN_143ba5db6 body=29 status=ok
// SIG undefined FUN_143ba5db6(void)

void FUN_143ba5db6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ba5dd4 FUN_143ba5dd4 body=29 status=ok
// SIG undefined FUN_143ba5dd4(void)

undefined8 FUN_143ba5dd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba5df2 FUN_143ba5df2 body=296 status=ok
// SIG undefined FUN_143ba5df2(void)

undefined1 (*) [16] FUN_143ba5df2(undefined1 (*param_1) [16],longlong *param_2,double *param_3)

{
  double dVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar2 = *param_2;
  dVar9 = *param_3 * *(double *)(lVar2 + 0x240);
  dVar10 = param_3[1] * *(double *)(lVar2 + 0x248);
  dVar8 = param_3[2] * *(double *)(lVar2 + 0x250);
  dVar5 = *(double *)(lVar2 + 0x200);
  dVar6 = *(double *)(lVar2 + 0x208);
  dVar7 = *(double *)(lVar2 + 0x210);
  dVar1 = *(double *)(lVar2 + 0x218);
  dVar11 = dVar10 * dVar5 - dVar9 * dVar6;
  dVar12 = dVar8 * dVar6 - dVar10 * dVar7;
  dVar13 = dVar9 * dVar7 - dVar5 * dVar8;
  dVar12 = dVar12 + dVar12;
  dVar13 = dVar13 + dVar13;
  dVar11 = dVar11 + dVar11;
  dVar4 = (dVar7 * dVar12 - dVar5 * dVar11) + *(double *)(lVar2 + 0x218) * dVar13 + dVar10 +
          *(double *)(lVar2 + 0x228);
  dVar10 = *(double *)(lVar2 + 0x230);
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (dVar11 * dVar6 - dVar13 * dVar7) + dVar1 * dVar12 + dVar9 +
                 *(double *)(lVar2 + 0x220);
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *param_1 = auVar3;
  *(double *)param_1[1] = dVar11 * dVar1 + dVar8 + (dVar13 * dVar5 - dVar12 * dVar6) + dVar10;
  return param_1;
}



// FUNCTION 143ba5f2e FUN_143ba5f2e body=1306 status=ok
// SIG undefined FUN_143ba5f2e(void)

undefined8 FUN_143ba5f2e(longlong *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  longlong lVar2;
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
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [16];
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x7bc) == '\x01') {
    dVar4 = *param_3 * *(double *)(lVar2 + 0x240);
    dVar5 = param_3[1] * *(double *)(lVar2 + 0x248);
    dVar19 = param_3[2] * *(double *)(lVar2 + 0x250);
    dVar18 = *(double *)(lVar2 + 0x218);
    dVar1 = *(double *)(lVar2 + 0x218);
    dVar13 = *(double *)(lVar2 + 0x200);
    dVar14 = *(double *)(lVar2 + 0x208);
    dVar15 = *(double *)(lVar2 + 0x210);
    dVar17 = dVar5 * dVar13 - dVar4 * dVar14;
    dVar7 = dVar19 * dVar14 - dVar5 * dVar15;
    dVar3 = dVar4 * dVar15 - dVar19 * dVar13;
    dVar7 = dVar7 + dVar7;
    dVar3 = dVar3 + dVar3;
    dVar17 = dVar17 + dVar17;
    dVar8 = *param_2 * *(double *)(lVar2 + 0x240);
    dVar9 = param_2[1] * *(double *)(lVar2 + 0x248);
    dVar6 = param_2[2] * *(double *)(lVar2 + 0x250);
    dVar10 = dVar9 * dVar13 - dVar14 * dVar8;
    dVar11 = dVar6 * dVar14 - dVar15 * dVar9;
    dVar12 = dVar8 * dVar15 - dVar13 * dVar6;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar10 = dVar10 + dVar10;
    fVar20 = (float)(*param_4 * (double)(*(float *)(lVar2 + 0x7b4) / 90.0));
    dVar4 = ((dVar17 * dVar14 - dVar3 * dVar15) + dVar18 * dVar7 + dVar4 +
            *(double *)(lVar2 + 0x220)) -
            ((dVar10 * dVar14 - dVar12 * dVar15) + dVar18 * dVar11 + dVar8 +
            *(double *)(lVar2 + 0x220));
    dVar1 = ((dVar15 * dVar7 - dVar13 * dVar17) + dVar1 * dVar3 + dVar5 + *(double *)(lVar2 + 0x228)
            ) - ((dVar15 * dVar11 - dVar13 * dVar10) + dVar1 * dVar12 + dVar9 +
                *(double *)(lVar2 + 0x228));
    dVar18 = (dVar17 * dVar18 + dVar19 + (dVar3 * dVar13 - dVar7 * dVar14) +
             *(double *)(lVar2 + 0x230)) -
             (dVar10 * dVar18 + dVar6 + (dVar12 * dVar13 - dVar11 * dVar14) +
             *(double *)(lVar2 + 0x230));
    uVar16 = CONCAT71((int7)((ulonglong)lVar2 >> 8),
                      dVar18 * dVar18 + dVar4 * dVar4 + dVar1 * dVar1 < (double)(fVar20 * fVar20));
  }
  else {
    dVar5 = *param_3 * *(double *)(lVar2 + 0x240);
    dVar17 = param_3[1] * *(double *)(lVar2 + 0x248);
    dVar3 = param_3[2] * *(double *)(lVar2 + 0x250);
    dVar1 = *(double *)(lVar2 + 0x218);
    dVar18 = *(double *)(lVar2 + 0x218);
    dVar8 = *(double *)(lVar2 + 0x200);
    dVar9 = *(double *)(lVar2 + 0x208);
    dVar10 = *(double *)(lVar2 + 0x210);
    dVar4 = dVar17 * dVar8 - dVar5 * dVar9;
    dVar7 = dVar3 * dVar9 - dVar17 * dVar10;
    dVar6 = dVar5 * dVar10 - dVar3 * dVar8;
    dVar7 = dVar7 + dVar7;
    dVar6 = dVar6 + dVar6;
    dVar4 = dVar4 + dVar4;
    dVar17 = (dVar10 * dVar7 - dVar8 * dVar4) + dVar18 * dVar6 + dVar17 + *(double *)(lVar2 + 0x228)
    ;
    local_c8._8_4_ = SUB84(dVar17,0);
    local_c8._0_8_ =
         (dVar4 * dVar9 - dVar6 * dVar10) + dVar1 * dVar7 + dVar5 + *(double *)(lVar2 + 0x220);
    local_c8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    local_b8 = dVar4 * dVar1 + dVar3 + (dVar6 * dVar8 - dVar7 * dVar9) + *(double *)(lVar2 + 0x230);
    dVar7 = *param_2 * *(double *)(lVar2 + 0x240);
    dVar6 = param_2[1] * *(double *)(lVar2 + 0x248);
    dVar17 = param_2[2] * *(double *)(lVar2 + 0x250);
    dVar3 = dVar6 * dVar8 - dVar9 * dVar7;
    dVar4 = dVar17 * dVar9 - dVar10 * dVar6;
    dVar5 = dVar7 * dVar10 - dVar8 * dVar17;
    dVar4 = dVar4 + dVar4;
    dVar5 = dVar5 + dVar5;
    dVar3 = dVar3 + dVar3;
    dVar18 = (dVar10 * dVar4 - dVar8 * dVar3) + dVar18 * dVar5 + dVar6 + *(double *)(lVar2 + 0x228);
    local_e8._8_4_ = SUB84(dVar18,0);
    local_e8._0_8_ =
         (dVar3 * dVar9 - dVar5 * dVar10) + dVar1 * dVar4 + dVar7 + *(double *)(lVar2 + 0x220);
    local_e8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    local_d8 = dVar3 * dVar1 + dVar17 + (dVar5 * dVar8 - dVar4 * dVar9) + *(double *)(lVar2 + 0x230)
    ;
    uVar16 = FUN_1485565cf(lVar2 + 0x770);
  }
  if ((local_b0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba6474 FUN_143ba6474 body=29 status=ok
// SIG undefined FUN_143ba6474(void)

undefined8 FUN_143ba6474(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba64d6 FUN_143ba64d6 body=128 status=ok
// SIG undefined FUN_143ba64d6(void)

undefined8 FUN_143ba64d6(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146c13dec(*(undefined8 *)(*param_1 + 8),&local_30,*param_2);
  lVar1 = param_1[1];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                    local_20 * *(double *)(lVar1 + 0x28) +
                    local_30 * *(double *)(lVar1 + 0x18) + local_28 * *(double *)(lVar1 + 0x20) <
                    0.0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba6582 FUN_143ba6582 body=29 status=ok
// SIG undefined FUN_143ba6582(void)

undefined8 FUN_143ba6582(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba65a0 FUN_143ba65a0 body=123 status=ok
// SIG undefined FUN_143ba65a0(void)

void FUN_143ba65a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  local_30 = 0x3ff0000000000000;
  pcVar2 = *(code **)(lVar1 + 0x10);
  plVar4 = (longlong *)(lVar1 + 0x30);
  if (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,param_2,param_3,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba6646 FUN_143ba6646 body=29 status=ok
// SIG undefined FUN_143ba6646(void)

undefined8 FUN_143ba6646(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba6664 FUN_143ba6664 body=123 status=ok
// SIG undefined FUN_143ba6664(void)

void FUN_143ba6664(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  local_30 = 0x3ff0000000000000;
  pcVar2 = *(code **)(lVar1 + 0x10);
  plVar4 = (longlong *)(lVar1 + 0x30);
  if (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,param_2,param_3,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba670a FUN_143ba670a body=29 status=ok
// SIG undefined FUN_143ba670a(void)

undefined8 FUN_143ba670a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba6728 FUN_143ba6728 body=128 status=ok
// SIG undefined FUN_143ba6728(void)

undefined8 FUN_143ba6728(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146c13dec(*(undefined8 *)(*param_1 + 8),&local_30,*param_2);
  lVar1 = param_1[1];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                    0.0 < local_20 * *(double *)(lVar1 + 0x28) +
                          local_30 * *(double *)(lVar1 + 0x18) +
                          local_28 * *(double *)(lVar1 + 0x20));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba67c8 FUN_143ba67c8 body=12 status=ok
// SIG undefined FUN_143ba67c8(void)

void FUN_143ba67c8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ba67d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ba67d4 FUN_143ba67d4 body=29 status=ok
// SIG undefined FUN_143ba67d4(void)

undefined8 FUN_143ba67d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba67f2 FUN_143ba67f2 body=426 status=ok
// SIG undefined FUN_143ba67f2(void)

void FUN_143ba67f2(undefined8 *param_1,int *param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar3 = *param_2;
  puVar4 = (undefined8 *)param_1[1];
  lVar5 = *(longlong *)*param_1;
  lVar11 = (longlong)iVar3 * 0x20;
  pdVar6 = (double *)puVar4[1];
  pdVar1 = (double *)(lVar5 + 8 + lVar11);
  dVar13 = *pdVar1 * pdVar6[8];
  dVar14 = pdVar1[1] * pdVar6[9];
  dVar12 = *(double *)(lVar5 + 0x18 + lVar11) * pdVar6[10];
  dVar7 = *pdVar6;
  dVar8 = pdVar6[1];
  dVar9 = pdVar6[2];
  dVar2 = pdVar6[3];
  dVar15 = dVar14 * dVar7 - dVar13 * dVar8;
  dVar16 = dVar12 * dVar8 - dVar14 * dVar9;
  dVar17 = dVar13 * dVar9 - dVar7 * dVar12;
  dVar16 = dVar16 + dVar16;
  dVar17 = dVar17 + dVar17;
  dVar15 = dVar15 + dVar15;
  dVar14 = (dVar9 * dVar16 - dVar7 * dVar15) + pdVar6[3] * dVar17 + dVar14 + pdVar6[5];
  local_78 = dVar15 * dVar2 + dVar12 + (dVar17 * dVar7 - dVar16 * dVar8) + pdVar6[6];
  local_88._8_4_ = SUB84(dVar14,0);
  local_88._0_8_ = (dVar15 * dVar8 - dVar17 * dVar9) + dVar2 * dVar16 + dVar13 + pdVar6[4];
  local_88._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  cVar10 = FUN_1484fbce0(*puVar4);
  if ((cVar10 != '\0') &&
     ((*(char *)(puVar4[2] + 6) != '\0' ||
      (cVar10 = FUN_148534332(lVar5 + lVar11 + 8,puVar4[3],puVar4[4],*(undefined1 *)(puVar4[2] + 3))
      , cVar10 == '\0')))) {
    *(undefined1 *)(*(longlong *)param_1[2] + (longlong)iVar3) = 1;
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ba699e FUN_143ba699e body=851 status=ok
// SIG undefined FUN_143ba699e(void)

void FUN_143ba699e(longlong *param_1,int *param_2)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  undefined8 *puVar4;
  double *pdVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_108 [32];
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar3 = *param_2;
  puVar4 = (undefined8 *)param_1[1];
  lVar1 = *(longlong *)(*param_1 + 0x60) + (longlong)iVar3 * 0x48;
  plVar12 = (longlong *)(lVar1 + 8);
  if (((*(char *)(puVar4[2] + 6) != '\0') ||
      ((cVar10 = FUN_148534332(*plVar12,puVar4[3],puVar4[4],*(undefined1 *)(puVar4[2] + 3)),
       cVar10 == '\0' &&
       (cVar10 = FUN_148534332(*plVar12 + (longlong)*(int *)(lVar1 + 0x10) * 0x18 + -0x18,puVar4[3],
                               puVar4[4],*(undefined1 *)(puVar4[2] + 3)), cVar10 == '\0')))) &&
     (1 < *(int *)(lVar1 + 0x10))) {
    pdVar5 = (double *)puVar4[1];
    pdVar6 = (double *)*plVar12;
    dVar22 = pdVar6[2] * pdVar5[10];
    dVar7 = *pdVar5;
    dVar8 = pdVar5[1];
    dVar19 = pdVar5[2];
    dVar2 = pdVar5[3];
    dVar18 = *pdVar6 * pdVar5[8];
    dVar20 = pdVar6[1] * pdVar5[9];
    dVar14 = dVar20 * dVar7 - dVar18 * dVar8;
    dVar16 = dVar22 * dVar8 - dVar20 * dVar19;
    dVar17 = dVar18 * dVar19 - dVar7 * dVar22;
    dVar14 = dVar14 + dVar14;
    dVar16 = dVar16 + dVar16;
    dVar17 = dVar17 + dVar17;
    lVar13 = 1;
    lVar11 = 0x28;
    dVar22 = dVar2 * dVar14 + dVar22 + (dVar17 * dVar7 - dVar8 * dVar16) + pdVar5[6];
    dVar2 = (dVar14 * dVar8 - dVar19 * dVar17) + dVar2 * dVar16 + dVar18 + pdVar5[4];
    dVar17 = (dVar16 * dVar19 - dVar14 * dVar7) + pdVar5[3] * dVar17 + dVar20 + pdVar5[5];
    do {
      pdVar6 = (double *)puVar4[1];
      pdVar5 = (double *)(*plVar12 + -0x10 + lVar11);
      dVar19 = *pdVar5 * pdVar6[8];
      dVar21 = pdVar5[1] * pdVar6[9];
      dVar15 = *(double *)(*plVar12 + lVar11) * pdVar6[10];
      dVar20 = *pdVar6;
      dVar9 = pdVar6[1];
      dVar18 = pdVar6[2];
      dVar14 = pdVar6[3];
      dVar7 = dVar21 * dVar20 - dVar19 * dVar9;
      dVar8 = dVar15 * dVar9 - dVar21 * dVar18;
      dVar16 = dVar19 * dVar18 - dVar20 * dVar15;
      dVar8 = dVar8 + dVar8;
      dVar16 = dVar16 + dVar16;
      dVar7 = dVar7 + dVar7;
      dVar19 = (dVar7 * dVar9 - dVar16 * dVar18) + dVar14 * dVar8 + dVar19 + pdVar6[4];
      dVar18 = (dVar18 * dVar8 - dVar20 * dVar7) + pdVar6[3] * dVar16 + dVar21 + pdVar6[5];
      dVar14 = dVar7 * dVar14 + dVar15 + (dVar16 * dVar20 - dVar8 * dVar9) + pdVar6[6];
      local_c8._8_4_ = SUB84(dVar18,0);
      local_c8._0_8_ = dVar19;
      local_c8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      local_e8 = dVar2;
      dStack_e0 = dVar17;
      local_d8 = dVar22;
      local_b8 = dVar14;
      cVar10 = FUN_1484ffd62(*puVar4,&local_e8,local_c8);
      if (cVar10 != '\0') {
        *(undefined1 *)(*(longlong *)param_1[2] + (longlong)iVar3) = 1;
        break;
      }
      lVar13 = lVar13 + 1;
      lVar11 = lVar11 + 0x18;
      dVar22 = dVar14;
      dVar2 = dVar19;
      dVar17 = dVar18;
    } while (lVar13 < *(int *)(lVar1 + 0x10));
  }
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ba6cf2 FUN_143ba6cf2 body=327 status=ok
// SIG undefined FUN_143ba6cf2(void)

undefined8 FUN_143ba6cf2(undefined8 *param_1,double *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  char local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *param_3;
  piVar2 = (int *)param_1[1];
  *piVar2 = iVar1;
  uVar3 = CONCAT71((int7)((ulonglong)piVar2 >> 8),1);
  if (iVar1 <= *(int *)param_1[2]) {
    *(int *)param_1[2] = 0x7fffffff;
    local_61 = '\0';
    local_70 = (param_2[5] - param_2[2]) * 0.5;
    local_78 = (param_2[4] - param_2[1]) * 0.5;
    local_80 = (param_2[3] - *param_2) * 0.5;
    local_88 = (param_2[5] + param_2[2]) * 0.5;
    local_90 = (param_2[4] + param_2[1]) * 0.5;
    local_98 = (param_2[3] + *param_2) * 0.5;
    uVar3 = FUN_1434a2cf0(*param_1,&local_98,&local_80,&local_61);
    if (local_61 == '\x01') {
      *(int *)param_1[2] = iVar1;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba6e6c FUN_143ba6e6c body=29 status=ok
// SIG undefined FUN_143ba6e6c(void)

undefined8 FUN_143ba6e6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba6e8a FUN_143ba6e8a body=849 status=ok
// SIG undefined FUN_143ba6e8a(void)

void FUN_143ba6e8a(longlong *param_1,uint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong unaff_RBX;
  byte *pbVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_208 [39];
  byte local_1e1;
  undefined8 local_1e0;
  undefined4 local_1d8;
  uint local_1d0;
  uint local_1cc;
  uint *local_1c8;
  byte *pbStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [192];
  undefined1 *local_d8;
  uint local_d0;
  undefined8 local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uVar5 = *param_2;
  lVar6 = *param_1;
  local_1cc = uVar5;
  local_1d0 = (**(code **)(**(longlong **)(lVar6 + 0x60) + 0x50))
                        (*(longlong **)(lVar6 + 0x60),uVar5);
  plVar7 = (longlong *)param_1[1];
  if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
    plVar14 = plVar7 + 7;
    if ((longlong *)plVar7[8] != (longlong *)0x0) {
      plVar14 = (longlong *)plVar7[8];
    }
    iVar13 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar7[9] - 1U & local_1d0) * 4);
    if (iVar13 != -1) {
      do {
        if (*(uint *)(*plVar7 + (longlong)iVar13 * 0xc) == local_1d0) goto LAB_143ba701c;
        iVar13 = *(int *)(*plVar7 + (longlong)iVar13 * 0xc + 4);
      } while (iVar13 != -1);
    }
  }
  if (*(int *)param_1[2] < *(int *)param_1[3]) {
    lVar17 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar6 + 0x58) + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
    local_1d8 = *(undefined4 *)(lVar17 + 8 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
    local_1e0 = *(undefined8 *)(lVar17 + (ulonglong)(uVar5 & 0x1ff) * 0xc);
    local_d8 = (undefined1 *)0x0;
    local_d0 = 0;
    local_1c8 = (uint *)0x0;
    pbStack_1c0 = (byte *)0x0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_cc = 0x10;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0xffffffffffffffff;
    uStack_98 = 0xffffffff;
    local_90 = 0x42000000;
    local_88 = 0x41000000;
    uStack_84 = 0;
    uStack_80 = 0x3f800000;
    uStack_7c = 0x3f800000;
    local_78 = 0x3f800000;
    FUN_147caa26c();
    lVar17 = 0;
    do {
      uVar9 = local_d0;
      uVar10 = *(uint *)((longlong)&local_1e0 + lVar17 * 4);
      lVar16 = *(longlong *)
                (*(longlong *)(*(longlong *)(lVar6 + 0x58) + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
      uVar12 = (ulonglong)(uVar10 & 0x1ff);
      dVar1 = *(double *)(lVar16 + 0x10 + uVar12 * 0x18);
      dVar2 = *(double *)(lVar16 + 8 + uVar12 * 0x18);
      dVar3 = *(double *)(lVar16 + uVar12 * 0x18);
      lVar16 = (longlong)(int)local_d0;
      local_d0 = local_d0 + 1;
      if ((uint)local_cc < local_d0) {
        FUN_1479ccacc(local_198,uVar9);
      }
      puVar11 = local_d8;
      if (local_d8 == (undefined1 *)0x0) {
        puVar11 = local_198;
      }
      *(float *)(puVar11 + lVar16 * 0xc) = (float)dVar3;
      *(float *)(puVar11 + lVar16 * 0xc + 4) = (float)dVar2;
      *(float *)(puVar11 + lVar16 * 0xc + 8) = (float)dVar1;
      lVar17 = lVar17 + 1;
    } while (lVar17 != 3);
    uVar10 = FUN_147a36d8a(param_1[4],&local_1c8);
    unaff_RBX = (ulonglong)uVar10;
    if (local_d8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if ((char)uVar10 == '\0') goto LAB_143ba701c;
  }
  if (*(char *)(param_1[7] + 6) == '\0') {
    plVar7 = (longlong *)param_1[8];
    if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
      plVar14 = plVar7 + 7;
      if ((longlong *)plVar7[8] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar7[8];
      }
      iVar13 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar7[9] - 1U & uVar5) * 4);
      if (iVar13 != -1) {
        do {
          unaff_RBX = *plVar7 + (longlong)iVar13 * 0x10;
          if (*(uint *)(*plVar7 + (longlong)iVar13 * 0x10) == uVar5) {
            if (unaff_RBX != 0) {
              pbVar15 = (byte *)(unaff_RBX + 4);
              unaff_RBX = 0;
              if (pbVar15 != (byte *)0x0) goto LAB_143ba7001;
            }
            break;
          }
          iVar13 = *(int *)(unaff_RBX + 8);
        } while (iVar13 != -1);
      }
    }
    uVar4 = *(undefined1 *)(param_1[7] + 3);
    lVar17 = param_1[5];
    uVar8 = *(undefined8 *)param_1[6];
    FUN_146c149e0(*(undefined8 *)(lVar6 + 0x58),&local_1c8,uVar5);
    local_1e1 = FUN_148534332(&local_1c8,lVar17,uVar8,
                              CONCAT71((int7)(unaff_RBX >> 8),uVar4) & 0xffffffff);
    pbVar15 = &local_1e1;
    local_1c8 = &local_1cc;
    pbStack_1c0 = pbVar15;
    FUN_14854d634(param_1[8],&local_1e0,&local_1c8);
LAB_143ba7001:
    if ((*pbVar15 & 1) != 0) goto LAB_143ba701c;
  }
  FUN_1447cbafe(param_1[1],&local_1c8,&local_1d0,0);
LAB_143ba701c:
  if ((local_70 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ba71dc FUN_143ba71dc body=71 status=ok
// SIG undefined FUN_143ba71dc(void)

void FUN_143ba71dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14af182e0;
  lVar2 = 9;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 143ba722a FUN_143ba722a body=29 status=ok
// SIG undefined FUN_143ba722a(void)

void FUN_143ba722a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143ba7248 FUN_143ba7248 body=29 status=ok
// SIG undefined FUN_143ba7248(void)

undefined8 FUN_143ba7248(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba7266 FUN_143ba7266 body=210 status=ok
// SIG undefined FUN_143ba7266(void)

undefined8 FUN_143ba7266(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  double *pdVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  lVar2 = *param_1;
  FUN_146c13dec(*(undefined8 *)(lVar2 + 0x58),&local_40,uVar1);
  lVar2 = *(longlong *)(lVar2 + 0x58);
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x130) + (ulonglong)(uVar1 >> 9) * 8) +
                   ((ulonglong)uVar1 & 0x1ff) * 0xc);
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
  uVar4 = (ulonglong)uVar1 & 0x1ff;
  pdVar3 = (double *)param_1[1];
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)pdVar3 >> 8),
                    (*(double *)(lVar2 + 0x10 + uVar4 * 0x18) - pdVar3[2]) * local_30 +
                    (*(double *)(lVar2 + uVar4 * 0x18) - *pdVar3) * local_40 +
                    (*(double *)(lVar2 + 8 + uVar4 * 0x18) - pdVar3[1]) * local_38 < 0.0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba7358 FUN_143ba7358 body=12 status=ok
// SIG undefined FUN_143ba7358(void)

void FUN_143ba7358(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ba7361. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ba7364 FUN_143ba7364 body=29 status=ok
// SIG undefined FUN_143ba7364(void)

undefined8 FUN_143ba7364(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba7381 FUN_143ba7381 body=907 status=ok
// SIG undefined FUN_143ba7381(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ba7381(void)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb4d600);
  if (cVar1 == '\0') {
    _DAT_14cb4d600 = 0;
    uRam000000014cb4d608 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af13890,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af140c0,1,0);
  FUN_140056680(&DAT_14cb4d670,L"Static Mesh");
  atexit((_func_5014 *)&LAB_143b99c70);
  FUN_140056680(&DAT_14cb4d680,L"Volume");
  atexit((_func_5014 *)&LAB_143b99c81);
  FUN_140056680(&DAT_14cb4d690,L"Dynamic Mesh");
  atexit((_func_5014 *)&LAB_143b99c92);
  FUN_140056680(&DAT_14cb4d6a0,L"From Input");
  atexit((_func_5014 *)&LAB_143b99ca3);
  _Src = DAT_14cb4d670;
  DAT_14cb4d6b0 = (void *)0x0;
  lVar3 = (longlong)DAT_14cb4d678;
  DAT_14cb4d6b8 = DAT_14cb4d678;
  if (lVar3 == 0) {
    _DAT_14cb4d6bc = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cb4d6b0,DAT_14cb4d678,0);
    memcpy(DAT_14cb4d6b0,_Src,lVar3 * 2);
  }
  atexit((_func_5014 *)&LAB_143b99cb4);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14af14d50;
  local_68 = 0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af14d70,3,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af15360,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af15920,1,0);
  local_50 = "SMInstance";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb4d760 = (ulonglong)uVar2;
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb4d768,L"geometry.MeshSceneAdapter.SingleThreaded",&local_50,
                L"Determines whether or not to use multi-threading in MeshSceneAdapter.\n");
  atexit(FUN_143b99cfc);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffffffffff00);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cb4d8c0,L"modeling.EnableVolumeSnapping",&local_50,
                L"Enable snapping to volumes");
  atexit(FUN_143b9e5ef);
  local_50._0_4_ = 5;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb4d780,L"modeling.WorldRenderCapture.VTWarmupFrames",&local_50,
                L"Number of frames to render before each capture in order to warmup the renderer.");
  atexit(FUN_143b9e634);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb4d798,L"r.RenderCaptureDraws",&DAT_14cb4d7a8,
                L"Enable capturing of render capture texture for the next N draws");
  atexit(FUN_143ba00b8);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af16ad0,1,&PTR_FUN_14af16aa0);
  local_50 = (char *)CONCAT44(local_50._4_4_,1);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb4d7e0,L"modeling.Selection.FullHoverHighlights",&local_50,
                L"Use full selection hover highlights instead of simplified highlights");
  atexit(FUN_143ba01b5);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba7710 FUN_143ba7710 body=1358 status=ok
// SIG undefined FUN_143ba7710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143ba7710(undefined8 param_1,void *param_2,double *param_3,undefined8 param_4,
                       longlong *param_5)

{
  float fVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  void *_Src;
  undefined *puVar15;
  longlong lVar16;
  longlong lVar17;
  void *pvVar18;
  undefined1 auStack_198 [32];
  double *local_178;
  undefined4 local_170;
  undefined4 *local_168;
  undefined1 *local_160;
  undefined4 *local_158;
  undefined1 *local_150;
  void *local_148;
  undefined8 uStack_140;
  undefined4 local_134;
  undefined1 local_130;
  undefined1 local_129;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  undefined1 local_e9;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined2 uStack_d0;
  undefined6 local_ce;
  undefined2 uStack_c8;
  undefined8 uStack_c6;
  undefined1 local_b8 [32];
  undefined1 *local_98;
  int local_90;
  undefined4 local_8c;
  undefined1 local_88 [16];
  undefined1 *local_78;
  int local_70;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  puVar9 = (undefined4 *)FUN_140bfa850();
  local_134 = *puVar9;
  local_130 = 0;
  uStack_c8 = _DAT_14cad0f88;
  uStack_c6 = uRam000000014cad0f8a;
  local_d8 = _DAT_14cad0f78;
  uStack_d0 = _DAT_14cad0f80;
  local_ce = _DAT_14cad0f82;
  local_e8 = _DAT_14cad0f68;
  uStack_e4 = uRam000000014cad0f6c;
  uStack_e0 = _DAT_14cad0f70;
  uStack_dc = uRam000000014cad0f74;
  local_98 = (undefined1 *)0x0;
  lVar16 = (longlong)DAT_14cad0fc0;
  local_90 = DAT_14cad0fc0;
  if (lVar16 == 0) {
    local_8c = 8;
  }
  else {
    puVar15 = &DAT_14cad0f98;
    if (DAT_14cad0fb8 != (undefined *)0x0) {
      puVar15 = DAT_14cad0fb8;
    }
    FUN_14470be6c(local_b8,DAT_14cad0fc0,0);
    puVar10 = local_98;
    if (local_98 == (undefined1 *)0x0) {
      puVar10 = local_b8;
    }
    memcpy(puVar10,puVar15,lVar16 << 2);
  }
  local_78 = (undefined1 *)0x0;
  lVar16 = (longlong)DAT_14cad0fe0;
  local_70 = DAT_14cad0fe0;
  if (lVar16 == 0) {
    local_6c = 4;
  }
  else {
    puVar15 = &DAT_14cad0fc8;
    if (DAT_14cad0fd8 != (undefined *)0x0) {
      puVar15 = DAT_14cad0fd8;
    }
    FUN_1447163e6(local_88,DAT_14cad0fe0,0);
    puVar10 = local_78;
    if (local_78 == (undefined1 *)0x0) {
      puVar10 = local_88;
    }
    memcpy(puVar10,puVar15,lVar16 << 2);
  }
  uVar12 = local_d8;
  local_168 = &local_e8;
  local_d8 = CONCAT71(local_d8._1_7_,1);
  uVar5 = local_d8;
  local_d8._3_5_ = SUB85(uVar12,3);
  local_d8._0_3_ = CONCAT12(1,(short)uVar5);
  local_148 = (void *)0x0;
  uStack_140 = 0;
  local_f8 = param_3[5] * 4398046511104.0 + param_3[2];
  local_100 = param_3[4] * 4398046511104.0 + param_3[1];
  local_108 = param_3[3] * 4398046511104.0 + *param_3;
  local_118 = param_3[2];
  local_128 = *(undefined4 *)param_3;
  uStack_124 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_120 = *(undefined4 *)(param_3 + 1);
  uStack_11c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_178 = &local_108;
  local_150 = &local_e9;
  local_158 = &local_134;
  local_160 = &DAT_14cad0f10;
  local_170 = DAT_14cad0ec4;
  FUN_1401e2596(param_1,&local_148,&local_129);
  lVar16 = DAT_14cb4d8d0;
  lVar17 = (longlong)(int)uStack_140;
  if (lVar17 < 1) {
    uVar11 = 0;
  }
  else {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar11 = 0;
    }
    else if (iVar3 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      lVar17 = (longlong)(int)uStack_140;
      if (lVar17 == 0) {
        uVar11 = 0;
        goto LAB_143ba7b82;
      }
      uVar11 = (ulonglong)(DVar7 != DVar8);
    }
    else {
      uVar11 = 1;
    }
    pvVar18 = (void *)(lVar17 * 0x100 + (longlong)local_148);
    cVar2 = *(char *)(lVar16 + uVar11);
    fVar1 = INFINITY;
    _Src = local_148;
    do {
      if (param_5 == (longlong *)0x0) {
LAB_143ba79df:
        if ((cVar2 == '\0') && (*(int *)((longlong)_Src + 0xdc) != 0)) {
          uVar4 = *(uint *)((longlong)_Src + 0xd8);
          if ((-1 < (int)uVar4) &&
             (((((int)uVar4 < DAT_14c9647dc &&
                (plVar14 = (longlong *)
                           ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                plVar14 != (longlong *)0x0)) && ((int)plVar14[2] == *(int *)((longlong)_Src + 0xdc))
               ) && (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 && (lVar16 = *plVar14, lVar16 != 0)
                     ))))) {
            lVar17 = FUN_1405babea();
            lVar16 = *(longlong *)(lVar16 + 0x10);
            if ((*(int *)(lVar17 + 0x38) <= *(int *)(lVar16 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8)
                == lVar17 + 0x30)) goto LAB_143ba7ad6;
          }
          if (((*(int *)((longlong)_Src + 0xdc) != 0) &&
              (uVar4 = *(uint *)((longlong)_Src + 0xd8), -1 < (int)uVar4)) &&
             ((((int)uVar4 < DAT_14c9647dc &&
               (((plVar14 = (longlong *)
                            ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                 plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)((longlong)_Src + 0xdc)))
                && ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))) &&
              (lVar16 = *plVar14, lVar16 != 0)))) {
            lVar17 = FUN_140e2e6d8();
            lVar16 = *(longlong *)(lVar16 + 0x10);
            if ((*(int *)(lVar17 + 0x38) <= *(int *)(lVar16 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8)
                == lVar17 + 0x30)) goto LAB_143ba7ad6;
          }
        }
        if ((*(float *)((longlong)_Src + 8) < fVar1) &&
           (cVar6 = FUN_148451fcc(param_4), cVar6 != '\0')) {
          memcpy(param_2,_Src,0x100);
          fVar1 = *(float *)((longlong)_Src + 8);
        }
      }
      else {
        if ((*(int *)((longlong)_Src + 0xdc) == 0) ||
           (uVar4 = *(uint *)((longlong)_Src + 0xd8), (int)uVar4 < 0)) {
LAB_143ba7b62:
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          if ((int)uVar4 < DAT_14c9647dc) {
            puVar13 = (undefined8 *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
            if (((puVar13 == (undefined8 *)0x0) ||
                (*(int *)(puVar13 + 2) != *(int *)((longlong)_Src + 0xdc))) ||
               ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)) goto LAB_143ba7b62;
            uVar12 = *puVar13;
          }
        }
        cVar6 = (**(code **)(*param_5 + 0x20))(param_5,uVar12);
        if (cVar6 == '\0') goto LAB_143ba79df;
      }
LAB_143ba7ad6:
      _Src = (void *)((longlong)_Src + 0x100);
    } while (_Src != pvVar18);
    uVar11 = CONCAT71((int7)((ulonglong)param_4 >> 8),fVar1 < INFINITY);
  }
LAB_143ba7b82:
  if (local_148 != (void *)0x0) {
    FUN_1400020a8(local_148);
  }
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 143ba7c60 FUN_143ba7c60 body=224 status=ok
// SIG undefined FUN_143ba7c60(void)

void FUN_143ba7c60(longlong param_1,undefined8 param_2,longlong param_3,double *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    puVar4 = (undefined8 *)(param_3 + 0x70);
    lVar5 = 0;
    do {
      local_58 = puVar4[2];
      local_68 = *puVar4;
      uStack_60 = puVar4[1];
      local_88 = *(undefined4 *)(param_1 + 0x48);
      uStack_84 = *(undefined4 *)(param_1 + 0x4c);
      uStack_80 = *(undefined4 *)(param_1 + 0x50);
      uStack_7c = *(undefined4 *)(param_1 + 0x54);
      local_78 = *(undefined8 *)(param_1 + 0x58);
      dVar6 = (double)FUN_148553406(&local_88,&local_68,param_2);
      if (dVar6 < *param_4) {
        *param_4 = dVar6;
        *(undefined8 *)(param_3 + 0x28) = puVar4[2];
        uVar1 = *(undefined4 *)((longlong)puVar4 + 4);
        uVar2 = *(undefined4 *)(puVar4 + 1);
        uVar3 = *(undefined4 *)((longlong)puVar4 + 0xc);
        *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)puVar4;
        *(undefined4 *)(param_3 + 0x1c) = uVar1;
        *(undefined4 *)(param_3 + 0x20) = uVar2;
        *(undefined4 *)(param_3 + 0x24) = uVar3;
        *(undefined1 *)(param_3 + 0x10) = 1;
        *(int *)(param_3 + 0xb8) = (int)lVar5;
      }
      lVar5 = lVar5 + 1;
      puVar4 = puVar4 + 3;
    } while (lVar5 != 3);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba7d42 FUN_143ba7d42 body=343 status=ok
// SIG undefined FUN_143ba7d42(void)

void FUN_143ba7d42(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  double *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*(byte *)(param_1 + 1) & 2) != 0) && (*(char *)(param_4 + 0x10) != '\x01')) {
    lVar3 = param_4 + 0x70;
    local_e8 = (undefined4 *)(param_4 + 0x18);
    lVar4 = 0;
    local_e0 = lVar3;
    do {
      lVar1 = lVar4 + 1;
      lVar2 = 0;
      if (lVar4 != 2) {
        lVar2 = lVar1;
      }
      FUN_146bd9232(local_80,lVar3,local_e0 + lVar2 * 0x18);
      FUN_14831b1b6(local_80,&local_98,param_2);
      local_a8 = local_88;
      local_d8 = *(undefined4 *)(param_1 + 0x48);
      uStack_d4 = *(undefined4 *)(param_1 + 0x4c);
      uStack_d0 = *(undefined4 *)(param_1 + 0x50);
      uStack_cc = *(undefined4 *)(param_1 + 0x54);
      local_c8 = *(undefined8 *)(param_1 + 0x58);
      dVar5 = (double)FUN_148553406(&local_d8,local_b8,param_3);
      if (dVar5 < *param_5) {
        *param_5 = dVar5;
        *(undefined8 *)(local_e8 + 4) = local_88;
        *local_e8 = local_98;
        local_e8[1] = uStack_94;
        local_e8[2] = uStack_90;
        local_e8[3] = uStack_8c;
        *(undefined1 *)(param_4 + 0x10) = 2;
        *(int *)(param_4 + 0xb8) = (int)lVar4;
      }
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar1;
    } while (lVar1 != 3);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba7e9a FUN_143ba7e9a body=55 status=ok
// SIG undefined FUN_143ba7e9a(void)

void FUN_143ba7e9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4d938 == 0) {
    uVar1 = FUN_141022ae5();
    DAT_14cb4d938 = FUN_14171c317(FUN_14649572b,uVar1,L"EMultiTransformerMode");
  }
  return;
}



// FUNCTION 143ba7f3e FUN_143ba7f3e body=12 status=ok
// SIG undefined FUN_143ba7f3e(void)

void FUN_143ba7f3e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ba7f47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ba7f4a FUN_143ba7f4a body=29 status=ok
// SIG undefined FUN_143ba7f4a(void)

undefined8 FUN_143ba7f4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba7f68 FUN_143ba7f68 body=28 status=ok
// SIG undefined FUN_143ba7f68(void)

undefined8 FUN_143ba7f68(undefined8 param_1,undefined8 *param_2)

{
  FUN_146c91310(*param_2,param_1);
  return param_1;
}



// FUNCTION 143ba7fa2 FUN_143ba7fa2 body=12 status=ok
// SIG undefined FUN_143ba7fa2(void)

void FUN_143ba7fa2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ba7fab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143ba7fae FUN_143ba7fae body=29 status=ok
// SIG undefined FUN_143ba7fae(void)

undefined8 FUN_143ba7fae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba7fcc FUN_143ba7fcc body=29 status=ok
// SIG undefined FUN_143ba7fcc(void)

undefined8 FUN_143ba7fcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba8168 FUN_143ba8168 body=93 status=ok
// SIG undefined FUN_143ba8168(void)

void FUN_143ba8168(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af1a580;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ba81c6 FUN_143ba81c6 body=93 status=ok
// SIG undefined FUN_143ba81c6(void)

void FUN_143ba81c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af1a580;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ba8224 FUN_143ba8224 body=126 status=ok
// SIG undefined FUN_143ba8224(void)

void FUN_143ba8224(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af1a580;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ba8293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ba8302 FUN_143ba8302 body=355 status=ok
// SIG undefined FUN_143ba8302(void)

undefined8 FUN_143ba8302(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar3 == 2) goto LAB_143ba845f;
    if (iVar3 == 1) {
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_143ba845f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ba845f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar13 = 0;
    if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_143ba8417;
    lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    if ((lVar14 != 0) &&
       ((*(int *)(lVar14 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)))) {
      uVar5 = *param_3;
      uVar6 = param_3[1];
      uVar8 = param_3[5];
      uVar7 = param_3[6];
      uVar9 = param_3[8];
      uVar10 = param_3[9];
      lVar14 = *(longlong *)(param_1 + 0x20);
      uVar13 = param_3[3];
      uVar2 = param_3[2];
      uVar1 = param_3[10];
      *(undefined8 *)(lVar14 + 0xa8) = param_3[4];
      *(undefined8 *)(lVar14 + 0xb0) = uVar8;
      *(undefined8 *)(lVar14 + 0xb8) = uVar7;
      *(undefined8 *)(lVar14 + 0xc0) = uVar5;
      *(undefined8 *)(lVar14 + 200) = uVar6;
      *(undefined8 *)(lVar14 + 0xd0) = uVar2;
      *(undefined8 *)(lVar14 + 0xd8) = uVar13;
      *(undefined8 *)(lVar14 + 0xe0) = uVar9;
      *(undefined8 *)(lVar14 + 0xe8) = uVar10;
      *(undefined8 *)(lVar14 + 0xf0) = uVar1;
      uVar13 = 1;
      goto LAB_143ba8417;
    }
  }
  uVar13 = 0;
LAB_143ba8417:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba8466 FUN_143ba8466 body=29 status=ok
// SIG undefined FUN_143ba8466(void)

undefined8 FUN_143ba8466(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba8602 FUN_143ba8602 body=93 status=ok
// SIG undefined FUN_143ba8602(void)

void FUN_143ba8602(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af1a5f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ba8660 FUN_143ba8660 body=93 status=ok
// SIG undefined FUN_143ba8660(void)

void FUN_143ba8660(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14af1a5f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143ba86be FUN_143ba86be body=126 status=ok
// SIG undefined FUN_143ba86be(void)

void FUN_143ba86be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14af12c50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14af1a5f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ba872d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ba874a FUN_143ba874a body=269 status=ok
// SIG undefined FUN_143ba874a(void)

undefined8 FUN_143ba874a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143ba8851;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143ba8851;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143ba8851:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ba8806;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1447f69b6(*(longlong *)(param_1 + 0x20) + 0x70);
      uVar6 = 1;
      goto LAB_143ba8806;
    }
  }
  uVar6 = 0;
LAB_143ba8806:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba8858 FUN_143ba8858 body=188 status=ok
// SIG undefined FUN_143ba8858(void)

double FUN_143ba8858(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  local_18 = *(undefined8 *)(lVar1 + 0x20);
  local_28 = *(undefined8 *)(lVar1 + 0x10);
  uStack_20 = *(undefined8 *)(lVar1 + 0x18);
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_38 = param_3[2];
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = param_2[2];
  dVar3 = (double)FUN_148553406(&local_68,&local_48,&local_28);
  uVar2 = -(ulonglong)(-dVar3 <= dVar3);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return (double)(~uVar2 & (ulonglong)-dVar3 | (ulonglong)dVar3 & uVar2) /
           (double)(*(float *)(lVar1 + 0x50) / 90.0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba8940 FUN_143ba8940 body=29 status=ok
// SIG undefined FUN_143ba8940(void)

undefined8 FUN_143ba8940(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba895e FUN_143ba895e body=188 status=ok
// SIG undefined FUN_143ba895e(void)

double FUN_143ba895e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  local_18 = *(undefined8 *)(lVar1 + 0x20);
  local_28 = *(undefined8 *)(lVar1 + 0x10);
  uStack_20 = *(undefined8 *)(lVar1 + 0x18);
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_38 = param_3[2];
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = param_2[2];
  dVar3 = (double)FUN_148553406(&local_68,&local_48,&local_28);
  uVar2 = -(ulonglong)(-dVar3 <= dVar3);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return (double)(~uVar2 & (ulonglong)-dVar3 | (ulonglong)dVar3 & uVar2) /
           (double)(*(float *)(lVar1 + 0x50) / 90.0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba8a46 FUN_143ba8a46 body=29 status=ok
// SIG undefined FUN_143ba8a46(void)

undefined8 FUN_143ba8a46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ba8a63 FUN_143ba8a63 body=85 status=ok
// SIG undefined FUN_143ba8a63(void)

void FUN_143ba8a63(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_2,param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_2[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 143ba8ab8 FUN_143ba8ab8 body=85 status=ok
// SIG undefined FUN_143ba8ab8(void)

void FUN_143ba8ab8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_2,param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_2[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 143ba8b0d FUN_143ba8b0d body=85 status=ok
// SIG undefined FUN_143ba8b0d(void)

void FUN_143ba8b0d(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_2,param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_2[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 143ba8b62 FUN_143ba8b62 body=85 status=ok
// SIG undefined FUN_143ba8b62(void)

void FUN_143ba8b62(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_2,param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_2[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 143ba8bb7 FUN_143ba8bb7 body=85 status=ok
// SIG undefined FUN_143ba8bb7(void)

void FUN_143ba8bb7(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_2,param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_2[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 143ba8c0c FUN_143ba8c0c body=85 status=ok
// SIG undefined FUN_143ba8c0c(void)

void FUN_143ba8c0c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_2,param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_2[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 143ba8c61 FUN_143ba8c61 body=85 status=ok
// SIG undefined FUN_143ba8c61(void)

void FUN_143ba8c61(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_2,param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_2[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 143ba8cb6 FUN_143ba8cb6 body=85 status=ok
// SIG undefined FUN_143ba8cb6(void)

void FUN_143ba8cb6(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_2,param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_2[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 143ba8d0b FUN_143ba8d0b body=254 status=ok
// SIG undefined FUN_143ba8d0b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ba8d0b(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_40,&DAT_14cb4d8d8);
  if (cVar1 == '\0') {
    _DAT_14cb4d8d8 = 0;
    uRam000000014cb4d8e0 = 0;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af18c80,2,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af19130,1,0);
  ppuStack_50 = &PTR_FUN_14af1a240;
  local_58 = 0;
  local_48 = 1;
  FUN_14282b410(L"/Script/ModelingComponents",&PTR_FUN_14af1a260,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba8e0c FUN_143ba8e0c body=55 status=ok
// SIG undefined FUN_143ba8e0c(void)

void FUN_143ba8e0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4d9a0 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4d9a0 = FUN_14171c317(FUN_1464957b2,uVar1,L"EGeometryScriptOutcomePins");
  }
  return;
}



// FUNCTION 143ba8e43 FUN_143ba8e43 body=55 status=ok
// SIG undefined FUN_143ba8e43(void)

void FUN_143ba8e43(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4d9b8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4d9b8 = FUN_14171c317(FUN_1464957e3,uVar1,L"EGeometryScriptSearchOutcomePins");
  }
  return;
}



// FUNCTION 143ba8e7a FUN_143ba8e7a body=55 status=ok
// SIG undefined FUN_143ba8e7a(void)

void FUN_143ba8e7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4d9d0 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4d9d0 = FUN_14171c317(FUN_146495814,uVar1,L"EGeometryScriptContainmentOutcomePins");
  }
  return;
}



// FUNCTION 143ba8eb1 FUN_143ba8eb1 body=55 status=ok
// SIG undefined FUN_143ba8eb1(void)

void FUN_143ba8eb1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4d9e8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4d9e8 = FUN_14171c317(FUN_146495843,uVar1,L"EGeometryScriptLODType");
  }
  return;
}



// FUNCTION 143ba8ee8 FUN_143ba8ee8 body=55 status=ok
// SIG undefined FUN_143ba8ee8(void)

void FUN_143ba8ee8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4da00 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4da00 = FUN_14171c317(FUN_146495872,uVar1,L"EGeometryScriptAxis");
  }
  return;
}



// FUNCTION 143ba8f1f FUN_143ba8f1f body=55 status=ok
// SIG undefined FUN_143ba8f1f(void)

void FUN_143ba8f1f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4da18 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4da18 = FUN_14171c317(FUN_1464958a3,uVar1,L"EGeometryScriptCoordinateSpace");
  }
  return;
}



// FUNCTION 143ba8f56 FUN_143ba8f56 body=55 status=ok
// SIG undefined FUN_143ba8f56(void)

void FUN_143ba8f56(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4db20 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4db20 = FUN_14171c317(FUN_146495e5e,uVar1,L"EGeometryScriptIndexType");
  }
  return;
}



// FUNCTION 143ba8f8d FUN_143ba8f8d body=55 status=ok
// SIG undefined FUN_143ba8f8d(void)

void FUN_143ba8f8d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4dc58 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4dc58 = FUN_14171c317(FUN_1464963fe,uVar1,L"EGeometryScriptDebugMessageType");
  }
  return;
}



// FUNCTION 143ba8fc4 FUN_143ba8fc4 body=55 status=ok
// SIG undefined FUN_143ba8fc4(void)

void FUN_143ba8fc4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4dc70 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4dc70 = FUN_14171c317(FUN_14649642d,uVar1,L"EGeometryScriptErrorType");
  }
  return;
}



// FUNCTION 143ba8ffb FUN_143ba8ffb body=55 status=ok
// SIG undefined FUN_143ba8ffb(void)

void FUN_143ba8ffb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4dcc8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4dcc8 = FUN_14171c317(FUN_146496550,uVar1,L"EGeometryScriptCollisionGenerationMethod");
  }
  return;
}



// FUNCTION 143ba9032 FUN_143ba9032 body=55 status=ok
// SIG undefined FUN_143ba9032(void)

void FUN_143ba9032(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4dce0 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4dce0 = FUN_14171c317(FUN_14649657f,uVar1,L"EGeometryScriptSweptHullAxis");
  }
  return;
}



// FUNCTION 143ba9069 FUN_143ba9069 body=55 status=ok
// SIG undefined FUN_143ba9069(void)

void FUN_143ba9069(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4dd40 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4dd40 = FUN_14171c317(FUN_146496776,uVar1,L"ENegativeSpaceSampleMethod");
  }
  return;
}



// FUNCTION 143ba90a0 FUN_143ba90a0 body=55 status=ok
// SIG undefined FUN_143ba90a0(void)

void FUN_143ba90a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4dda0 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4dda0 = FUN_14171c317(FUN_14649696a,uVar1,L"EGeometryScriptConvexHullSimplifyMethod");
  }
  return;
}



// FUNCTION 143ba90d7 FUN_143ba90d7 body=137 status=ok
// SIG undefined FUN_143ba90d7(void)

void FUN_143ba90d7(longlong param_1,undefined1 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_37;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plVar1 = (longlong *)*param_3;
  local_37 = param_2;
  local_30 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  local_28 = (undefined4)param_3[1];
  if (param_1 != 0) {
    FUN_148568e48(param_1,&local_38);
    plVar1 = local_30;
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba9161 FUN_143ba9161 body=743 status=ok
// SIG undefined FUN_143ba9161(void)

void FUN_143ba9161(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  code *local_78 [2];
  longlong *local_68;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar2 = *(longlong **)(param_1 + 0x188);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2c0))(plVar2);
    plVar1 = plVar2 + 7;
    FUN_147a2cbea(plVar1);
    FUN_1401842de(plVar1);
    FUN_14058b698(plVar1,param_2);
    (**(code **)(*plVar2 + 0x2a0))(plVar2);
    *(undefined8 *)(param_1 + 0x248) = 0;
    FUN_147d555b0(param_1,0);
    if (DAT_14cad3688 == 0) {
      local_90 = local_78;
      local_78[0] = FUN_144b223ce;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1417963e0;
      local_98 = &LAB_147a2f4c9;
      local_a0 = &LAB_1400ea6f8;
      local_a8 = L"Engine";
      local_b0 = 0x200000000000;
      local_b8 = 0x10000004;
      local_c0 = 0x10;
      local_c8 = 0x720;
      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
    }
    local_c8 = 0;
    FUN_146123bc0(local_78,DAT_14cad3688,0,0);
    if (local_68 != (longlong *)0x0) {
      do {
        lVar4 = *local_68;
        if (lVar4 == 0) {
LAB_143ba929a:
          lVar4 = 0;
        }
        else {
          if (DAT_14cad3688 == 0) {
            local_50 = FUN_144b223ce;
            local_80 = FUN_14081d0ea;
            local_88 = &LAB_1417963e0;
            local_90 = &local_50;
            local_98 = &LAB_147a2f4c9;
            local_a0 = &LAB_1400ea6f8;
            local_a8 = L"Engine";
            local_b0 = 0x200000000000;
            local_b8 = 0x10000004;
            local_c0 = 0x10;
            local_c8 = 0x720;
            FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
          }
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cad3688 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) != DAT_14cad3688 + 0x30))
          goto LAB_143ba929a;
        }
        lVar3 = *(longlong *)(lVar4 + 0x660);
        if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
          FUN_1456cec3c(lVar3);
        }
        if ((lVar3 == param_1) && ((*(byte *)(lVar4 + 0x9c) & 8) != 0)) {
          FUN_1406cc378(lVar4);
        }
        FUN_1427b9a5c(local_78);
      } while (local_68 != (longlong *)0x0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_78[0] + 0x30));
    FUN_14282b7b8(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ba9449 FUN_143ba9449 body=137 status=ok
// SIG undefined FUN_143ba9449(void)

void FUN_143ba9449(longlong param_1,undefined1 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_37;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 1;
  plVar1 = (longlong *)*param_3;
  local_37 = param_2;
  local_30 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  local_28 = (undefined4)param_3[1];
  if (param_1 != 0) {
    FUN_148568e48(param_1,&local_38);
    plVar1 = local_30;
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba94d3 FUN_143ba94d3 body=629 status=ok
// SIG undefined FUN_143ba94d3(void)

bool FUN_143ba94d3(longlong param_1,longlong param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  int iVar9;
  double *pdVar10;
  longlong lVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  double local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar3 = *(int *)(param_1 + 0x48);
  if (param_3 * 3 < iVar3) {
    iVar12 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
    iVar9 = iVar3;
    if ((longlong)*(int *)(param_1 + 0x38) != 0) {
      pdVar10 = *(double **)(param_1 + 0x30);
      pdVar1 = pdVar10 + (longlong)*(int *)(param_1 + 0x38) * 3;
      do {
        dVar5 = *(double *)(param_1 + 0x90);
        dVar6 = *(double *)(param_1 + 0x98);
        dVar7 = *(double *)(param_1 + 0xa0);
        dVar14 = *pdVar10 * *(double *)(param_1 + 0xd0);
        dVar15 = pdVar10[1] * *(double *)(param_1 + 0xd8);
        dVar13 = pdVar10[2] * *(double *)(param_1 + 0xe0);
        dVar2 = *(double *)(param_1 + 0xa8);
        dVar16 = dVar15 * dVar5 - dVar6 * dVar14;
        dVar17 = dVar13 * dVar6 - dVar7 * dVar15;
        dVar18 = dVar14 * dVar7 - dVar5 * dVar13;
        dVar17 = dVar17 + dVar17;
        dVar18 = dVar18 + dVar18;
        dVar16 = dVar16 + dVar16;
        dVar15 = (dVar7 * dVar17 - dVar5 * dVar16) + *(double *)(param_1 + 0xa8) * dVar18 + dVar15 +
                 *(double *)(param_1 + 0xb8);
        local_c8 = dVar16 * dVar2 + dVar13 + (dVar18 * dVar5 - dVar17 * dVar6) +
                   *(double *)(param_1 + 0xc0);
        local_d8._8_4_ = SUB84(dVar15,0);
        local_d8._0_8_ =
             (dVar16 * dVar6 - dVar18 * dVar7) + dVar2 * dVar17 + dVar14 +
             *(double *)(param_1 + 0xb0);
        local_d8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        local_b8 = DAT_14c846338;
        local_c0 = DAT_14c846330;
        local_ac = DAT_14c846338;
        local_b4 = DAT_14c846330;
        local_a8 = DAT_14c84635c;
        local_a0 = 0;
        local_9e = 0;
        FUN_146c02208(param_2,local_d8);
        pdVar10 = pdVar10 + 3;
      } while (pdVar10 != pdVar1);
      iVar9 = *(int *)(param_1 + 0x48);
    }
    if (2 < iVar9) {
      lVar11 = 2;
      do {
        auVar8 = local_d8;
        lVar4 = *(longlong *)(param_1 + 0x40);
        local_d8._4_4_ = *(int *)(lVar4 + lVar11 * 4) + iVar12;
        local_d8._0_4_ = *(int *)(lVar4 + -8 + lVar11 * 4) + iVar12;
        local_d8._12_4_ = auVar8._12_4_;
        local_d8._8_4_ = *(int *)(lVar4 + -4 + lVar11 * 4) + iVar12;
        FUN_146c01152(param_2,local_d8,0);
        lVar11 = lVar11 + 3;
      } while ((int)lVar11 < *(int *)(param_1 + 0x48));
    }
  }
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_3 * 3 < iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba974a FUN_143ba974a body=335 status=ok
// SIG undefined FUN_143ba974a(void)

char FUN_143ba974a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar2 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar2 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x30);
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(lVar8 + lVar7);
      local_68 = *puVar1;
      uStack_60 = puVar1[1];
      local_58 = *(undefined8 *)(lVar8 + 0x10 + lVar7);
      cVar3 = (*(code *)*param_2)(param_2[1],&local_68);
      if (cVar3 == '\0') {
        cVar3 = '\0';
        goto LAB_143ba9870;
      }
      lVar7 = lVar7 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar7);
  }
  cVar3 = '\x01';
  if (2 < *(int *)(param_1 + 0x48)) {
    lVar8 = 2;
    do {
      lVar7 = *(longlong *)(param_1 + 0x30);
      lVar4 = *(longlong *)(param_1 + 0x40);
      lVar5 = (longlong)*(int *)(lVar4 + -8 + lVar8 * 4);
      lVar6 = (longlong)*(int *)(lVar4 + -4 + lVar8 * 4);
      lVar4 = (longlong)*(int *)(lVar4 + lVar8 * 4);
      local_70 = (*(double *)(lVar7 + 0x10 + lVar5 * 0x18) +
                  *(double *)(lVar7 + 0x10 + lVar6 * 0x18) +
                 *(double *)(lVar7 + 0x10 + lVar4 * 0x18)) * 0.3333333333333333;
      local_78 = (*(double *)(lVar7 + 8 + lVar5 * 0x18) + *(double *)(lVar7 + 8 + lVar6 * 0x18) +
                 *(double *)(lVar7 + 8 + lVar4 * 0x18)) * 0.3333333333333333;
      local_80 = (*(double *)(lVar7 + lVar5 * 0x18) + *(double *)(lVar7 + lVar6 * 0x18) +
                 *(double *)(lVar7 + lVar4 * 0x18)) * 0.3333333333333333;
      cVar3 = (*(code *)*param_2)(param_2[1],&local_80);
      if (cVar3 == '\0') break;
      lVar8 = lVar8 + 3;
    } while ((int)lVar8 < *(int *)(param_1 + 0x48));
  }
LAB_143ba9870:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar3;
}



// FUNCTION 143ba989a FUN_143ba989a body=173 status=ok
// SIG undefined FUN_143ba989a(void)

void FUN_143ba989a(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14857f8da(plVar3,iVar1);
  }
  *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = param_4;
  FUN_1483adaae(param_1[2],param_2);
  plVar3 = (longlong *)param_1[3];
  uVar2 = *(undefined4 *)(param_2 + 8);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(plVar3,iVar1);
  }
  *(undefined4 *)(*plVar3 + (longlong)iVar1 * 4) = uVar2;
  plVar3 = (longlong *)param_1[1];
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_144941252(plVar3,iVar1);
  }
  *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = param_3;
  return;
}



// FUNCTION 143ba9948 FUN_143ba9948 body=349 status=ok
// SIG undefined FUN_143ba9948(void)

void FUN_143ba9948(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined8 local_98;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)*param_1;
  if (lVar3 != 0) {
    iVar5 = *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24);
    iVar2 = *(int *)(param_2 + 0x10);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_2 + 8);
      lVar6 = 0;
      do {
        local_98 = *(undefined8 *)(lVar3 + 0x10 + lVar6);
        piVar1 = (int *)(lVar3 + lVar6);
        local_a8 = *piVar1;
        iStack_a4 = piVar1[1];
        iStack_a0 = piVar1[2];
        iStack_9c = piVar1[3];
        local_68 = DAT_14c846338;
        local_70 = DAT_14c846330;
        local_5c = DAT_14c846338;
        local_64 = DAT_14c846330;
        local_58 = DAT_14c84635c;
        local_50 = 0;
        local_4e = 0;
        local_88 = local_a8;
        iStack_84 = iStack_a4;
        iStack_80 = iStack_a0;
        iStack_7c = iStack_9c;
        local_78 = local_98;
        FUN_146c02208(*(undefined8 *)*param_1,&local_88);
        lVar6 = lVar6 + 0x18;
      } while ((longlong)iVar2 * 0x18 != lVar6);
    }
    if ((longlong)*(int *)(param_2 + 0x60) != 0) {
      piVar4 = *(int **)(param_2 + 0x58);
      piVar1 = piVar4 + (longlong)*(int *)(param_2 + 0x60) * 3;
      do {
        iStack_80 = piVar4[2] + iVar5;
        iStack_84 = piVar4[1] + iVar5;
        local_88 = *piVar4 + iVar5;
        FUN_146c01152(*(undefined8 *)*param_1,&local_88,0);
        piVar4 = piVar4 + 3;
      } while (piVar4 != piVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ba9aa6 FUN_143ba9aa6 body=55 status=ok
// SIG undefined FUN_143ba9aa6(void)

void FUN_143ba9aa6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4df50 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4df50 = FUN_14171c317(FUN_1418414ab,uVar1,L"EGeometryScriptMeshSelectionType");
  }
  return;
}



// FUNCTION 143ba9add FUN_143ba9add body=55 status=ok
// SIG undefined FUN_143ba9add(void)

void FUN_143ba9add(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4df68 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4df68 = FUN_14171c317(FUN_14649752b,uVar1,L"EGeometryScriptMeshSelectionConversionType")
    ;
  }
  return;
}



// FUNCTION 143ba9b14 FUN_143ba9b14 body=55 status=ok
// SIG undefined FUN_143ba9b14(void)

void FUN_143ba9b14(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4df80 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4df80 = FUN_14171c317(FUN_14649755a,uVar1,L"EGeometryScriptCombineSelectionMode");
  }
  return;
}



// FUNCTION 143ba9b4b FUN_143ba9b4b body=55 status=ok
// SIG undefined FUN_143ba9b4b(void)

void FUN_143ba9b4b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4df98 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4df98 = FUN_14171c317(FUN_146497589,uVar1,L"EGeometryScriptEmptySelectionBehavior");
  }
  return;
}



// FUNCTION 143ba9b82 FUN_143ba9b82 body=51 status=ok
// SIG undefined FUN_143ba9b82(void)

ulonglong FUN_143ba9b82(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  
  puVar2 = (uint *)*param_1;
  uVar1 = puVar2[1];
  uVar3 = (ulonglong)uVar1;
  if (uVar1 == 1) {
    if (*puVar2 < 5) {
      return 0x101030001 >> ((byte)(*puVar2 << 3) & 0x3f);
    }
  }
  else if ((uVar1 == 2) && (uVar3 = 2, *puVar2 == 4)) {
    return uVar3;
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 143ba9bb6 FUN_143ba9bb6 body=807 status=ok
// SIG undefined FUN_143ba9bb6(void)

int FUN_143ba9bb6(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  int **local_b0;
  undefined1 local_a4 [4];
  int local_a0;
  byte local_99;
  int *local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  piVar4 = (int *)*param_1;
  if (piVar4[1] == 2) {
    iVar11 = 0;
    if (*piVar4 == 4) {
      iVar11 = 0;
      local_78 = 0;
      local_70 = 0;
      local_98 = (int *)0x0;
      uStack_90 = 0;
      local_6c = 0x80;
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      iVar2 = piVar4[0xc];
      if (iVar2 == 0) {
        uVar16 = 1;
        uVar15 = 0;
        iVar10 = 0;
        iVar5 = 0;
      }
      else {
        puVar6 = *(uint **)(piVar4 + 10);
        if (*(uint **)(piVar4 + 10) == (uint *)0x0) {
          puVar6 = (uint *)(piVar4 + 6);
        }
        uVar7 = *puVar6;
        if (uVar7 == 0) {
          iVar5 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar5 = iVar2 + -1;
          }
          uVar15 = 0;
          uVar16 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar16 = uVar15;
          }
          iVar10 = 0;
          do {
            if (uVar16 == uVar15) {
              iVar11 = 0;
              goto LAB_143ba9e2f;
            }
            iVar10 = iVar10 + 0x20;
            uVar7 = puVar6[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar15 = 0;
          iVar10 = 0;
        }
        uVar16 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
      if (iVar5 != iVar2) {
        uVar7 = 0xffffffff;
        iVar11 = 0;
        do {
          local_a0 = *(int *)(*(longlong *)(piVar4 + 2) + 4 + (longlong)iVar5 * 0x10);
          FUN_144984904(&local_98,local_a4,&local_a0,&local_99);
          uVar7 = ~(uint)uVar16 & uVar7;
          puVar6 = *(uint **)(piVar4 + 10);
          if (*(uint **)(piVar4 + 10) == (uint *)0x0) {
            puVar6 = (uint *)(piVar4 + 6);
          }
          iVar3 = piVar4[0xc];
          iVar5 = (int)uVar15;
          lVar13 = (longlong)iVar5;
          uVar12 = puVar6[lVar13] & uVar7;
          if (uVar12 == 0) {
            iVar8 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar8 = iVar3 + -1;
            }
            iVar8 = iVar8 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar9 = iVar8;
            if (iVar8 < iVar5) {
              iVar9 = iVar5;
            }
            if (iVar5 < iVar8) {
              lVar14 = 0;
              do {
                uVar12 = puVar6[lVar13 + lVar14 + 1];
                if (uVar12 != 0) {
                  uVar15 = (ulonglong)(iVar5 + (int)lVar14 + 1);
                  uVar7 = 0xffffffff;
                  goto LAB_143ba9dc1;
                }
                iVar10 = iVar10 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar9 - lVar13 != lVar14);
              uVar7 = 0xffffffff;
              lVar13 = (longlong)iVar9;
            }
            uVar15 = lVar13 + 1U & 0xffffffff;
            iVar5 = iVar3;
          }
          else {
LAB_143ba9dc1:
            uVar16 = (ulonglong)(-uVar12 & uVar12);
            uVar1 = uVar16 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar5 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar5) {
              iVar5 = iVar3;
            }
          }
          iVar11 = iVar11 + (local_99 ^ 1);
        } while (iVar5 != iVar2);
        local_50 = 0;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
LAB_143ba9e2f:
      uVar15 = uStack_90 >> 0x20;
      uStack_90 = uStack_90 & 0xffffffff00000000;
      if ((int)uVar15 != 0) {
        FUN_1447a08a2(&local_98,0);
      }
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        FUN_1446efbd8(local_88,0);
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_98 != (int *)0x0) {
        FUN_1400020a8();
      }
    }
    goto LAB_143ba9e7a;
  }
  local_a0 = 0;
  iVar2 = *piVar4;
  if (iVar2 != 4) {
    if (iVar2 == 2) {
      local_98 = &local_a0;
      local_b0 = &local_98;
      local_b8 = &LAB_143bb3fa4;
      FUN_143ba9ede(param_2,piVar4);
      iVar11 = local_a0;
      goto LAB_143ba9e7a;
    }
    iVar11 = 0;
    if (iVar2 != 1) goto LAB_143ba9e7a;
  }
  iVar11 = piVar4[4] - piVar4[0xf];
LAB_143ba9e7a:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar11;
}



// FUNCTION 143ba9ede FUN_143ba9ede body=689 status=ok
// SIG undefined FUN_143ba9ede(void)

void FUN_143ba9ede(longlong param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  undefined8 *local_80;
  longlong local_78;
  uint *local_70;
  char *local_68;
  undefined1 *local_60;
  longlong *local_58;
  char local_4d;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar2 = *(int *)(param_2 + 0x30);
  local_80 = param_3;
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar16 = 0;
    iVar17 = 0;
    iVar5 = 0;
  }
  else {
    puVar4 = *(uint **)(param_2 + 0x28);
    if (*(uint **)(param_2 + 0x28) == (uint *)0x0) {
      puVar4 = (uint *)(param_2 + 0x18);
    }
    uVar11 = *puVar4;
    if (uVar11 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar12 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar12 = uVar16;
      }
      iVar17 = 0;
      do {
        if (uVar12 == uVar16) goto LAB_143ba9f93;
        iVar17 = iVar17 + 0x20;
        uVar11 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar16 = 0;
      iVar17 = 0;
    }
    uVar12 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar12 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar5 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar11 = 0xffffffff;
    iVar3 = iVar2;
    do {
      uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 8) + (longlong)iVar5 * 0x10);
      uVar7 = (uint)uVar1;
      uVar6 = uVar7 * 4 & 0x3ffffffc;
      local_4c = (uVar7 & 0xfffffff) << 2 | uVar7 >> 0x1e;
      uVar13 = uVar6 >> 2;
      if (((int)uVar13 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144)) &&
         (uVar10 = (ulonglong)(uVar6 >> 0xb),
         (ushort)(*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + uVar10 * 8) +
                            (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        local_84 = *(undefined4 *)
                    ((ulonglong)(uVar7 & 0x1ff) * 0xc +
                     *(longlong *)(*(longlong *)(param_1 + 0x180) + uVar10 * 8) +
                    (uVar1 >> 0x1e & 3) * 4);
        local_4d = '\0';
        local_68 = &local_4d;
        local_58 = &local_78;
        local_60 = &LAB_143bb1b68;
        local_78 = param_2;
        local_70 = &local_4c;
        FUN_14838980a(param_1,local_84,&local_60);
        if (local_4d == '\0') {
          local_78 = CONCAT44(local_78._4_4_,local_84);
          (*(code *)*local_80)(local_80[1],&local_78);
        }
        iVar3 = *(int *)(param_2 + 0x30);
      }
      uVar11 = uVar11 & ~(uint)uVar12;
      puVar4 = *(uint **)(param_2 + 0x28);
      if (*(uint **)(param_2 + 0x28) == (uint *)0x0) {
        puVar4 = (uint *)(param_2 + 0x18);
      }
      iVar5 = (int)uVar16;
      lVar14 = (longlong)iVar5;
      uVar7 = puVar4[lVar14] & uVar11;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar5) {
          iVar9 = iVar5;
        }
        if (iVar5 < iVar8) {
          lVar15 = 0;
          do {
            uVar7 = puVar4[lVar14 + lVar15 + 1];
            if (uVar7 != 0) {
              uVar16 = (ulonglong)(iVar5 + (int)lVar15 + 1);
              uVar11 = 0xffffffff;
              goto LAB_143baa0b6;
            }
            iVar17 = iVar17 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar9 - lVar14 != lVar15);
          uVar11 = 0xffffffff;
          lVar14 = (longlong)iVar9;
        }
        uVar16 = lVar14 + 1U & 0xffffffff;
        iVar5 = iVar3;
      }
      else {
LAB_143baa0b6:
        uVar12 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar5 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_143ba9f93:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143baa190 FUN_143baa190 body=589 status=ok
// SIG undefined FUN_143baa190(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143baa190(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_2098 [32];
  longlong local_2078 [2];
  undefined2 *local_2068;
  undefined2 *local_2060;
  ulonglong *local_2058;
  char local_2050;
  undefined2 local_2048 [4096];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2098;
  lVar5 = *param_1;
  iVar2 = *(int *)(lVar5 + 4);
  local_2068 = local_2048;
  local_2050 = '\0';
  local_2058 = &local_48;
  iVar3 = *(int *)(lVar5 + 0x30);
  local_2060 = local_2068;
  if (iVar3 == 0) {
    uVar12 = 1;
    uVar17 = 0;
    iVar16 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = *(uint **)(lVar5 + 0x28);
    if (*(uint **)(lVar5 + 0x28) == (uint *)0x0) {
      puVar8 = (uint *)(lVar5 + 0x18);
    }
    uVar9 = *puVar8;
    if (uVar9 == 0) {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      uVar17 = 0;
      uVar12 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar12 = uVar17;
      }
      iVar16 = 0;
      do {
        if (uVar12 == uVar17) goto LAB_143baa36e;
        iVar16 = iVar16 + 0x20;
        uVar9 = puVar8[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar17 = 0;
      iVar16 = 0;
    }
    uVar12 = (ulonglong)(-uVar9 & uVar9);
    uVar1 = uVar12 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar16 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
  }
  if (iVar7 != iVar3) {
    uVar9 = 0xffffffff;
    do {
      uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 8) + (longlong)iVar7 * 0x10);
      uVar6 = uVar1 >> 0x20;
      if (iVar2 != 2) {
        uVar6 = uVar1;
      }
      FUN_140212e80(&local_2068,&DAT_149f212d6,uVar6 & 0xffffffff);
      uVar9 = ~(uint)uVar12 & uVar9;
      puVar8 = *(uint **)(lVar5 + 0x28);
      if (*(uint **)(lVar5 + 0x28) == (uint *)0x0) {
        puVar8 = (uint *)(lVar5 + 0x18);
      }
      iVar4 = *(int *)(lVar5 + 0x30);
      iVar7 = (int)uVar17;
      lVar14 = (longlong)iVar7;
      uVar13 = puVar8[lVar14] & uVar9;
      if (uVar13 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar7) {
          iVar11 = iVar7;
        }
        if (iVar7 < iVar10) {
          lVar15 = 0;
          do {
            uVar13 = puVar8[lVar14 + lVar15 + 1];
            if (uVar13 != 0) {
              uVar17 = (ulonglong)(iVar7 + (int)lVar15 + 1);
              uVar9 = 0xffffffff;
              goto LAB_143baa324;
            }
            iVar16 = iVar16 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar11 - lVar14 != lVar15);
          uVar9 = 0xffffffff;
          iVar7 = iVar11;
        }
        uVar17 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar4;
      }
      else {
LAB_143baa324:
        uVar12 = (ulonglong)(-uVar13 & uVar13);
        uVar1 = uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar16 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar7) {
          iVar7 = iVar4;
        }
      }
    } while (iVar7 != iVar3);
  }
LAB_143baa36e:
  *local_2060 = 0;
  FUN_140056680(local_2078,local_2068);
  if (local_2078[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2050 == '\x01') {
    FUN_1400020a8(local_2068);
  }
  if ((local_48 ^ (ulonglong)auStack_2098) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143baa3de FUN_143baa3de body=3424 status=ok
// SIG undefined FUN_143baa3de(void)

void FUN_143baa3de(longlong *param_1,longlong *param_2,char param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  char cVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined1 auStack_1a8 [40];
  longlong *local_180;
  ulonglong local_178;
  uint *local_170;
  undefined1 local_164 [4];
  undefined1 local_160 [8];
  ulonglong local_158 [32];
  ulonglong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  puVar6 = (uint *)*param_1;
  uVar12 = puVar6[1];
  if (uVar12 == 1) {
    if (4 < *puVar6) goto LAB_143baa441;
    cVar4 = (char)(0x101030001 >> ((byte)(*puVar6 << 3) & 0x3f));
  }
  else if ((uVar12 != 2) || (cVar4 = '\x02', *puVar6 != 4)) {
LAB_143baa441:
    cVar4 = '\x01';
  }
  puVar7 = (uint *)*param_2;
  if (puVar7[1] == 1) {
    if (4 < *puVar7) goto LAB_143baa479;
    cVar18 = (char)(0x101030001 >> ((byte)(*puVar7 << 3) & 0x3f));
  }
  else if ((puVar7[1] != 2) || (cVar18 = '\x02', *puVar7 != 4)) {
LAB_143baa479:
    cVar18 = '\x01';
  }
  if (cVar4 != cVar18) goto LAB_143baac1c;
  if ((uVar12 == 2) && (*puVar6 == 4)) {
    if (param_3 == '\x02') {
      local_58 = (ulonglong *)0x0;
      local_50 = 0x2000000000;
      uVar12 = puVar6[0xc];
      if (uVar12 == 0) {
        uVar13 = 1;
        uVar19 = 0;
        iVar14 = 0;
        uVar5 = 0;
      }
      else {
        puVar7 = *(uint **)(puVar6 + 10);
        if (*(uint **)(puVar6 + 10) == (uint *)0x0) {
          puVar7 = puVar6 + 6;
        }
        uVar5 = *puVar7;
        if (uVar5 == 0) {
          iVar14 = uVar12 + 0x1e;
          if (-1 < (int)(uVar12 - 1)) {
            iVar14 = uVar12 - 1;
          }
          uVar19 = 0;
          uVar13 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar13 = uVar19;
          }
          iVar14 = 0;
          do {
            if (uVar13 == uVar19) goto LAB_143baac0a;
            iVar14 = iVar14 + 0x20;
            uVar5 = puVar7[uVar19 + 1];
            uVar19 = uVar19 + 1;
          } while (uVar5 == 0);
        }
        else {
          uVar19 = 0;
          iVar14 = 0;
        }
        uVar13 = (ulonglong)(-uVar5 & uVar5);
        uVar20 = uVar13 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)uVar12 <= (int)uVar5) {
          uVar5 = uVar12;
        }
      }
      if (uVar5 != uVar12) {
        uVar21 = 0xffffffff;
        local_180 = param_1;
        do {
          uVar20 = *(ulonglong *)(*(longlong *)(puVar6 + 2) + (longlong)(int)uVar5 * 0x10);
          cVar4 = FUN_148383fa9(*local_180,uVar20 >> 0x20,local_160);
          uVar1 = local_50;
          if (cVar4 == '\0') {
            local_178 = CONCAT44(local_178._4_4_,iVar14);
            lVar16 = (longlong)(int)local_50;
            uVar5 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar5);
            if (local_50._4_4_ < uVar5) {
              FUN_146f4cfd4(local_158,uVar1 & 0xffffffff);
            }
            puVar8 = local_58;
            if (local_58 == (ulonglong *)0x0) {
              puVar8 = local_158;
            }
            puVar8[lVar16] = uVar20;
            iVar14 = (int)local_178;
          }
          uVar21 = uVar21 & ~(uint)uVar13;
          puVar7 = *(uint **)(puVar6 + 10);
          if (*(uint **)(puVar6 + 10) == (uint *)0x0) {
            puVar7 = puVar6 + 6;
          }
          uVar2 = puVar6[0xc];
          iVar15 = (int)uVar19;
          lVar16 = (longlong)iVar15;
          uVar5 = puVar7[lVar16] & uVar21;
          if (uVar5 == 0) {
            iVar11 = uVar2 + 0x1e;
            if (-1 < (int)(uVar2 - 1)) {
              iVar11 = uVar2 - 1;
            }
            iVar11 = iVar11 >> 5;
            iVar14 = iVar14 + 0x20;
            iVar10 = iVar11;
            if (iVar11 < iVar15) {
              iVar10 = iVar15;
            }
            if (iVar15 < iVar11) {
              lVar17 = 0;
              do {
                uVar5 = puVar7[lVar16 + lVar17 + 1];
                if (uVar5 != 0) {
                  uVar19 = (ulonglong)(iVar15 + (int)lVar17 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_143baaba3;
                }
                iVar14 = iVar14 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar10 - lVar16 != lVar17);
              uVar21 = 0xffffffff;
              iVar15 = iVar10;
            }
            uVar19 = (ulonglong)(iVar15 + 1);
            uVar5 = uVar2;
          }
          else {
LAB_143baaba3:
            uVar13 = (ulonglong)(-uVar5 & uVar5);
            uVar20 = uVar13 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            uVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if ((int)uVar2 <= (int)uVar5) {
              uVar5 = uVar2;
            }
          }
        } while (uVar5 != uVar12);
        lVar16 = (longlong)(int)local_50;
        if (0 < lVar16) {
          puVar8 = local_158;
          if (local_58 != (ulonglong *)0x0) {
            puVar8 = local_58;
          }
          lVar17 = 0;
          do {
            FUN_14838391e(*local_180 + 8,*(undefined8 *)((longlong)puVar8 + lVar17));
            lVar17 = lVar17 + 8;
            param_1 = local_180;
          } while (lVar16 * 8 != lVar17);
LAB_143bab102:
          lVar16 = *param_1;
          cVar4 = FUN_1483b996c(lVar16 + 8);
          if (cVar4 != '\0') {
            uVar12 = *(int *)(lVar16 + 0x10) - *(int *)(lVar16 + 0x3c);
            iVar14 = 1;
            if (3 < uVar12) {
              uVar13 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
              lVar17 = 0x3f;
              if (uVar13 != 0) {
                for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar14 = 1 << ((byte)lVar17 & 0x1f);
            }
            *(int *)(lVar16 + 0x50) = iVar14;
            FUN_14034644e(lVar16 + 8);
          }
        }
      }
LAB_143baac0a:
      if (local_58 != (ulonglong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143baac1c;
    }
    if (param_3 != '\x01') {
      if (param_3 == '\0') {
        uVar12 = puVar7[0xc];
        if (uVar12 == 0) {
          uVar13 = 1;
          uVar19 = 0;
          iVar14 = 0;
          uVar5 = 0;
        }
        else {
          puVar6 = *(uint **)(puVar7 + 10);
          if (*(uint **)(puVar7 + 10) == (uint *)0x0) {
            puVar6 = puVar7 + 6;
          }
          uVar5 = *puVar6;
          if (uVar5 == 0) {
            iVar14 = uVar12 + 0x1e;
            if (-1 < (int)(uVar12 - 1)) {
              iVar14 = uVar12 - 1;
            }
            uVar19 = 0;
            uVar13 = (ulonglong)(uint)(iVar14 >> 5);
            if (iVar14 >> 5 < 1) {
              uVar13 = uVar19;
            }
            iVar14 = 0;
            do {
              if (uVar13 == uVar19) goto LAB_143baac1c;
              iVar14 = iVar14 + 0x20;
              uVar5 = puVar6[uVar19 + 1];
              uVar19 = uVar19 + 1;
            } while (uVar5 == 0);
          }
          else {
            uVar19 = 0;
            iVar14 = 0;
          }
          uVar13 = (ulonglong)(-uVar5 & uVar5);
          uVar20 = uVar13 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar12 <= (int)uVar5) {
            uVar5 = uVar12;
          }
        }
        if (uVar5 != uVar12) {
          uVar21 = 0xffffffff;
          do {
            local_158[0] = *(ulonglong *)(*(longlong *)(puVar7 + 2) + (longlong)(int)uVar5 * 0x10);
            cVar4 = FUN_148383fa9(*param_1,local_158[0] >> 0x20,local_160);
            if (cVar4 == '\0') {
              FUN_1403458a2(*param_1 + 8,local_164,local_158,0);
            }
            uVar21 = uVar21 & ~(uint)uVar13;
            puVar6 = *(uint **)(puVar7 + 10);
            if (*(uint **)(puVar7 + 10) == (uint *)0x0) {
              puVar6 = puVar7 + 6;
            }
            uVar2 = puVar7[0xc];
            iVar15 = (int)uVar19;
            lVar16 = (longlong)iVar15;
            uVar5 = puVar6[lVar16] & uVar21;
            if (uVar5 == 0) {
              iVar11 = uVar2 + 0x1e;
              if (-1 < (int)(uVar2 - 1)) {
                iVar11 = uVar2 - 1;
              }
              iVar11 = iVar11 >> 5;
              iVar14 = iVar14 + 0x20;
              iVar10 = iVar11;
              if (iVar11 < iVar15) {
                iVar10 = iVar15;
              }
              if (iVar15 < iVar11) {
                lVar17 = 0;
                do {
                  uVar5 = puVar6[lVar16 + lVar17 + 1];
                  if (uVar5 != 0) {
                    uVar19 = (ulonglong)(iVar15 + (int)lVar17 + 1);
                    uVar21 = 0xffffffff;
                    goto LAB_143baad24;
                  }
                  iVar14 = iVar14 + 0x20;
                  lVar17 = lVar17 + 1;
                } while (iVar10 - lVar16 != lVar17);
                uVar21 = 0xffffffff;
                iVar15 = iVar10;
              }
              uVar19 = (ulonglong)(iVar15 + 1);
              uVar5 = uVar2;
            }
            else {
LAB_143baad24:
              uVar13 = (ulonglong)(-uVar5 & uVar5);
              uVar20 = uVar13 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar20 != 0) {
                for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              uVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              if ((int)uVar2 <= (int)uVar5) {
                uVar5 = uVar2;
              }
            }
          } while (uVar5 != uVar12);
        }
      }
      goto LAB_143baac1c;
    }
    if (puVar7[4] == puVar7[0xf]) goto LAB_143baac1c;
    uVar12 = puVar7[0xc];
    if (uVar12 == 0) {
      uVar20 = 1;
      uVar13 = 0;
      iVar14 = 0;
      uVar5 = 0;
    }
    else {
      puVar9 = *(uint **)(puVar7 + 10);
      if (*(uint **)(puVar7 + 10) == (uint *)0x0) {
        puVar9 = puVar7 + 6;
      }
      uVar5 = *puVar9;
      if (uVar5 == 0) {
        iVar14 = uVar12 + 0x1e;
        if (-1 < (int)(uVar12 - 1)) {
          iVar14 = uVar12 - 1;
        }
        uVar13 = 0;
        uVar19 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar19 = uVar13;
        }
        iVar14 = 0;
        do {
          if (uVar19 == uVar13) goto LAB_143bab064;
          iVar14 = iVar14 + 0x20;
          uVar5 = puVar9[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar13 = 0;
        iVar14 = 0;
      }
      uVar20 = (ulonglong)(-uVar5 & uVar5);
      uVar19 = uVar20 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if ((int)uVar12 <= (int)uVar5) {
        uVar5 = uVar12;
      }
    }
    if (uVar5 != uVar12) {
      uVar21 = 0xffffffff;
      do {
        cVar4 = FUN_148383fa9(*param_1,*(undefined4 *)
                                        (*(longlong *)(puVar7 + 2) + 4 + (longlong)(int)uVar5 * 0x10
                                        ),local_158);
        if (cVar4 != '\0') {
          FUN_14838391e(*param_1 + 8,local_158[0]);
        }
        uVar21 = uVar21 & ~(uint)uVar20;
        puVar6 = *(uint **)(puVar7 + 10);
        if (*(uint **)(puVar7 + 10) == (uint *)0x0) {
          puVar6 = puVar7 + 6;
        }
        uVar2 = puVar7[0xc];
        iVar15 = (int)uVar13;
        lVar16 = (longlong)iVar15;
        uVar5 = puVar6[lVar16] & uVar21;
        if (uVar5 == 0) {
          iVar11 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar11 = uVar2 - 1;
          }
          iVar11 = iVar11 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar10 = iVar11;
          if (iVar11 < iVar15) {
            iVar10 = iVar15;
          }
          if (iVar15 < iVar11) {
            lVar17 = 0;
            do {
              uVar5 = puVar6[lVar16 + lVar17 + 1];
              if (uVar5 != 0) {
                uVar13 = (ulonglong)(iVar15 + (int)lVar17 + 1);
                uVar21 = 0xffffffff;
                goto LAB_143bab01e;
              }
              iVar14 = iVar14 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar10 - lVar16 != lVar17);
            uVar21 = 0xffffffff;
            iVar15 = iVar10;
          }
          uVar13 = (ulonglong)(iVar15 + 1);
          uVar5 = uVar2;
        }
        else {
LAB_143bab01e:
          uVar20 = (ulonglong)(-uVar5 & uVar5);
          uVar19 = uVar20 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar5) {
            uVar5 = uVar2;
          }
        }
      } while (uVar5 != uVar12);
LAB_143bab061:
      puVar6 = (uint *)*param_1;
    }
  }
  else {
    if (param_3 == '\x02') {
      local_58 = (ulonglong *)0x0;
      local_50 = 0x2000000000;
      puVar7 = puVar6 + 6;
      uVar12 = puVar6[0xc];
      uVar13 = (ulonglong)uVar12;
      if (uVar12 == 0) {
        uVar20 = 1;
        uVar19 = 0;
        iVar14 = 0;
        uVar5 = 0;
      }
      else {
        puVar9 = *(uint **)(puVar6 + 10);
        if (*(uint **)(puVar6 + 10) == (uint *)0x0) {
          puVar9 = puVar7;
        }
        uVar5 = *puVar9;
        if (uVar5 == 0) {
          iVar14 = uVar12 + 0x1e;
          if (-1 < (int)(uVar12 - 1)) {
            iVar14 = uVar12 - 1;
          }
          uVar19 = 0;
          uVar20 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar20 = uVar19;
          }
          iVar14 = 0;
          do {
            if (uVar20 == uVar19) goto LAB_143baac0a;
            iVar14 = iVar14 + 0x20;
            uVar5 = puVar9[uVar19 + 1];
            uVar19 = uVar19 + 1;
          } while (uVar5 == 0);
        }
        else {
          uVar19 = 0;
          iVar14 = 0;
        }
        uVar20 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar20 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)uVar12 <= (int)uVar5) {
          uVar5 = uVar12;
        }
      }
      if (uVar5 != uVar12) {
        uVar21 = 0xffffffff;
        local_180 = param_1;
        local_178 = uVar13;
        local_170 = puVar7;
        do {
          uVar3 = local_50;
          uVar1 = *(ulonglong *)(*(longlong *)(puVar6 + 2) + (longlong)(int)uVar5 * 0x10);
          lVar16 = *param_2;
          if (*(int *)(lVar16 + 0x10) != *(int *)(lVar16 + 0x3c)) {
            lVar17 = lVar16 + 0x40;
            if (*(longlong *)(lVar16 + 0x48) != 0) {
              lVar17 = *(longlong *)(lVar16 + 0x48);
            }
            iVar15 = *(int *)(lVar17 + (ulonglong)
                                       (*(int *)(lVar16 + 0x50) - 1U &
                                       (int)(uVar1 >> 0x20) * 0x17 + (int)uVar1) * 4);
            if (iVar15 != -1) {
              do {
                if (*(ulonglong *)(*(longlong *)(lVar16 + 8) + (longlong)iVar15 * 0x10) == uVar1)
                goto LAB_143baa786;
                iVar15 = *(int *)((longlong)iVar15 * 0x10 + *(longlong *)(lVar16 + 8) + 8);
              } while (iVar15 != -1);
            }
          }
          lVar16 = (longlong)(int)local_50;
          uVar12 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar12);
          if (local_50._4_4_ < uVar12) {
            FUN_146f4cfd4(local_158,uVar3 & 0xffffffff);
            uVar13 = local_178;
            param_1 = local_180;
          }
          puVar8 = local_58;
          if (local_58 == (ulonglong *)0x0) {
            puVar8 = local_158;
          }
          puVar8[lVar16] = uVar1;
          uVar12 = puVar6[0xc];
          puVar7 = local_170;
LAB_143baa786:
          uVar21 = uVar21 & ~(uint)uVar20;
          puVar9 = *(uint **)(puVar6 + 10);
          if (*(uint **)(puVar6 + 10) == (uint *)0x0) {
            puVar9 = puVar7;
          }
          iVar15 = (int)uVar19;
          lVar16 = (longlong)iVar15;
          uVar5 = puVar9[lVar16] & uVar21;
          if (uVar5 == 0) {
            iVar11 = uVar12 + 0x1e;
            if (-1 < (int)(uVar12 - 1)) {
              iVar11 = uVar12 - 1;
            }
            iVar11 = iVar11 >> 5;
            iVar14 = iVar14 + 0x20;
            iVar10 = iVar11;
            if (iVar11 < iVar15) {
              iVar10 = iVar15;
            }
            uVar13 = local_178;
            if (iVar15 < iVar11) {
              lVar17 = 0;
              do {
                uVar5 = puVar9[lVar16 + lVar17 + 1];
                if (uVar5 != 0) {
                  uVar19 = (ulonglong)(iVar15 + (int)lVar17 + 1);
                  uVar21 = 0xffffffff;
                  goto LAB_143baa7fe;
                }
                iVar14 = iVar14 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar10 - lVar16 != lVar17);
              uVar21 = 0xffffffff;
              iVar15 = iVar10;
            }
            uVar19 = (ulonglong)(iVar15 + 1);
            puVar7 = local_170;
            uVar5 = uVar12;
          }
          else {
LAB_143baa7fe:
            uVar20 = (ulonglong)(-uVar5 & uVar5);
            uVar1 = uVar20 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            uVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if ((int)uVar12 <= (int)uVar5) {
              uVar5 = uVar12;
            }
          }
        } while (uVar5 != (uint)uVar13);
        lVar16 = (longlong)(int)local_50;
        if (0 < lVar16) {
          puVar8 = local_158;
          if (local_58 != (ulonglong *)0x0) {
            puVar8 = local_58;
          }
          lVar17 = 0;
          do {
            FUN_14838391e(*param_1 + 8,*(undefined8 *)((longlong)puVar8 + lVar17));
            lVar17 = lVar17 + 8;
          } while (lVar16 * 8 != lVar17);
          goto LAB_143bab102;
        }
      }
      goto LAB_143baac0a;
    }
    if (param_3 != '\x01') {
      if (param_3 == '\0') {
        uVar12 = puVar7[0xc];
        if (uVar12 == 0) {
          uVar19 = 1;
          iVar14 = 0;
          uVar13 = 0;
          uVar5 = 0;
        }
        else {
          puVar6 = *(uint **)(puVar7 + 10);
          if (*(uint **)(puVar7 + 10) == (uint *)0x0) {
            puVar6 = puVar7 + 6;
          }
          uVar5 = *puVar6;
          if (uVar5 == 0) {
            iVar14 = uVar12 + 0x1e;
            if (-1 < (int)(uVar12 - 1)) {
              iVar14 = uVar12 - 1;
            }
            uVar13 = 0;
            uVar19 = (ulonglong)(uint)(iVar14 >> 5);
            if (iVar14 >> 5 < 1) {
              uVar19 = uVar13;
            }
            iVar14 = 0;
            do {
              if (uVar19 == uVar13) goto LAB_143baac1c;
              iVar14 = iVar14 + 0x20;
              uVar5 = puVar6[uVar13 + 1];
              uVar13 = uVar13 + 1;
            } while (uVar5 == 0);
          }
          else {
            iVar14 = 0;
            uVar13 = 0;
          }
          uVar19 = (ulonglong)(-uVar5 & uVar5);
          uVar20 = uVar19 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar12 <= (int)uVar5) {
            uVar5 = uVar12;
          }
        }
        if (uVar5 != uVar12) {
          uVar21 = 0xffffffff;
          do {
            local_158[0] = *(ulonglong *)(*(longlong *)(puVar7 + 2) + (longlong)(int)uVar5 * 0x10);
            FUN_1403458a2(*param_1 + 8,local_160,local_158,0);
            uVar21 = ~(uint)uVar19 & uVar21;
            puVar6 = *(uint **)(puVar7 + 10);
            if (*(uint **)(puVar7 + 10) == (uint *)0x0) {
              puVar6 = puVar7 + 6;
            }
            uVar2 = puVar7[0xc];
            iVar15 = (int)uVar13;
            lVar16 = (longlong)iVar15;
            uVar5 = puVar6[lVar16] & uVar21;
            if (uVar5 == 0) {
              iVar11 = uVar2 + 0x1e;
              if (-1 < (int)(uVar2 - 1)) {
                iVar11 = uVar2 - 1;
              }
              iVar11 = iVar11 >> 5;
              iVar14 = iVar14 + 0x20;
              iVar10 = iVar11;
              if (iVar11 < iVar15) {
                iVar10 = iVar15;
              }
              if (iVar15 < iVar11) {
                lVar17 = 0;
                do {
                  uVar5 = puVar6[lVar16 + lVar17 + 1];
                  if (uVar5 != 0) {
                    uVar13 = (ulonglong)(iVar15 + (int)lVar17 + 1);
                    uVar21 = 0xffffffff;
                    goto LAB_143baa979;
                  }
                  iVar14 = iVar14 + 0x20;
                  lVar17 = lVar17 + 1;
                } while (iVar10 - lVar16 != lVar17);
                uVar21 = 0xffffffff;
                iVar15 = iVar10;
              }
              uVar13 = (ulonglong)(iVar15 + 1);
              uVar5 = uVar2;
            }
            else {
LAB_143baa979:
              uVar19 = (ulonglong)(-uVar5 & uVar5);
              uVar20 = uVar19 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar20 != 0) {
                for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              uVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
              if ((int)uVar2 <= (int)uVar5) {
                uVar5 = uVar2;
              }
            }
          } while (uVar5 != uVar12);
        }
      }
      goto LAB_143baac1c;
    }
    if (puVar7[4] == puVar7[0xf]) goto LAB_143baac1c;
    uVar12 = puVar7[0xc];
    if (uVar12 == 0) {
      uVar20 = 1;
      iVar14 = 0;
      uVar13 = 0;
      uVar5 = 0;
    }
    else {
      puVar9 = *(uint **)(puVar7 + 10);
      if (*(uint **)(puVar7 + 10) == (uint *)0x0) {
        puVar9 = puVar7 + 6;
      }
      uVar5 = *puVar9;
      if (uVar5 == 0) {
        iVar14 = uVar12 + 0x1e;
        if (-1 < (int)(uVar12 - 1)) {
          iVar14 = uVar12 - 1;
        }
        uVar13 = 0;
        uVar19 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar19 = uVar13;
        }
        iVar14 = 0;
        do {
          if (uVar19 == uVar13) goto LAB_143bab064;
          iVar14 = iVar14 + 0x20;
          uVar5 = puVar9[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar5 == 0);
      }
      else {
        iVar14 = 0;
        uVar13 = 0;
      }
      uVar20 = (ulonglong)(-uVar5 & uVar5);
      uVar19 = uVar20 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if ((int)uVar12 <= (int)uVar5) {
        uVar5 = uVar12;
      }
    }
    if (uVar5 != uVar12) {
      uVar21 = 0xffffffff;
      do {
        FUN_14838391e(*param_1 + 8,
                      *(undefined8 *)(*(longlong *)(puVar7 + 2) + (longlong)(int)uVar5 * 0x10));
        uVar21 = ~(uint)uVar20 & uVar21;
        puVar6 = *(uint **)(puVar7 + 10);
        if (*(uint **)(puVar7 + 10) == (uint *)0x0) {
          puVar6 = puVar7 + 6;
        }
        uVar2 = puVar7[0xc];
        iVar15 = (int)uVar13;
        lVar16 = (longlong)iVar15;
        uVar5 = puVar6[lVar16] & uVar21;
        if (uVar5 == 0) {
          iVar11 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar11 = uVar2 - 1;
          }
          iVar11 = iVar11 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar10 = iVar11;
          if (iVar11 < iVar15) {
            iVar10 = iVar15;
          }
          if (iVar15 < iVar11) {
            lVar17 = 0;
            do {
              uVar5 = puVar6[lVar16 + lVar17 + 1];
              if (uVar5 != 0) {
                uVar13 = (ulonglong)(iVar15 + (int)lVar17 + 1);
                uVar21 = 0xffffffff;
                goto LAB_143baaea3;
              }
              iVar14 = iVar14 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar10 - lVar16 != lVar17);
            uVar21 = 0xffffffff;
            lVar16 = (longlong)iVar10;
          }
          uVar13 = lVar16 + 1U & 0xffffffff;
          uVar5 = uVar2;
        }
        else {
LAB_143baaea3:
          uVar20 = (ulonglong)(-uVar5 & uVar5);
          uVar19 = uVar20 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar5 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar5) {
            uVar5 = uVar2;
          }
        }
      } while (uVar5 != uVar12);
      goto LAB_143bab061;
    }
  }
LAB_143bab064:
  cVar4 = FUN_1483b996c(puVar6 + 2);
  if (cVar4 != '\0') {
    uVar12 = 1;
    if (3 < puVar6[4] - puVar6[0xf]) {
      uVar13 = (ulonglong)(puVar6[4] - puVar6[0xf] & 0xfffffffe) + 0xf;
      lVar16 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar12 = 1 << ((byte)lVar16 & 0x1f);
    }
    puVar6[0x14] = uVar12;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1a8);
  }
LAB_143baac1c:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bab15a FUN_143bab15a body=4763 status=ok
// SIG undefined FUN_143bab15a(void)

undefined8 FUN_143bab15a(undefined8 *param_1,longlong ****param_2,longlong ****param_3,char param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong ****pppplVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iVar14;
  ulonglong uVar15;
  int *piVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_178 [32];
  longlong ***local_158;
  longlong ***local_150;
  uint *local_148;
  code *local_140;
  longlong ***local_138;
  code *local_130;
  longlong ***local_128;
  code *local_120;
  longlong ***local_118;
  code *local_110;
  longlong ***local_108;
  longlong ***local_100;
  longlong ***local_f8;
  longlong ***local_f0;
  code *local_e8;
  longlong ***local_e0;
  code *local_d8;
  longlong ***local_d0;
  code *local_c8;
  longlong ***local_c0;
  code *local_b8;
  longlong ***local_b0;
  longlong ***local_a8;
  undefined8 *local_a0;
  longlong ***local_98;
  ulonglong uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *(undefined4 *)(param_3 + 1) = 0;
  local_150 = (longlong ***)param_2;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_14481578e(param_3,0);
  }
  local_a8 = local_150;
  local_a0 = param_1;
  if (param_4 == '\x03') {
    piVar16 = (int *)*param_1;
    if ((piVar16[1] != 1) || (*piVar16 != 1)) goto LAB_143bab224;
LAB_143bab3ab:
    uVar20 = piVar16[0xc];
    puVar13 = (uint *)(ulonglong)uVar20;
    if (uVar20 == 0) {
      uVar15 = 1;
      iVar14 = 0;
      uVar12 = 0;
      uVar6 = 0;
    }
    else {
      puVar5 = *(uint **)(piVar16 + 10);
      if (*(uint **)(piVar16 + 10) == (uint *)0x0) {
        puVar5 = (uint *)(piVar16 + 6);
      }
      uVar6 = *puVar5;
      if (uVar6 == 0) {
        iVar14 = uVar20 + 0x1e;
        if (-1 < (int)(uVar20 - 1)) {
          iVar14 = uVar20 - 1;
        }
        uVar12 = 0;
        uVar15 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar15 = uVar12;
        }
        iVar14 = 0;
        do {
          if (uVar15 == uVar12) goto LAB_143bab67a;
          iVar14 = iVar14 + 0x20;
          uVar6 = puVar5[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar6 == 0);
      }
      else {
        iVar14 = 0;
        uVar12 = 0;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar15 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar6 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if ((int)uVar20 <= (int)uVar6) {
        uVar6 = uVar20;
      }
    }
    uVar4 = 3;
    if (uVar6 == uVar20) goto LAB_143babede;
    uVar21 = 0xffffffff;
    local_158 = (longlong ***)param_3;
    local_148 = puVar13;
    do {
      uVar1 = *(ulonglong *)(*(longlong *)(piVar16 + 2) + (longlong)(int)uVar6 * 0x10);
      uVar6 = (uint)uVar1;
      if (((-1 < (int)uVar6) &&
          ((int)uVar6 < *(int *)(local_150 + 4) * 0x200 + *(int *)((longlong)local_150 + 0x24))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((longlong)local_150[5] + (ulonglong)((uint)(uVar1 >> 6) & 0x1fffff8)
                               ) + (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        iVar3 = *(int *)(param_3 + 1);
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_1446f48e2(param_3,iVar3);
          param_3 = (longlong ****)local_158;
        }
        *(uint *)((longlong)*param_3 + (longlong)iVar3 * 4) = uVar6;
        uVar20 = piVar16[0xc];
        puVar13 = local_148;
      }
      uVar21 = uVar21 & ~(uint)uVar15;
      puVar5 = *(uint **)(piVar16 + 10);
      if (*(uint **)(piVar16 + 10) == (uint *)0x0) {
        puVar5 = (uint *)(piVar16 + 6);
      }
      iVar3 = (int)uVar12;
      lVar17 = (longlong)iVar3;
      uVar6 = puVar5[lVar17] & uVar21;
      if (uVar6 == 0) {
        iVar7 = uVar20 + 0x1e;
        if (-1 < (int)(uVar20 - 1)) {
          iVar7 = uVar20 - 1;
        }
        iVar7 = iVar7 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar19 = iVar7;
        if (iVar7 < iVar3) {
          iVar19 = iVar3;
        }
        if (iVar3 < iVar7) {
          lVar18 = 0;
          do {
            uVar6 = puVar5[lVar17 + lVar18 + 1];
            if (uVar6 != 0) {
              uVar12 = (ulonglong)(iVar3 + (int)lVar18 + 1);
              uVar21 = 0xffffffff;
              goto LAB_143babb18;
            }
            iVar14 = iVar14 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar19 - lVar17 != lVar18);
          uVar21 = 0xffffffff;
          iVar3 = iVar19;
        }
        uVar12 = (ulonglong)(iVar3 + 1);
        uVar6 = uVar20;
      }
      else {
LAB_143babb18:
        uVar15 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar15 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar6 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar20 <= (int)uVar6) {
          uVar6 = uVar20;
        }
      }
    } while (uVar6 != (uint)puVar13);
LAB_143bab67a:
    uVar4 = 3;
    goto LAB_143babede;
  }
  if (param_4 == '\x01') {
    piVar16 = (int *)*param_1;
    if ((piVar16[1] != 1) || (*piVar16 != 4)) goto LAB_143bab224;
LAB_143bab971:
    puVar13 = (uint *)(piVar16 + 6);
    iVar14 = piVar16[0xc];
    if (iVar14 == 0) {
      uVar15 = 1;
      iVar7 = 0;
      uVar12 = 0;
      iVar3 = 0;
    }
    else {
      puVar5 = *(uint **)(piVar16 + 10);
      if (*(uint **)(piVar16 + 10) == (uint *)0x0) {
        puVar5 = puVar13;
      }
      uVar20 = *puVar5;
      if (uVar20 == 0) {
        iVar3 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar3 = iVar14 + -1;
        }
        uVar12 = 0;
        uVar15 = (ulonglong)(uint)(iVar3 >> 5);
        if (iVar3 >> 5 < 1) {
          uVar15 = uVar12;
        }
        iVar7 = 0;
        do {
          if (uVar15 == uVar12) goto LAB_143bab860;
          iVar7 = iVar7 + 0x20;
          uVar20 = puVar5[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar20 == 0);
      }
      else {
        iVar7 = 0;
        uVar12 = 0;
      }
      uVar15 = (ulonglong)(-uVar20 & uVar20);
      uVar1 = uVar15 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar3 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar14 <= iVar3) {
        iVar3 = iVar14;
      }
    }
    uVar4 = 1;
    if (iVar3 == iVar14) goto LAB_143babede;
    uVar20 = 0xffffffff;
    local_158 = (longlong ***)param_3;
    local_148 = puVar13;
    iVar19 = iVar14;
    do {
      uVar1 = *(ulonglong *)(*(longlong *)(piVar16 + 2) + (longlong)iVar3 * 0x10);
      uVar6 = (uint)uVar1;
      if (((-1 < (int)uVar6) &&
          ((int)uVar6 < *(int *)(local_150 + 0x28) * 0x200 + *(int *)((longlong)local_150 + 0x144)))
         && ((ushort)(*(short *)(*(longlong *)
                                  ((longlong)local_150[0x29] +
                                  (ulonglong)((uint)(uVar1 >> 6) & 0x1fffff8)) +
                                (ulonglong)(uVar6 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        iVar3 = *(int *)(param_3 + 1);
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_1446f48e2(param_3,iVar3);
          puVar13 = local_148;
          param_3 = (longlong ****)local_158;
        }
        *(uint *)((longlong)*param_3 + (longlong)iVar3 * 4) = uVar6;
        iVar19 = piVar16[0xc];
      }
      uVar20 = uVar20 & ~(uint)uVar15;
      puVar5 = *(uint **)(piVar16 + 10);
      if (*(uint **)(piVar16 + 10) == (uint *)0x0) {
        puVar5 = puVar13;
      }
      iVar3 = (int)uVar12;
      lVar17 = (longlong)iVar3;
      uVar6 = puVar5[lVar17] & uVar20;
      if (uVar6 == 0) {
        iVar9 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar9 = iVar19 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar8 = iVar9;
        if (iVar9 < iVar3) {
          iVar8 = iVar3;
        }
        if (iVar3 < iVar9) {
          lVar18 = 0;
          do {
            uVar6 = puVar5[lVar17 + lVar18 + 1];
            if (uVar6 != 0) {
              uVar12 = (ulonglong)(iVar3 + (int)lVar18 + 1);
              uVar20 = 0xffffffff;
              goto LAB_143babdc3;
            }
            iVar7 = iVar7 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar8 - lVar17 != lVar18);
          uVar20 = 0xffffffff;
          iVar3 = iVar8;
        }
        uVar12 = (ulonglong)(iVar3 + 1);
        puVar13 = local_148;
        iVar3 = iVar19;
      }
      else {
LAB_143babdc3:
        uVar15 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar15 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar3 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar19 <= iVar3) {
          iVar3 = iVar19;
        }
      }
    } while (iVar3 != iVar14);
LAB_143bab860:
    uVar4 = 1;
    goto LAB_143babede;
  }
  if (param_4 == '\x05') {
    if (((int *)*param_1)[1] != 2) goto LAB_143bab224;
    bVar22 = *(int *)*param_1 == 4;
LAB_143bab226:
    if ((param_4 == '\0') || (bVar22)) {
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 2) {
        puVar13 = (uint *)0x0;
        uVar4 = 0;
        if (*piVar16 != 4) goto LAB_143babede;
        iVar14 = piVar16[0xc];
        if (iVar14 == 0) {
          uVar12 = 1;
          iVar7 = 0;
          iVar3 = 0;
        }
        else {
          puVar5 = *(uint **)(piVar16 + 10);
          if (*(uint **)(piVar16 + 10) == (uint *)0x0) {
            puVar5 = (uint *)(piVar16 + 6);
          }
          uVar20 = *puVar5;
          if (uVar20 == 0) {
            iVar3 = iVar14 + 0x1e;
            if (-1 < iVar14 + -1) {
              iVar3 = iVar14 + -1;
            }
            puVar13 = (uint *)0x0;
            puVar10 = (uint *)(ulonglong)(uint)(iVar3 >> 5);
            if (iVar3 >> 5 < 1) {
              puVar10 = puVar13;
            }
            iVar7 = 0;
            do {
              if (puVar10 == puVar13) goto LAB_143bac21f;
              iVar7 = iVar7 + 0x20;
              uVar20 = puVar5[(longlong)puVar13 + 1];
              puVar13 = (uint *)((longlong)puVar13 + 1);
            } while (uVar20 == 0);
          }
          else {
            puVar13 = (uint *)0x0;
            iVar7 = 0;
          }
          uVar12 = (ulonglong)(-uVar20 & uVar20);
          uVar15 = uVar12 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar3 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar14 <= iVar3) {
            iVar3 = iVar14;
          }
        }
        uVar4 = 5;
        if (iVar3 == iVar14) goto LAB_143babede;
        uVar20 = 0xffffffff;
        do {
          uVar2 = *(undefined4 *)(*(longlong *)(piVar16 + 2) + 4 + (longlong)iVar3 * 0x10);
          iVar3 = *(int *)(param_3 + 1);
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            local_150 = (longlong ***)CONCAT44(local_150._4_4_,iVar7);
            local_148 = puVar13;
            FUN_1446f48e2(param_3,iVar3);
            puVar13 = local_148;
            iVar7 = (int)local_150;
          }
          *(undefined4 *)((longlong)*param_3 + (longlong)iVar3 * 4) = uVar2;
          uVar20 = uVar20 & ~(uint)uVar12;
          puVar5 = *(uint **)(piVar16 + 10);
          if (*(uint **)(piVar16 + 10) == (uint *)0x0) {
            puVar5 = (uint *)(piVar16 + 6);
          }
          iVar19 = piVar16[0xc];
          iVar3 = (int)puVar13;
          lVar17 = (longlong)iVar3;
          uVar6 = puVar5[lVar17] & uVar20;
          if (uVar6 == 0) {
            iVar9 = iVar19 + 0x1e;
            if (-1 < iVar19 + -1) {
              iVar9 = iVar19 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar7 = iVar7 + 0x20;
            iVar8 = iVar9;
            if (iVar9 < iVar3) {
              iVar8 = iVar3;
            }
            if (iVar3 < iVar9) {
              lVar18 = 0;
              do {
                uVar6 = puVar5[lVar17 + lVar18 + 1];
                if (uVar6 != 0) {
                  puVar13 = (uint *)(ulonglong)(iVar3 + (int)lVar18 + 1);
                  uVar20 = 0xffffffff;
                  goto LAB_143babc4e;
                }
                iVar7 = iVar7 + 0x20;
                lVar18 = lVar18 + 1;
              } while (iVar8 - lVar17 != lVar18);
              uVar20 = 0xffffffff;
              iVar3 = iVar8;
            }
            puVar13 = (uint *)(ulonglong)(iVar3 + 1);
            iVar3 = iVar19;
          }
          else {
LAB_143babc4e:
            uVar12 = (ulonglong)(-uVar6 & uVar6);
            uVar15 = uVar12 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar3 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar19 <= iVar3) {
              iVar3 = iVar19;
            }
          }
        } while (iVar3 != iVar14);
LAB_143bac21f:
        uVar4 = 5;
        goto LAB_143babede;
      }
      if (piVar16[1] == 1) {
        iVar14 = *piVar16;
        if (iVar14 == 4) goto LAB_143bab971;
        if (iVar14 == 2) goto LAB_143bab93c;
        if (iVar14 == 1) goto LAB_143bab3ab;
      }
      goto LAB_143babedc;
    }
    if (param_4 == '\x02') {
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_98 = (longlong ***)0x0;
      uStack_90 = 0;
      local_6c = 0x80;
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 2) {
        if (*piVar16 == 4) {
          local_108 = (longlong ***)&local_100;
          local_100 = local_150;
          local_f8 = (longlong ***)&local_98;
          local_110 = FUN_143bb40de;
          local_f0 = (longlong ***)param_3;
          FUN_143bac3f6(&local_a8);
          goto LAB_143bab8ad;
        }
      }
      else if (piVar16[1] == 1) {
        local_e0 = (longlong ***)&local_100;
        local_100 = local_150;
        local_f8 = (longlong ***)&local_98;
        local_e8 = FUN_143bb405c;
        local_f0 = (longlong ***)param_3;
        FUN_14838690f(piVar16,local_150,&local_e8,0);
LAB_143bab8ad:
        local_50 = 0;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        uVar12 = uStack_90 >> 0x20;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        if ((int)uVar12 != 0) {
          FUN_1447a08a2(&local_98,0);
        }
        uStack_68 = 0xffffffff;
        local_64 = 0;
        local_70 = 0;
        if (0x80 < local_6c) {
          local_6c = 0x80;
          FUN_1446efbd8(local_88,0);
        }
        if (local_78 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if ((longlong ****)local_98 != (longlong ****)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143bab96a;
      }
    }
    else if (param_4 == '\x01') {
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_98 = (longlong ***)0x0;
      uStack_90 = 0;
      local_6c = 0x80;
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 2) {
        if (*piVar16 == 4) {
          local_d0 = (longlong ***)&local_100;
          local_d8 = FUN_143bb4028;
          local_100 = (longlong ***)param_3;
          FUN_143bac3f6(&local_a8);
          goto LAB_143bab7d4;
        }
      }
      else if (piVar16[1] == 1) {
        local_100 = (longlong ***)&local_98;
        local_c0 = (longlong ***)&local_100;
        local_c8 = FUN_143bb3fde;
        uVar12 = 0;
        local_158 = (longlong ***)param_3;
        FUN_148385b4a(piVar16,local_150,&local_c8,0);
        iVar14 = local_70;
        if (local_70 == 0) {
          uVar15 = 1;
          iVar7 = 0;
          iVar3 = 0;
        }
        else {
          puVar13 = local_78;
          if (local_78 == (uint *)0x0) {
            puVar13 = local_88;
          }
          uVar20 = *puVar13;
          if (uVar20 == 0) {
            iVar3 = local_70 + 0x1e;
            if (-1 < local_70 + -1) {
              iVar3 = local_70 + -1;
            }
            uVar12 = 0;
            uVar15 = (ulonglong)(uint)(iVar3 >> 5);
            if (iVar3 >> 5 < 1) {
              uVar15 = uVar12;
            }
            iVar7 = 0;
            do {
              if (uVar15 == uVar12) goto LAB_143bab7d4;
              iVar7 = iVar7 + 0x20;
              uVar20 = puVar13[uVar12 + 1];
              uVar12 = uVar12 + 1;
            } while (uVar20 == 0);
          }
          else {
            uVar12 = 0;
            iVar7 = 0;
          }
          uVar15 = (ulonglong)(-uVar20 & uVar20);
          uVar1 = uVar15 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar3 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (local_70 <= iVar3) {
            iVar3 = local_70;
          }
        }
        if (iVar3 != local_70) {
          uVar20 = 0xffffffff;
          pppplVar11 = (longlong ****)local_158;
          do {
            uVar2 = *(undefined4 *)((longlong)local_98 + (longlong)iVar3 * 0xc);
            iVar3 = *(int *)(pppplVar11 + 1);
            *(uint *)(pppplVar11 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)pppplVar11 + 0xc) < iVar3 + 1U) {
              FUN_1446f48e2(pppplVar11,iVar3);
              pppplVar11 = (longlong ****)local_158;
            }
            *(undefined4 *)((longlong)*pppplVar11 + (longlong)iVar3 * 4) = uVar2;
            uVar20 = uVar20 & ~(uint)uVar15;
            puVar13 = local_78;
            if (local_78 == (uint *)0x0) {
              puVar13 = local_88;
            }
            iVar3 = (int)uVar12;
            lVar17 = (longlong)iVar3;
            uVar6 = puVar13[lVar17] & uVar20;
            if (uVar6 == 0) {
              iVar19 = local_70 + 0x1e;
              if (-1 < local_70 + -1) {
                iVar19 = local_70 + -1;
              }
              iVar19 = iVar19 >> 5;
              iVar7 = iVar7 + 0x20;
              iVar9 = iVar19;
              if (iVar19 < iVar3) {
                iVar9 = iVar3;
              }
              if (iVar3 < iVar19) {
                lVar18 = 0;
                do {
                  uVar6 = puVar13[lVar17 + lVar18 + 1];
                  if (uVar6 != 0) {
                    uVar12 = (ulonglong)(iVar3 + (int)lVar18 + 1);
                    uVar20 = 0xffffffff;
                    goto LAB_143bac126;
                  }
                  iVar7 = iVar7 + 0x20;
                  lVar18 = lVar18 + 1;
                } while (iVar9 - lVar17 != lVar18);
                uVar20 = 0xffffffff;
                iVar3 = iVar9;
              }
              uVar12 = (ulonglong)(iVar3 + 1);
              pppplVar11 = (longlong ****)local_158;
              iVar3 = local_70;
            }
            else {
LAB_143bac126:
              uVar15 = (ulonglong)(-uVar6 & uVar6);
              uVar1 = uVar15 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar3 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              if (local_70 <= iVar3) {
                iVar3 = local_70;
              }
            }
          } while (iVar3 != iVar14);
        }
LAB_143bab7d4:
        local_50 = 0;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        uVar12 = uStack_90 >> 0x20;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        if ((int)uVar12 != 0) {
          FUN_1447a08a2(&local_98,0);
        }
        uStack_68 = 0xffffffff;
        local_64 = 0;
        local_70 = 0;
        if (0x80 < local_6c) {
          local_6c = 0x80;
          FUN_1446efbd8(local_88,0);
        }
        if (local_78 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if ((longlong ****)local_98 != (longlong ****)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143bab860;
      }
    }
    else if (param_4 == '\x03') {
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_98 = (longlong ***)0x0;
      uStack_90 = 0;
      local_6c = 0x80;
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      piVar16 = (int *)*param_1;
      if (piVar16[1] == 2) {
        if (*piVar16 == 4) {
          local_128 = (longlong ***)&local_100;
          local_100 = local_150;
          local_f8 = (longlong ***)&local_98;
          local_130 = FUN_143bb423e;
          local_158 = (longlong ***)param_3;
          FUN_143bac3f6(&local_a8);
          iVar14 = local_70;
          if (local_70 == 0) {
            uVar15 = 1;
            uVar12 = 0;
            iVar7 = 0;
            iVar3 = 0;
          }
          else {
            puVar13 = local_78;
            if (local_78 == (uint *)0x0) {
              puVar13 = local_88;
            }
            uVar20 = *puVar13;
            if (uVar20 == 0) {
              iVar3 = local_70 + 0x1e;
              if (-1 < local_70 + -1) {
                iVar3 = local_70 + -1;
              }
              uVar12 = 0;
              uVar15 = (ulonglong)(uint)(iVar3 >> 5);
              if (iVar3 >> 5 < 1) {
                uVar15 = uVar12;
              }
              iVar7 = 0;
              do {
                if (uVar15 == uVar12) goto LAB_143bab5ee;
                iVar7 = iVar7 + 0x20;
                uVar20 = puVar13[uVar12 + 1];
                uVar12 = uVar12 + 1;
              } while (uVar20 == 0);
            }
            else {
              uVar12 = 0;
              iVar7 = 0;
            }
            uVar15 = (ulonglong)(-uVar20 & uVar20);
            uVar1 = uVar15 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar3 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (local_70 <= iVar3) {
              iVar3 = local_70;
            }
          }
          if (iVar3 != local_70) {
            uVar20 = 0xffffffff;
            pppplVar11 = (longlong ****)local_158;
            do {
              uVar2 = *(undefined4 *)((longlong)local_98 + (longlong)iVar3 * 0xc);
              iVar3 = *(int *)(pppplVar11 + 1);
              *(uint *)(pppplVar11 + 1) = iVar3 + 1U;
              if (*(uint *)((longlong)pppplVar11 + 0xc) < iVar3 + 1U) {
                FUN_1446f48e2(pppplVar11,iVar3);
                pppplVar11 = (longlong ****)local_158;
              }
              *(undefined4 *)((longlong)*pppplVar11 + (longlong)iVar3 * 4) = uVar2;
              uVar20 = uVar20 & ~(uint)uVar15;
              puVar13 = local_78;
              if (local_78 == (uint *)0x0) {
                puVar13 = local_88;
              }
              iVar3 = (int)uVar12;
              lVar17 = (longlong)iVar3;
              uVar6 = puVar13[lVar17] & uVar20;
              if (uVar6 == 0) {
                iVar19 = local_70 + 0x1e;
                if (-1 < local_70 + -1) {
                  iVar19 = local_70 + -1;
                }
                iVar19 = iVar19 >> 5;
                iVar7 = iVar7 + 0x20;
                iVar9 = iVar19;
                if (iVar19 < iVar3) {
                  iVar9 = iVar3;
                }
                if (iVar3 < iVar19) {
                  lVar18 = 0;
                  do {
                    uVar6 = puVar13[lVar17 + lVar18 + 1];
                    if (uVar6 != 0) {
                      uVar12 = (ulonglong)(iVar3 + (int)lVar18 + 1);
                      uVar20 = 0xffffffff;
                      goto LAB_143bac004;
                    }
                    iVar7 = iVar7 + 0x20;
                    lVar18 = lVar18 + 1;
                  } while (iVar9 - lVar17 != lVar18);
                  uVar20 = 0xffffffff;
                  lVar17 = (longlong)iVar9;
                }
                uVar12 = lVar17 + 1U & 0xffffffff;
                pppplVar11 = (longlong ****)local_158;
                iVar3 = local_70;
              }
              else {
LAB_143bac004:
                uVar15 = (ulonglong)(-uVar6 & uVar6);
                uVar1 = uVar15 * 2 + 1;
                lVar17 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                  }
                }
                iVar3 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                if (local_70 <= iVar3) {
                  iVar3 = local_70;
                }
              }
            } while (iVar3 != iVar14);
          }
          goto LAB_143bab5ee;
        }
      }
      else if (piVar16[1] == 1) {
        local_100 = (longlong ***)&local_98;
        local_118 = (longlong ***)&local_100;
        local_120 = FUN_143bb41bc;
        local_f8 = (longlong ***)param_3;
        FUN_1483842c4(piVar16,local_150,0);
LAB_143bab5ee:
        local_50 = 0;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        uVar12 = uStack_90 >> 0x20;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        if ((int)uVar12 != 0) {
          FUN_1447a08a2(&local_98,0);
        }
        uStack_68 = 0xffffffff;
        local_64 = 0;
        local_70 = 0;
        if (0x80 < local_6c) {
          local_6c = 0x80;
          FUN_1446efbd8(local_88,0);
        }
        if (local_78 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if ((longlong ****)local_98 != (longlong ****)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143bab67a;
      }
    }
    else if ((param_4 == '\x05') && (piVar16 = (int *)*param_1, piVar16[1] == 1)) {
      uVar4 = 0;
      if ((*piVar16 != 4) && (*piVar16 != 1)) goto LAB_143babede;
      local_100 = (longlong ***)&local_98;
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_98 = (longlong ***)0x0;
      uStack_90 = 0;
      local_6c = 0x80;
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      local_138 = (longlong ***)&local_100;
      local_f8 = local_150;
      local_140 = FUN_143bb42e6;
      local_158 = (longlong ***)param_3;
      FUN_148385b4a(piVar16,local_150,&local_140,0);
      iVar14 = local_70;
      if (local_70 == 0) {
        uVar15 = 0;
        uVar12 = 1;
        iVar7 = 0;
        iVar3 = 0;
      }
      else {
        puVar13 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar13 = local_88;
        }
        uVar20 = *puVar13;
        if (uVar20 == 0) {
          iVar3 = local_70 + 0x1e;
          if (-1 < local_70 + -1) {
            iVar3 = local_70 + -1;
          }
          uVar15 = 0;
          uVar12 = (ulonglong)(uint)(iVar3 >> 5);
          if (iVar3 >> 5 < 1) {
            uVar12 = uVar15;
          }
          iVar7 = 0;
          do {
            if (uVar12 == uVar15) goto LAB_143bac193;
            iVar7 = iVar7 + 0x20;
            uVar20 = puVar13[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar20 == 0);
        }
        else {
          uVar15 = 0;
          iVar7 = 0;
        }
        uVar12 = (ulonglong)(-uVar20 & uVar20);
        uVar1 = uVar12 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar3 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar3) {
          iVar3 = local_70;
        }
      }
      if (iVar3 != local_70) {
        uVar20 = 0xffffffff;
        pppplVar11 = (longlong ****)local_158;
        do {
          uVar2 = *(undefined4 *)((longlong)local_98 + (longlong)iVar3 * 0xc);
          iVar3 = *(int *)(pppplVar11 + 1);
          *(uint *)(pppplVar11 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)pppplVar11 + 0xc) < iVar3 + 1U) {
            FUN_1446f48e2(pppplVar11,iVar3);
            pppplVar11 = (longlong ****)local_158;
          }
          *(undefined4 *)((longlong)*pppplVar11 + (longlong)iVar3 * 4) = uVar2;
          uVar20 = uVar20 & ~(uint)uVar12;
          puVar13 = local_78;
          if (local_78 == (uint *)0x0) {
            puVar13 = local_88;
          }
          iVar3 = (int)uVar15;
          lVar17 = (longlong)iVar3;
          uVar6 = puVar13[lVar17] & uVar20;
          if (uVar6 == 0) {
            iVar19 = local_70 + 0x1e;
            if (-1 < local_70 + -1) {
              iVar19 = local_70 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar7 = iVar7 + 0x20;
            iVar9 = iVar19;
            if (iVar19 < iVar3) {
              iVar9 = iVar3;
            }
            if (iVar3 < iVar19) {
              lVar18 = 0;
              do {
                uVar6 = puVar13[lVar17 + lVar18 + 1];
                if (uVar6 != 0) {
                  uVar15 = (ulonglong)(iVar3 + (int)lVar18 + 1);
                  uVar20 = 0xffffffff;
                  goto LAB_143bac2e7;
                }
                iVar7 = iVar7 + 0x20;
                lVar18 = lVar18 + 1;
              } while (iVar9 - lVar17 != lVar18);
              uVar20 = 0xffffffff;
              lVar17 = (longlong)iVar9;
            }
            uVar15 = lVar17 + 1U & 0xffffffff;
            pppplVar11 = (longlong ****)local_158;
            iVar3 = local_70;
          }
          else {
LAB_143bac2e7:
            uVar12 = (ulonglong)(-uVar6 & uVar6);
            uVar1 = uVar12 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar3 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (local_70 <= iVar3) {
              iVar3 = local_70;
            }
          }
        } while (iVar3 != iVar14);
      }
LAB_143bac193:
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar12 = uStack_90 >> 0x20;
      uStack_90 = uStack_90 & 0xffffffff00000000;
      if ((int)uVar12 != 0) {
        FUN_1447a08a2(&local_98,0);
      }
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        FUN_1446efbd8(local_88,0);
      }
      if (local_78 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if ((longlong ****)local_98 != (longlong ****)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143bac21f;
    }
LAB_143babedc:
    uVar4 = 0;
  }
  else {
    if (((param_4 != '\x02') || (piVar16 = (int *)*param_1, piVar16[1] != 1)) || (*piVar16 != 2)) {
LAB_143bab224:
      bVar22 = false;
      goto LAB_143bab226;
    }
LAB_143bab93c:
    local_b0 = (longlong ***)&local_98;
    local_b8 = FUN_143bb3faa;
    local_98 = (longlong ***)param_3;
    FUN_143ba9ede(local_150,piVar16);
LAB_143bab96a:
    uVar4 = 2;
  }
LAB_143babede:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 143bac3f6 FUN_143bac3f6 body=994 status=ok
// SIG undefined FUN_143bac3f6(void)

void FUN_143bac3f6(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  longlong *local_a8;
  undefined1 local_a0 [4];
  uint local_9c;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar16 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  lVar4 = *(longlong *)param_1[1];
  iVar2 = *(int *)(lVar4 + 0x30);
  local_b0 = param_2;
  local_a8 = param_1;
  if (iVar2 == 0) {
    uVar15 = 1;
    iVar17 = 0;
    iVar6 = 0;
  }
  else {
    puVar8 = *(uint **)(lVar4 + 0x28);
    if (*(uint **)(lVar4 + 0x28) == (uint *)0x0) {
      puVar8 = (uint *)(lVar4 + 0x18);
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar16;
      }
      iVar17 = 0;
      do {
        if (uVar15 == uVar16) goto LAB_143bac4e3;
        iVar17 = iVar17 + 0x20;
        uVar14 = puVar8[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar16 = 0;
      iVar17 = 0;
    }
    uVar15 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar15 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar6 = (iVar17 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar14 = 0xffffffff;
    do {
      local_9c = *(uint *)(*(longlong *)(lVar4 + 8) + 4 + (longlong)iVar6 * 0x10);
      FUN_144984904(&local_98,local_a0,&local_9c,0);
      uVar14 = ~(uint)uVar15 & uVar14;
      puVar8 = *(uint **)(lVar4 + 0x28);
      if (*(uint **)(lVar4 + 0x28) == (uint *)0x0) {
        puVar8 = (uint *)(lVar4 + 0x18);
      }
      iVar3 = *(int *)(lVar4 + 0x30);
      iVar6 = (int)uVar16;
      lVar20 = (longlong)iVar6;
      uVar18 = puVar8[lVar20] & uVar14;
      if (uVar18 == 0) {
        iVar12 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar12 = iVar3 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar6) {
          iVar13 = iVar6;
        }
        if (iVar6 < iVar12) {
          lVar21 = 0;
          do {
            uVar18 = puVar8[lVar20 + lVar21 + 1];
            if (uVar18 != 0) {
              uVar16 = (ulonglong)(iVar6 + (int)lVar21 + 1);
              uVar14 = 0xffffffff;
              goto LAB_143bac75c;
            }
            iVar17 = iVar17 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar13 - lVar20 != lVar21);
          uVar14 = 0xffffffff;
          lVar20 = (longlong)iVar13;
        }
        uVar16 = lVar20 + 1U & 0xffffffff;
        iVar6 = iVar3;
      }
      else {
LAB_143bac75c:
        uVar15 = (ulonglong)(-uVar18 & uVar18);
        uVar1 = uVar15 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar6 = (iVar17 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
  }
LAB_143bac4e3:
  plVar5 = local_a8;
  lVar4 = *local_a8;
  uVar18 = *(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144);
  uVar14 = 0;
  if ((uVar18 != 0) &&
     (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x148) - 1U))) {
    uVar7 = 1;
    uVar9 = 1;
    if (1 < (int)uVar18) {
      uVar7 = uVar18;
    }
    do {
      uVar14 = uVar7;
      if (uVar7 == uVar9) break;
      uVar11 = uVar9 >> 9;
      uVar19 = uVar9 & 0x1ff;
      uVar14 = uVar9;
      uVar9 = uVar9 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar4 + 0x148))[uVar11] +
                                         (ulonglong)uVar19 * 2) - 1U));
  }
  if (uVar14 != uVar18) {
    do {
      local_9c = uVar14;
      uVar7 = FUN_146bc96d4(*plVar5,uVar14);
      if ((int)uStack_90 != local_64) {
        puVar10 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar10 = local_60;
        }
        for (iVar2 = *(int *)(puVar10 + (ulonglong)(local_50 - 1U & uVar7) * 4); iVar2 != -1;
            iVar2 = *(int *)(local_98 + (longlong)iVar2 * 0xc + 4)) {
          if (*(uint *)(local_98 + (longlong)iVar2 * 0xc) == uVar7) {
            (*(code *)*local_b0)(local_b0[1],&local_9c);
            break;
          }
        }
      }
      uVar7 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar18) {
        uVar7 = uVar18;
      }
      do {
        uVar9 = uVar7;
        if (uVar7 - 1 == uVar14) break;
        uVar14 = uVar14 + 1;
        uVar9 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar4 + 0x148) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      uVar14 = uVar9;
    } while (uVar14 != uVar18);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar16 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar16 != 0) {
    FUN_1447a08a2(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bac7da FUN_143bac7da body=3140 status=ok
// SIG undefined FUN_143bac7da(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143bac7da(undefined8 *param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  ulonglong uVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  undefined8 *puVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  undefined1 auStack_118 [44];
  int local_ec;
  longlong local_e8;
  ulonglong local_e0;
  uint *local_d8;
  ulonglong local_d0;
  char local_c1;
  undefined1 local_c0 [8];
  undefined8 *local_b8;
  code *local_b0;
  undefined8 *local_a8;
  undefined4 local_9c;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  piVar2 = (int *)*param_1;
  local_e8 = param_2;
  if (piVar2[4] == piVar2[0xf] && param_4 == '\x01') {
    uVar19 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar25 = 0;
    if ((uVar19 != 0) &&
       (uVar25 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar8 = 1;
      uVar15 = 1;
      if (1 < (int)uVar19) {
        uVar8 = uVar19;
      }
      do {
        uVar25 = uVar8;
        if (uVar8 == uVar15) break;
        uVar13 = uVar15 >> 9;
        uVar20 = uVar15 & 0x1ff;
        uVar25 = uVar15;
        uVar15 = uVar15 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar13] +
                                           (ulonglong)uVar20 * 2) - 1U));
    }
    if (uVar25 != uVar19) {
      do {
        local_98 = CONCAT44(local_98._4_4_,uVar25);
        (*(code *)*param_3)(param_3[1],&local_98);
        uVar8 = uVar25 + 1;
        if ((int)(uVar25 + 1) < (int)uVar19) {
          uVar8 = uVar19;
        }
        do {
          uVar15 = uVar8;
          if (uVar8 - 1 == uVar25) break;
          uVar25 = uVar25 + 1;
          uVar15 = uVar25;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(local_e8 + 0x148) +
                                               (ulonglong)(uVar25 >> 9) * 8) +
                                             (ulonglong)(uVar25 & 0x1ff) * 2) - 1U));
        uVar25 = uVar15;
      } while (uVar25 != uVar19);
    }
    goto LAB_143bad3a1;
  }
  if (piVar2[1] == 1) {
    if (*piVar2 == 1) {
      uVar17 = 0;
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0x80;
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      iVar23 = piVar2[0xc];
      if (iVar23 == 0) {
        uVar27 = 1;
        iVar26 = 0;
        iVar6 = 0;
      }
      else {
        puVar9 = *(uint **)(piVar2 + 10);
        if (*(uint **)(piVar2 + 10) == (uint *)0x0) {
          puVar9 = (uint *)(piVar2 + 6);
        }
        uVar25 = *puVar9;
        if (uVar25 == 0) {
          iVar6 = iVar23 + 0x1e;
          if (-1 < iVar23 + -1) {
            iVar6 = iVar23 + -1;
          }
          uVar17 = 0;
          uVar27 = (ulonglong)(uint)(iVar6 >> 5);
          if (iVar6 >> 5 < 1) {
            uVar27 = uVar17;
          }
          iVar26 = 0;
          do {
            if (uVar27 == uVar17) goto LAB_143bad33e;
            iVar26 = iVar26 + 0x20;
            uVar25 = puVar9[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar25 == 0);
        }
        else {
          uVar17 = 0;
          iVar26 = 0;
        }
        uVar27 = (ulonglong)(-uVar25 & uVar25);
        uVar18 = uVar27 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar6 = (iVar26 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar23 <= iVar6) {
          iVar6 = iVar23;
        }
      }
      if (iVar6 != iVar23) {
        uVar25 = 0xffffffff;
        iVar7 = iVar23;
        do {
          uVar18 = *(ulonglong *)(*(longlong *)(piVar2 + 2) + (longlong)iVar6 * 0x10);
          uVar19 = (uint)uVar18;
          if (((-1 < (int)uVar19) &&
              ((int)uVar19 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_2 + 0x28) +
                                   (ulonglong)((uint)(uVar18 >> 6) & 0x1fffff8)) +
                                 (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            local_c0 = (undefined1  [8])&local_98;
            local_a8 = (undefined8 *)local_c0;
            local_b0 = FUN_143bb433e;
            local_b8 = param_3;
            FUN_146c03fd0(param_2,uVar18,&local_b0);
            iVar7 = piVar2[0xc];
            param_2 = local_e8;
          }
          uVar25 = uVar25 & ~(uint)uVar27;
          puVar9 = *(uint **)(piVar2 + 10);
          if (*(uint **)(piVar2 + 10) == (uint *)0x0) {
            puVar9 = (uint *)(piVar2 + 6);
          }
          iVar6 = (int)uVar17;
          lVar21 = (longlong)iVar6;
          uVar19 = puVar9[lVar21] & uVar25;
          if (uVar19 == 0) {
            iVar14 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar14 = iVar7 + -1;
            }
            iVar14 = iVar14 >> 5;
            iVar26 = iVar26 + 0x20;
            iVar11 = iVar14;
            if (iVar14 < iVar6) {
              iVar11 = iVar6;
            }
            if (iVar6 < iVar14) {
              lVar22 = 0;
              do {
                uVar19 = puVar9[lVar21 + lVar22 + 1];
                if (uVar19 != 0) {
                  uVar17 = (ulonglong)(iVar6 + (int)lVar22 + 1);
                  uVar25 = 0xffffffff;
                  goto LAB_143bad2e3;
                }
                iVar26 = iVar26 + 0x20;
                lVar22 = lVar22 + 1;
              } while (iVar11 - lVar21 != lVar22);
              uVar25 = 0xffffffff;
              lVar21 = (longlong)iVar11;
            }
            uVar17 = lVar21 + 1U & 0xffffffff;
            param_2 = local_e8;
            iVar6 = iVar7;
          }
          else {
LAB_143bad2e3:
            uVar27 = (ulonglong)(-uVar19 & uVar19);
            uVar18 = uVar27 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            iVar6 = (iVar26 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            if (iVar7 <= iVar6) {
              iVar6 = iVar7;
            }
          }
        } while (iVar6 != iVar23);
        goto LAB_143bad334;
      }
    }
    else {
      if (*piVar2 != 2) goto LAB_143bacad0;
      uVar17 = 0;
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0x80;
      uStack_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
      puVar9 = (uint *)(piVar2 + 6);
      uVar25 = piVar2[0xc];
      uVar27 = (ulonglong)uVar25;
      if (uVar25 == 0) {
        uVar18 = 1;
        local_ec = 0;
        uVar19 = 0;
      }
      else {
        puVar10 = *(uint **)(piVar2 + 10);
        if (*(uint **)(piVar2 + 10) == (uint *)0x0) {
          puVar10 = puVar9;
        }
        uVar19 = *puVar10;
        if (uVar19 == 0) {
          iVar23 = uVar25 + 0x1e;
          if (-1 < (int)(uVar25 - 1)) {
            iVar23 = uVar25 - 1;
          }
          uVar17 = 0;
          uVar18 = (ulonglong)(uint)(iVar23 >> 5);
          if (iVar23 >> 5 < 1) {
            uVar18 = uVar17;
          }
          local_ec = 0;
          do {
            if (uVar18 == uVar17) goto LAB_143bad33e;
            local_ec = local_ec + 0x20;
            uVar19 = puVar10[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar19 == 0);
        }
        else {
          uVar17 = 0;
          local_ec = 0;
        }
        uVar18 = (ulonglong)(-uVar19 & uVar19);
        uVar1 = uVar18 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        uVar19 = (local_ec - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if ((int)uVar25 <= (int)uVar19) {
          uVar19 = uVar25;
        }
      }
      if (uVar19 != uVar25) {
        uVar8 = 0xffffffff;
        local_e0 = uVar27;
        local_d8 = puVar9;
        do {
          uVar1 = *(ulonglong *)(*(longlong *)(piVar2 + 2) + (longlong)(int)uVar19 * 0x10);
          uVar19 = (uint)uVar1;
          uVar15 = uVar19 & 0xfffffff;
          if ((int)uVar15 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144)) {
            uVar16 = (ulonglong)(uVar15 >> 9);
            uVar19 = uVar19 & 0x1ff;
            if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x148) + uVar16 * 8) +
                                   (ulonglong)uVar19 * 2) - 1U) < 0xfffe) {
              uVar25 = *(uint *)((ulonglong)uVar19 * 0xc +
                                 *(longlong *)(*(longlong *)(param_2 + 0x180) + uVar16 * 8) +
                                (ulonglong)((uint)(uVar1 >> 0x1e) & 3) * 4);
              plVar3 = *(longlong **)
                        (*(longlong *)
                          (*(longlong *)(param_2 + 0x1c0) + (ulonglong)(uVar25 >> 9) * 8) + 8 +
                        (ulonglong)((uVar25 & 0x1ff) << 4));
              bVar5 = 1;
              puVar24 = (undefined8 *)local_c0;
              local_d0 = uVar17;
              local_c0 = (undefined1  [8])plVar3;
              do {
                local_c1 = '\0';
                FUN_1447cbafe(&local_98,&local_9c,puVar24,&local_c1);
                if (local_c1 == '\0') {
                  local_9c = *(undefined4 *)puVar24;
                  (*(code *)*param_3)(param_3[1],&local_9c);
                }
                puVar24 = (undefined8 *)((longlong)local_c0 + 4);
                bVar4 = (bool)(plVar3 < (longlong *)0xffffffff00000000 & bVar5);
                bVar5 = 0;
              } while (bVar4);
              uVar25 = piVar2[0xc];
              puVar9 = local_d8;
              param_2 = local_e8;
              uVar17 = local_d0;
              uVar27 = local_e0;
            }
          }
          uVar8 = uVar8 & ~(uint)uVar18;
          puVar10 = *(uint **)(piVar2 + 10);
          if (*(uint **)(piVar2 + 10) == (uint *)0x0) {
            puVar10 = puVar9;
          }
          iVar23 = (int)uVar17;
          lVar21 = (longlong)iVar23;
          uVar19 = puVar10[lVar21] & uVar8;
          if (uVar19 == 0) {
            iVar6 = uVar25 + 0x1e;
            if (-1 < (int)(uVar25 - 1)) {
              iVar6 = uVar25 - 1;
            }
            iVar6 = iVar6 >> 5;
            local_ec = local_ec + 0x20;
            iVar26 = iVar6;
            if (iVar6 < iVar23) {
              iVar26 = iVar23;
            }
            if (iVar23 < iVar6) {
              lVar22 = 0;
              do {
                uVar19 = puVar10[lVar21 + lVar22 + 1];
                if (uVar19 != 0) {
                  uVar17 = (ulonglong)(iVar23 + (int)lVar22 + 1);
                  uVar8 = 0xffffffff;
                  goto LAB_143bad184;
                }
                local_ec = local_ec + 0x20;
                lVar22 = lVar22 + 1;
              } while (iVar26 - lVar21 != lVar22);
              uVar8 = 0xffffffff;
              lVar21 = (longlong)iVar26;
            }
            uVar17 = lVar21 + 1U & 0xffffffff;
            param_2 = local_e8;
            uVar19 = uVar25;
          }
          else {
LAB_143bad184:
            uVar18 = (ulonglong)(-uVar19 & uVar19);
            uVar1 = uVar18 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            uVar19 = (local_ec - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            if ((int)uVar25 <= (int)uVar19) {
              uVar19 = uVar25;
            }
          }
        } while (uVar19 != (uint)uVar27);
        goto LAB_143bad334;
      }
    }
  }
  else {
    if ((piVar2[1] != 2) || (*piVar2 != 4)) {
LAB_143bacad0:
      iVar23 = piVar2[0xc];
      if (iVar23 == 0) {
        uVar17 = 1;
        iVar26 = 0;
        uVar27 = 0;
        iVar6 = 0;
      }
      else {
        puVar9 = *(uint **)(piVar2 + 10);
        if (*(uint **)(piVar2 + 10) == (uint *)0x0) {
          puVar9 = (uint *)(piVar2 + 6);
        }
        uVar25 = *puVar9;
        if (uVar25 == 0) {
          iVar6 = iVar23 + 0x1e;
          if (-1 < iVar23 + -1) {
            iVar6 = iVar23 + -1;
          }
          uVar27 = 0;
          uVar17 = (ulonglong)(uint)(iVar6 >> 5);
          if (iVar6 >> 5 < 1) {
            uVar17 = uVar27;
          }
          iVar26 = 0;
          do {
            if (uVar17 == uVar27) goto LAB_143bad3a1;
            iVar26 = iVar26 + 0x20;
            uVar25 = puVar9[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar25 == 0);
        }
        else {
          iVar26 = 0;
          uVar27 = 0;
        }
        uVar17 = (ulonglong)(-uVar25 & uVar25);
        uVar18 = uVar17 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar6 = (iVar26 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar23 <= iVar6) {
          iVar6 = iVar23;
        }
      }
      if (iVar6 != iVar23) {
        uVar25 = 0xffffffff;
        iVar7 = iVar23;
        do {
          uVar18 = *(ulonglong *)(*(longlong *)(piVar2 + 2) + (longlong)iVar6 * 0x10);
          uVar19 = (uint)uVar18;
          if (((-1 < (int)uVar19) &&
              ((int)uVar19 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_2 + 0x148) +
                                   (ulonglong)((uint)(uVar18 >> 6) & 0x1fffff8)) +
                                 (ulonglong)(uVar19 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            local_98 = CONCAT44(local_98._4_4_,uVar19);
            (*(code *)*param_3)(param_3[1],&local_98);
            iVar7 = piVar2[0xc];
            param_2 = local_e8;
          }
          uVar25 = uVar25 & ~(uint)uVar17;
          puVar9 = *(uint **)(piVar2 + 10);
          if (*(uint **)(piVar2 + 10) == (uint *)0x0) {
            puVar9 = (uint *)(piVar2 + 6);
          }
          iVar6 = (int)uVar27;
          lVar21 = (longlong)iVar6;
          uVar19 = puVar9[lVar21] & uVar25;
          if (uVar19 == 0) {
            iVar14 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar14 = iVar7 + -1;
            }
            iVar14 = iVar14 >> 5;
            iVar26 = iVar26 + 0x20;
            iVar11 = iVar14;
            if (iVar14 < iVar6) {
              iVar11 = iVar6;
            }
            if (iVar6 < iVar14) {
              lVar22 = 0;
              do {
                uVar19 = puVar9[lVar21 + lVar22 + 1];
                if (uVar19 != 0) {
                  uVar27 = (ulonglong)(iVar6 + (int)lVar22 + 1);
                  uVar25 = 0xffffffff;
                  goto LAB_143bacc4d;
                }
                iVar26 = iVar26 + 0x20;
                lVar22 = lVar22 + 1;
              } while (iVar11 - lVar21 != lVar22);
              uVar25 = 0xffffffff;
              iVar6 = iVar11;
            }
            uVar27 = (ulonglong)(iVar6 + 1);
            param_2 = local_e8;
            iVar6 = iVar7;
          }
          else {
LAB_143bacc4d:
            uVar17 = (ulonglong)(-uVar19 & uVar19);
            uVar18 = uVar17 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            iVar6 = (iVar26 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            if (iVar7 <= iVar6) {
              iVar6 = iVar7;
            }
          }
        } while (iVar6 != iVar23);
      }
      goto LAB_143bad3a1;
    }
    uVar17 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0x80;
    uStack_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    iVar23 = piVar2[0xc];
    if (iVar23 == 0) {
      uVar27 = 1;
      iVar26 = 0;
      iVar6 = 0;
    }
    else {
      puVar9 = *(uint **)(piVar2 + 10);
      if (*(uint **)(piVar2 + 10) == (uint *)0x0) {
        puVar9 = (uint *)(piVar2 + 6);
      }
      uVar25 = *puVar9;
      if (uVar25 == 0) {
        iVar6 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar6 = iVar23 + -1;
        }
        uVar17 = 0;
        uVar27 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar27 = uVar17;
        }
        iVar26 = 0;
        do {
          if (uVar27 == uVar17) goto LAB_143bacd74;
          iVar26 = iVar26 + 0x20;
          uVar25 = puVar9[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar25 == 0);
      }
      else {
        uVar17 = 0;
        iVar26 = 0;
      }
      uVar27 = (ulonglong)(-uVar25 & uVar25);
      uVar18 = uVar27 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar6 = (iVar26 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if (iVar23 <= iVar6) {
        iVar6 = iVar23;
      }
    }
    if (iVar6 != iVar23) {
      uVar25 = 0xffffffff;
      do {
        local_c0._0_4_ = *(undefined4 *)(*(longlong *)(piVar2 + 2) + 4 + (longlong)iVar6 * 0x10);
        FUN_144984904(&local_98,&local_9c,local_c0,0);
        uVar25 = ~(uint)uVar27 & uVar25;
        puVar9 = *(uint **)(piVar2 + 10);
        if (*(uint **)(piVar2 + 10) == (uint *)0x0) {
          puVar9 = (uint *)(piVar2 + 6);
        }
        iVar7 = piVar2[0xc];
        iVar6 = (int)uVar17;
        lVar21 = (longlong)iVar6;
        uVar19 = puVar9[lVar21] & uVar25;
        if (uVar19 == 0) {
          iVar14 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar14 = iVar7 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar26 = iVar26 + 0x20;
          iVar11 = iVar14;
          if (iVar14 < iVar6) {
            iVar11 = iVar6;
          }
          if (iVar6 < iVar14) {
            lVar22 = 0;
            do {
              uVar19 = puVar9[lVar21 + lVar22 + 1];
              if (uVar19 != 0) {
                uVar17 = (ulonglong)(iVar6 + (int)lVar22 + 1);
                uVar25 = 0xffffffff;
                goto LAB_143bacf74;
              }
              iVar26 = iVar26 + 0x20;
              lVar22 = lVar22 + 1;
            } while (iVar11 - lVar21 != lVar22);
            uVar25 = 0xffffffff;
            lVar21 = (longlong)iVar11;
          }
          uVar17 = lVar21 + 1U & 0xffffffff;
          iVar6 = iVar7;
        }
        else {
LAB_143bacf74:
          uVar27 = (ulonglong)(-uVar19 & uVar19);
          uVar18 = uVar27 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar6 = (iVar26 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if (iVar7 <= iVar6) {
            iVar6 = iVar7;
          }
        }
      } while (iVar6 != iVar23);
    }
LAB_143bacd74:
    uVar19 = *(int *)(local_e8 + 0x140) * 0x200 + *(int *)(local_e8 + 0x144);
    uVar25 = 0;
    if ((uVar19 != 0) &&
       (uVar25 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(local_e8 + 0x148) - 1U))) {
      uVar8 = 1;
      uVar15 = 1;
      if (1 < (int)uVar19) {
        uVar8 = uVar19;
      }
      do {
        uVar25 = uVar8;
        if (uVar8 == uVar15) break;
        uVar13 = uVar15 >> 9;
        uVar20 = uVar15 & 0x1ff;
        uVar25 = uVar15;
        uVar15 = uVar15 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_e8 + 0x148))[uVar13] +
                                           (ulonglong)uVar20 * 2) - 1U));
    }
    if (uVar25 != uVar19) {
      do {
        uVar8 = FUN_146bc96d4(local_e8,uVar25);
        if ((int)uStack_90 != local_64) {
          puVar12 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar12 = local_60;
          }
          for (iVar23 = *(int *)(puVar12 + (ulonglong)(local_50 - 1U & uVar8) * 4); iVar23 != -1;
              iVar23 = *(int *)(local_98 + (longlong)iVar23 * 0xc + 4)) {
            if (*(uint *)(local_98 + (longlong)iVar23 * 0xc) == uVar8) {
              local_c0._0_4_ = uVar25;
              (*(code *)*param_3)(param_3[1],local_c0);
              break;
            }
          }
        }
        uVar8 = uVar25 + 1;
        if ((int)(uVar25 + 1) < (int)uVar19) {
          uVar8 = uVar19;
        }
        do {
          uVar15 = uVar8;
          if (uVar8 - 1 == uVar25) break;
          uVar25 = uVar25 + 1;
          uVar15 = uVar25;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(local_e8 + 0x148) +
                                               (ulonglong)(uVar25 >> 9) * 8) +
                                             (ulonglong)(uVar25 & 0x1ff) * 2) - 1U));
        uVar25 = uVar15;
      } while (uVar25 != uVar19);
    }
LAB_143bad334:
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143bad33e:
  uVar17 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar17 != 0) {
    FUN_1447a08a2(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_143bad3a1:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bad420 FUN_143bad420 body=3681 status=ok
// SIG undefined FUN_143bad420(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143bad420(undefined8 *param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  uint *puVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined1 local_158 [36];
  uint local_134;
  int *local_130;
  longlong local_128;
  undefined8 *local_120;
  uint *local_118;
  uint *local_110;
  ulonglong local_108;
  char local_f9;
  undefined8 local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined1 local_e8 [8];
  ulonglong uStack_e0;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_158;
  piVar18 = (int *)*param_1;
  local_120 = param_3;
  if (piVar18[4] == piVar18[0xf] && param_4 == '\x01') {
    uVar16 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
    uVar17 = 0;
    if ((uVar16 != 0) &&
       (uVar17 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
      uVar26 = 1;
      uVar11 = 1;
      if (1 < (int)uVar16) {
        uVar26 = uVar16;
      }
      do {
        uVar17 = uVar26;
        if (uVar26 == uVar11) break;
        uVar10 = uVar11 >> 9;
        uVar19 = uVar11 & 0x1ff;
        uVar17 = uVar11;
        uVar11 = uVar11 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar10] +
                                           (ulonglong)uVar19 * 2) - 1U));
    }
    if (uVar17 != uVar16) {
      do {
        local_98 = CONCAT44(local_98._4_4_,uVar17);
        (*(code *)*local_120)(local_120[1],&local_98);
        uVar26 = uVar17 + 1;
        if ((int)(uVar17 + 1) < (int)uVar16) {
          uVar26 = uVar16;
        }
        do {
          uVar11 = uVar26;
          if (uVar26 - 1 == uVar17) break;
          uVar17 = uVar17 + 1;
          uVar11 = uVar17;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x28) +
                                               (ulonglong)(uVar17 >> 9) * 8) +
                                             (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
        uVar17 = uVar11;
      } while (uVar17 != uVar16);
    }
    goto LAB_143badeac;
  }
  local_130 = piVar18;
  local_128 = param_2;
  if (piVar18[1] == 1) {
    if (*piVar18 == 1) {
      puVar3 = (uint *)(piVar18 + 6);
      iVar22 = piVar18[0xc];
      if (iVar22 == 0) {
        uVar24 = 1;
        iVar14 = 0;
        uVar27 = 0;
        iVar4 = 0;
      }
      else {
        puVar23 = *(uint **)(piVar18 + 10);
        if (*(uint **)(piVar18 + 10) == (uint *)0x0) {
          puVar23 = puVar3;
        }
        uVar17 = *puVar23;
        if (uVar17 == 0) {
          iVar4 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar4 = iVar22 + -1;
          }
          uVar27 = 0;
          uVar24 = (ulonglong)(uint)(iVar4 >> 5);
          if (iVar4 >> 5 < 1) {
            uVar24 = uVar27;
          }
          iVar14 = 0;
          do {
            if (uVar24 == uVar27) goto LAB_143badeac;
            iVar14 = iVar14 + 0x20;
            uVar17 = puVar23[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar17 == 0);
        }
        else {
          iVar14 = 0;
          uVar27 = 0;
        }
        uVar24 = (ulonglong)(-uVar17 & uVar17);
        uVar12 = uVar24 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar4 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar22 <= iVar4) {
          iVar4 = iVar22;
        }
      }
      if (iVar4 != iVar22) {
        uVar17 = 0xffffffff;
        iVar5 = iVar22;
        do {
          uVar12 = *(ulonglong *)(*(longlong *)(piVar18 + 2) + (longlong)iVar4 * 0x10);
          uVar16 = (uint)uVar12;
          if (((-1 < (int)uVar16) &&
              ((int)uVar16 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(param_2 + 0x28) +
                                   (ulonglong)((uint)(uVar12 >> 6) & 0x1fffff8)) +
                                 (ulonglong)(uVar16 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            local_98 = CONCAT44(local_98._4_4_,uVar16);
            (*(code *)*local_120)(local_120[1],&local_98);
            iVar5 = local_130[0xc];
            piVar18 = local_130;
          }
          uVar17 = uVar17 & ~(uint)uVar24;
          puVar23 = *(uint **)(piVar18 + 10);
          if (*(uint **)(piVar18 + 10) == (uint *)0x0) {
            puVar23 = puVar3;
          }
          iVar4 = (int)uVar27;
          lVar20 = (longlong)iVar4;
          uVar16 = puVar23[lVar20] & uVar17;
          if (uVar16 == 0) {
            iVar6 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar6 = iVar5 + -1;
            }
            iVar6 = iVar6 >> 5;
            iVar14 = iVar14 + 0x20;
            iVar7 = iVar6;
            if (iVar6 < iVar4) {
              iVar7 = iVar4;
            }
            if (iVar4 < iVar6) {
              lVar21 = 0;
              do {
                uVar16 = puVar23[lVar20 + lVar21 + 1];
                if (uVar16 != 0) {
                  uVar27 = (ulonglong)(iVar4 + (int)lVar21 + 1);
                  uVar17 = 0xffffffff;
                  goto LAB_143badb9a;
                }
                iVar14 = iVar14 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar7 - lVar20 != lVar21);
              uVar17 = 0xffffffff;
              iVar4 = iVar7;
            }
            uVar27 = (ulonglong)(iVar4 + 1);
            piVar18 = local_130;
            param_2 = local_128;
            iVar4 = iVar5;
          }
          else {
LAB_143badb9a:
            uVar24 = (ulonglong)(-uVar16 & uVar16);
            uVar12 = uVar24 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            iVar4 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            if (iVar5 <= iVar4) {
              iVar4 = iVar5;
            }
          }
        } while (iVar4 != iVar22);
      }
      goto LAB_143badeac;
    }
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0x80;
    uStack_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    if (*piVar18 == 1) goto LAB_143bad792;
    if (*piVar18 != 2) goto LAB_143bad709;
    puVar3 = (uint *)(piVar18 + 6);
    uVar17 = piVar18[0xc];
    uVar24 = (ulonglong)uVar17;
    if (uVar17 == 0) {
      uVar27 = 1;
      puVar23 = (uint *)0x0;
      local_134 = 0;
      uVar16 = 0;
    }
    else {
      puVar2 = *(uint **)(piVar18 + 10);
      if (*(uint **)(piVar18 + 10) == (uint *)0x0) {
        puVar2 = puVar3;
      }
      uVar16 = *puVar2;
      if (uVar16 == 0) {
        iVar22 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar22 = uVar17 - 1;
        }
        puVar23 = (uint *)0x0;
        puVar8 = (uint *)(ulonglong)(uint)(iVar22 >> 5);
        if (iVar22 >> 5 < 1) {
          puVar8 = puVar23;
        }
        local_134 = 0;
        do {
          if (puVar8 == puVar23) goto LAB_143bade20;
          local_134 = local_134 + 0x20;
          uVar16 = puVar2[(longlong)puVar23 + 1];
          puVar23 = (uint *)((longlong)puVar23 + 1);
        } while (uVar16 == 0);
      }
      else {
        puVar23 = (uint *)0x0;
        local_134 = 0;
      }
      uVar27 = (ulonglong)(-uVar16 & uVar16);
      uVar12 = uVar27 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uVar16 = (local_134 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if ((int)uVar17 <= (int)uVar16) {
        uVar16 = uVar17;
      }
    }
    if (uVar16 != uVar17) {
      uVar26 = 0xffffffff;
      local_110 = puVar3;
      local_108 = uVar24;
      do {
        uVar12 = *(ulonglong *)(*(longlong *)(piVar18 + 2) + (longlong)(int)uVar16 * 0x10);
        uVar16 = (uint)uVar12;
        uVar11 = uVar16 & 0xfffffff;
        if ((int)uVar11 < *(int *)(local_128 + 0x140) * 0x200 + *(int *)(local_128 + 0x144)) {
          uVar13 = (ulonglong)(uVar11 >> 9);
          uVar16 = uVar16 & 0x1ff;
          local_118 = puVar23;
          if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(local_128 + 0x148) + uVar13 * 8) +
                                 (ulonglong)uVar16 * 2) - 1U) < 0xfffe) {
            uVar17 = *(uint *)((ulonglong)uVar16 * 0xc +
                               *(longlong *)(*(longlong *)(local_128 + 0x180) + uVar13 * 8) +
                              (ulonglong)((uint)(uVar12 >> 0x1e) & 3) * 4);
            local_e8 = *(undefined1 (*) [8])
                        (*(longlong *)
                          (*(longlong *)(local_128 + 0x1c0) + (ulonglong)(uVar17 >> 9) * 8) +
                        (ulonglong)((uVar17 & 0x1ff) << 4));
            puVar25 = (undefined8 *)local_e8;
            bVar1 = true;
            do {
              bVar15 = bVar1;
              local_ec = local_ec & 0xffffff00;
              FUN_1447cbafe(&local_98,&local_f8,puVar25,&local_ec);
              if ((char)local_ec == '\0') {
                local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)puVar25);
                (*(code *)*local_120)(local_120[1],&local_f8);
              }
              puVar25 = (undefined8 *)((longlong)local_e8 + 4);
              bVar1 = false;
            } while (bVar15);
            uVar17 = local_130[0xc];
            piVar18 = local_130;
            puVar23 = local_118;
            puVar3 = local_110;
            uVar24 = local_108;
          }
        }
        uVar26 = uVar26 & ~(uint)uVar27;
        puVar2 = *(uint **)(piVar18 + 10);
        if (*(uint **)(piVar18 + 10) == (uint *)0x0) {
          puVar2 = puVar3;
        }
        iVar22 = (int)puVar23;
        lVar20 = (longlong)iVar22;
        uVar16 = puVar2[lVar20] & uVar26;
        if (uVar16 == 0) {
          iVar4 = uVar17 + 0x1e;
          if (-1 < (int)(uVar17 - 1)) {
            iVar4 = uVar17 - 1;
          }
          iVar4 = iVar4 >> 5;
          local_134 = local_134 + 0x20;
          iVar14 = iVar4;
          if (iVar4 < iVar22) {
            iVar14 = iVar22;
          }
          if (iVar22 < iVar4) {
            lVar21 = 0;
            do {
              uVar16 = puVar2[lVar20 + lVar21 + 1];
              if (uVar16 != 0) {
                puVar23 = (uint *)(ulonglong)(iVar22 + (int)lVar21 + 1);
                uVar26 = 0xffffffff;
                goto LAB_143bae1b7;
              }
              local_134 = local_134 + 0x20;
              lVar21 = lVar21 + 1;
            } while (iVar14 - lVar20 != lVar21);
            uVar26 = 0xffffffff;
            lVar20 = (longlong)iVar14;
          }
          puVar23 = (uint *)(lVar20 + 1U & 0xffffffff);
          piVar18 = local_130;
          uVar16 = uVar17;
        }
        else {
LAB_143bae1b7:
          uVar27 = (ulonglong)(-uVar16 & uVar16);
          uVar12 = uVar27 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          uVar16 = (local_134 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if ((int)uVar17 <= (int)uVar16) {
            uVar16 = uVar17;
          }
        }
      } while (uVar16 != (uint)uVar24);
    }
  }
  else if ((piVar18[1] == 2) && (*piVar18 == 4)) {
LAB_143bad792:
    local_50 = 0;
    local_58 = 0;
    local_64 = 0;
    uStack_68 = 0xffffffff;
    local_6c = 0x80;
    local_70 = 0;
    local_78 = 0;
    uStack_90 = 0;
    local_98 = 0;
    uVar24 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = (undefined1  [8])0x0;
    uStack_e0 = 0;
    local_bc = 0x80;
    uStack_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (undefined1 *)0x0;
    local_a0 = 0;
    iVar22 = piVar18[0xc];
    if (iVar22 == 0) {
      uVar27 = 1;
      iVar14 = 0;
      iVar4 = 0;
    }
    else {
      puVar3 = *(uint **)(piVar18 + 10);
      if (*(uint **)(piVar18 + 10) == (uint *)0x0) {
        puVar3 = (uint *)(piVar18 + 6);
      }
      uVar17 = *puVar3;
      if (uVar17 == 0) {
        iVar4 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar4 = iVar22 + -1;
        }
        uVar24 = 0;
        uVar27 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar27 = uVar24;
        }
        iVar14 = 0;
        do {
          if (uVar27 == uVar24) goto LAB_143badbf4;
          iVar14 = iVar14 + 0x20;
          uVar17 = puVar3[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar24 = 0;
        iVar14 = 0;
      }
      uVar27 = (ulonglong)(-uVar17 & uVar17);
      uVar12 = uVar27 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar4 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if (iVar22 <= iVar4) {
        iVar4 = iVar22;
      }
    }
    if (iVar4 != iVar22) {
      uVar17 = 0xffffffff;
      do {
        local_f8 = CONCAT44(local_f8._4_4_,
                            *(undefined4 *)
                             (*(longlong *)(local_130 + 2) + 4 + (longlong)iVar4 * 0x10));
        FUN_144984904(local_e8,&local_ec,&local_f8,0);
        uVar17 = ~(uint)uVar27 & uVar17;
        puVar3 = *(uint **)(local_130 + 10);
        if (*(uint **)(local_130 + 10) == (uint *)0x0) {
          puVar3 = (uint *)(piVar18 + 6);
        }
        iVar5 = local_130[0xc];
        iVar4 = (int)uVar24;
        lVar20 = (longlong)iVar4;
        uVar16 = puVar3[lVar20] & uVar17;
        if (uVar16 == 0) {
          iVar6 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar6 = iVar5 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar4 < iVar6) {
            lVar21 = 0;
            do {
              uVar16 = puVar3[lVar20 + lVar21 + 1];
              if (uVar16 != 0) {
                uVar24 = (ulonglong)(iVar4 + (int)lVar21 + 1);
                uVar17 = 0xffffffff;
                goto LAB_143badf88;
              }
              iVar14 = iVar14 + 0x20;
              lVar21 = lVar21 + 1;
            } while (iVar7 - lVar20 != lVar21);
            uVar17 = 0xffffffff;
            lVar20 = (longlong)iVar7;
          }
          uVar24 = lVar20 + 1U & 0xffffffff;
          iVar4 = iVar5;
        }
        else {
LAB_143badf88:
          uVar27 = (ulonglong)(-uVar16 & uVar16);
          uVar12 = uVar27 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar4 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar4) {
            iVar4 = iVar5;
          }
        }
      } while (iVar4 != iVar22);
    }
LAB_143badbf4:
    uVar16 = *(int *)(local_128 + 0x140) * 0x200 + *(int *)(local_128 + 0x144);
    uVar17 = 0;
    if ((uVar16 != 0) &&
       (uVar17 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(local_128 + 0x148) - 1U))) {
      uVar26 = 1;
      uVar11 = 1;
      if (1 < (int)uVar16) {
        uVar26 = uVar16;
      }
      do {
        uVar17 = uVar26;
        if (uVar26 == uVar11) break;
        uVar10 = uVar11 >> 9;
        uVar19 = uVar11 & 0x1ff;
        uVar17 = uVar11;
        uVar11 = uVar11 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_128 + 0x148))[uVar10] +
                                           (ulonglong)uVar19 * 2) - 1U));
    }
    if (uVar17 != uVar16) {
      lVar20 = local_128;
      do {
        uVar26 = FUN_146bc96d4(lVar20,uVar17);
        if ((int)uStack_e0 != local_b4) {
          puVar9 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar9 = local_b0;
          }
          iVar22 = *(int *)(puVar9 + (ulonglong)(local_a0 - 1U & uVar26) * 4);
          if (iVar22 != -1) {
LAB_143badcc5:
            if (*(uint *)((longlong)local_e8 + (longlong)iVar22 * 0xc) != uVar26)
            goto code_r0x000143badcd1;
            lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x130) + (ulonglong)(uVar17 >> 9) * 8);
            local_f0 = *(undefined4 *)(lVar20 + 8 + (ulonglong)(uVar17 & 0x1ff) * 0xc);
            local_f8 = *(undefined8 *)(lVar20 + (ulonglong)(uVar17 & 0x1ff) * 0xc);
            lVar21 = 0;
            do {
              local_f9 = '\0';
              FUN_1447cbafe(&local_98,&local_ec,(uint *)((longlong)&local_f8 + lVar21),&local_f9);
              if (local_f9 == '\0') {
                local_ec = *(uint *)((longlong)&local_f8 + lVar21);
                (*(code *)*local_120)(local_120[1],&local_ec);
              }
              lVar21 = lVar21 + 4;
              lVar20 = local_128;
            } while (lVar21 != 0xc);
          }
        }
LAB_143badd58:
        uVar26 = uVar17 + 1;
        if ((int)(uVar17 + 1) < (int)uVar16) {
          uVar26 = uVar16;
        }
        do {
          uVar11 = uVar26;
          if (uVar26 - 1 == uVar17) break;
          uVar17 = uVar17 + 1;
          uVar11 = uVar17;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar20 + 0x148) +
                                               (ulonglong)(uVar17 >> 9) * 8) +
                                             (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
        uVar17 = uVar11;
      } while (uVar17 != uVar16);
    }
    local_a0 = 0;
    if (local_a8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar24 = uStack_e0 >> 0x20;
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    if ((int)uVar24 != 0) {
      FUN_1447a08a2(local_e8,0);
    }
    uStack_b8 = 0xffffffff;
    local_b4 = 0;
    local_c0 = 0;
    if (0x80 < local_bc) {
      local_bc = 0x80;
      FUN_1446efbd8(local_d8,0);
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_e8 != (undefined1  [8])0x0) {
      FUN_1400020a8();
    }
  }
  else {
LAB_143bad709:
    local_50 = 0;
    local_58 = 0;
    local_64 = 0;
    uStack_68 = 0xffffffff;
    local_6c = 0x80;
    local_70 = 0;
    local_78 = 0;
    uStack_90 = 0;
    local_98 = 0;
    puVar3 = (uint *)(piVar18 + 6);
    uVar17 = piVar18[0xc];
    puVar23 = (uint *)(ulonglong)uVar17;
    if (uVar17 == 0) {
      uVar27 = 1;
      uVar24 = 0;
      iVar22 = 0;
      uVar16 = 0;
    }
    else {
      puVar2 = *(uint **)(piVar18 + 10);
      if (*(uint **)(piVar18 + 10) == (uint *)0x0) {
        puVar2 = puVar3;
      }
      uVar16 = *puVar2;
      if (uVar16 == 0) {
        iVar22 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar22 = uVar17 - 1;
        }
        uVar24 = 0;
        uVar27 = (ulonglong)(uint)(iVar22 >> 5);
        if (iVar22 >> 5 < 1) {
          uVar27 = uVar24;
        }
        iVar22 = 0;
        do {
          if (uVar27 == uVar24) goto LAB_143bade20;
          iVar22 = iVar22 + 0x20;
          uVar16 = puVar2[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar24 = 0;
        iVar22 = 0;
      }
      uVar27 = (ulonglong)(-uVar16 & uVar16);
      uVar12 = uVar27 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uVar16 = (iVar22 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if ((int)uVar17 <= (int)uVar16) {
        uVar16 = uVar17;
      }
    }
    if (uVar16 != uVar17) {
      uVar26 = 0xffffffff;
      local_118 = puVar3;
      local_110 = puVar23;
      do {
        uVar12 = *(ulonglong *)(*(longlong *)(piVar18 + 2) + (longlong)(int)uVar16 * 0x10);
        uVar16 = (uint)uVar12;
        local_134 = iVar22;
        if ((-1 < (int)uVar16) &&
           ((int)uVar16 < *(int *)(local_128 + 0x140) * 0x200 + *(int *)(local_128 + 0x144))) {
          uVar12 = (ulonglong)((uint)(uVar12 >> 9) & 0x3fffff);
          uVar16 = uVar16 & 0x1ff;
          if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(local_128 + 0x148) + uVar12 * 8) +
                                 (ulonglong)uVar16 * 2) - 1U) < 0xfffe) {
            lVar20 = *(longlong *)(*(longlong *)(local_128 + 0x130) + uVar12 * 8);
            uStack_e0 = CONCAT44(uStack_e0._4_4_,
                                 *(undefined4 *)(lVar20 + 8 + (ulonglong)uVar16 * 0xc));
            local_e8 = *(undefined1 (*) [8])(lVar20 + (ulonglong)uVar16 * 0xc);
            lVar20 = 0;
            do {
              local_ec = local_ec & 0xffffff00;
              FUN_1447cbafe(&local_98,&local_f8,(undefined4 *)((longlong)local_e8 + lVar20),
                            &local_ec);
              if ((char)local_ec == '\0') {
                local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)((longlong)local_e8 + lVar20));
                (*(code *)*local_120)(local_120[1],&local_f8);
              }
              lVar20 = lVar20 + 4;
            } while (lVar20 != 0xc);
            uVar17 = local_130[0xc];
            piVar18 = local_130;
            puVar3 = local_118;
            puVar23 = local_110;
          }
        }
        uVar11 = uVar26 & ~(uint)uVar27;
        puVar2 = *(uint **)(piVar18 + 10);
        if (*(uint **)(piVar18 + 10) == (uint *)0x0) {
          puVar2 = puVar3;
        }
        iVar4 = (int)uVar24;
        lVar20 = (longlong)iVar4;
        uVar16 = puVar2[lVar20] & uVar11;
        uVar26 = uVar11;
        if (uVar16 == 0) {
          iVar14 = uVar17 + 0x1e;
          if (-1 < (int)(uVar17 - 1)) {
            iVar14 = uVar17 - 1;
          }
          iVar14 = iVar14 >> 5;
          iVar22 = local_134 + 0x20;
          iVar5 = iVar14;
          if (iVar14 < iVar4) {
            iVar5 = iVar4;
          }
          local_134 = uVar11;
          if (iVar4 < iVar14) {
            lVar21 = 0;
            local_134 = iVar22;
            do {
              uVar16 = puVar2[lVar20 + lVar21 + 1];
              if (uVar16 != 0) {
                uVar24 = (ulonglong)(iVar4 + (int)lVar21 + 1);
                uVar26 = 0xffffffff;
                goto LAB_143bada36;
              }
              iVar22 = local_134 + 0x20;
              lVar21 = lVar21 + 1;
              local_134 = iVar22;
            } while (iVar5 - lVar20 != lVar21);
            local_134 = 0xffffffff;
            lVar20 = (longlong)iVar5;
          }
          uVar24 = lVar20 + 1U & 0xffffffff;
          piVar18 = local_130;
          uVar26 = local_134;
          uVar11 = local_134;
          uVar16 = uVar17;
        }
        else {
LAB_143bada36:
          uVar27 = (ulonglong)(-uVar16 & uVar16);
          uVar12 = uVar27 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          uVar16 = (local_134 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          iVar22 = local_134;
          if ((int)uVar17 <= (int)uVar16) {
            uVar16 = uVar17;
          }
        }
        local_134 = uVar11;
      } while (uVar16 != (uint)puVar23);
    }
  }
LAB_143bade20:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar24 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar24 != 0) {
    FUN_1447a08a2(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_143badeac:
  if ((local_48 ^ (ulonglong)local_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143badcd1:
  iVar22 = *(int *)((longlong)local_e8 + (longlong)iVar22 * 0xc + 4);
  if (iVar22 == -1) goto LAB_143badd58;
  goto LAB_143badcc5;
}



// FUNCTION 143bae282 FUN_143bae282 body=3134 status=ok
// SIG undefined FUN_143bae282(void)

void FUN_143bae282(undefined8 *param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  int *piVar22;
  undefined1 local_178 [44];
  int local_14c;
  longlong local_148;
  int *local_140;
  undefined8 *local_138;
  ulonglong local_130;
  uint *local_128;
  longlong *local_120;
  undefined8 *local_118;
  code *local_110;
  longlong **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  char local_ed;
  uint local_ec;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_178;
  piVar22 = (int *)*param_1;
  local_138 = param_3;
  if (piVar22[4] == piVar22[0xf]) {
    if (param_4 != '\0') {
      uVar15 = *(int *)(param_2 + 0x1d0) * 0x200 + *(int *)(param_2 + 0x1d4);
      uVar17 = 0;
      if ((uVar15 != 0) &&
         (uVar17 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x1d8) - 1U))) {
        uVar2 = 1;
        uVar6 = 1;
        if (1 < (int)uVar15) {
          uVar2 = uVar15;
        }
        do {
          uVar17 = uVar2;
          if (uVar2 == uVar6) break;
          uVar8 = uVar6 >> 9;
          uVar20 = uVar6 & 0x1ff;
          uVar17 = uVar6;
          uVar6 = uVar6 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x1d8))[uVar8] +
                                             (ulonglong)uVar20 * 2) - 1U));
      }
      if (uVar17 != uVar15) {
        do {
          local_98 = CONCAT44(local_98._4_4_,uVar17);
          (*(code *)*local_138)(local_138[1],&local_98);
          uVar2 = uVar17 + 1;
          if ((int)(uVar17 + 1) < (int)uVar15) {
            uVar2 = uVar15;
          }
          do {
            uVar6 = uVar2;
            if (uVar2 - 1 == uVar17) break;
            uVar17 = uVar17 + 1;
            uVar6 = uVar17;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(param_2 + 0x1d8) +
                                                 (ulonglong)(uVar17 >> 9) * 8) +
                                               (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
          uVar17 = uVar6;
        } while (uVar17 != uVar15);
      }
    }
    goto LAB_143baec9e;
  }
  local_148 = param_2;
  local_140 = piVar22;
  if (piVar22[1] == 1) {
    if (*piVar22 == 2) {
      local_100 = *param_3;
      local_f8 = param_3[1];
      FUN_143ba9ede(param_2,piVar22);
      goto LAB_143baec9e;
    }
    uVar18 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0x80;
    uStack_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    if (*piVar22 != 1) {
      if (*piVar22 != 2) goto LAB_143bae431;
      goto LAB_143bae516;
    }
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0x80;
    uStack_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (undefined1 *)0x0;
    local_a0 = 0;
    puVar4 = (uint *)(piVar22 + 6);
    iVar16 = piVar22[0xc];
    if (iVar16 == 0) {
      uVar12 = 1;
      iVar13 = 0;
      iVar1 = 0;
    }
    else {
      puVar5 = *(uint **)(piVar22 + 10);
      if (*(uint **)(piVar22 + 10) == (uint *)0x0) {
        puVar5 = puVar4;
      }
      uVar17 = *puVar5;
      if (uVar17 == 0) {
        iVar1 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar1 = iVar16 + -1;
        }
        uVar18 = 0;
        uVar12 = (ulonglong)(uint)(iVar1 >> 5);
        if (iVar1 >> 5 < 1) {
          uVar12 = uVar18;
        }
        iVar13 = 0;
        do {
          if (uVar12 == uVar18) goto LAB_143baeba3;
          iVar13 = iVar13 + 0x20;
          uVar17 = puVar5[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar18 = 0;
        iVar13 = 0;
      }
      uVar12 = (ulonglong)(-uVar17 & uVar17);
      uVar19 = uVar12 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar1 = (iVar13 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if (iVar16 <= iVar1) {
        iVar1 = iVar16;
      }
    }
    if (iVar1 != iVar16) {
      uVar17 = 0xffffffff;
      iVar3 = iVar16;
      do {
        uVar19 = *(ulonglong *)(*(longlong *)(piVar22 + 2) + (longlong)iVar1 * 0x10);
        uVar15 = (uint)uVar19;
        if (((-1 < (int)uVar15) &&
            ((int)uVar15 < *(int *)(local_148 + 0x20) * 0x200 + *(int *)(local_148 + 0x24))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(local_148 + 0x28) +
                                 (ulonglong)((uint)(uVar19 >> 6) & 0x1fffff8)) +
                               (ulonglong)(uVar15 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          local_120 = &local_e8;
          local_118 = local_138;
          local_108 = &local_120;
          local_110 = FUN_143bb43b0;
          FUN_146bd7d34(param_2 + 0xb8,uVar19,&local_110);
          iVar3 = local_140[0xc];
          piVar22 = local_140;
        }
        uVar17 = uVar17 & ~(uint)uVar12;
        puVar5 = *(uint **)(piVar22 + 10);
        if (*(uint **)(piVar22 + 10) == (uint *)0x0) {
          puVar5 = puVar4;
        }
        iVar1 = (int)uVar18;
        lVar21 = (longlong)iVar1;
        uVar15 = puVar5[lVar21] & uVar17;
        if (uVar15 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar1) {
            iVar10 = iVar1;
          }
          if (iVar1 < iVar9) {
            lVar14 = 0;
            do {
              uVar15 = puVar5[lVar21 + lVar14 + 1];
              if (uVar15 != 0) {
                uVar18 = (ulonglong)(iVar1 + (int)lVar14 + 1);
                uVar17 = 0xffffffff;
                goto LAB_143baedb4;
              }
              iVar13 = iVar13 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar10 - lVar21 != lVar14);
            uVar17 = 0xffffffff;
            lVar21 = (longlong)iVar10;
          }
          uVar18 = lVar21 + 1U & 0xffffffff;
          piVar22 = local_140;
          iVar1 = iVar3;
        }
        else {
LAB_143baedb4:
          uVar12 = (ulonglong)(-uVar15 & uVar15);
          uVar19 = uVar12 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar1 = (iVar13 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar1) {
            iVar1 = iVar3;
          }
        }
      } while (iVar1 != iVar16);
      goto LAB_143baea6a;
    }
LAB_143baeba3:
    uVar18 = uStack_e0 >> 0x20;
    uStack_e0 = uStack_e0 & 0xffffffff00000000;
    if ((int)uVar18 != 0) {
      FUN_1447a08a2(&local_e8,0);
    }
    uStack_b8 = 0xffffffff;
    local_b4 = 0;
    local_c0 = 0;
    if (0x80 < local_bc) {
      local_bc = 0x80;
      FUN_1446efbd8(local_d8,0);
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((piVar22[1] == 2) && (*piVar22 == 4)) {
LAB_143bae516:
      local_50 = 0;
      local_58 = 0;
      local_64 = 0;
      uStack_68 = 0xffffffff;
      local_6c = 0x80;
      local_70 = 0;
      local_78 = 0;
      uStack_90 = 0;
      local_98 = 0;
      uVar18 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_bc = 0x80;
      uStack_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = (undefined1 *)0x0;
      local_a0 = 0;
      iVar16 = piVar22[0xc];
      if (iVar16 == 0) {
        uVar12 = 1;
        iVar13 = 0;
        iVar1 = 0;
      }
      else {
        puVar4 = *(uint **)(piVar22 + 10);
        if (*(uint **)(piVar22 + 10) == (uint *)0x0) {
          puVar4 = (uint *)(piVar22 + 6);
        }
        uVar17 = *puVar4;
        if (uVar17 == 0) {
          iVar1 = iVar16 + 0x1e;
          if (-1 < iVar16 + -1) {
            iVar1 = iVar16 + -1;
          }
          uVar18 = 0;
          uVar12 = (ulonglong)(uint)(iVar1 >> 5);
          if (iVar1 >> 5 < 1) {
            uVar12 = uVar18;
          }
          iVar13 = 0;
          do {
            if (uVar12 == uVar18) goto LAB_143bae893;
            iVar13 = iVar13 + 0x20;
            uVar17 = puVar4[uVar18 + 1];
            uVar18 = uVar18 + 1;
          } while (uVar17 == 0);
        }
        else {
          uVar18 = 0;
          iVar13 = 0;
        }
        uVar12 = (ulonglong)(-uVar17 & uVar17);
        uVar19 = uVar12 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar1 = (iVar13 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar16 <= iVar1) {
          iVar1 = iVar16;
        }
      }
      if (iVar1 != iVar16) {
        uVar17 = 0xffffffff;
        do {
          local_120 = (longlong *)
                      CONCAT44(local_120._4_4_,
                               *(undefined4 *)
                                (*(longlong *)(local_140 + 2) + 4 + (longlong)iVar1 * 0x10));
          FUN_144984904(&local_e8,&local_ec,&local_120,0);
          uVar17 = ~(uint)uVar12 & uVar17;
          puVar4 = *(uint **)(local_140 + 10);
          if (*(uint **)(local_140 + 10) == (uint *)0x0) {
            puVar4 = (uint *)(piVar22 + 6);
          }
          iVar3 = local_140[0xc];
          iVar1 = (int)uVar18;
          lVar21 = (longlong)iVar1;
          uVar15 = puVar4[lVar21] & uVar17;
          if (uVar15 == 0) {
            iVar9 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar9 = iVar3 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar13 = iVar13 + 0x20;
            iVar10 = iVar9;
            if (iVar9 < iVar1) {
              iVar10 = iVar1;
            }
            if (iVar1 < iVar9) {
              lVar14 = 0;
              do {
                uVar15 = puVar4[lVar21 + lVar14 + 1];
                if (uVar15 != 0) {
                  uVar18 = (ulonglong)(iVar1 + (int)lVar14 + 1);
                  uVar17 = 0xffffffff;
                  goto LAB_143baeb34;
                }
                iVar13 = iVar13 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar10 - lVar21 != lVar14);
              uVar17 = 0xffffffff;
              lVar21 = (longlong)iVar10;
            }
            uVar18 = lVar21 + 1U & 0xffffffff;
            iVar1 = iVar3;
          }
          else {
LAB_143baeb34:
            uVar12 = (ulonglong)(-uVar15 & uVar15);
            uVar19 = uVar12 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            iVar1 = (iVar13 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar1) {
              iVar1 = iVar3;
            }
          }
        } while (iVar1 != iVar16);
      }
LAB_143bae893:
      uVar15 = *(int *)(local_148 + 0x140) * 0x200 + *(int *)(local_148 + 0x144);
      uVar17 = 0;
      if ((uVar15 != 0) &&
         (uVar17 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(local_148 + 0x148) - 1U))) {
        uVar2 = 1;
        uVar6 = 1;
        if (1 < (int)uVar15) {
          uVar2 = uVar15;
        }
        do {
          uVar17 = uVar2;
          if (uVar2 == uVar6) break;
          uVar8 = uVar6 >> 9;
          uVar20 = uVar6 & 0x1ff;
          uVar17 = uVar6;
          uVar6 = uVar6 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(local_148 + 0x148))[uVar8] +
                                             (ulonglong)uVar20 * 2) - 1U));
      }
      if (uVar17 != uVar15) {
        lVar21 = local_148;
        do {
          uVar2 = FUN_146bc96d4(lVar21,uVar17);
          if ((int)uStack_e0 != local_b4) {
            puVar7 = local_a8;
            if (local_a8 == (undefined1 *)0x0) {
              puVar7 = local_b0;
            }
            iVar16 = *(int *)(puVar7 + (ulonglong)(local_a0 - 1U & uVar2) * 4);
            if (iVar16 != -1) {
LAB_143bae970:
              if (*(uint *)(local_e8 + (longlong)iVar16 * 0xc) != uVar2) goto code_r0x000143bae97c;
              lVar21 = *(longlong *)(*(longlong *)(lVar21 + 0x180) + (ulonglong)(uVar17 >> 9) * 8);
              local_118 = (undefined8 *)
                          CONCAT44(local_118._4_4_,
                                   *(undefined4 *)(lVar21 + 8 + (ulonglong)(uVar17 & 0x1ff) * 0xc));
              local_120 = *(longlong **)(lVar21 + (ulonglong)(uVar17 & 0x1ff) * 0xc);
              lVar14 = 0;
              do {
                local_ed = '\0';
                FUN_1447cbafe(&local_98,&local_ec,(uint *)((longlong)&local_120 + lVar14),&local_ed)
                ;
                if (local_ed == '\0') {
                  local_ec = *(uint *)((longlong)&local_120 + lVar14);
                  (*(code *)*local_138)(local_138[1],&local_ec);
                }
                lVar14 = lVar14 + 4;
                lVar21 = local_148;
              } while (lVar14 != 0xc);
            }
          }
LAB_143baea0f:
          uVar2 = uVar17 + 1;
          if ((int)(uVar17 + 1) < (int)uVar15) {
            uVar2 = uVar15;
          }
          do {
            uVar6 = uVar2;
            if (uVar2 - 1 == uVar17) break;
            uVar17 = uVar17 + 1;
            uVar6 = uVar17;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar21 + 0x148) +
                                                 (ulonglong)(uVar17 >> 9) * 8) +
                                               (ulonglong)(uVar17 & 0x1ff) * 2) - 1U));
          uVar17 = uVar6;
        } while (uVar17 != uVar15);
      }
LAB_143baea6a:
      local_a0 = 0;
      if (local_a8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143baeba3;
    }
LAB_143bae431:
    uStack_68 = 0xffffffff;
    local_6c = 0x80;
    local_50 = 0;
    local_58 = 0;
    local_64 = 0;
    local_70 = 0;
    local_78 = 0;
    uStack_90 = 0;
    local_98 = 0;
    puVar4 = (uint *)(piVar22 + 6);
    uVar17 = piVar22[0xc];
    uVar18 = (ulonglong)uVar17;
    if (uVar17 == 0) {
      uVar19 = 1;
      local_14c = 0;
      uVar12 = 0;
      uVar15 = 0;
    }
    else {
      puVar5 = *(uint **)(piVar22 + 10);
      if (*(uint **)(piVar22 + 10) == (uint *)0x0) {
        puVar5 = puVar4;
      }
      uVar15 = *puVar5;
      if (uVar15 == 0) {
        iVar16 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar16 = uVar17 - 1;
        }
        uVar12 = 0;
        uVar19 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar19 = uVar12;
        }
        local_14c = 0;
        do {
          if (uVar19 == uVar12) goto LAB_143baec12;
          local_14c = local_14c + 0x20;
          uVar15 = puVar5[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar15 == 0);
      }
      else {
        local_14c = 0;
        uVar12 = 0;
      }
      uVar19 = (ulonglong)(-uVar15 & uVar15);
      uVar11 = uVar19 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      uVar15 = (local_14c - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if ((int)uVar17 <= (int)uVar15) {
        uVar15 = uVar17;
      }
    }
    if (uVar15 != uVar17) {
      uVar2 = 0xffffffff;
      local_130 = uVar18;
      local_128 = puVar4;
      do {
        uVar11 = *(ulonglong *)(*(longlong *)(piVar22 + 2) + (longlong)(int)uVar15 * 0x10);
        uVar15 = (uint)uVar11;
        if ((-1 < (int)uVar15) &&
           ((int)uVar15 < *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144))) {
          uVar11 = (ulonglong)((uint)(uVar11 >> 9) & 0x3fffff);
          uVar15 = uVar15 & 0x1ff;
          if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x148) + uVar11 * 8) +
                                 (ulonglong)uVar15 * 2) - 1U) < 0xfffe) {
            lVar21 = *(longlong *)(*(longlong *)(param_2 + 0x180) + uVar11 * 8);
            uStack_e0 = CONCAT44(uStack_e0._4_4_,
                                 *(undefined4 *)(lVar21 + 8 + (ulonglong)uVar15 * 0xc));
            local_e8 = *(longlong *)(lVar21 + (ulonglong)uVar15 * 0xc);
            lVar21 = 0;
            do {
              local_ec = local_ec & 0xffffff00;
              FUN_1447cbafe(&local_98,&local_120,(undefined4 *)((longlong)&local_e8 + lVar21),
                            &local_ec);
              if ((char)local_ec == '\0') {
                local_120 = (longlong *)
                            CONCAT44(local_120._4_4_,*(undefined4 *)((longlong)&local_e8 + lVar21));
                (*(code *)*local_138)(local_138[1],&local_120);
              }
              lVar21 = lVar21 + 4;
            } while (lVar21 != 0xc);
            uVar17 = local_140[0xc];
            param_2 = local_148;
            uVar18 = local_130;
            piVar22 = local_140;
            puVar4 = local_128;
          }
        }
        uVar2 = uVar2 & ~(uint)uVar19;
        puVar5 = *(uint **)(piVar22 + 10);
        if (*(uint **)(piVar22 + 10) == (uint *)0x0) {
          puVar5 = puVar4;
        }
        iVar16 = (int)uVar12;
        lVar21 = (longlong)iVar16;
        uVar15 = puVar5[lVar21] & uVar2;
        if (uVar15 == 0) {
          iVar1 = uVar17 + 0x1e;
          if (-1 < (int)(uVar17 - 1)) {
            iVar1 = uVar17 - 1;
          }
          iVar1 = iVar1 >> 5;
          local_14c = local_14c + 0x20;
          iVar13 = iVar1;
          if (iVar1 < iVar16) {
            iVar13 = iVar16;
          }
          uVar18 = local_130;
          if (iVar16 < iVar1) {
            lVar14 = 0;
            do {
              uVar15 = puVar5[lVar21 + lVar14 + 1];
              if (uVar15 != 0) {
                uVar12 = (ulonglong)(iVar16 + (int)lVar14 + 1);
                uVar2 = 0xffffffff;
                goto LAB_143bae77a;
              }
              local_14c = local_14c + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar13 - lVar21 != lVar14);
            uVar2 = 0xffffffff;
            lVar21 = (longlong)iVar13;
          }
          uVar12 = lVar21 + 1U & 0xffffffff;
          param_2 = local_148;
          piVar22 = local_140;
          uVar15 = uVar17;
        }
        else {
LAB_143bae77a:
          uVar19 = (ulonglong)(-uVar15 & uVar15);
          uVar11 = uVar19 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          uVar15 = (local_14c - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if ((int)uVar17 <= (int)uVar15) {
            uVar15 = uVar17;
          }
        }
      } while (uVar15 != (uint)uVar18);
    }
  }
LAB_143baec12:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar18 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar18 != 0) {
    FUN_1447a08a2(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_143baec9e:
  if ((local_48 ^ (ulonglong)local_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143bae97c:
  iVar16 = *(int *)(local_e8 + (longlong)iVar16 * 0xc + 4);
  if (iVar16 == -1) goto LAB_143baea0f;
  goto LAB_143bae970;
}



// FUNCTION 143baeec1 FUN_143baeec1 body=136 status=ok
// SIG undefined FUN_143baeec1(void)

void FUN_143baeec1(longlong *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)*param_2;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (param_1 != (longlong *)0x0) {
    lVar4 = param_2[1];
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_148581b5e(param_1,iVar2);
    }
    puVar1 = (undefined2 *)(*param_1 + (longlong)iVar2 * 0x18);
    *puVar1 = 0x200;
    *(longlong **)(puVar1 + 4) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    *(int *)(puVar1 + 8) = (int)lVar4;
  }
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143baef2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    return;
  }
  return;
}



// FUNCTION 143baef49 FUN_143baef49 body=136 status=ok
// SIG undefined FUN_143baef49(void)

void FUN_143baef49(longlong *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)*param_2;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (param_1 != (longlong *)0x0) {
    lVar4 = param_2[1];
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_148581b5e(param_1,iVar2);
    }
    puVar1 = (undefined2 *)(*param_1 + (longlong)iVar2 * 0x18);
    *puVar1 = 0x201;
    *(longlong **)(puVar1 + 4) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    *(int *)(puVar1 + 8) = (int)lVar4;
  }
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143baefb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    return;
  }
  return;
}



// FUNCTION 143baefd2 FUN_143baefd2 body=270 status=ok
// SIG undefined FUN_143baefd2(void)

void FUN_143baefd2(longlong *param_1,undefined8 *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  double local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = 3;
  if ((int)param_3 < 3) {
    uVar8 = param_3;
  }
  uVar9 = (ulonglong)uVar8;
  if ((int)uVar8 < 1) {
    uVar9 = 0;
  }
  FUN_14856dcec(param_2,0);
  plVar3 = (longlong *)*param_1;
  if (plVar3 != (longlong *)0x0) {
    plVar5 = (longlong *)*param_2;
    iVar2 = (int)plVar3[1];
    FUN_146bad8b2(plVar5,iVar2,1);
    if (0 < (longlong)iVar2) {
      lVar7 = 0;
      do {
        lVar6 = *plVar3;
        local_58[0] = (double)*(float *)(lVar6 + lVar7 * 2);
        local_58[1] = (double)*(float *)(lVar6 + 4 + lVar7 * 2);
        local_58[2] = (double)*(float *)(lVar6 + 8 + lVar7 * 2);
        local_58[3] = (double)*(float *)(lVar6 + 0xc + lVar7 * 2);
        *(double *)(*plVar5 + lVar7) = local_58[uVar9];
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar2 * 8 != lVar7);
    }
  }
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143baf0f6 FUN_143baf0f6 body=371 status=ok
// SIG undefined FUN_143baf0f6(void)

void FUN_143baf0f6(longlong *param_1,undefined8 *param_2,uint param_3,uint param_4,uint param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_88 [32];
  double local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (2 < (int)param_3) {
    param_3 = 3;
  }
  uVar13 = 0;
  uVar10 = (ulonglong)param_3;
  if ((int)param_3 < 1) {
    uVar10 = uVar13;
  }
  if (2 < (int)param_4) {
    param_4 = 3;
  }
  uVar9 = (ulonglong)param_4;
  if ((int)param_4 < 1) {
    uVar9 = uVar13;
  }
  uVar14 = 3;
  if ((int)param_5 < 3) {
    uVar14 = param_5;
  }
  uVar15 = (ulonglong)uVar14;
  if ((int)uVar14 < 1) {
    uVar15 = uVar13;
  }
  FUN_14856dde4(param_2,0);
  plVar5 = (longlong *)*param_1;
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)*param_2;
    iVar4 = (int)plVar5[1];
    FUN_140b463b8(plVar6,iVar4,1);
    if (0 < (longlong)iVar4) {
      lVar11 = 0x10;
      lVar12 = 0;
      do {
        lVar7 = *plVar5;
        local_68[0] = (double)*(float *)(lVar7 + lVar12);
        local_68[1] = (double)*(float *)(lVar7 + 4 + lVar12);
        local_68[2] = (double)*(float *)(lVar7 + 8 + lVar12);
        local_68[3] = (double)*(float *)(lVar7 + 0xc + lVar12);
        dVar2 = local_68[uVar15];
        dVar3 = local_68[uVar9];
        lVar7 = *plVar6;
        *(double *)(lVar7 + -0x10 + lVar11) = local_68[uVar10];
        *(double *)(lVar7 + -8 + lVar11) = dVar3;
        *(double *)(lVar7 + lVar11) = dVar2;
        lVar12 = lVar12 + 0x10;
        lVar11 = lVar11 + 0x18;
      } while ((longlong)iVar4 * 0x10 != lVar12);
    }
  }
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar8)(puVar8);
      LOCK();
      piVar1 = (int *)((longlong)puVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143baf282 FUN_143baf282 body=485 status=ok
// SIG undefined FUN_143baf282(void)

undefined8 * FUN_143baf282(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_a8 [40];
  undefined2 *local_80;
  int local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 *local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar4 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1485820ee(param_1,uVar4);
    iVar1 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) < iVar1)) {
      *(int *)(param_1 + 9) = iVar1;
      FUN_148582282(param_1);
    }
    if (0 < (int)param_2[1]) {
      uVar3 = 0;
      do {
        local_68 = *(longlong *)(*param_2 + uVar3 * 8);
        if ((longlong)uVar3 < (longlong)(int)param_3[1]) {
          local_70 = *(undefined8 *)(*param_3 + uVar3 * 8);
        }
        else {
          if (local_68 == 0) {
            FUN_140056680(&local_80,L"Material");
          }
          else {
            local_60 = *(undefined8 **)(local_68 + 0x18);
            FUN_1400021e4(&local_60,&local_80);
          }
          puVar2 = &DAT_149dfb77a;
          if (local_78 != 0) {
            puVar2 = local_80;
          }
          FUN_140002266(&local_60,L"%s_%d",puVar2,uVar3 & 0xffffffff);
          iVar1 = (int)local_58 + -1;
          if ((int)local_58 == 0) {
            iVar1 = 0;
          }
          FUN_1446f82e2(&local_50,iVar1,local_60,1);
          local_70 = local_50;
          if (local_60 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          if (local_80 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        local_60 = &local_70;
        local_58 = &local_68;
        FUN_14858244a(param_1,&local_80,&local_60);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)(int)param_2[1]);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143baf469 FUN_143baf469 body=55 status=ok
// SIG undefined FUN_143baf469(void)

void FUN_143baf469(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e270 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e270 = FUN_14171c317(FUN_146498533,uVar1,L"EGeometryScriptBakeResolution");
  }
  return;
}



// FUNCTION 143baf4a0 FUN_143baf4a0 body=55 status=ok
// SIG undefined FUN_143baf4a0(void)

void FUN_143baf4a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e288 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e288 = FUN_14171c317(FUN_146498564,uVar1,L"EGeometryScriptBakeBitDepth");
  }
  return;
}



// FUNCTION 143baf4d7 FUN_143baf4d7 body=55 status=ok
// SIG undefined FUN_143baf4d7(void)

void FUN_143baf4d7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e2a0 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e2a0 = FUN_14171c317(FUN_146498593,uVar1,L"EGeometryScriptBakeSamplesPerPixel");
  }
  return;
}



// FUNCTION 143baf50e FUN_143baf50e body=55 status=ok
// SIG undefined FUN_143baf50e(void)

void FUN_143baf50e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e2b8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e2b8 = FUN_14171c317(FUN_1464985c2,uVar1,L"EGeometryScriptBakeFilteringType");
  }
  return;
}



// FUNCTION 143baf545 FUN_143baf545 body=55 status=ok
// SIG undefined FUN_143baf545(void)

void FUN_143baf545(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e2d0 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e2d0 = FUN_14171c317(FUN_1464985f1,uVar1,L"EGeometryScriptBakeTypes");
  }
  return;
}



// FUNCTION 143baf57c FUN_143baf57c body=55 status=ok
// SIG undefined FUN_143baf57c(void)

void FUN_143baf57c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e2e8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e2e8 = FUN_14171c317(FUN_146498620,uVar1,L"EGeometryScriptBakeOutputMode");
  }
  return;
}



// FUNCTION 143baf5b3 FUN_143baf5b3 body=55 status=ok
// SIG undefined FUN_143baf5b3(void)

void FUN_143baf5b3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e300 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e300 = FUN_14171c317(FUN_14649864f,uVar1,L"EGeometryScriptBakeNormalSpace");
  }
  return;
}



// FUNCTION 143baf5ea FUN_143baf5ea body=55 status=ok
// SIG undefined FUN_143baf5ea(void)

void FUN_143baf5ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e318 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e318 = FUN_14171c317(FUN_14649867e,uVar1,L"EGeometryScriptBakeCurvatureTypeMode");
  }
  return;
}



// FUNCTION 143baf621 FUN_143baf621 body=55 status=ok
// SIG undefined FUN_143baf621(void)

void FUN_143baf621(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e330 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e330 = FUN_14171c317(FUN_1464986ad,uVar1,L"EGeometryScriptBakeCurvatureColorMode");
  }
  return;
}



// FUNCTION 143baf658 FUN_143baf658 body=55 status=ok
// SIG undefined FUN_143baf658(void)

void FUN_143baf658(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e348 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e348 = FUN_14171c317(FUN_1464986dc,uVar1,L"EGeometryScriptBakeCurvatureClampMode");
  }
  return;
}



// FUNCTION 143baf690 FUN_143baf690 body=5888 status=ok
// SIG undefined FUN_143baf690(void)

longlong *
FUN_143baf690(longlong *param_1,longlong param_2,undefined8 *param_3,uint param_4,longlong *param_5,
             longlong *param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  double dVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  wchar_t **ppwVar15;
  wchar_t *pwVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  undefined1 auStack_3f8 [32];
  wchar_t **local_3d8;
  undefined ***local_3d0;
  undefined8 *puStack_3c8;
  uint local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b0;
  undefined4 *local_3a8;
  undefined1 local_3a0;
  uint local_38c;
  longlong local_388;
  undefined8 *local_380;
  wchar_t *local_378;
  undefined8 uStack_370;
  longlong local_368;
  longlong lStack_360;
  longlong local_358;
  longlong lStack_350;
  longlong local_348;
  longlong lStack_340;
  longlong local_338;
  longlong *local_330;
  longlong *local_328;
  longlong *local_320;
  longlong *local_318;
  undefined8 local_310;
  undefined2 local_308;
  undefined8 *local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  void *local_2a0;
  int local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 uStack_270;
  undefined4 uStack_26f;
  undefined4 uStack_26b;
  undefined1 local_260 [4];
  char local_25c;
  undefined8 local_248;
  undefined2 local_240;
  undefined8 *local_238;
  undefined8 uStack_230;
  undefined **local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined **local_1e8;
  double dStack_1e0;
  double local_1d8;
  longlong local_198;
  longlong *local_188;
  longlong local_178 [4];
  wchar_t *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  ulonglong local_110;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_238 = (undefined8 *)0x0;
  uStack_230 = 0;
  lVar7 = param_5[1];
  local_380 = param_3;
  if ((longlong)(int)lVar7 != 0) {
    lVar22 = *param_5;
    lVar14 = 0;
    local_38c = param_4;
    do {
      lVar13 = *(longlong *)(lVar22 + lVar14);
      if (lVar13 != 0) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar13);
        }
        uVar19 = uStack_230;
        lVar23 = (longlong)(int)uStack_230;
        uVar6 = (int)uStack_230 + 1;
        uStack_230 = CONCAT44(uStack_230._4_4_,uVar6);
        if (uStack_230._4_4_ < uVar6) {
          FUN_140b51998(&local_238,uVar19 & 0xffffffff);
        }
        local_238[lVar23] = lVar13;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar13);
        }
      }
      uVar6 = local_38c;
      lVar14 = lVar14 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar14);
    if ((int)uStack_230 != 0) {
      if (param_2 == 0) {
        local_158 = L"BakeTextureFromRenderCaptures_InvalidTargetMesh";
        uStack_150._0_4_ = 0x2f;
        FUN_1446e940c(&local_2f8,&local_158);
        local_158 = L"UGeometryScriptLibrary_MeshBakeFunctions";
        uStack_150._0_4_ = 0x28;
        FUN_1446e940c(&local_378,&local_158);
        local_158 = L"BakeTextureFromRenderCaptures: TargetMesh is Null";
        uStack_150 = CONCAT44(uStack_150._4_4_,0x31);
        FUN_140208c1e(&local_1e8,&local_378,&local_2f8,&local_158);
        FUN_143ba90d7(param_7,2,&local_1e8);
        if (local_1e8 != (undefined **)0x0) {
          (**(code **)(*local_1e8 + 0x10))();
        }
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        param_1[4] = 0;
        *(undefined1 *)(param_1 + 5) = 0;
        param_1[6] = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        param_1[8] = 0;
        *(undefined1 *)(param_1 + 9) = 0;
        param_1[10] = 0;
        *(undefined1 *)(param_1 + 0xb) = 0;
        param_1[0xc] = 0;
        *(undefined1 *)(param_1 + 0xd) = 0;
        param_1[0xe] = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
        param_1[0x10] = 0;
        *(undefined1 *)(param_1 + 0x11) = 0;
        goto LAB_143bafc5e;
      }
      local_158 = (wchar_t *)*local_380;
      uStack_150 = local_380[1];
      local_148 = local_380[2];
      dStack_140 = (double)local_380[3];
      local_138 = (double)local_380[4];
      dStack_130 = (double)local_380[5];
      local_128 = (double)local_380[6];
      local_120 = local_380[8];
      uStack_118 = local_380[9];
      local_110 = local_380[10];
      FUN_146c3cd49(*(undefined8 *)(param_2 + 0x98));
      if ((int)uVar6 < 0) {
LAB_143bafa25:
        local_158 = L"BakeTextureFromRenderCaptures_TargetMeshMissingUVs";
        uStack_150._0_4_ = 0x32;
        FUN_1446e940c(&local_2f8,&local_158);
        local_158 = L"UGeometryScriptLibrary_MeshBakeFunctions";
        uStack_150._0_4_ = 0x28;
        FUN_1446e940c(&local_378,&local_158);
        local_158 = L"BakeTextureFromRenderCaptures: TargetMesh UV layer is missing";
        uStack_150 = CONCAT44(uStack_150._4_4_,0x3d);
LAB_143bafa90:
        FUN_140208c1e(&local_1e8,&local_378,&local_2f8,&local_158);
        FUN_143ba9449(param_7,2,&local_1e8);
        if (local_1e8 != (undefined **)0x0) {
          (**(code **)(*local_1e8 + 0x10))();
        }
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        param_1[4] = 0;
        *(undefined1 *)(param_1 + 5) = 0;
        param_1[6] = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        param_1[8] = 0;
        *(undefined1 *)(param_1 + 9) = 0;
        param_1[10] = 0;
        *(undefined1 *)(param_1 + 0xb) = 0;
        param_1[0xc] = 0;
        *(undefined1 *)(param_1 + 0xd) = 0;
        param_1[0xe] = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
        param_1[0x10] = 0;
        *(undefined1 *)(param_1 + 0x11) = 0;
      }
      else {
        lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x98) + 0x208);
        if ((*(int *)(lVar7 + 0x28) <= (int)uVar6) ||
           (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x20) + (ulonglong)uVar6 * 8), lVar7 == 0))
        goto LAB_143bafa25;
        uVar19 = 0;
        uVar6 = *(int *)(lVar7 + 8) * 0x200 + *(int *)(lVar7 + 0xc);
        if ((uVar6 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x10) - 1U))) {
          uVar19 = 1;
          uVar20 = 1;
          if (1 < (int)uVar6) {
            uVar19 = (ulonglong)uVar6;
          }
          do {
            uVar18 = uVar20;
            if ((uint)uVar19 == uVar18) goto LAB_143baf898;
            uVar20 = uVar18 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar7 + 0x10))[uVar18 >> 9] +
                                               (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
          uVar19 = (ulonglong)uVar18;
        }
LAB_143baf898:
        if ((uint)uVar19 != uVar6) {
          fVar24 = -3.4028235e+38;
          fVar26 = 3.4028235e+38;
          fVar28 = -3.4028235e+38;
          fVar30 = 3.4028235e+38;
          do {
            lVar22 = *(longlong *)
                      (*(longlong *)(lVar7 + 0x48) + (ulonglong)((uint)(uVar19 >> 5) & 0x3fffff8));
            uVar21 = (ulonglong)(((uint)uVar19 & 0xff) << 3);
            fVar29 = *(float *)(lVar22 + uVar21);
            fVar25 = *(float *)(lVar22 + 4 + uVar21);
            fVar31 = fVar29;
            if (fVar30 <= fVar29) {
              fVar31 = fVar30;
            }
            if (fVar29 <= fVar28) {
              fVar29 = fVar28;
            }
            fVar27 = fVar25;
            if (fVar26 <= fVar25) {
              fVar27 = fVar26;
            }
            if (fVar25 <= fVar24) {
              fVar25 = fVar24;
            }
            uVar20 = (uint)uVar19 + 1;
            if ((int)uVar20 < (int)uVar6) {
              uVar20 = uVar6;
            }
            do {
              iVar17 = (int)uVar19;
              uVar19 = (ulonglong)uVar20;
              if (uVar20 - 1 == iVar17) break;
              uVar18 = iVar17 + 1;
              uVar19 = (ulonglong)uVar18;
            } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                   (*(longlong *)(lVar7 + 0x10) +
                                                   (ulonglong)(uVar18 >> 9) * 8) +
                                                 (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
            fVar24 = fVar25;
            fVar26 = fVar27;
            fVar28 = fVar29;
            fVar30 = fVar31;
          } while ((uint)uVar19 != uVar6);
          if ((((fVar31 != fVar29) || (NAN(fVar31) || NAN(fVar29))) || (fVar27 != fVar25)) ||
             (NAN(fVar27) || NAN(fVar25))) goto LAB_143bafcd5;
          local_158 = L"BakeTextureFromRenderCaptures_TargetMeshDegenerateUVs";
          uStack_150._0_4_ = 0x35;
          FUN_1446e940c(&local_2f8,&local_158);
          local_158 = L"UGeometryScriptLibrary_MeshBakeFunctions";
          uStack_150._0_4_ = 0x28;
          FUN_1446e940c(&local_378,&local_158);
          local_158 = L"BakeTextureFromRenderCaptures: TargetMesh UV layer is degenerate";
          uStack_150 = CONCAT44(uStack_150._4_4_,0x40);
          goto LAB_143bafa90;
        }
LAB_143bafcd5:
        if (*(char *)((longlong)param_6 + 0x31) == '\x01') {
          FUN_146c3a27e(&local_158);
          cVar5 = FUN_146c3a31e(&local_158,1);
          if (cVar5 == '\0') {
            local_158 = L"BakeTextureFromRenderCaptures_InvalidMeshTangents";
            uStack_150._0_4_ = 0x31;
            FUN_1446e940c(&local_2f8,&local_158);
            local_158 = L"UGeometryScriptLibrary_MeshBakeFunctions";
            uStack_150._0_4_ = 0x28;
            FUN_1446e940c(&local_378,&local_158);
            local_158 = 
            L"BakeTextureFromRenderCaptures: TargetMesh has invalid tangents so the requested normal map cannot be baked"
            ;
            uStack_150 = CONCAT44(uStack_150._4_4_,0x6a);
            goto LAB_143bafa90;
          }
        }
        lVar7 = FUN_14001cc68(0x138,0x10);
        FUN_14851f5ee(lVar7);
        local_2a0 = (void *)0x0;
        local_298 = (int)param_6[1];
        lVar22 = (longlong)local_298;
        _Src = (void *)*param_6;
        if (lVar22 == 0) {
          local_294 = 0;
        }
        else {
          FUN_148581400(&local_2a0,local_298,0);
          memcpy(local_2a0,_Src,lVar22 * 0x48);
        }
        local_290 = (undefined4)param_6[2];
        uStack_28c = *(undefined4 *)((longlong)param_6 + 0x14);
        uStack_288 = (undefined4)param_6[3];
        uStack_284 = *(undefined4 *)((longlong)param_6 + 0x1c);
        uStack_280 = (undefined4)param_6[4];
        uStack_27c = *(undefined4 *)((longlong)param_6 + 0x24);
        uStack_278 = (undefined4)param_6[5];
        uStack_274 = *(undefined4 *)((longlong)param_6 + 0x2c);
        uStack_26f = *(undefined4 *)((longlong)param_6 + 0x31);
        uStack_26b = *(undefined4 *)((longlong)param_6 + 0x35);
        uStack_270 = (undefined1)((uint)*(undefined4 *)((longlong)param_6 + 0x2d) >> 0x18);
        FUN_148577d1e(local_260);
        pcVar8 = (char *)FUN_148523032(&local_248,1);
        if (*pcVar8 == '\x01') {
          if (*(int *)(lVar7 + 0x2c) == 0) {
            *(undefined4 *)(lVar7 + 0x2c) = 2;
          }
        }
        else {
          *(undefined4 *)(lVar7 + 0x2c) = 0;
          FUN_14851fa34(lVar7,1);
        }
        cVar5 = local_25c;
        if (*(char *)(lVar7 + 0xf8) != local_25c) {
          if (*(int *)(lVar7 + 0x2c) != 0) {
            *(undefined4 *)(lVar7 + 0x2c) = 2;
          }
          FUN_14851fa34(lVar7,1);
          *(char *)(lVar7 + 0xf8) = cVar5;
        }
        pcVar8 = (char *)FUN_148523032(&local_248,2);
        if (*pcVar8 == '\x01') {
          if (*(int *)(lVar7 + 0x30) == 0) {
            *(undefined4 *)(lVar7 + 0x30) = 2;
          }
        }
        else {
          *(undefined4 *)(lVar7 + 0x30) = 0;
          FUN_14851fa34(lVar7,2);
        }
        cVar5 = local_25c;
        if (*(char *)(lVar7 + 0xf9) != local_25c) {
          if (*(int *)(lVar7 + 0x30) != 0) {
            *(undefined4 *)(lVar7 + 0x30) = 2;
          }
          FUN_14851fa34(lVar7,2);
          *(char *)(lVar7 + 0xf9) = cVar5;
        }
        pcVar8 = (char *)FUN_148523032(&local_248,8);
        if (*pcVar8 == '\x01') {
          if (*(int *)(lVar7 + 0x34) == 0) {
            *(undefined4 *)(lVar7 + 0x34) = 2;
          }
        }
        else {
          *(undefined4 *)(lVar7 + 0x34) = 0;
          FUN_14851fa34(lVar7,8);
        }
        cVar5 = local_25c;
        if (*(char *)(lVar7 + 0xfa) != local_25c) {
          if (*(int *)(lVar7 + 0x34) != 0) {
            *(undefined4 *)(lVar7 + 0x34) = 2;
          }
          FUN_14851fa34(lVar7,8);
          *(char *)(lVar7 + 0xfa) = cVar5;
        }
        pcVar8 = (char *)FUN_148523032(&local_248,4);
        if (*pcVar8 == '\x01') {
          if (*(int *)(lVar7 + 0x38) == 0) {
            *(undefined4 *)(lVar7 + 0x38) = 2;
          }
        }
        else {
          *(undefined4 *)(lVar7 + 0x38) = 0;
          FUN_14851fa34(lVar7,4);
        }
        cVar5 = local_25c;
        if (*(char *)(lVar7 + 0xfb) != local_25c) {
          if (*(int *)(lVar7 + 0x38) != 0) {
            *(undefined4 *)(lVar7 + 0x38) = 2;
          }
          FUN_14851fa34(lVar7,4);
          *(char *)(lVar7 + 0xfb) = cVar5;
        }
        pcVar8 = (char *)FUN_148523032(&local_248,0x80);
        if (*pcVar8 == '\x01') {
          if (*(int *)(lVar7 + 0x3c) == 0) {
            *(undefined4 *)(lVar7 + 0x3c) = 2;
          }
        }
        else {
          *(undefined4 *)(lVar7 + 0x3c) = 0;
          FUN_14851fa34(lVar7,0x80);
        }
        cVar5 = local_25c;
        if (*(char *)(lVar7 + 0xfc) != local_25c) {
          if (*(int *)(lVar7 + 0x3c) != 0) {
            *(undefined4 *)(lVar7 + 0x3c) = 2;
          }
          FUN_14851fa34(lVar7,0x80);
          *(char *)(lVar7 + 0xfc) = cVar5;
        }
        pcVar8 = (char *)FUN_148523032(&local_248,0x20);
        if (*pcVar8 == '\x01') {
          if (*(int *)(lVar7 + 0x40) == 0) {
            *(undefined4 *)(lVar7 + 0x40) = 2;
          }
        }
        else {
          *(undefined4 *)(lVar7 + 0x40) = 0;
          FUN_14851fa34(lVar7,0x20);
        }
        cVar5 = local_25c;
        if (*(char *)(lVar7 + 0xfd) != local_25c) {
          if (*(int *)(lVar7 + 0x40) != 0) {
            *(undefined4 *)(lVar7 + 0x40) = 2;
          }
          FUN_14851fa34(lVar7,0x20);
          *(char *)(lVar7 + 0xfd) = cVar5;
        }
        pcVar8 = (char *)FUN_148523032(&local_248,0x10);
        if (*pcVar8 == '\x01') {
          if (*(int *)(lVar7 + 0x44) == 0) {
            *(undefined4 *)(lVar7 + 0x44) = 2;
          }
        }
        else {
          *(undefined4 *)(lVar7 + 0x44) = 0;
          FUN_14851fa34(lVar7,0x10);
        }
        cVar5 = local_25c;
        if (*(char *)(lVar7 + 0xfe) != local_25c) {
          if (*(int *)(lVar7 + 0x44) != 0) {
            *(undefined4 *)(lVar7 + 0x44) = 2;
          }
          FUN_14851fa34(lVar7,0x10);
          *(char *)(lVar7 + 0xfe) = cVar5;
        }
        pcVar8 = (char *)FUN_148523032(&local_248,0x100);
        if (*pcVar8 == '\x01') {
          if (*(int *)(lVar7 + 0x48) == 0) {
            *(undefined4 *)(lVar7 + 0x48) = 2;
          }
        }
        else {
          *(undefined4 *)(lVar7 + 0x48) = 0;
          FUN_14851fa34(lVar7,0x100);
        }
        cVar5 = local_25c;
        if (*(char *)(lVar7 + 0xff) != local_25c) {
          if (*(int *)(lVar7 + 0x48) != 0) {
            *(undefined4 *)(lVar7 + 0x48) = 2;
          }
          FUN_14851fa34(lVar7,0x100);
          *(char *)(lVar7 + 0xff) = cVar5;
        }
        pcVar8 = (char *)FUN_148523032(&local_248,0x200);
        if (*pcVar8 == '\x01') {
          if (*(int *)(lVar7 + 0x4c) == 0) {
            *(undefined4 *)(lVar7 + 0x4c) = 2;
          }
        }
        else {
          *(undefined4 *)(lVar7 + 0x4c) = 0;
          FUN_14851fa34(lVar7,0x200);
        }
        if (*(char *)(lVar7 + 0x100) != local_25c) {
          if (*(int *)(lVar7 + 0x4c) != 0) {
            *(undefined4 *)(lVar7 + 0x4c) = 2;
          }
          FUN_14851fa34(lVar7,0x200);
          *(char *)(lVar7 + 0x100) = local_25c;
        }
        pcVar8 = (char *)FUN_148523032(&local_248,0x40);
        if (*pcVar8 == '\x01') {
          if (*(int *)(lVar7 + 0x50) == 0) {
            *(undefined4 *)(lVar7 + 0x50) = 2;
          }
        }
        else {
          *(undefined4 *)(lVar7 + 0x50) = 0;
          FUN_14851fa34(lVar7,0x40);
        }
        if (*(char *)(lVar7 + 0x101) != '\0') {
          if (*(int *)(lVar7 + 0x50) != 0) {
            *(undefined4 *)(lVar7 + 0x50) = 2;
          }
          FUN_14851fa34(lVar7,0x40);
          *(undefined1 *)(lVar7 + 0x101) = 0;
        }
        uVar9 = FUN_1447210f0(*local_238);
        FUN_14851f6a4(lVar7,uVar9,&local_238);
        local_388 = lVar7;
        if ((longlong)(int)param_6[1] == 0) {
          local_158 = L"BakeTextureFromRenderCaptures_EmptyCameraSet";
          uStack_150._0_4_ = 0x2c;
          FUN_1446e940c(&local_2f8,&local_158);
          local_158 = L"UGeometryScriptLibrary_MeshBakeFunctions";
          uStack_150._0_4_ = 0x28;
          FUN_1446e940c(&local_378,&local_158);
          local_158 = 
          L"BakeTextureFromRenderCaptures: Cameras array was empty so a default camera set was used. Please update your blueprint by providing an explicit array e.g., by using ComputeRenderCaptureCamerasForBox"
          ;
          uStack_150 = CONCAT44(uStack_150._4_4_,0xc5);
          FUN_140208c1e(&local_1e8,&local_378,&local_2f8,&local_158);
          FUN_143ba9449(param_7,2,&local_1e8);
          if (local_1e8 != (undefined **)0x0) {
            (**(code **)(*local_1e8 + 0x10))();
          }
          local_1e8 = (undefined **)0x0;
          dStack_1e0 = 0.0;
          local_3a0 = 1;
          local_3a8 = (undefined4 *)CONCAT71(local_3a8._1_7_,1);
          local_3b0 = CONCAT31(local_3b0._1_3_,1);
          local_3b8 = CONCAT31(local_3b8._1_3_,1);
          local_3c0 = CONCAT31(local_3c0._1_3_,1);
          FUN_148520939(&local_158,0,&local_238,&local_1e8);
          if (local_1e8 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          ppwVar15 = &local_158;
        }
        else {
          local_378 = (wchar_t *)0x0;
          uStack_370 = 0;
          lVar7 = (longlong)(int)param_6[1] * 0x48;
          lVar22 = *param_6 + 0x28;
          do {
            local_148 = DAT_14c8464f0;
            local_158 = DAT_14c8464e0;
            uStack_150 = DAT_14c8464e8;
            dStack_130 = 0.0;
            dStack_140 = 0.0;
            local_138 = 0.0;
            local_128 = 1.0;
            local_120 = *(undefined8 *)(lVar22 + 0x18);
            uStack_118 = *(undefined8 *)(lVar22 + -0x20);
            local_110 = (ulonglong)*(uint *)(lVar22 + -0x28);
            if ((int)*(uint *)(lVar22 + -0x28) < 2) {
              local_110 = 1;
            }
            local_110 = local_110 << 0x20 | local_110;
            FUN_1482ae234(&local_158,0,lVar22);
            dVar4 = local_138 + local_138;
            dVar32 = dStack_130 + dStack_130;
            dStack_1e0 = dVar4 * dStack_140 + local_128 * dVar32;
            local_1d8 = dStack_140 * dVar32 - dVar4 * local_128;
            local_1e8 = (undefined **)(1.0 - (dVar32 * dStack_130 + local_138 * dVar4));
            local_2e8 = DAT_14c8463c8;
            local_2f8 = (undefined4)DAT_14c8463b8;
            uStack_2f4 = DAT_14c8463b8._4_4_;
            uStack_2f0 = (undefined4)DAT_14c8463c0;
            uStack_2ec = DAT_14c8463c0._4_4_;
            FUN_1482ae2be(&local_158,2,&local_2f8,&local_1e8);
            local_158 = *(wchar_t **)(lVar22 + -0x18);
            uStack_150 = *(undefined8 *)(lVar22 + -0x10);
            local_148 = *(undefined8 *)(lVar22 + -8);
            lVar14 = (longlong)(int)uStack_370;
            uVar6 = (int)uStack_370 + 1;
            uStack_370 = CONCAT44(uStack_370._4_4_,uVar6);
            if (uStack_370._4_4_ < uVar6) {
              FUN_148549d9c(&local_378);
            }
            ppwVar15 = &local_158;
            pwVar16 = local_378 + lVar14 * 0x28;
            for (lVar13 = 10; lVar13 != 0; lVar13 = lVar13 + -1) {
              *(wchar_t **)pwVar16 = *ppwVar15;
              ppwVar15 = ppwVar15 + 1;
              pwVar16 = pwVar16 + 4;
            }
            lVar22 = lVar22 + 0x48;
            lVar7 = lVar7 + -0x48;
          } while (lVar7 != 0);
          ppwVar15 = &local_378;
          lVar7 = local_388;
        }
        FUN_14851f906(lVar7,ppwVar15);
        if (*ppwVar15 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        FUN_143b9ca30(lVar7);
        FUN_146ba21d6(&local_158,*(undefined8 *)(param_2 + 0x98),1);
        lVar7 = *(longlong *)(param_2 + 0x98);
        plVar10 = (longlong *)FUN_14001cc68(0x48,0x10);
        plVar10[1] = (longlong)&DAT_100000001;
        *plVar10 = (longlong)&PTR_FUN_14af3df30;
        plVar1 = plVar10 + 2;
        plVar10[3] = 0;
        plVar10[4] = 0;
        plVar10[5] = 0;
        plVar10[6] = 0;
        plVar10[7] = 0;
        plVar10[8] = 0;
        plVar10[2] = lVar7;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          LOCK();
          plVar11 = plVar10 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
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
        FUN_146c3b4b2(plVar1,*(undefined8 *)(param_2 + 0x98));
        plVar11 = (longlong *)FUN_14001cc68(0x20,0x10);
        plVar11[1] = (longlong)&DAT_100000001;
        *plVar11 = (longlong)&PTR_FUN_14aee5340;
        plVar11[2] = 0;
        plVar11[3] = 0;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar11 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        FUN_14837ffba(*(undefined8 *)(param_2 + 0x98),plVar11 + 2);
        local_3d8 = &local_158;
        local_3d0 = (undefined ***)plVar1;
        FUN_1484c2fc2(&local_1e8,local_388,*(undefined4 *)((longlong)param_6 + 0x2c),
                      *(undefined8 *)(param_2 + 0x98));
        if ((ulonglong)*(byte *)(param_6 + 5) < 10) {
          uVar9 = *(undefined8 *)(&DAT_14af3e778 + (ulonglong)*(byte *)(param_6 + 5) * 8);
        }
        else {
          uVar9 = 0x10000000100;
        }
        FUN_1484c259c(&local_2f8,uVar9);
        bVar12 = *(char *)((longlong)param_6 + 0x29) - 1;
        local_3b0 = 1;
        if (bVar12 < 4) {
          local_3b0 = *(undefined4 *)(&DAT_14af3e7f8 + (ulonglong)bVar12 * 4);
        }
        bVar12 = (char)param_6[5] - 1;
        local_3b8 = 0x10;
        if (bVar12 < 9) {
          local_3b8 = *(undefined4 *)(&DAT_14af3e7c8 + (ulonglong)bVar12 * 4);
        }
        local_308 = local_240;
        local_310 = local_248;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_3a8 = &local_2f8;
        local_3c0 = local_38c;
        puStack_3c8 = &local_310;
        local_3d0 = &local_1e8;
        local_3d8 = (wchar_t **)local_388;
        local_330 = plVar1;
        local_328 = plVar10;
        local_320 = plVar11 + 2;
        local_318 = plVar11;
        FUN_143b77c1a(&local_300,*(undefined8 *)(param_2 + 0x98),&local_330,&local_320);
        FUN_143b13eb0(local_300);
        local_348 = 0;
        lStack_340 = 0;
        local_358 = 0;
        lStack_350 = 0;
        local_368 = 0;
        lStack_360 = 0;
        local_378 = (wchar_t *)0x0;
        uStack_370 = 0;
        local_338 = 0;
        FUN_1484c513a(local_300,&local_378);
        if (local_378 != (wchar_t *)0x0) {
          local_220 = &PTR_FUN_14aefd850;
          local_218 = 0;
          local_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_1f8 = 0;
          local_1f0 = 2;
          FUN_1484c1eb6(&local_220,local_378,0,0);
        }
        if (uStack_370 != 0) {
          local_220 = &PTR_FUN_14aefd850;
          local_218 = 0;
          local_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_1f8 = 0;
          local_1f0 = 2;
          FUN_1484c1eb6(&local_220,uStack_370,5,0);
        }
        if (local_368 != 0) {
          local_220 = &PTR_FUN_14aefd850;
          local_218 = 0;
          local_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_1f8 = 0;
          local_1f0 = 2;
          FUN_1484c1eb6(&local_220,local_368,1,0);
        }
        if (lStack_360 != 0) {
          local_220 = &PTR_FUN_14aefd850;
          local_218 = 0;
          local_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_1f8 = 0;
          local_1f0 = 2;
          FUN_1484c1eb6(&local_220,lStack_360,3,0);
        }
        if (local_358 != 0) {
          local_220 = &PTR_FUN_14aefd850;
          local_218 = 0;
          local_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_1f8 = 0;
          local_1f0 = 2;
          FUN_1484c1eb6(&local_220,local_358,2,0);
        }
        if (lStack_350 != 0) {
          local_220 = &PTR_FUN_14aefd850;
          local_218 = 0;
          local_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_1f8 = 0;
          local_1f0 = 2;
          FUN_1484c1eb6(&local_220,lStack_350,4,0);
        }
        if (local_348 != 0) {
          local_220 = &PTR_FUN_14aefd850;
          local_218 = 0;
          local_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_1f8 = 0;
          local_1f0 = 2;
          FUN_1484c1eb6(&local_220,local_348,7,0);
        }
        if (lStack_340 != 0) {
          local_220 = &PTR_FUN_14aefd850;
          local_218 = 0;
          local_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_1f8 = 0;
          local_1f0 = 2;
          FUN_1484c1eb6(&local_220,lStack_340,1,0);
        }
        if (local_338 != 0) {
          local_220 = &PTR_FUN_14aefd850;
          local_218 = 0;
          local_210 = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_1f8 = 0;
          local_1f0 = 2;
          FUN_1484c1eb6(&local_220,local_338,0,0);
        }
        pwVar16 = local_378;
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        param_1[4] = 0;
        *(undefined1 *)(param_1 + 5) = 0;
        param_1[6] = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        param_1[8] = 0;
        *(undefined1 *)(param_1 + 9) = 0;
        param_1[10] = 0;
        *(undefined1 *)(param_1 + 0xb) = 0;
        param_1[0xc] = 0;
        *(undefined1 *)(param_1 + 0xd) = 0;
        param_1[0xe] = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
        param_1[0x10] = 0;
        *(undefined1 *)(param_1 + 0x11) = 0;
        if (local_378 != (wchar_t *)0x0 && DAT_14c950c29 == 1) {
          FUN_1456cec3c(local_378);
        }
        lVar7 = uStack_370;
        bVar12 = DAT_14c950c29;
        *param_1 = (longlong)pwVar16;
        if (uStack_370 != 0 && (~bVar12 & 1) == 0) {
          FUN_1456cec3c(uStack_370);
          bVar12 = DAT_14c950c29;
        }
        lVar22 = local_368;
        param_1[2] = lVar7;
        if (local_368 != 0 && (~bVar12 & 1) == 0) {
          FUN_1456cec3c(local_368);
          bVar12 = DAT_14c950c29;
        }
        lVar7 = lStack_360;
        param_1[4] = lVar22;
        if ((lStack_360 != 0) && ((bVar12 & 1) != 0)) {
          FUN_1456cec3c(lStack_360);
          bVar12 = DAT_14c950c29;
        }
        lVar22 = local_358;
        param_1[6] = lVar7;
        if ((local_358 != 0) && ((bVar12 & 1) != 0)) {
          FUN_1456cec3c(local_358);
          bVar12 = DAT_14c950c29;
        }
        lVar7 = lStack_350;
        param_1[8] = lVar22;
        if ((lStack_350 != 0) && ((bVar12 & 1) != 0)) {
          FUN_1456cec3c(lStack_350);
          bVar12 = DAT_14c950c29;
        }
        lVar22 = local_348;
        param_1[10] = lVar7;
        if ((local_348 != 0) && ((bVar12 & 1) != 0)) {
          FUN_1456cec3c(local_348);
          bVar12 = DAT_14c950c29;
        }
        lVar7 = lStack_340;
        param_1[0xc] = lVar22;
        if ((lStack_340 != 0) && ((bVar12 & 1) != 0)) {
          FUN_1456cec3c(lStack_340);
          bVar12 = DAT_14c950c29;
        }
        lVar22 = local_338;
        param_1[0xe] = lVar7;
        if ((local_338 != 0) && ((bVar12 & 1) != 0)) {
          FUN_1456cec3c(local_338);
          lVar7 = param_1[0xe];
        }
        *(bool *)(param_1 + 1) = *param_1 != 0;
        *(bool *)(param_1 + 3) = param_1[2] != 0;
        *(bool *)(param_1 + 5) = param_1[4] != 0;
        *(bool *)(param_1 + 7) = param_1[6] != 0;
        *(bool *)(param_1 + 9) = param_1[8] != 0;
        *(bool *)(param_1 + 0xb) = param_1[10] != 0;
        *(bool *)(param_1 + 0xd) = param_1[0xc] != 0;
        *(bool *)(param_1 + 0xf) = lVar7 != 0;
        param_1[0x10] = lVar22;
        *(bool *)(param_1 + 0x11) = lVar22 != 0;
        if (local_300 != (undefined8 *)0x0) {
          (**(code **)*local_300)(local_300,1);
        }
        FUN_148577e42(&local_2f8);
        local_1e8 = &PTR_FUN_14aef5140;
        if (local_198 != 0) {
          if (local_188 == (longlong *)0x0) {
            local_188 = local_178;
          }
          (**(code **)(*local_188 + 0x10))();
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar11 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
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
        FUN_1457e5b52(&local_158);
        lVar7 = local_388;
        if (local_388 != 0) {
          FUN_1485831be(local_388);
          FUN_1400020a8(lVar7);
        }
      }
      local_158 = (wchar_t *)*local_380;
      uStack_150 = local_380[1];
      local_148 = local_380[2];
      dStack_140 = (double)local_380[3];
      local_138 = (double)local_380[4];
      dStack_130 = (double)local_380[5];
      local_128 = (double)local_380[6];
      local_120 = local_380[8];
      uStack_118 = local_380[9];
      local_110 = local_380[10];
      FUN_146c3cfa5(*(undefined8 *)(param_2 + 0x98),&local_158,0);
      goto LAB_143bafc5e;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
LAB_143bafc5e:
  if (local_238 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143bb0d92 FUN_143bb0d92 body=547 status=ok
// SIG undefined FUN_143bb0d92(void)

undefined4 FUN_143bb0d92(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  longlong *local_d0 [2];
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar3 = FUN_148574ad9(*param_2,param_2 + 3);
  if ((char)uVar3 == '\0') {
    plVar2 = (longlong *)param_1[1];
    local_b0 = (longlong *)*plVar2;
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 8))();
    }
    local_a8 = (undefined4)plVar2[1];
    local_60 = L"Bake_InvalidTargetTangents";
    local_58 = 0x1a;
    FUN_1446e940c(local_d4,&local_60);
    local_60 = L"UGeometryScriptLibrary_MeshBakeFunctions";
    local_58 = 0x28;
    FUN_1446e940c(local_d8,&local_60);
    local_60 = L"{0}: Target Mesh tangents are invalid.";
    local_58 = 0x26;
    FUN_140208c1e(local_d0,local_d8,local_d4,&local_60);
    FUN_14023409e(&local_c0,local_d0,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,&local_b0);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_c0;
    local_88 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a0,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 0x10))();
    }
    FUN_143baeec1(*param_1,local_a0);
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb0fb6 FUN_143bb0fb6 body=55 status=ok
// SIG undefined FUN_143bb0fb6(void)

void FUN_143bb0fb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e4d8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e4d8 = FUN_14171c317(FUN_146498f8e,uVar1,L"EGeometryScriptCombineAttributesMode");
  }
  return;
}



// FUNCTION 143bb0fed FUN_143bb0fed body=452 status=ok
// SIG undefined FUN_143bb0fed(void)

longlong FUN_143bb0fed(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_74 [4];
  longlong local_70;
  undefined8 local_68;
  code *local_60;
  longlong **local_58;
  wchar_t *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar1 = param_7;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = param_2;
  local_68 = param_3;
  if (param_1 == 0) {
    local_50 = L"AppendMesh_InvalidInput1";
    local_48._0_4_ = 0x18;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2d);
    FUN_1446e940c(local_74,&local_50);
    local_50 = L"AppendMesh: TargetMesh is Null";
  }
  else {
    if (param_2 != 0) {
      local_98 = &param_6;
      local_58 = &local_98;
      local_90 = &local_68;
      local_88 = &local_70;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_50 = (wchar_t *)((ulonglong)local_50 & 0xffffffffff000000);
      local_60 = FUN_143bb1cac;
      local_80 = param_4;
      FUN_1484b8434(param_1,&local_60,&local_50,CONCAT71((int7)(local_30 >> 8),param_5) & 0xffffffff
                   );
      goto LAB_143bb1116;
    }
    local_50 = L"AppendMesh_InvalidInput2";
    local_48._0_4_ = 0x18;
    FUN_1446e940c(&local_60,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
    local_48 = CONCAT44(local_48._4_4_,0x2d);
    FUN_1446e940c(local_74,&local_50);
    local_50 = L"AppendMesh: AppendMesh is Null";
  }
  local_48 = CONCAT44(local_48._4_4_,0x1e);
  FUN_140208c1e(&local_98,local_74,&local_60,&local_50);
  FUN_143ba90d7(uVar1,2,&local_98);
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
LAB_143bb1116:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb11b2 FUN_143bb11b2 body=302 status=ok
// SIG undefined FUN_143bb11b2(void)

void FUN_143bb11b2(longlong *param_1,longlong *param_2,char param_3,longlong *param_4,
                  longlong *param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14113129a(param_5,param_1);
  iVar1 = (int)param_2[1];
  local_4c = 0xffffffff;
  FUN_1448156a8(param_4,&local_4c,iVar1);
  if (0 < (longlong)iVar1) {
    lVar4 = 0;
    do {
      if (param_3 == '\0') {
        lVar5 = *param_2;
      }
      else {
        lVar5 = *param_2;
        if ((longlong)(int)param_1[1] != 0) {
          lVar3 = (longlong)(int)param_1[1] << 3;
          uVar6 = 0;
          do {
            if (*(longlong *)(*param_1 + uVar6 * 8) == *(longlong *)(lVar5 + lVar4 * 8)) {
              if ((int)uVar6 != -1) goto LAB_143bb129c;
              break;
            }
            uVar6 = uVar6 + 1;
            lVar3 = lVar3 + -8;
          } while (lVar3 != 0);
        }
      }
      uVar2 = *(uint *)(param_5 + 1);
      uVar6 = (ulonglong)uVar2;
      *(uint *)(param_5 + 1) = uVar2 + 1;
      if (*(uint *)((longlong)param_5 + 0xc) < uVar2 + 1) {
        FUN_144769b64(param_5,uVar6);
      }
      *(undefined8 *)(*param_5 + (longlong)(int)uVar2 * 8) = *(undefined8 *)(lVar5 + lVar4 * 8);
LAB_143bb129c:
      *(int *)(*param_4 + lVar4 * 4) = (int)uVar6;
      lVar4 = lVar4 + 1;
    } while (lVar4 != iVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bb12e1 FUN_143bb12e1 body=585 status=ok
// SIG undefined FUN_143bb12e1(void)

longlong FUN_143bb12e1(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                      undefined8 param_9)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  longlong local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_74 [4];
  longlong local_70;
  undefined8 local_68;
  code *local_60;
  wchar_t **local_58;
  undefined2 local_50;
  undefined1 uStack_4e;
  undefined5 uStack_4d;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar2 = param_9;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_70 = param_2;
  local_68 = param_3;
  if (param_1 == 0) {
    local_a8 = L"AppendMeshTransformed_InvalidInput1";
    local_a0._0_4_ = 0x23;
    FUN_1446e940c(&local_60,&local_a8);
    local_a8 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
    local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,0x2d);
    FUN_1446e940c(local_74,&local_a8);
    local_a8 = L"AppendMeshTransformed: TargetMesh is Null";
LAB_143bb143a:
    local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,0x29);
  }
  else {
    if (param_2 == 0) {
      local_a8 = L"AppendMeshTransformed_InvalidInput2";
      local_a0._0_4_ = 0x23;
      FUN_1446e940c(&local_60,&local_a8);
      local_a8 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
      local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,0x2d);
      FUN_1446e940c(local_74,&local_a8);
      local_a8 = L"AppendMeshTransformed: AppendMesh is Null";
      goto LAB_143bb143a;
    }
    if (*(int *)(param_4 + 8) != 0) {
      local_a8 = (wchar_t *)&param_8;
      local_58 = &local_a8;
      local_a0 = &local_68;
      local_98 = &local_70;
      local_88 = param_6;
      local_80 = param_5;
      uStack_4e = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_50 = 0;
      local_60 = FUN_143bb2312;
      local_90 = param_4;
      FUN_1484b8434(param_1,&local_60,&local_50,CONCAT71((int7)(local_30 >> 8),param_7) & 0xffffffff
                   );
      goto LAB_143bb1478;
    }
    local_a8 = L"AppendMeshTransformed_NoTransforms";
    local_a0._0_4_ = 0x22;
    FUN_1446e940c(&local_60,&local_a8);
    local_a8 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
    local_a0._0_4_ = 0x2d;
    FUN_1446e940c(local_74,&local_a8);
    local_a8 = L"AppendMeshTransformed: AppendTransforms array is empty";
    local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,0x36);
  }
  FUN_140208c1e(&local_50,local_74,&local_60,&local_a8);
  FUN_143ba90d7(uVar2,2,&local_50);
  plVar1 = (longlong *)CONCAT53(uStack_4d,CONCAT12(uStack_4e,local_50));
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
LAB_143bb1478:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb152b FUN_143bb152b body=956 status=ok
// SIG undefined FUN_143bb152b(void)

longlong FUN_143bb152b(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                      int param_5,char param_6,undefined1 param_7,undefined8 param_8,
                      undefined8 param_9)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_328 [32];
  undefined1 local_308;
  undefined1 local_300;
  undefined1 *local_2f8;
  longlong **local_2f0;
  wchar_t **local_2e8;
  int local_2e0;
  longlong *local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 local_290;
  code *local_288;
  undefined1 **local_280;
  undefined2 local_278;
  undefined1 local_276;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  wchar_t *local_258;
  undefined4 local_250;
  int local_118;
  int local_114;
  undefined8 *local_110;
  longlong local_50;
  ulonglong local_38;
  
  uVar4 = param_9;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (param_1 == 0) {
    local_258 = L"AppendMeshRepeated_InvalidInput1";
    local_250 = 0x20;
    FUN_1446e940c(&local_278,&local_258);
    local_258 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
    local_250 = 0x2d;
    FUN_1446e940c(&local_2f8,&local_258);
    local_258 = L"AppendMeshRepeated: TargetMesh is Null";
  }
  else {
    if (param_2 != 0) {
      if (0 < param_5) {
        local_2d8 = (longlong *)*param_4;
        uStack_2d0 = param_4[1];
        local_2c8 = param_4[2];
        uStack_2c0 = param_4[3];
        local_2b8 = param_4[4];
        uStack_2b0 = param_4[5];
        local_2a8 = param_4[6];
        local_2a0 = *(undefined4 *)(param_4 + 8);
        uStack_29c = *(undefined4 *)((longlong)param_4 + 0x44);
        uStack_298 = *(undefined4 *)(param_4 + 9);
        uStack_294 = *(undefined4 *)((longlong)param_4 + 0x4c);
        local_290 = param_4[10];
        local_308 = 0;
        FUN_1411b354a(&local_258,0,0,0);
        local_300 = 1;
        local_308 = 1;
        FUN_146c005f0(&local_258,*(undefined8 *)(param_2 + 0x98),1,1);
        if (((param_3 != (longlong *)0x0) && (local_50 != 0)) &&
           (lVar2 = *(longlong *)(local_50 + 0x48), lVar2 != 0)) {
          uVar5 = local_118 * 0x200 + local_114;
          uVar8 = 0;
          if ((uVar5 != 0) && (uVar8 = 0, 0xfffd < (ushort)(*(short *)*local_110 - 1U))) {
            uVar6 = 1;
            uVar7 = 1;
            if (1 < (int)uVar5) {
              uVar6 = uVar5;
            }
            do {
              uVar8 = uVar6;
              if (uVar6 == uVar7) break;
              uVar9 = uVar7 >> 9;
              uVar10 = uVar7 & 0x1ff;
              uVar8 = uVar7;
              uVar7 = uVar7 + 1;
            } while (0xfffd < (ushort)(*(short *)(local_110[uVar9] + (ulonglong)uVar10 * 2) - 1U));
          }
LAB_143bb172a:
          if (uVar8 != uVar5) {
            lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar8 >> 9) * 8);
            iVar1 = *(int *)(lVar3 + (ulonglong)(uVar8 & 0x1ff) * 4);
            if ((-1 < (longlong)iVar1) && (iVar1 < (int)param_3[1])) {
              *(undefined4 *)(lVar3 + (ulonglong)(uVar8 & 0x1ff) * 4) =
                   *(undefined4 *)(*param_3 + (longlong)iVar1 * 4);
            }
            uVar6 = uVar8 + 1;
            if ((int)(uVar8 + 1) < (int)uVar5) {
              uVar6 = uVar5;
            }
            uVar7 = uVar8;
            do {
              uVar8 = uVar6;
              if (uVar6 - 1 == uVar7) break;
              uVar8 = uVar7 + 1;
              uVar7 = uVar8;
            } while (0xfffd < (ushort)(*(short *)(local_110[uVar8 >> 9] +
                                                 (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
            goto LAB_143bb172a;
          }
        }
        if (param_6 != '\0') {
          FUN_146c3cd49(&local_258,&local_2d8,1);
        }
        local_2f8 = (undefined1 *)&param_8;
        local_280 = &local_2f8;
        local_2f0 = &local_2d8;
        local_2e0 = param_5;
        local_276 = 0;
        local_270 = 0;
        uStack_268 = 0;
        local_260 = 0;
        local_278 = 0;
        local_288 = FUN_143bb2c40;
        local_2e8 = &local_258;
        FUN_1484b8434(param_1,&local_288,&local_278,
                      CONCAT71((int7)((ulonglong)param_3 >> 8),param_7) & 0xffffffff);
        FUN_141082778(&local_258);
      }
      goto LAB_143bb18bb;
    }
    local_258 = L"AppendMeshRepeated_InvalidInput2";
    local_250 = 0x20;
    FUN_1446e940c(&local_278,&local_258);
    local_258 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
    local_250 = 0x2d;
    FUN_1446e940c(&local_2f8,&local_258);
    local_258 = L"AppendMeshRepeated: AppendMesh is Null";
  }
  local_250 = 0x26;
  FUN_140208c1e(&local_2d8,&local_2f8,&local_278,&local_258);
  FUN_143ba90d7(uVar4,2,&local_2d8);
  if (local_2d8 != (longlong *)0x0) {
    (**(code **)(*local_2d8 + 0x10))();
  }
LAB_143bb18bb:
  if ((local_38 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143bb1cac FUN_143bb1cac body=950 status=ok
// SIG undefined FUN_143bb1cac(void)

void FUN_143bb1cac(undefined8 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_628 [32];
  code **local_608;
  undefined1 local_600;
  undefined1 *local_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  double local_5b0;
  double dStack_5a8;
  double local_5a0;
  code *local_598;
  undefined8 local_588;
  undefined **local_578;
  undefined8 *local_570;
  code *local_558 [2];
  undefined8 local_548;
  undefined **local_538;
  undefined8 *local_530;
  undefined1 local_518 [544];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2cc;
  undefined4 local_2c4;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined8 local_268;
  undefined4 local_260;
  undefined2 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined2 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_628;
  plVar1 = (longlong *)param_1[1];
  puVar2 = (undefined8 *)param_1[3];
  puVar3 = *(undefined1 **)(*(longlong *)param_1[2] + 0x98);
  if (*(char *)*param_1 == '\0') {
    uVar4 = 0;
  }
  else {
    if (*(char *)*param_1 != '\x02') goto LAB_143bb1d09;
    uVar4 = 1;
  }
  FUN_146c03744(param_2,puVar3,0,uVar4);
LAB_143bb1d09:
  local_5e8 = *puVar2;
  uStack_5e0 = puVar2[1];
  local_5d8 = puVar2[2];
  uStack_5d0 = puVar2[3];
  local_5c8 = puVar2[4];
  uStack_5c0 = puVar2[5];
  local_5b8 = puVar2[6];
  local_5b0 = (double)puVar2[8];
  dStack_5a8 = (double)puVar2[9];
  local_5a0 = (double)puVar2[10];
  local_2d8 = 0;
  local_2d0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2cc = 0xffffffff00000080;
  local_2c4 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_288 = 0;
  local_280 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_27c = 0xffffffff00000080;
  local_274 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0x101;
  local_230 = 0;
  local_228 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_224 = 0xffffffff00000080;
  local_21c = 0;
  local_210 = 0;
  local_208 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1d4 = 0xffffffff00000080;
  local_1cc = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0x101;
  local_188 = 0;
  local_180 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_17c = 0xffffffff00000080;
  local_174 = 0;
  local_168 = 0;
  local_160 = 0;
  local_138 = 0;
  local_130 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_12c = 0xffffffff00000080;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_107 = 1;
  local_108 = 1;
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
  local_60 = 0x101;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_608 = (code **)((ulonglong)local_608 & 0xffffffffffffff00);
  local_5f0 = param_2;
  FUN_1411b354a(local_518,0,0,0);
  if (puVar3 == param_2) {
    local_600 = 1;
    local_608 = (code **)CONCAT71(local_608._1_7_,1);
    FUN_146c005f0(local_518,puVar3,1,1);
    puVar3 = local_518;
  }
  local_570 = &local_5e8;
  local_608 = local_558;
  local_548 = 0;
  local_538 = &PTR_LAB_14af3dae0;
  local_558[0] = FUN_143bb2242;
  local_588 = 0;
  local_578 = &PTR_LAB_14af3db00;
  local_598 = FUN_143bb22aa;
  local_600 = local_5b0 * dStack_5a8 * local_5a0 < 0.0;
  local_530 = local_570;
  FUN_146bcbbdc(&local_5f0,puVar3,&local_2f8);
  if (*plVar1 != 0) {
    FUN_143bb2063(&local_2f8,*plVar1,param_2);
  }
  FUN_141082778(local_518);
  FUN_146bfdcfe(&local_2f8);
  if ((local_30 ^ (ulonglong)auStack_628) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bb2063 FUN_143bb2063 body=478 status=ok
// SIG undefined FUN_143bb2063(void)

void FUN_143bb2063(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  if ((*(longlong *)(param_3 + 0x208) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x208) + 0x48), lVar2 != 0)) {
    iVar1 = *(int *)(param_1 + 0xd0);
    if (iVar1 == 0) {
      uVar9 = 1;
      uVar12 = 0;
      iVar11 = 0;
      iVar4 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 200);
      if (*(uint **)(param_1 + 200) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0xb8);
      }
      uVar3 = *puVar8;
      if (uVar3 == 0) {
        iVar4 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar4 = iVar1 + -1;
        }
        uVar12 = 0;
        uVar9 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar9 = uVar12;
        }
        iVar11 = 0;
        do {
          if (uVar9 == uVar12) {
            return;
          }
          iVar11 = iVar11 + 0x20;
          uVar3 = puVar8[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar3 == 0);
      }
      else {
        uVar12 = 0;
        iVar11 = 0;
      }
      uVar9 = (ulonglong)(-uVar3 & uVar3);
      uVar13 = uVar9 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar4) {
        iVar4 = iVar1;
      }
    }
    if (iVar4 != iVar1) {
      uVar3 = 0xffffffff;
      iVar10 = iVar1;
      do {
        uVar5 = *(uint *)(*(longlong *)(param_1 + 0xa8) + 4 + (longlong)iVar4 * 0x10);
        lVar14 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(uVar5 >> 9) * 8);
        uVar13 = (ulonglong)(uVar5 & 0x1ff);
        iVar4 = *(int *)(lVar14 + uVar13 * 4);
        if ((-1 < (longlong)iVar4) && (iVar4 < (int)param_2[1])) {
          *(undefined4 *)(lVar14 + uVar13 * 4) = *(undefined4 *)(*param_2 + (longlong)iVar4 * 4);
          iVar10 = *(int *)(param_1 + 0xd0);
        }
        uVar3 = uVar3 & ~(uint)uVar9;
        puVar8 = *(uint **)(param_1 + 200);
        if (*(uint **)(param_1 + 200) == (uint *)0x0) {
          puVar8 = (uint *)(param_1 + 0xb8);
        }
        iVar4 = (int)uVar12;
        lVar14 = (longlong)iVar4;
        uVar5 = puVar8[lVar14] & uVar3;
        if (uVar5 == 0) {
          iVar6 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar6 = iVar10 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar4 < iVar6) {
            lVar15 = 0;
            do {
              uVar5 = puVar8[lVar14 + lVar15 + 1];
              if (uVar5 != 0) {
                uVar12 = (ulonglong)(iVar4 + (int)lVar15 + 1);
                uVar3 = 0xffffffff;
                goto LAB_143bb21f7;
              }
              iVar11 = iVar11 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar7 - lVar14 != lVar15);
            uVar3 = 0xffffffff;
            lVar14 = (longlong)iVar7;
          }
          uVar12 = lVar14 + 1U & 0xffffffff;
          iVar4 = iVar10;
        }
        else {
LAB_143bb21f7:
          uVar9 = (ulonglong)(-uVar5 & uVar5);
          uVar13 = uVar9 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar4 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar10 <= iVar4) {
            iVar4 = iVar10;
          }
        }
      } while (iVar4 != iVar1);
    }
  }
  return;
}



// FUNCTION 143bb2242 FUN_143bb2242 body=31 status=ok
// SIG undefined FUN_143bb2242(void)

undefined8
FUN_143bb2242(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_146c5cfa8(*param_2,param_1,param_4);
  return param_1;
}



// FUNCTION 143bb228c FUN_143bb228c body=29 status=ok
// SIG undefined FUN_143bb228c(void)

undefined8 FUN_143bb228c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bb22aa FUN_143bb22aa body=31 status=ok
// SIG undefined FUN_143bb22aa(void)

undefined8
FUN_143bb22aa(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_146bcb256(*param_2,param_1,param_4);
  return param_1;
}



// FUNCTION 143bb22f4 FUN_143bb22f4 body=29 status=ok
// SIG undefined FUN_143bb22f4(void)

undefined8 FUN_143bb22f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bb2312 FUN_143bb2312 body=1774 status=ok
// SIG undefined FUN_143bb2312(void)

void FUN_143bb2312(undefined8 *param_1,undefined1 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_758 [32];
  code **local_738;
  undefined1 local_730;
  undefined1 *local_720;
  longlong *local_718;
  undefined1 *local_710;
  code *local_708 [2];
  undefined8 local_6f8;
  undefined **local_6e8;
  undefined8 ***local_6e0;
  code *local_6c8 [2];
  undefined8 local_6b8;
  undefined **local_6a8;
  undefined8 ***local_6a0;
  undefined8 **local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 **local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 **local_618;
  undefined8 **ppuStack_610;
  undefined8 **local_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 ***local_5e8;
  int iStack_5e0;
  undefined4 uStack_5dc;
  undefined1 local_5d8 [544];
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_38c;
  undefined4 local_384;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_33c;
  undefined4 local_334;
  undefined8 local_328;
  undefined4 local_320;
  undefined2 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e4;
  undefined4 local_2dc;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_280;
  undefined4 local_278;
  undefined2 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_23c;
  undefined4 local_234;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined4 local_18c;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_130;
  undefined4 local_128;
  undefined2 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_758;
  local_718 = (longlong *)param_1[1];
  plVar2 = (longlong *)param_1[3];
  cVar1 = *(char *)(param_1 + 4);
  puVar3 = (undefined8 *)param_1[5];
  puVar12 = *(undefined1 **)(*(longlong *)param_1[2] + 0x98);
  local_720 = param_2;
  if (*(char *)*param_1 == '\0') {
    uVar13 = 0;
  }
  else {
    if (*(char *)*param_1 != '\x02') goto LAB_143bb23e0;
    uVar13 = 1;
  }
  FUN_146c03744(param_2,puVar12,0,uVar13);
LAB_143bb23e0:
  puVar8 = local_720;
  local_398 = 0;
  local_390 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_38c = 0xffffffff00000080;
  local_384 = 0;
  local_378 = 0;
  local_370 = 0;
  local_348 = 0;
  local_340 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_33c = 0xffffffff00000080;
  local_334 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0x101;
  local_2f0 = 0;
  local_2e8 = 0;
  local_310 = 0;
  uStack_308 = 0;
  local_2e4 = 0xffffffff00000080;
  local_2dc = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_294 = 0xffffffff00000080;
  local_28c = 0;
  local_280 = 0;
  local_278 = 0;
  local_270 = 0x101;
  local_248 = 0;
  local_240 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_23c = 0xffffffff00000080;
  local_234 = 0;
  local_228 = 0;
  local_220 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1ec = 0xffffffff00000080;
  local_1e4 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c7 = 1;
  local_1c8 = 1;
  local_1a0 = 0;
  local_198 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_194 = 0xffffffff00000080;
  local_18c = 0;
  local_180 = 0;
  local_178 = 0;
  local_150 = 0;
  local_148 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_144 = 0xffffffff00000080;
  local_13c = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0x101;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_710 = local_720;
  local_738 = (code **)((ulonglong)local_738 & 0xffffffffffffff00);
  FUN_1411b354a(local_5d8,0,0,0);
  if (puVar12 == puVar8) {
    local_730 = 1;
    local_738 = (code **)CONCAT71(local_738._1_7_,1);
    FUN_146c005f0(local_5d8,puVar12,1,1);
    puVar12 = local_5d8;
  }
  lVar9 = (longlong)(int)plVar2[1];
  if (lVar9 != 0) {
    puVar15 = (undefined8 *)*plVar2;
    puVar14 = puVar15 + lVar9 * 0xc;
    do {
      local_688 = (undefined8 **)*puVar15;
      uStack_680 = puVar15[1];
      local_678 = puVar15[2];
      uStack_670 = puVar15[3];
      pppuVar6 = (undefined8 ***)puVar15[4];
      pppuVar7 = (undefined8 ***)puVar15[5];
      pppuVar5 = (undefined8 ***)puVar15[6];
      local_5e8 = (undefined8 ****)0x0;
      uStack_5dc = 2;
      if (cVar1 == '\0') {
        local_668 = DAT_14c8464e0;
        uStack_660 = DAT_14c8464e8;
        local_658 = DAT_14c8464f0;
        local_638 = (undefined8 **)*puVar3;
        uStack_630 = puVar3[1];
        local_628 = puVar3[2];
        uStack_620 = puVar3[3];
        local_618 = (undefined8 **)puVar3[4];
        ppuStack_610 = (undefined8 **)puVar3[5];
        local_600 = puVar3[8];
        uStack_5f8 = puVar3[9];
        local_5f0 = puVar3[10];
        local_608 = (undefined8 **)puVar3[6];
        iStack_5e0 = 3;
        local_650 = puVar15[8];
        uStack_648 = puVar15[9];
        local_640 = puVar15[10];
        FUN_1484d6da4(&local_688,2);
        ppppuVar10 = (undefined8 ****)local_5e8;
        ppppuVar11 = (undefined8 ****)(local_5e8 + 0x14);
        if ((undefined8 ****)local_5e8 == (undefined8 ****)0x0) {
          ppppuVar10 = (undefined8 ****)&local_688;
          ppppuVar11 = &local_5e8;
        }
        *ppppuVar11 = (undefined8 ***)0x0;
        ppppuVar11[1] = (undefined8 ***)0x0;
        ppppuVar11[2] = (undefined8 ***)0x0;
        ppppuVar10[0x17] = (undefined8 ***)0x3ff0000000000000;
        ppppuVar10[0x18] = pppuVar6;
        ppppuVar10[0x19] = pppuVar7;
        ppppuVar10[0x1a] = pppuVar5;
        ppppuVar10[0x1b] = (undefined8 ***)0x3ff0000000000000;
        ppppuVar10[0x1c] = (undefined8 ***)0x3ff0000000000000;
        ppppuVar10[0x1d] = (undefined8 ***)0x3ff0000000000000;
        ppppuVar11 = (undefined8 ****)local_5e8;
        if ((undefined8 ****)local_5e8 == (undefined8 ****)0x0) {
          ppppuVar11 = (undefined8 ****)&local_688;
        }
        dVar4 = 1.0;
        if ((longlong)iStack_5e0 != 0) {
          ppppuVar10 = ppppuVar11 + (longlong)iStack_5e0 * 10;
          dVar4 = 1.0;
          goto LAB_143bb2889;
        }
      }
      else {
        local_668 = puVar3[4];
        uStack_660 = puVar3[5];
        local_658 = puVar3[6];
        local_650 = puVar3[8];
        uStack_648 = puVar3[9];
        local_640 = puVar3[10];
        iStack_5e0 = 2;
        local_638 = local_688;
        uStack_630 = uStack_680;
        local_628 = local_678;
        uStack_620 = uStack_670;
        local_618 = pppuVar6;
        ppuStack_610 = pppuVar7;
        local_608 = pppuVar5;
        local_600 = puVar15[8];
        uStack_5f8 = puVar15[9];
        local_5f0 = puVar15[10];
        ppppuVar10 = &local_5e8;
        ppppuVar11 = (undefined8 ****)&local_688;
        dVar4 = 1.0;
        uStack_670 = puVar3[3];
        local_678 = puVar3[2];
        uStack_680 = puVar3[1];
        local_688 = (undefined8 ***)*puVar3;
LAB_143bb2889:
        do {
          dVar4 = dVar4 * (double)ppppuVar11[7] * (double)ppppuVar11[8] * (double)ppppuVar11[9];
          ppppuVar11 = ppppuVar11 + 10;
        } while (ppppuVar11 != ppppuVar10);
      }
      local_6b8 = 0;
      local_6a8 = &PTR_LAB_14af3dd10;
      local_6c8[0] = FUN_143bb2a02;
      local_6f8 = 0;
      local_6e8 = &PTR_LAB_14af3dd30;
      local_708[0] = FUN_143bb2b0c;
      local_730 = dVar4 < 0.0;
      local_738 = local_6c8;
      local_6e0 = &local_688;
      local_6a0 = &local_688;
      FUN_146bcbbdc(&local_710,puVar12,&local_3b8,local_708);
      if (*local_718 != 0) {
        FUN_143bb2063(&local_3b8,*local_718,local_720);
      }
      FUN_146bccf46(&local_3b8);
      if ((undefined8 ****)local_5e8 != (undefined8 ****)0x0) {
        FUN_1400020a8();
      }
      puVar15 = puVar15 + 0xc;
    } while (puVar15 != puVar14);
  }
  FUN_141082778(local_5d8);
  FUN_146bfdcfe(&local_3b8);
  if ((local_f0 ^ (ulonglong)auStack_758) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb2a02 FUN_143bb2a02 body=192 status=ok
// SIG undefined FUN_143bb2a02(void)

undefined4 *
FUN_143bb2a02(undefined4 *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_2;
  local_58 = *(undefined8 *)(param_4 + 4);
  local_68 = *param_4;
  uStack_64 = param_4[1];
  uStack_60 = param_4[2];
  uStack_5c = param_4[3];
  lVar1 = *(longlong *)(lVar2 + 0xa0);
  if (*(longlong *)(lVar2 + 0xa0) == 0) {
    lVar1 = lVar2;
  }
  if ((longlong)*(int *)(lVar2 + 0xa8) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 0xa8) * 0x50;
    do {
      FUN_146c5cfa8(lVar1,&local_48,&local_68);
      local_58 = local_38;
      local_68 = local_48;
      uStack_64 = uStack_44;
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_1 + 4) = local_58;
  *param_1 = local_68;
  param_1[1] = uStack_64;
  param_1[2] = uStack_60;
  param_1[3] = uStack_5c;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb2aee FUN_143bb2aee body=29 status=ok
// SIG undefined FUN_143bb2aee(void)

undefined8 FUN_143bb2aee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bb2b0c FUN_143bb2b0c body=234 status=ok
// SIG undefined FUN_143bb2b0c(void)

double * FUN_143bb2b0c(double *param_1,longlong *param_2,undefined8 param_3,double *param_4)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_2;
  dVar4 = *param_4;
  dVar5 = param_4[1];
  dVar3 = param_4[2];
  lVar1 = *(longlong *)(lVar2 + 0xa0);
  if (*(longlong *)(lVar2 + 0xa0) == 0) {
    lVar1 = lVar2;
  }
  if ((longlong)*(int *)(lVar2 + 0xa8) != 0) {
    lVar2 = (longlong)*(int *)(lVar2 + 0xa8) * 0x50;
    do {
      local_50 = dVar3 * *(double *)(lVar1 + 0x48);
      local_58 = dVar5 * *(double *)(lVar1 + 0x40);
      local_60 = dVar4 * *(double *)(lVar1 + 0x38);
      FUN_146bed047(&local_48,lVar1,&local_60);
      dVar3 = local_38 + *(double *)(lVar1 + 0x30);
      dVar5 = local_40 + *(double *)(lVar1 + 0x28);
      dVar4 = local_48 + *(double *)(lVar1 + 0x20);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *param_1 = dVar4;
  param_1[1] = dVar5;
  param_1[2] = dVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb2c22 FUN_143bb2c22 body=29 status=ok
// SIG undefined FUN_143bb2c22(void)

undefined8 FUN_143bb2c22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bb2c40 FUN_143bb2c40 body=796 status=ok
// SIG undefined FUN_143bb2c40(void)

void FUN_143bb2c40(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_3c8 [32];
  undefined8 *local_3a8;
  undefined1 local_3a0;
  undefined8 local_390;
  undefined8 local_388 [2];
  undefined8 local_378;
  undefined8 local_348 [2];
  undefined8 local_338;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2dc;
  undefined4 local_2d4;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_28c;
  undefined4 local_284;
  undefined8 local_278;
  undefined4 local_270;
  undefined2 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined4 local_22c;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined2 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined1 local_117;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  if (*(char *)*param_1 == '\0') {
    uVar3 = 0;
  }
  else {
    if (*(char *)*param_1 != '\x02') goto LAB_143bb2c8f;
    uVar3 = 1;
  }
  FUN_146c03744(param_2,param_1[2],0,uVar3);
LAB_143bb2c8f:
  local_2e8 = 0;
  local_2e0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_2dc = 0xffffffff00000080;
  local_2d4 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_298 = 0;
  local_290 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_28c = 0xffffffff00000080;
  local_284 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0x101;
  local_240 = 0;
  local_238 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_234 = 0xffffffff00000080;
  local_22c = 0;
  local_220 = 0;
  local_218 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_1e4 = 0xffffffff00000080;
  local_1dc = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0x101;
  local_198 = 0;
  local_190 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_18c = 0xffffffff00000080;
  local_184 = 0;
  local_178 = 0;
  local_170 = 0;
  local_148 = 0;
  local_140 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_13c = 0xffffffff00000080;
  local_134 = 0;
  local_128 = 0;
  local_120 = 0;
  local_117 = 1;
  local_118 = 1;
  local_f0 = 0;
  local_e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_94 = 0xffffffff00000080;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0x101;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_390 = param_2;
  if (0 < *(int *)(param_1 + 3)) {
    iVar2 = 0;
    do {
      local_348[0] = 0;
      local_338 = 0;
      local_388[0] = 0;
      local_378 = 0;
      local_3a0 = 0;
      local_3a8 = local_348;
      FUN_146bcbbdc(&local_390,param_1[2],&local_308,local_388);
      iVar1 = *(int *)(param_1 + 3);
      if (iVar2 < iVar1) {
        FUN_146c3cd49(param_1[2],param_1[1],1);
        FUN_146bccf46(&local_308);
        iVar1 = *(int *)(param_1 + 3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  FUN_146bfdcfe(&local_308);
  if ((local_40 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bb2f5e FUN_143bb2f5e body=163 status=ok
// SIG undefined FUN_143bb2f5e(void)

void FUN_143bb2f5e(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  undefined1 auStack_638 [32];
  undefined1 local_618;
  undefined1 local_608 [8];
  undefined1 local_600 [1496];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_638;
  lVar1 = (longlong)*param_2;
  local_618 = 0;
  FUN_1482e14f4(local_608,*param_1,*(undefined8 *)(*(longlong *)(param_1[1] + 8) + lVar1 * 8),0);
  FUN_146c00942(*(longlong *)param_1[2] + lVar1 * 0x220,local_600);
  *(longlong *)(*(longlong *)param_1[3] + lVar1 * 8) = lVar1 * 0x220 + *(longlong *)param_1[2];
  FUN_1482e1868(local_608);
  if ((local_28 ^ (ulonglong)auStack_638) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb30a2 FUN_143bb30a2 body=107 status=ok
// SIG undefined FUN_143bb30a2(void)

undefined8 FUN_143bb30a2(undefined8 *param_1,undefined8 *param_2)

{
  double dVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_2[2];
  local_28 = *param_2;
  uStack_20 = param_2[1];
  dVar1 = (double)FUN_148581d44(*param_1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)param_1[1] >> 8),
                    ABS(dVar1) < (double)*(float *)(param_1[1] + 4));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb315e FUN_143bb315e body=1593 status=ok
// SIG undefined FUN_143bb315e(void)

/* WARNING: Removing unreachable block (ram,0x000143bb32be) */
/* WARNING: Removing unreachable block (ram,0x000143bb32cd) */
/* WARNING: Removing unreachable block (ram,0x000143bb32d1) */
/* WARNING: Removing unreachable block (ram,0x000143bb349c) */
/* WARNING: Removing unreachable block (ram,0x000143bb34a8) */
/* WARNING: Removing unreachable block (ram,0x000143bb34ac) */

void FUN_143bb315e(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined ***pppuVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined1 auStack_3d8 [32];
  double local_3b8;
  undefined1 local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 *local_390;
  longlong local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  ulonglong local_348 [3];
  double dStack_330;
  undefined8 local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  byte local_308;
  undefined8 local_300;
  undefined1 *local_2f8;
  undefined8 uStack_2f0;
  undefined ***local_2e8;
  undefined8 uStack_2e0;
  undefined **local_2d8;
  undefined8 *puStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2a8 [12];
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  double local_208;
  longlong *local_1f8;
  int local_1f0;
  undefined1 local_118;
  undefined1 *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined ***local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  local_118 = 1;
  uStack_320 = (undefined4)uStack_e0;
  uStack_21c = uStack_e0._4_4_;
  local_218 = local_d8;
  uStack_214 = uStack_d4;
  uStack_210 = uStack_d0;
  uStack_20c = uStack_cc;
  uStack_220 = (undefined4)uStack_e0;
  local_238 = 0;
  uStack_234 = 0;
  uStack_230 = uStack_f0;
  uStack_22c = uStack_ec;
  local_248 = 0;
  uStack_244 = 0;
  uStack_240 = uStack_100;
  uStack_23c = uStack_fc;
  local_f8 = (undefined ***)0x0;
  local_108 = &LAB_148581e9a;
  local_e8 = &PTR_LAB_14af3dde0;
  uStack_e0 = FUN_143bb3798;
  local_348[0] = 0;
  local_318 = local_d8;
  uStack_314 = uStack_d4;
  local_348[2] = 0;
  uStack_e0 = FUN_143bb3798;
  local_e8 = &PTR_LAB_14af3dde0;
  local_f8 = (undefined ***)0x0;
  local_108 = &LAB_148581e9a;
  local_118 = 1;
  uStack_220 = uStack_320;
  uStack_234 = 0;
  local_238 = 0;
  uStack_244 = 0;
  local_248 = 0;
  local_348[2] = 0;
  local_348[0] = 0;
  local_390 = param_1;
  FUN_1483ba182(&local_248,param_2);
  if ((local_1f0 == 1) && (*(char *)(*local_1f8 + 0x2c8) == '\0')) {
    bVar7 = FUN_146c047ec();
  }
  else {
    bVar7 = 0;
  }
  uVar3 = uStack_2f0;
  uStack_20c._0_2_ = CONCAT11(bVar7,(undefined1)uStack_20c);
  local_348[2] = local_348[2] & 0xffffffffffffff00;
  local_2f8 = (undefined1 *)0x0;
  local_2b8 = 0x3ff0000000000000;
  puVar14 = &DAT_14c846480;
  puVar17 = local_2a8;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar17 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar17 = puVar17 + 1;
  }
  uStack_310 = 0x3ff0000000000000;
  _uStack_320 = CONCAT44(0x400,uStack_320);
  local_300 = 0x3f1a36e2eb1c432d;
  local_348[0] = CONCAT71(local_348[0]._1_7_,2);
  local_318 = CONCAT31(local_318._1_3_,1);
  puVar14 = (undefined8 *)*local_390;
  uStack_320._0_2_ = CONCAT11(*(undefined1 *)(puVar14 + 2),1);
  local_348[0] = local_348[0] & 0xffffffff;
  local_308 = bVar7 ^ 1;
  dStack_330 = (double)puVar14[1];
  local_328 = *puVar14;
  local_348[1] = 0;
  if (*(int *)(puVar14 + 6) != 0) {
    local_98 = local_2c8;
    uVar5 = local_98;
    uStack_90 = uStack_2c0;
    uVar6 = uStack_90;
    local_a8 = local_2d8;
    puStack_a0 = puStack_2d0;
    local_b8 = 0;
    uStack_b0 = uStack_2e0;
    uVar4 = uStack_b0;
    local_c8 = 0;
    uStack_c0 = uStack_2f0;
    local_2d8 = &PTR_LAB_14af3de00;
    puStack_2d0 = puVar14;
    local_2e8 = (undefined ***)0x0;
    local_2f8 = &LAB_143bb37fe;
    uStack_2f0 = uStack_380;
    uStack_b0._0_4_ = (undefined4)uStack_2e0;
    uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_98._0_4_ = (undefined4)local_2c8;
    local_98._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_90._0_4_ = (undefined4)uStack_2c0;
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_358 = (undefined4)local_98;
    uStack_354 = local_98._4_4_;
    uStack_350 = (undefined4)uStack_90;
    uStack_34c = uStack_90._4_4_;
    local_378 = 0;
    uStack_370 = (undefined4)uStack_b0;
    uStack_36c = uStack_b0._4_4_;
    local_388 = 0;
    uStack_380 = uVar3;
    uStack_b0 = uVar4;
    local_98 = uVar5;
    uStack_90 = uVar6;
  }
  local_2e8 = (undefined ***)0x0;
  local_c8 = puVar14[3];
  uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(puVar14 + 4));
  FUN_146ba1da4(&local_248,local_348);
  uStack_210 = 4;
  uStack_20c = uStack_20c & 0xffffff00;
  local_228 = 0x4066800000000000;
  local_208 = 1e-08;
  if (1e-08 <= dStack_330 * 0.01) {
    local_208 = dStack_330 * 0.01;
  }
  uVar12 = 0;
  do {
    iVar1 = local_1f0;
    dVar2 = dStack_330 * 0.5;
    iVar13 = local_1f0 + 1;
    do {
      local_3b8 = dVar2;
      cVar8 = FUN_146ba2e02(&local_248,0,0,1);
      if (cVar8 != '\0') break;
      bVar19 = 0 < iVar13;
      iVar13 = iVar13 + -1;
    } while (bVar19);
    if ((local_1f0 == iVar1) || (bVar19 = 999999 < uVar12, uVar12 = uVar12 + 1, bVar19)) {
      FUN_146ba2670(&local_248,0xeb1c432d,0xeb1c432d);
      local_3a0 = 0;
      uStack_398 = 0;
      local_3a8 = 0xffffffff;
      local_3b0 = 0;
      local_3b8 = (double)CONCAT71(local_3b8._1_7_,1);
      FUN_146ba2a14(&local_248,0xffffffff,0,0);
      if (0 < local_1f0) {
        iVar13 = 0;
        do {
          lVar9 = local_390[1];
          iVar1 = *(int *)(lVar9 + 0x38);
          *(uint *)(lVar9 + 0x38) = iVar1 + 1U;
          if (*(uint *)(lVar9 + 0x3c) < iVar1 + 1U) {
            FUN_1474ba6a4((longlong *)(lVar9 + 0x30),iVar1);
          }
          lVar10 = *(longlong *)(lVar9 + 0x30);
          lVar15 = (longlong)iVar1 * 0x100;
          lVar9 = lVar10 + lVar15;
          puVar14 = (undefined8 *)(lVar10 + lVar15);
          puVar14[1] = 0;
          puVar14[2] = 0x300000000;
          *(byte *)(puVar14 + 3) = *(byte *)(puVar14 + 3) | 1;
          *(undefined1 *)((longlong)puVar14 + 0x19) = 3;
          *(undefined4 *)(puVar14 + 4) = 6;
          puVar14[5] = lVar9;
          *puVar14 = &PTR_FUN_14aa0f410;
          puVar17 = (undefined8 *)(lVar10 + 0x90 + lVar15);
          puVar17[-0xc] = 0;
          puVar17[-0xb] = 0;
          puVar17[-10] = 0;
          puVar17[-9] = 0;
          puVar17[-8] = 0;
          puVar17[-7] = 0;
          puVar17[-6] = 0;
          puVar17[-5] = 0;
          puVar17[-4] = 0;
          puVar17[-3] = 0;
          *(undefined1 *)(puVar17 + -2) = 0;
          puVar16 = &DAT_14c846480;
          puVar18 = puVar17;
          for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar18 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar18 = puVar18 + 1;
          }
          puVar17[0xc] = 0;
          FUN_146ec5046(&local_248,&local_388,iVar13,1);
          if (puVar14 + 6 != &local_388) {
            if (*(longlong *)(lVar9 + 0x30) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar9 + 0x30) = local_388;
            local_388 = 0;
            *(undefined4 *)(lVar9 + 0x38) = (undefined4)uStack_380;
            *(undefined4 *)(lVar9 + 0x3c) = uStack_380._4_4_;
            uStack_380 = 0;
          }
          if (local_388 != 0) {
            FUN_1400020a8();
          }
          FUN_1479b2c20(lVar9);
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_1f0);
      }
      if (local_2f8 != (undefined1 *)0x0) {
        pppuVar11 = local_2e8;
        if (local_2e8 == (undefined ***)0x0) {
          pppuVar11 = &local_2d8;
        }
        (*(code *)(*pppuVar11)[2])();
      }
      FUN_146ec51d6(&local_248);
      if (local_108 != (undefined1 *)0x0) {
        pppuVar11 = local_f8;
        if (local_f8 == (undefined ***)0x0) {
          pppuVar11 = &local_e8;
        }
        (*(code *)(*pppuVar11)[2])();
      }
      if ((local_80 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 143bb3798 FUN_143bb3798 body=100 status=ok
// SIG undefined FUN_143bb3798(void)

void FUN_143bb3798(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_146c047ec();
  if (cVar1 != '\0') {
    FUN_1482e1672(local_28,param_1);
    if (local_28[0] < 0.0) {
      FUN_146c0aee0(param_1,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb388c FUN_143bb388c body=12 status=ok
// SIG undefined FUN_143bb388c(void)

void FUN_143bb388c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143bb3895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143bb3898 FUN_143bb3898 body=29 status=ok
// SIG undefined FUN_143bb3898(void)

undefined8 FUN_143bb3898(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bb38b6 FUN_143bb38b6 body=334 status=ok
// SIG undefined FUN_143bb38b6(void)

void FUN_143bb38b6(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_2a8 [32];
  undefined1 local_288;
  undefined8 *local_280;
  code *local_278;
  undefined8 **local_270;
  undefined8 local_268;
  longlong local_260 [2];
  undefined1 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined1 local_240 [544];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_24c = 0;
  local_248 = 0;
  local_260[0] = 0;
  local_260[1] = 0;
  local_250 = 0;
  local_288 = 0;
  FUN_1411b354a(local_240,0,0,0);
  lVar2 = *(longlong *)*param_1;
  local_268 = param_2;
  if (*(int *)(lVar2 + 0x10) == *(int *)(lVar2 + 0x3c)) {
    if (*(char *)param_1[1] == '\x01') {
      iVar1 = *(int *)((char *)param_1[1] + 4);
      iVar5 = 0x20;
      if (0x20 < iVar1) {
        iVar5 = iVar1;
      }
      FUN_14830dfb2(param_2,iVar5,local_260);
    }
  }
  else {
    local_280 = &local_268;
    local_270 = &local_280;
    local_278 = FUN_143bb3a06;
    FUN_143bad420((longlong *)*param_1,param_2,&local_278,0);
  }
  local_250 = 4 < *(int *)(param_1[1] + 8);
  local_24c = *(undefined4 *)(param_1[1] + 8);
  cVar3 = FUN_14830d48c(&local_268,0);
  if (cVar3 != '\0') {
    FUN_146c00942(param_1[2],local_240);
    FUN_14582ed12(param_1[2]);
    if (*(int *)(*(longlong *)(param_1[2] + 0x208) + 0x38) < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = **(undefined8 **)(*(longlong *)(param_1[2] + 0x208) + 0x30);
    }
    FUN_146c39b56(uVar4);
  }
  FUN_141082778(local_240);
  if (local_260[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb3a06 FUN_143bb3a06 body=55 status=ok
// SIG undefined FUN_143bb3a06(void)

void FUN_143bb3a06(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *param_2;
  lVar3 = *param_1;
  iVar2 = *(int *)(lVar3 + 0x10);
  *(uint *)(lVar3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x14) < iVar2 + 1U) {
    FUN_1446f48e2((longlong *)(lVar3 + 8),iVar2);
  }
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 143bb3a3e FUN_143bb3a3e body=238 status=ok
// SIG undefined FUN_143bb3a3e(void)

void FUN_143bb3a3e(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_2e8 [40];
  undefined1 local_2c0 [8];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined1 local_280;
  double local_278;
  double local_270;
  double local_268;
  undefined1 local_240 [552];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_1483ba2b0(local_2c0);
  puVar1 = (undefined8 *)*param_1;
  local_2b8 = puVar1[4];
  uStack_2b0 = puVar1[5];
  local_2a8 = puVar1[6];
  uStack_2a0 = *puVar1;
  local_298 = puVar1[1];
  local_288 = puVar1[3];
  uStack_290 = puVar1[2];
  lVar2 = param_1[1];
  if (0.0 <= *(float *)(lVar2 + 8)) {
    local_268 = (double)*(float *)(lVar2 + 8);
  }
  else {
    local_268 = 0.0;
  }
  local_280 = *(undefined1 *)(lVar2 + 0xc);
  local_278 = (double)*(float *)(lVar2 + 0x10);
  local_270 = (double)*(float *)(lVar2 + 0x14);
  cVar3 = FUN_148316b84(local_2c0);
  if (cVar3 != '\0') {
    FUN_146c00942(param_1[2],local_240);
  }
  FUN_1483ba346(local_2c0);
  if ((local_18 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb3b2e FUN_143bb3b2e body=1140 status=ok
// SIG undefined FUN_143bb3b2e(void)

void FUN_143bb3b2e(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_4d8 [32];
  undefined8 *local_4b8;
  undefined1 local_4b0;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  longlong local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448 [2];
  undefined8 local_440;
  undefined1 local_438;
  int local_434;
  undefined8 local_430;
  undefined1 local_428;
  undefined8 local_420;
  undefined4 local_418;
  undefined1 local_414;
  float local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined1 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined2 local_3e0;
  undefined4 local_3dc;
  longlong local_3d8;
  undefined8 uStack_3d0;
  longlong local_3c8;
  undefined8 uStack_3c0;
  undefined8 *local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8 [2];
  undefined8 local_398;
  undefined8 local_368 [2];
  undefined8 local_358;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2fc;
  undefined4 local_2f4;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2ac;
  undefined4 local_2a4;
  undefined8 local_298;
  undefined4 local_290;
  undefined2 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_254;
  undefined4 local_24c;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined2 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined2 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  local_3b8 = (undefined8 *)0x0;
  uStack_3b0 = 1;
  FUN_148474b36(&local_3b8,0);
  *local_3b8 = param_2;
  local_448[0] = 0x1010101;
  local_440 = 0;
  local_438 = 1;
  local_434 = 0x32;
  local_430 = 0x3ff0000000000000;
  local_428 = 0;
  local_420 = 0x3ff0000000000000;
  local_418 = 1;
  local_414 = 1;
  local_410 = 0.5;
  local_408 = 0;
  local_400 = 0x3fb999999999999a;
  local_3f8 = 0;
  local_3f0 = 0x4008000000000000;
  local_3e8 = 0x4024000000000000;
  local_3e0 = 1;
  local_3dc = 10;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  FUN_14838e08a(local_448,&local_3b8);
  puVar1 = (undefined4 *)*param_1;
  local_434 = puVar1[8];
  local_438 = 4 < local_434;
  local_418 = *puVar1;
  local_410 = (float)*(double *)(puVar1 + 2);
  local_408 = *(undefined8 *)(puVar1 + 4);
  local_400 = *(undefined8 *)(puVar1 + 6);
  local_458 = 0;
  uStack_450 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_498 = 0;
  uStack_490 = 0;
  FUN_14838e7ac(local_448,&local_498,0);
  FUN_146c03744(param_1[1],param_2,1,0);
  local_4a0 = param_1[1];
  if ((longlong)(int)uStack_460 != 0) {
    lVar3 = (longlong)(int)uStack_460 * 0x220;
    lVar2 = local_468;
    do {
      local_308 = 0;
      local_300 = 0;
      local_328 = 0;
      uStack_320 = 0;
      local_2fc = 0xffffffff00000080;
      local_2f4 = 0;
      local_2e8 = 0;
      local_2e0 = 0;
      local_2b8 = 0;
      local_2b0 = 0;
      local_2d8 = 0;
      uStack_2d0 = 0;
      local_2ac = 0xffffffff00000080;
      local_2a4 = 0;
      local_298 = 0;
      local_290 = 0;
      local_288 = 0x101;
      local_260 = 0;
      local_258 = 0;
      local_280 = 0;
      uStack_278 = 0;
      local_254 = 0xffffffff00000080;
      local_24c = 0;
      local_240 = 0;
      local_238 = 0;
      local_210 = 0;
      local_208 = 0;
      local_230 = 0;
      uStack_228 = 0;
      local_204 = 0xffffffff00000080;
      local_1fc = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e0 = 0x101;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1ac = 0xffffffff00000080;
      local_1a4 = 0;
      local_198 = 0;
      local_190 = 0;
      local_168 = 0;
      local_160 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_15c = 0xffffffff00000080;
      local_154 = 0;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0x101;
      local_110 = 0;
      local_108 = 0;
      local_130 = 0;
      uStack_128 = 0;
      local_104 = 0xffffffff00000080;
      local_fc = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_b4 = 0xffffffff00000080;
      local_ac = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0x101;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_368[0] = 0;
      local_358 = 0;
      local_3a8[0] = 0;
      local_398 = 0;
      local_4b8 = local_368;
      local_4b0 = 0;
      FUN_146bcbbdc(&local_4a0,lVar2,&local_328,local_3a8);
      FUN_146bfdcfe(&local_328);
      lVar2 = lVar2 + 0x220;
      lVar3 = lVar3 + -0x220;
    } while (lVar3 != 0);
  }
  FUN_14838fe66(&local_498);
  if (local_3c8 != 0) {
    FUN_1400020a8();
  }
  if (local_3d8 != 0) {
    FUN_1400020a8();
  }
  if (local_3b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_4d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb3faa FUN_143bb3faa body=51 status=ok
// SIG undefined FUN_143bb3faa(void)

void FUN_143bb3faa(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 143bb3fde FUN_143bb3fde body=72 status=ok
// SIG undefined FUN_143bb3fde(void)

void FUN_143bb3fde(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb4028 FUN_143bb4028 body=51 status=ok
// SIG undefined FUN_143bb4028(void)

void FUN_143bb4028(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 143bb405c FUN_143bb405c body=129 status=ok
// SIG undefined FUN_143bb405c(void)

void FUN_143bb405c(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [7];
  char local_1d;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = *param_2;
  FUN_1447cbafe(*(undefined8 *)(param_1 + 8),local_24,&local_1c,&local_1d);
  if (local_1d == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x10);
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f48e2(plVar2,iVar1);
    }
    *(undefined4 *)(*plVar2 + (longlong)iVar1 * 4) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb40de FUN_143bb40de body=221 status=ok
// SIG undefined FUN_143bb40de(void)

void FUN_143bb40de(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 local_78 [32];
  undefined1 local_58 [7];
  char local_51;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)local_78;
  lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x180) + (ulonglong)(*param_2 >> 9) * 8);
  uVar3 = (ulonglong)(*param_2 & 0x1ff);
  local_48 = *(undefined4 *)(lVar4 + 8 + uVar3 * 0xc);
  local_50 = *(undefined8 *)(lVar4 + uVar3 * 0xc);
  lVar4 = 0;
  do {
    FUN_1447cbafe(param_1[1],local_58,(undefined4 *)((longlong)&local_50 + lVar4),&local_51);
    if (local_51 == '\0') {
      plVar2 = (longlong *)param_1[2];
      iVar1 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(plVar2,iVar1);
      }
      *(undefined4 *)(*plVar2 + (longlong)iVar1 * 4) = *(undefined4 *)((longlong)&local_50 + lVar4);
    }
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0xc);
  if ((local_40 ^ (ulonglong)local_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb41bc FUN_143bb41bc body=128 status=ok
// SIG undefined FUN_143bb41bc(void)

void FUN_143bb41bc(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [7];
  char local_1d;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = *param_2;
  FUN_1447cbafe(*param_1,local_24,&local_1c,&local_1d);
  if (local_1d == '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f48e2(plVar2,iVar1);
    }
    *(undefined4 *)(*plVar2 + (longlong)iVar1 * 4) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb423e FUN_143bb423e body=166 status=ok
// SIG undefined FUN_143bb423e(void)

void FUN_143bb423e(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  undefined8 local_28;
  undefined4 local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(*param_2 >> 9) * 8);
  uVar2 = (ulonglong)(*param_2 & 0x1ff);
  local_20[0] = *(undefined4 *)(lVar1 + 8 + uVar2 * 0xc);
  local_28 = *(undefined8 *)(lVar1 + uVar2 * 0xc);
  FUN_1447cbafe(param_1[1],local_2c,&local_28,0);
  FUN_1447cbafe(param_1[1],local_2c,(longlong)&local_28 + 4,0);
  FUN_1447cbafe(param_1[1],local_2c,local_20,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb42e6 FUN_143bb42e6 body=86 status=ok
// SIG undefined FUN_143bb42e6(void)

void FUN_143bb42e6(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *param_1;
  local_14 = FUN_146bc96d4(param_1[1],*param_2);
  FUN_144984904(uVar1,local_18,&local_14,0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb433e FUN_143bb433e body=113 status=ok
// SIG undefined FUN_143bb433e(void)

void FUN_143bb433e(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [39];
  char local_21;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_21 = '\0';
  FUN_1447cbafe(*param_1,&local_1c,&local_20,&local_21);
  if (local_21 == '\0') {
    local_1c = local_20;
    (**(code **)param_1[1])(((undefined8 *)param_1[1])[1]);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb43b0 FUN_143bb43b0 body=113 status=ok
// SIG undefined FUN_143bb43b0(void)

void FUN_143bb43b0(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [39];
  char local_21;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_21 = '\0';
  FUN_1447cbafe(*param_1,&local_1c,&local_20,&local_21);
  if (local_21 == '\0') {
    local_1c = local_20;
    (**(code **)param_1[1])(((undefined8 *)param_1[1])[1]);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb4422 FUN_143bb4422 body=197 status=ok
// SIG undefined FUN_143bb4422(void)

void FUN_143bb4422(undefined8 *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *puStack_40;
  float local_38;
  float local_34;
  float local_30;
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar3 = *(int **)*param_1;
  local_48 = &DAT_3f8000003f800000;
  puStack_40 = &DAT_3f8000003f800000;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar5 = 1.0;
  if (dVar1 <= 1.0) {
    dVar5 = dVar1;
  }
  dVar4 = 1.0;
  if (dVar2 <= 1.0) {
    dVar4 = dVar2;
  }
  local_18 = (double)piVar3[1] * (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar4);
  local_20 = (double)*piVar3 * (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar5);
  FUN_1483b7358(piVar3,&local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((local_38 + local_34 + local_30) / 3.0);
}



// FUNCTION 143bb4512 FUN_143bb4512 body=29 status=ok
// SIG undefined FUN_143bb4512(void)

undefined8 FUN_143bb4512(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143bb4530 FUN_143bb4530 body=774 status=ok
// SIG undefined FUN_143bb4530(void)

bool FUN_143bb4530(longlong *param_1,char *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  longlong *local_d0 [2];
  longlong *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  cVar2 = *param_2;
  if (cVar2 == '\0') {
    uVar3 = *param_3;
    if (DAT_14cb4e2d0 == 0) {
      uVar5 = FUN_140bf5a7a();
      DAT_14cb4e2d0 = FUN_14171c317(FUN_1464985f1,uVar5,L"EGeometryScriptBakeTypes");
    }
    if (*(int *)(DAT_14cb4e2d0 + 0x48) < 1) {
      local_80 = (wchar_t *)0x0;
    }
    else {
      local_80 = (wchar_t *)**(undefined8 **)(DAT_14cb4e2d0 + 0x40);
    }
    FUN_145715fae(&local_c0);
    local_e0 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 8))();
    }
    local_d8 = local_b8;
    param_1 = (longlong *)*param_1;
    local_f0 = (longlong *)*param_1;
    if (local_f0 != (longlong *)0x0) {
      (**(code **)(*local_f0 + 8))();
    }
    local_e8 = (undefined4)param_1[1];
    local_80 = L"BakeTexture_InvalidBakeType";
    local_78[0] = 0x1b;
    FUN_1446e940c(local_114,&local_80);
    local_80 = L"UGeometryScriptLibrary_MeshBakeFunctions";
    local_78[0] = 0x28;
    FUN_1446e940c(local_118,&local_80);
    local_80 = L"{0}: {1} bake type is not a supported RGBA evaluator.";
    local_78[0] = 0x35;
    FUN_140208c1e(local_110,local_118,local_114,&local_80);
    FUN_14023409e(&local_100,local_110,1);
    local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
    FUN_14023423e(local_70,&local_f0);
    local_60 = 4;
    FUN_14023423e(local_50,&local_e0);
    local_98 = &local_40;
    local_a0 = &local_80;
    FUN_14010d304(&local_90);
    local_b0 = local_100;
    local_a8 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d0,&local_b0,&local_90);
    FUN_14007f2db(local_90,local_88);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    lVar6 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_78 + lVar6 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_78 + lVar6 + -8) = 0;
        *(undefined4 *)((longlong)local_78 + lVar6) = 0;
      }
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_f8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_f0 != (longlong *)0x0) {
      (**(code **)(*local_f0 + 0x10))();
    }
    if (local_e0 != (longlong *)0x0) {
      (**(code **)(*local_e0 + 0x10))();
    }
    FUN_143baeec1(uVar3,local_d0);
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return cVar2 != '\0';
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb4838 FUN_143bb4838 body=93 status=ok
// SIG undefined FUN_143bb4838(void)

char FUN_143bb4838(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  char *pcVar4;
  
  uVar1 = *param_4;
  uVar2 = *param_3;
  pcVar4 = (char *)*param_1;
  cVar3 = '\x01';
  if ((*pcVar4 == '\x01') && (param_1[1] != 0)) {
    cVar3 = FUN_146c316a2(param_1[1],uVar2,uVar1);
    pcVar4 = (char *)*param_1;
  }
  if (pcVar4[1] == '\x01') {
    if (cVar3 == '\0') {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
      if (param_1[2] != 0) {
        cVar3 = FUN_146c2e4a6(param_1[2],uVar2,uVar1);
      }
    }
  }
  return cVar3;
}



// FUNCTION 143bb4896 FUN_143bb4896 body=196 status=ok
// SIG undefined FUN_143bb4896(void)

void FUN_143bb4896(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38 [6];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  lVar3 = *(longlong *)(param_1 + 2);
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0x3f800000;
  uVar4 = FUN_146c34fac(lVar3,uVar2,*param_1);
  if (uVar4 != 0xffffffff) {
    puVar1 = (undefined4 *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar4 >> 4 & 0x3fffff8)) +
             (ulonglong)((uVar4 & 0x7f) << 4));
    local_38[0] = *puVar1;
    local_38[1] = puVar1[1];
    local_38[2] = puVar1[2];
    local_38[3] = puVar1[3];
  }
  uVar4 = FUN_146c34fac(*(undefined8 *)(param_1 + 4),uVar2);
  lVar3 = *(longlong *)(param_1 + 4);
  lVar5 = 0;
  do {
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar4 >> 7 & 0x7fffff) * 8) +
      (ulonglong)((uVar4 & 0x7f) << 4) + lVar5 * 4) = local_38[lVar5];
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb495c FUN_143bb495c body=790 status=ok
// SIG undefined FUN_143bb495c(void)

bool FUN_143bb495c(longlong *param_1,byte *param_2,undefined8 *param_3)

{
  int *piVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  longlong *local_d0 [2];
  longlong *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar3 = *param_3;
  bVar2 = *param_2;
  if ((bVar2 == 0xd) || (bVar2 == 0)) {
    if (DAT_14cb4e2d0 == 0) {
      uVar5 = FUN_140bf5a7a();
      DAT_14cb4e2d0 = FUN_14171c317(FUN_1464985f1,uVar5,L"EGeometryScriptBakeTypes");
    }
    if (*(uint *)(DAT_14cb4e2d0 + 0x48) == (uint)bVar2 ||
        (int)*(uint *)(DAT_14cb4e2d0 + 0x48) < (int)(uint)bVar2) {
      local_80 = (wchar_t *)0x0;
    }
    else {
      local_80 = *(wchar_t **)(*(longlong *)(DAT_14cb4e2d0 + 0x40) + (ulonglong)bVar2 * 0x10);
    }
    FUN_145715fae(&local_c0);
    local_e0 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 8))();
    }
    local_d8 = local_b8;
    param_1 = (longlong *)*param_1;
    local_f0 = (longlong *)*param_1;
    if (local_f0 != (longlong *)0x0) {
      (**(code **)(*local_f0 + 8))();
    }
    local_e8 = (undefined4)param_1[1];
    local_80 = L"BakeVertex_InvalidBakeType";
    local_78[0] = 0x1a;
    FUN_1446e940c(local_114,&local_80);
    local_80 = L"UGeometryScriptLibrary_MeshBakeFunctions";
    local_78[0] = 0x28;
    FUN_1446e940c(local_118,&local_80);
    local_80 = L"{0}: {1} bake type is not a supported RGBA evaluator.";
    local_78[0] = 0x35;
    FUN_140208c1e(local_110,local_118,local_114,&local_80);
    FUN_14023409e(&local_100,local_110,1);
    local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
    FUN_14023423e(local_70,&local_f0);
    local_60 = 4;
    FUN_14023423e(local_50,&local_e0);
    local_98 = &local_40;
    local_a0 = &local_80;
    FUN_14010d304(&local_90);
    local_b0 = local_100;
    local_a8 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d0,&local_b0,&local_90);
    FUN_14007f2db(local_90,local_88);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    lVar6 = 0x30;
    do {
      plVar4 = *(longlong **)((longlong)local_78 + lVar6 + -8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        *(undefined8 *)((longlong)local_78 + lVar6 + -8) = 0;
        *(undefined4 *)((longlong)local_78 + lVar6) = 0;
      }
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_f8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_f0 != (longlong *)0x0) {
      (**(code **)(*local_f0 + 0x10))();
    }
    if (local_e0 != (longlong *)0x0) {
      (**(code **)(*local_e0 + 0x10))();
    }
    FUN_143baeec1(uVar3,local_d0);
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return bVar2 != 0xd && bVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb4c74 FUN_143bb4c74 body=780 status=ok
// SIG undefined FUN_143bb4c74(void)

undefined8 FUN_143bb4c74(longlong *param_1,byte *param_2,undefined8 *param_3)

{
  int *piVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  longlong *local_d0 [2];
  longlong *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar3 = *param_3;
  bVar2 = *param_2;
  if (bVar2 < 0xd) {
    uVar5 = CONCAT71((int7)(local_40 >> 8),1);
    if ((0x10c1U >> (bVar2 & 0x1f) & 1) != 0) goto LAB_143bb4cb1;
  }
  if (DAT_14cb4e2d0 == 0) {
    uVar5 = FUN_140bf5a7a();
    DAT_14cb4e2d0 = FUN_14171c317(FUN_1464985f1,uVar5,L"EGeometryScriptBakeTypes");
  }
  if ((int)(uint)bVar2 < *(int *)(DAT_14cb4e2d0 + 0x48)) {
    local_80 = *(wchar_t **)(*(longlong *)(DAT_14cb4e2d0 + 0x40) + (ulonglong)bVar2 * 0x10);
  }
  else {
    local_80 = (wchar_t *)0x0;
  }
  FUN_145715fae(&local_c0);
  local_e0 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 8))();
  }
  local_d8 = local_b8;
  param_1 = (longlong *)*param_1;
  local_f0 = (longlong *)*param_1;
  if (local_f0 != (longlong *)0x0) {
    (**(code **)(*local_f0 + 8))();
  }
  local_e8 = (undefined4)param_1[1];
  local_80 = L"BakeVertex_InvalidChannelEval";
  local_78[0] = 0x1d;
  FUN_1446e940c(local_114,&local_80);
  local_80 = L"UGeometryScriptLibrary_MeshBakeFunctions";
  local_78[0] = 0x28;
  FUN_1446e940c(local_118,&local_80);
  local_80 = L"{0}: {1} bake type is not a supported per-channel evaluator.";
  local_78[0] = 0x3c;
  FUN_140208c1e(local_110,local_118,local_114,&local_80);
  FUN_14023409e(&local_100,local_110,1);
  local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
  FUN_14023423e(local_70,&local_f0);
  local_60 = 4;
  FUN_14023423e(local_50,&local_e0);
  local_98 = &local_40;
  local_a0 = &local_80;
  FUN_14010d304(&local_90);
  local_b0 = local_100;
  local_a8 = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_d0,&local_b0,&local_90);
  FUN_14007f2db(local_90,local_88);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  lVar6 = 0x30;
  do {
    plVar4 = *(longlong **)((longlong)local_78 + lVar6 + -8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      *(undefined8 *)((longlong)local_78 + lVar6 + -8) = 0;
      *(undefined4 *)((longlong)local_78 + lVar6) = 0;
    }
    lVar6 = lVar6 + -0x20;
  } while (lVar6 != -0x10);
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar1 = (int *)((longlong)local_f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_f8 + 0x10))(local_f8);
      }
    }
  }
  if (local_f0 != (longlong *)0x0) {
    (**(code **)(*local_f0 + 0x10))();
  }
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x10))();
  }
  FUN_143baeec1(uVar3,local_d0);
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
  if (local_110[0] != (longlong *)0x0) {
    (**(code **)(*local_110[0] + 0x10))();
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x10))();
  }
  uVar5 = 0;
LAB_143bb4cb1:
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb4f82 FUN_143bb4f82 body=54 status=ok
// SIG undefined FUN_143bb4f82(void)

void FUN_143bb4f82(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x208);
  *(undefined8 *)(param_2 + 0x208) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_146c03a3e(param_2);
  return;
}



// FUNCTION 143bb4fb8 FUN_143bb4fb8 body=217 status=ok
// SIG undefined FUN_143bb4fb8(void)

void FUN_143bb4fb8(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)*param_1;
  if (((-1 < (int)uVar1) &&
      ((int)uVar1 < *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + (ulonglong)(uVar1 >> 9) * 8)
                         + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    *(undefined1 *)param_1[1] = 1;
    puVar2 = (undefined4 *)param_1[2];
    local_28 = *(undefined8 *)(puVar2 + 4);
    local_38 = *puVar2;
    uStack_34 = puVar2[1];
    uStack_30 = puVar2[2];
    uStack_2c = puVar2[3];
    uVar1 = *(uint *)*param_1;
    cVar4 = FUN_146bfed03(&local_38);
    if (cVar4 != '\0') {
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
      uVar5 = (ulonglong)(uVar1 & 0x1ff);
      *(undefined8 *)(lVar3 + 0x10 + uVar5 * 0x18) = local_28;
      puVar2 = (undefined4 *)(lVar3 + uVar5 * 0x18);
      *puVar2 = local_38;
      puVar2[1] = uStack_34;
      puVar2[2] = uStack_30;
      puVar2[3] = uStack_2c;
      if (*(char *)(param_2 + 0x210) == '\x01') {
        LOCK();
        *(int *)(param_2 + 0x214) = *(int *)(param_2 + 0x214) + 1;
        UNLOCK();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb5092 FUN_143bb5092 body=509 status=ok
// SIG undefined FUN_143bb5092(void)

void FUN_143bb5092(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  longlong *local_50 [2];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = *(longlong **)*param_1;
  uVar9 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  if ((int)plVar2[1] < (int)uVar9) {
    local_40 = L"SetAllMeshVertexPositions_IncorrectCount";
    local_38 = 0x28;
    FUN_1446e940c(local_54,&local_40);
    local_40 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
    local_38 = 0x2d;
    FUN_1446e940c(local_58,&local_40);
    local_40 = 
    L"SetAllMeshVertexPositions: size of provided PositionList is smaller than MaxVertexID of Mesh";
    local_38 = 0x5c;
    FUN_140208c1e(local_50,local_58,local_54,&local_40);
    FUN_143ba90d7(*(undefined8 *)param_1[1],2,local_50);
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
  }
  else {
    uVar14 = 0;
    if ((uVar9 != 0) &&
       (uVar14 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x28) - 1U))) {
      uVar12 = 1;
      uVar13 = 1;
      if (1 < (int)uVar9) {
        uVar12 = uVar9;
      }
      do {
        uVar14 = uVar12;
        if (uVar12 == uVar13) break;
        uVar8 = uVar13 >> 9;
        uVar11 = uVar13 & 0x1ff;
        uVar14 = uVar13;
        uVar13 = uVar13 + 1;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x28))[uVar8] +
                                           (ulonglong)uVar11 * 2) - 1U));
    }
LAB_143bb5265:
    if (uVar14 != uVar9) {
      puVar10 = (undefined4 *)((longlong)(int)uVar14 * 0x18 + *plVar2);
      cVar7 = FUN_146bfed03(puVar10);
      if (cVar7 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar14 >> 9) * 8);
        *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(uVar14 & 0x1ff) * 0x18) =
             *(undefined8 *)(puVar10 + 4);
        uVar4 = puVar10[1];
        uVar5 = puVar10[2];
        uVar6 = puVar10[3];
        puVar1 = (undefined4 *)(lVar3 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
        *puVar1 = *puVar10;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        if (*(char *)(param_2 + 0x210) == '\x01') {
          LOCK();
          *(int *)(param_2 + 0x214) = *(int *)(param_2 + 0x214) + 1;
          UNLOCK();
        }
      }
      uVar12 = uVar14 + 1;
      if ((int)(uVar14 + 1) < (int)uVar9) {
        uVar12 = uVar9;
      }
      uVar13 = uVar14;
      do {
        uVar14 = uVar12;
        if (uVar12 - 1 == uVar13) break;
        uVar14 = uVar13 + 1;
        uVar13 = uVar14;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x28) +
                                             (ulonglong)(uVar14 >> 9) * 8) +
                                           (ulonglong)(uVar14 & 0x1ff) * 2) - 1U));
      goto LAB_143bb5265;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bb5290 FUN_143bb5290 body=141 status=ok
// SIG undefined FUN_143bb5290(void)

void FUN_143bb5290(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined4 *)param_1[1];
  local_48 = *(undefined8 *)(puVar1 + 4);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  local_40 = DAT_14c846330;
  local_38 = DAT_14c846338;
  local_34 = DAT_14c846330;
  local_2c = DAT_14c846338;
  local_28 = DAT_14c84635c;
  local_20 = 0;
  local_1e = 0;
  uVar2 = FUN_146c02208(param_2);
  *(undefined4 *)*param_1 = uVar2;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb531e FUN_143bb531e body=306 status=ok
// SIG undefined FUN_143bb531e(void)

void FUN_143bb531e(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = (longlong)(int)(*(longlong **)*param_1)[1];
  local_b0 = param_2;
  if (lVar6 != 0) {
    lVar3 = **(longlong **)*param_1;
    lVar7 = 0;
    do {
      local_98 = *(undefined8 *)(lVar3 + 0x10 + lVar7);
      puVar1 = (undefined4 *)(lVar3 + lVar7);
      local_a8 = *puVar1;
      uStack_a4 = puVar1[1];
      uStack_a0 = puVar1[2];
      uStack_9c = puVar1[3];
      local_68 = DAT_14c846338;
      local_70 = DAT_14c846330;
      local_5c = DAT_14c846338;
      local_64 = DAT_14c846330;
      local_58 = DAT_14c84635c;
      local_50 = 0;
      local_4e = 0;
      local_88 = local_a8;
      uStack_84 = uStack_a4;
      uStack_80 = uStack_a0;
      uStack_7c = uStack_9c;
      local_78 = local_98;
      uVar5 = FUN_146c02208(local_b0,&local_88);
      plVar4 = *(longlong **)(param_1[1] + 8);
      iVar2 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(plVar4,iVar2);
      }
      *(undefined4 *)(*plVar4 + (longlong)iVar2 * 4) = uVar5;
      lVar7 = lVar7 + 0x18;
    } while (lVar6 * 0x18 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb5452 FUN_143bb5452 body=42 status=ok
// SIG undefined FUN_143bb5452(void)

void FUN_143bb5452(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_146c0b0ee(param_2,*(undefined4 *)*param_1,0);
  *(bool *)param_1[1] = iVar1 == 0;
  return;
}



// FUNCTION 143bb547c FUN_143bb547c body=89 status=ok
// SIG undefined FUN_143bb547c(void)

void FUN_143bb547c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)(int)(*(longlong **)(*param_1 + 8))[1];
  if (lVar3 != 0) {
    lVar1 = **(longlong **)(*param_1 + 8);
    lVar4 = 0;
    do {
      iVar2 = FUN_146c0b0ee(param_2,*(undefined4 *)(lVar1 + lVar4),0);
      if (iVar2 == 0) {
        *(int *)param_1[1] = *(int *)param_1[1] + 1;
      }
      lVar4 = lVar4 + 4;
    } while (lVar3 * 4 != lVar4);
  }
  return;
}



// FUNCTION 143bb54d6 FUN_143bb54d6 body=103 status=ok
// SIG undefined FUN_143bb54d6(void)

void FUN_143bb54d6(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined4 *)param_1[1];
  local_1c = *puVar1;
  local_18 = puVar1[1];
  local_14 = puVar1[2];
  uVar2 = FUN_146c01152(param_2,&local_1c,*(undefined4 *)param_1[2]);
  *(undefined4 *)*param_1 = uVar2;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb553e FUN_143bb553e body=198 status=ok
// SIG undefined FUN_143bb553e(void)

void FUN_143bb553e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [36];
  undefined8 local_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = (longlong)(int)(*(longlong **)*param_1)[1];
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)**(longlong **)*param_1;
    puVar1 = (undefined8 *)((longlong)puVar6 + lVar5 * 0xc);
    do {
      local_54 = *puVar6;
      local_4c = *(undefined4 *)(puVar6 + 1);
      uVar4 = FUN_146c01152(param_2,&local_54,*(undefined4 *)param_1[1]);
      plVar3 = *(longlong **)(param_1[2] + 8);
      iVar2 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(plVar3,iVar2);
      }
      *(undefined4 *)(*plVar3 + (longlong)iVar2 * 4) = uVar4;
      puVar6 = (undefined8 *)((longlong)puVar6 + 0xc);
    } while (puVar6 != puVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb5606 FUN_143bb5606 body=45 status=ok
// SIG undefined FUN_143bb5606(void)

void FUN_143bb5606(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_146c0b65a(param_2,*(undefined4 *)*param_1,1,0);
  *(bool *)param_1[1] = iVar1 == 0;
  return;
}



// FUNCTION 143bb5634 FUN_143bb5634 body=92 status=ok
// SIG undefined FUN_143bb5634(void)

void FUN_143bb5634(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)(int)(*(longlong **)(*param_1 + 8))[1];
  if (lVar3 != 0) {
    lVar1 = **(longlong **)(*param_1 + 8);
    lVar4 = 0;
    do {
      iVar2 = FUN_146c0b65a(param_2,*(undefined4 *)(lVar1 + lVar4),1,0);
      if (iVar2 == 0) {
        *(int *)param_1[1] = *(int *)param_1[1] + 1;
      }
      lVar4 = lVar4 + 4;
    } while (lVar3 * 4 != lVar4);
  }
  return;
}



// FUNCTION 143bb5690 FUN_143bb5690 body=166 status=ok
// SIG undefined FUN_143bb5690(void)

void FUN_143bb5690(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_143bab15a(*param_1,param_2,&local_48,1);
  lVar1 = local_48;
  lVar3 = (longlong)(int)uStack_40;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      iVar2 = FUN_146c0b65a(param_2,*(undefined4 *)(lVar1 + lVar4),1,0);
      if (iVar2 == 0) {
        *(int *)param_1[1] = *(int *)param_1[1] + 1;
      }
      lVar4 = lVar4 + 4;
    } while (lVar3 * 4 != lVar4);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bb5738 FUN_143bb5738 body=2643 status=ok
// SIG undefined FUN_143bb5738(void)

void FUN_143bb5738(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  float *pfVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  longlong local_a8;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_2 + 0x208) == 0) {
    FUN_14582ed12(param_2);
  }
  if (*(char *)(param_2 + 0x1a8) == '\0') {
    FUN_14582eef4(param_2);
  }
  local_d0 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48);
  if (local_d0 == 0) {
    FUN_14582ed9a();
    local_d0 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x48);
  }
  local_98 = (void *)0x0;
  uStack_90 = 0;
  lVar14 = *param_1;
  uVar3 = *(uint *)(lVar14 + 8);
  uVar10 = (ulonglong)uVar3;
  local_e8 = uVar10;
  if ((int)uVar3 < 1) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar10);
    }
  }
  else {
    uStack_90 = (ulonglong)uVar3;
    lVar14 = 0;
    FUN_1446f48e2(&local_98);
    memset(local_98,0,uVar10 * 4);
    uVar13 = 0;
    do {
      local_a8 = *(longlong *)(*(longlong *)*param_1 + 0x10 + lVar14);
      pfVar2 = (float *)(*(longlong *)*param_1 + lVar14);
      local_b8 = *pfVar2;
      fStack_b4 = pfVar2[1];
      local_88 = *(wchar_t **)pfVar2;
      fStack_b0 = pfVar2[2];
      fStack_ac = pfVar2[3];
      lStack_80 = *(longlong *)(pfVar2 + 2);
      local_68._0_4_ = DAT_14c846338;
      local_70 = DAT_14c846330;
      local_60._4_4_ = DAT_14c846338;
      local_68._4_4_ = (undefined4)DAT_14c846330;
      local_60._0_4_ = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
      local_58 = DAT_14c84635c;
      local_50 = local_50 & 0xffffffffff000000;
      local_78 = local_a8;
      uVar9 = FUN_146c02208(param_2);
      *(undefined4 *)((longlong)local_98 + uVar13 * 4) = uVar9;
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x18;
    } while (uVar10 != uVar13);
    lVar14 = *param_1;
  }
  plVar4 = *(longlong **)(param_1[1] + 8);
  uVar3 = *(uint *)(lVar14 + 0xb8);
  uVar10 = (ulonglong)uVar3;
  local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(lVar14 + 200));
  local_c8 = (ulonglong)*(uint *)(param_2 + 0x1b0);
  *(uint *)(param_2 + 0x1b0) = *(uint *)(param_2 + 0x1b0) + 1;
  local_f0 = param_1;
  local_e0 = param_2;
  if (0 < (int)uVar3) {
    lVar14 = 8;
    uVar13 = 0;
    do {
      plVar6 = local_f0;
      uVar18 = local_c8 & 0xffffffff;
      if ((uint)local_d8 == uVar3) {
        uVar18 = (ulonglong)*(uint *)(*(longlong *)(*local_f0 + 0xc0) + uVar13 * 4);
      }
      lVar15 = *(longlong *)(*local_f0 + 0xb0);
      local_88 = (wchar_t *)
                 CONCAT44(*(undefined4 *)
                           ((longlong)local_98 + (longlong)*(int *)(lVar15 + -4 + lVar14) * 4),
                          *(undefined4 *)
                           ((longlong)local_98 + (longlong)*(int *)(lVar15 + -8 + lVar14) * 4));
      lStack_80 = CONCAT44(lStack_80._4_4_,
                           *(undefined4 *)
                            ((longlong)local_98 + (longlong)*(int *)(lVar15 + lVar14) * 4));
      uVar7 = FUN_146c01152(local_e0,&local_88,uVar18);
      if ((int)uVar7 < 0) {
        if (uVar7 == 0xfffffffd) {
          local_88 = L"AppendBuffersToMesh_Duplicate";
          lStack_80._0_4_ = 0x1d;
          FUN_1446e940c(local_bc,&local_88);
          local_88 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
          lStack_80._0_4_ = 0x2d;
          FUN_1446e940c(local_c0,&local_88);
          local_88 = 
          L"AppendBuffersToMesh: Triangle cannot be added because it is a duplicate of an existing Triangle"
          ;
          lStack_80 = CONCAT44(lStack_80._4_4_,0x5f);
LAB_143bb5993:
          FUN_140208c1e(&local_b8,local_c0,local_bc,&local_88);
          uVar11 = *(undefined8 *)plVar6[2];
          uVar12 = 2;
        }
        else {
          if (uVar7 == 0xfffffffe) {
            local_88 = L"AppendBuffersToMesh_NonManifold";
            lStack_80._0_4_ = 0x1f;
            FUN_1446e940c(local_bc,&local_88);
            local_88 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
            lStack_80._0_4_ = 0x2d;
            FUN_1446e940c(local_c0,&local_88);
            local_88 = 
            L"AppendBuffersToMesh: Triangle cannot be added because it would create invalid Non-Manifold Mesh Topology"
            ;
            lStack_80 = CONCAT44(lStack_80._4_4_,0x68);
            goto LAB_143bb5993;
          }
          local_88 = L"AppendBuffersToMesh_Unknown";
          lStack_80._0_4_ = 0x1b;
          FUN_1446e940c(local_bc,&local_88);
          local_88 = L"UGeometryScriptLibrary_MeshBasicEditFunctions";
          lStack_80._0_4_ = 0x2d;
          FUN_1446e940c(local_c0,&local_88);
          local_88 = L"AppendBuffersToMesh: adding Triangle Failed";
          lStack_80 = CONCAT44(lStack_80._4_4_,0x2b);
          FUN_140208c1e(&local_b8,local_c0,local_bc,&local_88);
          uVar11 = *(undefined8 *)plVar6[2];
          uVar12 = 3;
        }
        FUN_143ba90d7(uVar11,uVar12,&local_b8);
        if ((longlong *)CONCAT44(fStack_b4,local_b8) != (longlong *)0x0) {
          (**(code **)(*(longlong *)CONCAT44(fStack_b4,local_b8) + 0x10))();
        }
        uVar7 = 0xffffffff;
      }
      else {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(local_d0 + 0x20) + (ulonglong)(uVar7 >> 9) * 8) +
         (ulonglong)(uVar7 & 0x1ff) * 4) = *(undefined4 *)plVar6[3];
      }
      lVar15 = plVar4[1];
      uVar8 = (int)lVar15 + 1;
      *(uint *)(plVar4 + 1) = uVar8;
      if (*(uint *)((longlong)plVar4 + 0xc) < uVar8) {
        FUN_1446f48e2(plVar4);
      }
      *(uint *)(*plVar4 + (longlong)(int)lVar15 * 4) = uVar7;
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0xc;
    } while (uVar10 != uVar13);
  }
  uVar13 = local_e8;
  plVar6 = local_f0;
  iVar16 = (int)local_e8;
  lVar14 = local_e0;
  if (*(int *)(*local_f0 + 0x18) == iVar16) {
    if (*(int *)(*(longlong *)(local_e0 + 0x208) + 0x38) < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = **(undefined8 **)(*(longlong *)(local_e0 + 0x208) + 0x30);
    }
    iVar17 = (int)uStack_90;
    lVar14 = (longlong)(int)uStack_90;
    if ((int)uStack_90 < iVar16) {
      uVar7 = iVar16 - (int)uStack_90;
      uStack_90 = CONCAT44(uStack_90._4_4_,iVar16);
      if ((uint)(uStack_90._4_4_ - iVar17) < uVar7) {
        FUN_1446f48e2(&local_98);
      }
      memset((void *)(lVar14 * 4 + (longlong)local_98),0,(longlong)(int)uVar7 << 2);
    }
    else {
      uVar18 = local_e8;
      if (iVar16 < 0) goto LAB_143bb617a;
      if (iVar16 < (int)uStack_90) {
        uStack_90 = CONCAT44(uStack_90._4_4_,iVar16);
        FUN_14479f406();
      }
    }
    if (0 < iVar16) {
      lVar14 = 0x10;
      uVar18 = 0;
      do {
        lVar15 = *(longlong *)(*plVar6 + 0x10);
        local_88 = (wchar_t *)
                   CONCAT44((float)*(double *)(lVar15 + -8 + lVar14),
                            (float)*(double *)(lVar15 + -0x10 + lVar14));
        lStack_80 = CONCAT44(lStack_80._4_4_,(float)*(double *)(lVar15 + lVar14));
        uVar9 = FUN_146c2f9e2(uVar11,&local_88);
        *(undefined4 *)((longlong)local_98 + uVar18 * 4) = uVar9;
        uVar18 = uVar18 + 1;
        lVar14 = lVar14 + 0x18;
      } while (uVar13 != uVar18);
    }
    lVar14 = local_e0;
    if (0 < (int)uVar3) {
      lVar15 = 8;
      uVar18 = 0;
      do {
        if (-1 < *(int *)(*plVar4 + uVar18 * 4)) {
          lVar1 = *(longlong *)(*local_f0 + 0xb0);
          local_88 = (wchar_t *)
                     CONCAT44(*(undefined4 *)
                               ((longlong)local_98 + (longlong)*(int *)(lVar1 + -4 + lVar15) * 4),
                              *(undefined4 *)
                               ((longlong)local_98 + (longlong)*(int *)(lVar1 + -8 + lVar15) * 4));
          lStack_80 = CONCAT44(lStack_80._4_4_,
                               *(undefined4 *)
                                ((longlong)local_98 + (longlong)*(int *)(lVar1 + lVar15) * 4));
          FUN_146c01580(uVar11,*(undefined4 *)(*plVar4 + uVar18 * 4),&local_88,1);
        }
        uVar18 = uVar18 + 1;
        lVar15 = lVar15 + 0xc;
      } while (uVar10 != uVar18);
    }
  }
  lVar5 = *local_f0;
  local_88 = (wchar_t *)(lVar5 + 0x20);
  lStack_80 = lVar5 + 0x30;
  local_78 = lVar5 + 0x40;
  local_70 = lVar5 + 0x50;
  lVar15 = lVar5 + 0x60;
  local_68._0_4_ = (undefined4)lVar15;
  local_68._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
  lVar1 = lVar5 + 0x70;
  local_60._0_4_ = (undefined4)lVar1;
  local_60._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  local_58 = lVar5 + 0x80;
  local_50 = lVar5 + 0x90;
  uVar19 = 0;
  do {
    if (*(int *)((&local_88)[uVar19] + 8) != iVar16) goto LAB_143bb5c8e;
    uVar19 = uVar19 + 1;
  } while (uVar19 != 8);
  uVar19 = 8;
LAB_143bb5c8e:
  local_68 = lVar15;
  local_60 = lVar1;
  (**(code **)(**(longlong **)(lVar14 + 0x208) + 0xa8))();
  uVar18 = uVar13;
  if ((int)uVar19 != 0) {
    local_d8 = uVar19 & 0xffffffff;
    uVar19 = 0;
    do {
      if ((longlong)uVar19 < (longlong)*(int *)(*(longlong *)(lVar14 + 0x208) + 0x28)) {
        uVar11 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar14 + 0x208) + 0x20) + uVar19 * 8);
      }
      else {
        uVar11 = 0;
      }
      iVar16 = (int)uStack_90;
      lVar14 = (longlong)(int)uStack_90;
      iVar17 = (int)uVar18;
      if ((int)uStack_90 < iVar17) {
        uVar7 = iVar17 - (int)uStack_90;
        uStack_90 = CONCAT44(uStack_90._4_4_,iVar17);
        if ((uint)(uStack_90._4_4_ - iVar16) < uVar7) {
          FUN_1446f48e2(&local_98);
        }
        memset((void *)(lVar14 * 4 + (longlong)local_98),0,(longlong)(int)uVar7 << 2);
        uVar18 = local_e8;
      }
      else {
        if (iVar17 < 0) goto LAB_143bb617a;
        if (iVar17 < (int)uStack_90) {
          uStack_90 = CONCAT44(uStack_90._4_4_,iVar17);
          FUN_14479f406(&local_98);
        }
      }
      if (0 < (int)uVar18) {
        lVar14 = 0;
        do {
          fStack_b4 = (float)*(double *)(*(longlong *)(&local_88)[uVar19] + 8 + lVar14 * 4);
          local_b8 = (float)*(double *)(*(longlong *)(&local_88)[uVar19] + lVar14 * 4);
          uVar9 = FUN_146c2d0a4(uVar11);
          *(undefined4 *)((longlong)local_98 + lVar14) = uVar9;
          lVar14 = lVar14 + 4;
        } while (uVar13 * 4 - lVar14 != 0);
      }
      if (0 < (int)uVar3) {
        lVar14 = 8;
        uVar18 = 0;
        do {
          if (-1 < *(int *)(*plVar4 + uVar18 * 4)) {
            lVar15 = *(longlong *)(*local_f0 + 0xb0);
            fStack_b0 = *(float *)((longlong)local_98 + (longlong)*(int *)(lVar15 + lVar14) * 4);
            fStack_b4 = *(float *)((longlong)local_98 + (longlong)*(int *)(lVar15 + -4 + lVar14) * 4
                                  );
            local_b8 = *(float *)((longlong)local_98 + (longlong)*(int *)(lVar15 + -8 + lVar14) * 4)
            ;
            FUN_146c01486(uVar11,*(undefined4 *)(*plVar4 + uVar18 * 4),&local_b8,1);
          }
          uVar18 = uVar18 + 1;
          lVar14 = lVar14 + 0xc;
        } while (uVar10 != uVar18);
      }
      uVar19 = uVar19 + 1;
      lVar14 = local_e0;
      uVar18 = local_e8;
    } while (uVar19 != local_d8);
  }
  plVar6 = local_f0;
  iVar16 = (int)uVar18;
  if (*(int *)(*local_f0 + 0xa8) == iVar16) {
    FUN_146c17f82(*(undefined8 *)(lVar14 + 0x208));
    uVar11 = *(undefined8 *)(*(longlong *)(lVar14 + 0x208) + 0x40);
    iVar17 = (int)uStack_90;
    lVar14 = (longlong)(int)uStack_90;
    if ((int)uStack_90 < iVar16) {
      uVar7 = iVar16 - (int)uStack_90;
      uStack_90 = CONCAT44(uStack_90._4_4_,iVar16);
      if ((uint)(uStack_90._4_4_ - iVar17) < uVar7) {
        FUN_1446f48e2(&local_98);
      }
      memset((void *)(lVar14 * 4 + (longlong)local_98),0,(longlong)(int)uVar7 << 2);
    }
    else {
      if (iVar16 < 0) {
LAB_143bb617a:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar18);
      }
      if (iVar16 < (int)uStack_90) {
        uStack_90 = CONCAT44(uStack_90._4_4_,iVar16);
        FUN_14479f406();
      }
    }
    if (0 < iVar16) {
      lVar14 = 0;
      do {
        pfVar2 = (float *)(*(longlong *)(*plVar6 + 0xa0) + lVar14 * 4);
        local_b8 = *pfVar2;
        fStack_b4 = pfVar2[1];
        fStack_b0 = pfVar2[2];
        fStack_ac = pfVar2[3];
        uVar9 = FUN_146c32f5e(uVar11,&local_b8);
        *(undefined4 *)((longlong)local_98 + lVar14) = uVar9;
        lVar14 = lVar14 + 4;
      } while (uVar18 * 4 - lVar14 != 0);
    }
    if (0 < (int)uVar3) {
      lVar14 = 8;
      uVar13 = 0;
      do {
        if (-1 < *(int *)(*plVar4 + uVar13 * 4)) {
          lVar15 = *(longlong *)(*plVar6 + 0xb0);
          fStack_b0 = *(float *)((longlong)local_98 + (longlong)*(int *)(lVar15 + lVar14) * 4);
          fStack_b4 = *(float *)((longlong)local_98 + (longlong)*(int *)(lVar15 + -4 + lVar14) * 4);
          local_b8 = *(float *)((longlong)local_98 + (longlong)*(int *)(lVar15 + -8 + lVar14) * 4);
          FUN_146c2a048(uVar11,*(undefined4 *)(*plVar4 + uVar13 * 4),&local_b8,1);
        }
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 0xc;
      } while (uVar10 != uVar13);
    }
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bb618d FUN_143bb618d body=597 status=ok
// SIG undefined FUN_143bb618d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143bb618d(void)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  longlong local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  ppuStack_70 = &PTR_FUN_14af1cc70;
  uStack_68 = 9;
  local_78 = 0x17;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af1d130,1,&PTR_FUN_14af1cd90);
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cb4dcb0);
  if (cVar1 == '\0') {
    _DAT_14cb4dcb0 = 0;
    uRam000000014cb4dcb8 = 0;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uStack_68 = 4;
  ppuStack_70 = &PTR_FUN_14af21700;
  local_78 = 9;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af218f0,1,&PTR_FUN_14af21780);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af243c0,1,&PTR_FUN_14af24340);
  local_58 = -0x7ffffffeb50db4a8;
  local_44 = 0x15;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_14649746a(&local_58);
  uStack_68 = 4;
  ppuStack_70 = &PTR_FUN_14af24e60;
  local_78 = 1;
  FUN_14282b410(L"/Script/GeometryScriptingCore",0,0,&PTR_FUN_14af24ee0);
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af28e70,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 5;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af2c980,1,&PTR_FUN_14af2c8b0);
  ppuStack_70 = &PTR_FUN_14af321c0;
  uStack_68 = 10;
  local_78 = 8;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af32440,1,&PTR_FUN_14af32300);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14af36f10;
  local_78 = 2;
  FUN_14282b410(L"/Script/GeometryScriptingCore",&PTR_FUN_14af36f80,1,&PTR_FUN_14af36f30);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb63e4 FUN_143bb63e4 body=55 status=ok
// SIG undefined FUN_143bb63e4(void)

void FUN_143bb63e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e5e8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e5e8 =
         FUN_14171c317(FUN_146499c80,uVar1,L"EGeometryScriptPruneBoneWeightsAssignmentType");
  }
  return;
}



// FUNCTION 143bb641b FUN_143bb641b body=55 status=ok
// SIG undefined FUN_143bb641b(void)

void FUN_143bb641b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e618 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e618 = FUN_14171c317(FUN_146499d46,uVar1,L"EGeometryScriptSmoothBoneWeightsType");
  }
  return;
}



// FUNCTION 143bb6452 FUN_143bb6452 body=55 status=ok
// SIG undefined FUN_143bb6452(void)

void FUN_143bb6452(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e648 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e648 = FUN_14171c317(FUN_146499e0c,uVar1,L"ETransferBoneWeightsMethod");
  }
  return;
}



// FUNCTION 143bb6489 FUN_143bb6489 body=55 status=ok
// SIG undefined FUN_143bb6489(void)

void FUN_143bb6489(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e660 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e660 = FUN_14171c317(FUN_146499e3b,uVar1,L"EOutputTargetMeshBones");
  }
  return;
}



// FUNCTION 143bb64c0 FUN_143bb64c0 body=55 status=ok
// SIG undefined FUN_143bb64c0(void)

void FUN_143bb64c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e6a8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e6a8 = FUN_14171c317(FUN_146499f98,uVar1,L"EBonesToCopyFromSource");
  }
  return;
}



// FUNCTION 143bb64f7 FUN_143bb64f7 body=55 status=ok
// SIG undefined FUN_143bb64f7(void)

void FUN_143bb64f7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e790 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e790 = FUN_14171c317(FUN_14649a451,uVar1,L"EGeometryScriptBooleanOperation");
  }
  return;
}



// FUNCTION 143bb652e FUN_143bb652e body=55 status=ok
// SIG undefined FUN_143bb652e(void)

void FUN_143bb652e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e890 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e890 = FUN_14171c317(FUN_14649a9fc,uVar1,L"EGeometryScriptMeshDifferenceReason");
  }
  return;
}



// FUNCTION 143bb6565 FUN_143bb6565 body=55 status=ok
// SIG undefined FUN_143bb6565(void)

void FUN_143bb6565(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e968 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e968 = FUN_14171c317(FUN_14649ae82,uVar1,L"EGeometryScriptFlareType");
  }
  return;
}



// FUNCTION 143bb659c FUN_143bb659c body=55 status=ok
// SIG undefined FUN_143bb659c(void)

void FUN_143bb659c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4e9b0 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4e9b0 = FUN_14171c317(FUN_14649afde,uVar1,L"EGeometryScriptMathWarpType");
  }
  return;
}



// FUNCTION 143bb65d3 FUN_143bb65d3 body=55 status=ok
// SIG undefined FUN_143bb65d3(void)

void FUN_143bb65d3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4eb50 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4eb50 = FUN_14171c317(FUN_14649b8bd,uVar1,L"EGeometryScriptMeshEditPolygroupMode");
  }
  return;
}



// FUNCTION 143bb660a FUN_143bb660a body=55 status=ok
// SIG undefined FUN_143bb660a(void)

void FUN_143bb660a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4eb98 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4eb98 = FUN_14171c317(FUN_14649ba1c,uVar1,L"EGeometryScriptPolyOperationArea");
  }
  return;
}



// FUNCTION 143bb6641 FUN_143bb6641 body=55 status=ok
// SIG undefined FUN_143bb6641(void)

void FUN_143bb6641(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4ebc8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4ebc8 = FUN_14171c317(FUN_14649bae4,uVar1,L"EGeometryScriptLinearExtrudeDirection");
  }
  return;
}



// FUNCTION 143bb6678 FUN_143bb6678 body=55 status=ok
// SIG undefined FUN_143bb6678(void)

void FUN_143bb6678(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4ebf8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4ebf8 = FUN_14171c317(FUN_14649bbaa,uVar1,L"EGeometryScriptOffsetFacesType");
  }
  return;
}



// FUNCTION 143bb66af FUN_143bb66af body=55 status=ok
// SIG undefined FUN_143bb66af(void)

void FUN_143bb66af(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4ec58 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4ec58 = FUN_14171c317(FUN_14649bd9c,uVar1,L"EGeometryScriptMeshBevelSelectionMode");
  }
  return;
}



// FUNCTION 143bb66e6 FUN_143bb66e6 body=602 status=ok
// SIG undefined FUN_143bb66e6(void)

longlong FUN_143bb66e6(longlong param_1,longlong *param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  code *local_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 == 0) goto LAB_143bb6713;
  local_a0 = &DAT_100000004;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  switch(param_3) {
  case 0:
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_2;
      lVar5 = 0;
      do {
        local_b0 = (code *)(ulonglong)*(uint *)(lVar2 + lVar5);
        FUN_1483b983a(&local_98,&local_b8,&local_b0,0);
        lVar5 = lVar5 + 4;
      } while ((longlong)(int)lVar3 * 4 != lVar5);
    }
    local_a0._0_4_ = 1;
    goto LAB_143bb68f7;
  case 1:
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_2;
      lVar5 = 0;
      do {
        local_b0 = (code *)(ulonglong)*(uint *)(lVar2 + lVar5);
        FUN_1483b983a(&local_98,&local_b8,&local_b0,0);
        lVar5 = lVar5 + 4;
      } while ((longlong)(int)lVar3 * 4 != lVar5);
    }
    local_a0._0_4_ = 4;
LAB_143bb68f7:
    uVar4 = 1;
LAB_143bb68fc:
    local_a0 = (undefined1 *)CONCAT44(uVar4,(undefined4)local_a0);
    break;
  case 2:
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_2;
      lVar5 = 0;
      do {
        local_b0 = (code *)((ulonglong)*(uint *)(lVar2 + lVar5) << 0x20 | 0xffffffff);
        FUN_1483b983a(&local_98,&local_b8,&local_b0,0);
        lVar5 = lVar5 + 4;
      } while ((longlong)(int)lVar3 * 4 != lVar5);
    }
    local_a0._0_4_ = 4;
    uVar4 = 2;
    goto LAB_143bb68fc;
  case 3:
    local_a0 = &DAT_100000002;
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x98);
      lVar2 = *param_2;
      lVar5 = 0;
      do {
        local_b8 = &local_a0;
        local_a8 = &local_b8;
        local_b0 = FUN_143bdf330;
        FUN_14838980a(uVar1,*(undefined4 *)(lVar2 + lVar5),&local_b0);
        lVar5 = lVar5 + 4;
      } while ((longlong)(int)lVar3 * 4 != lVar5);
    }
  }
  param_4 = (undefined8 *)*param_4;
  *param_4 = local_a0;
  FUN_1484d24e8(param_4 + 1,&local_98);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(&local_98);
LAB_143bb6713:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143bb6941 FUN_143bb6941 body=55 status=ok
// SIG undefined FUN_143bb6941(void)

void FUN_143bb6941(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4ed30 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4ed30 = FUN_14171c317(FUN_14649c23e,uVar1,L"EGeometryScriptTangentTypes");
  }
  return;
}



// FUNCTION 143bb6978 FUN_143bb6978 body=1682 status=ok
// SIG undefined FUN_143bb6978(void)

longlong FUN_143bb6978(longlong param_1,longlong *param_2,undefined1 *param_3,undefined1 *param_4,
                      char param_5)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  double dVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStack_d8 [32];
  float *local_b8;
  longlong local_b0;
  longlong local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 != 0) {
    FUN_14856dde4(param_2,0);
    param_2 = (longlong *)*param_2;
    *param_4 = 0;
    *param_3 = 0;
    lVar20 = *(longlong *)(param_1 + 0x98);
    *param_4 = *(int *)(lVar20 + 0x38) * 0x200 + *(int *)(lVar20 + 0x3c) != 0;
    if ((*(longlong **)(lVar20 + 0x208) != (longlong *)0x0) &&
       (iVar19 = (**(code **)(**(longlong **)(lVar20 + 0x208) + 0xb0))(), uVar18 = DAT_14c8464f0,
       fVar17 = DAT_14c8464e8._4_4_, fVar16 = (float)DAT_14c8464e8, fVar15 = DAT_14c8464e0._4_4_,
       fVar14 = (float)DAT_14c8464e0, uVar13 = DAT_14c8463c8, fVar12 = DAT_14c8463c0._4_4_,
       fVar11 = (float)DAT_14c8463c0, fVar10 = DAT_14c8463b8._4_4_, fVar9 = (float)DAT_14c8463b8,
       0 < iVar19)) {
      if (*(int *)(*(longlong *)(lVar20 + 0x208) + 0x38) < 1) {
        lVar23 = 0;
      }
      else {
        lVar23 = **(longlong **)(*(longlong *)(lVar20 + 0x208) + 0x30);
      }
      iVar19 = *(int *)(lVar20 + 0x20) * 0x200 + *(int *)(lVar20 + 0x24);
      if (param_5 == '\0') {
        local_78 = DAT_14c8463c8;
        local_88 = (float)DAT_14c8463b8;
        fStack_84 = DAT_14c8463b8._4_4_;
        fStack_80 = (float)DAT_14c8463c0;
        fStack_7c = DAT_14c8463c0._4_4_;
        if (iVar19 < 0) goto LAB_143bb7004;
        *(undefined4 *)(param_2 + 1) = 0;
        if (*(int *)((longlong)param_2 + 0xc) != iVar19) {
          FUN_1447a8aa0(param_2,iVar19);
        }
        for (; iVar19 != 0; iVar19 = iVar19 + -1) {
          iVar5 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
            FUN_1403e3958(param_2,iVar5);
          }
          lVar6 = *param_2;
          *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar5 * 0x18) = local_78;
          pfVar1 = (float *)(lVar6 + (longlong)iVar5 * 0x18);
          *pfVar1 = local_88;
          pfVar1[1] = fStack_84;
          pfVar1[2] = fStack_80;
          pfVar1[3] = fStack_7c;
        }
        uVar26 = *(int *)(lVar20 + 0x140) * 0x200 + *(int *)(lVar20 + 0x144);
        uVar30 = 0;
        if ((uVar26 != 0) &&
           (uVar30 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar20 + 0x148) - 1U))) {
          uVar29 = 1;
          uVar21 = 1;
          if (1 < (int)uVar26) {
            uVar29 = uVar26;
          }
          do {
            uVar30 = uVar29;
            if (uVar29 == uVar21) break;
            uVar24 = uVar21 >> 9;
            uVar27 = uVar21 & 0x1ff;
            uVar30 = uVar21;
            uVar21 = uVar21 + 1;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar20 + 0x148))[uVar24] +
                                               (ulonglong)uVar27 * 2) - 1U));
        }
LAB_143bb6e99:
        if (uVar30 != uVar26) {
          if (-1 < *(int *)(*(longlong *)
                             (*(longlong *)(lVar23 + 0x78) + (ulonglong)(uVar30 * 3 >> 9) * 8) +
                           (ulonglong)(uVar30 * 3 & 0x1ff) * 4)) {
            lVar6 = *(longlong *)(*(longlong *)(lVar20 + 0x130) + (ulonglong)(uVar30 >> 9) * 8);
            uVar22 = (ulonglong)(uVar30 & 0x1ff);
            lVar28 = (longlong)*(int *)(lVar6 + uVar22 * 0xc);
            local_b0 = (longlong)*(int *)(lVar6 + 4 + uVar22 * 0xc);
            local_a8 = (longlong)*(int *)(lVar6 + 8 + uVar22 * 0xc);
            local_b8 = &local_a0;
            FUN_146c3574a(lVar23,uVar30,&local_88,&local_94);
            lVar6 = *param_2;
            *(double *)(lVar6 + lVar28 * 0x18) = (double)local_88;
            *(double *)(lVar6 + 8 + lVar28 * 0x18) = (double)fStack_84;
            *(double *)(lVar6 + 0x10 + lVar28 * 0x18) = (double)fStack_80;
            lVar6 = *param_2;
            *(double *)(lVar6 + local_b0 * 0x18) = (double)local_94;
            *(double *)(lVar6 + 8 + local_b0 * 0x18) = (double)local_90;
            *(double *)(lVar6 + 0x10 + local_b0 * 0x18) = (double)local_8c;
            lVar6 = *param_2;
            *(double *)(lVar6 + local_a8 * 0x18) = (double)local_a0;
            *(double *)(lVar6 + 8 + local_a8 * 0x18) = (double)local_9c;
            *(double *)(lVar6 + 0x10 + local_a8 * 0x18) = (double)local_98;
          }
          uVar29 = uVar30 + 1;
          if ((int)(uVar30 + 1) < (int)uVar26) {
            uVar29 = uVar26;
          }
          uVar21 = uVar30;
          do {
            uVar30 = uVar29;
            if (uVar29 - 1 == uVar21) break;
            uVar30 = uVar21 + 1;
            uVar21 = uVar30;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar20 + 0x148) +
                                                 (ulonglong)(uVar30 >> 9) * 8) +
                                               (ulonglong)(uVar30 & 0x1ff) * 2) - 1U));
          goto LAB_143bb6e99;
        }
      }
      else {
        local_78 = DAT_14c8464f0;
        local_88 = (float)DAT_14c8464e0;
        fStack_84 = DAT_14c8464e0._4_4_;
        fStack_80 = (float)DAT_14c8464e8;
        fStack_7c = DAT_14c8464e8._4_4_;
        if (iVar19 < 0) {
LAB_143bb7004:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar19);
        }
        *(undefined4 *)(param_2 + 1) = 0;
        if (*(int *)((longlong)param_2 + 0xc) != iVar19) {
          FUN_1447a8aa0(param_2,iVar19);
        }
        for (; iVar19 != 0; iVar19 = iVar19 + -1) {
          iVar5 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
            FUN_1403e3958(param_2,iVar5);
          }
          lVar6 = *param_2;
          *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar5 * 0x18) = local_78;
          pfVar1 = (float *)(lVar6 + (longlong)iVar5 * 0x18);
          *pfVar1 = local_88;
          pfVar1[1] = fStack_84;
          pfVar1[2] = fStack_80;
          pfVar1[3] = fStack_7c;
        }
        uVar26 = *(int *)(lVar20 + 0x140) * 0x200 + *(int *)(lVar20 + 0x144);
        uVar30 = 0;
        if ((uVar26 != 0) &&
           (uVar30 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar20 + 0x148) - 1U))) {
          uVar22 = 1;
          uVar29 = 1;
          if (1 < (int)uVar26) {
            uVar29 = uVar26;
          }
          do {
            uVar21 = (uint)uVar22;
            uVar30 = uVar29;
            if (uVar29 == uVar21) break;
            uVar8 = uVar22 >> 9;
            uVar22 = (ulonglong)(uVar21 + 1);
            uVar30 = uVar21;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar20 + 0x148))[uVar8] +
                                               (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
        }
LAB_143bb6ba0:
        if (uVar30 != uVar26) {
          if (-1 < *(int *)(*(longlong *)
                             (*(longlong *)(lVar23 + 0x78) + (ulonglong)(uVar30 * 3 >> 9) * 8) +
                           (ulonglong)(uVar30 * 3 & 0x1ff) * 4)) {
            lVar6 = *(longlong *)(*(longlong *)(lVar20 + 0x130) + (ulonglong)(uVar30 >> 9) * 8);
            uVar22 = (ulonglong)(uVar30 & 0x1ff);
            lVar28 = (longlong)*(int *)(lVar6 + uVar22 * 0xc);
            local_b0 = (longlong)*(int *)(lVar6 + 4 + uVar22 * 0xc);
            local_a8 = (longlong)*(int *)(lVar6 + 8 + uVar22 * 0xc);
            local_b8 = &local_a0;
            FUN_146c3574a(lVar23,uVar30,&local_88,&local_94);
            lVar6 = *param_2;
            *(double *)(lVar6 + lVar28 * 0x18) =
                 (double)local_88 + *(double *)(lVar6 + lVar28 * 0x18);
            *(double *)(lVar6 + 8 + lVar28 * 0x18) =
                 (double)fStack_84 + *(double *)(lVar6 + 8 + lVar28 * 0x18);
            *(double *)(lVar6 + 0x10 + lVar28 * 0x18) =
                 (double)fStack_80 + *(double *)(lVar6 + 0x10 + lVar28 * 0x18);
            lVar6 = *param_2;
            *(double *)(lVar6 + local_b0 * 0x18) =
                 (double)local_94 + *(double *)(lVar6 + local_b0 * 0x18);
            *(double *)(lVar6 + 8 + local_b0 * 0x18) =
                 (double)local_90 + *(double *)(lVar6 + 8 + local_b0 * 0x18);
            *(double *)(lVar6 + 0x10 + local_b0 * 0x18) =
                 (double)local_8c + *(double *)(lVar6 + 0x10 + local_b0 * 0x18);
            lVar6 = *param_2;
            *(double *)(lVar6 + local_a8 * 0x18) =
                 (double)local_a0 + *(double *)(lVar6 + local_a8 * 0x18);
            *(double *)(lVar6 + 8 + local_a8 * 0x18) =
                 (double)local_9c + *(double *)(lVar6 + 8 + local_a8 * 0x18);
            *(double *)(lVar6 + 0x10 + local_a8 * 0x18) =
                 (double)local_98 + *(double *)(lVar6 + 0x10 + local_a8 * 0x18);
          }
          uVar29 = uVar30 + 1;
          if ((int)(uVar30 + 1) < (int)uVar26) {
            uVar29 = uVar26;
          }
          uVar21 = uVar30;
          do {
            uVar30 = uVar29;
            if (uVar29 - 1 == uVar21) break;
            uVar30 = uVar21 + 1;
            uVar21 = uVar30;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar20 + 0x148) +
                                                 (ulonglong)(uVar30 >> 9) * 8) +
                                               (ulonglong)(uVar30 & 0x1ff) * 2) - 1U));
          goto LAB_143bb6ba0;
        }
        if (0 < (int)param_2[1]) {
          lVar20 = 0;
          lVar23 = 0;
          do {
            lVar6 = *param_2;
            dVar2 = *(double *)(lVar6 + lVar20);
            dVar3 = *(double *)(lVar6 + 8 + lVar20);
            dVar4 = *(double *)(lVar6 + 0x10 + lVar20);
            dVar7 = dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3;
            if (0.0 < dVar7) {
              dVar7 = SQRT(dVar7);
              if (dVar7 <= 0.0) {
                puVar25 = (undefined8 *)(lVar6 + lVar20);
                *puVar25 = 0;
                puVar25[1] = 0;
                puVar25[2] = 0;
              }
              else {
                dVar7 = 1.0 / dVar7;
                *(double *)(lVar6 + lVar20) = dVar2 * dVar7;
                *(double *)(lVar6 + 8 + lVar20) = dVar3 * dVar7;
                *(double *)(lVar6 + 0x10 + lVar20) = dVar4 * dVar7;
              }
            }
            lVar23 = lVar23 + 1;
            lVar20 = lVar20 + 0x18;
          } while (lVar23 < (int)param_2[1]);
        }
      }
      *param_3 = 1;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143bb700c FUN_143bb700c body=2803 status=ok
// SIG undefined FUN_143bb700c(void)

longlong FUN_143bb700c(longlong param_1,longlong *param_2,longlong *param_3,undefined1 *param_4,
                      undefined1 *param_5,char param_6)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  uint uVar31;
  undefined1 auStack_f8 [32];
  float *local_d8;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1 != 0) {
    FUN_14856dde4(param_2,0);
    FUN_14856dde4(param_3,0);
    param_2 = (longlong *)*param_2;
    param_3 = (longlong *)*param_3;
    *param_5 = 0;
    *param_4 = 0;
    lVar21 = *(longlong *)(param_1 + 0x98);
    *param_5 = *(int *)(lVar21 + 0x38) * 0x200 + *(int *)(lVar21 + 0x3c) != 0;
    uVar14 = DAT_14c8464f0;
    fVar13 = DAT_14c8464e8._4_4_;
    fVar12 = (float)DAT_14c8464e8;
    fVar11 = DAT_14c8464e0._4_4_;
    fVar10 = (float)DAT_14c8464e0;
    uVar19 = DAT_14c8463c8;
    fVar18 = DAT_14c8463c0._4_4_;
    fVar17 = (float)DAT_14c8463c0;
    fVar16 = DAT_14c8463b8._4_4_;
    fVar15 = (float)DAT_14c8463b8;
    lVar25 = *(longlong *)(lVar21 + 0x208);
    if (((((lVar25 != 0) && (uVar5 = *(uint *)(lVar25 + 0x38), 0 < (int)uVar5)) && (uVar5 != 1)) &&
        ((plVar7 = *(longlong **)(lVar25 + 0x30), *plVar7 != 0 &&
         (lVar25 = plVar7[1], 2 < uVar5 && lVar25 != 0)))) && (lVar30 = plVar7[2], lVar30 != 0)) {
      iVar28 = *(int *)(lVar21 + 0x20) * 0x200 + *(int *)(lVar21 + 0x24);
      local_c8 = lVar30;
      if (param_6 == '\0') {
        local_78 = DAT_14c8463c8;
        local_88 = (float)DAT_14c8463b8;
        fStack_84 = DAT_14c8463b8._4_4_;
        fStack_80 = (float)DAT_14c8463c0;
        fStack_7c = DAT_14c8463c0._4_4_;
        if (iVar28 < 0) goto LAB_143bb7af9;
        *(undefined4 *)(param_2 + 1) = 0;
        fVar10 = (float)DAT_14c8463b8;
        fVar11 = DAT_14c8463b8._4_4_;
        fVar12 = (float)DAT_14c8463c0;
        fVar13 = DAT_14c8463c0._4_4_;
        uVar14 = DAT_14c8463c8;
        if (*(int *)((longlong)param_2 + 0xc) != iVar28) {
          FUN_1447a8aa0(param_2,iVar28);
          fVar10 = (float)DAT_14c8463b8;
          fVar11 = DAT_14c8463b8._4_4_;
          fVar12 = (float)DAT_14c8463c0;
          fVar13 = DAT_14c8463c0._4_4_;
          uVar14 = DAT_14c8463c8;
        }
        for (; DAT_14c8463b8._0_4_ = fVar10, DAT_14c8463b8._4_4_ = fVar11,
            DAT_14c8463c0._0_4_ = fVar12, DAT_14c8463c0._4_4_ = fVar13, DAT_14c8463c8 = uVar14,
            iVar28 != 0; iVar28 = iVar28 + -1) {
          iVar6 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
            FUN_1403e3958(param_2,iVar6);
          }
          lVar30 = *param_2;
          *(undefined8 *)(lVar30 + 0x10 + (longlong)iVar6 * 0x18) = local_78;
          pfVar1 = (float *)(lVar30 + (longlong)iVar6 * 0x18);
          *pfVar1 = local_88;
          pfVar1[1] = fStack_84;
          pfVar1[2] = fStack_80;
          pfVar1[3] = fStack_7c;
          fVar10 = (float)DAT_14c8463b8;
          fVar11 = DAT_14c8463b8._4_4_;
          fVar12 = (float)DAT_14c8463c0;
          fVar13 = DAT_14c8463c0._4_4_;
          uVar14 = DAT_14c8463c8;
        }
        iVar28 = *(int *)(lVar21 + 0x20) * 0x200 + *(int *)(lVar21 + 0x24);
        local_88 = fVar10;
        fStack_84 = fVar11;
        fStack_80 = fVar12;
        fStack_7c = fVar13;
        local_78 = uVar14;
        if (iVar28 < 0) goto LAB_143bb7af9;
        *(undefined4 *)(param_3 + 1) = 0;
        lVar30 = local_c8;
        if (*(int *)((longlong)param_3 + 0xc) != iVar28) {
          FUN_1447a8aa0(param_3,iVar28);
          lVar30 = local_c8;
        }
        for (; iVar28 != 0; iVar28 = iVar28 + -1) {
          iVar6 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
            FUN_1403e3958(param_3,iVar6);
            lVar30 = local_c8;
          }
          lVar8 = *param_3;
          *(undefined8 *)(lVar8 + 0x10 + (longlong)iVar6 * 0x18) = local_78;
          pfVar1 = (float *)(lVar8 + (longlong)iVar6 * 0x18);
          *pfVar1 = local_88;
          pfVar1[1] = fStack_84;
          pfVar1[2] = fStack_80;
          pfVar1[3] = fStack_7c;
        }
        uVar29 = *(int *)(lVar21 + 0x140) * 0x200 + *(int *)(lVar21 + 0x144);
        lVar20 = lVar25;
        uVar5 = 0;
        lVar8 = local_b8;
        if ((uVar29 != 0) &&
           (uVar5 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar21 + 0x148) - 1U))) {
          uVar31 = 1;
          uVar22 = 1;
          if (1 < (int)uVar29) {
            uVar31 = uVar29;
          }
          do {
            uVar23 = uVar22;
            uVar5 = uVar31;
            if (uVar31 == uVar23) break;
            uVar22 = uVar23 + 1;
            uVar5 = uVar23;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar21 + 0x148))[uVar23 >> 9] +
                                               (ulonglong)(uVar23 & 0x1ff) * 2) - 1U));
        }
joined_r0x000143bb75c5:
        uVar31 = uVar5;
        local_b8 = lVar20;
        if (uVar31 != uVar29) {
          uVar26 = (ulonglong)(uVar31 * 3 >> 9);
          uVar24 = (ulonglong)(uVar31 * 3 & 0x1ff);
          if ((-1 < *(int *)(*(longlong *)(*(longlong *)(lVar25 + 0x78) + uVar26 * 8) + uVar24 * 4))
             && (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar30 + 0x78) + uVar26 * 8) + uVar24 * 4
                              ))) {
            lVar25 = *(longlong *)(*(longlong *)(lVar21 + 0x130) + (ulonglong)(uVar31 >> 9) * 8);
            uVar24 = (ulonglong)(uVar31 & 0x1ff);
            iVar28 = *(int *)(lVar25 + uVar24 * 0xc);
            local_c0 = (longlong)*(int *)(lVar25 + 4 + uVar24 * 0xc);
            local_a8 = (longlong)*(int *)(lVar25 + 8 + uVar24 * 0xc);
            local_d8 = &local_a0;
            FUN_146c3574a(local_b8,uVar31,&local_88,&local_94);
            lVar25 = *param_2;
            local_b0 = (longlong)iVar28 * 0x18;
            *(double *)(lVar25 + local_b0) = (double)local_88;
            *(double *)(lVar25 + 8 + local_b0) = (double)fStack_84;
            *(double *)(lVar25 + 0x10 + local_b0) = (double)fStack_80;
            lVar25 = *param_2;
            local_c0 = local_c0 * 0x18;
            *(double *)(lVar25 + local_c0) = (double)local_94;
            *(double *)(lVar25 + 8 + local_c0) = (double)local_90;
            *(double *)(lVar25 + 0x10 + local_c0) = (double)local_8c;
            lVar25 = *param_2;
            lVar30 = local_a8 * 0x18;
            *(double *)(lVar25 + lVar30) = (double)local_a0;
            *(double *)(lVar25 + 8 + lVar30) = (double)local_9c;
            *(double *)(lVar25 + 0x10 + lVar30) = (double)local_98;
            local_d8 = &local_a0;
            FUN_146c3574a(local_c8,uVar31,&local_88,&local_94);
            lVar25 = *param_3;
            *(double *)(lVar25 + local_b0) = (double)local_88;
            *(double *)(lVar25 + 8 + local_b0) = (double)fStack_84;
            *(double *)(lVar25 + 0x10 + local_b0) = (double)fStack_80;
            lVar25 = *param_3;
            *(double *)(lVar25 + local_c0) = (double)local_94;
            *(double *)(lVar25 + 8 + local_c0) = (double)local_90;
            *(double *)(lVar25 + 0x10 + local_c0) = (double)local_8c;
            lVar25 = *param_3;
            *(double *)(lVar25 + lVar30) = (double)local_a0;
            *(double *)(lVar25 + 8 + lVar30) = (double)local_9c;
            *(double *)(lVar25 + 0x10 + lVar30) = (double)local_98;
            lVar30 = local_c8;
            lVar25 = local_b8;
          }
          uVar22 = uVar31 + 1;
          if ((int)(uVar31 + 1) < (int)uVar29) {
            uVar22 = uVar29;
          }
          do {
            lVar20 = local_b8;
            uVar5 = uVar22;
            lVar8 = local_b8;
            if (uVar22 - 1 == uVar31) break;
            uVar31 = uVar31 + 1;
            uVar5 = uVar31;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar21 + 0x148) +
                                                 (ulonglong)(uVar31 >> 9) * 8) +
                                               (ulonglong)(uVar31 & 0x1ff) * 2) - 1U));
          goto joined_r0x000143bb75c5;
        }
      }
      else {
        local_78 = DAT_14c8464f0;
        local_88 = (float)DAT_14c8464e0;
        fStack_84 = DAT_14c8464e0._4_4_;
        fStack_80 = (float)DAT_14c8464e8;
        fStack_7c = DAT_14c8464e8._4_4_;
        if (iVar28 < 0) {
LAB_143bb7af9:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar28);
        }
        *(undefined4 *)(param_2 + 1) = 0;
        fVar15 = (float)DAT_14c8464e0;
        fVar16 = DAT_14c8464e0._4_4_;
        fVar17 = (float)DAT_14c8464e8;
        fVar18 = DAT_14c8464e8._4_4_;
        uVar19 = DAT_14c8464f0;
        if (*(int *)((longlong)param_2 + 0xc) != iVar28) {
          FUN_1447a8aa0(param_2,iVar28);
          fVar15 = (float)DAT_14c8464e0;
          fVar16 = DAT_14c8464e0._4_4_;
          fVar17 = (float)DAT_14c8464e8;
          fVar18 = DAT_14c8464e8._4_4_;
          uVar19 = DAT_14c8464f0;
        }
        for (; DAT_14c8464e0._0_4_ = fVar15, DAT_14c8464e0._4_4_ = fVar16,
            DAT_14c8464e8._0_4_ = fVar17, DAT_14c8464e8._4_4_ = fVar18, DAT_14c8464f0 = uVar19,
            iVar28 != 0; iVar28 = iVar28 + -1) {
          iVar6 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
            FUN_1403e3958(param_2,iVar6);
          }
          lVar30 = *param_2;
          *(undefined8 *)(lVar30 + 0x10 + (longlong)iVar6 * 0x18) = local_78;
          pfVar1 = (float *)(lVar30 + (longlong)iVar6 * 0x18);
          *pfVar1 = local_88;
          pfVar1[1] = fStack_84;
          pfVar1[2] = fStack_80;
          pfVar1[3] = fStack_7c;
          fVar15 = (float)DAT_14c8464e0;
          fVar16 = DAT_14c8464e0._4_4_;
          fVar17 = (float)DAT_14c8464e8;
          fVar18 = DAT_14c8464e8._4_4_;
          uVar19 = DAT_14c8464f0;
        }
        iVar28 = *(int *)(lVar21 + 0x20) * 0x200 + *(int *)(lVar21 + 0x24);
        local_88 = fVar15;
        fStack_84 = fVar16;
        fStack_80 = fVar17;
        fStack_7c = fVar18;
        local_78 = uVar19;
        if (iVar28 < 0) goto LAB_143bb7af9;
        *(undefined4 *)(param_3 + 1) = 0;
        lVar30 = local_c8;
        if (*(int *)((longlong)param_3 + 0xc) != iVar28) {
          FUN_1447a8aa0(param_3,iVar28);
          lVar30 = local_c8;
        }
        for (; iVar28 != 0; iVar28 = iVar28 + -1) {
          iVar6 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
            FUN_1403e3958(param_3,iVar6);
            lVar30 = local_c8;
          }
          lVar8 = *param_3;
          *(undefined8 *)(lVar8 + 0x10 + (longlong)iVar6 * 0x18) = local_78;
          pfVar1 = (float *)(lVar8 + (longlong)iVar6 * 0x18);
          *pfVar1 = local_88;
          pfVar1[1] = fStack_84;
          pfVar1[2] = fStack_80;
          pfVar1[3] = fStack_7c;
        }
        uVar29 = *(int *)(lVar21 + 0x140) * 0x200 + *(int *)(lVar21 + 0x144);
        lVar20 = lVar25;
        uVar5 = 0;
        lVar8 = local_b8;
        if ((uVar29 != 0) &&
           (uVar5 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar21 + 0x148) - 1U))) {
          uVar24 = 1;
          uVar31 = 1;
          if (1 < (int)uVar29) {
            uVar31 = uVar29;
          }
          do {
            uVar22 = (uint)uVar24;
            uVar5 = uVar31;
            if (uVar31 == uVar22) break;
            uVar26 = uVar24 >> 9;
            uVar24 = (ulonglong)(uVar22 + 1);
            uVar5 = uVar22;
          } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar21 + 0x148))[uVar26] +
                                               (ulonglong)(uVar22 & 0x1ff) * 2) - 1U));
        }
joined_r0x000143bb7428:
        uVar31 = uVar5;
        local_b8 = lVar20;
        if (uVar31 != uVar29) {
          uVar26 = (ulonglong)(uVar31 * 3 >> 9);
          uVar24 = (ulonglong)(uVar31 * 3 & 0x1ff);
          if ((-1 < *(int *)(*(longlong *)(*(longlong *)(lVar25 + 0x78) + uVar26 * 8) + uVar24 * 4))
             && (-1 < *(int *)(*(longlong *)(*(longlong *)(lVar30 + 0x78) + uVar26 * 8) + uVar24 * 4
                              ))) {
            lVar25 = *(longlong *)(*(longlong *)(lVar21 + 0x130) + (ulonglong)(uVar31 >> 9) * 8);
            uVar24 = (ulonglong)(uVar31 & 0x1ff);
            iVar28 = *(int *)(lVar25 + uVar24 * 0xc);
            local_c0 = (longlong)*(int *)(lVar25 + 4 + uVar24 * 0xc);
            local_a8 = (longlong)*(int *)(lVar25 + 8 + uVar24 * 0xc);
            local_d8 = &local_a0;
            FUN_146c3574a(local_b8,uVar31,&local_88,&local_94);
            lVar25 = *param_2;
            local_b0 = (longlong)iVar28 * 0x18;
            *(double *)(lVar25 + local_b0) = (double)local_88 + *(double *)(lVar25 + local_b0);
            *(double *)(lVar25 + 8 + local_b0) =
                 (double)fStack_84 + *(double *)(lVar25 + 8 + local_b0);
            *(double *)(lVar25 + 0x10 + local_b0) =
                 (double)fStack_80 + *(double *)(lVar25 + 0x10 + local_b0);
            lVar25 = *param_2;
            local_c0 = local_c0 * 0x18;
            *(double *)(lVar25 + local_c0) = (double)local_94 + *(double *)(lVar25 + local_c0);
            *(double *)(lVar25 + 8 + local_c0) =
                 (double)local_90 + *(double *)(lVar25 + 8 + local_c0);
            *(double *)(lVar25 + 0x10 + local_c0) =
                 (double)local_8c + *(double *)(lVar25 + 0x10 + local_c0);
            lVar25 = *param_2;
            lVar30 = local_a8 * 0x18;
            *(double *)(lVar25 + lVar30) = (double)local_a0 + *(double *)(lVar25 + lVar30);
            *(double *)(lVar25 + 8 + lVar30) = (double)local_9c + *(double *)(lVar25 + 8 + lVar30);
            *(double *)(lVar25 + 0x10 + lVar30) =
                 (double)local_98 + *(double *)(lVar25 + 0x10 + lVar30);
            local_d8 = &local_a0;
            FUN_146c3574a(local_c8,uVar31,&local_88,&local_94);
            lVar25 = *param_3;
            *(double *)(lVar25 + local_b0) = (double)local_88 + *(double *)(lVar25 + local_b0);
            *(double *)(lVar25 + 8 + local_b0) =
                 (double)fStack_84 + *(double *)(lVar25 + 8 + local_b0);
            *(double *)(lVar25 + 0x10 + local_b0) =
                 (double)fStack_80 + *(double *)(lVar25 + 0x10 + local_b0);
            lVar25 = *param_3;
            *(double *)(lVar25 + local_c0) = (double)local_94 + *(double *)(lVar25 + local_c0);
            *(double *)(lVar25 + 8 + local_c0) =
                 (double)local_90 + *(double *)(lVar25 + 8 + local_c0);
            *(double *)(lVar25 + 0x10 + local_c0) =
                 (double)local_8c + *(double *)(lVar25 + 0x10 + local_c0);
            lVar25 = *param_3;
            *(double *)(lVar25 + lVar30) = (double)local_a0 + *(double *)(lVar25 + lVar30);
            *(double *)(lVar25 + 8 + lVar30) = (double)local_9c + *(double *)(lVar25 + 8 + lVar30);
            *(double *)(lVar25 + 0x10 + lVar30) =
                 (double)local_98 + *(double *)(lVar25 + 0x10 + lVar30);
            lVar30 = local_c8;
            lVar25 = local_b8;
          }
          uVar22 = uVar31 + 1;
          if ((int)(uVar31 + 1) < (int)uVar29) {
            uVar22 = uVar29;
          }
          do {
            lVar20 = local_b8;
            uVar5 = uVar22;
            lVar8 = local_b8;
            if (uVar22 - 1 == uVar31) break;
            uVar31 = uVar31 + 1;
            uVar5 = uVar31;
          } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                 (*(longlong *)(lVar21 + 0x148) +
                                                 (ulonglong)(uVar31 >> 9) * 8) +
                                               (ulonglong)(uVar31 & 0x1ff) * 2) - 1U));
          goto joined_r0x000143bb7428;
        }
        if (0 < (int)param_2[1]) {
          lVar21 = 0;
          lVar25 = 0;
          do {
            lVar30 = *param_2;
            dVar2 = *(double *)(lVar30 + lVar21);
            dVar3 = *(double *)(lVar30 + 8 + lVar21);
            dVar4 = *(double *)(lVar30 + 0x10 + lVar21);
            dVar9 = dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3;
            if (0.0 < dVar9) {
              dVar9 = SQRT(dVar9);
              if (dVar9 <= 0.0) {
                puVar27 = (undefined8 *)(lVar30 + lVar21);
                *puVar27 = 0;
                puVar27[1] = 0;
                puVar27[2] = 0;
              }
              else {
                dVar9 = 1.0 / dVar9;
                *(double *)(lVar30 + lVar21) = dVar2 * dVar9;
                *(double *)(lVar30 + 8 + lVar21) = dVar3 * dVar9;
                *(double *)(lVar30 + 0x10 + lVar21) = dVar4 * dVar9;
              }
            }
            lVar30 = *param_3;
            dVar2 = *(double *)(lVar30 + lVar21);
            dVar3 = *(double *)(lVar30 + 8 + lVar21);
            dVar4 = *(double *)(lVar30 + 0x10 + lVar21);
            dVar9 = dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3;
            if (0.0 < dVar9) {
              dVar9 = SQRT(dVar9);
              if (dVar9 <= 0.0) {
                puVar27 = (undefined8 *)(lVar30 + lVar21);
                *puVar27 = 0;
                puVar27[1] = 0;
                puVar27[2] = 0;
              }
              else {
                dVar9 = 1.0 / dVar9;
                *(double *)(lVar30 + lVar21) = dVar2 * dVar9;
                *(double *)(lVar30 + 8 + lVar21) = dVar3 * dVar9;
                *(double *)(lVar30 + 0x10 + lVar21) = dVar4 * dVar9;
              }
            }
            lVar25 = lVar25 + 1;
            lVar21 = lVar21 + 0x18;
          } while (lVar25 < (int)param_2[1]);
        }
      }
      local_b8 = lVar8;
      *param_4 = 1;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143bb7b02 FUN_143bb7b02 body=420 status=ok
// SIG undefined FUN_143bb7b02(void)

longlong FUN_143bb7b02(longlong param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4,
                      undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 *param_8,
                      undefined1 param_9,undefined1 param_10)

{
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined4 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8 [2];
  longlong *local_d0;
  longlong *local_c8;
  undefined1 local_c0;
  longlong local_b8 [4];
  undefined4 local_98;
  undefined1 local_92;
  undefined1 local_91;
  code *local_90;
  undefined1 **local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_91 = param_5;
  local_98 = param_2;
  local_92 = param_3;
  if (param_1 != 0) {
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    FUN_146be7820(local_b8 + 2,0x10);
    FUN_14481578e(local_b8,0x10);
    local_f8 = local_d8;
    local_c0 = param_9;
    *param_8 = 0;
    local_118 = &local_91;
    local_88 = &local_118;
    local_110 = &local_98;
    local_108 = param_8;
    local_100 = &local_92;
    local_e8 = param_6;
    local_e0 = param_7;
    local_7e = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_80 = 0;
    local_90 = FUN_143bd79c6;
    local_f0 = param_4;
    local_d8[0] = param_2;
    local_d0 = local_b8 + 2;
    local_c8 = local_b8;
    FUN_1484b8434(param_1,&local_90,&local_80,CONCAT71((int7)((ulonglong)local_88 >> 8),param_10));
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_b8[2] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb7ca7 FUN_143bb7ca7 body=55 status=ok
// SIG undefined FUN_143bb7ca7(void)

void FUN_143bb7ca7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4eeb8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4eeb8 = FUN_14171c317(FUN_14649ca43,uVar1,L"EGeometryScriptPrimitivePolygroupMode");
  }
  return;
}



// FUNCTION 143bb7cde FUN_143bb7cde body=55 status=ok
// SIG undefined FUN_143bb7cde(void)

void FUN_143bb7cde(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4eed0 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4eed0 = FUN_14171c317(FUN_14649ca72,uVar1,L"EGeometryScriptPrimitiveOriginMode");
  }
  return;
}



// FUNCTION 143bb7d15 FUN_143bb7d15 body=55 status=ok
// SIG undefined FUN_143bb7d15(void)

void FUN_143bb7d15(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4eee8 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4eee8 = FUN_14171c317(FUN_14649caa3,uVar1,L"EGeometryScriptPrimitiveUVMode");
  }
  return;
}



// FUNCTION 143bb7d4c FUN_143bb7d4c body=55 status=ok
// SIG undefined FUN_143bb7d4c(void)

void FUN_143bb7d4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4ef00 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4ef00 = FUN_14171c317(FUN_14649cad2,uVar1,L"EGeometryScriptPolygonFillMode");
  }
  return;
}



// FUNCTION 143bb7d83 FUN_143bb7d83 body=427 status=ok
// SIG undefined FUN_143bb7d83(void)

void FUN_143bb7d83(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 *param_6)

{
  undefined1 auStack_318 [32];
  undefined8 *local_2f8;
  undefined8 **local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 local_2c0;
  code *local_2b8;
  undefined8 **local_2b0;
  undefined2 local_2a8;
  undefined1 local_2a6;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  char local_268;
  undefined8 *local_258;
  undefined8 local_250;
  undefined8 *local_248;
  undefined4 *local_240;
  undefined8 *local_238;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_2c8 = param_2;
  local_2c0 = param_4;
  if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x170) == 0) {
    local_258 = &local_2c8;
    local_2b0 = &local_258;
    local_248 = &local_2c0;
    local_240 = param_5;
    local_238 = param_6;
    local_2a6 = 0;
    local_2a0 = 0;
    uStack_298 = 0;
    local_290 = 0;
    local_2a8 = 0;
    local_2b8 = FUN_143bc1de4;
    local_250 = param_3;
    FUN_1484b8434(param_1,&local_2b8,&local_2a8,0);
  }
  else {
    FUN_146c00d92(&local_258);
    local_268 = *(char *)(param_6 + 4);
    if (local_268 == '\x01') {
      local_288 = *param_6;
      uStack_280 = param_6[1];
      local_278 = param_6[2];
      uStack_270 = param_6[3];
    }
    local_2d8 = *(undefined8 *)(param_5 + 4);
    local_2e8 = *param_5;
    uStack_2e4 = param_5[1];
    uStack_2e0 = param_5[2];
    uStack_2dc = param_5[3];
    local_2f8 = &local_288;
    FUN_143bc190a(&local_258,param_3,param_4);
    local_2b0 = &local_2f0;
    local_2a6 = 0;
    local_2a0 = 0;
    uStack_298 = 0;
    local_290 = 0;
    local_2a8 = 0;
    local_2b8 = FUN_143bc1e8e;
    local_2f0 = &local_258;
    FUN_1484b8434(param_1,&local_2b8,&local_2a8,0);
    FUN_141082778(&local_258);
  }
  if (*(char *)(param_6 + 4) == '\x01') {
    *(undefined1 *)(param_6 + 4) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb7f2f FUN_143bb7f2f body=1667 status=ok
// SIG undefined FUN_143bb7f2f(void)

longlong FUN_143bb7f2f(longlong param_1,longlong param_2,undefined8 param_3,double *param_4,
                      float param_5,float param_6,float param_7,int param_8,int param_9,int param_10
                      ,char param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_378 [32];
  undefined8 *local_358;
  undefined1 *local_350;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined **local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined2 local_310;
  undefined4 local_308;
  undefined ***local_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  double local_2b8 [13];
  undefined8 local_250;
  undefined8 local_248;
  double local_240;
  undefined **local_238;
  undefined4 local_230 [38];
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  double local_160;
  double local_158;
  double local_150;
  int local_148;
  int local_144;
  int local_140;
  undefined1 local_13c;
  undefined1 local_13b;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined1 local_118 [32];
  undefined1 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (param_1 == 0) {
    local_238 = (undefined **)0x14af77cfc;
    local_230[0] = 0x1c;
    FUN_1446e940c(&local_138,&local_238);
    local_238 = (undefined **)0x14af62310;
    local_230[0] = 0x2d;
    FUN_1446e940c(&local_340,&local_238);
    local_238 = (undefined **)0x14af77cc0;
    local_230[0] = 0x1d;
    FUN_140208c1e(&local_328,&local_340,&local_138,&local_238);
    FUN_143ba90d7(param_12,2,&local_328);
    if (local_328 != (undefined **)0x0) {
      (**(code **)(*local_328 + 0x10))();
    }
  }
  else {
    dVar5 = (double)param_7;
    memset(local_230,0,0x91);
    local_238 = &PTR_FUN_14ae75120;
    local_13c = 1;
    uVar16 = 0;
    uVar17 = 0;
    dVar6 = (dVar5 + 0.0) * 0.5;
    dVar7 = ((double)(param_6 * -0.5) + (double)(param_6 * 0.5)) * 0.5;
    dVar8 = ((double)(param_5 * -0.5) + (double)(param_5 * 0.5)) * 0.5;
    local_150 = dVar5 * 0.5;
    local_158 = ((double)(param_6 * 0.5) - (double)(param_6 * -0.5)) * 0.5;
    local_160 = ((double)(param_5 * 0.5) - (double)(param_5 * -0.5)) * 0.5;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    local_168 = 0x3ff0000000000000;
    local_140 = param_10;
    if (param_10 < 1) {
      local_140 = 0;
    }
    local_144 = param_9;
    if (param_9 < 1) {
      local_144 = 0;
    }
    local_148 = 0;
    if (0 < param_8) {
      local_148 = param_8;
    }
    local_13b = (char)param_3 == '\x02';
    local_198 = dVar8;
    local_190 = dVar7;
    local_188 = dVar6;
    FUN_148396580(&local_238);
    if (param_11 == '\0') {
      uVar18 = 0;
      uVar19 = 0;
      dVar4 = (double)(param_7 * -0.5);
    }
    else {
      uVar16 = (undefined4)DAT_14c8464e0;
      uVar17 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
      uVar18 = (undefined4)DAT_14c8464e8;
      uVar19 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
      dVar4 = DAT_14c8464f0;
    }
    local_350 = local_118;
    local_f8 = 0;
    local_358 = &local_250;
    local_250 = CONCAT44(uVar17,uVar16);
    local_248 = CONCAT44(uVar19,uVar18);
    pdVar13 = param_4;
    pdVar14 = local_2b8;
    local_240 = dVar4;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *pdVar14 = *pdVar13;
      pdVar13 = pdVar13 + 1;
      pdVar14 = pdVar14 + 1;
    }
    FUN_143bb7d83(param_1,&local_238,local_2b8,param_3);
    if (param_2 != 0) {
      fStack_2c0 = (float)(dVar5 * param_4[10]);
      fStack_2c4 = (float)((double)param_6 * param_4[9]);
      local_2c8 = (float)((double)param_5 * param_4[8]);
      local_300 = &local_328;
      local_320 = 0;
      uStack_31c = 0;
      uStack_318 = 0;
      uStack_314 = 1;
      local_310 = 0x3ff;
      local_308 = 6;
      local_328 = &PTR_FUN_14a1e3c70;
      uStack_2e0 = (double)DAT_14c8464f8;
      uStack_2d8 = DAT_14c846500;
      uStack_2d0 = (undefined4)DAT_14c846508;
      uStack_2cc = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
      dVar9 = (dVar8 + (double)CONCAT44(uVar17,uVar16)) * param_4[8];
      dVar10 = (dVar7 + (double)CONCAT44(uVar19,uVar18)) * param_4[9];
      dVar15 = (dVar6 + dVar4) * param_4[10];
      local_138 = *param_4;
      dStack_130 = param_4[1];
      local_128 = param_4[2];
      dStack_120 = param_4[3];
      dVar5 = param_4[3];
      dVar6 = dVar10 * local_138 - dVar9 * dStack_130;
      dVar7 = dVar15 * dStack_130 - dVar10 * local_128;
      dVar8 = dVar9 * local_128 - local_138 * dVar15;
      dVar7 = dVar7 + dVar7;
      dVar8 = dVar8 + dVar8;
      dVar6 = dVar6 + dVar6;
      dVar4 = (local_128 * dVar7 - local_138 * dVar6) + param_4[3] * dVar8 + dVar10 + param_4[5];
      local_2e8 = dVar6 * dVar5 + dVar15 + (dVar8 * local_138 - dVar7 * dStack_130) + param_4[6];
      local_2f8._8_4_ = SUB84(dVar4,0);
      local_2f8._0_8_ =
           (dVar6 * dStack_130 - dVar8 * local_128) + dVar5 * dVar7 + dVar9 + param_4[4];
      local_2f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      FUN_1448052ee(&local_138,&local_340);
      uStack_2e0 = (double)CONCAT44(uStack_33c,local_340);
      uStack_2d8 = CONCAT44(uStack_334,uStack_338);
      uStack_2d0 = (undefined4)local_330;
      uStack_2cc = (undefined4)((ulonglong)local_330 >> 0x20);
      iVar3 = *(int *)(param_2 + 0x18);
      *(uint *)(param_2 + 0x18) = iVar3 + 1U;
      if (*(uint *)(param_2 + 0x1c) < iVar3 + 1U) {
        FUN_140c9d5a2((longlong *)(param_2 + 0x10),iVar3);
      }
      lVar11 = *(longlong *)(param_2 + 0x10);
      lVar12 = (longlong)iVar3 * 0x70;
      *(undefined ***)(lVar11 + lVar12) = &PTR_FUN_14a1dee50;
      *(undefined4 *)(lVar11 + 8 + lVar12) = local_320;
      *(ulonglong *)(lVar11 + 0xc + lVar12) = CONCAT44(uStack_318,uStack_31c);
      *(undefined4 *)(lVar11 + 0x14 + lVar12) = uStack_314;
      *(byte *)(lVar11 + 0x18 + lVar12) =
           *(byte *)(lVar11 + 0x18 + lVar12) & 0xfe | (byte)local_310 & 1;
      *(undefined1 *)(lVar11 + 0x19 + lVar12) = local_310._1_1_;
      *(undefined4 *)(lVar11 + 0x20 + lVar12) = 6;
      *(longlong *)(lVar11 + 0x28 + lVar12) = lVar11 + lVar12;
      *(undefined ***)(lVar11 + lVar12) = &PTR_FUN_14a1e3c70;
      puVar1 = (undefined4 *)(lVar11 + 0x30 + lVar12);
      *puVar1 = local_2f8._0_4_;
      puVar1[1] = local_2f8._4_4_;
      puVar1[2] = local_2f8._8_4_;
      puVar1[3] = local_2f8._12_4_;
      pdVar13 = (double *)(lVar11 + 0x40 + lVar12);
      *pdVar13 = local_2e8;
      pdVar13[1] = uStack_2e0;
      puVar2 = (undefined8 *)(lVar11 + 0x50 + lVar12);
      *puVar2 = uStack_2d8;
      puVar2[1] = CONCAT44(uStack_2cc,uStack_2d0);
      puVar2 = (undefined8 *)(lVar11 + 0x5c + lVar12);
      *puVar2 = CONCAT44(local_2c8,uStack_2cc);
      puVar2[1] = CONCAT44(fStack_2c0,fStack_2c4);
    }
    FUN_146bd8050(&local_238);
  }
  if ((local_f0 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb85b3 FUN_143bb85b3 body=1598 status=ok
// SIG undefined FUN_143bb85b3(void)

longlong FUN_143bb85b3(longlong param_1,longlong param_2,undefined8 param_3,double *param_4,
                      double *param_5,int param_6,int param_7,int param_8,undefined8 param_9)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double *pdVar6;
  double *pdVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_348 [32];
  undefined4 *local_328;
  undefined1 *local_320;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined **local_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined2 local_2e0;
  undefined4 local_2d8;
  undefined ***local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  double local_288 [12];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined **local_208;
  undefined4 local_200 [38];
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  double local_130;
  double local_128;
  double local_120;
  int local_118;
  int local_114;
  int local_110;
  undefined1 local_10c;
  undefined1 local_10b;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [32];
  undefined1 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if (param_1 == 0) {
    local_208 = (undefined **)0x14af77d82;
    local_200[0] = 0x24;
    FUN_1446e940c(&local_108,&local_208);
    local_208 = (undefined **)0x14af62310;
    local_200[0] = 0x2d;
    FUN_1446e940c(&local_310,&local_208);
    local_208 = (undefined **)0x14af77d36;
    local_200[0] = 0x25;
    FUN_140208c1e(&local_2f8,&local_310,&local_108,&local_208);
    FUN_143ba90d7(param_9,2,&local_2f8);
    if (local_2f8 != (undefined **)0x0) {
      (**(code **)(*local_2f8 + 0x10))();
    }
  }
  else {
    memset(local_200,0,0x91);
    local_208 = &PTR_FUN_14ae75120;
    local_10c = 1;
    if (*(char *)(param_5 + 6) == '\0') {
      uVar8 = 0xffffffff;
      uVar9 = 0xffefffff;
      dVar10 = 1.79769313486232e+308;
      dVar11 = 1.79769313486232e+308;
      dVar16 = 1.79769313486232e+308;
      dVar13 = -1.79769313486232e+308;
      dVar15 = -1.79769313486232e+308;
    }
    else {
      dVar10 = *param_5;
      dVar11 = param_5[1];
      dVar16 = param_5[2];
      uVar8 = SUB84(param_5[3],0);
      uVar9 = (undefined4)((ulonglong)param_5[3] >> 0x20);
      dVar13 = param_5[4];
      dVar15 = param_5[5];
    }
    local_158 = (dVar16 + dVar15) * 0.5;
    local_160 = (dVar11 + dVar13) * 0.5;
    local_168 = (dVar10 + (double)CONCAT44(uVar9,uVar8)) * 0.5;
    local_120 = (dVar15 - dVar16) * 0.5;
    local_128 = (dVar13 - dVar11) * 0.5;
    local_130 = ((double)CONCAT44(uVar9,uVar8) - dVar10) * 0.5;
    local_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    local_138 = 0x3ff0000000000000;
    local_110 = param_8;
    if (param_8 < 1) {
      local_110 = 0;
    }
    local_114 = param_7;
    if (param_7 < 1) {
      local_114 = 0;
    }
    local_118 = 0;
    if (0 < param_6) {
      local_118 = param_6;
    }
    local_10b = (char)param_3 == '\x02';
    FUN_148396580(&local_208);
    local_320 = local_e8;
    local_c8 = 0;
    local_328 = &local_228;
    local_228 = (undefined4)DAT_14c8464e0;
    uStack_224 = DAT_14c8464e0._4_4_;
    uStack_220 = (undefined4)DAT_14c8464e8;
    uStack_21c = DAT_14c8464e8._4_4_;
    local_218 = DAT_14c8464f0;
    pdVar6 = param_4;
    pdVar7 = local_288;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *pdVar7 = *pdVar6;
      pdVar6 = pdVar6 + 1;
      pdVar7 = pdVar7 + 1;
    }
    FUN_143bb7d83(param_1,&local_208,local_288,param_3);
    if (param_2 != 0) {
      fStack_290 = (float)((param_5[5] - param_5[2]) * param_4[10]);
      fStack_294 = (float)((param_5[4] - param_5[1]) * param_4[9]);
      local_298 = (float)((param_5[3] - *param_5) * param_4[8]);
      local_2d0 = &local_2f8;
      local_2f0 = 0;
      uStack_2ec = 0;
      uStack_2e8 = 0;
      uStack_2e4 = 1;
      local_2e0 = 0x3ff;
      local_2d8 = 6;
      local_2f8 = &PTR_FUN_14a1e3c70;
      uStack_2b0 = (double)DAT_14c8464f8;
      uStack_2a8 = DAT_14c846500;
      uStack_2a0 = (undefined4)DAT_14c846508;
      uStack_29c = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
      dVar11 = (param_5[3] + *param_5) * 0.5 * param_4[8];
      dVar16 = (param_5[4] + param_5[1]) * 0.5 * param_4[9];
      dVar12 = (param_5[5] + param_5[2]) * 0.5 * param_4[10];
      local_108 = *param_4;
      dStack_100 = param_4[1];
      local_f8 = param_4[2];
      dStack_f0 = param_4[3];
      dVar10 = param_4[3];
      dVar13 = dVar16 * local_108 - dVar11 * dStack_100;
      dVar14 = dVar12 * dStack_100 - dVar16 * local_f8;
      dVar15 = dVar11 * local_f8 - local_108 * dVar12;
      dVar14 = dVar14 + dVar14;
      dVar15 = dVar15 + dVar15;
      dVar13 = dVar13 + dVar13;
      local_2c8 = (dVar13 * dStack_100 - dVar15 * local_f8) + dVar10 * dVar14 + dVar11 + param_4[4];
      uStack_2c0 = (local_f8 * dVar14 - local_108 * dVar13) + param_4[3] * dVar15 + dVar16 +
                   param_4[5];
      local_2b8 = dVar13 * dVar10 + dVar12 + (dVar15 * local_108 - dVar14 * dStack_100) + param_4[6]
      ;
      FUN_1448052ee(&local_108,&local_310);
      uStack_2b0 = (double)CONCAT44(uStack_30c,local_310);
      uStack_2a8 = CONCAT44(uStack_304,uStack_308);
      uStack_2a0 = (undefined4)local_300;
      uStack_29c = (undefined4)((ulonglong)local_300 >> 0x20);
      iVar3 = *(int *)(param_2 + 0x18);
      *(uint *)(param_2 + 0x18) = iVar3 + 1U;
      if (*(uint *)(param_2 + 0x1c) < iVar3 + 1U) {
        FUN_140c9d5a2((longlong *)(param_2 + 0x10),iVar3);
      }
      lVar4 = *(longlong *)(param_2 + 0x10);
      lVar5 = (longlong)iVar3 * 0x70;
      *(undefined ***)(lVar4 + lVar5) = &PTR_FUN_14a1dee50;
      *(undefined4 *)(lVar4 + 8 + lVar5) = local_2f0;
      *(ulonglong *)(lVar4 + 0xc + lVar5) = CONCAT44(uStack_2e8,uStack_2ec);
      *(undefined4 *)(lVar4 + 0x14 + lVar5) = uStack_2e4;
      *(byte *)(lVar4 + 0x18 + lVar5) = *(byte *)(lVar4 + 0x18 + lVar5) & 0xfe | (byte)local_2e0 & 1
      ;
      *(undefined1 *)(lVar4 + 0x19 + lVar5) = local_2e0._1_1_;
      *(undefined4 *)(lVar4 + 0x20 + lVar5) = 6;
      *(longlong *)(lVar4 + 0x28 + lVar5) = lVar4 + lVar5;
      *(undefined ***)(lVar4 + lVar5) = &PTR_FUN_14a1e3c70;
      puVar1 = (undefined4 *)(lVar4 + 0x30 + lVar5);
      *puVar1 = (undefined4)local_2c8;
      puVar1[1] = local_2c8._4_4_;
      puVar1[2] = (undefined4)uStack_2c0;
      puVar1[3] = uStack_2c0._4_4_;
      pdVar6 = (double *)(lVar4 + 0x40 + lVar5);
      *pdVar6 = local_2b8;
      pdVar6[1] = uStack_2b0;
      puVar2 = (undefined8 *)(lVar4 + 0x50 + lVar5);
      *puVar2 = uStack_2a8;
      puVar2[1] = CONCAT44(uStack_29c,uStack_2a0);
      puVar2 = (undefined8 *)(lVar4 + 0x5c + lVar5);
      *puVar2 = CONCAT44(local_298,uStack_29c);
      puVar2[1] = CONCAT44(fStack_290,fStack_294);
    }
    FUN_146bd8050(&local_208);
  }
  if ((local_c0 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb8bf2 FUN_143bb8bf2 body=268 status=ok
// SIG undefined FUN_143bb8bf2(void)

void FUN_143bb8bf2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 *local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = &local_50;
  local_58 = *(undefined8 *)(param_5 + 4);
  local_68 = *param_5;
  uStack_64 = param_5[1];
  uStack_60 = param_5[2];
  uStack_5c = param_5[3];
  local_78 = param_3;
  local_50 = param_4;
  if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x170) == 0) {
    local_80 = &local_78;
    local_48 = FUN_143bc2440;
  }
  else {
    FUN_143bc20ce(&local_78,param_2);
    local_48 = FUN_143bc247a;
  }
  local_20 = 0;
  uStack_28 = 0;
  local_30 = 0;
  local_36 = 0;
  local_38 = 0;
  local_40 = &local_88;
  local_88 = param_2;
  FUN_1484b8434(param_1,&local_48,&local_38,0);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143bb8d00 FUN_143bb8d00 body=453 status=ok
// SIG undefined FUN_143bb8d00(void)

void FUN_143bb8d00(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((int)param_2 < 0) || ((int)((longlong *)param_1[1])[1] <= (int)param_2)) {
    local_50 = L"PrimitiveFunctions_AppendVoronoiDiagram2D_BadID";
    local_48 = 0x2f;
    FUN_1446e940c(local_64,&local_50);
    local_50 = L"UGeometryScriptLibrary_MeshPrimitiveFunctions";
    local_48 = 0x2d;
    FUN_1446e940c(local_68,&local_50);
    local_50 = L"AppendVoronoiDiagram2D: Requested invalid cell ID";
    local_48 = 0x31;
    FUN_140208c1e(local_60,local_68,local_64,&local_50);
    FUN_143ba9449(*(undefined8 *)param_1[2],2,local_60);
    if (local_60[0] != (longlong *)0x0) {
      (**(code **)(*local_60[0] + 0x10))();
    }
  }
  else {
    iVar1 = *(int *)(*param_1 + 0xa8);
    lVar4 = (ulonglong)param_2 * 0x10;
    FUN_14702e4fe(*param_1 + 0xa0,*(longlong *)param_1[1] + lVar4);
    if (2 < *(int *)(*(longlong *)param_1[1] + 8 + lVar4)) {
      iVar5 = 2;
      do {
        lVar3 = *param_1;
        iVar2 = *(int *)(lVar3 + 0xb8);
        lVar6 = (longlong)iVar2;
        *(uint *)(lVar3 + 0xb8) = iVar2 + 1U;
        if (*(uint *)(lVar3 + 0xbc) < iVar2 + 1U) {
          FUN_146bd78c8((longlong *)(lVar3 + 0xb0),iVar2);
        }
        lVar3 = *(longlong *)(lVar3 + 0xb0);
        *(int *)(lVar3 + lVar6 * 0xc) = iVar1;
        *(int *)(lVar3 + 4 + lVar6 * 0xc) = iVar1 + iVar5;
        *(int *)(lVar3 + 8 + lVar6 * 0xc) = iVar1 + iVar5 + -1;
        lVar3 = *param_1;
        iVar2 = *(int *)(lVar3 + 200);
        *(uint *)(lVar3 + 200) = iVar2 + 1U;
        if (*(uint *)(lVar3 + 0xcc) < iVar2 + 1U) {
          FUN_1446f48e2((longlong *)(lVar3 + 0xc0),iVar2);
        }
        *(uint *)(*(longlong *)(lVar3 + 0xc0) + (longlong)iVar2 * 4) = param_2;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(*(longlong *)param_1[1] + 8 + lVar4));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143bb8ec6 FUN_143bb8ec6 body=55 status=ok
// SIG undefined FUN_143bb8ec6(void)

void FUN_143bb8ec6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4f268 == 0) {
    uVar1 = FUN_140bf5a7a();
    DAT_14cb4f268 = FUN_14171c317(FUN_14649dde9,uVar1,L"EGeometryScriptUniformRemeshTargetType");
  }
  return;
}


