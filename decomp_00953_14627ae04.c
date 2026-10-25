// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14627ae04 FUN_14627ae04 body=316 status=ok
// SIG undefined FUN_14627ae04(void)

undefined8 FUN_14627ae04(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_30,param_3,param_4);
  if (*(int *)(param_1 + 0x2c0) != *(int *)(param_1 + 0x2ec)) {
    uVar1 = (uint)((ulonglong)local_30 >> 0x10);
    uVar4 = (uint)local_30 & 0xffff;
    lVar3 = param_1 + 0x2f0;
    if (*(longlong *)(param_1 + 0x2f8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x2f8);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x300) - 1U &
                             (int)((ulonglong)local_30 >> 0x20) + ((uint)local_30 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x2b8) + (longlong)iVar5 * 0x70;
        if (*(longlong *)(*(longlong *)(param_1 + 0x2b8) + (longlong)iVar5 * 0x70) == local_30) {
          if (lVar3 != 0) {
            FUN_144a87366(param_2,lVar3 + 8);
            goto LAB_14627aed9;
          }
          break;
        }
        iVar5 = *(int *)(lVar3 + 0x68);
      } while (iVar5 != -1);
    }
  }
  if ((*(longlong *)(param_1 + 0x3a8) == 0) ||
     (plVar2 = (longlong *)FUN_140a2b044(param_1 + 0x3a8), plVar2 == (longlong *)0x0)) {
    FUN_1412cd6d6(param_2,10);
  }
  else {
    (**(code **)(*plVar2 + 0x88))(plVar2,param_2,param_3,param_4);
  }
LAB_14627aed9:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14627af41 FUN_14627af41 body=49 status=ok
// SIG undefined FUN_14627af41(void)

longlong FUN_14627af41(void)

{
  if (DAT_14c96b4a8 == 0) {
    FUN_1409ce572(&DAT_14c96b4a8,&PTR_FUN_149edce10);
  }
  return DAT_14c96b4a8;
}



// FUNCTION 14627af72 FUN_14627af72 body=47 status=ok
// SIG undefined FUN_14627af72(void)

longlong FUN_14627af72(void)

{
  if (DAT_14c96b4c0 == 0) {
    FUN_1409ce572(&DAT_14c96b4c0,&PTR_FUN_149edce80);
  }
  return DAT_14c96b4c0;
}



// FUNCTION 14627afa1 FUN_14627afa1 body=47 status=ok
// SIG undefined FUN_14627afa1(void)

longlong FUN_14627afa1(void)

{
  if (DAT_14c96b4d8 == 0) {
    FUN_1409ce572(&DAT_14c96b4d8,&PTR_FUN_149edcf00);
  }
  return DAT_14c96b4d8;
}



// FUNCTION 14627afd0 FUN_14627afd0 body=49 status=ok
// SIG undefined FUN_14627afd0(void)

longlong FUN_14627afd0(void)

{
  if (DAT_14c96b4f0 == 0) {
    FUN_1409ce572(&DAT_14c96b4f0,&PTR_FUN_149edcf70);
  }
  return DAT_14c96b4f0;
}



// FUNCTION 14627b001 FUN_14627b001 body=49 status=ok
// SIG undefined FUN_14627b001(void)

longlong FUN_14627b001(void)

{
  if (DAT_14c96b508 == 0) {
    FUN_1409ce572(&DAT_14c96b508,&PTR_FUN_149edd000);
  }
  return DAT_14c96b508;
}



// FUNCTION 14627b032 FUN_14627b032 body=55 status=ok
// SIG undefined FUN_14627b032(void)

void FUN_14627b032(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b528 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b528 = FUN_140002ddd(FUN_14171ece3,uVar1,L"CheckBoxStyle");
  }
  return;
}



// FUNCTION 14627b06a FUN_14627b06a body=48 status=ok
// SIG undefined FUN_14627b06a(void)

void FUN_14627b06a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000950;
  *puVar1 = &PTR_FUN_149ee7360;
  return;
}



// FUNCTION 14627b09a FUN_14627b09a body=49 status=ok
// SIG undefined FUN_14627b09a(void)

longlong FUN_14627b09a(void)

{
  if (DAT_14c96b538 == 0) {
    FUN_1409ce572(&DAT_14c96b538,&PTR_FUN_149edda10);
  }
  return DAT_14c96b538;
}



// FUNCTION 14627b0cc FUN_14627b0cc body=55 status=ok
// SIG undefined FUN_14627b0cc(void)

void FUN_14627b0cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b558 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b558 = FUN_140002ddd(FUN_14171ed76,uVar1,L"TextBlockStyle");
  }
  return;
}



// FUNCTION 14627b104 FUN_14627b104 body=48 status=ok
// SIG undefined FUN_14627b104(void)

void FUN_14627b104(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002e0;
  *puVar1 = &PTR_FUN_149ee7550;
  return;
}



// FUNCTION 14627b134 FUN_14627b134 body=55 status=ok
// SIG undefined FUN_14627b134(void)

void FUN_14627b134(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b570 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b570 = FUN_140002ddd(FUN_14171eda7,uVar1,L"ButtonStyle");
  }
  return;
}



// FUNCTION 14627b16c FUN_14627b16c body=48 status=ok
// SIG undefined FUN_14627b16c(void)

void FUN_14627b16c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000370;
  *puVar1 = &PTR_FUN_149ee76b0;
  return;
}



// FUNCTION 14627b19c FUN_14627b19c body=55 status=ok
// SIG undefined FUN_14627b19c(void)

void FUN_14627b19c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b588 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b588 = FUN_140002ddd(FUN_14627b1d3,uVar1,L"ComboButtonStyle");
  }
  return;
}



// FUNCTION 14627b1d3 FUN_14627b1d3 body=49 status=ok
// SIG undefined FUN_14627b1d3(void)

longlong FUN_14627b1d3(void)

{
  if (DAT_14c96b580 == 0) {
    FUN_14086a14e(&DAT_14c96b580,&PTR_FUN_149ede648);
  }
  return DAT_14c96b580;
}



// FUNCTION 14627b204 FUN_14627b204 body=48 status=ok
// SIG undefined FUN_14627b204(void)

void FUN_14627b204(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000540;
  *puVar1 = &PTR_FUN_149ee7810;
  return;
}



// FUNCTION 14627b234 FUN_14627b234 body=55 status=ok
// SIG undefined FUN_14627b234(void)

void FUN_14627b234(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b5a0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b5a0 = FUN_140002ddd(FUN_14627b26b,uVar1,L"ComboBoxStyle");
  }
  return;
}



// FUNCTION 14627b26b FUN_14627b26b body=49 status=ok
// SIG undefined FUN_14627b26b(void)

longlong FUN_14627b26b(void)

{
  if (DAT_14c96b598 == 0) {
    FUN_14086a14e(&DAT_14c96b598,&PTR_FUN_149ede848);
  }
  return DAT_14c96b598;
}



// FUNCTION 14627b29c FUN_14627b29c body=48 status=ok
// SIG undefined FUN_14627b29c(void)

void FUN_14627b29c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000005a0;
  *puVar1 = &PTR_FUN_149ee7970;
  return;
}



// FUNCTION 14627b2cc FUN_14627b2cc body=55 status=ok
// SIG undefined FUN_14627b2cc(void)

void FUN_14627b2cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b5b8 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b5b8 = FUN_140002ddd(FUN_14627b303,uVar1,L"HyperlinkStyle");
  }
  return;
}



// FUNCTION 14627b303 FUN_14627b303 body=47 status=ok
// SIG undefined FUN_14627b303(void)

longlong FUN_14627b303(void)

{
  if (DAT_14c96b5b0 == 0) {
    FUN_14086a14e(&DAT_14c96b5b0,&PTR_FUN_149ede9a8);
  }
  return DAT_14c96b5b0;
}



// FUNCTION 14627b332 FUN_14627b332 body=48 status=ok
// SIG undefined FUN_14627b332(void)

void FUN_14627b332(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000670;
  *puVar1 = &PTR_FUN_149ee7ad0;
  return;
}



// FUNCTION 14627b362 FUN_14627b362 body=55 status=ok
// SIG undefined FUN_14627b362(void)

void FUN_14627b362(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b5d0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b5d0 = FUN_140002ddd(FUN_14627b399,uVar1,L"EditableTextStyle");
  }
  return;
}



// FUNCTION 14627b399 FUN_14627b399 body=49 status=ok
// SIG undefined FUN_14627b399(void)

longlong FUN_14627b399(void)

{
  if (DAT_14c96b5c8 == 0) {
    FUN_14086a14e(&DAT_14c96b5c8,&PTR_FUN_149edebb8);
  }
  return DAT_14c96b5c8;
}



// FUNCTION 14627b3ca FUN_14627b3ca body=48 status=ok
// SIG undefined FUN_14627b3ca(void)

void FUN_14627b3ca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000290;
  *puVar1 = &PTR_FUN_149ee7c30;
  return;
}



// FUNCTION 14627b3fa FUN_14627b3fa body=55 status=ok
// SIG undefined FUN_14627b3fa(void)

void FUN_14627b3fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b5e8 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b5e8 = FUN_140002ddd(FUN_14171edd8,uVar1,L"ScrollBarStyle");
  }
  return;
}



// FUNCTION 14627b432 FUN_14627b432 body=48 status=ok
// SIG undefined FUN_14627b432(void)

void FUN_14627b432(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000650;
  *puVar1 = &PTR_FUN_149ee7d90;
  return;
}



// FUNCTION 14627b462 FUN_14627b462 body=55 status=ok
// SIG undefined FUN_14627b462(void)

void FUN_14627b462(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b600 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b600 = FUN_140002ddd(FUN_14627b499,uVar1,L"EditableTextBoxStyle");
  }
  return;
}



// FUNCTION 14627b499 FUN_14627b499 body=49 status=ok
// SIG undefined FUN_14627b499(void)

longlong FUN_14627b499(void)

{
  if (DAT_14c96b5f8 == 0) {
    FUN_14086a14e(&DAT_14c96b5f8,&PTR_FUN_149edf4c0);
  }
  return DAT_14c96b5f8;
}



