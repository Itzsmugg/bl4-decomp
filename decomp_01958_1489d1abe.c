// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1489d1abe FUN_1489d1abe body=105 status=ok
// SIG undefined FUN_1489d1abe(void)

double * FUN_1489d1abe(undefined8 param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                      longlong param_5)

{
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14588d080(*(undefined8 *)(param_5 + 0x10),&local_24,&local_28);
  *param_2 = (double)local_24;
  param_2[1] = (double)local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d1b28 FUN_1489d1b28 body=182 status=ok
// SIG undefined FUN_1489d1b28(void)

undefined8
FUN_1489d1b28(longlong *param_1,undefined8 param_2,longlong param_3,float *param_4,int *param_5,
             undefined8 param_6)

{
  float fVar1;
  longlong *plVar2;
  uint uVar3;
  
  plVar2 = *(longlong **)(*(longlong *)(param_3 + 0x220) + 8);
  fVar1 = *param_4;
  uVar3 = (**(code **)(*plVar2 + 0x68))(plVar2);
  param_5[2] = (int)((float)uVar3 * fVar1);
  fVar1 = param_4[1];
  uVar3 = (**(code **)(*plVar2 + 0x70))(plVar2);
  param_5[3] = (int)((float)uVar3 * fVar1);
  if (*param_5 == 1) {
    (**(code **)(*param_1 + 200))(param_1,param_3,param_6);
  }
  FUN_143e8853d(param_2,plVar2,param_5);
  return param_2;
}



// FUNCTION 1489d1bde FUN_1489d1bde body=90 status=ok
// SIG undefined FUN_1489d1bde(void)

undefined8
FUN_1489d1bde(longlong *param_1,undefined8 param_2,double *param_3,longlong param_4,int *param_5,
             undefined8 param_6)

{
  param_5[2] = (int)*param_3;
  param_5[3] = (int)param_3[1];
  if (*param_5 == 1) {
    (**(code **)(*param_1 + 200))(param_1,param_4,param_6);
  }
  FUN_143e8853d(param_2,*(undefined8 *)(*(longlong *)(param_4 + 0x220) + 8),param_5);
  return param_2;
}



// FUNCTION 1489d1c38 FUN_1489d1c38 body=438 status=ok
// SIG undefined FUN_1489d1c38(void)

undefined8
FUN_1489d1c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined ***pppuVar1;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  code **local_130;
  code **local_128;
  code **local_120;
  code *local_118;
  code **local_110;
  code *local_108;
  code **local_100;
  code *local_f8;
  undefined8 *local_f0;
  undefined1 local_e4 [4];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98 [4];
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_110 = local_78;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14b4538e0;
  local_48 = param_6;
  local_40 = param_7;
  local_78[0] = FUN_143e8f640;
  local_100 = local_b8;
  local_a8 = (undefined ***)0x0;
  local_98[0] = &PTR_LAB_14b453900;
  local_b8[0] = FUN_143e8f6bc;
  local_f0 = &local_d0;
  local_c8 = param_6;
  local_c0 = param_7;
  local_138 = local_e4;
  local_e4[0] = 0;
  local_e0 = 1;
  uStack_d8 = 0;
  local_120 = &local_f8;
  local_f8 = FUN_143e8f742;
  local_128 = &local_108;
  local_108 = FUN_1489d95e6;
  local_130 = &local_118;
  local_118 = FUN_1489d95e6;
  local_d0 = param_1;
  local_50 = param_1;
  FUN_143e885ce(param_2,param_3,param_4,param_5);
  if (local_b8[0] != (code *)0x0) {
    pppuVar1 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar1 = local_98;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_78[0] != (code *)0x0) {
    pppuVar1 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar1 = &local_58;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (*(char *)(param_5 + 0x2a0) == '\x01') {
    if (*(char *)(param_5 + 0x260) == '\x01') {
      *(undefined1 *)(param_5 + 0x260) = 0;
    }
    if (*(char *)(param_5 + 0x1d0) == '\x01') {
      *(undefined1 *)(param_5 + 0x1d0) = 0;
    }
    if (*(char *)(param_5 + 0x148) == '\x01') {
      *(undefined1 *)(param_5 + 0x148) = 0;
    }
    *(undefined1 *)(param_5 + 0x2a0) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d1df0 FUN_1489d1df0 body=197 status=ok
// SIG undefined FUN_1489d1df0(void)

undefined8
FUN_1489d1df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 auStack_88 [32];
  code **local_68;
  code *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = local_58;
  local_48 = 0;
  local_38 = &PTR_LAB_14b453920;
  local_28 = param_6;
  uStack_20 = param_7;
  local_58[0] = FUN_143e8f76e;
  local_30 = param_1;
  FUN_1489d1382(param_2,param_3,param_4);
  if (*(char *)(param_5 + 0x2a0) == '\x01') {
    if (*(char *)(param_5 + 0x260) == '\x01') {
      *(undefined1 *)(param_5 + 0x260) = 0;
    }
    if (*(char *)(param_5 + 0x1d0) == '\x01') {
      *(undefined1 *)(param_5 + 0x1d0) = 0;
    }
    if (*(char *)(param_5 + 0x148) == '\x01') {
      *(undefined1 *)(param_5 + 0x148) = 0;
    }
    *(undefined1 *)(param_5 + 0x2a0) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d1eb6 FUN_1489d1eb6 body=285 status=ok
// SIG undefined FUN_1489d1eb6(void)

undefined8 FUN_1489d1eb6(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  undefined4 local_1b0;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined1 local_198 [352];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  iVar3 = *(int *)(param_4 + 0xc);
  lVar5 = 0;
  if (-1 < (longlong)iVar3) {
    plVar7 = (longlong *)0x0;
    if ((int)param_3[99] <= iVar3) goto LAB_1489d1f1a;
    lVar6 = (longlong)iVar3 * 0x10;
    lVar5 = *(longlong *)(param_3[0x62] + lVar6);
    plVar7 = *(longlong **)(param_3[0x62] + 8 + lVar6);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      goto LAB_1489d1f1a;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_1489d1f1a:
  uVar4 = *(undefined4 *)(lVar5 + 0x18);
  FUN_1401b43e8(param_3,&local_1a8);
  local_1b8 = 0;
  local_1b0 = uVar4;
  (**(code **)(*param_3 + 0x108))(param_3,local_198,*(undefined8 *)(param_4 + 0x20),&local_1a8);
  FUN_1401b439d(local_1a8,local_1a0);
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1411d3bc2(param_3,param_2,local_198,param_4);
  FUN_1447fa21a(local_198);
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
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d1fd4 FUN_1489d1fd4 body=31 status=ok
// SIG undefined FUN_1489d1fd4(void)

undefined8
FUN_1489d1fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_1407c9ae3(param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1489d1ff4 FUN_1489d1ff4 body=28 status=ok
// SIG undefined FUN_1489d1ff4(void)

undefined8 FUN_1489d1ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1489d1160(param_2,param_3);
  return param_2;
}



// FUNCTION 1489d2010 FUN_1489d2010 body=154 status=ok
// SIG undefined FUN_1489d2010(void)

undefined8 FUN_1489d2010(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((DAT_14cb913f0 != 0) && (lVar2 = FUN_1447210f0(), lVar2 != 0)) {
    *param_2 = lVar2;
    lVar2 = FUN_1449baec6(lVar2);
    if (lVar2 != 0) {
      param_2[1] = lVar2;
      lVar2 = FUN_147d80080(DAT_14cb0d2b0,*param_2);
      if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x430) != 0)) &&
         (param_2[2] = lVar2, *(longlong *)(lVar2 + 0x430) != 0)) {
        uVar3 = FUN_1449db7f2();
        bVar1 = FUN_144a7ca96((longlong *)(lVar2 + 0x430),uVar3);
        lVar2 = *(longlong *)(lVar2 + 0x430);
        if ((lVar2 != 0 & bVar1) == 1) {
          param_2[3] = lVar2;
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1489d20ae FUN_1489d20ae body=67 status=ok
// SIG undefined FUN_1489d20ae(void)

ulonglong FUN_1489d20ae(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = FUN_14588d080(*(undefined8 *)(param_2 + 0x10),local_c,local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d20f2 FUN_1489d20f2 body=1026 status=ok
// SIG undefined FUN_1489d20f2(void)

ulonglong FUN_1489d20f2(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *unaff_RBP;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_a98 [32];
  undefined8 *local_a78;
  undefined1 *local_a70;
  undefined8 local_a68;
  undefined4 local_a58;
  undefined4 uStack_a54;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  undefined4 local_a48;
  undefined4 uStack_a44;
  undefined4 uStack_a40;
  undefined4 uStack_a3c;
  undefined1 local_a34 [44];
  undefined4 local_a08;
  undefined4 uStack_a04;
  undefined4 uStack_a00;
  undefined4 uStack_9fc;
  undefined8 local_9f8 [2];
  undefined8 local_9e8;
  undefined1 local_9d8 [288];
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  char local_890;
  undefined8 auStack_888 [16];
  char local_808;
  undefined8 auStack_7f8 [16];
  char local_778;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  char local_738;
  undefined1 local_720 [184];
  undefined1 local_668 [288];
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  char local_520;
  undefined8 auStack_518 [16];
  char local_498;
  undefined8 auStack_488 [16];
  char local_408;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  char local_3c8;
  char local_3b0 [184];
  undefined8 local_2f8 [36];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  char local_1b0;
  undefined8 auStack_1a8 [16];
  char local_128;
  undefined8 auStack_118 [16];
  char local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a98;
  cVar1 = (**(code **)(*param_1 + 0x78))(param_1,local_9f8);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x70))(param_1,local_9f8);
    if (cVar1 == '\0') {
      local_a78 = local_9f8;
      (**(code **)(*param_1 + 0x88))(param_1,&local_a08,param_2,param_3);
      (**(code **)(*param_1 + 0x80))(param_1,local_a34,param_3,param_4);
      FUN_1489d1160(local_2f8,local_9e8);
      local_3c8 = local_58;
      if (local_58 == '\x01') {
        unaff_RBP = local_2f8;
        memcpy(local_668,unaff_RBP,0x120);
        local_548 = local_1d8;
        uStack_540 = uStack_1d0;
        local_520 = local_1b0;
        if (local_1b0 == '\x01') {
          local_528 = local_1b8;
          local_538 = local_1c8;
          uStack_530 = uStack_1c0;
        }
        local_498 = local_128;
        if (local_128 == '\x01') {
          puVar4 = auStack_1a8;
          puVar5 = auStack_518;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
        }
        local_408 = local_98;
        if (local_98 == '\x01') {
          unaff_RBP = auStack_118;
          puVar4 = unaff_RBP;
          puVar5 = auStack_488;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
        }
        local_3f8 = local_88;
        uStack_3f0 = uStack_80;
        local_3e8 = local_78;
        uStack_3e0 = uStack_70;
        local_3d8 = local_68;
      }
      local_a48 = local_a08;
      uStack_a44 = uStack_a04;
      uStack_a40 = uStack_a00;
      uStack_a3c = uStack_9fc;
      local_a78 = (undefined8 *)local_668;
      local_a70 = local_a34;
      local_a68 = param_3;
      (**(code **)(*param_1 + 0xb0))(param_1,local_3b0,local_9f8[0]);
      uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      if (local_3b0[0] == '\0') {
        local_738 = local_58;
        if (local_58 != '\0') {
          memcpy(local_9d8,local_2f8,0x120);
          local_8b8 = local_1d8;
          uStack_8b0 = uStack_1d0;
          local_890 = local_1b0;
          if (local_1b0 == '\x01') {
            local_898 = local_1b8;
            local_8a8 = local_1c8;
            uStack_8a0 = uStack_1c0;
          }
          local_808 = local_128;
          if (local_128 == '\x01') {
            puVar4 = auStack_1a8;
            puVar5 = auStack_888;
            for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
          }
          local_778 = local_98;
          if (local_98 == '\x01') {
            puVar4 = auStack_118;
            puVar5 = auStack_7f8;
            for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
          }
          local_768 = local_88;
          uStack_760 = uStack_80;
          local_758 = local_78;
          uStack_750 = uStack_70;
          local_748 = local_68;
        }
        local_a58 = local_a08;
        uStack_a54 = uStack_a04;
        uStack_a50 = uStack_a00;
        uStack_a4c = uStack_9fc;
        local_a78 = (undefined8 *)local_9d8;
        local_a70 = local_a34;
        local_a68 = param_3;
        (**(code **)(*param_1 + 0xa8))(param_1,local_720,local_9f8);
        FUN_1403d4924(local_3b0,local_720);
        FUN_14493db24(local_720);
        if (local_3b0[0] == '\0') {
          if (*(char *)((longlong)param_1 + 0xe) == '\x01') {
            (**(code **)(*param_1 + 0xb8))(param_1,local_720,param_2,param_3);
            FUN_1403d4924(local_3b0,local_720);
            FUN_14493db24(local_720);
            if (local_3b0[0] != '\0') goto LAB_1489d2326;
          }
          uVar3 = 0;
        }
      }
LAB_1489d2326:
      FUN_14493db24(local_3b0);
      goto LAB_1489d214f;
    }
  }
  uVar3 = 0;
LAB_1489d214f:
  if ((local_48 ^ (ulonglong)auStack_a98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1489d24f6 FUN_1489d24f6 body=88 status=ok
// SIG undefined FUN_1489d24f6(void)

undefined1 * FUN_1489d24f6(longlong *param_1,undefined1 *param_2,int param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    (**(code **)(*param_1 + 200))(param_1,0,param_4);
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 1489d254e FUN_1489d254e body=104 status=ok
// SIG undefined FUN_1489d254e(void)

void FUN_1489d254e(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((int)param_1[2] == 0) {
    lVar1 = 0xe0;
    if ((param_2 == 0 || *(int *)((longlong)param_1 + 0x14) == 0) &&
       (lVar1 = 0xe8, *(int *)((longlong)param_1 + 0x14) != 0 || param_2 != 0)) goto LAB_1489d25a5;
  }
  else {
    lVar1 = 0xe0;
    if (param_2 == 0) goto LAB_1489d25a5;
  }
  (**(code **)(*param_1 + lVar1))(param_1,param_3);
LAB_1489d25a5:
  FUN_14485c47a(param_1 + 2,param_2);
  return;
}



// FUNCTION 1489d25b6 FUN_1489d25b6 body=147 status=ok
// SIG undefined FUN_1489d25b6(void)

void FUN_1489d25b6(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145c4e694(local_28);
  param_1 = param_1 + 0x10;
  cVar2 = FUN_144729dda(param_1);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(param_1);
    if (*(longlong *)(*(longlong *)(lVar3 + 0x220) + 8) != 0) {
      lVar3 = FUN_14479d2ce(param_1);
      plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x220) + 8);
      local_38 = 0;
      (**(code **)(*plVar1 + 0xf0))(plVar1,local_28,0,0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d264e FUN_1489d264e body=50 status=ok
// SIG undefined FUN_1489d264e(void)

void FUN_1489d264e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 8) == 2) {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    uVar2 = FUN_1489dab1e();
    FUN_1489cea92(uVar2,uVar1);
  }
  FUN_145af498a(*(undefined8 *)(param_1 + 0x18),1);
  return;
}



// FUNCTION 1489d2680 FUN_1489d2680 body=68 status=ok
// SIG undefined FUN_1489d2680(void)

void FUN_1489d2680(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = FUN_1489dab1e();
  FUN_145afb196(uVar2,uVar1);
  if ((*(uint *)(param_1 + 8) & 0xfffffffd) == 0) {
    uVar2 = FUN_1489dab1e();
    FUN_145afb2c0(uVar2,uVar1);
  }
  FUN_145af498a(*(undefined8 *)(param_1 + 0x18),0);
  return;
}



// FUNCTION 1489d26c4 FUN_1489d26c4 body=287 status=ok
// SIG undefined FUN_1489d26c4(void)

undefined1 FUN_1489d26c4(longlong param_1,longlong param_2,ulonglong param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_178 [40];
  longlong local_150 [2];
  undefined1 local_140 [256];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_40 = 0;
  if (param_2 == 0) {
    local_38 = 0;
    local_30 = 0;
  }
  else {
    if ((int)param_3 < 1) {
      bVar4 = false;
    }
    else {
      uVar3 = (int)param_3 - 1;
      bVar4 = *(char *)(param_2 + (ulonglong)uVar3) == '\0';
      param_3 = param_3 & 0xffffffff;
      if (bVar4) {
        param_3 = (ulonglong)uVar3;
      }
    }
    FUN_1446e6fe8(local_140,param_2,param_3,bVar4);
  }
  FUN_1400089be(local_150,local_30,local_38);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x40))
                    (*(longlong **)(param_1 + 0x30),local_150);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (local_150[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  uVar2 = 2;
  if (cVar1 != '\x02') {
    uVar2 = cVar1 == '\x01';
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d27e4 FUN_1489d27e4 body=507 status=ok
// SIG undefined FUN_1489d27e4(void)

undefined1 FUN_1489d27e4(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined8 uStack_170;
  longlong local_160 [2];
  undefined1 local_150 [256];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_50 = 0;
  if (param_2 == 0) {
    local_48 = 0;
    local_40 = 0;
  }
  else {
    if ((int)param_3 < 1) {
      bVar9 = false;
    }
    else {
      uVar5 = (int)param_3 - 1;
      bVar9 = *(char *)(param_2 + (ulonglong)uVar5) == '\0';
      param_3 = param_3 & 0xffffffff;
      if (bVar9) {
        param_3 = (ulonglong)uVar5;
      }
    }
    FUN_1446e6fe8(local_150,param_2,param_3,bVar9);
  }
  FUN_1400089be(local_160,local_40,local_48);
  if (param_4 == (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
                      (*(longlong **)(param_1 + 0x30),local_160);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    uVar10 = 2;
    if (cVar4 != '\x02') {
      uVar10 = cVar4 == '\x01';
    }
  }
  else {
    local_178 = 0;
    uStack_170 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    plVar2 = *(longlong **)(param_1 + 0x30);
    uVar6 = (**(code **)(*plVar2 + 0x40))(plVar2,local_160);
    cVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_160,uVar6,&local_178);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    lVar3 = local_178;
    if (cVar4 == '\x02') {
      lVar7 = (longlong)(int)uStack_170;
      if (lVar7 != 0) {
        lVar8 = 0;
        do {
          cVar1 = *(char *)(lVar3 + 8 + lVar8);
          uVar10 = cVar1 == '\x01';
          if (cVar1 == '\x02') {
            uVar10 = 2;
          }
          (**(code **)(*param_4 + 8))
                    (param_4,*(undefined4 *)(lVar3 + lVar8),*(undefined4 *)(lVar3 + 4 + lVar8),
                     uVar10);
          lVar8 = lVar8 + 0xc;
        } while (lVar7 * 0xc != lVar8);
      }
    }
    uVar10 = 2;
    if (cVar4 != '\x02') {
      uVar10 = cVar4 == '\x01';
    }
    if (local_178 != 0) {
      FUN_1400020a8(local_178);
    }
  }
  if (local_160[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1489d29e0 FUN_1489d29e0 body=232 status=ok
// SIG undefined FUN_1489d29e0(void)

/* WARNING: Removing unreachable block (ram,0x0001489d2a62) */

void FUN_1489d29e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_2,&local_38);
  iVar1 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x38),iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  lVar4 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_38;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_30;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1489d961a((longlong *)(param_1 + 0x98),iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
       (ulonglong)(iVar1 - 1) << 0x20 | 3;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489d2aca FUN_1489d2aca body=208 status=ok
// SIG undefined FUN_1489d2aca(void)

void FUN_1489d2aca(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar5 = (undefined8 *)FUN_1447a1f4a(param_2);
  iVar2 = *(int *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0x38),iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  lVar6 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar4 + lVar6);
  *(undefined8 *)(lVar4 + lVar6) = 0;
  iVar2 = *(int *)(puVar5 + 1);
  _Src = (void *)*puVar5;
  *(int *)(lVar4 + 8 + lVar6) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  iVar2 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1489d961a((longlong *)(param_1 + 0x98),iVar3);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) =
       (ulonglong)(iVar2 - 1) << 0x20 | 3;
  return;
}



// FUNCTION 1489d2b9a FUN_1489d2b9a body=226 status=ok
// SIG undefined FUN_1489d2b9a(void)

void FUN_1489d2b9a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x90);
  lVar4 = (longlong)iVar1;
  *(uint *)(param_1 + 0x90) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x94) < iVar1 + 1U) {
    FUN_1489d96a0(param_1 + 0x88,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x88);
  *(undefined8 *)(lVar3 + lVar4 * 0x18) = param_2;
  *(undefined4 *)(lVar3 + 8 + lVar4 * 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10 + lVar4 * 0x18) = param_3;
  iVar1 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1489d961a(param_1 + 0x98,iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
       (ulonglong)(iVar1 - 1) << 0x20 | 6;
  iVar1 = *(int *)(param_1 + 0xb0);
  *(uint *)(param_1 + 0xb0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xb4) < iVar1 + 1U) {
    FUN_1489d9734((longlong *)(param_1 + 0xa8),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar1 * 8) = param_3;
  return;
}



// FUNCTION 1489d2c7c FUN_1489d2c7c body=457 status=ok
// SIG undefined FUN_1489d2c7c(void)

void FUN_1489d2c7c(longlong param_1,longlong *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  void *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_40 = param_2[0xe];
  FUN_140393c76(&local_38,*(int *)((longlong)param_2 + 0x34) * (int)param_2[6],1);
  if ((*(byte *)((longlong)param_2 + 0x39) & 2) == 0) {
    (**(code **)(*param_2 + 0x160))(param_2);
  }
  else {
    memset(local_38,0,(longlong)(int)param_2[6] * (longlong)*(int *)((longlong)param_2 + 0x34));
  }
  if (local_38 != param_3) {
    if ((*(byte *)((longlong)param_2 + 0x3b) & 0x40) == 0) {
      (**(code **)(*param_2 + 0x100))(param_2,local_38,param_3,(int)param_2[6]);
    }
    else {
      memcpy(local_38,param_3,
             (longlong)(int)param_2[6] * (longlong)*(int *)((longlong)param_2 + 0x34));
    }
  }
  iVar1 = *(int *)(param_1 + 0x80);
  lVar4 = (longlong)iVar1;
  *(uint *)(param_1 + 0x80) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
    FUN_1489d97ba(param_1 + 0x78,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x78);
  *(longlong *)(lVar3 + lVar4 * 0x18) = local_40;
  *(undefined8 *)(lVar3 + 8 + lVar4 * 0x18) = 0;
  *(void **)(lVar3 + 8 + lVar4 * 0x18) = local_38;
  local_38 = (void *)0x0;
  *(undefined4 *)(lVar3 + 0x10 + lVar4 * 0x18) = (undefined4)uStack_30;
  *(undefined4 *)(lVar3 + 0x14 + lVar4 * 0x18) = uStack_30._4_4_;
  uStack_30 = 0;
  iVar1 = *(int *)(param_1 + 0x80);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1489d961a(param_1 + 0x98,iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
       (ulonglong)(iVar1 - 1) << 0x20 | 4;
  lVar4 = param_2[0xe];
  iVar1 = *(int *)(param_1 + 0xb0);
  *(uint *)(param_1 + 0xb0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xb4) < iVar1 + 1U) {
    FUN_1489d9734((longlong *)(param_1 + 0xa8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar1 * 8) = lVar4;
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d2e46 thunk_FUN_1489d2c7c body=5 status=ok
// SIG undefined thunk_FUN_1489d2c7c(void)

void thunk_FUN_1489d2c7c(longlong param_1,longlong *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong lStack_40;
  void *pvStack_38;
  undefined8 uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pvStack_38 = (void *)0x0;
  uStack_30 = 0;
  lStack_40 = param_2[0xe];
  FUN_140393c76(&pvStack_38,*(int *)((longlong)param_2 + 0x34) * (int)param_2[6],1);
  if ((*(byte *)((longlong)param_2 + 0x39) & 2) == 0) {
    (**(code **)(*param_2 + 0x160))(param_2);
  }
  else {
    memset(pvStack_38,0,(longlong)(int)param_2[6] * (longlong)*(int *)((longlong)param_2 + 0x34));
  }
  if (pvStack_38 != param_3) {
    if ((*(byte *)((longlong)param_2 + 0x3b) & 0x40) == 0) {
      (**(code **)(*param_2 + 0x100))(param_2,pvStack_38,param_3,(int)param_2[6]);
    }
    else {
      memcpy(pvStack_38,param_3,
             (longlong)(int)param_2[6] * (longlong)*(int *)((longlong)param_2 + 0x34));
    }
  }
  iVar1 = *(int *)(param_1 + 0x80);
  lVar4 = (longlong)iVar1;
  *(uint *)(param_1 + 0x80) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
    FUN_1489d97ba(param_1 + 0x78,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x78);
  *(longlong *)(lVar3 + lVar4 * 0x18) = lStack_40;
  *(undefined8 *)(lVar3 + 8 + lVar4 * 0x18) = 0;
  *(void **)(lVar3 + 8 + lVar4 * 0x18) = pvStack_38;
  pvStack_38 = (void *)0x0;
  *(undefined4 *)(lVar3 + 0x10 + lVar4 * 0x18) = (undefined4)uStack_30;
  *(undefined4 *)(lVar3 + 0x14 + lVar4 * 0x18) = uStack_30._4_4_;
  uStack_30 = 0;
  iVar1 = *(int *)(param_1 + 0x80);
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1489d961a(param_1 + 0x98,iVar2);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) =
       (ulonglong)(iVar1 - 1) << 0x20 | 4;
  lVar4 = param_2[0xe];
  iVar1 = *(int *)(param_1 + 0xb0);
  *(uint *)(param_1 + 0xb0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xb4) < iVar1 + 1U) {
    FUN_1489d9734((longlong *)(param_1 + 0xa8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar1 * 8) = lVar4;
  if (pvStack_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d2e4c FUN_1489d2e4c body=219 status=ok
// SIG undefined FUN_1489d2e4c(void)

void FUN_1489d2e4c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
LAB_1489d2f14:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1489d2f14;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_1489d2f14;
    FUN_143e89390(param_1,lVar1,uVar2);
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  }
  return;
}



// FUNCTION 1489d2f28 FUN_1489d2f28 body=156 status=ok
// SIG undefined FUN_1489d2f28(void)

void FUN_1489d2f28(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_1446dcc8c();
    lVar5 = 0;
    if (lVar3 == lVar4) {
      lVar5 = lVar1;
    }
  }
  FUN_1489d2c7c(param_1,lVar5,uVar2);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  return;
}



// FUNCTION 1489d2fc4 FUN_1489d2fc4 body=159 status=ok
// SIG undefined FUN_1489d2fc4(void)

void FUN_1489d2fc4(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 != 0 && param_2 != 0) {
    FUN_1400b22c2(&local_28);
    if ((longlong)local_20 != 0) {
      lVar1 = (longlong)local_20 * 2;
      lVar2 = 0;
      do {
        if (*(short *)(local_28 + lVar2 * 2) == 0x2e) break;
        lVar2 = lVar2 + 1;
        lVar1 = lVar1 + -2;
      } while (lVar1 != 0);
    }
    FUN_143e89b24();
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d3064 FUN_1489d3064 body=61 status=ok
// SIG undefined FUN_1489d3064(void)

void FUN_1489d3064(longlong *param_1)

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



// FUNCTION 1489d30aa FUN_1489d30aa body=123 status=ok
// SIG undefined FUN_1489d30aa(void)

ulonglong FUN_1489d30aa(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  bool bVar4;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x70));
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar1 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x60);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        bVar4 = *(uint *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x20) == param_2;
        uVar3 = CONCAT71((int7)(uVar3 >> 8),!bVar4);
        if (bVar4) break;
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x20) + 0x18);
      } while (iVar2 != -1);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x70));
  return uVar3 & 0xffffffff;
}



// FUNCTION 1489d3126 FUN_1489d3126 body=130 status=ok
// SIG undefined FUN_1489d3126(void)

void FUN_1489d3126(longlong param_1,ulonglong param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x88));
  iVar2 = *(int *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x80) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar2 + 1U) {
    FUN_1489da500((longlong *)(param_1 + 0x78),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x78);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(ulonglong *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) =
       (ulonglong)param_3 << 0x20 | param_2 & 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x0001489d3194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x88));
  return;
}



