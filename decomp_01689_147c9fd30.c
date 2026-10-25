// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147c9fd30 FUN_147c9fd30 body=106 status=ok
// SIG undefined FUN_147c9fd30(void)

void FUN_147c9fd30(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_1 + 0xdf8))();
  if (lVar1 != 0) {
    local_20 = 0;
    local_1c = 1;
    local_18 = 0x40000000;
    (**(code **)(*param_1 + 0xe38))(param_1,lVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9fda0 FUN_147c9fda0 body=189 status=ok
// SIG undefined FUN_147c9fda0(void)

void FUN_147c9fda0(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (param_1[0x79] == (ulonglong)DAT_14c893048) {
    (**(code **)(*param_1 + 0xec8))(param_1);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    (**(code **)(*param_1 + 0xe38))(param_1,param_1);
    local_30 = *param_2;
    uStack_2c = param_2[1];
    uStack_28 = param_2[2];
    uStack_24 = param_2[3];
    local_38 = param_1;
    uVar1 = FUN_14477b072(param_1,DAT_14caf97b8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c9fe5e FUN_147c9fe5e body=265 status=ok
// SIG undefined FUN_147c9fe5e(void)

void FUN_147c9fe5e(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (((param_1[0x79] == (ulonglong)DAT_14c893048) && ((*(byte *)(param_1 + 0xb4) & 0x10) != 0)) ||
     (param_1[0x79] == (ulonglong)DAT_14c893054)) {
    cVar1 = (**(code **)(*param_1 + 0xeb0))(param_1);
    uVar2 = DAT_14caf9b00;
    if (cVar1 == '\0') goto LAB_147c9fec1;
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
  }
  uVar2 = DAT_14caf9bd0;
  if (param_1[0x79] != (ulonglong)DAT_14c893048) {
    if (((param_1[0x7a] != 0) && ((*(byte *)(param_1 + 0xb4) & 2) == 0)) &&
       (lVar3 = FUN_1447210f0(param_1), (*(byte *)(lVar3 + 0x155) & 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147c9ff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1[0x7a] + 0x660))((longlong *)param_1[0x7a],param_2);
      return;
    }
    return;
  }
LAB_147c9fec1:
  uVar2 = FUN_14477b072(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000147c9fee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 147c9ff88 FUN_147c9ff88 body=1759 status=ok
// SIG undefined FUN_147c9ff88(void)

void FUN_147c9ff88(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  double local_e0;
  double local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined4 local_8c;
  undefined8 local_88;
  int local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_5;
  local_c8 = param_4;
  FUN_147a36978();
  lVar1 = param_2 + 0xa8;
  *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xe0) = 0;
  *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
  local_b0 = 0;
  FUN_147a36bcc(param_1,&local_a0);
  FUN_1400021e4(&local_a0,&local_88);
  puVar3 = local_88;
  if (local_80 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_78,L"STATE %s",puVar3);
  FUN_147d8f316(lVar1,&local_78);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if ((longlong)(int)param_3[1] != 0) {
    lVar5 = 0;
    do {
      if (*(ulonglong *)(*param_3 + lVar5) == (ulonglong)DAT_14c892cd4) {
        if (param_1[0x89] == 0) {
          *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
          *(undefined4 *)(param_2 + 0xdc) = 0;
          *(undefined4 *)(param_2 + 0xe0) = 0;
          *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
          local_88 = (undefined2 *)((ulonglong)local_88._4_4_ << 0x20);
          FUN_140056680(&local_78,L"<<<< NO CAMERA >>>>");
          FUN_147d8f316(lVar1,&local_78);
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          local_88 = (undefined2 *)((ulonglong)local_88._4_4_ << 0x20);
          FUN_140056680(&local_78,L"<<<< CAMERA >>>>");
          FUN_147d8f316(lVar1,&local_78,&local_88);
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          local_e8 = param_5;
          (**(code **)(*(longlong *)param_1[0x89] + 0x5a0))
                    ((longlong *)param_1[0x89],param_2,param_3,local_c8);
        }
        break;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)param_3[1] * 8 != lVar5);
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if ((longlong)(int)param_3[1] != 0) {
    lVar5 = 0;
LAB_147ca00f0:
    if (*(ulonglong *)(*param_3 + lVar5) != (ulonglong)DAT_14c892e78) goto code_r0x000147ca00fa;
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    local_d0 = param_3;
    local_c0 = param_1;
    (**(code **)(*param_1 + 0xd80))(param_1);
    *(undefined1 **)(param_2 + 0xd8) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_2 + 0xe0) = &DAT_3f8000003f800000;
    local_a0 = (undefined2 *)((ulonglong)local_a0 & 0xffffffff00000000);
    FUN_140056680(&local_88,L"<<<< INPUT STACK >>>");
    FUN_147d8f316(lVar1,&local_88,&local_a0);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (0 < (longlong)(int)uStack_70) {
      uVar4 = (longlong)(int)uStack_70 + 1;
      do {
        lVar5 = *(longlong *)(*(longlong *)(local_78 + uVar4 * 4 + -8) + 0xa8);
        *(undefined1 **)(param_2 + 0xd8) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_2 + 0xe0) = &DAT_3f8000003f800000;
        if (lVar5 == 0) {
          local_b0 = 0;
          local_88 = *(undefined2 **)(*(longlong *)(local_78 + uVar4 * 4 + -8) + 0x18);
          FUN_1400021e4(&local_88,&local_a0);
          puVar3 = &DAT_149dfb77a;
          if (local_98 != 0) {
            puVar3 = local_a0;
          }
          FUN_140002266(&local_88,&DAT_14a1ca408,puVar3);
          FUN_147d8f316(lVar1,&local_88,&local_b0);
          puVar3 = local_88;
        }
        else {
          local_8c = 0;
          local_88 = *(undefined2 **)(*(longlong *)(local_78 + uVar4 * 4 + -8) + 0x18);
          FUN_1400021e4(&local_88,&local_a0);
          puVar3 = &DAT_149dfb77a;
          if (local_98 != 0) {
            puVar3 = local_a0;
          }
          local_88 = *(undefined2 **)(lVar5 + 0x18);
          FUN_1400021e4(&local_88,&local_b0);
          puVar6 = &DAT_149dfb77a;
          if (local_a8 != 0) {
            puVar6 = (undefined2 *)CONCAT44(uStack_ac,local_b0);
          }
          FUN_140002266(&local_88,L" %s.%s",puVar6,puVar3);
          FUN_147d8f316(lVar1,&local_88,&local_8c);
          if (local_88 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          puVar3 = (undefined2 *)CONCAT44(uStack_ac,local_b0);
        }
        if (puVar3 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar4 = uVar4 - 1;
      } while (1 < uVar4);
    }
    param_1 = local_c0;
    param_3 = local_d0;
    plVar2 = (longlong *)local_c0[0xa1];
    if (plVar2 == (longlong *)0x0) {
      *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
      *(undefined4 *)(param_2 + 0xdc) = 0;
      *(undefined4 *)(param_2 + 0xe0) = 0;
      *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
      local_a0 = (undefined2 *)((ulonglong)local_a0 & 0xffffffff00000000);
      FUN_140056680(&local_88,L"NO INPUT");
      FUN_147d8f316(lVar1,&local_88,&local_a0);
      param_3 = local_d0;
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      local_e8 = param_5;
      (**(code **)(*plVar2 + 0x2d0))(plVar2,param_2,local_d0,local_c8);
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_147ca0103:
  FUN_1446ddc76(&local_b8,"ForceFeedback");
  if ((longlong)(int)param_3[1] != 0) {
    lVar5 = 0;
    do {
      if (*(longlong *)(*param_3 + lVar5) == local_b8) {
        *(undefined1 **)(param_2 + 0xd8) = &DAT_3f8000003f800000;
        *(undefined1 **)(param_2 + 0xe0) = &DAT_3f8000003f800000;
        local_88 = (undefined2 *)((ulonglong)local_88 & 0xffffffff00000000);
        pwVar7 = L"true";
        if ((*(byte *)((longlong)param_1 + 0x634) & 0x20) == 0) {
          pwVar7 = L"false";
        }
        local_d8 = (double)*(float *)((longlong)param_1 + 0x58c);
        local_e0 = (double)*(float *)(param_1 + 0xb1);
        local_e8 = (undefined4 *)(double)*(float *)((longlong)param_1 + 0x584);
        FUN_140002266(&local_78,L"Force Feedback - Enabled: %s LL: %.2f LS: %.2f RL: %.2f RS: %.2f",
                      pwVar7,(double)*(float *)(param_1 + 0xb0));
        FUN_147d8f316(lVar1,&local_78,&local_88);
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        local_b0 = 0;
        if (param_1[0x87] == 0) {
          FUN_140002266(&local_78,L"Pawn: %s",&DAT_149e62e78);
          FUN_147d8f316(lVar1,&local_78,&local_b0);
          puVar3 = local_78;
        }
        else {
          local_a0 = *(undefined2 **)(param_1[0x87] + 0x18);
          FUN_1400021e4(&local_a0,&local_88);
          puVar3 = local_88;
          if (local_80 == 0) {
            puVar3 = &DAT_149dfb77a;
          }
          FUN_140002266(&local_78,L"Pawn: %s",puVar3);
          FUN_147d8f316(lVar1,&local_78,&local_b0);
          puVar3 = local_88;
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
            puVar3 = local_88;
          }
        }
        if (puVar3 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)param_3[1] * 8 != lVar5);
  }
  *param_5 = *(undefined4 *)(param_2 + 0x2c4);
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000147ca00fa:
  lVar5 = lVar5 + 8;
  if ((longlong)(int)param_3[1] * 8 == lVar5) goto LAB_147ca0103;
  goto LAB_147ca00f0;
}



// FUNCTION 147ca0668 FUN_147ca0668 body=252 status=ok
// SIG undefined FUN_147ca0668(void)

void FUN_147ca0668(longlong *param_1,undefined8 param_2,byte param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar4;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined1 auStack_58 [36];
  byte local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  ulonglong uVar3;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar2 = (byte)param_2 & param_3;
  uVar3 = (ulonglong)bVar2;
  *(uint *)(param_1 + 0xb4) =
       (*(uint *)(param_1 + 0xb4) & 0xfffffff9) + (uint)bVar2 * 4 + ((uint)param_2 & 0xff) * 2;
  plVar1 = (longlong *)param_1[0x7a];
  if ((byte)((byte)param_2 ^ 1 | param_3) == 1 && plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x330))(plVar1,uVar3);
    uVar3 = CONCAT71((int7)(uVar3 >> 8),(char)param_1[0xb4]) & 0xffffffffffffff02;
    param_2 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 1);
  }
  (**(code **)(*param_1 + 0xb68))
            (param_1,param_2,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff,
             CONCAT71((int7)((ulonglong)unaff_RDI >> 8),param_6) & 0xffffffff);
  local_34 = *(byte *)(param_1 + 0xb4) >> 1 & 1;
  local_33 = param_5;
  local_32 = param_6;
  local_31 = param_4;
  uVar4 = FUN_14477b072(param_1,DAT_14caf9768);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_34);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca0766 FUN_147ca0766 body=179 status=ok
// SIG undefined FUN_147ca0766(void)

void FUN_147ca0766(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  char param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *(uint *)(param_1 + 0xb4) = (*(uint *)(param_1 + 0xb4) & 0xfffffffd) + ((uint)param_2 & 0xff) * 2;
  lVar1 = param_1[0x88];
  if (lVar1 != 0 && param_5 == '\x01') {
    uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(lVar1 + 0x398)) &
            0xfffffffffffffffd;
    uVar2 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 | (char)param_2 * '\x02') ^ 2;
    *(char *)(lVar1 + 0x398) = (char)uVar2;
    if (param_1[0x86] != 0) {
      FUN_1449db7f2();
    }
    if (param_1[0xe1] != 0) {
      uVar2 = CONCAT71((int7)(uVar2 >> 8),*(undefined1 *)(param_1[0x88] + 0x398)) &
              0xffffffffffffff02;
      FUN_146a89db6(param_1[0xe1],CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 1),1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147ca0816. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb68))(param_1,(*(uint *)(param_1 + 0xb4) & 2) >> 1,param_3,param_4);
  return;
}



// FUNCTION 147ca0828 FUN_147ca0828 body=332 status=ok
// SIG undefined FUN_147ca0828(void)

void FUN_147ca0828(longlong *param_1,longlong *param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = FUN_14487fd02();
  uVar3 = 0x80000000;
  if (iVar1 != 3) {
    if (param_1[0xc1] == 0) {
      uVar3 = 0;
    }
    else {
      (**(code **)(*param_2 + 0x2d0))(param_2,&local_68);
      FUN_14098f2e8(param_1,&local_60,local_68,1);
      local_88 = param_4;
      FUN_147bcc934(param_1[0xc1],&local_6c,param_2,local_60);
      uVar3 = local_6c;
    }
  }
  (**(code **)(*param_2 + 0x2d0))(param_2,&local_80);
  FUN_14098f2e8(param_1,&local_78,local_80,0);
  local_60 = local_78;
  local_56 = param_5;
  local_54 = param_7;
  local_4c = param_6;
  local_58 = param_3;
  local_57 = param_4;
  local_50 = uVar3;
  uVar2 = FUN_14477b072(param_1,DAT_14caf9880);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_60);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca0976 FUN_147ca0976 body=243 status=ok
// SIG undefined FUN_147ca0976(void)

void FUN_147ca0976(longlong *param_1,undefined8 param_2,char param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14497e828();
  if (lVar2 != 0) {
    uVar3 = FUN_14497e828(param_1);
    plVar4 = (longlong *)FUN_140fe13cc(uVar3,0);
    if (plVar4 == param_1) {
      if (param_3 != '\0') {
        *(undefined4 *)(param_1 + 0xb3) = 0;
        if (*(int *)((longlong)param_1 + 0x59c) != 0) {
          FUN_1402191ca(param_1 + 0xb2,0);
        }
        uVar3 = FUN_1401b4c98(param_1);
        plVar4 = param_1 + 0xe6;
        lVar2 = FUN_144a61814(uVar3,plVar4);
        if (lVar2 != 0) {
          FUN_1405a424c(uVar3,*plVar4);
        }
        *plVar4 = 0;
      }
      iVar1 = (int)param_1[0xb3];
      *(uint *)(param_1 + 0xb3) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x59c) < iVar1 + 1U) {
        FUN_1446f84a2(param_1 + 0xb2,iVar1);
      }
      *(undefined8 *)(param_1[0xb2] + (longlong)iVar1 * 8) = param_2;
      if (param_4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147ca0a62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xbd0))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147ca0a6a FUN_147ca0a6a body=401 status=ok
// SIG undefined FUN_147ca0a6a(void)

void FUN_147ca0a6a(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = FUN_1447210f0();
  cVar3 = FUN_145a9f650(uVar4);
  if (cVar3 != '\0') {
    uVar4 = FUN_1401b4c98(param_1);
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    puVar1 = local_98;
    local_90 = 3;
    *local_98 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_98[2] = lVar5;
    *local_98 = &PTR_FUN_14aa4d800;
    local_98[3] = 0;
    FUN_14485c47a(local_98 + 3,param_1);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = &LAB_147ca0c0c;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_98);
    local_48 = 1;
    local_a0 = 0xbf800000;
    local_a8 = 0;
    FUN_1406f3fee(uVar4,param_1 + 0x730,&local_88,0x3c23d70a);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    FUN_1449db362(&local_98);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    FUN_14378b862(uVar4,param_1 + 0x590);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca0c1a FUN_147ca0c1a body=481 status=ok
// SIG undefined FUN_147ca0c1a(void)

void FUN_147ca0c1a(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = FUN_1401b4c98();
  local_88 = param_1[0xe6];
  lVar3 = FUN_144a61814(uVar2);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 1) != '\x02')) {
    uVar2 = FUN_1401b4c98(param_1);
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    puVar1 = local_98;
    local_90 = 3;
    *local_98 = &PTR_LAB_14a1c8830;
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
    local_98[2] = lVar4;
    *local_98 = &PTR_FUN_14aa4d800;
    local_98[3] = 0;
    FUN_14485c47a(local_98 + 3,param_1);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_147c948c2;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_98);
    local_48 = 1;
    local_a0 = 0xbf800000;
    local_a8 = 0;
    FUN_1406f3fee(uVar2,param_1 + 0xe7,&local_88,0x3c23d70a);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    FUN_1449db362(&local_98);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
  }
  if ((char)param_1[0x8b] == '\x01') {
    plVar5 = (longlong *)param_1[0x7a];
    if ((plVar5 == (longlong *)0x0) &&
       (plVar5 = (longlong *)param_1[0xf4], plVar5 == (longlong *)0x0)) {
      lVar3 = *param_1;
      plVar5 = param_1;
    }
    else {
      lVar3 = *param_1;
    }
    (**(code **)(lVar3 + 0xe40))(param_1,plVar5);
  }
  uVar2 = FUN_1447210f0(param_1);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    FUN_14378b892(uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca0e0c FUN_147ca0e0c body=21 status=ok
// SIG undefined FUN_147ca0e0c(void)

void FUN_147ca0e0c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1447210f0();
  FUN_147dab178(uVar1);
  return;
}



// FUNCTION 147ca0e22 FUN_147ca0e22 body=21 status=ok
// SIG undefined FUN_147ca0e22(void)

void FUN_147ca0e22(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  *(byte *)(lVar1 + 0x154) = *(byte *)(lVar1 + 0x154) | 0x40;
  return;
}



// FUNCTION 147ca0e42 FUN_147ca0e42 body=118 status=ok
// SIG undefined FUN_147ca0e42(void)

void FUN_147ca0e42(longlong param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x398) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x398) + 0x570))();
    (**(code **)(**(longlong **)(param_2 + 0x398) + 0x6d8))
              (*(longlong **)(param_2 + 0x398),*(undefined8 *)(param_1 + 0x398));
    FUN_140aeefbc(*(undefined8 *)(param_2 + 0x398),0,1);
    FUN_145ad9df8(param_2,0);
  }
  *(undefined2 *)(param_1 + 0x670) = *(undefined2 *)(param_2 + 0x670);
  *(undefined2 *)(param_1 + 0x672) = *(undefined2 *)(param_2 + 0x672);
  return;
}



