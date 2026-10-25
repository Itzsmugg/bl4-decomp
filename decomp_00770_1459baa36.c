// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1459baa36 FUN_1459baa36 body=9 status=ok
// SIG undefined FUN_1459baa36(void)

void FUN_1459baa36(longlong param_1)

{
  FUN_144729dda(param_1 + 0x38);
  return;
}



// FUNCTION 1459baa40 FUN_1459baa40 body=529 status=ok
// SIG undefined FUN_1459baa40(void)

void FUN_1459baa40(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  ushort *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x240) & 1) != 0) {
    iVar3 = *(int *)(param_1 + 0x300);
    if ((longlong)iVar3 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x2f8);
      lVar7 = (longlong)iVar3 << 4;
      do {
        if (*(longlong *)(lVar6 + 8) != 0) {
          cVar4 = FUN_144729dda(lVar6);
          if (cVar4 != '\0') {
            (**(code **)(**(longlong **)(lVar6 + 8) + 0x18))(*(longlong **)(lVar6 + 8),param_2);
          }
        }
        lVar6 = lVar6 + 0x10;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
    puVar1 = (undefined8 *)(param_1 + 0x308);
    cVar4 = FUN_1403ae288(puVar1);
    if (cVar4 != '\0') {
      if (*(longlong *)(param_1 + 0x328) != 0) {
        lVar6 = FUN_14008e0ae(puVar1);
        iVar5 = *(int *)(lVar6 + 0x50);
        if (iVar5 == 0) {
          FUN_1402a453c((int *)(lVar6 + 0x50));
          iVar5 = *(int *)(lVar6 + 0x50);
        }
        if (*(longlong *)(param_1 + 0x328) != 0) {
          FUN_14480f766(DAT_14c9a3d60 + (longlong)iVar5 * 0x88 + -0x18);
        }
        *(undefined8 *)(param_1 + 0x328) = 0;
      }
      if (*(longlong *)(param_1 + 0x330) != 0) {
        lVar6 = FUN_14008e0ae(puVar1);
        if (*(longlong *)(param_1 + 0x330) != 0) {
          FUN_14480f766(lVar6 + 0x168);
        }
        *(undefined8 *)(param_1 + 0x330) = 0;
      }
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x310) = 0;
      *(undefined1 *)(param_1 + 0x324) = 0xff;
      *(undefined4 *)(param_1 + 800) = 0;
      *(undefined8 *)(param_1 + 0x318) = 0;
    }
    FUN_14142ad0e(param_1,0,&DAT_14cbc67b0);
    *(undefined4 *)(param_1 + 0x300) = 0;
    if (*(int *)(param_1 + 0x304) != 0) {
      FUN_1459bac52(param_1 + 0x2f8);
    }
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    *(byte *)(param_1 + 0x240) = *(byte *)(param_1 + 0x240) & 0xdf;
    *(byte *)(param_1 + 0x241) = *(byte *)(param_1 + 0x241) & 0xfe;
    if (0 < iVar3) {
      local_34 = 0;
      FUN_1447cd2ec(param_1 + 0xe0);
    }
    FUN_144a62f0c(*(longlong *)(param_1 + 0x238),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),0x40);
    puVar2 = (ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558);
    *puVar2 = *puVar2 & 0xf0ff;
    puVar2 = (ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558);
    *puVar2 = *puVar2 & 0xefff;
    puVar2 = (ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558);
    *puVar2 = *puVar2 & 0xdfff;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459bac52 FUN_1459bac52 body=48 status=ok
// SIG undefined FUN_1459bac52(void)

void FUN_1459bac52(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1459bac82 FUN_1459bac82 body=65 status=ok
// SIG undefined FUN_1459bac82(void)

void FUN_1459bac82(longlong *param_1)

{
  longlong lVar1;
  
  if (0 < (int)param_1[0x22a]) {
    lVar1 = 0;
    do {
      (**(code **)(*param_1 + 0x4f8))(param_1,*(undefined8 *)(param_1[0x229] + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[0x22a]);
  }
  return;
}



// FUNCTION 1459bacc4 FUN_1459bacc4 body=106 status=ok
// SIG undefined FUN_1459bacc4(void)

void FUN_1459bacc4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((*(longlong *)(param_2 + 0x230) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x230) + 0x30), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0xf0) != 0)) {
    FUN_147a491c6();
    FUN_14375e49a(param_2,*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_2 + 0x230) + 0x30) + 0x200));
    *(undefined8 *)(*(longlong *)(param_2 + 0x230) + 0x30) = 0;
  }
  *(undefined8 *)(param_2 + 0x230) = 0;
  return;
}



// FUNCTION 1459bad2e FUN_1459bad2e body=84 status=ok
// SIG undefined FUN_1459bad2e(void)

void FUN_1459bad2e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459bada0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bddd8e0;
  FUN_1459bad82(puVar1 + 0x20);
  puVar1[0x20] = &PTR_FUN_14bdddca8;
  puVar1[0x24] = 0;
  puVar1[0x1f] = puVar1 + 0x20;
  return;
}



// FUNCTION 1459bad82 FUN_1459bad82 body=29 status=ok
// SIG undefined FUN_1459bad82(void)

void FUN_1459bad82(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4b25c8;
  param_1[1] = 0;
  param_1[2] = 0x3f80000000000000;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfe;
  return;
}



// FUNCTION 1459bada0 FUN_1459bada0 body=58 status=ok
// SIG undefined FUN_1459bada0(void)

undefined8 * FUN_1459bada0(undefined8 *param_1)

{
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a4b2200;
  param_1[0x1f] = 0;
  *(undefined2 *)((longlong)param_1 + 0xd9) = 0x101;
  *(undefined2 *)(param_1 + 0xb) = 0x201;
  return param_1;
}



// FUNCTION 1459badda FUN_1459badda body=2561 status=ok
// SIG undefined FUN_1459badda(void)