// FUNCTION 14627b4ca FUN_14627b4ca body=48 status=ok
// SIG undefined FUN_14627b4ca(void)

void FUN_14627b4ca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000c80;
  *puVar1 = &PTR_FUN_149ee7ef0;
  return;
}



// FUNCTION 14627b4fa FUN_14627b4fa body=55 status=ok
// SIG undefined FUN_14627b4fa(void)

void FUN_14627b4fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b618 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b618 = FUN_140002ddd(FUN_14627b531,uVar1,L"InlineEditableTextBlockStyle");
  }
  return;
}



// FUNCTION 14627b531 FUN_14627b531 body=47 status=ok
// SIG undefined FUN_14627b531(void)

longlong FUN_14627b531(void)

{
  if (DAT_14c96b610 == 0) {
    FUN_14086a14e(&DAT_14c96b610,&PTR_FUN_149edf5d0);
  }
  return DAT_14c96b610;
}



// FUNCTION 14627b560 FUN_14627b560 body=48 status=ok
// SIG undefined FUN_14627b560(void)

void FUN_14627b560(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000f70;
  *puVar1 = &PTR_FUN_149ee8050;
  return;
}



// FUNCTION 14627b590 FUN_14627b590 body=55 status=ok
// SIG undefined FUN_14627b590(void)

void FUN_14627b590(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b630 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b630 = FUN_140002ddd(FUN_14627b5c7,uVar1,L"ProgressBarStyle");
  }
  return;
}



// FUNCTION 14627b5c7 FUN_14627b5c7 body=49 status=ok
// SIG undefined FUN_14627b5c7(void)

longlong FUN_14627b5c7(void)

{
  if (DAT_14c96b628 == 0) {
    FUN_14086a14e(&DAT_14c96b628,&PTR_FUN_149edf7a8);
  }
  return DAT_14c96b628;
}



// FUNCTION 14627b5f8 FUN_14627b5f8 body=48 status=ok
// SIG undefined FUN_14627b5f8(void)

void FUN_14627b5f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000230;
  *puVar1 = &PTR_FUN_149ee81b0;
  return;
}



// FUNCTION 14627b628 FUN_14627b628 body=55 status=ok
// SIG undefined FUN_14627b628(void)

void FUN_14627b628(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b648 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b648 = FUN_140002ddd(FUN_14627b65f,uVar1,L"ExpandableAreaStyle");
  }
  return;
}



// FUNCTION 14627b65f FUN_14627b65f body=47 status=ok
// SIG undefined FUN_14627b65f(void)

longlong FUN_14627b65f(void)

{
  if (DAT_14c96b640 == 0) {
    FUN_14086a14e(&DAT_14c96b640,&PTR_FUN_149edf930);
  }
  return DAT_14c96b640;
}



// FUNCTION 14627b68e FUN_14627b68e body=48 status=ok
// SIG undefined FUN_14627b68e(void)

void FUN_14627b68e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000180;
  *puVar1 = &PTR_FUN_149ee8310;
  return;
}



// FUNCTION 14627b6be FUN_14627b6be body=55 status=ok
// SIG undefined FUN_14627b6be(void)

void FUN_14627b6be(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b660 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b660 = FUN_140002ddd(FUN_14627b6f5,uVar1,L"SearchBoxStyle");
  }
  return;
}



// FUNCTION 14627b6f5 FUN_14627b6f5 body=47 status=ok
// SIG undefined FUN_14627b6f5(void)

longlong FUN_14627b6f5(void)

{
  if (DAT_14c96b658 == 0) {
    FUN_14086a14e(&DAT_14c96b658,&PTR_FUN_149edfdd0);
  }
  return DAT_14c96b658;
}



// FUNCTION 14627b724 FUN_14627b724 body=48 status=ok
// SIG undefined FUN_14627b724(void)

void FUN_14627b724(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000fe0;
  *puVar1 = &PTR_FUN_149ee8470;
  return;
}



// FUNCTION 14627b754 FUN_14627b754 body=55 status=ok
// SIG undefined FUN_14627b754(void)

void FUN_14627b754(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b678 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b678 = FUN_140002ddd(FUN_14627b78b,uVar1,L"SliderStyle");
  }
  return;
}



// FUNCTION 14627b78b FUN_14627b78b body=49 status=ok
// SIG undefined FUN_14627b78b(void)

longlong FUN_14627b78b(void)

{
  if (DAT_14c96b670 == 0) {
    FUN_14086a14e(&DAT_14c96b670,&PTR_FUN_149ee0088);
  }
  return DAT_14c96b670;
}



// FUNCTION 14627b7bc FUN_14627b7bc body=48 status=ok
// SIG undefined FUN_14627b7bc(void)

void FUN_14627b7bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000440;
  *puVar1 = &PTR_FUN_149ee85d0;
  return;
}



// FUNCTION 14627b7ec FUN_14627b7ec body=55 status=ok
// SIG undefined FUN_14627b7ec(void)

void FUN_14627b7ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b690 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b690 = FUN_140002ddd(FUN_14627b823,uVar1,L"VolumeControlStyle");
  }
  return;
}



// FUNCTION 14627b823 FUN_14627b823 body=47 status=ok
// SIG undefined FUN_14627b823(void)

longlong FUN_14627b823(void)

{
  if (DAT_14c96b688 == 0) {
    FUN_14086a14e(&DAT_14c96b688,&PTR_FUN_149ee0308);
  }
  return DAT_14c96b688;
}



// FUNCTION 14627b852 FUN_14627b852 body=48 status=ok
// SIG undefined FUN_14627b852(void)

void FUN_14627b852(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000007c0;
  *puVar1 = &PTR_FUN_149ee8730;
  return;
}



// FUNCTION 14627b882 FUN_14627b882 body=55 status=ok
// SIG undefined FUN_14627b882(void)

void FUN_14627b882(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b6a8 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b6a8 = FUN_140002ddd(FUN_14627b8b9,uVar1,L"InlineTextImageStyle");
  }
  return;
}



// FUNCTION 14627b8b9 FUN_14627b8b9 body=47 status=ok
// SIG undefined FUN_14627b8b9(void)

longlong FUN_14627b8b9(void)

{
  if (DAT_14c96b6a0 == 0) {
    FUN_14086a14e(&DAT_14c96b6a0,&PTR_FUN_149ee0428);
  }
  return DAT_14c96b6a0;
}



// FUNCTION 14627b8e8 FUN_14627b8e8 body=48 status=ok
// SIG undefined FUN_14627b8e8(void)

void FUN_14627b8e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000d0;
  *puVar1 = &PTR_FUN_149ee8890;
  return;
}



// FUNCTION 14627b918 FUN_14627b918 body=55 status=ok
// SIG undefined FUN_14627b918(void)

void FUN_14627b918(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b6c0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b6c0 = FUN_140002ddd(FUN_14627b94f,uVar1,L"SpinBoxStyle");
  }
  return;
}



// FUNCTION 14627b94f FUN_14627b94f body=49 status=ok
// SIG undefined FUN_14627b94f(void)

longlong FUN_14627b94f(void)

{
  if (DAT_14c96b6b8 == 0) {
    FUN_14086a14e(&DAT_14c96b6b8,&PTR_FUN_149ee0800);
  }
  return DAT_14c96b6b8;
}



// FUNCTION 14627b980 FUN_14627b980 body=48 status=ok
// SIG undefined FUN_14627b980(void)

void FUN_14627b980(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000520;
  *puVar1 = &PTR_FUN_149ee89f0;
  return;
}



// FUNCTION 14627b9b0 FUN_14627b9b0 body=55 status=ok
// SIG undefined FUN_14627b9b0(void)

void FUN_14627b9b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b6d8 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b6d8 = FUN_140002ddd(FUN_14627b9e7,uVar1,L"SplitterStyle");
  }
  return;
}



// FUNCTION 14627b9e7 FUN_14627b9e7 body=47 status=ok
// SIG undefined FUN_14627b9e7(void)

longlong FUN_14627b9e7(void)

{
  if (DAT_14c96b6d0 == 0) {
    FUN_14086a14e(&DAT_14c96b6d0,&PTR_FUN_149ee0920);
  }
  return DAT_14c96b6d0;
}



// FUNCTION 14627ba16 FUN_14627ba16 body=48 status=ok
// SIG undefined FUN_14627ba16(void)

void FUN_14627ba16(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000170;
  *puVar1 = &PTR_FUN_149ee8b50;
  return;
}



// FUNCTION 14627ba46 FUN_14627ba46 body=55 status=ok
// SIG undefined FUN_14627ba46(void)

void FUN_14627ba46(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b6f0 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b6f0 = FUN_140002ddd(FUN_14627ba7d,uVar1,L"TableViewStyle");
  }
  return;
}



// FUNCTION 14627ba7d FUN_14627ba7d body=47 status=ok
// SIG undefined FUN_14627ba7d(void)

longlong FUN_14627ba7d(void)

{
  if (DAT_14c96b6e8 == 0) {
    FUN_14086a14e(&DAT_14c96b6e8,&PTR_FUN_149ee09d0);
  }
  return DAT_14c96b6e8;
}



// FUNCTION 14627baac FUN_14627baac body=48 status=ok
// SIG undefined FUN_14627baac(void)

void FUN_14627baac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000c0;
  *puVar1 = &PTR_FUN_149ee8cb0;
  return;
}



// FUNCTION 14627badc FUN_14627badc body=55 status=ok
// SIG undefined FUN_14627badc(void)

void FUN_14627badc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b708 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b708 = FUN_140002ddd(FUN_14627bb13,uVar1,L"TableRowStyle");
  }
  return;
}



// FUNCTION 14627bb13 FUN_14627bb13 body=49 status=ok
// SIG undefined FUN_14627bb13(void)

longlong FUN_14627bb13(void)

{
  if (DAT_14c96b700 == 0) {
    FUN_14086a14e(&DAT_14c96b700,&PTR_FUN_149ee1168);
  }
  return DAT_14c96b700;
}