// FUNCTION 147ca0eca FUN_147ca0eca body=140 status=ok
// SIG undefined FUN_147ca0eca(void)

void FUN_147ca0eca(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar3 = FUN_1449db7f2();
    lVar1 = *(longlong *)(param_1 + 0x430);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      uVar4 = FUN_1447210f0(param_1);
      plVar5 = (longlong *)FUN_140489acc();
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x370 + (ulonglong)(param_2 ^ 1) * 8);
                    /* WARNING: Could not recover jumptable at 0x000147ca0f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar5,uVar4,*(undefined1 *)(lVar1 + 0xe0),UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  return;
}



// FUNCTION 147ca0f56 FUN_147ca0f56 body=87 status=ok
// SIG undefined FUN_147ca0f56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ca0f56(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_147ca87f6(param_1 + 0x5a8,param_1,param_2);
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 1:
    return;
  case 2:
    param_2[1] = switchD_1458da17c::caseD_0;
    param_2[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_2 + 1) = 0x4053b5c6;
    return;
  }
  plVar3 = (longlong *)param_2[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147ca0fae FUN_147ca0fae body=123 status=ok
// SIG undefined FUN_147ca0fae(void)

ulonglong FUN_147ca0fae(undefined8 param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  puVar1 = (uint *)(param_2 + 1);
  if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 3)] == '\x01') {
    if (*(longlong **)puVar1 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)puVar1 + 0x28))();
      uVar3 = (ulonglong)uVar2;
    }
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(*puVar1 & 0xffffff) != 0);
  }
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(puVar1);
  return uVar3 & 0xffffffff;
}



// FUNCTION 147ca102a FUN_147ca102a body=87 status=ok
// SIG undefined FUN_147ca102a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ca102a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_147ca88d4(param_1 + 0x5a8,param_1,param_2);
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 1:
    return;
  case 2:
    param_2[1] = switchD_1458da17c::caseD_0;
    param_2[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_2 + 1) = 0x4053b5c6;
    return;
  }
  plVar3 = (longlong *)param_2[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147ca1082 FUN_147ca1082 body=123 status=ok
// SIG undefined FUN_147ca1082(void)

ulonglong FUN_147ca1082(undefined8 param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  puVar1 = (uint *)(param_2 + 1);
  if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 3)] == '\x01') {
    if (*(longlong **)puVar1 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)puVar1 + 0x28))();
      uVar3 = (ulonglong)uVar2;
    }
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(*puVar1 & 0xffffff) != 0);
  }
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(puVar1);
  return uVar3 & 0xffffffff;
}



// FUNCTION 147ca10fe FUN_147ca10fe body=352 status=ok
// SIG undefined FUN_147ca10fe(void)

void FUN_147ca10fe(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar3 = FUN_1449db7f2();
    lVar4 = *(longlong *)(param_1 + 0x430);
    if (lVar4 != 0) {
      lVar6 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 == 0)) goto LAB_147ca1173;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar6 = lVar4;
        }
        goto LAB_147ca1173;
      }
    }
  }
  lVar6 = 0;
LAB_147ca1173:
  lVar4 = FUN_1447210f0(param_1);
  FUN_1408e4d18(param_2,local_40);
  FUN_147ca8632(param_1 + 0x5a8,local_40,1);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (lVar4 != 0 && lVar6 != 0) {
    plVar5 = (longlong *)FUN_140489acc();
    local_48 = 0;
    (**(code **)(*plVar5 + 0x388))(plVar5,lVar4,*(undefined1 *)(lVar6 + 0xe0),param_2);
  }
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(param_2 + 1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca1260 FUN_147ca1260 body=352 status=ok
// SIG undefined FUN_147ca1260(void)

void FUN_147ca1260(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar3 = FUN_1449db7f2();
    lVar4 = *(longlong *)(param_1 + 0x430);
    if (lVar4 != 0) {
      lVar6 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 == 0)) goto LAB_147ca12d5;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar6 = lVar4;
        }
        goto LAB_147ca12d5;
      }
    }
  }
  lVar6 = 0;
LAB_147ca12d5:
  lVar4 = FUN_1447210f0(param_1);
  FUN_1408e4d18(param_2,local_40);
  FUN_147ca86e2(param_1 + 0x5a8,local_40,1);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (lVar4 != 0 && lVar6 != 0) {
    plVar5 = (longlong *)FUN_140489acc();
    local_48 = 0;
    (**(code **)(*plVar5 + 0x390))(plVar5,lVar4,*(undefined1 *)(lVar6 + 0xe0),param_2);
  }
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(param_2 + 1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca13c2 FUN_147ca13c2 body=260 status=ok
// SIG undefined FUN_147ca13c2(void)

void FUN_147ca13c2(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar2 = FUN_1449db7f2();
    lVar3 = *(longlong *)(param_1 + 0x430);
    if (lVar3 != 0) {
      lVar5 = 0;
      if ((lVar2 == 0) || (lVar6 = *(longlong *)(lVar3 + 0x10), lVar6 == 0)) goto LAB_147ca1426;
      if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar6 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30) {
          lVar5 = lVar3;
        }
        goto LAB_147ca1426;
      }
    }
  }
  lVar5 = 0;
LAB_147ca1426:
  lVar3 = FUN_1447210f0(param_1);
  if ((lVar3 != 0 && lVar5 != 0) && ((longlong)(int)param_2[1] != 0)) {
    lVar2 = *param_2;
    lVar6 = (longlong)(int)param_2[1] * 0x30;
    do {
      if ((&DAT_149fc1b6e)[*(byte *)(lVar2 + 0x18)] == '\x01') {
        if ((*(longlong **)(lVar2 + 8) != (longlong *)0x0) &&
           (cVar1 = (**(code **)(**(longlong **)(lVar2 + 8) + 0x28))(), cVar1 != '\0')) {
LAB_147ca1485:
          plVar4 = (longlong *)FUN_140489acc();
          (**(code **)(*plVar4 + 0x390))(plVar4,lVar3,*(undefined1 *)(lVar5 + 0xe0),lVar2,0);
        }
      }
      else if ((*(uint *)(lVar2 + 8) & 0xffffff) != 0) goto LAB_147ca1485;
      lVar2 = lVar2 + 0x30;
      lVar6 = lVar6 + -0x30;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 147ca14c6 FUN_147ca14c6 body=87 status=ok
// SIG undefined FUN_147ca14c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ca14c6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_147ca89b2(param_1 + 0x5a8,param_1,param_2);
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 1:
    return;
  case 2:
    param_2[1] = switchD_1458da17c::caseD_0;
    param_2[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_2 + 1) = 0x4053b5c6;
    return;
  }
  plVar3 = (longlong *)param_2[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147ca151e FUN_147ca151e body=188 status=ok
// SIG undefined FUN_147ca151e(void)

ulonglong FUN_147ca151e(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar1 = (uint *)(param_2 + 1);
  if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 3)] == '\x01') {
    if ((*(longlong **)puVar1 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(**(longlong **)puVar1 + 0x28))(), cVar3 != '\0')) {
LAB_147ca155f:
      lVar2 = *(longlong *)(param_1 + 0x398);
      if ((&DAT_149fc1b6e)[*(byte *)(lVar2 + 0x3b8)] != '\x01') {
        uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),(*(uint *)(lVar2 + 0x3a8) & 0xffffff) != 0)
        ;
        goto LAB_147ca158c;
      }
      if (*(longlong **)(lVar2 + 0x3a8) != (longlong *)0x0) {
        uVar4 = (**(code **)(**(longlong **)(lVar2 + 0x3a8) + 0x28))();
        uVar5 = (ulonglong)uVar4;
        goto LAB_147ca158c;
      }
    }
  }
  else if ((*puVar1 & 0xffffff) != 0) goto LAB_147ca155f;
  uVar5 = 0;
LAB_147ca158c:
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(puVar1);
  return uVar5 & 0xffffffff;
}



// FUNCTION 147ca15da FUN_147ca15da body=87 status=ok
// SIG undefined FUN_147ca15da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ca15da(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_147ca8afa(param_1 + 0x5a8,param_1,param_2);
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 1:
    return;
  case 2:
    param_2[1] = switchD_1458da17c::caseD_0;
    param_2[2] = (undefined *)0x1470afba2;
    LOCK();
    FUN_1470afba4 = FUN_1470afba4 + 1;
    UNLOCK();
    return;
  case 3:
    *(undefined4 *)(param_2 + 1) = 0x4053b5c6;
    return;
  }
  plVar3 = (longlong *)param_2[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147ca1632 FUN_147ca1632 body=188 status=ok
// SIG undefined FUN_147ca1632(void)

ulonglong FUN_147ca1632(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar1 = (uint *)(param_2 + 1);
  if ((&DAT_149fc1b6e)[*(byte *)(param_2 + 3)] == '\x01') {
    if ((*(longlong **)puVar1 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(**(longlong **)puVar1 + 0x28))(), cVar3 != '\0')) {
LAB_147ca1673:
      lVar2 = *(longlong *)(param_1 + 0x398);
      if ((&DAT_149fc1b6e)[*(byte *)(lVar2 + 0x3b8)] != '\x01') {
        uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),(*(uint *)(lVar2 + 0x3a8) & 0xffffff) != 0)
        ;
        goto LAB_147ca16a0;
      }
      if (*(longlong **)(lVar2 + 0x3a8) != (longlong *)0x0) {
        uVar4 = (**(code **)(**(longlong **)(lVar2 + 0x3a8) + 0x28))();
        uVar5 = (ulonglong)uVar4;
        goto LAB_147ca16a0;
      }
    }
  }
  else if ((*puVar1 & 0xffffff) != 0) goto LAB_147ca1673;
  uVar5 = 0;
LAB_147ca16a0:
  *param_2 = &PTR_FUN_14a5af930;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  *param_2 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 3)])(puVar1);
  return uVar5 & 0xffffffff;
}



// FUNCTION 147ca16ee FUN_147ca16ee body=29 status=ok
// SIG undefined FUN_147ca16ee(void)

void FUN_147ca16ee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1447210f0();
  FUN_1463ce09c(uVar1,param_2);
  return;
}



// FUNCTION 147ca171a FUN_147ca171a body=147 status=ok
// SIG undefined FUN_147ca171a(void)

void FUN_147ca171a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = FUN_14016169c(param_1,&local_14);
  if (((cVar1 == '\0') || (local_14 == 0)) && (*(longlong *)(param_1 + 0x398) != 0)) {
    lVar2 = FUN_14497e828(param_1);
    if (lVar2 != 0) {
      lVar2 = FUN_14497e828(param_1);
      if (*(longlong *)(lVar2 + 0x48) != 0) {
        lVar2 = FUN_14497e828(param_1);
        (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x2b8))
                  (*(longlong **)(lVar2 + 0x48),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x398) + 0x3f0));
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca17ae FUN_147ca17ae body=147 status=ok
// SIG undefined FUN_147ca17ae(void)

void FUN_147ca17ae(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = FUN_14016169c(param_1,&local_14);
  if (((cVar1 == '\0') || (local_14 == 0)) && (*(longlong *)(param_1 + 0x398) != 0)) {
    lVar2 = FUN_14497e828(param_1);
    if (lVar2 != 0) {
      lVar2 = FUN_14497e828(param_1);
      if (*(longlong *)(lVar2 + 0x48) != 0) {
        lVar2 = FUN_14497e828(param_1);
        (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x2c0))
                  (*(longlong **)(lVar2 + 0x48),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x398) + 0x3f0));
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca1842 FUN_147ca1842 body=124 status=ok
// SIG undefined FUN_147ca1842(void)

void FUN_147ca1842(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_14016169c(param_1,&local_34);
    if ((cVar1 == '\0') || (local_34 == 0)) {
      local_40 = 0;
      local_48 = param_4;
      (**(code **)(*param_2 + 0x560))(param_2,0,0,param_3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca18c0 FUN_147ca18c0 body=121 status=ok
// SIG undefined FUN_147ca18c0(void)

void FUN_147ca18c0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  char cVar1;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_14016169c(param_1,&local_34);
    if ((cVar1 == '\0') || (local_34 == 0)) {
      (**(code **)(*param_2 + 0x580))(param_2,param_3,param_4,param_5);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca193a FUN_147ca193a body=272 status=ok
// SIG undefined FUN_147ca193a(void)

void FUN_147ca193a(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    if ((*param_3 != 0) && (uVar5 = (ulonglong)*(int *)(param_1 + 0x518), 0 < (longlong)uVar5)) {
      plVar1 = (longlong *)(param_1 + 0x510);
      lVar4 = uVar5 * 0x70;
      do {
        lVar4 = lVar4 + -0x70;
        if (*(longlong *)(*plVar1 + 8 + lVar4) == *param_3) {
          FUN_1434e6f1c(*plVar1 + lVar4);
          FUN_147ca7b70(plVar1,(int)uVar5 + -1);
          FUN_147ca7bd8(plVar1);
        }
        bVar3 = 1 < uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar3);
    }
    FUN_147c9996e(param_1,&local_4c);
    iVar2 = *(int *)(param_1 + 0x518);
    *(uint *)(param_1 + 0x518) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x51c) < iVar2 + 1U) {
      FUN_147ca7cee((longlong *)(param_1 + 0x510),iVar2);
    }
    local_48 = *param_3;
    local_40 = (undefined4)param_3[1];
    FUN_147ca7c7e((longlong)iVar2 * 0x70 + *(longlong *)(param_1 + 0x510),param_2,&local_48,local_4c
                 );
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ca1a4c FUN_147ca1a4c body=251 status=ok
// SIG undefined FUN_147ca1a4c(void)

void FUN_147ca1a4c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x510);
  if (param_2 == 0 && param_3 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x510);
    uVar3 = 0;
    if ((longlong)*(int *)(param_1 + 0x518) != 0) {
      lVar4 = (longlong)*(int *)(param_1 + 0x518) * 0x70;
      do {
        FUN_1434e6f1c(lVar6);
        lVar6 = lVar6 + 0x70;
        lVar4 = lVar4 + -0x70;
      } while (lVar4 != 0);
      uVar3 = *(undefined4 *)(param_1 + 0x518);
      lVar6 = *(longlong *)(param_1 + 0x510);
    }
    FUN_1459685d8(lVar6,uVar3);
    *(undefined4 *)(param_1 + 0x518) = 0;
    if (*(int *)(param_1 + 0x51c) != 0) {
      FUN_147ca7d7e(plVar1);
      return;
    }
  }
  else {
    uVar5 = (ulonglong)*(int *)(param_1 + 0x518);
    if (0 < (longlong)uVar5) {
      lVar6 = uVar5 * 0x70;
      do {
        lVar6 = lVar6 + -0x70;
        lVar4 = *plVar1;
        if (((param_2 == 0) || (*(longlong *)(lVar4 + lVar6) == param_2)) &&
           ((param_3 == 0 || (*(longlong *)(lVar4 + 8 + lVar6) == param_3)))) {
          FUN_1434e6f1c(lVar4 + lVar6);
          FUN_147ca7b70(plVar1,(int)uVar5 + -1);
          FUN_147ca7bd8(plVar1);
        }
        bVar2 = 1 < uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar2);
    }
  }
  return;
}



// FUNCTION 147ca1b48 FUN_147ca1b48 body=115 status=ok
// SIG undefined FUN_147ca1b48(void)

void FUN_147ca1b48(uint *param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) != 0) {
    fVar2 = (float)param_1[1];
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    if (fVar2 <= *param_2) {
      fVar2 = *param_2;
    }
    *param_2 = fVar2;
    uVar1 = *param_1;
  }
  if ((uVar1 & 2) != 0) {
    fVar2 = (float)param_1[1];
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    if (fVar2 <= param_2[1]) {
      fVar2 = param_2[1];
    }
    param_2[1] = fVar2;
    uVar1 = *param_1;
  }
  if ((uVar1 & 4) != 0) {
    fVar2 = (float)param_1[1];
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    if (fVar2 <= param_2[2]) {
      fVar2 = param_2[2];
    }
    param_2[2] = fVar2;
    uVar1 = *param_1;
  }
  if ((uVar1 & 8) != 0) {
    fVar2 = (float)param_1[1];
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    if (fVar2 <= param_2[3]) {
      fVar2 = param_2[3];
    }
    param_2[3] = fVar2;
  }
  return;
}



// FUNCTION 147ca1bbc FUN_147ca1bbc body=110 status=ok
// SIG undefined FUN_147ca1bbc(void)

undefined8 *
FUN_147ca1bbc(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_1 = &PTR_FUN_14aa4cc40;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(byte *)(param_1 + 2) = (*(byte *)(param_1 + 2) & 0xfc) + 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  FUN_14485c47a((longlong)param_1 + 0x14);
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 0xf;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)(param_4 + 2);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *param_4;
  *(undefined4 *)(param_1 + 6) = param_4[1];
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  FUN_14485c47a((longlong)param_1 + 0x34,*(undefined8 *)(param_4 + 4));
  return param_1;
}



// FUNCTION 147ca1c2a FUN_147ca1c2a body=127 status=ok
// SIG undefined FUN_147ca1c2a(void)

undefined8 * FUN_147ca1c2a(undefined8 *param_1,longlong *param_2,float param_3,undefined1 param_4)

{
  *param_1 = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c();
    param_2 = (longlong *)*param_1;
  }
  *(undefined1 *)(param_1 + 1) = param_4;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  if (10.0 <= param_3) {
    param_3 = 10.0;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25) = 0;
  *(float *)(param_1 + 2) = param_3;
  (**(code **)(*param_2 + 0x2a0))(param_2,param_1 + 3);
  return param_1;
}



// FUNCTION 147ca1caa FUN_147ca1caa body=89 status=ok
// SIG undefined FUN_147ca1caa(void)

void FUN_147ca1caa(longlong param_1,byte param_2)

{
  if (param_2 != 0) {
    FUN_14364da82(param_1,0,0,0);
    FUN_14364da82(param_1,0,0,1);
    FUN_14364da82(param_1,0,0,5);
  }
  *(byte *)(param_1 + 2000) = *(byte *)(param_1 + 2000) & 0xfe | param_2;
  return;
}



// FUNCTION 147ca1d04 FUN_147ca1d04 body=167 status=ok
// SIG undefined FUN_147ca1d04(void)

void FUN_147ca1d04(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x448);
  if (plVar1 != (longlong *)0x0) {
    local_38 = *(undefined8 *)(param_5 + 4);
    local_48 = *param_5;
    uStack_44 = param_5[1];
    uStack_40 = param_5[2];
    uStack_3c = param_5[3];
    local_50 = *param_2;
    if ((local_50 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_58 = &local_48;
    (**(code **)(*plVar1 + 2000))(plVar1,&local_50,param_3,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca1dac FUN_147ca1dac body=116 status=ok
// SIG undefined FUN_147ca1dac(void)

void FUN_147ca1dac(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x448);
  if (plVar1 != (longlong *)0x0) {
    local_20 = *param_2;
    if ((local_20 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    (**(code **)(*plVar1 + 0x7e8))(plVar1,&local_20,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca1e22 FUN_147ca1e22 body=168 status=ok
// SIG undefined FUN_147ca1e22(void)

void FUN_147ca1e22(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x448);
  if (plVar1 == (longlong *)0x0) goto LAB_147ca1e8f;
  lVar2 = *param_2;
  if (lVar2 == 0) {
LAB_147ca1e70:
    local_28 = 0;
  }
  else {
    lVar3 = FUN_144a6c4d8();
    if (((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_147ca1e70;
    local_28 = *param_2;
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
  }
  (**(code **)(*plVar1 + 0x798))(plVar1,local_38,&local_28);
LAB_147ca1e8f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca1ecc FUN_147ca1ecc body=168 status=ok
// SIG undefined FUN_147ca1ecc(void)

void FUN_147ca1ecc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x448);
  if (plVar1 == (longlong *)0x0) goto LAB_147ca1f39;
  lVar2 = *param_2;
  if (lVar2 == 0) {
LAB_147ca1f1a:
    local_28 = 0;
  }
  else {
    lVar3 = FUN_1458f0e92();
    if (((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_147ca1f1a;
    local_28 = *param_2;
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
  }
  (**(code **)(*plVar1 + 0x798))(plVar1,local_38,&local_28);
LAB_147ca1f39:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca1f90 FUN_147ca1f90 body=110 status=ok
// SIG undefined FUN_147ca1f90(void)

void FUN_147ca1f90(longlong param_1,double *param_2)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  
  pdVar1 = (double *)(param_1 + 0x460);
  if (DAT_14caf9d28 == '\x01') {
    if ((((*param_2 != *pdVar1) || (NAN(*param_2) || NAN(*pdVar1))) ||
        (param_2[1] != *(double *)(param_1 + 0x468))) ||
       (((NAN(param_2[1]) || NAN(*(double *)(param_1 + 0x468)) ||
         (param_2[2] != *(double *)(param_1 + 0x470))) ||
        (NAN(param_2[2]) || NAN(*(double *)(param_1 + 0x470)))))) {
      *(double *)(param_1 + 0x470) = param_2[2];
      uVar2 = *(undefined4 *)param_2;
      uVar3 = *(undefined4 *)((longlong)param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined4 *)pdVar1 = uVar2;
      *(undefined4 *)(param_1 + 0x464) = uVar3;
      *(undefined4 *)(param_1 + 0x468) = uVar4;
      *(undefined4 *)(param_1 + 0x46c) = uVar5;
      FUN_144a62f0c(uVar2,*(undefined8 *)(param_1 + 0x28),0xd);
      return;
    }
  }
  else {
    *(double *)(param_1 + 0x470) = param_2[2];
    dVar6 = param_2[1];
    *pdVar1 = *param_2;
    *(double *)(param_1 + 0x468) = dVar6;
  }
  return;
}



// FUNCTION 147ca1ffe FUN_147ca1ffe body=355 status=ok
// SIG undefined FUN_147ca1ffe(void)

undefined8 FUN_147ca1ffe(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar5 = FUN_1449db7f2();
    plVar2 = *(longlong **)(param_1 + 0x430);
    if ((((plVar2 != (longlong *)0x0) && (lVar5 != 0)) && (lVar3 = plVar2[2], lVar3 != 0)) &&
       (((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38) && (param_2 != 0)) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
         lVar5 + 0x30)))) {
      (**(code **)(*plVar2 + 0x2b8))(plVar2,&local_30);
      if (local_30 == 0) {
        cVar4 = '\0';
      }
      else {
        FUN_140761b7a(param_2,&local_50);
        local_40 = local_50;
        local_38 = local_48;
        if (local_48 == (longlong *)0x0) {
          cVar4 = FUN_1469b746c(local_30,&local_40);
        }
        else {
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
          cVar4 = FUN_1469b746c(local_30,&local_40);
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_48 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar1 = (int *)((longlong)local_48 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_48 + 0x10))(local_48);
              }
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
      uVar6 = 1;
      if (cVar4 != '\0') goto LAB_147ca2132;
    }
  }
  uVar6 = 0;
LAB_147ca2132:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca2162 FUN_147ca2162 body=53 status=ok
// SIG undefined FUN_147ca2162(void)

bool FUN_147ca2162(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_14093f908();
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_14093f908(param_1);
    bVar2 = *(longlong *)(param_1 + 0x398) == *(longlong *)(lVar1 + 0x588);
  }
  return bVar2;
}



// FUNCTION 147ca2198 FUN_147ca2198 body=115 status=ok
// SIG undefined FUN_147ca2198(void)

void FUN_147ca2198(longlong *param_1)

{
  longlong lVar1;
  
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  (**(code **)(*param_1 + 0x678))(param_1,DAT_14c893048);
  lVar1 = param_1[0x73];
  FUN_144a62f0c(lVar1,*(undefined8 *)(lVar1 + 0x28),0xe);
  *(byte *)(lVar1 + 0x39a) = *(byte *)(lVar1 + 0x39a) | 2;
  FUN_147ca924a(param_1[0x73],1);
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xef;
  return;
}



// FUNCTION 147ca2242 FUN_147ca2242 body=132 status=ok
// SIG undefined FUN_147ca2242(void)

void FUN_147ca2242(longlong *param_1,float param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  double dVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x758))();
  dVar5 = 0.0;
  if (cVar1 == '\0') {
    plVar2 = (longlong *)FUN_140389788();
    lVar3 = plVar2[0x22];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar3 = plVar2[0x22];
    }
    if ((*(byte *)(lVar3 + 0x48) & 0x40) == 0) {
      fVar4 = 1.0;
    }
    else {
      fVar4 = *(float *)(param_1 + 0xc6);
    }
    dVar5 = (double)(fVar4 * param_2);
  }
  param_1[0xc4] = (longlong)(dVar5 + (double)param_1[0xc4]);
  return;
}



// FUNCTION 147ca22c6 FUN_147ca22c6 body=485 status=ok
// SIG undefined FUN_147ca22c6(void)

void FUN_147ca22c6(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0xe3] = (longlong)param_2;
    if (param_2 == (longlong *)0x0) {
      if (param_1[0xe1] != 0) {
        if (param_1[0x86] != 0) {
          lVar6 = FUN_1449db7f2();
          lVar2 = param_1[0x86];
          if ((((lVar2 != 0) && (lVar6 != 0)) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0))
             && (((*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38) &&
                  (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                   == lVar6 + 0x30)) &&
                 (plVar4 = *(longlong **)(lVar2 + 0x78), plVar4 != (longlong *)0x0)))) {
            local_38 = param_1[0xe1];
            plVar5 = (longlong *)param_1[0xe2];
            if (plVar5 == (longlong *)0x0) {
              local_30 = (longlong *)0x0;
              (**(code **)(*plVar4 + 0x2e0))();
            }
            else {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              local_30 = plVar5;
              (**(code **)(*plVar4 + 0x2e0))();
              LOCK();
              plVar4 = plVar5 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
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
        }
        (**(code **)(*param_1 + 0xcf8))(param_1);
        param_1[0xe1] = 0;
        plVar4 = (longlong *)param_1[0xe2];
        if (plVar4 != (longlong *)0x0) {
          param_1[0xe2] = 0;
          LOCK();
          plVar5 = plVar4 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
      }
      goto LAB_147ca233a;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    param_1[0xe3] = (longlong)param_2;
  }
  local_28 = param_1[0xe1];
  if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  local_20 = param_1[0xe2];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_2 + 0x2a0))(param_2,&local_28);
LAB_147ca233a:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca24d6 FUN_147ca24d6 body=124 status=ok
// SIG undefined FUN_147ca24d6(void)

longlong FUN_147ca24d6(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return param_1;
}



// FUNCTION 147ca2552 FUN_147ca2552 body=7 status=ok
// SIG undefined FUN_147ca2552(void)

longlong FUN_147ca2552(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return param_1;
}



// FUNCTION 147ca255a FUN_147ca255a body=333 status=ok
// SIG undefined FUN_147ca255a(void)

void FUN_147ca255a(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140761b7a(param_3,&local_38);
  if (local_38 != 0) {
    if (*(char *)(param_1 + 0x18) == '\x02') {
      uVar3 = 1;
    }
    else if (*(char *)(param_1 + 0x18) == '\x03') {
      uVar3 = FUN_147acc590(param_3);
    }
    else {
      uVar3 = 0;
    }
    local_48 = local_38;
    local_40 = local_30;
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = *(int *)(local_30 + 1) + 1;
      UNLOCK();
    }
    local_58 = *(undefined8 *)(param_1 + 8);
    local_50 = *(longlong *)(param_1 + 0x10);
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    FUN_145888ece(param_2,&local_58,uVar3,&local_48);
    plVar2 = *(longlong **)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(uint *)(param_2 + 0xb4) = (*(uint *)(param_2 + 0xb4) & 0xffffffde) + 1;
    if (*(char *)(param_3 + 0x3cc) != *(char *)(param_1 + 0x18)) {
      *(char *)(param_3 + 0x3cc) = *(char *)(param_1 + 0x18);
    }
    *(undefined1 *)(param_3 + 0x3c9) = 1;
    if (*(char *)(param_3 + 0x3ca) != '\0') {
      *(undefined1 *)(param_3 + 0x3ca) = 0;
    }
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca26cc FUN_147ca26cc body=101 status=ok
// SIG undefined FUN_147ca26cc(void)

void FUN_147ca26cc(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1447210f0();
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x260), lVar2 != 0)) {
    bVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
    FUN_147c69d2e(lVar2,*(undefined4 *)(param_2 + (ulonglong)bVar1 * 4),param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 147ca2732 FUN_147ca2732 body=72 status=ok
// SIG undefined FUN_147ca2732(void)

int * FUN_147ca2732(longlong *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  
  FUN_140a175ae();
  iVar1 = *param_2;
  if ((iVar1 != -1) && (param_2[1] != -1)) {
    cVar2 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar2 != '\0') {
      *param_2 = (iVar1 - (int)param_1[0x126]) + *(int *)((longlong)param_1 + 0x914);
    }
  }
  return param_2;
}



// FUNCTION 147ca277a FUN_147ca277a body=187 status=ok
// SIG undefined FUN_147ca277a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ca277a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar5 = (int)param_2;
  if (*(int *)(param_1 + 0x91c) < iVar5) {
    *(int *)(param_1 + 0x91c) = iVar5;
    lVar2 = FUN_1447210f0();
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0x260) == 0)) ||
       (*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x260) + 0x38) + 0x9c8) + 0x430)
        == '\0')) {
      FUN_147ca2732(param_1,local_28,0);
      iVar1 = *(int *)(param_1 + 0x914);
      iVar3 = 0;
      iVar4 = (int)((ulonglong)param_2 >> 0x20);
      if (iVar1 == 0) {
        iVar3 = (local_24 - iVar4) / 2 + _DAT_14c7618d4;
      }
      iVar3 = (iVar5 - iVar4) + iVar3;
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      *(int *)(param_1 + 0x914) = iVar3;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca2836 FUN_147ca2836 body=111 status=ok
// SIG undefined FUN_147ca2836(void)

void FUN_147ca2836(longlong param_1)

{
  undefined1 auStack_38 [32];
  int local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_147ca2732(param_1,local_18,0);
  if ((*(int *)(param_1 + 0x928) != -1) && (*(int *)(param_1 + 0x928) != local_18[0])) {
    *(int *)(param_1 + 0x920) = local_18[0];
    *(undefined4 *)(param_1 + 0x924) = *(undefined4 *)(param_1 + 0x92c);
    *(undefined4 *)(param_1 + 0x928) = 0xffffffff;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca28b0 FUN_147ca28b0 body=240 status=ok
// SIG undefined FUN_147ca28b0(void)

void FUN_147ca28b0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[0x7a] != 0) {
    (**(code **)(*param_1 + 0x718))(param_1,&local_40,&local_58);
    local_78 = local_30;
    local_88 = local_40;
    uStack_80 = uStack_38;
    uStack_70 = local_58;
    uStack_6c = uStack_54;
    uStack_68 = uStack_50;
    uStack_64 = uStack_4c;
    uStack_60 = local_48;
    lVar3 = param_1[3];
    iVar2 = *(int *)(param_2 + 0x388);
    *(uint *)(param_2 + 0x388) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x38c) < iVar2 + 1U) {
      FUN_147ca8434(param_2,iVar2);
    }
    lVar4 = *(longlong *)(param_2 + 0x380);
    if (*(longlong *)(param_2 + 0x380) == 0) {
      lVar4 = param_2;
    }
    lVar5 = (longlong)iVar2 * 0x38;
    puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5);
    *puVar1 = uStack_68;
    puVar1[1] = uStack_64;
    puVar1[2] = (undefined4)uStack_60;
    puVar1[3] = uStack_60._4_4_;
    puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = uStack_70;
    puVar1[3] = uStack_6c;
    puVar1 = (undefined4 *)(lVar4 + lVar5);
    *puVar1 = (undefined4)local_88;
    puVar1[1] = local_88._4_4_;
    puVar1[2] = (undefined4)uStack_80;
    puVar1[3] = uStack_80._4_4_;
    *(longlong *)(lVar4 + 0x30 + lVar5) = lVar3;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca29a6 FUN_147ca29a6 body=62 status=ok
// SIG undefined FUN_147ca29a6(void)

void FUN_147ca29a6(longlong *param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0x128) = 1;
  if (param_2 != 0) {
    FUN_14487fd02();
                    /* WARNING: Could not recover jumptable at 0x000147ca29d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x610))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 147ca29ec FUN_147ca29ec body=190 status=ok
// SIG undefined FUN_147ca29ec(void)

void FUN_147ca29ec(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_147a36cec();
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar1 = FUN_144a75eb4();
  if (*(int *)(param_2[2] + 0x38) < *(int *)(lVar1 + 0x38)) {
    return;
  }
  if (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30) {
    return;
  }
  lVar1 = param_2[0x7a];
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x129] = lVar1;
    if (lVar1 == 0) goto LAB_147ca2a6d;
  }
  else {
    FUN_1456cec3c(lVar1);
    param_1[0x129] = lVar1;
  }
  (**(code **)(*param_2 + 0x6b0))(param_2,0);
  (**(code **)(*param_1 + 0x6b0))(param_1,param_1[0x129]);
LAB_147ca2a6d:
  if (((longlong *)param_1[0x89] != (longlong *)0x0) && (param_2[0x89] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147ca2a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0x89] + 0x610))();
    return;
  }
  return;
}



// FUNCTION 147ca2aaa FUN_147ca2aaa body=316 status=ok
// SIG undefined FUN_147ca2aaa(void)

void FUN_147ca2aaa(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_e8 [40];
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
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1[0x129] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
  }
  plVar1 = (longlong *)param_1[0x7a];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x610))(plVar1,param_1[0x129]);
    puVar4 = &DAT_14c846480;
    if (plVar1[0x39] != 0) {
      puVar4 = (undefined8 *)(plVar1[0x39] + 0x240);
    }
    (**(code **)(*param_1 + 0x680))(param_1,&local_c0);
    local_98 = local_b0;
    local_a8 = local_c0;
    uStack_a4 = uStack_bc;
    uStack_a0 = uStack_b8;
    uStack_9c = uStack_b4;
    puVar5 = local_88;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = FUN_14477b072(param_1,DAT_14caf9b10);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_a8);
    FUN_140aeefbc(param_1[0x129],1,1);
    param_1[0x129] = 0;
    (**(code **)(*param_1 + 0xf00))(param_1);
    if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
}



// FUNCTION 147ca2c1c FUN_147ca2c1c body=113 status=ok
// SIG undefined FUN_147ca2c1c(void)

void FUN_147ca2c1c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_14487fd02();
  if ((iVar1 != 3) && ((char)param_1[0x128] == '\x01')) {
    if (param_1[0x7a] != 0) {
      FUN_1413d4c10(param_1[0x7a],param_3,0,0,0);
    }
    (**(code **)(*param_1 + 0x688))(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x000147ca2c7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf00))(param_1);
    return;
  }
  return;
}



// FUNCTION 147ca2c9e FUN_147ca2c9e body=106 status=ok
// SIG undefined FUN_147ca2c9e(void)

void FUN_147ca2c9e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x940) != '\x01') {
    local_18 = param_3[2];
    local_28 = *param_3;
    uStack_20 = param_3[1];
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(undefined8 *)(param_2 + 4);
    FUN_147a3666a(local_48,&local_48,&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca2d0c FUN_147ca2d0c body=45 status=ok
// SIG undefined FUN_147ca2d0c(void)

longlong FUN_147ca2d0c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bf1602(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca2d3a FUN_147ca2d3a body=45 status=ok
// SIG undefined FUN_147ca2d3a(void)

longlong FUN_147ca2d3a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ccfcc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca2d68 FUN_147ca2d68 body=24 status=ok
// SIG undefined FUN_147ca2d68(void)

void FUN_147ca2d68(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  return;
}



// FUNCTION 147ca2d8a FUN_147ca2d8a body=45 status=ok
// SIG undefined FUN_147ca2d8a(void)

longlong FUN_147ca2d8a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145fde2b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca2db8 FUN_147ca2db8 body=38 status=ok
// SIG undefined FUN_147ca2db8(void)

undefined8 FUN_147ca2db8(undefined8 param_1,int param_2)

{
  FUN_147ca8548();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca2de6 FUN_147ca2de6 body=384 status=ok
// SIG undefined FUN_147ca2de6(void)

/* WARNING: Removing unreachable block (ram,0x000147ca2f05) */