// FUNCTION 1489d31a8 FUN_1489d31a8 body=162 status=ok
// SIG undefined FUN_1489d31a8(void)

void FUN_1489d31a8(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x70));
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x60);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      do {
        lVar1 = lVar3 + (longlong)iVar4 * 0x20;
        if (*(uint *)(lVar3 + (longlong)iVar4 * 0x20) == param_2) {
          if ((longlong *)(lVar1 + 8) != (longlong *)0x0 && lVar1 != 0) {
            plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + 0x10);
            (**(code **)(*plVar2 + 0x40))(plVar2,param_3);
            FUN_1489da406((longlong *)(param_1 + 0x20),param_2);
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x18);
      } while (iVar4 != -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001489d31d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x70));
  return;
}



// FUNCTION 1489d324a FUN_1489d324a body=128 status=ok
// SIG undefined FUN_1489d324a(void)

void FUN_1489d324a(undefined1 *param_1)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar4 = *(longlong **)(param_1 + 0x40);
  if (plVar4 != (longlong *)0x0) {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      iVar1 = iVar6 + 1;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar4 + 1) = iVar1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_143e8d2d0(*(longlong *)(param_1 + 0x38),CONCAT31((int3)((uint)iVar1 >> 8),*param_1),
                    *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                    *(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),param_1 + 0x28);
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001489d32be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1489d32d4 FUN_1489d32d4 body=45 status=ok
// SIG undefined FUN_1489d32d4(void)