// FUNCTION 14627bb44 FUN_14627bb44 body=48 status=ok
// SIG undefined FUN_14627bb44(void)

void FUN_14627bb44(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000b50;
  *puVar1 = &PTR_FUN_149ee8e10;
  return;
}



// FUNCTION 14627bb74 FUN_14627bb74 body=55 status=ok
// SIG undefined FUN_14627bb74(void)

void FUN_14627bb74(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b720 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b720 = FUN_140002ddd(FUN_14627bbab,uVar1,L"TableColumnHeaderStyle");
  }
  return;
}



// FUNCTION 14627bbab FUN_14627bbab body=49 status=ok
// SIG undefined FUN_14627bbab(void)

longlong FUN_14627bbab(void)

{
  if (DAT_14c96b718 == 0) {
    FUN_14086a14e(&DAT_14c96b718,&PTR_FUN_149ee1560);
  }
  return DAT_14c96b718;
}



// FUNCTION 14627bbdc FUN_14627bbdc body=48 status=ok
// SIG undefined FUN_14627bbdc(void)

void FUN_14627bbdc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000640;
  *puVar1 = &PTR_FUN_149ee8f70;
  return;
}



// FUNCTION 14627bc0c FUN_14627bc0c body=55 status=ok
// SIG undefined FUN_14627bc0c(void)

void FUN_14627bc0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b738 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b738 = FUN_140002ddd(FUN_14627bc43,uVar1,L"HeaderRowStyle");
  }
  return;
}



// FUNCTION 14627bc43 FUN_14627bc43 body=47 status=ok
// SIG undefined FUN_14627bc43(void)

longlong FUN_14627bc43(void)

{
  if (DAT_14c96b730 == 0) {
    FUN_14086a14e(&DAT_14c96b730,&PTR_FUN_149ee1890);
  }
  return DAT_14c96b730;
}



// FUNCTION 14627bc72 FUN_14627bc72 body=48 status=ok
// SIG undefined FUN_14627bc72(void)

void FUN_14627bc72(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000fa0;
  *puVar1 = &PTR_FUN_149ee90d0;
  return;
}



// FUNCTION 14627bca2 FUN_14627bca2 body=55 status=ok
// SIG undefined FUN_14627bca2(void)

void FUN_14627bca2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b750 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b750 = FUN_140002ddd(FUN_14627bcd9,uVar1,L"DockTabStyle");
  }
  return;
}



// FUNCTION 14627bcd9 FUN_14627bcd9 body=47 status=ok
// SIG undefined FUN_14627bcd9(void)

longlong FUN_14627bcd9(void)

{
  if (DAT_14c96b748 == 0) {
    FUN_14086a14e(&DAT_14c96b748,&PTR_FUN_149ee1f30);
  }
  return DAT_14c96b748;
}



// FUNCTION 14627bd08 FUN_14627bd08 body=48 status=ok
// SIG undefined FUN_14627bd08(void)

void FUN_14627bd08(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000bc0;
  *puVar1 = &PTR_FUN_149ee9230;
  return;
}



// FUNCTION 14627bd38 FUN_14627bd38 body=55 status=ok
// SIG undefined FUN_14627bd38(void)

void FUN_14627bd38(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b768 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b768 = FUN_140002ddd(FUN_14627bd6f,uVar1,L"ScrollBoxStyle");
  }
  return;
}



// FUNCTION 14627bd6f FUN_14627bd6f body=49 status=ok
// SIG undefined FUN_14627bd6f(void)

longlong FUN_14627bd6f(void)

{
  if (DAT_14c96b760 == 0) {
    FUN_14086a14e(&DAT_14c96b760,&PTR_FUN_149ee2228);
  }
  return DAT_14c96b760;
}



// FUNCTION 14627bda0 FUN_14627bda0 body=48 status=ok
// SIG undefined FUN_14627bda0(void)

void FUN_14627bda0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000002f0;
  *puVar1 = &PTR_FUN_149ee9390;
  return;
}



// FUNCTION 14627bdd0 FUN_14627bdd0 body=55 status=ok
// SIG undefined FUN_14627bdd0(void)

void FUN_14627bdd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b780 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b780 = FUN_140002ddd(FUN_14627be07,uVar1,L"ScrollBorderStyle");
  }
  return;
}



// FUNCTION 14627be07 FUN_14627be07 body=47 status=ok
// SIG undefined FUN_14627be07(void)

longlong FUN_14627be07(void)

{
  if (DAT_14c96b778 == 0) {
    FUN_14086a14e(&DAT_14c96b778,&PTR_FUN_149ee2338);
  }
  return DAT_14c96b778;
}



// FUNCTION 14627be36 FUN_14627be36 body=48 status=ok
// SIG undefined FUN_14627be36(void)

void FUN_14627be36(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000170;
  *puVar1 = &PTR_FUN_149ee94f0;
  return;
}



// FUNCTION 14627be66 FUN_14627be66 body=55 status=ok
// SIG undefined FUN_14627be66(void)

void FUN_14627be66(void)

{
  undefined8 uVar1;
  
  if (DAT_14c96b798 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c96b798 = FUN_140002ddd(FUN_14627be9d,uVar1,L"WindowStyle");
  }
  return;
}



// FUNCTION 14627be9d FUN_14627be9d body=47 status=ok
// SIG undefined FUN_14627be9d(void)

longlong FUN_14627be9d(void)

{
  if (DAT_14c96b790 == 0) {
    FUN_14086a14e(&DAT_14c96b790,&PTR_FUN_149ee2968);
  }
  return DAT_14c96b790;
}



// FUNCTION 14627becc FUN_14627becc body=48 status=ok
// SIG undefined FUN_14627becc(void)

void FUN_14627becc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000001600;
  *puVar1 = &PTR_FUN_149ee9650;
  return;
}



// FUNCTION 14627befc FUN_14627befc body=35 status=ok
// SIG undefined FUN_14627befc(void)

void FUN_14627befc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149ee2a20;
  return;
}



// FUNCTION 14627bf1f FUN_14627bf1f body=47 status=ok
// SIG undefined FUN_14627bf1f(void)

longlong FUN_14627bf1f(void)

{
  if (DAT_14c96b7b0 == 0) {
    FUN_14073dd9a(&DAT_14c96b7b0,&PTR_LAB_149ee29d8);
  }
  return DAT_14c96b7b0;
}



// FUNCTION 14627bf58 FUN_14627bf58 body=58 status=ok
// SIG undefined FUN_14627bf58(void)

undefined8 * FUN_14627bf58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ee3300;
  FUN_140ca8d78(param_1 + 2);
  FUN_140a581a0(param_1 + 0x70);
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  return param_1;
}



// FUNCTION 14627bf92 FUN_14627bf92 body=76 status=ok
// SIG undefined FUN_14627bf92(void)

undefined8 * FUN_14627bf92(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_149ee3300;
  FUN_141478cf2(param_1 + 2,param_2 + 0x10);
  FUN_140e9ea3a(param_1 + 0x70,param_2 + 0x380);
  uVar1 = *(undefined8 *)(param_2 + 0x668);
  param_1[0xcc] = *(undefined8 *)(param_2 + 0x660);
  param_1[0xcd] = uVar1;
  return param_1;
}



// FUNCTION 14627bfde FUN_14627bfde body=45 status=ok
// SIG undefined FUN_14627bfde(void)

void FUN_14627bfde(longlong param_1,undefined8 param_2)

{
  FUN_14122c7a8(param_1 + 0x10);
  FUN_14122c73c(param_1 + 0x380,param_2);
  return;
}



// FUNCTION 14627c00c FUN_14627c00c body=45 status=ok
// SIG undefined FUN_14627c00c(void)

void FUN_14627c00c(longlong param_1,undefined8 param_2)

{
  FUN_1412de1de(param_1 + 0x10);
  FUN_14122c73c(param_1 + 0xc90,param_2);
  return;
}



// FUNCTION 14627c03a FUN_14627c03a body=198 status=ok
// SIG undefined FUN_14627c03a(void)

void FUN_14627c03a(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_1412de1de(param_1 + 0x10);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xcf0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xda0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xe50;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xf00;
  return;
}



// FUNCTION 14627c100 FUN_14627c100 body=96 status=ok
// SIG undefined FUN_14627c100(void)

undefined8 * FUN_14627c100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eeb770;
  FUN_145931ccc(param_1 + 2);
  FUN_140ca8f8e(param_1 + 0x8a);
  FUN_140ca8f8e(param_1 + 0xa0);
  FUN_140ca8f8e(param_1 + 0xb6);
  FUN_140ca8f8e(param_1 + 0xcc);
  FUN_140ca8f8e(param_1 + 0xe2);
  return param_1;
}



// FUNCTION 14627c160 FUN_14627c160 body=201 status=ok
// SIG undefined FUN_14627c160(void)

undefined8 * FUN_14627c160(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_149ee3570;
  FUN_140e361c2(param_1 + 2,param_2 + 0x10);
  FUN_140e361c2(param_1 + 0x18,param_2 + 0xc0);
  FUN_140e361c2(param_1 + 0x2e,param_2 + 0x170);
  FUN_140e361c2(param_1 + 0x44,param_2 + 0x220);
  FUN_140e361c2(param_1 + 0x5a,param_2 + 0x2d0);
  FUN_140e361c2(param_1 + 0x70,param_2 + 0x380);
  FUN_140e361c2(param_1 + 0x86,param_2 + 0x430);
  uVar1 = *(undefined8 *)(param_2 + 0x4e8);
  uVar2 = *(undefined8 *)(param_2 + 0x4f0);
  uVar3 = *(undefined8 *)(param_2 + 0x4f8);
  uVar4 = *(undefined8 *)(param_2 + 0x500);
  uVar5 = *(undefined8 *)(param_2 + 0x508);
  param_1[0x9c] = *(undefined8 *)(param_2 + 0x4e0);
  param_1[0x9d] = uVar1;
  param_1[0x9e] = uVar2;
  param_1[0x9f] = uVar3;
  param_1[0xa0] = uVar4;
  param_1[0xa1] = uVar5;
  *(undefined4 *)(param_1 + 0xa2) = *(undefined4 *)(param_2 + 0x510);
  return param_1;
}