undefined8 FUN_147ca2de6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  int local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  puVar5 = (undefined8 *)FUN_14047ac8c();
  local_78 = (*(int *)(puVar5 + 1) == 0) + 0xb;
  local_58 = (undefined2 *)0x0;
  FUN_14125bce8(&local_58,*puVar5,*(int *)(puVar5 + 1),0);
  FUN_1401aebe8(&local_58,L"SaveGames/",10);
  plVar6 = (longlong *)FUN_14054d1d4();
  puVar8 = local_58;
  if (local_50 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar6 + 0x70))(plVar6,&local_48,puVar8,L"*.sav");
  if ((longlong)(int)uStack_40 != 0) {
    lVar10 = (longlong)(int)uStack_40 << 4;
    lVar7 = local_48;
    uVar3 = local_68;
    uVar4 = local_60;
    do {
      local_60 = uVar4;
      local_68 = uVar3;
      FUN_140c50e86(&local_68,lVar7,1);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(param_2,iVar1);
      }
      lVar2 = *param_2;
      lVar9 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar2 + lVar9) = 0;
      *(undefined8 *)(lVar2 + lVar9) = local_68;
      local_68 = 0;
      uVar3 = local_68;
      *(undefined4 *)(lVar2 + 8 + lVar9) = (undefined4)local_60;
      *(undefined4 *)(lVar2 + 0xc + lVar9) = local_60._4_4_;
      local_60 = 0;
      uVar4 = local_60;
      local_60 = 0;
      local_68 = 0;
      lVar7 = lVar7 + 0x10;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca2f68 FUN_147ca2f68 body=172 status=ok
