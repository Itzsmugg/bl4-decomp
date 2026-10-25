// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c38732 FUN_148c38732 body=72 status=ok
// SIG undefined FUN_148c38732(void)

void FUN_148c38732(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x1208))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148c38762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1210))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerNotifyCharacterReadyForGameplay_Validate");
  return;
}



// FUNCTION 148c3877e FUN_148c3877e body=72 status=ok
// SIG undefined FUN_148c3877e(void)

void FUN_148c3877e(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x1228))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148c387ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1230))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerNotifyCharacterSelectStarted_Validate");
  return;
}



// FUNCTION 148c387c6 FUN_148c387c6 body=192 status=ok
// SIG undefined FUN_148c387c6(void)

void FUN_148c387c6(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x1348))(param_1,local_19);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerNotifyTeleportFailed_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x1350))(param_1,local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3888c FUN_148c3888c body=91 status=ok
// SIG undefined FUN_148c3888c(void)

void FUN_148c3888c(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadb68);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c388e8 FUN_148c388e8 body=155 status=ok
// SIG undefined FUN_148c388e8(void)

void FUN_148c388e8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x12e0))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c38984 FUN_148c38984 body=110 status=ok
// SIG undefined FUN_148c38984(void)

void FUN_148c38984(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_30 = param_2;
  local_1c = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadb78);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c389fa FUN_148c389fa body=344 status=ok
// SIG undefined FUN_148c389fa(void)