// FUNCTION 14627c22a FUN_14627c22a body=359 status=ok
// SIG undefined FUN_14627c22a(void)

void FUN_14627c22a(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_14122c7a8(param_1 + 0x10);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x380;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x430;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x4e0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x590;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x640;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x6f0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x7a0;
  return;
}



// FUNCTION 14627c392 FUN_14627c392 body=336 status=ok
// SIG undefined FUN_14627c392(void)

undefined8 * FUN_14627c392(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_149ee36c0;
  FUN_141478cf2(param_1 + 2,param_2 + 0x10);
  FUN_141478cf2(param_1 + 0x70,param_2 + 0x380);
  FUN_141478cf2(param_1 + 0xde,param_2 + 0x6f0);
  FUN_141478cf2(param_1 + 0x14c,param_2 + 0xa60);
  FUN_140e9ea3a(param_1 + 0x1ba,param_2 + 0xdd0);
  FUN_140e361c2(param_1 + 0x216,param_2 + 0x10b0);
  FUN_140e361c2(param_1 + 0x22c,param_2 + 0x1160);
  FUN_140e361c2(param_1 + 0x242,param_2 + 0x1210);
  uVar1 = *(undefined4 *)(param_2 + 0x12c4);
  uVar2 = *(undefined4 *)(param_2 + 0x12c8);
  uVar3 = *(undefined4 *)(param_2 + 0x12cc);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 0x12c0);
  *(undefined4 *)((longlong)param_1 + 0x12c4) = uVar1;
  *(undefined4 *)(param_1 + 0x259) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x12cc) = uVar3;
  *(undefined4 *)(param_1 + 0x25a) = *(undefined4 *)(param_2 + 0x12d0);
  FUN_140e361c2(param_1 + 0x25c,param_2 + 0x12e0);
  uVar1 = *(undefined4 *)(param_2 + 0x1394);
  uVar2 = *(undefined4 *)(param_2 + 0x1398);
  uVar3 = *(undefined4 *)(param_2 + 0x139c);
  *(undefined4 *)(param_1 + 0x272) = *(undefined4 *)(param_2 + 0x1390);
  *(undefined4 *)((longlong)param_1 + 0x1394) = uVar1;
  *(undefined4 *)(param_1 + 0x273) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x139c) = uVar3;
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_2 + 0x13a0);
  FUN_140e361c2(param_1 + 0x276,param_2 + 0x13b0);
  uVar1 = *(undefined4 *)(param_2 + 0x1464);
  uVar2 = *(undefined4 *)(param_2 + 0x1468);
  uVar3 = *(undefined4 *)(param_2 + 0x146c);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_2 + 0x1460);
  *(undefined4 *)((longlong)param_1 + 0x1464) = uVar1;
  *(undefined4 *)(param_1 + 0x28d) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x146c) = uVar3;
  *(undefined4 *)(param_1 + 0x28e) = *(undefined4 *)(param_2 + 0x1470);
  FUN_140e361c2(param_1 + 0x290,param_2 + 0x1480);
  FUN_140e361c2(param_1 + 0x2a6,param_2 + 0x1530);
  uVar4 = *(undefined8 *)(param_2 + 0x15e8);
  param_1[700] = *(undefined8 *)(param_2 + 0x15e0);
  param_1[0x2bd] = uVar4;
  *(undefined4 *)(param_1 + 0x2be) = *(undefined4 *)(param_2 + 0x15f0);
  return param_1;
}



// FUNCTION 14627c4e2 FUN_14627c4e2 body=419 status=ok
// SIG undefined FUN_14627c4e2(void)

void FUN_14627c4e2(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_14122c7a8(param_1 + 0x10);
  FUN_14122c7a8(param_1 + 0x380,param_2);
  FUN_14122c7a8(param_1 + 0x6f0,param_2);
  FUN_14122c7a8(param_1 + 0xa60,param_2);
  FUN_14122c73c(param_1 + 0xdd0,param_2);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10b0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x1160;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x1210;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x13b0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x12e0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x1480;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x1530;
  return;
}



// FUNCTION 14627c685 FUN_14627c685 body=46 status=ok
// SIG undefined FUN_14627c685(void)

void FUN_14627c685(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149ee37a0;
  puVar1[5] = &PTR_FUN_149ee3a40;
  return;
}



// FUNCTION 14627c6bd FUN_14627c6bd body=49 status=ok
// SIG undefined FUN_14627c6bd(void)

longlong FUN_14627c6bd(void)

{
  if (DAT_14c9751a0 == 0) {
    FUN_14073dd9a(&DAT_14c9751a0,&PTR_LAB_149ee3758);
  }
  return DAT_14c9751a0;
}



// FUNCTION 14627c6ee FUN_14627c6ee body=35 status=ok
// SIG undefined FUN_14627c6ee(void)

void FUN_14627c6ee(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149ee3b30;
  return;
}



// FUNCTION 14627c711 FUN_14627c711 body=47 status=ok
// SIG undefined FUN_14627c711(void)

longlong FUN_14627c711(void)

{
  if (DAT_14c9751b8 == 0) {
    FUN_14073dd9a(&DAT_14c9751b8,&PTR_LAB_149ee3ae8);
  }
  return DAT_14c9751b8;
}



// FUNCTION 14627c740 FUN_14627c740 body=141 status=ok
// SIG undefined FUN_14627c740(void)

undefined8 * FUN_14627c740(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = &local_18;
  local_18 = DAT_14c84635c;
  local_28 = 0;
  uStack_20 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = param_2;
  FUN_1412ce282(param_1,3,0);
  *param_1 = &PTR_FUN_149eeb480;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14627c7ce FUN_14627c7ce body=184 status=ok
// SIG undefined FUN_14627c7ce(void)

undefined8 * FUN_14627c7ce(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  local_70 = 0;
  local_78 = 0;
  local_58 = 0;
  local_68 = param_3;
  local_60 = param_2;
  FUN_1412ce282(param_1,4,0);
  *param_1 = &PTR_FUN_149eeb588;
  param_1[8] = 0x4020000000000000;
  param_1[9] = 0x4020000000000000;
  param_1[10] = 0x4020000000000000;
  param_1[0xb] = 0x4020000000000000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14627c888 FUN_14627c888 body=226 status=ok
// SIG undefined FUN_14627c888(void)

undefined8 * FUN_14627c888(undefined8 *param_1,byte *param_2)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  float *local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_14 = (float)param_2[3] * 0.003921569;
  local_18 = (float)*param_2 * 0.003921569;
  local_1c = (float)param_2[1] * 0.003921569;
  local_20 = (float)param_2[2] * 0.003921569;
  local_50 = &local_20;
  local_58 = &local_28;
  local_28 = DAT_14c84635c;
  local_38 = 0;
  uStack_30 = 0;
  local_60 = 0;
  local_68 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_1412ce282(param_1,3,0);
  *param_1 = &PTR_FUN_149eeb480;
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14627c96c FUN_14627c96c body=120 status=ok
// SIG undefined FUN_14627c96c(void)

undefined *
FUN_14627c96c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141160160(&local_28);
  local_38 = 1;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x98))(param_1,DAT_14c979ca0,local_28,param_4);
  if (puVar1 == (undefined *)0x0) {
    FUN_1469629fe();
    puVar1 = &DAT_14c96ef90;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14627c9e6 FUN_14627c9e6 body=200 status=ok
// SIG undefined FUN_14627c9e6(void)

undefined8 * FUN_14627c9e6(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_149eeb710;
  FUN_1414790b6(param_1 + 2,param_2 + 0x10);
  FUN_144a87366(param_1 + 0x192,param_2 + 0xc90);
  FUN_140e361c2(param_1 + 0x19e,param_2 + 0xcf0);
  FUN_140e361c2(param_1 + 0x1b4,param_2 + 0xda0);
  FUN_140e361c2(param_1 + 0x1ca,param_2 + 0xe50);
  FUN_140e361c2(param_1 + 0x1e0,param_2 + 0xf00);
  uVar2 = *(undefined8 *)(param_2 + 0xfb8);
  param_1[0x1f6] = *(undefined8 *)(param_2 + 0xfb0);
  param_1[0x1f7] = uVar2;
  cVar1 = *(char *)(param_2 + 0xfd0);
  *(char *)(param_1 + 0x1fa) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0xfc8);
    param_1[0x1f8] = *(undefined8 *)(param_2 + 0xfc0);
    param_1[0x1f9] = uVar2;
  }
  *(undefined1 *)((longlong)param_1 + 0xfda) = *(undefined1 *)(param_2 + 0xfda);
  *(undefined2 *)(param_1 + 0x1fb) = *(undefined2 *)(param_2 + 0xfd8);
  return param_1;
}



// FUNCTION 14627caae FUN_14627caae body=40 status=ok
// SIG undefined FUN_14627caae(void)

undefined8 FUN_14627caae(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cad6 FUN_14627cad6 body=40 status=ok
// SIG undefined FUN_14627cad6(void)

undefined8 FUN_14627cad6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cafe FUN_14627cafe body=40 status=ok
// SIG undefined FUN_14627cafe(void)

undefined8 FUN_14627cafe(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cb26 FUN_14627cb26 body=29 status=ok
// SIG undefined FUN_14627cb26(void)

undefined8 FUN_14627cb26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cb44 FUN_14627cb44 body=29 status=ok
// SIG undefined FUN_14627cb44(void)

undefined8 FUN_14627cb44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cb62 FUN_14627cb62 body=29 status=ok
// SIG undefined FUN_14627cb62(void)

undefined8 FUN_14627cb62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cb80 FUN_14627cb80 body=29 status=ok
// SIG undefined FUN_14627cb80(void)

undefined8 FUN_14627cb80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cb9e FUN_14627cb9e body=29 status=ok
// SIG undefined FUN_14627cb9e(void)

undefined8 FUN_14627cb9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cbbc FUN_14627cbbc body=29 status=ok
// SIG undefined FUN_14627cbbc(void)

undefined8 FUN_14627cbbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cbda FUN_14627cbda body=29 status=ok
// SIG undefined FUN_14627cbda(void)

undefined8 FUN_14627cbda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cbf8 FUN_14627cbf8 body=29 status=ok
// SIG undefined FUN_14627cbf8(void)

undefined8 FUN_14627cbf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cc1e FUN_14627cc1e body=63 status=ok
// SIG undefined FUN_14627cc1e(void)

undefined1 FUN_14627cc1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141254448(param_2,param_3);
    param_3 = param_3 + 0x370;
    param_2 = param_2 + 0x370;
  }
  return 1;
}