// SIG undefined FUN_147ca2f68(void)

undefined4
FUN_147ca2f68(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_14054d1d4();
  (**(code **)(*param_1 + 0x70))(param_1,&local_40,param_3);
  puVar3 = local_40;
  if (local_38 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_50 = *param_5;
  local_48 = (longlong)*(int *)(param_5 + 1);
  uVar1 = FUN_146810d90(&local_50,puVar3,uVar2,0);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147ca3016 FUN_147ca3016 body=124 status=ok
// SIG undefined FUN_147ca3016(void)

undefined4 FUN_147ca3016(longlong *param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined8 in_stack_00000028;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x70))(param_1,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = FUN_14158b496(in_stack_00000028,puVar2,0);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147ca3094 FUN_147ca3094 body=158 status=ok
// SIG undefined FUN_147ca3094(void)

undefined4 FUN_147ca3094(longlong *param_1,byte param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  byte local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_14054d1d4();
  (**(code **)(*param_1 + 0x70))(param_1,&local_40,param_3);
  puVar3 = local_40;
  if (local_38 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_48 = param_2 ^ 1;
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,puVar3,1,0);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147ca313e FUN_147ca313e body=49 status=ok
// SIG undefined FUN_147ca313e(void)

void FUN_147ca313e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x168);
  FUN_14039707a(param_2);
  *(undefined8 *)((longlong)param_2 + 0x160) = 0;
  return;
}



// FUNCTION 147ca3170 FUN_147ca3170 body=33 status=ok
// SIG undefined FUN_147ca3170(void)

void FUN_147ca3170(undefined8 param_1,longlong param_2)

{
  FUN_14039707a(param_2);
  *(undefined8 *)(param_2 + 0x160) = 0;
  return;
}



// FUNCTION 147ca31aa FUN_147ca31aa body=68 status=ok
// SIG undefined FUN_147ca31aa(void)

undefined8 FUN_147ca31aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x168);
      lVar1 = lVar1 + 0x168;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147ca3216 FUN_147ca3216 body=59 status=ok
// SIG undefined FUN_147ca3216(void)

undefined8 FUN_147ca3216(longlong *param_1)

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



// FUNCTION 147ca3334 FUN_147ca3334 body=59 status=ok
// SIG undefined FUN_147ca3334(void)

undefined8 FUN_147ca3334(longlong *param_1)

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



// FUNCTION 147ca3450 FUN_147ca3450 body=59 status=ok
// SIG undefined FUN_147ca3450(void)

undefined8 FUN_147ca3450(longlong *param_1)

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



// FUNCTION 147ca35b2 FUN_147ca35b2 body=59 status=ok
// SIG undefined FUN_147ca35b2(void)

undefined8 FUN_147ca35b2(longlong *param_1)

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



// FUNCTION 147ca374e FUN_147ca374e body=59 status=ok
// SIG undefined FUN_147ca374e(void)

undefined8 FUN_147ca374e(longlong *param_1)

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



// FUNCTION 147ca37f0 FUN_147ca37f0 body=29 status=ok
// SIG undefined FUN_147ca37f0(void)

undefined8 FUN_147ca37f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca3816 FUN_147ca3816 body=22 status=ok
// SIG undefined FUN_147ca3816(void)

undefined4 FUN_147ca3816(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14091baee();
  return *(undefined4 *)(lVar1 + 0x10c);
}



// FUNCTION 147ca382c FUN_147ca382c body=22 status=ok
// SIG undefined FUN_147ca382c(void)

undefined4 FUN_147ca382c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14091baee();
  return *(undefined4 *)(lVar1 + 0x114);
}



// FUNCTION 147ca3842 FUN_147ca3842 body=73 status=ok
// SIG undefined FUN_147ca3842(void)

int FUN_147ca3842(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  
  lVar2 = FUN_14091baee();
  fVar4 = (*(float *)(lVar2 + 0xf4) * 0.001) / *(float *)(lVar2 + 0x168);
  iVar3 = -((int)ROUND(-0.5 - (fVar4 + fVar4)) >> 1);
  iVar1 = 1;
  if (1 < iVar3) {
    iVar1 = iVar3;
  }
  return iVar1;
}



// FUNCTION 147ca388c FUN_147ca388c body=688 status=ok
// SIG undefined FUN_147ca388c(void)

longlong FUN_147ca388c(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x12e) = 0;
  *(undefined8 *)(param_1 + 0x136) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"NodesParams",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"NodesOffsets",0);
  FUN_147440a6c(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x28),L"TargetsOffsets",0);
  FUN_147440a6c(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"FieldClipmap",0);
  FUN_147440a6c(param_1 + 0xf0,*(undefined8 *)(param_2 + 0x28),L"CellsOffsets",0);
  FUN_147440a6c(param_1 + 0xf4,*(undefined8 *)(param_2 + 0x28),L"CellsMin",0);
  FUN_147440a6c(param_1 + 0xf8,*(undefined8 *)(param_2 + 0x28),L"CellsMax",0);
  FUN_1474409b8(param_1 + 0xfc,*(undefined8 *)(param_2 + 0x28),L"ClipmapResolution",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"ClipmapDistance",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ClipmapCenter",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ClipmapCount",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"ClipmapExponent",0);
  FUN_1474409b8(param_1 + 0x11a,*(undefined8 *)(param_2 + 0x28),L"TargetsIndex",0);
  FUN_1474409b8(param_1 + 0x120,*(undefined8 *)(param_2 + 0x28),L"ValidTargets",0);
  FUN_1474409b8(param_1 + 0x126,*(undefined8 *)(param_2 + 0x28),L"ValidCount",0);
  FUN_1474409b8(param_1 + 300,*(undefined8 *)(param_2 + 0x28),L"TimeSeconds",0);
  FUN_1474409b8(param_1 + 0x132,*(undefined8 *)(param_2 + 0x28),L"NumCells",0);
  FUN_1474409b8(param_1 + 0x138,*(undefined8 *)(param_2 + 0x28),L"TargetCount",0);
  return param_1;
}



// FUNCTION 147ca3b3c FUN_147ca3b3c body=422 status=ok
// SIG undefined FUN_147ca3b3c(void)

longlong FUN_147ca3b3c(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x10a) = 0;
  *(undefined8 *)(param_1 + 0x112) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"FieldClipmap",0);
  FUN_1474409b8(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"NumCells",0);
  FUN_147440a6c(param_1 + 0xea,*(undefined8 *)(param_2 + 0x28),L"CellsOffsets",0);
  FUN_147440a6c(param_1 + 0xee,*(undefined8 *)(param_2 + 0x28),L"CellsMin",0);
  FUN_147440a6c(param_1 + 0xf2,*(undefined8 *)(param_2 + 0x28),L"CellsMax",0);
  FUN_1474409b8(param_1 + 0xf6,*(undefined8 *)(param_2 + 0x28),L"ClipmapResolution",0);
  FUN_1474409b8(param_1 + 0xfc,*(undefined8 *)(param_2 + 0x28),L"ClipmapCount",0);
  FUN_1474409b8(param_1 + 0x102,*(undefined8 *)(param_2 + 0x28),L"TargetsIndex",0);
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ValidTargets",0);
  FUN_1474409b8(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),L"ValidCount",0);
  FUN_1474409b8(param_1 + 0x114,*(undefined8 *)(param_2 + 0x28),L"TargetCount",0);
  return param_1;
}



// FUNCTION 147ca3ce2 FUN_147ca3ce2 body=109 status=ok
// SIG undefined FUN_147ca3ce2(void)

undefined8 * FUN_147ca3ce2(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  _Src = (void *)*param_2;
  uVar1 = param_2[1] - (longlong)_Src;
  uVar3 = uVar1 >> 2;
  iVar2 = (int)uVar3;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1474ab05a(param_1,uVar3 & 0xffffffff);
    if (iVar2 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)(uVar1 * 0x40000000) >> 0x1e & 0xfffffffffffffffc);
    }
  }
  return param_1;
}



// FUNCTION 147ca3d50 FUN_147ca3d50 body=29 status=ok
// SIG undefined FUN_147ca3d50(void)

undefined8 FUN_147ca3d50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca3d6e FUN_147ca3d6e body=77 status=ok
// SIG undefined FUN_147ca3d6e(void)