void FUN_148c389fa(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  int local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_2c = 0;
  local_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x12a8))(param_1,local_20,&local_2c,local_30 != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c38b54 FUN_148c38b54 body=47 status=ok
// SIG undefined FUN_148c38b54(void)

void FUN_148c38b54(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cbadb88);
                    /* WARNING: Could not recover jumptable at 0x000148c38b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148c38b9e FUN_148c38b9e body=47 status=ok
// SIG undefined FUN_148c38b9e(void)

void FUN_148c38b9e(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cbadb98);
                    /* WARNING: Could not recover jumptable at 0x000148c38bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148c38c02 FUN_148c38c02 body=112 status=ok
// SIG undefined FUN_148c38c02(void)

void FUN_148c38c02(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  local_24 = *param_4;
  local_1c = *(undefined4 *)(param_4 + 1);
  local_30 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadbb8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c38c74 FUN_148c38c74 body=340 status=ok
// SIG undefined FUN_148c38c74(void)

void FUN_148c38c74(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x12b8))(param_1,local_20,&local_24,&local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c38dca FUN_148c38dca body=123 status=ok
// SIG undefined FUN_148c38dca(void)

void FUN_148c38dca(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = *param_4;
  local_24 = *(undefined4 *)(param_4 + 1);
  local_20 = param_5;
  local_38 = param_2;
  local_30 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadbc8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c38e4c FUN_148c38e4c body=429 status=ok
// SIG undefined FUN_148c38e4c(void)

void FUN_148c38e4c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_34 != 0;
  (**(code **)(*param_1 + 0x12c0))(param_1,local_20,local_24,&local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c38ffa FUN_148c38ffa body=241 status=ok
// SIG undefined FUN_148c38ffa(void)

void FUN_148c38ffa(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1390))(param_1,&local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c390ec FUN_148c390ec body=101 status=ok
// SIG undefined FUN_148c390ec(void)

void FUN_148c390ec(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined4 *)(param_2 + 1);
  local_28 = *param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadbe8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c39152 FUN_148c39152 body=240 status=ok
// SIG undefined FUN_148c39152(void)

void FUN_148c39152(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_1c;
  local_30 = local_24;
  cVar1 = (**(code **)(*param_1 + 0x13d8))(param_1);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerRequestAbandonMission_Validate");
  }
  else {
    local_38 = local_1c;
    local_40 = local_24;
    (**(code **)(*param_1 + 0x13e0))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c39244 FUN_148c39244 body=47 status=ok
// SIG undefined FUN_148c39244(void)

void FUN_148c39244(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cbadbf8);
                    /* WARNING: Could not recover jumptable at 0x000148c39270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148c39274 FUN_148c39274 body=72 status=ok
// SIG undefined FUN_148c39274(void)

void FUN_148c39274(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x13e8))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148c392a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x13f0))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerRequestEndMissionReplay_Validate");
  return;
}



// FUNCTION 148c392c0 FUN_148c392c0 body=101 status=ok
// SIG undefined FUN_148c392c0(void)

void FUN_148c392c0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined4 *)(param_2 + 1);
  local_28 = *param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadc18);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c39326 FUN_148c39326 body=240 status=ok
// SIG undefined FUN_148c39326(void)

void FUN_148c39326(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_1c;
  local_30 = local_24;
  cVar1 = (**(code **)(*param_1 + 0x13f8))(param_1);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerRequestPlayTraitMission_Validate");
  }
  else {
    local_38 = local_1c;
    local_40 = local_24;
    (**(code **)(*param_1 + 0x1400))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c39418 FUN_148c39418 body=101 status=ok
// SIG undefined FUN_148c39418(void)

void FUN_148c39418(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined4 *)(param_2 + 1);
  local_28 = *param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadc28);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3947e FUN_148c3947e body=240 status=ok
// SIG undefined FUN_148c3947e(void)

void FUN_148c3947e(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_1c;
  local_30 = local_24;
  cVar1 = (**(code **)(*param_1 + 0x1408))(param_1);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerRequestReplayMission_Validate");
  }
  else {
    local_38 = local_1c;
    local_40 = local_24;
    (**(code **)(*param_1 + 0x1410))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c39570 FUN_148c39570 body=106 status=ok
// SIG undefined FUN_148c39570(void)

void FUN_148c39570(longlong *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined4 *)(param_2 + 1);
  local_28 = *param_2;
  local_1c = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadc38);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c395dc FUN_148c395dc body=328 status=ok
// SIG undefined FUN_148c395dc(void)

void FUN_148c395dc(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_26;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0;
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_26 = 0;
  FUN_14093f0c0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_26);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_26);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_24;
  local_30 = local_1c;
  cVar1 = (**(code **)(*param_1 + 0x1418))(param_1,&local_38,local_26);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerRequestTrackMission_Validate");
  }
  else {
    local_48 = local_24;
    local_40 = local_1c;
    (**(code **)(*param_1 + 0x1420))(param_1,&local_48,local_26);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c39726 FUN_148c39726 body=92 status=ok
// SIG undefined FUN_148c39726(void)

void FUN_148c39726(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadc48);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c39784 FUN_148c39784 body=160 status=ok
// SIG undefined FUN_148c39784(void)

void FUN_148c39784(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x1288))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c39826 FUN_148c39826 body=129 status=ok
// SIG undefined FUN_148c39826(void)

void FUN_148c39826(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_2c = *param_4;
  local_24 = *param_5;
  local_1c = *(undefined4 *)(param_5 + 1);
  local_38 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadc58);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c398a8 FUN_148c398a8 body=428 status=ok
// SIG undefined FUN_148c398a8(void)

void FUN_148c398a8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_2c = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_38 = 0;
  local_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = &local_38;
  (**(code **)(*param_1 + 0x12b0))(param_1,local_20,&local_24,&local_2c);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c39a68 FUN_148c39a68 body=195 status=ok
// SIG undefined FUN_148c39a68(void)

void FUN_148c39a68(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x1240))(param_1,local_1c);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSwitchActiveCharacterProfile_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x1248))(param_1,local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c39b2c FUN_148c39b2c body=95 status=ok
// SIG undefined FUN_148c39b2c(void)

void FUN_148c39b2c(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  local_1c = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadd18);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c39b8c FUN_148c39b8c body=239 status=ok
// SIG undefined FUN_148c39b8c(void)

void FUN_148c39b8c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1250))(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c39cae FUN_148c39cae body=239 status=ok
// SIG undefined FUN_148c39cae(void)

void FUN_148c39cae(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148db9480(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c39e02 FUN_148c39e02 body=45 status=ok
// SIG undefined FUN_148c39e02(void)

longlong FUN_148c39e02(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1415453aa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c39e30 FUN_148c39e30 body=48 status=ok
// SIG undefined FUN_148c39e30(void)

longlong FUN_148c39e30(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140894b60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c39e60 FUN_148c39e60 body=45 status=ok
// SIG undefined FUN_148c39e60(void)

longlong FUN_148c39e60(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c39e8e FUN_148c39e8e body=48 status=ok
// SIG undefined FUN_148c39e8e(void)

longlong FUN_148c39e8e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c39ebe FUN_148c39ebe body=48 status=ok
// SIG undefined FUN_148c39ebe(void)

longlong FUN_148c39ebe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c39eee FUN_148c39eee body=48 status=ok
// SIG undefined FUN_148c39eee(void)

longlong FUN_148c39eee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c39f1e FUN_148c39f1e body=48 status=ok
// SIG undefined FUN_148c39f1e(void)

longlong FUN_148c39f1e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc40;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c39f4e FUN_148c39f4e body=48 status=ok
// SIG undefined FUN_148c39f4e(void)

longlong FUN_148c39f4e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc48;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c39f7e FUN_148c39f7e body=48 status=ok
// SIG undefined FUN_148c39f7e(void)

longlong FUN_148c39f7e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c39fae FUN_148c39fae body=48 status=ok
// SIG undefined FUN_148c39fae(void)

longlong FUN_148c39fae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c39fde FUN_148c39fde body=48 status=ok
// SIG undefined FUN_148c39fde(void)

longlong FUN_148c39fde(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a00e FUN_148c3a00e body=48 status=ok
// SIG undefined FUN_148c3a00e(void)

longlong FUN_148c3a00e(longlong param_1,int param_2)

{
  param_1 = param_1 + -1000;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a03e FUN_148c3a03e body=48 status=ok
// SIG undefined FUN_148c3a03e(void)

longlong FUN_148c3a03e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a06e FUN_148c3a06e body=48 status=ok
// SIG undefined FUN_148c3a06e(void)

longlong FUN_148c3a06e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a09e FUN_148c3a09e body=45 status=ok
// SIG undefined FUN_148c3a09e(void)

longlong FUN_148c3a09e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a0cc FUN_148c3a0cc body=48 status=ok
// SIG undefined FUN_148c3a0cc(void)

longlong FUN_148c3a0cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a0fc FUN_148c3a0fc body=48 status=ok
// SIG undefined FUN_148c3a0fc(void)

longlong FUN_148c3a0fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a12c FUN_148c3a12c body=48 status=ok
// SIG undefined FUN_148c3a12c(void)

longlong FUN_148c3a12c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a15c FUN_148c3a15c body=48 status=ok
// SIG undefined FUN_148c3a15c(void)

longlong FUN_148c3a15c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a18c FUN_148c3a18c body=48 status=ok
// SIG undefined FUN_148c3a18c(void)

longlong FUN_148c3a18c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a1bc FUN_148c3a1bc body=48 status=ok
// SIG undefined FUN_148c3a1bc(void)

longlong FUN_148c3a1bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a1ec FUN_148c3a1ec body=48 status=ok
// SIG undefined FUN_148c3a1ec(void)

longlong FUN_148c3a1ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a21c FUN_148c3a21c body=48 status=ok
// SIG undefined FUN_148c3a21c(void)

longlong FUN_148c3a21c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a24c FUN_148c3a24c body=48 status=ok
// SIG undefined FUN_148c3a24c(void)

longlong FUN_148c3a24c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a27c FUN_148c3a27c body=48 status=ok
// SIG undefined FUN_148c3a27c(void)

longlong FUN_148c3a27c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a2ac FUN_148c3a2ac body=48 status=ok
// SIG undefined FUN_148c3a2ac(void)

longlong FUN_148c3a2ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a2dc FUN_148c3a2dc body=48 status=ok
// SIG undefined FUN_148c3a2dc(void)

longlong FUN_148c3a2dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a30c FUN_148c3a30c body=48 status=ok
// SIG undefined FUN_148c3a30c(void)

longlong FUN_148c3a30c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a33c FUN_148c3a33c body=48 status=ok
// SIG undefined FUN_148c3a33c(void)

longlong FUN_148c3a33c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a36c FUN_148c3a36c body=48 status=ok
// SIG undefined FUN_148c3a36c(void)

longlong FUN_148c3a36c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a39c FUN_148c3a39c body=48 status=ok
// SIG undefined FUN_148c3a39c(void)

longlong FUN_148c3a39c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a3cc FUN_148c3a3cc body=48 status=ok
// SIG undefined FUN_148c3a3cc(void)

longlong FUN_148c3a3cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a3fc FUN_148c3a3fc body=48 status=ok
// SIG undefined FUN_148c3a3fc(void)

longlong FUN_148c3a3fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a42c FUN_148c3a42c body=48 status=ok
// SIG undefined FUN_148c3a42c(void)

longlong FUN_148c3a42c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a45c FUN_148c3a45c body=48 status=ok
// SIG undefined FUN_148c3a45c(void)

longlong FUN_148c3a45c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a48c FUN_148c3a48c body=48 status=ok
// SIG undefined FUN_148c3a48c(void)

longlong FUN_148c3a48c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a4bc FUN_148c3a4bc body=48 status=ok
// SIG undefined FUN_148c3a4bc(void)

longlong FUN_148c3a4bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a4ec FUN_148c3a4ec body=48 status=ok
// SIG undefined FUN_148c3a4ec(void)

longlong FUN_148c3a4ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a51c FUN_148c3a51c body=48 status=ok
// SIG undefined FUN_148c3a51c(void)

longlong FUN_148c3a51c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a54c FUN_148c3a54c body=48 status=ok
// SIG undefined FUN_148c3a54c(void)

longlong FUN_148c3a54c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a57c FUN_148c3a57c body=48 status=ok
// SIG undefined FUN_148c3a57c(void)

longlong FUN_148c3a57c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a5ac FUN_148c3a5ac body=48 status=ok
// SIG undefined FUN_148c3a5ac(void)

longlong FUN_148c3a5ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a5dc FUN_148c3a5dc body=48 status=ok
// SIG undefined FUN_148c3a5dc(void)

longlong FUN_148c3a5dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a60c FUN_148c3a60c body=48 status=ok
// SIG undefined FUN_148c3a60c(void)

longlong FUN_148c3a60c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a63c FUN_148c3a63c body=48 status=ok
// SIG undefined FUN_148c3a63c(void)

longlong FUN_148c3a63c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a66c FUN_148c3a66c body=48 status=ok
// SIG undefined FUN_148c3a66c(void)

longlong FUN_148c3a66c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a69c FUN_148c3a69c body=48 status=ok
// SIG undefined FUN_148c3a69c(void)

longlong FUN_148c3a69c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3a736 FUN_148c3a736 body=63 status=ok
// SIG undefined FUN_148c3a736(void)

undefined1 FUN_148c3a736(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c3a88a(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148c3a79e FUN_148c3a79e body=59 status=ok
// SIG undefined FUN_148c3a79e(void)

undefined8 FUN_148c3a79e(longlong *param_1)

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



// FUNCTION 148c3a7ea FUN_148c3a7ea body=38 status=ok
// SIG undefined FUN_148c3a7ea(void)

void FUN_148c3a7ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_140ab0fa0(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148c3a852 FUN_148c3a852 body=55 status=ok
// SIG undefined FUN_148c3a852(void)

void FUN_148c3a852(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad1c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad1c0 = FUN_140002ddd(FUN_1465e5a01,uVar1,L"OakObjectiveWaypointSettings");
  }
  return;
}



// FUNCTION 148c3a88a FUN_148c3a88a body=113 status=ok
// SIG undefined FUN_148c3a88a(void)

longlong FUN_148c3a88a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_1400fce78(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  FUN_14184b2ce(param_1 + 0x38,param_2 + 0x38);
  FUN_1457b9446(param_1 + 0x50,param_2 + 0x50);
  FUN_1418c3a72(param_1 + 0x68,param_2 + 0x68);
  FUN_1418ce9f8(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



// FUNCTION 148c3a98a FUN_148c3a98a body=59 status=ok
// SIG undefined FUN_148c3a98a(void)

undefined8 FUN_148c3a98a(longlong *param_1)

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



// FUNCTION 148c3aa2a FUN_148c3aa2a body=31 status=ok
// SIG undefined FUN_148c3aa2a(void)

undefined8 FUN_148c3aa2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3aad8 FUN_148c3aad8 body=59 status=ok
// SIG undefined FUN_148c3aad8(void)

undefined8 FUN_148c3aad8(longlong *param_1)

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



// FUNCTION 148c3ab78 FUN_148c3ab78 body=31 status=ok
// SIG undefined FUN_148c3ab78(void)

undefined8 FUN_148c3ab78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ac26 FUN_148c3ac26 body=59 status=ok
// SIG undefined FUN_148c3ac26(void)

undefined8 FUN_148c3ac26(longlong *param_1)

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



// FUNCTION 148c3acc6 FUN_148c3acc6 body=31 status=ok
// SIG undefined FUN_148c3acc6(void)

undefined8 FUN_148c3acc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ad74 FUN_148c3ad74 body=59 status=ok
// SIG undefined FUN_148c3ad74(void)

undefined8 FUN_148c3ad74(longlong *param_1)

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



// FUNCTION 148c3ae14 FUN_148c3ae14 body=31 status=ok
// SIG undefined FUN_148c3ae14(void)

undefined8 FUN_148c3ae14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3aec2 FUN_148c3aec2 body=59 status=ok
// SIG undefined FUN_148c3aec2(void)

undefined8 FUN_148c3aec2(longlong *param_1)

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



// FUNCTION 148c3af62 FUN_148c3af62 body=31 status=ok
// SIG undefined FUN_148c3af62(void)

undefined8 FUN_148c3af62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3afd4 FUN_148c3afd4 body=92 status=ok
// SIG undefined FUN_148c3afd4(void)

undefined8 FUN_148c3afd4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x20 + lVar6;
      *(undefined1 *)(lVar2 + -0x1c) = *(undefined1 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0x20) = *puVar1;
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(puVar1 + 2);
      uVar3 = puVar1[5];
      uVar4 = puVar1[6];
      uVar5 = puVar1[7];
      *(undefined4 *)(lVar2 + -0x10) = puVar1[4];
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c3b058 FUN_148c3b058 body=59 status=ok
// SIG undefined FUN_148c3b058(void)

undefined8 FUN_148c3b058(longlong *param_1)

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



// FUNCTION 148c3b09e FUN_148c3b09e body=38 status=ok
// SIG undefined FUN_148c3b09e(void)

void FUN_148c3b09e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148c3b132 FUN_148c3b132 body=126 status=ok
// SIG undefined FUN_148c3b132(void)

undefined8 FUN_148c3b132(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144983130(param_2,param_3);
    FUN_144983130(param_2 + 0x38,param_3 + 0x38);
    *(undefined1 *)(param_2 + 0x70) = *(undefined1 *)(param_3 + 0x70);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_3 + 0x78);
    uVar1 = *(undefined4 *)(param_3 + 0x84);
    uVar2 = *(undefined4 *)(param_3 + 0x88);
    uVar3 = *(undefined4 *)(param_3 + 0x8c);
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_3 + 0x80);
    *(undefined4 *)(param_2 + 0x84) = uVar1;
    *(undefined4 *)(param_2 + 0x88) = uVar2;
    *(undefined4 *)(param_2 + 0x8c) = uVar3;
    FUN_144a787a6(param_2 + 0x90,param_3 + 0x90);
    param_2 = param_2 + 0xa0;
    param_3 = param_3 + 0xa0;
  }
  return 1;
}



// FUNCTION 148c3b1d8 FUN_148c3b1d8 body=59 status=ok
// SIG undefined FUN_148c3b1d8(void)

undefined8 FUN_148c3b1d8(longlong *param_1)

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



// FUNCTION 148c3b224 FUN_148c3b224 body=40 status=ok
// SIG undefined FUN_148c3b224(void)

void FUN_148c3b224(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_14582cc9e(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148c3b2ba FUN_148c3b2ba body=63 status=ok
// SIG undefined FUN_148c3b2ba(void)

undefined1 FUN_148c3b2ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c3b3dc(param_2,param_3);
    param_3 = param_3 + 0x220;
    param_2 = param_2 + 0x220;
  }
  return 1;
}



// FUNCTION 148c3b322 FUN_148c3b322 body=59 status=ok
// SIG undefined FUN_148c3b322(void)

undefined8 FUN_148c3b322(longlong *param_1)

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



// FUNCTION 148c3b36e FUN_148c3b36e body=40 status=ok
// SIG undefined FUN_148c3b36e(void)

void FUN_148c3b36e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_14582cbf6(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 148c3b3dc FUN_148c3b3dc body=486 status=ok
// SIG undefined FUN_148c3b3dc(void)

longlong FUN_148c3b3dc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined4 *)(param_2 + 0x74);
  uVar2 = *(undefined4 *)(param_2 + 0x78);
  uVar3 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  uVar1 = *(undefined4 *)(param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  uVar3 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  FUN_144a787a6(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  uVar1 = *(undefined4 *)(param_2 + 0xcc);
  uVar2 = *(undefined4 *)(param_2 + 0xd0);
  uVar3 = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  *(undefined4 *)(param_1 + 0xd4) = uVar3;
  FUN_144a787a6(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  uVar1 = *(undefined4 *)(param_2 + 0xf4);
  uVar2 = *(undefined4 *)(param_2 + 0xf8);
  uVar3 = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  *(undefined4 *)(param_1 + 0xfc) = uVar3;
  FUN_144a787a6(param_1 + 0x100,param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  uVar1 = *(undefined4 *)(param_2 + 0x11c);
  uVar2 = *(undefined4 *)(param_2 + 0x120);
  uVar3 = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  FUN_144a787a6(param_1 + 0x128,param_2 + 0x128);
  FUN_144a7bb84(param_1 + 0x138,param_2 + 0x138);
  FUN_144a7bb84(param_1 + 0x150,param_2 + 0x150);
  FUN_144a7bb84(param_1 + 0x168,param_2 + 0x168);
  FUN_144983130(param_1 + 0x180,param_2 + 0x180);
  FUN_144983130(param_1 + 0x1b8,param_2 + 0x1b8);
  *(undefined1 *)(param_1 + 0x1f0) = *(undefined1 *)(param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
  uVar1 = *(undefined4 *)(param_2 + 0x204);
  uVar2 = *(undefined4 *)(param_2 + 0x208);
  uVar3 = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x204) = uVar1;
  *(undefined4 *)(param_1 + 0x208) = uVar2;
  *(undefined4 *)(param_1 + 0x20c) = uVar3;
  FUN_144a787a6(param_1 + 0x210,param_2 + 0x210);
  return param_1;
}



// FUNCTION 148c3b5c4 FUN_148c3b5c4 body=57 status=ok
// SIG undefined FUN_148c3b5c4(void)

void FUN_148c3b5c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad370 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad370 = FUN_140002ddd(FUN_1465e5f7c,uVar1,L"OakOrderRewindDef");
  }
  return;
}



// FUNCTION 148c3b5fe FUN_148c3b5fe body=28 status=ok
// SIG undefined FUN_148c3b5fe(void)

undefined8 FUN_148c3b5fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c3b6c6 FUN_148c3b6c6 body=59 status=ok
// SIG undefined FUN_148c3b6c6(void)

undefined8 FUN_148c3b6c6(longlong *param_1)

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



// FUNCTION 148c3b712 FUN_148c3b712 body=38 status=ok
// SIG undefined FUN_148c3b712(void)

void FUN_148c3b712(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_144051aa8(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148c3b7a6 FUN_148c3b7a6 body=63 status=ok
// SIG undefined FUN_148c3b7a6(void)

undefined1 FUN_148c3b7a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148baebb2(param_2,param_3);
    param_3 = param_3 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return 1;
}



// FUNCTION 148c3b80e FUN_148c3b80e body=59 status=ok
// SIG undefined FUN_148c3b80e(void)

undefined8 FUN_148c3b80e(longlong *param_1)

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



// FUNCTION 148c3b85a FUN_148c3b85a body=38 status=ok
// SIG undefined FUN_148c3b85a(void)

void FUN_148c3b85a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x140) == '\x01') {
    FUN_141296d42(param_2);
    *(undefined1 *)(param_2 + 0x140) = 0;
  }
  return;
}



// FUNCTION 148c3b8fa FUN_148c3b8fa body=63 status=ok
// SIG undefined FUN_148c3b8fa(void)

undefined1 FUN_148c3b8fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c3ba22(param_2,param_3);
    param_3 = param_3 + 0x150;
    param_2 = param_2 + 0x150;
  }
  return 1;
}



// FUNCTION 148c3b962 FUN_148c3b962 body=59 status=ok
// SIG undefined FUN_148c3b962(void)

undefined8 FUN_148c3b962(longlong *param_1)

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



// FUNCTION 148c3b9ae FUN_148c3b9ae body=38 status=ok
// SIG undefined FUN_148c3b9ae(void)

void FUN_148c3b9ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x150) == '\x01') {
    FUN_1418c81e2(param_2);
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 148c3ba22 FUN_148c3ba22 body=379 status=ok
// SIG undefined FUN_148c3ba22(void)

longlong FUN_148c3ba22(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != param_1) {
    FUN_1401b31d8(param_1,param_2);
  }
  lVar1 = *(longlong *)(param_2 + 0x18);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x18);
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_144a7bb84(param_1 + 0x30,param_2 + 0x30);
  FUN_144a82394(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  FUN_144a7bb84(param_1 + 0x60,param_2 + 0x60);
  FUN_144a82394(param_1 + 0x78,param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  FUN_144a7bb84(param_1 + 0x90,param_2 + 0x90);
  FUN_144a82394(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  FUN_144a7bb84(param_1 + 0xc0,param_2 + 0xc0);
  FUN_144a82394(param_1 + 0xd8,param_2 + 0xd8);
  FUN_140311eb6(param_1 + 0xe0,param_2 + 0xe0);
  puVar2 = (undefined8 *)(param_2 + 0xf0);
  puVar3 = (undefined8 *)(param_1 + 0xf0);
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(param_1 + 0x130) = *(undefined2 *)(param_2 + 0x130);
  FUN_14117bcd8(param_1 + 0x134,param_2 + 0x134);
  FUN_14117bcd8(param_1 + 0x140,param_2 + 0x140);
  return param_1;
}



// FUNCTION 148c3bb9e FUN_148c3bb9e body=103 status=ok
// SIG undefined FUN_148c3bb9e(void)

void FUN_148c3bb9e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  *(undefined4 *)((longlong)param_2 + 8) = 0x4000;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3ff00000;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined1 *)((longlong)param_2 + 0x88) = 0;
  return;
}



// FUNCTION 148c3bc72 FUN_148c3bc72 body=109 status=ok
// SIG undefined FUN_148c3bc72(void)

undefined8 FUN_148c3bc72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = param_3 + 8;
    lVar1 = 0;
    do {
      if ((*(longlong *)(param_2 + lVar1) != *(longlong *)(param_3 + lVar1)) ||
         (*(int *)(param_2 + 8 + lVar1) != *(int *)(lVar5 + lVar1))) {
        *(longlong *)(param_2 + lVar1) = *(longlong *)(param_3 + lVar1);
        *(undefined4 *)(param_2 + 8 + lVar1) = *(undefined4 *)(lVar5 + lVar1);
        *(undefined8 *)(param_2 + 0x10 + lVar1) = 0;
      }
      *(undefined1 *)(param_2 + lVar1 + 0x88) = *(undefined1 *)(lVar5 + lVar1 + 0x80);
      puVar3 = (undefined8 *)(lVar5 + lVar1 + 0x18);
      puVar4 = (undefined8 *)(param_2 + lVar1 + 0x20);
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c3bd08 FUN_148c3bd08 body=59 status=ok
// SIG undefined FUN_148c3bd08(void)

undefined8 FUN_148c3bd08(longlong *param_1)

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



// FUNCTION 148c3bdb6 FUN_148c3bdb6 body=93 status=ok
// SIG undefined FUN_148c3bdb6(void)

void FUN_148c3bdb6(undefined8 param_1,undefined8 *param_2)

{
  FUN_1404e2388(param_2);
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  param_2[0x14] = 0;
  *(undefined2 *)(param_2 + 0x15) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xb9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_2 + 0xd4) = 0;
  *param_2 = &PTR_FUN_14b7d0b30;
  return;
}



// FUNCTION 148c3be2a FUN_148c3be2a body=99 status=ok
// SIG undefined FUN_148c3be2a(void)

undefined1 FUN_148c3be2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e1a790(param_2,param_3);
    FUN_1487602b2(param_2 + 0x90,param_3 + 0x90);
    uVar1 = *(undefined4 *)(param_3 + 0xcc);
    uVar2 = *(undefined4 *)(param_3 + 0xd0);
    uVar3 = *(undefined4 *)(param_3 + 0xd4);
    *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_3 + 200);
    *(undefined4 *)(param_2 + 0xcc) = uVar1;
    *(undefined4 *)(param_2 + 0xd0) = uVar2;
    *(undefined4 *)(param_2 + 0xd4) = uVar3;
    param_2 = param_2 + 0xd8;
    param_3 = param_3 + 0xd8;
  }
  return 1;
}



// FUNCTION 148c3beb6 FUN_148c3beb6 body=59 status=ok
// SIG undefined FUN_148c3beb6(void)

undefined8 FUN_148c3beb6(longlong *param_1)

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



// FUNCTION 148c3bf02 FUN_148c3bf02 body=38 status=ok
// SIG undefined FUN_148c3bf02(void)

void FUN_148c3bf02(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_141167ffc(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148c3bfe4 FUN_148c3bfe4 body=59 status=ok
// SIG undefined FUN_148c3bfe4(void)

undefined8 FUN_148c3bfe4(longlong *param_1)

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



// FUNCTION 148c3c086 FUN_148c3c086 body=60 status=ok
// SIG undefined FUN_148c3c086(void)

void FUN_148c3c086(undefined8 param_1,undefined8 *param_2)

{
  FUN_140a3ff80(param_2);
  *param_2 = &PTR_FUN_14b7d0f50;
  param_2[0xd5] = 0;
  param_2[0xd6] = 0;
  param_2[0xd7] = 0;
  param_2[0xd8] = 0;
  param_2[0xd9] = 0;
  return;
}



// FUNCTION 148c3c0e6 FUN_148c3c0e6 body=99 status=ok
// SIG undefined FUN_148c3c0e6(void)

undefined1 FUN_148c3c0e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14869fefc(param_2,param_3);
    FUN_14123c256(param_2 + 0x6a8,param_3 + 0x6a8);
    uVar1 = *(undefined4 *)(param_3 + 0x6c4);
    uVar2 = *(undefined4 *)(param_3 + 0x6c8);
    uVar3 = *(undefined4 *)(param_3 + 0x6cc);
    *(undefined4 *)(param_2 + 0x6c0) = *(undefined4 *)(param_3 + 0x6c0);
    *(undefined4 *)(param_2 + 0x6c4) = uVar1;
    *(undefined4 *)(param_2 + 0x6c8) = uVar2;
    *(undefined4 *)(param_2 + 0x6cc) = uVar3;
    param_2 = param_2 + 0x6d0;
    param_3 = param_3 + 0x6d0;
  }
  return 1;
}



// FUNCTION 148c3c172 FUN_148c3c172 body=59 status=ok
// SIG undefined FUN_148c3c172(void)

undefined8 FUN_148c3c172(longlong *param_1)

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



// FUNCTION 148c3c1be FUN_148c3c1be body=38 status=ok
// SIG undefined FUN_148c3c1be(void)

void FUN_148c3c1be(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x6d0) == '\x01') {
    FUN_14060f31a(param_2);
    *(undefined1 *)(param_2 + 0x6d0) = 0;
  }
  return;
}



// FUNCTION 148c3c236 FUN_148c3c236 body=53 status=ok
// SIG undefined FUN_148c3c236(void)

void FUN_148c3c236(undefined8 param_1,undefined8 *param_2)

{
  FUN_141407eb4(param_2);
  *param_2 = &PTR_FUN_14b7d1130;
  param_2[0x5c] = 0;
  param_2[0x5d] = 0;
  param_2[0x5e] = 0;
  return;
}



// FUNCTION 148c3c282 FUN_148c3c282 body=85 status=ok
// SIG undefined FUN_148c3c282(void)

undefined1 FUN_148c3c282(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486a0e54(param_2,param_3);
    FUN_14123c256(param_2 + 0x2e0,param_3 + 0x2e0);
    param_2 = param_2 + 0x2f8;
    param_3 = param_3 + 0x2f8;
  }
  return 1;
}



// FUNCTION 148c3c300 FUN_148c3c300 body=59 status=ok
// SIG undefined FUN_148c3c300(void)

undefined8 FUN_148c3c300(longlong *param_1)

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



// FUNCTION 148c3c34c FUN_148c3c34c body=38 status=ok
// SIG undefined FUN_148c3c34c(void)

void FUN_148c3c34c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f8) == '\x01') {
    FUN_1407f60da(param_2);
    *(undefined1 *)(param_2 + 0x2f8) = 0;
  }
  return;
}



// FUNCTION 148c3c446 FUN_148c3c446 body=59 status=ok
// SIG undefined FUN_148c3c446(void)

undefined8 FUN_148c3c446(longlong *param_1)

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



// FUNCTION 148c3c4e6 FUN_148c3c4e6 body=55 status=ok
// SIG undefined FUN_148c3c4e6(void)

void FUN_148c3c4e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad610 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad610 = FUN_140002ddd(FUN_1465e69d9,uVar1,L"OakPlayerBankValueResolver");
  }
  return;
}



// FUNCTION 148c3c546 FUN_148c3c546 body=100 status=ok
// SIG undefined FUN_148c3c546(void)

undefined1 FUN_148c3c546(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c3c5d2 FUN_148c3c5d2 body=59 status=ok
// SIG undefined FUN_148c3c5d2(void)

undefined8 FUN_148c3c5d2(longlong *param_1)

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



// FUNCTION 148c3c6e0 FUN_148c3c6e0 body=59 status=ok
// SIG undefined FUN_148c3c6e0(void)

undefined8 FUN_148c3c6e0(longlong *param_1)

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



// FUNCTION 148c3c726 FUN_148c3c726 body=37 status=ok
// SIG undefined FUN_148c3c726(void)

void FUN_148c3c726(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148c3c7d0 FUN_148c3c7d0 body=54 status=ok
// SIG undefined FUN_148c3c7d0(void)

undefined1 FUN_148c3c7d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c3c8e8(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c3c82e FUN_148c3c82e body=59 status=ok
// SIG undefined FUN_148c3c82e(void)

undefined8 FUN_148c3c82e(longlong *param_1)

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



// FUNCTION 148c3c874 FUN_148c3c874 body=37 status=ok
// SIG undefined FUN_148c3c874(void)

void FUN_148c3c874(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148c3c8e8 FUN_148c3c8e8 body=79 status=ok
// SIG undefined FUN_148c3c8e8(void)

undefined8 * FUN_148c3c8e8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c3c938(param_1,iVar1);
      FUN_148c3c99a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c3c938 FUN_148c3c938 body=98 status=ok
// SIG undefined FUN_148c3c938(void)

void FUN_148c3c938(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c3c99a FUN_148c3c99a body=82 status=ok
// SIG undefined FUN_148c3c99a(void)

void FUN_148c3c99a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 148c3ca1c FUN_148c3ca1c body=155 status=ok
// SIG undefined FUN_148c3ca1c(void)

void FUN_148c3ca1c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_140101118(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3cab8 FUN_148c3cab8 body=230 status=ok
// SIG undefined FUN_148c3cab8(void)

void FUN_148c3cab8(undefined8 param_1,longlong param_2)

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
  FUN_148dc0588(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3cba0 FUN_148c3cba0 body=148 status=ok
// SIG undefined FUN_148c3cba0(void)

void FUN_148c3cba0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148dc05fe(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3cc3e FUN_148c3cc3e body=299 status=ok
// SIG undefined FUN_148c3cc3e(void)

void FUN_148c3cc3e(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  uVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uVar2 = FUN_14477b664(uStack_30);
  local_50 = FUN_14477b664(uVar2);
  local_48 = local_28;
  FUN_148dc0e36(param_1,&local_58,uVar1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3cd6a FUN_148c3cd6a body=209 status=ok
// SIG undefined FUN_148c3cd6a(void)

void FUN_148c3cd6a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar1);
  local_40 = local_28;
  FUN_148dc0ed0(param_1,&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3ce58 FUN_148c3ce58 body=303 status=ok
// SIG undefined FUN_148c3ce58(void)

void FUN_148c3ce58(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [4];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  plVar3 = local_48 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148dc1776(param_1,plVar3,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3cf88 FUN_148c3cf88 body=39 status=ok
// SIG undefined FUN_148c3cf88(void)

void FUN_148c3cf88(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_140ebe5be();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148c3cfb0 FUN_148c3cfb0 body=194 status=ok
// SIG undefined FUN_148c3cfb0(void)

void FUN_148c3cfb0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14477b072(param_1,DAT_14cbae290);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_38[0] = 0;
    local_38[1] = 0;
    local_40 = *param_2;
    FUN_144a787a6(local_38,param_3);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_40);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38[2] ^ (ulonglong)auStack_68);
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000148c3d075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x820))(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3d07e FUN_148c3d07e body=283 status=ok
// SIG undefined FUN_148c3d07e(void)

void FUN_148c3d07e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  plVar1 = local_38 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x820))(param_1,plVar1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3d1fe FUN_148c3d1fe body=169 status=ok
// SIG undefined FUN_148c3d1fe(void)

void FUN_148c3d1fe(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148dc18a8(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3d382 FUN_148c3d382 body=238 status=ok
// SIG undefined FUN_148c3d382(void)

void FUN_148c3d382(longlong *param_1,longlong param_2)

{
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0;
  FUN_14485c47a(&local_a0,0);
  local_98 = 0;
  local_94 = 0;
  local_8c = 0;
  local_88 = (undefined4)DAT_14c8464e0;
  uStack_84 = DAT_14c8464e0._4_4_;
  uStack_80 = (undefined4)DAT_14c8464e8;
  uStack_7c = DAT_14c8464e8._4_4_;
  local_78 = DAT_14c8464f0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x808))(param_1,&local_a0);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3d472 FUN_148c3d472 body=95 status=ok
// SIG undefined FUN_148c3d472(void)

void FUN_148c3d472(longlong *param_1,undefined1 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20[0] = param_2;
  local_1c = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbae350);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3d4d2 FUN_148c3d4d2 body=236 status=ok
// SIG undefined FUN_148c3d4d2(void)

void FUN_148c3d4d2(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x800))(param_1,local_19,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3d5c6 FUN_148c3d5c6 body=132 status=ok
// SIG undefined FUN_148c3d5c6(void)

void FUN_148c3d5c6(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  local_30 = *param_2;
  FUN_144a787a6(local_28,param_3);
  uVar1 = FUN_14477b072(param_1,DAT_14cbae380);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3d64c FUN_148c3d64c body=265 status=ok
// SIG undefined FUN_148c3d64c(void)

void FUN_148c3d64c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x838))(param_1,&local_20,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3d75a FUN_148c3d75a body=91 status=ok
// SIG undefined FUN_148c3d75a(void)

void FUN_148c3d75a(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbae3a0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3d7b6 FUN_148c3d7b6 body=192 status=ok
// SIG undefined FUN_148c3d7b6(void)

void FUN_148c3d7b6(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x840))(param_1,local_19);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSetPlayerProfileDifficulty_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x848))(param_1,local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3d878 FUN_148c3d878 body=91 status=ok
// SIG undefined FUN_148c3d878(void)

void FUN_148c3d878(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbae3b0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3d8d4 FUN_148c3d8d4 body=192 status=ok
// SIG undefined FUN_148c3d8d4(void)

void FUN_148c3d8d4(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x850))(param_1,local_19);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSetTravelStatus_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x858))(param_1,local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3d996 FUN_148c3d996 body=279 status=ok
// SIG undefined FUN_148c3d996(void)

void FUN_148c3d996(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  plVar1 = local_38 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148dc10cc(param_1,plVar1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3daae FUN_148c3daae body=169 status=ok
// SIG undefined FUN_148c3daae(void)

void FUN_148c3daae(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148dc1862(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3db58 FUN_148c3db58 body=461 status=ok
// SIG undefined FUN_148c3db58(void)

void FUN_148c3db58(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_4c;
  longlong local_48 [7];
  
  local_48[6] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[4] = 0;
  local_48[5] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 4);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_4c;
  FUN_148dc1384(param_1,local_48 + 4,local_48 + 2,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[6] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3dd76 FUN_148c3dd76 body=205 status=ok
// SIG undefined FUN_148c3dd76(void)

void FUN_148c3dd76(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_68 = 0;
  local_60 = 0x100;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_f8[0] = param_2;
  FUN_14133a8ca(&local_e8,param_3);
  FUN_1447cd2ec(param_1,local_f8);
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3de66 FUN_148c3de66 body=158 status=ok
// SIG undefined FUN_148c3de66(void)

void FUN_148c3de66(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cd67b2(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c3df40 FUN_148c3df40 body=45 status=ok
// SIG undefined FUN_148c3df40(void)

longlong FUN_148c3df40(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3df6e FUN_148c3df6e body=45 status=ok
// SIG undefined FUN_148c3df6e(void)

longlong FUN_148c3df6e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3df9c FUN_148c3df9c body=48 status=ok
// SIG undefined FUN_148c3df9c(void)

longlong FUN_148c3df9c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3dfcc FUN_148c3dfcc body=48 status=ok
// SIG undefined FUN_148c3dfcc(void)

longlong FUN_148c3dfcc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3dffc FUN_148c3dffc body=48 status=ok
// SIG undefined FUN_148c3dffc(void)

longlong FUN_148c3dffc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e030 FUN_148c3e030 body=48 status=ok
// SIG undefined FUN_148c3e030(void)

longlong FUN_148c3e030(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x860;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e060 FUN_148c3e060 body=48 status=ok
// SIG undefined FUN_148c3e060(void)

longlong FUN_148c3e060(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x868;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e090 FUN_148c3e090 body=48 status=ok
// SIG undefined FUN_148c3e090(void)

longlong FUN_148c3e090(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x870;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e0c0 FUN_148c3e0c0 body=48 status=ok
// SIG undefined FUN_148c3e0c0(void)

longlong FUN_148c3e0c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10a0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e0f0 FUN_148c3e0f0 body=48 status=ok
// SIG undefined FUN_148c3e0f0(void)

longlong FUN_148c3e0f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10a8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e120 FUN_148c3e120 body=48 status=ok
// SIG undefined FUN_148c3e120(void)

longlong FUN_148c3e120(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10b0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e150 FUN_148c3e150 body=48 status=ok
// SIG undefined FUN_148c3e150(void)

longlong FUN_148c3e150(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10b8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e180 FUN_148c3e180 body=48 status=ok
// SIG undefined FUN_148c3e180(void)

longlong FUN_148c3e180(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10c0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e1b0 FUN_148c3e1b0 body=48 status=ok
// SIG undefined FUN_148c3e1b0(void)

longlong FUN_148c3e1b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10c8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e1e0 FUN_148c3e1e0 body=48 status=ok
// SIG undefined FUN_148c3e1e0(void)

longlong FUN_148c3e1e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10d0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e210 FUN_148c3e210 body=48 status=ok
// SIG undefined FUN_148c3e210(void)

longlong FUN_148c3e210(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10d8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e240 FUN_148c3e240 body=48 status=ok
// SIG undefined FUN_148c3e240(void)

longlong FUN_148c3e240(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10e0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e270 FUN_148c3e270 body=48 status=ok
// SIG undefined FUN_148c3e270(void)

longlong FUN_148c3e270(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10e8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e2a0 FUN_148c3e2a0 body=48 status=ok
// SIG undefined FUN_148c3e2a0(void)

longlong FUN_148c3e2a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10f0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e2d0 FUN_148c3e2d0 body=48 status=ok
// SIG undefined FUN_148c3e2d0(void)

longlong FUN_148c3e2d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10f8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e300 FUN_148c3e300 body=48 status=ok
// SIG undefined FUN_148c3e300(void)

longlong FUN_148c3e300(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1110;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e330 FUN_148c3e330 body=48 status=ok
// SIG undefined FUN_148c3e330(void)

longlong FUN_148c3e330(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a80;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e360 FUN_148c3e360 body=48 status=ok
// SIG undefined FUN_148c3e360(void)

longlong FUN_148c3e360(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a88;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e390 FUN_148c3e390 body=48 status=ok
// SIG undefined FUN_148c3e390(void)

longlong FUN_148c3e390(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a90;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e3c0 FUN_148c3e3c0 body=48 status=ok
// SIG undefined FUN_148c3e3c0(void)

longlong FUN_148c3e3c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ad8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e3f0 FUN_148c3e3f0 body=48 status=ok
// SIG undefined FUN_148c3e3f0(void)

longlong FUN_148c3e3f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ae0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e420 FUN_148c3e420 body=48 status=ok
// SIG undefined FUN_148c3e420(void)

longlong FUN_148c3e420(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ae8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e450 FUN_148c3e450 body=48 status=ok
// SIG undefined FUN_148c3e450(void)

longlong FUN_148c3e450(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b08;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e480 FUN_148c3e480 body=48 status=ok
// SIG undefined FUN_148c3e480(void)

longlong FUN_148c3e480(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b20;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e4b0 FUN_148c3e4b0 body=48 status=ok
// SIG undefined FUN_148c3e4b0(void)

longlong FUN_148c3e4b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b28;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e4e0 FUN_148c3e4e0 body=48 status=ok
// SIG undefined FUN_148c3e4e0(void)

longlong FUN_148c3e4e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b30;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e510 FUN_148c3e510 body=48 status=ok
// SIG undefined FUN_148c3e510(void)

longlong FUN_148c3e510(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b38;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e540 FUN_148c3e540 body=48 status=ok
// SIG undefined FUN_148c3e540(void)

longlong FUN_148c3e540(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b40;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e570 FUN_148c3e570 body=48 status=ok
// SIG undefined FUN_148c3e570(void)

longlong FUN_148c3e570(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b48;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e5a0 FUN_148c3e5a0 body=48 status=ok
// SIG undefined FUN_148c3e5a0(void)

longlong FUN_148c3e5a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b50;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e5d0 FUN_148c3e5d0 body=48 status=ok
// SIG undefined FUN_148c3e5d0(void)

longlong FUN_148c3e5d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b58;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e600 FUN_148c3e600 body=48 status=ok
// SIG undefined FUN_148c3e600(void)

longlong FUN_148c3e600(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b60;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e630 FUN_148c3e630 body=48 status=ok
// SIG undefined FUN_148c3e630(void)

longlong FUN_148c3e630(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b98;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e660 FUN_148c3e660 body=48 status=ok
// SIG undefined FUN_148c3e660(void)

longlong FUN_148c3e660(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ba0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e690 FUN_148c3e690 body=48 status=ok
// SIG undefined FUN_148c3e690(void)

longlong FUN_148c3e690(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3ba8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e6c0 FUN_148c3e6c0 body=48 status=ok
// SIG undefined FUN_148c3e6c0(void)

longlong FUN_148c3e6c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bb0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e6f0 FUN_148c3e6f0 body=48 status=ok
// SIG undefined FUN_148c3e6f0(void)

longlong FUN_148c3e6f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bb8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e720 FUN_148c3e720 body=48 status=ok
// SIG undefined FUN_148c3e720(void)

longlong FUN_148c3e720(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bc0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e750 FUN_148c3e750 body=48 status=ok
// SIG undefined FUN_148c3e750(void)

longlong FUN_148c3e750(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bc8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e780 FUN_148c3e780 body=48 status=ok
// SIG undefined FUN_148c3e780(void)

longlong FUN_148c3e780(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3be0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e7b0 FUN_148c3e7b0 body=48 status=ok
// SIG undefined FUN_148c3e7b0(void)

longlong FUN_148c3e7b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3be8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e7e0 FUN_148c3e7e0 body=48 status=ok
// SIG undefined FUN_148c3e7e0(void)

longlong FUN_148c3e7e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bf0;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e810 FUN_148c3e810 body=48 status=ok
// SIG undefined FUN_148c3e810(void)

longlong FUN_148c3e810(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3bf8;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e840 FUN_148c3e840 body=48 status=ok
// SIG undefined FUN_148c3e840(void)

longlong FUN_148c3e840(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c00;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e870 FUN_148c3e870 body=48 status=ok
// SIG undefined FUN_148c3e870(void)

longlong FUN_148c3e870(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c08;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e8a0 FUN_148c3e8a0 body=48 status=ok
// SIG undefined FUN_148c3e8a0(void)

longlong FUN_148c3e8a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c10;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e8d0 FUN_148c3e8d0 body=48 status=ok
// SIG undefined FUN_148c3e8d0(void)

longlong FUN_148c3e8d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c18;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e900 FUN_148c3e900 body=48 status=ok
// SIG undefined FUN_148c3e900(void)

longlong FUN_148c3e900(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c20;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e930 FUN_148c3e930 body=48 status=ok
// SIG undefined FUN_148c3e930(void)

longlong FUN_148c3e930(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c28;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e960 FUN_148c3e960 body=48 status=ok
// SIG undefined FUN_148c3e960(void)

longlong FUN_148c3e960(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c30;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e990 FUN_148c3e990 body=48 status=ok
// SIG undefined FUN_148c3e990(void)

longlong FUN_148c3e990(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c38;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e9c0 FUN_148c3e9c0 body=48 status=ok
// SIG undefined FUN_148c3e9c0(void)

longlong FUN_148c3e9c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c40;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3e9f0 FUN_148c3e9f0 body=48 status=ok
// SIG undefined FUN_148c3e9f0(void)

longlong FUN_148c3e9f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c48;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ea20 FUN_148c3ea20 body=48 status=ok
// SIG undefined FUN_148c3ea20(void)

longlong FUN_148c3ea20(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c50;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ea50 FUN_148c3ea50 body=48 status=ok
// SIG undefined FUN_148c3ea50(void)

longlong FUN_148c3ea50(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c58;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ea80 FUN_148c3ea80 body=48 status=ok
// SIG undefined FUN_148c3ea80(void)

longlong FUN_148c3ea80(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c60;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3eab0 FUN_148c3eab0 body=48 status=ok
// SIG undefined FUN_148c3eab0(void)

longlong FUN_148c3eab0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c68;
  FUN_14145c7a0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3eaf4 FUN_148c3eaf4 body=48 status=ok
// SIG undefined FUN_148c3eaf4(void)

longlong FUN_148c3eaf4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3eb24 FUN_148c3eb24 body=48 status=ok
// SIG undefined FUN_148c3eb24(void)

longlong FUN_148c3eb24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3eb54 FUN_148c3eb54 body=48 status=ok
// SIG undefined FUN_148c3eb54(void)

longlong FUN_148c3eb54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3eb84 FUN_148c3eb84 body=48 status=ok
// SIG undefined FUN_148c3eb84(void)

longlong FUN_148c3eb84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ebb4 FUN_148c3ebb4 body=48 status=ok
// SIG undefined FUN_148c3ebb4(void)

longlong FUN_148c3ebb4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ebe4 FUN_148c3ebe4 body=48 status=ok
// SIG undefined FUN_148c3ebe4(void)

longlong FUN_148c3ebe4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ec14 FUN_148c3ec14 body=48 status=ok
// SIG undefined FUN_148c3ec14(void)

longlong FUN_148c3ec14(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ec44 FUN_148c3ec44 body=48 status=ok
// SIG undefined FUN_148c3ec44(void)

longlong FUN_148c3ec44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ec74 FUN_148c3ec74 body=48 status=ok
// SIG undefined FUN_148c3ec74(void)

longlong FUN_148c3ec74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3eca4 FUN_148c3eca4 body=48 status=ok
// SIG undefined FUN_148c3eca4(void)

longlong FUN_148c3eca4(longlong param_1,int param_2)

{
  param_1 = param_1 + -1000;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ecd4 FUN_148c3ecd4 body=48 status=ok
// SIG undefined FUN_148c3ecd4(void)

longlong FUN_148c3ecd4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ed04 FUN_148c3ed04 body=48 status=ok
// SIG undefined FUN_148c3ed04(void)

longlong FUN_148c3ed04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ed34 FUN_148c3ed34 body=48 status=ok
// SIG undefined FUN_148c3ed34(void)

longlong FUN_148c3ed34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ed64 FUN_148c3ed64 body=48 status=ok
// SIG undefined FUN_148c3ed64(void)

longlong FUN_148c3ed64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ed94 FUN_148c3ed94 body=48 status=ok
// SIG undefined FUN_148c3ed94(void)

longlong FUN_148c3ed94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3edc4 FUN_148c3edc4 body=48 status=ok
// SIG undefined FUN_148c3edc4(void)

longlong FUN_148c3edc4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3edf4 FUN_148c3edf4 body=48 status=ok
// SIG undefined FUN_148c3edf4(void)

longlong FUN_148c3edf4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ee24 FUN_148c3ee24 body=48 status=ok
// SIG undefined FUN_148c3ee24(void)

longlong FUN_148c3ee24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ee54 FUN_148c3ee54 body=48 status=ok
// SIG undefined FUN_148c3ee54(void)

longlong FUN_148c3ee54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x430;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3ee84 FUN_148c3ee84 body=48 status=ok
// SIG undefined FUN_148c3ee84(void)

longlong FUN_148c3ee84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c3eeb4 FUN_148c3eeb4 body=48 status=ok
// SIG undefined FUN_148c3eeb4(void)

longlong FUN_148c3eeb4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1548;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