// FUNCTION 14627cc5e FUN_14627cc5e body=29 status=ok
// SIG undefined FUN_14627cc5e(void)

undefined8 FUN_14627cc5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cc7c FUN_14627cc7c body=29 status=ok
// SIG undefined FUN_14627cc7c(void)

undefined8 FUN_14627cc7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cc9a FUN_14627cc9a body=29 status=ok
// SIG undefined FUN_14627cc9a(void)

undefined8 FUN_14627cc9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627ccb8 FUN_14627ccb8 body=29 status=ok
// SIG undefined FUN_14627ccb8(void)

undefined8 FUN_14627ccb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627ccd6 FUN_14627ccd6 body=29 status=ok
// SIG undefined FUN_14627ccd6(void)

undefined8 FUN_14627ccd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627ccf4 FUN_14627ccf4 body=29 status=ok
// SIG undefined FUN_14627ccf4(void)

undefined8 FUN_14627ccf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cd12 FUN_14627cd12 body=29 status=ok
// SIG undefined FUN_14627cd12(void)

undefined8 FUN_14627cd12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cd30 FUN_14627cd30 body=29 status=ok
// SIG undefined FUN_14627cd30(void)

undefined8 FUN_14627cd30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cd4e FUN_14627cd4e body=29 status=ok
// SIG undefined FUN_14627cd4e(void)

undefined8 FUN_14627cd4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cd6c FUN_14627cd6c body=29 status=ok
// SIG undefined FUN_14627cd6c(void)

undefined8 FUN_14627cd6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cd8a FUN_14627cd8a body=29 status=ok
// SIG undefined FUN_14627cd8a(void)

undefined8 FUN_14627cd8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cda8 FUN_14627cda8 body=29 status=ok
// SIG undefined FUN_14627cda8(void)

undefined8 FUN_14627cda8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cdc6 FUN_14627cdc6 body=29 status=ok
// SIG undefined FUN_14627cdc6(void)

undefined8 FUN_14627cdc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cde4 FUN_14627cde4 body=29 status=ok
// SIG undefined FUN_14627cde4(void)

undefined8 FUN_14627cde4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627ce02 FUN_14627ce02 body=29 status=ok
// SIG undefined FUN_14627ce02(void)

undefined8 FUN_14627ce02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627ce20 FUN_14627ce20 body=29 status=ok
// SIG undefined FUN_14627ce20(void)

undefined8 FUN_14627ce20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627ce3e FUN_14627ce3e body=29 status=ok
// SIG undefined FUN_14627ce3e(void)

undefined8 FUN_14627ce3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627ce5c FUN_14627ce5c body=29 status=ok
// SIG undefined FUN_14627ce5c(void)

undefined8 FUN_14627ce5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627ce7a FUN_14627ce7a body=29 status=ok
// SIG undefined FUN_14627ce7a(void)

undefined8 FUN_14627ce7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627ce98 FUN_14627ce98 body=29 status=ok
// SIG undefined FUN_14627ce98(void)

undefined8 FUN_14627ce98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627ceb6 FUN_14627ceb6 body=29 status=ok
// SIG undefined FUN_14627ceb6(void)

undefined8 FUN_14627ceb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627ced4 FUN_14627ced4 body=29 status=ok
// SIG undefined FUN_14627ced4(void)

undefined8 FUN_14627ced4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cef2 FUN_14627cef2 body=29 status=ok
// SIG undefined FUN_14627cef2(void)

undefined8 FUN_14627cef2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cf10 FUN_14627cf10 body=29 status=ok
// SIG undefined FUN_14627cf10(void)

undefined8 FUN_14627cf10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627cf2e FUN_14627cf2e body=88 status=ok
// SIG undefined FUN_14627cf2e(void)

undefined8 * FUN_14627cf2e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x14];
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



// FUNCTION 14627cf86 FUN_14627cf86 body=93 status=ok
// SIG undefined FUN_14627cf86(void)

void FUN_14627cf86(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149ee9aa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14627cfe4 FUN_14627cfe4 body=29 status=ok
// SIG undefined FUN_14627cfe4(void)

undefined8 FUN_14627cfe4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d002 FUN_14627d002 body=362 status=ok
// SIG undefined FUN_14627d002(void)

undefined4 *
FUN_14627d002(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140e9be44(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_140e9bdae(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_140e9c02a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14627d16e FUN_14627d16e body=29 status=ok
// SIG undefined FUN_14627d16e(void)

undefined8 FUN_14627d16e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d18c FUN_14627d18c body=29 status=ok
// SIG undefined FUN_14627d18c(void)

undefined8 FUN_14627d18c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d1aa FUN_14627d1aa body=9 status=ok
// SIG undefined FUN_14627d1aa(void)

void FUN_14627d1aa(longlong param_1)

{
  FUN_140ffd8aa(param_1 + 0x10);
  return;
}



// FUNCTION 14627d1b4 FUN_14627d1b4 body=29 status=ok
// SIG undefined FUN_14627d1b4(void)

undefined8 FUN_14627d1b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d1d2 FUN_14627d1d2 body=190 status=ok
// SIG undefined FUN_14627d1d2(void)

undefined8 * FUN_14627d1d2(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_149eeb590;
  param_1[2] = &PTR_FUN_149ee3280;
  FUN_141478cf2(param_1 + 4,param_2 + 0x10);
  FUN_140e361c2(param_1 + 0x72,param_2 + 0x380);
  uVar1 = *(undefined4 *)(param_2 + 0x434);
  uVar2 = *(undefined4 *)(param_2 + 0x438);
  uVar3 = *(undefined4 *)(param_2 + 0x43c);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x430);
  *(undefined4 *)((longlong)param_1 + 0x444) = uVar1;
  *(undefined4 *)(param_1 + 0x89) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x44c) = uVar3;
  param_1[0x8a] = *(undefined8 *)(param_2 + 0x440);
  FUN_140e361c2(param_1 + 0x8c,param_2 + 0x450);
  uVar4 = *(undefined8 *)(param_2 + 0x508);
  uVar5 = *(undefined8 *)(param_2 + 0x510);
  uVar6 = *(undefined8 *)(param_2 + 0x518);
  uVar7 = *(undefined8 *)(param_2 + 0x520);
  uVar8 = *(undefined8 *)(param_2 + 0x528);
  param_1[0xa2] = *(undefined8 *)(param_2 + 0x500);
  param_1[0xa3] = uVar4;
  param_1[0xa4] = uVar5;
  param_1[0xa5] = uVar6;
  param_1[0xa6] = uVar7;
  param_1[0xa7] = uVar8;
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0x530);
  return param_1;
}



// FUNCTION 14627d29a FUN_14627d29a body=29 status=ok
// SIG undefined FUN_14627d29a(void)

undefined8 FUN_14627d29a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d2b8 FUN_14627d2b8 body=48 status=ok
// SIG undefined FUN_14627d2b8(void)

void FUN_14627d2b8(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149ee3300;
  FUN_140e9e952(param_1 + 0x390);
  FUN_140ffd6b6(param_1 + 0x20);
  return;
}



// FUNCTION 14627d2e8 FUN_14627d2e8 body=29 status=ok
// SIG undefined FUN_14627d2e8(void)

undefined8 FUN_14627d2e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d306 FUN_14627d306 body=120 status=ok
// SIG undefined FUN_14627d306(void)

undefined8 * FUN_14627d306(undefined8 *param_1,longlong param_2)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_149eeb670;
  param_1[2] = &PTR_FUN_149eeb690;
  FUN_140e361c2(param_1 + 4,param_2 + 0x10);
  FUN_140e361c2(param_1 + 0x1a,param_2 + 0xc0);
  FUN_140e361c2(param_1 + 0x30,param_2 + 0x170);
  *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(param_2 + 0x220);
  return param_1;
}



// FUNCTION 14627d388 FUN_14627d388 body=29 status=ok
// SIG undefined FUN_14627d388(void)