longlong FUN_1489d32d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ec05e0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d3302 FUN_1489d3302 body=48 status=ok
// SIG undefined FUN_1489d3302(void)

longlong FUN_1489d3302(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_145ec05e0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d334e FUN_1489d334e body=38 status=ok
// SIG undefined FUN_1489d334e(void)

undefined8 FUN_1489d334e(undefined8 param_1,int param_2)

{
  FUN_1489da5c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d337c FUN_1489d337c body=45 status=ok
// SIG undefined FUN_1489d337c(void)

longlong FUN_1489d337c(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145cbf0f0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d33b0 FUN_1489d33b0 body=72 status=ok
// SIG undefined FUN_1489d33b0(void)

undefined8 * FUN_1489d33b0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b452010;
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1458d165a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d33f8 FUN_1489d33f8 body=38 status=ok
// SIG undefined FUN_1489d33f8(void)

undefined8 FUN_1489d33f8(undefined8 param_1,int param_2)

{
  FUN_1458d165a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d341e FUN_1489d341e body=62 status=ok
// SIG undefined FUN_1489d341e(void)

undefined8 * FUN_1489d341e(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b452110;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d345c FUN_1489d345c body=56 status=ok
// SIG undefined FUN_1489d345c(void)

void FUN_1489d345c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_R9;
  
  plVar3 = *(longlong **)(in_R9 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001489d3489. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1489d3494 FUN_1489d3494 body=39 status=ok
// SIG undefined FUN_1489d3494(void)

ILocalizationManager * FUN_1489d3494(ILocalizationManager *param_1,int param_2)

{
  cohtml::ILocalizationManager::~ILocalizationManager(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d34bc FUN_1489d34bc body=71 status=ok
// SIG undefined FUN_1489d34bc(void)

undefined8 * FUN_1489d34bc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b452260;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d3586 FUN_1489d3586 body=59 status=ok
// SIG undefined FUN_1489d3586(void)

undefined8 FUN_1489d3586(longlong *param_1)

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



// FUNCTION 1489d36bc FUN_1489d36bc body=59 status=ok
// SIG undefined FUN_1489d36bc(void)

undefined8 FUN_1489d36bc(longlong *param_1)

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



// FUNCTION 1489d375d FUN_1489d375d body=38 status=ok
// SIG undefined FUN_1489d375d(void)

void FUN_1489d375d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1489d3064(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 1489d3784 FUN_1489d3784 body=70 status=ok
// SIG undefined FUN_1489d3784(void)

undefined8 * FUN_1489d3784(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b454190;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    thunk_FUN_1489e96ac(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d37ca FUN_1489d37ca body=48 status=ok
// SIG undefined FUN_1489d37ca(void)

undefined8 * FUN_1489d37ca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b452940;
  FUN_145cbf3c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d37fa FUN_1489d37fa body=66 status=ok
// SIG undefined FUN_1489d37fa(void)

IAsyncResourceResponse * FUN_1489d37fa(IAsyncResourceResponse *param_1,int param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_14b452950;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  cohtml::IAsyncResourceResponse::~IAsyncResourceResponse(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d383c FUN_1489d383c body=30 status=ok
// SIG undefined FUN_1489d383c(void)

undefined8 FUN_1489d383c(longlong param_1,undefined8 param_2)

{
  FUN_140393c76(param_1 + 8,param_2,1);
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 1489d386c FUN_1489d386c body=130 status=ok
// SIG undefined FUN_1489d386c(void)

void FUN_1489d386c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((param_2 == 0) && (*(int *)(param_1 + 4) - 200U < 7)) {
    plVar1 = (longlong *)param_1[3];
    uVar2 = FUN_14001cc68(0x18,0x10);
    FUN_1489d38ee(uVar2,param_1 + 1);
    (**(code **)(*plVar1 + 8))(plVar1,uVar2);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  (**(code **)(*(longlong *)param_1[3] + 0x10))((longlong *)param_1[3],uVar2);
  if (param_1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d38b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1489d38ee FUN_1489d38ee body=107 status=ok
// SIG undefined FUN_1489d38ee(void)

ISyncStreamReader * FUN_1489d38ee(ISyncStreamReader *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  cohtml::ISyncStreamReader::ISyncStreamReader(param_1);
  *(undefined ***)param_1 = &PTR_FUN_14b4529a0;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 1489d395a FUN_1489d395a body=66 status=ok
// SIG undefined FUN_1489d395a(void)

ISyncStreamReader * FUN_1489d395a(ISyncStreamReader *param_1,int param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_14b4529a0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  cohtml::ISyncStreamReader::~ISyncStreamReader(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d39a0 FUN_1489d39a0 body=36 status=ok
// SIG undefined FUN_1489d39a0(void)

uint FUN_1489d39a0(longlong param_1,uint param_2,void *param_3,uint param_4)

{
  memcpy(param_3,(void *)((ulonglong)param_2 + *(longlong *)(param_1 + 8)),(ulonglong)param_4);
  return param_4;
}



// FUNCTION 1489d39d8 FUN_1489d39d8 body=38 status=ok
// SIG undefined FUN_1489d39d8(void)

undefined8 FUN_1489d39d8(undefined8 param_1,int param_2)

{
  FUN_1489d39fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d39fe FUN_1489d39fe body=68 status=ok
// SIG undefined FUN_1489d39fe(void)

void FUN_1489d39fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4529c0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b452a40;
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1489d3a9c FUN_1489d3a9c body=235 status=ok
// SIG undefined FUN_1489d3a9c(void)

void FUN_1489d3a9c(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  bool bVar2;
  undefined1 auStack_168 [40];
  longlong local_140 [2];
  undefined1 local_130 [256];
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_30 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    local_20 = 0;
  }
  else {
    if ((int)param_3 < 1) {
      bVar2 = false;
    }
    else {
      uVar1 = (int)param_3 - 1;
      bVar2 = *(char *)(param_2 + (ulonglong)uVar1) == '\0';
      param_3 = param_3 & 0xffffffff;
      if (bVar2) {
        param_3 = (ulonglong)uVar1;
      }
    }
    FUN_1446e6fe8(local_130,param_2,param_3,bVar2);
  }
  FUN_1400089be(local_140,local_20,local_28);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),local_140);
  if (local_140[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d3b88 FUN_1489d3b88 body=132 status=ok
// SIG undefined FUN_1489d3b88(void)

void FUN_1489d3b88(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1489d3c0e FUN_1489d3c0e body=71 status=ok
// SIG undefined FUN_1489d3c0e(void)

undefined8 * FUN_1489d3c0e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b452260;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d3c56 FUN_1489d3c56 body=71 status=ok
// SIG undefined FUN_1489d3c56(void)

undefined8 * FUN_1489d3c56(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b452260;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d3c9e FUN_1489d3c9e body=39 status=ok
// SIG undefined FUN_1489d3c9e(void)

ISyncStreamWriter * FUN_1489d3c9e(ISyncStreamWriter *param_1,int param_2)

{
  cohtml::ISyncStreamWriter::~ISyncStreamWriter(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d3cc6 FUN_1489d3cc6 body=61 status=ok
// SIG undefined FUN_1489d3cc6(void)

void FUN_1489d3cc6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d3cf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1489d3d04 FUN_1489d3d04 body=295 status=ok
// SIG undefined FUN_1489d3d04(void)

undefined4 * FUN_1489d3d04(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489d3e2c(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar7 = *(uint *)*param_3;
  *local_40 = uVar7;
  uVar6 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  local_40[2] = *puVar1;
  local_40[3] = uVar6;
  local_40[4] = uVar2;
  local_40[5] = uVar3;
  *(undefined8 *)(local_40 + 6) = *(undefined8 *)(puVar1 + 4);
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  cVar5 = FUN_1489d3f12(param_1,uVar7,local_40,&local_4c);
  uVar4 = local_4c;
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[9] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[8] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1489d400e(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d3e2c FUN_1489d3e2c body=230 status=ok
// SIG undefined FUN_1489d3e2c(void)

int * FUN_1489d3e2c(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1489d3f12 FUN_1489d3f12 body=138 status=ok
// SIG undefined FUN_1489d3f12(void)

undefined8 FUN_1489d3f12(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[5];
          iVar7 = param_3[6];
          iVar8 = param_3[7];
          piVar1[4] = param_3[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1489d3f9c(iVar2,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = piVar1[8];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 1489d3f9c FUN_1489d3f9c body=114 status=ok
// SIG undefined FUN_1489d3f9c(void)

void FUN_1489d3f9c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1489d400e FUN_1489d400e body=419 status=ok
// SIG undefined FUN_1489d400e(void)

void FUN_1489d400e(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x28);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 1489d41b2 FUN_1489d41b2 body=81 status=ok
// SIG undefined FUN_1489d41b2(void)

void FUN_1489d41b2(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x28) == param_2) {
          FUN_1489d4204(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1489d4204 FUN_1489d4204 body=87 status=ok
// SIG undefined FUN_1489d4204(void)

void FUN_1489d4204(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1489d3f9c();
  return;
}



// FUNCTION 1489d425c FUN_1489d425c body=132 status=ok
// SIG undefined FUN_1489d425c(void)

void FUN_1489d425c(longlong param_1,int param_2)

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



// FUNCTION 1489d42e2 FUN_1489d42e2 body=30 status=ok
// SIG undefined FUN_1489d42e2(void)

void * FUN_1489d42e2(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1489d4300 FUN_1489d4300 body=32 status=ok
// SIG undefined FUN_1489d4300(void)

void FUN_1489d4300(longlong param_1,longlong *param_2)

{
  FUN_1489c65d4(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001489d431c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 1489d4326 FUN_1489d4326 body=38 status=ok
// SIG undefined FUN_1489d4326(void)

undefined8 FUN_1489d4326(undefined8 param_1,int param_2)

{
  FUN_1489d5136();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d434c FUN_1489d434c body=291 status=ok
// SIG undefined FUN_1489d434c(void)

ulonglong FUN_1489d434c(longlong param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  size_t sVar3;
  ulonglong uVar4;
  undefined1 auStack_168 [32];
  longlong local_148;
  int local_140;
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_38 = 0;
  if (param_2 == (char *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar3 = strlen(param_2);
    FUN_1446e6fe8(local_138,param_2,sVar3 & 0xffffffff,1);
  }
  FUN_140056680(&local_148,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  cVar2 = FUN_14113f0c0(*(longlong *)(param_1 + 0x18) + 0x180);
  if (cVar2 != '\0') {
    cVar2 = FUN_1489c6549(*(longlong *)(param_1 + 0x18) + 0x180,&local_148);
    if (cVar2 == '\0') {
      uVar4 = 0;
      goto LAB_1489d4418;
    }
  }
  iVar1 = local_140 + -1;
  if (local_140 == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x20,local_148,iVar1);
  *(undefined4 *)(param_1 + 0x10) = 1;
  uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_1489d4418:
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d4494 FUN_1489d4494 body=369 status=ok
// SIG undefined FUN_1489d4494(void)

void FUN_1489d4494(longlong param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_178 [32];
  longlong local_158 [2];
  longlong local_148;
  int local_140;
  undefined1 local_138 [256];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_143e8d3fa(&local_148);
  local_38 = 0;
  if (param_3 == (char *)0x0) {
    local_30 = 0;
    local_28 = 0;
  }
  else {
    sVar2 = strlen(param_3);
    FUN_1446e6fe8(local_138,param_3,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(local_158);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == local_140) {
    if (1 < iVar1) {
      lVar3 = 0;
      while( true ) {
        uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x20) + lVar3);
        uVar5 = (ulonglong)uVar4;
        uVar6 = *(ushort *)(local_148 + lVar3);
        if (uVar4 != uVar6) break;
        if (uVar4 == 0) goto LAB_1489d4585;
LAB_1489d4550:
        lVar3 = lVar3 + 2;
      }
      if ((uVar6 | uVar4) < 0x80) {
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar7 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_1489d4550;
      }
      if (uVar4 != uVar6) goto LAB_1489d458c;
    }
  }
  else if (local_140 + iVar1 != 1) goto LAB_1489d458c;
LAB_1489d4585:
  *(undefined4 *)(param_1 + 0x10) = 3;
LAB_1489d458c:
  FUN_1489c64b6(*(longlong *)(param_1 + 0x18) + 0x170,&local_148,local_158);
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489d4606 FUN_1489d4606 body=308 status=ok
// SIG undefined FUN_1489d4606(void)

void FUN_1489d4606(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_143e8d3fa(&local_30);
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == local_28) {
    if (1 < iVar1) {
      lVar2 = 0;
      while( true ) {
        uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x20) + lVar2);
        uVar4 = (ulonglong)uVar3;
        uVar5 = *(ushort *)(local_30 + lVar2);
        if (uVar3 != uVar5) break;
        if (uVar3 == 0) goto LAB_1489d469a;
LAB_1489d4665:
        lVar2 = lVar2 + 2;
      }
      if ((uVar5 | uVar3) < 0x80) {
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_1489d4665;
      }
      if (uVar3 != uVar5) goto LAB_1489d46e8;
    }
  }
  else if (local_28 + iVar1 != 1) goto LAB_1489d46e8;
LAB_1489d469a:
  FUN_1400b22c2(&local_40,&DAT_149e02088);
  if ((longlong *)(param_1 + 0x20) == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x20) = local_40;
    local_40 = 0;
    *(undefined4 *)(param_1 + 0x28) = local_38;
    *(undefined4 *)(param_1 + 0x2c) = local_34;
  }
  *(undefined4 *)(param_1 + 0x10) = 2;
LAB_1489d46e8:
  FUN_1489c6455(*(longlong *)(param_1 + 0x18) + 0x160,&local_30);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489d473c FUN_1489d473c body=47 status=ok
// SIG undefined FUN_1489d473c(void)

void FUN_1489d473c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1489cca22();
  FUN_1489c6432(*(longlong *)(param_1 + 0x18) + 0x110);
  return;
}



// FUNCTION 1489d4782 FUN_1489d4782 body=187 status=ok
// SIG undefined FUN_1489d4782(void)

undefined8 * FUN_1489d4782(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  float local_30;
  float local_2c;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  (**(code **)(*DAT_14c98e618 + 0x30))(DAT_14c98e618,&local_28);
  if (local_28 != 0) {
    FUN_14287c17c(local_28,&local_30);
    *(int *)(param_2 + 1) = (int)(longlong)local_30;
    *(int *)((longlong)param_2 + 0xc) = (int)(longlong)local_2c;
    param_2[2] = 0x1800000018;
    *(int *)param_2 = (int)(longlong)local_30;
    *(int *)((longlong)param_2 + 4) = (int)(longlong)local_2c;
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d483e FUN_1489d483e body=456 status=ok
// SIG undefined FUN_1489d483e(void)

undefined8
FUN_1489d483e(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4,
             int param_5)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined1 uVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 *local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)FUN_144a7d136();
  local_68 = plVar6[0x22];
  if (local_68 == 0) {
    (**(code **)(*plVar6 + 1000))(plVar6);
    local_68 = plVar6[0x22];
  }
  if (((param_5 == 2) && (*(char *)(local_68 + 0x46) == '\0')) &&
     (cVar3 = (**(code **)(*param_2 + 0x38))(), cVar3 == '\n')) {
LAB_1489d49d6:
    uVar7 = 1;
    if (param_4 == (undefined1 *)0x0) goto LAB_1489d49df;
    uVar9 = 0;
  }
  else {
    local_60 = param_4;
    iVar4 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar4 != 0) {
      uVar11 = 0;
      do {
        if ((longlong)*(int *)(local_68 + 0x50) != 0) {
          puVar15 = *(undefined8 **)(local_68 + 0x48);
          puVar12 = puVar15 + (longlong)*(int *)(local_68 + 0x50) * 2;
          do {
            if (param_5 == 2) {
              uVar7 = (**(code **)(*param_2 + 0x10))(param_2,uVar11);
              FUN_1400b22c2(&local_58,uVar7);
              puVar8 = local_58;
              if (local_50 == 0) {
                puVar8 = &DAT_149dfb77a;
              }
              puVar10 = &DAT_149dfb77a;
              if (*(int *)(puVar15 + 1) != 0) {
                puVar10 = (undefined2 *)*puVar15;
              }
              lVar13 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)puVar10 + lVar13);
                uVar14 = (uint)uVar1;
                uVar2 = *(ushort *)((longlong)puVar8 + lVar13);
                uVar5 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1489d4961;
                  }
                  iVar4 = uVar14 - uVar5;
                  goto LAB_1489d498d;
                }
                if (uVar1 == 0) break;
LAB_1489d4961:
                lVar13 = lVar13 + 2;
              }
              iVar4 = 0;
LAB_1489d498d:
              if (local_58 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              param_4 = local_60;
              if (iVar4 == 0) goto LAB_1489d49d6;
            }
            puVar15 = puVar15 + 2;
          } while (puVar15 != puVar12);
        }
        uVar11 = uVar11 + 1;
        uVar5 = (**(code **)(*param_2 + 8))(param_2);
      } while (uVar11 < uVar5);
    }
    uVar9 = 1;
    uVar7 = 0;
    param_4 = local_60;
    if (local_60 == (undefined1 *)0x0) goto LAB_1489d49df;
  }
  *param_4 = uVar9;
LAB_1489d49df:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1489d4a08 FUN_1489d4a08 body=423 status=ok
// SIG undefined FUN_1489d4a08(void)

undefined8
FUN_1489d4a08(undefined8 param_1,longlong *param_2,int *param_3,undefined1 *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [36];
  uint local_64;
  longlong *local_60;
  longlong **local_58;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_2;
  plVar4 = (longlong *)FUN_144a7d136();
  lVar9 = plVar4[0x22];
  if (lVar9 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar9 = plVar4[0x22];
  }
  if ((*param_3 != 0) && ((*param_3 != 3 || (*(char *)(lVar9 + 0x68) == '\0')))) {
    if ((param_5 == 2) && (*(char *)(lVar9 + 0x46) == '\0')) {
      cVar1 = (**(code **)(*param_2 + 0x38))(param_2);
      if (cVar1 == '\n') {
        uVar5 = 1;
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 0;
        }
        goto LAB_1489d4a78;
      }
    }
    else if (1 < param_5 - 1U) goto LAB_1489d4a6e;
    local_64 = 0;
    iVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar2 != 0) {
      do {
        local_58 = &local_60;
        local_50 = &local_64;
        if ((longlong)*(int *)(lVar9 + 0x60) != 0) {
          lVar7 = *(longlong *)(lVar9 + 0x58);
          lVar8 = (longlong)*(int *)(lVar9 + 0x60) << 4;
          do {
            cVar1 = FUN_1489d51b4(&local_58,lVar7);
            if (cVar1 != '\0') {
              if (lVar7 != 0) goto LAB_1489d4b9e;
              break;
            }
            lVar7 = lVar7 + 0x10;
            lVar8 = lVar8 + -0x10;
          } while (lVar8 != 0);
        }
        if ((param_5 == 2) &&
           (local_58 = &local_60, local_50 = &local_64, (longlong)*(int *)(lVar9 + 0x50) != 0)) {
          lVar7 = *(longlong *)(lVar9 + 0x48);
          lVar8 = (longlong)*(int *)(lVar9 + 0x50) << 4;
          do {
            cVar1 = FUN_1489d51b4(&local_58,lVar7);
            if (cVar1 != '\0') {
              if (lVar7 != 0) goto LAB_1489d4b9e;
              break;
            }
            lVar7 = lVar7 + 0x10;
            lVar8 = lVar8 + -0x10;
          } while (lVar8 != 0);
        }
        uVar6 = local_64 + 1;
        local_64 = uVar6;
        uVar3 = (**(code **)(*local_60 + 8))();
      } while (uVar6 < uVar3);
    }
  }
LAB_1489d4a6e:
  uVar5 = 0;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 1;
  }
LAB_1489d4a78:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
LAB_1489d4b9e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar5 = 1;
  goto LAB_1489d4a78;
}



// FUNCTION 1489d4bb4 FUN_1489d4bb4 body=85 status=ok
// SIG undefined FUN_1489d4bb4(void)

void FUN_1489d4bb4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1f0), lVar1 != 0)) {
    cVar2 = FUN_140432338(lVar1);
    if (cVar2 != '\0') {
      FUN_1489cb37e(lVar1,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 1489d4c0a FUN_1489d4c0a body=64 status=ok
// SIG undefined FUN_1489d4c0a(void)

void FUN_1489d4c0a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1f0), lVar1 != 0)) {
    cVar2 = FUN_140432338(lVar1);
    if (cVar2 != '\0') {
      FUN_1489cb44e(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1489d4c4a FUN_1489d4c4a body=64 status=ok
// SIG undefined FUN_1489d4c4a(void)

void FUN_1489d4c4a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1f0), lVar1 != 0)) {
    cVar2 = FUN_140432338(lVar1);
    if (cVar2 != '\0') {
      FUN_1489cb530(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1489d4c8a FUN_1489d4c8a body=64 status=ok
// SIG undefined FUN_1489d4c8a(void)

void FUN_1489d4c8a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1f0), lVar1 != 0)) {
    cVar2 = FUN_140432338(lVar1);
    if (cVar2 != '\0') {
      FUN_1489cb5c8(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1489d4cca FUN_1489d4cca body=86 status=ok
// SIG undefined FUN_1489d4cca(void)

void FUN_1489d4cca(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1f0), lVar1 != 0)) {
    cVar2 = FUN_140432338(lVar1);
    if (cVar2 != '\0') {
      FUN_143e7e15a(lVar1,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 1489d4d20 FUN_1489d4d20 body=64 status=ok
// SIG undefined FUN_1489d4d20(void)

void FUN_1489d4d20(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1f0), lVar1 != 0)) {
    cVar2 = FUN_140432338(lVar1);
    if (cVar2 != '\0') {
      FUN_1489cb5c8(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1489d4d60 FUN_1489d4d60 body=85 status=ok
// SIG undefined FUN_1489d4d60(void)

void FUN_1489d4d60(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1f0), lVar1 != 0)) {
    cVar2 = FUN_140432338(lVar1);
    if (cVar2 != '\0') {
      FUN_1489cb638(lVar1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1489d4dde FUN_1489d4dde body=35 status=ok
// SIG undefined FUN_1489d4dde(void)

void FUN_1489d4dde(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = FUN_1489cc816(param_2);
    *(undefined4 *)(lVar1 + 0x1d8) = uVar2;
  }
  return;
}



// FUNCTION 1489d4e26 FUN_1489d4e26 body=55 status=ok
// SIG undefined FUN_1489d4e26(void)

void FUN_1489d4e26(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x48,0x10);
  FUN_1489dd2de(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1489d4e5e FUN_1489d4e5e body=45 status=ok
// SIG undefined FUN_1489d4e5e(void)

longlong FUN_1489d4e5e(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1489d5136(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d4e8c FUN_1489d4e8c body=521 status=ok
// SIG undefined FUN_1489d4e8c(void)

void FUN_1489d4e8c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined7 uVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) goto LAB_1489d505e;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x498))();
  *(undefined8 *)(param_1 + 0x28) = 0;
  plVar8 = *(longlong **)(param_1 + 0x30);
  if (plVar8 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
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
  lVar5 = FUN_14001cc68(0x70,0x10);
  FUN_1489dcd04(lVar5,*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x220) + 8),
                param_2);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b4541c0;
  plVar6[2] = lVar5;
  *(longlong *)(param_1 + 0x28) = lVar5;
  plVar8 = *(longlong **)(param_1 + 0x30);
  if (plVar6 == plVar8) {
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
        iVar2 = *piVar1;
        UNLOCK();
        plVar8 = plVar6;
        goto joined_r0x0001489d4fa0;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x30) = plVar6;
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
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001489d4fa0:
        if (iVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  FUN_1446ddc76(&local_40,"CohtmlPlugin",1);
  uVar7 = FUN_144a52528();
  FUN_1402c9134(uVar7,local_40,local_34,1);
  uVar9 = (undefined7)((ulonglong)local_40 >> 8);
  if ((DAT_14cb90d70 == (longlong *)0x0 || DAT_14cb90d78 == 0) ||
     (cVar3 = (**(code **)(*DAT_14cb90d70 + 0x30))(), cVar3 == '\0')) {
    uVar7 = DAT_14c98e618;
    local_50 = *(undefined8 *)(param_1 + 0x28);
    local_48 = *(longlong *)(param_1 + 0x30);
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    FUN_1428f5168(uVar7,CONCAT71(uVar9,1),uVar4,&local_50);
  }
  else {
    plVar8 = DAT_14cb90d70;
    if (DAT_14cb90d78 == 0) {
      plVar8 = (longlong *)0x0;
    }
    local_58 = param_2;
    (**(code **)(*plVar8 + 0x58))
              (plVar8,param_1 + 0x28,uVar4,
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x220) + 8));
  }
LAB_1489d505e:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d5096 FUN_1489d5096 body=159 status=ok
// SIG undefined FUN_1489d5096(void)

void FUN_1489d5096(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x498))();
    if (DAT_14c98e618 != 0) {
      local_28 = 0;
      uStack_20 = 0;
      FUN_1428f5168(DAT_14c98e618,0,uVar4);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d5136 FUN_1489d5136 body=125 status=ok
// SIG undefined FUN_1489d5136(void)

void FUN_1489d5136(IViewListener *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_14b452ec0;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14b452f90;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1489dd1b0();
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  cohtml::ITextInputHandler::~ITextInputHandler((ITextInputHandler *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001489d51ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::IViewListener::~IViewListener(param_1);
  return;
}



// FUNCTION 1489d51b4 FUN_1489d51b4 body=205 status=ok
// SIG undefined FUN_1489d51b4(void)

bool FUN_1489d51b4(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = (**(code **)(**(longlong **)*param_1 + 0x10))
                    (*(longlong **)*param_1,*(undefined4 *)param_1[1]);
  FUN_1400b22c2(&local_28,uVar3);
  puVar5 = &DAT_149dfb77a;
  puVar4 = local_28;
  if (local_20 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar5 = (undefined2 *)*param_2;
  }
  lVar8 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar5 + lVar8);
    uVar6 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar4 + lVar8);
    uVar9 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1489d522a;
      }
      iVar7 = uVar6 - uVar9;
      goto LAB_1489d5255;
    }
    if (uVar1 == 0) break;
LAB_1489d522a:
    lVar8 = lVar8 + 2;
  }
  iVar7 = 0;
LAB_1489d5255:
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar7 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d5282 FUN_1489d5282 body=24 status=ok
// SIG undefined FUN_1489d5282(void)

void FUN_1489d5282(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d5296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1489d529a FUN_1489d529a body=29 status=ok
// SIG undefined FUN_1489d529a(void)

undefined8 FUN_1489d529a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d52b8 FUN_1489d52b8 body=24 status=ok
// SIG undefined FUN_1489d52b8(void)

void FUN_1489d52b8(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d52cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1489d52d0 FUN_1489d52d0 body=29 status=ok
// SIG undefined FUN_1489d52d0(void)

undefined8 FUN_1489d52d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d52ee FUN_1489d52ee body=89 status=ok
// SIG undefined FUN_1489d52ee(void)

void FUN_1489d52ee(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1489d5348 FUN_1489d5348 body=112 status=ok
// SIG undefined FUN_1489d5348(void)

void FUN_1489d5348(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1489d53b8 FUN_1489d53b8 body=147 status=ok
// SIG undefined FUN_1489d53b8(void)

void FUN_1489d53b8(longlong param_1,int param_2)

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



// FUNCTION 1489d544c FUN_1489d544c body=30 status=ok
// SIG undefined FUN_1489d544c(void)

void * FUN_1489d544c(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1489d546a FUN_1489d546a body=33 status=ok
// SIG undefined FUN_1489d546a(void)

void FUN_1489d546a(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0001489d5487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 1489d5498 FUN_1489d5498 body=31 status=ok
// SIG undefined FUN_1489d5498(void)

undefined8 FUN_1489d5498(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d54d4 FUN_1489d54d4 body=93 status=ok
// SIG undefined FUN_1489d54d4(void)

void FUN_1489d54d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b453040;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d5532 FUN_1489d5532 body=126 status=ok
// SIG undefined FUN_1489d5532(void)

void FUN_1489d5532(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b453040;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d55a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489d55be FUN_1489d55be body=21 status=ok
// SIG undefined FUN_1489d55be(void)

undefined8 FUN_1489d55be(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489d55d4 FUN_1489d55d4 body=31 status=ok
// SIG undefined FUN_1489d55d4(void)

undefined8 FUN_1489d55d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d5610 FUN_1489d5610 body=93 status=ok
// SIG undefined FUN_1489d5610(void)

void FUN_1489d5610(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4530b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d566e FUN_1489d566e body=126 status=ok
// SIG undefined FUN_1489d566e(void)

void FUN_1489d566e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4530b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d56dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489d56fa FUN_1489d56fa body=21 status=ok
// SIG undefined FUN_1489d56fa(void)

undefined8 FUN_1489d56fa(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489d5710 FUN_1489d5710 body=180 status=ok
// SIG undefined FUN_1489d5710(void)

longlong * FUN_1489d5710(longlong *param_1,uint param_2,longlong *param_3)

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
          if (plVar2 != (longlong *)0x0) goto LAB_1489d57a7;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1489d57c6(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_1489d57a7:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1489d57c6 FUN_1489d57c6 body=276 status=ok
// SIG undefined FUN_1489d57c6(void)

undefined4 * FUN_1489d57c6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1489d58dc(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  *(undefined2 *)(local_40 + 1) = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_1489d59c2(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1489d5ab4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d58dc FUN_1489d58dc body=230 status=ok
// SIG undefined FUN_1489d58dc(void)

int * FUN_1489d58dc(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1489d59c2 FUN_1489d59c2 body=128 status=ok
// SIG undefined FUN_1489d59c2(void)

undefined8 FUN_1489d59c2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1489d5a42((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1489d5a42 FUN_1489d5a42 body=114 status=ok
// SIG undefined FUN_1489d5a42(void)

void FUN_1489d5a42(longlong *param_1,int param_2)

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



// FUNCTION 1489d5ab4 FUN_1489d5ab4 body=474 status=ok
// SIG undefined FUN_1489d5ab4(void)

void FUN_1489d5ab4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1489d5c90 FUN_1489d5c90 body=31 status=ok
// SIG undefined FUN_1489d5c90(void)

undefined8 FUN_1489d5c90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d5ccc FUN_1489d5ccc body=93 status=ok
// SIG undefined FUN_1489d5ccc(void)

void FUN_1489d5ccc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b453200;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d5d2a FUN_1489d5d2a body=126 status=ok
// SIG undefined FUN_1489d5d2a(void)

void FUN_1489d5d2a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b453200;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d5d99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489d5db4 FUN_1489d5db4 body=322 status=ok
// SIG undefined FUN_1489d5db4(void)

void FUN_1489d5db4(longlong *param_1)

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



// FUNCTION 1489d5ef8 FUN_1489d5ef8 body=332 status=ok
// SIG undefined FUN_1489d5ef8(void)

void FUN_1489d5ef8(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x84 + (longlong)iVar4 * 0x88) * 4) =
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



// FUNCTION 1489d6046 FUN_1489d6046 body=143 status=ok
// SIG undefined FUN_1489d6046(void)

void FUN_1489d6046(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1489d60d6 FUN_1489d60d6 body=93 status=ok
// SIG undefined FUN_1489d60d6(void)

void FUN_1489d60d6(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x88) == param_2) {
          FUN_140c2075c(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x88 + *param_1 + 0x80);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1489d6134 FUN_1489d6134 body=48 status=ok
// SIG undefined FUN_1489d6134(void)

void FUN_1489d6134(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x70,8);
  }
  return;
}



// FUNCTION 1489d6164 FUN_1489d6164 body=29 status=ok
// SIG undefined FUN_1489d6164(void)

undefined8 FUN_1489d6164(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d619c FUN_1489d619c body=29 status=ok
// SIG undefined FUN_1489d619c(void)

bool FUN_1489d619c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489d61ba FUN_1489d61ba body=26 status=ok
// SIG undefined FUN_1489d61ba(void)

bool FUN_1489d61ba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489d61d4 FUN_1489d61d4 body=24 status=ok
// SIG undefined FUN_1489d61d4(void)

bool FUN_1489d61d4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489d61ec FUN_1489d61ec body=93 status=ok
// SIG undefined FUN_1489d61ec(void)

void FUN_1489d61ec(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4533e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d624a FUN_1489d624a body=93 status=ok
// SIG undefined FUN_1489d624a(void)

void FUN_1489d624a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4533e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d62a8 FUN_1489d62a8 body=126 status=ok
// SIG undefined FUN_1489d62a8(void)

void FUN_1489d62a8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4533e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d6317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489d6326 FUN_1489d6326 body=35 status=ok
// SIG undefined FUN_1489d6326(void)

void FUN_1489d6326(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489d6345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1489d634a FUN_1489d634a body=139 status=ok
// SIG undefined FUN_1489d634a(void)

bool FUN_1489d634a(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 1489d63d6 FUN_1489d63d6 body=29 status=ok
// SIG undefined FUN_1489d63d6(void)

undefined8 FUN_1489d63d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d640e FUN_1489d640e body=29 status=ok
// SIG undefined FUN_1489d640e(void)

bool FUN_1489d640e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489d642c FUN_1489d642c body=26 status=ok
// SIG undefined FUN_1489d642c(void)

bool FUN_1489d642c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489d6446 FUN_1489d6446 body=24 status=ok
// SIG undefined FUN_1489d6446(void)

bool FUN_1489d6446(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489d645e FUN_1489d645e body=93 status=ok
// SIG undefined FUN_1489d645e(void)

void FUN_1489d645e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b453450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d64bc FUN_1489d64bc body=93 status=ok
// SIG undefined FUN_1489d64bc(void)

void FUN_1489d64bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8e9b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b453450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d651a FUN_1489d651a body=126 status=ok
// SIG undefined FUN_1489d651a(void)

void FUN_1489d651a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8e9b60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b453450;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d6589. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489d6598 FUN_1489d6598 body=48 status=ok
// SIG undefined FUN_1489d6598(void)

void FUN_1489d6598(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489d65c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1489d65c8 FUN_1489d65c8 body=160 status=ok
// SIG undefined FUN_1489d65c8(void)

bool FUN_1489d65c8(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    FUN_1400841de(param_1 + 0x18,&local_38);
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



// FUNCTION 1489d666a FUN_1489d666a body=29 status=ok
// SIG undefined FUN_1489d666a(void)

undefined8 FUN_1489d666a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d66a2 FUN_1489d66a2 body=29 status=ok
// SIG undefined FUN_1489d66a2(void)

bool FUN_1489d66a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489d66c0 FUN_1489d66c0 body=26 status=ok
// SIG undefined FUN_1489d66c0(void)

bool FUN_1489d66c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489d66da FUN_1489d66da body=24 status=ok
// SIG undefined FUN_1489d66da(void)

bool FUN_1489d66da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489d66f2 FUN_1489d66f2 body=93 status=ok
// SIG undefined FUN_1489d66f2(void)

void FUN_1489d66f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149efde30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4534c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d6750 FUN_1489d6750 body=93 status=ok
// SIG undefined FUN_1489d6750(void)

void FUN_1489d6750(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149efde30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4534c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d67ae FUN_1489d67ae body=126 status=ok
// SIG undefined FUN_1489d67ae(void)

void FUN_1489d67ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149efde30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4534c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d681d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489d682c FUN_1489d682c body=40 status=ok
// SIG undefined FUN_1489d682c(void)

void FUN_1489d682c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489d6851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1489d6854 FUN_1489d6854 body=149 status=ok
// SIG undefined FUN_1489d6854(void)

bool FUN_1489d6854(longlong param_1,undefined8 param_2)

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
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d68ea FUN_1489d68ea body=1327 status=ok
// SIG undefined FUN_1489d68ea(void)

undefined1 * FUN_1489d68ea(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  
  *param_1 = *param_2;
  FUN_1489d6e1a(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = 0;
  iVar1 = *(int *)(param_2 + 0x150);
  pvVar2 = *(void **)(param_2 + 0x148);
  *(int *)(param_1 + 0x150) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x154) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x148,iVar1,0);
    memcpy(*(void **)(param_1 + 0x148),pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x158] = param_2[0x158];
  FUN_145ad1184(param_1 + 0x160,param_2 + 0x160);
  FUN_145ad1184(param_1 + 0x1c8,param_2 + 0x1c8);
  lVar3 = *(longlong *)(param_2 + 0x230);
  *(longlong *)(param_1 + 0x230) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(param_1 + 0x238) = 0;
  iVar1 = *(int *)(param_2 + 0x240);
  uVar4 = *(undefined8 *)(param_2 + 0x238);
  *(int *)(param_1 + 0x240) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x244) = 0;
  }
  else {
    FUN_147865f1a(param_1 + 0x238,iVar1,0);
    FUN_147865f89(*(undefined8 *)(param_1 + 0x238),uVar4,iVar1);
  }
  *(undefined8 *)(param_1 + 0x248) = 0;
  iVar1 = *(int *)(param_2 + 0x250);
  pvVar2 = *(void **)(param_2 + 0x248);
  *(int *)(param_1 + 0x250) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x254) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 0x248,iVar1,0);
    memcpy(*(void **)(param_1 + 0x248),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 600) = 0;
  iVar1 = *(int *)(param_2 + 0x260);
  uVar4 = *(undefined8 *)(param_2 + 600);
  *(int *)(param_1 + 0x260) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x264) = 0;
  }
  else {
    FUN_1478660ae(param_1 + 600,iVar1,0);
    FUN_147866110(*(undefined8 *)(param_1 + 600),uVar4,iVar1);
  }
  *(undefined8 *)(param_1 + 0x268) = 0;
  iVar1 = *(int *)(param_2 + 0x270);
  pvVar2 = *(void **)(param_2 + 0x268);
  *(int *)(param_1 + 0x270) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x274) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x268,iVar1,0);
    memcpy(*(void **)(param_1 + 0x268),pvVar2,(longlong)iVar1 * 2);
  }
  *(uint *)(param_1 + 0x278) =
       *(uint *)(param_1 + 0x278) & 0xfffffffe | *(uint *)(param_2 + 0x278) & 1;
  *(undefined8 *)(param_1 + 0x280) = 0;
  iVar1 = *(int *)(param_2 + 0x288);
  uVar4 = *(undefined8 *)(param_2 + 0x280);
  *(int *)(param_1 + 0x288) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x28c) = 0;
  }
  else {
    FUN_14786615e(param_1 + 0x280,iVar1,0);
    FUN_1478661c0(*(undefined8 *)(param_1 + 0x280),uVar4,iVar1);
  }
  *(undefined8 *)(param_1 + 0x290) = 0;
  iVar1 = *(int *)(param_2 + 0x298);
  pvVar2 = *(void **)(param_2 + 0x290);
  *(int *)(param_1 + 0x298) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x29c) = 0;
  }
  else {
    FUN_14786620e(param_1 + 0x290,iVar1,0);
    memcpy(*(void **)(param_1 + 0x290),pvVar2,(longlong)iVar1 << 4);
  }
  lVar3 = *(longlong *)(param_2 + 0x2a0);
  *(longlong *)(param_1 + 0x2a0) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar5 = DAT_14c950c29;
  lVar3 = *(longlong *)(param_2 + 0x2a8);
  *(longlong *)(param_1 + 0x2a8) = lVar3;
  if ((lVar3 != 0 & bVar5) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  iVar1 = *(int *)(param_2 + 0x2b8);
  uVar4 = *(undefined8 *)(param_2 + 0x2b0);
  *(int *)(param_1 + 0x2b8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 700) = 0;
  }
  else {
    FUN_147866270(param_1 + 0x2b0,iVar1,0);
    FUN_1478662d2(*(undefined8 *)(param_1 + 0x2b0),uVar4,iVar1);
  }
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  iVar1 = *(int *)(param_2 + 0x2d0);
  pvVar2 = *(void **)(param_2 + 0x2c8);
  *(int *)(param_1 + 0x2d0) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2d4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x2c8,iVar1,0);
    memcpy(*(void **)(param_1 + 0x2c8),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0x2d8);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  iVar1 = *(int *)(param_2 + 0x2f0);
  pvVar2 = *(void **)(param_2 + 0x2e8);
  *(int *)(param_1 + 0x2f0) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2f4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x2e8,iVar1,0);
    memcpy(*(void **)(param_1 + 0x2e8),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x32c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0;
  FUN_147865b92(param_1 + 0x300,param_2 + 0x300);
  *(undefined8 *)(param_1 + 0x350) = 0;
  iVar1 = *(int *)(param_2 + 0x358);
  pvVar2 = *(void **)(param_2 + 0x350);
  *(int *)(param_1 + 0x358) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x35c) = 0;
  }
  else {
    FUN_1478663a4(param_1 + 0x350,iVar1,0);
    memcpy(*(void **)(param_1 + 0x350),pvVar2,(longlong)iVar1 << 3);
  }
  lVar3 = *(longlong *)(param_2 + 0x360);
  *(longlong *)(param_1 + 0x360) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1489d6e1a FUN_1489d6e1a body=472 status=ok
// SIG undefined FUN_1489d6e1a(void)

longlong FUN_1489d6e1a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 uVar4;
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
  
  FUN_145ad1184();
  uVar5 = *(undefined4 *)(param_2 + 0x6c);
  uVar6 = *(undefined4 *)(param_2 + 0x70);
  uVar7 = *(undefined4 *)(param_2 + 0x74);
  uVar8 = *(undefined4 *)(param_2 + 0x78);
  uVar9 = *(undefined4 *)(param_2 + 0x7c);
  uVar10 = *(undefined4 *)(param_2 + 0x80);
  uVar11 = *(undefined4 *)(param_2 + 0x84);
  uVar12 = *(undefined4 *)(param_2 + 0x88);
  uVar13 = *(undefined4 *)(param_2 + 0x8c);
  uVar14 = *(undefined4 *)(param_2 + 0x90);
  uVar15 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  *(undefined4 *)(param_1 + 0x74) = uVar7;
  *(undefined4 *)(param_1 + 0x78) = uVar8;
  *(undefined4 *)(param_1 + 0x7c) = uVar9;
  *(undefined4 *)(param_1 + 0x80) = uVar10;
  *(undefined4 *)(param_1 + 0x84) = uVar11;
  *(undefined4 *)(param_1 + 0x88) = uVar12;
  *(undefined4 *)(param_1 + 0x8c) = uVar13;
  *(undefined4 *)(param_1 + 0x90) = uVar14;
  *(undefined4 *)(param_1 + 0x94) = uVar15;
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  lVar2 = *(longlong *)(param_2 + 0xa8);
  *(longlong *)(param_1 + 0xa8) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  iVar1 = *(int *)(param_2 + 0xb8);
  pvVar3 = *(void **)(param_2 + 0xb0);
  *(int *)(param_1 + 0xb8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  else {
    FUN_1457242e8((undefined8 *)(param_1 + 0xb0),iVar1,0);
    memcpy(*(void **)(param_1 + 0xb0),pvVar3,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  iVar1 = *(int *)(param_2 + 200);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  *(int *)(param_1 + 200) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  else {
    FUN_147865d94((undefined8 *)(param_1 + 0xc0),iVar1,0);
    FUN_147865df6(*(undefined8 *)(param_1 + 0xc0),uVar4,iVar1);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  iVar1 = *(int *)(param_2 + 0xd8);
  pvVar3 = *(void **)(param_2 + 0xd0);
  *(int *)(param_1 + 0xd8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  else {
    FUN_147865e44((undefined8 *)(param_1 + 0xd0),iVar1,0);
    memcpy(*(void **)(param_1 + 0xd0),pvVar3,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  FUN_147865d1a(param_1 + 0xe0,param_2 + 0xe0);
  *(undefined2 *)(param_1 + 0x130) = *(undefined2 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x132) = *(undefined1 *)(param_2 + 0x132);
  return param_1;
}



// FUNCTION 1489d6ff2 FUN_1489d6ff2 body=114 status=ok
// SIG undefined FUN_1489d6ff2(void)

void FUN_1489d6ff2(longlong *param_1,int param_2)

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



// FUNCTION 1489d7064 FUN_1489d7064 body=181 status=ok
// SIG undefined FUN_1489d7064(void)

longlong FUN_1489d7064(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x80;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x80) == *param_3) {
          if (lVar3 != 0) goto LAB_1489d70fc;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x78);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1489d711a(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x80 + *param_1;
LAB_1489d70fc:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1489d711a FUN_1489d711a body=382 status=ok
// SIG undefined FUN_1489d711a(void)

undefined4 * FUN_1489d711a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_e8 [40];
  undefined4 local_c0 [2];
  undefined4 *local_b8;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88 [8];
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1457ca684(param_1,local_c0);
  local_a0 = &local_98;
  local_a8 = local_88;
  local_98 = 0;
  uStack_90 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_48 = 0;
  *local_b8 = *(undefined4 *)*param_4;
  *(undefined4 **)(local_b8 + 6) = local_b8 + 8;
  *(undefined4 **)(local_b8 + 4) = local_b8 + 0xc;
  local_b8[8] = 0;
  local_b8[9] = 0;
  local_b8[10] = 0;
  local_b8[0xb] = 0;
  puVar6 = local_a8;
  puVar7 = (undefined8 *)(local_b8 + 0xc);
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_b8[0x1c] = 0;
  local_b8[0x1e] = 0xffffffff;
  cVar1 = FUN_1457ca5f4(param_1,param_3,local_b8,local_c0);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar2) {
      uVar4 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_b8[0x1f] = param_3;
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      local_b8[0x1e] =
           *(undefined4 *)
            (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_c0[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1457ca76a(param_1);
    }
  }
  *param_2 = local_c0[0];
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d7299 FUN_1489d7299 body=174 status=ok
// SIG undefined FUN_1489d7299(void)

undefined8 *
FUN_1489d7299(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b453530;
  local_40 = *param_4;
  local_38 = param_4[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  local_48 = &local_40;
  FUN_1489d7348(puVar1 + 2,param_1,*param_2,*param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d7348 FUN_1489d7348 body=111 status=ok
// SIG undefined FUN_1489d7348(void)

longlong FUN_1489d7348(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_1489d73e0();
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x28) = param_4;
  *(undefined8 *)(param_1 + 0x30) = *param_5;
  lVar3 = param_5[1];
  *(longlong *)(param_1 + 0x38) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    plVar4 = (longlong *)param_5[1];
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
  return param_1;
}



// FUNCTION 1489d73c2 FUN_1489d73c2 body=29 status=ok
// SIG undefined FUN_1489d73c2(void)

undefined8 FUN_1489d73c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d73e0 FUN_1489d73e0 body=151 status=ok
// SIG undefined FUN_1489d73e0(void)

undefined8 * FUN_1489d73e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 2,iVar1,0);
    FUN_140b8566a(param_1[2],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1489d7478 FUN_1489d7478 body=61 status=ok
// SIG undefined FUN_1489d7478(void)

void FUN_1489d7478(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
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
  FUN_146567ab2(param_1);
  return;
}



// FUNCTION 1489d74b6 FUN_1489d74b6 body=266 status=ok
// SIG undefined FUN_1489d74b6(void)

undefined4 * FUN_1489d74b6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  uint *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1489d75c2(param_1,local_38);
  puVar1 = (undefined8 *)param_3[1];
  uVar3 = *(uint *)*param_3;
  *local_30 = uVar3;
  *(undefined8 *)(local_30 + 2) = *puVar1;
  lVar2 = puVar1[1];
  *(longlong *)(local_30 + 4) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    uVar3 = *local_30;
  }
  local_30[6] = 0xffffffff;
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar2 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
    local_30[7] = uVar3;
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    local_30[6] = *(uint *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3)
                                    * 4);
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar2 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_1489d76a8(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d75c2 FUN_1489d75c2 body=229 status=ok
// SIG undefined FUN_1489d75c2(void)

int * FUN_1489d75c2(longlong *param_1,int *param_2)

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



// FUNCTION 1489d76a8 FUN_1489d76a8 body=422 status=ok
// SIG undefined FUN_1489d76a8(void)

void FUN_1489d76a8(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 1489d7850 FUN_1489d7850 body=90 status=ok
// SIG undefined FUN_1489d7850(void)

void FUN_1489d7850(longlong *param_1,int param_2)

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
  FUN_1489d78aa();
  return;
}



// FUNCTION 1489d78aa FUN_1489d78aa body=192 status=ok
// SIG undefined FUN_1489d78aa(void)

void FUN_1489d78aa(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int iVar8;
  
  plVar7 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  lVar4 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar4 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x20 + 4) = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar7 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar5 = (byte)param_2 & 0x1f;
  puVar3 = (uint *)((longlong)plVar7 + (longlong)(iVar8 >> 5) * 4);
  *puVar3 = *puVar3 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  return;
}



// FUNCTION 1489d796a FUN_1489d796a body=121 status=ok
// SIG undefined FUN_1489d796a(void)

void FUN_1489d796a(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    uVar4 = (longlong)param_2 & (longlong)(int)param_1[9] - 1U;
    iVar1 = *(int *)((longlong)plVar2 + uVar4 * 4);
    if (iVar1 != -1) {
      piVar3 = (int *)((longlong)plVar2 + uVar4 * 4);
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1489d7850(param_1);
        }
        else {
          piVar3 = (int *)(*param_1 + (longlong)iVar1 * 0x20 + 0x18);
        }
        iVar1 = *piVar3;
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1489d79e4 FUN_1489d79e4 body=203 status=ok
// SIG undefined FUN_1489d79e4(void)

int FUN_1489d79e4(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1489d7a2e:
      lVar10 = (longlong)iVar1 * 0x68;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_1489d7aa4;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1489d7aa4;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1489d7a95;
    }
  }
  return -1;
LAB_1489d7aa4:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1489d7a95:
  iVar1 = *(int *)(lVar4 + 0x60 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1489d7a2e;
}



// FUNCTION 1489d7ab0 FUN_1489d7ab0 body=315 status=ok
// SIG undefined FUN_1489d7ab0(void)

undefined4 * FUN_1489d7ab0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1489d7bec(param_1,local_48);
  FUN_1489d7d50(param_3,local_40);
  *(undefined4 *)(local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_1489d7cce(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 100) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xc) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1489d7e46(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d7bec FUN_1489d7bec body=226 status=ok
// SIG undefined FUN_1489d7bec(void)

int * FUN_1489d7bec(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 1489d7cce FUN_1489d7cce body=130 status=ok
// SIG undefined FUN_1489d7cce(void)

undefined8 FUN_1489d7cce(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *_Dst;
  int iVar1;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1489d79e4(), iVar1 != -1)) {
    _Dst = (longlong *)(*param_1 + (longlong)iVar1 * 0x68);
    if (*(longlong *)(*param_1 + 0x28 + (longlong)iVar1 * 0x68) != 0) {
      FUN_1400020a8();
    }
    if (*_Dst != 0) {
      FUN_1400020a8();
    }
    memmove(_Dst,param_3,0x60);
    FUN_1489d7dd2(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1489d7d50 FUN_1489d7d50 body=130 status=ok
// SIG undefined FUN_1489d7d50(void)

void FUN_1489d7d50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar2 + 2);
  uVar3 = puVar2[1];
  param_2[2] = *puVar2;
  param_2[3] = uVar3;
  param_2[5] = puVar2[3];
  puVar2[3] = 0;
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)((longlong)puVar2 + 0x24);
  puVar2[4] = 0;
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(puVar2 + 5);
  *(undefined4 *)((longlong)param_2 + 0x3c) = *(undefined4 *)((longlong)puVar2 + 0x2c);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(puVar2 + 6);
  *(undefined8 *)((longlong)param_2 + 0x44) = *(undefined8 *)((longlong)puVar2 + 0x34);
  uVar3 = *(undefined8 *)((longlong)puVar2 + 0x44);
  *(undefined8 *)((longlong)param_2 + 0x4c) = *(undefined8 *)((longlong)puVar2 + 0x3c);
  *(undefined8 *)((longlong)param_2 + 0x54) = uVar3;
  return;
}



// FUNCTION 1489d7dd2 FUN_1489d7dd2 body=116 status=ok
// SIG undefined FUN_1489d7dd2(void)

void FUN_1489d7dd2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 1489d7e46 FUN_1489d7e46 body=476 status=ok
// SIG undefined FUN_1489d7e46(void)

void FUN_1489d7e46(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x68;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 100 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d8024 FUN_1489d8024 body=365 status=ok
// SIG undefined FUN_1489d8024(void)

undefined4 *
FUN_1489d8024(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146855940(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined1 *)param_3[1];
  *local_48 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_48 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined1 *)(local_48 + 2) = *puVar2;
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  if (*(int *)(local_48 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*local_48;
    iVar8 = *(int *)(local_48 + 1) + -1;
  }
  uVar4 = FUN_144a49b4a(iVar8,puVar7);
  local_68 = param_4;
  cVar3 = FUN_146855a26(param_1,uVar4,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_48 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_146855c6c(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489d8192 FUN_1489d8192 body=253 status=ok
// SIG undefined FUN_1489d8192(void)

void FUN_1489d8192(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_1489d8208:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x68);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x68);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_1489d8277;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_1489d8277;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_1489d827d;
      }
      if (iVar2 + iVar1 == 1) goto LAB_1489d827d;
      goto LAB_1489d8269;
    }
  }
  return;
LAB_1489d8277:
  if (uVar7 == uVar6) {
LAB_1489d827d:
    FUN_1489d8290(param_1);
    return;
  }
LAB_1489d8269:
  iVar2 = (int)plVar3[0xc];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_1489d8208;
}



// FUNCTION 1489d8290 FUN_1489d8290 body=87 status=ok
// SIG undefined FUN_1489d8290(void)

void FUN_1489d8290(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 100 + (longlong)param_2 * 0x68);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x60 + lVar5 * 0x68);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x68 + 0x60);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x68 + 0x60);
  FUN_1489d82e8();
  return;
}



// FUNCTION 1489d82e8 FUN_1489d82e8 body=71 status=ok
// SIG undefined FUN_1489d82e8(void)

void FUN_1489d82e8(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x28 + (longlong)param_2 * 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar1 + (longlong)param_2 * 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1489d7dd2(param_1,param_2);
  return;
}



// FUNCTION 1489d8330 FUN_1489d8330 body=265 status=ok
// SIG undefined FUN_1489d8330(void)

undefined4 FUN_1489d8330(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = (int)param_2[1];
    if (iVar1 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar2 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    iVar1 = FUN_144a49b4a(iVar2,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)iVar1 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      iVar2 = (int)param_2[1];
LAB_1489d83aa:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0xf0);
      iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0xf0);
      if (iVar1 == iVar2) {
        if (1 < iVar2) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_1489d8421;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_1489d8421;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_1489d8427;
      }
      if (iVar1 + iVar2 == 1) goto LAB_1489d8427;
      goto LAB_1489d840e;
    }
  }
  return 0;
LAB_1489d8421:
  if (uVar7 == uVar6) {
LAB_1489d8427:
    FUN_1489d843a(param_1);
    return 1;
  }
LAB_1489d840e:
  iVar1 = (int)plVar3[0x1c];
  if (iVar1 == -1) {
    return 0;
  }
  goto LAB_1489d83aa;
}



// FUNCTION 1489d843a FUN_1489d843a body=110 status=ok
// SIG undefined FUN_1489d843a(void)

void FUN_1489d843a(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xe4 + (longlong)param_2 * 0xf0);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0xe0 + lVar5 * 0xf0);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0xf0 + 0xe0);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0xf0 + 0xe0);
  FUN_1489d84a8(param_1,param_2,1);
  return;
}



// FUNCTION 1489d84a8 FUN_1489d84a8 body=99 status=ok
// SIG undefined FUN_1489d84a8(void)

void FUN_1489d84a8(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_2 * 0xf0 + *param_1);
    iVar1 = param_3;
    do {
      if (plVar2[3] != 0) {
        FUN_1400020a8();
      }
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 0x1e;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_1489d850c(param_1,param_2,param_3);
  return;
}



// FUNCTION 1489d850c FUN_1489d850c body=151 status=ok
// SIG undefined FUN_1489d850c(void)

void FUN_1489d850c(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0xf0 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xf0) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0x3c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1489d85bc FUN_1489d85bc body=29 status=ok
// SIG undefined FUN_1489d85bc(void)

undefined8 FUN_1489d85bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d85da FUN_1489d85da body=230 status=ok
// SIG undefined FUN_1489d85da(void)

undefined8 * FUN_1489d85da(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1489d86c2 FUN_1489d86c2 body=29 status=ok
// SIG undefined FUN_1489d86c2(void)

undefined8 FUN_1489d86c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d86fa FUN_1489d86fa body=29 status=ok
// SIG undefined FUN_1489d86fa(void)

bool FUN_1489d86fa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489d8718 FUN_1489d8718 body=26 status=ok
// SIG undefined FUN_1489d8718(void)

bool FUN_1489d8718(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489d8732 FUN_1489d8732 body=24 status=ok
// SIG undefined FUN_1489d8732(void)

bool FUN_1489d8732(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489d8756 FUN_1489d8756 body=93 status=ok
// SIG undefined FUN_1489d8756(void)

void FUN_1489d8756(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b453690;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b453620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d87b4 FUN_1489d87b4 body=93 status=ok
// SIG undefined FUN_1489d87b4(void)

void FUN_1489d87b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b453690;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b453620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d8812 FUN_1489d8812 body=126 status=ok
// SIG undefined FUN_1489d8812(void)

void FUN_1489d8812(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b453690;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b453620;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d8881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489d8890 FUN_1489d8890 body=40 status=ok
// SIG undefined FUN_1489d8890(void)

void FUN_1489d8890(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489d88b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1489d88b8 FUN_1489d88b8 body=149 status=ok
// SIG undefined FUN_1489d88b8(void)

bool FUN_1489d88b8(longlong param_1,undefined8 param_2)

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
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d8950 FUN_1489d8950 body=230 status=ok
// SIG undefined FUN_1489d8950(void)

undefined8 * FUN_1489d8950(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1489d8a38 FUN_1489d8a38 body=29 status=ok
// SIG undefined FUN_1489d8a38(void)

undefined8 FUN_1489d8a38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d8a70 FUN_1489d8a70 body=29 status=ok
// SIG undefined FUN_1489d8a70(void)

bool FUN_1489d8a70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489d8a8e FUN_1489d8a8e body=26 status=ok
// SIG undefined FUN_1489d8a8e(void)

bool FUN_1489d8a8e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489d8aa8 FUN_1489d8aa8 body=24 status=ok
// SIG undefined FUN_1489d8aa8(void)

bool FUN_1489d8aa8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489d8acc FUN_1489d8acc body=93 status=ok
// SIG undefined FUN_1489d8acc(void)

void FUN_1489d8acc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b453770;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b453700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d8b2a FUN_1489d8b2a body=93 status=ok
// SIG undefined FUN_1489d8b2a(void)

void FUN_1489d8b2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b453770;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b453700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d8b88 FUN_1489d8b88 body=126 status=ok
// SIG undefined FUN_1489d8b88(void)

void FUN_1489d8b88(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b453770;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b453700;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d8bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489d8c06 FUN_1489d8c06 body=40 status=ok
// SIG undefined FUN_1489d8c06(void)

void FUN_1489d8c06(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489d8c2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1489d8c2e FUN_1489d8c2e body=149 status=ok
// SIG undefined FUN_1489d8c2e(void)

bool FUN_1489d8c2e(longlong param_1,undefined8 param_2)

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
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d8cc6 FUN_1489d8cc6 body=29 status=ok
// SIG undefined FUN_1489d8cc6(void)

undefined8 FUN_1489d8cc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d8cfe FUN_1489d8cfe body=29 status=ok
// SIG undefined FUN_1489d8cfe(void)

bool FUN_1489d8cfe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1489d8d1c FUN_1489d8d1c body=26 status=ok
// SIG undefined FUN_1489d8d1c(void)

bool FUN_1489d8d1c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489d8d36 FUN_1489d8d36 body=24 status=ok
// SIG undefined FUN_1489d8d36(void)

bool FUN_1489d8d36(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489d8d4e FUN_1489d8d4e body=93 status=ok
// SIG undefined FUN_1489d8d4e(void)

void FUN_1489d8d4e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4537e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d8dac FUN_1489d8dac body=93 status=ok
// SIG undefined FUN_1489d8dac(void)

void FUN_1489d8dac(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4537e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d8e0a FUN_1489d8e0a body=126 status=ok
// SIG undefined FUN_1489d8e0a(void)

void FUN_1489d8e0a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4537e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d8e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489d8e88 FUN_1489d8e88 body=38 status=ok
// SIG undefined FUN_1489d8e88(void)

void FUN_1489d8e88(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001489d8eab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1489d8eae FUN_1489d8eae body=147 status=ok
// SIG undefined FUN_1489d8eae(void)

bool FUN_1489d8eae(longlong param_1,undefined4 param_2)

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
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d8f42 FUN_1489d8f42 body=324 status=ok
// SIG undefined FUN_1489d8f42(void)

longlong * FUN_1489d8f42(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x3a0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4538c0;
  plVar4 = plVar3 + 2;
  FUN_1489e258e(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_1489d90b0(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1489d9019;
    param_1[1] = 0;
LAB_1489d8fe3:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1489d9019;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_1489d9019;
      goto LAB_1489d8fe3;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1489d9019;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_1489d9019:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x390;
  FUN_140a52e78(*param_1,"SCohtmlInputForward",
                ".\\../Plugins/Runtime/Coherent/CohtmlPlugin/Source/CohtmlPlugin/Private/CohtmlInputActor.cpp"
                ,0x120);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d9088 FUN_1489d9088 body=9 status=ok
// SIG undefined FUN_1489d9088(void)

void FUN_1489d9088(longlong param_1)

{
  FUN_1489e265c(param_1 + 0x10);
  return;
}



// FUNCTION 1489d9092 FUN_1489d9092 body=29 status=ok
// SIG undefined FUN_1489d9092(void)

undefined8 FUN_1489d9092(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d90b0 FUN_1489d90b0 body=167 status=ok
// SIG undefined FUN_1489d90b0(void)

void FUN_1489d90b0(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1489d912b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1489d912b;
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
LAB_1489d912b:
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
                    /* WARNING: Could not recover jumptable at 0x0001489d914b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489d9158 FUN_1489d9158 body=204 status=ok
// SIG undefined FUN_1489d9158(void)

void FUN_1489d9158(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1489d91ab;
    }
  }
  lVar2 = 0;
LAB_1489d91ab:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1489d93a4(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d923a FUN_1489d923a body=48 status=ok
// SIG undefined FUN_1489d923a(void)

void FUN_1489d923a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1489d93a4 FUN_1489d93a4 body=442 status=ok
// SIG undefined FUN_1489d93a4(void)

void FUN_1489d93a4(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1489d94bc:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1489d94d4;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_1489d94bc;
LAB_1489d94d4:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_1489d9560(param_3,iVar3);
          }
          *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489d9560 FUN_1489d9560 body=132 status=ok
// SIG undefined FUN_1489d9560(void)

void FUN_1489d9560(longlong param_1,int param_2)

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



// FUNCTION 1489d95e6 FUN_1489d95e6 body=51 status=ok
// SIG undefined FUN_1489d95e6(void)

undefined8 FUN_1489d95e6(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)*param_2;
  plVar3 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_2[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(param_1,uVar2);
  return param_1;
}



// FUNCTION 1489d961a FUN_1489d961a body=132 status=ok
// SIG undefined FUN_1489d961a(void)

void FUN_1489d961a(longlong param_1,int param_2)

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



// FUNCTION 1489d96a0 FUN_1489d96a0 body=147 status=ok
// SIG undefined FUN_1489d96a0(void)

void FUN_1489d96a0(longlong param_1,int param_2)

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



// FUNCTION 1489d9734 FUN_1489d9734 body=132 status=ok
// SIG undefined FUN_1489d9734(void)

void FUN_1489d9734(longlong param_1,int param_2)

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



// FUNCTION 1489d97ba FUN_1489d97ba body=147 status=ok
// SIG undefined FUN_1489d97ba(void)

void FUN_1489d97ba(longlong param_1,int param_2)

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



// FUNCTION 1489d984e FUN_1489d984e body=48 status=ok
// SIG undefined FUN_1489d984e(void)

void FUN_1489d984e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1489d987e FUN_1489d987e body=48 status=ok
// SIG undefined FUN_1489d987e(void)

void FUN_1489d987e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1489d98ae FUN_1489d98ae body=48 status=ok
// SIG undefined FUN_1489d98ae(void)

void FUN_1489d98ae(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1489d98de FUN_1489d98de body=112 status=ok
// SIG undefined FUN_1489d98de(void)

void FUN_1489d98de(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 1489d994e FUN_1489d994e body=232 status=ok
// SIG undefined FUN_1489d994e(void)

undefined8 * FUN_1489d994e(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1447bda9e(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1489d9aca(param_1 + 2,iVar1);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 6);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 0x18);
  }
  return param_1;
}



// FUNCTION 1489d9a36 FUN_1489d9a36 body=147 status=ok
// SIG undefined FUN_1489d9a36(void)

void FUN_1489d9a36(longlong param_1,int param_2)

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



// FUNCTION 1489d9aca FUN_1489d9aca body=88 status=ok
// SIG undefined FUN_1489d9aca(void)

void FUN_1489d9aca(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 6,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 6)) {
    uVar3 = uVar1 >> 6 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x40,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1489d9b22 FUN_1489d9b22 body=31 status=ok
// SIG undefined FUN_1489d9b22(void)

undefined8 FUN_1489d9b22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d9b5e FUN_1489d9b5e body=93 status=ok
// SIG undefined FUN_1489d9b5e(void)

void FUN_1489d9b5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b453940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d9bbc FUN_1489d9bbc body=93 status=ok
// SIG undefined FUN_1489d9bbc(void)

void FUN_1489d9bbc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b453940;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d9c1a FUN_1489d9c1a body=126 status=ok
// SIG undefined FUN_1489d9c1a(void)

void FUN_1489d9c1a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca5b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b453940;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d9c89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489d9c98 FUN_1489d9c98 body=117 status=ok
// SIG undefined FUN_1489d9c98(void)

void FUN_1489d9c98(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_58 [40];
  undefined2 local_30 [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  local_30[0] = *param_3;
  local_28 = *(longlong *)(param_3 + 4);
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (*pcVar2)(uVar1,param_2,local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489d9d0e FUN_1489d9d0e body=98 status=ok
// SIG undefined FUN_1489d9d0e(void)

void FUN_1489d9d0e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1489d9d70 FUN_1489d9d70 body=52 status=ok
// SIG undefined FUN_1489d9d70(void)

void FUN_1489d9d70(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1489d9da4(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 1489d9da4 FUN_1489d9da4 body=156 status=ok
// SIG undefined FUN_1489d9da4(void)

undefined8 * FUN_1489d9da4(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



// FUNCTION 1489d9e40 FUN_1489d9e40 body=31 status=ok
// SIG undefined FUN_1489d9e40(void)

undefined8 FUN_1489d9e40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d9e7c FUN_1489d9e7c body=93 status=ok
// SIG undefined FUN_1489d9e7c(void)

void FUN_1489d9e7c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4539b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489d9eda FUN_1489d9eda body=126 status=ok
// SIG undefined FUN_1489d9eda(void)

void FUN_1489d9eda(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4539b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d9f49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489d9f58 FUN_1489d9f58 body=21 status=ok
// SIG undefined FUN_1489d9f58(void)

undefined8 FUN_1489d9f58(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1489d9fa4 FUN_1489d9fa4 body=23 status=ok
// SIG undefined FUN_1489d9fa4(void)

void FUN_1489d9fa4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001489d9fb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1489d9fbc FUN_1489d9fbc body=29 status=ok
// SIG undefined FUN_1489d9fbc(void)

undefined8 FUN_1489d9fbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489d9fda FUN_1489d9fda body=229 status=ok
// SIG undefined FUN_1489d9fda(void)

int * FUN_1489d9fda(longlong *param_1,int *param_2)

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



// FUNCTION 1489da0c0 FUN_1489da0c0 body=189 status=ok
// SIG undefined FUN_1489da0c0(void)

undefined8 FUN_1489da0c0(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(piVar3 + 4);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_1489da17e(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = piVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 1489da17e FUN_1489da17e body=114 status=ok
// SIG undefined FUN_1489da17e(void)

void FUN_1489da17e(longlong *param_1,int param_2)

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



// FUNCTION 1489da1f0 FUN_1489da1f0 body=422 status=ok
// SIG undefined FUN_1489da1f0(void)

void FUN_1489da1f0(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 1489da398 FUN_1489da398 body=110 status=ok
// SIG undefined FUN_1489da398(void)

void FUN_1489da398(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1489d324a(param_1 + 0x15);
  plVar2 = (longlong *)param_1[0x1d];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001489da3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}


