// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1483d228c FUN_1483d228c body=52 status=ok
// SIG undefined FUN_1483d228c(void)

undefined8 * FUN_1483d228c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae758d0;
  FUN_1483d2718(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483d22c4 FUN_1483d22c4 body=136 status=ok
// SIG undefined FUN_1483d22c4(void)

void FUN_1483d22c4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 8) == '\x01') {
    local_20 = &local_40;
    local_48 = &local_18;
    local_18 = 0;
    local_10 = 0;
    local_28 = &LAB_1483d2752;
    local_50 = 0;
    local_40 = param_3;
    local_38 = param_1;
    local_30 = param_2;
    FUN_1427ae281(L"ParallelFor Task",3,1);
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d234e FUN_1483d234e body=154 status=ok
// SIG undefined FUN_1483d234e(void)

void FUN_1483d234e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 8) == '\x01') {
    local_60 = local_30;
    local_30[0] = 0;
    local_48[0] = *param_3;
    local_68 = local_48;
    local_38 = param_3[1];
    local_58 = &local_69;
    local_50 = param_3;
    FUN_146de3bbc();
    FUN_1483d3152(param_1 + 0x10,param_2,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d23ea FUN_1483d23ea body=81 status=ok
// SIG undefined FUN_1483d23ea(void)

void FUN_1483d23ea(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 8) == '\x01') {
    local_18 = param_1 + 0x10;
    local_10 = param_2;
    FUN_1483d3982(param_3,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d243c FUN_1483d243c body=108 status=ok
// SIG undefined FUN_1483d243c(void)

void FUN_1483d243c(longlong param_1,undefined8 param_2)

{
  FUN_1483d424a(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 300) = 1;
  *(undefined4 *)(param_1 + 0x128) = 0;
  FUN_1483d424a(param_1 + 0x18,param_2);
  FUN_1483d42a2(param_1 + 0xf0,param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x12d) = 1;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



// FUNCTION 1483d24d2 FUN_1483d24d2 body=152 status=ok
// SIG undefined FUN_1483d24d2(void)

void FUN_1483d24d2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 8) == '\x01') {
    local_20 = &local_48;
    local_58 = &local_18;
    local_18 = 0;
    local_10 = 0;
    local_28 = &LAB_1483d4352;
    local_60 = 0;
    local_48 = param_4;
    local_40 = param_1;
    local_38 = param_3;
    local_30 = param_2;
    FUN_1427ae281(L"ParallelFor Task",3,1);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d256c FUN_1483d256c body=85 status=ok
// SIG undefined FUN_1483d256c(void)

void FUN_1483d256c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 8) == '\x01') {
    local_20 = param_1 + 0x10;
    local_18 = param_3;
    local_10 = param_2;
    FUN_1483d44ee(param_4,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d25c2 FUN_1483d25c2 body=85 status=ok
// SIG undefined FUN_1483d25c2(void)

void FUN_1483d25c2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 8) == '\x01') {
    local_20 = param_1 + 0x10;
    local_18 = param_3;
    local_10 = param_2;
    FUN_1483d458a(param_4,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d2618 FUN_1483d2618 body=109 status=ok
// SIG undefined FUN_1483d2618(void)

undefined1 * FUN_1483d2618(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_146de45bc(param_1,0,0);
  param_1[0x48] = 0;
  param_1[0xd0] = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_1483d2686(param_1 + 0x48,param_1);
  return param_1;
}



// FUNCTION 1483d2686 FUN_1483d2686 body=146 status=ok
// SIG undefined FUN_1483d2686(void)

void FUN_1483d2686(undefined1 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  
  puVar7 = *(undefined1 **)(param_2 + 0x18);
  if (puVar7 == (undefined1 *)0x0) {
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    uVar1 = FUN_146de5690(param_2);
    lVar2 = *(longlong *)(param_2 + 8) * *(longlong *)(param_2 + 0x10);
    puVar7 = param_1 + 0x18;
    uVar3 = 1;
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    uVar1 = FUN_146de5690(param_2);
    uVar3 = *(undefined8 *)(param_2 + 8);
    lVar2 = *(longlong *)(param_2 + 0x10);
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined1 **)(param_1 + 0x20) = puVar7;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  return;
}



// FUNCTION 1483d2718 FUN_1483d2718 body=58 status=ok
// SIG undefined FUN_1483d2718(void)

void FUN_1483d2718(longlong param_1)

{
  FUN_1400020a8(*(undefined8 *)(param_1 + 0xe0));
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    FUN_146de5508(param_1 + 0x90);
  }
  FUN_146de5508(param_1 + 8);
  return;
}



// FUNCTION 1483d275a FUN_1483d275a body=246 status=ok
// SIG undefined FUN_1483d275a(void)

void FUN_1483d275a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [39];
  undefined1 local_a1;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_60;
  longlong local_58;
  undefined8 local_40 [2];
  longlong local_30;
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_60 = 0;
  lVar1 = (ulonglong)(param_2 != 1) * 0x10 + 0x10;
  if (param_2 == 0) {
    lVar1 = local_60;
  }
  lVar2 = (longlong)*(int *)(param_1[2] + 8 + lVar1);
  local_58 = 0;
  if (0 < lVar2) {
    local_60 = *(longlong *)(param_1[2] + lVar1);
    local_58 = lVar2;
  }
  lVar2 = param_1[1];
  lVar3 = (longlong)*(int *)(*param_1 + 8 + lVar1);
  local_80 = 0;
  local_78 = 0;
  if (0 < lVar3) {
    local_80 = *(undefined8 *)(*param_1 + lVar1);
    local_78 = lVar3;
  }
  local_98 = local_28;
  local_28[0] = 0;
  local_a0 = local_40;
  local_90 = &local_a1;
  local_88 = &local_80;
  local_40[0] = local_80;
  local_30 = local_78;
  FUN_146de3bbc();
  FUN_1483d2852(lVar2 + 0x10,&local_60,&local_80);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d2852 FUN_1483d2852 body=174 status=ok
// SIG undefined FUN_1483d2852(void)

void FUN_1483d2852(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 < 0) {
    lVar1 = *(longlong *)(param_1 + 0x58) * 2;
  }
  local_38 = param_1 + 0x110;
  *(longlong *)(param_1 + 0x110) = lVar1;
  local_30 = param_1 + 0x108;
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x100);
  local_18 = param_1 + 0x50;
  local_20[0] = 0;
  FUN_1483d2901(local_20,param_2,param_3,param_1 + 0xe0);
  *(uint *)(param_1 + 0x118) =
       (uint)(*(double *)(param_1 + 0x100) < *(double *)(param_1 + 0x108)) * 2;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d2901 FUN_1483d2901 body=1570 status=ok
// SIG undefined FUN_1483d2901(void)

void FUN_1483d2901(longlong *param_1,longlong *param_2,longlong ****param_3,longlong ***param_4,
                  longlong *param_5,double *param_6)

{
  longlong ****pppplVar1;
  double dVar2;
  longlong ****pppplVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  longlong local_198;
  longlong **local_190;
  undefined8 local_188;
  longlong ***ppplStack_180;
  longlong ***local_178;
  longlong ***ppplStack_170;
  longlong ***local_160;
  longlong ***local_158;
  undefined8 ***local_150;
  longlong local_148;
  undefined1 local_139;
  longlong **local_138;
  longlong ***ppplStack_130;
  longlong ***ppplStack_128;
  longlong ***local_120;
  longlong ***local_118;
  undefined8 *local_110;
  double dStack_108;
  longlong ***local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong **local_f0;
  longlong **local_d8;
  longlong ***local_d0;
  longlong ***local_c8;
  longlong ***local_c0;
  longlong **local_b8 [2];
  longlong **local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  dVar8 = *param_6;
  local_198 = *param_5;
  pppplVar1 = *(longlong *****)(param_1[1] + 0x10);
  local_120 = (longlong ***)param_2[2];
  ppplStack_130 = (longlong ***)*param_2;
  ppplStack_128 = (longlong ***)param_2[1];
  local_110 = (undefined8 *)*param_1;
  dStack_108 = (double)param_1[1];
  local_100 = *param_3;
  uStack_f8 = *(undefined4 *)(param_3 + 1);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_f0 = (longlong **)param_3[2];
  local_190 = (longlong **)param_4;
  FUN_1483d2f24(&local_150,&local_138);
  ppplStack_130 = (longlong ***)*param_2;
  ppplStack_128 = (longlong ***)param_2[1];
  local_120 = (longlong ***)param_2[2];
  if ((longlong ****)ppplStack_128 != (longlong ****)0x0) {
    local_d0 = ppplStack_130;
    local_c0 = ppplStack_128;
    dVar5 = (double)FUN_146de3dda(&local_d8,local_b8);
    dVar7 = 0.0;
    if ((dVar5 != 0.0) || (NAN(dVar5))) {
      dVar8 = dVar8 * dVar8 * dVar5;
      dVar2 = 2.2250738585072014e-308;
      if (2.2250738585072014e-308 <= dVar8) {
        dVar2 = dVar8;
      }
      ppplStack_130 = (longlong ***)&local_150;
      if (local_148 != 0) {
        local_d0 = local_150;
        dVar7 = (double)FUN_146de3ea2(&local_d8,local_b8,&local_138);
      }
      if (dVar7 < dVar2) {
        *param_5 = 0;
        dVar7 = dVar7 / dVar5;
        if (dVar7 < 0.0) {
          dVar7 = sqrt(dVar7);
        }
        else {
          dVar7 = SQRT(dVar7);
        }
        *param_6 = dVar7;
      }
      else {
        local_160 = (longlong ***)0x0;
        if (0 < (longlong)pppplVar1) {
          local_160 = (longlong ***)FUN_146de3b53(pppplVar1);
        }
        local_138 = local_190;
        local_158 = (longlong ***)pppplVar1;
        ppplStack_130 = (longlong ***)&local_150;
        FUN_146de3f6e(&local_160,&local_138,&local_d8);
        local_178 = (longlong ***)0x0;
        ppplStack_170 = (longlong ***)0x0;
        pppplVar3 = (longlong ****)ppplStack_170;
        if ((pppplVar1 == (longlong ****)0x0) || (pppplVar3 = pppplVar1, (longlong)pppplVar1 < 1)) {
          ppplStack_170 = (longlong ***)pppplVar3;
          local_188 = 0;
        }
        else {
          local_178 = (longlong ***)FUN_146de3b53(pppplVar1);
          ppplStack_180 = (longlong ***)0x0;
          ppplStack_170 = (longlong ***)pppplVar1;
          local_188 = FUN_146de3b53(pppplVar1);
        }
        ppplStack_128 = (longlong ***)&local_160;
        dVar8 = 0.0;
        ppplStack_180 = (longlong ***)pppplVar1;
        ppplStack_130 = (longlong ***)&local_150;
        if ((longlong ****)local_158 != (longlong ****)0x0) {
          local_d0 = local_150;
          local_c8 = local_160;
          dVar8 = (double)FUN_146de40ee(&local_d8,local_b8,&local_138);
        }
        if (local_198 < 1) {
          lVar4 = 0;
        }
        else {
          local_1a0 = 0;
          do {
            local_138 = (longlong **)*param_1;
            ppplStack_130 = (longlong ***)param_1[1];
            ppplStack_128 = (longlong ***)&local_160;
            FUN_1483d303c(&local_188,&local_138);
            dVar7 = 0.0;
            dVar6 = 0.0;
            ppplStack_128 = (longlong ***)&local_188;
            if ((longlong ****)ppplStack_180 != (longlong ****)0x0) {
              local_d0 = local_160;
              local_c8 = (longlong ***)local_188;
              ppplStack_130 = (longlong ***)&local_160;
              dVar6 = (double)FUN_146de40ee(&local_d8,local_b8,&local_138);
            }
            local_120 = local_160;
            local_b8[0] = (longlong **)*param_3;
            local_a8 = (longlong **)param_3[1];
            local_c8 = (longlong ***)&local_139;
            ppplStack_130 = (longlong ***)(dVar8 / dVar6);
            local_d8 = (longlong **)local_b8;
            local_d0 = &local_138;
            local_c0 = (longlong ***)param_3;
            FUN_146de42ce(&local_d8);
            ppplStack_128 = ppplStack_180;
            local_110 = &local_188;
            local_118 = (longlong ***)(dVar8 / dVar6);
            FUN_146de43a1(&local_150,&local_138,&local_d8);
            ppplStack_130 = (longlong ***)&local_150;
            if (local_148 != 0) {
              local_d0 = local_150;
              dVar7 = (double)FUN_146de3ea2(&local_d8,local_b8,&local_138);
            }
            lVar4 = local_1a0;
            if (dVar7 < dVar2) break;
            local_138 = local_190;
            ppplStack_130 = (longlong ***)&local_150;
            FUN_146de3f6e(&local_178,&local_138,&local_d8);
            dVar6 = 0.0;
            ppplStack_128 = (longlong ***)&local_178;
            if ((longlong ****)ppplStack_170 != (longlong ****)0x0) {
              local_d0 = local_150;
              local_c8 = local_178;
              ppplStack_130 = (longlong ***)&local_150;
              dVar6 = (double)FUN_146de40ee(&local_d8,local_b8,&local_138);
            }
            dStack_108 = dVar6 / dVar8;
            ppplStack_130 = (longlong ***)&local_178;
            local_118 = local_158;
            local_100 = (longlong ***)&local_160;
            FUN_146de448c(local_100,&local_138,&local_d8);
            local_1a0 = local_1a0 + 1;
            lVar4 = local_198;
            dVar8 = dVar6;
          } while (local_198 != local_1a0);
        }
        dVar7 = dVar7 / dVar5;
        if (dVar7 < 0.0) {
          dVar7 = sqrt(dVar7);
        }
        else {
          dVar7 = SQRT(dVar7);
        }
        *param_6 = dVar7;
        *param_5 = lVar4;
        FUN_1400020a8(local_188);
        FUN_1400020a8(local_178);
        FUN_1400020a8(local_160);
      }
      goto LAB_1483d2a3d;
    }
  }
  ppplStack_130 = local_b8;
  local_b8[0] = (longlong **)0x0;
  local_d8 = (longlong **)*param_3;
  local_138 = (longlong **)&local_d8;
  local_c8 = param_3[1];
  ppplStack_128 = (longlong ***)&local_160;
  local_120 = (longlong ***)param_3;
  FUN_146de3bbc();
  *param_5 = 0;
  *param_6 = 0.0;
LAB_1483d2a3d:
  FUN_1400020a8(local_150);
  if ((local_a0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483d2f24 FUN_1483d2f24 body=143 status=ok
// SIG undefined FUN_1483d2f24(void)

undefined8 * FUN_1483d2f24(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146de3c6e(0,*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8),1);
  FUN_146de3ce5(param_1,param_2 + 8,&local_28);
  local_28 = 0xbff0000000000000;
  FUN_1483d2fb4(param_1,param_2 + 0x28,param_2 + 0x38,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d2fb4 FUN_1483d2fb4 body=136 status=ok
// SIG undefined FUN_1483d2fb4(void)

void FUN_1483d2fb4(longlong *param_1,longlong param_2,longlong *param_3,double *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(lVar1 + 8);
  if (0 < lVar2) {
    lVar3 = *param_3;
    lVar5 = 0;
    do {
      lVar6 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x20) + lVar5 * 4);
      if (*(longlong *)(lVar1 + 0x38) == 0) {
        lVar4 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x20) + 4 + lVar5 * 4);
      }
      else {
        lVar4 = *(int *)(*(longlong *)(lVar1 + 0x38) + lVar5 * 4) + lVar6;
      }
      dVar7 = 0.0;
      if (lVar6 < lVar4) {
        do {
          dVar7 = dVar7 + *(double *)(*(longlong *)(lVar1 + 0x30) + lVar6 * 8) *
                          *(double *)
                           (lVar3 + (longlong)*(int *)(*(longlong *)(lVar1 + 0x28) + lVar6 * 4) * 8)
          ;
          lVar6 = lVar6 + 1;
        } while (lVar4 != lVar6);
      }
      *(double *)(*param_1 + lVar5 * 8) = dVar7 * *param_4 + *(double *)(*param_1 + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar2);
  }
  return;
}



// FUNCTION 1483d303c FUN_1483d303c body=61 status=ok
// SIG undefined FUN_1483d303c(void)

void FUN_1483d303c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 8);
  if (*(longlong *)(param_1 + 8) != lVar1) {
    FUN_146de3c6e(param_1,lVar1,1);
  }
  FUN_1483d307a(param_1,param_2,*(undefined8 *)(param_2 + 0x10));
  return;
}



// FUNCTION 1483d307a FUN_1483d307a body=215 status=ok
// SIG undefined FUN_1483d307a(void)

void FUN_1483d307a(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined1 local_48 [8];
  longlong local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_1[1];
  local_30 = 0;
  FUN_146de41cc(param_1,local_48,&local_49);
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(lVar1 + 8);
  if (0 < lVar2) {
    lVar3 = 0;
    do {
      lVar4 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x20) + lVar3 * 4);
      if (*(longlong *)(lVar1 + 0x38) == 0) {
        lVar5 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x20) + 4 + lVar3 * 4);
      }
      else {
        lVar5 = *(int *)(*(longlong *)(lVar1 + 0x38) + lVar3 * 4) + lVar4;
      }
      dVar6 = 0.0;
      if (lVar4 < lVar5) {
        do {
          dVar6 = dVar6 + *(double *)(*(longlong *)(lVar1 + 0x30) + lVar4 * 8) *
                          *(double *)
                           (*param_3 +
                           (longlong)*(int *)(*(longlong *)(lVar1 + 0x28) + lVar4 * 4) * 8);
          lVar4 = lVar4 + 1;
        } while (lVar5 != lVar4);
      }
      *(double *)(*param_1 + lVar3 * 8) = dVar6 + *(double *)(*param_1 + lVar3 * 8);
      lVar3 = lVar3 + 1;
    } while (lVar3 != lVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483d3152 FUN_1483d3152 body=174 status=ok
// SIG undefined FUN_1483d3152(void)

void FUN_1483d3152(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 < 0) {
    lVar1 = *(longlong *)(param_1 + 0x58) * 2;
  }
  local_38 = param_1 + 0x110;
  *(longlong *)(param_1 + 0x110) = lVar1;
  local_30 = param_1 + 0x108;
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x100);
  local_18 = param_1 + 0x50;
  local_20[0] = 0;
  FUN_1483d3201(local_20,param_2,param_3,param_1 + 0xe0);
  *(uint *)(param_1 + 0x118) =
       (uint)(*(double *)(param_1 + 0x100) < *(double *)(param_1 + 0x108)) * 2;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d3201 FUN_1483d3201 body=1576 status=ok
// SIG undefined FUN_1483d3201(void)

void FUN_1483d3201(longlong *param_1,longlong *param_2,longlong ****param_3,longlong ***param_4,
                  longlong *param_5,double *param_6)

{
  longlong ****pppplVar1;
  double dVar2;
  longlong ****pppplVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  longlong local_198;
  longlong **local_190;
  undefined8 local_188;
  longlong ***ppplStack_180;
  longlong ***local_178;
  longlong ***ppplStack_170;
  longlong ***local_160;
  longlong ***local_158;
  undefined8 ***local_150;
  longlong local_148;
  undefined1 local_139;
  longlong **local_138;
  longlong ***ppplStack_130;
  longlong ***ppplStack_128;
  longlong ***local_120;
  longlong ***local_118;
  undefined8 *local_110;
  double dStack_108;
  longlong ***local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong **local_f0;
  longlong **local_d8;
  longlong ***local_d0;
  longlong ***local_c8;
  longlong ***local_c0;
  longlong **local_b8 [2];
  longlong **local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  dVar8 = *param_6;
  local_198 = *param_5;
  pppplVar1 = *(longlong *****)(param_1[1] + 0x10);
  local_120 = (longlong ***)param_2[2];
  ppplStack_130 = (longlong ***)*param_2;
  ppplStack_128 = (longlong ***)param_2[1];
  local_110 = (undefined8 *)*param_1;
  dStack_108 = (double)param_1[1];
  local_100 = *param_3;
  uStack_f8 = *(undefined4 *)(param_3 + 1);
  uStack_f4 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_f0 = (longlong **)param_3[2];
  local_190 = (longlong **)param_4;
  FUN_1483d382a(&local_150,&local_138);
  ppplStack_130 = (longlong ***)*param_2;
  ppplStack_128 = (longlong ***)param_2[1];
  local_120 = (longlong ***)param_2[2];
  if ((longlong ****)ppplStack_128 != (longlong ****)0x0) {
    local_d0 = ppplStack_130;
    local_c0 = ppplStack_128;
    dVar5 = (double)FUN_1483d38ba();
    dVar7 = 0.0;
    if ((dVar5 != 0.0) || (NAN(dVar5))) {
      dVar8 = dVar8 * dVar8 * dVar5;
      dVar2 = 2.2250738585072014e-308;
      if (2.2250738585072014e-308 <= dVar8) {
        dVar2 = dVar8;
      }
      ppplStack_130 = (longlong ***)&local_150;
      if (local_148 != 0) {
        local_d0 = local_150;
        dVar7 = (double)FUN_146de3ea2(&local_d8,local_b8,&local_138);
      }
      if (dVar7 < dVar2) {
        *param_5 = 0;
        dVar7 = dVar7 / dVar5;
        if (dVar7 < 0.0) {
          dVar7 = sqrt(dVar7);
        }
        else {
          dVar7 = SQRT(dVar7);
        }
        *param_6 = dVar7;
      }
      else {
        local_160 = (longlong ***)0x0;
        if (0 < (longlong)pppplVar1) {
          local_160 = (longlong ***)FUN_146de3b53(pppplVar1);
        }
        local_138 = local_190;
        local_158 = (longlong ***)pppplVar1;
        ppplStack_130 = (longlong ***)&local_150;
        FUN_146de3f6e(&local_160,&local_138,&local_d8);
        local_178 = (longlong ***)0x0;
        ppplStack_170 = (longlong ***)0x0;
        pppplVar3 = (longlong ****)ppplStack_170;
        if ((pppplVar1 == (longlong ****)0x0) || (pppplVar3 = pppplVar1, (longlong)pppplVar1 < 1)) {
          ppplStack_170 = (longlong ***)pppplVar3;
          local_188 = 0;
        }
        else {
          local_178 = (longlong ***)FUN_146de3b53(pppplVar1);
          ppplStack_180 = (longlong ***)0x0;
          ppplStack_170 = (longlong ***)pppplVar1;
          local_188 = FUN_146de3b53(pppplVar1);
        }
        dVar8 = 0.0;
        ppplStack_180 = (longlong ***)pppplVar1;
        ppplStack_130 = (longlong ***)&local_150;
        ppplStack_128 = (longlong ***)&local_160;
        if ((longlong ****)local_158 != (longlong ****)0x0) {
          local_d0 = local_150;
          local_c8 = local_160;
          dVar8 = (double)FUN_146de40ee(&local_d8,local_b8,&local_138);
        }
        if (local_198 < 1) {
          lVar4 = 0;
        }
        else {
          local_1a0 = 0;
          do {
            local_138 = (longlong **)*param_1;
            ppplStack_130 = (longlong ***)param_1[1];
            ppplStack_128 = (longlong ***)&local_160;
            FUN_1483d303c(&local_188,&local_138);
            dVar7 = 0.0;
            dVar6 = 0.0;
            ppplStack_128 = (longlong ***)&local_188;
            if ((longlong ****)ppplStack_180 != (longlong ****)0x0) {
              local_d0 = local_160;
              local_c8 = (longlong ***)local_188;
              ppplStack_130 = (longlong ***)&local_160;
              dVar6 = (double)FUN_146de40ee(&local_d8,local_b8,&local_138);
            }
            local_120 = local_160;
            local_b8[0] = (longlong **)*param_3;
            local_a8 = (longlong **)param_3[1];
            local_c8 = (longlong ***)&local_139;
            ppplStack_130 = (longlong ***)(dVar8 / dVar6);
            local_d8 = (longlong **)local_b8;
            local_d0 = &local_138;
            local_c0 = (longlong ***)param_3;
            FUN_146de42ce(&local_d8);
            ppplStack_128 = ppplStack_180;
            local_118 = (longlong ***)(dVar8 / dVar6);
            local_110 = &local_188;
            FUN_146de43a1(&local_150,&local_138,&local_d8);
            ppplStack_130 = (longlong ***)&local_150;
            if (local_148 != 0) {
              local_d0 = local_150;
              dVar7 = (double)FUN_146de3ea2(&local_d8,local_b8,&local_138);
            }
            lVar4 = local_1a0;
            if (dVar7 < dVar2) break;
            local_138 = local_190;
            ppplStack_130 = (longlong ***)&local_150;
            FUN_146de3f6e(&local_178,&local_138,&local_d8);
            dVar6 = 0.0;
            ppplStack_128 = (longlong ***)&local_178;
            if ((longlong ****)ppplStack_170 != (longlong ****)0x0) {
              local_d0 = local_150;
              local_c8 = local_178;
              ppplStack_130 = (longlong ***)&local_150;
              dVar6 = (double)FUN_146de40ee(&local_d8,local_b8,&local_138);
            }
            dStack_108 = dVar6 / dVar8;
            ppplStack_130 = (longlong ***)&local_178;
            local_118 = local_158;
            local_100 = (longlong ***)&local_160;
            FUN_146de448c(local_100,&local_138,&local_d8);
            local_1a0 = local_1a0 + 1;
            lVar4 = local_198;
            dVar8 = dVar6;
          } while (local_198 != local_1a0);
        }
        dVar7 = dVar7 / dVar5;
        if (dVar7 < 0.0) {
          dVar7 = sqrt(dVar7);
        }
        else {
          dVar7 = SQRT(dVar7);
        }
        *param_6 = dVar7;
        *param_5 = lVar4;
        FUN_1400020a8(local_188);
        FUN_1400020a8(local_178);
        FUN_1400020a8(local_160);
      }
      goto LAB_1483d333d;
    }
  }
  ppplStack_130 = local_b8;
  local_b8[0] = (longlong **)0x0;
  local_d8 = (longlong **)*param_3;
  local_138 = (longlong **)&local_d8;
  local_c8 = param_3[1];
  ppplStack_128 = (longlong ***)&local_160;
  local_120 = (longlong ***)param_3;
  FUN_146de3bbc();
  *param_5 = 0;
  *param_6 = 0.0;
LAB_1483d333d:
  FUN_1400020a8(local_150);
  if ((local_a0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483d382a FUN_1483d382a body=143 status=ok
// SIG undefined FUN_1483d382a(void)

undefined8 * FUN_1483d382a(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146de3c6e(0,*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8),1);
  FUN_1483cf981(param_1,param_2 + 8,&local_28);
  local_28 = 0xbff0000000000000;
  FUN_1483d2fb4(param_1,param_2 + 0x28,param_2 + 0x38,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d38ba FUN_1483d38ba body=199 status=ok
// SIG undefined FUN_1483d38ba(void)

double FUN_1483d38ba(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  uVar8 = uVar1 + 3;
  if (-1 < (longlong)uVar1) {
    uVar8 = uVar1;
  }
  pdVar2 = *(double **)(param_1 + 8);
  if (uVar1 + 1 < 3) {
    dVar10 = *pdVar2 * *pdVar2;
  }
  else {
    uVar7 = uVar1 - ((longlong)uVar1 >> 0x3f) & 0xfffffffffffffffe;
    dVar10 = *pdVar2 * *pdVar2;
    dVar11 = pdVar2[1] * pdVar2[1];
    if (3 < (longlong)uVar1) {
      uVar8 = uVar8 & 0xfffffffffffffffc;
      dVar12 = pdVar2[2] * pdVar2[2];
      dVar13 = pdVar2[3] * pdVar2[3];
      if (7 < uVar1) {
        lVar9 = 4;
        do {
          dVar3 = pdVar2[lVar9];
          dVar4 = (pdVar2 + lVar9)[1];
          dVar5 = pdVar2[lVar9 + 2];
          dVar6 = (pdVar2 + lVar9 + 2)[1];
          dVar10 = dVar10 + dVar3 * dVar3;
          dVar11 = dVar11 + dVar4 * dVar4;
          dVar12 = dVar12 + dVar5 * dVar5;
          dVar13 = dVar13 + dVar6 * dVar6;
          lVar9 = lVar9 + 4;
        } while (lVar9 < (longlong)uVar8);
      }
      dVar10 = dVar12 + dVar10;
      dVar11 = dVar13 + dVar11;
      if ((longlong)uVar8 < (longlong)uVar7) {
        dVar12 = pdVar2[uVar8];
        dVar13 = (pdVar2 + uVar8)[1];
        dVar10 = dVar10 + dVar12 * dVar12;
        dVar11 = dVar11 + dVar13 * dVar13;
      }
    }
    dVar10 = dVar10 + dVar11;
    if ((longlong)uVar7 < (longlong)uVar1) {
      do {
        dVar10 = dVar10 + pdVar2[uVar7] * pdVar2[uVar7];
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
  }
  return dVar10;
}



// FUNCTION 1483d3982 FUN_1483d3982 body=143 status=ok
// SIG undefined FUN_1483d3982(void)

void FUN_1483d3982(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_2;
  local_38 = *(longlong *)(lVar2 + 0x58);
  if (*(longlong *)(param_1 + 8) != local_38) {
    FUN_146de3c6e(param_1,local_38,1);
    lVar2 = *param_2;
    local_38 = *(longlong *)(param_1 + 8);
  }
  lVar1 = param_2[1];
  local_28 = 0;
  FUN_146de41cc(param_1,local_40,&local_41);
  FUN_1483d3a12(lVar2,lVar1,param_1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d3a12 FUN_1483d3a12 body=174 status=ok
// SIG undefined FUN_1483d3a12(void)

void FUN_1483d3a12(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 < 0) {
    lVar1 = *(longlong *)(param_1 + 0x58) * 2;
  }
  local_38 = param_1 + 0x110;
  *(longlong *)(param_1 + 0x110) = lVar1;
  local_30 = param_1 + 0x108;
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x100);
  local_18 = param_1 + 0x50;
  local_20[0] = 0;
  FUN_1483d3ac1(local_20,param_2,param_3,param_1 + 0xe0);
  *(uint *)(param_1 + 0x118) =
       (uint)(*(double *)(param_1 + 0x100) < *(double *)(param_1 + 0x108)) * 2;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d3ac1 FUN_1483d3ac1 body=1443 status=ok
// SIG undefined FUN_1483d3ac1(void)

void FUN_1483d3ac1(double *param_1,undefined8 *param_2,undefined8 *param_3,double param_4,
                  longlong *param_5,double *param_6)

{
  undefined8 *puVar1;
  double dVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_198 [40];
  longlong local_170;
  double local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 *puStack_150;
  undefined8 local_148;
  undefined8 *puStack_140;
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined1 local_109;
  double local_108;
  undefined8 *puStack_100;
  undefined8 *local_f8;
  double dStack_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  double local_d8;
  undefined8 *local_d0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  dVar9 = *param_6;
  local_170 = *param_5;
  puVar1 = *(undefined8 **)((longlong)param_1[1] + 0x10);
  local_f8 = (undefined8 *)*param_1;
  dStack_f0 = param_1[1];
  local_168 = param_4;
  puStack_100 = param_2;
  local_e8 = param_3;
  FUN_1483d4066(&local_120,&local_108);
  if (param_2[1] != 0) {
    local_b0 = *param_2;
    puStack_100 = param_2;
    dVar6 = (double)FUN_146de3ea2(local_b8,&local_130,&local_108);
    dVar8 = 0.0;
    if ((dVar6 != 0.0) || (NAN(dVar6))) {
      dVar9 = dVar9 * dVar9 * dVar6;
      dVar2 = 2.2250738585072014e-308;
      if (2.2250738585072014e-308 <= dVar9) {
        dVar2 = dVar9;
      }
      puStack_100 = &local_120;
      if (local_118 != 0) {
        local_b0 = local_120;
        dVar8 = (double)FUN_146de3ea2(local_b8,&local_130,&local_108);
      }
      if (dVar8 < dVar2) {
        *param_5 = 0;
        dVar8 = dVar8 / dVar6;
        if (dVar8 < 0.0) {
          dVar8 = sqrt(dVar8);
        }
        else {
          dVar8 = SQRT(dVar8);
        }
        *param_6 = dVar8;
      }
      else {
        local_130 = 0;
        if (0 < (longlong)puVar1) {
          local_130 = FUN_146de3b53(puVar1);
        }
        local_108 = local_168;
        local_128 = puVar1;
        puStack_100 = &local_120;
        FUN_146de3f6e(&local_130,&local_108,local_b8);
        local_148 = 0;
        puStack_140 = (undefined8 *)0x0;
        puVar3 = puStack_140;
        if ((puVar1 == (undefined8 *)0x0) || (puVar3 = puVar1, (longlong)puVar1 < 1)) {
          puStack_140 = puVar3;
          local_158 = 0;
        }
        else {
          local_148 = FUN_146de3b53(puVar1);
          puStack_150 = (undefined8 *)0x0;
          puStack_140 = puVar1;
          local_158 = FUN_146de3b53(puVar1);
        }
        dVar9 = 0.0;
        puStack_150 = puVar1;
        puStack_100 = &local_120;
        local_f8 = &local_130;
        if (local_128 != (undefined8 *)0x0) {
          local_b0 = local_120;
          local_a8 = local_130;
          dVar9 = (double)FUN_146de40ee(local_b8,&local_109,&local_108);
        }
        if (local_170 < 1) {
          lVar5 = 0;
        }
        else {
          lVar4 = 0;
          do {
            local_108 = *param_1;
            puStack_100 = (undefined8 *)param_1[1];
            local_160 = lVar4;
            local_f8 = &local_130;
            FUN_1483d303c(&local_158,&local_108);
            dVar8 = 0.0;
            dVar7 = 0.0;
            puStack_100 = &local_130;
            if (puStack_150 != (undefined8 *)0x0) {
              local_b0 = local_130;
              local_a8 = local_158;
              local_f8 = &local_158;
              dVar7 = (double)FUN_146de40ee(local_b8,&local_109,&local_108);
            }
            local_f8 = local_128;
            local_e0 = &local_130;
            local_e8 = (undefined8 *)(dVar9 / dVar7);
            FUN_1483d4167(param_3,&local_108,local_b8);
            local_f8 = puStack_150;
            local_e0 = &local_158;
            local_e8 = (undefined8 *)(dVar9 / dVar7);
            FUN_146de43a1(&local_120,&local_108,local_b8);
            puStack_100 = &local_120;
            if (local_118 != 0) {
              local_b0 = local_120;
              dVar8 = (double)FUN_146de3ea2(local_b8,&local_109,&local_108);
            }
            lVar4 = local_160;
            lVar5 = local_160;
            if (dVar8 < dVar2) break;
            local_108 = local_168;
            puStack_100 = &local_120;
            FUN_146de3f6e(&local_148,&local_108,local_b8);
            local_f8 = &local_148;
            dVar7 = 0.0;
            if (puStack_140 != (undefined8 *)0x0) {
              local_b0 = local_120;
              local_a8 = local_148;
              puStack_100 = &local_120;
              dVar7 = (double)FUN_146de40ee(local_b8,&local_109,&local_108);
            }
            local_d8 = dVar7 / dVar9;
            puStack_100 = &local_148;
            local_e8 = local_128;
            local_d0 = &local_130;
            FUN_146de448c(local_d0,&local_108,local_b8);
            lVar4 = lVar4 + 1;
            lVar5 = local_170;
            dVar9 = dVar7;
          } while (local_170 != lVar4);
        }
        dVar8 = dVar8 / dVar6;
        if (dVar8 < 0.0) {
          dVar8 = sqrt(dVar8);
        }
        else {
          dVar8 = SQRT(dVar8);
        }
        *param_6 = dVar8;
        *param_5 = lVar5;
        FUN_1400020a8(local_158);
        FUN_1400020a8(local_148);
        FUN_1400020a8(local_130);
      }
      goto LAB_1483d3baf;
    }
  }
  puStack_100 = (undefined8 *)param_3[1];
  dStack_f0 = 0.0;
  FUN_146de41cc(param_3,&local_108,local_b8);
  *param_5 = 0;
  *param_6 = 0.0;
LAB_1483d3baf:
  FUN_1400020a8(local_120);
  if ((local_a0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483d4066 FUN_1483d4066 body=120 status=ok
// SIG undefined FUN_1483d4066(void)

undefined8 * FUN_1483d4066(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146de3c6e(0,*(undefined8 *)(*(longlong *)(param_2 + 0x18) + 8),1);
  FUN_146de611d(param_1,*(undefined8 *)(param_2 + 8),&local_19);
  FUN_1483d40e0(param_1,param_2 + 0x10,*(undefined8 *)(param_2 + 0x20));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d40e0 FUN_1483d40e0 body=135 status=ok
// SIG undefined FUN_1483d40e0(void)

void FUN_1483d40e0(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(lVar1 + 8);
  if (0 < lVar2) {
    lVar3 = 0;
    do {
      lVar4 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x20) + lVar3 * 4);
      if (*(longlong *)(lVar1 + 0x38) == 0) {
        lVar5 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x20) + 4 + lVar3 * 4);
      }
      else {
        lVar5 = *(int *)(*(longlong *)(lVar1 + 0x38) + lVar3 * 4) + lVar4;
      }
      dVar6 = 0.0;
      if (lVar4 < lVar5) {
        do {
          dVar6 = dVar6 + *(double *)(*(longlong *)(lVar1 + 0x30) + lVar4 * 8) *
                          *(double *)
                           (*param_3 +
                           (longlong)*(int *)(*(longlong *)(lVar1 + 0x28) + lVar4 * 4) * 8);
          lVar4 = lVar4 + 1;
        } while (lVar5 != lVar4);
      }
      *(double *)(*param_1 + lVar3 * 8) = *(double *)(*param_1 + lVar3 * 8) - dVar6;
      lVar3 = lVar3 + 1;
    } while (lVar3 != lVar2);
  }
  return;
}



// FUNCTION 1483d4167 FUN_1483d4167 body=176 status=ok
// SIG undefined FUN_1483d4167(void)

void FUN_1483d4167(longlong *param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  undefined1 local_28 [8];
  double local_20;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = *(double *)(param_2 + 0x20);
  local_48 = local_28;
  local_10 = **(longlong **)(param_2 + 0x28);
  local_30 = *param_1;
  local_50 = &local_30;
  lVar5 = param_1[1];
  if (1 < lVar5) {
    lVar7 = 0;
    do {
      pdVar1 = (double *)(local_10 + lVar7 * 8);
      dVar6 = pdVar1[1];
      pdVar2 = (double *)(local_30 + lVar7 * 8);
      dVar4 = pdVar2[1];
      pdVar3 = (double *)(local_30 + lVar7 * 8);
      *pdVar3 = *pdVar1 * local_20 + *pdVar2;
      pdVar3[1] = dVar6 * local_20 + dVar4;
      lVar7 = lVar7 + 2;
    } while (lVar7 < (longlong)(lVar5 - (lVar5 >> 0x3f) & 0xfffffffffffffffeU));
  }
  local_40 = param_3;
  local_38 = param_1;
  FUN_1483d4218(&local_50);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d4218 FUN_1483d4218 body=49 status=ok
// SIG undefined FUN_1483d4218(void)

void FUN_1483d4218(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(double *)(*(longlong *)*param_1 + param_2 * 8) =
           *(double *)(param_1[1] + 8) * *(double *)(*(longlong *)(param_1[1] + 0x18) + param_2 * 8)
           + *(double *)(*(longlong *)*param_1 + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483d424a FUN_1483d424a body=88 status=ok
// SIG undefined FUN_1483d424a(void)

void FUN_1483d424a(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_146de5508(param_1 + 0x88);
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_1483d2686(param_1 + 0x48,param_2);
  return;
}



// FUNCTION 1483d42a2 FUN_1483d42a2 body=176 status=ok
// SIG undefined FUN_1483d42a2(void)

longlong * FUN_1483d42a2(longlong *param_1,longlong param_2)

{
  double dVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  FUN_146de3b1a(param_1,*(undefined8 *)(param_2 + 8));
  if (0 < *(longlong *)(param_2 + 8)) {
    uVar2 = 0;
    do {
      lVar3 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + uVar2 * 4);
      if (*(longlong *)(param_2 + 0x38) == 0) {
        lVar4 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 4 + uVar2 * 4);
      }
      else {
        lVar4 = *(int *)(*(longlong *)(param_2 + 0x38) + uVar2 * 4) + lVar3;
      }
      dVar5 = 1.0;
      if (lVar3 < lVar4) {
        do {
          if (uVar2 == *(uint *)(*(longlong *)(param_2 + 0x28) + lVar3 * 4)) {
            dVar1 = *(double *)(*(longlong *)(param_2 + 0x30) + lVar3 * 8);
            if ((dVar1 != 0.0) || (dVar5 = 1.0, NAN(dVar1))) {
              dVar5 = 1.0 / dVar1;
            }
            goto LAB_1483d430e;
          }
          lVar3 = lVar3 + 1;
        } while (lVar4 != lVar3);
        dVar5 = 1.0;
      }
LAB_1483d430e:
      *(double *)(*param_1 + uVar2 * 8) = dVar5;
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < *(longlong *)(param_2 + 8));
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



// FUNCTION 1483d435a FUN_1483d435a body=247 status=ok
// SIG undefined FUN_1483d435a(void)

void FUN_1483d435a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_48;
  longlong local_40;
  longlong local_28;
  longlong local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  lVar1 = (ulonglong)(param_2 != 1) * 0x10 + 0x10;
  if (param_2 == 0) {
    lVar1 = local_28;
  }
  lVar2 = (longlong)*(int *)(param_1[3] + 8 + lVar1);
  local_20 = 0;
  if (0 < lVar2) {
    local_28 = *(longlong *)(param_1[3] + lVar1);
    local_20 = lVar2;
  }
  local_80 = param_1[1] + 0x10;
  lVar2 = (longlong)*(int *)(param_1[2] + 8 + lVar1);
  local_48 = 0;
  local_40 = 0;
  if (0 < lVar2) {
    local_48 = *(undefined8 *)(param_1[2] + lVar1);
    local_40 = lVar2;
  }
  local_78 = &local_48;
  local_70 = &local_28;
  lVar2 = (longlong)*(int *)(*param_1 + 8 + lVar1);
  local_68 = 0;
  local_60 = 0;
  if (0 < lVar2) {
    local_68 = *(undefined8 *)(*param_1 + lVar1);
    local_60 = lVar2;
  }
  FUN_1483d4452(&local_68,&local_80);
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d4452 FUN_1483d4452 body=155 status=ok
// SIG undefined FUN_1483d4452(void)

void FUN_1483d4452(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30[0] = *(undefined8 *)param_2[2];
  local_60 = local_30;
  local_20 = ((undefined8 *)param_2[2])[1];
  local_48[0] = *param_1;
  local_68 = local_48;
  local_38 = param_1[1];
  local_58 = &local_69;
  local_50 = param_1;
  FUN_146de5f38();
  FUN_1483d2852(*param_2,param_2[1],param_1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d44ee FUN_1483d44ee body=155 status=ok
// SIG undefined FUN_1483d44ee(void)

void FUN_1483d44ee(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30[0] = *(undefined8 *)param_2[2];
  local_60 = local_30;
  local_20 = ((undefined8 *)param_2[2])[1];
  local_48[0] = *param_1;
  local_68 = local_48;
  local_38 = param_1[1];
  local_58 = &local_69;
  local_50 = param_1;
  FUN_1483cd6c6();
  FUN_1483d3152(*param_2,param_2[1],param_1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d458a FUN_1483d458a body=115 status=ok
// SIG undefined FUN_1483d458a(void)

void FUN_1483d458a(longlong param_1,longlong *param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 8) != *(longlong *)(*param_2 + 0x58)) {
    FUN_146de3c6e(param_1,*(longlong *)(*param_2 + 0x58),1);
  }
  FUN_146de611d(param_1,param_2[2],&local_19);
  FUN_1483d3a12(*param_2,param_2[1],param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d45fe FUN_1483d45fe body=52 status=ok
// SIG undefined FUN_1483d45fe(void)

undefined8 * FUN_1483d45fe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae75940;
  FUN_1483d49f4(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483d4636 FUN_1483d4636 body=136 status=ok
// SIG undefined FUN_1483d4636(void)

void FUN_1483d4636(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 8) == '\x01') {
    local_20 = &local_40;
    local_48 = &local_18;
    local_18 = 0;
    local_10 = 0;
    local_28 = &LAB_1483d4a46;
    local_50 = 0;
    local_40 = param_3;
    local_38 = param_1;
    local_30 = param_2;
    FUN_1427ae281(L"ParallelFor Task",3,1);
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d46c0 FUN_1483d46c0 body=154 status=ok
// SIG undefined FUN_1483d46c0(void)

void FUN_1483d46c0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 8) == '\x01') {
    local_60 = local_30;
    local_30[0] = 0;
    local_48[0] = *param_3;
    local_68 = local_48;
    local_38 = param_3[1];
    local_58 = &local_69;
    local_50 = param_3;
    FUN_146de3bbc();
    FUN_1483d5fe8(param_1 + 0x10,param_2,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d475c FUN_1483d475c body=81 status=ok
// SIG undefined FUN_1483d475c(void)

void FUN_1483d475c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 8) == '\x01') {
    local_18 = param_1 + 0x10;
    local_10 = param_2;
    FUN_1483d6c18(param_3,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d47de FUN_1483d47de body=152 status=ok
// SIG undefined FUN_1483d47de(void)

void FUN_1483d47de(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 8) == '\x01') {
    local_20 = &local_48;
    local_58 = &local_18;
    local_18 = 0;
    local_10 = 0;
    local_28 = &LAB_1483d95c2;
    local_60 = 0;
    local_48 = param_4;
    local_40 = param_1;
    local_38 = param_3;
    local_30 = param_2;
    FUN_1427ae281(L"ParallelFor Task",3,1);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d4878 FUN_1483d4878 body=85 status=ok
// SIG undefined FUN_1483d4878(void)

void FUN_1483d4878(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 8) == '\x01') {
    local_20 = param_1 + 0x10;
    local_18 = param_3;
    local_10 = param_2;
    FUN_1483d975e(param_4,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d48ce FUN_1483d48ce body=85 status=ok
// SIG undefined FUN_1483d48ce(void)

void FUN_1483d48ce(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 8) == '\x01') {
    local_20 = param_1 + 0x10;
    local_18 = param_3;
    local_10 = param_2;
    FUN_1483d97fa(param_4,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d4924 FUN_1483d4924 body=207 status=ok
// SIG undefined FUN_1483d4924(void)

undefined1 * FUN_1483d4924(undefined1 *param_1)

{
  *param_1 = 0;
  FUN_1483d2618(param_1 + 8);
  param_1[0xe0] = 0;
  param_1[0xe8] = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_146dd941a(param_1 + 0xe8,0,0);
  *(undefined8 *)(param_1 + 0x130) = 0x3d719799812dea11;
  *(undefined4 *)(param_1 + 0x138) = 10;
  *(undefined2 *)(param_1 + 0x13c) = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x170) = 0x3cb0000000000000;
  return param_1;
}



// FUNCTION 1483d49f4 FUN_1483d49f4 body=82 status=ok
// SIG undefined FUN_1483d49f4(void)

void FUN_1483d49f4(longlong param_1)

{
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x158));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x148));
  FUN_146de3a5a(param_1 + 0xe8);
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    FUN_146de5508(param_1 + 0x90);
  }
  FUN_146de5508(param_1 + 8);
  return;
}



// FUNCTION 1483d4a4e FUN_1483d4a4e body=246 status=ok
// SIG undefined FUN_1483d4a4e(void)

void FUN_1483d4a4e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [39];
  undefined1 local_a1;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_60;
  longlong local_58;
  undefined8 local_40 [2];
  longlong local_30;
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_60 = 0;
  lVar1 = (ulonglong)(param_2 != 1) * 0x10 + 0x10;
  if (param_2 == 0) {
    lVar1 = local_60;
  }
  lVar2 = (longlong)*(int *)(param_1[2] + 8 + lVar1);
  local_58 = 0;
  if (0 < lVar2) {
    local_60 = *(longlong *)(param_1[2] + lVar1);
    local_58 = lVar2;
  }
  lVar2 = param_1[1];
  lVar3 = (longlong)*(int *)(*param_1 + 8 + lVar1);
  local_80 = 0;
  local_78 = 0;
  if (0 < lVar3) {
    local_80 = *(undefined8 *)(*param_1 + lVar1);
    local_78 = lVar3;
  }
  local_98 = local_28;
  local_28[0] = 0;
  local_a0 = local_40;
  local_90 = &local_a1;
  local_88 = &local_80;
  local_40[0] = local_80;
  local_30 = local_78;
  FUN_146de3bbc();
  FUN_1483d4b46(lVar2 + 0x10,&local_60,&local_80);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d4b46 FUN_1483d4b46 body=125 status=ok
// SIG undefined FUN_1483d4b46(void)

void FUN_1483d4b46(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 < 0) {
    lVar1 = *(longlong *)(param_1 + 0x58) * 2;
  }
  *(longlong *)(param_1 + 0x180) = lVar1;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x170);
  FUN_1483d4bc3(param_1 + 0x50,param_2,param_3,param_1 + 0xe0,param_1 + 0x180,param_1 + 0x178);
  *(uint *)(param_1 + 0x188) =
       (uint)(*(double *)(param_1 + 0x170) < *(double *)(param_1 + 0x178)) * 2;
  return;
}



// FUNCTION 1483d4bc3 FUN_1483d4bc3 body=2674 status=ok
// SIG undefined FUN_1483d4bc3(void)

void FUN_1483d4bc3(undefined8 ***param_1,double *param_2,undefined8 ****param_3,longlong param_4,
                  longlong *param_5,double *param_6)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 **ppuVar4;
  double ***_Dst;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_288 [32];
  longlong local_268;
  undefined8 local_260;
  undefined8 local_258;
  longlong local_250;
  double *local_248;
  longlong local_240;
  undefined8 *local_238;
  double *pdStack_230;
  undefined8 local_228;
  double *pdStack_220;
  undefined8 **local_218;
  double *pdStack_210;
  undefined8 local_208;
  double *pdStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 ***local_1e8;
  longlong lStack_1e0;
  undefined8 ***local_1d8;
  longlong local_1d0;
  undefined8 ***local_1c8;
  longlong local_1c0;
  undefined1 local_1b1;
  double **local_1b0;
  undefined8 ***local_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 ***local_198;
  double *local_190;
  double **local_188;
  undefined8 ***local_180;
  undefined8 ***pppuStack_178;
  undefined8 **local_170;
  longlong local_158;
  undefined8 **local_148;
  undefined8 ***local_140;
  undefined8 **local_118;
  undefined8 ***local_110;
  undefined8 ***local_108;
  undefined8 ***local_100;
  undefined8 **local_f8 [2];
  undefined8 **local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  dVar12 = *param_6;
  lVar6 = *param_5;
  ppuVar1 = param_1[1];
  local_170 = param_3[2];
  local_180 = *param_3;
  pppuStack_178 = param_3[1];
  local_1a8 = (undefined8 ***)*param_2;
  pppuStack_1a0 = (undefined8 ***)param_2[1];
  local_198 = (undefined8 ***)param_2[2];
  local_188 = (double **)param_1;
  FUN_1483d5636(&local_1c8);
  _Dst = (double ***)FUN_146de3b53(local_1c0);
  local_1d0 = local_1c0;
  local_1d8 = _Dst;
  if (local_1c0 == 0) {
    dVar9 = 0.0;
  }
  else {
    memcpy(_Dst,local_1c8,local_1c0 << 3);
    local_1a8 = &local_1d8;
    local_110 = _Dst;
    dVar9 = (double)FUN_146de3ea2(&local_118,local_f8);
  }
  local_1a8 = (undefined8 ***)*param_2;
  pppuStack_1a0 = (undefined8 ***)param_2[1];
  local_198 = (undefined8 ***)param_2[2];
  if ((undefined8 ****)pppuStack_1a0 != (undefined8 ****)0x0) {
    local_110 = local_1a8;
    local_100 = pppuStack_1a0;
    dVar7 = (double)FUN_146de3dda(&local_118,local_f8);
    if ((dVar7 != 0.0) || (NAN(dVar7))) {
      local_198 = (undefined8 ***)0x0;
      local_1e8 = (double ***)0x0;
      lStack_1e0 = 0;
      local_268 = param_4;
      local_240 = lVar6;
      local_1a8 = (undefined8 ***)ppuVar1;
      FUN_146de3c6e(&local_1e8,ppuVar1,1);
      FUN_146de41cc(&local_1e8,&local_1b0,&local_118);
      local_198 = (undefined8 ****)0x0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1a8 = (undefined8 ***)ppuVar1;
      FUN_146de3c6e(&local_1f8,ppuVar1,1);
      FUN_146de41cc(&local_1f8,&local_1b0,&local_118);
      local_208 = 0;
      pdStack_200 = (double *)0x0;
      ppuVar4 = (undefined8 **)pdStack_200;
      if ((ppuVar1 == (undefined8 **)0x0) || (ppuVar4 = ppuVar1, (longlong)ppuVar1 < 1)) {
        pdStack_200 = (double *)ppuVar4;
        local_218 = (undefined8 ***)0x0;
        local_228 = 0;
        local_238 = (undefined8 **)0x0;
        local_258 = 0;
        local_260 = 0;
        pdStack_220 = pdStack_200;
        pdStack_210 = pdStack_200;
      }
      else {
        local_208 = FUN_146de3b53(ppuVar1);
        pdStack_200 = (double *)ppuVar1;
        local_218 = (undefined8 **)FUN_146de3b53(ppuVar1);
        pdStack_210 = (double *)ppuVar1;
        local_258 = FUN_146de3b53(ppuVar1);
        local_260 = FUN_146de3b53(ppuVar1);
        local_228 = FUN_146de3b53(ppuVar1);
        pdStack_230 = (double *)0x0;
        pdStack_220 = (double *)ppuVar1;
        local_238 = (undefined8 *)FUN_146de3b53(ppuVar1);
      }
      pppuVar2 = (undefined8 ***)0x3ff0000000000000;
      ppppuVar3 = (undefined8 ****)&DAT_3ff0000000000000;
      lVar6 = 0;
      local_250 = 0;
      lVar5 = local_268;
      local_248 = param_2;
      pdStack_230 = (double *)ppuVar1;
      dVar11 = 1.0;
      while( true ) {
        dVar8 = 0.0;
        if (local_1c0 != 0) {
          local_110 = local_1c8;
          local_1a8 = &local_1c8;
          dVar8 = (double)FUN_146de3ea2(&local_118,local_f8,&local_1b0);
        }
        if ((dVar8 <= dVar12 * dVar12 * dVar7) || (local_240 <= lVar6)) break;
        local_1a8 = &local_1d8;
        dVar8 = 0.0;
        pppuStack_1a0 = &local_1c8;
        if (local_1c0 != 0) {
          local_110 = local_1d8;
          local_108 = local_1c8;
          dVar8 = (double)FUN_146de40ee(&local_118,local_f8,&local_1b0);
        }
        if (ABS(dVar8) < dVar9 * 4.930380657631324e-32) {
          local_170 = param_3[2];
          local_180 = *param_3;
          pppuStack_178 = param_3[1];
          local_1a8 = (undefined8 ***)*param_2;
          pppuStack_1a0 = (undefined8 ***)param_2[1];
          local_198 = (undefined8 ***)param_2[2];
          local_188 = (double **)param_1;
          FUN_1483d5757(&local_1c8,&local_1b0,&local_118);
          FUN_146de611d(&local_1d8,&local_1c8,&local_1b0);
          dVar9 = 0.0;
          if (local_1c0 != 0) {
            local_110 = local_1c8;
            local_1a8 = &local_1c8;
            dVar9 = (double)FUN_146de3ea2(&local_118,local_f8,&local_1b0);
          }
          if (local_250 == 0) {
            lVar6 = 0;
          }
          local_250 = local_250 + 1;
          dVar8 = dVar9;
        }
        local_180 = (undefined8 ***)(((double)ppppuVar3 / (double)pppuVar2) * (dVar8 / dVar11));
        local_190 = (double *)lStack_1e0;
        local_170 = (undefined8 **)&local_1f8;
        local_158 = lStack_1e0;
        local_140 = &local_1e8;
        local_1a8 = &local_1c8;
        local_148 = pppuVar2;
        FUN_1483d5806(local_170,&local_1b0,&local_118);
        if ((undefined8 **)pdStack_200 != *(undefined8 ***)(lVar5 + 0x18)) {
          FUN_146de3c6e(&local_208,*(undefined8 ***)(lVar5 + 0x18),1);
        }
        FUN_1483d5988(lVar5,&local_1f8,&local_208);
        local_1b0 = (double **)param_1;
        local_1a8 = (undefined8 ***)&local_208;
        FUN_1483d5c86(&local_1e8,&local_1b0);
        local_1a8 = &local_1d8;
        pppuStack_1a0 = &local_1e8;
        if (lStack_1e0 == 0) {
          dVar11 = 0.0;
          local_190 = (double *)0;
        }
        else {
          local_110 = local_1d8;
          local_108 = local_1e8;
          dVar11 = (double)FUN_146de40ee(&local_118,local_f8,&local_1b0);
          local_190 = (double *)lStack_1e0;
        }
        ppppuVar3 = (undefined8 ****)(dVar8 / dVar11);
        pppuStack_178 = &local_1e8;
        local_1a8 = &local_1c8;
        local_180 = ppppuVar3;
        FUN_1483d5daf(&local_228,&local_1b0,&local_118);
        lVar5 = local_268;
        if ((undefined8 **)pdStack_210 != *(undefined8 ***)(local_268 + 0x18)) {
          FUN_146de3c6e(&local_218,*(undefined8 ***)(local_268 + 0x18),1);
        }
        FUN_1483d5988(lVar5,&local_228,&local_218);
        local_1b0 = (double **)param_1;
        local_1a8 = &local_218;
        FUN_1483d5c86(&local_238,&local_1b0);
        local_1a8 = (undefined8 ***)&local_238;
        if ((undefined8 **)pdStack_230 == (undefined8 **)0x0) {
          pppuVar2 = (undefined8 ***)0x0;
          param_2 = local_248;
        }
        else {
          local_110 = (undefined8 ***)local_238;
          dVar10 = (double)FUN_146de3ea2(&local_118,local_f8,&local_1b0);
          param_2 = local_248;
          dVar11 = 0.0;
          pppuVar2 = (undefined8 ***)0x0;
          if (0.0 < dVar10) {
            local_1a8 = (undefined8 ***)&local_238;
            pppuStack_1a0 = (undefined8 ***)&local_228;
            if ((undefined8 **)pdStack_220 != (undefined8 **)0x0) {
              local_110 = (undefined8 ***)local_238;
              local_108 = (undefined8 ***)local_228;
              dVar11 = (double)FUN_146de40ee(&local_118,local_f8,&local_1b0);
            }
            pppuVar2 = (undefined8 ***)(dVar11 / dVar10);
          }
        }
        local_190 = (double *)local_208;
        local_170 = local_218;
        local_f8[0] = *param_3;
        local_e8 = param_3[1];
        local_118 = local_f8;
        local_108 = (undefined8 ***)&local_1b1;
        pppuStack_1a0 = ppppuVar3;
        local_180 = pppuVar2;
        local_110 = &local_1b0;
        local_100 = param_3;
        FUN_1483d5ee8(&local_118);
        local_1a8 = (undefined8 ***)&local_228;
        local_190 = pdStack_230;
        pppuStack_178 = (undefined8 ***)&local_238;
        local_180 = pppuVar2;
        FUN_1483d5daf(&local_1c8,&local_1b0,&local_118);
        lVar6 = lVar6 + 1;
        dVar11 = dVar8;
      }
      dVar12 = 0.0;
      local_1a8 = &local_1c8;
      if (local_1c0 != 0) {
        local_110 = local_1c8;
        dVar12 = (double)FUN_146de3ea2(&local_118,local_f8,&local_1b0);
      }
      dVar12 = dVar12 / dVar7;
      if (dVar12 < 0.0) {
        dVar12 = sqrt(dVar12);
      }
      else {
        dVar12 = SQRT(dVar12);
      }
      *param_6 = dVar12;
      *param_5 = lVar6;
      FUN_1400020a8(local_238);
      FUN_1400020a8(local_228);
      FUN_1400020a8(local_260);
      FUN_1400020a8(local_258);
      FUN_1400020a8(local_218);
      FUN_1400020a8(local_208);
      FUN_1400020a8(local_1f8);
      FUN_1400020a8(local_1e8);
      goto LAB_1483d4dc6;
    }
  }
  local_1a8 = local_f8;
  local_f8[0] = (undefined8 ***)0x0;
  local_118 = *param_3;
  local_1b0 = (double **)&local_118;
  local_108 = param_3[1];
  pppuStack_1a0 = &local_1e8;
  local_198 = param_3;
  FUN_146de3bbc();
LAB_1483d4dc6:
  FUN_1400020a8(local_1d8);
  FUN_1400020a8(local_1c8);
  if ((local_e0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483d5636 FUN_1483d5636 body=156 status=ok
// SIG undefined FUN_1483d5636(void)

undefined8 * FUN_1483d5636(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146de3c6e(0,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10),1);
  FUN_146de3ce5(param_1,param_2 + 8,&local_48);
  local_50 = 0xbff0000000000000;
  local_38 = *(undefined8 *)(param_2 + 0x40);
  local_48 = *(undefined4 *)(param_2 + 0x30);
  uStack_44 = *(undefined4 *)(param_2 + 0x34);
  uStack_40 = *(undefined4 *)(param_2 + 0x38);
  uStack_3c = *(undefined4 *)(param_2 + 0x3c);
  FUN_1483d56d4(*(undefined8 *)(param_2 + 0x28),&local_48,param_1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d56d4 FUN_1483d56d4 body=131 status=ok
// SIG undefined FUN_1483d56d4(void)

void FUN_1483d56d4(longlong param_1,longlong *param_2,longlong *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 8);
  if (0 < lVar8) {
    lVar4 = 0;
    do {
      lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar4 * 4);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar4 * 4);
      }
      else {
        lVar6 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar4 * 4) + lVar7;
      }
      if (lVar7 < lVar6) {
        dVar1 = *param_4;
        dVar2 = *(double *)(*param_2 + lVar4 * 8);
        lVar8 = *(longlong *)(param_1 + 0x30);
        lVar3 = *(longlong *)(param_1 + 0x28);
        do {
          lVar5 = (longlong)*(int *)(lVar3 + lVar7 * 4);
          *(double *)(*param_3 + lVar5 * 8) =
               *(double *)(lVar8 + lVar7 * 8) * dVar1 * dVar2 + *(double *)(*param_3 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
        lVar8 = *(longlong *)(param_1 + 8);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar8);
  }
  return;
}



// FUNCTION 1483d5757 FUN_1483d5757 body=174 status=ok
// SIG undefined FUN_1483d5757(void)

void FUN_1483d5757(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  FUN_146de3ce5(&local_78,param_2 + 8,&local_58);
  local_60 = 0xbff0000000000000;
  local_48 = *(undefined8 *)(param_2 + 0x40);
  local_58 = *(undefined4 *)(param_2 + 0x30);
  uStack_54 = *(undefined4 *)(param_2 + 0x34);
  uStack_50 = *(undefined4 *)(param_2 + 0x38);
  uStack_4c = *(undefined4 *)(param_2 + 0x3c);
  FUN_1483d56d4(*(undefined8 *)(param_2 + 0x28),&local_58,&local_78);
  FUN_146de611d(param_1,&local_78,param_3);
  FUN_1400020a8(local_78);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d5806 FUN_1483d5806 body=197 status=ok
// SIG undefined FUN_1483d5806(void)

void FUN_1483d5806(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = **(undefined8 **)(param_2 + 8);
  local_58 = *(undefined8 *)(param_2 + 0x30);
  local_40 = **(undefined8 **)(param_2 + 0x40);
  local_30 = *(undefined8 *)(param_2 + 0x68);
  local_20 = **(undefined8 **)(param_2 + 0x70);
  lVar1 = (*(undefined8 **)(param_2 + 0x70))[1];
  if (param_1[1] != lVar1) {
    FUN_146de3c6e(param_1,lVar1,1);
  }
  local_78 = *param_1;
  local_98 = &local_78;
  local_90 = local_70;
  local_88 = param_3;
  local_80 = param_1;
  FUN_1483d58cc();
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d58cc FUN_1483d58cc body=186 status=ok
// SIG undefined FUN_1483d58cc(void)

void FUN_1483d58cc(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar8 = *(ulonglong *)(param_1[3] + 8);
  uVar13 = uVar8 - ((longlong)uVar8 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (longlong)uVar8) {
    lVar12 = 0;
    do {
      lVar9 = param_1[1];
      dVar5 = *(double *)(lVar9 + 0x40);
      pdVar1 = (double *)(*(longlong *)(lVar9 + 0x50) + lVar12 * 8);
      dVar10 = pdVar1[1];
      pdVar2 = (double *)(*(longlong *)(lVar9 + 0x30) + lVar12 * 8);
      dVar11 = pdVar2[1];
      dVar6 = *(double *)(lVar9 + 0x18);
      pdVar3 = (double *)(*(longlong *)(lVar9 + 8) + lVar12 * 8);
      dVar7 = pdVar3[1];
      pdVar4 = (double *)(*(longlong *)*param_1 + lVar12 * 8);
      *pdVar4 = *(double *)(lVar9 + 0x18) * (*pdVar2 - *(double *)(lVar9 + 0x40) * *pdVar1) +
                *pdVar3;
      pdVar4[1] = dVar6 * (dVar11 - dVar5 * dVar10) + dVar7;
      lVar12 = lVar12 + 2;
    } while (lVar12 < (longlong)uVar13);
  }
  if ((longlong)uVar13 < (longlong)uVar8) {
    do {
      lVar12 = param_1[1];
      *(double *)(*(longlong *)*param_1 + uVar13 * 8) =
           (*(double *)(*(longlong *)(lVar12 + 0x30) + uVar13 * 8) -
           *(double *)(lVar12 + 0x40) * *(double *)(*(longlong *)(lVar12 + 0x50) + uVar13 * 8)) *
           *(double *)(lVar12 + 0x18) + *(double *)(*(longlong *)(lVar12 + 8) + uVar13 * 8);
      uVar13 = uVar13 + 1;
    } while (uVar8 != uVar13);
  }
  return;
}



// FUNCTION 1483d5988 FUN_1483d5988 body=226 status=ok
// SIG undefined FUN_1483d5988(void)

void FUN_1483d5988(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong local_50;
  undefined1 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_3 + 8) != *(longlong *)(param_1 + 0x80)) {
    FUN_146de3c6e(param_3,*(longlong *)(param_1 + 0x80),1);
  }
  FUN_146de5ff0(param_3,param_1 + 0x78,param_2);
  local_58[0] = 0;
  local_50 = param_1 + 8;
  local_48 = local_58;
  local_40 = param_3;
  FUN_1483d5a6c(param_3,&local_48);
  local_58[0] = 0;
  local_50 = param_1 + 8;
  local_48 = local_58;
  local_40 = param_3;
  FUN_1483d5b64(param_3,&local_48);
  if (*(longlong *)(param_3 + 8) != *(longlong *)(param_1 + 0x70)) {
    FUN_146de3c6e(param_3,*(longlong *)(param_1 + 0x70),1);
  }
  FUN_146de5ff0(param_3,param_1 + 0x68,param_3);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d5a6c FUN_1483d5a6c body=129 status=ok
// SIG undefined FUN_1483d5a6c(void)

void FUN_1483d5a6c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_2;
  lVar1 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x10);
  if (param_1[1] != lVar1) {
    FUN_146de3c6e(param_1,lVar1,1);
    lVar2 = *param_2;
  }
  if (*param_1 != *(longlong *)param_2[1]) {
    FUN_146de611d(param_1,(longlong *)param_2[1],&local_21);
  }
  FUN_1483d5aee(*(undefined8 *)(lVar2 + 8),param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d5aee FUN_1483d5aee body=117 status=ok
// SIG undefined FUN_1483d5aee(void)

void FUN_1483d5aee(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  if (0 < *(longlong *)(param_1 + 8)) {
    lVar2 = 0;
    do {
      lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar2 * 4);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar2 * 4);
      }
      else {
        lVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar2 * 4) + lVar4;
      }
      lVar1 = *param_2;
      dVar6 = *(double *)(lVar1 + lVar2 * 8);
      if (lVar4 < lVar5) {
        do {
          lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar4 * 4);
          if (lVar2 == lVar3) break;
          dVar6 = dVar6 - *(double *)(*(longlong *)(param_1 + 0x28) + lVar4 * 8) *
                          *(double *)(lVar1 + lVar3 * 8);
          lVar4 = lVar4 + 1;
        } while (lVar5 != lVar4);
      }
      *(double *)(lVar1 + lVar2 * 8) = dVar6;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(longlong *)(param_1 + 8));
  }
  return;
}



// FUNCTION 1483d5b64 FUN_1483d5b64 body=129 status=ok
// SIG undefined FUN_1483d5b64(void)

void FUN_1483d5b64(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_2;
  lVar1 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x10);
  if (param_1[1] != lVar1) {
    FUN_146de3c6e(param_1,lVar1,1);
    lVar2 = *param_2;
  }
  if (*param_1 != *(longlong *)param_2[1]) {
    FUN_146de611d(param_1,(longlong *)param_2[1],&local_21);
  }
  FUN_1483d5be6(*(undefined8 *)(lVar2 + 8),param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d5be6 FUN_1483d5be6 body=160 status=ok
// SIG undefined FUN_1483d5be6(void)

void FUN_1483d5be6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (0 < *(longlong *)(param_1 + 8)) {
    do {
      lVar1 = lVar4 + -1;
      lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + -4 + lVar4 * 4);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar1 * 4);
      }
      else {
        lVar7 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar1 * 4) + lVar5;
      }
      lVar6 = lVar5;
      if (lVar5 < lVar7) {
        do {
          lVar6 = lVar5;
          if (lVar1 <= *(int *)(*(longlong *)(param_1 + 0x30) + lVar5 * 4)) break;
          lVar5 = lVar5 + 1;
          lVar6 = lVar7;
        } while (lVar7 != lVar5);
      }
      lVar2 = *param_2;
      dVar8 = *(double *)(lVar2 + -8 + lVar4 * 8);
      lVar5 = lVar6 + 1;
      if (lVar5 < lVar7) {
        do {
          dVar8 = dVar8 - *(double *)(*(longlong *)(param_1 + 0x28) + lVar5 * 8) *
                          *(double *)
                           (lVar2 + (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + lVar5 * 4) *
                                    8);
          lVar5 = lVar5 + 1;
        } while (lVar7 != lVar5);
      }
      *(double *)(lVar2 + lVar1 * 8) =
           dVar8 / *(double *)(*(longlong *)(param_1 + 0x28) + lVar6 * 8);
      bVar3 = 1 < lVar4;
      lVar4 = lVar1;
    } while (bVar3);
  }
  return;
}



// FUNCTION 1483d5c86 FUN_1483d5c86 body=165 status=ok
// SIG undefined FUN_1483d5c86(void)

void FUN_1483d5c86(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_2;
  local_40 = *(longlong *)(lVar2 + 0x10);
  if (*(longlong *)(param_1 + 8) != local_40) {
    FUN_146de3c6e(param_1,local_40,1);
    lVar2 = *param_2;
    local_40 = *(longlong *)(param_1 + 8);
  }
  lVar1 = param_2[1];
  local_30 = 0;
  FUN_146de41cc(param_1,&local_48,&local_49);
  local_48 = 0x3ff0000000000000;
  FUN_1483d5d2c(lVar2,lVar1,param_1,&local_48);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d5d2c FUN_1483d5d2c body=131 status=ok
// SIG undefined FUN_1483d5d2c(void)

void FUN_1483d5d2c(longlong param_1,longlong *param_2,longlong *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 8);
  if (0 < lVar8) {
    lVar4 = 0;
    do {
      lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar4 * 4);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar4 * 4);
      }
      else {
        lVar6 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar4 * 4) + lVar7;
      }
      if (lVar7 < lVar6) {
        dVar1 = *param_4;
        dVar2 = *(double *)(*param_2 + lVar4 * 8);
        lVar8 = *(longlong *)(param_1 + 0x30);
        lVar3 = *(longlong *)(param_1 + 0x28);
        do {
          lVar5 = (longlong)*(int *)(lVar3 + lVar7 * 4);
          *(double *)(*param_3 + lVar5 * 8) =
               *(double *)(lVar8 + lVar7 * 8) * dVar1 * dVar2 + *(double *)(*param_3 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
        lVar8 = *(longlong *)(param_1 + 8);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar8);
  }
  return;
}



// FUNCTION 1483d5daf FUN_1483d5daf body=253 status=ok
// SIG undefined FUN_1483d5daf(void)

void FUN_1483d5daf(longlong *param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  undefined1 local_58 [8];
  longlong local_50;
  double local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = **(longlong **)(param_2 + 8);
  local_40 = *(double *)(param_2 + 0x30);
  lVar5 = **(longlong **)(param_2 + 0x38);
  lVar8 = (*(longlong **)(param_2 + 0x38))[1];
  local_50 = lVar4;
  local_30 = lVar5;
  if (param_1[1] != lVar8) {
    FUN_146de3c6e(param_1,lVar8);
    lVar8 = param_1[1];
  }
  local_60 = *param_1;
  local_80 = &local_60;
  local_78 = local_58;
  uVar9 = lVar8 - (lVar8 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar8) {
    lVar10 = 0;
    do {
      pdVar1 = (double *)(lVar5 + lVar10 * 8);
      dVar6 = pdVar1[1];
      pdVar2 = (double *)(lVar4 + lVar10 * 8);
      dVar7 = pdVar2[1];
      pdVar3 = (double *)(local_60 + lVar10 * 8);
      *pdVar3 = *pdVar2 - *pdVar1 * local_40;
      pdVar3[1] = dVar7 - dVar6 * local_40;
      lVar10 = lVar10 + 2;
    } while (lVar10 < (longlong)uVar9);
  }
  local_70 = param_3;
  local_68 = param_1;
  FUN_1483d5eae(&local_80,uVar9,lVar8);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d5eae FUN_1483d5eae body=57 status=ok
// SIG undefined FUN_1483d5eae(void)

void FUN_1483d5eae(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_2 < param_3) {
    do {
      lVar1 = param_1[1];
      *(double *)(*(longlong *)*param_1 + param_2 * 8) =
           *(double *)(*(longlong *)(lVar1 + 8) + param_2 * 8) -
           *(double *)(lVar1 + 0x18) * *(double *)(*(longlong *)(lVar1 + 0x28) + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483d5ee8 FUN_1483d5ee8 body=185 status=ok
// SIG undefined FUN_1483d5ee8(void)

void FUN_1483d5ee8(undefined8 *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  
  uVar8 = *(ulonglong *)param_1[3];
  uVar9 = ((ulonglong *)param_1[3])[1];
  uVar12 = uVar9;
  if (((uVar8 & 7) == 0) &&
     (uVar12 = (ulonglong)((uint)(uVar8 >> 3) & 1), (longlong)uVar9 <= (longlong)uVar12)) {
    uVar12 = uVar9;
  }
  lVar14 = uVar9 - uVar12;
  lVar13 = (lVar14 - (lVar14 >> 0x3f) & 0xfffffffffffffffeU) + uVar12;
  FUN_1483d5fa2(param_1,0,uVar12);
  if (1 < lVar14) {
    do {
      lVar14 = param_1[1];
      pdVar1 = (double *)(*(longlong *)(lVar14 + 0x40) + uVar12 * 8);
      dVar10 = pdVar1[1];
      dVar5 = *(double *)(lVar14 + 0x30);
      pdVar2 = (double *)(*(longlong *)(lVar14 + 0x20) + uVar12 * 8);
      dVar11 = pdVar2[1];
      dVar6 = *(double *)(lVar14 + 0x10);
      pdVar3 = (double *)(*(longlong *)*param_1 + uVar12 * 8);
      dVar7 = pdVar3[1];
      pdVar4 = (double *)(*(longlong *)*param_1 + uVar12 * 8);
      *pdVar4 = *(double *)(lVar14 + 0x10) * *pdVar2 + *(double *)(lVar14 + 0x30) * *pdVar1 +
                *pdVar3;
      pdVar4[1] = dVar6 * dVar11 + dVar5 * dVar10 + dVar7;
      uVar12 = uVar12 + 2;
    } while ((longlong)uVar12 < lVar13);
  }
  FUN_1483d5fa2(param_1,lVar13,uVar9);
  return;
}



// FUNCTION 1483d5fa2 FUN_1483d5fa2 body=70 status=ok
// SIG undefined FUN_1483d5fa2(void)

void FUN_1483d5fa2(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_2 < param_3) {
    do {
      lVar1 = param_1[1];
      *(double *)(*(longlong *)*param_1 + param_2 * 8) =
           *(double *)(lVar1 + 0x10) * *(double *)(*(longlong *)(lVar1 + 0x20) + param_2 * 8) +
           *(double *)(lVar1 + 0x30) * *(double *)(*(longlong *)(lVar1 + 0x40) + param_2 * 8) +
           *(double *)(*(longlong *)*param_1 + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483d5fe8 FUN_1483d5fe8 body=125 status=ok
// SIG undefined FUN_1483d5fe8(void)

void FUN_1483d5fe8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 < 0) {
    lVar1 = *(longlong *)(param_1 + 0x58) * 2;
  }
  *(longlong *)(param_1 + 0x180) = lVar1;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x170);
  FUN_1483d6065(param_1 + 0x50,param_2,param_3,param_1 + 0xe0,param_1 + 0x180,param_1 + 0x178);
  *(uint *)(param_1 + 0x188) =
       (uint)(*(double *)(param_1 + 0x170) < *(double *)(param_1 + 0x178)) * 2;
  return;
}



// FUNCTION 1483d6065 FUN_1483d6065 body=2662 status=ok
// SIG undefined FUN_1483d6065(void)

void FUN_1483d6065(undefined8 ***param_1,double *param_2,undefined8 ****param_3,longlong param_4,
                  longlong *param_5,double *param_6)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 **ppuVar4;
  double ***_Dst;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_288 [32];
  longlong local_268;
  undefined8 local_260;
  undefined8 local_258;
  longlong local_250;
  double *local_248;
  longlong local_240;
  undefined8 *local_238;
  double *pdStack_230;
  undefined8 local_228;
  double *pdStack_220;
  undefined8 **local_218;
  double *pdStack_210;
  undefined8 local_208;
  double *pdStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 ***local_1e8;
  longlong lStack_1e0;
  undefined8 ***local_1d8;
  longlong local_1d0;
  undefined8 ***local_1c8;
  longlong local_1c0;
  undefined1 local_1b1;
  double **local_1b0;
  undefined8 ***local_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 ***local_198;
  double *local_190;
  double **local_188;
  undefined8 ***local_180;
  undefined8 ***pppuStack_178;
  undefined8 **local_170;
  longlong local_158;
  undefined8 **local_148;
  undefined8 ***local_140;
  undefined8 **local_118;
  undefined8 ***local_110;
  undefined8 ***local_108;
  undefined8 ***local_100;
  undefined8 **local_f8 [2];
  undefined8 **local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  dVar12 = *param_6;
  lVar6 = *param_5;
  ppuVar1 = param_1[1];
  local_170 = param_3[2];
  local_180 = *param_3;
  pppuStack_178 = param_3[1];
  local_1a8 = (undefined8 ***)*param_2;
  pppuStack_1a0 = (undefined8 ***)param_2[1];
  local_198 = (undefined8 ***)param_2[2];
  local_188 = (double **)param_1;
  FUN_1483d6acc(&local_1c8);
  _Dst = (double ***)FUN_146de3b53(local_1c0);
  local_1d0 = local_1c0;
  local_1d8 = _Dst;
  if (local_1c0 == 0) {
    dVar9 = 0.0;
  }
  else {
    memcpy(_Dst,local_1c8,local_1c0 << 3);
    local_1a8 = &local_1d8;
    local_110 = _Dst;
    dVar9 = (double)FUN_146de3ea2(&local_118,local_f8);
  }
  local_1a8 = (undefined8 ***)*param_2;
  pppuStack_1a0 = (undefined8 ***)param_2[1];
  local_198 = (undefined8 ***)param_2[2];
  if ((undefined8 ****)pppuStack_1a0 != (undefined8 ****)0x0) {
    local_110 = local_1a8;
    local_100 = pppuStack_1a0;
    dVar7 = (double)FUN_1483d38ba();
    if ((dVar7 != 0.0) || (NAN(dVar7))) {
      local_198 = (undefined8 ***)0x0;
      local_1e8 = (double ***)0x0;
      lStack_1e0 = 0;
      local_268 = param_4;
      local_240 = lVar6;
      local_1a8 = (undefined8 ***)ppuVar1;
      FUN_146de3c6e(&local_1e8,ppuVar1,1);
      FUN_146de41cc(&local_1e8,&local_1b0,&local_118);
      local_198 = (undefined8 ****)0x0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1a8 = (undefined8 ***)ppuVar1;
      FUN_146de3c6e(&local_1f8,ppuVar1,1);
      FUN_146de41cc(&local_1f8,&local_1b0,&local_118);
      local_208 = 0;
      pdStack_200 = (double *)0x0;
      ppuVar4 = (undefined8 **)pdStack_200;
      if ((ppuVar1 == (undefined8 **)0x0) || (ppuVar4 = ppuVar1, (longlong)ppuVar1 < 1)) {
        pdStack_200 = (double *)ppuVar4;
        local_218 = (undefined8 ***)0x0;
        local_228 = 0;
        local_238 = (undefined8 **)0x0;
        local_258 = 0;
        local_260 = 0;
        pdStack_220 = pdStack_200;
        pdStack_210 = pdStack_200;
      }
      else {
        local_208 = FUN_146de3b53(ppuVar1);
        pdStack_200 = (double *)ppuVar1;
        local_218 = (undefined8 **)FUN_146de3b53(ppuVar1);
        pdStack_210 = (double *)ppuVar1;
        local_258 = FUN_146de3b53(ppuVar1);
        local_260 = FUN_146de3b53(ppuVar1);
        local_228 = FUN_146de3b53(ppuVar1);
        pdStack_230 = (double *)0x0;
        pdStack_220 = (double *)ppuVar1;
        local_238 = (undefined8 *)FUN_146de3b53(ppuVar1);
      }
      pppuVar2 = (undefined8 ***)0x3ff0000000000000;
      ppppuVar3 = (undefined8 ****)&DAT_3ff0000000000000;
      lVar6 = 0;
      local_250 = 0;
      lVar5 = local_268;
      local_248 = param_2;
      pdStack_230 = (double *)ppuVar1;
      dVar11 = 1.0;
      while( true ) {
        dVar8 = 0.0;
        if (local_1c0 != 0) {
          local_110 = local_1c8;
          local_1a8 = &local_1c8;
          dVar8 = (double)FUN_146de3ea2(&local_118,local_f8,&local_1b0);
        }
        if ((dVar8 <= dVar12 * dVar12 * dVar7) || (local_240 <= lVar6)) break;
        local_1a8 = &local_1d8;
        dVar8 = 0.0;
        pppuStack_1a0 = &local_1c8;
        if (local_1c0 != 0) {
          local_110 = local_1d8;
          local_108 = local_1c8;
          dVar8 = (double)FUN_146de40ee(&local_118,local_f8,&local_1b0);
        }
        if (ABS(dVar8) < dVar9 * 4.930380657631324e-32) {
          local_170 = param_3[2];
          local_180 = *param_3;
          pppuStack_178 = param_3[1];
          local_1a8 = (undefined8 ***)*param_2;
          pppuStack_1a0 = (undefined8 ***)param_2[1];
          local_198 = (undefined8 ***)param_2[2];
          local_188 = (double **)param_1;
          FUN_1483d6b69(&local_1c8,&local_1b0,&local_118);
          FUN_146de611d(&local_1d8,&local_1c8,&local_1b0);
          dVar9 = 0.0;
          if (local_1c0 != 0) {
            local_110 = local_1c8;
            local_1a8 = &local_1c8;
            dVar9 = (double)FUN_146de3ea2(&local_118,local_f8,&local_1b0);
          }
          if (local_250 == 0) {
            lVar6 = 0;
          }
          local_250 = local_250 + 1;
          dVar8 = dVar9;
        }
        local_180 = (undefined8 ***)(((double)ppppuVar3 / (double)pppuVar2) * (dVar8 / dVar11));
        local_190 = (double *)lStack_1e0;
        local_170 = (undefined8 **)&local_1f8;
        local_158 = lStack_1e0;
        local_140 = &local_1e8;
        local_1a8 = &local_1c8;
        local_148 = pppuVar2;
        FUN_1483d5806(local_170,&local_1b0,&local_118);
        if ((undefined8 **)pdStack_200 != *(undefined8 ***)(lVar5 + 0x18)) {
          FUN_146de3c6e(&local_208,*(undefined8 ***)(lVar5 + 0x18),1);
        }
        FUN_1483d5988(lVar5,&local_1f8,&local_208);
        local_1b0 = (double **)param_1;
        local_1a8 = (undefined8 ***)&local_208;
        FUN_1483d5c86(&local_1e8,&local_1b0);
        local_1a8 = &local_1d8;
        pppuStack_1a0 = &local_1e8;
        if (lStack_1e0 == 0) {
          dVar11 = 0.0;
          local_190 = (double *)0;
        }
        else {
          local_110 = local_1d8;
          local_108 = local_1e8;
          dVar11 = (double)FUN_146de40ee(&local_118,local_f8,&local_1b0);
          local_190 = (double *)lStack_1e0;
        }
        ppppuVar3 = (undefined8 ****)(dVar8 / dVar11);
        pppuStack_178 = &local_1e8;
        local_1a8 = &local_1c8;
        local_180 = ppppuVar3;
        FUN_1483d5daf(&local_228,&local_1b0,&local_118);
        lVar5 = local_268;
        if ((undefined8 **)pdStack_210 != *(undefined8 ***)(local_268 + 0x18)) {
          FUN_146de3c6e(&local_218,*(undefined8 ***)(local_268 + 0x18),1);
        }
        FUN_1483d5988(lVar5,&local_228,&local_218);
        local_1b0 = (double **)param_1;
        local_1a8 = &local_218;
        FUN_1483d5c86(&local_238,&local_1b0);
        local_1a8 = (undefined8 ***)&local_238;
        if ((undefined8 **)pdStack_230 == (undefined8 **)0x0) {
          pppuVar2 = (undefined8 ***)0x0;
          param_2 = local_248;
        }
        else {
          local_110 = (undefined8 ***)local_238;
          dVar10 = (double)FUN_146de3ea2(&local_118,local_f8,&local_1b0);
          param_2 = local_248;
          dVar11 = 0.0;
          pppuVar2 = (undefined8 ***)0x0;
          if (0.0 < dVar10) {
            local_1a8 = (undefined8 ***)&local_238;
            pppuStack_1a0 = (undefined8 ***)&local_228;
            if ((undefined8 **)pdStack_220 != (undefined8 **)0x0) {
              local_110 = (undefined8 ***)local_238;
              local_108 = (undefined8 ***)local_228;
              dVar11 = (double)FUN_146de40ee(&local_118,local_f8,&local_1b0);
            }
            pppuVar2 = (undefined8 ***)(dVar11 / dVar10);
          }
        }
        local_190 = (double *)local_208;
        local_170 = local_218;
        local_f8[0] = *param_3;
        local_e8 = param_3[1];
        local_118 = local_f8;
        local_108 = (undefined8 ***)&local_1b1;
        pppuStack_1a0 = ppppuVar3;
        local_180 = pppuVar2;
        local_110 = &local_1b0;
        local_100 = param_3;
        FUN_1483d5ee8(&local_118);
        local_1a8 = (undefined8 ***)&local_228;
        local_190 = pdStack_230;
        pppuStack_178 = (undefined8 ***)&local_238;
        local_180 = pppuVar2;
        FUN_1483d5daf(&local_1c8,&local_1b0,&local_118);
        lVar6 = lVar6 + 1;
        dVar11 = dVar8;
      }
      dVar12 = 0.0;
      local_1a8 = &local_1c8;
      if (local_1c0 != 0) {
        local_110 = local_1c8;
        dVar12 = (double)FUN_146de3ea2(&local_118,local_f8,&local_1b0);
      }
      dVar12 = dVar12 / dVar7;
      if (dVar12 < 0.0) {
        dVar12 = sqrt(dVar12);
      }
      else {
        dVar12 = SQRT(dVar12);
      }
      *param_6 = dVar12;
      *param_5 = lVar6;
      FUN_1400020a8(local_238);
      FUN_1400020a8(local_228);
      FUN_1400020a8(local_260);
      FUN_1400020a8(local_258);
      FUN_1400020a8(local_218);
      FUN_1400020a8(local_208);
      FUN_1400020a8(local_1f8);
      FUN_1400020a8(local_1e8);
      goto LAB_1483d6260;
    }
  }
  local_1a8 = local_f8;
  local_f8[0] = (undefined8 ***)0x0;
  local_118 = *param_3;
  local_1b0 = (double **)&local_118;
  local_108 = param_3[1];
  pppuStack_1a0 = &local_1e8;
  local_198 = param_3;
  FUN_146de3bbc();
LAB_1483d6260:
  FUN_1400020a8(local_1d8);
  FUN_1400020a8(local_1c8);
  if ((local_e0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483d6acc FUN_1483d6acc body=156 status=ok
// SIG undefined FUN_1483d6acc(void)

undefined8 * FUN_1483d6acc(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146de3c6e(0,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10),1);
  FUN_1483cf981(param_1,param_2 + 8,&local_48);
  local_50 = 0xbff0000000000000;
  local_38 = *(undefined8 *)(param_2 + 0x40);
  local_48 = *(undefined4 *)(param_2 + 0x30);
  uStack_44 = *(undefined4 *)(param_2 + 0x34);
  uStack_40 = *(undefined4 *)(param_2 + 0x38);
  uStack_3c = *(undefined4 *)(param_2 + 0x3c);
  FUN_1483d56d4(*(undefined8 *)(param_2 + 0x28),&local_48,param_1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d6b69 FUN_1483d6b69 body=174 status=ok
// SIG undefined FUN_1483d6b69(void)

void FUN_1483d6b69(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1483cf981(&local_78,param_2 + 8,&local_58);
  local_60 = 0xbff0000000000000;
  local_48 = *(undefined8 *)(param_2 + 0x40);
  local_58 = *(undefined4 *)(param_2 + 0x30);
  uStack_54 = *(undefined4 *)(param_2 + 0x34);
  uStack_50 = *(undefined4 *)(param_2 + 0x38);
  uStack_4c = *(undefined4 *)(param_2 + 0x3c);
  FUN_1483d56d4(*(undefined8 *)(param_2 + 0x28),&local_58,&local_78);
  FUN_146de611d(param_1,&local_78,param_3);
  FUN_1400020a8(local_78);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d6c18 FUN_1483d6c18 body=143 status=ok
// SIG undefined FUN_1483d6c18(void)

void FUN_1483d6c18(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_2;
  local_38 = *(longlong *)(lVar2 + 0x58);
  if (*(longlong *)(param_1 + 8) != local_38) {
    FUN_146de3c6e(param_1,local_38,1);
    lVar2 = *param_2;
    local_38 = *(longlong *)(param_1 + 8);
  }
  lVar1 = param_2[1];
  local_28 = 0;
  FUN_146de41cc(param_1,local_40,&local_41);
  FUN_1483d6ca8(lVar2,lVar1,param_1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d6ca8 FUN_1483d6ca8 body=125 status=ok
// SIG undefined FUN_1483d6ca8(void)

void FUN_1483d6ca8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 < 0) {
    lVar1 = *(longlong *)(param_1 + 0x58) * 2;
  }
  *(longlong *)(param_1 + 0x180) = lVar1;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x170);
  FUN_1483d6d25(param_1 + 0x50,param_2,param_3,param_1 + 0xe0,param_1 + 0x180,param_1 + 0x178);
  *(uint *)(param_1 + 0x188) =
       (uint)(*(double *)(param_1 + 0x170) < *(double *)(param_1 + 0x178)) * 2;
  return;
}



// FUNCTION 1483d6d25 FUN_1483d6d25 body=2523 status=ok
// SIG undefined FUN_1483d6d25(void)

void FUN_1483d6d25(void **param_1,undefined8 *param_2,void *param_3,longlong param_4,
                  longlong *param_5,double *param_6)

{
  void *pvVar1;
  double dVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_278 [32];
  longlong local_258;
  undefined8 local_250;
  undefined8 local_248;
  void **local_240;
  longlong local_238;
  void *local_230;
  undefined8 *local_228;
  longlong local_220;
  void *local_218;
  void *pvStack_210;
  void *local_208;
  void *pvStack_200;
  undefined8 local_1f8;
  void *pvStack_1f0;
  undefined8 local_1e8;
  void *pvStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  void *local_1c8;
  longlong lStack_1c0;
  void *local_1b8;
  longlong local_1b0;
  void *local_1a8;
  longlong local_1a0;
  undefined1 local_191;
  void **local_190;
  void **local_188;
  void **local_180;
  void *local_178;
  void *local_170;
  double local_168;
  undefined8 *local_160;
  void **local_158;
  undefined8 *local_150;
  void *local_140;
  longlong local_138;
  double local_130;
  undefined8 *local_128;
  void **local_120;
  undefined1 local_f8 [8];
  void *local_f0;
  void *local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  dVar10 = *param_6;
  lVar5 = *param_5;
  pvVar1 = param_1[1];
  local_240 = param_1;
  local_188 = (void **)param_2;
  local_180 = param_1;
  local_178 = param_3;
  FUN_1483d7702(&local_1a8);
  pvVar3 = (void *)FUN_146de3b53(local_1a0);
  local_1b0 = local_1a0;
  local_1b8 = pvVar3;
  if (local_1a0 == 0) {
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    memcpy(pvVar3,local_1a8,local_1a0 << 3);
    local_188 = &local_1b8;
    local_f0 = pvVar3;
    uVar8 = FUN_146de3ea2(local_f8,&local_1c8);
    uVar11 = (undefined4)uVar8;
    uVar12 = (undefined4)((ulonglong)uVar8 >> 0x20);
  }
  if (param_2[1] != 0) {
    local_f0 = (void *)*param_2;
    local_188 = (void **)param_2;
    dVar6 = (double)FUN_146de3ea2(local_f8,&local_1c8,&local_190);
    if ((dVar6 != 0.0) || (NAN(dVar6))) {
      local_178 = (void *)0x0;
      local_1c8 = (void *)0x0;
      lStack_1c0 = 0;
      local_258 = param_4;
      local_220 = lVar5;
      local_188 = pvVar1;
      FUN_146de3c6e(&local_1c8,pvVar1,1);
      FUN_146de41cc(&local_1c8,&local_190,local_f8);
      local_178 = (void *)0x0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_188 = pvVar1;
      FUN_146de3c6e(&local_1d8,pvVar1,1);
      FUN_146de41cc(&local_1d8,&local_190,local_f8);
      local_1e8 = 0;
      pvStack_1e0 = (void *)0x0;
      pvVar3 = pvStack_1e0;
      local_228 = param_2;
      if ((pvVar1 == (void *)0x0) || (pvVar3 = pvVar1, (longlong)pvVar1 < 1)) {
        pvStack_1e0 = pvVar3;
        local_1f8 = 0;
        local_208 = (void *)0x0;
        local_218 = (void *)0x0;
        local_248 = 0;
        local_250 = 0;
        pvStack_200 = pvStack_1e0;
        pvStack_1f0 = pvStack_1e0;
      }
      else {
        local_1e8 = FUN_146de3b53(pvVar1);
        pvStack_1e0 = pvVar1;
        local_1f8 = FUN_146de3b53(pvVar1);
        pvStack_1f0 = pvVar1;
        local_248 = FUN_146de3b53(pvVar1);
        local_250 = FUN_146de3b53(pvVar1);
        local_208 = (void *)FUN_146de3b53(pvVar1);
        pvStack_210 = (void *)0x0;
        pvStack_200 = pvVar1;
        local_218 = (void *)FUN_146de3b53(pvVar1);
      }
      dVar2 = 1.0;
      dVar9 = 1.0;
      lVar5 = 0;
      local_238 = 0;
      lVar4 = local_258;
      uVar15 = 0;
      uVar16 = 0x3ff00000;
      local_230 = param_3;
      pvStack_210 = pvVar1;
      while( true ) {
        dVar7 = 0.0;
        if (local_1a0 != 0) {
          local_f0 = local_1a8;
          local_188 = &local_1a8;
          dVar7 = (double)FUN_146de3ea2(local_f8,&local_191,&local_190);
        }
        if ((dVar7 <= dVar10 * dVar10 * dVar6) || (local_220 <= lVar5)) break;
        uVar13 = 0;
        uVar14 = 0;
        local_180 = &local_1a8;
        if (local_1a0 != 0) {
          local_f0 = local_1b8;
          local_e8 = local_1a8;
          local_188 = &local_1b8;
          uVar8 = FUN_146de40ee(local_f8,&local_191,&local_190);
          uVar13 = (undefined4)uVar8;
          uVar14 = (undefined4)((ulonglong)uVar8 >> 0x20);
        }
        if (ABS((double)CONCAT44(uVar14,uVar13)) <
            (double)CONCAT44(uVar12,uVar11) * 4.930380657631324e-32) {
          local_188 = (void **)local_228;
          local_180 = local_240;
          local_178 = param_3;
          FUN_1483d778f(&local_1a8,&local_190,local_f8);
          FUN_146de611d(&local_1b8,&local_1a8,&local_190);
          uVar11 = 0;
          uVar12 = 0;
          if (local_1a0 != 0) {
            local_f0 = local_1a8;
            local_188 = &local_1a8;
            uVar8 = FUN_146de3ea2(local_f8,&local_191,&local_190);
            uVar11 = (undefined4)uVar8;
            uVar12 = (undefined4)((ulonglong)uVar8 >> 0x20);
          }
          if (local_238 == 0) {
            lVar5 = 0;
          }
          local_238 = local_238 + 1;
          uVar13 = uVar11;
          uVar14 = uVar12;
        }
        local_160 = (undefined8 *)
                    ((dVar9 / dVar2) *
                    ((double)CONCAT44(uVar14,uVar13) / (double)CONCAT44(uVar16,uVar15)));
        local_170 = (void *)lStack_1c0;
        local_150 = &local_1d8;
        local_138 = lStack_1c0;
        local_120 = &local_1c8;
        local_188 = &local_1a8;
        local_128 = (undefined8 *)dVar2;
        FUN_1483d5806(local_150,&local_190,local_f8);
        if (pvStack_1e0 != *(void **)(lVar4 + 0x18)) {
          FUN_146de3c6e(&local_1e8,*(void **)(lVar4 + 0x18),1);
        }
        FUN_1483d5988(lVar4,&local_1d8,&local_1e8);
        local_190 = local_240;
        local_188 = (void **)&local_1e8;
        FUN_1483d5c86(&local_1c8,&local_190);
        local_180 = &local_1c8;
        if (lStack_1c0 == 0) {
          dVar9 = 0.0;
          local_170 = (void *)0;
        }
        else {
          local_f0 = local_1b8;
          local_e8 = local_1c8;
          local_188 = &local_1b8;
          dVar9 = (double)FUN_146de40ee(local_f8,&local_191,&local_190);
          local_170 = (void *)lStack_1c0;
        }
        dVar9 = (double)CONCAT44(uVar14,uVar13) / dVar9;
        local_158 = &local_1c8;
        local_188 = &local_1a8;
        local_160 = (undefined8 *)dVar9;
        FUN_1483d5daf(&local_208,&local_190,local_f8);
        lVar4 = local_258;
        if (pvStack_1f0 != *(void **)(local_258 + 0x18)) {
          FUN_146de3c6e(&local_1f8,*(void **)(local_258 + 0x18),1);
        }
        FUN_1483d5988(lVar4,&local_208,&local_1f8);
        local_190 = local_240;
        local_188 = (void **)&local_1f8;
        FUN_1483d5c86(&local_218,&local_190);
        local_188 = &local_218;
        if (pvStack_210 == (void *)0x0) {
          dVar2 = 0.0;
          param_3 = local_230;
        }
        else {
          local_f0 = local_218;
          dVar7 = (double)FUN_146de3ea2(local_f8,&local_191,&local_190);
          param_3 = local_230;
          uVar15 = 0;
          uVar16 = 0;
          dVar2 = 0.0;
          if (0.0 < dVar7) {
            local_188 = &local_218;
            local_180 = &local_208;
            if (pvStack_200 != (void *)0x0) {
              local_f0 = local_218;
              local_e8 = local_208;
              uVar8 = FUN_146de40ee(local_f8,&local_191,&local_190);
              uVar15 = (undefined4)uVar8;
              uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
            }
            dVar2 = (double)CONCAT44(uVar16,uVar15) / dVar7;
          }
        }
        local_178 = pvStack_1e0;
        local_160 = &local_1e8;
        local_140 = pvStack_1f0;
        local_128 = &local_1f8;
        local_168 = dVar9;
        local_130 = dVar2;
        FUN_1483d782d(param_3,&local_190,local_f8);
        local_188 = &local_208;
        local_170 = pvStack_210;
        local_158 = &local_218;
        local_160 = (undefined8 *)dVar2;
        FUN_1483d5daf(&local_1a8,&local_190,local_f8);
        lVar5 = lVar5 + 1;
        uVar15 = uVar13;
        uVar16 = uVar14;
      }
      dVar10 = 0.0;
      local_188 = &local_1a8;
      if (local_1a0 != 0) {
        local_f0 = local_1a8;
        dVar10 = (double)FUN_146de3ea2(local_f8,&local_191,&local_190);
      }
      dVar10 = dVar10 / dVar6;
      if (dVar10 < 0.0) {
        dVar10 = sqrt(dVar10);
      }
      else {
        dVar10 = SQRT(dVar10);
      }
      *param_6 = dVar10;
      *param_5 = lVar5;
      FUN_1400020a8(local_218);
      FUN_1400020a8(local_208);
      FUN_1400020a8(local_250);
      FUN_1400020a8(local_248);
      FUN_1400020a8(local_1f8);
      FUN_1400020a8(local_1e8);
      FUN_1400020a8(local_1d8);
      FUN_1400020a8(local_1c8);
      goto LAB_1483d6ed2;
    }
  }
  local_188 = *(void ***)((longlong)param_3 + 8);
  local_178 = (void *)0x0;
  FUN_146de41cc(param_3,&local_190,local_f8);
LAB_1483d6ed2:
  FUN_1400020a8(local_1b8);
  FUN_1400020a8(local_1a8);
  if ((local_e0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483d7702 FUN_1483d7702 body=140 status=ok
// SIG undefined FUN_1483d7702(void)

undefined8 * FUN_1483d7702(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_146de3c6e(0,*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10),1);
  FUN_146de611d(param_1,*(undefined8 *)(param_2 + 8),&local_28);
  local_28 = 0xbff0000000000000;
  FUN_1483d5d2c(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),param_1,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d778f FUN_1483d778f body=157 status=ok
// SIG undefined FUN_1483d778f(void)

void FUN_1483d778f(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_146de611d(&local_48,*(undefined8 *)(param_2 + 8),&local_38);
  local_38 = 0xbff0000000000000;
  FUN_1483d5d2c(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),&local_48,&local_38)
  ;
  FUN_146de611d(param_1,&local_48,param_3);
  FUN_1400020a8(local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d782d FUN_1483d782d body=230 status=ok
// SIG undefined FUN_1483d782d(void)

void FUN_1483d782d(longlong *param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 local_50 [16];
  double local_40;
  longlong local_30;
  double local_20;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = *(double *)(param_2 + 0x28);
  local_70 = local_50;
  local_30 = **(longlong **)(param_2 + 0x30);
  local_20 = *(double *)(param_2 + 0x60);
  local_10 = **(longlong **)(param_2 + 0x68);
  local_58 = *param_1;
  local_78 = &local_58;
  lVar6 = param_1[1];
  if (1 < lVar6) {
    lVar9 = 0;
    do {
      pdVar1 = (double *)(local_10 + lVar9 * 8);
      dVar7 = pdVar1[1];
      pdVar2 = (double *)(local_30 + lVar9 * 8);
      dVar8 = pdVar2[1];
      pdVar3 = (double *)(local_58 + lVar9 * 8);
      dVar5 = pdVar3[1];
      pdVar4 = (double *)(local_58 + lVar9 * 8);
      *pdVar4 = *pdVar2 * local_40 + *pdVar1 * local_20 + *pdVar3;
      pdVar4[1] = dVar8 * local_40 + dVar7 * local_20 + dVar5;
      lVar9 = lVar9 + 2;
    } while (lVar9 < (longlong)(lVar6 - (lVar6 >> 0x3f) & 0xfffffffffffffffeU));
  }
  local_68 = param_3;
  local_60 = param_1;
  FUN_1483d7914(&local_78);
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d7914 FUN_1483d7914 body=70 status=ok
// SIG undefined FUN_1483d7914(void)

void FUN_1483d7914(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_2 < param_3) {
    do {
      lVar1 = param_1[1];
      *(double *)(*(longlong *)*param_1 + param_2 * 8) =
           *(double *)(lVar1 + 0x10) * *(double *)(*(longlong *)(lVar1 + 0x20) + param_2 * 8) +
           *(double *)(lVar1 + 0x30) * *(double *)(*(longlong *)(lVar1 + 0x40) + param_2 * 8) +
           *(double *)(*(longlong *)*param_1 + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483d795a FUN_1483d795a body=136 status=ok
// SIG undefined FUN_1483d795a(void)

void FUN_1483d795a(longlong param_1,undefined8 param_2)

{
  FUN_1483d424a(param_1 + 0x18);
  FUN_1483d79e2(param_1 + 0xf0,param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x19c) = 1;
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x150);
  FUN_1483d424a(param_1 + 0x18,param_2);
  FUN_1483d8668(param_1 + 0xf0,param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x19d) = 1;
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x150);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



// FUNCTION 1483d79e2 FUN_1483d79e2 body=383 status=ok
// SIG undefined FUN_1483d79e2(void)

void FUN_1483d79e2(undefined1 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_158 [32];
  undefined1 local_138 [8];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = 0;
  local_a8[0] = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1483d7bef(local_a8);
  local_138[0] = 0;
  local_f0[0] = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_130 = param_2;
  FUN_1483d7fe4(local_f0,local_138);
  local_60 = 0;
  local_138[0] = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_58 = local_f0;
  local_50 = local_a8;
  FUN_1483aed9d(local_138);
  FUN_1483d7b62(local_138,param_1 + 0x68);
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    if (lVar1 < 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_141729f83();
    }
    if (0 < (int)(uint)lVar1) {
      uVar4 = 0;
      do {
        *(int *)(lVar3 + (longlong)*(int *)(*(longlong *)(param_1 + 0x68) + uVar4 * 4) * 4) =
             (int)uVar4;
        uVar4 = uVar4 + 1;
      } while (((uint)lVar1 & 0x7fffffff) != uVar4);
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(longlong *)(param_1 + 0x78) = lVar3;
  *(longlong *)(param_1 + 0x80) = lVar1;
  FUN_1400020a8(uVar2);
  *(undefined2 *)(param_1 + 0x5c) = 1;
  *param_1 = 1;
  FUN_146de5508(local_138);
  FUN_146de5508(local_f0);
  FUN_146de5508(local_a8);
  if ((local_40 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483d7b62 FUN_1483d7b62 body=140 status=ok
// SIG undefined FUN_1483d7b62(void)

void FUN_1483d7b62(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_60 = 0xffffffffffffffff;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_146de45bc(local_68,0,0);
  FUN_1483d82a0(param_1,local_68);
  FUN_146de4664(local_68,param_2);
  FUN_146de5508(local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d7bef FUN_1483d7bef body=1012 status=ok
// SIG undefined FUN_1483d7bef(void)

void FUN_1483d7bef(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = *(longlong *)(param_2 + 8);
  local_d8 = param_1;
  if (*param_2 == '\x01') {
    FUN_146de45bc(param_1,*(undefined8 *)(param_2 + 0x10),lVar6);
    *(undefined8 *)(param_1 + 0x38) = 0;
    memset(*(void **)(param_1 + 0x18),0,*(longlong *)(param_1 + 8) * 4 + 4);
    if (*(void **)(param_1 + 0x20) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x20),0,*(longlong *)(param_1 + 8) << 2);
    }
    lVar9 = *(longlong *)(param_2 + 8);
    lVar8 = *(longlong *)(param_2 + 0x10);
    lVar5 = lVar9;
    if (lVar9 < lVar8) {
      lVar5 = lVar8;
    }
    lVar7 = lVar8 * lVar9;
    if (lVar5 * 2 < lVar8 * lVar9) {
      lVar7 = lVar5 * 2;
    }
    if (*(longlong *)(param_1 + 0x40) < lVar7 + *(longlong *)(param_1 + 0x38)) {
      FUN_146de55aa(local_d8 + 0x28);
    }
    lVar9 = local_d8;
    if (0 < lVar6) {
      local_c0 = local_d8 + 0x28;
      lVar8 = 0;
      do {
        *(undefined4 *)(*(longlong *)(lVar9 + 0x18) + 4 + lVar8 * 4) =
             *(undefined4 *)(*(longlong *)(lVar9 + 0x18) + lVar8 * 4);
        lVar5 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + lVar8 * 4);
        if (*(longlong *)(param_2 + 0x38) == 0) {
          lVar7 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 4 + lVar8 * 4);
        }
        else {
          lVar7 = *(int *)(*(longlong *)(param_2 + 0x38) + lVar8 * 4) + lVar5;
        }
        if (lVar5 < lVar7) {
          local_c8 = *(longlong *)(param_2 + 0x30);
          local_d0 = *(longlong *)(param_2 + 0x28);
          do {
            uVar1 = *(undefined8 *)(local_c8 + lVar5 * 8);
            uVar2 = *(undefined4 *)(local_d0 + lVar5 * 4);
            iVar3 = *(int *)(*(longlong *)(lVar9 + 0x18) + 4 + lVar8 * 4);
            *(int *)(*(longlong *)(lVar9 + 0x18) + 4 + lVar8 * 4) = iVar3 + 1;
            lVar9 = *(longlong *)(lVar9 + 0x38);
            FUN_146de554a(local_c0,lVar9 + 1,0);
            *(undefined8 *)(*(longlong *)(local_d8 + 0x28) + lVar9 * 8) = 0;
            *(undefined4 *)(*(longlong *)(local_d8 + 0x30) + lVar9 * 4) = uVar2;
            *(undefined8 *)(*(longlong *)(local_d8 + 0x28) + (longlong)iVar3 * 8) = uVar1;
            lVar5 = lVar5 + 1;
            lVar9 = local_d8;
          } while (lVar7 != lVar5);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar6);
    }
    if ((*(longlong *)(lVar9 + 0x20) == 0) && (lVar6 = *(longlong *)(lVar9 + 8), -1 < lVar6)) {
      uVar2 = *(undefined4 *)(lVar9 + 0x38);
      lVar8 = lVar6;
      do {
        if (*(int *)(*(longlong *)(lVar9 + 0x18) + lVar8 * 4) != 0) goto LAB_1483d7f05;
        bVar4 = 0 < lVar8;
        lVar8 = lVar8 + -1;
      } while (bVar4);
      lVar8 = -1;
LAB_1483d7f05:
      if (lVar8 < lVar6) {
        do {
          *(undefined4 *)(*(longlong *)(local_d8 + 0x18) + 4 + lVar8 * 4) = uVar2;
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(longlong *)(local_d8 + 8));
      }
    }
  }
  else {
    local_b8[0] = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    lStack_98 = 0;
    local_90 = 0;
    lStack_88 = 0;
    local_80 = 0;
    lStack_78 = 0;
    FUN_146de45bc(local_b8,*(undefined8 *)(param_2 + 0x10),lVar6);
    lVar9 = *(longlong *)(param_2 + 8);
    lVar8 = *(longlong *)(param_2 + 0x10);
    lVar5 = lVar9;
    if (lVar9 < lVar8) {
      lVar5 = lVar8;
    }
    lVar7 = lVar8 * lVar9;
    if (lVar5 * 2 < lVar8 * lVar9) {
      lVar7 = lVar5 * 2;
    }
    if (lStack_78 < lVar7 + local_80) {
      FUN_146de55aa(&local_90);
    }
    if (0 < lVar6) {
      lVar9 = 0;
      local_d0 = lVar6;
      do {
        *(undefined4 *)(local_a0 + 4 + lVar9 * 4) = *(undefined4 *)(local_a0 + lVar9 * 4);
        lVar6 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + lVar9 * 4);
        if (*(longlong *)(param_2 + 0x38) == 0) {
          lVar8 = (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 4 + lVar9 * 4);
        }
        else {
          lVar8 = *(int *)(*(longlong *)(param_2 + 0x38) + lVar9 * 4) + lVar6;
        }
        if (lVar6 < lVar8) {
          local_c8 = *(longlong *)(param_2 + 0x30);
          lVar5 = *(longlong *)(param_2 + 0x28);
          do {
            lVar7 = local_80;
            uVar1 = *(undefined8 *)(local_c8 + lVar6 * 8);
            uVar2 = *(undefined4 *)(lVar5 + lVar6 * 4);
            iVar3 = *(int *)(local_a0 + 4 + lVar9 * 4);
            *(int *)(local_a0 + 4 + lVar9 * 4) = iVar3 + 1;
            FUN_146de554a(&local_90,local_80 + 1,0);
            *(undefined8 *)(local_90 + lVar7 * 8) = 0;
            *(undefined4 *)(lStack_88 + lVar7 * 4) = uVar2;
            *(undefined8 *)(local_90 + (longlong)iVar3 * 8) = uVar1;
            lVar6 = lVar6 + 1;
          } while (lVar8 != lVar6);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != local_d0);
    }
    if ((lStack_98 == 0) && (-1 < local_b0)) {
      lVar6 = local_b0;
      do {
        if (*(int *)(local_a0 + lVar6 * 4) != 0) goto joined_r0x0001483d7f61;
        bVar4 = 0 < lVar6;
        lVar6 = lVar6 + -1;
      } while (bVar4);
      lVar6 = -1;
joined_r0x0001483d7f61:
      for (; lVar6 < local_b0; lVar6 = lVar6 + 1) {
        *(undefined4 *)(local_a0 + 4 + lVar6 * 4) = (undefined4)local_80;
      }
    }
    local_b8[0] = 1;
    FUN_146de5a4e(local_d8,local_b8);
    FUN_146de5508(local_b8);
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d7fe4 FUN_1483d7fe4 body=699 status=ok
// SIG undefined FUN_1483d7fe4(void)

longlong FUN_1483d7fe4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [8];
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_91;
  longlong *local_90;
  undefined4 *local_88;
  undefined1 *local_80;
  longlong *local_78;
  undefined4 local_70 [2];
  longlong local_68;
  longlong local_60;
  longlong local_48 [2];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *(longlong *)(param_2 + 8);
  local_e0[0] = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  lStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_146de45bc(local_e0,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
  local_78 = &local_68;
  local_68 = local_c8;
  local_60 = local_d8;
  local_88 = local_70;
  local_70[0] = 0;
  local_90 = local_48;
  local_48[0] = local_c8;
  local_38 = local_d8;
  local_80 = &local_91;
  FUN_146de119a();
  lVar12 = *(longlong *)(lVar2 + 8);
  if (0 < lVar12) {
    lVar11 = 0;
    do {
      lVar13 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x20) + lVar11 * 4);
      if (*(longlong *)(lVar2 + 0x38) == 0) {
        lVar14 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x20) + 4 + lVar11 * 4);
      }
      else {
        lVar14 = *(int *)(*(longlong *)(lVar2 + 0x38) + lVar11 * 4) + lVar13;
      }
      if (lVar13 < lVar14) {
        lVar12 = *(longlong *)(lVar2 + 0x28);
        do {
          piVar1 = (int *)(local_c8 + (longlong)*(int *)(lVar12 + lVar13 * 4) * 4);
          *piVar1 = *piVar1 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar14 != lVar13);
        lVar12 = *(longlong *)(lVar2 + 8);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < lVar12);
  }
  lVar11 = 0;
  iVar18 = 0;
  lVar12 = 0;
  if (local_d8 != 0) {
    iVar18 = 0;
    if (local_d8 < 1) {
      lVar11 = 0;
      lVar12 = local_d8;
    }
    else {
      lVar11 = FUN_141729f83();
      lVar12 = local_d8;
      if (0 < local_d8) {
        lVar13 = 0;
        iVar17 = 0;
        do {
          iVar18 = *(int *)(local_c8 + lVar13 * 4) + iVar17;
          *(int *)(local_c8 + lVar13 * 4) = iVar17;
          *(int *)(lVar11 + lVar13 * 4) = iVar17;
          lVar13 = lVar13 + 1;
          iVar17 = iVar18;
        } while (lVar13 < local_d8);
      }
    }
  }
  *(int *)(local_c8 + lVar12 * 4) = iVar18;
  FUN_146de554a(&local_b8,(longlong)iVar18,0);
  lVar12 = *(longlong *)(lVar2 + 8);
  if (0 < lVar12) {
    lVar13 = 0;
    do {
      lVar14 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x20) + lVar13 * 4);
      if (*(longlong *)(lVar2 + 0x38) == 0) {
        lVar15 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x20) + 4 + lVar13 * 4);
      }
      else {
        lVar15 = *(int *)(*(longlong *)(lVar2 + 0x38) + lVar13 * 4) + lVar14;
      }
      if (lVar14 < lVar15) {
        lVar12 = *(longlong *)(lVar2 + 0x30);
        lVar3 = *(longlong *)(lVar2 + 0x28);
        do {
          lVar16 = (longlong)*(int *)(lVar3 + lVar14 * 4);
          iVar18 = *(int *)(lVar11 + lVar16 * 4);
          *(int *)(lVar11 + lVar16 * 4) = iVar18 + 1;
          *(int *)(lStack_b0 + (longlong)iVar18 * 4) = (int)lVar13;
          *(undefined8 *)(local_b8 + (longlong)iVar18 * 8) = *(undefined8 *)(lVar12 + lVar14 * 8);
          lVar14 = lVar14 + 1;
        } while (lVar15 != lVar14);
        lVar12 = *(longlong *)(lVar2 + 8);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < lVar12);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = local_c8;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uStack_d0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = local_d8;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uStack_c0;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x28) = local_b8;
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x30) = lStack_b0;
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = local_a8;
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uStack_a0;
  local_d8 = uVar6;
  uStack_d0 = uVar5;
  local_c8 = uVar4;
  uStack_c0 = uVar7;
  local_b8 = lVar2;
  lStack_b0 = uVar8;
  local_a8 = uVar9;
  uStack_a0 = uVar10;
  FUN_1400020a8(lVar11);
  FUN_146de5508(local_e0);
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1483d82a0 FUN_1483d82a0 body=266 status=ok
// SIG undefined FUN_1483d82a0(void)

void FUN_1483d82a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined8 local_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90[0] = 0;
  local_88 = 0xffffffffffffffff;
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  lStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_146de45bc(local_90,0,0);
  local_48 = 0;
  local_40 = (undefined1 *)param_1;
  FUN_1483d83ac(local_90);
  if (0 < local_80) {
    lVar4 = 0;
    lVar1 = local_80;
    do {
      lVar2 = (longlong)*(int *)(lStack_78 + lVar4 * 4);
      if (local_70 == 0) {
        lVar3 = (longlong)*(int *)(lStack_78 + 4 + lVar4 * 4);
      }
      else {
        lVar3 = *(int *)(local_70 + lVar4 * 4) + lVar2;
      }
      if (lVar3 - lVar2 != 0 && lVar2 <= lVar3) {
        memset((void *)(lStack_68 + lVar2 * 8),0,(lVar3 - lVar2) * 8);
        lVar1 = local_80;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar1);
  }
  local_48 = 0;
  local_40 = local_90;
  local_38 = param_1;
  FUN_1483aed36(param_2);
  FUN_146de5508(local_90);
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483d83ac FUN_1483d83ac body=699 status=ok
// SIG undefined FUN_1483d83ac(void)

longlong FUN_1483d83ac(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [8];
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_91;
  longlong *local_90;
  undefined4 *local_88;
  undefined1 *local_80;
  longlong *local_78;
  undefined4 local_70 [2];
  longlong local_68;
  longlong local_60;
  longlong local_48 [2];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *(longlong *)(param_2 + 8);
  local_e0[0] = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  lStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_146de45bc(local_e0,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
  local_78 = &local_68;
  local_68 = local_c8;
  local_60 = local_d8;
  local_88 = local_70;
  local_70[0] = 0;
  local_90 = local_48;
  local_48[0] = local_c8;
  local_38 = local_d8;
  local_80 = &local_91;
  FUN_146de119a();
  lVar12 = *(longlong *)(lVar2 + 8);
  if (0 < lVar12) {
    lVar11 = 0;
    do {
      lVar13 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + lVar11 * 4);
      if (*(longlong *)(lVar2 + 0x20) == 0) {
        lVar14 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + 4 + lVar11 * 4);
      }
      else {
        lVar14 = *(int *)(*(longlong *)(lVar2 + 0x20) + lVar11 * 4) + lVar13;
      }
      if (lVar13 < lVar14) {
        lVar12 = *(longlong *)(lVar2 + 0x30);
        do {
          piVar1 = (int *)(local_c8 + (longlong)*(int *)(lVar12 + lVar13 * 4) * 4);
          *piVar1 = *piVar1 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar14 != lVar13);
        lVar12 = *(longlong *)(lVar2 + 8);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < lVar12);
  }
  lVar11 = 0;
  iVar18 = 0;
  lVar12 = 0;
  if (local_d8 != 0) {
    iVar18 = 0;
    if (local_d8 < 1) {
      lVar11 = 0;
      lVar12 = local_d8;
    }
    else {
      lVar11 = FUN_141729f83();
      lVar12 = local_d8;
      if (0 < local_d8) {
        lVar13 = 0;
        iVar17 = 0;
        do {
          iVar18 = *(int *)(local_c8 + lVar13 * 4) + iVar17;
          *(int *)(local_c8 + lVar13 * 4) = iVar17;
          *(int *)(lVar11 + lVar13 * 4) = iVar17;
          lVar13 = lVar13 + 1;
          iVar17 = iVar18;
        } while (lVar13 < local_d8);
      }
    }
  }
  *(int *)(local_c8 + lVar12 * 4) = iVar18;
  FUN_146de554a(&local_b8,(longlong)iVar18,0);
  lVar12 = *(longlong *)(lVar2 + 8);
  if (0 < lVar12) {
    lVar13 = 0;
    do {
      lVar14 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + lVar13 * 4);
      if (*(longlong *)(lVar2 + 0x20) == 0) {
        lVar15 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x18) + 4 + lVar13 * 4);
      }
      else {
        lVar15 = *(int *)(*(longlong *)(lVar2 + 0x20) + lVar13 * 4) + lVar14;
      }
      if (lVar14 < lVar15) {
        lVar12 = *(longlong *)(lVar2 + 0x28);
        lVar3 = *(longlong *)(lVar2 + 0x30);
        do {
          lVar16 = (longlong)*(int *)(lVar3 + lVar14 * 4);
          iVar18 = *(int *)(lVar11 + lVar16 * 4);
          *(int *)(lVar11 + lVar16 * 4) = iVar18 + 1;
          *(int *)(lStack_b0 + (longlong)iVar18 * 4) = (int)lVar13;
          *(undefined8 *)(local_b8 + (longlong)iVar18 * 8) = *(undefined8 *)(lVar12 + lVar14 * 8);
          lVar14 = lVar14 + 1;
        } while (lVar15 != lVar14);
        lVar12 = *(longlong *)(lVar2 + 8);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < lVar12);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = local_c8;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uStack_d0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = local_d8;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uStack_c0;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x28) = local_b8;
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x30) = lStack_b0;
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = local_a8;
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uStack_a0;
  local_d8 = uVar6;
  uStack_d0 = uVar5;
  local_c8 = uVar4;
  uStack_c0 = uVar7;
  local_b8 = lVar2;
  lStack_b0 = uVar8;
  local_a8 = uVar9;
  uStack_a0 = uVar10;
  FUN_1400020a8(lVar11);
  FUN_146de5508(local_e0);
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1483d8668 FUN_1483d8668 body=2705 status=ok
// SIG undefined FUN_1483d8668(void)

void FUN_1483d8668(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_278 [40];
  ulonglong local_250;
  ulonglong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  ulonglong local_220;
  ulonglong local_218;
  undefined1 local_210 [8];
  undefined8 local_208;
  undefined8 local_200;
  longlong lStack_1f8;
  longlong local_1f0;
  longlong lStack_1e8;
  longlong local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  ulonglong uStack_1c0;
  longlong local_1b8;
  ulonglong uStack_1b0;
  longlong local_1a8;
  ulonglong uStack_1a0;
  longlong local_190;
  longlong local_188;
  longlong *local_178;
  ulonglong local_170;
  ulonglong local_160;
  longlong local_158;
  longlong local_150;
  longlong *local_140;
  ulonglong local_138;
  ulonglong local_128;
  longlong local_120;
  ulonglong local_118;
  longlong *local_108;
  undefined8 local_100;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  undefined4 local_d4;
  longlong *local_d0;
  undefined8 local_c8;
  ulonglong local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  uVar12 = *(ulonglong *)(param_2 + 8);
  lVar5 = param_1 + 8;
  FUN_146dd941a(lVar5,uVar12,uVar12);
  local_1a8 = 0;
  uStack_1a0 = 0;
  uVar19 = uStack_1a0;
  local_230 = lVar5;
  if ((uVar12 == 0) || (uVar19 = uVar12, (longlong)uVar12 < 1)) {
    uStack_1a0 = uVar19;
    local_1b8 = 0;
    local_1c8 = 0;
    uStack_1b0 = uStack_1a0;
  }
  else {
    local_1a8 = FUN_146de3b53(uVar12);
    uStack_1a0 = uVar12;
    local_1b8 = FUN_141729f83(uVar12);
    uStack_1c0 = 0;
    uStack_1b0 = uVar12;
    local_1c8 = FUN_141729f83(uVar12);
  }
  local_210[0] = 0;
  local_208 = 0xffffffffffffffff;
  local_200 = 0;
  lStack_1f8 = 0;
  local_1f0 = 0;
  lStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  uStack_1c0 = uVar12;
  FUN_146dd941a(local_210,0,0);
  local_e0 = param_1 + 0x78;
  local_e8 = param_2;
  FUN_1483d9316(local_210,&local_e8);
  local_e0 = uStack_1c0;
  local_d4 = 0xffffffff;
  FUN_146de04ef(&local_1c8,&local_e8,&local_120);
  local_e0 = uStack_1b0;
  local_d4 = 0;
  FUN_146de04ef(&local_1b8,&local_e8,&local_120);
  local_e0 = uStack_1a0;
  local_d0 = (longlong *)0x0;
  FUN_146de41cc(&local_1a8,&local_e8,&local_120);
  lVar5 = ((longlong)*(int *)(param_1 + 0x58) * (longlong)*(int *)(param_2 + 0x1c)) /
          (longlong)uVar12;
  local_248 = lVar5 + 1;
  if ((longlong)uVar12 <= lVar5) {
    local_248 = uVar12;
  }
  local_248 = local_248 - ((longlong)local_248 >> 0x3f);
  if (*(longlong *)(param_1 + 0x48) <
      (longlong)((local_248 | 1) * uVar12 + *(longlong *)(param_1 + 0x40))) {
    FUN_146de55aa(param_1 + 0x30);
  }
  if (0 < (longlong)uVar12) {
    local_248 = (longlong)local_248 >> 1;
    local_228 = param_1 + 0x30;
    local_240 = 2;
    local_238 = 0;
    uVar19 = 0;
    local_220 = uVar12;
    do {
      uVar18 = (undefined4)uVar19;
      *(undefined4 *)(local_1b8 + uVar19 * 4) = uVar18;
      *(undefined8 *)(local_1a8 + uVar19 * 8) = 0;
      *(undefined4 *)(local_1c8 + uVar19 * 4) = uVar18;
      lVar5 = (longlong)*(int *)(lStack_1f8 + uVar19 * 4);
      if (local_1f0 == 0) {
        lVar6 = (longlong)*(int *)(lStack_1f8 + 4 + uVar19 * 4);
      }
      else {
        lVar6 = *(int *)(local_1f0 + uVar19 * 4) + lVar5;
      }
      uVar23 = 1;
      if (lVar6 <= lVar5) goto LAB_1483d8fec;
      lVar7 = 1;
      dVar20 = 0.0;
      lVar8 = 0;
      do {
        iVar11 = *(int *)(local_1e0 + lVar5 * 4);
        uVar12 = (ulonglong)iVar11;
        if ((longlong)uVar12 < (longlong)uVar19) {
          *(int *)(local_1b8 + lVar8 * 4) = iVar11;
          *(undefined8 *)(local_1a8 + lVar8 * 8) = *(undefined8 *)(lStack_1e8 + lVar5 * 8);
          *(int *)(local_1c8 + uVar12 * 4) = (int)lVar8;
          lVar8 = lVar8 + 1;
        }
        else if (uVar19 == uVar12) {
          *(undefined8 *)(local_1a8 + uVar19 * 8) = *(undefined8 *)(lStack_1e8 + lVar5 * 8);
        }
        else {
          lVar15 = lVar7 + uVar19;
          *(int *)(local_1b8 + lVar15 * 4) = iVar11;
          *(undefined8 *)(local_1a8 + lVar15 * 8) = *(undefined8 *)(lStack_1e8 + lVar5 * 8);
          *(int *)(local_1c8 + uVar12 * 4) = (int)lVar15;
          lVar7 = lVar7 + 1;
        }
        dVar21 = *(double *)(lStack_1e8 + lVar5 * 8);
        dVar20 = dVar20 + dVar21 * dVar21;
        lVar5 = lVar5 + 1;
      } while (lVar6 != lVar5);
      if ((dVar20 == 0.0) && (!NAN(dVar20))) goto LAB_1483d8fec;
      if (dVar20 < 0.0) {
        dVar20 = sqrt(dVar20);
      }
      else {
        dVar20 = SQRT(dVar20);
      }
      if (lVar8 < 1) {
        local_250 = 0;
      }
      else {
        lVar5 = 0;
        local_250 = 0;
        lVar6 = 0;
        do {
          iVar11 = *(int *)(local_1b8 + lVar6 * 4);
          lVar15 = (longlong)iVar11;
          if (1 < lVar8 - lVar6) {
            lVar15 = 1;
            lVar16 = 0;
            iVar10 = iVar11;
            do {
              iVar2 = *(int *)(local_1b8 + lVar5 + lVar15 * 4);
              if (iVar2 < iVar10) {
                lVar16 = lVar15;
                iVar10 = iVar2;
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < lVar8 - lVar6);
            lVar15 = (longlong)iVar10;
            if (iVar10 != iVar11) {
              lVar16 = lVar16 + lVar6;
              *(undefined4 *)(local_1b8 + lVar6 * 4) = *(undefined4 *)(local_1b8 + lVar16 * 4);
              *(int *)(local_1b8 + lVar16 * 4) = iVar11;
              *(int *)(local_1c8 + lVar15 * 4) = (int)lVar6;
              *(int *)(local_1c8 + (longlong)iVar11 * 4) = (int)lVar16;
              uVar1 = *(undefined8 *)(local_1a8 + lVar6 * 8);
              *(undefined8 *)(local_1a8 + lVar6 * 8) = *(undefined8 *)(local_1a8 + lVar16 * 8);
              *(undefined8 *)(local_1a8 + lVar16 * 8) = uVar1;
              iVar11 = iVar10;
            }
          }
          *(undefined4 *)(local_1c8 + lVar15 * 4) = 0xffffffff;
          lVar16 = *(longlong *)(param_1 + 0x30);
          lVar3 = *(longlong *)(param_1 + 0x38);
          lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar15 * 4);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar15 * 4);
          }
          else {
            lVar15 = *(int *)(*(longlong *)(param_1 + 0x28) + lVar15 * 4) + lVar13;
          }
          lVar14 = lVar13;
          if (lVar13 < lVar15) {
            do {
              lVar14 = lVar13;
              if (iVar11 <= *(int *)(lVar3 + lVar13 * 4)) break;
              lVar13 = lVar13 + 1;
              lVar14 = lVar15;
            } while (lVar15 != lVar13);
          }
          dVar21 = *(double *)(local_1a8 + lVar6 * 8) / *(double *)(lVar16 + lVar14 * 8);
          if (*(double *)(param_1 + 0x50) < ABS(dVar21)) {
            lVar14 = lVar14 + 1;
            if (lVar14 < lVar15) {
              do {
                dVar22 = *(double *)(lVar16 + lVar14 * 8) * dVar21;
                iVar10 = *(int *)(lVar3 + lVar14 * 4);
                lVar13 = (longlong)iVar10;
                lVar17 = (longlong)*(int *)(local_1c8 + lVar13 * 4);
                if (lVar17 == -1) {
                  lVar17 = lVar7 + uVar19;
                  if (lVar13 < (longlong)uVar19) {
                    lVar17 = lVar8;
                  }
                  lVar8 = lVar8 + (ulonglong)(lVar13 < (longlong)uVar19);
                  lVar7 = lVar7 + (ulonglong)((longlong)uVar19 <= lVar13);
                  *(int *)(local_1b8 + lVar17 * 4) = iVar10;
                  *(double *)(local_1a8 + lVar17 * 8) = -dVar22;
                  *(int *)(local_1c8 + lVar13 * 4) = (int)lVar17;
                }
                else {
                  *(double *)(local_1a8 + lVar17 * 8) = *(double *)(local_1a8 + lVar17 * 8) - dVar22
                  ;
                }
                lVar14 = lVar14 + 1;
              } while (lVar15 != lVar14);
            }
            *(double *)(local_1a8 + local_250 * 8) = dVar21;
            *(int *)(local_1b8 + local_250 * 4) = iVar11;
            local_250 = local_250 + 1;
          }
          lVar6 = lVar6 + 1;
          lVar5 = lVar5 + 4;
        } while (lVar6 < lVar8);
      }
      lVar5 = local_238;
      lVar6 = lVar7;
      if (0 < lVar7) {
        do {
          *(undefined4 *)(local_1c8 + (longlong)*(int *)(local_1b8 + lVar5) * 4) = 0xffffffff;
          lVar5 = lVar5 + 4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      uVar12 = local_250;
      if ((longlong)local_248 < (longlong)local_250) {
        uVar12 = local_248;
      }
      local_e8 = local_1a8;
      local_e0 = local_250;
      local_d0 = &local_1a8;
      local_c8 = 0;
      local_b8 = uStack_1a0;
      local_120 = local_1b8;
      local_118 = local_250;
      local_108 = &local_1b8;
      local_100 = 0;
      local_f0 = uStack_1b0;
      FUN_1483d90fa(&local_e8,&local_120,uVar12);
      lVar5 = local_228;
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 4 + uVar19 * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x20) + uVar19 * 4);
      if (0 < (longlong)uVar12) {
        uVar9 = 0;
        local_218 = uVar12;
        do {
          uVar1 = *(undefined8 *)(local_1a8 + uVar9 * 8);
          uVar23 = *(undefined4 *)(local_1b8 + uVar9 * 4);
          iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + uVar19 * 4);
          *(int *)(*(longlong *)(param_1 + 0x20) + 4 + uVar19 * 4) = iVar11 + 1;
          lVar6 = *(longlong *)(param_1 + 0x40);
          FUN_146de554a(lVar5,lVar6 + 1,0x3ff0000000000000);
          *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar6 * 8) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x38) + lVar6 * 4) = uVar23;
          *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar11 * 8) = uVar1;
          uVar9 = uVar9 + 1;
        } while (local_218 != uVar9);
      }
      dVar21 = *(double *)(local_1a8 + uVar19 * 8);
      uVar23 = SUB84(dVar21,0);
      uVar24 = (undefined4)((ulonglong)dVar21 >> 0x20);
      if ((dVar21 == 0.0) && (!NAN(dVar21))) {
        dVar21 = *(double *)(param_1 + 0x50);
        if (dVar21 < 0.0) {
          dVar21 = sqrt(dVar21);
        }
        else {
          dVar21 = SQRT(dVar21);
        }
        *(double *)(local_1a8 + uVar19 * 8) = dVar21 * dVar20;
        uVar1 = *(undefined8 *)(local_1a8 + uVar19 * 8);
        uVar23 = (undefined4)uVar1;
        uVar24 = (undefined4)((ulonglong)uVar1 >> 0x20);
      }
      iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + uVar19 * 4);
      *(int *)(*(longlong *)(param_1 + 0x20) + 4 + uVar19 * 4) = iVar11 + 1;
      lVar6 = *(longlong *)(param_1 + 0x40);
      FUN_146de554a(lVar5,lVar6 + 1,0x3ff0000000000000);
      *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar6 * 8) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x38) + lVar6 * 4) = uVar18;
      *(ulonglong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar11 * 8) = CONCAT44(uVar24,uVar23)
      ;
      if (lVar7 < 2) {
        local_188 = 0;
      }
      else {
        lVar7 = lVar7 + -1;
        local_188 = 0;
        lVar6 = local_240;
        do {
          dVar21 = *(double *)(local_1a8 + lVar6 * 4);
          if (*(double *)(param_1 + 0x50) * dVar20 < ABS(dVar21)) {
            lVar8 = local_188 + uVar19 + 1;
            local_188 = local_188 + 1;
            *(double *)(local_1a8 + lVar8 * 8) = dVar21;
            *(undefined4 *)(local_1b8 + lVar8 * 4) = *(undefined4 *)(local_1b8 + lVar6 * 2);
          }
          lVar6 = lVar6 + 2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      uVar12 = local_188 + 1U;
      if ((longlong)local_248 < (longlong)(local_188 + 1U)) {
        uVar12 = local_248;
      }
      local_158 = uVar19 * 8 + 8 + local_1a8;
      local_250 = uVar19 + 1;
      local_140 = &local_1a8;
      local_128 = uStack_1a0;
      local_190 = uVar19 * 4 + 4 + local_1b8;
      local_178 = &local_1b8;
      local_160 = uStack_1b0;
      local_170 = local_250;
      local_150 = local_188;
      local_138 = local_250;
      FUN_1483d90fa(&local_158,&local_190,uVar12);
      if (1 < (longlong)uVar12) {
        uVar9 = local_250;
        do {
          uVar1 = *(undefined8 *)(local_1a8 + uVar9 * 8);
          uVar18 = *(undefined4 *)(local_1b8 + uVar9 * 4);
          iVar11 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + uVar19 * 4);
          *(int *)(*(longlong *)(param_1 + 0x20) + 4 + uVar19 * 4) = iVar11 + 1;
          lVar6 = *(longlong *)(param_1 + 0x40);
          FUN_146de554a(lVar5,lVar6 + 1,0x3ff0000000000000);
          *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar6 * 8) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x38) + lVar6 * 4) = uVar18;
          *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar11 * 8) = uVar1;
          uVar9 = uVar9 + 1;
        } while ((longlong)uVar9 < (longlong)(uVar12 + uVar19));
      }
      local_238 = local_238 + 4;
      local_240 = local_240 + 2;
      uVar19 = local_250;
    } while (local_250 != local_220);
  }
  if ((*(longlong *)(param_1 + 0x28) == 0) && (lVar5 = *(longlong *)(param_1 + 0x10), -1 < lVar5)) {
    uVar18 = *(undefined4 *)(param_1 + 0x40);
    lVar6 = lVar5;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x20) + lVar6 * 4) != 0) goto LAB_1483d8fca;
      bVar4 = 0 < lVar6;
      lVar6 = lVar6 + -1;
    } while (bVar4);
    lVar6 = -1;
LAB_1483d8fca:
    if (lVar6 < lVar5) {
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 4 + lVar6 * 4) = uVar18;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(longlong *)(param_1 + 0x10));
    }
  }
  FUN_1483d91f0();
  *(undefined1 *)(param_1 + 0x5d) = 1;
  uVar23 = 0;
LAB_1483d8fec:
  *(undefined4 *)(param_1 + 0x60) = uVar23;
  FUN_146de3a5a(local_210);
  FUN_1400020a8(local_1c8);
  FUN_1400020a8(local_1b8);
  FUN_1400020a8(local_1a8);
  if ((local_b0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d90fa FUN_1483d90fa body=246 status=ok
// SIG undefined FUN_1483d90fa(void)

void FUN_1483d90fa(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  
  if (param_3 <= param_1[1] && 0 < param_3) {
    lVar3 = param_1[1] + -1;
    lVar6 = 0;
    do {
      lVar4 = *param_1;
      dVar8 = *(double *)(lVar4 + lVar6 * 8);
      lVar7 = lVar6;
      dVar9 = dVar8;
      if (lVar6 < lVar3) {
        lVar4 = lVar6;
        do {
          lVar5 = *param_1;
          dVar9 = *(double *)(lVar5 + 8 + lVar4 * 8);
          if (ABS(dVar8) < ABS(dVar9)) {
            uVar1 = *(undefined8 *)(lVar5 + 8 + lVar7 * 8);
            *(double *)(lVar5 + 8 + lVar7 * 8) = dVar9;
            *(undefined8 *)(lVar5 + 8 + lVar4 * 8) = uVar1;
            lVar5 = *param_2;
            uVar2 = *(undefined4 *)(lVar5 + 4 + lVar7 * 4);
            *(undefined4 *)(lVar5 + 4 + lVar7 * 4) = *(undefined4 *)(lVar5 + 4 + lVar4 * 4);
            lVar7 = lVar7 + 1;
            *(undefined4 *)(lVar5 + 4 + lVar4 * 4) = uVar2;
          }
          lVar4 = lVar4 + 1;
        } while (lVar3 != lVar4);
        lVar4 = *param_1;
        dVar8 = *(double *)(lVar4 + lVar6 * 8);
        dVar9 = *(double *)(lVar4 + lVar7 * 8);
      }
      lVar5 = lVar7 + 1;
      if (param_3 + -1 <= lVar7) {
        lVar5 = lVar6;
      }
      if (param_3 <= lVar7) {
        lVar3 = lVar7 + -1;
        lVar5 = lVar6;
      }
      *(double *)(lVar4 + lVar7 * 8) = dVar8;
      *(double *)(lVar4 + lVar6 * 8) = dVar9;
      lVar4 = *param_2;
      uVar2 = *(undefined4 *)(lVar4 + lVar7 * 4);
      *(undefined4 *)(lVar4 + lVar7 * 4) = *(undefined4 *)(lVar4 + lVar6 * 4);
      *(undefined4 *)(lVar4 + lVar6 * 4) = uVar2;
      lVar6 = lVar5;
    } while (lVar7 != param_3 + -1);
  }
  return;
}



// FUNCTION 1483d91f0 FUN_1483d91f0 body=294 status=ok
// SIG undefined FUN_1483d91f0(void)

void FUN_1483d91f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 4);
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4) = **(undefined4 **)(param_1 + 0x20);
    if (1 < *(longlong *)(param_1 + 8)) {
      lVar2 = 1;
      do {
        lVar6 = *(longlong *)(param_1 + 0x18);
        iVar5 = *(int *)(lVar6 + lVar2 * 4);
        iVar1 = *(int *)(lVar6 + 4 + lVar2 * 4);
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar2 * 4);
        if (0 < iVar4 && iVar5 < iVar3) {
          lVar6 = 0;
          do {
            *(undefined4 *)
             (*(longlong *)(param_1 + 0x30) +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar2 * 4) * 4 + lVar6 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar3 * 4 + lVar6 * 4);
            *(undefined8 *)
             (*(longlong *)(param_1 + 0x28) +
              (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar2 * 4) * 8 + lVar6 * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 8 + lVar6 * 8);
            lVar6 = lVar6 + 1;
            iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar2 * 4);
          } while (lVar6 < iVar4);
          lVar6 = *(longlong *)(param_1 + 0x18);
          iVar5 = *(int *)(lVar6 + lVar2 * 4);
        }
        lVar2 = lVar2 + 1;
        *(int *)(lVar6 + lVar2 * 4) = iVar4 + iVar5;
        iVar3 = iVar1;
      } while (lVar2 < *(longlong *)(param_1 + 8));
    }
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_146de554a(param_1 + 0x28,
                  (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 8) * 4)
                  ,0);
    if (*(longlong *)(param_1 + 0x38) < *(longlong *)(param_1 + 0x40)) {
      FUN_146de55aa(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 1483d9316 FUN_1483d9316 body=147 status=ok
// SIG undefined FUN_1483d9316(void)

void FUN_1483d9316(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  local_60 = 0xffffffffffffffff;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_146de45bc(local_68,0,0);
  FUN_1483d93aa(*param_2,local_68,*(undefined8 *)param_2[1]);
  FUN_146de620e(param_1,local_68);
  FUN_146de5508(local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d93aa FUN_1483d93aa body=535 status=ok
// SIG undefined FUN_1483d93aa(void)

void FUN_1483d93aa(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined1 local_59;
  longlong local_58;
  longlong local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x10);
  local_70 = 0;
  if (lVar3 != 0) {
    if (lVar3 < 1) {
      local_70 = 0;
    }
    else {
      local_70 = FUN_141729f83(lVar3);
    }
  }
  local_44 = 0;
  local_68 = lVar3;
  local_50 = lVar3;
  FUN_146de04ef(&local_70,&local_58,&local_59);
  FUN_146de45bc(param_2,lVar3,lVar3);
  if (0 < lVar3) {
    lVar6 = 0;
    do {
      lVar7 = lVar6;
      if (param_3 != 0) {
        lVar7 = (longlong)*(int *)(param_3 + lVar6 * 4);
      }
      lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar6 * 4);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar6 * 4);
      }
      else {
        lVar8 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar6 * 4) + lVar10;
      }
      lVar9 = lVar8 - lVar10;
      if (lVar9 != 0 && lVar10 <= lVar8) {
        do {
          piVar1 = (int *)(local_70 + lVar7 * 4);
          *piVar1 = *piVar1 + 1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar3);
  }
  if (local_68 == 0) {
    lVar6 = 0;
  }
  else {
    local_58 = local_70;
    iVar4 = FUN_146de06a4(&local_58,&local_59);
    lVar6 = (longlong)iVar4;
  }
  FUN_146de554a(param_2 + 0x28,lVar6,0);
  **(undefined4 **)(param_2 + 0x18) = 0;
  if (0 < lVar3) {
    lVar6 = 0;
    do {
      *(int *)(*(longlong *)(param_2 + 0x18) + 4 + lVar6 * 4) =
           *(int *)(local_70 + lVar6 * 4) + *(int *)(*(longlong *)(param_2 + 0x18) + lVar6 * 4);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar6 = 0;
    do {
      *(undefined4 *)(local_70 + lVar6 * 4) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x18) + lVar6 * 4);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar6 = 0;
    do {
      lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + lVar6 * 4);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar6 * 4);
      }
      else {
        lVar10 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar6 * 4) + lVar7;
      }
      if (lVar7 < lVar10) {
        lVar8 = *(longlong *)(param_1 + 0x30);
        lVar9 = *(longlong *)(param_1 + 0x28);
        do {
          iVar4 = *(int *)(lVar9 + lVar7 * 4);
          if (param_3 == 0) {
            iVar5 = (int)lVar6;
          }
          else {
            iVar5 = *(int *)(param_3 + lVar6 * 4);
            iVar4 = *(int *)(param_3 + (longlong)iVar4 * 4);
          }
          iVar2 = *(int *)(local_70 + (longlong)iVar5 * 4);
          *(int *)(local_70 + (longlong)iVar5 * 4) = iVar2 + 1;
          *(int *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar2 * 4) = iVar4;
          *(undefined8 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 8) =
               *(undefined8 *)(lVar8 + lVar7 * 8);
          lVar7 = lVar7 + 1;
        } while (lVar10 != lVar7);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar3);
  }
  FUN_1400020a8(local_70);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483d95ca FUN_1483d95ca body=247 status=ok
// SIG undefined FUN_1483d95ca(void)

void FUN_1483d95ca(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_48;
  longlong local_40;
  longlong local_28;
  longlong local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  lVar1 = (ulonglong)(param_2 != 1) * 0x10 + 0x10;
  if (param_2 == 0) {
    lVar1 = local_28;
  }
  lVar2 = (longlong)*(int *)(param_1[3] + 8 + lVar1);
  local_20 = 0;
  if (0 < lVar2) {
    local_28 = *(longlong *)(param_1[3] + lVar1);
    local_20 = lVar2;
  }
  local_80 = param_1[1] + 0x10;
  lVar2 = (longlong)*(int *)(param_1[2] + 8 + lVar1);
  local_48 = 0;
  local_40 = 0;
  if (0 < lVar2) {
    local_48 = *(undefined8 *)(param_1[2] + lVar1);
    local_40 = lVar2;
  }
  local_78 = &local_48;
  local_70 = &local_28;
  lVar2 = (longlong)*(int *)(*param_1 + 8 + lVar1);
  local_68 = 0;
  local_60 = 0;
  if (0 < lVar2) {
    local_68 = *(undefined8 *)(*param_1 + lVar1);
    local_60 = lVar2;
  }
  FUN_1483d96c2(&local_68,&local_80);
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d96c2 FUN_1483d96c2 body=155 status=ok
// SIG undefined FUN_1483d96c2(void)

void FUN_1483d96c2(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30[0] = *(undefined8 *)param_2[2];
  local_60 = local_30;
  local_20 = ((undefined8 *)param_2[2])[1];
  local_48[0] = *param_1;
  local_68 = local_48;
  local_38 = param_1[1];
  local_58 = &local_69;
  local_50 = param_1;
  FUN_146de5f38();
  FUN_1483d4b46(*param_2,param_2[1],param_1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d975e FUN_1483d975e body=155 status=ok
// SIG undefined FUN_1483d975e(void)

void FUN_1483d975e(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30[0] = *(undefined8 *)param_2[2];
  local_60 = local_30;
  local_20 = ((undefined8 *)param_2[2])[1];
  local_48[0] = *param_1;
  local_68 = local_48;
  local_38 = param_1[1];
  local_58 = &local_69;
  local_50 = param_1;
  FUN_1483cd6c6();
  FUN_1483d5fe8(*param_2,param_2[1],param_1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d97fa FUN_1483d97fa body=115 status=ok
// SIG undefined FUN_1483d97fa(void)

void FUN_1483d97fa(longlong param_1,longlong *param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 8) != *(longlong *)(*param_2 + 0x58)) {
    FUN_146de3c6e(param_1,*(longlong *)(*param_2 + 0x58),1);
  }
  FUN_146de611d(param_1,param_2[2],&local_19);
  FUN_1483d6ca8(*param_2,param_2[1],param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d986e FUN_1483d986e body=971 status=ok
// SIG undefined FUN_1483d986e(void)

void FUN_1483d986e(longlong param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  longlong local_170;
  undefined8 uStack_168;
  longlong local_160;
  longlong lStack_158;
  longlong local_150;
  longlong lStack_148;
  longlong local_140;
  longlong lStack_138;
  undefined1 local_130 [112];
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_a8 = *(undefined8 *)(param_2 + 8);
  local_a0 = 0;
  local_90 = *(undefined8 *)(param_2 + 0x30);
  local_80 = *(longlong *)(param_2 + 0x38);
  local_78 = 0;
  lVar7 = *(longlong *)(local_80 + 8);
  if (*param_2 == '\x01') {
    FUN_146de45bc(param_1,*(undefined8 *)(local_80 + 0x10),lVar7);
    *(undefined8 *)(param_1 + 0x38) = 0;
    memset(*(void **)(param_1 + 0x18),0,*(longlong *)(param_1 + 8) * 4 + 4);
    if (*(void **)(param_1 + 0x20) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x20),0,*(longlong *)(param_1 + 8) << 2);
    }
    lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x10);
    lVar6 = lVar9;
    if (lVar9 < lVar3) {
      lVar6 = lVar3;
    }
    lVar8 = lVar3 * lVar9;
    if (lVar6 * 2 < lVar3 * lVar9) {
      lVar8 = lVar6 * 2;
    }
    if (*(longlong *)(param_1 + 0x40) < lVar8 + *(longlong *)(param_1 + 0x38)) {
      FUN_146de55aa(param_1 + 0x28);
    }
    if (0 < lVar7) {
      lVar9 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar9 * 4);
        FUN_1483d9c3a(local_130,local_b0,lVar9);
        while (lVar3 = local_b8, uVar5 = local_c0, -1 < local_b8) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4);
          *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4) = iVar1 + 1;
          lVar6 = *(longlong *)(param_1 + 0x38);
          FUN_146de554a(param_1 + 0x28,lVar6 + 1,0);
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar6 * 8) = 0;
          *(int *)(*(longlong *)(param_1 + 0x30) + lVar6 * 4) = (int)lVar3;
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = uVar5;
          FUN_1483d9cdc(local_130);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar7);
    }
    if ((*(longlong *)(param_1 + 0x20) == 0) && (lVar7 = *(longlong *)(param_1 + 8), -1 < lVar7)) {
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      lVar9 = lVar7;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x18) + lVar9 * 4) != 0) goto LAB_1483d9a4d;
        bVar4 = 0 < lVar9;
        lVar9 = lVar9 + -1;
      } while (bVar4);
      lVar9 = -1;
LAB_1483d9a4d:
      if (lVar9 < lVar7) {
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4) = uVar2;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(longlong *)(param_1 + 8));
      }
    }
  }
  else {
    local_178[0] = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    lStack_158 = 0;
    local_150 = 0;
    lStack_148 = 0;
    local_140 = 0;
    lStack_138 = 0;
    FUN_146de45bc(local_178,*(undefined8 *)(local_80 + 0x10),lVar7);
    lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x10);
    lVar6 = lVar9;
    if (lVar9 < lVar3) {
      lVar6 = lVar3;
    }
    lVar8 = lVar3 * lVar9;
    if (lVar6 * 2 < lVar3 * lVar9) {
      lVar8 = lVar6 * 2;
    }
    if (lStack_138 < lVar8 + local_140) {
      FUN_146de55aa(&local_150);
    }
    if (0 < lVar7) {
      lVar9 = 0;
      do {
        *(undefined4 *)(local_160 + 4 + lVar9 * 4) = *(undefined4 *)(local_160 + lVar9 * 4);
        FUN_1483d9c3a(local_130,local_b0,lVar9);
        while (lVar6 = local_b8, uVar5 = local_c0, lVar3 = local_140, -1 < local_b8) {
          iVar1 = *(int *)(local_160 + 4 + lVar9 * 4);
          *(int *)(local_160 + 4 + lVar9 * 4) = iVar1 + 1;
          FUN_146de554a(&local_150,local_140 + 1,0);
          *(undefined8 *)(local_150 + lVar3 * 8) = 0;
          *(int *)(lStack_148 + lVar3 * 4) = (int)lVar6;
          *(undefined8 *)(local_150 + (longlong)iVar1 * 8) = uVar5;
          FUN_1483d9cdc(local_130);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar7);
    }
    if ((lStack_158 == 0) && (-1 < local_170)) {
      lVar7 = local_170;
      do {
        if (*(int *)(local_160 + lVar7 * 4) != 0) goto joined_r0x0001483d9bbe;
        bVar4 = 0 < lVar7;
        lVar7 = lVar7 + -1;
      } while (bVar4);
      lVar7 = -1;
joined_r0x0001483d9bbe:
      for (; lVar7 < local_170; lVar7 = lVar7 + 1) {
        *(undefined4 *)(local_160 + 4 + lVar7 * 4) = (undefined4)local_140;
      }
    }
    local_178[0] = 1;
    FUN_146de5a4e(param_1,local_178);
    FUN_146de5508(local_178);
  }
  if ((local_70 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d9c3a FUN_1483d9c3a body=162 status=ok
// SIG undefined FUN_1483d9c3a(void)

void FUN_1483d9c3a(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 8);
  *param_1 = *(undefined8 *)(lVar1 + 0x28);
  param_1[1] = *(undefined8 *)(lVar1 + 0x30);
  param_1[2] = param_3;
  lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + param_3 * 4);
  param_1[3] = lVar2;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + 4 + param_3 * 4);
  }
  else {
    lVar2 = *(int *)(*(longlong *)(lVar1 + 0x20) + param_3 * 4) + lVar2;
  }
  param_1[4] = lVar2;
  param_1[5] = param_2 + 0x20;
  lVar1 = *(longlong *)(param_2 + 0x30);
  param_1[6] = *(undefined8 *)(lVar1 + 0x28);
  param_1[7] = *(undefined8 *)(lVar1 + 0x30);
  param_1[8] = param_3;
  lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + param_3 * 4);
  param_1[9] = lVar2;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + 4 + param_3 * 4);
  }
  else {
    lVar2 = *(int *)(*(longlong *)(lVar1 + 0x20) + param_3 * 4) + lVar2;
  }
  param_1[10] = lVar2;
  param_1[0xb] = param_2 + 0x18;
  param_1[0xc] = param_3;
  param_1[0xd] = param_2;
  FUN_1483d9cdc();
  return;
}



// FUNCTION 1483d9cdc FUN_1483d9cdc body=214 status=ok
// SIG undefined FUN_1483d9cdc(void)

void FUN_1483d9cdc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = param_1[3];
  if (lVar2 < param_1[4]) {
    lVar3 = param_1[9];
    iVar1 = *(int *)(param_1[1] + lVar2 * 4);
    if (param_1[10] <= lVar3) {
LAB_1483d9d83:
      param_1[0xf] = (longlong)iVar1;
      param_1[0xe] = *(longlong *)(*param_1 + lVar2 * 8);
      param_1[3] = lVar2 + 1;
      return;
    }
    iVar4 = *(int *)(param_1[7] + lVar3 * 4);
    if (iVar4 == iVar1) {
      param_1[0xf] = (longlong)iVar1;
      param_1[0xe] = (longlong)
                     (*(double *)(*param_1 + lVar2 * 8) -
                     *(double *)param_1[5] * *(double *)(param_1[6] + lVar3 * 8));
      param_1[3] = lVar2 + 1;
      goto LAB_1483d9d76;
    }
    if (iVar1 < iVar4) goto LAB_1483d9d83;
    if (iVar1 <= iVar4) goto LAB_1483d9da1;
  }
  else {
    lVar3 = param_1[9];
    if (param_1[10] <= lVar3) {
LAB_1483d9da1:
      param_1[0xe] = 0;
      param_1[0xf] = -1;
      return;
    }
    iVar4 = *(int *)(param_1[7] + lVar3 * 4);
  }
  param_1[0xf] = (longlong)iVar4;
  param_1[0xe] = (longlong)(0.0 - *(double *)param_1[5] * *(double *)(param_1[6] + lVar3 * 8));
LAB_1483d9d76:
  param_1[9] = lVar3 + 1;
  return;
}



// FUNCTION 1483d9db2 FUN_1483d9db2 body=146 status=ok
// SIG undefined FUN_1483d9db2(void)

void FUN_1483d9db2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  FUN_1483d9e46(&local_78);
  local_58 = &local_40;
  local_40 = local_78;
  local_38[0] = *param_1;
  local_60 = local_38;
  local_28 = param_1[1];
  local_50 = param_3;
  local_48 = param_1;
  FUN_1483af45e();
  FUN_1400020a8(local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d9e46 FUN_1483d9e46 body=169 status=ok
// SIG undefined FUN_1483d9e46(void)

void FUN_1483d9e46(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1483cf981(param_1,param_2 + 8,local_58);
  local_80 = 0x3ff0000000000000;
  local_58[0] = *(undefined1 *)(param_2 + 0x28);
  local_48 = *(undefined8 *)(param_2 + 0x38);
  uStack_40 = *(undefined8 *)(param_2 + 0x40);
  local_38 = *(undefined8 *)(param_2 + 0x48);
  local_30 = *(undefined8 *)(param_2 + 0x50);
  local_68 = *(undefined8 *)(param_2 + 0x70);
  local_78 = *(undefined4 *)(param_2 + 0x60);
  uStack_74 = *(undefined4 *)(param_2 + 100);
  uStack_70 = *(undefined4 *)(param_2 + 0x68);
  uStack_6c = *(undefined4 *)(param_2 + 0x6c);
  FUN_1483d9ef0(local_58,&local_78,param_1);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483d9ef0 FUN_1483d9ef0 body=151 status=ok
// SIG undefined FUN_1483d9ef0(void)

void FUN_1483d9ef0(longlong param_1,longlong *param_2,longlong *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (0 < *(longlong *)(lVar4 + 8)) {
    dVar1 = *(double *)(param_1 + 0x20);
    lVar8 = 0;
    lVar7 = lVar4;
    do {
      lVar9 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x18) + lVar8 * 4);
      if (*(longlong *)(lVar4 + 0x20) == 0) {
        lVar6 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x18) + 4 + lVar8 * 4);
      }
      else {
        lVar6 = *(int *)(*(longlong *)(lVar4 + 0x20) + lVar8 * 4) + lVar9;
      }
      if (lVar9 < lVar6) {
        dVar2 = *param_4;
        dVar3 = *(double *)(*param_2 + lVar8 * 8);
        lVar7 = *(longlong *)(lVar4 + 0x28);
        lVar5 = *(longlong *)(lVar4 + 0x30);
        do {
          lVar10 = (longlong)*(int *)(lVar5 + lVar9 * 4);
          *(double *)(*param_3 + lVar10 * 8) =
               *(double *)(lVar7 + lVar9 * 8) * dVar1 * dVar2 * dVar3 +
               *(double *)(*param_3 + lVar10 * 8);
          lVar9 = lVar9 + 1;
        } while (lVar6 != lVar9);
        lVar7 = *(longlong *)(param_1 + 0x28);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(longlong *)(lVar7 + 8));
  }
  return;
}



// FUNCTION 1483d9f88 FUN_1483d9f88 body=303 status=ok
// SIG undefined FUN_1483d9f88(void)

undefined4 * FUN_1483d9f88(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1483da0b8(param_1,local_48);
  puVar1 = (uint *)param_3[1];
  uVar11 = *(uint *)*param_3;
  *local_40 = uVar11;
  uVar10 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  uVar4 = puVar1[4];
  uVar5 = puVar1[5];
  uVar6 = puVar1[6];
  uVar7 = puVar1[7];
  local_40[2] = *puVar1;
  local_40[3] = uVar10;
  local_40[4] = uVar2;
  local_40[5] = uVar3;
  local_40[6] = uVar4;
  local_40[7] = uVar5;
  local_40[8] = uVar6;
  local_40[9] = uVar7;
  *(undefined8 *)(local_40 + 10) = *(undefined8 *)(puVar1 + 8);
  local_40[0xc] = 0xffffffff;
  local_4c = local_48[0];
  cVar9 = FUN_1483da19a(param_1,uVar11,local_40,&local_4c);
  uVar8 = local_4c;
  if (cVar9 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar10) {
      uVar12 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      local_40[0xd] = uVar11;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      local_40[0xc] =
           *(uint *)(lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4)
      ;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_1483da2a4(param_1);
    }
  }
  *param_2 = uVar8;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483da0b8 FUN_1483da0b8 body=226 status=ok
// SIG undefined FUN_1483da0b8(void)

int * FUN_1483da0b8(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1483da19a FUN_1483da19a body=149 status=ok
// SIG undefined FUN_1483da19a(void)

undefined8 FUN_1483da19a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[9];
          iVar11 = param_3[10];
          iVar12 = param_3[0xb];
          piVar1[8] = param_3[8];
          piVar1[9] = iVar10;
          piVar1[10] = iVar11;
          piVar1[0xb] = iVar12;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1483da230(iVar2,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = piVar1[0xc];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 1483da230 FUN_1483da230 body=116 status=ok
// SIG undefined FUN_1483da230(void)

void FUN_1483da230(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 1483da2a4 FUN_1483da2a4 body=419 status=ok
// SIG undefined FUN_1483da2a4(void)

void FUN_1483da2a4(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 1483da448 FUN_1483da448 body=63 status=ok
// SIG undefined FUN_1483da448(void)

void FUN_1483da448(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1483af9b6(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1483da2a4(param_1);
    return;
  }
  FUN_1483da488(param_1);
  FUN_1483af9b6(param_1);
  return;
}



// FUNCTION 1483da488 FUN_1483da488 body=322 status=ok
// SIG undefined FUN_1483da488(void)

void FUN_1483da488(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 1483da5cc FUN_1483da5cc body=53 status=ok
// SIG undefined FUN_1483da5cc(void)

void FUN_1483da5cc(longlong param_1,longlong param_2)

{
  FUN_146de45bc(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10),
                *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1483da601 FUN_1483da601 body=971 status=ok
// SIG undefined FUN_1483da601(void)

void FUN_1483da601(longlong param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  longlong local_170;
  undefined8 uStack_168;
  longlong local_160;
  longlong lStack_158;
  longlong local_150;
  longlong lStack_148;
  longlong local_140;
  longlong lStack_138;
  undefined1 local_130 [112];
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_a0 = *(undefined8 *)(param_2 + 0x28);
  local_90 = *(undefined8 *)(param_2 + 0x30);
  local_88 = 0;
  local_80 = *(longlong *)(param_2 + 0x40);
  local_78 = 0;
  lVar7 = *(longlong *)(local_80 + 8);
  if (*param_2 == '\x01') {
    FUN_146de45bc(param_1,*(undefined8 *)(local_80 + 0x10),lVar7);
    *(undefined8 *)(param_1 + 0x38) = 0;
    memset(*(void **)(param_1 + 0x18),0,*(longlong *)(param_1 + 8) * 4 + 4);
    if (*(void **)(param_1 + 0x20) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x20),0,*(longlong *)(param_1 + 8) << 2);
    }
    lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 8);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x10);
    lVar6 = lVar9;
    if (lVar9 < lVar3) {
      lVar6 = lVar3;
    }
    lVar8 = lVar3 * lVar9;
    if (lVar6 * 2 < lVar3 * lVar9) {
      lVar8 = lVar6 * 2;
    }
    if (*(longlong *)(param_1 + 0x40) < lVar8 + *(longlong *)(param_1 + 0x38)) {
      FUN_146de55aa(param_1 + 0x28);
    }
    if (0 < lVar7) {
      lVar9 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar9 * 4);
        FUN_1483da9ce(local_130,local_b0,lVar9);
        while (lVar3 = local_b8, uVar5 = local_c0, -1 < local_b8) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4);
          *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4) = iVar1 + 1;
          lVar6 = *(longlong *)(param_1 + 0x38);
          FUN_146de554a(param_1 + 0x28,lVar6 + 1,0);
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar6 * 8) = 0;
          *(int *)(*(longlong *)(param_1 + 0x30) + lVar6 * 4) = (int)lVar3;
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = uVar5;
          FUN_1483daa70(local_130);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar7);
    }
    if ((*(longlong *)(param_1 + 0x20) == 0) && (lVar7 = *(longlong *)(param_1 + 8), -1 < lVar7)) {
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      lVar9 = lVar7;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x18) + lVar9 * 4) != 0) goto LAB_1483da7e0;
        bVar4 = 0 < lVar9;
        lVar9 = lVar9 + -1;
      } while (bVar4);
      lVar9 = -1;
LAB_1483da7e0:
      if (lVar9 < lVar7) {
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4) = uVar2;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(longlong *)(param_1 + 8));
      }
    }
  }
  else {
    local_178[0] = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    lStack_158 = 0;
    local_150 = 0;
    lStack_148 = 0;
    local_140 = 0;
    lStack_138 = 0;
    FUN_146de45bc(local_178,*(undefined8 *)(local_80 + 0x10),lVar7);
    lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 8);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x10);
    lVar6 = lVar9;
    if (lVar9 < lVar3) {
      lVar6 = lVar3;
    }
    lVar8 = lVar3 * lVar9;
    if (lVar6 * 2 < lVar3 * lVar9) {
      lVar8 = lVar6 * 2;
    }
    if (lStack_138 < lVar8 + local_140) {
      FUN_146de55aa(&local_150);
    }
    if (0 < lVar7) {
      lVar9 = 0;
      do {
        *(undefined4 *)(local_160 + 4 + lVar9 * 4) = *(undefined4 *)(local_160 + lVar9 * 4);
        FUN_1483da9ce(local_130,local_b0,lVar9);
        while (lVar6 = local_b8, uVar5 = local_c0, lVar3 = local_140, -1 < local_b8) {
          iVar1 = *(int *)(local_160 + 4 + lVar9 * 4);
          *(int *)(local_160 + 4 + lVar9 * 4) = iVar1 + 1;
          FUN_146de554a(&local_150,local_140 + 1,0);
          *(undefined8 *)(local_150 + lVar3 * 8) = 0;
          *(int *)(lStack_148 + lVar3 * 4) = (int)lVar6;
          *(undefined8 *)(local_150 + (longlong)iVar1 * 8) = uVar5;
          FUN_1483daa70(local_130);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar7);
    }
    if ((lStack_158 == 0) && (-1 < local_170)) {
      lVar7 = local_170;
      do {
        if (*(int *)(local_160 + lVar7 * 4) != 0) goto joined_r0x0001483da951;
        bVar4 = 0 < lVar7;
        lVar7 = lVar7 + -1;
      } while (bVar4);
      lVar7 = -1;
joined_r0x0001483da951:
      for (; lVar7 < local_170; lVar7 = lVar7 + 1) {
        *(undefined4 *)(local_160 + 4 + lVar7 * 4) = (undefined4)local_140;
      }
    }
    local_178[0] = 1;
    FUN_146de5a4e(param_1,local_178);
    FUN_146de5508(local_178);
  }
  if ((local_70 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483da9ce FUN_1483da9ce body=162 status=ok
// SIG undefined FUN_1483da9ce(void)

void FUN_1483da9ce(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = param_2 + 0x10;
  lVar1 = *(longlong *)(param_2 + 0x20);
  param_1[1] = *(longlong *)(lVar1 + 0x28);
  param_1[2] = *(longlong *)(lVar1 + 0x30);
  param_1[3] = param_3;
  lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + param_3 * 4);
  param_1[4] = lVar2;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + 4 + param_3 * 4);
  }
  else {
    lVar2 = *(int *)(*(longlong *)(lVar1 + 0x20) + param_3 * 4) + lVar2;
  }
  param_1[5] = lVar2;
  param_1[6] = param_2 + 8;
  param_1[7] = param_3;
  lVar1 = *(longlong *)(param_2 + 0x30);
  param_1[8] = *(longlong *)(lVar1 + 0x28);
  param_1[9] = *(longlong *)(lVar1 + 0x30);
  param_1[10] = param_3;
  lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + param_3 * 4);
  param_1[0xb] = lVar2;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + 4 + param_3 * 4);
  }
  else {
    lVar2 = *(int *)(*(longlong *)(lVar1 + 0x20) + param_3 * 4) + lVar2;
  }
  param_1[0xc] = lVar2;
  param_1[0xd] = param_2;
  FUN_1483daa70();
  return;
}



// FUNCTION 1483daa70 FUN_1483daa70 body=202 status=ok
// SIG undefined FUN_1483daa70(void)

void FUN_1483daa70(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = param_1[4];
  if (lVar2 < (longlong)param_1[5]) {
    lVar3 = param_1[0xb];
    iVar1 = *(int *)(param_1[2] + lVar2 * 4);
    if ((longlong)param_1[0xc] <= lVar3) {
LAB_1483dab02:
      param_1[0xf] = (longlong)iVar1;
      param_1[0xe] = *(double *)*param_1 * *(double *)(param_1[1] + lVar2 * 8);
      param_1[4] = lVar2 + 1;
      return;
    }
    iVar4 = *(int *)(param_1[9] + lVar3 * 4);
    if (iVar1 == iVar4) {
      param_1[0xf] = (longlong)iVar1;
      param_1[0xe] = *(double *)*param_1 * *(double *)(param_1[1] + lVar2 * 8) -
                     *(double *)(param_1[8] + lVar3 * 8);
      param_1[4] = lVar2 + 1;
      goto LAB_1483daaf5;
    }
    if (iVar1 < iVar4) goto LAB_1483dab02;
    if (iVar1 <= iVar4) goto LAB_1483dab29;
  }
  else {
    lVar3 = param_1[0xb];
    if ((longlong)param_1[0xc] <= lVar3) {
LAB_1483dab29:
      param_1[0xe] = 0;
      param_1[0xf] = 0xffffffffffffffff;
      return;
    }
    iVar4 = *(int *)(param_1[9] + lVar3 * 4);
  }
  param_1[0xf] = (longlong)iVar4;
  param_1[0xe] = 0.0 - *(double *)(param_1[8] + lVar3 * 8);
LAB_1483daaf5:
  param_1[0xb] = lVar3 + 1;
  return;
}



// FUNCTION 1483dab3a FUN_1483dab3a body=179 status=ok
// SIG undefined FUN_1483dab3a(void)

undefined8 * FUN_1483dab3a(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = param_2;
  lVar4 = *(longlong *)(param_2[2] + 0x18);
  param_1[1] = lVar4;
  lVar1 = *(longlong *)(param_2[2] + 0x10);
  param_1[2] = lVar1;
  param_1[3] = *(longlong *)(param_2[2] + 0x28) + *(longlong *)(param_2[2] + 0x18);
  lVar5 = *param_2;
  param_1[4] = *(undefined8 *)(lVar5 + 0x28);
  lVar2 = *(longlong *)(lVar5 + 0x30);
  param_1[5] = lVar2;
  param_1[6] = lVar4;
  lVar3 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x18) + lVar4 * 4);
  param_1[7] = lVar3;
  if (*(longlong *)(lVar5 + 0x20) == 0) {
    lVar4 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x18) + 4 + lVar4 * 4);
  }
  else {
    lVar4 = *(int *)(*(longlong *)(lVar5 + 0x20) + lVar4 * 4) + lVar3;
  }
  param_1[8] = lVar4;
  if (lVar3 < lVar4) {
    do {
      lVar3 = lVar3 + 1;
      lVar5 = (longlong)*(int *)(lVar2 + -4 + lVar3 * 4);
      if (lVar1 <= lVar5) {
        if (lVar1 == lVar5) {
          return param_1;
        }
        break;
      }
      param_1[7] = lVar3;
    } while (lVar3 != lVar4);
  }
  FUN_1483dabee(param_1);
  return param_1;
}



// FUNCTION 1483dabee FUN_1483dabee body=162 status=ok
// SIG undefined FUN_1483dabee(void)

void FUN_1483dabee(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = param_1[1] + 1;
  param_1[1] = lVar2;
  if (lVar2 < (longlong)param_1[3]) {
    do {
      lVar5 = *(longlong *)*param_1;
      param_1[4] = *(undefined8 *)(lVar5 + 0x28);
      lVar1 = *(longlong *)(lVar5 + 0x30);
      param_1[5] = lVar1;
      param_1[6] = lVar2;
      lVar4 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x18) + lVar2 * 4);
      param_1[7] = lVar4;
      if (*(longlong *)(lVar5 + 0x20) == 0) {
        lVar5 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x18) + 4 + lVar2 * 4);
      }
      else {
        lVar5 = *(int *)(*(longlong *)(lVar5 + 0x20) + lVar2 * 4) + lVar4;
      }
      param_1[8] = lVar5;
      if (lVar4 < lVar5) {
        do {
          lVar4 = lVar4 + 1;
          lVar3 = (longlong)*(int *)(lVar1 + -4 + lVar4 * 4);
          if ((longlong)param_1[2] <= lVar3) {
            if (param_1[2] == lVar3) {
              return;
            }
            break;
          }
          param_1[7] = lVar4;
        } while (lVar4 != lVar5);
      }
      lVar2 = lVar2 + 1;
      param_1[1] = lVar2;
    } while (lVar2 != param_1[3]);
  }
  return;
}



// FUNCTION 1483dac90 FUN_1483dac90 body=971 status=ok
// SIG undefined FUN_1483dac90(void)

void FUN_1483dac90(longlong param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  longlong local_170;
  undefined8 uStack_168;
  longlong local_160;
  longlong lStack_158;
  longlong local_150;
  longlong lStack_148;
  longlong local_140;
  longlong lStack_138;
  undefined1 local_130 [112];
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_a8 = *(undefined8 *)(param_2 + 8);
  local_a0 = 0;
  local_90 = *(undefined8 *)(param_2 + 0x30);
  local_80 = *(longlong *)(param_2 + 0x38);
  local_78 = 0;
  lVar7 = *(longlong *)(local_80 + 8);
  if (*param_2 == '\x01') {
    FUN_146de45bc(param_1,*(undefined8 *)(local_80 + 0x10),lVar7);
    *(undefined8 *)(param_1 + 0x38) = 0;
    memset(*(void **)(param_1 + 0x18),0,*(longlong *)(param_1 + 8) * 4 + 4);
    if (*(void **)(param_1 + 0x20) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x20),0,*(longlong *)(param_1 + 8) << 2);
    }
    lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x10);
    lVar6 = lVar9;
    if (lVar9 < lVar3) {
      lVar6 = lVar3;
    }
    lVar8 = lVar3 * lVar9;
    if (lVar6 * 2 < lVar3 * lVar9) {
      lVar8 = lVar6 * 2;
    }
    if (*(longlong *)(param_1 + 0x40) < lVar8 + *(longlong *)(param_1 + 0x38)) {
      FUN_146de55aa(param_1 + 0x28);
    }
    if (0 < lVar7) {
      lVar9 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar9 * 4);
        FUN_1483db05c(local_130,local_b0,lVar9);
        while (lVar3 = local_b8, uVar5 = local_c0, -1 < local_b8) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4);
          *(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4) = iVar1 + 1;
          lVar6 = *(longlong *)(param_1 + 0x38);
          FUN_146de554a(param_1 + 0x28,lVar6 + 1,0);
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar6 * 8) = 0;
          *(int *)(*(longlong *)(param_1 + 0x30) + lVar6 * 4) = (int)lVar3;
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = uVar5;
          FUN_1483db0fe(local_130);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar7);
    }
    if ((*(longlong *)(param_1 + 0x20) == 0) && (lVar7 = *(longlong *)(param_1 + 8), -1 < lVar7)) {
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      lVar9 = lVar7;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x18) + lVar9 * 4) != 0) goto LAB_1483dae6f;
        bVar4 = 0 < lVar9;
        lVar9 = lVar9 + -1;
      } while (bVar4);
      lVar9 = -1;
LAB_1483dae6f:
      if (lVar9 < lVar7) {
        do {
          *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar9 * 4) = uVar2;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(longlong *)(param_1 + 8));
      }
    }
  }
  else {
    local_178[0] = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    lStack_158 = 0;
    local_150 = 0;
    lStack_148 = 0;
    local_140 = 0;
    lStack_138 = 0;
    FUN_146de45bc(local_178,*(undefined8 *)(local_80 + 0x10),lVar7);
    lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8);
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x10);
    lVar6 = lVar9;
    if (lVar9 < lVar3) {
      lVar6 = lVar3;
    }
    lVar8 = lVar3 * lVar9;
    if (lVar6 * 2 < lVar3 * lVar9) {
      lVar8 = lVar6 * 2;
    }
    if (lStack_138 < lVar8 + local_140) {
      FUN_146de55aa(&local_150);
    }
    if (0 < lVar7) {
      lVar9 = 0;
      do {
        *(undefined4 *)(local_160 + 4 + lVar9 * 4) = *(undefined4 *)(local_160 + lVar9 * 4);
        FUN_1483db05c(local_130,local_b0,lVar9);
        while (lVar6 = local_b8, uVar5 = local_c0, lVar3 = local_140, -1 < local_b8) {
          iVar1 = *(int *)(local_160 + 4 + lVar9 * 4);
          *(int *)(local_160 + 4 + lVar9 * 4) = iVar1 + 1;
          FUN_146de554a(&local_150,local_140 + 1,0);
          *(undefined8 *)(local_150 + lVar3 * 8) = 0;
          *(int *)(lStack_148 + lVar3 * 4) = (int)lVar6;
          *(undefined8 *)(local_150 + (longlong)iVar1 * 8) = uVar5;
          FUN_1483db0fe(local_130);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar7);
    }
    if ((lStack_158 == 0) && (-1 < local_170)) {
      lVar7 = local_170;
      do {
        if (*(int *)(local_160 + lVar7 * 4) != 0) goto joined_r0x0001483dafe0;
        bVar4 = 0 < lVar7;
        lVar7 = lVar7 + -1;
      } while (bVar4);
      lVar7 = -1;
joined_r0x0001483dafe0:
      for (; lVar7 < local_170; lVar7 = lVar7 + 1) {
        *(undefined4 *)(local_160 + 4 + lVar7 * 4) = (undefined4)local_140;
      }
    }
    local_178[0] = 1;
    FUN_146de5a4e(param_1,local_178);
    FUN_146de5508(local_178);
  }
  if ((local_70 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483db05c FUN_1483db05c body=162 status=ok
// SIG undefined FUN_1483db05c(void)

void FUN_1483db05c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 8);
  *param_1 = *(undefined8 *)(lVar1 + 0x28);
  param_1[1] = *(undefined8 *)(lVar1 + 0x30);
  param_1[2] = param_3;
  lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + param_3 * 4);
  param_1[3] = lVar2;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + 4 + param_3 * 4);
  }
  else {
    lVar2 = *(int *)(*(longlong *)(lVar1 + 0x20) + param_3 * 4) + lVar2;
  }
  param_1[4] = lVar2;
  param_1[5] = param_2 + 0x20;
  lVar1 = *(longlong *)(param_2 + 0x30);
  param_1[6] = *(undefined8 *)(lVar1 + 0x28);
  param_1[7] = *(undefined8 *)(lVar1 + 0x30);
  param_1[8] = param_3;
  lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + param_3 * 4);
  param_1[9] = lVar2;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    lVar2 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + 4 + param_3 * 4);
  }
  else {
    lVar2 = *(int *)(*(longlong *)(lVar1 + 0x20) + param_3 * 4) + lVar2;
  }
  param_1[10] = lVar2;
  param_1[0xb] = param_2 + 0x18;
  param_1[0xc] = param_3;
  param_1[0xd] = param_2;
  FUN_1483db0fe();
  return;
}



// FUNCTION 1483db0fe FUN_1483db0fe body=214 status=ok
// SIG undefined FUN_1483db0fe(void)

void FUN_1483db0fe(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = param_1[3];
  if (lVar2 < param_1[4]) {
    lVar3 = param_1[9];
    iVar1 = *(int *)(param_1[1] + lVar2 * 4);
    if (param_1[10] <= lVar3) {
LAB_1483db1a1:
      param_1[0xf] = (longlong)iVar1;
      param_1[0xe] = (longlong)(*(double *)(*param_1 + lVar2 * 8) + 0.0);
      param_1[3] = lVar2 + 1;
      return;
    }
    iVar4 = *(int *)(param_1[7] + lVar3 * 4);
    if (iVar4 == iVar1) {
      param_1[0xf] = (longlong)iVar1;
      param_1[0xe] = (longlong)
                     (*(double *)param_1[5] * *(double *)(param_1[6] + lVar3 * 8) +
                     *(double *)(*param_1 + lVar2 * 8));
      param_1[3] = lVar2 + 1;
      goto LAB_1483db194;
    }
    if (iVar1 < iVar4) goto LAB_1483db1a1;
    if (iVar1 <= iVar4) goto LAB_1483db1c3;
  }
  else {
    lVar3 = param_1[9];
    if (param_1[10] <= lVar3) {
LAB_1483db1c3:
      param_1[0xe] = 0;
      param_1[0xf] = -1;
      return;
    }
    iVar4 = *(int *)(param_1[7] + lVar3 * 4);
  }
  param_1[0xf] = (longlong)iVar4;
  param_1[0xe] = (longlong)(*(double *)param_1[5] * *(double *)(param_1[6] + lVar3 * 8) + 0.0);
LAB_1483db194:
  param_1[9] = lVar3 + 1;
  return;
}



// FUNCTION 1483db1d4 FUN_1483db1d4 body=61 status=ok
// SIG undefined FUN_1483db1d4(void)

void FUN_1483db1d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 8);
  if (*(longlong *)(param_1 + 8) != lVar1) {
    FUN_146de3c6e(param_1,lVar1,1);
  }
  FUN_1483db212(param_1,param_2,*(undefined8 *)(param_2 + 0x10));
  return;
}



// FUNCTION 1483db212 FUN_1483db212 body=215 status=ok
// SIG undefined FUN_1483db212(void)

void FUN_1483db212(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined1 local_48 [8];
  longlong local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_1[1];
  local_30 = 0;
  FUN_146de41cc(param_1,local_48,&local_49);
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = *(longlong *)(lVar1 + 8);
  if (0 < lVar2) {
    lVar3 = 0;
    do {
      lVar4 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + lVar3 * 4);
      if (*(longlong *)(lVar1 + 0x20) == 0) {
        lVar5 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x18) + 4 + lVar3 * 4);
      }
      else {
        lVar5 = *(int *)(*(longlong *)(lVar1 + 0x20) + lVar3 * 4) + lVar4;
      }
      dVar6 = 0.0;
      if (lVar4 < lVar5) {
        do {
          dVar6 = dVar6 + *(double *)(*(longlong *)(lVar1 + 0x28) + lVar4 * 8) *
                          *(double *)
                           (*param_3 +
                           (longlong)*(int *)(*(longlong *)(lVar1 + 0x30) + lVar4 * 4) * 8);
          lVar4 = lVar4 + 1;
        } while (lVar5 != lVar4);
      }
      *(double *)(*param_1 + lVar3 * 8) = dVar6 + *(double *)(*param_1 + lVar3 * 8);
      lVar3 = lVar3 + 1;
    } while (lVar3 != lVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483db2ea FUN_1483db2ea body=145 status=ok
// SIG undefined FUN_1483db2ea(void)

void FUN_1483db2ea(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1483db37c(&local_48,param_2 + 8);
  local_30 = 0xbff0000000000000;
  FUN_1483db422(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),&local_48);
  FUN_146de611d(param_1,&local_48,param_3);
  FUN_1400020a8(local_48);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483db37c FUN_1483db37c body=165 status=ok
// SIG undefined FUN_1483db37c(void)

void FUN_1483db37c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_2;
  local_40 = *(longlong *)(lVar2 + 0x10);
  if (*(longlong *)(param_1 + 8) != local_40) {
    FUN_146de3c6e(param_1,local_40,1);
    lVar2 = *param_2;
    local_40 = *(longlong *)(param_1 + 8);
  }
  lVar1 = param_2[1];
  local_30 = 0;
  FUN_146de41cc(param_1,&local_48,&local_49);
  local_48 = 0x3ff0000000000000;
  FUN_1483db422(lVar2,lVar1,param_1,&local_48);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483db422 FUN_1483db422 body=131 status=ok
// SIG undefined FUN_1483db422(void)

void FUN_1483db422(longlong param_1,longlong *param_2,longlong *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = *(longlong *)(param_1 + 8);
  if (0 < lVar7) {
    lVar4 = 0;
    do {
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar4 * 4);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar4 * 4);
      }
      else {
        lVar6 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar4 * 4) + lVar8;
      }
      if (lVar8 < lVar6) {
        dVar1 = *param_4;
        dVar2 = *(double *)(*param_2 + lVar4 * 8);
        lVar7 = *(longlong *)(param_1 + 0x28);
        lVar3 = *(longlong *)(param_1 + 0x30);
        do {
          lVar5 = (longlong)*(int *)(lVar3 + lVar8 * 4);
          *(double *)(*param_3 + lVar5 * 8) =
               *(double *)(lVar7 + lVar8 * 8) * dVar1 * dVar2 + *(double *)(*param_3 + lVar5 * 8);
          lVar8 = lVar8 + 1;
        } while (lVar6 != lVar8);
        lVar7 = *(longlong *)(param_1 + 8);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar7);
  }
  return;
}



// FUNCTION 1483db4a6 FUN_1483db4a6 body=181 status=ok
// SIG undefined FUN_1483db4a6(void)

undefined8 * FUN_1483db4a6(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  void *_Dst;
  
  *param_1 = &PTR_FUN_14ae75a10;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = *param_2;
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 1);
  cVar1 = *(char *)(param_2 + 4);
  *(char *)(param_1 + 0x39) = cVar1;
  if (cVar1 == '\x01') {
    _Dst = (void *)FUN_146de3b53(param_2[3]);
    param_1[0x37] = _Dst;
    lVar2 = param_2[3];
    param_1[0x38] = lVar2;
    if (lVar2 != 0) {
      memcpy(_Dst,(void *)param_2[2],lVar2 << 3);
    }
  }
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  return param_1;
}



// FUNCTION 1483db55c FUN_1483db55c body=38 status=ok
// SIG undefined FUN_1483db55c(void)

undefined8 FUN_1483db55c(undefined8 param_1,int param_2)

{
  FUN_1483db5b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483db58a FUN_1483db58a body=38 status=ok
// SIG undefined FUN_1483db58a(void)

undefined8 FUN_1483db58a(undefined8 param_1,int param_2)

{
  FUN_1483db5b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1483db5b0 FUN_1483db5b0 body=113 status=ok
// SIG undefined FUN_1483db5b0(void)

void FUN_1483db5b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14ae75a10;
  if (*(char *)(param_1 + 0x39) == '\x01') {
    FUN_1400020a8(param_1[0x37]);
    *(undefined1 *)(param_1 + 0x39) = 0;
  }
  puVar1 = (undefined8 *)param_1[0x34];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(char *)(param_1 + 0x32) == '\x01') {
    FUN_14839fcde(param_1 + 0x1a);
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  FUN_14839fcde(param_1 + 2);
  return;
}



// FUNCTION 1483db622 FUN_1483db622 body=137 status=ok
// SIG undefined FUN_1483db622(void)

void FUN_1483db622(undefined8 *param_1)

{
  double dVar1;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined1 local_30 [8];
  undefined8 *local_28;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_1;
  if (param_1[1] != 0) {
    local_38 = *param_1;
    dVar1 = (double)FUN_146de3ea2(local_40,&local_41,local_30);
    if (0.0 < dVar1) {
      local_18 = SQRT(dVar1);
      local_28 = (undefined8 *)param_1[1];
      FUN_1483db6ac(param_1,local_30,local_40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483db6ac FUN_1483db6ac body=156 status=ok
// SIG undefined FUN_1483db6ac(void)

void FUN_1483db6ac(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18 [2];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18[0] = *(undefined8 *)(param_2 + 0x18);
  local_38 = local_18;
  local_20 = *param_1;
  local_40 = &local_20;
  lVar1 = param_1[1];
  if (1 < lVar1) {
    lVar2 = 0;
    do {
      auVar3._8_8_ = local_18[0];
      auVar3._0_8_ = local_18[0];
      auVar3 = divpd(*(undefined1 (*) [16])(local_20 + lVar2 * 8),auVar3);
      *(undefined1 (*) [16])(local_20 + lVar2 * 8) = auVar3;
      lVar2 = lVar2 + 2;
    } while (lVar2 < (longlong)(lVar1 - (lVar1 >> 0x3f) & 0xfffffffffffffffeU));
  }
  local_30 = param_3;
  local_28 = param_1;
  FUN_1483db74a(&local_40);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483db74a FUN_1483db74a body=39 status=ok
// SIG undefined FUN_1483db74a(void)

void FUN_1483db74a(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(double *)(*(longlong *)*param_1 + param_2 * 8) =
           *(double *)(*(longlong *)*param_1 + param_2 * 8) / *(double *)param_1[1];
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483db772 FUN_1483db772 body=176 status=ok
// SIG undefined FUN_1483db772(void)

longlong * FUN_1483db772(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 2);
  }
  lVar1 = param_2[8];
  param_1[8] = lVar1;
  param_1[10] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 0xc;
    if ((longlong *)param_2[10] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[10];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 10);
  }
  lVar1 = param_2[0x10];
  param_1[0x10] = lVar1;
  param_1[0x12] = 0;
  if (lVar1 != 0) {
    plVar2 = param_2 + 0x14;
    if ((longlong *)param_2[0x12] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[0x12];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 0x12);
  }
  return param_1;
}



// FUNCTION 1483db822 FUN_1483db822 body=400 status=ok
// SIG undefined FUN_1483db822(void)

double FUN_1483db822(longlong param_1,longlong param_2)

{
  double dVar1;
  ulonglong uVar2;
  double *pdVar3;
  double *pdVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar2 = *(ulonglong *)(*(longlong *)(param_2 + 0x40) + 8);
  uVar6 = uVar2 + 3;
  if (-1 < (longlong)uVar2) {
    uVar6 = uVar2;
  }
  pdVar3 = *(double **)(param_1 + 0x30);
  if (uVar2 + 1 < 3) {
    dVar8 = ABS(**(double **)(param_1 + 0x10) - *(double *)(param_1 + 0x20) * *pdVar3);
  }
  else {
    uVar5 = uVar2 - ((longlong)uVar2 >> 0x3f) & 0xfffffffffffffffe;
    dVar1 = *(double *)(param_1 + 0x20);
    pdVar4 = *(double **)(param_1 + 0x10);
    auVar12._0_8_ = ABS(*pdVar4 - *pdVar3 * dVar1);
    auVar12._8_8_ = ABS(pdVar4[1] - pdVar3[1] * dVar1);
    if (3 < (longlong)uVar2) {
      uVar6 = uVar6 & 0xfffffffffffffffc;
      auVar14._0_8_ = ABS(pdVar4[2] - pdVar3[2] * dVar1);
      auVar14._8_8_ = ABS(pdVar4[3] - pdVar3[3] * dVar1);
      if (uVar2 < 8) {
      }
      else {
        lVar7 = 4;
        do {
          auVar11._0_8_ = ABS(pdVar4[lVar7] - pdVar3[lVar7] * dVar1);
          auVar11._8_8_ = ABS((pdVar4 + lVar7)[1] - (pdVar3 + lVar7)[1] * dVar1);
          auVar12 = maxpd(auVar11,auVar12);
          auVar13._0_8_ = ABS(pdVar4[lVar7 + 2] - pdVar3[lVar7 + 2] * dVar1);
          auVar13._8_8_ = ABS((pdVar4 + lVar7 + 2)[1] - (pdVar3 + lVar7 + 2)[1] * dVar1);
          auVar14 = maxpd(auVar13,auVar14);
          lVar7 = lVar7 + 4;
        } while (lVar7 < (longlong)uVar6);
      }
      auVar12 = maxpd(auVar14,auVar12);
      if ((longlong)uVar6 < (longlong)uVar5) {
        auVar10._0_8_ = ABS(pdVar4[uVar6] - dVar1 * pdVar3[uVar6]);
        auVar10._8_8_ = ABS((pdVar4 + uVar6)[1] - dVar1 * (pdVar3 + uVar6)[1]);
        auVar12 = maxpd(auVar10,auVar12);
      }
    }
    dVar8 = auVar12._8_8_;
    if (auVar12._8_8_ <= auVar12._0_8_) {
      dVar8 = auVar12._0_8_;
    }
    dVar9 = dVar8;
    if ((longlong)uVar5 < (longlong)uVar2) {
      do {
        dVar8 = ABS(pdVar4[uVar5] - pdVar3[uVar5] * dVar1);
        if (dVar8 <= dVar9) {
          dVar8 = dVar9;
        }
        uVar5 = uVar5 + 1;
        dVar9 = dVar8;
      } while (uVar2 != uVar5);
    }
  }
  return dVar8;
}



// FUNCTION 1483db9b2 FUN_1483db9b2 body=102 status=ok
// SIG undefined FUN_1483db9b2(void)

void FUN_1483db9b2(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined1 local_40 [8];
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_1;
  local_30 = param_2;
  if (param_2[1] != 0) {
    local_18 = *param_1;
    local_10 = *param_2;
    FUN_146de40ee(0,&local_41,local_40);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dba19 FUN_1483dba19 body=96 status=ok
// SIG undefined FUN_1483dba19(void)

void FUN_1483dba19(undefined8 param_1)

{
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1483db37c(&local_28);
  FUN_146de611d(param_1,&local_28,&local_29);
  FUN_1400020a8(local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dba7a FUN_1483dba7a body=267 status=ok
// SIG undefined FUN_1483dba7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1483dba7a(undefined8 *param_1,longlong param_2)

{
  void *_Dst;
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if ((param_1[1] != lVar2) || (param_1[2] != lVar4)) {
    FUN_14828b000(param_1);
    lVar2 = param_1[1];
    lVar4 = param_1[2];
  }
  auVar1 = _DAT_149931e80;
  lVar4 = lVar4 * lVar2;
  if (0 < lVar4) {
    lVar2 = *(longlong *)(param_2 + 0x18);
    _Dst = (void *)*param_1;
    if (lVar2 == 0) {
      memset(_Dst,0,lVar4 * 8);
      return;
    }
    lVar5 = lVar4 + -1;
    auVar6._8_4_ = (int)lVar5;
    auVar6._0_8_ = lVar5;
    auVar6._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
    uVar3 = 0;
    auVar7 = pmovsxbq(in_XMM2,0x100);
    auVar6 = auVar6 ^ _DAT_149931e80;
    do {
      if ((bool)(~(auVar6._0_8_ < (longlong)(uVar3 ^ auVar1._0_8_)) & 1)) {
        *(longlong *)((longlong)_Dst + uVar3 * 8) = lVar2;
      }
      auVar8._8_4_ = (int)uVar3;
      auVar8._0_8_ = uVar3;
      auVar8._12_4_ = (int)(uVar3 >> 0x20);
      if ((longlong)((auVar8._8_8_ | auVar7._8_8_) ^ auVar1._8_8_) <= auVar6._8_8_) {
        *(longlong *)((longlong)_Dst + uVar3 * 8 + 8) = lVar2;
      }
      uVar3 = uVar3 + 2;
    } while ((lVar4 + 1U & 0xfffffffffffffffe) != uVar3);
  }
  return;
}



// FUNCTION 1483dbb86 FUN_1483dbb86 body=203 status=ok
// SIG undefined FUN_1483dbb86(void)

void FUN_1483dbb86(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  longlong local_48;
  longlong local_40;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_1[1];
  local_30 = 0;
  FUN_146de41cc(param_1,&local_48,&local_49);
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
  if (param_1[1] != lVar1) {
    FUN_146de3c6e(param_1,lVar1,1);
  }
  lVar1 = *param_1;
  FUN_1483cec38(&local_48,param_2);
  if (local_30 < local_28) {
    do {
      local_30 = local_30 + 1;
      *(undefined8 *)(lVar1 + (longlong)*(int *)(local_40 + -4 + local_30 * 4) * 8) =
           *(undefined8 *)(local_48 + -8 + local_30 * 8);
    } while (local_30 != local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483dbc52 FUN_1483dbc52 body=142 status=ok
// SIG undefined FUN_1483dbc52(void)

void FUN_1483dbc52(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30[0] = *param_2;
  local_20 = *(undefined8 *)(param_2[3] + 8);
  if (param_1[1] != param_2[1]) {
    FUN_146de3c6e(param_1,param_2[1],1);
  }
  local_38 = *param_1;
  local_58 = &local_38;
  local_50 = local_30;
  local_48 = param_3;
  local_40 = param_1;
  FUN_1483dbce2();
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dbce2 FUN_1483dbce2 body=109 status=ok
// SIG undefined FUN_1483dbce2(void)

void FUN_1483dbce2(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar3 = *(ulonglong *)(param_1[3] + 8);
  uVar6 = uVar3 - ((longlong)uVar3 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < (longlong)uVar3) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(*(longlong *)param_1[1] + lVar5 * 8);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(*(longlong *)*param_1 + lVar5 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      lVar5 = lVar5 + 2;
    } while (lVar5 < (longlong)uVar6);
  }
  if ((longlong)uVar6 < (longlong)uVar3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + uVar6 * 8) =
           *(undefined8 *)(*(longlong *)param_1[1] + uVar6 * 8);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  return;
}



// FUNCTION 1483dbd50 FUN_1483dbd50 body=283 status=ok
// SIG undefined FUN_1483dbd50(void)

void FUN_1483dbd50(longlong *param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong local_70;
  undefined1 local_68 [8];
  double local_60;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = *(double *)(param_2 + 0x20);
  local_48 = **(longlong **)(param_2 + 0x30);
  lStack_40 = (*(longlong **)(param_2 + 0x30))[1];
  FUN_1483dbe6c(&local_38,param_2 + 0x38);
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x10);
  if (param_1[1] != lVar6) {
    FUN_146de3c6e(param_1,lVar6);
    lVar6 = param_1[1];
  }
  local_70 = *param_1;
  local_90 = &local_70;
  local_88 = local_68;
  uVar7 = lVar6 - (lVar6 >> 0x3f) & 0xfffffffffffffffe;
  if (1 < lVar6) {
    lVar8 = 0;
    do {
      pdVar1 = (double *)(local_38 + lVar8 * 8);
      dVar5 = pdVar1[1];
      pdVar2 = (double *)(local_48 + lVar8 * 8);
      dVar4 = pdVar2[1];
      pdVar3 = (double *)(local_70 + lVar8 * 8);
      *pdVar3 = local_60 * (*pdVar1 + *pdVar2);
      pdVar3[1] = local_60 * (dVar5 + dVar4);
      lVar8 = lVar8 + 2;
    } while (lVar8 < (longlong)uVar7);
  }
  local_80 = param_3;
  local_78 = param_1;
  FUN_1483dbf2c(&local_90,uVar7,lVar6);
  FUN_1400020a8(local_30);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dbe6c FUN_1483dbe6c body=190 status=ok
// SIG undefined FUN_1483dbe6c(void)

undefined8 * FUN_1483dbe6c(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  puVar1 = param_1 + 1;
  uVar2 = *(undefined8 *)(*param_2 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_146de3c6e(puVar1,uVar2,1);
  *param_1 = param_1[1];
  lVar3 = *param_2;
  lVar4 = param_2[1];
  local_50 = param_1[2];
  local_40 = 0;
  FUN_146de41cc(puVar1,&local_58,&local_59);
  local_58 = 0x3ff0000000000000;
  FUN_1483db422(lVar3,lVar4,puVar1,&local_58);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dbf2c FUN_1483dbf2c body=55 status=ok
// SIG undefined FUN_1483dbf2c(void)

void FUN_1483dbf2c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_2 < param_3) {
    do {
      lVar1 = param_1[1];
      *(double *)(*(longlong *)*param_1 + param_2 * 8) =
           (*(double *)(*(longlong *)(lVar1 + 0x20) + param_2 * 8) +
           *(double *)(*(longlong *)(lVar1 + 0x30) + param_2 * 8)) * *(double *)(lVar1 + 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483dbf63 FUN_1483dbf63 body=96 status=ok
// SIG undefined FUN_1483dbf63(void)

void FUN_1483dbf63(undefined8 param_1)

{
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1483dbfc4(&local_28);
  FUN_146de611d(param_1,&local_28,&local_29);
  FUN_1400020a8(local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dbfc4 FUN_1483dbfc4 body=61 status=ok
// SIG undefined FUN_1483dbfc4(void)

void FUN_1483dbfc4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x10);
  if (*(longlong *)(param_1 + 8) != lVar1) {
    FUN_146de3c6e(param_1,lVar1,1);
  }
  FUN_1483dc002(param_1,param_2,*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1483dc002 FUN_1483dc002 body=173 status=ok
// SIG undefined FUN_1483dc002(void)

void FUN_1483dc002(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = *(undefined8 *)(param_1 + 8);
  uStack_50 = 0;
  FUN_146de41cc(param_1,local_68,&local_70);
  local_70 = 0x3ff0000000000000;
  local_68[0] = *param_2;
  local_58 = *(undefined8 *)(param_2 + 0x10);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  local_48 = *(undefined8 *)(param_2 + 0x20);
  local_40 = *(undefined8 *)(param_2 + 0x28);
  FUN_1483dc0b0(local_68,param_3,param_1,&local_70);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dc0b0 FUN_1483dc0b0 body=151 status=ok
// SIG undefined FUN_1483dc0b0(void)

void FUN_1483dc0b0(longlong param_1,longlong *param_2,longlong *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (0 < *(longlong *)(lVar4 + 8)) {
    dVar1 = *(double *)(param_1 + 0x20);
    lVar8 = 0;
    lVar7 = lVar4;
    do {
      lVar9 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x18) + lVar8 * 4);
      if (*(longlong *)(lVar4 + 0x20) == 0) {
        lVar6 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x18) + 4 + lVar8 * 4);
      }
      else {
        lVar6 = *(int *)(*(longlong *)(lVar4 + 0x20) + lVar8 * 4) + lVar9;
      }
      if (lVar9 < lVar6) {
        dVar2 = *param_4;
        dVar3 = *(double *)(*param_2 + lVar8 * 8);
        lVar7 = *(longlong *)(lVar4 + 0x28);
        lVar5 = *(longlong *)(lVar4 + 0x30);
        do {
          lVar10 = (longlong)*(int *)(lVar5 + lVar9 * 4);
          *(double *)(*param_3 + lVar10 * 8) =
               *(double *)(lVar7 + lVar9 * 8) * dVar1 * dVar2 * dVar3 +
               *(double *)(*param_3 + lVar10 * 8);
          lVar9 = lVar9 + 1;
        } while (lVar6 != lVar9);
        lVar7 = *(longlong *)(param_1 + 0x28);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(longlong *)(lVar7 + 8));
  }
  return;
}



// FUNCTION 1483dc148 FUN_1483dc148 body=145 status=ok
// SIG undefined FUN_1483dc148(void)

void FUN_1483dc148(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar3 = *(ulonglong *)param_1[3];
  uVar4 = ((ulonglong *)param_1[3])[1];
  uVar8 = uVar4;
  if (((uVar3 & 7) == 0) &&
     (uVar8 = (ulonglong)((uint)(uVar3 >> 3) & 1), (longlong)uVar4 <= (longlong)uVar8)) {
    uVar8 = uVar4;
  }
  lVar10 = uVar4 - uVar8;
  lVar9 = (lVar10 - (lVar10 >> 0x3f) & 0xfffffffffffffffeU) + uVar8;
  FUN_1483dc1da(param_1,0,uVar8);
  if (1 < lVar10) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + uVar8 * 8);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(*(longlong *)*param_1 + uVar8 * 8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      uVar8 = uVar8 + 2;
    } while ((longlong)uVar8 < lVar9);
  }
  FUN_1483dc1da(param_1,lVar9,uVar4);
  return;
}



// FUNCTION 1483dc1da FUN_1483dc1da body=38 status=ok
// SIG undefined FUN_1483dc1da(void)

void FUN_1483dc1da(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined8 *)(*(longlong *)*param_1 + param_2 * 8) =
           *(undefined8 *)(*(longlong *)param_1[1] + param_2 * 8);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 1483dc200 FUN_1483dc200 body=67 status=ok
// SIG undefined FUN_1483dc200(void)

void FUN_1483dc200(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_146e2d0aa(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146e37308(param_1);
    return;
  }
  FUN_146e390d2(param_1);
  FUN_146e2d0aa(param_1,0);
  return;
}



// FUNCTION 1483dc294 FUN_1483dc294 body=585 status=ok
// SIG undefined FUN_1483dc294(void)

void FUN_1483dc294(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_318 [32];
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 local_1e8 [12];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  byte local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_2f8 = 0;
  local_2f0 = DAT_14c8464e0;
  uStack_2e8 = DAT_14c8464e8;
  local_2e0 = DAT_14c8464f0;
  local_2d8 = 0x42c80000;
  local_2d4 = 1;
  local_2d0 = DAT_14c8464e0;
  uStack_2c8 = DAT_14c8464e8;
  local_2c0 = DAT_14c8464f0;
  local_2b8 = DAT_14c8464e0;
  uStack_2b0 = DAT_14c8464e8;
  local_2a8 = DAT_14c8464f0;
  local_298 = DAT_14c8463d0;
  uStack_290 = DAT_14c8463d8;
  local_288 = (undefined4)DAT_14c8463e0;
  uStack_284 = DAT_14c8463e0._4_4_;
  uStack_280 = (undefined4)DAT_14c8463e8;
  uStack_27c = DAT_14c8463e8._4_4_;
  local_278 = DAT_14c8464e0;
  uStack_270 = DAT_14c8464e8;
  local_268 = DAT_14c8464f0;
  local_260 = 0xc61c40003f800000;
  uStack_258 = 0;
  local_240 = DAT_14c8464f0;
  local_250 = DAT_14c8464e0;
  uStack_248 = DAT_14c8464e8;
  local_228 = DAT_14c8462d0;
  local_238 = DAT_14c8462c0;
  uStack_230 = DAT_14c8462c8;
  local_210 = DAT_14c8464f0;
  local_220 = DAT_14c8464e0;
  uStack_218 = DAT_14c8464e8;
  local_1f8 = DAT_14c8464f0;
  local_208 = DAT_14c8464e0;
  uStack_200 = DAT_14c8464e8;
  local_1f0 = 0;
  local_1ec = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_1e8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_168 = 0;
  local_160 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = (local_48 & 0xfc) + 1;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1483dc4de(&local_2f8);
  FUN_1447cd2ec(param_1,&local_2f8);
  FUN_1483dd086(&local_2f8);
  if ((local_20 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dc4de FUN_1483dc4de body=176 status=ok
// SIG undefined FUN_1483dc4de(void)

void * FUN_1483dc4de(void *param_1,void *param_2)

{
  longlong lVar1;
  
  memcpy(param_1,param_2,0x170);
  FUN_1483e8bea((longlong)param_1 + 0x170,(longlong)param_2 + 0x170);
  FUN_1483e8bea((longlong)param_1 + 0x1c0,(longlong)param_2 + 0x1c0);
  FUN_1483e8d60((longlong)param_1 + 0x210,(longlong)param_2 + 0x210);
  FUN_1483e8d60((longlong)param_1 + 0x260,(longlong)param_2 + 0x260);
  *(undefined1 *)((longlong)param_1 + 0x2b0) = *(undefined1 *)((longlong)param_2 + 0x2b0);
  lVar1 = *(longlong *)((longlong)param_2 + 0x2b8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)((longlong)param_2 + 0x2b8);
    }
  }
  *(longlong *)((longlong)param_1 + 0x2b8) = lVar1;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = *(undefined8 *)((longlong)param_2 + 0x2c0);
  return param_1;
}



// FUNCTION 1483dc58e FUN_1483dc58e body=585 status=ok
// SIG undefined FUN_1483dc58e(void)

void FUN_1483dc58e(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_318 [32];
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 local_1e8 [12];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  byte local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_2f8 = 0;
  local_2f0 = DAT_14c8464e0;
  uStack_2e8 = DAT_14c8464e8;
  local_2e0 = DAT_14c8464f0;
  local_2d8 = 0x42c80000;
  local_2d4 = 1;
  local_2d0 = DAT_14c8464e0;
  uStack_2c8 = DAT_14c8464e8;
  local_2c0 = DAT_14c8464f0;
  local_2b8 = DAT_14c8464e0;
  uStack_2b0 = DAT_14c8464e8;
  local_2a8 = DAT_14c8464f0;
  local_298 = DAT_14c8463d0;
  uStack_290 = DAT_14c8463d8;
  local_288 = (undefined4)DAT_14c8463e0;
  uStack_284 = DAT_14c8463e0._4_4_;
  uStack_280 = (undefined4)DAT_14c8463e8;
  uStack_27c = DAT_14c8463e8._4_4_;
  local_278 = DAT_14c8464e0;
  uStack_270 = DAT_14c8464e8;
  local_268 = DAT_14c8464f0;
  local_260 = 0xc61c40003f800000;
  uStack_258 = 0;
  local_240 = DAT_14c8464f0;
  local_250 = DAT_14c8464e0;
  uStack_248 = DAT_14c8464e8;
  local_228 = DAT_14c8462d0;
  local_238 = DAT_14c8462c0;
  uStack_230 = DAT_14c8462c8;
  local_210 = DAT_14c8464f0;
  local_220 = DAT_14c8464e0;
  uStack_218 = DAT_14c8464e8;
  local_1f8 = DAT_14c8464f0;
  local_208 = DAT_14c8464e0;
  uStack_200 = DAT_14c8464e8;
  local_1f0 = 0;
  local_1ec = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_1e8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_168 = 0;
  local_160 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = (local_48 & 0xfc) + 1;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1483dc4de(&local_2f8);
  FUN_1447cd2ec(param_1,&local_2f8);
  FUN_1483dd086(&local_2f8);
  if ((local_20 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dc7f8 FUN_1483dc7f8 body=88 status=ok
// SIG undefined FUN_1483dc7f8(void)

undefined8 * FUN_1483dc7f8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1483e9a7c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1483dc850 FUN_1483dc850 body=872 status=ok
// SIG undefined FUN_1483dc850(void)

void FUN_1483dc850(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_d8 [40];
  undefined4 local_b0 [6];
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90 [3];
  undefined8 local_78 [3];
  undefined8 local_60 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar9 = local_60;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar13 = local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_2 + 0x38);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_90);
  }
  puVar11 = local_90;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar11 = *(undefined8 **)(param_2 + 0x38);
  }
  local_94 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  puVar12 = &local_94;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar12 = *(undefined4 **)(param_2 + 0x38);
  }
  local_98 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar10 = &local_98;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar10 = *(undefined4 **)(param_2 + 0x38);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  puVar7 = local_b0;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar7 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (0 < (longlong)*(int *)(param_1 + 0x148)) {
    lVar2 = *(longlong *)(param_1 + 0x140);
    lVar8 = 0;
    do {
      if (0.0 < *(float *)(lVar2 + 0xa4 + lVar8)) {
        puVar9[2] = *(undefined8 *)(lVar2 + 0xb8 + lVar8);
        puVar1 = (undefined8 *)(lVar2 + 0xa8 + lVar8);
        uVar6 = puVar1[1];
        *puVar9 = *puVar1;
        puVar9[1] = uVar6;
        lVar2 = *(longlong *)(param_1 + 0x140);
        puVar13[2] = *(undefined8 *)(lVar2 + 0xd0 + lVar8);
        puVar1 = (undefined8 *)(lVar2 + 0xc0 + lVar8);
        uVar6 = puVar1[1];
        *puVar13 = *puVar1;
        puVar13[1] = uVar6;
        lVar2 = *(longlong *)(param_1 + 0x140);
        puVar11[2] = *(undefined8 *)(lVar2 + 0xe8 + lVar8);
        puVar1 = (undefined8 *)(lVar2 + 0xd8 + lVar8);
        uVar6 = puVar1[1];
        *puVar11 = *puVar1;
        puVar11[1] = uVar6;
        *puVar12 = *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0xa0 + lVar8);
        *puVar10 = *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x108 + lVar8);
        lVar2 = *(longlong *)(param_1 + 0x140);
        *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(lVar2 + 0x100 + lVar8);
        puVar12 = (undefined4 *)(lVar2 + 0xf0 + lVar8);
        uVar3 = puVar12[1];
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        *puVar7 = *puVar12;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        break;
      }
      lVar8 = lVar8 + 0x2d0;
    } while ((longlong)*(int *)(param_1 + 0x148) * 0x2d0 - lVar8 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483dcbfe FUN_1483dcbfe body=634 status=ok
// SIG undefined FUN_1483dcbfe(void)

void FUN_1483dcbfe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_318 [32];
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 local_1e8 [12];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  byte local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_2f8 = 0;
  local_2f0 = DAT_14c8464e0;
  uStack_2e8 = DAT_14c8464e8;
  local_2e0 = DAT_14c8464f0;
  local_2d8 = 0x42c80000;
  local_2d4 = 1;
  local_2d0 = DAT_14c8464e0;
  uStack_2c8 = DAT_14c8464e8;
  local_2c0 = DAT_14c8464f0;
  local_2b8 = DAT_14c8464e0;
  uStack_2b0 = DAT_14c8464e8;
  local_2a8 = DAT_14c8464f0;
  local_298 = DAT_14c8463d0;
  uStack_290 = DAT_14c8463d8;
  local_288 = DAT_14c8463e0;
  uStack_280 = DAT_14c8463e8;
  local_278 = DAT_14c8464e0;
  uStack_270 = DAT_14c8464e8;
  local_268 = DAT_14c8464f0;
  local_260 = 0xc61c40003f800000;
  uStack_258 = 0;
  local_240 = DAT_14c8464f0;
  local_250 = DAT_14c8464e0;
  uStack_248 = DAT_14c8464e8;
  local_228 = DAT_14c8462d0;
  local_238 = (undefined4)DAT_14c8462c0;
  uStack_234 = DAT_14c8462c0._4_4_;
  uStack_230 = (undefined4)DAT_14c8462c8;
  uStack_22c = DAT_14c8462c8._4_4_;
  local_210 = DAT_14c8464f0;
  local_220 = DAT_14c8464e0;
  uStack_218 = DAT_14c8464e8;
  local_1f8 = DAT_14c8464f0;
  local_208 = DAT_14c8464e0;
  uStack_200 = DAT_14c8464e8;
  local_1f0 = 0;
  local_1ec = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_1e8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_168 = 0;
  local_160 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = (local_48 & 0xfc) + 1;
  local_40 = 0;
  uStack_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2f8);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_2f8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1483dc294(param_1 + 0x120,puVar2);
  FUN_1483dd086(&local_2f8);
  if ((local_28 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dce7a FUN_1483dce7a body=523 status=ok
// SIG undefined FUN_1483dce7a(void)

void FUN_1483dce7a(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  uVar1 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = uVar1;
  param_1[3] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 4) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  param_1[7] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[5] = DAT_14c8464e0;
  param_1[6] = uVar1;
  param_1[10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[8] = DAT_14c8464e0;
  param_1[9] = uVar1;
  uVar1 = DAT_14c8463d8;
  param_1[0xc] = DAT_14c8463d0;
  param_1[0xd] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_1[0xe] = DAT_14c8463e0;
  param_1[0xf] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x10] = DAT_14c8464e0;
  param_1[0x11] = uVar1;
  param_1[0x12] = DAT_14c8464f0;
  param_1[0x13] = 0xc61c40003f800000;
  param_1[0x14] = 0;
  param_1[0x17] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x15] = DAT_14c8464e0;
  param_1[0x16] = uVar1;
  param_1[0x1a] = DAT_14c8462d0;
  uVar1 = DAT_14c8462c8;
  param_1[0x18] = DAT_14c8462c0;
  param_1[0x19] = uVar1;
  param_1[0x1d] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1b] = DAT_14c8464e0;
  param_1[0x1c] = uVar1;
  param_1[0x20] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1e] = DAT_14c8464e0;
  param_1[0x1f] = uVar1;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x22;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(byte *)(param_1 + 0x56) = (*(byte *)(param_1 + 0x56) & 0xfc) + 1;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  return;
}



// FUNCTION 1483dd086 FUN_1483dd086 body=183 status=ok
// SIG undefined FUN_1483dd086(void)

void FUN_1483dd086(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FUN_1400020a8();
  }
  FUN_1483e8ed6(param_1 + 0x260);
  *(undefined4 *)(param_1 + 600) = 0;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_1400020a8();
  }
  FUN_1483e8ed6(param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x208) = 0;
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FUN_1400020a8();
  }
  FUN_1483e8f0c(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  FUN_1483e8f0c(param_1 + 0x170);
  return;
}



// FUNCTION 1483dd13e FUN_1483dd13e body=634 status=ok
// SIG undefined FUN_1483dd13e(void)

void FUN_1483dd13e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_318 [32];
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 local_1e8 [12];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  byte local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_2f8 = 0;
  local_2f0 = DAT_14c8464e0;
  uStack_2e8 = DAT_14c8464e8;
  local_2e0 = DAT_14c8464f0;
  local_2d8 = 0x42c80000;
  local_2d4 = 1;
  local_2d0 = DAT_14c8464e0;
  uStack_2c8 = DAT_14c8464e8;
  local_2c0 = DAT_14c8464f0;
  local_2b8 = DAT_14c8464e0;
  uStack_2b0 = DAT_14c8464e8;
  local_2a8 = DAT_14c8464f0;
  local_298 = DAT_14c8463d0;
  uStack_290 = DAT_14c8463d8;
  local_288 = DAT_14c8463e0;
  uStack_280 = DAT_14c8463e8;
  local_278 = DAT_14c8464e0;
  uStack_270 = DAT_14c8464e8;
  local_268 = DAT_14c8464f0;
  local_260 = 0xc61c40003f800000;
  uStack_258 = 0;
  local_240 = DAT_14c8464f0;
  local_250 = DAT_14c8464e0;
  uStack_248 = DAT_14c8464e8;
  local_228 = DAT_14c8462d0;
  local_238 = (undefined4)DAT_14c8462c0;
  uStack_234 = DAT_14c8462c0._4_4_;
  uStack_230 = (undefined4)DAT_14c8462c8;
  uStack_22c = DAT_14c8462c8._4_4_;
  local_210 = DAT_14c8464f0;
  local_220 = DAT_14c8464e0;
  uStack_218 = DAT_14c8464e8;
  local_1f8 = DAT_14c8464f0;
  local_208 = DAT_14c8464e0;
  uStack_200 = DAT_14c8464e8;
  local_1f0 = 0;
  local_1ec = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_1e8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_168 = 0;
  local_160 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_15c = 0xffffffff00000080;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = (local_48 & 0xfc) + 1;
  local_40 = 0;
  uStack_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2f8);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_2f8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1483dc58e(param_1 + 0x130,puVar2);
  FUN_1483dd086(&local_2f8);
  if ((local_28 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dd3bc FUN_1483dd3bc body=48 status=ok
// SIG undefined FUN_1483dd3bc(void)

void FUN_1483dd3bc(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  FUN_14482855a(param_1,plVar1);
                    /* WARNING: Could not recover jumptable at 0x0001483dd3e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14aea0ec0);
  return;
}



// FUNCTION 1483dd3ec FUN_1483dd3ec body=41 status=ok
// SIG undefined FUN_1483dd3ec(void)

void FUN_1483dd3ec(undefined8 param_1,longlong *param_2)

{
  FUN_14482855a();
                    /* WARNING: Could not recover jumptable at 0x0001483dd412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14aea0ec0);
  return;
}



// FUNCTION 1483dd416 FUN_1483dd416 body=427 status=ok
// SIG undefined FUN_1483dd416(void)

void FUN_1483dd416(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [13];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1401c3ca6();
  if (param_1[0x15] == 0) {
    lVar3 = param_1[0x3c];
    goto LAB_1483dd48b;
  }
  lVar3 = *(longlong *)(param_1[0x15] + 0x1c8);
  if (lVar3 == 0) {
LAB_1483dd482:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_144a3a302();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1483dd482;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
    }
  }
  param_1[0x3c] = lVar3;
LAB_1483dd48b:
  if (lVar3 != 0) {
    lVar3 = param_1[0x29];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = param_1[0x28];
      lVar7 = 0;
      do {
        if ((*(longlong *)(lVar2 + lVar7) != 0) &&
           (cVar1 = (**(code **)(*(longlong *)param_1[0x3c] + 0x4c8))(), cVar1 != '\0')) {
          puVar6 = (undefined8 *)(lVar2 + lVar7);
          *(byte *)(puVar6 + 0x56) = *(byte *)(puVar6 + 0x56) | 2;
          (**(code **)(*(longlong *)param_1[0x3c] + 0x4a8))
                    ((longlong *)param_1[0x3c],local_a8,*puVar6,1);
          puVar5 = local_a8;
          puVar6 = puVar6 + 0x22;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        lVar7 = lVar7 + 0x2d0;
      } while ((longlong)(int)lVar3 * 0x2d0 - lVar7 != 0);
    }
    (**(code **)(*param_1 + 0x4a8))(param_1);
  }
  (**(code **)(*param_1 + 0x488))(param_1);
  lVar3 = param_1[0x16];
  if ((((lVar3 != 0) || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)) &&
      (lVar3 = FUN_140702026(lVar3), lVar3 != 0)) && (*(longlong *)(lVar3 + 0x40) != 0)) {
    FUN_1483dd5c2(*(longlong *)(lVar3 + 0x40),param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483dd5c2 FUN_1483dd5c2 body=214 status=ok
// SIG undefined FUN_1483dd5c2(void)

void FUN_1483dd5c2(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_1483eebe4(param_1 + 0x3e0,&local_30);
  if (*(longlong *)(param_1 + 0x410) == 0) {
    iVar2 = *(int *)(param_1 + 0x408);
    *(uint *)(param_1 + 0x408) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x40c) < iVar2 + 1U) {
      FUN_1483eed28((longlong *)(param_1 + 0x400),iVar2);
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x400) + (longlong)iVar2 * 8);
    *puVar1 = 0;
    FUN_14485c47a(puVar1,param_2);
  }
  else {
    FUN_1483e0d40(param_1,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1483e09f7(param_1 + 0x458,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dd69a FUN_1483dd69a body=86 status=ok
// SIG undefined FUN_1483dd69a(void)

void FUN_1483dd69a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if ((((lVar1 != 0) || (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)) &&
      (lVar1 = FUN_140702026(lVar1), lVar1 != 0)) && (*(longlong *)(lVar1 + 0x40) != 0)) {
    FUN_1483dd6f0(*(longlong *)(lVar1 + 0x40),param_1);
  }
  FUN_1401c3216(param_1,param_2);
  return;
}



// FUNCTION 1483dd6f0 FUN_1483dd6f0 body=153 status=ok
// SIG undefined FUN_1483dd6f0(void)

void FUN_1483dd6f0(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_20 = &local_28;
  FUN_1483eedae(param_1 + 0x3e0);
  local_30 = 0;
  FUN_14485c47a(&local_30,*(undefined8 *)(param_2 + 0xa8));
  FUN_1483eeede(param_1 + 0x458,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dd78a FUN_1483dd78a body=166 status=ok
// SIG undefined FUN_1483dd78a(void)

void FUN_1483dd78a(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140136774();
  local_28 = 0x40d2fba7;
  uStack_24 = 0x4b484ce5;
  uStack_20 = 0xb0385a75;
  uStack_1c = 0x884e499e;
  iVar1 = FUN_1448a256a(param_1);
  if (iVar1 < 4) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x118) != 0) {
      FUN_1483dd832(param_1 + 0x140,param_1 + 0x110);
      uVar2 = *(undefined4 *)(param_1 + 0x118);
    }
    FUN_145d291f8(*(undefined8 *)(param_1 + 0x110),uVar2);
    *(undefined4 *)(param_1 + 0x118) = 0;
    if (*(int *)(param_1 + 0x11c) != 0) {
      FUN_1483e9d1c(param_1 + 0x110);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dd832 FUN_1483dd832 body=95 status=ok
// SIG undefined FUN_1483dd832(void)

undefined8 * FUN_1483dd832(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145d291f8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1483e9ade(param_1,iVar1);
      FUN_1483e9b50(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1483dd892 FUN_1483dd892 body=631 status=ok
// SIG undefined FUN_1483dd892(void)

void FUN_1483dd892(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_e8 [32];
  float local_c8;
  longlong local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined1 local_98 [24];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1[0x3c] != 0) {
    FUN_1483ddb0a();
    lVar5 = param_1[0x3e];
    if ((lVar5 != 0) && (*(char *)(lVar5 + 9) == '\x01')) {
      *(byte *)((longlong)param_1 + 0x274) =
           *(byte *)((longlong)param_1 + 0x274) & 0xfb | *(char *)(lVar5 + 0x10) << 2;
      uVar4 = *(uint *)(lVar5 + 0x30);
      if ((int)*(uint *)(param_1 + 0x29) < (int)*(uint *)(lVar5 + 0x30)) {
        uVar4 = *(uint *)(param_1 + 0x29);
      }
      if (0 < (int)uVar4) {
        lVar7 = 0;
        do {
          FUN_1483ddb70(param_1[0x28] + lVar7,*(longlong *)(lVar5 + 0x28) + lVar7);
          lVar7 = lVar7 + 0x2d0;
        } while ((ulonglong)uVar4 * 0x2d0 - lVar7 != 0);
      }
    }
    if (param_1[0x3d] != 0) {
      lVar5 = (**(code **)(*(longlong *)param_1[0x3c] + 0x7b8))
                        ((longlong *)param_1[0x3c],0,1,0xffffffff);
      if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x138) != 0)) {
        *(longlong *)(param_1[0x3d] + 0x18) = *(longlong *)(lVar5 + 0x138);
      }
      lVar5 = param_1[0x3d];
      FUN_1483dc7f8(lVar5 + 0x20,param_1 + 0x3a);
      FUN_1483dd832(lVar5 + 0x30,param_1 + 0x28);
      lVar7 = param_1[0x3b];
      if ((longlong)(int)lVar7 != 0) {
        lVar1 = param_1[0x3a];
        lVar6 = 0;
        do {
          plVar2 = *(longlong **)(lVar1 + lVar6);
          if ((plVar2 != (longlong *)0x0) && (cVar3 = FUN_1405b9b94(plVar2), cVar3 != '\0')) {
            fVar8 = (float)(**(code **)(*plVar2 + 0xac8))(plVar2);
            goto LAB_1483dda05;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)lVar7 * 8 != lVar6);
      }
      lVar7 = param_1[0x16];
      if (lVar7 == 0) {
        lVar7 = FUN_1448abda6(param_1);
      }
      fVar8 = (float)*(double *)(lVar7 + 0x6d0);
LAB_1483dda05:
      *(float *)(lVar5 + 0x40) = fVar8;
    }
    cVar3 = FUN_1483ddc98(param_1);
    if (cVar3 == '\0') {
      (**(code **)(*(longlong *)param_1[0x3c] + 0x4e0))((longlong *)param_1[0x3c],&local_68);
      FUN_14141a100(param_1[0x3c],&local_80);
      FUN_14348affe(param_1[0x3c],local_98);
      local_c8 = (float)(local_70 * local_58 + local_80 * local_68 + local_78 * dStack_60) * 0.036;
      local_c0 = param_1[0x3c];
      local_b8 = local_68;
      dStack_b0 = dStack_60;
      local_a8 = local_58;
      (**(code **)(*param_1 + 0x480))(param_1,param_2);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483ddb0a FUN_1483ddb0a body=101 status=ok
// SIG undefined FUN_1483ddb0a(void)

void FUN_1483ddb0a(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  if ((longlong)*(int *)(param_1 + 0x148) < 1) {
    uVar3 = 0;
  }
  else {
    pbVar2 = (byte *)(*(longlong *)(param_1 + 0x140) + 0x2b0);
    lVar1 = 0;
    uVar3 = 0;
    do {
      uVar4 = 1 << ((byte)lVar1 & 0x1f);
      if ((*pbVar2 & 1) == 0) {
        uVar4 = 0;
      }
      uVar3 = uVar3 | uVar4;
      lVar1 = lVar1 + 1;
      pbVar2 = pbVar2 + 0x2d0;
    } while (*(int *)(param_1 + 0x148) != lVar1);
  }
  uVar4 = *(uint *)(param_1 + 0x218);
  *(uint *)(param_1 + 0x218) = uVar3;
  if (uVar4 != uVar3) {
    FUN_1483dec50(param_1);
    return;
  }
  return;
}



// FUNCTION 1483ddb70 FUN_1483ddb70 body=295 status=ok
// SIG undefined FUN_1483ddb70(void)

void FUN_1483ddb70(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined4 *)(param_2 + 0x70);
  uVar2 = *(undefined4 *)(param_2 + 0x74);
  uVar3 = *(undefined4 *)(param_2 + 0x78);
  uVar4 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined1 *)(param_1 + 0x10c) = *(undefined1 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  uVar5 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  uVar5 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = uVar5;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  uVar5 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  uVar1 = *(undefined4 *)(param_2 + 0xf4);
  uVar2 = *(undefined4 *)(param_2 + 0xf8);
  uVar3 = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  lVar6 = *(longlong *)(param_2 + 0x2b8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *(longlong *)(param_2 + 0x2b8);
    }
  }
  *(longlong *)(param_1 + 0x2b8) = lVar6;
  return;
}



// FUNCTION 1483ddc98 FUN_1483ddc98 body=161 status=ok
// SIG undefined FUN_1483ddc98(void)

bool FUN_1483ddc98(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (((lVar4 != 0) || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)) &&
     (lVar1 = DAT_14cb46c48, *(longlong *)(lVar4 + 0x260) != 0)) {
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x260) + 0x38);
    if (lVar4 == 0) {
      return false;
    }
    if (DAT_14c993850 != 0) {
      return false;
    }
    if ((0.0 <= *(double *)(lVar4 + 0x228)) && ((*(byte *)(param_1 + 0x274) & 8) != 0)) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar3 = 0;
      }
      else {
        bVar2 = FUN_144a61b4f();
        uVar3 = (ulonglong)(bVar2 ^ 1);
      }
      return 0 < *(int *)(lVar1 + uVar3 * 4);
    }
  }
  return false;
}



// FUNCTION 1483ddd3a FUN_1483ddd3a body=674 status=ok
// SIG undefined FUN_1483ddd3a(void)

void FUN_1483ddd3a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar4 = FUN_1483ddc98();
  if (cVar4 == '\0') {
    local_b8 = param_1[0x3c];
    iVar5 = (**(code **)(*param_1 + 0x4b0))(param_1,param_2,param_4,param_5);
    *(byte *)((longlong)param_1 + 0x274) =
         *(byte *)((longlong)param_1 + 0x274) & 0xfb | (0 < iVar5) << 2;
    cVar4 = (**(code **)(*(longlong *)param_1[0x3c] + 0x480))((longlong *)param_1[0x3c],0);
    if (cVar4 != '\0') {
      uVar6 = (**(code **)(*(longlong *)param_1[0x3c] + 0x570))();
      if ((uVar6 & 0xfffffffe) == 2) {
        (**(code **)(*param_1 + 0x4c0))(param_1,param_1[0x3c]);
        dVar3 = DAT_14c8464f0;
        dVar2 = DAT_14c8464e8;
        dVar1 = DAT_14c8464e0;
        FUN_1483ddfde(param_1,&local_98,param_2);
        local_b0 = local_98 + dVar1;
        local_a8 = local_90 + dVar2;
        local_a0 = local_88 + dVar3;
        if ((char)param_1[0x2e] == '\x01') {
          FUN_1483de4b0(param_1,&local_98,param_3);
          local_b0 = local_b0 + local_98;
          local_a8 = local_a8 + local_90;
          local_a0 = local_a0 + local_88;
          FUN_147cb1f34(param_1[0x3c],&local_98,0);
          dVar7 = DAT_14c8464f0;
          dVar9 = DAT_14c8464e0;
          dVar8 = DAT_14c8464e8;
          if (((char)param_1[0x2e] == '\x01') && ((*(byte *)((longlong)param_1 + 0x274) & 4) != 0))
          {
            dVar9 = (double)*(float *)((longlong)param_1 + 0x17c);
            dVar7 = local_88 * -57.2957763671875 * dVar9;
            dVar8 = local_90 * -57.2957763671875 * dVar9;
            dVar9 = local_98 * -57.2957763671875 * dVar9;
          }
          dVar1 = dVar1 + dVar9;
          dVar2 = dVar2 + dVar8;
          dVar3 = dVar3 + dVar7;
        }
        (**(code **)(*(longlong *)param_1[0x3c] + 0x6d0))((longlong *)param_1[0x3c],&local_b0,0,1);
        local_88 = dVar3 * 0.01745329238474369;
        local_90 = dVar2 * 0.01745329238474369;
        local_98 = dVar1 * 0.01745329238474369;
        (**(code **)(*(longlong *)param_1[0x3c] + 0x6f0))((longlong *)param_1[0x3c],&local_98,0,1);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483ddfde FUN_1483ddfde body=1233 status=ok
// SIG undefined FUN_1483ddfde(void)

double * FUN_1483ddfde(longlong param_1,double *param_2,float param_3)

{
  undefined4 uVar1;
  float fVar2;
  longlong *plVar3;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulonglong *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_f8 [40];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x148) != 0) {
    lVar14 = *(longlong *)(param_1 + 0x140);
    lVar13 = (longlong)*(int *)(param_1 + 0x270) * 0x2d0;
    plVar3 = *(longlong **)(lVar14 + 0x2b8 + lVar13);
    if ((plVar3 != (longlong *)0x0) &&
       (cVar7 = (**(code **)(*plVar3 + 0xa40))(plVar3), cVar7 == '\0')) {
      lVar14 = lVar14 + lVar13;
      if (*(int *)(lVar14 + 0x178) != *(int *)(lVar14 + 0x1a4)) {
        uVar8 = ((uint)((ulonglong)plVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar3 >> 4)) *
                -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        lVar13 = lVar14 + 0x1a8;
        if (*(longlong *)(lVar14 + 0x1b0) != 0) {
          lVar13 = *(longlong *)(lVar14 + 0x1b0);
        }
        iVar9 = *(int *)(lVar13 + (ulonglong)
                                  (*(int *)(lVar14 + 0x1b8) - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
        if (iVar9 != -1) {
          do {
            puVar10 = (ulonglong *)(*(longlong *)(lVar14 + 0x170) + (longlong)iVar9 * 0x18);
            if ((longlong *)*puVar10 == plVar3) goto LAB_1483de109;
            iVar9 = (int)puVar10[2];
          } while (iVar9 != -1);
        }
      }
      puVar10 = (ulonglong *)0x0;
LAB_1483de109:
      uVar1 = (undefined4)puVar10[1];
      fVar15 = (float)(**(code **)(*plVar3 + 0xa88))(plVar3,uVar1);
      lVar13 = plVar3[0x15];
      if (lVar13 == 0) {
LAB_1483de152:
        uVar12 = 0;
      }
      else {
        lVar11 = FUN_144a7a908();
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)) goto LAB_1483de152;
        uVar12 = *(undefined8 *)(lVar13 + 0x398);
      }
      FUN_140703b8c(uVar12,&local_b8,uVar1,1);
      dVar4 = *(double *)(lVar14 + 0x48) - local_b0;
      dVar17 = *(double *)(lVar14 + 0x40) - local_b8;
      dVar20 = dVar17 * dVar17 + dVar4 * dVar4;
      if ((dVar20 != 1.0) || (NAN(dVar20))) {
        if (9.99999993922529e-09 <= dVar20) {
          dVar4 = dVar4 * (1.0 / SQRT(dVar20));
          dVar17 = dVar17 * (1.0 / SQRT(dVar20));
          uVar21 = 0;
          uVar22 = 0;
        }
        else {
          dVar17 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar4 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          uVar21 = SUB84(DAT_14c8464f0,0);
          uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
      }
      else {
        local_a8 = *(double *)(lVar14 + 0x50) - local_a8;
        uVar5 = -(ulonglong)(local_a8 == 0.0) & (ulonglong)local_a8;
        uVar21 = (undefined4)uVar5;
        uVar22 = (undefined4)(uVar5 >> 0x20);
      }
      fVar2 = *(float *)(param_1 + 0x18c);
      lVar14 = plVar3[0x15];
      if (lVar14 == 0) {
LAB_1483de203:
        uVar12 = 0;
      }
      else {
        lVar13 = FUN_144a7a908();
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar13 + 0x38) * 8) != lVar13 + 0x30)) goto LAB_1483de203;
        uVar12 = *(undefined8 *)(lVar14 + 0x398);
      }
      FUN_1407541d8(uVar12,&local_d0,uVar1,1);
      dVar20 = (double)(1.0 - fVar2);
      dVar19 = (double)fVar2;
      dVar6 = (double)CONCAT44(uVar22,uVar21) * dVar19 + local_c0 * dVar20;
      dVar4 = dVar4 * dVar19 + local_c8 * dVar20;
      dVar20 = dVar17 * dVar19 + dVar20 * local_d0;
      uVar12 = (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x7b8))
                         (*(longlong **)(param_1 + 0x1e0),0,1,0xffffffff);
      FUN_14141a1f8(uVar12,&local_d0);
      if (ABS((float)(local_c0 * dVar6 + local_d0 * dVar20 + local_c8 * dVar4)) < fVar15) {
        dVar17 = (double)fVar15;
        dVar19 = 1.0 / (double)param_3;
        dVar16 = (double)*(float *)(param_1 + 0x198);
        dVar6 = dVar6 * dVar17 * dVar19 * dVar16;
        dVar4 = dVar4 * dVar17 * dVar19 * dVar16;
        dVar16 = dVar19 * dVar20 * dVar17 * dVar16;
        dVar17 = (double)*(float *)(param_1 + 0x19c);
        dVar19 = (double)-*(float *)(param_1 + 0x19c);
        dVar20 = SQRT(dVar6 * dVar6 + dVar16 * dVar16 + dVar4 * dVar4);
        if (dVar20 <= 9.99999993922529e-09) {
          dVar16 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar4 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          dVar6 = DAT_14c8464f0;
        }
        else {
          dVar18 = 1.0 / dVar20;
          dVar4 = dVar4 * dVar18;
          dVar16 = dVar16 * dVar18;
          dVar6 = dVar6 * dVar18;
        }
        if (dVar17 <= dVar20) {
          dVar20 = dVar17;
        }
        if (dVar20 <= dVar19) {
          dVar20 = dVar19;
        }
        *param_2 = dVar20 * dVar16;
        param_2[1] = dVar4 * dVar20;
        param_2[2] = dVar6 * dVar20;
        goto LAB_1483de090;
      }
    }
  }
  param_2[2] = DAT_14c8464f0;
  uVar22 = DAT_14c8464e8._4_4_;
  uVar21 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar1;
  *(undefined4 *)(param_2 + 1) = uVar21;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar22;
LAB_1483de090:
  if ((local_a0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1483de4b0 FUN_1483de4b0 body=483 status=ok
// SIG undefined FUN_1483de4b0(void)

void FUN_1483de4b0(longlong param_1,double *param_2,double *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  
  param_2[2] = DAT_14c8464f0;
  dVar5 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar5;
  if (((*(char *)(param_1 + 0x170) == '\x01') && ((*(byte *)(param_1 + 0x274) & 4) != 0)) &&
     (*(longlong *)(param_1 + 0x1e0) != 0)) {
    dVar5 = *param_3;
    dVar6 = param_3[1];
    dVar4 = dVar5 * dVar5 + dVar6 * dVar6;
    if (((dVar4 != 1.0) || (dVar2 = dVar5, dVar3 = dVar6, dVar8 = 0.0, NAN(dVar4))) &&
       (dVar2 = DAT_14c8464e0, dVar3 = DAT_14c8464e8, dVar8 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar4)) {
      dVar8 = 1.0 / SQRT(dVar4);
      dVar2 = dVar5 * dVar8;
      dVar3 = dVar6 * dVar8;
      dVar8 = dVar8 * 0.0;
    }
    fVar7 = (float)SQRT(dVar4) * 0.036;
    fVar1 = *(float *)(param_1 + 0x180);
    fVar9 = fVar7;
    if (fVar1 <= fVar7) {
      fVar9 = fVar1;
    }
    if (fVar9 <= -fVar1) {
      fVar9 = -fVar1;
    }
    dVar4 = (double)(*(float *)(param_1 + 0x174) * -fVar9);
    dVar5 = (double)(-fVar9 * fVar9 * *(float *)(param_1 + 0x178));
    dVar6 = (double)(float)(-(uint)(0.0 < fVar7) & 0x3f800000 |
                           ~-(uint)(0.0 < fVar7) & -(uint)(fVar7 < 0.0) & 0xbf800000);
    *param_2 = dVar2 * dVar5 * dVar6 + dVar4 * dVar2 + *param_2;
    param_2[1] = dVar3 * dVar5 * dVar6 + dVar3 * dVar4 + param_2[1];
    param_2[2] = dVar8 * dVar5 * dVar6 + dVar8 * dVar4 + param_2[2];
  }
  return;
}



// FUNCTION 1483de694 FUN_1483de694 body=50 status=ok
// SIG undefined FUN_1483de694(void)

void FUN_1483de694(longlong *param_1,undefined4 param_2)

{
  FUN_144a7e84a();
                    /* WARNING: Could not recover jumptable at 0x0001483de6c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x478))(param_1,param_2);
  return;
}



// FUNCTION 1483de6c6 FUN_1483de6c6 body=103 status=ok
// SIG undefined FUN_1483de6c6(void)

void FUN_1483de6c6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  switchD_143c3d4dc::caseD_38();
  lVar1 = 0;
  if (1 < (ulonglong)(longlong)*(int *)(param_1 + 0x268)) {
    lVar1 = (longlong)*(int *)(param_1 + 0x268) * 4;
  }
  FUN_14484255c(param_2,lVar1 + (longlong)*(int *)(param_1 + 0x22c) * 0x20 +
                                (longlong)*(int *)(param_1 + 0x214) * 8 +
                                (ulonglong)(*(int *)(param_1 + 0x24c) + 0x1fU >> 5) * 4 + 0x25);
  return;
}



// FUNCTION 1483de72e FUN_1483de72e body=101 status=ok
// SIG undefined FUN_1483de72e(void)

void FUN_1483de72e(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x578))(*(longlong **)(param_1 + 0x1e0),0)
  ;
  if (iVar2 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x938))(*(longlong **)(param_1 + 0x1e0),0,1);
  }
  plVar1 = *(longlong **)(param_1 + 0x1e0);
  if ((*(byte *)((longlong)plVar1 + 0x2d3) & 8) == 0) {
    *(byte *)((longlong)plVar1 + 0x2d3) = *(byte *)((longlong)plVar1 + 0x2d3) | 8;
                    /* WARNING: Could not recover jumptable at 0x0001483de785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x958))();
    return;
  }
  return;
}



// FUNCTION 1483de794 FUN_1483de794 body=269 status=ok
// SIG undefined FUN_1483de794(void)

void FUN_1483de794(longlong param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x1d8);
  local_48 = param_2;
  local_40 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_1483e9d4c(param_1 + 0x1d0,&local_48);
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x148) * 0x2d0;
    lVar3 = *(longlong *)(param_1 + 0x140) + 0x1c0;
    do {
      local_48 = CONCAT44(local_48._4_4_,0xbf800000);
      uVar2 = ((uint)(local_40 >> 0x14) & 0xffff ^ (uint)(local_40 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      FUN_1483e9e90(lVar3,uVar2 >> 0x10 ^ uVar2,&local_40,&local_48);
      lVar3 = lVar3 + 0x2d0;
      lVar4 = lVar4 + -0x2d0;
    } while (lVar4 != 0);
  }
  if (param_2 != 0 && iVar1 == 0) {
    *(byte *)(param_1 + 0x274) = *(byte *)(param_1 + 0x274) | 1;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483de8a2 FUN_1483de8a2 body=193 status=ok
// SIG undefined FUN_1483de8a2(void)

void FUN_1483de8a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_30 = &local_38;
  FUN_1483ea400(param_1 + 0x1d0);
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x148) * 0x2d0;
    lVar1 = *(longlong *)(param_1 + 0x140) + 0x1c0;
    do {
      FUN_1483ea530(lVar1,param_2);
      lVar1 = lVar1 + 0x2d0;
      lVar2 = lVar2 + -0x2d0;
    } while (lVar2 != 0);
  }
  if (*(int *)(param_1 + 0x1d8) == 0) {
    *(byte *)(param_1 + 0x274) = *(byte *)(param_1 + 0x274) & 0xfa;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483de964 FUN_1483de964 body=230 status=ok
// SIG undefined FUN_1483de964(void)

void FUN_1483de964(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
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
  if (((param_2 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x274) & 1) != 0)) &&
     (iVar3 = *(int *)(param_1 + 0x148), (longlong)iVar3 != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x140);
    lVar6 = 0;
    uVar5 = 0;
    do {
      if ((*(uint *)(param_1 + 0x218) >> (uVar5 & 0x1f) & 1) != 0) {
        local_58 = *(undefined8 *)(lVar4 + 0x50 + lVar6);
        puVar2 = (undefined8 *)(lVar4 + 0x40 + lVar6);
        local_68 = *puVar2;
        uStack_60 = puVar2[1];
        puVar1 = (undefined4 *)(lVar4 + 0x28 + lVar6);
        local_88 = *puVar1;
        uStack_84 = puVar1[1];
        uStack_80 = puVar1[2];
        uStack_7c = puVar1[3];
        local_78 = *(undefined8 *)(lVar4 + 0x38 + lVar6);
        (**(code **)(*param_2 + 0x6d8))(param_2,&local_88,&local_68,0);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x2d0;
    } while ((longlong)iVar3 * 0x2d0 - lVar6 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dea4c FUN_1483dea4c body=514 status=ok
// SIG undefined FUN_1483dea4c(void)

void FUN_1483dea4c(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  fVar10 = (param_3 - *(float *)(param_1 + 0x160)) /
           (*(float *)(param_1 + 0x164) - *(float *)(param_1 + 0x160));
  if (1.0 <= fVar10) {
    fVar10 = 1.0;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x168);
  fVar2 = *(float *)(param_1 + 0x154);
  fVar3 = *(float *)(param_1 + 0x16c);
  fVar4 = *(float *)(param_2 + 0x20);
  fVar8 = *(float *)(param_2 + 0x9c) - (float)(*(double *)(param_2 + 0x50) - (double)fVar4);
  if (fVar4 + fVar4 <= fVar8) {
    fVar8 = fVar4 + fVar4;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x7b8))
                    (*(longlong **)(param_1 + 0x1e0),0,1,0xffffffff);
  FUN_14141a1f8(uVar5,local_88);
  fVar6 = (float)local_78;
  fVar6 = (float)(-(uint)(0.0 < fVar6) & 0x3f800000 |
                 ~-(uint)(0.0 < fVar6) & -(uint)(fVar6 < 0.0) & 0xbf800000) *
          *(float *)(param_1 + 0x15c) * fVar6 * fVar6 + *(float *)(param_1 + 0x158) * fVar6;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar6 = (fVar4 * 3.0 - fVar8) * fVar8 * fVar8 * 1.0471976 *
          ((fVar1 + -1.0) * fVar10 + 1.0) * fVar2 - fVar6;
  if (fVar3 <= fVar6) {
    fVar6 = fVar3;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  dVar7 = (double)fVar6;
  dVar9 = DAT_14c8462d0 * dVar7;
  dVar11 = DAT_14c8462c8 * dVar7;
  dVar12 = (double)*(float *)(param_2 + 0x98);
  *(double *)(param_2 + 0x28) = dVar7 * DAT_14c8462c0 * dVar12;
  *(double *)(param_2 + 0x30) = dVar11 * dVar12;
  *(double *)(param_2 + 0x38) = dVar9 * dVar12;
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dec50 FUN_1483dec50 body=956 status=ok
// SIG undefined FUN_1483dec50(void)

void FUN_1483dec50(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  double *pdVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong local_148 [4];
  double local_128;
  double dStack_120;
  double local_118;
  double local_e8;
  double dStack_e0;
  double local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar8 = (longlong *)FUN_1483ea60c(param_1 + 0x220,*(undefined4 *)(param_1 + 0x218));
  if ((int)plVar8[1] == 0) {
    lVar9 = (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x7b8))
                      (*(longlong **)(param_1 + 0x1e0),0,1,0xffffffff);
    if (lVar9 != 0) {
      local_c8 = 0;
      uStack_c0 = 0;
      FUN_147c47b9c(lVar9);
      dVar6 = local_118;
      dVar5 = dStack_120;
      dVar4 = local_128;
      local_e8 = local_128;
      dStack_e0 = dStack_120;
      local_d8 = local_118;
      if (*(longlong *)(param_1 + 0x1e0) == 0) goto LAB_1483ded2b;
      iVar12 = *(int *)(param_1 + 0x148);
      if (iVar12 < 1) {
        iVar12 = (int)plVar8[1];
        uVar7 = 0;
      }
      else {
        lVar9 = 0;
        lVar11 = 0;
        do {
          if ((*(uint *)(param_1 + 0x218) >> ((uint)lVar11 & 0x1f) & 1) != 0) {
            lVar14 = *(longlong *)(param_1 + 0x140);
            if ((*(byte *)(lVar14 + 0x2b0 + lVar9) & 2) == 0) {
              if (*(char *)(param_1 + 0x150) == '\x01') {
                dVar1 = *(double *)(lVar14 + 0x18 + lVar9) - dVar6;
                dVar3 = *(double *)(lVar14 + 0x10 + lVar9) - dVar5;
                dVar2 = *(double *)(lVar14 + 8 + lVar9) - dVar4;
              }
              else {
                dVar2 = *(double *)(lVar14 + 8 + lVar9);
                dVar3 = *(double *)(lVar14 + 0x10 + lVar9);
                dVar1 = *(double *)(lVar14 + 0x18 + lVar9);
              }
              lVar14 = (longlong)(int)(uint)uStack_c0;
              uVar7 = (uint)uStack_c0 + 1;
              uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar7);
              if (uStack_c0._4_4_ < uVar7) {
                FUN_1403e3958(&local_c8);
              }
              pdVar10 = (double *)(local_c8 + lVar14 * 0x18);
              *pdVar10 = dVar2;
              pdVar10[1] = dVar3;
            }
            else {
              (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x4a8))
                        (*(longlong **)(param_1 + 0x1e0),local_148,*(undefined8 *)(lVar14 + lVar9),3
                        );
              dVar1 = local_118;
              dVar3 = dStack_120;
              dVar2 = local_128;
              lVar14 = (longlong)(int)(uint)uStack_c0;
              uVar7 = (uint)uStack_c0 + 1;
              uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar7);
              if (uStack_c0._4_4_ < uVar7) {
                FUN_1403e3958(&local_c8);
              }
              pdVar10 = (double *)(local_c8 + lVar14 * 0x18);
              *pdVar10 = dVar2;
              pdVar10[1] = dVar3;
            }
            pdVar10[2] = dVar1;
            iVar12 = *(int *)(param_1 + 0x148);
          }
          lVar11 = lVar11 + 1;
          lVar9 = lVar9 + 0x2d0;
        } while (lVar11 < iVar12);
        uVar7 = (uint)uStack_c0;
        iVar12 = (int)plVar8[1];
        *(uint *)(plVar8 + 1) = iVar12 + (uint)uStack_c0;
        if ((uint)(*(int *)((longlong)plVar8 + 0xc) - iVar12) < (uint)uStack_c0) {
          FUN_14475e4ac(plVar8);
        }
      }
      memset((void *)((longlong)iVar12 * 4 + *plVar8),0,(longlong)(int)uVar7 << 2);
      local_148[0] = 0;
      local_148[1] = 0;
      local_158 = local_148;
      FUN_147c8e986(&local_c8,&local_e8,0x3f800000,plVar8);
      if (local_148[0] != 0) {
        FUN_1400020a8();
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  iVar12 = *(int *)(param_1 + 0x148);
  if (0 < iVar12) {
    lVar9 = 0;
    lVar11 = 0x98;
    iVar13 = 0;
    do {
      if ((*(uint *)(param_1 + 0x218) >> ((uint)lVar9 & 0x1f) & 1) != 0) {
        lVar14 = (longlong)iVar13;
        iVar13 = iVar13 + 1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x140) + lVar11) =
             *(undefined4 *)(*plVar8 + lVar14 * 4);
        iVar12 = *(int *)(param_1 + 0x148);
      }
      lVar9 = lVar9 + 1;
      lVar11 = lVar11 + 0x2d0;
    } while (lVar9 < iVar12);
  }
LAB_1483ded2b:
  if ((local_b0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483df00e FUN_1483df00e body=1298 status=ok
// SIG undefined FUN_1483df00e(void)

int FUN_1483df00e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 longlong *param_5)

{
  double *pdVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  byte bVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  byte local_16d;
  int local_16c;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  longlong local_118;
  longlong lStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  iVar17 = 0;
  if (((*(byte *)(param_1 + 0x274) & 1) != 0) &&
     (iVar8 = *(int *)(param_1 + 0x148), (longlong)iVar8 != 0)) {
    lVar9 = *(longlong *)(param_1 + 0x140);
    lVar18 = 0;
    local_158 = param_1 + 0x130;
    local_160 = param_1 + 0x120;
    iVar17 = 0;
    uVar19 = 0;
    do {
      if ((*(uint *)(param_1 + 0x218) >> (uVar19 & 0x1f) & 1) != 0) {
        local_16c = iVar17;
        if ((*(byte *)(lVar9 + 0x2b0 + lVar18) & 2) == 0) {
          pdVar1 = (double *)(lVar9 + 8 + lVar18);
          dVar21 = *pdVar1 * (double)param_5[0x50];
          dVar22 = pdVar1[1] * (double)param_5[0x51];
          dVar10 = *(double *)(lVar9 + 0x18 + lVar18) * (double)param_5[0x52];
          dVar13 = (double)param_5[0x48];
          dVar14 = (double)param_5[0x49];
          dVar15 = (double)param_5[0x4a];
          dVar6 = (double)param_5[0x4b];
          dVar23 = dVar22 * dVar13 - dVar21 * dVar14;
          dVar24 = dVar10 * dVar14 - dVar22 * dVar15;
          dVar25 = dVar21 * dVar15 - dVar13 * dVar10;
          dVar24 = dVar24 + dVar24;
          dVar25 = dVar25 + dVar25;
          dVar23 = dVar23 + dVar23;
          dVar12 = (dVar15 * dVar24 - dVar13 * dVar23) + (double)param_5[0x4b] * dVar25 + dVar22 +
                   (double)param_5[0x4d];
          dVar22 = (double)param_5[0x4e];
          auVar11._8_4_ = SUB84(dVar12,0);
          auVar11._0_8_ =
               (dVar23 * dVar14 - dVar25 * dVar15) + dVar6 * dVar24 + dVar21 + (double)param_5[0x4c]
          ;
          auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          *(undefined1 (*) [16])(lVar9 + 0x40 + lVar18) = auVar11;
          *(double *)(lVar9 + 0x50 + lVar18) =
               dVar23 * dVar6 + dVar10 + (dVar25 * dVar13 - dVar24 * dVar14) + dVar22;
        }
        else {
          (**(code **)(*param_5 + 0x4a8))(param_5,&local_118,*(undefined8 *)(lVar9 + lVar18),0);
          *(double *)(lVar9 + 0x40 + lVar18) = local_f8 + *(double *)(lVar9 + 0x80 + lVar18);
          *(double *)(lVar9 + 0x48 + lVar18) = local_f0 + *(double *)(lVar9 + 0x88 + lVar18);
          *(double *)(lVar9 + 0x50 + lVar18) = local_e8 + *(double *)(lVar9 + 0x90 + lVar18);
          plVar2 = (longlong *)(lVar9 + 0x60 + lVar18);
          *plVar2 = local_118;
          plVar2[1] = lStack_110;
          puVar3 = (undefined4 *)(lVar9 + 0x70 + lVar18);
          *puVar3 = local_108;
          puVar3[1] = uStack_104;
          puVar3[2] = uStack_100;
          puVar3[3] = uStack_fc;
        }
        local_168 = lVar9 + lVar18 + 0x1c0;
        lVar4 = lVar9 + 0x170 + lVar18;
        local_128 = *(undefined8 *)(lVar4 + -0x120);
        local_138 = *(undefined4 *)(lVar4 + -0x130);
        uStack_134 = *(undefined4 *)(lVar4 + -300);
        uStack_130 = *(undefined4 *)(lVar4 + -0x128);
        uStack_12c = *(undefined4 *)(lVar4 + -0x124);
        FUN_1483df522(param_1,&local_138,lVar4);
        dVar6 = *(double *)(lVar4 + -0x120) - (double)*(float *)(lVar4 + -0x150);
        local_118 = *(longlong *)(lVar4 + 0x148);
        local_180 = lVar9 + 0x108 + lVar18;
        local_188 = lVar9 + 0xf0 + lVar18;
        local_190 = lVar9 + 0xd8 + lVar18;
        local_198 = lVar9 + 0xc0 + lVar18;
        local_1a0 = lVar9 + 0xa8 + lVar18;
        lVar5 = lVar9 + 0xa0 + lVar18;
        local_148 = *(double *)(lVar4 + -0x128) - DAT_14c8462c8 * 100.0;
        local_150 = *(double *)(lVar4 + -0x130) - DAT_14c8462c0 * 100.0;
        local_140 = dVar6 - DAT_14c8462d0 * 100.0;
        local_1a8 = lVar5;
        fVar20 = (float)FUN_1483df666(param_1,&local_150,lVar4);
        lVar4 = local_118;
        *(float *)(lVar5 + -4) = fVar20;
        if ((local_118 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(local_118);
          fVar20 = *(float *)(lVar9 + 0x9c + lVar18);
        }
        lVar5 = lVar9 + lVar18;
        *(longlong *)(lVar9 + 0x2b8 + lVar18) = lVar4;
        bVar7 = *(byte *)(lVar9 + 0x10c + lVar18);
        fVar20 = (float)((double)fVar20 - dVar6);
        local_16d = 0.0 <= fVar20;
        if (!(bool)local_16d) {
          fVar20 = 0.0;
        }
        *(byte *)(lVar9 + 0x10c + lVar18) = local_16d;
        *(float *)(lVar9 + 0xa4 + lVar18) = fVar20;
        FUN_1483dea4c(param_1,lVar5,param_4);
        bVar16 = *(byte *)(lVar9 + 0x10c + lVar18);
        if (((~bVar16 | bVar7) & 1) == 0) {
          FUN_1483eab76(local_168);
          FUN_1483dc294(local_160,lVar5);
          bVar16 = *(byte *)(lVar9 + 0x10c + lVar18);
        }
        if (((~bVar7 | bVar16) & 1) == 0) {
          FUN_1483eab76(local_168);
          FUN_1483dc58e(local_158,lVar5);
        }
        iVar17 = local_16c + (uint)local_16d;
      }
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 0x2d0;
    } while ((longlong)iVar8 * 0x2d0 - lVar18 != 0);
  }
  if ((local_b0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar17;
}



// FUNCTION 1483df522 FUN_1483df522 body=323 status=ok
// SIG undefined FUN_1483df522(void)

void FUN_1483df522(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  longlong *local_68;
  longlong **local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1483eab76(param_3);
  iVar1 = *(int *)(param_1 + 0x1d8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1d0);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar8 = 0;
    do {
      local_68 = *(longlong **)(lVar2 + lVar8);
      if ((local_68 != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*local_68 + 0xa40))(), lVar4 = DAT_14cb46c30, cVar5 == '\0')) {
        if (*(int *)(lVar3 + 0xc60) == 0x40000002) {
          uVar7 = 0;
        }
        else {
          bVar6 = FUN_144a61b4f();
          uVar7 = (ulonglong)(bVar6 ^ 1);
        }
        if (*(int *)(lVar4 + uVar7 * 4) == 0) {
          local_6c = FUN_1408b98e8(local_68,param_2);
        }
        else {
          local_78 = *(undefined8 *)(param_2 + 4);
          local_88 = *param_2;
          uStack_84 = param_2[1];
          uStack_80 = param_2[2];
          uStack_7c = param_2[3];
          local_6c = FUN_1483df933(&local_88,local_68,param_4);
        }
        local_60 = &local_68;
        local_58 = &local_6c;
        FUN_1483eae48(param_3,local_4c,&local_60);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483df666 FUN_1483df666 body=716 status=ok
// SIG undefined FUN_1483df666(void)

float FUN_1483df666(longlong param_1,longlong param_2,longlong *param_3,ulonglong *param_4,
                   undefined4 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                   undefined8 *param_9,undefined4 *param_10)

{
  ulonglong *puVar1;
  double dVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  undefined4 local_150;
  undefined1 local_14c;
  ushort local_148 [8];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_d4;
  float local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *param_4 = 0;
  *param_5 = 0;
  param_6[2] = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8;
  *param_6 = DAT_14c8464e0;
  param_6[1] = uVar7;
  param_7[2] = DAT_14c8462d0;
  uVar6 = DAT_14c8462c8._4_4_;
  uVar5 = (undefined4)DAT_14c8462c8;
  uVar4 = DAT_14c8462c0._4_4_;
  *(undefined4 *)param_7 = (undefined4)DAT_14c8462c0;
  *(undefined4 *)((longlong)param_7 + 4) = uVar4;
  *(undefined4 *)(param_7 + 1) = uVar5;
  *(undefined4 *)((longlong)param_7 + 0xc) = uVar6;
  if ((longlong)*(int *)(param_1 + 0x1d8) == 0) {
    fVar13 = -100000.0;
  }
  else {
    puVar11 = *(ulonglong **)(param_1 + 0x1d0);
    puVar12 = puVar11 + *(int *)(param_1 + 0x1d8);
    fVar14 = -1.0;
    fVar13 = -100000.0;
    do {
      plVar3 = (longlong *)*puVar11;
      if (plVar3 != (longlong *)0x0) {
        local_150 = 0;
        if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
          uVar8 = ((uint)((ulonglong)plVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar3 >> 4)) *
                  -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          plVar9 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar9 = param_3 + 7;
          }
          iVar10 = *(int *)((longlong)plVar9 +
                           (ulonglong)((int)param_3[9] - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
          if (iVar10 != -1) {
            do {
              puVar1 = (ulonglong *)(*param_3 + (longlong)iVar10 * 0x18);
              if ((longlong *)*puVar1 == plVar3) {
                if (puVar1 != (ulonglong *)0x0) {
                  local_150 = (undefined4)puVar1[1];
                }
                break;
              }
              iVar10 = (int)puVar1[2];
            } while (iVar10 != -1);
          }
        }
        local_14c = 1;
        local_158 = &local_150;
        (**(code **)(*plVar3 + 0xa80))(plVar3,local_148,param_2,0x37);
        if ((0.0 < local_a8) && (fVar14 < local_a8)) {
          dVar2 = *(double *)(param_2 + 0x10);
          *param_4 = (ulonglong)plVar3;
          if ((local_148[0] & 0x108) != 0) {
            *param_5 = local_d4;
          }
          fVar13 = (float)((double)local_a8 + dVar2);
          param_6[2] = local_128;
          *param_6 = local_138;
          param_6[1] = uStack_130;
          param_7[2] = local_f8;
          *param_7 = local_108;
          param_7[1] = uStack_100;
          param_8[2] = local_110;
          *param_8 = local_120;
          param_8[1] = uStack_118;
          param_9[2] = local_90;
          *param_9 = local_a0;
          param_9[1] = uStack_98;
          *param_10 = (int)plVar3[0x204];
          fVar14 = local_a8;
        }
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar12);
  }
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar13;
}



// FUNCTION 1483df933 FUN_1483df933 body=1261 status=ok
// SIG undefined FUN_1483df933(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1483df933(double *param_1,ulonglong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong *puVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  ulonglong uVar19;
  float fVar20;
  double dVar21;
  undefined1 auVar22 [16];
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  double local_c8;
  undefined4 local_b4;
  ulonglong local_b0;
  float local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b0 = param_2;
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    uVar9 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    plVar10 = param_3 + 7;
    if ((longlong *)param_3[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_3[8];
    }
    iVar16 = *(int *)((longlong)plVar10 +
                     (ulonglong)((int)param_3[9] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
    if (iVar16 != -1) {
      do {
        if (*(ulonglong *)(*param_3 + (longlong)iVar16 * 0x18) == param_2) goto LAB_1483dfa21;
        iVar16 = *(int *)(*param_3 + (longlong)iVar16 * 0x18 + 0x10);
      } while (iVar16 != -1);
    }
  }
  local_b4 = 0xbf800000;
  local_d8._8_8_ = &local_b4;
  local_d8._0_8_ = &local_b0;
  FUN_1483eacfe(param_3,&local_a4);
LAB_1483dfa21:
  lVar12 = *(longlong *)(local_b0 + 0xa8);
  if (lVar12 == 0) {
LAB_1483dfa51:
    lVar12 = 0;
  }
  else {
    lVar11 = FUN_144a7a908();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8
         ) != lVar11 + 0x30)) goto LAB_1483dfa51;
    lVar12 = *(longlong *)(lVar12 + 0x398);
  }
  dVar3 = *param_1 - *(double *)(local_b0 + 0x260);
  dVar4 = param_1[1] - *(double *)(local_b0 + 0x268);
  dVar21 = param_1[2] - *(double *)(local_b0 + 0x270);
  auVar2 = *(undefined1 (*) [16])(local_b0 + 0x280);
  dVar24 = *(double *)(local_b0 + 0x250) * -1.0;
  dVar25 = *(double *)(local_b0 + 600) * 1.0;
  dVar5 = -*(double *)(local_b0 + 0x240);
  dVar6 = -*(double *)(local_b0 + 0x248);
  dVar26 = dVar3 * dVar24 - dVar5 * dVar21;
  dVar7 = dVar4 * dVar5 - dVar3 * dVar6;
  dVar8 = dVar21 * dVar6 - dVar4 * dVar24;
  dVar8 = dVar8 + dVar8;
  dVar26 = dVar26 + dVar26;
  dVar7 = dVar7 + dVar7;
  auVar22 = divpd(_DAT_149934d80,auVar2);
  dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar22._8_8_) *
          (*(double *)(local_b0 + 0x240) * dVar7 + dVar24 * dVar8 + dVar25 * dVar26 + dVar4);
  local_d8._8_4_ = SUB84(dVar4,0);
  local_d8._0_8_ =
       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar22._0_8_) *
       ((dVar7 * dVar6 - dVar26 * dVar24) + dVar25 * dVar8 + dVar3);
  local_d8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_c8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(local_b0 + 0x290))) &
                     (ulonglong)(1.0 / *(double *)(local_b0 + 0x290))) *
             (dVar25 * dVar7 + dVar21 + (dVar26 * dVar5 - dVar8 * dVar6));
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    uVar9 = ((uint)(local_b0 >> 0x14) & 0xffff ^ (uint)(local_b0 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    plVar10 = param_3 + 7;
    if ((longlong *)param_3[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_3[8];
    }
    iVar16 = *(int *)((longlong)plVar10 +
                     (ulonglong)((int)param_3[9] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
    if (iVar16 != -1) {
      do {
        puVar14 = (ulonglong *)(*param_3 + (longlong)iVar16 * 0x18);
        if (*puVar14 == local_b0) goto LAB_1483dfbb9;
        iVar16 = (int)puVar14[2];
      } while (iVar16 != -1);
    }
  }
  puVar14 = (ulonglong *)0x0;
LAB_1483dfbb9:
  puVar1 = (undefined8 *)(lVar12 + 0x620);
  fVar28 = *(float *)(puVar14 + 1);
  pfVar15 = (float *)(puVar14 + 1);
  if ((fVar28 != -1.0) || (NAN(fVar28))) {
    iVar16 = *(int *)(lVar12 + 0x628);
    iVar17 = 2;
    if (2 < iVar16) {
      iVar17 = iVar16;
    }
    if (iVar16 < 2) {
      uVar19 = 0;
      if (iVar16 == 1) {
        *pfVar15 = 0.0;
        uVar19 = (ulonglong)*(uint *)*puVar1;
      }
      goto LAB_1483dfbf5;
    }
    fVar18 = fVar28 + -1.0;
    fVar20 = fVar28 + 1.0;
    if ((float)(int)fVar18 <= fVar20) {
      iVar16 = (int)fVar18;
      fVar27 = 3.4e+38;
      fVar18 = 3.4e+38;
      do {
        iVar13 = iVar17 + -2;
        if (iVar16 < iVar17 + -2) {
          iVar13 = iVar16;
        }
        if (iVar13 < 1) {
          iVar13 = 0;
        }
        uVar9 = FUN_14040e1bc(puVar1,local_d8,iVar13,&local_a4);
        fVar23 = fVar18;
        if (local_a4 < fVar18) {
          fVar28 = (float)iVar13;
          fVar23 = local_a4;
        }
        iVar16 = iVar16 + 1;
        fVar27 = (float)(~-(uint)(local_a4 < fVar18) & (uint)fVar27 |
                        uVar9 & -(uint)(local_a4 < fVar18));
        fVar20 = *pfVar15 + 1.0;
        fVar18 = fVar23;
      } while ((float)iVar16 <= fVar20);
      fVar18 = *pfVar15 + -1.0;
    }
    else {
      fVar27 = 3.4e+38;
    }
    uVar19 = (ulonglong)(uint)fVar27;
    if ((1e-08 < ABS(fVar27 - fVar18)) && (1e-08 < ABS(fVar27 - fVar20))) {
      *pfVar15 = fVar28;
      goto LAB_1483dfbf5;
    }
  }
  uVar19 = FUN_14040e062(puVar1,local_d8,&local_a4,pfVar15);
LAB_1483dfbf5:
  if ((local_a0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483dfe22 FUN_1483dfe22 body=187 status=ok
// SIG undefined FUN_1483dfe22(void)

undefined8 *
FUN_1483dfe22(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = FUN_1483ddc98();
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *(undefined1 *)(puVar2 + 1) = 1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_14ae8bf90;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    FUN_1483dfede(param_1,puVar2,param_3,param_4,param_5,param_6,param_7);
  }
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 1483dfede FUN_1483dfede body=663 status=ok
// SIG undefined FUN_1483dfede(void)

void FUN_1483dfede(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  longlong param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(longlong *)(param_1 + 0x1e8) = param_2;
  *(longlong *)(param_2 + 0x10) = param_1;
  cVar2 = *(char *)(param_2 + 8);
  *(char *)(param_1 + 0x200) = cVar2;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  if (param_4 != 0) {
    plVar1 = (longlong *)(param_1 + 0x208);
    iVar3 = *(int *)(param_1 + 0x210);
    if (0 < (longlong)iVar3) {
      lVar9 = 0;
LAB_1483dffae:
      if (*(int *)(*plVar1 + 4 + lVar9 * 8) != *(int *)(param_4 + 0x18)) goto code_r0x0001483dffb5;
      lVar8 = (longlong)*(int *)(*plVar1 + lVar9 * 8);
      lVar4 = *(longlong *)(*(longlong *)(param_4 + 8) + lVar8 * 8);
      if ((((lVar4 != 0) && (*(char *)(lVar4 + 9) == '\x01')) && (*(char *)(lVar4 + 8) == cVar2)) &&
         (((*(longlong *)(param_1 + 0x1f0) = lVar4, param_5 != 0 &&
           (*(int *)(param_5 + 0x18) == *(int *)(param_4 + 0x18))) &&
          ((lVar4 = *(longlong *)(*(longlong *)(param_5 + 8) + lVar8 * 8), lVar4 != 0 &&
           ((*(char *)(lVar4 + 9) == '\x01' && (*(char *)(lVar4 + 8) == cVar2)))))))) {
        *(longlong *)(param_1 + 0x1f8) = lVar4;
        *(undefined4 *)(param_1 + 0x204) = param_6;
      }
      local_78 = 0;
      uStack_70 = 0;
      if ((int)lVar9 < iVar3) {
        do {
          uVar5 = uStack_70;
          lVar4 = *plVar1;
          lVar8 = (longlong)(int)uStack_70;
          uVar6 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
          if (uStack_70._4_4_ < uVar6) {
            FUN_1483eaffe(&local_78,uVar5 & 0xffffffff);
          }
          *(undefined8 *)(local_78 + lVar8 * 8) = *(undefined8 *)(lVar4 + lVar9 * 8);
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < *(int *)(param_1 + 0x210));
      }
      if (plVar1 == &local_78) {
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x208) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x208) = local_78;
        local_78 = 0;
        *(int *)(param_1 + 0x210) = (int)uStack_70;
        *(uint *)(param_1 + 0x214) = uStack_70._4_4_;
      }
    }
LAB_1483dffbd:
    if (((param_5 != 0) && (*(int *)(param_5 + 0x18) != *(int *)(param_4 + 0x18))) &&
       (0 < (longlong)*(int *)(param_1 + 0x210))) {
      lVar9 = 0;
      do {
        if (*(int *)(*plVar1 + 4 + lVar9 * 8) == *(int *)(param_5 + 0x18)) {
          lVar9 = *(longlong *)
                   (*(longlong *)(param_5 + 8) + (longlong)*(int *)(*plVar1 + lVar9 * 8) * 8);
          if (((lVar9 != 0) && (*(char *)(lVar9 + 9) == '\x01')) &&
             (*(char *)(lVar9 + 8) == *(char *)(param_1 + 0x200))) {
            *(longlong *)(param_1 + 0x1f8) = lVar9;
            *(undefined4 *)(param_1 + 0x204) = param_6;
          }
          break;
        }
        lVar9 = lVar9 + 1;
      } while (*(int *)(param_1 + 0x210) != lVar9);
    }
  }
  puVar7 = (undefined4 *)FUN_1483e0176(param_1 + 0x208);
  puVar7[1] = param_7;
  *puVar7 = param_3;
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001483dffb5:
  lVar9 = lVar9 + 1;
  if (iVar3 == lVar9) goto LAB_1483dffbd;
  goto LAB_1483dffae;
}



// FUNCTION 1483e0176 FUN_1483e0176 body=59 status=ok
// SIG undefined FUN_1483e0176(void)

longlong FUN_1483e0176(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1483eaffe(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 8 + *param_1;
  FUN_1483eb083(lVar2);
  return lVar2;
}



// FUNCTION 1483e01b2 FUN_1483e01b2 body=363 status=ok
// SIG undefined FUN_1483e01b2(void)

void FUN_1483e01b2(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined1 auStack_98 [40];
  longlong local_70;
  ulonglong local_68;
  ulonglong *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)*(int *)(param_1 + 0x1d8) != 0) {
    puVar5 = *(ulonglong **)(param_1 + 0x1d0);
    puVar6 = puVar5 + *(int *)(param_1 + 0x1d8);
    do {
      uVar1 = *puVar5;
      local_68 = uVar1;
      if (uVar1 != 0) {
        if (*(int *)(param_2 + 0x28) != *(int *)(param_2 + 0x54)) {
          uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
          uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
          lVar3 = *(longlong *)(param_2 + 0x60);
          if (*(longlong *)(param_2 + 0x60) == 0) {
            lVar3 = param_2 + 0x58;
          }
          iVar4 = *(int *)(lVar3 + (ulonglong)
                                   (*(int *)(param_2 + 0x68) - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
          if (iVar4 != -1) {
            lVar3 = *(longlong *)(param_2 + 0x20);
            do {
              if (*(ulonglong *)(lVar3 + (longlong)iVar4 * 0x18) == uVar1) goto LAB_1483e02cb;
              iVar4 = *(int *)(lVar3 + (longlong)iVar4 * 0x18 + 0x10);
            } while (iVar4 != -1);
          }
        }
        lVar3 = FUN_14001cc68(0x170,0x10);
        FUN_1483f5242(lVar3,uVar1);
        local_60 = &local_68;
        local_58 = &local_70;
        local_70 = lVar3;
        FUN_1483eb0ee((longlong *)(param_2 + 0x20),local_4c,&local_60);
        lVar3 = local_70;
        if (local_70 != 0) {
          FUN_1483eb08c(local_70);
          FUN_1400020a8(lVar3);
        }
      }
LAB_1483e02cb:
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar6);
  }
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483e031e FUN_1483e031e body=122 status=ok
// SIG undefined FUN_1483e031e(void)

void FUN_1483e031e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(char *)(param_2 + 8) != '\0') && ((longlong)*(int *)(param_2 + 0x20) != 0)) {
    lVar1 = *(longlong *)(param_2 + 0x18);
    lVar2 = (longlong)*(int *)(param_2 + 0x20) * 0x2e0;
    do {
      if (*(char *)(lVar1 + 0x2d0) == '\x01') {
        FUN_1483dc58e(param_1 + 0x130,lVar1);
      }
      else if (*(char *)(lVar1 + 0x2d0) == '\0') {
        FUN_1483dc294(param_1 + 0x120,lVar1);
      }
      lVar1 = lVar1 + 0x2e0;
      lVar2 = lVar2 + -0x2e0;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1483e0398 FUN_1483e0398 body=110 status=ok
// SIG undefined FUN_1483e0398(void)

void FUN_1483e0398(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  cVar2 = FUN_1483ddc98();
  if (cVar2 != '\0') {
    iVar3 = (int)param_1[0x42];
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        if (((*(int *)(param_1[0x41] + 4 + lVar4 * 8) == *(int *)(param_2 + 0x18)) &&
            (lVar1 = *(longlong *)
                      (*(longlong *)(param_2 + 8) +
                      (longlong)*(int *)(param_1[0x41] + lVar4 * 8) * 8), lVar1 != 0)) &&
           (*(char *)(lVar1 + 9) == '\x01')) {
          (**(code **)(*param_1 + 0x498))(param_1);
          iVar3 = (int)param_1[0x42];
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
  }
  return;
}



// FUNCTION 1483e0406 FUN_1483e0406 body=135 status=ok
// SIG undefined FUN_1483e0406(void)

undefined8 * FUN_1483e0406(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  FUN_145e18432(puVar1 + 1);
  *puVar1 = &PTR_FUN_14ae8bfa0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  *(undefined4 *)(puVar1 + 0x17) = 0;
  FUN_1483dd832(puVar1 + 1,param_1 + 0x140);
  puVar3 = (undefined8 *)(param_1 + 0x150);
  puVar4 = puVar1 + 3;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 1483e048e FUN_1483e048e body=292 status=ok
// SIG undefined FUN_1483e048e(void)

undefined8 *
FUN_1483e048e(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,longlong param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *(undefined2 *)(puVar2 + 1) = 1;
  *puVar2 = &PTR_FUN_14ae8bfb0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined4 *)(puVar2 + 9) = 0;
  if ((param_6 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    lVar1 = param_6 + 0x98;
    FUN_1483dd832(lVar1,param_1 + 0x30);
    FUN_1483dc7f8(param_6 + 0xa8,param_1 + 0x20);
    *(undefined4 *)(param_6 + 0xb8) = *(undefined4 *)(param_1 + 0x40);
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(lVar3 + 0x48) == 0) {
      lVar3 = 0;
    }
    FUN_1483e05b2(param_4,lVar3,param_6 + 8,lVar1,param_7,puVar2 + 2);
    FUN_1483dd832(puVar2 + 5,lVar1);
    FUN_1483dc7f8(puVar2 + 7,param_6 + 0xa8);
    *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_6 + 0xb8);
    *(undefined1 *)((longlong)puVar2 + 9) = 1;
  }
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 1483e05b2 FUN_1483e05b2 body=805 status=ok
// SIG undefined FUN_1483e05b2(void)

void FUN_1483e05b2(undefined4 param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5,undefined1 *param_6)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  longlong local_90;
  ulonglong uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  char local_64;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8 = DAT_14c8462d0;
  local_108 = DAT_14c8462c0;
  uStack_100 = DAT_14c8462c8;
  local_f0 = DAT_14c8462d8;
  uStack_e8 = DAT_14c8462e0;
  local_e0 = DAT_14c8462e8;
  local_d8 = DAT_14c846290;
  uStack_d0 = DAT_14c846298;
  local_c8 = DAT_14c8462a0;
  local_c0 = DAT_14c8464e0;
  dStack_b8 = DAT_14c8464e8;
  local_b0 = DAT_14c8464f0;
  local_98 = DAT_14c8464f0;
  local_a8 = DAT_14c8464e0;
  dStack_a0 = DAT_14c8464e8;
  local_90 = 0;
  uStack_88 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = -1;
  local_64 = '\0';
  FUN_1483eb7a0(param_2,&local_108);
  local_118 = param_5;
  FUN_1483ebc9a(param_2,&local_108,param_3,param_4);
  if (*(char *)(param_3 + 0x30) == '\x01') {
    FUN_1483ec5a8(param_2,param_3,&local_108);
    if (local_64 == '\x01') {
      local_58 = (double)*(float *)(param_3 + 0x3c);
      local_48 = -local_98 * local_58;
      local_50 = -dStack_a0 * local_58;
      local_58 = -local_a8 * local_58;
      FUN_1483edc00(param_2);
    }
  }
  if ((longlong)(int)param_4[1] != 0) {
    lVar6 = (longlong)(int)param_4[1] * 0x2d0;
    lVar5 = *param_4 + 0x28;
    do {
      FUN_1483edcf0(param_2,lVar5,lVar5 + 0x18);
      lVar5 = lVar5 + 0x2d0;
      lVar6 = lVar6 + -0x2d0;
    } while (lVar6 != 0);
  }
  if (*(char *)(param_3 + 0x44) == '\x01') {
    local_68 = -1;
    uVar1 = *(uint *)(param_4 + 1);
    iVar2 = *(int *)(param_3 + 0x48);
    bVar7 = true;
    if (((iVar2 < (int)uVar1) &&
        (lVar5 = *(longlong *)(*param_4 + 0x2c0 + (longlong)iVar2 * 0x2d0), lVar5 != 0)) &&
       (*(char *)(lVar5 + 0x148) == '\0')) {
      bVar7 = iVar2 == -1;
      local_68 = iVar2;
    }
    if (!(bool)(bVar7 ^ 1U | (int)uVar1 < 1)) {
      plVar3 = (longlong *)(*param_4 + 0x2c0);
      uVar4 = 0;
      do {
        if ((*plVar3 != 0) && (*(char *)(*plVar3 + 0x148) == '\0')) {
          local_68 = (int)uVar4;
          break;
        }
        uVar4 = uVar4 + 1;
        plVar3 = plVar3 + 0x5a;
      } while (uVar1 != uVar4);
    }
    if (*(char *)(param_3 + 0x62) == '\x01') {
      FUN_1483ec7a4(param_2,&local_108,param_3,param_4);
    }
    local_118 = CONCAT44(local_118._4_4_,param_1);
    FUN_1483ecbbc(param_2,param_3,&local_108,param_4);
  }
  FUN_1483ecc58(&local_58,&local_108);
  *param_6 = local_58._0_1_;
  FUN_1483ee61a(param_6 + 8,&local_50);
  FUN_1483eb777(local_50,(ulonglong)local_48 & 0xffffffff);
  if (local_50 != 0.0) {
    FUN_1400020a8();
  }
  FUN_1483eb777(local_90,uStack_88 & 0xffffffff);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e08de FUN_1483e08de body=277 status=ok
// SIG undefined FUN_1483e08de(void)

void FUN_1483e08de(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar2 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1483e0a96(local_28);
  *plVar2 = lVar1;
  *(bool *)param_3 = lVar1 != 0;
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e09f7 FUN_1483e09f7 body=157 status=ok
// SIG undefined FUN_1483e09f7(void)

void FUN_1483e09f7(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_2 + 0xa8);
  if ((lVar1 != 0) && (3 < *(int *)(lVar1 + 0x248) - *(int *)(lVar1 + 0x274))) {
    local_50 = 0;
    FUN_14485c47a(&local_50);
    local_58 = 0;
    FUN_14485c47a(&local_58,lVar1);
    local_48 = &local_58;
    local_40 = &local_50;
    FUN_1483ee724(param_1,local_34);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e0a96 FUN_1483e0a96 body=60 status=ok
// SIG undefined FUN_1483e0a96(void)

undefined8 FUN_1483e0a96(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,0);
  if (lVar1 != 0) {
    lVar1 = FUN_140702026(lVar1);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x40);
    }
  }
  return uVar2;
}



// FUNCTION 1483e0ad2 FUN_1483e0ad2 body=621 status=ok
// SIG undefined FUN_1483e0ad2(void)

void FUN_1483e0ad2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  code *local_48;
  ulonglong local_40;
  longlong lVar6;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = *(longlong **)(param_2 + 0xa8);
  if (plVar1 == (longlong *)0x0) goto LAB_1483e0b74;
  local_58 = 0;
  FUN_14485c47a(&local_58,plVar1);
  uVar2 = local_58;
  if (*(int *)(param_1 + 0x460) != *(int *)(param_1 + 0x48c)) {
    lVar5 = param_1 + 0x490;
    if (*(longlong *)(param_1 + 0x498) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x498);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x4a0) - 1U &
                             ((uint)((ulonglong)local_58 >> 0x20) ^ (uint)local_58)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x458);
      do {
        lVar6 = (longlong)iVar4;
        local_48 = *(code **)(lVar5 + lVar6 * 0x18);
        local_50 = uVar2;
        cVar3 = FUN_14472d054(&local_48,&local_50);
        lVar5 = *(longlong *)(param_1 + 0x458);
        if (cVar3 != '\0') {
          lVar5 = lVar5 + lVar6 * 0x18;
          if (lVar5 != -8 && lVar5 != 0) {
            lVar5 = FUN_14479d2ce();
            goto LAB_1483e0b68;
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
      } while (iVar4 != -1);
    }
  }
  if (DAT_14cb46bc0 == (code *)0x0) {
    local_70 = &local_48;
    local_48 = FUN_144a7958c;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_143242436;
    local_78 = &LAB_1483dd3b9;
    local_80 = &LAB_145e18341;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000004;
    local_a0 = 8;
    local_a8 = 0x278;
    FUN_14081cfa3(L"/Script/Water",L"BuoyancyComponent",&DAT_14cb46bc0,FUN_146485e60);
  }
  local_48 = DAT_14cb46bc0;
  if ((DAT_14cb46bc0 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  lVar5 = (**(code **)(*plVar1 + 0x598))(plVar1,&local_48);
LAB_1483e0b68:
  if (lVar5 == 0) goto LAB_1483e0b74;
  lVar6 = *(longlong *)(lVar5 + 0x1e0);
  if (param_2 == 0) {
LAB_1483e0cf8:
    param_2 = 0;
  }
  else {
    lVar7 = FUN_144a3a302();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
         ) != lVar7 + 0x30)) goto LAB_1483e0cf8;
  }
  if (lVar6 == param_2) {
    FUN_1483e0d40(param_1,lVar5);
  }
LAB_1483e0b74:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483e0d40 FUN_1483e0d40 body=367 status=ok
// SIG undefined FUN_1483e0d40(void)

void FUN_1483e0d40(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (longlong *)param_2[0x3c];
  if (local_38 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
      uVar2 = ((uint)((ulonglong)local_38 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_38 >> 4)) *
              -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      lVar3 = param_1 + 0x3c8;
      if (*(longlong *)(param_1 + 0x3d0) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x3d0);
      }
      iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x3d8) - 1U & (uVar2 >> 0x10 ^ uVar2))
                               * 4);
      if (iVar4 != -1) {
        lVar3 = *(longlong *)(param_1 + 0x390);
        do {
          if (*(longlong **)(lVar3 + (longlong)iVar4 * 0x10) == local_38) goto LAB_1483e0db9;
          iVar4 = *(int *)((longlong)iVar4 * 0x10 + lVar3 + 8);
        } while (iVar4 != -1);
      }
    }
    if (((*(longlong *)(param_1 + 0x410) != 0) &&
        (lVar3 = (**(code **)(*local_38 + 0x7b8))(local_38,0,1,0xffffffff), lVar3 != 0)) &&
       (lVar3 = *(longlong *)(lVar3 + 0x138), lVar3 != 0)) {
      uVar1 = *(undefined8 *)(param_1 + 0x410);
      (**(code **)(*param_2 + 0x4a0))(param_2,&local_40);
      FUN_1483e12de(uVar1,*(undefined4 *)(*(longlong *)(lVar3 + 0x40) + 0x58),&local_40);
      if (local_40 != (undefined8 *)0x0) {
        (**(code **)*local_40)(local_40,1);
      }
      FUN_147cd295c((longlong *)(param_1 + 0x390),&local_40,&local_38,0);
    }
  }
LAB_1483e0db9:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483e0eb0 FUN_1483e0eb0 body=922 status=ok
// SIG undefined FUN_1483e0eb0(void)

void FUN_1483e0eb0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = *(longlong **)(param_2 + 0xa8);
  if ((plVar1 == (longlong *)0x0) || (*(int *)(param_1 + 0x398) == *(int *)(param_1 + 0x3c4)))
  goto LAB_1483e0f64;
  local_58 = 0;
  FUN_14485c47a(&local_58,plVar1);
  uVar3 = local_58;
  if (*(int *)(param_1 + 0x460) != *(int *)(param_1 + 0x48c)) {
    lVar7 = param_1 + 0x490;
    if (*(longlong *)(param_1 + 0x498) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x498);
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x4a0) - 1U &
                             ((uint)((ulonglong)local_58 >> 0x20) ^ (uint)local_58)) * 4);
    if (iVar5 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x458);
      do {
        lVar8 = (longlong)iVar5;
        local_48 = *(code **)(lVar7 + lVar8 * 0x18);
        local_50 = uVar3;
        cVar4 = FUN_14472d054(&local_48,&local_50);
        lVar7 = *(longlong *)(param_1 + 0x458);
        if (cVar4 != '\0') {
          lVar7 = lVar7 + lVar8 * 0x18;
          if (lVar7 != -8 && lVar7 != 0) {
            lVar7 = FUN_14479d2ce();
            goto LAB_1483e0f58;
          }
          break;
        }
        iVar5 = *(int *)(lVar7 + 0x10 + lVar8 * 0x18);
      } while (iVar5 != -1);
    }
  }
  if (DAT_14cb46bc0 == (code *)0x0) {
    local_70 = &local_48;
    local_48 = FUN_144a7958c;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_143242436;
    local_78 = &LAB_1483dd3b9;
    local_80 = &LAB_145e18341;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000004;
    local_a0 = 8;
    local_a8 = 0x278;
    FUN_14081cfa3(L"/Script/Water",L"BuoyancyComponent",&DAT_14cb46bc0,FUN_146485e60);
  }
  local_48 = DAT_14cb46bc0;
  if ((DAT_14cb46bc0 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  lVar7 = (**(code **)(*plVar1 + 0x598))(plVar1,&local_48);
LAB_1483e0f58:
  if (lVar7 == 0) goto LAB_1483e0f64;
  if (param_2 == 0) {
LAB_1483e10e5:
    param_2 = 0;
  }
  else {
    lVar8 = FUN_144a3a302();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
         ) != lVar8 + 0x30)) goto LAB_1483e10e5;
  }
  if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
    uVar6 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    lVar8 = param_1 + 0x3c8;
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x3d0);
    }
    iVar5 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x3d8) - 1U & (uVar6 >> 0x10 ^ uVar6)) *
                             4);
    if (iVar5 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x390);
      do {
        if (*(ulonglong *)(lVar8 + (longlong)iVar5 * 0x10) == param_2) {
          if (*(longlong *)(param_1 + 0x410) == 0) goto LAB_1483e11dc;
          lVar8 = FUN_14496b220();
          if ((longlong)*(int *)(lVar8 + 0x18) == 0) goto LAB_1483e11dc;
          lVar9 = 0;
          goto LAB_1483e11c4;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + lVar8 + 8);
      } while (iVar5 != -1);
    }
  }
LAB_1483e0f64:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (lVar9 = lVar9 + 8, (longlong)*(int *)(lVar8 + 0x18) * 8 != lVar9) {
LAB_1483e11c4:
    lVar2 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar9);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x10) == lVar7)) {
      *(undefined8 *)(lVar2 + 0x18) = 0;
      break;
    }
  }
LAB_1483e11dc:
  plVar1 = *(longlong **)(lVar7 + 0x1e0);
  if (plVar1 != (longlong *)0x0) {
    if (((*(longlong *)(param_1 + 0x410) != 0) &&
        (lVar7 = (**(code **)(*plVar1 + 0x7b8))(plVar1,0,1,0xffffffff), lVar7 != 0)) &&
       (*(longlong *)(lVar7 + 0x138) != 0)) {
      FUN_1483e124c(*(undefined8 *)(param_1 + 0x410),
                    *(undefined4 *)(*(longlong *)(*(longlong *)(lVar7 + 0x138) + 0x40) + 0x58));
    }
    FUN_147cca89e((longlong *)(param_1 + 0x390),plVar1);
  }
  goto LAB_1483e0f64;
}



// FUNCTION 1483e124c FUN_1483e124c body=145 status=ok
// SIG undefined FUN_1483e124c(void)

void FUN_1483e124c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  *(undefined2 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined2 *)(puVar2 + 8) = 1;
  *puVar2 = &PTR_FUN_149f45dc0;
  puVar2[10] = &LAB_143b2a49e;
  puVar2[0xc] = 0;
  puVar2[0xe] = &PTR_LAB_14ae8c280;
  puVar2[0xf] = param_1;
  *(undefined4 *)(puVar2 + 0x10) = param_2;
  puVar2[0x12] = 0;
  puVar2[0x14] = 0;
  *(undefined1 *)(puVar2 + 0x1a) = 0;
  FUN_1406e6496(lVar1 + 0x70,puVar2);
  return;
}



// FUNCTION 1483e12de FUN_1483e12de body=167 status=ok
// SIG undefined FUN_1483e12de(void)

void FUN_1483e12de(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = *param_3;
  *param_3 = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  *(undefined2 *)(puVar3 + 1) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined2 *)(puVar3 + 8) = 1;
  *puVar3 = &PTR_FUN_149f45dc0;
  puVar3[10] = FUN_143b2a3f2;
  puVar3[0xc] = 0;
  puVar3[0xe] = &PTR_LAB_14ae8c260;
  puVar3[0xf] = param_1;
  *(undefined4 *)(puVar3 + 0x10) = param_2;
  puVar3[0x11] = uVar2;
  puVar3[0x12] = 0;
  puVar3[0x14] = 0;
  *(undefined1 *)(puVar3 + 0x1a) = 0;
  FUN_1406e6496(lVar1 + 0x70,puVar3);
  return;
}



// FUNCTION 1483e1386 FUN_1483e1386 body=145 status=ok
// SIG undefined FUN_1483e1386(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1483e1386(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb46c80) {
    FUN_144b3d300(&DAT_14cb46c80);
    if (DAT_14cb46c80 == -1) {
      _DAT_14cb46c70 = 0x800000014ae7a028;
      _DAT_14cb46c78 = FUN_145af9a3a("FBuoyancyManagerAsyncCallback",0x1d);
      DAT_14cb46c7c = 0;
      _Init_thread_footer(&DAT_14cb46c80);
    }
  }
  FUN_1446f57c6(&DAT_14cb46c70,param_2);
  return param_2;
}



// FUNCTION 1483e1434 FUN_1483e1434 body=509 status=ok
// SIG undefined FUN_1483e1434(void)

void FUN_1483e1434(LARGE_INTEGER param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  LARGE_INTEGER local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 local_c1;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  longlong local_a8;
  int local_a0;
  double local_98;
  code *local_80;
  LARGE_INTEGER *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = FUN_14479d2ce(param_2 + 0x34);
  FUN_147ec268e((longlong *)(param_1.QuadPart + 0x50),uVar3,uVar1);
  uVar2 = FUN_147ece134((longlong *)(param_1.QuadPart + 0x50));
  FUN_147ecf2f6(&local_a8,param_1.QuadPart,param_2,0xffffffff);
  if (local_a0 < *(int *)(local_a8 + 8)) {
    do {
      if ((*(byte *)(local_a8 + 0x13e) & 1) != 0) break;
      if (0.0 <= local_98) {
        QueryPerformanceCounter(&local_f0);
        if (local_98 <= (double)local_f0.QuadPart * DAT_14c83f420 + 16777216.0) break;
      }
      FUN_147ed9420(param_1.QuadPart,&local_c0,param_2);
      local_c1 = 0;
      local_d8 = local_b0;
      local_e8 = local_c0;
      uStack_e4 = uStack_bc;
      uStack_e0 = uStack_b8;
      uStack_dc = uStack_b4;
      local_f0 = param_1;
      local_d0 = &local_c1;
      lVar4 = (**(code **)(*(longlong *)param_1 + 0x180))(param_1.QuadPart);
      if ((lVar4 != 0) && (lVar4 = FUN_140702026(lVar4), lVar4 != 0)) {
        local_80 = FUN_143b2a4e6;
        local_78 = &local_f0;
        FUN_1407028fe(lVar4 + 200,&local_80);
      }
      local_f8 = uVar2;
      FUN_143852d98(&local_a8,*(undefined1 *)(param_1.QuadPart + 0x34),
                    *(undefined1 *)(param_1.QuadPart + 0x4a),local_c1);
      FUN_147ee880a(&local_a8);
    } while (local_a0 < *(int *)(local_a8 + 8));
  }
  *(int *)(local_a8 + 0x124) = local_a0;
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483e1632 FUN_1483e1632 body=108 status=ok
// SIG undefined FUN_1483e1632(void)

undefined8 FUN_1483e1632(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400b22c2(local_30,"inside water body");
  FUN_147eda90a(param_1,param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e16a6 FUN_1483e16a6 body=89 status=ok
// SIG undefined FUN_1483e16a6(void)

undefined8 * FUN_1483e16a6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1483efc94(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x48);
      }
    }
  }
  return param_1;
}



// FUNCTION 1483e1700 FUN_1483e1700 body=184 status=ok
// SIG undefined FUN_1483e1700(void)

void FUN_1483e1700(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a0))(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e17c8 FUN_1483e17c8 body=52 status=ok
// SIG undefined FUN_1483e17c8(void)

void FUN_1483e17c8(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0xf8))(param_1,param_2 == 2);
  if (DAT_14cb0d2b0 != 0) {
    lVar1 = FUN_14585114a();
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x40) = 1;
    }
  }
  return;
}



// FUNCTION 1483e17fc FUN_1483e17fc body=1426 status=ok
// SIG undefined FUN_1483e17fc(void)

void FUN_1483e17fc(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined1 auStack_228 [32];
  double *local_208;
  float *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  float local_1bc;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  double local_178;
  double dStack_170;
  double local_168;
  float local_154;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_144b35076(&local_138);
  dVar5 = (double)(float)local_110;
  dVar6 = (double)(float)local_118;
  dVar7 = (double)(float)local_120;
  local_150 = dVar7;
  local_148 = dVar6;
  local_140 = dVar5;
  if ((longlong)*(int *)(param_1 + 0x38) == 0) {
    dVar3 = 0.0;
    dVar4 = 0.0;
    dVar16 = 0.0;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x30);
    lVar13 = (longlong)*(int *)(param_1 + 0x38) * 0x48;
    dVar16 = 0.0;
    dVar4 = 0.0;
    dVar3 = 0.0;
    do {
      local_208 = &local_178;
      local_200 = &local_154;
      FUN_1483e1d90(&local_198,lVar12,&local_150,param_4);
      if (((*(float *)(lVar12 + 0x40) != 0.0) ||
          (dVar17 = local_168, dVar1 = dStack_170, dVar2 = local_178, NAN(*(float *)(lVar12 + 0x40))
          )) && (cVar11 = FUN_14840985e(), dVar17 = local_168, dVar1 = dStack_170, dVar2 = local_178
                , cVar11 == '\0')) {
        fVar18 = *(float *)(lVar12 + 0x38);
        dVar17 = *(double *)(lVar12 + 0x30);
        dVar1 = *(double *)(lVar12 + 0x28);
        fVar15 = (float)FUN_1447c7e44();
        uVar14 = -(uint)((float)((dVar1 * dVar7 + dVar17 * dVar6) - (double)(fVar18 * param_4)) <
                        0.0);
        fVar18 = (float)(uVar14 & (uint)(6.2831855 - ABS(fVar15)) | ~uVar14 & (uint)fVar15);
        if (3.1415927 <= fVar18) {
          local_1d8 = (double)*(float *)(lVar12 + 0x40);
          local_1c8 = -*(double *)(lVar12 + 0x20) * local_1d8;
          local_1d0 = -*(double *)(lVar12 + 0x18) * local_1d8;
          local_1d8 = -*(double *)(lVar12 + 0x10) * local_1d8;
        }
        else {
          local_1d8 = (double)*(float *)(lVar12 + 0x40);
          local_1c8 = *(double *)(lVar12 + 0x20) * local_1d8;
          local_1d0 = *(double *)(lVar12 + 0x18) * local_1d8;
          local_1d8 = local_1d8 * *(double *)(lVar12 + 0x10);
        }
        local_1c8 = local_1c8 + dVar5;
        local_1d0 = local_1d0 + dVar6;
        local_1d8 = local_1d8 + dVar7;
        local_200 = &local_1bc;
        local_208 = &local_1b8;
        FUN_1483e1d90(&local_1f8,lVar12,&local_1d8,param_4);
        dVar2 = local_168;
        dVar1 = dStack_170;
        dVar17 = local_178;
        uVar10 = local_188;
        uVar9 = uStack_190;
        uVar8 = local_198;
        if (3.1415927 <= fVar18) {
          local_1bc = local_1bc - *(float *)(lVar12 + 0x40);
          local_198 = local_1f8;
          uStack_190 = uStack_1f0;
          local_188 = local_1e8;
          local_1f8 = uVar8;
          uStack_1f0 = uVar9;
          local_1e8 = uVar10;
          local_128 = local_168;
          local_138 = local_178;
          dStack_130 = dStack_170;
          local_168 = local_1a8;
          local_178 = local_1b8;
          dStack_170 = dStack_1b0;
          local_1a8 = dVar2;
          local_1b8 = dVar17;
          dStack_1b0 = dVar1;
          fVar18 = local_154;
          local_154 = local_1bc;
        }
        else {
          fVar18 = *(float *)(lVar12 + 0x40) + local_1bc;
        }
        uVar14 = -(uint)(0.0 < fVar18 - local_154);
        dVar2 = (double)((0.0 - local_154) /
                        (float)(~uVar14 & 0x3f800000 | (uint)(fVar18 - local_154) & uVar14));
        dVar17 = (local_1a8 - local_168) * dVar2 + local_168;
        dVar1 = (dStack_1b0 - dStack_170) * dVar2 + dStack_170;
        dVar2 = (local_1b8 - local_178) * dVar2 + local_178;
      }
      dVar3 = dVar3 + dVar2;
      dVar4 = dVar4 + dVar1;
      dVar16 = dVar16 + dVar17;
      lVar12 = lVar12 + 0x48;
      lVar13 = lVar13 + -0x48;
    } while (lVar13 != 0);
  }
  dVar16 = 1.0 - dVar16;
  dVar5 = dVar16 * dVar16 + dVar3 * dVar3 + dVar4 * dVar4;
  if (((dVar5 != 1.0) || (dVar17 = dVar16, dVar6 = dVar3, dVar7 = dVar4, NAN(dVar5))) &&
     (dVar17 = DAT_14c8464f0, dVar6 = DAT_14c8464e0, dVar7 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar5)) {
    dVar5 = 1.0 / SQRT(dVar5);
    dVar17 = dVar16 * dVar5;
    dVar6 = dVar3 * dVar5;
    dVar7 = dVar4 * dVar5;
  }
  *param_5 = dVar6;
  param_5[1] = dVar7;
  param_5[2] = dVar17;
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483e1d90 FUN_1483e1d90 body=586 status=ok
// SIG undefined FUN_1483e1d90(void)

double * FUN_1483e1d90(double *param_1,longlong param_2,double *param_3,undefined8 param_4,
                      double *param_5,float *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  undefined1 auStack_68 [32];
  float *local_48;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = (float)((*param_3 * *(double *)(param_2 + 0x28) +
                     param_3[1] * *(double *)(param_2 + 0x30)) -
                    (double)(*(float *)(param_2 + 0x38) * (float)param_4));
  local_3c = (float)(longlong)
                    (local_3c * 0.15915494 +
                    *(float *)(&DAT_14a184448 + (ulonglong)(local_3c < 0.0) * 4)) * -6.2831855 +
             local_3c;
  if (local_3c <= 1.5707964) {
    if (-1.5707964 <= local_3c) {
      local_40 = 1.0;
      goto LAB_1483e1e57;
    }
    fVar4 = -3.1415927;
  }
  else {
    fVar4 = 3.1415927;
  }
  local_3c = fVar4 - local_3c;
  local_40 = -1.0;
LAB_1483e1e57:
  fVar4 = local_3c * local_3c;
  local_3c = (((((fVar4 * -2.3889859e-08 + 2.7525562e-06) * fVar4 + -0.00019840874) * fVar4 +
               0.008333331) * fVar4 + -0.16666667) * fVar4 + 1.0) * local_3c;
  local_40 = (((((fVar4 * -2.6051615e-07 + 2.4760495e-05) * fVar4 + -0.0013888378) * fVar4 +
               0.041666638) * fVar4 + -0.5) * fVar4 + 1.0) * local_40;
  local_48 = &local_40;
  FUN_140ce7dc0(param_2,param_3,param_4,&local_3c);
  fVar4 = -*(float *)(param_2 + 0x40) * local_3c;
  *param_6 = fVar4;
  dVar3 = (double)fVar4;
  dVar1 = *(double *)(param_2 + 0x10);
  *param_1 = dVar1 * dVar3;
  dVar2 = *(double *)(param_2 + 0x18);
  param_1[1] = dVar3 * dVar2;
  param_1[2] = (double)(local_40 * *(float *)(param_2 + 4));
  dVar3 = (double)(local_3c * *(float *)(param_2 + 0x3c));
  *param_5 = dVar1 * dVar3;
  param_5[1] = dVar2 * dVar3;
  param_5[2] = 0.0;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e1fe2 FUN_1483e1fe2 body=39 status=ok
// SIG undefined FUN_1483e1fe2(void)

void FUN_1483e1fe2(longlong param_1,undefined8 param_2)

{
  switchD_143c3d4dc::caseD_38();
  FUN_14484255c(param_2,(longlong)*(int *)(param_1 + 0x3c) << 3);
  return;
}



// FUNCTION 1483e200e FUN_1483e200e body=217 status=ok
// SIG undefined FUN_1483e200e(void)

void FUN_1483e200e(longlong *param_1,double *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((double)param_1[0xc5] == *param_2) && (!NAN((double)param_1[0xc5]) && !NAN(*param_2))) {
    if (((double)param_1[0xc6] == param_2[1]) && (!NAN((double)param_1[0xc6]) && !NAN(param_2[1])))
    {
      if (((double)param_1[199] == param_2[2]) && (!NAN((double)param_1[199]) && !NAN(param_2[2])))
      goto LAB_1483e2058;
    }
  }
  param_1[199] = (longlong)param_2[2];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xc5) = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 0x62c) = uVar1;
  *(undefined4 *)(param_1 + 0xc6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x634) = uVar3;
  (**(code **)(*param_1 + 0x540))(param_1);
LAB_1483e2058:
  FUN_143b2653c(param_1);
  if ((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) {
    local_28 = param_1[0x50];
    lStack_20 = param_1[0x51];
    local_18 = param_1[0x52];
    FUN_140043360(param_1 + 0x82,&local_28,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483e20e8 FUN_1483e20e8 body=246 status=ok
// SIG undefined FUN_1483e20e8(void)

void FUN_1483e20e8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x620) == 0) ||
     ((*(uint *)(*(longlong *)(param_1 + 0x620) + 8) >> 0x1e & 1) != 0)) {
    FUN_1446f470e(&local_28,L"BodySetup",1);
    local_50 = 0;
    local_58 = 0;
    lVar1 = FUN_140c9d4a9(param_1,local_28,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x620) = lVar1;
    *(undefined1 *)(lVar1 + 0x31) = 2;
    FUN_144750a86(param_1,local_48,0,1);
    FUN_148409748(&local_38,local_48);
    lVar1 = *(longlong *)(param_1 + 0x620);
    *(undefined4 *)(lVar1 + 0xe8) = local_38;
    *(undefined4 *)(lVar1 + 0xec) = uStack_34;
    *(undefined4 *)(lVar1 + 0xf0) = uStack_30;
    *(undefined4 *)(lVar1 + 0xf4) = uStack_2c;
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e21df FUN_1483e21df body=491 status=ok
// SIG undefined FUN_1483e21df(void)

void FUN_1483e21df(longlong *param_1,float param_2,float param_3,longlong *param_4,longlong *param_5
                  )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int iVar12;
  char cVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  
  iVar5 = (int)param_1[1];
  if ((longlong)iVar5 < 3) {
    *(undefined4 *)(param_4 + 1) = 0;
    if (*(int *)((longlong)param_4 + 0xc) < 0) {
      FUN_1447a8aa0(param_4,0);
    }
    *(undefined4 *)(param_5 + 1) = 0;
    if (*(int *)((longlong)param_5 + 0xc) < 0) {
      FUN_146ea3024(param_5,0);
      return;
    }
  }
  else {
    cVar13 = FUN_1483e23ca(param_1,param_5);
    fVar19 = param_2;
    if (cVar13 == '\0') {
      fVar19 = param_3;
      param_3 = param_2;
    }
    uVar6 = *(uint *)(param_5 + 1);
    FUN_14051b394(param_4,iVar5 * 2,1);
    lVar14 = (longlong)iVar5 * 0x18;
    lVar16 = 0;
    do {
      lVar7 = *param_1;
      lVar18 = *param_4;
      *(undefined8 *)(lVar18 + 0x10 + lVar16) = *(undefined8 *)(lVar7 + 0x10 + lVar16);
      puVar1 = (undefined8 *)(lVar7 + lVar16);
      uVar11 = puVar1[1];
      puVar2 = (undefined8 *)(lVar18 + lVar16);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      *(double *)(*param_4 + 0x10 + lVar16) = (double)param_3;
      lVar7 = *param_1;
      lVar18 = *param_4 + lVar14;
      *(undefined8 *)(lVar16 + 0x10 + lVar18) = *(undefined8 *)(lVar7 + 0x10 + lVar16);
      puVar3 = (undefined4 *)(lVar7 + lVar16);
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar4 = (undefined4 *)(lVar16 + lVar18);
      *puVar4 = *puVar3;
      puVar4[1] = uVar8;
      puVar4[2] = uVar9;
      puVar4[3] = uVar10;
      *(double *)(lVar16 + 0x10 + *param_4 + lVar14) = (double)fVar19;
      lVar16 = lVar16 + 0x18;
    } while (lVar14 != lVar16);
    FUN_140da13d2(param_5,iVar5 * 2 + uVar6 * 2,CONCAT71((int7)((ulonglong)lVar18 >> 8),1));
    if (0 < (int)uVar6) {
      lVar14 = (ulonglong)uVar6 * 0xc;
      lVar16 = 0;
      do {
        lVar18 = *param_5;
        lVar7 = lVar18 + lVar16;
        *(int *)(lVar14 + lVar7) = *(int *)(lVar18 + lVar16) + iVar5;
        *(int *)(lVar14 + 4 + lVar7) = *(int *)(lVar18 + 8 + lVar16) + iVar5;
        *(int *)(lVar14 + 8 + lVar7) = *(int *)(lVar18 + 4 + lVar16) + iVar5;
        lVar16 = lVar16 + 0xc;
      } while (lVar14 != lVar16);
    }
    lVar14 = (longlong)(int)uVar6 * 0x18;
    iVar12 = 0;
    iVar17 = iVar5 + -1;
    do {
      iVar15 = iVar12;
      lVar16 = *param_5;
      *(int *)(lVar16 + lVar14) = iVar17 + iVar5;
      *(int *)(lVar16 + 4 + lVar14) = iVar5 + iVar15;
      *(int *)(lVar16 + 8 + lVar14) = iVar15;
      lVar16 = *param_5;
      *(int *)(lVar16 + 0xc + lVar14) = iVar17 + iVar5;
      *(int *)(lVar16 + 0x10 + lVar14) = iVar15;
      *(int *)(lVar16 + 0x14 + lVar14) = iVar17;
      lVar14 = lVar14 + 0x18;
      iVar12 = iVar15 + 1;
      iVar17 = iVar15;
    } while (iVar5 != iVar15 + 1);
  }
  return;
}



// FUNCTION 1483e23ca FUN_1483e23ca body=1477 status=ok
// SIG undefined FUN_1483e23ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1483e23ca(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  double *pdVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  undefined8 unaff_RBP;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  
  uVar15 = *(uint *)(param_1 + 1);
  uVar23 = uVar15 - 1;
  uVar19 = (ulonglong)uVar15;
  if ((longlong)(int)uVar15 < 1) {
    uVar17 = 0;
  }
  else {
    lVar24 = *param_1;
    pdVar16 = (double *)(lVar24 + 8);
    dVar10 = 0.0;
    uVar17 = 0;
    uVar14 = (ulonglong)uVar23;
    do {
      dVar10 = dVar10 + (*(double *)(lVar24 + (longlong)(int)uVar14 * 0x18) * *pdVar16 -
                        pdVar16[-1] * *(double *)(lVar24 + 8 + (longlong)(int)uVar14 * 0x18));
      uVar14 = uVar17 & 0xffffffff;
      uVar17 = uVar17 + 1;
      pdVar16 = pdVar16 + 3;
    } while (uVar19 != uVar17);
    uVar17 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),dVar10 * 0.5 < 0.0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_146ea3024(param_2,0);
  }
  if (uVar15 == 3) {
    iVar13 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar13 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar13 + 1U) {
      FUN_146ddc768(param_2,iVar13);
    }
    lVar24 = *param_2;
    *(undefined8 *)(lVar24 + (longlong)iVar13 * 0xc) = 0x100000000;
    *(undefined4 *)(lVar24 + 8 + (longlong)iVar13 * 0xc) = 2;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb46da0) && (FUN_144b3d300(&DAT_14cb46da0), DAT_14cb46da0 == -1)) {
      DAT_14cb46d90 = (uint *)0x0;
      uRam000000014cb46d98 = 0;
      atexit((_func_5014 *)&LAB_143b27285);
      _Init_thread_footer(&DAT_14cb46da0);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb46db8) && (FUN_144b3d300(&DAT_14cb46db8), DAT_14cb46db8 == -1)) {
      DAT_14cb46da8 = 0;
      uRam000000014cb46db0 = 0;
      atexit((_func_5014 *)&LAB_143b27296);
      _Init_thread_footer(&DAT_14cb46db8);
    }
    FUN_144a127d2(&DAT_14cb46d90,uVar19,0);
    FUN_144a127d2(&DAT_14cb46da8,uVar15,0);
    if ((int)uVar15 < 1) {
      *DAT_14cb46d90 = uVar23;
      *(undefined4 *)(DAT_14cb46da8 + -4 + (longlong)(int)uVar15 * 4) = 0;
    }
    else {
      uVar14 = 0;
      do {
        DAT_14cb46d90[uVar14] = (int)uVar14 - 1;
        uVar1 = uVar14 + 1;
        *(int *)(DAT_14cb46da8 + uVar14 * 4) = (int)uVar1;
        uVar14 = uVar1;
      } while (uVar19 != uVar1);
      *DAT_14cb46d90 = uVar23;
      *(undefined4 *)(DAT_14cb46da8 + (longlong)(int)uVar23 * 4) = 0;
      if (2 < (int)uVar15) {
        iVar13 = 0;
        uVar15 = 0;
        do {
          iVar18 = (int)uVar19;
          lVar24 = (longlong)(int)uVar15;
          if (iVar13 < iVar18 && iVar18 != 3) {
            uVar23 = DAT_14cb46d90[lVar24];
            lVar22 = *param_1;
            uVar9 = *(uint *)(DAT_14cb46da8 + lVar24 * 4);
            lVar21 = (longlong)(int)uVar9;
            dVar10 = *(double *)(lVar22 + (longlong)(int)uVar23 * 0x18);
            dVar2 = *(double *)(lVar22 + 8 + (longlong)(int)uVar23 * 0x18);
            dVar3 = *(double *)(lVar22 + lVar24 * 0x18);
            dVar4 = *(double *)(lVar22 + 8 + lVar24 * 0x18);
            dVar27 = dVar10 * dVar4 - dVar3 * dVar2;
            dVar5 = *(double *)(lVar22 + lVar21 * 0x18);
            dVar6 = *(double *)(lVar22 + 8 + lVar21 * 0x18);
            dVar11 = dVar3 * dVar6 - dVar5 * dVar4;
            dVar12 = dVar5 * dVar2 - dVar10 * dVar6;
            fVar25 = (float)(dVar27 + dVar11 + dVar12);
            if ((char)uVar17 != '\0') {
              fVar25 = -fVar25;
            }
            if (0.0 <= fVar25) {
              uVar14 = DAT_149931e80;
              uVar20 = *(uint *)(DAT_14cb46da8 + lVar21 * 4);
              do {
                lVar21 = (longlong)(int)uVar20;
                dVar7 = *(double *)(lVar22 + lVar21 * 0x18);
                dVar8 = *(double *)(lVar22 + 8 + lVar21 * 0x18);
                fVar28 = (float)((dVar7 * dVar2 - dVar10 * dVar8) +
                                dVar7 * (double)((ulonglong)dVar4 ^ uVar14) + dVar3 * dVar8 + dVar27
                                );
                fVar25 = (float)((dVar7 * dVar6 - dVar8 * dVar5) +
                                dVar7 * (double)((ulonglong)dVar2 ^ uVar14) + dVar10 * dVar8 +
                                dVar12);
                if (((0.0 < fVar25 * fVar28) &&
                    (fVar26 = (float)((dVar7 * dVar4 - dVar3 * dVar8) +
                                     dVar8 * dVar5 + dVar7 * (double)((ulonglong)dVar6 ^ uVar14) +
                                     dVar11), 0.0 < fVar28 * fVar26)) && (0.0 < fVar26 * fVar25))
                goto LAB_1483e26f4;
                uVar20 = *(uint *)(DAT_14cb46da8 + lVar21 * 4);
              } while (uVar20 != uVar23);
              goto LAB_1483e2818;
            }
LAB_1483e26f4:
            iVar13 = iVar13 + 1;
            uVar15 = uVar9;
          }
          else {
LAB_1483e2818:
            iVar13 = (int)param_2[1];
            lVar22 = (longlong)iVar13;
            *(uint *)(param_2 + 1) = iVar13 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar13 + 1U) {
              FUN_146ddc768(param_2,iVar13);
            }
            lVar21 = *param_2;
            *(undefined4 *)(lVar21 + 8 + lVar22 * 0xc) = 0;
            *(undefined8 *)(lVar21 + lVar22 * 0xc) = 0;
            *(uint *)(lVar21 + lVar22 * 0xc) = DAT_14cb46d90[lVar24];
            *(uint *)(lVar21 + 4 + lVar22 * 0xc) = uVar15;
            *(undefined4 *)(lVar21 + 8 + lVar22 * 0xc) = *(undefined4 *)(DAT_14cb46da8 + lVar24 * 4)
            ;
            *(undefined4 *)(DAT_14cb46da8 + (longlong)(int)DAT_14cb46d90[lVar24] * 4) =
                 *(undefined4 *)(DAT_14cb46da8 + lVar24 * 4);
            DAT_14cb46d90[*(int *)(DAT_14cb46da8 + lVar24 * 4)] = DAT_14cb46d90[lVar24];
            uVar19 = (ulonglong)(iVar18 - 1);
            uVar15 = DAT_14cb46d90[lVar24];
            iVar13 = 0;
          }
        } while (2 < (int)uVar19);
      }
    }
  }
  return uVar17 & 0xffffffff;
}



// FUNCTION 1483e2990 FUN_1483e2990 body=225 status=ok
// SIG undefined FUN_1483e2990(void)

undefined8 FUN_1483e2990(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [4];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = FUN_144a7a908();
  lVar2 = FUN_144a78ede(param_1 + -0x2a8,uVar1);
  uVar1 = 1;
  if (((lVar2 != 0) && (*(longlong *)(param_1 + 0x378) != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x3a8), lVar2 != 0)) {
    puVar4 = (undefined8 *)(param_1 + -0x68);
    puVar5 = local_98;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    fVar6 = (float)FUN_1405b9a48(lVar2);
    local_78 = local_78 + 0.0;
    dStack_70 = dStack_70 + 0.0;
    local_68 = (double)-fVar6 + local_68;
    dStack_60 = dStack_60 + 0.0;
    (**(code **)(*param_2 + 0x28))(param_2,*(undefined8 *)(param_1 + 0x378),local_98);
    uVar1 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e2ab4 FUN_1483e2ab4 body=202 status=ok
// SIG undefined FUN_1483e2ab4(void)

void FUN_1483e2ab4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ae8b9a0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e2b80 FUN_1483e2b80 body=202 status=ok
// SIG undefined FUN_1483e2b80(void)

void FUN_1483e2b80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14ae8ba10;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e2c4c FUN_1483e2c4c body=69 status=ok
// SIG undefined FUN_1483e2c4c(void)

undefined8 FUN_1483e2c4c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  
  uVar2 = FUN_1481192e4();
  if ((char)uVar2 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x38);
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    uVar2 = CONCAT71(uVar3,*(longlong *)(param_2 + 0x38) == lVar1);
  }
  return uVar2;
}



// FUNCTION 1483e2c92 FUN_1483e2c92 body=69 status=ok
// SIG undefined FUN_1483e2c92(void)

undefined4 FUN_1483e2c92(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1414db5a0();
  if ((char)uVar1 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x38);
      }
    }
    *(longlong *)(param_2 + 0x38) = lVar2;
  }
  return uVar1;
}



// FUNCTION 1483e2cde FUN_1483e2cde body=217 status=ok
// SIG undefined FUN_1483e2cde(void)

undefined8 FUN_1483e2cde(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[3] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  local_38 = DAT_14c8464f0;
  local_48 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_40 = (undefined4)DAT_14c8464e8;
  uStack_3c = DAT_14c8464e8._4_4_;
  FUN_144b38f62(param_2 + 1);
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_48 = 0;
  FUN_14485c47a(&local_48,lVar1);
  *param_2 = local_48;
  FUN_144b384f0(param_3,&local_48,0);
  param_2[3] = local_38;
  *(undefined4 *)(param_2 + 1) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_48._4_4_;
  *(undefined4 *)(param_2 + 2) = uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_3c;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e2dba FUN_1483e2dba body=130 status=ok
// SIG undefined FUN_1483e2dba(void)

undefined8 FUN_1483e2dba(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_14479d2ce(param_2);
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != lVar2) {
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    local_28 = 0;
    FUN_14485c47a(&local_28,lVar1);
    *param_2 = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e2e3e FUN_1483e2e3e body=148 status=ok
// SIG undefined FUN_1483e2e3e(void)

void FUN_1483e2e3e(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 1483e2ed2 FUN_1483e2ed2 body=236 status=ok
// SIG undefined FUN_1483e2ed2(void)

void FUN_1483e2ed2(char *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  int local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1483e2e3e(local_28,param_1);
  FUN_144a76cd4(&local_38,param_1);
  lVar4 = FUN_14479d2ce(local_20);
  piVar1 = (int *)(param_1 + 0x3c);
  piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar6 = piVar1;
  }
  if (lVar4 == 0) {
    if (0 < *piVar6) {
      iVar5 = 0;
      do {
        puVar2 = local_38 + local_30;
        *local_38 = 0;
        iVar5 = iVar5 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = piVar1;
        }
        local_38 = puVar2;
      } while (iVar5 < *piVar6);
    }
  }
  else if (0 < *piVar6) {
    uVar3 = *(undefined4 *)(lVar4 + 0x1020);
    iVar5 = 0;
    do {
      puVar2 = local_38 + local_30;
      *local_38 = uVar3;
      iVar5 = iVar5 + 1;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar6 = piVar1;
      }
      local_38 = puVar2;
    } while (iVar5 < *piVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1483e2fc0 FUN_1483e2fc0 body=315 status=ok
// SIG undefined FUN_1483e2fc0(void)

void FUN_1483e2fc0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e30fc FUN_1483e30fc body=336 status=ok
// SIG undefined FUN_1483e30fc(void)

void FUN_1483e30fc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143b28022(local_28[2],local_28,local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e3258 FUN_1483e3258 body=108 status=ok
// SIG undefined FUN_1483e3258(void)

void FUN_1483e3258(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1483e32c6();
  if ((*(byte *)(param_1 + 0x9c) & 8) != 0) {
    local_28 = *(undefined8 *)(param_1 + 0x280);
    uStack_20 = *(undefined8 *)(param_1 + 0x288);
    local_18 = *(undefined8 *)(param_1 + 0x290);
    FUN_140043360(param_1 + 0x410,&local_28,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e32c6 FUN_1483e32c6 body=794 status=ok
// SIG undefined FUN_1483e32c6(void)

void FUN_1483e32c6(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1483e35e2();
  plVar6 = (longlong *)param_1[0xc4];
  lVar11 = plVar6[0x1d];
  iVar4 = *(int *)((longlong)plVar6 + 0xec);
  lVar10 = plVar6[0x1e];
  iVar5 = *(int *)((longlong)plVar6 + 0xf4);
  (**(code **)(*plVar6 + 0x2c0))(plVar6);
  FUN_147a2cbea(plVar6 + 7);
  local_b8 = FUN_140036a08;
  uStack_b0 = &local_78;
  lVar8 = FUN_144a773aa(&local_b8,&DAT_14c7585d0);
  local_78 = (undefined8 *)(lVar8 + 0x10);
  local_70 = *(undefined8 *)(lVar8 + 0x10);
  local_68 = *(longlong *)(lVar8 + 0x20);
  local_60 = '\0';
  local_58 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 ***)(lVar8 + 0x28) = &local_78;
  *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
  FUN_14058b81e(param_1[0xc4] + 0x68,param_2);
  *(byte *)(param_1[0xc4] + 0xb9) = *(byte *)(param_1[0xc4] + 0xb9) | 4;
  (**(code **)(*(longlong *)param_1[0xc4] + 0x2c0))();
  if (((iVar4 != 0 || (int)lVar11 != 0) || (int)lVar10 != 0) || iVar5 != 0) {
    lVar8 = param_1[0xc4];
    *(int *)(lVar8 + 0xe8) = (int)lVar11;
    *(int *)(lVar8 + 0xec) = iVar4;
    *(int *)(lVar8 + 0xf0) = (int)lVar10;
    *(int *)(lVar8 + 0xf4) = iVar5;
  }
  (**(code **)(*(longlong *)param_1[0xc4] + 0x2a0))();
  lVar11 = (longlong)*(int *)(param_1[0xc4] + 0x70);
  if (lVar11 != 0) {
    lVar10 = *(longlong *)(param_1[0xc4] + 0x68);
    lVar11 = lVar11 * 0x100 + lVar10;
    do {
      iVar4 = *(int *)(lVar10 + 0x38);
      local_b8 = (code *)0x0;
      uStack_b0 = (undefined8 **)0x0;
      FUN_140627580(&local_b8,iVar4,1);
      if (0 < (longlong)iVar4) {
        lVar8 = 0;
        do {
          lVar7 = *(longlong *)(lVar10 + 0x30);
          dVar2 = *(double *)(lVar7 + 0x10 + lVar8 * 2);
          dVar3 = *(double *)(lVar7 + 8 + lVar8 * 2);
          *(float *)(local_b8 + lVar8) = (float)*(double *)(lVar7 + lVar8 * 2);
          *(float *)(local_b8 + lVar8 + 4) = (float)dVar3;
          *(float *)(local_b8 + lVar8 + 8) = (float)dVar2;
          lVar8 = lVar8 + 0xc;
        } while ((longlong)iVar4 * 0xc != lVar8);
      }
      puVar9 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
      FUN_146d83314(puVar9,&local_b8,0,0);
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
        UNLOCK();
      }
      local_80 = puVar9;
      FUN_140ab29fc(lVar10,&local_80,1);
      if (local_80 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_80 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)local_80 + 0xc) == 0)) {
          (**(code **)*local_80)(local_80,1);
        }
      }
      if (local_b8 != (code *)0x0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 0x100;
    } while (lVar10 != lVar11);
  }
  FUN_1406cc378(param_1);
  FUN_1448215fa(param_1);
  FUN_144875afe(param_1[0xc4] + 0x38,&local_b8,&DAT_14c846480);
  param_1[0xcb] = local_88;
  *(undefined4 *)(param_1 + 0xc9) = local_98;
  *(undefined4 *)((longlong)param_1 + 0x64c) = uStack_94;
  *(undefined4 *)(param_1 + 0xca) = uStack_90;
  *(undefined4 *)((longlong)param_1 + 0x654) = uStack_8c;
  *(undefined4 *)(param_1 + 199) = local_a8;
  *(undefined4 *)((longlong)param_1 + 0x63c) = uStack_a4;
  *(undefined4 *)(param_1 + 200) = uStack_a0;
  *(undefined4 *)((longlong)param_1 + 0x644) = uStack_9c;
  *(undefined4 *)(param_1 + 0xc5) = (undefined4)local_b8;
  *(undefined4 *)((longlong)param_1 + 0x62c) = local_b8._4_4_;
  *(undefined4 *)(param_1 + 0xc6) = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)param_1 + 0x634) = uStack_b0._4_4_;
  (**(code **)(*param_1 + 0x540))(param_1);
  if (local_60 == '\0') {
    local_60 = '\x01';
    *(int *)(local_78 + 4) = *(int *)(local_78 + 4) + -1;
    if (local_68 != local_78[2]) {
      FUN_14004673c();
    }
    *local_78 = local_70;
    local_78[3] = local_58;
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e35e2 FUN_1483e35e2 body=246 status=ok
// SIG undefined FUN_1483e35e2(void)

void FUN_1483e35e2(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x620) == 0) ||
     ((*(uint *)(*(longlong *)(param_1 + 0x620) + 8) >> 0x1e & 1) != 0)) {
    FUN_1446f470e(&local_28,L"BodySetup",1);
    local_50 = 0;
    local_58 = 0;
    lVar1 = FUN_140c9d4a9(param_1,local_28,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x620) = lVar1;
    *(undefined1 *)(lVar1 + 0x31) = 2;
    FUN_144750a86(param_1,local_48,0,1);
    FUN_148409748(&local_38,local_48);
    lVar1 = *(longlong *)(param_1 + 0x620);
    *(undefined4 *)(lVar1 + 0xe8) = local_38;
    *(undefined4 *)(lVar1 + 0xec) = uStack_34;
    *(undefined4 *)(lVar1 + 0xf0) = uStack_30;
    *(undefined4 *)(lVar1 + 0xf4) = uStack_2c;
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e36e2 FUN_1483e36e2 body=225 status=ok
// SIG undefined FUN_1483e36e2(void)

undefined8 FUN_1483e36e2(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [4];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = FUN_144a7a908();
  lVar2 = FUN_144a78ede(param_1 + -0x2a8,uVar1);
  uVar1 = 1;
  if (((lVar2 != 0) && (*(longlong *)(param_1 + 0x378) != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x3a8), lVar2 != 0)) {
    puVar4 = (undefined8 *)(param_1 + -0x68);
    puVar5 = local_98;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    fVar6 = (float)FUN_1405b9a48(lVar2);
    local_78 = local_78 + 0.0;
    dStack_70 = dStack_70 + 0.0;
    local_68 = (double)-fVar6 + local_68;
    dStack_60 = dStack_60 + 0.0;
    (**(code **)(*param_2 + 0x28))(param_2,*(undefined8 *)(param_1 + 0x378),local_98);
    uVar1 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e37c4 FUN_1483e37c4 body=225 status=ok
// SIG undefined FUN_1483e37c4(void)

undefined8 FUN_1483e37c4(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [4];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = FUN_144a7a908();
  lVar2 = FUN_144a78ede(param_1 + -0x2a8,uVar1);
  uVar1 = 1;
  if (((lVar2 != 0) && (*(longlong *)(param_1 + 0x378) != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x3a8), lVar2 != 0)) {
    puVar4 = (undefined8 *)(param_1 + -0x68);
    puVar5 = local_98;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    fVar6 = (float)FUN_1405b9a48(lVar2);
    local_78 = local_78 + 0.0;
    dStack_70 = dStack_70 + 0.0;
    local_68 = (double)-fVar6 + local_68;
    dStack_60 = dStack_60 + 0.0;
    (**(code **)(*param_2 + 0x28))(param_2,*(undefined8 *)(param_1 + 0x378),local_98);
    uVar1 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e38aa FUN_1483e38aa body=169 status=ok
// SIG undefined FUN_1483e38aa(void)

void FUN_1483e38aa(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x670))(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e3954 FUN_1483e3954 body=146 status=ok
// SIG undefined FUN_1483e3954(void)

void FUN_1483e3954(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1409ca648(*(undefined8 *)(param_1 + 0x3a8),&local_28);
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



// FUNCTION 1483e39e8 FUN_1483e39e8 body=146 status=ok
// SIG undefined FUN_1483e39e8(void)

void FUN_1483e39e8(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1483e462c(*(undefined8 *)(param_1 + 0x3a8),&local_28);
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



// FUNCTION 1483e3a7c FUN_1483e3a7c body=49 status=ok
// SIG undefined FUN_1483e3a7c(void)

void FUN_1483e3a7c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0xa60))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1483e3ac0 FUN_1483e3ac0 body=49 status=ok
// SIG undefined FUN_1483e3ac0(void)

void FUN_1483e3ac0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x3a8) + 0xa68))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1483e3b20 FUN_1483e3b20 body=41 status=ok
// SIG undefined FUN_1483e3b20(void)

void FUN_1483e3b20(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x638))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1483e3b4a FUN_1483e3b4a body=61 status=ok
// SIG undefined FUN_1483e3b4a(void)

void FUN_1483e3b4a(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x3a8);
  (**(code **)(*plVar1 + 0xb78))(plVar1);
  *param_3 = plVar1[0x208];
  return;
}



// FUNCTION 1483e3ba4 FUN_1483e3ba4 body=169 status=ok
// SIG undefined FUN_1483e3ba4(void)

void FUN_1483e3ba4(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x660))(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e3c4e FUN_1483e3c4e body=187 status=ok
// SIG undefined FUN_1483e3c4e(void)

void FUN_1483e3c4e(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x668))(param_1,&local_40,local_24);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e3d14 FUN_1483e3d14 body=240 status=ok
// SIG undefined FUN_1483e3d14(void)

void FUN_1483e3d14(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1483e3e06(param_1,iVar1 != 0,local_28 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e3e06 FUN_1483e3e06 body=370 status=ok
// SIG undefined FUN_1483e3e06(void)

void FUN_1483e3e06(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  uint uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  longlong local_100;
  undefined4 local_f8;
  uint local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0xffffffff00000001;
  local_150 = 0;
  local_148 = 0;
  local_120 = 0;
  local_118 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_114 = 0xffffffff00000080;
  local_10c = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = local_f0 & 0xffffff00;
  uStack_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0xffffffff00000001;
  local_c0 = 0;
  local_b8 = (ulonglong)uStack_144 << 0x20;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_140604072(&local_b0,&local_140);
  local_60 = local_f0;
  uStack_5c = uStack_ec;
  uStack_58 = (undefined4)uStack_e8;
  uStack_54 = uStack_e8._4_4_;
  local_50 = CONCAT44(uStack_dc,local_e0);
  local_48 = 0;
  local_46 = 0;
  local_f8 = 0;
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_140);
  local_48 = CONCAT11(param_3,param_2);
  FUN_143b281d4(*(undefined8 *)(param_1 + 0x3a8),&local_d8);
  local_68 = 0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_b0);
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e3f7a FUN_1483e3f7a body=210 status=ok
// SIG undefined FUN_1483e3f7a(void)

void FUN_1483e3f7a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  lVar2 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x3a8);
  if (plVar1[0x1e6] != local_20) {
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    plVar1[0x1e6] = lVar2;
    (**(code **)(*plVar1 + 0xac0))(plVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e404e FUN_1483e404e body=156 status=ok
// SIG undefined FUN_1483e404e(void)

void FUN_1483e404e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1483e413a(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e40ee FUN_1483e40ee body=75 status=ok
// SIG undefined FUN_1483e40ee(void)

void FUN_1483e40ee(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  FUN_1402d084a(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14aea0ec0);
  if ((*(byte *)(plVar1 + 5) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001483e4132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x640))(param_1);
  return;
}



// FUNCTION 1483e413a FUN_1483e413a body=400 status=ok
// SIG undefined FUN_1483e413a(void)

void FUN_1483e413a(longlong param_1,longlong param_2)

{
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  uint uStack_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  longlong local_f0;
  undefined4 local_e8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(longlong *)(param_1 + 0x3b8) != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x3b8) = param_2;
    FUN_1483e42cc(*(undefined8 *)(param_1 + 0x3a8));
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0xffffffff00000001;
    local_140 = 0;
    local_138 = 0;
    local_110 = 0;
    local_108 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_104 = 0xffffffff00000080;
    local_fc = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = local_e0 & 0xffffff00;
    uStack_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0xffffffff00000001;
    local_b0 = 0;
    local_a8 = (ulonglong)uStack_134 << 0x20;
    local_80 = 0;
    local_78 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_74 = 0xffffffff00000080;
    local_6c = 0;
    local_60 = 0;
    local_58 = 0;
    FUN_140604072(&local_a0,&local_130);
    local_50 = local_e0;
    uStack_4c = uStack_dc;
    uStack_48 = (undefined4)uStack_d8;
    uStack_44 = uStack_d8._4_4_;
    local_40 = CONCAT44(uStack_cc,local_d0);
    local_38 = 0;
    local_36 = 0;
    local_e8 = 0;
    if (local_f0 != 0) {
      FUN_1400020a8();
    }
    FUN_140603fbe(&local_130);
    local_38 = CONCAT11(local_38._1_1_,1);
    FUN_143b281d4(*(undefined8 *)(param_1 + 0x3a8),&local_c8);
    local_58 = 0;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    FUN_140603fbe(&local_a0);
  }
  if ((local_28 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e42cc FUN_1483e42cc body=70 status=ok
// SIG undefined FUN_1483e42cc(void)

void FUN_1483e42cc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (((lVar1 != 0) || (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)) &&
     (lVar1 = FUN_140702026(lVar1), lVar1 != 0)) {
    FUN_1401bf042(lVar1 + 200);
    return;
  }
  return;
}



// FUNCTION 1483e4318 FUN_1483e4318 body=257 status=ok
// SIG undefined FUN_1483e4318(void)

longlong * FUN_1483e4318(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined8 *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  local_50 = param_2;
  FUN_1483f0194(local_88,&local_50);
  lVar4 = local_60;
  lVar3 = local_78;
  LOCK();
  *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
  UNLOCK();
  LOCK();
  *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
  UNLOCK();
  puVar5 = local_80;
LAB_1483e4377:
  do {
    if (puVar5 == local_68) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + -1;
      UNLOCK();
      if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    uVar2 = puVar5[2];
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1483f02de(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
    for (puVar5 = (undefined8 *)FUN_1483f021e(*puVar5); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)FUN_1483f021e(*puVar5)) {
      lVar6 = FUN_1447210f0(puVar5[2]);
      if (lVar6 == *local_70) goto LAB_1483e4377;
    }
    puVar5 = (undefined8 *)0x0;
  } while( true );
}



// FUNCTION 1483e4422 FUN_1483e4422 body=240 status=ok
// SIG undefined FUN_1483e4422(void)

void FUN_1483e4422(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa28))(param_1,&local_38,local_24 != 0);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1483e4514 FUN_1483e4514 body=139 status=ok
// SIG undefined FUN_1483e4514(void)

void FUN_1483e4514(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1409ca648(param_1,&local_28);
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



// FUNCTION 1483e45a0 FUN_1483e45a0 body=139 status=ok
// SIG undefined FUN_1483e45a0(void)

void FUN_1483e45a0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1483e462c(param_1,&local_28);
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



// FUNCTION 1483e462c FUN_1483e462c body=160 status=ok
// SIG undefined FUN_1483e462c(void)

longlong * FUN_1483e462c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x1068);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_1483f06fc(param_2);
    if ((longlong)*(int *)(param_1 + 0x1068) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1060);
      lVar4 = (longlong)*(int *)(param_1 + 0x1068) * 0x28;
      do {
        lVar2 = FUN_1483e62de(lVar3);
        if (lVar2 != 0) {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1483f0752(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
        }
        lVar3 = lVar3 + 0x28;
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
    }
  }
  return param_2;
}



// FUNCTION 1483e46ce FUN_1483e46ce body=39 status=ok
// SIG undefined FUN_1483e46ce(void)

void FUN_1483e46ce(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1405b9a48();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1483e46f6 FUN_1483e46f6 body=42 status=ok
// SIG undefined FUN_1483e46f6(void)

void FUN_1483e46f6(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xa70))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1483e4720 FUN_1483e4720 body=42 status=ok
// SIG undefined FUN_1483e4720(void)

void FUN_1483e4720(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xa60))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1483e474a FUN_1483e474a body=42 status=ok
// SIG undefined FUN_1483e474a(void)

void FUN_1483e474a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xa78))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1483e4774 FUN_1483e4774 body=42 status=ok
// SIG undefined FUN_1483e4774(void)

void FUN_1483e4774(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xa68))();
  *param_3 = uVar1;
  return;
}