undefined8 FUN_14627d388(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d3a5 FUN_14627d3a5 body=120 status=ok
// SIG undefined FUN_14627d3a5(void)

undefined8 * FUN_14627d3a5(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(400,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149eeb6b0;
  puVar1[2] = &PTR_FUN_149eeb6d0;
  FUN_140e361c2(puVar1 + 4,param_1 + 0x10);
  FUN_140e361c2(puVar1 + 0x1a,param_1 + 0xc0);
  *(undefined4 *)(puVar1 + 0x30) = *(undefined4 *)(param_1 + 0x170);
  return puVar1;
}



// FUNCTION 14627d41e FUN_14627d41e body=29 status=ok
// SIG undefined FUN_14627d41e(void)

undefined8 FUN_14627d41e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d43c FUN_14627d43c body=29 status=ok
// SIG undefined FUN_14627d43c(void)

undefined8 FUN_14627d43c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d45a FUN_14627d45a body=29 status=ok
// SIG undefined FUN_14627d45a(void)

undefined8 FUN_14627d45a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d478 FUN_14627d478 body=9 status=ok
// SIG undefined FUN_14627d478(void)

void FUN_14627d478(longlong param_1)

{
  FUN_141147850(param_1 + 0x10);
  return;
}



// FUNCTION 14627d482 FUN_14627d482 body=29 status=ok
// SIG undefined FUN_14627d482(void)

undefined8 FUN_14627d482(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d4a0 FUN_14627d4a0 body=9 status=ok
// SIG undefined FUN_14627d4a0(void)

void FUN_14627d4a0(longlong param_1)

{
  FUN_145979364(param_1 + 0x10);
  return;
}



// FUNCTION 14627d4aa FUN_14627d4aa body=29 status=ok
// SIG undefined FUN_14627d4aa(void)

undefined8 FUN_14627d4aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d4c8 FUN_14627d4c8 body=134 status=ok
// SIG undefined FUN_14627d4c8(void)

undefined8 * FUN_14627d4c8(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_149eeb8d0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  FUN_140e361c2(param_1 + 2,param_2 + 0x10);
  FUN_140e361c2(param_1 + 0x18,param_2 + 0xc0);
  FUN_140e361c2(param_1 + 0x2e,param_2 + 0x170);
  FUN_140e361c2(param_1 + 0x44,param_2 + 0x220);
  uVar1 = *(undefined8 *)(param_2 + 0x2d8);
  uVar2 = *(undefined8 *)(param_2 + 0x2e0);
  uVar3 = *(undefined8 *)(param_2 + 0x2e8);
  param_1[0x5a] = *(undefined8 *)(param_2 + 0x2d0);
  param_1[0x5b] = uVar1;
  param_1[0x5c] = uVar2;
  param_1[0x5d] = uVar3;
  return param_1;
}



// FUNCTION 14627d54e FUN_14627d54e body=9 status=ok
// SIG undefined FUN_14627d54e(void)

void FUN_14627d54e(longlong param_1)

{
  FUN_1458e4f8c(param_1 + 0x10);
  return;
}



// FUNCTION 14627d558 FUN_14627d558 body=29 status=ok
// SIG undefined FUN_14627d558(void)

undefined8 FUN_14627d558(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d576 FUN_14627d576 body=29 status=ok
// SIG undefined FUN_14627d576(void)

undefined8 FUN_14627d576(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d594 FUN_14627d594 body=29 status=ok
// SIG undefined FUN_14627d594(void)

undefined8 FUN_14627d594(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d5b2 FUN_14627d5b2 body=9 status=ok
// SIG undefined FUN_14627d5b2(void)

void FUN_14627d5b2(longlong param_1)

{
  FUN_140ffd7a4(param_1 + 0x10);
  return;
}



// FUNCTION 14627d5bc FUN_14627d5bc body=29 status=ok
// SIG undefined FUN_14627d5bc(void)

undefined8 FUN_14627d5bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d5da FUN_14627d5da body=29 status=ok
// SIG undefined FUN_14627d5da(void)

undefined8 FUN_14627d5da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d5f8 FUN_14627d5f8 body=29 status=ok
// SIG undefined FUN_14627d5f8(void)

undefined8 FUN_14627d5f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d616 FUN_14627d616 body=9 status=ok
// SIG undefined FUN_14627d616(void)

void FUN_14627d616(longlong param_1)

{
  FUN_1458a2df2(param_1 + 0x10);
  return;
}



// FUNCTION 14627d620 FUN_14627d620 body=29 status=ok
// SIG undefined FUN_14627d620(void)

undefined8 FUN_14627d620(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d63e FUN_14627d63e body=48 status=ok
// SIG undefined FUN_14627d63e(void)

void FUN_14627d63e(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149eeb490;
  FUN_140e9e952(param_1 + 0xca0);
  FUN_140ffd7a4(param_1 + 0x20);
  return;
}



// FUNCTION 14627d66e FUN_14627d66e body=29 status=ok
// SIG undefined FUN_14627d66e(void)

undefined8 FUN_14627d66e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d68c FUN_14627d68c body=20 status=ok
// SIG undefined FUN_14627d68c(void)

void FUN_14627d68c(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149ee32c0;
  FUN_140ffd624(param_1 + 0x20);
  return;
}



// FUNCTION 14627d6a0 FUN_14627d6a0 body=29 status=ok
// SIG undefined FUN_14627d6a0(void)

undefined8 FUN_14627d6a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d6be FUN_14627d6be body=9 status=ok
// SIG undefined FUN_14627d6be(void)

void FUN_14627d6be(longlong param_1)

{
  FUN_1415bbd66(param_1 + 0x10);
  return;
}



// FUNCTION 14627d6c8 FUN_14627d6c8 body=29 status=ok
// SIG undefined FUN_14627d6c8(void)

undefined8 FUN_14627d6c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d6e6 FUN_14627d6e6 body=110 status=ok
// SIG undefined FUN_14627d6e6(void)

undefined8 * FUN_14627d6e6(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_149edba00;
  FUN_141479b70(param_1 + 2,param_2 + 0x10);
  FUN_141479b70(param_1 + 300,param_2 + 0x960);
  FUN_141479b70(param_1 + 0x256,param_2 + 0x12b0);
  FUN_140e361c2(param_1 + 0x380,param_2 + 0x1c00);
  uVar1 = *(undefined8 *)(param_2 + 0x1cb8);
  param_1[0x396] = *(undefined8 *)(param_2 + 0x1cb0);
  param_1[0x397] = uVar1;
  return param_1;
}



// FUNCTION 14627d754 FUN_14627d754 body=9 status=ok
// SIG undefined FUN_14627d754(void)

void FUN_14627d754(longlong param_1)

{
  FUN_145d8e7d0(param_1 + 0x10);
  return;
}



// FUNCTION 14627d75e FUN_14627d75e body=29 status=ok
// SIG undefined FUN_14627d75e(void)

undefined8 FUN_14627d75e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d77c FUN_14627d77c body=29 status=ok
// SIG undefined FUN_14627d77c(void)

undefined8 FUN_14627d77c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d79a FUN_14627d79a body=29 status=ok
// SIG undefined FUN_14627d79a(void)

undefined8 FUN_14627d79a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d7b8 FUN_14627d7b8 body=9 status=ok
// SIG undefined FUN_14627d7b8(void)

void FUN_14627d7b8(longlong param_1)

{
  FUN_1414034a0(param_1 + 0x10);
  return;
}



// FUNCTION 14627d7c2 FUN_14627d7c2 body=29 status=ok
// SIG undefined FUN_14627d7c2(void)

undefined8 FUN_14627d7c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d7e0 FUN_14627d7e0 body=29 status=ok
// SIG undefined FUN_14627d7e0(void)

undefined8 FUN_14627d7e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627d7fd FUN_14627d7fd body=47 status=ok
// SIG undefined FUN_14627d7fd(void)

longlong FUN_14627d7fd(void)

{
  if (DAT_14c979d08 == 0) {
    FUN_1409ce572(&DAT_14c979d08,&PTR_FUN_149eec410);
  }
  return DAT_14c979d08;
}



// FUNCTION 14627d82c FUN_14627d82c body=55 status=ok
// SIG undefined FUN_14627d82c(void)

void FUN_14627d82c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c979d28 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c979d28 = FUN_140002ddd(FUN_14627d863,uVar1,L"StyleColorList");
  }
  return;
}



// FUNCTION 14627d863 FUN_14627d863 body=47 status=ok
// SIG undefined FUN_14627d863(void)

longlong FUN_14627d863(void)

{
  if (DAT_14c979d20 == 0) {
    FUN_14086a14e(&DAT_14c979d20,&PTR_FUN_149eec4c8);
  }
  return DAT_14c979d20;
}



// FUNCTION 14627d892 FUN_14627d892 body=48 status=ok
// SIG undefined FUN_14627d892(void)

void FUN_14627d892(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000007a0;
  *puVar1 = &PTR_FUN_149eef7a0;
  return;
}



// FUNCTION 14627d8c2 FUN_14627d8c2 body=55 status=ok
// SIG undefined FUN_14627d8c2(void)

void FUN_14627d8c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c979d40 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c979d40 = FUN_140002ddd(FUN_14627d8f9,uVar1,L"StyleTheme");
  }
  return;
}



// FUNCTION 14627d8f9 FUN_14627d8f9 body=47 status=ok
// SIG undefined FUN_14627d8f9(void)

longlong FUN_14627d8f9(void)

{
  if (DAT_14c979d38 == 0) {
    FUN_14086a14e(&DAT_14c979d38,&PTR_FUN_149eec528);
  }
  return DAT_14c979d38;
}



// FUNCTION 14627d928 FUN_14627d928 body=48 status=ok
// SIG undefined FUN_14627d928(void)

void FUN_14627d928(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_149eef900;
  return;
}



// FUNCTION 14627d95d FUN_14627d95d body=47 status=ok
// SIG undefined FUN_14627d95d(void)

longlong FUN_14627d95d(void)

{
  if (DAT_14c979d58 == 0) {
    FUN_14073dd9a(&DAT_14c979d58,&PTR_LAB_149eec658);
  }
  return DAT_14c979d58;
}



// FUNCTION 14627d98c FUN_14627d98c body=55 status=ok
// SIG undefined FUN_14627d98c(void)

void FUN_14627d98c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c979e30 == 0) {
    uVar1 = FUN_140d946fa();
    DAT_14c979e30 = FUN_140002ddd(FUN_14627d9c3,uVar1,L"ToolBarStyle");
  }
  return;
}



// FUNCTION 14627d9c3 FUN_14627d9c3 body=47 status=ok
// SIG undefined FUN_14627d9c3(void)

longlong FUN_14627d9c3(void)

{
  if (DAT_14c979e28 == 0) {
    FUN_14086a14e(&DAT_14c979e28,&PTR_FUN_149eed640);
  }
  return DAT_14c979e28;
}



// FUNCTION 14627d9f2 FUN_14627d9f2 body=48 status=ok
// SIG undefined FUN_14627d9f2(void)

void FUN_14627d9f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000003660;
  *puVar1 = &PTR_FUN_149eefa60;
  return;
}



// FUNCTION 14627da22 FUN_14627da22 body=532 status=ok
// SIG undefined FUN_14627da22(void)