void FUN_147ca3d6e(longlong param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[1] = *(undefined1 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_14020fad6(param_2 + 8,&DAT_149dfb77a);
  FUN_14020fad6(param_2 + 0x18,&DAT_149dfb77a);
  FUN_14020fad6(param_2 + 0x28,&DAT_149dfb77a);
  return;
}



// FUNCTION 147ca3dc0 FUN_147ca3dc0 body=69 status=ok
// SIG undefined FUN_147ca3dc0(void)

undefined8 * FUN_147ca3dc0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aa4c840;
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca3e26 FUN_147ca3e26 body=117 status=ok
// SIG undefined FUN_147ca3e26(void)

undefined8 FUN_147ca3e26(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_147ca3f96(&local_30,param_3);
  FUN_147ca3eae(param_1 + 8,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca3eae FUN_147ca3eae body=230 status=ok
// SIG undefined FUN_147ca3eae(void)

undefined8 * FUN_147ca3eae(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 147ca3f96 FUN_147ca3f96 body=130 status=ok
// SIG undefined FUN_147ca3f96(void)

void FUN_147ca3f96(longlong *param_1,longlong *param_2)

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



// FUNCTION 147ca407e FUN_147ca407e body=59 status=ok
// SIG undefined FUN_147ca407e(void)

undefined8 FUN_147ca407e(longlong *param_1)

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



// FUNCTION 147ca4168 FUN_147ca4168 body=59 status=ok
// SIG undefined FUN_147ca4168(void)

undefined8 FUN_147ca4168(longlong *param_1)

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



// FUNCTION 147ca420a FUN_147ca420a body=38 status=ok
// SIG undefined FUN_147ca420a(void)

undefined8 FUN_147ca420a(undefined8 param_1,int param_2)

{
  FUN_147ca4562();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca4230 FUN_147ca4230 body=440 status=ok
// SIG undefined FUN_147ca4230(void)

void FUN_147ca4230(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  void *_Dst;
  uint uVar11;
  uint uVar12;
  float fVar13;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar13 = *(float *)(param_2 + 100) + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0xc) = fVar13;
  bVar7 = 1;
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) &&
     ((*(float *)(param_1 + 8) < 0.0 || (fVar13 < *(float *)(param_1 + 8))))) {
    bVar7 = FUN_144729dda(param_1 + 0x14);
    bVar7 = bVar7 ^ 1;
  }
  lVar9 = FUN_14479d2ce(param_1 + 0x14);
  if (lVar9 != 0) {
    if (bVar7 == 0) {
      local_48 = param_1 + 0x1c;
      FUN_147ca46c8(lVar9 + 0x530,param_1 + 0x30);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
      *(undefined1 *)(param_2 + 0x60) = 0;
      goto LAB_147ca4331;
    }
    uVar8 = *(uint *)(lVar9 + 0x538);
    lVar10 = *(longlong *)(lVar9 + 0x530);
    uVar12 = 0;
    uVar11 = uVar8;
    if (0 < (int)uVar8) {
      do {
        uVar1 = (uVar11 >> 1) + uVar12;
        if (*(int *)(lVar10 + (ulonglong)uVar1 * 0x10) < *(int *)(param_1 + 0x30)) {
          uVar12 = uVar1 + (uVar11 & 1);
        }
        bVar6 = 1 < uVar11;
        uVar11 = uVar11 >> 1;
      } while (bVar6);
    }
    if (((int)uVar12 < (int)uVar8) &&
       (*(int *)(lVar10 + (ulonglong)uVar12 * 0x10) <= *(int *)(param_1 + 0x30))) {
      if (~uVar12 + uVar8 != 0) {
        _Dst = (void *)(lVar10 + (ulonglong)uVar12 * 0x10);
        memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~uVar12 + uVar8) << 4);
        uVar8 = *(uint *)(lVar9 + 0x538);
      }
      *(uint *)(lVar9 + 0x538) = uVar8 - 1;
      FUN_147ca462c(lVar9 + 0x530);
    }
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar5 = *(undefined8 *)(param_1 + 0x24);
  *(byte *)(param_2 + 0x60) = bVar7;
  if (bVar7 != 0) {
    iVar3 = *(int *)(param_2 + 0x58);
    lVar9 = (longlong)iVar3;
    *(uint *)(param_2 + 0x58) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x5c) < iVar3 + 1U) {
      FUN_14579eadc(param_2,iVar3);
    }
    lVar10 = *(longlong *)(param_2 + 0x50);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      lVar10 = param_2;
    }
    *(undefined8 *)(lVar10 + lVar9 * 0x14) = uVar5;
    *(undefined4 *)(lVar10 + 8 + lVar9 * 0x14) = uVar2;
    *(undefined8 *)(lVar10 + 0xc + lVar9 * 0x14) = uVar4;
  }
LAB_147ca4331:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ca43ea FUN_147ca43ea body=188 status=ok
// SIG undefined FUN_147ca43ea(void)

void FUN_147ca43ea(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  
  lVar5 = FUN_14479d2ce(param_1 + 0x14);
  if (lVar5 != 0) {
    uVar4 = *(uint *)(lVar5 + 0x538);
    lVar2 = *(longlong *)(lVar5 + 0x530);
    uVar7 = 0;
    uVar6 = uVar4;
    if (0 < (int)uVar4) {
      do {
        uVar1 = (uVar6 >> 1) + uVar7;
        if (*(int *)(lVar2 + (ulonglong)uVar1 * 0x10) < *(int *)(param_1 + 0x30)) {
          uVar7 = uVar1 + (uVar6 & 1);
        }
        bVar3 = 1 < uVar6;
        uVar6 = uVar6 >> 1;
      } while (bVar3);
    }
    if (((int)uVar7 < (int)uVar4) &&
       (*(int *)(lVar2 + (ulonglong)uVar7 * 0x10) <= *(int *)(param_1 + 0x30))) {
      if (~uVar7 + uVar4 != 0) {
        _Dst = (void *)(lVar2 + (ulonglong)uVar7 * 0x10);
        memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~uVar7 + uVar4) << 4);
        uVar4 = *(uint *)(lVar5 + 0x538);
      }
      *(uint *)(lVar5 + 0x538) = uVar4 - 1;
      FUN_147ca462c(lVar5 + 0x530);
    }
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  }
  return;
}



// FUNCTION 147ca44a6 FUN_147ca44a6 body=188 status=ok
// SIG undefined FUN_147ca44a6(void)

void FUN_147ca44a6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  
  lVar5 = FUN_14479d2ce(param_1 + 0x14);
  if (lVar5 != 0) {
    uVar4 = *(uint *)(lVar5 + 0x538);
    lVar2 = *(longlong *)(lVar5 + 0x530);
    uVar7 = 0;
    uVar6 = uVar4;
    if (0 < (int)uVar4) {
      do {
        uVar1 = (uVar6 >> 1) + uVar7;
        if (*(int *)(lVar2 + (ulonglong)uVar1 * 0x10) < *(int *)(param_1 + 0x30)) {
          uVar7 = uVar1 + (uVar6 & 1);
        }
        bVar3 = 1 < uVar6;
        uVar6 = uVar6 >> 1;
      } while (bVar3);
    }
    if (((int)uVar7 < (int)uVar4) &&
       (*(int *)(lVar2 + (ulonglong)uVar7 * 0x10) <= *(int *)(param_1 + 0x30))) {
      if (~uVar7 + uVar4 != 0) {
        _Dst = (void *)(lVar2 + (ulonglong)uVar7 * 0x10);
        memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~uVar7 + uVar4) << 4);
        uVar4 = *(uint *)(lVar5 + 0x538);
      }
      *(uint *)(lVar5 + 0x538) = uVar4 - 1;
      FUN_147ca462c(lVar5 + 0x530);
    }
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  }
  return;
}



// FUNCTION 147ca4562 FUN_147ca4562 body=202 status=ok
// SIG undefined FUN_147ca4562(void)

void FUN_147ca4562(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  
  *param_1 = &PTR_FUN_14aa4cc40;
  if (((*(byte *)(param_1 + 2) & 2) != 0) &&
     (lVar5 = FUN_14479d2ce((longlong)param_1 + 0x14), lVar5 != 0)) {
    uVar4 = *(uint *)(lVar5 + 0x538);
    lVar2 = *(longlong *)(lVar5 + 0x530);
    uVar7 = 0;
    uVar6 = uVar4;
    if (0 < (int)uVar4) {
      do {
        uVar1 = (uVar6 >> 1) + uVar7;
        if (*(int *)(lVar2 + (ulonglong)uVar1 * 0x10) < *(int *)(param_1 + 6)) {
          uVar7 = uVar1 + (uVar6 & 1);
        }
        bVar3 = 1 < uVar6;
        uVar6 = uVar6 >> 1;
      } while (bVar3);
    }
    if (((int)uVar7 < (int)uVar4) &&
       (*(int *)(lVar2 + (ulonglong)uVar7 * 0x10) <= *(int *)(param_1 + 6))) {
      if (~uVar7 + uVar4 != 0) {
        _Dst = (void *)(lVar2 + (ulonglong)uVar7 * 0x10);
        memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~uVar7 + uVar4) << 4);
        uVar4 = *(uint *)(lVar5 + 0x538);
      }
      *(uint *)(lVar5 + 0x538) = uVar4 - 1;
      FUN_147ca462c(lVar5 + 0x530);
      return;
    }
  }
  return;
}



// FUNCTION 147ca462c FUN_147ca462c body=62 status=ok
// SIG undefined FUN_147ca462c(void)

void FUN_147ca462c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ca466a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147ca466a FUN_147ca466a body=93 status=ok
// SIG undefined FUN_147ca466a(void)

ulonglong FUN_147ca466a(uint param_1,uint param_2)

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



// FUNCTION 147ca46c8 FUN_147ca46c8 body=207 status=ok
// SIG undefined FUN_147ca46c8(void)