void FUN_1459badda(longlong param_1)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_14142b33a(param_1,L"black",&DAT_149e1f954,&local_1c);
  FUN_14142b33a(param_1,L"aquamarine",&DAT_149e1f958,&local_1c);
  FUN_14142b33a(param_1,L"bakerchocolate",&DAT_149e1f95c,&local_1c);
  FUN_14142b33a(param_1,L"blue",&DAT_149e1f944,&local_1c);
  FUN_14142b33a(param_1,L"blueviolet",&DAT_149e1f960,&local_1c);
  FUN_14142b33a(param_1,L"brass",&DAT_149e1f964,&local_1c);
  FUN_14142b33a(param_1,L"brightgold",&DAT_149e1f968,&local_1c);
  FUN_14142b33a(param_1,L"brown",&DAT_149e1f96c,&local_1c);
  FUN_14142b33a(param_1,L"bronze",&DAT_149e1f970,&local_1c);
  FUN_14142b33a(param_1,L"bronzeii",&DAT_149e1f974,&local_1c);
  FUN_14142b33a(param_1,L"cadetblue",&DAT_149e1f978,&local_1c);
  FUN_14142b33a(param_1,L"coolcopper",&DAT_149e1f97c,&local_1c);
  FUN_14142b33a(param_1,L"copper",&DAT_149e1f980,&local_1c);
  FUN_14142b33a(param_1,L"coral",&DAT_149e1f984,&local_1c);
  FUN_14142b33a(param_1,L"cornflowerblue",&DAT_149e1f988,&local_1c);
  FUN_14142b33a(param_1,L"cyan",&DAT_149e1f94c,&local_1c);
  FUN_14142b33a(param_1,L"darkbrown",&DAT_149e1f98c,&local_1c);
  FUN_14142b33a(param_1,L"darkgreen",&DAT_149e1f990,&local_1c);
  FUN_14142b33a(param_1,L"darkgreencopper",&DAT_149e1f994,&local_1c);
  FUN_14142b33a(param_1,L"darkolivegreen",&DAT_149e1f998,&local_1c);
  FUN_14142b33a(param_1,L"darkorchid",&DAT_149e1f99c,&local_1c);
  FUN_14142b33a(param_1,L"darkpurple",&DAT_149e1f9a0,&local_1c);
  FUN_14142b33a(param_1,L"darkslateblue",&DAT_149e1f9a4,&local_1c);
  FUN_14142b33a(param_1,L"darkslategrey",&DAT_149e1f9a8,&local_1c);
  FUN_14142b33a(param_1,L"darktan",&DAT_149e1f9ac,&local_1c);
  FUN_14142b33a(param_1,L"darkturquoise",&DAT_149e1f9b0,&local_1c);
  FUN_14142b33a(param_1,L"darkwood",&DAT_149e1f9b4,&local_1c);
  FUN_14142b33a(param_1,L"dimgrey",&DAT_149e1f9b8,&local_1c);
  FUN_14142b33a(param_1,L"dustyrose",&DAT_149e1f9bc,&local_1c);
  FUN_14142b33a(param_1,L"feldspar",&DAT_149e1f9c0,&local_1c);
  FUN_14142b33a(param_1,L"firebrick",&DAT_149e1f9c4,&local_1c);
  FUN_14142b33a(param_1,L"forestgreen",&DAT_149e1f9c8,&local_1c);
  FUN_14142b33a(param_1,L"gold",&DAT_149e1f9cc,&local_1c);
  FUN_14142b33a(param_1,L"goldenrod",&DAT_149e1f9d0,&local_1c);
  FUN_14142b33a(param_1,L"green",&DAT_149e1f940,&local_1c);
  FUN_14142b33a(param_1,L"greencopper",&DAT_149e1f9d8,&local_1c);
  FUN_14142b33a(param_1,L"greenyellow",&DAT_149e1f9dc,&local_1c);
  FUN_14142b33a(param_1,L"grey",&DAT_149e1f9d4,&local_1c);
  FUN_14142b33a(param_1,L"huntergreen",&DAT_149e1f9e0,&local_1c);
  FUN_14142b33a(param_1,L"indianred",&DAT_149e1f9e4,&local_1c);
  FUN_14142b33a(param_1,L"khaki",&DAT_149e1f9e8,&local_1c);
  FUN_14142b33a(param_1,L"lightblue",&DAT_149e1f9ec,&local_1c);
  FUN_14142b33a(param_1,L"lightgrey",&DAT_149e1f9f0,&local_1c);
  FUN_14142b33a(param_1,L"lightsteelblue",&DAT_149e1f9f4,&local_1c);
  FUN_14142b33a(param_1,L"lightwood",&DAT_149e1f9f8,&local_1c);
  FUN_14142b33a(param_1,L"limegreen",&DAT_149e1f9fc,&local_1c);
  FUN_14142b33a(param_1,L"magenta",&DAT_149e1f948,&local_1c);
  FUN_14142b33a(param_1,L"mandarianorange",&DAT_149e1fa00,&local_1c);
  FUN_14142b33a(param_1,L"maroon",&DAT_149e1fa04,&local_1c);
  FUN_14142b33a(param_1,L"mediumaquamarine",&DAT_149e1fa08,&local_1c);
  FUN_14142b33a(param_1,L"mediumblue",&DAT_149e1fa0c,&local_1c);
  FUN_14142b33a(param_1,L"mediumforestgreen",&DAT_149e1fa10,&local_1c);
  FUN_14142b33a(param_1,L"mediumgoldenrod",&DAT_149e1fa14,&local_1c);
  FUN_14142b33a(param_1,L"mediumorchid",&DAT_149e1fa18,&local_1c);
  FUN_14142b33a(param_1,L"mediumseagreen",&DAT_149e1fa1c,&local_1c);
  FUN_14142b33a(param_1,L"mediumslateblue",&DAT_149e1fa20,&local_1c);
  FUN_14142b33a(param_1,L"mediumspringgreen",&DAT_149e1fa24,&local_1c);
  FUN_14142b33a(param_1,L"mediumturquoise",&DAT_149e1fa28,&local_1c);
  FUN_14142b33a(param_1,L"mediumvioletred",&DAT_149e1fa2c,&local_1c);
  FUN_14142b33a(param_1,L"mediumwood",&DAT_149e1fa30,&local_1c);
  FUN_14142b33a(param_1,L"midnightblue",&DAT_149e1fa34,&local_1c);
  FUN_14142b33a(param_1,L"navyblue",&DAT_149e1fa38,&local_1c);
  FUN_14142b33a(param_1,L"neonblue",&DAT_149e1fa3c,&local_1c);
  FUN_14142b33a(param_1,L"neonpink",&DAT_149e1fa40,&local_1c);
  FUN_14142b33a(param_1,L"newmidnightblue",&DAT_149e1fa44,&local_1c);
  FUN_14142b33a(param_1,L"newtan",&DAT_149e1fa48,&local_1c);
  FUN_14142b33a(param_1,L"oldgold",&DAT_149e1fa4c,&local_1c);
  FUN_14142b33a(param_1,L"orange",&DAT_149e1fa50,&local_1c);
  FUN_14142b33a(param_1,L"orangered",&DAT_149e1fa54,&local_1c);
  FUN_14142b33a(param_1,L"orchid",&DAT_149e1fa58,&local_1c);
  FUN_14142b33a(param_1,L"palegreen",&DAT_149e1fa5c,&local_1c);
  FUN_14142b33a(param_1,L"pink",&DAT_149e1fa60,&local_1c);
  FUN_14142b33a(param_1,L"plum",&DAT_149e1fa64,&local_1c);
  FUN_14142b33a(param_1,L"quartz",&DAT_149e1fa68,&local_1c);
  FUN_14142b33a(param_1,&DAT_149e1f770,&DAT_149e1f93c,&local_1c);
  FUN_14142b33a(param_1,L"richblue",&DAT_149e1fa6c,&local_1c);
  FUN_14142b33a(param_1,L"salmon",&DAT_149e1fa70,&local_1c);
  FUN_14142b33a(param_1,L"scarlet",&DAT_149e1fa74,&local_1c);
  FUN_14142b33a(param_1,L"seagreen",&DAT_149e1fa78,&local_1c);
  FUN_14142b33a(param_1,L"semisweetchocolate",&DAT_149e1fa7c,&local_1c);
  FUN_14142b33a(param_1,L"sienna",&DAT_149e1fa80,&local_1c);
  FUN_14142b33a(param_1,L"silver",&DAT_149e1fa84,&local_1c);
  FUN_14142b33a(param_1,L"skyblue",&DAT_149e1fa88,&local_1c);
  FUN_14142b33a(param_1,L"slateblue",&DAT_149e1fa8c,&local_1c);
  FUN_14142b33a(param_1,L"spicypink",&DAT_149e1fa90,&local_1c);
  FUN_14142b33a(param_1,L"springgreen",&DAT_149e1fa94,&local_1c);
  FUN_14142b33a(param_1,L"steelblue",&DAT_149e1fa98,&local_1c);
  FUN_14142b33a(param_1,L"summersky",&DAT_149e1fa9c,&local_1c);
  FUN_14142b33a(param_1,&DAT_149e1f874,&DAT_149e1faa0,&local_1c);
  FUN_14142b33a(param_1,L"thistle",&DAT_149e1faa4,&local_1c);
  FUN_14142b33a(param_1,L"turquoise",&DAT_149e1faa8,&local_1c);
  FUN_14142b33a(param_1,L"verydarkbrown",&DAT_149e1faac,&local_1c);
  FUN_14142b33a(param_1,L"verylightgrey",&DAT_149e1fab0,&local_1c);
  FUN_14142b33a(param_1,L"violet",&DAT_149e1fab4,&local_1c);
  FUN_14142b33a(param_1,L"violetred",&DAT_149e1fab8,&local_1c);
  FUN_14142b33a(param_1,L"wheat",&DAT_149e1fabc,&local_1c);
  FUN_14142b33a(param_1,L"white",&DAT_149e1f938,&local_1c);
  FUN_14142b33a(param_1,L"yellow",&DAT_149e1f950,&local_1c);
  FUN_14142b33a(param_1,L"yellowgreen",&DAT_149e1fac0,&local_1c);
  if (*(int *)(param_1 + 0x5c) != *(int *)(param_1 + 0x58)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459bb7ec FUN_1459bb7ec body=132 status=ok
// SIG undefined FUN_1459bb7ec(void)

void FUN_1459bb7ec(longlong param_1,int param_2)

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



// FUNCTION 1459bb8d2 FUN_1459bb8d2 body=40 status=ok
// SIG undefined FUN_1459bb8d2(void)

undefined8 FUN_1459bb8d2(undefined8 param_1,int param_2)

{
  FUN_1459bb8fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bb8fa FUN_1459bb8fa body=131 status=ok
// SIG undefined FUN_1459bb8fa(void)

void FUN_1459bb8fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be7aa10;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1459bb97d(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be7b370;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459bb97d FUN_1459bb97d body=43 status=ok
// SIG undefined FUN_1459bb97d(void)

void FUN_1459bb97d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14675c8e8(param_1);
    param_1 = param_1 + 0xd8;
  }
  return;
}



// FUNCTION 1459bb9a8 FUN_1459bb9a8 body=132 status=ok
// SIG undefined FUN_1459bb9a8(void)

void FUN_1459bb9a8(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    FUN_1459bba2c(param_1);
    uVar1 = FUN_140e1fe36();
    plVar2 = (longlong *)
             (**(code **)(*param_1 + 0x288))(param_1,uVar1,*param_1,param_4,param_5,param_6,param_7)
    ;
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140e1fe36();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001459bba21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1459bba2c FUN_1459bba2c body=156 status=ok
// SIG undefined FUN_1459bba2c(void)

undefined8
FUN_1459bba2c(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [44];
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1b = param_5;
  local_1a = param_6;
  local_19 = param_7;
  uVar2 = 0;
  local_1c = param_4;
  if ((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x1c8) != 0)) {
    lVar1 = (**(code **)(*param_2 + 0x3a8))(param_2);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x490))
                        (*(longlong **)(param_1 + 0x1c8),lVar1,&local_1c,param_3);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459bbaca FUN_1459bbaca body=37 status=ok
// SIG undefined FUN_1459bbaca(void)

void FUN_1459bbaca(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1b8);
  FUN_1459bbaf0(param_2);
  return;
}



// FUNCTION 1459bbaf0 FUN_1459bbaf0 body=327 status=ok
// SIG undefined FUN_1459bbaf0(void)

undefined8 * FUN_1459bbaf0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14b666de0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = &PTR_FUN_14a1a0a60;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  uVar1 = DAT_14c846500;
  param_1[0x19] = DAT_14c8464f8;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = DAT_14c846508;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1f] = DAT_14c8464e0;
  param_1[0x20] = uVar1;
  param_1[0x21] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x23] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x26) = 0x461c4000;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x27] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2b] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x2f] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_1 + 0x32) = 1;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x33] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_1 + 0x36) = 0;
  return param_1;
}



// FUNCTION 1459bbc38 FUN_1459bbc38 body=40 status=ok
// SIG undefined FUN_1459bbc38(void)

undefined8 FUN_1459bbc38(undefined8 param_1,int param_2)

{
  FUN_1459bbc60();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bbc60 FUN_1459bbc60 body=110 status=ok
// SIG undefined FUN_1459bbc60(void)

void FUN_1459bbc60(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14b82f8d0;
  param_1[6] = &PTR_FUN_14b82fb90;
  param_1[7] = &PTR_LAB_14b82fc20;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  lVar3 = param_1[9];
  if (lVar3 != 0) {
    FUN_14127b218(lVar3);
    thunk_FUN_1400020a8(lVar3,0xd8);
  }
  FUN_140b3fd78(param_1);
  return;
}



// FUNCTION 1459bbcd4 FUN_1459bbcd4 body=278 status=ok
// SIG undefined FUN_1459bbcd4(void)

void FUN_1459bbcd4(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x238))(plVar2,&local_19);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_20);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,2);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_24);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,3);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_28);
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,4);
  (**(code **)(*plVar2 + 0x220))(plVar2,&local_2c);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    local_40 = local_2c;
    local_48 = local_28;
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_19,local_20,
               local_24);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459bbdec FUN_1459bbdec body=510 status=ok
// SIG undefined FUN_1459bbdec(void)