undefined8 * FUN_14627da22(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  byte local_84;
  byte local_83;
  byte local_82;
  byte local_81;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145c1c3e8();
  *param_1 = &PTR_FUN_149eefbd0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_149eeb450;
  puVar4[2] = 0x3e6666663f3374bc;
  puVar4[3] = 0x3f8000003b449ba6;
  param_1[0x76] = puVar4 + 2;
  param_1[0x77] = puVar4;
  FUN_1400b22c2(local_98,"18A0FBFF");
  FUN_1415445ba(&local_84,local_98);
  uVar1 = (&DAT_14c758c60)[local_82];
  uVar2 = (&DAT_14c758c60)[local_83];
  uVar3 = (&DAT_14c758c60)[local_84];
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_149eeb450;
  *(undefined4 *)(puVar4 + 2) = uVar1;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar2;
  *(undefined4 *)(puVar4 + 3) = uVar3;
  *(float *)((longlong)puVar4 + 0x1c) = (float)local_81 * 0.003921569;
  param_1[0x78] = puVar4 + 2;
  param_1[0x79] = puVar4;
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_149eeb450;
  *(undefined4 *)(puVar4 + 2) = 0x3e800000;
  *(undefined4 *)((longlong)puVar4 + 0x14) = 0x3e800000;
  *(undefined4 *)(puVar4 + 3) = 0x3e800000;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 0x3f800000;
  param_1[0x7a] = puVar4 + 2;
  param_1[0x7b] = puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_149eeb450;
  puVar4[2] = 0x3e6666663f3374bc;
  puVar4[3] = 0x3f8000003b449ba6;
  param_1[0x7c] = puVar4 + 2;
  param_1[0x7d] = puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_149eeb450;
  *(undefined4 *)(puVar4 + 2) = 0x3d8b4396;
  *(undefined4 *)((longlong)puVar4 + 0x14) = 0x3d8b4396;
  *(undefined4 *)(puVar4 + 3) = 0x3d8b4396;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = 0x3f800000;
  param_1[0x7e] = puVar4 + 2;
  param_1[0x7f] = puVar4;
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14627dc38 FUN_14627dc38 body=55 status=ok
// SIG undefined FUN_14627dc38(void)

void FUN_14627dc38(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x31) & 1) != 0) {
    lVar1 = **(longlong **)(param_1 + 0x1b0);
    if (lVar1 != 0) {
      FUN_1401630a0(lVar1,param_1,param_2,0,*(undefined4 *)(lVar1 + 0x90));
    }
  }
  return;
}



// FUNCTION 14627dc70 FUN_14627dc70 body=359 status=ok
// SIG undefined FUN_14627dc70(void)

void FUN_14627dc70(undefined8 *param_1)

{
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_70 = 1;
  local_60 = 0;
  FUN_1446ddc76(&local_78,"Image",1);
  local_58[0] = 1;
  local_50 = 0;
  local_68 = 0;
  local_48 = 0;
  local_a8 = local_58;
  FUN_14134ba14(*param_1,local_88,local_78,0x1e0);
  FUN_1449db362(&local_68);
  local_70 = 2;
  local_60 = 0;
  FUN_1446ddc76(&local_90,"ColorAndOpacity",1);
  local_58[0] = 2;
  local_50 = 0;
  local_68 = 0;
  local_48 = 0;
  local_a8 = local_58;
  FUN_14134ba14(*param_1,local_88,local_90,0x1e8);
  FUN_1449db362(&local_68);
  local_70 = 1;
  local_60 = 0;
  FUN_1446ddc76(&local_98,"DesiredSizeOverride",1);
  local_58[0] = 1;
  local_50 = 0;
  local_68 = 0;
  local_48 = 0;
  local_a8 = local_58;
  FUN_14134ba14(*param_1,local_88,local_98,0x200);
  FUN_1449db362(&local_68);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14627ddd8 FUN_14627ddd8 body=29 status=ok
// SIG undefined FUN_14627ddd8(void)

undefined8 FUN_14627ddd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627ddf6 FUN_14627ddf6 body=29 status=ok
// SIG undefined FUN_14627ddf6(void)

undefined8 FUN_14627ddf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627de14 FUN_14627de14 body=29 status=ok
// SIG undefined FUN_14627de14(void)

undefined8 FUN_14627de14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627de32 FUN_14627de32 body=181 status=ok
// SIG undefined FUN_14627de32(void)

undefined8 * FUN_14627de32(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98da28) {
    FUN_144b3d300(&DAT_14c98da28);
    if (DAT_14c98da28 == -1) {
      FUN_1446ddc76(&local_18,"SStackBox",1);
      FUN_145c282e2(&DAT_14c98d9f0,local_18,&DAT_145c28380);
      atexit(FUN_142879dc0);
      _Init_thread_footer(&DAT_14c98da28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14c98d9f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14627dee8 FUN_14627dee8 body=29 status=ok
// SIG undefined FUN_14627dee8(void)

undefined8 FUN_14627dee8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627df06 thunk_FUN_1449db362 body=5 status=ok
// SIG undefined thunk_FUN_1449db362(void)

void thunk_FUN_1449db362(void)

{
  FUN_1449db362();
  return;
}



// FUNCTION 14627df0c FUN_14627df0c body=550 status=ok
// SIG undefined FUN_14627df0c(void)

longlong FUN_14627df0c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined8 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140a5071c();
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_58,"Window",1);
  uVar3 = FUN_14076516e(lVar2,local_58,0,0);
  *(undefined8 *)(param_1 + 0x1b0) = uVar3;
  FUN_144a5dc74(param_1 + 0x1b8);
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined2 *)(param_1 + 0x1e0) = 0x200;
  uVar3 = DAT_14c84635c;
  *(undefined8 *)(param_1 + 0x1e4) = DAT_14c84635c;
  *(undefined8 *)(param_1 + 0x1ec) = uVar3;
  *(undefined1 *)(param_1 + 500) = 1;
  *(undefined8 *)(param_1 + 0x1f8) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x200) = 0x20000;
  *(undefined2 *)(param_1 + 0x204) = 0x100;
  *(undefined8 *)(param_1 + 0x208) = 0x101010000000001;
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x220) = 0;
  *(undefined1 *)(param_1 + 0x228) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined2 *)(param_1 + 0x234) = 0x101;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x15ec);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0x15e4);
  *(undefined8 *)(param_1 + 0x240) = uVar3;
  *(undefined4 *)(param_1 + 0x248) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x24c) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x250) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x254) = 0x40a00000;
  *(undefined1 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x268) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_50 = L"Window_DefaultCloseButtonToolTip";
  local_48 = 0x20;
  FUN_1446e940c(local_5c,&local_50);
  local_50 = L"SWindow";
  local_48 = 7;
  FUN_1446e940c(local_60,&local_50);
  FUN_140208bae(&local_50,local_60,local_5c,L"Close");
  FUN_14023423e(param_1 + 0x270,&local_50);
  *(undefined1 *)(param_1 + 0x280) = 1;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14627e134 FUN_14627e134 body=197 status=ok
// SIG undefined FUN_14627e134(void)

void FUN_14627e134(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x288);
  if (*(longlong **)(param_1 + 0x270) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x270) + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 0x268);
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
  if (*(char *)(param_1 + 0x230) == '\x01') {
    *(undefined1 *)(param_1 + 0x230) = 0;
  }
  if (*(char *)(param_1 + 0x228) == '\x01') {
    *(undefined1 *)(param_1 + 0x228) = 0;
  }
  if (*(char *)(param_1 + 0x220) == '\x01') {
    *(undefined1 *)(param_1 + 0x220) = 0;
  }
  if (*(char *)(param_1 + 0x218) == '\x01') {
    *(undefined1 *)(param_1 + 0x218) = 0;
  }
  FUN_1449db362(param_1 + 0x1d0);
  if (*(longlong **)(param_1 + 0x1b8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x10))();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14627e1fa FUN_14627e1fa body=12 status=ok
// SIG undefined FUN_14627e1fa(void)

void FUN_14627e1fa(longlong param_1)

{
  FUN_145ae452c(param_1 + 0x5b0);
  return;
}



// FUNCTION 14627e206 FUN_14627e206 body=32 status=ok
// SIG undefined FUN_14627e206(void)

bool FUN_14627e206(undefined8 param_1,longlong *param_2)

{
  FUN_1401fcf0a();
  return DAT_14c98e148 == *param_2;
}



// FUNCTION 14627e226 FUN_14627e226 body=44 status=ok
// SIG undefined FUN_14627e226(void)