void FUN_147ca46c8(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar7 = *param_1;
  if ((int)uVar2 < 1) {
    uVar8 = 0;
  }
  else {
    iVar4 = *param_2;
    uVar8 = 0;
    uVar5 = uVar2;
    do {
      uVar1 = (uVar5 >> 1) + uVar8;
      if (*(int *)(lVar7 + (ulonglong)uVar1 * 0x10) < iVar4) {
        uVar8 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
    if (((int)uVar8 < (int)uVar2) && (*(int *)(lVar7 + (ulonglong)uVar8 * 0x10) <= iVar4)) {
      piVar6 = (int *)(lVar7 + (ulonglong)uVar8 * 0x10);
      goto LAB_147ca476d;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_147ca4798(param_1,uVar2);
    lVar7 = *param_1;
  }
  lVar9 = (ulonglong)uVar8 * 0x10;
  memmove((void *)(lVar7 + lVar9 + 0x10),(void *)(lVar7 + lVar9),(ulonglong)(uVar2 - uVar8) << 4);
  piVar6 = (int *)(lVar9 + *param_1);
  iVar4 = *param_2;
LAB_147ca476d:
  *piVar6 = iVar4;
  *(undefined8 *)(piVar6 + 2) = *param_3;
  return;
}



// FUNCTION 147ca4798 FUN_147ca4798 body=132 status=ok
// SIG undefined FUN_147ca4798(void)

void FUN_147ca4798(longlong param_1,int param_2)

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



// FUNCTION 147ca481e FUN_147ca481e body=29 status=ok
// SIG undefined FUN_147ca481e(void)

undefined8 FUN_147ca481e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca4856 FUN_147ca4856 body=29 status=ok
// SIG undefined FUN_147ca4856(void)

bool FUN_147ca4856(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ca4874 FUN_147ca4874 body=26 status=ok
// SIG undefined FUN_147ca4874(void)

bool FUN_147ca4874(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ca488e FUN_147ca488e body=24 status=ok
// SIG undefined FUN_147ca488e(void)

bool FUN_147ca488e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ca48a6 FUN_147ca48a6 body=101 status=ok
// SIG undefined FUN_147ca48a6(void)

void FUN_147ca48a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa4cc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ca490c FUN_147ca490c body=101 status=ok
// SIG undefined FUN_147ca490c(void)

void FUN_147ca490c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa4cc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ca4972 FUN_147ca4972 body=134 status=ok
// SIG undefined FUN_147ca4972(void)

void FUN_147ca4972(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa4cc60;
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
                    /* WARNING: Could not recover jumptable at 0x000147ca49e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ca49f8 FUN_147ca49f8 body=42 status=ok
// SIG undefined FUN_147ca49f8(void)

void FUN_147ca49f8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ca4a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147ca4a22 FUN_147ca4a22 body=154 status=ok
// SIG undefined FUN_147ca4a22(void)

bool FUN_147ca4a22(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 147ca4abe FUN_147ca4abe body=64 status=ok
// SIG undefined FUN_147ca4abe(void)

void FUN_147ca4abe(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    *(undefined8 **)(param_1 + 0x70) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 147ca4b0c FUN_147ca4b0c body=70 status=ok
// SIG undefined FUN_147ca4b0c(void)

void FUN_147ca4b0c(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    *(undefined8 **)(param_1 + 0x90) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 147ca4b52 FUN_147ca4b52 body=38 status=ok
// SIG undefined FUN_147ca4b52(void)

undefined8 FUN_147ca4b52(undefined8 param_1,int param_2)

{
  FUN_1411cf128();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca4b78 FUN_147ca4b78 body=48 status=ok
// SIG undefined FUN_147ca4b78(void)

void FUN_147ca4b78(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc0,0x10);
  }
  return;
}



// FUNCTION 147ca4ba8 FUN_147ca4ba8 body=48 status=ok
// SIG undefined FUN_147ca4ba8(void)

void FUN_147ca4ba8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xe0,0x10);
  }
  return;
}



// FUNCTION 147ca4bd8 FUN_147ca4bd8 body=104 status=ok
// SIG undefined FUN_147ca4bd8(void)

void FUN_147ca4bd8(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x15c + (longlong)param_2 * 0x160);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x158 + lVar5 * 0x160);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x160 + 0x158);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x160 + 0x158);
  FUN_147ca4c40();
  return;
}



// FUNCTION 147ca4c40 FUN_147ca4c40 body=122 status=ok
// SIG undefined FUN_147ca4c40(void)

void FUN_147ca4c40(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x160) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x160) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x160 + 4) = uVar5;
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



// FUNCTION 147ca4cba FUN_147ca4cba body=189 status=ok
// SIG undefined FUN_147ca4cba(void)

longlong FUN_147ca4cba(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar3 = *param_1 + (longlong)iVar1 * 0x160;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x160) == *param_3) {
          if (lVar3 != 0) goto LAB_147ca4d5a;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x158);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147ca4d78(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x160 + *param_1;
LAB_147ca4d5a:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147ca4d78 FUN_147ca4d78 body=342 status=ok
// SIG undefined FUN_147ca4d78(void)

undefined4 * FUN_147ca4d78(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_1c8 [40];
  undefined4 local_1a0 [2];
  undefined8 *local_198;
  undefined1 local_190 [336];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_147ca4ed0();
  memset(local_190,0,0x150);
  FUN_1458e258c(local_190);
  *local_198 = *(undefined8 *)*param_4;
  memcpy(local_198 + 1,local_190,0x150);
  *(undefined4 *)(local_198 + 0x2b) = 0xffffffff;
  cVar1 = FUN_147ca4fbe(param_1,param_3,local_198,local_1a0);
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
      *(uint *)((longlong)local_198 + 0x15c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_198 + 0x2b) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_1a0[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147ca5056(param_1);
    }
  }
  *param_2 = local_1a0[0];
  if ((local_40 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca4ed0 FUN_147ca4ed0 body=237 status=ok
// SIG undefined FUN_147ca4ed0(void)

int * FUN_147ca4ed0(longlong *param_1,int *param_2)

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
      FUN_1463fa432(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x160);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x160) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x160 + *param_1;
  return param_2;
}



// FUNCTION 147ca4fbe FUN_147ca4fbe body=151 status=ok
// SIG undefined FUN_147ca4fbe(void)

undefined8 FUN_147ca4fbe(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x160);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x160) == *param_3) {
          memmove(_Dst,param_3,0x158);
          FUN_147ca4c40(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x158);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147ca5056 FUN_147ca5056 body=483 status=ok
// SIG undefined FUN_147ca5056(void)

void FUN_147ca5056(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x160;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x15c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x158 + lVar6) =
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



// FUNCTION 147ca523a FUN_147ca523a body=68 status=ok
// SIG undefined FUN_147ca523a(void)

void FUN_147ca523a(longlong param_1,uint param_2)

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
  FUN_1457583c4(param_1);
  return;
}



// FUNCTION 147ca527e FUN_147ca527e body=38 status=ok
// SIG undefined FUN_147ca527e(void)

undefined8 FUN_147ca527e(undefined8 param_1,int param_2)

{
  FUN_1415d50de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca52a4 FUN_147ca52a4 body=48 status=ok
// SIG undefined FUN_147ca52a4(void)

void FUN_147ca52a4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147ca52d4 FUN_147ca52d4 body=31 status=ok
// SIG undefined FUN_147ca52d4(void)

undefined8 FUN_147ca52d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca530e FUN_147ca530e body=101 status=ok
// SIG undefined FUN_147ca530e(void)

void FUN_147ca530e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa4d990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ca5374 FUN_147ca5374 body=101 status=ok
// SIG undefined FUN_147ca5374(void)

void FUN_147ca5374(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa4d990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ca53da FUN_147ca53da body=134 status=ok
// SIG undefined FUN_147ca53da(void)

void FUN_147ca53da(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aa4d990;
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
                    /* WARNING: Could not recover jumptable at 0x000147ca5451. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ca5460 FUN_147ca5460 body=39 status=ok
// SIG undefined FUN_147ca5460(void)

void FUN_147ca5460(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ca5483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147ca5488 FUN_147ca5488 body=31 status=ok
// SIG undefined FUN_147ca5488(void)

undefined8 FUN_147ca5488(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca54b8 FUN_147ca54b8 body=93 status=ok
// SIG undefined FUN_147ca54b8(void)

void FUN_147ca54b8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa4d110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ca5516 FUN_147ca5516 body=93 status=ok
// SIG undefined FUN_147ca5516(void)

void FUN_147ca5516(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa4d110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ca5574 FUN_147ca5574 body=126 status=ok
// SIG undefined FUN_147ca5574(void)

void FUN_147ca5574(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aa4d110;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ca55e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ca55fe FUN_147ca55fe body=147 status=ok
// SIG undefined FUN_147ca55fe(void)

void FUN_147ca55fe(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x140,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x140)) {
      uVar5 = uVar4 / 0x140 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x140,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ca5692 FUN_147ca5692 body=74 status=ok
// SIG undefined FUN_147ca5692(void)

void FUN_147ca5692(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
  iVar1 = (int)(uVar2 >> 3);
  iVar3 = 0x7fffffff;
  if ((int)param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(param_1 + 0x14)) {
    return;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  FUN_147ca56dc(param_1,*(undefined4 *)(param_1 + 0x10));
  return;
}



// FUNCTION 147ca56dc FUN_147ca56dc body=132 status=ok
// SIG undefined FUN_147ca56dc(void)

void FUN_147ca56dc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,8);
  return;
}



// FUNCTION 147ca5760 FUN_147ca5760 body=126 status=ok
// SIG undefined FUN_147ca5760(void)

void FUN_147ca5760(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 8;
    } while (lVar5 * 8 - uVar4 != 0);
  }
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_147ca57de(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(longlong *)(param_1 + lVar5 * 8) = *param_2;
  return;
}



// FUNCTION 147ca57de FUN_147ca57de body=124 status=ok
// SIG undefined FUN_147ca57de(void)

void FUN_147ca57de(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_147ca56dc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ca585c FUN_147ca585c body=204 status=ok
// SIG undefined FUN_147ca585c(void)

void FUN_147ca585c(undefined8 param_1,longlong *param_2,undefined8 param_3)

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
      goto LAB_147ca58af;
    }
  }
  lVar2 = 0;
LAB_147ca58af:
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
  FUN_147ca5b78(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca593e FUN_147ca593e body=90 status=ok
// SIG undefined FUN_147ca593e(void)

void FUN_147ca593e(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
    if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0xc0),
              (longlong)*(int *)((longlong)param_1 + 200) << 3);
      FUN_1446efa72((longlong)param_1 + 0xc0,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 147ca5998 FUN_147ca5998 body=141 status=ok
// SIG undefined FUN_147ca5998(void)

void FUN_147ca5998(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,8);
  return;
}



// FUNCTION 147ca5b78 FUN_147ca5b78 body=465 status=ok
// SIG undefined FUN_147ca5b78(void)

void FUN_147ca5b78(longlong param_1,longlong *param_2,longlong param_3)

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
LAB_147ca5ca7:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_147ca5cbf;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_147ca5ca7;
LAB_147ca5cbf:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
            FUN_147ca5d4a(param_3,iVar3);
          }
          lVar5 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar5 = param_3;
          }
          *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
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



// FUNCTION 147ca5d4a FUN_147ca5d4a body=119 status=ok
// SIG undefined FUN_147ca5d4a(void)

void FUN_147ca5d4a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x18;
    if (0x18 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_147ca5998(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147ca5dc2 FUN_147ca5dc2 body=194 status=ok
// SIG undefined FUN_147ca5dc2(void)

void FUN_147ca5dc2(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    pcVar2 = (char *)*param_1;
    uVar4 = 0;
    bVar10 = *pcVar2 == *(char *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (pcVar2[uVar6] == *(char *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(pcVar2 + (int)uVar4,pcVar2 + uVar7,(longlong)(int)(uVar9 - uVar7));
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 147ca5e84 FUN_147ca5e84 body=45 status=ok
// SIG undefined FUN_147ca5e84(void)

void FUN_147ca5e84(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (*(code *)*param_1)(param_2,param_3,*param_4,param_5,param_6);
  return;
}



// FUNCTION 147ca5ecf FUN_147ca5ecf body=273 status=ok
// SIG undefined FUN_147ca5ecf(void)

void FUN_147ca5ecf(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147ca5fe0(*param_2,lVar11,*param_4,*param_6);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fa8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147ca5fe0 FUN_147ca5fe0 body=341 status=ok
// SIG undefined FUN_147ca5fe0(void)

void FUN_147ca5fe0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_4;
  if (param_3 != 0) {
    FUN_144a86a8e(param_2,param_1 + 0xe0,*(undefined8 *)(param_3 + 0x18));
    FUN_1448fc859(param_2,param_1 + 0xe4,&local_2c,0);
    FUN_144a86bff(param_2,param_1 + 0xea,*(undefined8 *)(param_3 + 0xe0));
    FUN_144a86bff(param_2,param_1 + 0xee,*(undefined8 *)(param_3 + 0x110));
    FUN_144a86bff(param_2,param_1 + 0xf2,*(undefined8 *)(param_3 + 0x140));
    FUN_1448fc859(param_2,param_1 + 0xf6,param_3 + 0xe08,0);
    FUN_1448fc859(param_2,param_1 + 0xfc,param_3 + 0xe00,0);
    FUN_147ca6136(param_2,param_1 + 0x108,param_3 + 0x9e0);
    FUN_1448fc859(param_2,param_1 + 0x10e,param_3 + 0xdfc,0);
    FUN_147ca6136(param_2,param_1 + 0x102,param_3 + 0x7e0);
    FUN_1448fc859(param_2,param_1 + 0x114,param_3 + 0x1c0,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca6136 FUN_147ca6136 body=188 status=ok
// SIG undefined FUN_147ca6136(void)

void FUN_147ca6136(longlong *param_1,undefined2 *param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  ushort uVar4;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  ushort *local_48;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  ushort local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = param_2[2];
  if (uVar4 != 0) {
    if (0x1ff < uVar4) {
      uVar4 = 0x200;
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    lVar3 = param_1[2];
    FUN_144ab3e68(*param_1,param_1 + 1,uVar4,param_3);
    local_48 = &local_32;
    local_50 = &local_34;
    local_58 = &local_36;
    local_38 = uVar1;
    local_36 = uVar2;
    local_34 = (short)lVar3;
    local_32 = uVar4;
    FUN_144ab3f26(*param_1,*param_1 + 0x38,param_1 + 3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca61f3 FUN_147ca61f3 body=295 status=ok
// SIG undefined FUN_147ca61f3(void)

void FUN_147ca61f3(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147ca631a(*param_2,lVar11,*param_4,*param_5,*param_6);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fa8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147ca631a FUN_147ca631a body=545 status=ok
// SIG undefined FUN_147ca631a(void)

void FUN_147ca631a(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined1 auStack_58 [32];
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_4;
  if (param_3 != 0) {
    FUN_144a86bff(param_2,param_1 + 0xe0,*(undefined8 *)(param_3 + 0x50));
    FUN_144a86bff(param_2,param_1 + 0xe4,*(undefined8 *)(param_3 + 0x80));
    FUN_144a86bff(param_2,param_1 + 0xe8,*(undefined8 *)(param_3 + 0xb0));
    FUN_144a86a8e(param_2,param_1 + 0xec,*(undefined8 *)(param_3 + 0x18));
    FUN_144a86bff(param_2,param_1 + 0xf0,*(undefined8 *)(param_3 + 0xe0));
    FUN_144a86bff(param_2,param_1 + 0xf4,*(undefined8 *)(param_3 + 0x110));
    FUN_144a86bff(param_2,param_1 + 0xf8,*(undefined8 *)(param_3 + 0x140));
    FUN_1448fc859(param_2,param_1 + 0xfc,param_3 + 0xe08,0);
    FUN_1447e4b92(param_2,param_1 + 0x102,param_3 + 0xdf8,0);
    FUN_1448fc859(param_2,param_1 + 0x10e,param_3 + 0xe00,0);
    local_30 = (float)*(double *)(param_3 + 0xdf0);
    local_34 = (float)*(double *)(param_3 + 0xde8);
    local_38 = (float)*(double *)(param_3 + 0xde0);
    FUN_1447f9a48(param_2,param_1 + 0x108,&local_38,0);
    FUN_1448fc859(param_2,param_1 + 0x114,param_3 + 0xe04,0);
    FUN_147ca6136(param_2,param_1 + 0x120,param_3 + 0x9e0);
    FUN_1448fc859(param_2,param_1 + 0x126,param_3 + 0xdfc,0);
    FUN_147ca6136(param_2,param_1 + 0x11a,param_3 + 0x7e0);
    FUN_1447e4b92(param_2,param_1 + 300,&local_2c,0);
    FUN_1448fc859(param_2,param_1 + 0x132,&stack0x00000028,0);
    FUN_1448fc859(param_2,param_1 + 0x138,param_3 + 0x1c0,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca653c FUN_147ca653c body=96 status=ok
// SIG undefined FUN_147ca653c(void)

void FUN_147ca653c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,0x10);
  }
  return;
}



// FUNCTION 147ca659c FUN_147ca659c body=132 status=ok
// SIG undefined FUN_147ca659c(void)

void FUN_147ca659c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ca6621 FUN_147ca6621 body=554 status=ok
// SIG undefined FUN_147ca6621(void)

void FUN_147ca6621(longlong param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  longlong *plVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  float fVar16;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar8 = &local_348;
    do {
      piVar2 = (int *)*plVar8;
      piVar9 = (int *)plVar8[1];
      iVar11 = (int)plVar8[2];
      iVar4 = (int)((ulonglong)((longlong)piVar9 - (longlong)piVar2) >> 2);
      piVar7 = piVar2;
      piVar13 = piVar9;
      if (iVar11 != 0) {
LAB_147ca66e2:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          iVar4 = piVar2[uVar5];
          piVar2[uVar5] = *piVar2;
          *piVar2 = iVar4;
          piVar6 = piVar9 + 1;
          piVar3 = piVar2;
          do {
            piVar1 = piVar3 + 1;
            piVar10 = piVar3 + 1;
            do {
              piVar3 = piVar10;
              piVar14 = piVar1;
              if (piVar9 < piVar3) break;
              piVar1 = piVar14 + 1;
              piVar10 = piVar3 + 1;
            } while (*piVar3 <= *piVar2);
            piVar1 = piVar6 + -2;
            do {
              piVar10 = piVar6;
              piVar15 = piVar1;
              piVar6 = piVar10 + -1;
              if (piVar6 <= piVar2) break;
              piVar1 = piVar15 + -1;
            } while (*piVar2 <= *piVar6);
            if (piVar6 < piVar3) goto LAB_147ca6758;
            iVar4 = *piVar3;
            *piVar3 = *piVar6;
            *piVar6 = iVar4;
          } while( true );
        }
        if (piVar2 < piVar9) {
          do {
            piVar7 = piVar2;
            if (piVar2 + 1 <= piVar9) {
              piVar13 = piVar2 + 1;
              iVar11 = *piVar2;
              do {
                iVar4 = *piVar13;
                iVar12 = iVar11;
                if (iVar11 <= iVar4) {
                  iVar12 = iVar4;
                }
                if (iVar11 < iVar4) {
                  piVar7 = piVar13;
                }
                piVar13 = piVar13 + 1;
                iVar11 = iVar12;
              } while (piVar13 <= piVar9);
            }
            iVar11 = *piVar7;
            *piVar7 = *piVar9;
            *piVar9 = iVar11;
            piVar9 = piVar9 + -1;
          } while (piVar2 < piVar9);
        }
        goto LAB_147ca682a;
      }
LAB_147ca683f:
      FUN_147ca684c(piVar2);
LAB_147ca682a:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147ca6758:
  iVar4 = *piVar2;
  *piVar2 = *piVar6;
  *piVar6 = iVar4;
  iVar11 = iVar11 + -1;
  piVar10 = piVar10 + -2;
  if ((longlong)piVar15 - (longlong)piVar7 < (longlong)piVar13 - (longlong)piVar14) {
    if (piVar3 < piVar9) {
      *plVar8 = (longlong)piVar3;
      plVar8[1] = (longlong)piVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    piVar14 = piVar2;
    if (piVar6 <= piVar2 + 1) goto LAB_147ca682a;
  }
  else {
    if (piVar2 + 1 < piVar6) {
      *plVar8 = (longlong)piVar2;
      plVar8[1] = (longlong)piVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    piVar2 = piVar3;
    piVar10 = piVar9;
    piVar15 = piVar9;
    if (piVar9 <= piVar3) goto LAB_147ca682a;
  }
  iVar4 = (int)((ulonglong)((longlong)piVar15 - (longlong)piVar14) >> 2);
  piVar7 = piVar14;
  piVar9 = piVar10;
  piVar13 = piVar15;
  if (iVar11 == 0) goto LAB_147ca683f;
  goto LAB_147ca66e2;
}



// FUNCTION 147ca684c FUN_147ca684c body=279 status=ok
// SIG undefined FUN_147ca684c(void)

void FUN_147ca684c(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x000147ca686d:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) && ((int)param_1[iVar5] <= (int)param_1[iVar6])) {
          iVar5 = iVar6;
        }
        iVar6 = param_1[iVar2];
        if (iVar6 < (int)param_1[iVar5]) {
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = iVar6;
          iVar2 = iVar5;
          goto joined_r0x000147ca686d;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) && ((int)param_1[iVar5] <= (int)param_1[iVar2]))
            {
              iVar6 = iVar2;
            }
            iVar2 = param_1[iVar7];
            if ((int)param_1[iVar6] <= iVar2) break;
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = iVar2;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 147ca6964 FUN_147ca6964 body=157 status=ok
// SIG undefined FUN_147ca6964(void)

void FUN_147ca6964(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_1408bc7be(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8));
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147ca6a02 FUN_147ca6a02 body=144 status=ok
// SIG undefined FUN_147ca6a02(void)

void FUN_147ca6a02(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 8;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,8,4);
  }
  uVar2 = 0x7fffffff;
  if (0 < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 147ca6a92 FUN_147ca6a92 body=31 status=ok
// SIG undefined FUN_147ca6a92(void)

undefined8 FUN_147ca6a92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca6ab8 FUN_147ca6ab8 body=29 status=ok
// SIG undefined FUN_147ca6ab8(void)

bool FUN_147ca6ab8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ca6ad6 FUN_147ca6ad6 body=26 status=ok
// SIG undefined FUN_147ca6ad6(void)

bool FUN_147ca6ad6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ca6af0 FUN_147ca6af0 body=93 status=ok
// SIG undefined FUN_147ca6af0(void)

void FUN_147ca6af0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa4d440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ca6b4e FUN_147ca6b4e body=126 status=ok
// SIG undefined FUN_147ca6b4e(void)

void FUN_147ca6b4e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa4d440;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ca6bbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ca6bcc FUN_147ca6bcc body=142 status=ok
// SIG undefined FUN_147ca6bcc(void)

bool FUN_147ca6bcc(longlong param_1)

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



// FUNCTION 147ca6c5c FUN_147ca6c5c body=62 status=ok
// SIG undefined FUN_147ca6c5c(void)

void FUN_147ca6c5c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ca6c9a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147ca6c9a FUN_147ca6c9a body=93 status=ok
// SIG undefined FUN_147ca6c9a(void)

ulonglong FUN_147ca6c9a(uint param_1,uint param_2)

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



// FUNCTION 147ca6cf8 FUN_147ca6cf8 body=132 status=ok
// SIG undefined FUN_147ca6cf8(void)

void FUN_147ca6cf8(longlong param_1,int param_2)

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



// FUNCTION 147ca6d7e FUN_147ca6d7e body=351 status=ok
// SIG undefined FUN_147ca6d7e(void)

void FUN_147ca6d7e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint local_64;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar6 = (longlong)(int)uVar2;
  if (lVar6 != 0) {
    plVar3 = (longlong *)*param_1;
    lVar5 = 0;
    if (*plVar3 != 0) {
      lVar5 = plVar3[1];
    }
    lVar4 = *(longlong *)*param_2;
    lVar11 = 0;
    if (lVar4 != 0) {
      lVar11 = ((longlong *)*param_2)[1];
    }
    local_64 = 0;
    bVar7 = *plVar3 == lVar4 && lVar5 == lVar11;
    uVar13 = 0;
    do {
      uVar8 = (ulonglong)uVar13;
      uVar10 = uVar13 + 1;
      if ((int)(uVar13 + 1) < (int)uVar2) {
        uVar10 = uVar2;
      }
      plVar12 = plVar3 + uVar8 * 2 + 3;
      uVar14 = uVar13;
      uVar9 = uVar8;
      do {
        uVar9 = uVar9 + 1;
        uVar15 = uVar10;
        if (lVar6 <= (longlong)uVar9) break;
        plVar1 = plVar12 + -1;
        lVar5 = 0;
        if (*plVar1 != 0) {
          lVar5 = *plVar12;
        }
        lVar4 = *(longlong *)*param_2;
        lVar11 = 0;
        if (lVar4 != 0) {
          lVar11 = ((longlong *)*param_2)[1];
        }
        uVar14 = uVar14 + 1;
        plVar12 = plVar12 + 2;
        uVar15 = uVar14;
      } while (bVar7 == (*plVar1 == lVar4 && lVar5 == lVar11));
      if (bVar7 == false) {
        if (local_64 != uVar13) {
          memmove(plVar3 + (longlong)(int)local_64 * 2,plVar3 + uVar8 * 2,
                  (longlong)(int)(uVar15 - uVar13) << 4);
        }
        local_64 = local_64 + (uVar15 - uVar13);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      uVar13 = uVar15;
    } while ((longlong)uVar9 < lVar6);
    *(uint *)(param_1 + 1) = local_64;
  }
  return;
}



// FUNCTION 147ca6ede FUN_147ca6ede body=48 status=ok
// SIG undefined FUN_147ca6ede(void)

void FUN_147ca6ede(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147ca6f0e FUN_147ca6f0e body=93 status=ok
// SIG undefined FUN_147ca6f0e(void)

void FUN_147ca6f0e(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14a5af930;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 3)])(param_1 + 1);
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 147ca6f6c FUN_147ca6f6c body=115 status=ok
// SIG undefined FUN_147ca6f6c(void)

void FUN_147ca6f6c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147ca6fdf FUN_147ca6fdf body=138 status=ok
// SIG undefined FUN_147ca6fdf(void)

void FUN_147ca6fdf(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + lVar3);
      *puVar1 = &PTR_FUN_14a184370;
      bVar2 = *(byte *)(param_2 + 0x18 + lVar3);
      *(byte *)(puVar1 + 3) = bVar2;
      (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar2])(puVar1 + 1,param_2 + 8 + lVar3);
      *puVar1 = &PTR_FUN_14a5af930;
      lVar3 = lVar3 + 0x30;
      puVar1[4] = 0;
      puVar1[5] = 0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147ca706a FUN_147ca706a body=115 status=ok
// SIG undefined FUN_147ca706a(void)

void FUN_147ca706a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147ca70de FUN_147ca70de body=31 status=ok
// SIG undefined FUN_147ca70de(void)

undefined8 FUN_147ca70de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca7120 FUN_147ca7120 body=93 status=ok
// SIG undefined FUN_147ca7120(void)

void FUN_147ca7120(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa4d520;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa4d4b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147ca717e FUN_147ca717e body=93 status=ok
// SIG undefined FUN_147ca717e(void)

void FUN_147ca717e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa4d520;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa4d4b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147ca71dc FUN_147ca71dc body=126 status=ok
// SIG undefined FUN_147ca71dc(void)

void FUN_147ca71dc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aa4d520;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa4d4b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ca724b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ca725a FUN_147ca725a body=123 status=ok
// SIG undefined FUN_147ca725a(void)

undefined8
FUN_147ca725a(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x18);
  local_20 = *param_2;
  *param_2 = 0;
  local_18 = (undefined4)param_2[1];
  local_14 = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  (*pcVar1)(&local_20,param_3,param_4,param_5);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca72d8 FUN_147ca72d8 body=90 status=ok
// SIG undefined FUN_147ca72d8(void)

void FUN_147ca72d8(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
    if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0xc0),
              (longlong)*(int *)((longlong)param_1 + 200) << 3);
      FUN_1446efa72((longlong)param_1 + 0xc0,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 147ca7332 FUN_147ca7332 body=141 status=ok
// SIG undefined FUN_147ca7332(void)

void FUN_147ca7332(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,8);
  return;
}



// FUNCTION 147ca7512 FUN_147ca7512 body=119 status=ok
// SIG undefined FUN_147ca7512(void)

void FUN_147ca7512(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x18;
    if (0x18 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_147ca7332(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147ca758a FUN_147ca758a body=300 status=ok
// SIG undefined FUN_147ca758a(void)

longlong * FUN_147ca758a(longlong *param_1,longlong param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x4a0,0x10);
  FUN_147ca76b8(plVar3);
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_147ca7828(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_147ca7649;
    param_1[1] = 0;
LAB_147ca7613:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147ca7649;
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
      if (plVar4 == (longlong *)0x0) goto LAB_147ca7649;
      goto LAB_147ca7613;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147ca7649;
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
LAB_147ca7649:
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
  local_38 = 0x490;
  FUN_140a52e78(*param_1,"SVirtualJoystick",".\\Runtime/Engine/Private/PlayerController.cpp",0x4c7);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca76b8 FUN_147ca76b8 body=165 status=ok
// SIG undefined FUN_147ca76b8(void)

undefined8 * FUN_147ca76b8(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14aa4d590;
  memset(param_1 + 2,0,0x490);
  FUN_140a560dc(param_1 + 2);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  param_1[2] = &PTR_FUN_14aa4d5b0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0x200000000;
  param_1[0x8e] = 0x3dcccccd3f800000;
  param_1[0x8f] = 0x400000003f000000;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 3;
  *(undefined4 *)(param_1 + 0x92) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x93) = 0;
  return param_1;
}



// FUNCTION 147ca775e FUN_147ca775e body=45 status=ok
// SIG undefined FUN_147ca775e(void)

void FUN_147ca775e(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14aa4d5b0;
  FUN_147ca77ea(param_1 + 0x1f0);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 147ca778c FUN_147ca778c body=29 status=ok
// SIG undefined FUN_147ca778c(void)

undefined8 FUN_147ca778c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca77aa FUN_147ca77aa body=63 status=ok
// SIG undefined FUN_147ca77aa(void)

undefined8 * FUN_147ca77aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa4d5b0;
  FUN_147ca77ea(param_1 + 0x3c);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca77ea FUN_147ca77ea body=62 status=ok
// SIG undefined FUN_147ca77ea(void)

void FUN_147ca77ea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x270);
  if (*(longlong *)(param_1 + 0x270) == 0) {
    lVar1 = param_1;
  }
  FUN_146abe3d0(lVar1,*(undefined4 *)(param_1 + 0x278));
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147ca7828 FUN_147ca7828 body=167 status=ok
// SIG undefined FUN_147ca7828(void)

void FUN_147ca7828(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147ca78a3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147ca78a3;
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
LAB_147ca78a3:
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
                    /* WARNING: Could not recover jumptable at 0x000147ca78c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147ca78d0 FUN_147ca78d0 body=97 status=ok
// SIG undefined FUN_147ca78d0(void)

ulonglong FUN_147ca78d0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147ca7932 FUN_147ca7932 body=96 status=ok
// SIG undefined FUN_147ca7932(void)

void FUN_147ca7932(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147ca7992 FUN_147ca7992 body=31 status=ok
// SIG undefined FUN_147ca7992(void)

undefined8 FUN_147ca7992(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca79b8 FUN_147ca79b8 body=29 status=ok
// SIG undefined FUN_147ca79b8(void)

bool FUN_147ca79b8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ca79d6 FUN_147ca79d6 body=26 status=ok
// SIG undefined FUN_147ca79d6(void)

bool FUN_147ca79d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ca79f0 FUN_147ca79f0 body=101 status=ok
// SIG undefined FUN_147ca79f0(void)

void FUN_147ca79f0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa4d800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ca7a56 FUN_147ca7a56 body=134 status=ok
// SIG undefined FUN_147ca7a56(void)

void FUN_147ca7a56(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa4d800;
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
                    /* WARNING: Could not recover jumptable at 0x000147ca7acd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ca7adc FUN_147ca7adc body=146 status=ok
// SIG undefined FUN_147ca7adc(void)

bool FUN_147ca7adc(longlong param_1)

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



// FUNCTION 147ca7b70 FUN_147ca7b70 body=103 status=ok
// SIG undefined FUN_147ca7b70(void)

void FUN_147ca7b70(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x70 + lVar1);
  FUN_147a99aaa(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x70),(longlong)iVar3 * 0x70);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147ca7bd8 FUN_147ca7bd8 body=62 status=ok
// SIG undefined FUN_147ca7bd8(void)

void FUN_147ca7bd8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ca7c16(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,8);
  }
  return;
}



// FUNCTION 147ca7c16 FUN_147ca7c16 body=104 status=ok
// SIG undefined FUN_147ca7c16(void)

ulonglong FUN_147ca7c16(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x70) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147ca7c4c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x70,8);
      param_2 = param_2 / 0x70;
    }
  }
LAB_147ca7c4c:
  return param_2 & 0xffffffff;
}



// FUNCTION 147ca7c7e FUN_147ca7c7e body=112 status=ok
// SIG undefined FUN_147ca7c7e(void)

undefined8 *
FUN_147ca7c7e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  *param_1 = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 1);
  param_1[1] = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 147ca7cee FUN_147ca7cee body=143 status=ok
// SIG undefined FUN_147ca7cee(void)

void FUN_147ca7cee(longlong param_1,int param_2)

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



// FUNCTION 147ca7d7e FUN_147ca7d7e body=48 status=ok
// SIG undefined FUN_147ca7d7e(void)

void FUN_147ca7d7e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x70,8);
  }
  return;
}



// FUNCTION 147ca7dae FUN_147ca7dae body=186 status=ok
// SIG undefined FUN_147ca7dae(void)

undefined8 FUN_147ca7dae(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  uint *puVar7;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  plVar3 = (longlong *)FUN_140633c48(param_1,&local_28);
  if (plVar3 != (longlong *)0x0) {
    iVar2 = FUN_140b132ac(plVar3,param_3);
    if ((0 < iVar2) && ((int)plVar3[9] != 0)) {
      plVar5 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[8];
      }
      puVar7 = (uint *)((longlong)plVar5 + (longlong)(int)((int)plVar3[9] - 1U & param_3) * 4);
      uVar4 = 0;
      do {
        lVar6 = (longlong)(int)*puVar7;
        if (lVar6 == -1) goto LAB_147ca7e4a;
        puVar1 = (uint *)(*plVar3 + lVar6 * 0x18);
        puVar7 = puVar1 + 4;
      } while (*puVar1 != param_3);
      uVar4 = *(undefined8 *)(*plVar3 + 8 + lVar6 * 0x18);
      goto LAB_147ca7e4a;
    }
  }
  uVar4 = 0;
LAB_147ca7e4a:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca7e6a FUN_147ca7e6a body=62 status=ok
// SIG undefined FUN_147ca7e6a(void)

void FUN_147ca7e6a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ca7ea8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 147ca7ea8 FUN_147ca7ea8 body=93 status=ok
// SIG undefined FUN_147ca7ea8(void)

ulonglong FUN_147ca7ea8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 147ca7f06 FUN_147ca7f06 body=14 status=ok
// SIG undefined FUN_147ca7f06(void)

void FUN_147ca7f06(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 147ca7f14 FUN_147ca7f14 body=29 status=ok
// SIG undefined FUN_147ca7f14(void)

undefined8 FUN_147ca7f14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca7f32 FUN_147ca7f32 body=31 status=ok
// SIG undefined FUN_147ca7f32(void)

undefined8 FUN_147ca7f32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ca7f6c FUN_147ca7f6c body=29 status=ok
// SIG undefined FUN_147ca7f6c(void)

bool FUN_147ca7f6c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ca7f8a FUN_147ca7f8a body=26 status=ok
// SIG undefined FUN_147ca7f8a(void)

bool FUN_147ca7f8a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ca7fa4 FUN_147ca7fa4 body=24 status=ok
// SIG undefined FUN_147ca7fa4(void)

bool FUN_147ca7fa4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ca7fbc FUN_147ca7fbc body=101 status=ok
// SIG undefined FUN_147ca7fbc(void)

void FUN_147ca7fbc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa4d890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ca8022 FUN_147ca8022 body=101 status=ok
// SIG undefined FUN_147ca8022(void)

void FUN_147ca8022(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa4d890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ca8088 FUN_147ca8088 body=134 status=ok
// SIG undefined FUN_147ca8088(void)

void FUN_147ca8088(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aa4d890;
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
                    /* WARNING: Could not recover jumptable at 0x000147ca80ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ca810e FUN_147ca810e body=52 status=ok
// SIG undefined FUN_147ca810e(void)

void FUN_147ca810e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ca813f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2);
  return;
}



// FUNCTION 147ca8142 FUN_147ca8142 body=162 status=ok
// SIG undefined FUN_147ca8142(void)

bool FUN_147ca8142(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 147ca81e6 FUN_147ca81e6 body=426 status=ok
// SIG undefined FUN_147ca81e6(void)

void FUN_147ca81e6(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1447a08a2(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1447cc1b4(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0xc + -8);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -3;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
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
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 147ca8392 FUN_147ca8392 body=63 status=ok
// SIG undefined FUN_147ca8392(void)

void FUN_147ca8392(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147ca83d2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147ca83d2 FUN_147ca83d2 body=97 status=ok
// SIG undefined FUN_147ca83d2(void)

ulonglong FUN_147ca83d2(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147ca8434 FUN_147ca8434 body=132 status=ok
// SIG undefined FUN_147ca8434(void)

void FUN_147ca8434(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x388);
  if (param_2 <= (int)uVar1) {
    iVar6 = 0x10;
    if (0x10 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x38c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x38,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 3;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x38c) = iVar6;
    FUN_147ca84ba(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147ca84ba FUN_147ca84ba body=141 status=ok
// SIG undefined FUN_147ca84ba(void)

void FUN_147ca84ba(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x380);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x380,0,param_3,0x38);
    memmove(*(void **)((longlong)param_1 + 0x380),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x380,param_2,param_3,0x38);
  return;
}



// FUNCTION 147ca8548 FUN_147ca8548 body=142 status=ok
// SIG undefined FUN_147ca8548(void)

void FUN_147ca8548(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa3a5a0;
  FUN_147ca85d6(param_1 + 0x38);
  FUN_14476820c(param_1 + 0x32);
  FUN_14476820c(param_1 + 0x2c);
  FUN_14476820c(param_1 + 0x26);
  FUN_14476820c(param_1 + 0x20);
  FUN_14476820c(param_1 + 0x1a);
  FUN_14476820c(param_1 + 0x14);
  FUN_14476820c(param_1 + 0xe);
  FUN_14476820c(param_1 + 8);
  FUN_14476820c(param_1 + 2);
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 147ca85d6 FUN_147ca85d6 body=85 status=ok
// SIG undefined FUN_147ca85d6(void)

void FUN_147ca85d6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147ca8632 FUN_147ca8632 body=175 status=ok
// SIG undefined FUN_147ca8632(void)

bool FUN_147ca8632(undefined8 param_1,undefined8 *param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (longlong *)*param_2;
  local_28 = (longlong *)param_2[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar5 = (**(code **)(*local_30 + 0x40))();
  pbVar6 = (byte *)FUN_147cc0da0(param_1,uVar5,&local_30);
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  bVar3 = *pbVar6;
  *pbVar6 = bVar3 | param_3;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_3 != 8 && (bVar3 & 7) == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca86e2 FUN_147ca86e2 body=275 status=ok
// SIG undefined FUN_147ca86e2(void)

byte FUN_147ca86e2(longlong *param_1,undefined8 *param_2,byte param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  byte bVar9;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (longlong *)*param_2;
  plVar6 = (longlong *)param_2[1];
  if (plVar6 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_30 = plVar6;
  }
  uVar2 = (**(code **)(*local_38 + 0x40))();
  plVar4 = param_1;
  iVar3 = FUN_147cc0e26(param_1,uVar2,&local_38);
  plVar5 = local_30;
  bVar9 = (byte)plVar4;
  if (iVar3 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar3 * 0x20 + *param_1;
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      plVar4 = local_30;
      (**(code **)*local_30)(local_30);
      bVar9 = (byte)plVar4;
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        bVar9 = (byte)plVar5;
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      plVar5 = plVar6;
      (**(code **)*plVar6)(plVar6);
      bVar9 = (byte)plVar5;
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        bVar9 = (byte)plVar6;
      }
    }
  }
  if (lVar8 != 0) {
    bVar9 = *(byte *)(lVar8 + 0x10);
    bVar7 = ~param_3 & bVar9;
    *(byte *)(lVar8 + 0x10) = bVar7;
    if ((bVar9 & 7) == 0) {
      bVar9 = 0;
    }
    else {
      bVar9 = (bVar7 & 7) == 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8 != 0 & bVar9;
}



// FUNCTION 147ca87f6 FUN_147ca87f6 body=220 status=ok
// SIG undefined FUN_147ca87f6(void)

void FUN_147ca87f6(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  byte local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1408e4d18(param_3,local_68);
  cVar3 = FUN_147ca8632(param_1,local_68,1);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if (cVar3 != '\0') {
    local_58 = &PTR_FUN_14a184370;
    local_40 = *(byte *)(param_3 + 0x18);
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_40])(local_50,param_3 + 8);
    local_58 = &PTR_FUN_14a5af930;
    local_38 = 0;
    uStack_30 = 0;
    (**(code **)(*param_2 + 0xc20))(param_2,&local_58);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca88d4 FUN_147ca88d4 body=220 status=ok
// SIG undefined FUN_147ca88d4(void)

void FUN_147ca88d4(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  byte local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1408e4d18(param_3,local_68);
  cVar3 = FUN_147ca86e2(param_1,local_68,1);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if (cVar3 != '\0') {
    local_58 = &PTR_FUN_14a184370;
    local_40 = *(byte *)(param_3 + 0x18);
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_40])(local_50,param_3 + 8);
    local_58 = &PTR_FUN_14a5af930;
    local_38 = 0;
    uStack_30 = 0;
    (**(code **)(*param_2 + 0xc28))(param_2,&local_58);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca89b2 FUN_147ca89b2 body=326 status=ok
// SIG undefined FUN_147ca89b2(void)

void FUN_147ca89b2(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  byte local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1408e4d18(param_3,local_68);
  cVar4 = FUN_147ca8632(param_1,local_68,4);
  plVar3 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (cVar4 != '\0') {
    local_58 = &PTR_FUN_14a184370;
    local_40 = *(byte *)(param_3 + 0x18);
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_40])(local_50,param_3 + 8);
    local_58 = &PTR_FUN_14a5af930;
    local_38 = 0;
    uStack_30 = 0;
    (**(code **)(*param_2 + 0xc20))(param_2,&local_58);
  }
  lVar5 = (**(code **)(*param_2 + 0xc48))(param_2,param_3);
  if (lVar5 != 0) {
    FUN_1408e4d18(param_2[0x73] + 0x3a0,local_68);
    FUN_147ca8632(lVar5 + 0x5a8,local_68,8);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_60 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca8afa FUN_147ca8afa body=326 status=ok
// SIG undefined FUN_147ca8afa(void)

void FUN_147ca8afa(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  byte local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1408e4d18(param_3,local_68);
  cVar4 = FUN_147ca86e2(param_1,local_68,4);
  plVar3 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (cVar4 != '\0') {
    local_58 = &PTR_FUN_14a184370;
    local_40 = *(byte *)(param_3 + 0x18);
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_40])(local_50,param_3 + 8);
    local_58 = &PTR_FUN_14a5af930;
    local_38 = 0;
    uStack_30 = 0;
    (**(code **)(*param_2 + 0xc28))(param_2,&local_58);
  }
  lVar5 = (**(code **)(*param_2 + 0xc48))(param_2,param_3);
  if (lVar5 != 0) {
    FUN_1408e4d18(param_2[0x73] + 0x3a0,local_68);
    FUN_147ca86e2(lVar5 + 0x5a8,local_68,8);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_60 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca8c42 FUN_147ca8c42 body=274 status=ok
// SIG undefined FUN_147ca8c42(void)

bool FUN_147ca8c42(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plStack_30 = *(longlong **)(param_2 + 0x10);
  if (plStack_30 == (longlong *)0x0) {
LAB_147ca8c6a:
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar7 = (int)plStack_30[1];
    do {
      if (iVar7 == 0) goto LAB_147ca8c6a;
      LOCK();
      iVar5 = (int)plStack_30[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plStack_30 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    local_38 = *(longlong **)(param_2 + 8);
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  plVar4 = plStack_30;
  uVar6 = (**(code **)(*local_38 + 0x40))();
  iVar7 = FUN_147cc0e26(param_1,uVar6,&local_38);
  plVar3 = plStack_30;
  if (iVar7 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar7 * 0x20 + *param_1;
  }
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
  if (!bVar9) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (lVar8 == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = *(char *)(lVar8 + 0x10) != '\0';
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9;
}



// FUNCTION 147ca8d5e FUN_147ca8d5e body=200 status=ok
// SIG undefined FUN_147ca8d5e(void)

void FUN_147ca8d5e(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined1 local_58 [16];
  byte local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = &PTR_FUN_14a184370;
  local_48 = *(byte *)(param_1 + 0x3b8);
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_48])(local_58,param_1 + 0x3a8);
  local_60 = &PTR_FUN_14a5af930;
  local_40 = 0;
  uStack_38 = 0;
  FUN_141238a10(param_3,&local_60);
  local_60 = &PTR_FUN_14a5af930;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(local_58);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca8e9a FUN_147ca8e9a body=81 status=ok
// SIG undefined FUN_147ca8e9a(void)

void FUN_147ca8e9a(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = *(longlong *)(param_1 + 0x168);
  if (lVar2 != 0) {
    lVar1 = FUN_144a75eb4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147ca8ee1;
  }
  lVar2 = 0;
LAB_147ca8ee1:
  *param_3 = lVar2;
  return;
}



// FUNCTION 147ca8f06 FUN_147ca8f06 body=139 status=ok
// SIG undefined FUN_147ca8f06(void)

void FUN_147ca8f06(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141220240(param_1,&local_28);
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



// FUNCTION 147ca90e8 FUN_147ca90e8 body=109 status=ok
// SIG undefined FUN_147ca90e8(void)

void FUN_147ca90e8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x6e0))();
  local_28 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cafa688);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca9156 FUN_147ca9156 body=242 status=ok
// SIG undefined FUN_147ca9156(void)

void FUN_147ca9156(longlong *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *(byte *)(param_2 + 0x39a);
  FUN_144a62f0c(param_1,param_1[5],0xe);
  *(byte *)((longlong)param_1 + 0x39a) = *(byte *)((longlong)param_1 + 0x39a) & 0xfd | bVar1 & 2;
  bVar1 = *(byte *)(param_2 + 0x39a);
  FUN_144a62f0c(param_1,param_1[5],0xf);
  *(byte *)((longlong)param_1 + 0x39a) = *(byte *)((longlong)param_1 + 0x39a) & 0xfb | bVar1 & 4;
  FUN_144a62f0c(param_1,param_1[5],0x14);
  FUN_141238a10(param_1 + 0x74,param_2 + 0x3a0);
  (**(code **)(*param_1 + 0x6f8))(param_1);
  FUN_141220240(param_2,local_38);
  (**(code **)(*param_1 + 0x690))(param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca924a FUN_147ca924a body=52 status=ok
// SIG undefined FUN_147ca924a(void)

void FUN_147ca924a(longlong param_1,char param_2)

{
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0xf);
  *(byte *)(param_1 + 0x39a) = *(byte *)(param_1 + 0x39a) & 0xfb | param_2 << 2;
  return;
}



// FUNCTION 147ca927e FUN_147ca927e body=348 status=ok
// SIG undefined FUN_147ca927e(void)

void FUN_147ca927e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_1 + 0x390);
  FUN_144a62f0c(param_2,param_2[5],0xb);
  *(undefined4 *)(param_2 + 0x72) = uVar1;
  uVar2 = *(undefined1 *)(param_1 + 0x398);
  FUN_144a62f0c(param_2,param_2[5],0xd);
  *(undefined1 *)(param_2 + 0x73) = uVar2;
  *(undefined4 *)(param_2 + 0x7b) = *(undefined4 *)(param_1 + 0x3d8);
  uVar1 = *(undefined4 *)(param_1 + 0x394);
  FUN_144a62f0c(param_2,param_2[5],0xc);
  *(undefined4 *)((longlong)param_2 + 0x394) = uVar1;
  FUN_144a62f0c(param_2,param_2[5],0x14);
  FUN_141238a10(param_2 + 0x74,param_1 + 0x3a0);
  (**(code **)(*param_2 + 0x6f8))(param_2);
  FUN_141220240(param_1,local_50);
  (**(code **)(*param_2 + 0x690))(param_2,local_50);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x39c);
  FUN_144a62f0c(param_2,param_2[5],0x13);
  *(undefined4 *)((longlong)param_2 + 0x39c) = uVar1;
  iVar3 = *(int *)(param_1 + 1000) + -1;
  if (*(int *)(param_1 + 1000) == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(param_2 + 0x7c,*(undefined8 *)(param_1 + 0x3e0),iVar3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca93de FUN_147ca93de body=52 status=ok
// SIG undefined FUN_147ca93de(void)

void FUN_147ca93de(longlong param_1,char param_2)

{
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x10);
  *(byte *)(param_1 + 0x39a) = *(byte *)(param_1 + 0x39a) & 0xf7 | param_2 << 3;
  return;
}



// FUNCTION 147ca9414 FUN_147ca9414 body=83 status=ok
// SIG undefined FUN_147ca9414(void)

void FUN_147ca9414(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_1447210f0();
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x178), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x690))(plVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147ca945c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar2 + 0x178) + 0x688))(*(longlong **)(lVar2 + 0x178),param_1);
    return;
  }
  return;
}



// FUNCTION 147ca9468 FUN_147ca9468 body=59 status=ok
// SIG undefined FUN_147ca9468(void)

void FUN_147ca9468(longlong *param_1)

{
  FUN_1478b8668();
  FUN_144a62f0c(param_1,param_1[5],0xb);
  *(undefined4 *)(param_1 + 0x72) = 0;
                    /* WARNING: Could not recover jumptable at 0x000147ca949c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x578))(param_1);
  return;
}



// FUNCTION 147ca94a4 FUN_147ca94a4 body=22 status=ok
// SIG undefined FUN_147ca94a4(void)

undefined8 FUN_147ca94a4(undefined8 param_1,undefined8 param_2)

{
  FUN_141220240();
  return param_2;
}



// FUNCTION 147ca94ba FUN_147ca94ba body=89 status=ok
// SIG undefined FUN_147ca94ba(void)

undefined8 * FUN_147ca94ba(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x440);
  _Src = *(void **)(param_1 + 0x438);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 147ca9520 FUN_147ca9520 body=232 status=ok
// SIG undefined FUN_147ca9520(void)

longlong FUN_147ca9520(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  longlong local_b0;
  undefined1 local_a8 [24];
  undefined8 local_90;
  undefined1 local_78;
  byte local_74;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1411371f6(local_a8);
  local_90 = FUN_144a5270a(param_1);
  local_78 = 1;
  local_74 = local_74 | 0x40;
  uVar1 = FUN_1447210f0(param_1);
  local_b8 = local_a8;
  lVar2 = FUN_141137228(uVar1,param_1[2],0,0);
  if (lVar2 != 0) {
    (**(code **)(*param_1 + 0x6e8))(param_1,lVar2);
    local_b0 = lVar2;
    uVar1 = FUN_14477b072(param_1,DAT_14cafa678);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_b0);
  }
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca960a FUN_147ca960a body=152 status=ok
// SIG undefined FUN_147ca960a(void)

void FUN_147ca960a(longlong *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x6e8))();
  local_28 = param_2;
  uVar2 = FUN_14477b072(param_1,DAT_14cafa678);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_28);
  bVar1 = *(byte *)((longlong)param_1 + 0x39a);
  FUN_144a62f0c(param_2,*(undefined8 *)(param_2 + 0x28),0xf);
  *(byte *)(param_2 + 0x39a) = *(byte *)(param_2 + 0x39a) & 0xfb | bVar1 & 4;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca96a4 FUN_147ca96a4 body=52 status=ok
// SIG undefined FUN_147ca96a4(void)

void FUN_147ca96a4(longlong param_1,char param_2)

{
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x11);
  *(byte *)(param_1 + 0x39a) = *(byte *)(param_1 + 0x39a) & 0xdf | param_2 << 5;
  return;
}



// FUNCTION 147ca96d8 FUN_147ca96d8 body=52 status=ok
// SIG undefined FUN_147ca96d8(void)

void FUN_147ca96d8(longlong param_1,char param_2)

{
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x12);
  *(byte *)(param_1 + 0x39a) = *(byte *)(param_1 + 0x39a) & 0xbf | param_2 << 6;
  return;
}



// FUNCTION 147ca970c FUN_147ca970c body=61 status=ok
// SIG undefined FUN_147ca970c(void)

void FUN_147ca970c(longlong *param_1,undefined8 param_2)

{
  FUN_144a62f0c(param_1,param_1[5],0x14);
  FUN_141238a10(param_1 + 0x74,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147ca9742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6f8))(param_1);
  return;
}



// FUNCTION 147ca974a FUN_147ca974a body=402 status=ok
// SIG undefined FUN_147ca974a(void)

longlong * FUN_147ca974a(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
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
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = (longlong *)FUN_144a8054c();
  plVar5 = (longlong *)(**(code **)(*plVar4 + 0xf8))(plVar4);
  plVar4 = plVar5 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar4;
  if ((int)plVar5[5] == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = (int)plVar5[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar5;
  if ((iStack_54 != iVar6) || (uStack_60 != plVar4)) {
    do {
      puVar7 = (undefined8 *)((longlong)iStack_74 * 0x18 + *local_90);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1447a1bd6(param_1,iVar2);
      }
      lVar3 = *param_1;
      lVar8 = (longlong)iVar2 * 0x10;
      puVar1 = (undefined8 *)(lVar3 + lVar8);
      *(undefined8 *)(lVar3 + lVar8) = 0;
      iVar2 = *(int *)(puVar7 + 1);
      _Src = (void *)*puVar7;
      *(int *)(lVar3 + 8 + lVar8) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar2,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar5 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar4 || iStack_74 != iVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ca98de FUN_147ca98de body=26 status=ok
// SIG undefined FUN_147ca98de(void)

void FUN_147ca98de(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1427a267a();
                    /* WARNING: Could not recover jumptable at 0x000147ca98f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x98))(plVar1);
  return;
}



// FUNCTION 147ca98f8 FUN_147ca98f8 body=339 status=ok
// SIG undefined FUN_147ca98f8(void)

longlong * FUN_147ca98f8(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = (longlong *)FUN_144a8054c();
  (**(code **)(*plVar5 + 0xc0))(plVar5,&local_58);
  *param_1 = 0;
  param_1[1] = 0;
  if (local_50 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_50);
  }
  if (local_50 == 0) {
    local_50 = 0;
  }
  else {
    FUN_1408be2c4(param_1);
    lVar4 = local_58;
    lVar8 = (longlong)local_50;
    if (lVar8 == 0) {
      local_50 = 0;
    }
    else {
      lVar7 = 0;
      do {
        puVar6 = (undefined8 *)(**(code **)(**(longlong **)(lVar4 + lVar7) + 8))();
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1447a1bd6(param_1,iVar2);
        }
        lVar3 = *param_1;
        lVar9 = (longlong)iVar2 * 0x10;
        puVar1 = (undefined8 *)(lVar3 + lVar9);
        *(undefined8 *)(lVar3 + lVar9) = 0;
        iVar2 = *(int *)(puVar6 + 1);
        _Src = (void *)*puVar6;
        *(int *)(lVar3 + 8 + lVar9) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar2,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
        lVar7 = lVar7 + 0x10;
      } while (lVar8 * 0x10 != lVar7);
    }
  }
  FUN_140a4981e(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ca9a4e FUN_147ca9a4e body=212 status=ok
// SIG undefined FUN_147ca9a4e(void)

bool FUN_147ca9a4e(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_144a8054c();
  if (*param_1 == 0) {
    local_48[0] = 0;
    local_48[1] = 0;
  }
  else {
    FUN_140ba791a(param_1,local_48);
  }
  (**(code **)(*plVar2 + 0x78))(plVar2,&local_30,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30 != (longlong *)0x0) {
    uVar3 = (**(code **)(*local_30 + 8))(local_30);
    FUN_144a787a6(param_2,uVar3);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_30 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca9b24 FUN_147ca9b24 body=178 status=ok
// SIG undefined FUN_147ca9b24(void)

bool FUN_147ca9b24(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_144a8054c();
  local_38 = *param_1;
  local_30 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_30 = 0;
  }
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_28);
  if (local_28 != (longlong *)0x0) {
    uVar3 = (**(code **)(*local_28 + 0x18))(local_28);
    FUN_144a787a6(param_2,uVar3);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