void FUN_1459bbdec(longlong param_1,char param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x308) = 0;
    lVar9 = *(longlong *)(param_1 + 0x288);
    if (((lVar9 != 0) && (-1 < (int)param_3)) && ((int)param_3 < *(int *)(lVar9 + 0x1c0))) {
      lVar9 = (ulonglong)param_3 * 0x1e8 + *(longlong *)(lVar9 + 0x1b8);
      puVar5 = (undefined4 *)FUN_140f9b9fa(lVar9,param_4,param_5,param_6);
      if (puVar5 != (undefined4 *)0x0) {
        if (*(char *)(puVar5 + 8) == '\x01') {
          if (param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
          }
          local_50[0] = 0;
          local_60 = CONCAT44(local_60._4_4_,param_6);
          local_68 = param_5;
          FUN_1459bc024(param_1,local_50,1,param_4);
        }
        else if (lVar9 != 0) {
          if (*(char *)(lVar2 + 0x2f8) == '\0') {
            cVar4 = FUN_144a846f6(*puVar5);
            if (((cVar4 != '\0') && (*(char *)(puVar5 + 0x22) == '\x01')) &&
               (*(char *)(lVar9 + 0xb8) == '\x01')) {
              uVar6 = FUN_14001cc68(0x110,0x10);
              local_58 = lVar9 + 0x118;
              local_60 = lVar9 + 0x108;
              uVar1 = *(undefined1 *)(puVar5 + 8);
              iVar3 = *(int *)(lVar9 + 0x20) + -1;
              if (*(int *)(lVar9 + 0x20) == 0) {
                iVar3 = 0;
              }
              FUN_1446f82e2(local_50,iVar3,*(undefined8 *)(lVar9 + 0x18),1);
              uVar7 = FUN_14479d2ce(param_1 + 0x30);
              local_68 = CONCAT31(local_68._1_3_,uVar1);
              FUN_1459bc670(uVar6,uVar7,local_50,puVar5);
              FUN_1459bc2b8(param_1,uVar6);
              FUN_1459bc5c8(param_1,puVar5);
              goto LAB_1459bbeb0;
            }
          }
          else {
            puVar8 = &DAT_14cbe22e8;
            if (*(char *)(puVar5 + 0x24) != '\0') {
              puVar8 = &DAT_14cbe22f0;
            }
            FUN_1457d7894(param_1,puVar8);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
        }
      }
    }
  }
LAB_1459bbeb0:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459bc024 FUN_1459bc024 body=659 status=ok
// SIG undefined FUN_1459bc024(void)

void FUN_1459bc024(longlong param_1,char *param_2,undefined4 param_3,uint param_4,undefined4 param_5
                  ,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float fVar12;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    iVar2 = *(int *)(param_1 + 0x2cc);
    if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(lVar3 + 0x1c0))) {
      lVar4 = *(longlong *)(lVar3 + 0x1b8);
      lVar10 = (longlong)iVar2 * 0x1e8;
      puVar6 = (undefined8 *)FUN_140f9b9fa(lVar10 + lVar4,param_4,param_5,param_6);
      if (puVar6 != (undefined8 *)0x0) {
        if (((int)param_4 < 0) || (*(int *)(lVar4 + 0xf8 + lVar10) <= (int)param_4)) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          puVar11 = (undefined8 *)((ulonglong)param_4 * 0x28 + *(longlong *)(lVar4 + 0xf0 + lVar10))
          ;
        }
        if (*(int *)(lVar3 + 0x2d0) < 1) {
          if (*(char *)(puVar6 + 0x11) == '\x01') {
            FUN_1457d7894(param_1,&DAT_14cbe2300);
          }
          puVar6 = &DAT_14cbe1f70;
        }
        else {
          if (((*(char *)(puVar11 + 4) == '\x01') && (*(char *)(puVar6 + 0x11) == '\x01')) &&
             (*(int *)((longlong)puVar6 + 0x9c) < *(int *)(puVar6 + 0x13))) {
            *(undefined1 *)(lVar3 + 0x308) = 0;
            puVar7 = (undefined8 *)FUN_14001cc68(0x30,0x10);
            cVar1 = *param_2;
            uVar8 = FUN_14479d2ce(param_1 + 0x30);
            *puVar7 = &PTR_FUN_14b9d1450;
            puVar7[1] = 0;
            FUN_14485c47a(puVar7 + 1,uVar8);
            puVar7[2] = *puVar11;
            puVar7[3] = *puVar6;
            *(undefined4 *)(puVar7 + 4) = param_3;
            *(char *)((longlong)puVar7 + 0x24) = cVar1;
            FUN_1446ddc76(puVar7 + 5,"ui_message_undo_passive",1);
            FUN_1459bc2b8(param_1,puVar7);
            cVar1 = *param_2;
            if (cVar1 == '\0') {
              iVar2 = *(int *)(param_1 + 0x318);
              uVar5 = iVar2 - 1;
              if (*(int *)(puVar6 + 0x13) == 1) {
                if (iVar2 < 1) {
                  return;
                }
              }
              else {
                fVar12 = (float)(int)uVar5 *
                         (((float)(*(int *)((longlong)puVar6 + 0x9c) + 1) + -1.0) /
                         (float)(*(int *)(puVar6 + 0x13) + -1));
                uVar9 = (int)ROUND(fVar12 + fVar12 + 0.5) >> 1;
                if ((int)uVar5 <= (int)uVar9) {
                  uVar9 = uVar5;
                }
                uVar5 = 0;
                if (0 < (int)uVar9) {
                  uVar5 = uVar9;
                }
                if (iVar2 <= (int)uVar5) {
                  return;
                }
              }
              puVar6 = (undefined8 *)((ulonglong)uVar5 * 0x10 + *(longlong *)(param_1 + 0x310));
            }
            else if (cVar1 == '\x01') {
              puVar6 = &DAT_14cbe2060;
            }
            else {
              if (cVar1 != '\x02') {
                return;
              }
              puVar6 = &DAT_14cbe2050;
            }
            FUN_140de1078(param_1,puVar6,0,0);
            return;
          }
          puVar6 = &DAT_14cbe1f60;
        }
        FUN_140de1078(param_1,puVar6,0,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1459bc2b8 FUN_1459bc2b8 body=386 status=ok
// SIG undefined FUN_1459bc2b8(void)

void FUN_1459bc2b8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_88 [44];
  uint local_5c;
  longlong local_58 [3];
  uint *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x328);
  uVar2 = *(uint *)(param_1 + 0x2cc);
  if (*(int *)(param_1 + 0x330) != *(int *)(param_1 + 0x35c)) {
    lVar3 = param_1 + 0x360;
    if (*(longlong *)(param_1 + 0x368) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x368);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x370) - 1U & uVar2) * 4);
    if (iVar4 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar4 * 0x20) == uVar2) goto LAB_1459bc333;
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + *plVar1 + 0x18);
      } while (iVar4 != -1);
    }
  }
  local_38 = local_58;
  local_58[0] = 0;
  local_58[1] = 0;
  local_40 = &local_5c;
  local_5c = uVar2;
  FUN_1459bc756(plVar1,local_2c);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
LAB_1459bc333:
  (**(code **)(*param_2 + 0x10))();
  if (*(int *)(param_1 + 0x330) != *(int *)(param_1 + 0x35c)) {
    lVar3 = param_1 + 0x360;
    if (*(longlong *)(param_1 + 0x368) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x368);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x370) - 1U & *(uint *)(param_1 + 0x2cc)) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *plVar1 + (longlong)iVar4 * 0x20;
        if (*(uint *)(*plVar1 + (longlong)iVar4 * 0x20) == *(uint *)(param_1 + 0x2cc)) break;
        iVar4 = *(int *)(lVar3 + 0x18);
        lVar3 = 0;
      } while (iVar4 != -1);
      goto LAB_1459bc391;
    }
  }
  lVar3 = 0;
LAB_1459bc391:
  iVar4 = *(int *)(lVar3 + 0x10);
  *(uint *)(lVar3 + 0x10) = iVar4 + 1U;
  if (*(uint *)(lVar3 + 0x14) < iVar4 + 1U) {
    FUN_1459bc4c4((longlong *)(lVar3 + 8),iVar4);
  }
  *(longlong **)(*(longlong *)(lVar3 + 8) + (longlong)iVar4 * 8) = param_2;
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459bc43c FUN_1459bc43c body=135 status=ok
// SIG undefined FUN_1459bc43c(void)