void FUN_14627e226(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149ef1568;
  FUN_1449db362(param_1 + 0x28);
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 14627e252 FUN_14627e252 body=29 status=ok
// SIG undefined FUN_14627e252(void)

undefined8 FUN_14627e252(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627e270 FUN_14627e270 body=29 status=ok
// SIG undefined FUN_14627e270(void)

undefined8 FUN_14627e270(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627e28d FUN_14627e28d body=49 status=ok
// SIG undefined FUN_14627e28d(void)

longlong FUN_14627e28d(void)

{
  if (DAT_14c98e188 == 0) {
    FUN_14086a14e(&DAT_14c98e188,&PTR_FUN_149ef20c8);
  }
  return DAT_14c98e188;
}



// FUNCTION 14627e2be FUN_14627e2be body=48 status=ok
// SIG undefined FUN_14627e2be(void)

void FUN_14627e2be(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_149ef4450;
  return;
}



// FUNCTION 14627e2ee FUN_14627e2ee body=49 status=ok
// SIG undefined FUN_14627e2ee(void)

longlong FUN_14627e2ee(void)

{
  if (DAT_14c98e1d8 == 0) {
    FUN_14073dd9a(&DAT_14c98e1d8,&PTR_LAB_149ef2960);
  }
  return DAT_14c98e1d8;
}



// FUNCTION 14627e31f FUN_14627e31f body=47 status=ok
// SIG undefined FUN_14627e31f(void)

longlong FUN_14627e31f(void)

{
  if (DAT_14c98e1a0 == 0) {
    FUN_14000fc22(&DAT_14c98e1a0,&PTR_FUN_149ef21a0);
  }
  return DAT_14c98e1a0;
}



// FUNCTION 14627e34e FUN_14627e34e body=47 status=ok
// SIG undefined FUN_14627e34e(void)

longlong FUN_14627e34e(void)

{
  if (DAT_14c98e1a8 == 0) {
    FUN_14000fc22(&DAT_14c98e1a8,&PTR_FUN_149ef23b8);
  }
  return DAT_14c98e1a8;
}



// FUNCTION 14627e37d FUN_14627e37d body=47 status=ok
// SIG undefined FUN_14627e37d(void)

longlong FUN_14627e37d(void)

{
  if (DAT_14c98e1b0 == 0) {
    FUN_14000fc22(&DAT_14c98e1b0,&PTR_FUN_149ef2568);
  }
  return DAT_14c98e1b0;
}



// FUNCTION 14627e3ac FUN_14627e3ac body=47 status=ok
// SIG undefined FUN_14627e3ac(void)

longlong FUN_14627e3ac(void)

{
  if (DAT_14c98e1b8 == 0) {
    FUN_14000fc22(&DAT_14c98e1b8,&PTR_FUN_149ef2648);
  }
  return DAT_14c98e1b8;
}



// FUNCTION 14627e3db FUN_14627e3db body=47 status=ok
// SIG undefined FUN_14627e3db(void)

longlong FUN_14627e3db(void)

{
  if (DAT_14c98e1c0 == 0) {
    FUN_14000fc22(&DAT_14c98e1c0,&PTR_FUN_149ef2720);
  }
  return DAT_14c98e1c0;
}



// FUNCTION 14627e40a FUN_14627e40a body=47 status=ok
// SIG undefined FUN_14627e40a(void)

longlong FUN_14627e40a(void)

{
  if (DAT_14c98e1c8 == 0) {
    FUN_14000fc22(&DAT_14c98e1c8,&PTR_FUN_149ef27f0);
  }
  return DAT_14c98e1c8;
}



// FUNCTION 14627e43a FUN_14627e43a body=34 status=ok
// SIG undefined FUN_14627e43a(void)

void FUN_14627e43a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a50d20();
  FUN_14069c8d6(uVar1,&PTR_s_GetHeight_149ef2830,6);
  return;
}



// FUNCTION 14627e45c FUN_14627e45c body=35 status=ok
// SIG undefined FUN_14627e45c(void)

void FUN_14627e45c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_149ef29a0;
  return;
}



// FUNCTION 14627e480 FUN_14627e480 body=40 status=ok
// SIG undefined FUN_14627e480(void)

undefined8 FUN_14627e480(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627e4a8 FUN_14627e4a8 body=29 status=ok
// SIG undefined FUN_14627e4a8(void)

undefined8 FUN_14627e4a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627e4c6 FUN_14627e4c6 body=60 status=ok
// SIG undefined FUN_14627e4c6(void)

void FUN_14627e4c6(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149ef7ca0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 14627e502 FUN_14627e502 body=29 status=ok
// SIG undefined FUN_14627e502(void)

undefined8 FUN_14627e502(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14627e520 FUN_14627e520 body=55 status=ok
// SIG undefined FUN_14627e520(void)

void FUN_14627e520(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e240 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e240 = FUN_140002ddd(FUN_14627e557,uVar1,L"Anchors");
  }
  return;
}



// FUNCTION 14627e557 FUN_14627e557 body=49 status=ok
// SIG undefined FUN_14627e557(void)

longlong FUN_14627e557(void)

{
  if (DAT_14c98e238 == 0) {
    FUN_14086a14e(&DAT_14c98e238,&PTR_FUN_149ef8448);
  }
  return DAT_14c98e238;
}



// FUNCTION 14627e588 FUN_14627e588 body=48 status=ok
// SIG undefined FUN_14627e588(void)

void FUN_14627e588(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_149efb820;
  return;
}



// FUNCTION 14627e5b8 FUN_14627e5b8 body=55 status=ok
// SIG undefined FUN_14627e5b8(void)

void FUN_14627e5b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e258 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e258 = FUN_140002ddd(FUN_14627e5ef,uVar1,L"CharRange");
  }
  return;
}



// FUNCTION 14627e5ef FUN_14627e5ef body=47 status=ok
// SIG undefined FUN_14627e5ef(void)

longlong FUN_14627e5ef(void)

{
  if (DAT_14c98e250 == 0) {
    FUN_14086a14e(&DAT_14c98e250,&PTR_FUN_149ef8560);
  }
  return DAT_14c98e250;
}



// FUNCTION 14627e61e FUN_14627e61e body=48 status=ok
// SIG undefined FUN_14627e61e(void)

void FUN_14627e61e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x200000004;
  *puVar1 = &PTR_FUN_149efb980;
  return;
}



// FUNCTION 14627e64e FUN_14627e64e body=55 status=ok
// SIG undefined FUN_14627e64e(void)

void FUN_14627e64e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e270 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e270 = FUN_140002ddd(FUN_14627e685,uVar1,L"CharRangeList");
  }
  return;
}



// FUNCTION 14627e685 FUN_14627e685 body=47 status=ok
// SIG undefined FUN_14627e685(void)

longlong FUN_14627e685(void)

{
  if (DAT_14c98e268 == 0) {
    FUN_14086a14e(&DAT_14c98e268,&PTR_FUN_149ef8660);
  }
  return DAT_14c98e268;
}



// FUNCTION 14627e6b4 FUN_14627e6b4 body=48 status=ok
// SIG undefined FUN_14627e6b4(void)

void FUN_14627e6b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_149efbae0;
  return;
}



// FUNCTION 14627e6e4 FUN_14627e6e4 body=47 status=ok
// SIG undefined FUN_14627e6e4(void)

longlong FUN_14627e6e4(void)

{
  if (DAT_14c98e280 == 0) {
    FUN_1409ce572(&DAT_14c98e280,&PTR_FUN_149ef8730);
  }
  return DAT_14c98e280;
}



// FUNCTION 14627e713 FUN_14627e713 body=49 status=ok
// SIG undefined FUN_14627e713(void)

longlong FUN_14627e713(void)

{
  if (DAT_14c98e298 == 0) {
    FUN_1409ce572(&DAT_14c98e298,&PTR_FUN_149ef87b0);
  }
  return DAT_14c98e298;
}



// FUNCTION 14627e744 FUN_14627e744 body=47 status=ok
// SIG undefined FUN_14627e744(void)

longlong FUN_14627e744(void)

{
  if (DAT_14c98e2b0 == 0) {
    FUN_1409ce572(&DAT_14c98e2b0,&PTR_FUN_149ef8890);
  }
  return DAT_14c98e2b0;
}



// FUNCTION 14627e773 FUN_14627e773 body=47 status=ok
// SIG undefined FUN_14627e773(void)

longlong FUN_14627e773(void)

{
  if (DAT_14c98e2c8 == 0) {
    FUN_1409ce572(&DAT_14c98e2c8,&PTR_FUN_149ef8920);
  }
  return DAT_14c98e2c8;
}



// FUNCTION 14627e7a2 FUN_14627e7a2 body=55 status=ok
// SIG undefined FUN_14627e7a2(void)

void FUN_14627e7a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e2e8 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e2e8 = FUN_140002ddd(FUN_14627e7d9,uVar1,L"VirtualKeyboardOptions");
  }
  return;
}



// FUNCTION 14627e7d9 FUN_14627e7d9 body=49 status=ok
// SIG undefined FUN_14627e7d9(void)

longlong FUN_14627e7d9(void)

{
  if (DAT_14c98e2e0 == 0) {
    FUN_14086a14e(&DAT_14c98e2e0,&PTR_FUN_149ef8a20);
  }
  return DAT_14c98e2e0;
}



// FUNCTION 14627e80a FUN_14627e80a body=48 status=ok
// SIG undefined FUN_14627e80a(void)

void FUN_14627e80a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_149efbe80;
  return;
}



// FUNCTION 14627e83a FUN_14627e83a body=49 status=ok
// SIG undefined FUN_14627e83a(void)

longlong FUN_14627e83a(void)

{
  if (DAT_14c98e2f8 == 0) {
    FUN_1409ce572(&DAT_14c98e2f8,&PTR_FUN_149ef8b20);
  }
  return DAT_14c98e2f8;
}



// FUNCTION 14627e86b FUN_14627e86b body=47 status=ok
// SIG undefined FUN_14627e86b(void)

longlong FUN_14627e86b(void)

{
  if (DAT_14c98e310 == 0) {
    FUN_1409ce572(&DAT_14c98e310,&PTR_FUN_149ef8bf0);
  }
  return DAT_14c98e310;
}



// FUNCTION 14627e89a FUN_14627e89a body=47 status=ok
// SIG undefined FUN_14627e89a(void)

longlong FUN_14627e89a(void)

{
  if (DAT_14c98e340 == 0) {
    FUN_1409ce572(&DAT_14c98e340,&PTR_FUN_149ef8d30);
  }
  return DAT_14c98e340;
}



// FUNCTION 14627e8ca FUN_14627e8ca body=55 status=ok
// SIG undefined FUN_14627e8ca(void)

void FUN_14627e8ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e360 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e360 = FUN_140002ddd(FUN_14627e901,uVar1,L"InputPreprocessorRegistrationKey");
  }
  return;
}



// FUNCTION 14627e901 FUN_14627e901 body=47 status=ok
// SIG undefined FUN_14627e901(void)

longlong FUN_14627e901(void)

{
  if (DAT_14c98e358 == 0) {
    FUN_14086a14e(&DAT_14c98e358,&PTR_FUN_149ef8ea0);
  }
  return DAT_14c98e358;
}



// FUNCTION 14627e930 FUN_14627e930 body=48 status=ok
// SIG undefined FUN_14627e930(void)

void FUN_14627e930(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_149efc330;
  return;
}



// FUNCTION 14627e960 FUN_14627e960 body=49 status=ok
// SIG undefined FUN_14627e960(void)

longlong FUN_14627e960(void)

{
  if (DAT_14c98e370 == 0) {
    FUN_1409ce572(&DAT_14c98e370,&PTR_FUN_149ef8f90);
  }
  return DAT_14c98e370;
}