void FUN_1459bc43c(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = FUN_14479d2ce(param_1 + 8);
  if (lVar3 != 0) {
    lVar3 = FUN_140391a3c(lVar3);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      uVar1 = *(undefined1 *)(param_1 + 0x24);
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      puVar4[3] = 0;
      *puVar4 = &PTR_FUN_14b9d86e8;
      puVar4[4] = *(undefined8 *)(param_1 + 0x10);
      puVar4[5] = *(undefined8 *)(param_1 + 0x18);
      *(undefined4 *)(puVar4 + 6) = uVar2;
      *(undefined1 *)((longlong)puVar4 + 0x34) = uVar1;
      FUN_14039144e(lVar3,puVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1459bc4c4 FUN_1459bc4c4 body=132 status=ok
// SIG undefined FUN_1459bc4c4(void)

void FUN_1459bc4c4(longlong param_1,int param_2)

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



// FUNCTION 1459bc54a FUN_1459bc54a body=126 status=ok
// SIG undefined FUN_1459bc54a(void)

void FUN_1459bc54a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FUN_140391a3c(lVar1);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar2[3] = 0;
      *puVar2 = &PTR_FUN_14b9d4390;
      puVar2[4] = *(undefined8 *)(param_1 + 0x10);
      puVar2[5] = *(undefined8 *)(param_1 + 0x18);
      *(undefined1 *)(puVar2 + 6) = 1;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1459bc5c8 FUN_1459bc5c8 body=167 status=ok
// SIG undefined FUN_1459bc5c8(void)

void FUN_1459bc5c8(undefined8 param_1,longlong param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  if (*(char *)(param_2 + 0x20) == '\x03') {
    puVar2 = &DAT_14cbe1ff0;
    if (*(char *)(param_2 + 0x90) != '\0') {
      puVar2 = &DAT_14cbe2000;
    }
    FUN_140de1078(param_1,puVar2,0,0);
    puVar1 = &DAT_14cbe22d8;
    puVar3 = &DAT_14cbe22d0;
  }
  else {
    if (*(char *)(param_2 + 0x20) != '\x02') {
      return;
    }
    puVar2 = &DAT_14cbe1fd0;
    if (*(char *)(param_2 + 0x90) != '\0') {
      puVar2 = &DAT_14cbe1fe0;
    }
    FUN_140de1078(param_1,puVar2,0,0);
    puVar1 = &DAT_14cbe22c0;
    puVar3 = &DAT_14cbe22b8;
  }
  if (*(char *)(param_2 + 0x90) != '\0') {
    puVar3 = puVar1;
  }
  FUN_1457d7894(param_1,puVar3);
  return;
}



// FUNCTION 1459bc670 FUN_1459bc670 body=229 status=ok
// SIG undefined FUN_1459bc670(void)

undefined8 *
FUN_1459bc670(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined1 param_5,undefined8 *param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b9d13e0;
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 1);
  param_1[2] = *param_3;
  param_1[3] = *param_4;
  *(undefined1 *)(param_1 + 4) = param_5;
  param_1[5] = 0;
  iVar1 = *(int *)(param_6 + 1);
  uVar2 = *param_6;
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_140f9af66(param_1 + 5,iVar1,0);
    FUN_140f9acfc(param_1[5],uVar2,iVar1);
  }
  FUN_140f9ad38(param_1 + 7,param_7);
  FUN_1446ddc76(param_1 + 0x20,"ui_message_undo_augment",1);
  FUN_1446ddc76(param_1 + 0x21,"ui_message_undo_capstone",1);
  return param_1;
}



// FUNCTION 1459bc756 FUN_1459bc756 body=307 status=ok
// SIG undefined FUN_1459bc756(void)

undefined4 * FUN_1459bc756(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1459bc92e(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *puVar1 = 0;
  local_40[4] = *(uint *)(puVar1 + 1);
  local_40[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1459bc88a(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[7] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1459bca14(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459bc88a FUN_1459bc88a body=163 status=ok
// SIG undefined FUN_1459bc88a(void)

undefined8 FUN_1459bc88a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_148ed86bc(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1459bc92e FUN_1459bc92e body=230 status=ok
// SIG undefined FUN_1459bc92e(void)

int * FUN_1459bc92e(longlong *param_1,int *param_2)

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



// FUNCTION 1459bca14 FUN_1459bca14 body=431 status=ok
// SIG undefined FUN_1459bca14(void)

void FUN_1459bca14(longlong *param_1)

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



// FUNCTION 1459bcbc4 FUN_1459bcbc4 body=490 status=ok
// SIG undefined FUN_1459bcbc4(void)

void FUN_1459bcbc4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined1 *local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  undefined1 local_78 [16];
  undefined8 local_68;
  int local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_68 = 0;
  local_60 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_1459bcde8(local_88,param_1 + 0xb0);
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  local_90 = 0;
  iVar3 = 0;
  local_a0 = local_78;
  if (local_60 != 0) {
    FUN_1449c0562(&local_a8);
    iVar3 = local_60;
  }
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_b0 = local_90;
  local_ac = local_8c;
  local_c8 = local_a8;
  local_c0 = local_a0;
  local_d0 = local_88;
  if ((iStack_94 != iVar3) || (local_a0 != local_78)) {
    do {
      lVar1 = *(longlong *)(*local_d0 + (longlong)iStack_b4 * 0x18);
      lVar2 = *(longlong *)(*local_d0 + 8 + (longlong)iStack_b4 * 0x18);
      if (lVar1 == 0) {
        local_d8 = lVar2;
        if (lVar2 != 0) {
LAB_1459bcd99:
          LOCK();
          *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
          UNLOCK();
          local_d8 = lVar2;
        }
LAB_1459bcd9d:
        local_e0 = lVar1;
        FUN_14692ac4a(param_1 + 0xb0,&local_e0);
      }
      else {
        if (lVar2 == 0) {
          local_d8 = 0;
          goto LAB_1459bcd9d;
        }
        if (*(int *)(lVar2 + 8) < 1) goto LAB_1459bcd99;
      }
      local_b8 = local_b8 & ~local_c8._4_4_;
      FUN_1449c0562(&local_c8);
    } while (((iStack_b4 != iVar3) || (local_c0 != local_78)) || (local_d0 != local_88));
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1459bcdb0(local_88);
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459bcdb0 FUN_1459bcdb0 body=55 status=ok
// SIG undefined FUN_1459bcdb0(void)

void FUN_1459bcdb0(longlong *param_1)

{
  FUN_1459bce60(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459bcde8 FUN_1459bcde8 body=120 status=ok
// SIG undefined FUN_1459bcde8(void)

longlong FUN_1459bcde8(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1459bcfd8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1459bce60 FUN_1459bce60 body=374 status=ok
// SIG undefined FUN_1459bce60(void)

void FUN_1459bce60(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
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
      plVar3 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar4 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar4 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459bcfd8 FUN_1459bcfd8 body=226 status=ok
// SIG undefined FUN_1459bcfd8(void)

longlong * FUN_1459bcfd8(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1459bce60(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar5);
          *(longlong *)(lVar4 + 8 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x10 + lVar5) = *(undefined8 *)(lVar2 + 0x10 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1459bd0ba FUN_1459bd0ba body=303 status=ok
// SIG undefined FUN_1459bd0ba(void)

undefined4 * FUN_1459bd0ba(undefined4 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  byte *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1459bd27c(local_40);
  puVar2 = (undefined4 *)param_2[1];
  bVar1 = *(byte *)*param_2;
  *local_38 = bVar1;
  *(undefined4 *)(local_38 + 4) = *puVar2;
  local_38[8] = 0xff;
  local_38[9] = 0xff;
  local_38[10] = 0xff;
  local_38[0xb] = 0xff;
  local_44 = local_40[0];
  cVar5 = FUN_1459bd1ea(bVar1,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar8 = DAT_14c967100 - DAT_14c96712c;
    if (uVar8 < 4) {
      iVar9 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= DAT_14c967140)) {
      uVar8 = DAT_14c967140 - 1U & (uint)bVar1;
      *(uint *)(local_38 + 0xc) = uVar8;
      puVar7 = DAT_14c967138;
      if (DAT_14c967138 == (undefined *)0x0) {
        puVar7 = &DAT_14c967130;
      }
      *(undefined4 *)(local_38 + 8) =
           *(undefined4 *)(puVar7 + (ulonglong)(DAT_14c967140 - 1U & uVar8) * 4);
      puVar7 = DAT_14c967138;
      if (DAT_14c967138 == (undefined *)0x0) {
        puVar7 = &DAT_14c967130;
      }
      *(undefined4 *)(puVar7 + (ulonglong)(DAT_14c967140 - 1U & uVar8) * 4) = local_44;
    }
    else {
      DAT_14c967140 = iVar9;
      FUN_14142bdde();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459bd1ea FUN_1459bd1ea body=145 status=ok
// SIG undefined FUN_1459bd1ea(void)

undefined8 FUN_1459bd1ea(uint param_1,char *param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((DAT_14c967100 - DAT_14c96712c != 1) && (DAT_14c967100 != DAT_14c96712c)) {
    puVar3 = &DAT_14c967130;
    if (DAT_14c967138 != (undefined *)0x0) {
      puVar3 = DAT_14c967138;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14c967140 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (undefined8 *)(DAT_14c9670f8 + (longlong)iVar2 * 0x10);
        if (*(char *)(DAT_14c9670f8 + (longlong)iVar2 * 0x10) == *param_2) {
          *puVar1 = *(undefined8 *)param_2;
          FUN_146929198(*param_3);
          *param_3 = iVar2;
          return 1;
        }
        iVar2 = *(int *)(puVar1 + 1);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1459bd27c FUN_1459bd27c body=282 status=ok
// SIG undefined FUN_1459bd27c(void)

int * FUN_1459bd27c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c967128;
  iVar3 = DAT_14c967100;
  if (DAT_14c96712c == 0) {
    iVar2 = DAT_14c967100 + 1;
    bVar7 = DAT_14c967104 == DAT_14c967100;
    DAT_14c967100 = iVar2;
    if (bVar7) {
      FUN_144869a3c(&DAT_14c9670f8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c967108,1);
    puVar4 = DAT_14c967118;
    if (DAT_14c967118 == (undefined *)0x0) {
      puVar4 = &DAT_14c967108;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14c967128;
    DAT_14c967128 = *(int *)(DAT_14c9670f8 + 4 + lVar6 * 0x10);
    DAT_14c96712c = DAT_14c96712c + -1;
    if (DAT_14c96712c != 0) {
      *(undefined4 *)(DAT_14c9670f8 + (longlong)DAT_14c967128 * 0x10) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c967108;
  if (DAT_14c967118 != (undefined *)0x0) {
    puVar4 = DAT_14c967118;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x10 + DAT_14c9670f8;
  return param_1;
}



// FUNCTION 1459bd396 FUN_1459bd396 body=148 status=ok
// SIG undefined FUN_1459bd396(void)

void FUN_1459bd396(undefined8 param_1,longlong param_2)

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
  FUN_1459bd42c(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459bd42c FUN_1459bd42c body=199 status=ok
// SIG undefined FUN_1459bd42c(void)

void FUN_1459bd42c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    uVar5 = FUN_1447210f0(param_1);
    FUN_1459bd504(&local_28,uVar5);
    if (local_20 != (longlong *)0x0) {
      iVar4 = (int)local_20[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_20[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_20 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = local_20;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))();
      }
      if (plVar6 != (longlong *)0x0) {
        if (local_28 != 0) {
          FUN_1459bd5ea(local_28,param_1);
        }
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459bd504 FUN_1459bd504 body=228 status=ok
// SIG undefined FUN_1459bd504(void)

longlong * FUN_1459bd504(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_144747626(&local_28,DAT_14cbd3370,param_2);
    plVar1 = local_20;
    if (local_28 != 0) {
      if (local_20 == (longlong *)0x0) {
        *param_1 = local_28;
      }
      else {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
        *param_1 = local_28;
        if ((longlong *)param_1[1] != local_20) {
          LOCK();
          *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459bd5ea FUN_1459bd5ea body=122 status=ok
// SIG undefined FUN_1459bd5ea(void)

void FUN_1459bd5ea(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1459bd676(param_1,&local_28);
  FUN_14142bfb6(local_28,param_2);
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459bd676 FUN_1459bd676 body=343 status=ok
// SIG undefined FUN_1459bd676(void)

longlong * FUN_1459bd676(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) goto LAB_1459bd69d;
  plVar4 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b9a0160;
  plVar5 = plVar4 + 2;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  local_38 = plVar5;
  local_30 = plVar4;
  FUN_1459bd7ce(&local_38,plVar5);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
LAB_1459bd77b:
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001459bd7a8:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x28) = plVar5;
    plVar5 = *(longlong **)(param_1 + 0x30);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar4;
        goto joined_r0x0001459bd7a8;
      }
    }
    else {
      *(longlong **)(param_1 + 0x30) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1459bd77b;
    }
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
LAB_1459bd69d:
  *param_2 = lVar3;
  lVar3 = *(longlong *)(param_1 + 0x30);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459bd7ce FUN_1459bd7ce body=159 status=ok
// SIG undefined FUN_1459bd7ce(void)

void FUN_1459bd7ce(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_1459bd80b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1459bd80b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1459bd80b:
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
                    /* WARNING: Could not recover jumptable at 0x0001459bd869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1459bd87a FUN_1459bd87a body=31 status=ok
// SIG undefined FUN_1459bd87a(void)

undefined8 FUN_1459bd87a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bd89a FUN_1459bd89a body=24 status=ok
// SIG undefined FUN_1459bd89a(void)

void FUN_1459bd89a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001459bd8ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1459bd8b2 FUN_1459bd8b2 body=38 status=ok
// SIG undefined FUN_1459bd8b2(void)

undefined8 FUN_1459bd8b2(undefined8 param_1,int param_2)

{
  FUN_1459bd8d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bd8d8 FUN_1459bd8d8 body=238 status=ok
// SIG undefined FUN_1459bd8d8(void)

void FUN_1459bd8d8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ee97d0;
  plVar3 = (longlong *)param_1[0x7f];
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
  plVar3 = (longlong *)param_1[0x7d];
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
  plVar3 = (longlong *)param_1[0x7b];
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
  plVar3 = (longlong *)param_1[0x79];
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
  plVar3 = (longlong *)param_1[0x77];
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
  FUN_1411160c2(param_1);
  return;
}



// FUNCTION 1459bd9d4 FUN_1459bd9d4 body=31 status=ok
// SIG undefined FUN_1459bd9d4(void)

undefined8 FUN_1459bd9d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bda00 FUN_1459bda00 body=31 status=ok
// SIG undefined FUN_1459bda00(void)

undefined8 FUN_1459bda00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bda2c FUN_1459bda2c body=31 status=ok
// SIG undefined FUN_1459bda2c(void)

undefined8 FUN_1459bda2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bda58 FUN_1459bda58 body=31 status=ok
// SIG undefined FUN_1459bda58(void)

undefined8 FUN_1459bda58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bda84 FUN_1459bda84 body=31 status=ok
// SIG undefined FUN_1459bda84(void)

undefined8 FUN_1459bda84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdab0 FUN_1459bdab0 body=31 status=ok
// SIG undefined FUN_1459bdab0(void)

undefined8 FUN_1459bdab0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdadc FUN_1459bdadc body=31 status=ok
// SIG undefined FUN_1459bdadc(void)

undefined8 FUN_1459bdadc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdb08 FUN_1459bdb08 body=31 status=ok
// SIG undefined FUN_1459bdb08(void)

undefined8 FUN_1459bdb08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdb34 FUN_1459bdb34 body=31 status=ok
// SIG undefined FUN_1459bdb34(void)

undefined8 FUN_1459bdb34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdb60 FUN_1459bdb60 body=31 status=ok
// SIG undefined FUN_1459bdb60(void)

undefined8 FUN_1459bdb60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdb8c FUN_1459bdb8c body=31 status=ok
// SIG undefined FUN_1459bdb8c(void)

undefined8 FUN_1459bdb8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdbb8 FUN_1459bdbb8 body=31 status=ok
// SIG undefined FUN_1459bdbb8(void)

undefined8 FUN_1459bdbb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdbe4 FUN_1459bdbe4 body=31 status=ok
// SIG undefined FUN_1459bdbe4(void)

undefined8 FUN_1459bdbe4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdc10 FUN_1459bdc10 body=31 status=ok
// SIG undefined FUN_1459bdc10(void)

undefined8 FUN_1459bdc10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdc3c FUN_1459bdc3c body=31 status=ok
// SIG undefined FUN_1459bdc3c(void)

undefined8 FUN_1459bdc3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdc68 FUN_1459bdc68 body=31 status=ok
// SIG undefined FUN_1459bdc68(void)

undefined8 FUN_1459bdc68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdc94 FUN_1459bdc94 body=31 status=ok
// SIG undefined FUN_1459bdc94(void)

undefined8 FUN_1459bdc94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdcc0 FUN_1459bdcc0 body=31 status=ok
// SIG undefined FUN_1459bdcc0(void)

undefined8 FUN_1459bdcc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdcec FUN_1459bdcec body=31 status=ok
// SIG undefined FUN_1459bdcec(void)

undefined8 FUN_1459bdcec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdd18 FUN_1459bdd18 body=31 status=ok
// SIG undefined FUN_1459bdd18(void)

undefined8 FUN_1459bdd18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdd44 FUN_1459bdd44 body=31 status=ok
// SIG undefined FUN_1459bdd44(void)

undefined8 FUN_1459bdd44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdd70 FUN_1459bdd70 body=31 status=ok
// SIG undefined FUN_1459bdd70(void)

undefined8 FUN_1459bdd70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdd9c FUN_1459bdd9c body=31 status=ok
// SIG undefined FUN_1459bdd9c(void)

undefined8 FUN_1459bdd9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bddc8 FUN_1459bddc8 body=31 status=ok
// SIG undefined FUN_1459bddc8(void)

undefined8 FUN_1459bddc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bddf4 FUN_1459bddf4 body=31 status=ok
// SIG undefined FUN_1459bddf4(void)

undefined8 FUN_1459bddf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bde20 FUN_1459bde20 body=31 status=ok
// SIG undefined FUN_1459bde20(void)

undefined8 FUN_1459bde20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bde4c FUN_1459bde4c body=31 status=ok
// SIG undefined FUN_1459bde4c(void)

undefined8 FUN_1459bde4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bde78 FUN_1459bde78 body=31 status=ok
// SIG undefined FUN_1459bde78(void)

undefined8 FUN_1459bde78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdea4 FUN_1459bdea4 body=31 status=ok
// SIG undefined FUN_1459bdea4(void)

undefined8 FUN_1459bdea4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bded0 FUN_1459bded0 body=31 status=ok
// SIG undefined FUN_1459bded0(void)

undefined8 FUN_1459bded0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdefc FUN_1459bdefc body=31 status=ok
// SIG undefined FUN_1459bdefc(void)

undefined8 FUN_1459bdefc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdf28 FUN_1459bdf28 body=31 status=ok
// SIG undefined FUN_1459bdf28(void)

undefined8 FUN_1459bdf28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdf54 FUN_1459bdf54 body=31 status=ok
// SIG undefined FUN_1459bdf54(void)

undefined8 FUN_1459bdf54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdf80 FUN_1459bdf80 body=31 status=ok
// SIG undefined FUN_1459bdf80(void)

undefined8 FUN_1459bdf80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdfac FUN_1459bdfac body=31 status=ok
// SIG undefined FUN_1459bdfac(void)

undefined8 FUN_1459bdfac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bdfd8 FUN_1459bdfd8 body=31 status=ok
// SIG undefined FUN_1459bdfd8(void)

undefined8 FUN_1459bdfd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459be004 FUN_1459be004 body=31 status=ok
// SIG undefined FUN_1459be004(void)

undefined8 FUN_1459be004(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459be030 FUN_1459be030 body=31 status=ok
// SIG undefined FUN_1459be030(void)

undefined8 FUN_1459be030(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459be050 FUN_1459be050 body=12 status=ok
// SIG undefined FUN_1459be050(void)

void FUN_1459be050(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001459be059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1459be05c FUN_1459be05c body=31 status=ok
// SIG undefined FUN_1459be05c(void)

undefined8 FUN_1459be05c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459be086 FUN_1459be086 body=32 status=ok
// SIG undefined FUN_1459be086(void)

undefined8 * FUN_1459be086(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14a170230;
  return param_1;
}



// FUNCTION 1459be0b2 FUN_1459be0b2 body=32 status=ok
// SIG undefined FUN_1459be0b2(void)

undefined8 * FUN_1459be0b2(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14a1df3f0;
  return param_1;
}



// FUNCTION 1459be0d2 FUN_1459be0d2 body=12 status=ok
// SIG undefined FUN_1459be0d2(void)

void FUN_1459be0d2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001459be0db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1459be0de FUN_1459be0de body=31 status=ok
// SIG undefined FUN_1459be0de(void)

undefined8 FUN_1459be0de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459be0fe FUN_1459be0fe body=12 status=ok
// SIG undefined FUN_1459be0fe(void)

void FUN_1459be0fe(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001459be107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1459be10a FUN_1459be10a body=31 status=ok
// SIG undefined FUN_1459be10a(void)

undefined8 FUN_1459be10a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459be136 FUN_1459be136 body=31 status=ok
// SIG undefined FUN_1459be136(void)

undefined8 FUN_1459be136(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459be160 FUN_1459be160 body=32 status=ok
// SIG undefined FUN_1459be160(void)

undefined8 * FUN_1459be160(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a3b2bd0;
  return param_1;
}



// FUNCTION 1459be18c FUN_1459be18c body=32 status=ok
// SIG undefined FUN_1459be18c(void)

undefined8 * FUN_1459be18c(undefined8 *param_1)

{
  FUN_140307e00();
  *param_1 = &PTR_FUN_14a3b0cb0;
  return param_1;
}



// FUNCTION 1459be1b8 FUN_1459be1b8 body=31 status=ok
// SIG undefined FUN_1459be1b8(void)

undefined8 FUN_1459be1b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459be1e4 FUN_1459be1e4 body=31 status=ok
// SIG undefined FUN_1459be1e4(void)

undefined8 FUN_1459be1e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459be210 FUN_1459be210 body=31 status=ok
// SIG undefined FUN_1459be210(void)

undefined8 FUN_1459be210(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459be23c FUN_1459be23c body=31 status=ok
// SIG undefined FUN_1459be23c(void)

undefined8 FUN_1459be23c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459be268 FUN_1459be268 body=31 status=ok
// SIG undefined FUN_1459be268(void)

undefined8 FUN_1459be268(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459be292 FUN_1459be292 body=32 status=ok
// SIG undefined FUN_1459be292(void)

undefined8 * FUN_1459be292(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a5ca6f0;
  return param_1;
}



// FUNCTION 1459be2be FUN_1459be2be body=32 status=ok
// SIG undefined FUN_1459be2be(void)

undefined8 * FUN_1459be2be(undefined8 *param_1)

{
  FUN_1457f461c();
  *param_1 = &PTR_FUN_14a5d6600;
  return param_1;
}



// FUNCTION 1459be2ea FUN_1459be2ea body=32 status=ok
// SIG undefined FUN_1459be2ea(void)

undefined8 * FUN_1459be2ea(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a5e9620;
  return param_1;
}



// FUNCTION 1459be316 FUN_1459be316 body=32 status=ok
// SIG undefined FUN_1459be316(void)

undefined8 * FUN_1459be316(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a5f5210;
  return param_1;
}



// FUNCTION 1459be342 FUN_1459be342 body=32 status=ok
// SIG undefined FUN_1459be342(void)

undefined8 * FUN_1459be342(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a607df0;
  return param_1;
}



// FUNCTION 1459be36e FUN_1459be36e body=32 status=ok
// SIG undefined FUN_1459be36e(void)

undefined8 * FUN_1459be36e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a627ef0;
  return param_1;
}



// FUNCTION 1459be39a FUN_1459be39a body=32 status=ok
// SIG undefined FUN_1459be39a(void)

undefined8 * FUN_1459be39a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a634ff0;
  return param_1;
}



// FUNCTION 1459be3c6 FUN_1459be3c6 body=32 status=ok
// SIG undefined FUN_1459be3c6(void)

undefined8 * FUN_1459be3c6(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a635290;
  return param_1;
}



// FUNCTION 1459be3f2 FUN_1459be3f2 body=32 status=ok
// SIG undefined FUN_1459be3f2(void)

undefined8 * FUN_1459be3f2(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a635530;
  return param_1;
}



// FUNCTION 1459be41e FUN_1459be41e body=32 status=ok
// SIG undefined FUN_1459be41e(void)

undefined8 * FUN_1459be41e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a642ce0;
  return param_1;
}



// FUNCTION 1459be44a FUN_1459be44a body=32 status=ok
// SIG undefined FUN_1459be44a(void)

undefined8 * FUN_1459be44a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6399e0;
  return param_1;
}



// FUNCTION 1459be476 FUN_1459be476 body=32 status=ok
// SIG undefined FUN_1459be476(void)

undefined8 * FUN_1459be476(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a642a40;
  return param_1;
}



// FUNCTION 1459be4a2 FUN_1459be4a2 body=32 status=ok
// SIG undefined FUN_1459be4a2(void)

undefined8 * FUN_1459be4a2(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a642260;
  return param_1;
}



// FUNCTION 1459be4ce FUN_1459be4ce body=32 status=ok
// SIG undefined FUN_1459be4ce(void)

undefined8 * FUN_1459be4ce(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a642500;
  return param_1;
}



// FUNCTION 1459be4fa FUN_1459be4fa body=32 status=ok
// SIG undefined FUN_1459be4fa(void)

undefined8 * FUN_1459be4fa(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6427a0;
  return param_1;
}



// FUNCTION 1459be526 FUN_1459be526 body=32 status=ok
// SIG undefined FUN_1459be526(void)

undefined8 * FUN_1459be526(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a63b240;
  return param_1;
}



// FUNCTION 1459be552 FUN_1459be552 body=32 status=ok
// SIG undefined FUN_1459be552(void)

undefined8 * FUN_1459be552(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14a640b00;
  return param_1;
}



// FUNCTION 1459be57e FUN_1459be57e body=32 status=ok
// SIG undefined FUN_1459be57e(void)

undefined8 * FUN_1459be57e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a654bd0;
  return param_1;
}



// FUNCTION 1459be5aa FUN_1459be5aa body=32 status=ok
// SIG undefined FUN_1459be5aa(void)

undefined8 * FUN_1459be5aa(undefined8 *param_1)

{
  FUN_1403c12a8();
  *param_1 = &PTR_FUN_14a655130;
  return param_1;
}



// FUNCTION 1459be5d6 FUN_1459be5d6 body=32 status=ok
// SIG undefined FUN_1459be5d6(void)

undefined8 * FUN_1459be5d6(undefined8 *param_1)

{
  FUN_1459a4106();
  *param_1 = &PTR_FUN_14a691e90;
  return param_1;
}



// FUNCTION 1459be602 FUN_1459be602 body=32 status=ok
// SIG undefined FUN_1459be602(void)

undefined8 * FUN_1459be602(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a6935a0;
  return param_1;
}



// FUNCTION 1459be62e FUN_1459be62e body=32 status=ok
// SIG undefined FUN_1459be62e(void)

undefined8 * FUN_1459be62e(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a699920;
  return param_1;
}



// FUNCTION 1459be65a FUN_1459be65a body=32 status=ok
// SIG undefined FUN_1459be65a(void)

undefined8 * FUN_1459be65a(undefined8 *param_1)

{
  FUN_145891bee();
  *param_1 = &PTR_FUN_14a6a4d50;
  return param_1;
}



// FUNCTION 1459be686 FUN_1459be686 body=32 status=ok
// SIG undefined FUN_1459be686(void)

undefined8 * FUN_1459be686(undefined8 *param_1)

{
  FUN_145891bee();
  *param_1 = &PTR_FUN_14a6a58d0;
  return param_1;
}



// FUNCTION 1459be6b2 FUN_1459be6b2 body=32 status=ok
// SIG undefined FUN_1459be6b2(void)

undefined8 * FUN_1459be6b2(undefined8 *param_1)

{
  FUN_145891bee();
  *param_1 = &PTR_FUN_14a6a6170;
  return param_1;
}



// FUNCTION 1459be6de FUN_1459be6de body=32 status=ok
// SIG undefined FUN_1459be6de(void)

undefined8 * FUN_1459be6de(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6baec0;
  return param_1;
}



// FUNCTION 1459be70a FUN_1459be70a body=32 status=ok
// SIG undefined FUN_1459be70a(void)

undefined8 * FUN_1459be70a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6bbc60;
  return param_1;
}



// FUNCTION 1459be736 FUN_1459be736 body=32 status=ok
// SIG undefined FUN_1459be736(void)

undefined8 * FUN_1459be736(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6bcb10;
  return param_1;
}



// FUNCTION 1459be762 FUN_1459be762 body=32 status=ok
// SIG undefined FUN_1459be762(void)

undefined8 * FUN_1459be762(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6bcf20;
  return param_1;
}



// FUNCTION 1459be78e FUN_1459be78e body=32 status=ok
// SIG undefined FUN_1459be78e(void)

undefined8 * FUN_1459be78e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6bf160;
  return param_1;
}



// FUNCTION 1459be7ba FUN_1459be7ba body=32 status=ok
// SIG undefined FUN_1459be7ba(void)

undefined8 * FUN_1459be7ba(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6bf570;
  return param_1;
}



// FUNCTION 1459be7e6 FUN_1459be7e6 body=32 status=ok
// SIG undefined FUN_1459be7e6(void)

undefined8 * FUN_1459be7e6(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6c2b60;
  return param_1;
}



// FUNCTION 1459be812 FUN_1459be812 body=32 status=ok
// SIG undefined FUN_1459be812(void)

undefined8 * FUN_1459be812(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a6d4550;
  return param_1;
}



// FUNCTION 1459be83e FUN_1459be83e body=32 status=ok
// SIG undefined FUN_1459be83e(void)

undefined8 * FUN_1459be83e(undefined8 *param_1)

{
  FUN_14597bb9c();
  *param_1 = &PTR_FUN_14a6dd560;
  return param_1;
}



// FUNCTION 1459be86a FUN_1459be86a body=32 status=ok
// SIG undefined FUN_1459be86a(void)

undefined8 * FUN_1459be86a(undefined8 *param_1)

{
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6e2150;
  return param_1;
}



// FUNCTION 1459be896 FUN_1459be896 body=32 status=ok
// SIG undefined FUN_1459be896(void)

undefined8 * FUN_1459be896(undefined8 *param_1)

{
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6e7a30;
  return param_1;
}



// FUNCTION 1459be8c2 FUN_1459be8c2 body=32 status=ok
// SIG undefined FUN_1459be8c2(void)

undefined8 * FUN_1459be8c2(undefined8 *param_1)

{
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6f27c0;
  return param_1;
}



// FUNCTION 1459be8ee FUN_1459be8ee body=32 status=ok
// SIG undefined FUN_1459be8ee(void)

undefined8 * FUN_1459be8ee(undefined8 *param_1)

{
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6f2d10;
  return param_1;
}



// FUNCTION 1459be91a FUN_1459be91a body=32 status=ok
// SIG undefined FUN_1459be91a(void)

undefined8 * FUN_1459be91a(undefined8 *param_1)

{
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6f3980;
  return param_1;
}



// FUNCTION 1459be946 FUN_1459be946 body=32 status=ok
// SIG undefined FUN_1459be946(void)

undefined8 * FUN_1459be946(undefined8 *param_1)

{
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6f3e30;
  return param_1;
}



// FUNCTION 1459be972 FUN_1459be972 body=32 status=ok
// SIG undefined FUN_1459be972(void)

undefined8 * FUN_1459be972(undefined8 *param_1)

{
  FUN_140ffc8f2();
  *param_1 = &PTR_FUN_14a6f5260;
  return param_1;
}



// FUNCTION 1459be99e FUN_1459be99e body=32 status=ok
// SIG undefined FUN_1459be99e(void)

undefined8 * FUN_1459be99e(undefined8 *param_1)

{
  FUN_145df40d2();
  *param_1 = &PTR_FUN_14a6fd580;
  return param_1;
}



// FUNCTION 1459be9ca FUN_1459be9ca body=32 status=ok
// SIG undefined FUN_1459be9ca(void)

undefined8 * FUN_1459be9ca(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a7002b0;
  return param_1;
}



// FUNCTION 1459be9f6 FUN_1459be9f6 body=32 status=ok
// SIG undefined FUN_1459be9f6(void)

undefined8 * FUN_1459be9f6(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a722060;
  return param_1;
}



// FUNCTION 1459bea22 FUN_1459bea22 body=32 status=ok
// SIG undefined FUN_1459bea22(void)

undefined8 * FUN_1459bea22(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a730080;
  return param_1;
}



// FUNCTION 1459bea4e FUN_1459bea4e body=32 status=ok
// SIG undefined FUN_1459bea4e(void)

undefined8 * FUN_1459bea4e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a759830;
  return param_1;
}



// FUNCTION 1459bea7a FUN_1459bea7a body=32 status=ok
// SIG undefined FUN_1459bea7a(void)

undefined8 * FUN_1459bea7a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a770d80;
  return param_1;
}



// FUNCTION 1459beaa6 FUN_1459beaa6 body=32 status=ok
// SIG undefined FUN_1459beaa6(void)

undefined8 * FUN_1459beaa6(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a773a60;
  return param_1;
}



// FUNCTION 1459bead2 FUN_1459bead2 body=32 status=ok
// SIG undefined FUN_1459bead2(void)

undefined8 * FUN_1459bead2(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a773de0;
  return param_1;
}



// FUNCTION 1459beafe FUN_1459beafe body=31 status=ok
// SIG undefined FUN_1459beafe(void)

undefined8 FUN_1459beafe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459beb28 FUN_1459beb28 body=32 status=ok
// SIG undefined FUN_1459beb28(void)

undefined8 * FUN_1459beb28(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14abb63f0;
  return param_1;
}



// FUNCTION 1459beb54 FUN_1459beb54 body=32 status=ok
// SIG undefined FUN_1459beb54(void)

undefined8 * FUN_1459beb54(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14abb6930;
  return param_1;
}



// FUNCTION 1459beb80 FUN_1459beb80 body=32 status=ok
// SIG undefined FUN_1459beb80(void)

undefined8 * FUN_1459beb80(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14abb6690;
  return param_1;
}



// FUNCTION 1459bebac FUN_1459bebac body=32 status=ok
// SIG undefined FUN_1459bebac(void)

undefined8 * FUN_1459bebac(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14abc84b0;
  return param_1;
}



// FUNCTION 1459bebd8 FUN_1459bebd8 body=32 status=ok
// SIG undefined FUN_1459bebd8(void)

undefined8 * FUN_1459bebd8(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14abcc190;
  return param_1;
}



// FUNCTION 1459bec04 FUN_1459bec04 body=32 status=ok
// SIG undefined FUN_1459bec04(void)

undefined8 * FUN_1459bec04(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14abce880;
  return param_1;
}



// FUNCTION 1459bec30 FUN_1459bec30 body=32 status=ok
// SIG undefined FUN_1459bec30(void)

undefined8 * FUN_1459bec30(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14abcf3b0;
  return param_1;
}



// FUNCTION 1459bec5c FUN_1459bec5c body=32 status=ok
// SIG undefined FUN_1459bec5c(void)

undefined8 * FUN_1459bec5c(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14aca3dc0;
  return param_1;
}



// FUNCTION 1459bec7c FUN_1459bec7c body=40 status=ok
// SIG undefined FUN_1459bec7c(void)

undefined8 FUN_1459bec7c(undefined8 param_1,int param_2)

{
  FUN_1459beca4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459beca4 FUN_1459beca4 body=78 status=ok
// SIG undefined FUN_1459beca4(void)

void FUN_1459beca4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad92e60;
  FUN_1459becf2(param_1 + 9);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ad92a20;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459becf2 FUN_1459becf2 body=97 status=ok
// SIG undefined FUN_1459becf2(void)

void FUN_1459becf2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459bed5e FUN_1459bed5e body=32 status=ok
// SIG undefined FUN_1459bed5e(void)

undefined8 * FUN_1459bed5e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14afdbe40;
  return param_1;
}



// FUNCTION 1459bed8a FUN_1459bed8a body=32 status=ok
// SIG undefined FUN_1459bed8a(void)

undefined8 * FUN_1459bed8a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14afdc0e0;
  return param_1;
}



// FUNCTION 1459bedb6 FUN_1459bedb6 body=32 status=ok
// SIG undefined FUN_1459bedb6(void)

undefined8 * FUN_1459bedb6(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b022c40;
  return param_1;
}



// FUNCTION 1459bede2 FUN_1459bede2 body=32 status=ok
// SIG undefined FUN_1459bede2(void)

undefined8 * FUN_1459bede2(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14b069b60;
  return param_1;
}



// FUNCTION 1459bee0e FUN_1459bee0e body=32 status=ok
// SIG undefined FUN_1459bee0e(void)

undefined8 * FUN_1459bee0e(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b14c2c0;
  return param_1;
}



// FUNCTION 1459bee3a FUN_1459bee3a body=32 status=ok
// SIG undefined FUN_1459bee3a(void)

undefined8 * FUN_1459bee3a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b14c560;
  return param_1;
}



// FUNCTION 1459bee66 FUN_1459bee66 body=32 status=ok
// SIG undefined FUN_1459bee66(void)

undefined8 * FUN_1459bee66(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14b157b40;
  return param_1;
}



// FUNCTION 1459bee92 FUN_1459bee92 body=32 status=ok
// SIG undefined FUN_1459bee92(void)

undefined8 * FUN_1459bee92(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14b1ce900;
  return param_1;
}



// FUNCTION 1459beebe FUN_1459beebe body=32 status=ok
// SIG undefined FUN_1459beebe(void)

undefined8 * FUN_1459beebe(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14b24cfe0;
  return param_1;
}



// FUNCTION 1459beeea FUN_1459beeea body=32 status=ok
// SIG undefined FUN_1459beeea(void)

undefined8 * FUN_1459beeea(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14b26b600;
  return param_1;
}



// FUNCTION 1459bef16 FUN_1459bef16 body=32 status=ok
// SIG undefined FUN_1459bef16(void)

undefined8 * FUN_1459bef16(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14b26bb80;
  return param_1;
}



// FUNCTION 1459bef42 FUN_1459bef42 body=32 status=ok
// SIG undefined FUN_1459bef42(void)

undefined8 * FUN_1459bef42(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14b26b8a0;
  return param_1;
}



// FUNCTION 1459bef6e FUN_1459bef6e body=32 status=ok
// SIG undefined FUN_1459bef6e(void)

undefined8 * FUN_1459bef6e(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b339ae0;
  return param_1;
}



// FUNCTION 1459bef9a FUN_1459bef9a body=32 status=ok
// SIG undefined FUN_1459bef9a(void)

undefined8 * FUN_1459bef9a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b3af8b0;
  return param_1;
}



// FUNCTION 1459befc6 FUN_1459befc6 body=32 status=ok
// SIG undefined FUN_1459befc6(void)

undefined8 * FUN_1459befc6(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14b441280;
  return param_1;
}



// FUNCTION 1459beff2 FUN_1459beff2 body=32 status=ok
// SIG undefined FUN_1459beff2(void)

undefined8 * FUN_1459beff2(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b442430;
  return param_1;
}



// FUNCTION 1459bf012 FUN_1459bf012 body=24 status=ok
// SIG undefined FUN_1459bf012(void)

void FUN_1459bf012(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001459bf026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1459bf02a FUN_1459bf02a body=38 status=ok
// SIG undefined FUN_1459bf02a(void)

undefined8 FUN_1459bf02a(undefined8 param_1,int param_2)

{
  FUN_1459bf050();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf050 FUN_1459bf050 body=110 status=ok
// SIG undefined FUN_1459bf050(void)

void FUN_1459bf050(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4aa0e0;
  param_1[4] = &PTR_FUN_14b4aa100;
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_14114f6be(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001459bf0ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1459bf0ca FUN_1459bf0ca body=32 status=ok
// SIG undefined FUN_1459bf0ca(void)

undefined8 * FUN_1459bf0ca(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14b4d9810;
  return param_1;
}



// FUNCTION 1459bf0ea FUN_1459bf0ea body=40 status=ok
// SIG undefined FUN_1459bf0ea(void)

undefined8 FUN_1459bf0ea(undefined8 param_1,int param_2)

{
  FUN_1459bf112();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf112 FUN_1459bf112 body=126 status=ok
// SIG undefined FUN_1459bf112(void)

void FUN_1459bf112(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5782a0;
  param_1[5] = &PTR_FUN_14b5785f0;
  param_1[0x52] = &PTR_LAB_14b578630;
  *(undefined4 *)(param_1 + 0x174) = 0;
  if (param_1[0x173] != 0) {
    FUN_1400020a8();
  }
  FUN_1459bf192(param_1 + 0x16b);
  if (param_1[0x168] != 0) {
    FUN_1400020a8();
  }
  FUN_14584ba72(param_1);
  return;
}



// FUNCTION 1459bf192 FUN_1459bf192 body=55 status=ok
// SIG undefined FUN_1459bf192(void)

void FUN_1459bf192(longlong *param_1)

{
  FUN_1459bf1ca(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459bf1ca FUN_1459bf1ca body=123 status=ok
// SIG undefined FUN_1459bf1ca(void)

void FUN_1459bf1ca(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1459bf250 FUN_1459bf250 body=32 status=ok
// SIG undefined FUN_1459bf250(void)

undefined8 * FUN_1459bf250(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14b653610;
  return param_1;
}



// FUNCTION 1459bf27c FUN_1459bf27c body=32 status=ok
// SIG undefined FUN_1459bf27c(void)

undefined8 * FUN_1459bf27c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b6aefb0;
  return param_1;
}



// FUNCTION 1459bf2a8 FUN_1459bf2a8 body=32 status=ok
// SIG undefined FUN_1459bf2a8(void)

undefined8 * FUN_1459bf2a8(undefined8 *param_1)

{
  FUN_1458befb8();
  *param_1 = &PTR_FUN_14b6d6070;
  return param_1;
}



// FUNCTION 1459bf2d4 FUN_1459bf2d4 body=32 status=ok
// SIG undefined FUN_1459bf2d4(void)

undefined8 * FUN_1459bf2d4(undefined8 *param_1)

{
  FUN_1458bef8c();
  *param_1 = &PTR_FUN_14b71d3a0;
  return param_1;
}



// FUNCTION 1459bf302 FUN_1459bf302 body=72 status=ok
// SIG undefined FUN_1459bf302(void)

undefined8 * FUN_1459bf302(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7a7a10;
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_14075380c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf356 FUN_1459bf356 body=32 status=ok
// SIG undefined FUN_1459bf356(void)

undefined8 * FUN_1459bf356(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14b7f25e0;
  return param_1;
}



// FUNCTION 1459bf382 FUN_1459bf382 body=32 status=ok
// SIG undefined FUN_1459bf382(void)

undefined8 * FUN_1459bf382(undefined8 *param_1)

{
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14b7f2300;
  return param_1;
}



// FUNCTION 1459bf3aa FUN_1459bf3aa body=120 status=ok
// SIG undefined FUN_1459bf3aa(void)

undefined8 FUN_1459bf3aa(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  lVar1 = DAT_14cbd3868;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbd3868 == 0) {
    uVar2 = 0;
  }
  else {
    local_48 = param_1;
    FUN_1446dcdd4(local_40);
    uVar2 = FUN_144837462(lVar1,local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459bf42e FUN_1459bf42e body=32 status=ok
// SIG undefined FUN_1459bf42e(void)

undefined8 * FUN_1459bf42e(undefined8 *param_1)

{
  FUN_140ecae36();
  *param_1 = &PTR_FUN_14b85ac80;
  return param_1;
}



// FUNCTION 1459bf45c FUN_1459bf45c body=72 status=ok
// SIG undefined FUN_1459bf45c(void)

undefined8 * FUN_1459bf45c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5ecae0;
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_14075380c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf4a4 FUN_1459bf4a4 body=12 status=ok
// SIG undefined FUN_1459bf4a4(void)

void FUN_1459bf4a4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001459bf4ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1459bf4b0 FUN_1459bf4b0 body=31 status=ok
// SIG undefined FUN_1459bf4b0(void)

undefined8 FUN_1459bf4b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf4d0 FUN_1459bf4d0 body=45 status=ok
// SIG undefined FUN_1459bf4d0(void)

void FUN_1459bf4d0(longlong param_1)

{
  FUN_1459bf4fd(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459bf4fd FUN_1459bf4fd body=41 status=ok
// SIG undefined FUN_1459bf4fd(void)

void FUN_1459bf4fd(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457ae28c(param_1);
    param_1 = param_1 + 0xd8;
  }
  return;
}



// FUNCTION 1459bf532 FUN_1459bf532 body=32 status=ok
// SIG undefined FUN_1459bf532(void)

undefined8 * FUN_1459bf532(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ba827d0;
  return param_1;
}



// FUNCTION 1459bf55e FUN_1459bf55e body=31 status=ok
// SIG undefined FUN_1459bf55e(void)

undefined8 FUN_1459bf55e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf58a FUN_1459bf58a body=31 status=ok
// SIG undefined FUN_1459bf58a(void)

undefined8 FUN_1459bf58a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf5b6 FUN_1459bf5b6 body=31 status=ok
// SIG undefined FUN_1459bf5b6(void)

undefined8 FUN_1459bf5b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf5e2 FUN_1459bf5e2 body=31 status=ok
// SIG undefined FUN_1459bf5e2(void)

undefined8 FUN_1459bf5e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf60e FUN_1459bf60e body=31 status=ok
// SIG undefined FUN_1459bf60e(void)

undefined8 FUN_1459bf60e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf63a FUN_1459bf63a body=31 status=ok
// SIG undefined FUN_1459bf63a(void)

undefined8 FUN_1459bf63a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf666 FUN_1459bf666 body=31 status=ok
// SIG undefined FUN_1459bf666(void)

undefined8 FUN_1459bf666(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf692 FUN_1459bf692 body=31 status=ok
// SIG undefined FUN_1459bf692(void)

undefined8 FUN_1459bf692(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf6be FUN_1459bf6be body=31 status=ok
// SIG undefined FUN_1459bf6be(void)

undefined8 FUN_1459bf6be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf6ea FUN_1459bf6ea body=31 status=ok
// SIG undefined FUN_1459bf6ea(void)

undefined8 FUN_1459bf6ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf716 FUN_1459bf716 body=31 status=ok
// SIG undefined FUN_1459bf716(void)

undefined8 FUN_1459bf716(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf742 FUN_1459bf742 body=31 status=ok
// SIG undefined FUN_1459bf742(void)

undefined8 FUN_1459bf742(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf76e FUN_1459bf76e body=31 status=ok
// SIG undefined FUN_1459bf76e(void)

undefined8 FUN_1459bf76e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf79a FUN_1459bf79a body=31 status=ok
// SIG undefined FUN_1459bf79a(void)

undefined8 FUN_1459bf79a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf7c6 FUN_1459bf7c6 body=31 status=ok
// SIG undefined FUN_1459bf7c6(void)

undefined8 FUN_1459bf7c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf7f2 FUN_1459bf7f2 body=31 status=ok
// SIG undefined FUN_1459bf7f2(void)

undefined8 FUN_1459bf7f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf81e FUN_1459bf81e body=31 status=ok
// SIG undefined FUN_1459bf81e(void)

undefined8 FUN_1459bf81e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf84a FUN_1459bf84a body=31 status=ok
// SIG undefined FUN_1459bf84a(void)

undefined8 FUN_1459bf84a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf876 FUN_1459bf876 body=31 status=ok
// SIG undefined FUN_1459bf876(void)

undefined8 FUN_1459bf876(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf8a2 FUN_1459bf8a2 body=31 status=ok
// SIG undefined FUN_1459bf8a2(void)

undefined8 FUN_1459bf8a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf8ce FUN_1459bf8ce body=31 status=ok
// SIG undefined FUN_1459bf8ce(void)

undefined8 FUN_1459bf8ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf8fa FUN_1459bf8fa body=31 status=ok
// SIG undefined FUN_1459bf8fa(void)

undefined8 FUN_1459bf8fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf926 FUN_1459bf926 body=31 status=ok
// SIG undefined FUN_1459bf926(void)

undefined8 FUN_1459bf926(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf952 FUN_1459bf952 body=31 status=ok
// SIG undefined FUN_1459bf952(void)

undefined8 FUN_1459bf952(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf97e FUN_1459bf97e body=31 status=ok
// SIG undefined FUN_1459bf97e(void)

undefined8 FUN_1459bf97e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf9aa FUN_1459bf9aa body=31 status=ok
// SIG undefined FUN_1459bf9aa(void)

undefined8 FUN_1459bf9aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bf9d6 FUN_1459bf9d6 body=31 status=ok
// SIG undefined FUN_1459bf9d6(void)

undefined8 FUN_1459bf9d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfa02 FUN_1459bfa02 body=31 status=ok
// SIG undefined FUN_1459bfa02(void)

undefined8 FUN_1459bfa02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfa2e FUN_1459bfa2e body=31 status=ok
// SIG undefined FUN_1459bfa2e(void)

undefined8 FUN_1459bfa2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfa5a FUN_1459bfa5a body=31 status=ok
// SIG undefined FUN_1459bfa5a(void)

undefined8 FUN_1459bfa5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfa86 FUN_1459bfa86 body=31 status=ok
// SIG undefined FUN_1459bfa86(void)

undefined8 FUN_1459bfa86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfab2 FUN_1459bfab2 body=31 status=ok
// SIG undefined FUN_1459bfab2(void)

undefined8 FUN_1459bfab2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfade FUN_1459bfade body=31 status=ok
// SIG undefined FUN_1459bfade(void)

undefined8 FUN_1459bfade(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfb0a FUN_1459bfb0a body=31 status=ok
// SIG undefined FUN_1459bfb0a(void)

undefined8 FUN_1459bfb0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfb36 FUN_1459bfb36 body=31 status=ok
// SIG undefined FUN_1459bfb36(void)

undefined8 FUN_1459bfb36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfb62 FUN_1459bfb62 body=31 status=ok
// SIG undefined FUN_1459bfb62(void)

undefined8 FUN_1459bfb62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfb8e FUN_1459bfb8e body=31 status=ok
// SIG undefined FUN_1459bfb8e(void)

undefined8 FUN_1459bfb8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfbba FUN_1459bfbba body=31 status=ok
// SIG undefined FUN_1459bfbba(void)

undefined8 FUN_1459bfbba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfbe6 FUN_1459bfbe6 body=31 status=ok
// SIG undefined FUN_1459bfbe6(void)

undefined8 FUN_1459bfbe6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfc12 FUN_1459bfc12 body=31 status=ok
// SIG undefined FUN_1459bfc12(void)

undefined8 FUN_1459bfc12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfc3e FUN_1459bfc3e body=31 status=ok
// SIG undefined FUN_1459bfc3e(void)

undefined8 FUN_1459bfc3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfc6a FUN_1459bfc6a body=31 status=ok
// SIG undefined FUN_1459bfc6a(void)

undefined8 FUN_1459bfc6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfc96 FUN_1459bfc96 body=31 status=ok
// SIG undefined FUN_1459bfc96(void)

undefined8 FUN_1459bfc96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfcc2 FUN_1459bfcc2 body=31 status=ok
// SIG undefined FUN_1459bfcc2(void)

undefined8 FUN_1459bfcc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfcee FUN_1459bfcee body=31 status=ok
// SIG undefined FUN_1459bfcee(void)

undefined8 FUN_1459bfcee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459bfd1a FUN_1459bfd1a body=31 status=ok
// SIG undefined FUN_1459bfd1a(void)

undefined8 FUN_1459bfd1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


